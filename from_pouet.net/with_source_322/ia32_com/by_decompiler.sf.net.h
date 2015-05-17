// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_322/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr (struct "Globals"))
  OrigDataType: (ptr (struct "Globals"))
T_2: (in bios_video_set_mode : ptr32)
  Class: Eq_2
  DataType: (ptr (fn T_6 (T_5)))
  OrigDataType: (ptr (fn T_6 (T_5)))
T_3: (in signature of bios_video_set_mode : void)
  Class: Eq_2
  DataType: 
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
T_7: (in ah_4 : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_8: (in 0x00 : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_9: (in ds : selector)
  Class: Eq_9
  DataType: (ptr (segment (2F6 T_11 t02F6) (2F7 T_16 t02F7) (2F8 T_43 t02F8) (6308 T_90 t6308) (C2FE T_102 tC2FE)))
  OrigDataType: (ptr (segment (2F6 T_11 t02F6) (2F7 T_16 t02F7) (2F8 T_43 t02F8) (6308 T_90 t6308) (C2FE T_102 tC2FE)))
T_10: (in 0x02F6 : word16)
  Class: Eq_10
  DataType: (memptr T_9 (struct (0 T_11 t0000)))
  OrigDataType: (memptr T_9 (struct (0 T_11 t0000)))
T_11: (in Mem0[ds:0x02F6:byte] : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_12: (in 0x01 : byte)
  Class: Eq_12
  DataType: byte
  OrigDataType: byte
T_13: (in Mem0[ds:0x02F6:byte] + 0x01 : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_14: (in Mem14[ds:0x02F6:byte] : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_15: (in 0x02F7 : word16)
  Class: Eq_15
  DataType: (memptr T_9 (struct (0 T_16 t0000)))
  OrigDataType: (memptr T_9 (struct (0 T_16 t0000)))
T_16: (in Mem14[ds:0x02F7:byte] : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_17: (in 0x01 : byte)
  Class: Eq_17
  DataType: byte
  OrigDataType: byte
T_18: (in Mem14[ds:0x02F7:byte] + 0x01 : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_19: (in Mem16[ds:0x02F7:byte] : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_20: (in fn0C00_02E0 : ptr32)
  Class: Eq_20
  DataType: (ptr (fn T_27 (T_25, T_9, T_26)))
  OrigDataType: (ptr (fn T_27 (T_25, T_9, T_26)))
T_21: (in signature of fn0C00_02E0 : void)
  Class: Eq_20
  DataType: 
  OrigDataType: 
T_22: (in cl : byte)
  Class: Eq_22
  DataType: byte
  OrigDataType: byte
T_23: (in ds : selector)
  Class: Eq_9
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_24: (in clOut : ptr16)
  Class: Eq_24
  DataType: ptr16
  OrigDataType: ptr16
T_25: (in cl : byte)
  Class: Eq_22
  DataType: byte
  OrigDataType: byte
T_26: (in out cl : ptr16)
  Class: Eq_24
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_27: (in fn0C00_02E0(cl, ds, out cl) : byte)
  Class: Eq_27
  DataType: byte
  OrigDataType: byte
T_28: (in 0x02F6 : word16)
  Class: Eq_28
  DataType: (memptr T_9 (struct (0 T_29 t0000)))
  OrigDataType: (memptr T_9 (struct (0 T_29 t0000)))
T_29: (in Mem16[ds:0x02F6:byte] : byte)
  Class: Eq_11
  DataType: bcu8
  OrigDataType: bcu8
T_30: (in 0x3F : byte)
  Class: Eq_11
  DataType: bcu8
  OrigDataType: bcu8
T_31: (in Mem16[ds:0x02F6:byte] <u 0x3F : bool)
  Class: Eq_31
  DataType: bool
  OrigDataType: bool
T_32: (in 0x02F7 : word16)
  Class: Eq_32
  DataType: (memptr T_9 (struct (0 T_16 t0000)))
  OrigDataType: (memptr T_9 (struct (0 T_16 t0000)))
T_33: (in Mem16[ds:0x02F7:byte] : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_34: (in 0x01 : byte)
  Class: Eq_34
  DataType: byte
  OrigDataType: byte
T_35: (in Mem16[ds:0x02F7:byte] - 0x01 : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_36: (in Mem24[ds:0x02F7:byte] : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_37: (in 0x02F6 : word16)
  Class: Eq_37
  DataType: (memptr T_9 (struct (0 T_11 t0000)))
  OrigDataType: (memptr T_9 (struct (0 T_11 t0000)))
T_38: (in Mem24[ds:0x02F6:byte] : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_39: (in 0x01 : byte)
  Class: Eq_39
  DataType: byte
  OrigDataType: byte
T_40: (in Mem24[ds:0x02F6:byte] - 0x01 : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_41: (in Mem26[ds:0x02F6:byte] : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_42: (in 0x02F8 : word16)
  Class: Eq_42
  DataType: (memptr T_9 (struct (0 T_43 t0000)))
  OrigDataType: (memptr T_9 (struct (0 T_43 t0000)))
T_43: (in Mem26[ds:0x02F8:byte] : byte)
  Class: Eq_43
  DataType: byte
  OrigDataType: byte
T_44: (in 0x01 : byte)
  Class: Eq_44
  DataType: byte
  OrigDataType: byte
T_45: (in Mem26[ds:0x02F8:byte] + 0x01 : byte)
  Class: Eq_43
  DataType: byte
  OrigDataType: byte
T_46: (in Mem28[ds:0x02F8:byte] : byte)
  Class: Eq_43
  DataType: byte
  OrigDataType: byte
T_47: (in fn0C00_02E0 : ptr32)
  Class: Eq_20
  DataType: (ptr (fn T_49 (T_25, T_9, T_48)))
  OrigDataType: (ptr (fn T_49 (T_25, T_9, T_48)))
T_48: (in out cl : ptr16)
  Class: Eq_24
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_49: (in fn0C00_02E0(cl, ds, out cl) : byte)
  Class: Eq_49
  DataType: byte
  OrigDataType: byte
T_50: (in 0x02F6 : word16)
  Class: Eq_50
  DataType: (memptr T_9 (struct (0 T_51 t0000)))
  OrigDataType: (memptr T_9 (struct (0 T_51 t0000)))
T_51: (in Mem28[ds:0x02F6:byte] : byte)
  Class: Eq_11
  DataType: bcu8
  OrigDataType: bcu8
T_52: (in 0x2D : byte)
  Class: Eq_11
  DataType: bcu8
  OrigDataType: bcu8
T_53: (in Mem28[ds:0x02F6:byte] >u 0x2D : bool)
  Class: Eq_53
  DataType: bool
  OrigDataType: bool
T_54: (in 0x02F8 : word16)
  Class: Eq_54
  DataType: (memptr T_9 (struct (0 T_43 t0000)))
  OrigDataType: (memptr T_9 (struct (0 T_43 t0000)))
T_55: (in Mem28[ds:0x02F8:byte] : byte)
  Class: Eq_43
  DataType: byte
  OrigDataType: byte
T_56: (in 0x01 : byte)
  Class: Eq_56
  DataType: byte
  OrigDataType: byte
T_57: (in Mem28[ds:0x02F8:byte] + 0x01 : byte)
  Class: Eq_43
  DataType: byte
  OrigDataType: byte
T_58: (in Mem36[ds:0x02F8:byte] : byte)
  Class: Eq_43
  DataType: byte
  OrigDataType: byte
T_59: (in fn0C00_02E0 : ptr32)
  Class: Eq_20
  DataType: (ptr (fn T_61 (T_25, T_9, T_60)))
  OrigDataType: (ptr (fn T_61 (T_25, T_9, T_60)))
T_60: (in out cl : ptr16)
  Class: Eq_24
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_61: (in fn0C00_02E0(cl, ds, out cl) : byte)
  Class: Eq_61
  DataType: byte
  OrigDataType: byte
T_62: (in 0x02F8 : word16)
  Class: Eq_62
  DataType: (memptr T_9 (struct (0 T_63 t0000)))
  OrigDataType: (memptr T_9 (struct (0 T_63 t0000)))
T_63: (in Mem36[ds:0x02F8:byte] : byte)
  Class: Eq_43
  DataType: bcu8
  OrigDataType: bcu8
T_64: (in 0x3F : byte)
  Class: Eq_43
  DataType: bcu8
  OrigDataType: bcu8
T_65: (in Mem36[ds:0x02F8:byte] <u 0x3F : bool)
  Class: Eq_65
  DataType: bool
  OrigDataType: bool
T_66: (in cl_84 : byte)
  Class: Eq_22
  DataType: byte
  OrigDataType: byte
T_67: (in fn0C00_02E0 : ptr32)
  Class: Eq_20
  DataType: (ptr (fn T_69 (T_66, T_9, T_68)))
  OrigDataType: (ptr (fn T_69 (T_66, T_9, T_68)))
T_68: (in out cl : ptr16)
  Class: Eq_24
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_69: (in fn0C00_02E0(cl_84, ds, out cl) : byte)
  Class: Eq_69
  DataType: byte
  OrigDataType: byte
T_70: (in cx_45 : word16)
  Class: Eq_70
  DataType: word16
  OrigDataType: word16
T_71: (in 0x0800 : word16)
  Class: Eq_70
  DataType: word16
  OrigDataType: word16
T_72: (in fn0C00_0227 : ptr32)
  Class: Eq_72
  DataType: (ptr (fn T_79 (T_70, T_7, T_9, T_78)))
  OrigDataType: (ptr (fn T_79 (T_70, T_7, T_9, T_78)))
T_73: (in signature of fn0C00_0227 : void)
  Class: Eq_72
  DataType: 
  OrigDataType: 
T_74: (in cx : word16)
  Class: Eq_70
  DataType: ui16
  OrigDataType: ui16
T_75: (in ah : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_76: (in ds : selector)
  Class: Eq_9
  DataType: (ptr (segment (2FE (arr T_342) a02FE) (12FE (arr T_343) a12FE) (32FE (arr T_341) a32FE) (6309 T_168 t6309)))
  OrigDataType: (ptr (segment (2FE (arr T_342) a02FE) (12FE (arr T_343) a12FE) (32FE (arr T_341) a32FE) (6309 T_168 t6309)))
T_77: (in ahOut : ptr16)
  Class: Eq_77
  DataType: ptr16
  OrigDataType: ptr16
T_78: (in out ah_4 : ptr16)
  Class: Eq_77
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_79: (in fn0C00_0227(cx_45, ah_4, ds, out ah_4) : word16)
  Class: Eq_79
  DataType: word16
  OrigDataType: word16
T_80: (in 0x0001 : word16)
  Class: Eq_80
  DataType: word16
  OrigDataType: word16
T_81: (in cx_45 - 0x0001 : word16)
  Class: Eq_70
  DataType: word16
  OrigDataType: word16
T_82: (in 0x0000 : word16)
  Class: Eq_70
  DataType: word16
  OrigDataType: word16
T_83: (in cx_45 != 0x0000 : bool)
  Class: Eq_83
  DataType: bool
  OrigDataType: bool
T_84: (in 0x1000 : word16)
  Class: Eq_84
  DataType: word16
  OrigDataType: word16
T_85: (in ss : selector)
  Class: Eq_85
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_86: (in fp : ptr16)
  Class: Eq_86
  DataType: (union ((union (ptr16 u0) ((memptr T_85 (struct (FFFFFFFE T_128 tFFFFFFFE))) u1)) u0) ((memptr T_85 (struct (FFFFFFFE T_89 tFFFFFFFE))) u1))
  OrigDataType: (union ((union (ptr16 u0) ((memptr T_85 (struct (FFFFFFFE T_128 tFFFFFFFE))) u1)) u0) ((memptr T_85 (struct (FFFFFFFE T_89 tFFFFFFFE))) u1))
T_87: (in 0x0002 : word16)
  Class: Eq_87
  DataType: word16
  OrigDataType: word16
T_88: (in fp - 0x0002 : word16)
  Class: Eq_88
  DataType: word16
  OrigDataType: word16
T_89: (in Mem59[ss:fp - 0x0002:word16] : word16)
  Class: Eq_84
  DataType: word16
  OrigDataType: word16
T_90: (in 0x00 : byte)
  Class: Eq_90
  DataType: byte
  OrigDataType: byte
T_91: (in 0x6308 : word16)
  Class: Eq_91
  DataType: (memptr T_9 (struct (0 T_92 t0000)))
  OrigDataType: (memptr T_9 (struct (0 T_92 t0000)))
T_92: (in Mem63[ds:0x6308:byte] : byte)
  Class: Eq_90
  DataType: byte
  OrigDataType: byte
T_93: (in ah_64 : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_94: (in fn0C00_0273 : ptr32)
  Class: Eq_94
  DataType: (ptr (fn T_101 (T_99, T_100, T_9)))
  OrigDataType: (ptr (fn T_101 (T_99, T_100, T_9)))
T_95: (in signature of fn0C00_0273 : void)
  Class: Eq_94
  DataType: 
  OrigDataType: 
T_96: (in si : word16)
  Class: Eq_96
  DataType: word16
  OrigDataType: word16
T_97: (in es : selector)
  Class: Eq_97
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_98: (in ds : selector)
  Class: Eq_9
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_99: (in 0xA000 : word16)
  Class: Eq_96
  DataType: word16
  OrigDataType: word16
T_100: (in 0xA000 : selector)
  Class: Eq_97
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_101: (in fn0C00_0273(0xA000, 0xA000, ds) : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_102: (in v21_66 : word16)
  Class: Eq_102
  DataType: word16
  OrigDataType: word16
T_103: (in 0xC2FE : word16)
  Class: Eq_103
  DataType: (memptr T_9 (struct (0 T_104 t0000)))
  OrigDataType: (memptr T_9 (struct (0 T_104 t0000)))
T_104: (in Mem63[ds:0xC2FE:word16] : word16)
  Class: Eq_102
  DataType: word16
  OrigDataType: word16
T_105: (in 0x0001 : word16)
  Class: Eq_105
  DataType: word16
  OrigDataType: word16
T_106: (in Mem63[ds:0xC2FE:word16] - 0x0001 : word16)
  Class: Eq_102
  DataType: word16
  OrigDataType: word16
T_107: (in 0xC2FE : word16)
  Class: Eq_107
  DataType: (memptr T_9 (struct (0 T_108 t0000)))
  OrigDataType: (memptr T_9 (struct (0 T_108 t0000)))
T_108: (in Mem67[ds:0xC2FE:word16] : word16)
  Class: Eq_102
  DataType: word16
  OrigDataType: word16
T_109: (in si_61 : word16)
  Class: Eq_109
  DataType: (memptr T_9 (struct (32FE T_115 t32FE)))
  OrigDataType: (memptr T_9 (struct (32FE T_115 t32FE)))
T_110: (in 0xA000 : word16)
  Class: Eq_109
  DataType: word16
  OrigDataType: word16
T_111: (in 0x0000 : word16)
  Class: Eq_102
  DataType: word16
  OrigDataType: word16
T_112: (in v21_66 != 0x0000 : bool)
  Class: Eq_112
  DataType: bool
  OrigDataType: bool
T_113: (in 0x32FE : word16)
  Class: Eq_113
  DataType: word16
  OrigDataType: word16
T_114: (in si_61 + 0x32FE : word16)
  Class: Eq_114
  DataType: word16
  OrigDataType: word16
T_115: (in Mem67[ds:si_61 + 0x32FE:byte] : byte)
  Class: Eq_115
  DataType: byte
  OrigDataType: byte
T_116: (in 0xFF : byte)
  Class: Eq_115
  DataType: byte
  OrigDataType: byte
T_117: (in Mem67[ds:si_61 + 0x32FE:byte] == 0xFF : bool)
  Class: Eq_117
  DataType: bool
  OrigDataType: bool
T_118: (in ah_82 : byte)
  Class: Eq_118
  DataType: byte
  OrigDataType: byte
T_119: (in fn0C00_0227 : ptr32)
  Class: Eq_72
  DataType: (ptr (fn T_122 (T_120, T_93, T_9, T_121)))
  OrigDataType: (ptr (fn T_122 (T_120, T_93, T_9, T_121)))
T_120: (in 0x0800 : word16)
  Class: Eq_70
  DataType: word16
  OrigDataType: word16
T_121: (in out ah_82 : ptr16)
  Class: Eq_77
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_122: (in fn0C00_0227(0x0800, ah_64, ds, out ah_82) : word16)
  Class: Eq_109
  DataType: word16
  OrigDataType: word16
T_123: (in 0x32FE : word16)
  Class: Eq_123
  DataType: word16
  OrigDataType: word16
T_124: (in si_61 + 0x32FE : word16)
  Class: Eq_124
  DataType: word16
  OrigDataType: word16
T_125: (in Mem67[ds:si_61 + 0x32FE:word16] : word16)
  Class: Eq_115
  DataType: word16
  OrigDataType: word16
T_126: (in 0x0002 : word16)
  Class: Eq_126
  DataType: word16
  OrigDataType: word16
T_127: (in fp - 0x0002 : word16)
  Class: Eq_127
  DataType: word16
  OrigDataType: word16
T_128: (in Mem76[ss:fp - 0x0002:word16] : word16)
  Class: Eq_115
  DataType: word16
  OrigDataType: word16
T_129: (in 0x1000 : word16)
  Class: Eq_90
  DataType: word16
  OrigDataType: word16
T_130: (in 0x6308 : word16)
  Class: Eq_130
  DataType: (memptr T_9 (struct (0 T_131 t0000)))
  OrigDataType: (memptr T_9 (struct (0 T_131 t0000)))
T_131: (in Mem77[ds:0x6308:word16] : word16)
  Class: Eq_90
  DataType: word16
  OrigDataType: word16
T_132: (in 0x32FE : word16)
  Class: Eq_132
  DataType: word16
  OrigDataType: word16
T_133: (in si_61 + 0x32FE : word16)
  Class: Eq_133
  DataType: word16
  OrigDataType: word16
T_134: (in Mem67[ds:si_61 + 0x32FE:byte] : byte)
  Class: Eq_115
  DataType: byte
  OrigDataType: byte
T_135: (in 0x01 : byte)
  Class: Eq_135
  DataType: byte
  OrigDataType: byte
T_136: (in Mem67[ds:si_61 + 0x32FE:byte] + 0x01 : byte)
  Class: Eq_115
  DataType: byte
  OrigDataType: byte
T_137: (in 0x32FE : word16)
  Class: Eq_137
  DataType: word16
  OrigDataType: word16
T_138: (in si_61 + 0x32FE : word16)
  Class: Eq_138
  DataType: word16
  OrigDataType: word16
T_139: (in Mem80[ds:si_61 + 0x32FE:byte] : byte)
  Class: Eq_115
  DataType: byte
  OrigDataType: byte
T_140: (in ah : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_141: (in __inb : ptr32)
  Class: Eq_141
  DataType: (ptr (fn T_143 (T_142)))
  OrigDataType: (ptr (fn T_143 (T_142)))
T_142: (in 0x40 : byte)
  Class: Eq_142
  DataType: byte
  OrigDataType: byte
T_143: (in __inb(0x40) : byte)
  Class: Eq_143
  DataType: byte
  OrigDataType: byte
T_144: (in __inb : ptr32)
  Class: Eq_144
  DataType: (ptr (fn T_146 (T_145)))
  OrigDataType: (ptr (fn T_146 (T_145)))
T_145: (in 0x40 : byte)
  Class: Eq_145
  DataType: byte
  OrigDataType: byte
T_146: (in __inb(0x40) : byte)
  Class: Eq_146
  DataType: byte
  OrigDataType: byte
T_147: (in bx_11 : word16)
  Class: Eq_147
  DataType: int16
  OrigDataType: int16
T_148: (in ds : selector)
  Class: Eq_9
  DataType: (ptr (segment (6309 T_147 t6309)))
  OrigDataType: (ptr (segment (6309 T_147 t6309)))
T_149: (in 0x6309 : word16)
  Class: Eq_149
  DataType: (memptr T_148 (struct (0 T_150 t0000)))
  OrigDataType: (memptr T_148 (struct (0 T_150 t0000)))
T_150: (in Mem0[ds:0x6309:word16] : word16)
  Class: Eq_147
  DataType: word16
  OrigDataType: word16
T_151: (in dx_12 : word16)
  Class: Eq_147
  DataType: word16
  OrigDataType: word16
T_152: (in 0x0000 : word16)
  Class: Eq_152
  DataType: word16
  OrigDataType: word16
T_153: (in ax : word16)
  Class: Eq_153
  DataType: word16
  OrigDataType: word16
T_154: (in SEQ(0x0000, ax) : word32)
  Class: Eq_154
  DataType: word32
  OrigDataType: word32
T_155: (in SEQ(0x0000, ax) % bx_11 : int16)
  Class: Eq_147
  DataType: int16
  OrigDataType: int16
T_156: (in 0x6309 : word16)
  Class: Eq_156
  DataType: (memptr T_148 (struct (0 T_157 t0000)))
  OrigDataType: (memptr T_148 (struct (0 T_157 t0000)))
T_157: (in Mem18[ds:0x6309:word16] : word16)
  Class: Eq_147
  DataType: word16
  OrigDataType: word16
T_158: (in SEQ(dx_12, ax) : word32)
  Class: Eq_158
  DataType: int32
  OrigDataType: int32
T_159: (in SEQ(dx_12, ax) / bx_11 : int16)
  Class: Eq_159
  DataType: int16
  OrigDataType: int16
T_160: (in SLICE(SEQ(dx_12, ax) / bx_11, byte, 8) : byte)
  Class: Eq_160
  DataType: byte
  OrigDataType: byte
T_161: (in si : word16)
  Class: Eq_161
  DataType: word16
  OrigDataType: word16
T_162: (in 0x00 : byte)
  Class: Eq_162
  DataType: byte
  OrigDataType: byte
T_163: (in 0x32FE : word16)
  Class: Eq_163
  DataType: word16
  OrigDataType: word16
T_164: (in SEQ(ds, 0x32FE) : ptr32)
  Class: Eq_164
  DataType: ptr32
  OrigDataType: ptr32
T_165: (in 0x0002 : word16)
  Class: Eq_165
  DataType: ui16
  OrigDataType: ui16
T_166: (in cx * 0x0002 : word16)
  Class: Eq_166
  DataType: ui16
  OrigDataType: ui16
T_167: (in SEQ(ds, 0x32FE)[cx * 0x0002] : byte)
  Class: Eq_162
  DataType: byte
  OrigDataType: byte
T_168: (in 0x00A0 : word16)
  Class: Eq_168
  DataType: word16
  OrigDataType: word16
T_169: (in 0x6309 : word16)
  Class: Eq_169
  DataType: (memptr T_76 (struct (0 T_170 t0000)))
  OrigDataType: (memptr T_76 (struct (0 T_170 t0000)))
T_170: (in Mem11[ds:0x6309:word16] : word16)
  Class: Eq_168
  DataType: word16
  OrigDataType: word16
T_171: (in ah_13 : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_172: (in fn0C00_0214 : ptr32)
  Class: Eq_172
  DataType: (ptr (fn T_174 (T_75, T_76)))
  OrigDataType: (ptr (fn T_174 (T_75, T_76)))
T_173: (in signature of fn0C00_0214 : void)
  Class: Eq_172
  DataType: 
  OrigDataType: 
T_174: (in fn0C00_0214(ah, ds) : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_175: (in 0x6309 : word16)
  Class: Eq_175
  DataType: (memptr T_76 (struct (0 T_168 t0000)))
  OrigDataType: (memptr T_76 (struct (0 T_168 t0000)))
T_176: (in Mem11[ds:0x6309:word16] : word16)
  Class: Eq_168
  DataType: word16
  OrigDataType: word16
T_177: (in 0x0050 : word16)
  Class: Eq_177
  DataType: word16
  OrigDataType: word16
T_178: (in Mem11[ds:0x6309:word16] - 0x0050 : word16)
  Class: Eq_168
  DataType: word16
  OrigDataType: word16
T_179: (in Mem15[ds:0x6309:word16] : word16)
  Class: Eq_168
  DataType: word16
  OrigDataType: word16
T_180: (in 0x6309 : word16)
  Class: Eq_180
  DataType: (memptr T_76 (struct (0 T_181 t0000)))
  OrigDataType: (memptr T_76 (struct (0 T_181 t0000)))
T_181: (in Mem15[ds:0x6309:word16] : word16)
  Class: Eq_168
  DataType: word16
  OrigDataType: word16
T_182: (in 0x02FE : word16)
  Class: Eq_182
  DataType: word16
  OrigDataType: word16
T_183: (in SEQ(ds, 0x02FE) : ptr32)
  Class: Eq_183
  DataType: ptr32
  OrigDataType: ptr32
T_184: (in 0x0002 : word16)
  Class: Eq_184
  DataType: ui16
  OrigDataType: ui16
T_185: (in cx * 0x0002 : word16)
  Class: Eq_185
  DataType: ui16
  OrigDataType: ui16
T_186: (in SEQ(ds, 0x02FE)[cx * 0x0002] : word16)
  Class: Eq_168
  DataType: word16
  OrigDataType: word16
T_187: (in 0x0064 : word16)
  Class: Eq_168
  DataType: word16
  OrigDataType: word16
T_188: (in 0x6309 : word16)
  Class: Eq_188
  DataType: (memptr T_76 (struct (0 T_189 t0000)))
  OrigDataType: (memptr T_76 (struct (0 T_189 t0000)))
T_189: (in Mem21[ds:0x6309:word16] : word16)
  Class: Eq_168
  DataType: word16
  OrigDataType: word16
T_190: (in ah_22 : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_191: (in fn0C00_0214 : ptr32)
  Class: Eq_172
  DataType: (ptr (fn T_192 (T_171, T_76)))
  OrigDataType: (ptr (fn T_192 (T_171, T_76)))
T_192: (in fn0C00_0214(ah_13, ds) : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_193: (in 0x6309 : word16)
  Class: Eq_193
  DataType: (memptr T_76 (struct (0 T_168 t0000)))
  OrigDataType: (memptr T_76 (struct (0 T_168 t0000)))
T_194: (in Mem21[ds:0x6309:word16] : word16)
  Class: Eq_168
  DataType: word16
  OrigDataType: word16
T_195: (in 0x0032 : word16)
  Class: Eq_195
  DataType: word16
  OrigDataType: word16
T_196: (in Mem21[ds:0x6309:word16] - 0x0032 : word16)
  Class: Eq_168
  DataType: word16
  OrigDataType: word16
T_197: (in Mem24[ds:0x6309:word16] : word16)
  Class: Eq_168
  DataType: word16
  OrigDataType: word16
T_198: (in 0x6309 : word16)
  Class: Eq_198
  DataType: (memptr T_76 (struct (0 T_199 t0000)))
  OrigDataType: (memptr T_76 (struct (0 T_199 t0000)))
T_199: (in Mem24[ds:0x6309:word16] : word16)
  Class: Eq_168
  DataType: word16
  OrigDataType: word16
T_200: (in 0x12FE : word16)
  Class: Eq_200
  DataType: word16
  OrigDataType: word16
T_201: (in SEQ(ds, 0x12FE) : ptr32)
  Class: Eq_201
  DataType: ptr32
  OrigDataType: ptr32
T_202: (in 0x0002 : word16)
  Class: Eq_202
  DataType: ui16
  OrigDataType: ui16
T_203: (in cx * 0x0002 : word16)
  Class: Eq_203
  DataType: ui16
  OrigDataType: ui16
T_204: (in SEQ(ds, 0x12FE)[cx * 0x0002] : word16)
  Class: Eq_168
  DataType: word16
  OrigDataType: word16
T_205: (in 0x0064 : word16)
  Class: Eq_168
  DataType: word16
  OrigDataType: word16
T_206: (in 0x6309 : word16)
  Class: Eq_206
  DataType: (memptr T_76 (struct (0 T_207 t0000)))
  OrigDataType: (memptr T_76 (struct (0 T_207 t0000)))
T_207: (in Mem30[ds:0x6309:word16] : word16)
  Class: Eq_168
  DataType: word16
  OrigDataType: word16
T_208: (in ah_31 : byte)
  Class: Eq_208
  DataType: byte
  OrigDataType: byte
T_209: (in fn0C00_0214 : ptr32)
  Class: Eq_172
  DataType: (ptr (fn T_210 (T_190, T_76)))
  OrigDataType: (ptr (fn T_210 (T_190, T_76)))
T_210: (in fn0C00_0214(ah_22, ds) : byte)
  Class: Eq_210
  DataType: byte
  OrigDataType: byte
T_211: (in *ahOut : byte)
  Class: Eq_210
  DataType: 
  OrigDataType: 
T_212: (in 0x6309 : word16)
  Class: Eq_212
  DataType: 
  OrigDataType: 
T_213: (in Mem30[ds:0x6309:word16] : word16)
  Class: Eq_213
  DataType: 
  OrigDataType: 
T_214: (in 0x0064 : word16)
  Class: Eq_214
  DataType: 
  OrigDataType: 
T_215: (in Mem30[ds:0x6309:word16] + 0x0064 : word16)
  Class: Eq_215
  DataType: 
  OrigDataType: 
T_216: (in Mem33[ds:0x6309:word16] : word16)
  Class: Eq_215
  DataType: 
  OrigDataType: 
T_217: (in 0x6309 : word16)
  Class: Eq_217
  DataType: 
  OrigDataType: 
T_218: (in Mem33[ds:0x6309:word16] : word16)
  Class: Eq_218
  DataType: 
  OrigDataType: 
T_219: (in 0x22FE : word16)
  Class: Eq_219
  DataType: 
  OrigDataType: 
T_220: (in SEQ(ds, 0x22FE) : ptr32)
  Class: Eq_220
  DataType: 
  OrigDataType: 
T_221: (in 0x0002 : word16)
  Class: Eq_221
  DataType: 
  OrigDataType: 
T_222: (in cx * 0x0002 : word16)
  Class: Eq_222
  DataType: 
  OrigDataType: 
T_223: (in SEQ(ds, 0x22FE)[cx * 0x0002] : word16)
  Class: Eq_218
  DataType: 
  OrigDataType: 
T_224: (in 0x0001 : word16)
  Class: Eq_224
  DataType: 
  OrigDataType: 
T_225: (in cx << 0x0001 : word16)
  Class: Eq_225
  DataType: 
  OrigDataType: 
T_226: (in ah : byte)
  Class: Eq_226
  DataType: 
  OrigDataType: 
T_227: (in 0x22FE : word16)
  Class: Eq_227
  DataType: 
  OrigDataType: 
T_228: (in si + 0x22FE : word16)
  Class: Eq_228
  DataType: 
  OrigDataType: 
T_229: (in Mem0[ds:si + 0x22FE:word16] : word16)
  Class: Eq_229
  DataType: 
  OrigDataType: 
T_230: (in 0x0000 : word16)
  Class: Eq_229
  DataType: 
  OrigDataType: 
T_231: (in Mem0[ds:si + 0x22FE:word16] != 0x0000 : bool)
  Class: Eq_231
  DataType: 
  OrigDataType: 
T_232: (in bx_12 : word16)
  Class: Eq_232
  DataType: 
  OrigDataType: 
T_233: (in 0x22FE : word16)
  Class: Eq_233
  DataType: 
  OrigDataType: 
T_234: (in si + 0x22FE : word16)
  Class: Eq_234
  DataType: 
  OrigDataType: 
T_235: (in Mem0[ds:si + 0x22FE:word16] : word16)
  Class: Eq_232
  DataType: 
  OrigDataType: 
T_236: (in 0x42FE : word16)
  Class: Eq_236
  DataType: 
  OrigDataType: 
T_237: (in si + 0x42FE : word16)
  Class: Eq_237
  DataType: 
  OrigDataType: 
T_238: (in Mem0[ds:si + 0x42FE:word16] : word16)
  Class: Eq_238
  DataType: 
  OrigDataType: 
T_239: (in 0x0064 : word16)
  Class: Eq_239
  DataType: 
  OrigDataType: 
T_240: (in Mem0[ds:si + 0x42FE:word16] *s 0x0064 : int32)
  Class: Eq_240
  DataType: 
  OrigDataType: 
T_241: (in Mem0[ds:si + 0x42FE:word16] *s 0x0064 % bx_12 : int16)
  Class: Eq_241
  DataType: 
  OrigDataType: 
T_242: (in 0x0064 : word16)
  Class: Eq_242
  DataType: 
  OrigDataType: 
T_243: (in SEQ(Mem0[ds:si + 0x42FE:word16] *s 0x0064 % bx_12, 0x0064) : word32)
  Class: Eq_243
  DataType: 
  OrigDataType: 
T_244: (in SEQ(Mem0[ds:si + 0x42FE:word16] *s 0x0064 % bx_12, 0x0064) / bx_12 : int16)
  Class: Eq_244
  DataType: 
  OrigDataType: 
T_245: (in 0x00A0 : word16)
  Class: Eq_245
  DataType: 
  OrigDataType: 
T_246: (in SEQ(Mem0[ds:si + 0x42FE:word16] *s 0x0064 % bx_12, 0x0064) / bx_12 + 0x00A0 : word16)
  Class: Eq_246
  DataType: 
  OrigDataType: 
T_247: (in 0x6304 : word16)
  Class: Eq_247
  DataType: 
  OrigDataType: 
T_248: (in Mem17[ds:0x6304:word16] : word16)
  Class: Eq_246
  DataType: 
  OrigDataType: 
T_249: (in bx_21 : word16)
  Class: Eq_249
  DataType: 
  OrigDataType: 
T_250: (in 0x22FE : word16)
  Class: Eq_250
  DataType: 
  OrigDataType: 
T_251: (in si + 0x22FE : word16)
  Class: Eq_251
  DataType: 
  OrigDataType: 
T_252: (in Mem17[ds:si + 0x22FE:word16] : word16)
  Class: Eq_249
  DataType: 
  OrigDataType: 
T_253: (in 0x52FE : word16)
  Class: Eq_253
  DataType: 
  OrigDataType: 
T_254: (in si + 0x52FE : word16)
  Class: Eq_254
  DataType: 
  OrigDataType: 
T_255: (in Mem17[ds:si + 0x52FE:word16] : word16)
  Class: Eq_255
  DataType: 
  OrigDataType: 
T_256: (in 0x0064 : word16)
  Class: Eq_256
  DataType: 
  OrigDataType: 
T_257: (in Mem17[ds:si + 0x52FE:word16] *s 0x0064 : int32)
  Class: Eq_257
  DataType: 
  OrigDataType: 
T_258: (in Mem17[ds:si + 0x52FE:word16] *s 0x0064 % bx_21 : int16)
  Class: Eq_258
  DataType: 
  OrigDataType: 
T_259: (in 0x0064 : word16)
  Class: Eq_259
  DataType: 
  OrigDataType: 
T_260: (in SEQ(Mem17[ds:si + 0x52FE:word16] *s 0x0064 % bx_21, 0x0064) : word32)
  Class: Eq_260
  DataType: 
  OrigDataType: 
T_261: (in SEQ(Mem17[ds:si + 0x52FE:word16] *s 0x0064 % bx_21, 0x0064) / bx_21 : int16)
  Class: Eq_261
  DataType: 
  OrigDataType: 
T_262: (in 0x0064 : word16)
  Class: Eq_262
  DataType: 
  OrigDataType: 
T_263: (in SEQ(Mem17[ds:si + 0x52FE:word16] *s 0x0064 % bx_21, 0x0064) / bx_21 + 0x0064 : word16)
  Class: Eq_263
  DataType: 
  OrigDataType: 
T_264: (in 0x6306 : word16)
  Class: Eq_264
  DataType: 
  OrigDataType: 
T_265: (in Mem26[ds:0x6306:word16] : word16)
  Class: Eq_263
  DataType: 
  OrigDataType: 
T_266: (in ax_31 : word16)
  Class: Eq_266
  DataType: 
  OrigDataType: 
T_267: (in 0x6306 : word16)
  Class: Eq_267
  DataType: 
  OrigDataType: 
T_268: (in Mem26[ds:0x6306:word16] : word16)
  Class: Eq_268
  DataType: 
  OrigDataType: 
T_269: (in 0x0140 : word16)
  Class: Eq_269
  DataType: 
  OrigDataType: 
T_270: (in Mem26[ds:0x6306:word16] *s 0x0140 : int32)
  Class: Eq_270
  DataType: 
  OrigDataType: 
T_271: (in (word16) (Mem26[ds:0x6306:word16] *s 0x0140) : word16)
  Class: Eq_271
  DataType: 
  OrigDataType: 
T_272: (in 0x6304 : word16)
  Class: Eq_272
  DataType: 
  OrigDataType: 
T_273: (in Mem26[ds:0x6304:word16] : word16)
  Class: Eq_273
  DataType: 
  OrigDataType: 
T_274: (in (word16) (Mem26[ds:0x6306:word16] *s 0x0140) + Mem26[ds:0x6304:word16] : word16)
  Class: Eq_266
  DataType: 
  OrigDataType: 
T_275: (in ah_33 : byte)
  Class: Eq_275
  DataType: 
  OrigDataType: 
T_276: (in SLICE(ax_31, byte, 8) : byte)
  Class: Eq_275
  DataType: 
  OrigDataType: 
T_277: (in 0x6304 : word16)
  Class: Eq_277
  DataType: 
  OrigDataType: 
T_278: (in Mem26[ds:0x6304:word16] : word16)
  Class: Eq_278
  DataType: 
  OrigDataType: 
T_279: (in 0x013F : word16)
  Class: Eq_278
  DataType: 
  OrigDataType: 
T_280: (in Mem26[ds:0x6304:word16] >u 0x013F : bool)
  Class: Eq_280
  DataType: 
  OrigDataType: 
T_281: (in 0x22FE : word16)
  Class: Eq_281
  DataType: 
  OrigDataType: 
T_282: (in si + 0x22FE : word16)
  Class: Eq_282
  DataType: 
  OrigDataType: 
T_283: (in Mem0[ds:si + 0x22FE:word16] : word16)
  Class: Eq_283
  DataType: 
  OrigDataType: 
T_284: (in 0x0001 : word16)
  Class: Eq_284
  DataType: 
  OrigDataType: 
T_285: (in Mem0[ds:si + 0x22FE:word16] + 0x0001 : word16)
  Class: Eq_285
  DataType: 
  OrigDataType: 
T_286: (in 0x22FE : word16)
  Class: Eq_286
  DataType: 
  OrigDataType: 
T_287: (in si + 0x22FE : word16)
  Class: Eq_287
  DataType: 
  OrigDataType: 
T_288: (in Mem66[ds:si + 0x22FE:word16] : word16)
  Class: Eq_285
  DataType: 
  OrigDataType: 
T_289: (in 0x6306 : word16)
  Class: Eq_289
  DataType: 
  OrigDataType: 
T_290: (in Mem26[ds:0x6306:word16] : word16)
  Class: Eq_290
  DataType: 
  OrigDataType: 
T_291: (in 0x00C7 : word16)
  Class: Eq_290
  DataType: 
  OrigDataType: 
T_292: (in Mem26[ds:0x6306:word16] >u 0x00C7 : bool)
  Class: Eq_292
  DataType: 
  OrigDataType: 
T_293: (in al_47 : byte)
  Class: Eq_293
  DataType: 
  OrigDataType: 
T_294: (in 0x6308 : word16)
  Class: Eq_294
  DataType: 
  OrigDataType: 
T_295: (in Mem26[ds:0x6308:byte] : byte)
  Class: Eq_293
  DataType: 
  OrigDataType: 
T_296: (in 0x0000 : word16)
  Class: Eq_296
  DataType: 
  OrigDataType: 
T_297: (in ax_31 + 0x0000 : word16)
  Class: Eq_297
  DataType: 
  OrigDataType: 
T_298: (in Mem50[es:ax_31 + 0x0000:byte] : byte)
  Class: Eq_293
  DataType: 
  OrigDataType: 
T_299: (in 0x02FD : word16)
  Class: Eq_299
  DataType: 
  OrigDataType: 
T_300: (in Mem50[ds:0x02FD:byte] : byte)
  Class: Eq_300
  DataType: 
  OrigDataType: 
T_301: (in 0x00 : byte)
  Class: Eq_300
  DataType: 
  OrigDataType: 
T_302: (in Mem50[ds:0x02FD:byte] == 0x00 : bool)
  Class: Eq_302
  DataType: 
  OrigDataType: 
T_303: (in 0x02FD : word16)
  Class: Eq_303
  DataType: 
  OrigDataType: 
T_304: (in Mem50[ds:0x02FD:byte] : byte)
  Class: Eq_304
  DataType: 
  OrigDataType: 
T_305: (in 0x03 : byte)
  Class: Eq_304
  DataType: 
  OrigDataType: 
T_306: (in Mem50[ds:0x02FD:byte] == 0x03 : bool)
  Class: Eq_306
  DataType: 
  OrigDataType: 
T_307: (in 0x0001 : word16)
  Class: Eq_307
  DataType: 
  OrigDataType: 
T_308: (in ax_31 + 0x0001 : word16)
  Class: Eq_308
  DataType: 
  OrigDataType: 
T_309: (in Mem57[es:ax_31 + 0x0001:byte] : byte)
  Class: Eq_293
  DataType: 
  OrigDataType: 
T_310: (in 0x0140 : word16)
  Class: Eq_310
  DataType: 
  OrigDataType: 
T_311: (in ax_31 + 0x0140 : word16)
  Class: Eq_311
  DataType: 
  OrigDataType: 
T_312: (in Mem61[es:ax_31 + 0x0140:byte] : byte)
  Class: Eq_293
  DataType: 
  OrigDataType: 
T_313: (in 0x0141 : word16)
  Class: Eq_313
  DataType: 
  OrigDataType: 
T_314: (in ax_31 + 0x0141 : word16)
  Class: Eq_314
  DataType: 
  OrigDataType: 
T_315: (in Mem63[es:ax_31 + 0x0141:byte] : byte)
  Class: Eq_293
  DataType: 
  OrigDataType: 
T_316: (in Z : bool)
  Class: Eq_316
  DataType: 
  OrigDataType: 
T_317: (in __outb : ptr32)
  Class: Eq_317
  DataType: 
  OrigDataType: 
T_318: (in 0x03C8 : word16)
  Class: Eq_318
  DataType: 
  OrigDataType: 
T_319: (in __outb(0x03C8, cl) : void)
  Class: Eq_319
  DataType: 
  OrigDataType: 
T_320: (in __outb : ptr32)
  Class: Eq_320
  DataType: 
  OrigDataType: 
T_321: (in 0x03C9 : word16)
  Class: Eq_321
  DataType: 
  OrigDataType: 
T_322: (in 0x02F6 : word16)
  Class: Eq_322
  DataType: 
  OrigDataType: 
T_323: (in Mem0[ds:0x02F6:byte] : byte)
  Class: Eq_323
  DataType: 
  OrigDataType: 
T_324: (in __outb(0x03C9, Mem0[ds:0x02F6:byte]) : void)
  Class: Eq_324
  DataType: 
  OrigDataType: 
T_325: (in __outb : ptr32)
  Class: Eq_325
  DataType: 
  OrigDataType: 
T_326: (in 0x03C9 : word16)
  Class: Eq_326
  DataType: 
  OrigDataType: 
T_327: (in 0x02F7 : word16)
  Class: Eq_327
  DataType: 
  OrigDataType: 
T_328: (in Mem0[ds:0x02F7:byte] : byte)
  Class: Eq_328
  DataType: 
  OrigDataType: 
T_329: (in __outb(0x03C9, Mem0[ds:0x02F7:byte]) : void)
  Class: Eq_329
  DataType: 
  OrigDataType: 
T_330: (in __outb : ptr32)
  Class: Eq_330
  DataType: 
  OrigDataType: 
T_331: (in 0x03C9 : word16)
  Class: Eq_331
  DataType: 
  OrigDataType: 
T_332: (in 0x02F8 : word16)
  Class: Eq_332
  DataType: 
  OrigDataType: 
T_333: (in Mem0[ds:0x02F8:byte] : byte)
  Class: Eq_333
  DataType: 
  OrigDataType: 
T_334: (in __outb(0x03C9, Mem0[ds:0x02F8:byte]) : void)
  Class: Eq_334
  DataType: 
  OrigDataType: 
T_335: (in cl_11 : byte)
  Class: Eq_335
  DataType: 
  OrigDataType: 
T_336: (in 0x01 : byte)
  Class: Eq_336
  DataType: 
  OrigDataType: 
T_337: (in cl + 0x01 : byte)
  Class: Eq_337
  DataType: 
  OrigDataType: 
T_338: (in *clOut : byte)
  Class: Eq_337
  DataType: 
  OrigDataType: 
T_339: (in cl + 0x01 : byte)
  Class: Eq_339
  DataType: 
  OrigDataType: 
T_340: (in cond(cl + 0x01) : byte)
  Class: Eq_340
  DataType: 
  OrigDataType: 
T_341:
  Class: Eq_341
  DataType: 
  OrigDataType: (struct 0002 (0 T_167 t0000))
T_342:
  Class: Eq_342
  DataType: 
  OrigDataType: (struct 0002 (0 T_186 t0000))
T_343:
  Class: Eq_343
  DataType: 
  OrigDataType: (struct 0002 (0 T_204 t0000))
*/
