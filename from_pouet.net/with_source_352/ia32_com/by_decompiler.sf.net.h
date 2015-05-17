// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_352/ia32_com/subject.exe
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
T_7: (in fn0C00_0289 : ptr32)
  Class: Eq_7
  DataType: (ptr (fn T_15 (T_12, T_13, T_14)))
  OrigDataType: (ptr (fn T_15 (T_12, T_13, T_14)))
T_8: (in signature of fn0C00_0289 : void)
  Class: Eq_7
  DataType: 
  OrigDataType: 
T_9: (in al : byte)
  Class: Eq_9
  DataType: byte
  OrigDataType: byte
T_10: (in bl : byte)
  Class: Eq_10
  DataType: byte
  OrigDataType: byte
T_11: (in bh : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_12: (in 0x00 : byte)
  Class: Eq_9
  DataType: byte
  OrigDataType: byte
T_13: (in 0x38 : byte)
  Class: Eq_10
  DataType: byte
  OrigDataType: byte
T_14: (in 0x00 : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_15: (in fn0C00_0289(0x00, 0x38, 0x00) : void)
  Class: Eq_15
  DataType: void
  OrigDataType: void
T_16: (in fn0C00_0289 : ptr32)
  Class: Eq_7
  DataType: (ptr (fn T_20 (T_17, T_18, T_19)))
  OrigDataType: (ptr (fn T_20 (T_17, T_18, T_19)))
T_17: (in 0x0F : byte)
  Class: Eq_9
  DataType: byte
  OrigDataType: byte
T_18: (in 0x00 : byte)
  Class: Eq_10
  DataType: byte
  OrigDataType: byte
T_19: (in 0x00 : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_20: (in fn0C00_0289(0x0F, 0x00, 0x00) : void)
  Class: Eq_20
  DataType: void
  OrigDataType: void
T_21: (in fn0C00_029C : ptr32)
  Class: Eq_21
  DataType: (ptr (fn T_27 (T_25, T_26)))
  OrigDataType: (ptr (fn T_27 (T_25, T_26)))
T_22: (in signature of fn0C00_029C : void)
  Class: Eq_21
  DataType: 
  OrigDataType: 
T_23: (in dl : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_24: (in dh : byte)
  Class: Eq_24
  DataType: byte
  OrigDataType: byte
T_25: (in 0x0F : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_26: (in 0x03 : byte)
  Class: Eq_24
  DataType: byte
  OrigDataType: byte
T_27: (in fn0C00_029C(0x0F, 0x03) : void)
  Class: Eq_27
  DataType: void
  OrigDataType: void
T_28: (in fn0C00_02A7 : ptr32)
  Class: Eq_28
  DataType: (ptr (fn T_34 (T_32, T_33)))
  OrigDataType: (ptr (fn T_34 (T_32, T_33)))
T_29: (in signature of fn0C00_02A7 : void)
  Class: Eq_28
  DataType: 
  OrigDataType: 
T_30: (in dx : word16)
  Class: Eq_30
  DataType: word16
  OrigDataType: word16
T_31: (in ds : selector)
  Class: Eq_31
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_32: (in 0x0505 : word16)
  Class: Eq_30
  DataType: word16
  OrigDataType: word16
T_33: (in ds : selector)
  Class: Eq_31
  DataType: (ptr (segment (2BF T_170 t02BF) (2C0 T_173 t02C0)))
  OrigDataType: (ptr (segment (2BF T_170 t02BF) (2C0 T_173 t02C0)))
T_34: (in fn0C00_02A7(0x0505, ds) : byte)
  Class: Eq_34
  DataType: byte
  OrigDataType: byte
T_35: (in fn0C00_029C : ptr32)
  Class: Eq_21
  DataType: (ptr (fn T_38 (T_36, T_37)))
  OrigDataType: (ptr (fn T_38 (T_36, T_37)))
T_36: (in 0x0B : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_37: (in 0x07 : byte)
  Class: Eq_24
  DataType: byte
  OrigDataType: byte
T_38: (in fn0C00_029C(0x0B, 0x07) : void)
  Class: Eq_38
  DataType: void
  OrigDataType: void
T_39: (in fn0C00_02A7 : ptr32)
  Class: Eq_28
  DataType: (ptr (fn T_41 (T_40, T_33)))
  OrigDataType: (ptr (fn T_41 (T_40, T_33)))
T_40: (in 0x051E : word16)
  Class: Eq_30
  DataType: word16
  OrigDataType: word16
T_41: (in fn0C00_02A7(0x051E, ds) : byte)
  Class: Eq_41
  DataType: byte
  OrigDataType: byte
T_42: (in fn0C00_029C : ptr32)
  Class: Eq_21
  DataType: (ptr (fn T_45 (T_43, T_44)))
  OrigDataType: (ptr (fn T_45 (T_43, T_44)))
T_43: (in 0x08 : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_44: (in 0x09 : byte)
  Class: Eq_24
  DataType: byte
  OrigDataType: byte
T_45: (in fn0C00_029C(0x08, 0x09) : void)
  Class: Eq_45
  DataType: void
  OrigDataType: void
T_46: (in fn0C00_02A7 : ptr32)
  Class: Eq_28
  DataType: (ptr (fn T_48 (T_47, T_33)))
  OrigDataType: (ptr (fn T_48 (T_47, T_33)))
T_47: (in 0x052F : word16)
  Class: Eq_30
  DataType: word16
  OrigDataType: word16
T_48: (in fn0C00_02A7(0x052F, ds) : byte)
  Class: Eq_48
  DataType: byte
  OrigDataType: byte
T_49: (in fn0C00_029C : ptr32)
  Class: Eq_21
  DataType: (ptr (fn T_52 (T_50, T_51)))
  OrigDataType: (ptr (fn T_52 (T_50, T_51)))
T_50: (in 0x0D : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_51: (in 0x0E : byte)
  Class: Eq_24
  DataType: byte
  OrigDataType: byte
T_52: (in fn0C00_029C(0x0D, 0x0E) : void)
  Class: Eq_52
  DataType: void
  OrigDataType: void
T_53: (in fn0C00_02A7 : ptr32)
  Class: Eq_28
  DataType: (ptr (fn T_55 (T_54, T_33)))
  OrigDataType: (ptr (fn T_55 (T_54, T_33)))
T_54: (in 0x0547 : word16)
  Class: Eq_30
  DataType: word16
  OrigDataType: word16
T_55: (in fn0C00_02A7(0x0547, ds) : byte)
  Class: Eq_55
  DataType: byte
  OrigDataType: byte
T_56: (in ch_44 : byte)
  Class: Eq_56
  DataType: byte
  OrigDataType: byte
T_57: (in fn0C00_02AE : ptr32)
  Class: Eq_57
  DataType: (ptr (fn T_65 (T_62, T_63, T_64)))
  OrigDataType: (ptr (fn T_65 (T_62, T_63, T_64)))
T_58: (in signature of fn0C00_02AE : void)
  Class: Eq_57
  DataType: 
  OrigDataType: 
T_59: (in cx : word16)
  Class: Eq_59
  DataType: word16
  OrigDataType: word16
T_60: (in fs : selector)
  Class: Eq_60
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_61: (in chOut : ptr16)
  Class: Eq_61
  DataType: ptr16
  OrigDataType: ptr16
T_62: (in 0x0030 : word16)
  Class: Eq_59
  DataType: word16
  OrigDataType: word16
T_63: (in 0x0040 : selector)
  Class: Eq_60
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_64: (in out ch_44 : ptr16)
  Class: Eq_61
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_65: (in fn0C00_02AE(0x0030, 0x0040, out ch_44) : byte)
  Class: Eq_65
  DataType: byte
  OrigDataType: byte
T_66: (in fn0C00_029C : ptr32)
  Class: Eq_21
  DataType: (ptr (fn T_69 (T_67, T_68)))
  OrigDataType: (ptr (fn T_69 (T_67, T_68)))
T_67: (in 0x0D : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_68: (in 0x05 : byte)
  Class: Eq_24
  DataType: byte
  OrigDataType: byte
T_69: (in fn0C00_029C(0x0D, 0x05) : void)
  Class: Eq_69
  DataType: void
  OrigDataType: void
T_70: (in fn0C00_02A7 : ptr32)
  Class: Eq_28
  DataType: (ptr (fn T_72 (T_71, T_33)))
  OrigDataType: (ptr (fn T_72 (T_71, T_33)))
T_71: (in 0x050F : word16)
  Class: Eq_30
  DataType: word16
  OrigDataType: word16
T_72: (in fn0C00_02A7(0x050F, ds) : byte)
  Class: Eq_72
  DataType: byte
  OrigDataType: byte
T_73: (in ch_53 : byte)
  Class: Eq_73
  DataType: byte
  OrigDataType: byte
T_74: (in fn0C00_02AE : ptr32)
  Class: Eq_57
  DataType: (ptr (fn T_77 (T_75, T_63, T_76)))
  OrigDataType: (ptr (fn T_77 (T_75, T_63, T_76)))
T_75: (in 0x0050 : word16)
  Class: Eq_59
  DataType: word16
  OrigDataType: word16
T_76: (in out ch_53 : ptr16)
  Class: Eq_61
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_77: (in fn0C00_02AE(0x0050, 0x0040, out ch_53) : byte)
  Class: Eq_77
  DataType: byte
  OrigDataType: byte
T_78: (in cx_55 : word16)
  Class: Eq_78
  DataType: word16
  OrigDataType: word16
T_79: (in 0x7D00 : word16)
  Class: Eq_78
  DataType: word16
  OrigDataType: word16
T_80: (in ch_57 : byte)
  Class: Eq_80
  DataType: byte
  OrigDataType: byte
T_81: (in 0x7D : byte)
  Class: Eq_80
  DataType: byte
  OrigDataType: byte
T_82: (in di_62 : word16)
  Class: Eq_82
  DataType: (memptr T_97 (struct 0002 (0 T_156 t0000)))
  OrigDataType: (memptr T_97 (struct 0002 (0 T_156 t0000)))
T_83: (in 0x0000 : word16)
  Class: Eq_82
  DataType: word16
  OrigDataType: word16
T_84: (in ch_74 : byte)
  Class: Eq_84
  DataType: byte
  OrigDataType: byte
T_85: (in fn0C00_0268 : ptr32)
  Class: Eq_85
  DataType: (ptr (fn T_99 (T_94, T_95, T_96, T_80, T_97, T_33, T_98)))
  OrigDataType: (ptr (fn T_99 (T_94, T_95, T_96, T_80, T_97, T_33, T_98)))
T_86: (in signature of fn0C00_0268 : void)
  Class: Eq_85
  DataType: 
  OrigDataType: 
T_87: (in si : word16)
  Class: Eq_87
  DataType: word16
  OrigDataType: word16
T_88: (in di : word16)
  Class: Eq_88
  DataType: word16
  OrigDataType: word16
T_89: (in ah : byte)
  Class: Eq_89
  DataType: byte
  OrigDataType: byte
T_90: (in ch : byte)
  Class: Eq_80
  DataType: byte
  OrigDataType: byte
T_91: (in es : selector)
  Class: Eq_91
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_92: (in ds : selector)
  Class: Eq_31
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_93: (in chOut : ptr16)
  Class: Eq_93
  DataType: ptr16
  OrigDataType: ptr16
T_94: (in 0x02C2 : word16)
  Class: Eq_87
  DataType: word16
  OrigDataType: word16
T_95: (in 0x4BE4 : word16)
  Class: Eq_88
  DataType: word16
  OrigDataType: word16
T_96: (in 0x00 : byte)
  Class: Eq_89
  DataType: byte
  OrigDataType: byte
T_97: (in 0xA000 : selector)
  Class: Eq_91
  DataType: (ptr (segment (0 (arr T_403) a0000) (3200 (arr T_404) a3200) (5097 (arr T_405) a5097) (5F91 T_191 t5F91)))
  OrigDataType: (ptr (segment (0 (arr T_403) a0000) (3200 (arr T_404) a3200) (5097 (arr T_405) a5097) (5F91 T_191 t5F91)))
T_98: (in out ch_74 : ptr16)
  Class: Eq_93
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_99: (in fn0C00_0268(0x02C2, 0x4BE4, 0x00, ch_57, 0xA000, ds, out ch_74) : byte)
  Class: Eq_99
  DataType: byte
  OrigDataType: byte
T_100: (in ch_78 : byte)
  Class: Eq_100
  DataType: byte
  OrigDataType: byte
T_101: (in fn0C00_02AE : ptr32)
  Class: Eq_57
  DataType: (ptr (fn T_105 (T_103, T_63, T_104)))
  OrigDataType: (ptr (fn T_105 (T_103, T_63, T_104)))
T_102: (in 0x28 : byte)
  Class: Eq_102
  DataType: byte
  OrigDataType: byte
T_103: (in DPB(cx_55, 0x28, 0, 8) : word16)
  Class: Eq_59
  DataType: word16
  OrigDataType: word16
T_104: (in out ch_78 : ptr16)
  Class: Eq_61
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_105: (in fn0C00_02AE(DPB(cx_55, 0x28, 0, 8), 0x0040, out ch_78) : byte)
  Class: Eq_105
  DataType: byte
  OrigDataType: byte
T_106: (in fn0C00_029C : ptr32)
  Class: Eq_21
  DataType: (ptr (fn T_109 (T_107, T_108)))
  OrigDataType: (ptr (fn T_109 (T_107, T_108)))
T_107: (in 0x0A : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_108: (in 0x05 : byte)
  Class: Eq_24
  DataType: byte
  OrigDataType: byte
T_109: (in fn0C00_029C(0x0A, 0x05) : void)
  Class: Eq_109
  DataType: void
  OrigDataType: void
T_110: (in fn0C00_02A7 : ptr32)
  Class: Eq_28
  DataType: (ptr (fn T_112 (T_111, T_33)))
  OrigDataType: (ptr (fn T_112 (T_111, T_33)))
T_111: (in 0x055F : word16)
  Class: Eq_30
  DataType: word16
  OrigDataType: word16
T_112: (in fn0C00_02A7(0x055F, ds) : byte)
  Class: Eq_112
  DataType: byte
  OrigDataType: byte
T_113: (in fn0C00_029C : ptr32)
  Class: Eq_21
  DataType: (ptr (fn T_116 (T_114, T_115)))
  OrigDataType: (ptr (fn T_116 (T_114, T_115)))
T_114: (in 0x0A : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_115: (in 0x06 : byte)
  Class: Eq_24
  DataType: byte
  OrigDataType: byte
T_116: (in fn0C00_029C(0x0A, 0x06) : void)
  Class: Eq_116
  DataType: void
  OrigDataType: void
T_117: (in fn0C00_02A7 : ptr32)
  Class: Eq_28
  DataType: (ptr (fn T_119 (T_118, T_33)))
  OrigDataType: (ptr (fn T_119 (T_118, T_33)))
T_118: (in 0x056E : word16)
  Class: Eq_30
  DataType: word16
  OrigDataType: word16
T_119: (in fn0C00_02A7(0x056E, ds) : byte)
  Class: Eq_119
  DataType: byte
  OrigDataType: byte
T_120: (in ch_92 : byte)
  Class: Eq_120
  DataType: byte
  OrigDataType: byte
T_121: (in fn0C00_02AE : ptr32)
  Class: Eq_57
  DataType: (ptr (fn T_125 (T_123, T_63, T_124)))
  OrigDataType: (ptr (fn T_125 (T_123, T_63, T_124)))
T_122: (in 0x38 : byte)
  Class: Eq_122
  DataType: byte
  OrigDataType: byte
T_123: (in DPB(cx_55, 0x38, 0, 8) : word16)
  Class: Eq_59
  DataType: word16
  OrigDataType: word16
T_124: (in out ch_92 : ptr16)
  Class: Eq_61
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_125: (in fn0C00_02AE(DPB(cx_55, 0x38, 0, 8), 0x0040, out ch_92) : byte)
  Class: Eq_125
  DataType: byte
  OrigDataType: byte
T_126: (in fn0C00_029C : ptr32)
  Class: Eq_21
  DataType: (ptr (fn T_129 (T_127, T_128)))
  OrigDataType: (ptr (fn T_129 (T_127, T_128)))
T_127: (in 0x0A : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_128: (in 0x05 : byte)
  Class: Eq_24
  DataType: byte
  OrigDataType: byte
T_129: (in fn0C00_029C(0x0A, 0x05) : void)
  Class: Eq_129
  DataType: void
  OrigDataType: void
T_130: (in fn0C00_02A7 : ptr32)
  Class: Eq_28
  DataType: (ptr (fn T_132 (T_131, T_33)))
  OrigDataType: (ptr (fn T_132 (T_131, T_33)))
T_131: (in 0x057D : word16)
  Class: Eq_30
  DataType: word16
  OrigDataType: word16
T_132: (in fn0C00_02A7(0x057D, ds) : byte)
  Class: Eq_132
  DataType: byte
  OrigDataType: byte
T_133: (in fn0C00_029C : ptr32)
  Class: Eq_21
  DataType: (ptr (fn T_136 (T_134, T_135)))
  OrigDataType: (ptr (fn T_136 (T_134, T_135)))
T_134: (in 0x0A : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_135: (in 0x06 : byte)
  Class: Eq_24
  DataType: byte
  OrigDataType: byte
T_136: (in fn0C00_029C(0x0A, 0x06) : void)
  Class: Eq_136
  DataType: void
  OrigDataType: void
T_137: (in ah_103 : byte)
  Class: Eq_89
  DataType: byte
  OrigDataType: byte
T_138: (in fn0C00_02A7 : ptr32)
  Class: Eq_28
  DataType: (ptr (fn T_140 (T_139, T_33)))
  OrigDataType: (ptr (fn T_140 (T_139, T_33)))
T_139: (in 0x058F : word16)
  Class: Eq_30
  DataType: word16
  OrigDataType: word16
T_140: (in fn0C00_02A7(0x058F, ds) : byte)
  Class: Eq_89
  DataType: byte
  OrigDataType: byte
T_141: (in cx_105 : word16)
  Class: Eq_59
  DataType: word16
  OrigDataType: word16
T_142: (in 0x38 : byte)
  Class: Eq_142
  DataType: byte
  OrigDataType: byte
T_143: (in DPB(cx_55, 0x38, 0, 8) : word16)
  Class: Eq_59
  DataType: word16
  OrigDataType: word16
T_144: (in ch_106 : byte)
  Class: Eq_144
  DataType: byte
  OrigDataType: byte
T_145: (in fn0C00_02AE : ptr32)
  Class: Eq_57
  DataType: (ptr (fn T_147 (T_141, T_63, T_146)))
  OrigDataType: (ptr (fn T_147 (T_141, T_63, T_146)))
T_146: (in out ch_106 : ptr16)
  Class: Eq_61
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_147: (in fn0C00_02AE(cx_105, 0x0040, out ch_106) : byte)
  Class: Eq_147
  DataType: byte
  OrigDataType: byte
T_148: (in di_108 : word16)
  Class: Eq_148
  DataType: (memptr T_97 (struct 0001 (0 T_224 t0000)))
  OrigDataType: (memptr T_97 (struct 0001 (0 T_224 t0000)))
T_149: (in 0x3200 : word16)
  Class: Eq_148
  DataType: word16
  OrigDataType: word16
T_150: (in cx_110 : word16)
  Class: Eq_150
  DataType: word16
  OrigDataType: word16
T_151: (in 0x14 : byte)
  Class: Eq_151
  DataType: byte
  OrigDataType: byte
T_152: (in DPB(cx_105, 0x14, 8, 8) : word16)
  Class: Eq_150
  DataType: word16
  OrigDataType: word16
T_153: (in 0x0000 : word16)
  Class: Eq_153
  DataType: word16
  OrigDataType: word16
T_154: (in 0x0000 : word16)
  Class: Eq_154
  DataType: word16
  OrigDataType: word16
T_155: (in di_62 + 0x0000 : word16)
  Class: Eq_155
  DataType: word16
  OrigDataType: word16
T_156: (in Mem67[0xA000:di_62 + 0x0000:word16] : word16)
  Class: Eq_153
  DataType: word16
  OrigDataType: word16
T_157: (in 0x0001 : word16)
  Class: Eq_157
  DataType: word16
  OrigDataType: word16
T_158: (in cx_55 - 0x0001 : word16)
  Class: Eq_78
  DataType: word16
  OrigDataType: word16
T_159: (in 0x0002 : word16)
  Class: Eq_159
  DataType: word16
  OrigDataType: word16
T_160: (in di_62 + 0x0002 : word16)
  Class: Eq_82
  DataType: word16
  OrigDataType: word16
T_161: (in SLICE(cx_55, byte, 8) : byte)
  Class: Eq_80
  DataType: byte
  OrigDataType: byte
T_162: (in 0x0000 : word16)
  Class: Eq_78
  DataType: word16
  OrigDataType: word16
T_163: (in cx_55 == 0x0000 : bool)
  Class: Eq_163
  DataType: bool
  OrigDataType: bool
T_164: (in ch_126 : byte)
  Class: Eq_80
  DataType: byte
  OrigDataType: byte
T_165: (in fn0C00_02AE : ptr32)
  Class: Eq_57
  DataType: (ptr (fn T_169 (T_167, T_63, T_168)))
  OrigDataType: (ptr (fn T_169 (T_167, T_63, T_168)))
T_166: (in 0x18 : byte)
  Class: Eq_166
  DataType: byte
  OrigDataType: byte
T_167: (in DPB(cx_110, 0x18, 0, 8) : word16)
  Class: Eq_59
  DataType: word16
  OrigDataType: word16
T_168: (in out ch_126 : ptr16)
  Class: Eq_61
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_169: (in fn0C00_02AE(DPB(cx_110, 0x18, 0, 8), 0x0040, out ch_126) : byte)
  Class: Eq_169
  DataType: byte
  OrigDataType: byte
T_170: (in 0x4D : byte)
  Class: Eq_170
  DataType: byte
  OrigDataType: byte
T_171: (in 0x02BF : word16)
  Class: Eq_171
  DataType: (memptr T_33 (struct (0 T_172 t0000)))
  OrigDataType: (memptr T_33 (struct (0 T_172 t0000)))
T_172: (in Mem128[ds:0x02BF:byte] : byte)
  Class: Eq_170
  DataType: byte
  OrigDataType: byte
T_173: (in 0x00F3 : word16)
  Class: Eq_173
  DataType: word16
  OrigDataType: word16
T_174: (in 0x02C0 : word16)
  Class: Eq_174
  DataType: (memptr T_33 (struct (0 T_175 t0000)))
  OrigDataType: (memptr T_33 (struct (0 T_175 t0000)))
T_175: (in Mem129[ds:0x02C0:word16] : word16)
  Class: Eq_173
  DataType: word16
  OrigDataType: word16
T_176: (in ch_132 : byte)
  Class: Eq_176
  DataType: byte
  OrigDataType: byte
T_177: (in ah_133 : byte)
  Class: Eq_89
  DataType: byte
  OrigDataType: byte
T_178: (in fn0C00_0268 : ptr32)
  Class: Eq_85
  DataType: (ptr (fn T_182 (T_179, T_180, T_137, T_164, T_97, T_33, T_181)))
  OrigDataType: (ptr (fn T_182 (T_179, T_180, T_137, T_164, T_97, T_33, T_181)))
T_179: (in 0x059E : word16)
  Class: Eq_87
  DataType: word16
  OrigDataType: word16
T_180: (in 0x5C16 : word16)
  Class: Eq_88
  DataType: word16
  OrigDataType: word16
T_181: (in out ch_132 : ptr16)
  Class: Eq_93
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_182: (in fn0C00_0268(0x059E, 0x5C16, ah_103, ch_126, 0xA000, ds, out ch_132) : byte)
  Class: Eq_89
  DataType: byte
  OrigDataType: byte
T_183: (in ch_136 : byte)
  Class: Eq_183
  DataType: byte
  OrigDataType: byte
T_184: (in fn0C00_02AE : ptr32)
  Class: Eq_57
  DataType: (ptr (fn T_188 (T_186, T_63, T_187)))
  OrigDataType: (ptr (fn T_188 (T_186, T_63, T_187)))
T_185: (in 0x12 : byte)
  Class: Eq_185
  DataType: byte
  OrigDataType: byte
T_186: (in DPB(cx_110, 0x12, 0, 8) : word16)
  Class: Eq_59
  DataType: word16
  OrigDataType: word16
T_187: (in out ch_136 : ptr16)
  Class: Eq_61
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_188: (in fn0C00_02AE(DPB(cx_110, 0x12, 0, 8), 0x0040, out ch_136) : byte)
  Class: Eq_188
  DataType: byte
  OrigDataType: byte
T_189: (in 0x00 : byte)
  Class: Eq_189
  DataType: byte
  OrigDataType: byte
T_190: (in 0x5F91 : word16)
  Class: Eq_190
  DataType: (memptr T_97 (struct (0 T_191 t0000)))
  OrigDataType: (memptr T_97 (struct (0 T_191 t0000)))
T_191: (in Mem138[0xA000:0x5F91:byte] : byte)
  Class: Eq_189
  DataType: byte
  OrigDataType: byte
T_192: (in ch_141 : byte)
  Class: Eq_80
  DataType: byte
  OrigDataType: byte
T_193: (in fn0C00_02AE : ptr32)
  Class: Eq_57
  DataType: (ptr (fn T_197 (T_195, T_63, T_196)))
  OrigDataType: (ptr (fn T_197 (T_195, T_63, T_196)))
T_194: (in 0x14 : byte)
  Class: Eq_194
  DataType: byte
  OrigDataType: byte
T_195: (in DPB(cx_110, 0x14, 0, 8) : word16)
  Class: Eq_59
  DataType: word16
  OrigDataType: word16
T_196: (in out ch_141 : ptr16)
  Class: Eq_61
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_197: (in fn0C00_02AE(DPB(cx_110, 0x14, 0, 8), 0x0040, out ch_141) : byte)
  Class: Eq_197
  DataType: byte
  OrigDataType: byte
T_198: (in 0xA9 : byte)
  Class: Eq_170
  DataType: byte
  OrigDataType: byte
T_199: (in 0x02BF : word16)
  Class: Eq_199
  DataType: (memptr T_33 (struct (0 T_200 t0000)))
  OrigDataType: (memptr T_33 (struct (0 T_200 t0000)))
T_200: (in Mem143[ds:0x02BF:byte] : byte)
  Class: Eq_170
  DataType: byte
  OrigDataType: byte
T_201: (in 0x0097 : word16)
  Class: Eq_173
  DataType: word16
  OrigDataType: word16
T_202: (in 0x02C0 : word16)
  Class: Eq_202
  DataType: (memptr T_33 (struct (0 T_203 t0000)))
  OrigDataType: (memptr T_33 (struct (0 T_203 t0000)))
T_203: (in Mem144[ds:0x02C0:word16] : word16)
  Class: Eq_173
  DataType: word16
  OrigDataType: word16
T_204: (in ch_147 : byte)
  Class: Eq_204
  DataType: byte
  OrigDataType: byte
T_205: (in fn0C00_0268 : ptr32)
  Class: Eq_85
  DataType: (ptr (fn T_209 (T_206, T_207, T_177, T_192, T_97, T_33, T_208)))
  OrigDataType: (ptr (fn T_209 (T_206, T_207, T_177, T_192, T_97, T_33, T_208)))
T_206: (in 0x02C2 : word16)
  Class: Eq_87
  DataType: word16
  OrigDataType: word16
T_207: (in 0x4BE4 : word16)
  Class: Eq_88
  DataType: word16
  OrigDataType: word16
T_208: (in out ch_147 : ptr16)
  Class: Eq_93
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_209: (in fn0C00_0268(0x02C2, 0x4BE4, ah_133, ch_141, 0xA000, ds, out ch_147) : byte)
  Class: Eq_209
  DataType: byte
  OrigDataType: byte
T_210: (in ch_151 : byte)
  Class: Eq_210
  DataType: byte
  OrigDataType: byte
T_211: (in fn0C00_02AE : ptr32)
  Class: Eq_57
  DataType: (ptr (fn T_215 (T_213, T_63, T_214)))
  OrigDataType: (ptr (fn T_215 (T_213, T_63, T_214)))
T_212: (in 0x40 : byte)
  Class: Eq_212
  DataType: byte
  OrigDataType: byte
T_213: (in DPB(cx_110, 0x40, 0, 8) : word16)
  Class: Eq_59
  DataType: word16
  OrigDataType: word16
T_214: (in out ch_151 : ptr16)
  Class: Eq_61
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_215: (in fn0C00_02AE(DPB(cx_110, 0x40, 0, 8), 0x0040, out ch_151) : byte)
  Class: Eq_215
  DataType: byte
  OrigDataType: byte
T_216: (in di_153 : word16)
  Class: Eq_216
  DataType: (memptr T_97 (struct 0140 (0 T_235 t0000)))
  OrigDataType: (memptr T_97 (struct 0140 (0 T_235 t0000)))
T_217: (in 0x7D99 : word16)
  Class: Eq_216
  DataType: word16
  OrigDataType: word16
T_218: (in cx_155 : word16)
  Class: Eq_218
  DataType: word16
  OrigDataType: word16
T_219: (in 0x09 : byte)
  Class: Eq_219
  DataType: byte
  OrigDataType: byte
T_220: (in DPB(cx_110, 0x09, 0, 8) : word16)
  Class: Eq_218
  DataType: word16
  OrigDataType: word16
T_221: (in 0x00 : byte)
  Class: Eq_221
  DataType: byte
  OrigDataType: byte
T_222: (in 0x0000 : word16)
  Class: Eq_222
  DataType: word16
  OrigDataType: word16
T_223: (in di_108 + 0x0000 : word16)
  Class: Eq_223
  DataType: word16
  OrigDataType: word16
T_224: (in Mem119[0xA000:di_108 + 0x0000:byte] : byte)
  Class: Eq_221
  DataType: byte
  OrigDataType: byte
T_225: (in 0x0001 : word16)
  Class: Eq_225
  DataType: word16
  OrigDataType: word16
T_226: (in di_108 + 0x0001 : word16)
  Class: Eq_148
  DataType: word16
  OrigDataType: word16
T_227: (in 0x0001 : word16)
  Class: Eq_227
  DataType: word16
  OrigDataType: word16
T_228: (in cx_110 - 0x0001 : word16)
  Class: Eq_150
  DataType: word16
  OrigDataType: word16
T_229: (in 0x0000 : word16)
  Class: Eq_150
  DataType: word16
  OrigDataType: word16
T_230: (in cx_110 == 0x0000 : bool)
  Class: Eq_230
  DataType: bool
  OrigDataType: bool
T_231: (in cx_166 : word16)
  Class: Eq_218
  DataType: word16
  OrigDataType: word16
T_232: (in 0x0F0F : word16)
  Class: Eq_232
  DataType: word16
  OrigDataType: word16
T_233: (in 0x0000 : word16)
  Class: Eq_233
  DataType: word16
  OrigDataType: word16
T_234: (in di_153 + 0x0000 : word16)
  Class: Eq_234
  DataType: word16
  OrigDataType: word16
T_235: (in Mem167[0xA000:di_153 + 0x0000:word16] : word16)
  Class: Eq_232
  DataType: word16
  OrigDataType: word16
T_236: (in 0x0140 : word16)
  Class: Eq_236
  DataType: word16
  OrigDataType: word16
T_237: (in di_153 - 0x0140 : word16)
  Class: Eq_216
  DataType: word16
  OrigDataType: word16
T_238: (in 0x0001 : word16)
  Class: Eq_238
  DataType: word16
  OrigDataType: word16
T_239: (in cx_166 - 0x0001 : word16)
  Class: Eq_218
  DataType: word16
  OrigDataType: word16
T_240: (in 0x0000 : word16)
  Class: Eq_218
  DataType: word16
  OrigDataType: word16
T_241: (in cx_166 != 0x0000 : bool)
  Class: Eq_241
  DataType: bool
  OrigDataType: bool
T_242: (in ch_177 : byte)
  Class: Eq_242
  DataType: byte
  OrigDataType: byte
T_243: (in fn0C00_02AE : ptr32)
  Class: Eq_57
  DataType: (ptr (fn T_247 (T_245, T_63, T_246)))
  OrigDataType: (ptr (fn T_247 (T_245, T_63, T_246)))
T_244: (in 0x0002 : word16)
  Class: Eq_244
  DataType: word16
  OrigDataType: word16
T_245: (in cx_166 + 0x0002 : word16)
  Class: Eq_59
  DataType: word16
  OrigDataType: word16
T_246: (in out ch_177 : ptr16)
  Class: Eq_61
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_247: (in fn0C00_02AE(cx_166 + 0x0002, 0x0040, out ch_177) : byte)
  Class: Eq_247
  DataType: byte
  OrigDataType: byte
T_248: (in 0x0001 : word16)
  Class: Eq_248
  DataType: word16
  OrigDataType: word16
T_249: (in cx_155 - 0x0001 : word16)
  Class: Eq_218
  DataType: word16
  OrigDataType: word16
T_250: (in 0x0000 : word16)
  Class: Eq_218
  DataType: word16
  OrigDataType: word16
T_251: (in cx_155 != 0x0000 : bool)
  Class: Eq_251
  DataType: bool
  OrigDataType: bool
T_252: (in di_184 : word16)
  Class: Eq_252
  DataType: (memptr T_97 (struct 013F (0 T_260 t0000)))
  OrigDataType: (memptr T_97 (struct 013F (0 T_260 t0000)))
T_253: (in 0x5097 : word16)
  Class: Eq_252
  DataType: word16
  OrigDataType: word16
T_254: (in cx_186 : word16)
  Class: Eq_254
  DataType: int16
  OrigDataType: int16
T_255: (in 0x02 : byte)
  Class: Eq_255
  DataType: byte
  OrigDataType: byte
T_256: (in DPB(cx_155, 0x02, 0, 8) : word16)
  Class: Eq_254
  DataType: word16
  OrigDataType: word16
T_257: (in 0x28042804 : word32)
  Class: Eq_257
  DataType: word32
  OrigDataType: word32
T_258: (in 0x0000 : word16)
  Class: Eq_258
  DataType: word16
  OrigDataType: word16
T_259: (in di_184 + 0x0000 : word16)
  Class: Eq_259
  DataType: word16
  OrigDataType: word16
T_260: (in Mem191[0xA000:di_184 + 0x0000:word32] : word32)
  Class: Eq_257
  DataType: word32
  OrigDataType: word32
T_261: (in cx_193 : word16)
  Class: Eq_261
  DataType: word16
  OrigDataType: word16
T_262: (in -cx_186 : word16)
  Class: Eq_261
  DataType: int16
  OrigDataType: int16
T_263: (in ch_200 : byte)
  Class: Eq_263
  DataType: byte
  OrigDataType: byte
T_264: (in fn0C00_02AE : ptr32)
  Class: Eq_57
  DataType: (ptr (fn T_273 (T_271, T_63, T_272)))
  OrigDataType: (ptr (fn T_273 (T_271, T_63, T_272)))
T_265: (in 0x0006 : word16)
  Class: Eq_265
  DataType: word16
  OrigDataType: word16
T_266: (in cx_193 + 0x0006 : word16)
  Class: Eq_266
  DataType: word16
  OrigDataType: word16
T_267: (in cx_193 + 0x0006 : word16)
  Class: Eq_267
  DataType: word16
  OrigDataType: word16
T_268: (in (byte) (cx_193 + 0x0006) : byte)
  Class: Eq_268
  DataType: byte
  OrigDataType: byte
T_269: (in 0x01 : byte)
  Class: Eq_269
  DataType: byte
  OrigDataType: byte
T_270: (in (byte) (cx_193 + 0x0006) << 0x01 : word16)
  Class: Eq_270
  DataType: ui16
  OrigDataType: ui16
T_271: (in DPB(cx_193 + 0x0006, (byte) (cx_193 + 0x0006) << 0x01, 0, 8) : word16)
  Class: Eq_59
  DataType: word16
  OrigDataType: word16
T_272: (in out ch_200 : ptr16)
  Class: Eq_61
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_273: (in fn0C00_02AE(DPB(cx_193 + 0x0006, (byte) (cx_193 + 0x0006) << 0x01, 0, 8), 0x0040, out ch_200) : byte)
  Class: Eq_273
  DataType: byte
  OrigDataType: byte
T_274: (in 0x013F : word16)
  Class: Eq_274
  DataType: word16
  OrigDataType: word16
T_275: (in di_184 + 0x013F : word16)
  Class: Eq_252
  DataType: word16
  OrigDataType: word16
T_276: (in 0x0001 : word16)
  Class: Eq_276
  DataType: word16
  OrigDataType: word16
T_277: (in cx_186 - 0x0001 : word16)
  Class: Eq_254
  DataType: word16
  OrigDataType: word16
T_278: (in 0x0000 : word16)
  Class: Eq_254
  DataType: word16
  OrigDataType: word16
T_279: (in cx_186 != 0x0000 : bool)
  Class: Eq_279
  DataType: bool
  OrigDataType: bool
T_280: (in cl_209 : byte)
  Class: Eq_10
  DataType: byte
  OrigDataType: byte
T_281: (in 0x37 : byte)
  Class: Eq_10
  DataType: byte
  OrigDataType: byte
T_282: (in cx_210 : word16)
  Class: Eq_282
  DataType: word16
  OrigDataType: word16
T_283: (in 0x37 : byte)
  Class: Eq_283
  DataType: byte
  OrigDataType: byte
T_284: (in DPB(cx_186, 0x37, 0, 8) : word16)
  Class: Eq_282
  DataType: word16
  OrigDataType: word16
T_285: (in fn0C00_0289 : ptr32)
  Class: Eq_7
  DataType: (ptr (fn T_288 (T_286, T_280, T_287)))
  OrigDataType: (ptr (fn T_288 (T_286, T_280, T_287)))
T_286: (in 0x00 : byte)
  Class: Eq_9
  DataType: byte
  OrigDataType: byte
T_287: (in 0x00 : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_288: (in fn0C00_0289(0x00, cl_209, 0x00) : void)
  Class: Eq_288
  DataType: void
  OrigDataType: void
T_289: (in ch_224 : byte)
  Class: Eq_289
  DataType: byte
  OrigDataType: byte
T_290: (in fn0C00_02AE : ptr32)
  Class: Eq_57
  DataType: (ptr (fn T_297 (T_295, T_63, T_296)))
  OrigDataType: (ptr (fn T_297 (T_295, T_63, T_296)))
T_291: (in 0x01 : byte)
  Class: Eq_291
  DataType: byte
  OrigDataType: byte
T_292: (in cl_209 & 0x01 : byte)
  Class: Eq_292
  DataType: byte
  OrigDataType: byte
T_293: (in 0x01 : byte)
  Class: Eq_293
  DataType: byte
  OrigDataType: byte
T_294: (in (cl_209 & 0x01) + 0x01 : byte)
  Class: Eq_294
  DataType: byte
  OrigDataType: byte
T_295: (in DPB(cx_210, (cl_209 & 0x01) + 0x01, 0, 8) : word16)
  Class: Eq_59
  DataType: word16
  OrigDataType: word16
T_296: (in out ch_224 : ptr16)
  Class: Eq_61
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_297: (in fn0C00_02AE(DPB(cx_210, (cl_209 & 0x01) + 0x01, 0, 8), 0x0040, out ch_224) : byte)
  Class: Eq_297
  DataType: byte
  OrigDataType: byte
T_298: (in 0x0001 : word16)
  Class: Eq_298
  DataType: word16
  OrigDataType: word16
T_299: (in cx_210 - 0x0001 : word16)
  Class: Eq_282
  DataType: word16
  OrigDataType: word16
T_300: (in (byte) cx_210 : byte)
  Class: Eq_10
  DataType: byte
  OrigDataType: byte
T_301: (in 0x0000 : word16)
  Class: Eq_282
  DataType: word16
  OrigDataType: word16
T_302: (in cx_210 != 0x0000 : bool)
  Class: Eq_302
  DataType: bool
  OrigDataType: bool
T_303: (in fn0C00_029C : ptr32)
  Class: Eq_21
  DataType: (ptr (fn T_306 (T_304, T_305)))
  OrigDataType: (ptr (fn T_306 (T_304, T_305)))
T_304: (in 0x0C : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_305: (in 0x07 : byte)
  Class: Eq_24
  DataType: byte
  OrigDataType: byte
T_306: (in fn0C00_029C(0x0C, 0x07) : void)
  Class: Eq_306
  DataType: void
  OrigDataType: void
T_307: (in fn0C00_02A7 : ptr32)
  Class: Eq_28
  DataType: (ptr (fn T_309 (T_308, T_33)))
  OrigDataType: (ptr (fn T_309 (T_308, T_33)))
T_308: (in 0x0557 : word16)
  Class: Eq_30
  DataType: word16
  OrigDataType: word16
T_309: (in fn0C00_02A7(0x0557, ds) : byte)
  Class: Eq_309
  DataType: byte
  OrigDataType: byte
T_310: (in ch_238 : byte)
  Class: Eq_310
  DataType: byte
  OrigDataType: byte
T_311: (in fn0C00_02AE : ptr32)
  Class: Eq_57
  DataType: (ptr (fn T_314 (T_312, T_63, T_313)))
  OrigDataType: (ptr (fn T_314 (T_312, T_63, T_313)))
T_312: (in 0x001E : word16)
  Class: Eq_59
  DataType: word16
  OrigDataType: word16
T_313: (in out ch_238 : ptr16)
  Class: Eq_61
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_314: (in fn0C00_02AE(0x001E, 0x0040, out ch_238) : byte)
  Class: Eq_314
  DataType: byte
  OrigDataType: byte
T_315: (in al_243 : byte)
  Class: Eq_315
  DataType: byte
  OrigDataType: byte
T_316: (in bios_kbd_get_keystroke : ptr32)
  Class: Eq_316
  DataType: (ptr (fn T_320 (T_319)))
  OrigDataType: (ptr (fn T_320 (T_319)))
T_317: (in signature of bios_kbd_get_keystroke : void)
  Class: Eq_316
  DataType: 
  OrigDataType: 
T_318: (in alOut : ptr16)
  Class: Eq_318
  DataType: ptr16
  OrigDataType: ptr16
T_319: (in out al_243 : ptr16)
  Class: Eq_318
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_320: (in bios_kbd_get_keystroke(out al_243) : byte)
  Class: Eq_320
  DataType: byte
  OrigDataType: byte
T_321: (in msdos_terminate : ptr32)
  Class: Eq_321
  DataType: (ptr (fn T_324 (T_315)))
  OrigDataType: (ptr (fn T_324 (T_315)))
T_322: (in signature of msdos_terminate : void)
  Class: Eq_321
  DataType: 
  OrigDataType: 
T_323: (in al : byte)
  Class: Eq_315
  DataType: byte
  OrigDataType: byte
T_324: (in msdos_terminate(al_243) : void)
  Class: Eq_324
  DataType: void
  OrigDataType: void
T_325: (in *chOut : byte)
  Class: Eq_80
  DataType: 
  OrigDataType: 
T_326: (in bh_22 : byte)
  Class: Eq_326
  DataType: 
  OrigDataType: 
T_327: (in 0x00 : byte)
  Class: Eq_326
  DataType: 
  OrigDataType: 
T_328: (in 0x02C0 : word16)
  Class: Eq_328
  DataType: 
  OrigDataType: 
T_329: (in Mem0[ds:0x02C0:word16] : word16)
  Class: Eq_329
  DataType: 
  OrigDataType: 
T_330: (in di + Mem0[ds:0x02C0:word16] : word16)
  Class: Eq_88
  DataType: 
  OrigDataType: 
T_331: (in cx : word16)
  Class: Eq_331
  DataType: 
  OrigDataType: 
T_332: (in al_37 : byte)
  Class: Eq_332
  DataType: 
  OrigDataType: 
T_333: (in DPB(cx, al_37, 0, 8) : word16)
  Class: Eq_331
  DataType: 
  OrigDataType: 
T_334: (in bh_22 + al_37 : byte)
  Class: Eq_326
  DataType: 
  OrigDataType: 
T_335: (in 0x02BF : word16)
  Class: Eq_335
  DataType: 
  OrigDataType: 
T_336: (in Mem0[ds:0x02BF:byte] : byte)
  Class: Eq_326
  DataType: 
  OrigDataType: 
T_337: (in bh_22 >=u Mem0[ds:0x02BF:byte] : bool)
  Class: Eq_337
  DataType: 
  OrigDataType: 
T_338: (in 0x0000 : word16)
  Class: Eq_338
  DataType: 
  OrigDataType: 
T_339: (in di + 0x0000 : word16)
  Class: Eq_339
  DataType: 
  OrigDataType: 
T_340: (in Mem52[es:di + 0x0000:byte] : byte)
  Class: Eq_89
  DataType: 
  OrigDataType: 
T_341: (in 0x0001 : word16)
  Class: Eq_341
  DataType: 
  OrigDataType: 
T_342: (in cx - 0x0001 : word16)
  Class: Eq_331
  DataType: 
  OrigDataType: 
T_343: (in 0x0001 : word16)
  Class: Eq_343
  DataType: 
  OrigDataType: 
T_344: (in di + 0x0001 : word16)
  Class: Eq_88
  DataType: 
  OrigDataType: 
T_345: (in ch_57 : byte)
  Class: Eq_345
  DataType: 
  OrigDataType: 
T_346: (in SLICE(cx, byte, 8) : byte)
  Class: Eq_346
  DataType: 
  OrigDataType: 
T_347: (in *chOut : byte)
  Class: Eq_346
  DataType: 
  OrigDataType: 
T_348: (in 0x0000 : word16)
  Class: Eq_331
  DataType: 
  OrigDataType: 
T_349: (in cx == 0x0000 : bool)
  Class: Eq_349
  DataType: 
  OrigDataType: 
T_350: (in 0x0F : byte)
  Class: Eq_350
  DataType: 
  OrigDataType: 
T_351: (in ah ^ 0x0F : byte)
  Class: Eq_89
  DataType: 
  OrigDataType: 
T_352: (in 0x0000 : word16)
  Class: Eq_352
  DataType: 
  OrigDataType: 
T_353: (in si + 0x0000 : word16)
  Class: Eq_353
  DataType: 
  OrigDataType: 
T_354: (in Mem0[ds:si + 0x0000:byte] : byte)
  Class: Eq_332
  DataType: 
  OrigDataType: 
T_355: (in 0x0001 : word16)
  Class: Eq_355
  DataType: 
  OrigDataType: 
T_356: (in si + 0x0001 : word16)
  Class: Eq_87
  DataType: 
  OrigDataType: 
T_357: (in 0x00 : byte)
  Class: Eq_332
  DataType: 
  OrigDataType: 
T_358: (in al_37 == 0x00 : bool)
  Class: Eq_358
  DataType: 
  OrigDataType: 
T_359: (in __outb : ptr32)
  Class: Eq_359
  DataType: 
  OrigDataType: 
T_360: (in 0x03C8 : word16)
  Class: Eq_360
  DataType: 
  OrigDataType: 
T_361: (in __outb(0x03C8, al) : void)
  Class: Eq_361
  DataType: 
  OrigDataType: 
T_362: (in __outb : ptr32)
  Class: Eq_362
  DataType: 
  OrigDataType: 
T_363: (in 0x03C9 : word16)
  Class: Eq_363
  DataType: 
  OrigDataType: 
T_364: (in bl + bh : byte)
  Class: Eq_364
  DataType: 
  OrigDataType: 
T_365: (in __outb(0x03C9, bl + bh) : void)
  Class: Eq_365
  DataType: 
  OrigDataType: 
T_366: (in __outb : ptr32)
  Class: Eq_366
  DataType: 
  OrigDataType: 
T_367: (in 0x03C9 : word16)
  Class: Eq_367
  DataType: 
  OrigDataType: 
T_368: (in __outb(0x03C9, bl) : void)
  Class: Eq_368
  DataType: 
  OrigDataType: 
T_369: (in __outb : ptr32)
  Class: Eq_369
  DataType: 
  OrigDataType: 
T_370: (in 0x03C9 : word16)
  Class: Eq_370
  DataType: 
  OrigDataType: 
T_371: (in __outb(0x03C9, bl) : void)
  Class: Eq_371
  DataType: 
  OrigDataType: 
T_372: (in bios_video_set_cursor_position : ptr32)
  Class: Eq_372
  DataType: 
  OrigDataType: 
T_373: (in signature of bios_video_set_cursor_position : void)
  Class: Eq_372
  DataType: 
  OrigDataType: 
T_374: (in bh : byte)
  Class: Eq_374
  DataType: 
  OrigDataType: 
T_375: (in dh : byte)
  Class: Eq_24
  DataType: 
  OrigDataType: 
T_376: (in dl : byte)
  Class: Eq_23
  DataType: 
  OrigDataType: 
T_377: (in 0x00 : byte)
  Class: Eq_374
  DataType: 
  OrigDataType: 
T_378: (in bios_video_set_cursor_position(0x00, dh, dl) : void)
  Class: Eq_378
  DataType: 
  OrigDataType: 
T_379: (in ah : byte)
  Class: Eq_379
  DataType: 
  OrigDataType: 
T_380: (in msdos_display_string : ptr32)
  Class: Eq_380
  DataType: 
  OrigDataType: 
T_381: (in signature of msdos_display_string : void)
  Class: Eq_380
  DataType: 
  OrigDataType: 
T_382: (in ds : selector)
  Class: Eq_31
  DataType: 
  OrigDataType: 
T_383: (in dx : word16)
  Class: Eq_30
  DataType: 
  OrigDataType: 
T_384: (in msdos_display_string(ds, dx) : void)
  Class: Eq_384
  DataType: 
  OrigDataType: 
T_385: (in ax : word16)
  Class: Eq_385
  DataType: 
  OrigDataType: 
T_386: (in SLICE(ax, byte, 8) : byte)
  Class: Eq_386
  DataType: 
  OrigDataType: 
T_387: (in cl : byte)
  Class: Eq_387
  DataType: 
  OrigDataType: 
T_388: (in dh_16 : byte)
  Class: Eq_388
  DataType: 
  OrigDataType: 
T_389: (in 0x006C : word16)
  Class: Eq_389
  DataType: 
  OrigDataType: 
T_390: (in Mem0[fs:0x006C:byte] : byte)
  Class: Eq_388
  DataType: 
  OrigDataType: 
T_391: (in 0x006C : word16)
  Class: Eq_391
  DataType: 
  OrigDataType: 
T_392: (in Mem0[fs:0x006C:byte] : byte)
  Class: Eq_388
  DataType: 
  OrigDataType: 
T_393: (in Mem0[fs:0x006C:byte] == dh_16 : bool)
  Class: Eq_393
  DataType: 
  OrigDataType: 
T_394: (in 0x0001 : word16)
  Class: Eq_394
  DataType: 
  OrigDataType: 
T_395: (in cx - 0x0001 : word16)
  Class: Eq_59
  DataType: 
  OrigDataType: 
T_396: (in cl_21 : byte)
  Class: Eq_396
  DataType: 
  OrigDataType: 
T_397: (in (byte) cx : byte)
  Class: Eq_396
  DataType: 
  OrigDataType: 
T_398: (in ch_22 : byte)
  Class: Eq_398
  DataType: 
  OrigDataType: 
T_399: (in SLICE(cx, byte, 8) : byte)
  Class: Eq_399
  DataType: 
  OrigDataType: 
T_400: (in *chOut : byte)
  Class: Eq_399
  DataType: 
  OrigDataType: 
T_401: (in 0x0000 : word16)
  Class: Eq_59
  DataType: 
  OrigDataType: 
T_402: (in cx != 0x0000 : bool)
  Class: Eq_402
  DataType: 
  OrigDataType: 
T_403:
  Class: Eq_403
  DataType: 
  OrigDataType: (struct 0002 (0 T_156 t0000))
T_404:
  Class: Eq_404
  DataType: 
  OrigDataType: (struct 0001 (0 T_224 t0000))
T_405:
  Class: Eq_405
  DataType: 
  OrigDataType: (struct 013F (0 T_260 t0000))
*/
