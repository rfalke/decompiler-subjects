// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_329/ia32_com/subject.exe
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
T_11: (in fn0C00_024E : ptr32)
  Class: Eq_11
  DataType: (ptr (fn T_19 (T_9, T_7, T_17, T_18)))
  OrigDataType: (ptr (fn T_19 (T_9, T_7, T_17, T_18)))
T_12: (in signature of fn0C00_024E : void)
  Class: Eq_11
  DataType: 
  OrigDataType: 
T_13: (in cx : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_14: (in ah : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_15: (in ds : selector)
  Class: Eq_15
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_16: (in ahOut : ptr16)
  Class: Eq_16
  DataType: ptr16
  OrigDataType: ptr16
T_17: (in ds : selector)
  Class: Eq_15
  DataType: (ptr (segment (2FC T_27 t02FC) (3300 T_31 t3300) (630A T_74 t630A)))
  OrigDataType: (ptr (segment (2FC T_27 t02FC) (3300 T_31 t3300) (630A T_74 t630A)))
T_18: (in out ah_11 : ptr16)
  Class: Eq_16
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_19: (in fn0C00_024E(cx_10, ah_11, ds, out ah_11) : word16)
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
T_24: (in si_18 : word16)
  Class: Eq_24
  DataType: (memptr T_17 (struct (3300 T_51 t3300)))
  OrigDataType: (memptr T_17 (struct (3300 T_51 t3300)))
T_25: (in 0x1000 : word16)
  Class: Eq_24
  DataType: word16
  OrigDataType: word16
T_26: (in 0x02FC : word16)
  Class: Eq_26
  DataType: (memptr T_17 (struct (0 T_27 t0000)))
  OrigDataType: (memptr T_17 (struct (0 T_27 t0000)))
T_27: (in Mem0[ds:0x02FC:byte] : byte)
  Class: Eq_27
  DataType: bcu8
  OrigDataType: bcu8
T_28: (in 0x04 : byte)
  Class: Eq_27
  DataType: bcu8
  OrigDataType: bcu8
T_29: (in Mem0[ds:0x02FC:byte] >=u 0x04 : bool)
  Class: Eq_29
  DataType: bool
  OrigDataType: bool
T_30: (in 0x3300 : word16)
  Class: Eq_30
  DataType: (memptr T_17 (struct (0 T_31 t0000)))
  OrigDataType: (memptr T_17 (struct (0 T_31 t0000)))
T_31: (in Mem0[ds:0x3300:word16] : word16)
  Class: Eq_31
  DataType: word16
  OrigDataType: word16
T_32: (in 0x0001 : word16)
  Class: Eq_32
  DataType: word16
  OrigDataType: word16
T_33: (in Mem0[ds:0x3300:word16] + 0x0001 : word16)
  Class: Eq_31
  DataType: word16
  OrigDataType: word16
T_34: (in 0x3300 : word16)
  Class: Eq_34
  DataType: (memptr T_17 (struct (0 T_35 t0000)))
  OrigDataType: (memptr T_17 (struct (0 T_35 t0000)))
T_35: (in Mem50[ds:0x3300:word16] : word16)
  Class: Eq_31
  DataType: word16
  OrigDataType: word16
T_36: (in 0x3300 : word16)
  Class: Eq_36
  DataType: (memptr T_17 (struct (0 T_37 t0000)))
  OrigDataType: (memptr T_17 (struct (0 T_37 t0000)))
T_37: (in Mem50[ds:0x3300:word16] : word16)
  Class: Eq_31
  DataType: cups16
  OrigDataType: cups16
T_38: (in 0x00C8 : word16)
  Class: Eq_31
  DataType: cups16
  OrigDataType: cups16
T_39: (in Mem50[ds:0x3300:word16] <u 0x00C8 : bool)
  Class: Eq_39
  DataType: bool
  OrigDataType: bool
T_40: (in v12_45 : word16)
  Class: Eq_31
  DataType: word16
  OrigDataType: word16
T_41: (in 0x3300 : word16)
  Class: Eq_41
  DataType: (memptr T_17 (struct (0 T_42 t0000)))
  OrigDataType: (memptr T_17 (struct (0 T_42 t0000)))
T_42: (in Mem0[ds:0x3300:word16] : word16)
  Class: Eq_31
  DataType: word16
  OrigDataType: word16
T_43: (in 0x0001 : word16)
  Class: Eq_43
  DataType: word16
  OrigDataType: word16
T_44: (in Mem0[ds:0x3300:word16] - 0x0001 : word16)
  Class: Eq_31
  DataType: word16
  OrigDataType: word16
T_45: (in 0x3300 : word16)
  Class: Eq_45
  DataType: (memptr T_17 (struct (0 T_46 t0000)))
  OrigDataType: (memptr T_17 (struct (0 T_46 t0000)))
T_46: (in Mem46[ds:0x3300:word16] : word16)
  Class: Eq_31
  DataType: word16
  OrigDataType: word16
T_47: (in 0x0000 : word16)
  Class: Eq_31
  DataType: word16
  OrigDataType: word16
T_48: (in v12_45 != 0x0000 : bool)
  Class: Eq_48
  DataType: bool
  OrigDataType: bool
T_49: (in 0x3300 : word16)
  Class: Eq_49
  DataType: word16
  OrigDataType: word16
T_50: (in si_18 + 0x3300 : word16)
  Class: Eq_50
  DataType: word16
  OrigDataType: word16
T_51: (in Mem0[ds:si_18 + 0x3300:byte] : byte)
  Class: Eq_51
  DataType: byte
  OrigDataType: byte
T_52: (in 0x28 : byte)
  Class: Eq_51
  DataType: byte
  OrigDataType: byte
T_53: (in Mem0[ds:si_18 + 0x3300:byte] == 0x28 : bool)
  Class: Eq_53
  DataType: bool
  OrigDataType: bool
T_54: (in ah_41 : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_55: (in fn0C00_024E : ptr32)
  Class: Eq_11
  DataType: (ptr (fn T_58 (T_56, T_7, T_17, T_57)))
  OrigDataType: (ptr (fn T_58 (T_56, T_7, T_17, T_57)))
T_56: (in 0x0800 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_57: (in out ah_41 : ptr16)
  Class: Eq_16
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_58: (in fn0C00_024E(0x0800, ah_11, ds, out ah_41) : word16)
  Class: Eq_58
  DataType: word16
  OrigDataType: word16
T_59: (in ah_43 : byte)
  Class: Eq_59
  DataType: byte
  OrigDataType: byte
T_60: (in fn0C00_024E : ptr32)
  Class: Eq_11
  DataType: (ptr (fn T_63 (T_61, T_54, T_17, T_62)))
  OrigDataType: (ptr (fn T_63 (T_61, T_54, T_17, T_62)))
T_61: (in 0x0800 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_62: (in out ah_43 : ptr16)
  Class: Eq_16
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_63: (in fn0C00_024E(0x0800, ah_41, ds, out ah_43) : word16)
  Class: Eq_24
  DataType: word16
  OrigDataType: word16
T_64: (in 0x3300 : word16)
  Class: Eq_64
  DataType: word16
  OrigDataType: word16
T_65: (in si_18 + 0x3300 : word16)
  Class: Eq_65
  DataType: word16
  OrigDataType: word16
T_66: (in Mem0[ds:si_18 + 0x3300:word16] : word16)
  Class: Eq_51
  DataType: word16
  OrigDataType: word16
T_67: (in ss : selector)
  Class: Eq_67
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_68: (in fp : ptr16)
  Class: Eq_68
  DataType: (union (ptr16 u0) ((memptr T_67 (struct (FFFFFFFE T_71 tFFFFFFFE))) u1))
  OrigDataType: (union (ptr16 u0) ((memptr T_67 (struct (FFFFFFFE T_71 tFFFFFFFE))) u1))
T_69: (in 0x0002 : word16)
  Class: Eq_69
  DataType: word16
  OrigDataType: word16
T_70: (in fp - 0x0002 : word16)
  Class: Eq_70
  DataType: word16
  OrigDataType: word16
T_71: (in Mem30[ss:fp - 0x0002:word16] : word16)
  Class: Eq_51
  DataType: word16
  OrigDataType: word16
T_72: (in 0x9000 : word16)
  Class: Eq_72
  DataType: word16
  OrigDataType: word16
T_73: (in 0x630A : word16)
  Class: Eq_73
  DataType: (memptr T_17 (struct (0 T_74 t0000)))
  OrigDataType: (memptr T_17 (struct (0 T_74 t0000)))
T_74: (in Mem32[ds:0x630A:word16] : word16)
  Class: Eq_72
  DataType: word16
  OrigDataType: word16
T_75: (in 0x3300 : word16)
  Class: Eq_75
  DataType: word16
  OrigDataType: word16
T_76: (in si_18 + 0x3300 : word16)
  Class: Eq_76
  DataType: word16
  OrigDataType: word16
T_77: (in Mem0[ds:si_18 + 0x3300:byte] : byte)
  Class: Eq_51
  DataType: byte
  OrigDataType: byte
T_78: (in 0x01 : byte)
  Class: Eq_78
  DataType: byte
  OrigDataType: byte
T_79: (in Mem0[ds:si_18 + 0x3300:byte] + 0x01 : byte)
  Class: Eq_51
  DataType: byte
  OrigDataType: byte
T_80: (in 0x3300 : word16)
  Class: Eq_80
  DataType: word16
  OrigDataType: word16
T_81: (in si_18 + 0x3300 : word16)
  Class: Eq_81
  DataType: word16
  OrigDataType: word16
T_82: (in Mem35[ds:si_18 + 0x3300:byte] : byte)
  Class: Eq_51
  DataType: byte
  OrigDataType: byte
T_83: (in dx : word16)
  Class: Eq_83
  DataType: word16
  OrigDataType: word16
T_84: (in __inb : ptr32)
  Class: Eq_84
  DataType: (ptr (fn T_86 (T_85)))
  OrigDataType: (ptr (fn T_86 (T_85)))
T_85: (in 0x40 : byte)
  Class: Eq_85
  DataType: byte
  OrigDataType: byte
T_86: (in __inb(0x40) : byte)
  Class: Eq_86
  DataType: byte
  OrigDataType: byte
T_87: (in __inb : ptr32)
  Class: Eq_87
  DataType: (ptr (fn T_89 (T_88)))
  OrigDataType: (ptr (fn T_89 (T_88)))
T_88: (in 0x40 : byte)
  Class: Eq_88
  DataType: byte
  OrigDataType: byte
T_89: (in __inb(0x40) : byte)
  Class: Eq_89
  DataType: byte
  OrigDataType: byte
T_90: (in dx_ax_8 : word32)
  Class: Eq_90
  DataType: word32
  OrigDataType: word32
T_91: (in 0x0000 : word16)
  Class: Eq_91
  DataType: word16
  OrigDataType: word16
T_92: (in ax : word16)
  Class: Eq_92
  DataType: word16
  OrigDataType: word16
T_93: (in SEQ(0x0000, ax) : word32)
  Class: Eq_90
  DataType: word32
  OrigDataType: word32
T_94: (in ah_13 : byte)
  Class: Eq_94
  DataType: byte
  OrigDataType: byte
T_95: (in 0x0064 : word16)
  Class: Eq_95
  DataType: word16
  OrigDataType: word16
T_96: (in dx_ax_8 % 0x0064 : int16)
  Class: Eq_96
  DataType: int16
  OrigDataType: int16
T_97: (in SEQ(dx_ax_8 % 0x0064, ax) : word32)
  Class: Eq_97
  DataType: int32
  OrigDataType: int32
T_98: (in 0x0064 : word16)
  Class: Eq_98
  DataType: int16
  OrigDataType: int16
T_99: (in SEQ(dx_ax_8 % 0x0064, ax) / 0x0064 : int16)
  Class: Eq_99
  DataType: int16
  OrigDataType: int16
T_100: (in SLICE(SEQ(dx_ax_8 % 0x0064, ax) / 0x0064, byte, 8) : byte)
  Class: Eq_100
  DataType: byte
  OrigDataType: byte
T_101: (in ahOut : ptr16)
  Class: Eq_101
  DataType: ptr16
  OrigDataType: ptr16
T_102: (in *ahOut : byte)
  Class: Eq_100
  DataType: 
  OrigDataType: 
T_103: (in dx_ax_8 % 0x0064 : int16)
  Class: Eq_103
  DataType: 
  OrigDataType: 
T_104: (in si : word16)
  Class: Eq_104
  DataType: 
  OrigDataType: 
T_105: (in 0x0F : byte)
  Class: Eq_105
  DataType: 
  OrigDataType: 
T_106: (in 0x3300 : word16)
  Class: Eq_106
  DataType: 
  OrigDataType: 
T_107: (in SEQ(ds, 0x3300) : ptr32)
  Class: Eq_107
  DataType: 
  OrigDataType: 
T_108: (in 0x0002 : word16)
  Class: Eq_108
  DataType: 
  OrigDataType: 
T_109: (in cx * 0x0002 : word16)
  Class: Eq_109
  DataType: 
  OrigDataType: 
T_110: (in SEQ(ds, 0x3300)[cx * 0x0002] : byte)
  Class: Eq_105
  DataType: 
  OrigDataType: 
T_111: (in ah_12 : byte)
  Class: Eq_7
  DataType: 
  OrigDataType: 
T_112: (in fn0C00_0240 : ptr32)
  Class: Eq_112
  DataType: 
  OrigDataType: 
T_113: (in signature of fn0C00_0240 : void)
  Class: Eq_112
  DataType: 
  OrigDataType: 
T_114: (in ah : byte)
  Class: Eq_7
  DataType: 
  OrigDataType: 
T_115: (in out ah_12 : ptr16)
  Class: Eq_101
  DataType: 
  OrigDataType: 
T_116: (in fn0C00_0240(ah, out ah_12) : word16)
  Class: Eq_116
  DataType: 
  OrigDataType: 
T_117: (in 0x0032 : word16)
  Class: Eq_117
  DataType: 
  OrigDataType: 
T_118: (in fn0C00_0240(ah, out ah_12) - 0x0032 : word16)
  Class: Eq_118
  DataType: 
  OrigDataType: 
T_119: (in 0x0300 : word16)
  Class: Eq_119
  DataType: 
  OrigDataType: 
T_120: (in SEQ(ds, 0x0300) : ptr32)
  Class: Eq_120
  DataType: 
  OrigDataType: 
T_121: (in 0x0002 : word16)
  Class: Eq_121
  DataType: 
  OrigDataType: 
T_122: (in cx * 0x0002 : word16)
  Class: Eq_122
  DataType: 
  OrigDataType: 
T_123: (in SEQ(ds, 0x0300)[cx * 0x0002] : word16)
  Class: Eq_118
  DataType: 
  OrigDataType: 
T_124: (in ah_17 : byte)
  Class: Eq_7
  DataType: 
  OrigDataType: 
T_125: (in fn0C00_0240 : ptr32)
  Class: Eq_112
  DataType: 
  OrigDataType: 
T_126: (in out ah_17 : ptr16)
  Class: Eq_101
  DataType: 
  OrigDataType: 
T_127: (in fn0C00_0240(ah_12, out ah_17) : word16)
  Class: Eq_127
  DataType: 
  OrigDataType: 
T_128: (in 0x0032 : word16)
  Class: Eq_128
  DataType: 
  OrigDataType: 
T_129: (in fn0C00_0240(ah_12, out ah_17) - 0x0032 : word16)
  Class: Eq_129
  DataType: 
  OrigDataType: 
T_130: (in 0x1300 : word16)
  Class: Eq_130
  DataType: 
  OrigDataType: 
T_131: (in SEQ(ds, 0x1300) : ptr32)
  Class: Eq_131
  DataType: 
  OrigDataType: 
T_132: (in 0x0002 : word16)
  Class: Eq_132
  DataType: 
  OrigDataType: 
T_133: (in cx * 0x0002 : word16)
  Class: Eq_133
  DataType: 
  OrigDataType: 
T_134: (in SEQ(ds, 0x1300)[cx * 0x0002] : word16)
  Class: Eq_129
  DataType: 
  OrigDataType: 
T_135: (in ah_22 : byte)
  Class: Eq_135
  DataType: 
  OrigDataType: 
T_136: (in dx_23 : word16)
  Class: Eq_136
  DataType: 
  OrigDataType: 
T_137: (in fn0C00_0240 : ptr32)
  Class: Eq_112
  DataType: 
  OrigDataType: 
T_138: (in out ah_22 : ptr16)
  Class: Eq_101
  DataType: 
  OrigDataType: 
T_139: (in fn0C00_0240(ah_17, out ah_22) : word16)
  Class: Eq_136
  DataType: 
  OrigDataType: 
T_140: (in 0x02FC : word16)
  Class: Eq_140
  DataType: 
  OrigDataType: 
T_141: (in Mem21[ds:0x02FC:byte] : byte)
  Class: Eq_141
  DataType: 
  OrigDataType: 
T_142: (in 0x04 : byte)
  Class: Eq_141
  DataType: 
  OrigDataType: 
T_143: (in Mem21[ds:0x02FC:byte] >=u 0x04 : bool)
  Class: Eq_143
  DataType: 
  OrigDataType: 
T_144: (in 0x2300 : word16)
  Class: Eq_144
  DataType: 
  OrigDataType: 
T_145: (in SEQ(ds, 0x2300) : ptr32)
  Class: Eq_145
  DataType: 
  OrigDataType: 
T_146: (in 0x0002 : word16)
  Class: Eq_146
  DataType: 
  OrigDataType: 
T_147: (in cx * 0x0002 : word16)
  Class: Eq_147
  DataType: 
  OrigDataType: 
T_148: (in SEQ(ds, 0x2300)[cx * 0x0002] : word16)
  Class: Eq_136
  DataType: 
  OrigDataType: 
T_149: (in 0x0001 : word16)
  Class: Eq_149
  DataType: 
  OrigDataType: 
T_150: (in cx << 0x0001 : word16)
  Class: Eq_150
  DataType: 
  OrigDataType: 
T_151: (in 0x0064 : word16)
  Class: Eq_151
  DataType: 
  OrigDataType: 
T_152: (in dx_23 + 0x0064 : word16)
  Class: Eq_136
  DataType: 
  OrigDataType: 
*/
