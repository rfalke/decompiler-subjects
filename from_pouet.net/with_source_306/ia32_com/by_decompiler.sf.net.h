// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_306/ia32_com/subject.exe
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
T_7: (in al_109 : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_8: (in 0x13 : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_9: (in 0x08 : byte)
  Class: Eq_9
  DataType: byte
  OrigDataType: byte
T_10: (in al_109 & 0x08 : byte)
  Class: Eq_10
  DataType: byte
  OrigDataType: byte
T_11: (in 0x00 : byte)
  Class: Eq_10
  DataType: byte
  OrigDataType: byte
T_12: (in (al_109 & 0x08) == 0x00 : bool)
  Class: Eq_12
  DataType: bool
  OrigDataType: bool
T_13: (in ds : selector)
  Class: Eq_13
  DataType: (ptr (segment (1BF T_38 t01BF) (1C1 T_38 t01C1) (1C3 T_15 t01C3) (1C5 T_41 t01C5) (1C7 T_38 t01C7) (1C9 T_111 t01C9) (1CB T_81 t01CB)))
  OrigDataType: (ptr (segment (1BF T_38 t01BF) (1C1 T_38 t01C1) (1C3 T_15 t01C3) (1C5 T_41 t01C5) (1C7 T_38 t01C7) (1C9 T_111 t01C9) (1CB T_81 t01CB)))
T_14: (in 0x01C3 : word16)
  Class: Eq_14
  DataType: (memptr T_13 (struct (0 T_15 t0000)))
  OrigDataType: (memptr T_13 (struct (0 T_15 t0000)))
T_15: (in Mem24[ds:0x01C3:word16] : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_16: (in 0x0001 : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_17: (in Mem24[ds:0x01C3:word16] + 0x0001 : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_18: (in Mem137[ds:0x01C3:word16] : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_19: (in __inb : ptr32)
  Class: Eq_19
  DataType: (ptr (fn T_21 (T_20)))
  OrigDataType: (ptr (fn T_21 (T_20)))
T_20: (in 0x03DA : word16)
  Class: Eq_20
  DataType: word16
  OrigDataType: word16
T_21: (in __inb(0x03DA) : byte)
  Class: Eq_21
  DataType: byte
  OrigDataType: byte
T_22: (in 0x08 : byte)
  Class: Eq_22
  DataType: byte
  OrigDataType: byte
T_23: (in __inb(0x03DA) & 0x08 : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_24: (in 0x00 : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_25: (in (__inb(0x03DA) & 0x08) != 0x00 : bool)
  Class: Eq_25
  DataType: bool
  OrigDataType: bool
T_26: (in 0x01C3 : word16)
  Class: Eq_26
  DataType: (memptr T_13 (struct (0 T_15 t0000)))
  OrigDataType: (memptr T_13 (struct (0 T_15 t0000)))
T_27: (in Mem24[ds:0x01C3:word16] : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_28: (in 0x0001 : word16)
  Class: Eq_28
  DataType: word16
  OrigDataType: word16
T_29: (in Mem24[ds:0x01C3:word16] - 0x0001 : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_30: (in Mem134[ds:0x01C3:word16] : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_31: (in __inb : ptr32)
  Class: Eq_31
  DataType: (ptr (fn T_33 (T_32)))
  OrigDataType: (ptr (fn T_33 (T_32)))
T_32: (in 0x03DA : word16)
  Class: Eq_32
  DataType: word16
  OrigDataType: word16
T_33: (in __inb(0x03DA) : byte)
  Class: Eq_33
  DataType: byte
  OrigDataType: byte
T_34: (in 0x08 : byte)
  Class: Eq_34
  DataType: byte
  OrigDataType: byte
T_35: (in __inb(0x03DA) & 0x08 : byte)
  Class: Eq_35
  DataType: byte
  OrigDataType: byte
T_36: (in 0x00 : byte)
  Class: Eq_35
  DataType: byte
  OrigDataType: byte
T_37: (in (__inb(0x03DA) & 0x08) == 0x00 : bool)
  Class: Eq_37
  DataType: bool
  OrigDataType: bool
T_38: (in ax_43 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_39: (in 0x01C7 : word16)
  Class: Eq_39
  DataType: (memptr T_13 (struct (0 T_40 t0000)))
  OrigDataType: (memptr T_13 (struct (0 T_40 t0000)))
T_40: (in Mem24[ds:0x01C7:word16] : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_41: (in bx_46 : word16)
  Class: Eq_41
  DataType: int16
  OrigDataType: int16
T_42: (in 0x01C5 : word16)
  Class: Eq_42
  DataType: (memptr T_13 (struct (0 T_43 t0000)))
  OrigDataType: (memptr T_13 (struct (0 T_43 t0000)))
T_43: (in Mem24[ds:0x01C5:word16] : word16)
  Class: Eq_41
  DataType: word16
  OrigDataType: word16
T_44: (in al_50 : byte)
  Class: Eq_44
  DataType: byte
  OrigDataType: byte
T_45: (in dl_51 : byte)
  Class: Eq_45
  DataType: byte
  OrigDataType: byte
T_46: (in ah_52 : byte)
  Class: Eq_46
  DataType: byte
  OrigDataType: byte
T_47: (in fn0C00_01CF : ptr32)
  Class: Eq_47
  DataType: (ptr (fn T_62 (T_38, T_41, T_57, T_58, T_13, T_59, T_60, T_61)))
  OrigDataType: (ptr (fn T_62 (T_38, T_41, T_57, T_58, T_13, T_59, T_60, T_61)))
T_48: (in signature of fn0C00_01CF : void)
  Class: Eq_47
  DataType: 
  OrigDataType: 
T_49: (in ax : word16)
  Class: Eq_38
  DataType: uint16
  OrigDataType: uint16
T_50: (in bx : word16)
  Class: Eq_41
  DataType: word16
  OrigDataType: word16
T_51: (in dl : byte)
  Class: Eq_51
  DataType: byte
  OrigDataType: byte
T_52: (in es : selector)
  Class: Eq_52
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_53: (in ds : selector)
  Class: Eq_13
  DataType: (ptr (segment (1CD T_193 t01CD)))
  OrigDataType: (ptr (segment (1CD T_193 t01CD)))
T_54: (in alOut : ptr16)
  Class: Eq_54
  DataType: ptr16
  OrigDataType: ptr16
T_55: (in dlOut : ptr16)
  Class: Eq_55
  DataType: ptr16
  OrigDataType: ptr16
T_56: (in ahOut : ptr16)
  Class: Eq_56
  DataType: ptr16
  OrigDataType: ptr16
T_57: (in 0x00 : byte)
  Class: Eq_51
  DataType: byte
  OrigDataType: byte
T_58: (in 0xA000 : selector)
  Class: Eq_52
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_59: (in out al_50 : ptr16)
  Class: Eq_54
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_60: (in out dl_51 : ptr16)
  Class: Eq_55
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_61: (in out ah_52 : ptr16)
  Class: Eq_56
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_62: (in fn0C00_01CF(ax_43, bx_46, 0x00, 0xA000, ds, out al_50, out dl_51, out ah_52) : byte)
  Class: Eq_62
  DataType: byte
  OrigDataType: byte
T_63: (in bx_56 : word16)
  Class: Eq_38
  DataType: int16
  OrigDataType: int16
T_64: (in 0x01C1 : word16)
  Class: Eq_64
  DataType: (memptr T_13 (struct (0 T_65 t0000)))
  OrigDataType: (memptr T_13 (struct (0 T_65 t0000)))
T_65: (in Mem24[ds:0x01C1:word16] : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_66: (in bl_128 : byte)
  Class: Eq_66
  DataType: byte
  OrigDataType: byte
T_67: (in (byte) bx_56 : byte)
  Class: Eq_66
  DataType: byte
  OrigDataType: byte
T_68: (in 0x00E6 : word16)
  Class: Eq_41
  DataType: int16
  OrigDataType: int16
T_69: (in bx_46 < 0x00E6 : bool)
  Class: Eq_69
  DataType: bool
  OrigDataType: bool
T_70: (in bx_62 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_71: (in fn0C00_01F3 : ptr32)
  Class: Eq_71
  DataType: (ptr (fn T_74 (T_66)))
  OrigDataType: (ptr (fn T_74 (T_66)))
T_72: (in signature of fn0C00_01F3 : void)
  Class: Eq_71
  DataType: 
  OrigDataType: 
T_73: (in bl : byte)
  Class: Eq_66
  DataType: byte
  OrigDataType: byte
T_74: (in fn0C00_01F3(bl_128) : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_75: (in 0x01C1 : word16)
  Class: Eq_75
  DataType: (memptr T_13 (struct (0 T_76 t0000)))
  OrigDataType: (memptr T_13 (struct (0 T_76 t0000)))
T_76: (in Mem64[ds:0x01C1:word16] : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_77: (in ax_66 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_78: (in 0x01C7 : word16)
  Class: Eq_78
  DataType: (memptr T_13 (struct (0 T_79 t0000)))
  OrigDataType: (memptr T_13 (struct (0 T_79 t0000)))
T_79: (in Mem64[ds:0x01C7:word16] : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_80: (in 0x01CB : word16)
  Class: Eq_80
  DataType: (memptr T_13 (struct (0 T_81 t0000)))
  OrigDataType: (memptr T_13 (struct (0 T_81 t0000)))
T_81: (in Mem64[ds:0x01CB:word16] : word16)
  Class: Eq_81
  DataType: word16
  OrigDataType: word16
T_82: (in Mem64[ds:0x01C7:word16] + Mem64[ds:0x01CB:word16] : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_83: (in 0x01C7 : word16)
  Class: Eq_83
  DataType: (memptr T_13 (struct (0 T_84 t0000)))
  OrigDataType: (memptr T_13 (struct (0 T_84 t0000)))
T_84: (in Mem69[ds:0x01C7:word16] : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_85: (in al_67 : byte)
  Class: Eq_85
  DataType: byte
  OrigDataType: byte
T_86: (in (byte) ax_66 : byte)
  Class: Eq_85
  DataType: byte
  OrigDataType: byte
T_87: (in 0x01 : byte)
  Class: Eq_85
  DataType: byte
  OrigDataType: byte
T_88: (in al_67 != 0x01 : bool)
  Class: Eq_88
  DataType: bool
  OrigDataType: bool
T_89: (in ax_121 : word16)
  Class: Eq_38
  DataType: int16
  OrigDataType: int16
T_90: (in 0x05 : byte)
  Class: Eq_90
  DataType: byte
  OrigDataType: byte
T_91: (in al_50 - 0x05 : byte)
  Class: Eq_91
  DataType: byte
  OrigDataType: byte
T_92: (in DPB(ax_43, al_50 - 0x05, 0, 8) : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_93: (in ax_121 == bx_56 : bool)
  Class: Eq_93
  DataType: bool
  OrigDataType: bool
T_94: (in ax_121 > bx_56 : bool)
  Class: Eq_94
  DataType: bool
  OrigDataType: bool
T_95: (in 0x0001 : word16)
  Class: Eq_95
  DataType: word16
  OrigDataType: word16
T_96: (in bx_56 + 0x0001 : word16)
  Class: Eq_96
  DataType: word16
  OrigDataType: word16
T_97: (in (byte) (bx_56 + 0x0001) : byte)
  Class: Eq_66
  DataType: byte
  OrigDataType: byte
T_98: (in 0x0001 : word16)
  Class: Eq_98
  DataType: word16
  OrigDataType: word16
T_99: (in bx_56 - 0x0001 : word16)
  Class: Eq_99
  DataType: word16
  OrigDataType: word16
T_100: (in (byte) (bx_56 - 0x0001) : byte)
  Class: Eq_66
  DataType: byte
  OrigDataType: byte
T_101: (in 0xC6 : byte)
  Class: Eq_85
  DataType: byte
  OrigDataType: byte
T_102: (in al_67 != 0xC6 : bool)
  Class: Eq_102
  DataType: bool
  OrigDataType: bool
T_103: (in 0x01CB : word16)
  Class: Eq_103
  DataType: (memptr T_13 (struct (0 T_81 t0000)))
  OrigDataType: (memptr T_13 (struct (0 T_81 t0000)))
T_104: (in Mem69[ds:0x01CB:word16] : word16)
  Class: Eq_81
  DataType: int16
  OrigDataType: int16
T_105: (in -Mem69[ds:0x01CB:word16] : word16)
  Class: Eq_81
  DataType: int16
  OrigDataType: int16
T_106: (in Mem117[ds:0x01CB:word16] : word16)
  Class: Eq_81
  DataType: word16
  OrigDataType: word16
T_107: (in cx_76 : word16)
  Class: Eq_41
  DataType: word16
  OrigDataType: word16
T_108: (in 0x01C5 : word16)
  Class: Eq_108
  DataType: (memptr T_13 (struct (0 T_109 t0000)))
  OrigDataType: (memptr T_13 (struct (0 T_109 t0000)))
T_109: (in Mem69[ds:0x01C5:word16] : word16)
  Class: Eq_41
  DataType: word16
  OrigDataType: word16
T_110: (in 0x01C9 : word16)
  Class: Eq_110
  DataType: (memptr T_13 (struct (0 T_111 t0000)))
  OrigDataType: (memptr T_13 (struct (0 T_111 t0000)))
T_111: (in Mem69[ds:0x01C9:word16] : word16)
  Class: Eq_111
  DataType: word16
  OrigDataType: word16
T_112: (in Mem69[ds:0x01C5:word16] + Mem69[ds:0x01C9:word16] : word16)
  Class: Eq_41
  DataType: word16
  OrigDataType: word16
T_113: (in 0x01C5 : word16)
  Class: Eq_113
  DataType: (memptr T_13 (struct (0 T_114 t0000)))
  OrigDataType: (memptr T_13 (struct (0 T_114 t0000)))
T_114: (in Mem78[ds:0x01C5:word16] : word16)
  Class: Eq_41
  DataType: word16
  OrigDataType: word16
T_115: (in ax_80 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_116: (in fn0C00_0202 : ptr32)
  Class: Eq_116
  DataType: (ptr (fn T_124 (T_77, T_107, T_123, T_70, T_13)))
  OrigDataType: (ptr (fn T_124 (T_77, T_107, T_123, T_70, T_13)))
T_117: (in signature of fn0C00_0202 : void)
  Class: Eq_116
  DataType: 
  OrigDataType: 
T_118: (in ax : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_119: (in cx : word16)
  Class: Eq_41
  DataType: word16
  OrigDataType: word16
T_120: (in dx : word16)
  Class: Eq_41
  DataType: word16
  OrigDataType: word16
T_121: (in bx : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_122: (in ds : selector)
  Class: Eq_13
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_123: (in 0x013F : word16)
  Class: Eq_41
  DataType: word16
  OrigDataType: word16
T_124: (in fn0C00_0202(ax_66, cx_76, 0x013F, bx_62, ds) : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_125: (in bx_85 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_126: (in fn0C00_01F3 : ptr32)
  Class: Eq_71
  DataType: (ptr (fn T_133 (T_132)))
  OrigDataType: (ptr (fn T_133 (T_132)))
T_127: (in 0x01BF : word16)
  Class: Eq_127
  DataType: (memptr T_13 (struct (0 T_128 t0000)))
  OrigDataType: (memptr T_13 (struct (0 T_128 t0000)))
T_128: (in Mem78[ds:0x01BF:word16] : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_129: (in 0x01C3 : word16)
  Class: Eq_129
  DataType: (memptr T_13 (struct (0 T_130 t0000)))
  OrigDataType: (memptr T_13 (struct (0 T_130 t0000)))
T_130: (in Mem78[ds:0x01C3:word16] : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_131: (in Mem78[ds:0x01BF:word16] + Mem78[ds:0x01C3:word16] : word16)
  Class: Eq_131
  DataType: word16
  OrigDataType: word16
T_132: (in (byte) (Mem78[ds:0x01BF:word16] + Mem78[ds:0x01C3:word16]) : byte)
  Class: Eq_66
  DataType: byte
  OrigDataType: byte
T_133: (in fn0C00_01F3((byte) (Mem78[ds:0x01BF:word16] + Mem78[ds:0x01C3:word16])) : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_134: (in 0x01BF : word16)
  Class: Eq_134
  DataType: (memptr T_13 (struct (0 T_135 t0000)))
  OrigDataType: (memptr T_13 (struct (0 T_135 t0000)))
T_135: (in Mem86[ds:0x01BF:word16] : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_136: (in al_95 : byte)
  Class: Eq_136
  DataType: byte
  OrigDataType: byte
T_137: (in dl_96 : byte)
  Class: Eq_51
  DataType: byte
  OrigDataType: byte
T_138: (in ah_97 : byte)
  Class: Eq_138
  DataType: byte
  OrigDataType: byte
T_139: (in fn0C00_01CF : ptr32)
  Class: Eq_47
  DataType: (ptr (fn T_149 (T_142, T_144, T_145, T_58, T_13, T_146, T_147, T_148)))
  OrigDataType: (ptr (fn T_149 (T_142, T_144, T_145, T_58, T_13, T_146, T_147, T_148)))
T_140: (in fn0C00_0202 : ptr32)
  Class: Eq_116
  DataType: (ptr (fn T_142 (T_115, T_107, T_141, T_125, T_13)))
  OrigDataType: (ptr (fn T_142 (T_115, T_107, T_141, T_125, T_13)))
T_141: (in 0x0000 : word16)
  Class: Eq_41
  DataType: word16
  OrigDataType: word16
T_142: (in fn0C00_0202(ax_80, cx_76, 0x0000, bx_85, ds) : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_143: (in 0x01C5 : word16)
  Class: Eq_143
  DataType: (memptr T_13 (struct (0 T_144 t0000)))
  OrigDataType: (memptr T_13 (struct (0 T_144 t0000)))
T_144: (in Mem86[ds:0x01C5:word16] : word16)
  Class: Eq_41
  DataType: word16
  OrigDataType: word16
T_145: (in 0x0F : byte)
  Class: Eq_51
  DataType: byte
  OrigDataType: byte
T_146: (in out al_95 : ptr16)
  Class: Eq_54
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_147: (in out dl_96 : ptr16)
  Class: Eq_55
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_148: (in out ah_97 : ptr16)
  Class: Eq_56
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_149: (in fn0C00_01CF(fn0C00_0202(ax_80, cx_76, 0x0000, bx_85, ds), Mem86[ds:0x01C5:word16], 0x0F, 0xA000, ds, out al_95, out dl_96, out ah_97) : byte)
  Class: Eq_149
  DataType: byte
  OrigDataType: byte
T_150: (in fn0C00_01DF : ptr32)
  Class: Eq_150
  DataType: (ptr (fn T_160 (T_158, T_159, T_137, T_58, T_13)))
  OrigDataType: (ptr (fn T_160 (T_158, T_159, T_137, T_58, T_13)))
T_151: (in signature of fn0C00_01DF : void)
  Class: Eq_150
  DataType: 
  OrigDataType: 
T_152: (in ax : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_153: (in bx : word16)
  Class: Eq_41
  DataType: word16
  OrigDataType: word16
T_154: (in dl : byte)
  Class: Eq_51
  DataType: byte
  OrigDataType: byte
T_155: (in es : selector)
  Class: Eq_52
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_156: (in ds : selector)
  Class: Eq_13
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_157: (in 0x01BF : word16)
  Class: Eq_157
  DataType: (memptr T_13 (struct (0 T_158 t0000)))
  OrigDataType: (memptr T_13 (struct (0 T_158 t0000)))
T_158: (in Mem86[ds:0x01BF:word16] : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_159: (in 0x0000 : word16)
  Class: Eq_41
  DataType: word16
  OrigDataType: word16
T_160: (in fn0C00_01DF(Mem86[ds:0x01BF:word16], 0x0000, dl_96, 0xA000, ds) : byte)
  Class: Eq_160
  DataType: byte
  OrigDataType: byte
T_161: (in Z_108 : byte)
  Class: Eq_161
  DataType: byte
  OrigDataType: byte
T_162: (in fn0C00_01DF : ptr32)
  Class: Eq_150
  DataType: (ptr (fn T_167 (T_164, T_165, T_166, T_58, T_13)))
  OrigDataType: (ptr (fn T_167 (T_164, T_165, T_166, T_58, T_13)))
T_163: (in 0x01C1 : word16)
  Class: Eq_163
  DataType: (memptr T_13 (struct (0 T_164 t0000)))
  OrigDataType: (memptr T_13 (struct (0 T_164 t0000)))
T_164: (in Mem86[ds:0x01C1:word16] : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_165: (in 0x013F : word16)
  Class: Eq_41
  DataType: word16
  OrigDataType: word16
T_166: (in 0x0F : byte)
  Class: Eq_51
  DataType: byte
  OrigDataType: byte
T_167: (in fn0C00_01DF(Mem86[ds:0x01C1:word16], 0x013F, 0x0F, 0xA000, ds) : byte)
  Class: Eq_161
  DataType: byte
  OrigDataType: byte
T_168: (in bios_kbd_check_keystroke : ptr32)
  Class: Eq_168
  DataType: (ptr (fn T_172 (T_171)))
  OrigDataType: (ptr (fn T_172 (T_171)))
T_169: (in signature of bios_kbd_check_keystroke : void)
  Class: Eq_168
  DataType: 
  OrigDataType: 
T_170: (in alOut : ptr16)
  Class: Eq_170
  DataType: ptr16
  OrigDataType: ptr16
T_171: (in out al_109 : ptr16)
  Class: Eq_170
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_172: (in bios_kbd_check_keystroke(out al_109) : byte)
  Class: Eq_172
  DataType: byte
  OrigDataType: byte
T_173: (in 0x01CB : word16)
  Class: Eq_173
  DataType: (memptr T_13 (struct (0 T_81 t0000)))
  OrigDataType: (memptr T_13 (struct (0 T_81 t0000)))
T_174: (in Mem69[ds:0x01CB:word16] : word16)
  Class: Eq_81
  DataType: int16
  OrigDataType: int16
T_175: (in -Mem69[ds:0x01CB:word16] : word16)
  Class: Eq_81
  DataType: int16
  OrigDataType: int16
T_176: (in Mem113[ds:0x01CB:word16] : word16)
  Class: Eq_81
  DataType: word16
  OrigDataType: word16
T_177: (in 0x0000 : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_178: (in 0x01C3 : word16)
  Class: Eq_178
  DataType: (memptr T_13 (struct (0 T_179 t0000)))
  OrigDataType: (memptr T_13 (struct (0 T_179 t0000)))
T_179: (in Mem24[ds:0x01C3:word16] : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_180: (in __syscall : ptr32)
  Class: Eq_180
  DataType: (ptr (fn T_182 (T_181)))
  OrigDataType: (ptr (fn T_182 (T_181)))
T_181: (in 0x16 : byte)
  Class: Eq_181
  DataType: byte
  OrigDataType: byte
T_182: (in __syscall(0x16) : void)
  Class: Eq_182
  DataType: void
  OrigDataType: void
T_183: (in 0x04 : byte)
  Class: Eq_183
  DataType: byte
  OrigDataType: byte
T_184: (in al_109 & 0x04 : byte)
  Class: Eq_184
  DataType: byte
  OrigDataType: byte
T_185: (in 0x00 : byte)
  Class: Eq_184
  DataType: byte
  OrigDataType: byte
T_186: (in (al_109 & 0x04) == 0x00 : bool)
  Class: Eq_186
  DataType: bool
  OrigDataType: bool
T_187: (in msdos_terminate_program20 : ptr32)
  Class: Eq_187
  DataType: (ptr (fn T_189 ()))
  OrigDataType: (ptr (fn T_189 ()))
T_188: (in signature of msdos_terminate_program20 : void)
  Class: Eq_187
  DataType: 
  OrigDataType: 
T_189: (in msdos_terminate_program20() : void)
  Class: Eq_189
  DataType: void
  OrigDataType: void
T_190: (in Z : bool)
  Class: Eq_190
  DataType: bool
  OrigDataType: bool
T_191: (in bx_15 : word16)
  Class: Eq_191
  DataType: word16
  OrigDataType: word16
T_192: (in 0x01CD : word16)
  Class: Eq_192
  DataType: (memptr T_53 (struct (0 T_193 t0000)))
  OrigDataType: (memptr T_53 (struct (0 T_193 t0000)))
T_193: (in Mem0[ds:0x01CD:word16] : word16)
  Class: Eq_193
  DataType: uint16
  OrigDataType: uint16
T_194: (in Mem0[ds:0x01CD:word16] *u ax : uint32)
  Class: Eq_194
  DataType: uint32
  OrigDataType: uint32
T_195: (in (word16) (Mem0[ds:0x01CD:word16] *u ax) : word16)
  Class: Eq_195
  DataType: word16
  OrigDataType: word16
T_196: (in bx + (word16) (Mem0[ds:0x01CD:word16] *u ax) : word16)
  Class: Eq_191
  DataType: word16
  OrigDataType: word16
T_197: (in dl_19 : byte)
  Class: Eq_197
  DataType: byte
  OrigDataType: byte
T_198: (in dx : word16)
  Class: Eq_198
  DataType: word16
  OrigDataType: word16
T_199: (in (byte) dx : byte)
  Class: Eq_197
  DataType: byte
  OrigDataType: byte
T_200: (in *dlOut : byte)
  Class: Eq_197
  DataType: 
  OrigDataType: 
T_201: (in 0x0000 : word16)
  Class: Eq_201
  DataType: 
  OrigDataType: 
T_202: (in bx_15 + 0x0000 : word16)
  Class: Eq_202
  DataType: 
  OrigDataType: 
T_203: (in Mem21[es:bx_15 + 0x0000:byte] : byte)
  Class: Eq_197
  DataType: 
  OrigDataType: 
T_204: (in al_27 : byte)
  Class: Eq_204
  DataType: 
  OrigDataType: 
T_205: (in (byte) ax : byte)
  Class: Eq_205
  DataType: 
  OrigDataType: 
T_206: (in *alOut : byte)
  Class: Eq_205
  DataType: 
  OrigDataType: 
T_207: (in ah_28 : byte)
  Class: Eq_207
  DataType: 
  OrigDataType: 
T_208: (in SLICE(ax, byte, 8) : byte)
  Class: Eq_208
  DataType: 
  OrigDataType: 
T_209: (in *ahOut : byte)
  Class: Eq_208
  DataType: 
  OrigDataType: 
T_210: (in cond(bx_15) : byte)
  Class: Eq_210
  DataType: 
  OrigDataType: 
T_211: (in Z : bool)
  Class: Eq_211
  DataType: 
  OrigDataType: 
T_212: (in cx_19 : word16)
  Class: Eq_212
  DataType: 
  OrigDataType: 
T_213: (in 0x000A : word16)
  Class: Eq_212
  DataType: 
  OrigDataType: 
T_214: (in al_11 : byte)
  Class: Eq_214
  DataType: 
  OrigDataType: 
T_215: (in ah_13 : byte)
  Class: Eq_215
  DataType: 
  OrigDataType: 
T_216: (in fn0C00_01CF : ptr32)
  Class: Eq_47
  DataType: 
  OrigDataType: 
T_217: (in out al_11 : ptr16)
  Class: Eq_54
  DataType: 
  OrigDataType: 
T_218: (in out dl : ptr16)
  Class: Eq_55
  DataType: 
  OrigDataType: 
T_219: (in out ah_13 : ptr16)
  Class: Eq_56
  DataType: 
  OrigDataType: 
T_220: (in fn0C00_01CF(ax, bx, dl, es, ds, out al_11, out dl, out ah_13) : bool)
  Class: Eq_220
  DataType: 
  OrigDataType: 
T_221: (in 0x0001 : word16)
  Class: Eq_221
  DataType: 
  OrigDataType: 
T_222: (in ax + 0x0001 : word16)
  Class: Eq_38
  DataType: 
  OrigDataType: 
T_223: (in 0x0001 : word16)
  Class: Eq_223
  DataType: 
  OrigDataType: 
T_224: (in cx_19 - 0x0001 : word16)
  Class: Eq_212
  DataType: 
  OrigDataType: 
T_225: (in 0x0000 : word16)
  Class: Eq_212
  DataType: 
  OrigDataType: 
T_226: (in cx_19 != 0x0000 : bool)
  Class: Eq_226
  DataType: 
  OrigDataType: 
T_227: (in al_23 : byte)
  Class: Eq_227
  DataType: 
  OrigDataType: 
T_228: (in dl_24 : byte)
  Class: Eq_51
  DataType: 
  OrigDataType: 
T_229: (in ah_25 : byte)
  Class: Eq_229
  DataType: 
  OrigDataType: 
T_230: (in fn0C00_01CF : ptr32)
  Class: Eq_47
  DataType: 
  OrigDataType: 
T_231: (in 0x00 : byte)
  Class: Eq_51
  DataType: 
  OrigDataType: 
T_232: (in out al_23 : ptr16)
  Class: Eq_54
  DataType: 
  OrigDataType: 
T_233: (in out dl_24 : ptr16)
  Class: Eq_55
  DataType: 
  OrigDataType: 
T_234: (in out ah_25 : ptr16)
  Class: Eq_56
  DataType: 
  OrigDataType: 
T_235: (in fn0C00_01CF(ax, bx, 0x00, es, ds, out al_23, out dl_24, out ah_25) : bool)
  Class: Eq_235
  DataType: 
  OrigDataType: 
T_236: (in al_31 : byte)
  Class: Eq_236
  DataType: 
  OrigDataType: 
T_237: (in dl_32 : byte)
  Class: Eq_237
  DataType: 
  OrigDataType: 
T_238: (in ah_33 : byte)
  Class: Eq_238
  DataType: 
  OrigDataType: 
T_239: (in fn0C00_01CF : ptr32)
  Class: Eq_47
  DataType: 
  OrigDataType: 
T_240: (in 0x0B : byte)
  Class: Eq_240
  DataType: 
  OrigDataType: 
T_241: (in al_23 - 0x0B : byte)
  Class: Eq_241
  DataType: 
  OrigDataType: 
T_242: (in DPB(ax, al_23 - 0x0B, 0, 8) : word16)
  Class: Eq_38
  DataType: 
  OrigDataType: 
T_243: (in out al_31 : ptr16)
  Class: Eq_54
  DataType: 
  OrigDataType: 
T_244: (in out dl_32 : ptr16)
  Class: Eq_55
  DataType: 
  OrigDataType: 
T_245: (in out ah_33 : ptr16)
  Class: Eq_56
  DataType: 
  OrigDataType: 
T_246: (in fn0C00_01CF(DPB(ax, al_23 - 0x0B, 0, 8), bx, dl_24, es, ds, out al_31, out dl_32, out ah_33) : bool)
  Class: Eq_246
  DataType: 
  OrigDataType: 
T_247: (in bx : word16)
  Class: Eq_247
  DataType: 
  OrigDataType: 
T_248: (in 0x00 : byte)
  Class: Eq_66
  DataType: 
  OrigDataType: 
T_249: (in bl != 0x00 : bool)
  Class: Eq_249
  DataType: 
  OrigDataType: 
T_250: (in true : bool)
  Class: Eq_250
  DataType: 
  OrigDataType: 
T_251: (in 0x01 : byte)
  Class: Eq_251
  DataType: 
  OrigDataType: 
T_252: (in DPB(bx, 0x01, 0, 8) : word16)
  Class: Eq_247
  DataType: 
  OrigDataType: 
T_253: (in 0xBD : byte)
  Class: Eq_253
  DataType: 
  OrigDataType: 
T_254: (in DPB(bx, 0xBD, 0, 8) : word16)
  Class: Eq_247
  DataType: 
  OrigDataType: 
T_255: (in cx != dx : bool)
  Class: Eq_255
  DataType: 
  OrigDataType: 
T_256: (in ax < bx : bool)
  Class: Eq_256
  DataType: 
  OrigDataType: 
T_257: (in 0x36D1 : word16)
  Class: Eq_257
  DataType: 
  OrigDataType: 
T_258: (in Mem0[ds:0x36D1:word16] : word16)
  Class: Eq_258
  DataType: 
  OrigDataType: 
T_259: (in ax + bx : word16)
  Class: Eq_259
  DataType: 
  OrigDataType: 
T_260: (in Mem0[ds:0x36D1:word16] *u (ax + bx) : uint32)
  Class: Eq_260
  DataType: 
  OrigDataType: 
T_261: (in (word16) (Mem0[ds:0x36D1:word16] *u (ax + bx)) : word16)
  Class: Eq_261
  DataType: 
  OrigDataType: 
T_262: (in 0x007F : word16)
  Class: Eq_262
  DataType: 
  OrigDataType: 
T_263: (in (word16) (Mem0[ds:0x36D1:word16] *u (ax + bx)) & 0x007F : word16)
  Class: Eq_263
  DataType: 
  OrigDataType: 
T_264: (in 0x0024 : word16)
  Class: Eq_264
  DataType: 
  OrigDataType: 
T_265: (in ((word16) (Mem0[ds:0x36D1:word16] *u (ax + bx)) & 0x007F) + 0x0024 : word16)
  Class: Eq_38
  DataType: 
  OrigDataType: 
T_266: (in 0x01C7 : word16)
  Class: Eq_266
  DataType: 
  OrigDataType: 
T_267: (in Mem39[ds:0x01C7:word16] : word16)
  Class: Eq_38
  DataType: 
  OrigDataType: 
T_268: (in 0x00A0 : word16)
  Class: Eq_268
  DataType: 
  OrigDataType: 
T_269: (in 0x01C5 : word16)
  Class: Eq_269
  DataType: 
  OrigDataType: 
T_270: (in Mem40[ds:0x01C5:word16] : word16)
  Class: Eq_268
  DataType: 
  OrigDataType: 
T_271: (in bl : byte)
  Class: Eq_271
  DataType: 
  OrigDataType: 
T_272: (in 0x0A : byte)
  Class: Eq_272
  DataType: 
  OrigDataType: 
T_273: (in bl + 0x0A : byte)
  Class: Eq_273
  DataType: 
  OrigDataType: 
T_274: (in DPB(bx, bl + 0x0A, 0, 8) : word16)
  Class: Eq_38
  DataType: 
  OrigDataType: 
T_275: (in ax >= bx : bool)
  Class: Eq_275
  DataType: 
  OrigDataType: 
T_276: (in 0x01C9 : word16)
  Class: Eq_276
  DataType: 
  OrigDataType: 
T_277: (in Mem0[ds:0x01C9:word16] : word16)
  Class: Eq_277
  DataType: 
  OrigDataType: 
T_278: (in -Mem0[ds:0x01C9:word16] : word16)
  Class: Eq_278
  DataType: 
  OrigDataType: 
T_279: (in Mem46[ds:0x01C9:word16] : word16)
  Class: Eq_278
  DataType: 
  OrigDataType: 
*/
