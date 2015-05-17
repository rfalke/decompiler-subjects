// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_307/ia32_com/subject.exe
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
T_7: (in al_110 : byte)
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
T_10: (in al_110 & 0x08 : byte)
  Class: Eq_10
  DataType: byte
  OrigDataType: byte
T_11: (in 0x00 : byte)
  Class: Eq_10
  DataType: byte
  OrigDataType: byte
T_12: (in (al_110 & 0x08) == 0x00 : bool)
  Class: Eq_12
  DataType: bool
  OrigDataType: bool
T_13: (in ds : selector)
  Class: Eq_13
  DataType: (ptr (segment (1C5 T_38 t01C5) (1C7 T_38 t01C7) (1C9 T_15 t01C9) (1CB T_47 t01CB) (1CD T_38 t01CD) (1CF T_122 t01CF) (1D1 T_92 t01D1)))
  OrigDataType: (ptr (segment (1C5 T_38 t01C5) (1C7 T_38 t01C7) (1C9 T_15 t01C9) (1CB T_47 t01CB) (1CD T_38 t01CD) (1CF T_122 t01CF) (1D1 T_92 t01D1)))
T_14: (in 0x01C9 : word16)
  Class: Eq_14
  DataType: (memptr T_13 (struct (0 T_15 t0000)))
  OrigDataType: (memptr T_13 (struct (0 T_15 t0000)))
T_15: (in Mem24[ds:0x01C9:word16] : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_16: (in 0x0001 : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_17: (in Mem24[ds:0x01C9:word16] + 0x0001 : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_18: (in Mem138[ds:0x01C9:word16] : word16)
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
T_26: (in 0x01C9 : word16)
  Class: Eq_26
  DataType: (memptr T_13 (struct (0 T_15 t0000)))
  OrigDataType: (memptr T_13 (struct (0 T_15 t0000)))
T_27: (in Mem24[ds:0x01C9:word16] : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_28: (in 0x0001 : word16)
  Class: Eq_28
  DataType: word16
  OrigDataType: word16
T_29: (in Mem24[ds:0x01C9:word16] - 0x0001 : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_30: (in Mem135[ds:0x01C9:word16] : word16)
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
T_39: (in 0x01CD : word16)
  Class: Eq_39
  DataType: (memptr T_13 (struct (0 T_40 t0000)))
  OrigDataType: (memptr T_13 (struct (0 T_40 t0000)))
T_40: (in Mem24[ds:0x01CD:word16] : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_41: (in al_50 : byte)
  Class: Eq_41
  DataType: byte
  OrigDataType: byte
T_42: (in dl_51 : byte)
  Class: Eq_42
  DataType: byte
  OrigDataType: byte
T_43: (in ah_52 : byte)
  Class: Eq_43
  DataType: byte
  OrigDataType: byte
T_44: (in fn0C00_01D5 : ptr32)
  Class: Eq_44
  DataType: (ptr (fn T_61 (T_38, T_55, T_56, T_57, T_13, T_58, T_59, T_60)))
  OrigDataType: (ptr (fn T_61 (T_38, T_55, T_56, T_57, T_13, T_58, T_59, T_60)))
T_45: (in signature of fn0C00_01D5 : void)
  Class: Eq_44
  DataType: 
  OrigDataType: 
T_46: (in ax : word16)
  Class: Eq_38
  DataType: uint16
  OrigDataType: uint16
T_47: (in bx : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_48: (in dl : byte)
  Class: Eq_48
  DataType: byte
  OrigDataType: byte
T_49: (in es : selector)
  Class: Eq_49
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_50: (in ds : selector)
  Class: Eq_13
  DataType: (ptr (segment (1D3 T_194 t01D3)))
  OrigDataType: (ptr (segment (1D3 T_194 t01D3)))
T_51: (in alOut : ptr16)
  Class: Eq_51
  DataType: ptr16
  OrigDataType: ptr16
T_52: (in dlOut : ptr16)
  Class: Eq_52
  DataType: ptr16
  OrigDataType: ptr16
T_53: (in ahOut : ptr16)
  Class: Eq_53
  DataType: ptr16
  OrigDataType: ptr16
T_54: (in 0x01CB : word16)
  Class: Eq_54
  DataType: (memptr T_13 (struct (0 T_55 t0000)))
  OrigDataType: (memptr T_13 (struct (0 T_55 t0000)))
T_55: (in Mem24[ds:0x01CB:word16] : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_56: (in 0x00 : byte)
  Class: Eq_48
  DataType: byte
  OrigDataType: byte
T_57: (in 0xA000 : selector)
  Class: Eq_49
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_58: (in out al_50 : ptr16)
  Class: Eq_51
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_59: (in out dl_51 : ptr16)
  Class: Eq_52
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_60: (in out ah_52 : ptr16)
  Class: Eq_53
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_61: (in fn0C00_01D5(ax_43, Mem24[ds:0x01CB:word16], 0x00, 0xA000, ds, out al_50, out dl_51, out ah_52) : byte)
  Class: Eq_61
  DataType: byte
  OrigDataType: byte
T_62: (in bx_56 : word16)
  Class: Eq_38
  DataType: int16
  OrigDataType: int16
T_63: (in 0x01C7 : word16)
  Class: Eq_63
  DataType: (memptr T_13 (struct (0 T_64 t0000)))
  OrigDataType: (memptr T_13 (struct (0 T_64 t0000)))
T_64: (in Mem24[ds:0x01C7:word16] : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_65: (in bl_129 : byte)
  Class: Eq_65
  DataType: byte
  OrigDataType: byte
T_66: (in (byte) bx_56 : byte)
  Class: Eq_65
  DataType: byte
  OrigDataType: byte
T_67: (in 0x01CB : word16)
  Class: Eq_67
  DataType: (memptr T_13 (struct (0 T_68 t0000)))
  OrigDataType: (memptr T_13 (struct (0 T_68 t0000)))
T_68: (in Mem24[ds:0x01CB:word16] : word16)
  Class: Eq_47
  DataType: int16
  OrigDataType: int16
T_69: (in 0x00E6 : word16)
  Class: Eq_47
  DataType: int16
  OrigDataType: int16
T_70: (in Mem24[ds:0x01CB:word16] < 0x00E6 : bool)
  Class: Eq_70
  DataType: bool
  OrigDataType: bool
T_71: (in fn0C00_01F9 : ptr32)
  Class: Eq_71
  DataType: (ptr (fn T_74 (T_65)))
  OrigDataType: (ptr (fn T_74 (T_65)))
T_72: (in signature of fn0C00_01F9 : void)
  Class: Eq_71
  DataType: 
  OrigDataType: 
T_73: (in bl : byte)
  Class: Eq_65
  DataType: byte
  OrigDataType: byte
T_74: (in fn0C00_01F9(bl_129) : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_75: (in 0x01C7 : word16)
  Class: Eq_75
  DataType: (memptr T_13 (struct (0 T_76 t0000)))
  OrigDataType: (memptr T_13 (struct (0 T_76 t0000)))
T_76: (in Mem63[ds:0x01C7:word16] : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_77: (in bx_68 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_78: (in fn0C00_01F9 : ptr32)
  Class: Eq_71
  DataType: (ptr (fn T_85 (T_84)))
  OrigDataType: (ptr (fn T_85 (T_84)))
T_79: (in 0x01C5 : word16)
  Class: Eq_79
  DataType: (memptr T_13 (struct (0 T_80 t0000)))
  OrigDataType: (memptr T_13 (struct (0 T_80 t0000)))
T_80: (in Mem63[ds:0x01C5:word16] : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_81: (in 0x01C9 : word16)
  Class: Eq_81
  DataType: (memptr T_13 (struct (0 T_82 t0000)))
  OrigDataType: (memptr T_13 (struct (0 T_82 t0000)))
T_82: (in Mem63[ds:0x01C9:word16] : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_83: (in Mem63[ds:0x01C5:word16] + Mem63[ds:0x01C9:word16] : word16)
  Class: Eq_83
  DataType: word16
  OrigDataType: word16
T_84: (in (byte) (Mem63[ds:0x01C5:word16] + Mem63[ds:0x01C9:word16]) : byte)
  Class: Eq_65
  DataType: byte
  OrigDataType: byte
T_85: (in fn0C00_01F9((byte) (Mem63[ds:0x01C5:word16] + Mem63[ds:0x01C9:word16])) : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_86: (in 0x01C5 : word16)
  Class: Eq_86
  DataType: (memptr T_13 (struct (0 T_87 t0000)))
  OrigDataType: (memptr T_13 (struct (0 T_87 t0000)))
T_87: (in Mem70[ds:0x01C5:word16] : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_88: (in ax_72 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_89: (in 0x01CD : word16)
  Class: Eq_89
  DataType: (memptr T_13 (struct (0 T_90 t0000)))
  OrigDataType: (memptr T_13 (struct (0 T_90 t0000)))
T_90: (in Mem70[ds:0x01CD:word16] : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_91: (in 0x01D1 : word16)
  Class: Eq_91
  DataType: (memptr T_13 (struct (0 T_92 t0000)))
  OrigDataType: (memptr T_13 (struct (0 T_92 t0000)))
T_92: (in Mem70[ds:0x01D1:word16] : word16)
  Class: Eq_92
  DataType: word16
  OrigDataType: word16
T_93: (in Mem70[ds:0x01CD:word16] + Mem70[ds:0x01D1:word16] : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_94: (in 0x01CD : word16)
  Class: Eq_94
  DataType: (memptr T_13 (struct (0 T_95 t0000)))
  OrigDataType: (memptr T_13 (struct (0 T_95 t0000)))
T_95: (in Mem75[ds:0x01CD:word16] : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_96: (in al_73 : byte)
  Class: Eq_96
  DataType: byte
  OrigDataType: byte
T_97: (in (byte) ax_72 : byte)
  Class: Eq_96
  DataType: byte
  OrigDataType: byte
T_98: (in 0x01 : byte)
  Class: Eq_96
  DataType: byte
  OrigDataType: byte
T_99: (in al_73 != 0x01 : bool)
  Class: Eq_99
  DataType: bool
  OrigDataType: bool
T_100: (in ax_122 : word16)
  Class: Eq_38
  DataType: int16
  OrigDataType: int16
T_101: (in 0x05 : byte)
  Class: Eq_101
  DataType: byte
  OrigDataType: byte
T_102: (in al_50 - 0x05 : byte)
  Class: Eq_102
  DataType: byte
  OrigDataType: byte
T_103: (in DPB(ax_43, al_50 - 0x05, 0, 8) : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_104: (in ax_122 == bx_56 : bool)
  Class: Eq_104
  DataType: bool
  OrigDataType: bool
T_105: (in ax_122 > bx_56 : bool)
  Class: Eq_105
  DataType: bool
  OrigDataType: bool
T_106: (in 0x0001 : word16)
  Class: Eq_106
  DataType: word16
  OrigDataType: word16
T_107: (in bx_56 + 0x0001 : word16)
  Class: Eq_107
  DataType: word16
  OrigDataType: word16
T_108: (in (byte) (bx_56 + 0x0001) : byte)
  Class: Eq_65
  DataType: byte
  OrigDataType: byte
T_109: (in 0x0001 : word16)
  Class: Eq_109
  DataType: word16
  OrigDataType: word16
T_110: (in bx_56 - 0x0001 : word16)
  Class: Eq_110
  DataType: word16
  OrigDataType: word16
T_111: (in (byte) (bx_56 - 0x0001) : byte)
  Class: Eq_65
  DataType: byte
  OrigDataType: byte
T_112: (in 0xC6 : byte)
  Class: Eq_96
  DataType: byte
  OrigDataType: byte
T_113: (in al_73 != 0xC6 : bool)
  Class: Eq_113
  DataType: bool
  OrigDataType: bool
T_114: (in 0x01D1 : word16)
  Class: Eq_114
  DataType: (memptr T_13 (struct (0 T_92 t0000)))
  OrigDataType: (memptr T_13 (struct (0 T_92 t0000)))
T_115: (in Mem75[ds:0x01D1:word16] : word16)
  Class: Eq_92
  DataType: int16
  OrigDataType: int16
T_116: (in -Mem75[ds:0x01D1:word16] : word16)
  Class: Eq_92
  DataType: int16
  OrigDataType: int16
T_117: (in Mem118[ds:0x01D1:word16] : word16)
  Class: Eq_92
  DataType: word16
  OrigDataType: word16
T_118: (in cx_83 : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_119: (in 0x01CB : word16)
  Class: Eq_119
  DataType: (memptr T_13 (struct (0 T_120 t0000)))
  OrigDataType: (memptr T_13 (struct (0 T_120 t0000)))
T_120: (in Mem75[ds:0x01CB:word16] : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_121: (in 0x01CF : word16)
  Class: Eq_121
  DataType: (memptr T_13 (struct (0 T_122 t0000)))
  OrigDataType: (memptr T_13 (struct (0 T_122 t0000)))
T_122: (in Mem75[ds:0x01CF:word16] : word16)
  Class: Eq_122
  DataType: word16
  OrigDataType: word16
T_123: (in Mem75[ds:0x01CB:word16] + Mem75[ds:0x01CF:word16] : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_124: (in 0x01CB : word16)
  Class: Eq_124
  DataType: (memptr T_13 (struct (0 T_125 t0000)))
  OrigDataType: (memptr T_13 (struct (0 T_125 t0000)))
T_125: (in Mem84[ds:0x01CB:word16] : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_126: (in al_96 : byte)
  Class: Eq_126
  DataType: byte
  OrigDataType: byte
T_127: (in dl_97 : byte)
  Class: Eq_48
  DataType: byte
  OrigDataType: byte
T_128: (in ah_98 : byte)
  Class: Eq_128
  DataType: byte
  OrigDataType: byte
T_129: (in fn0C00_01D5 : ptr32)
  Class: Eq_44
  DataType: (ptr (fn T_150 (T_143, T_145, T_146, T_57, T_13, T_147, T_148, T_149)))
  OrigDataType: (ptr (fn T_150 (T_143, T_145, T_146, T_57, T_13, T_147, T_148, T_149)))
T_130: (in fn0C00_0208 : ptr32)
  Class: Eq_130
  DataType: (ptr (fn T_143 (T_139, T_118, T_140, T_142, T_13)))
  OrigDataType: (ptr (fn T_143 (T_139, T_118, T_140, T_142, T_13)))
T_131: (in signature of fn0C00_0208 : void)
  Class: Eq_130
  DataType: 
  OrigDataType: 
T_132: (in ax : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_133: (in cx : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_134: (in dx : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_135: (in bx : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_136: (in ds : selector)
  Class: Eq_13
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_137: (in fn0C00_0208 : ptr32)
  Class: Eq_130
  DataType: (ptr (fn T_139 (T_88, T_118, T_138, T_77, T_13)))
  OrigDataType: (ptr (fn T_139 (T_88, T_118, T_138, T_77, T_13)))
T_138: (in 0x0000 : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_139: (in fn0C00_0208(ax_72, cx_83, 0x0000, bx_68, ds) : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_140: (in 0x013F : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_141: (in 0x01C7 : word16)
  Class: Eq_141
  DataType: (memptr T_13 (struct (0 T_142 t0000)))
  OrigDataType: (memptr T_13 (struct (0 T_142 t0000)))
T_142: (in Mem84[ds:0x01C7:word16] : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_143: (in fn0C00_0208(fn0C00_0208(ax_72, cx_83, 0x0000, bx_68, ds), cx_83, 0x013F, Mem84[ds:0x01C7:word16], ds) : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_144: (in 0x01CB : word16)
  Class: Eq_144
  DataType: (memptr T_13 (struct (0 T_145 t0000)))
  OrigDataType: (memptr T_13 (struct (0 T_145 t0000)))
T_145: (in Mem84[ds:0x01CB:word16] : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_146: (in 0x0F : byte)
  Class: Eq_48
  DataType: byte
  OrigDataType: byte
T_147: (in out al_96 : ptr16)
  Class: Eq_51
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_148: (in out dl_97 : ptr16)
  Class: Eq_52
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_149: (in out ah_98 : ptr16)
  Class: Eq_53
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_150: (in fn0C00_01D5(fn0C00_0208(fn0C00_0208(ax_72, cx_83, 0x0000, bx_68, ds), cx_83, 0x013F, Mem84[ds:0x01C7:word16], ds), Mem84[ds:0x01CB:word16], 0x0F, 0xA000, ds, out al_96, out dl_97, out ah_98) : byte)
  Class: Eq_150
  DataType: byte
  OrigDataType: byte
T_151: (in fn0C00_01E5 : ptr32)
  Class: Eq_151
  DataType: (ptr (fn T_161 (T_159, T_160, T_127, T_57, T_13)))
  OrigDataType: (ptr (fn T_161 (T_159, T_160, T_127, T_57, T_13)))
T_152: (in signature of fn0C00_01E5 : void)
  Class: Eq_151
  DataType: 
  OrigDataType: 
T_153: (in ax : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_154: (in bx : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_155: (in dl : byte)
  Class: Eq_48
  DataType: byte
  OrigDataType: byte
T_156: (in es : selector)
  Class: Eq_49
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_157: (in ds : selector)
  Class: Eq_13
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_158: (in 0x01C5 : word16)
  Class: Eq_158
  DataType: (memptr T_13 (struct (0 T_159 t0000)))
  OrigDataType: (memptr T_13 (struct (0 T_159 t0000)))
T_159: (in Mem84[ds:0x01C5:word16] : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_160: (in 0x0000 : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_161: (in fn0C00_01E5(Mem84[ds:0x01C5:word16], 0x0000, dl_97, 0xA000, ds) : byte)
  Class: Eq_161
  DataType: byte
  OrigDataType: byte
T_162: (in Z_109 : byte)
  Class: Eq_162
  DataType: byte
  OrigDataType: byte
T_163: (in fn0C00_01E5 : ptr32)
  Class: Eq_151
  DataType: (ptr (fn T_168 (T_165, T_166, T_167, T_57, T_13)))
  OrigDataType: (ptr (fn T_168 (T_165, T_166, T_167, T_57, T_13)))
T_164: (in 0x01C7 : word16)
  Class: Eq_164
  DataType: (memptr T_13 (struct (0 T_165 t0000)))
  OrigDataType: (memptr T_13 (struct (0 T_165 t0000)))
T_165: (in Mem84[ds:0x01C7:word16] : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_166: (in 0x013F : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_167: (in 0x0F : byte)
  Class: Eq_48
  DataType: byte
  OrigDataType: byte
T_168: (in fn0C00_01E5(Mem84[ds:0x01C7:word16], 0x013F, 0x0F, 0xA000, ds) : byte)
  Class: Eq_162
  DataType: byte
  OrigDataType: byte
T_169: (in bios_kbd_check_keystroke : ptr32)
  Class: Eq_169
  DataType: (ptr (fn T_173 (T_172)))
  OrigDataType: (ptr (fn T_173 (T_172)))
T_170: (in signature of bios_kbd_check_keystroke : void)
  Class: Eq_169
  DataType: 
  OrigDataType: 
T_171: (in alOut : ptr16)
  Class: Eq_171
  DataType: ptr16
  OrigDataType: ptr16
T_172: (in out al_110 : ptr16)
  Class: Eq_171
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_173: (in bios_kbd_check_keystroke(out al_110) : byte)
  Class: Eq_173
  DataType: byte
  OrigDataType: byte
T_174: (in 0x01D1 : word16)
  Class: Eq_174
  DataType: (memptr T_13 (struct (0 T_92 t0000)))
  OrigDataType: (memptr T_13 (struct (0 T_92 t0000)))
T_175: (in Mem75[ds:0x01D1:word16] : word16)
  Class: Eq_92
  DataType: int16
  OrigDataType: int16
T_176: (in -Mem75[ds:0x01D1:word16] : word16)
  Class: Eq_92
  DataType: int16
  OrigDataType: int16
T_177: (in Mem114[ds:0x01D1:word16] : word16)
  Class: Eq_92
  DataType: word16
  OrigDataType: word16
T_178: (in 0x0000 : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_179: (in 0x01C9 : word16)
  Class: Eq_179
  DataType: (memptr T_13 (struct (0 T_180 t0000)))
  OrigDataType: (memptr T_13 (struct (0 T_180 t0000)))
T_180: (in Mem24[ds:0x01C9:word16] : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_181: (in __syscall : ptr32)
  Class: Eq_181
  DataType: (ptr (fn T_183 (T_182)))
  OrigDataType: (ptr (fn T_183 (T_182)))
T_182: (in 0x16 : byte)
  Class: Eq_182
  DataType: byte
  OrigDataType: byte
T_183: (in __syscall(0x16) : void)
  Class: Eq_183
  DataType: void
  OrigDataType: void
T_184: (in 0x04 : byte)
  Class: Eq_184
  DataType: byte
  OrigDataType: byte
T_185: (in al_110 & 0x04 : byte)
  Class: Eq_185
  DataType: byte
  OrigDataType: byte
T_186: (in 0x00 : byte)
  Class: Eq_185
  DataType: byte
  OrigDataType: byte
T_187: (in (al_110 & 0x04) == 0x00 : bool)
  Class: Eq_187
  DataType: bool
  OrigDataType: bool
T_188: (in msdos_terminate_program20 : ptr32)
  Class: Eq_188
  DataType: (ptr (fn T_190 ()))
  OrigDataType: (ptr (fn T_190 ()))
T_189: (in signature of msdos_terminate_program20 : void)
  Class: Eq_188
  DataType: 
  OrigDataType: 
T_190: (in msdos_terminate_program20() : void)
  Class: Eq_190
  DataType: void
  OrigDataType: void
T_191: (in Z : bool)
  Class: Eq_191
  DataType: bool
  OrigDataType: bool
T_192: (in bx_15 : word16)
  Class: Eq_192
  DataType: word16
  OrigDataType: word16
T_193: (in 0x01D3 : word16)
  Class: Eq_193
  DataType: (memptr T_50 (struct (0 T_194 t0000)))
  OrigDataType: (memptr T_50 (struct (0 T_194 t0000)))
T_194: (in Mem0[ds:0x01D3:word16] : word16)
  Class: Eq_194
  DataType: uint16
  OrigDataType: uint16
T_195: (in Mem0[ds:0x01D3:word16] *u ax : uint32)
  Class: Eq_195
  DataType: uint32
  OrigDataType: uint32
T_196: (in (word16) (Mem0[ds:0x01D3:word16] *u ax) : word16)
  Class: Eq_196
  DataType: word16
  OrigDataType: word16
T_197: (in bx + (word16) (Mem0[ds:0x01D3:word16] *u ax) : word16)
  Class: Eq_192
  DataType: word16
  OrigDataType: word16
T_198: (in dl_19 : byte)
  Class: Eq_198
  DataType: byte
  OrigDataType: byte
T_199: (in dx : word16)
  Class: Eq_199
  DataType: word16
  OrigDataType: word16
T_200: (in (byte) dx : byte)
  Class: Eq_198
  DataType: byte
  OrigDataType: byte
T_201: (in *dlOut : byte)
  Class: Eq_198
  DataType: 
  OrigDataType: 
T_202: (in 0x0000 : word16)
  Class: Eq_202
  DataType: 
  OrigDataType: 
T_203: (in bx_15 + 0x0000 : word16)
  Class: Eq_203
  DataType: 
  OrigDataType: 
T_204: (in Mem21[es:bx_15 + 0x0000:byte] : byte)
  Class: Eq_198
  DataType: 
  OrigDataType: 
T_205: (in al_27 : byte)
  Class: Eq_205
  DataType: 
  OrigDataType: 
T_206: (in (byte) ax : byte)
  Class: Eq_206
  DataType: 
  OrigDataType: 
T_207: (in *alOut : byte)
  Class: Eq_206
  DataType: 
  OrigDataType: 
T_208: (in ah_28 : byte)
  Class: Eq_208
  DataType: 
  OrigDataType: 
T_209: (in SLICE(ax, byte, 8) : byte)
  Class: Eq_209
  DataType: 
  OrigDataType: 
T_210: (in *ahOut : byte)
  Class: Eq_209
  DataType: 
  OrigDataType: 
T_211: (in cond(bx_15) : byte)
  Class: Eq_211
  DataType: 
  OrigDataType: 
T_212: (in Z : bool)
  Class: Eq_212
  DataType: 
  OrigDataType: 
T_213: (in cx_19 : word16)
  Class: Eq_213
  DataType: 
  OrigDataType: 
T_214: (in 0x000A : word16)
  Class: Eq_213
  DataType: 
  OrigDataType: 
T_215: (in al_11 : byte)
  Class: Eq_215
  DataType: 
  OrigDataType: 
T_216: (in ah_13 : byte)
  Class: Eq_216
  DataType: 
  OrigDataType: 
T_217: (in fn0C00_01D5 : ptr32)
  Class: Eq_44
  DataType: 
  OrigDataType: 
T_218: (in out al_11 : ptr16)
  Class: Eq_51
  DataType: 
  OrigDataType: 
T_219: (in out dl : ptr16)
  Class: Eq_52
  DataType: 
  OrigDataType: 
T_220: (in out ah_13 : ptr16)
  Class: Eq_53
  DataType: 
  OrigDataType: 
T_221: (in fn0C00_01D5(ax, bx, dl, es, ds, out al_11, out dl, out ah_13) : bool)
  Class: Eq_221
  DataType: 
  OrigDataType: 
T_222: (in 0x0001 : word16)
  Class: Eq_222
  DataType: 
  OrigDataType: 
T_223: (in ax + 0x0001 : word16)
  Class: Eq_38
  DataType: 
  OrigDataType: 
T_224: (in 0x0001 : word16)
  Class: Eq_224
  DataType: 
  OrigDataType: 
T_225: (in cx_19 - 0x0001 : word16)
  Class: Eq_213
  DataType: 
  OrigDataType: 
T_226: (in 0x0000 : word16)
  Class: Eq_213
  DataType: 
  OrigDataType: 
T_227: (in cx_19 != 0x0000 : bool)
  Class: Eq_227
  DataType: 
  OrigDataType: 
T_228: (in al_23 : byte)
  Class: Eq_228
  DataType: 
  OrigDataType: 
T_229: (in dl_24 : byte)
  Class: Eq_48
  DataType: 
  OrigDataType: 
T_230: (in ah_25 : byte)
  Class: Eq_230
  DataType: 
  OrigDataType: 
T_231: (in fn0C00_01D5 : ptr32)
  Class: Eq_44
  DataType: 
  OrigDataType: 
T_232: (in 0x00 : byte)
  Class: Eq_48
  DataType: 
  OrigDataType: 
T_233: (in out al_23 : ptr16)
  Class: Eq_51
  DataType: 
  OrigDataType: 
T_234: (in out dl_24 : ptr16)
  Class: Eq_52
  DataType: 
  OrigDataType: 
T_235: (in out ah_25 : ptr16)
  Class: Eq_53
  DataType: 
  OrigDataType: 
T_236: (in fn0C00_01D5(ax, bx, 0x00, es, ds, out al_23, out dl_24, out ah_25) : bool)
  Class: Eq_236
  DataType: 
  OrigDataType: 
T_237: (in al_31 : byte)
  Class: Eq_237
  DataType: 
  OrigDataType: 
T_238: (in dl_32 : byte)
  Class: Eq_238
  DataType: 
  OrigDataType: 
T_239: (in ah_33 : byte)
  Class: Eq_239
  DataType: 
  OrigDataType: 
T_240: (in fn0C00_01D5 : ptr32)
  Class: Eq_44
  DataType: 
  OrigDataType: 
T_241: (in 0x0B : byte)
  Class: Eq_241
  DataType: 
  OrigDataType: 
T_242: (in al_23 - 0x0B : byte)
  Class: Eq_242
  DataType: 
  OrigDataType: 
T_243: (in DPB(ax, al_23 - 0x0B, 0, 8) : word16)
  Class: Eq_38
  DataType: 
  OrigDataType: 
T_244: (in out al_31 : ptr16)
  Class: Eq_51
  DataType: 
  OrigDataType: 
T_245: (in out dl_32 : ptr16)
  Class: Eq_52
  DataType: 
  OrigDataType: 
T_246: (in out ah_33 : ptr16)
  Class: Eq_53
  DataType: 
  OrigDataType: 
T_247: (in fn0C00_01D5(DPB(ax, al_23 - 0x0B, 0, 8), bx, dl_24, es, ds, out al_31, out dl_32, out ah_33) : bool)
  Class: Eq_247
  DataType: 
  OrigDataType: 
T_248: (in bx : word16)
  Class: Eq_248
  DataType: 
  OrigDataType: 
T_249: (in 0x00 : byte)
  Class: Eq_65
  DataType: 
  OrigDataType: 
T_250: (in bl != 0x00 : bool)
  Class: Eq_250
  DataType: 
  OrigDataType: 
T_251: (in true : bool)
  Class: Eq_251
  DataType: 
  OrigDataType: 
T_252: (in 0x01 : byte)
  Class: Eq_252
  DataType: 
  OrigDataType: 
T_253: (in DPB(bx, 0x01, 0, 8) : word16)
  Class: Eq_248
  DataType: 
  OrigDataType: 
T_254: (in 0xBD : byte)
  Class: Eq_254
  DataType: 
  OrigDataType: 
T_255: (in DPB(bx, 0xBD, 0, 8) : word16)
  Class: Eq_248
  DataType: 
  OrigDataType: 
T_256: (in cx != dx : bool)
  Class: Eq_256
  DataType: 
  OrigDataType: 
T_257: (in ax < bx : bool)
  Class: Eq_257
  DataType: 
  OrigDataType: 
T_258: (in 0x36D1 : word16)
  Class: Eq_258
  DataType: 
  OrigDataType: 
T_259: (in Mem0[ds:0x36D1:word16] : word16)
  Class: Eq_259
  DataType: 
  OrigDataType: 
T_260: (in ax + bx : word16)
  Class: Eq_260
  DataType: 
  OrigDataType: 
T_261: (in Mem0[ds:0x36D1:word16] *u (ax + bx) : uint32)
  Class: Eq_261
  DataType: 
  OrigDataType: 
T_262: (in (word16) (Mem0[ds:0x36D1:word16] *u (ax + bx)) : word16)
  Class: Eq_262
  DataType: 
  OrigDataType: 
T_263: (in 0x007F : word16)
  Class: Eq_263
  DataType: 
  OrigDataType: 
T_264: (in (word16) (Mem0[ds:0x36D1:word16] *u (ax + bx)) & 0x007F : word16)
  Class: Eq_264
  DataType: 
  OrigDataType: 
T_265: (in 0x0024 : word16)
  Class: Eq_265
  DataType: 
  OrigDataType: 
T_266: (in ((word16) (Mem0[ds:0x36D1:word16] *u (ax + bx)) & 0x007F) + 0x0024 : word16)
  Class: Eq_38
  DataType: 
  OrigDataType: 
T_267: (in 0x01CD : word16)
  Class: Eq_267
  DataType: 
  OrigDataType: 
T_268: (in Mem39[ds:0x01CD:word16] : word16)
  Class: Eq_38
  DataType: 
  OrigDataType: 
T_269: (in 0x00A0 : word16)
  Class: Eq_269
  DataType: 
  OrigDataType: 
T_270: (in 0x01CB : word16)
  Class: Eq_270
  DataType: 
  OrigDataType: 
T_271: (in Mem40[ds:0x01CB:word16] : word16)
  Class: Eq_269
  DataType: 
  OrigDataType: 
T_272: (in bl : byte)
  Class: Eq_272
  DataType: 
  OrigDataType: 
T_273: (in 0x0A : byte)
  Class: Eq_273
  DataType: 
  OrigDataType: 
T_274: (in bl + 0x0A : byte)
  Class: Eq_274
  DataType: 
  OrigDataType: 
T_275: (in DPB(bx, bl + 0x0A, 0, 8) : word16)
  Class: Eq_38
  DataType: 
  OrigDataType: 
T_276: (in ax >= bx : bool)
  Class: Eq_276
  DataType: 
  OrigDataType: 
T_277: (in 0x01CF : word16)
  Class: Eq_277
  DataType: 
  OrigDataType: 
T_278: (in Mem0[ds:0x01CF:word16] : word16)
  Class: Eq_278
  DataType: 
  OrigDataType: 
T_279: (in -Mem0[ds:0x01CF:word16] : word16)
  Class: Eq_279
  DataType: 
  OrigDataType: 
T_280: (in Mem46[ds:0x01CF:word16] : word16)
  Class: Eq_279
  DataType: 
  OrigDataType: 
*/
