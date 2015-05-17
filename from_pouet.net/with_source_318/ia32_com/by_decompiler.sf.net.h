// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_318/ia32_com/subject.exe
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
T_11: (in fn0C00_021B : ptr32)
  Class: Eq_11
  DataType: (ptr (fn T_19 (T_9, T_7, T_17, T_18)))
  OrigDataType: (ptr (fn T_19 (T_9, T_7, T_17, T_18)))
T_12: (in signature of fn0C00_021B : void)
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
  DataType: (ptr (segment (2F7 (arr T_291) a02F7) (12F7 (arr T_292) a12F7) (32F7 (arr T_290) a32F7) (6302 T_123 t6302)))
  OrigDataType: (ptr (segment (2F7 (arr T_291) a02F7) (12F7 (arr T_292) a12F7) (32F7 (arr T_290) a32F7) (6302 T_123 t6302)))
T_16: (in ahOut : ptr16)
  Class: Eq_16
  DataType: ptr16
  OrigDataType: ptr16
T_17: (in ds : selector)
  Class: Eq_15
  DataType: (ptr (segment (2F6 T_39 t02F6) (32F7 T_43 t32F7) (6301 T_24 t6301)))
  OrigDataType: (ptr (segment (2F6 T_39 t02F6) (32F7 T_43 t32F7) (6301 T_24 t6301)))
T_18: (in out ah_11 : ptr16)
  Class: Eq_16
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_19: (in fn0C00_021B(cx_10, ah_11, ds, out ah_11) : word16)
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
T_24: (in 0x00 : byte)
  Class: Eq_24
  DataType: byte
  OrigDataType: byte
T_25: (in 0x6301 : word16)
  Class: Eq_25
  DataType: (memptr T_17 (struct (0 T_26 t0000)))
  OrigDataType: (memptr T_17 (struct (0 T_26 t0000)))
T_26: (in Mem20[ds:0x6301:byte] : byte)
  Class: Eq_24
  DataType: byte
  OrigDataType: byte
T_27: (in si_18 : word16)
  Class: Eq_27
  DataType: (memptr T_17 (struct (32F7 T_63 t32F7)))
  OrigDataType: (memptr T_17 (struct (32F7 T_63 t32F7)))
T_28: (in 0x1000 : word16)
  Class: Eq_27
  DataType: word16
  OrigDataType: word16
T_29: (in ah_21 : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_30: (in fn0C00_0277 : ptr32)
  Class: Eq_30
  DataType: (ptr (fn T_37 (T_35, T_36, T_17)))
  OrigDataType: (ptr (fn T_37 (T_35, T_36, T_17)))
T_31: (in signature of fn0C00_0277 : void)
  Class: Eq_30
  DataType: 
  OrigDataType: 
T_32: (in si : word16)
  Class: Eq_32
  DataType: word16
  OrigDataType: word16
T_33: (in es : selector)
  Class: Eq_33
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_34: (in ds : selector)
  Class: Eq_15
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_35: (in 0x1000 : word16)
  Class: Eq_32
  DataType: word16
  OrigDataType: word16
T_36: (in 0xA000 : selector)
  Class: Eq_33
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_37: (in fn0C00_0277(0x1000, 0xA000, ds) : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_38: (in 0x02F6 : word16)
  Class: Eq_38
  DataType: (memptr T_17 (struct (0 T_39 t0000)))
  OrigDataType: (memptr T_17 (struct (0 T_39 t0000)))
T_39: (in Mem20[ds:0x02F6:byte] : byte)
  Class: Eq_39
  DataType: bcu8
  OrigDataType: bcu8
T_40: (in 0x04 : byte)
  Class: Eq_39
  DataType: bcu8
  OrigDataType: bcu8
T_41: (in Mem20[ds:0x02F6:byte] >=u 0x04 : bool)
  Class: Eq_41
  DataType: bool
  OrigDataType: bool
T_42: (in 0x32F7 : word16)
  Class: Eq_42
  DataType: (memptr T_17 (struct (0 T_43 t0000)))
  OrigDataType: (memptr T_17 (struct (0 T_43 t0000)))
T_43: (in Mem20[ds:0x32F7:word16] : word16)
  Class: Eq_43
  DataType: word16
  OrigDataType: word16
T_44: (in 0x0001 : word16)
  Class: Eq_44
  DataType: word16
  OrigDataType: word16
T_45: (in Mem20[ds:0x32F7:word16] + 0x0001 : word16)
  Class: Eq_43
  DataType: word16
  OrigDataType: word16
T_46: (in 0x32F7 : word16)
  Class: Eq_46
  DataType: (memptr T_17 (struct (0 T_47 t0000)))
  OrigDataType: (memptr T_17 (struct (0 T_47 t0000)))
T_47: (in Mem53[ds:0x32F7:word16] : word16)
  Class: Eq_43
  DataType: word16
  OrigDataType: word16
T_48: (in 0x32F7 : word16)
  Class: Eq_48
  DataType: (memptr T_17 (struct (0 T_49 t0000)))
  OrigDataType: (memptr T_17 (struct (0 T_49 t0000)))
T_49: (in Mem53[ds:0x32F7:word16] : word16)
  Class: Eq_43
  DataType: cups16
  OrigDataType: cups16
T_50: (in 0x00C8 : word16)
  Class: Eq_43
  DataType: cups16
  OrigDataType: cups16
T_51: (in Mem53[ds:0x32F7:word16] <u 0x00C8 : bool)
  Class: Eq_51
  DataType: bool
  OrigDataType: bool
T_52: (in v12_48 : word16)
  Class: Eq_43
  DataType: word16
  OrigDataType: word16
T_53: (in 0x32F7 : word16)
  Class: Eq_53
  DataType: (memptr T_17 (struct (0 T_54 t0000)))
  OrigDataType: (memptr T_17 (struct (0 T_54 t0000)))
T_54: (in Mem20[ds:0x32F7:word16] : word16)
  Class: Eq_43
  DataType: word16
  OrigDataType: word16
T_55: (in 0x0001 : word16)
  Class: Eq_55
  DataType: word16
  OrigDataType: word16
T_56: (in Mem20[ds:0x32F7:word16] - 0x0001 : word16)
  Class: Eq_43
  DataType: word16
  OrigDataType: word16
T_57: (in 0x32F7 : word16)
  Class: Eq_57
  DataType: (memptr T_17 (struct (0 T_58 t0000)))
  OrigDataType: (memptr T_17 (struct (0 T_58 t0000)))
T_58: (in Mem49[ds:0x32F7:word16] : word16)
  Class: Eq_43
  DataType: word16
  OrigDataType: word16
T_59: (in 0x0000 : word16)
  Class: Eq_43
  DataType: word16
  OrigDataType: word16
T_60: (in v12_48 != 0x0000 : bool)
  Class: Eq_60
  DataType: bool
  OrigDataType: bool
T_61: (in 0x32F7 : word16)
  Class: Eq_61
  DataType: word16
  OrigDataType: word16
T_62: (in si_18 + 0x32F7 : word16)
  Class: Eq_62
  DataType: word16
  OrigDataType: word16
T_63: (in Mem20[ds:si_18 + 0x32F7:byte] : byte)
  Class: Eq_63
  DataType: byte
  OrigDataType: byte
T_64: (in 0x28 : byte)
  Class: Eq_63
  DataType: byte
  OrigDataType: byte
T_65: (in Mem20[ds:si_18 + 0x32F7:byte] == 0x28 : bool)
  Class: Eq_65
  DataType: bool
  OrigDataType: bool
T_66: (in ah_44 : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_67: (in fn0C00_021B : ptr32)
  Class: Eq_11
  DataType: (ptr (fn T_70 (T_68, T_29, T_17, T_69)))
  OrigDataType: (ptr (fn T_70 (T_68, T_29, T_17, T_69)))
T_68: (in 0x0800 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_69: (in out ah_44 : ptr16)
  Class: Eq_16
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_70: (in fn0C00_021B(0x0800, ah_21, ds, out ah_44) : word16)
  Class: Eq_70
  DataType: word16
  OrigDataType: word16
T_71: (in ah_46 : byte)
  Class: Eq_71
  DataType: byte
  OrigDataType: byte
T_72: (in fn0C00_021B : ptr32)
  Class: Eq_11
  DataType: (ptr (fn T_75 (T_73, T_66, T_17, T_74)))
  OrigDataType: (ptr (fn T_75 (T_73, T_66, T_17, T_74)))
T_73: (in 0x0800 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_74: (in out ah_46 : ptr16)
  Class: Eq_16
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_75: (in fn0C00_021B(0x0800, ah_44, ds, out ah_46) : word16)
  Class: Eq_27
  DataType: word16
  OrigDataType: word16
T_76: (in 0x32F7 : word16)
  Class: Eq_76
  DataType: word16
  OrigDataType: word16
T_77: (in si_18 + 0x32F7 : word16)
  Class: Eq_77
  DataType: word16
  OrigDataType: word16
T_78: (in Mem20[ds:si_18 + 0x32F7:word16] : word16)
  Class: Eq_63
  DataType: word16
  OrigDataType: word16
T_79: (in ss : selector)
  Class: Eq_79
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_80: (in fp : ptr16)
  Class: Eq_80
  DataType: (union (ptr16 u0) ((memptr T_79 (struct (FFFFFFFE T_83 tFFFFFFFE))) u1))
  OrigDataType: (union (ptr16 u0) ((memptr T_79 (struct (FFFFFFFE T_83 tFFFFFFFE))) u1))
T_81: (in 0x0002 : word16)
  Class: Eq_81
  DataType: word16
  OrigDataType: word16
T_82: (in fp - 0x0002 : word16)
  Class: Eq_82
  DataType: word16
  OrigDataType: word16
T_83: (in Mem33[ss:fp - 0x0002:word16] : word16)
  Class: Eq_63
  DataType: word16
  OrigDataType: word16
T_84: (in 0xA000 : word16)
  Class: Eq_24
  DataType: word16
  OrigDataType: word16
T_85: (in 0x6301 : word16)
  Class: Eq_85
  DataType: (memptr T_17 (struct (0 T_86 t0000)))
  OrigDataType: (memptr T_17 (struct (0 T_86 t0000)))
T_86: (in Mem35[ds:0x6301:word16] : word16)
  Class: Eq_24
  DataType: word16
  OrigDataType: word16
T_87: (in 0x32F7 : word16)
  Class: Eq_87
  DataType: word16
  OrigDataType: word16
T_88: (in si_18 + 0x32F7 : word16)
  Class: Eq_88
  DataType: word16
  OrigDataType: word16
T_89: (in Mem20[ds:si_18 + 0x32F7:byte] : byte)
  Class: Eq_63
  DataType: byte
  OrigDataType: byte
T_90: (in 0x01 : byte)
  Class: Eq_90
  DataType: byte
  OrigDataType: byte
T_91: (in Mem20[ds:si_18 + 0x32F7:byte] + 0x01 : byte)
  Class: Eq_63
  DataType: byte
  OrigDataType: byte
T_92: (in 0x32F7 : word16)
  Class: Eq_92
  DataType: word16
  OrigDataType: word16
T_93: (in si_18 + 0x32F7 : word16)
  Class: Eq_93
  DataType: word16
  OrigDataType: word16
T_94: (in Mem38[ds:si_18 + 0x32F7:byte] : byte)
  Class: Eq_63
  DataType: byte
  OrigDataType: byte
T_95: (in ah : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_96: (in __inb : ptr32)
  Class: Eq_96
  DataType: (ptr (fn T_98 (T_97)))
  OrigDataType: (ptr (fn T_98 (T_97)))
T_97: (in 0x40 : byte)
  Class: Eq_97
  DataType: byte
  OrigDataType: byte
T_98: (in __inb(0x40) : byte)
  Class: Eq_98
  DataType: byte
  OrigDataType: byte
T_99: (in __inb : ptr32)
  Class: Eq_99
  DataType: (ptr (fn T_101 (T_100)))
  OrigDataType: (ptr (fn T_101 (T_100)))
T_100: (in 0x40 : byte)
  Class: Eq_100
  DataType: byte
  OrigDataType: byte
T_101: (in __inb(0x40) : byte)
  Class: Eq_101
  DataType: byte
  OrigDataType: byte
T_102: (in bx_11 : word16)
  Class: Eq_102
  DataType: int16
  OrigDataType: int16
T_103: (in ds : selector)
  Class: Eq_15
  DataType: (ptr (segment (6302 T_102 t6302)))
  OrigDataType: (ptr (segment (6302 T_102 t6302)))
T_104: (in 0x6302 : word16)
  Class: Eq_104
  DataType: (memptr T_103 (struct (0 T_105 t0000)))
  OrigDataType: (memptr T_103 (struct (0 T_105 t0000)))
T_105: (in Mem0[ds:0x6302:word16] : word16)
  Class: Eq_102
  DataType: word16
  OrigDataType: word16
T_106: (in dx_12 : word16)
  Class: Eq_102
  DataType: word16
  OrigDataType: word16
T_107: (in 0x0000 : word16)
  Class: Eq_107
  DataType: word16
  OrigDataType: word16
T_108: (in ax : word16)
  Class: Eq_108
  DataType: word16
  OrigDataType: word16
T_109: (in SEQ(0x0000, ax) : word32)
  Class: Eq_109
  DataType: word32
  OrigDataType: word32
T_110: (in SEQ(0x0000, ax) % bx_11 : int16)
  Class: Eq_102
  DataType: int16
  OrigDataType: int16
T_111: (in 0x6302 : word16)
  Class: Eq_111
  DataType: (memptr T_103 (struct (0 T_112 t0000)))
  OrigDataType: (memptr T_103 (struct (0 T_112 t0000)))
T_112: (in Mem18[ds:0x6302:word16] : word16)
  Class: Eq_102
  DataType: word16
  OrigDataType: word16
T_113: (in SEQ(dx_12, ax) : word32)
  Class: Eq_113
  DataType: int32
  OrigDataType: int32
T_114: (in SEQ(dx_12, ax) / bx_11 : int16)
  Class: Eq_114
  DataType: int16
  OrigDataType: int16
T_115: (in SLICE(SEQ(dx_12, ax) / bx_11, byte, 8) : byte)
  Class: Eq_115
  DataType: byte
  OrigDataType: byte
T_116: (in si : word16)
  Class: Eq_116
  DataType: word16
  OrigDataType: word16
T_117: (in 0x10 : byte)
  Class: Eq_117
  DataType: byte
  OrigDataType: byte
T_118: (in 0x32F7 : word16)
  Class: Eq_118
  DataType: word16
  OrigDataType: word16
T_119: (in SEQ(ds, 0x32F7) : ptr32)
  Class: Eq_119
  DataType: ptr32
  OrigDataType: ptr32
T_120: (in 0x0002 : word16)
  Class: Eq_120
  DataType: ui16
  OrigDataType: ui16
T_121: (in cx * 0x0002 : word16)
  Class: Eq_121
  DataType: ui16
  OrigDataType: ui16
T_122: (in SEQ(ds, 0x32F7)[cx * 0x0002] : byte)
  Class: Eq_117
  DataType: byte
  OrigDataType: byte
T_123: (in 0x00A0 : word16)
  Class: Eq_123
  DataType: word16
  OrigDataType: word16
T_124: (in 0x6302 : word16)
  Class: Eq_124
  DataType: (memptr T_15 (struct (0 T_125 t0000)))
  OrigDataType: (memptr T_15 (struct (0 T_125 t0000)))
T_125: (in Mem11[ds:0x6302:word16] : word16)
  Class: Eq_123
  DataType: word16
  OrigDataType: word16
T_126: (in ah_13 : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_127: (in fn0C00_0208 : ptr32)
  Class: Eq_127
  DataType: (ptr (fn T_129 (T_14, T_15)))
  OrigDataType: (ptr (fn T_129 (T_14, T_15)))
T_128: (in signature of fn0C00_0208 : void)
  Class: Eq_127
  DataType: 
  OrigDataType: 
T_129: (in fn0C00_0208(ah, ds) : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_130: (in 0x6302 : word16)
  Class: Eq_130
  DataType: (memptr T_15 (struct (0 T_123 t0000)))
  OrigDataType: (memptr T_15 (struct (0 T_123 t0000)))
T_131: (in Mem11[ds:0x6302:word16] : word16)
  Class: Eq_123
  DataType: word16
  OrigDataType: word16
T_132: (in 0x0050 : word16)
  Class: Eq_132
  DataType: word16
  OrigDataType: word16
T_133: (in Mem11[ds:0x6302:word16] - 0x0050 : word16)
  Class: Eq_123
  DataType: word16
  OrigDataType: word16
T_134: (in Mem15[ds:0x6302:word16] : word16)
  Class: Eq_123
  DataType: word16
  OrigDataType: word16
T_135: (in 0x6302 : word16)
  Class: Eq_135
  DataType: (memptr T_15 (struct (0 T_136 t0000)))
  OrigDataType: (memptr T_15 (struct (0 T_136 t0000)))
T_136: (in Mem15[ds:0x6302:word16] : word16)
  Class: Eq_123
  DataType: word16
  OrigDataType: word16
T_137: (in 0x02F7 : word16)
  Class: Eq_137
  DataType: word16
  OrigDataType: word16
T_138: (in SEQ(ds, 0x02F7) : ptr32)
  Class: Eq_138
  DataType: ptr32
  OrigDataType: ptr32
T_139: (in 0x0002 : word16)
  Class: Eq_139
  DataType: ui16
  OrigDataType: ui16
T_140: (in cx * 0x0002 : word16)
  Class: Eq_140
  DataType: ui16
  OrigDataType: ui16
T_141: (in SEQ(ds, 0x02F7)[cx * 0x0002] : word16)
  Class: Eq_123
  DataType: word16
  OrigDataType: word16
T_142: (in 0x0064 : word16)
  Class: Eq_123
  DataType: word16
  OrigDataType: word16
T_143: (in 0x6302 : word16)
  Class: Eq_143
  DataType: (memptr T_15 (struct (0 T_144 t0000)))
  OrigDataType: (memptr T_15 (struct (0 T_144 t0000)))
T_144: (in Mem21[ds:0x6302:word16] : word16)
  Class: Eq_123
  DataType: word16
  OrigDataType: word16
T_145: (in ah_22 : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_146: (in fn0C00_0208 : ptr32)
  Class: Eq_127
  DataType: (ptr (fn T_147 (T_126, T_15)))
  OrigDataType: (ptr (fn T_147 (T_126, T_15)))
T_147: (in fn0C00_0208(ah_13, ds) : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_148: (in 0x6302 : word16)
  Class: Eq_148
  DataType: (memptr T_15 (struct (0 T_123 t0000)))
  OrigDataType: (memptr T_15 (struct (0 T_123 t0000)))
T_149: (in Mem21[ds:0x6302:word16] : word16)
  Class: Eq_123
  DataType: word16
  OrigDataType: word16
T_150: (in 0x0032 : word16)
  Class: Eq_150
  DataType: word16
  OrigDataType: word16
T_151: (in Mem21[ds:0x6302:word16] - 0x0032 : word16)
  Class: Eq_123
  DataType: word16
  OrigDataType: word16
T_152: (in Mem24[ds:0x6302:word16] : word16)
  Class: Eq_123
  DataType: word16
  OrigDataType: word16
T_153: (in 0x6302 : word16)
  Class: Eq_153
  DataType: (memptr T_15 (struct (0 T_154 t0000)))
  OrigDataType: (memptr T_15 (struct (0 T_154 t0000)))
T_154: (in Mem24[ds:0x6302:word16] : word16)
  Class: Eq_123
  DataType: word16
  OrigDataType: word16
T_155: (in 0x12F7 : word16)
  Class: Eq_155
  DataType: word16
  OrigDataType: word16
T_156: (in SEQ(ds, 0x12F7) : ptr32)
  Class: Eq_156
  DataType: ptr32
  OrigDataType: ptr32
T_157: (in 0x0002 : word16)
  Class: Eq_157
  DataType: ui16
  OrigDataType: ui16
T_158: (in cx * 0x0002 : word16)
  Class: Eq_158
  DataType: ui16
  OrigDataType: ui16
T_159: (in SEQ(ds, 0x12F7)[cx * 0x0002] : word16)
  Class: Eq_123
  DataType: word16
  OrigDataType: word16
T_160: (in 0x0064 : word16)
  Class: Eq_123
  DataType: word16
  OrigDataType: word16
T_161: (in 0x6302 : word16)
  Class: Eq_161
  DataType: (memptr T_15 (struct (0 T_162 t0000)))
  OrigDataType: (memptr T_15 (struct (0 T_162 t0000)))
T_162: (in Mem30[ds:0x6302:word16] : word16)
  Class: Eq_123
  DataType: word16
  OrigDataType: word16
T_163: (in ah_31 : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_164: (in fn0C00_0208 : ptr32)
  Class: Eq_127
  DataType: (ptr (fn T_165 (T_145, T_15)))
  OrigDataType: (ptr (fn T_165 (T_145, T_15)))
T_165: (in fn0C00_0208(ah_22, ds) : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_166: (in *ahOut : byte)
  Class: Eq_7
  DataType: 
  OrigDataType: 
T_167: (in 0x6302 : word16)
  Class: Eq_167
  DataType: 
  OrigDataType: 
T_168: (in Mem30[ds:0x6302:word16] : word16)
  Class: Eq_168
  DataType: 
  OrigDataType: 
T_169: (in 0x0064 : word16)
  Class: Eq_169
  DataType: 
  OrigDataType: 
T_170: (in Mem30[ds:0x6302:word16] + 0x0064 : word16)
  Class: Eq_170
  DataType: 
  OrigDataType: 
T_171: (in Mem33[ds:0x6302:word16] : word16)
  Class: Eq_170
  DataType: 
  OrigDataType: 
T_172: (in 0x02F6 : word16)
  Class: Eq_172
  DataType: 
  OrigDataType: 
T_173: (in Mem33[ds:0x02F6:byte] : byte)
  Class: Eq_173
  DataType: 
  OrigDataType: 
T_174: (in 0x04 : byte)
  Class: Eq_173
  DataType: 
  OrigDataType: 
T_175: (in Mem33[ds:0x02F6:byte] <u 0x04 : bool)
  Class: Eq_175
  DataType: 
  OrigDataType: 
T_176: (in 0x6302 : word16)
  Class: Eq_176
  DataType: 
  OrigDataType: 
T_177: (in Mem33[ds:0x6302:word16] : word16)
  Class: Eq_177
  DataType: 
  OrigDataType: 
T_178: (in 0x22F7 : word16)
  Class: Eq_178
  DataType: 
  OrigDataType: 
T_179: (in SEQ(ds, 0x22F7) : ptr32)
  Class: Eq_179
  DataType: 
  OrigDataType: 
T_180: (in 0x0002 : word16)
  Class: Eq_180
  DataType: 
  OrigDataType: 
T_181: (in cx * 0x0002 : word16)
  Class: Eq_181
  DataType: 
  OrigDataType: 
T_182: (in SEQ(ds, 0x22F7)[cx * 0x0002] : word16)
  Class: Eq_177
  DataType: 
  OrigDataType: 
T_183: (in 0x0001 : word16)
  Class: Eq_183
  DataType: 
  OrigDataType: 
T_184: (in cx << 0x0001 : word16)
  Class: Eq_184
  DataType: 
  OrigDataType: 
T_185: (in 0x000F : word16)
  Class: Eq_185
  DataType: 
  OrigDataType: 
T_186: (in 0x6302 : word16)
  Class: Eq_186
  DataType: 
  OrigDataType: 
T_187: (in Mem42[ds:0x6302:word16] : word16)
  Class: Eq_185
  DataType: 
  OrigDataType: 
T_188: (in ah_43 : byte)
  Class: Eq_188
  DataType: 
  OrigDataType: 
T_189: (in fn0C00_0208 : ptr32)
  Class: Eq_127
  DataType: 
  OrigDataType: 
T_190: (in fn0C00_0208(ah_31, ds) : byte)
  Class: Eq_190
  DataType: 
  OrigDataType: 
T_191: (in *ahOut : byte)
  Class: Eq_190
  DataType: 
  OrigDataType: 
T_192: (in ah : byte)
  Class: Eq_192
  DataType: 
  OrigDataType: 
T_193: (in 0x22F7 : word16)
  Class: Eq_193
  DataType: 
  OrigDataType: 
T_194: (in si + 0x22F7 : word16)
  Class: Eq_194
  DataType: 
  OrigDataType: 
T_195: (in Mem0[ds:si + 0x22F7:word16] : word16)
  Class: Eq_195
  DataType: 
  OrigDataType: 
T_196: (in 0x0000 : word16)
  Class: Eq_195
  DataType: 
  OrigDataType: 
T_197: (in Mem0[ds:si + 0x22F7:word16] != 0x0000 : bool)
  Class: Eq_197
  DataType: 
  OrigDataType: 
T_198: (in bx_12 : word16)
  Class: Eq_198
  DataType: 
  OrigDataType: 
T_199: (in 0x22F7 : word16)
  Class: Eq_199
  DataType: 
  OrigDataType: 
T_200: (in si + 0x22F7 : word16)
  Class: Eq_200
  DataType: 
  OrigDataType: 
T_201: (in Mem0[ds:si + 0x22F7:word16] : word16)
  Class: Eq_198
  DataType: 
  OrigDataType: 
T_202: (in 0x42F7 : word16)
  Class: Eq_202
  DataType: 
  OrigDataType: 
T_203: (in si + 0x42F7 : word16)
  Class: Eq_203
  DataType: 
  OrigDataType: 
T_204: (in Mem0[ds:si + 0x42F7:word16] : word16)
  Class: Eq_204
  DataType: 
  OrigDataType: 
T_205: (in 0x0064 : word16)
  Class: Eq_205
  DataType: 
  OrigDataType: 
T_206: (in Mem0[ds:si + 0x42F7:word16] *s 0x0064 : int32)
  Class: Eq_206
  DataType: 
  OrigDataType: 
T_207: (in Mem0[ds:si + 0x42F7:word16] *s 0x0064 % bx_12 : int16)
  Class: Eq_207
  DataType: 
  OrigDataType: 
T_208: (in 0x0064 : word16)
  Class: Eq_208
  DataType: 
  OrigDataType: 
T_209: (in SEQ(Mem0[ds:si + 0x42F7:word16] *s 0x0064 % bx_12, 0x0064) : word32)
  Class: Eq_209
  DataType: 
  OrigDataType: 
T_210: (in SEQ(Mem0[ds:si + 0x42F7:word16] *s 0x0064 % bx_12, 0x0064) / bx_12 : int16)
  Class: Eq_210
  DataType: 
  OrigDataType: 
T_211: (in 0x00A0 : word16)
  Class: Eq_211
  DataType: 
  OrigDataType: 
T_212: (in SEQ(Mem0[ds:si + 0x42F7:word16] *s 0x0064 % bx_12, 0x0064) / bx_12 + 0x00A0 : word16)
  Class: Eq_212
  DataType: 
  OrigDataType: 
T_213: (in 0x62FD : word16)
  Class: Eq_213
  DataType: 
  OrigDataType: 
T_214: (in Mem17[ds:0x62FD:word16] : word16)
  Class: Eq_212
  DataType: 
  OrigDataType: 
T_215: (in bx_21 : word16)
  Class: Eq_215
  DataType: 
  OrigDataType: 
T_216: (in 0x22F7 : word16)
  Class: Eq_216
  DataType: 
  OrigDataType: 
T_217: (in si + 0x22F7 : word16)
  Class: Eq_217
  DataType: 
  OrigDataType: 
T_218: (in Mem17[ds:si + 0x22F7:word16] : word16)
  Class: Eq_215
  DataType: 
  OrigDataType: 
T_219: (in 0x52F7 : word16)
  Class: Eq_219
  DataType: 
  OrigDataType: 
T_220: (in si + 0x52F7 : word16)
  Class: Eq_220
  DataType: 
  OrigDataType: 
T_221: (in Mem17[ds:si + 0x52F7:word16] : word16)
  Class: Eq_221
  DataType: 
  OrigDataType: 
T_222: (in 0x0064 : word16)
  Class: Eq_222
  DataType: 
  OrigDataType: 
T_223: (in Mem17[ds:si + 0x52F7:word16] *s 0x0064 : int32)
  Class: Eq_223
  DataType: 
  OrigDataType: 
T_224: (in Mem17[ds:si + 0x52F7:word16] *s 0x0064 % bx_21 : int16)
  Class: Eq_224
  DataType: 
  OrigDataType: 
T_225: (in 0x0064 : word16)
  Class: Eq_225
  DataType: 
  OrigDataType: 
T_226: (in SEQ(Mem17[ds:si + 0x52F7:word16] *s 0x0064 % bx_21, 0x0064) : word32)
  Class: Eq_226
  DataType: 
  OrigDataType: 
T_227: (in SEQ(Mem17[ds:si + 0x52F7:word16] *s 0x0064 % bx_21, 0x0064) / bx_21 : int16)
  Class: Eq_227
  DataType: 
  OrigDataType: 
T_228: (in 0x0064 : word16)
  Class: Eq_228
  DataType: 
  OrigDataType: 
T_229: (in SEQ(Mem17[ds:si + 0x52F7:word16] *s 0x0064 % bx_21, 0x0064) / bx_21 + 0x0064 : word16)
  Class: Eq_229
  DataType: 
  OrigDataType: 
T_230: (in 0x62FF : word16)
  Class: Eq_230
  DataType: 
  OrigDataType: 
T_231: (in Mem26[ds:0x62FF:word16] : word16)
  Class: Eq_229
  DataType: 
  OrigDataType: 
T_232: (in ax_31 : word16)
  Class: Eq_232
  DataType: 
  OrigDataType: 
T_233: (in 0x62FF : word16)
  Class: Eq_233
  DataType: 
  OrigDataType: 
T_234: (in Mem26[ds:0x62FF:word16] : word16)
  Class: Eq_234
  DataType: 
  OrigDataType: 
T_235: (in 0x0140 : word16)
  Class: Eq_235
  DataType: 
  OrigDataType: 
T_236: (in Mem26[ds:0x62FF:word16] *s 0x0140 : int32)
  Class: Eq_236
  DataType: 
  OrigDataType: 
T_237: (in (word16) (Mem26[ds:0x62FF:word16] *s 0x0140) : word16)
  Class: Eq_237
  DataType: 
  OrigDataType: 
T_238: (in 0x62FD : word16)
  Class: Eq_238
  DataType: 
  OrigDataType: 
T_239: (in Mem26[ds:0x62FD:word16] : word16)
  Class: Eq_239
  DataType: 
  OrigDataType: 
T_240: (in (word16) (Mem26[ds:0x62FF:word16] *s 0x0140) + Mem26[ds:0x62FD:word16] : word16)
  Class: Eq_232
  DataType: 
  OrigDataType: 
T_241: (in ah_33 : byte)
  Class: Eq_241
  DataType: 
  OrigDataType: 
T_242: (in SLICE(ax_31, byte, 8) : byte)
  Class: Eq_241
  DataType: 
  OrigDataType: 
T_243: (in 0x62FD : word16)
  Class: Eq_243
  DataType: 
  OrigDataType: 
T_244: (in Mem26[ds:0x62FD:word16] : word16)
  Class: Eq_244
  DataType: 
  OrigDataType: 
T_245: (in 0x013F : word16)
  Class: Eq_244
  DataType: 
  OrigDataType: 
T_246: (in Mem26[ds:0x62FD:word16] >u 0x013F : bool)
  Class: Eq_246
  DataType: 
  OrigDataType: 
T_247: (in 0x22F7 : word16)
  Class: Eq_247
  DataType: 
  OrigDataType: 
T_248: (in si + 0x22F7 : word16)
  Class: Eq_248
  DataType: 
  OrigDataType: 
T_249: (in Mem0[ds:si + 0x22F7:word16] : word16)
  Class: Eq_249
  DataType: 
  OrigDataType: 
T_250: (in 0x0001 : word16)
  Class: Eq_250
  DataType: 
  OrigDataType: 
T_251: (in Mem0[ds:si + 0x22F7:word16] + 0x0001 : word16)
  Class: Eq_251
  DataType: 
  OrigDataType: 
T_252: (in 0x22F7 : word16)
  Class: Eq_252
  DataType: 
  OrigDataType: 
T_253: (in si + 0x22F7 : word16)
  Class: Eq_253
  DataType: 
  OrigDataType: 
T_254: (in Mem70[ds:si + 0x22F7:word16] : word16)
  Class: Eq_251
  DataType: 
  OrigDataType: 
T_255: (in 0x62FF : word16)
  Class: Eq_255
  DataType: 
  OrigDataType: 
T_256: (in Mem26[ds:0x62FF:word16] : word16)
  Class: Eq_256
  DataType: 
  OrigDataType: 
T_257: (in 0x00C7 : word16)
  Class: Eq_256
  DataType: 
  OrigDataType: 
T_258: (in Mem26[ds:0x62FF:word16] >u 0x00C7 : bool)
  Class: Eq_258
  DataType: 
  OrigDataType: 
T_259: (in al_47 : byte)
  Class: Eq_259
  DataType: 
  OrigDataType: 
T_260: (in 0x6301 : word16)
  Class: Eq_260
  DataType: 
  OrigDataType: 
T_261: (in Mem26[ds:0x6301:byte] : byte)
  Class: Eq_259
  DataType: 
  OrigDataType: 
T_262: (in 0x0000 : word16)
  Class: Eq_262
  DataType: 
  OrigDataType: 
T_263: (in ax_31 + 0x0000 : word16)
  Class: Eq_263
  DataType: 
  OrigDataType: 
T_264: (in Mem50[es:ax_31 + 0x0000:byte] : byte)
  Class: Eq_259
  DataType: 
  OrigDataType: 
T_265: (in 0x02F6 : word16)
  Class: Eq_265
  DataType: 
  OrigDataType: 
T_266: (in Mem50[ds:0x02F6:byte] : byte)
  Class: Eq_266
  DataType: 
  OrigDataType: 
T_267: (in 0x00 : byte)
  Class: Eq_266
  DataType: 
  OrigDataType: 
T_268: (in Mem50[ds:0x02F6:byte] == 0x00 : bool)
  Class: Eq_268
  DataType: 
  OrigDataType: 
T_269: (in 0x02F6 : word16)
  Class: Eq_269
  DataType: 
  OrigDataType: 
T_270: (in Mem50[ds:0x02F6:byte] : byte)
  Class: Eq_270
  DataType: 
  OrigDataType: 
T_271: (in 0x03 : byte)
  Class: Eq_270
  DataType: 
  OrigDataType: 
T_272: (in Mem50[ds:0x02F6:byte] == 0x03 : bool)
  Class: Eq_272
  DataType: 
  OrigDataType: 
T_273: (in 0x02F6 : word16)
  Class: Eq_273
  DataType: 
  OrigDataType: 
T_274: (in Mem50[ds:0x02F6:byte] : byte)
  Class: Eq_274
  DataType: 
  OrigDataType: 
T_275: (in 0x04 : byte)
  Class: Eq_274
  DataType: 
  OrigDataType: 
T_276: (in Mem50[ds:0x02F6:byte] == 0x04 : bool)
  Class: Eq_276
  DataType: 
  OrigDataType: 
T_277: (in 0x02F6 : word16)
  Class: Eq_277
  DataType: 
  OrigDataType: 
T_278: (in Mem50[ds:0x02F6:byte] : byte)
  Class: Eq_278
  DataType: 
  OrigDataType: 
T_279: (in 0x07 : byte)
  Class: Eq_278
  DataType: 
  OrigDataType: 
T_280: (in Mem50[ds:0x02F6:byte] == 0x07 : bool)
  Class: Eq_280
  DataType: 
  OrigDataType: 
T_281: (in 0x0001 : word16)
  Class: Eq_281
  DataType: 
  OrigDataType: 
T_282: (in ax_31 + 0x0001 : word16)
  Class: Eq_282
  DataType: 
  OrigDataType: 
T_283: (in Mem61[es:ax_31 + 0x0001:byte] : byte)
  Class: Eq_259
  DataType: 
  OrigDataType: 
T_284: (in 0x0140 : word16)
  Class: Eq_284
  DataType: 
  OrigDataType: 
T_285: (in ax_31 + 0x0140 : word16)
  Class: Eq_285
  DataType: 
  OrigDataType: 
T_286: (in Mem65[es:ax_31 + 0x0140:byte] : byte)
  Class: Eq_259
  DataType: 
  OrigDataType: 
T_287: (in 0x0141 : word16)
  Class: Eq_287
  DataType: 
  OrigDataType: 
T_288: (in ax_31 + 0x0141 : word16)
  Class: Eq_288
  DataType: 
  OrigDataType: 
T_289: (in Mem67[es:ax_31 + 0x0141:byte] : byte)
  Class: Eq_259
  DataType: 
  OrigDataType: 
T_290:
  Class: Eq_290
  DataType: 
  OrigDataType: (struct 0002 (0 T_122 t0000))
T_291:
  Class: Eq_291
  DataType: 
  OrigDataType: (struct 0002 (0 T_141 t0000))
T_292:
  Class: Eq_292
  DataType: 
  OrigDataType: (struct 0002 (0 T_159 t0000))
*/
