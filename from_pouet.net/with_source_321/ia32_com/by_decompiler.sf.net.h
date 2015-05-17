// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_321/ia32_com/subject.exe
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
T_7: (in ah_11 : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_8: (in 0x00 : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_9: (in cx_10 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_10: (in 0x0800 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_11: (in fn0C00_0222 : ptr32)
  Class: Eq_11
  DataType: (ptr (fn T_19 (T_9, T_7, T_17, T_18)))
  OrigDataType: (ptr (fn T_19 (T_9, T_7, T_17, T_18)))
T_12: (in signature of fn0C00_0222 : void)
  Class: Eq_11
  DataType: 
  OrigDataType: 
T_13: (in cx : word16)
  Class: Eq_9
  DataType: ui16
  OrigDataType: ui16
T_14: (in ah : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_15: (in ds : selector)
  Class: Eq_15
  DataType: (ptr (segment (2FE (arr T_295) a02FE) (12FE (arr T_296) a12FE) (32FE (arr T_294) a32FE) (6309 T_127 t6309)))
  OrigDataType: (ptr (segment (2FE (arr T_295) a02FE) (12FE (arr T_296) a12FE) (32FE (arr T_294) a32FE) (6309 T_127 t6309)))
T_16: (in ahOut : ptr16)
  Class: Eq_16
  DataType: ptr16
  OrigDataType: ptr16
T_17: (in ds : selector)
  Class: Eq_15
  DataType: (ptr (segment (2FD T_45 t02FD) (32FE T_49 t32FE) (6308 T_30 t6308)))
  OrigDataType: (ptr (segment (2FD T_45 t02FD) (32FE T_49 t32FE) (6308 T_30 t6308)))
T_18: (in out ah_11 : ptr16)
  Class: Eq_16
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_19: (in fn0C00_0222(cx_10, ah_11, ds, out ah_11) : word16)
  Class: Eq_19
  DataType: word16
  OrigDataType: word16
T_20: (in 0x0001 : word16)
  Class: Eq_20
  DataType: word16
  OrigDataType: word16
T_21: (in cx_10 - 0x0001 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_22: (in 0x0000 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_23: (in cx_10 != 0x0000 : bool)
  Class: Eq_23
  DataType: bool
  OrigDataType: bool
T_24: (in 0x1000 : word16)
  Class: Eq_24
  DataType: word16
  OrigDataType: word16
T_25: (in ss : selector)
  Class: Eq_25
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_26: (in fp : ptr16)
  Class: Eq_26
  DataType: (union ((union (ptr16 u0) ((memptr T_25 (struct (FFFFFFFE T_82 tFFFFFFFE))) u1)) u0) ((memptr T_25 (struct (FFFFFFFE T_29 tFFFFFFFE))) u1))
  OrigDataType: (union ((union (ptr16 u0) ((memptr T_25 (struct (FFFFFFFE T_82 tFFFFFFFE))) u1)) u0) ((memptr T_25 (struct (FFFFFFFE T_29 tFFFFFFFE))) u1))
T_27: (in 0x0002 : word16)
  Class: Eq_27
  DataType: word16
  OrigDataType: word16
T_28: (in fp - 0x0002 : word16)
  Class: Eq_28
  DataType: word16
  OrigDataType: word16
T_29: (in Mem21[ss:fp - 0x0002:word16] : word16)
  Class: Eq_24
  DataType: word16
  OrigDataType: word16
T_30: (in 0x00 : byte)
  Class: Eq_30
  DataType: byte
  OrigDataType: byte
T_31: (in 0x6308 : word16)
  Class: Eq_31
  DataType: (memptr T_17 (struct (0 T_32 t0000)))
  OrigDataType: (memptr T_17 (struct (0 T_32 t0000)))
T_32: (in Mem25[ds:0x6308:byte] : byte)
  Class: Eq_30
  DataType: byte
  OrigDataType: byte
T_33: (in si_23 : word16)
  Class: Eq_33
  DataType: (memptr T_17 (struct (32FE T_69 t32FE)))
  OrigDataType: (memptr T_17 (struct (32FE T_69 t32FE)))
T_34: (in 0xA000 : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_35: (in ah_26 : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_36: (in fn0C00_027E : ptr32)
  Class: Eq_36
  DataType: (ptr (fn T_43 (T_41, T_42, T_17)))
  OrigDataType: (ptr (fn T_43 (T_41, T_42, T_17)))
T_37: (in signature of fn0C00_027E : void)
  Class: Eq_36
  DataType: 
  OrigDataType: 
T_38: (in si : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_39: (in es : selector)
  Class: Eq_39
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_40: (in ds : selector)
  Class: Eq_15
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_41: (in 0xA000 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_42: (in 0xA000 : selector)
  Class: Eq_39
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_43: (in fn0C00_027E(0xA000, 0xA000, ds) : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_44: (in 0x02FD : word16)
  Class: Eq_44
  DataType: (memptr T_17 (struct (0 T_45 t0000)))
  OrigDataType: (memptr T_17 (struct (0 T_45 t0000)))
T_45: (in Mem25[ds:0x02FD:byte] : byte)
  Class: Eq_45
  DataType: bcu8
  OrigDataType: bcu8
T_46: (in 0x04 : byte)
  Class: Eq_45
  DataType: bcu8
  OrigDataType: bcu8
T_47: (in Mem25[ds:0x02FD:byte] >=u 0x04 : bool)
  Class: Eq_47
  DataType: bool
  OrigDataType: bool
T_48: (in 0x32FE : word16)
  Class: Eq_48
  DataType: (memptr T_17 (struct (0 T_49 t0000)))
  OrigDataType: (memptr T_17 (struct (0 T_49 t0000)))
T_49: (in Mem25[ds:0x32FE:word16] : word16)
  Class: Eq_49
  DataType: word16
  OrigDataType: word16
T_50: (in 0x0001 : word16)
  Class: Eq_50
  DataType: word16
  OrigDataType: word16
T_51: (in Mem25[ds:0x32FE:word16] + 0x0001 : word16)
  Class: Eq_49
  DataType: word16
  OrigDataType: word16
T_52: (in 0x32FE : word16)
  Class: Eq_52
  DataType: (memptr T_17 (struct (0 T_53 t0000)))
  OrigDataType: (memptr T_17 (struct (0 T_53 t0000)))
T_53: (in Mem51[ds:0x32FE:word16] : word16)
  Class: Eq_49
  DataType: word16
  OrigDataType: word16
T_54: (in 0x32FE : word16)
  Class: Eq_54
  DataType: (memptr T_17 (struct (0 T_55 t0000)))
  OrigDataType: (memptr T_17 (struct (0 T_55 t0000)))
T_55: (in Mem51[ds:0x32FE:word16] : word16)
  Class: Eq_49
  DataType: cups16
  OrigDataType: cups16
T_56: (in 0x00C8 : word16)
  Class: Eq_49
  DataType: cups16
  OrigDataType: cups16
T_57: (in Mem51[ds:0x32FE:word16] <u 0x00C8 : bool)
  Class: Eq_57
  DataType: bool
  OrigDataType: bool
T_58: (in v12_44 : word16)
  Class: Eq_49
  DataType: word16
  OrigDataType: word16
T_59: (in 0x32FE : word16)
  Class: Eq_59
  DataType: (memptr T_17 (struct (0 T_60 t0000)))
  OrigDataType: (memptr T_17 (struct (0 T_60 t0000)))
T_60: (in Mem25[ds:0x32FE:word16] : word16)
  Class: Eq_49
  DataType: word16
  OrigDataType: word16
T_61: (in 0x0001 : word16)
  Class: Eq_61
  DataType: word16
  OrigDataType: word16
T_62: (in Mem25[ds:0x32FE:word16] - 0x0001 : word16)
  Class: Eq_49
  DataType: word16
  OrigDataType: word16
T_63: (in 0x32FE : word16)
  Class: Eq_63
  DataType: (memptr T_17 (struct (0 T_64 t0000)))
  OrigDataType: (memptr T_17 (struct (0 T_64 t0000)))
T_64: (in Mem45[ds:0x32FE:word16] : word16)
  Class: Eq_49
  DataType: word16
  OrigDataType: word16
T_65: (in 0x0000 : word16)
  Class: Eq_49
  DataType: word16
  OrigDataType: word16
T_66: (in v12_44 != 0x0000 : bool)
  Class: Eq_66
  DataType: bool
  OrigDataType: bool
T_67: (in 0x32FE : word16)
  Class: Eq_67
  DataType: word16
  OrigDataType: word16
T_68: (in si_23 + 0x32FE : word16)
  Class: Eq_68
  DataType: word16
  OrigDataType: word16
T_69: (in Mem25[ds:si_23 + 0x32FE:byte] : byte)
  Class: Eq_69
  DataType: byte
  OrigDataType: byte
T_70: (in 0x28 : byte)
  Class: Eq_69
  DataType: byte
  OrigDataType: byte
T_71: (in Mem25[ds:si_23 + 0x32FE:byte] == 0x28 : bool)
  Class: Eq_71
  DataType: bool
  OrigDataType: bool
T_72: (in ah_48 : byte)
  Class: Eq_72
  DataType: byte
  OrigDataType: byte
T_73: (in fn0C00_0222 : ptr32)
  Class: Eq_11
  DataType: (ptr (fn T_76 (T_74, T_35, T_17, T_75)))
  OrigDataType: (ptr (fn T_76 (T_74, T_35, T_17, T_75)))
T_74: (in 0x0800 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_75: (in out ah_48 : ptr16)
  Class: Eq_16
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_76: (in fn0C00_0222(0x0800, ah_26, ds, out ah_48) : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_77: (in 0x32FE : word16)
  Class: Eq_77
  DataType: word16
  OrigDataType: word16
T_78: (in si_23 + 0x32FE : word16)
  Class: Eq_78
  DataType: word16
  OrigDataType: word16
T_79: (in Mem25[ds:si_23 + 0x32FE:word16] : word16)
  Class: Eq_69
  DataType: word16
  OrigDataType: word16
T_80: (in 0x0002 : word16)
  Class: Eq_80
  DataType: word16
  OrigDataType: word16
T_81: (in fp - 0x0002 : word16)
  Class: Eq_81
  DataType: word16
  OrigDataType: word16
T_82: (in Mem38[ss:fp - 0x0002:word16] : word16)
  Class: Eq_69
  DataType: word16
  OrigDataType: word16
T_83: (in 0x1000 : word16)
  Class: Eq_30
  DataType: word16
  OrigDataType: word16
T_84: (in 0x6308 : word16)
  Class: Eq_84
  DataType: (memptr T_17 (struct (0 T_85 t0000)))
  OrigDataType: (memptr T_17 (struct (0 T_85 t0000)))
T_85: (in Mem39[ds:0x6308:word16] : word16)
  Class: Eq_30
  DataType: word16
  OrigDataType: word16
T_86: (in 0x32FE : word16)
  Class: Eq_86
  DataType: word16
  OrigDataType: word16
T_87: (in si_23 + 0x32FE : word16)
  Class: Eq_87
  DataType: word16
  OrigDataType: word16
T_88: (in Mem25[ds:si_23 + 0x32FE:byte] : byte)
  Class: Eq_69
  DataType: byte
  OrigDataType: byte
T_89: (in 0x01 : byte)
  Class: Eq_89
  DataType: byte
  OrigDataType: byte
T_90: (in Mem25[ds:si_23 + 0x32FE:byte] + 0x01 : byte)
  Class: Eq_69
  DataType: byte
  OrigDataType: byte
T_91: (in 0x32FE : word16)
  Class: Eq_91
  DataType: word16
  OrigDataType: word16
T_92: (in si_23 + 0x32FE : word16)
  Class: Eq_92
  DataType: word16
  OrigDataType: word16
T_93: (in Mem42[ds:si_23 + 0x32FE:byte] : byte)
  Class: Eq_69
  DataType: byte
  OrigDataType: byte
T_94: (in ah_55 : byte)
  Class: Eq_94
  DataType: byte
  OrigDataType: byte
T_95: (in fn0C00_0222 : ptr32)
  Class: Eq_11
  DataType: (ptr (fn T_98 (T_96, T_35, T_17, T_97)))
  OrigDataType: (ptr (fn T_98 (T_96, T_35, T_17, T_97)))
T_96: (in 0x0800 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_97: (in out ah_55 : ptr16)
  Class: Eq_16
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_98: (in fn0C00_0222(0x0800, ah_26, ds, out ah_55) : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_99: (in ah : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_100: (in __inb : ptr32)
  Class: Eq_100
  DataType: (ptr (fn T_102 (T_101)))
  OrigDataType: (ptr (fn T_102 (T_101)))
T_101: (in 0x40 : byte)
  Class: Eq_101
  DataType: byte
  OrigDataType: byte
T_102: (in __inb(0x40) : byte)
  Class: Eq_102
  DataType: byte
  OrigDataType: byte
T_103: (in __inb : ptr32)
  Class: Eq_103
  DataType: (ptr (fn T_105 (T_104)))
  OrigDataType: (ptr (fn T_105 (T_104)))
T_104: (in 0x40 : byte)
  Class: Eq_104
  DataType: byte
  OrigDataType: byte
T_105: (in __inb(0x40) : byte)
  Class: Eq_105
  DataType: byte
  OrigDataType: byte
T_106: (in bx_11 : word16)
  Class: Eq_106
  DataType: int16
  OrigDataType: int16
T_107: (in ds : selector)
  Class: Eq_15
  DataType: (ptr (segment (6309 T_106 t6309)))
  OrigDataType: (ptr (segment (6309 T_106 t6309)))
T_108: (in 0x6309 : word16)
  Class: Eq_108
  DataType: (memptr T_107 (struct (0 T_109 t0000)))
  OrigDataType: (memptr T_107 (struct (0 T_109 t0000)))
T_109: (in Mem0[ds:0x6309:word16] : word16)
  Class: Eq_106
  DataType: word16
  OrigDataType: word16
T_110: (in dx_12 : word16)
  Class: Eq_106
  DataType: word16
  OrigDataType: word16
T_111: (in 0x0000 : word16)
  Class: Eq_111
  DataType: word16
  OrigDataType: word16
T_112: (in ax : word16)
  Class: Eq_112
  DataType: word16
  OrigDataType: word16
T_113: (in SEQ(0x0000, ax) : word32)
  Class: Eq_113
  DataType: word32
  OrigDataType: word32
T_114: (in SEQ(0x0000, ax) % bx_11 : int16)
  Class: Eq_106
  DataType: int16
  OrigDataType: int16
T_115: (in 0x6309 : word16)
  Class: Eq_115
  DataType: (memptr T_107 (struct (0 T_116 t0000)))
  OrigDataType: (memptr T_107 (struct (0 T_116 t0000)))
T_116: (in Mem18[ds:0x6309:word16] : word16)
  Class: Eq_106
  DataType: word16
  OrigDataType: word16
T_117: (in SEQ(dx_12, ax) : word32)
  Class: Eq_117
  DataType: int32
  OrigDataType: int32
T_118: (in SEQ(dx_12, ax) / bx_11 : int16)
  Class: Eq_118
  DataType: int16
  OrigDataType: int16
T_119: (in SLICE(SEQ(dx_12, ax) / bx_11, byte, 8) : byte)
  Class: Eq_119
  DataType: byte
  OrigDataType: byte
T_120: (in si : word16)
  Class: Eq_120
  DataType: word16
  OrigDataType: word16
T_121: (in 0x10 : byte)
  Class: Eq_121
  DataType: byte
  OrigDataType: byte
T_122: (in 0x32FE : word16)
  Class: Eq_122
  DataType: word16
  OrigDataType: word16
T_123: (in SEQ(ds, 0x32FE) : ptr32)
  Class: Eq_123
  DataType: ptr32
  OrigDataType: ptr32
T_124: (in 0x0002 : word16)
  Class: Eq_124
  DataType: ui16
  OrigDataType: ui16
T_125: (in cx * 0x0002 : word16)
  Class: Eq_125
  DataType: ui16
  OrigDataType: ui16
T_126: (in SEQ(ds, 0x32FE)[cx * 0x0002] : byte)
  Class: Eq_121
  DataType: byte
  OrigDataType: byte
T_127: (in 0x00A0 : word16)
  Class: Eq_127
  DataType: word16
  OrigDataType: word16
T_128: (in 0x6309 : word16)
  Class: Eq_128
  DataType: (memptr T_15 (struct (0 T_129 t0000)))
  OrigDataType: (memptr T_15 (struct (0 T_129 t0000)))
T_129: (in Mem11[ds:0x6309:word16] : word16)
  Class: Eq_127
  DataType: word16
  OrigDataType: word16
T_130: (in ah_13 : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_131: (in fn0C00_020F : ptr32)
  Class: Eq_131
  DataType: (ptr (fn T_133 (T_14, T_15)))
  OrigDataType: (ptr (fn T_133 (T_14, T_15)))
T_132: (in signature of fn0C00_020F : void)
  Class: Eq_131
  DataType: 
  OrigDataType: 
T_133: (in fn0C00_020F(ah, ds) : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_134: (in 0x6309 : word16)
  Class: Eq_134
  DataType: (memptr T_15 (struct (0 T_127 t0000)))
  OrigDataType: (memptr T_15 (struct (0 T_127 t0000)))
T_135: (in Mem11[ds:0x6309:word16] : word16)
  Class: Eq_127
  DataType: word16
  OrigDataType: word16
T_136: (in 0x0050 : word16)
  Class: Eq_136
  DataType: word16
  OrigDataType: word16
T_137: (in Mem11[ds:0x6309:word16] - 0x0050 : word16)
  Class: Eq_127
  DataType: word16
  OrigDataType: word16
T_138: (in Mem15[ds:0x6309:word16] : word16)
  Class: Eq_127
  DataType: word16
  OrigDataType: word16
T_139: (in 0x6309 : word16)
  Class: Eq_139
  DataType: (memptr T_15 (struct (0 T_140 t0000)))
  OrigDataType: (memptr T_15 (struct (0 T_140 t0000)))
T_140: (in Mem15[ds:0x6309:word16] : word16)
  Class: Eq_127
  DataType: word16
  OrigDataType: word16
T_141: (in 0x02FE : word16)
  Class: Eq_141
  DataType: word16
  OrigDataType: word16
T_142: (in SEQ(ds, 0x02FE) : ptr32)
  Class: Eq_142
  DataType: ptr32
  OrigDataType: ptr32
T_143: (in 0x0002 : word16)
  Class: Eq_143
  DataType: ui16
  OrigDataType: ui16
T_144: (in cx * 0x0002 : word16)
  Class: Eq_144
  DataType: ui16
  OrigDataType: ui16
T_145: (in SEQ(ds, 0x02FE)[cx * 0x0002] : word16)
  Class: Eq_127
  DataType: word16
  OrigDataType: word16
T_146: (in 0x0064 : word16)
  Class: Eq_127
  DataType: word16
  OrigDataType: word16
T_147: (in 0x6309 : word16)
  Class: Eq_147
  DataType: (memptr T_15 (struct (0 T_148 t0000)))
  OrigDataType: (memptr T_15 (struct (0 T_148 t0000)))
T_148: (in Mem21[ds:0x6309:word16] : word16)
  Class: Eq_127
  DataType: word16
  OrigDataType: word16
T_149: (in ah_22 : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_150: (in fn0C00_020F : ptr32)
  Class: Eq_131
  DataType: (ptr (fn T_151 (T_130, T_15)))
  OrigDataType: (ptr (fn T_151 (T_130, T_15)))
T_151: (in fn0C00_020F(ah_13, ds) : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_152: (in 0x6309 : word16)
  Class: Eq_152
  DataType: (memptr T_15 (struct (0 T_127 t0000)))
  OrigDataType: (memptr T_15 (struct (0 T_127 t0000)))
T_153: (in Mem21[ds:0x6309:word16] : word16)
  Class: Eq_127
  DataType: word16
  OrigDataType: word16
T_154: (in 0x0032 : word16)
  Class: Eq_154
  DataType: word16
  OrigDataType: word16
T_155: (in Mem21[ds:0x6309:word16] - 0x0032 : word16)
  Class: Eq_127
  DataType: word16
  OrigDataType: word16
T_156: (in Mem24[ds:0x6309:word16] : word16)
  Class: Eq_127
  DataType: word16
  OrigDataType: word16
T_157: (in 0x6309 : word16)
  Class: Eq_157
  DataType: (memptr T_15 (struct (0 T_158 t0000)))
  OrigDataType: (memptr T_15 (struct (0 T_158 t0000)))
T_158: (in Mem24[ds:0x6309:word16] : word16)
  Class: Eq_127
  DataType: word16
  OrigDataType: word16
T_159: (in 0x12FE : word16)
  Class: Eq_159
  DataType: word16
  OrigDataType: word16
T_160: (in SEQ(ds, 0x12FE) : ptr32)
  Class: Eq_160
  DataType: ptr32
  OrigDataType: ptr32
T_161: (in 0x0002 : word16)
  Class: Eq_161
  DataType: ui16
  OrigDataType: ui16
T_162: (in cx * 0x0002 : word16)
  Class: Eq_162
  DataType: ui16
  OrigDataType: ui16
T_163: (in SEQ(ds, 0x12FE)[cx * 0x0002] : word16)
  Class: Eq_127
  DataType: word16
  OrigDataType: word16
T_164: (in 0x0064 : word16)
  Class: Eq_127
  DataType: word16
  OrigDataType: word16
T_165: (in 0x6309 : word16)
  Class: Eq_165
  DataType: (memptr T_15 (struct (0 T_166 t0000)))
  OrigDataType: (memptr T_15 (struct (0 T_166 t0000)))
T_166: (in Mem30[ds:0x6309:word16] : word16)
  Class: Eq_127
  DataType: word16
  OrigDataType: word16
T_167: (in ah_31 : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_168: (in fn0C00_020F : ptr32)
  Class: Eq_131
  DataType: (ptr (fn T_169 (T_149, T_15)))
  OrigDataType: (ptr (fn T_169 (T_149, T_15)))
T_169: (in fn0C00_020F(ah_22, ds) : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_170: (in *ahOut : byte)
  Class: Eq_7
  DataType: 
  OrigDataType: 
T_171: (in 0x6309 : word16)
  Class: Eq_171
  DataType: 
  OrigDataType: 
T_172: (in Mem30[ds:0x6309:word16] : word16)
  Class: Eq_172
  DataType: 
  OrigDataType: 
T_173: (in 0x0064 : word16)
  Class: Eq_173
  DataType: 
  OrigDataType: 
T_174: (in Mem30[ds:0x6309:word16] + 0x0064 : word16)
  Class: Eq_174
  DataType: 
  OrigDataType: 
T_175: (in Mem33[ds:0x6309:word16] : word16)
  Class: Eq_174
  DataType: 
  OrigDataType: 
T_176: (in 0x02FD : word16)
  Class: Eq_176
  DataType: 
  OrigDataType: 
T_177: (in Mem33[ds:0x02FD:byte] : byte)
  Class: Eq_177
  DataType: 
  OrigDataType: 
T_178: (in 0x04 : byte)
  Class: Eq_177
  DataType: 
  OrigDataType: 
T_179: (in Mem33[ds:0x02FD:byte] <u 0x04 : bool)
  Class: Eq_179
  DataType: 
  OrigDataType: 
T_180: (in 0x6309 : word16)
  Class: Eq_180
  DataType: 
  OrigDataType: 
T_181: (in Mem33[ds:0x6309:word16] : word16)
  Class: Eq_181
  DataType: 
  OrigDataType: 
T_182: (in 0x22FE : word16)
  Class: Eq_182
  DataType: 
  OrigDataType: 
T_183: (in SEQ(ds, 0x22FE) : ptr32)
  Class: Eq_183
  DataType: 
  OrigDataType: 
T_184: (in 0x0002 : word16)
  Class: Eq_184
  DataType: 
  OrigDataType: 
T_185: (in cx * 0x0002 : word16)
  Class: Eq_185
  DataType: 
  OrigDataType: 
T_186: (in SEQ(ds, 0x22FE)[cx * 0x0002] : word16)
  Class: Eq_181
  DataType: 
  OrigDataType: 
T_187: (in 0x0001 : word16)
  Class: Eq_187
  DataType: 
  OrigDataType: 
T_188: (in cx << 0x0001 : word16)
  Class: Eq_188
  DataType: 
  OrigDataType: 
T_189: (in 0x000F : word16)
  Class: Eq_189
  DataType: 
  OrigDataType: 
T_190: (in 0x6309 : word16)
  Class: Eq_190
  DataType: 
  OrigDataType: 
T_191: (in Mem42[ds:0x6309:word16] : word16)
  Class: Eq_189
  DataType: 
  OrigDataType: 
T_192: (in ah_43 : byte)
  Class: Eq_192
  DataType: 
  OrigDataType: 
T_193: (in fn0C00_020F : ptr32)
  Class: Eq_131
  DataType: 
  OrigDataType: 
T_194: (in fn0C00_020F(ah_31, ds) : byte)
  Class: Eq_194
  DataType: 
  OrigDataType: 
T_195: (in *ahOut : byte)
  Class: Eq_194
  DataType: 
  OrigDataType: 
T_196: (in ah : byte)
  Class: Eq_196
  DataType: 
  OrigDataType: 
T_197: (in 0x22FE : word16)
  Class: Eq_197
  DataType: 
  OrigDataType: 
T_198: (in si + 0x22FE : word16)
  Class: Eq_198
  DataType: 
  OrigDataType: 
T_199: (in Mem0[ds:si + 0x22FE:word16] : word16)
  Class: Eq_199
  DataType: 
  OrigDataType: 
T_200: (in 0x0000 : word16)
  Class: Eq_199
  DataType: 
  OrigDataType: 
T_201: (in Mem0[ds:si + 0x22FE:word16] != 0x0000 : bool)
  Class: Eq_201
  DataType: 
  OrigDataType: 
T_202: (in bx_12 : word16)
  Class: Eq_202
  DataType: 
  OrigDataType: 
T_203: (in 0x22FE : word16)
  Class: Eq_203
  DataType: 
  OrigDataType: 
T_204: (in si + 0x22FE : word16)
  Class: Eq_204
  DataType: 
  OrigDataType: 
T_205: (in Mem0[ds:si + 0x22FE:word16] : word16)
  Class: Eq_202
  DataType: 
  OrigDataType: 
T_206: (in 0x42FE : word16)
  Class: Eq_206
  DataType: 
  OrigDataType: 
T_207: (in si + 0x42FE : word16)
  Class: Eq_207
  DataType: 
  OrigDataType: 
T_208: (in Mem0[ds:si + 0x42FE:word16] : word16)
  Class: Eq_208
  DataType: 
  OrigDataType: 
T_209: (in 0x0064 : word16)
  Class: Eq_209
  DataType: 
  OrigDataType: 
T_210: (in Mem0[ds:si + 0x42FE:word16] *s 0x0064 : int32)
  Class: Eq_210
  DataType: 
  OrigDataType: 
T_211: (in Mem0[ds:si + 0x42FE:word16] *s 0x0064 % bx_12 : int16)
  Class: Eq_211
  DataType: 
  OrigDataType: 
T_212: (in 0x0064 : word16)
  Class: Eq_212
  DataType: 
  OrigDataType: 
T_213: (in SEQ(Mem0[ds:si + 0x42FE:word16] *s 0x0064 % bx_12, 0x0064) : word32)
  Class: Eq_213
  DataType: 
  OrigDataType: 
T_214: (in SEQ(Mem0[ds:si + 0x42FE:word16] *s 0x0064 % bx_12, 0x0064) / bx_12 : int16)
  Class: Eq_214
  DataType: 
  OrigDataType: 
T_215: (in 0x00A0 : word16)
  Class: Eq_215
  DataType: 
  OrigDataType: 
T_216: (in SEQ(Mem0[ds:si + 0x42FE:word16] *s 0x0064 % bx_12, 0x0064) / bx_12 + 0x00A0 : word16)
  Class: Eq_216
  DataType: 
  OrigDataType: 
T_217: (in 0x6304 : word16)
  Class: Eq_217
  DataType: 
  OrigDataType: 
T_218: (in Mem17[ds:0x6304:word16] : word16)
  Class: Eq_216
  DataType: 
  OrigDataType: 
T_219: (in bx_21 : word16)
  Class: Eq_219
  DataType: 
  OrigDataType: 
T_220: (in 0x22FE : word16)
  Class: Eq_220
  DataType: 
  OrigDataType: 
T_221: (in si + 0x22FE : word16)
  Class: Eq_221
  DataType: 
  OrigDataType: 
T_222: (in Mem17[ds:si + 0x22FE:word16] : word16)
  Class: Eq_219
  DataType: 
  OrigDataType: 
T_223: (in 0x52FE : word16)
  Class: Eq_223
  DataType: 
  OrigDataType: 
T_224: (in si + 0x52FE : word16)
  Class: Eq_224
  DataType: 
  OrigDataType: 
T_225: (in Mem17[ds:si + 0x52FE:word16] : word16)
  Class: Eq_225
  DataType: 
  OrigDataType: 
T_226: (in 0x0064 : word16)
  Class: Eq_226
  DataType: 
  OrigDataType: 
T_227: (in Mem17[ds:si + 0x52FE:word16] *s 0x0064 : int32)
  Class: Eq_227
  DataType: 
  OrigDataType: 
T_228: (in Mem17[ds:si + 0x52FE:word16] *s 0x0064 % bx_21 : int16)
  Class: Eq_228
  DataType: 
  OrigDataType: 
T_229: (in 0x0064 : word16)
  Class: Eq_229
  DataType: 
  OrigDataType: 
T_230: (in SEQ(Mem17[ds:si + 0x52FE:word16] *s 0x0064 % bx_21, 0x0064) : word32)
  Class: Eq_230
  DataType: 
  OrigDataType: 
T_231: (in SEQ(Mem17[ds:si + 0x52FE:word16] *s 0x0064 % bx_21, 0x0064) / bx_21 : int16)
  Class: Eq_231
  DataType: 
  OrigDataType: 
T_232: (in 0x0064 : word16)
  Class: Eq_232
  DataType: 
  OrigDataType: 
T_233: (in SEQ(Mem17[ds:si + 0x52FE:word16] *s 0x0064 % bx_21, 0x0064) / bx_21 + 0x0064 : word16)
  Class: Eq_233
  DataType: 
  OrigDataType: 
T_234: (in 0x6306 : word16)
  Class: Eq_234
  DataType: 
  OrigDataType: 
T_235: (in Mem26[ds:0x6306:word16] : word16)
  Class: Eq_233
  DataType: 
  OrigDataType: 
T_236: (in ax_31 : word16)
  Class: Eq_236
  DataType: 
  OrigDataType: 
T_237: (in 0x6306 : word16)
  Class: Eq_237
  DataType: 
  OrigDataType: 
T_238: (in Mem26[ds:0x6306:word16] : word16)
  Class: Eq_238
  DataType: 
  OrigDataType: 
T_239: (in 0x0140 : word16)
  Class: Eq_239
  DataType: 
  OrigDataType: 
T_240: (in Mem26[ds:0x6306:word16] *s 0x0140 : int32)
  Class: Eq_240
  DataType: 
  OrigDataType: 
T_241: (in (word16) (Mem26[ds:0x6306:word16] *s 0x0140) : word16)
  Class: Eq_241
  DataType: 
  OrigDataType: 
T_242: (in 0x6304 : word16)
  Class: Eq_242
  DataType: 
  OrigDataType: 
T_243: (in Mem26[ds:0x6304:word16] : word16)
  Class: Eq_243
  DataType: 
  OrigDataType: 
T_244: (in (word16) (Mem26[ds:0x6306:word16] *s 0x0140) + Mem26[ds:0x6304:word16] : word16)
  Class: Eq_236
  DataType: 
  OrigDataType: 
T_245: (in ah_33 : byte)
  Class: Eq_245
  DataType: 
  OrigDataType: 
T_246: (in SLICE(ax_31, byte, 8) : byte)
  Class: Eq_245
  DataType: 
  OrigDataType: 
T_247: (in 0x6304 : word16)
  Class: Eq_247
  DataType: 
  OrigDataType: 
T_248: (in Mem26[ds:0x6304:word16] : word16)
  Class: Eq_248
  DataType: 
  OrigDataType: 
T_249: (in 0x013F : word16)
  Class: Eq_248
  DataType: 
  OrigDataType: 
T_250: (in Mem26[ds:0x6304:word16] >u 0x013F : bool)
  Class: Eq_250
  DataType: 
  OrigDataType: 
T_251: (in 0x22FE : word16)
  Class: Eq_251
  DataType: 
  OrigDataType: 
T_252: (in si + 0x22FE : word16)
  Class: Eq_252
  DataType: 
  OrigDataType: 
T_253: (in Mem0[ds:si + 0x22FE:word16] : word16)
  Class: Eq_253
  DataType: 
  OrigDataType: 
T_254: (in 0x0001 : word16)
  Class: Eq_254
  DataType: 
  OrigDataType: 
T_255: (in Mem0[ds:si + 0x22FE:word16] + 0x0001 : word16)
  Class: Eq_255
  DataType: 
  OrigDataType: 
T_256: (in 0x22FE : word16)
  Class: Eq_256
  DataType: 
  OrigDataType: 
T_257: (in si + 0x22FE : word16)
  Class: Eq_257
  DataType: 
  OrigDataType: 
T_258: (in Mem70[ds:si + 0x22FE:word16] : word16)
  Class: Eq_255
  DataType: 
  OrigDataType: 
T_259: (in 0x6306 : word16)
  Class: Eq_259
  DataType: 
  OrigDataType: 
T_260: (in Mem26[ds:0x6306:word16] : word16)
  Class: Eq_260
  DataType: 
  OrigDataType: 
T_261: (in 0x00C7 : word16)
  Class: Eq_260
  DataType: 
  OrigDataType: 
T_262: (in Mem26[ds:0x6306:word16] >u 0x00C7 : bool)
  Class: Eq_262
  DataType: 
  OrigDataType: 
T_263: (in al_47 : byte)
  Class: Eq_263
  DataType: 
  OrigDataType: 
T_264: (in 0x6308 : word16)
  Class: Eq_264
  DataType: 
  OrigDataType: 
T_265: (in Mem26[ds:0x6308:byte] : byte)
  Class: Eq_263
  DataType: 
  OrigDataType: 
T_266: (in 0x0000 : word16)
  Class: Eq_266
  DataType: 
  OrigDataType: 
T_267: (in ax_31 + 0x0000 : word16)
  Class: Eq_267
  DataType: 
  OrigDataType: 
T_268: (in Mem50[es:ax_31 + 0x0000:byte] : byte)
  Class: Eq_263
  DataType: 
  OrigDataType: 
T_269: (in 0x02FD : word16)
  Class: Eq_269
  DataType: 
  OrigDataType: 
T_270: (in Mem50[ds:0x02FD:byte] : byte)
  Class: Eq_270
  DataType: 
  OrigDataType: 
T_271: (in 0x00 : byte)
  Class: Eq_270
  DataType: 
  OrigDataType: 
T_272: (in Mem50[ds:0x02FD:byte] == 0x00 : bool)
  Class: Eq_272
  DataType: 
  OrigDataType: 
T_273: (in 0x02FD : word16)
  Class: Eq_273
  DataType: 
  OrigDataType: 
T_274: (in Mem50[ds:0x02FD:byte] : byte)
  Class: Eq_274
  DataType: 
  OrigDataType: 
T_275: (in 0x03 : byte)
  Class: Eq_274
  DataType: 
  OrigDataType: 
T_276: (in Mem50[ds:0x02FD:byte] == 0x03 : bool)
  Class: Eq_276
  DataType: 
  OrigDataType: 
T_277: (in 0x02FD : word16)
  Class: Eq_277
  DataType: 
  OrigDataType: 
T_278: (in Mem50[ds:0x02FD:byte] : byte)
  Class: Eq_278
  DataType: 
  OrigDataType: 
T_279: (in 0x04 : byte)
  Class: Eq_278
  DataType: 
  OrigDataType: 
T_280: (in Mem50[ds:0x02FD:byte] == 0x04 : bool)
  Class: Eq_280
  DataType: 
  OrigDataType: 
T_281: (in 0x02FD : word16)
  Class: Eq_281
  DataType: 
  OrigDataType: 
T_282: (in Mem50[ds:0x02FD:byte] : byte)
  Class: Eq_282
  DataType: 
  OrigDataType: 
T_283: (in 0x07 : byte)
  Class: Eq_282
  DataType: 
  OrigDataType: 
T_284: (in Mem50[ds:0x02FD:byte] == 0x07 : bool)
  Class: Eq_284
  DataType: 
  OrigDataType: 
T_285: (in 0x0001 : word16)
  Class: Eq_285
  DataType: 
  OrigDataType: 
T_286: (in ax_31 + 0x0001 : word16)
  Class: Eq_286
  DataType: 
  OrigDataType: 
T_287: (in Mem61[es:ax_31 + 0x0001:byte] : byte)
  Class: Eq_263
  DataType: 
  OrigDataType: 
T_288: (in 0x0140 : word16)
  Class: Eq_288
  DataType: 
  OrigDataType: 
T_289: (in ax_31 + 0x0140 : word16)
  Class: Eq_289
  DataType: 
  OrigDataType: 
T_290: (in Mem65[es:ax_31 + 0x0140:byte] : byte)
  Class: Eq_263
  DataType: 
  OrigDataType: 
T_291: (in 0x0141 : word16)
  Class: Eq_291
  DataType: 
  OrigDataType: 
T_292: (in ax_31 + 0x0141 : word16)
  Class: Eq_292
  DataType: 
  OrigDataType: 
T_293: (in Mem67[es:ax_31 + 0x0141:byte] : byte)
  Class: Eq_263
  DataType: 
  OrigDataType: 
T_294:
  Class: Eq_294
  DataType: 
  OrigDataType: (struct 0002 (0 T_126 t0000))
T_295:
  Class: Eq_295
  DataType: 
  OrigDataType: (struct 0002 (0 T_145 t0000))
T_296:
  Class: Eq_296
  DataType: 
  OrigDataType: (struct 0002 (0 T_163 t0000))
*/
