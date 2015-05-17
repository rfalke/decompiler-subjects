// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_302/ia32_com/subject.exe
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
T_7: (in al_122 : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_8: (in 0x13 : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_9: (in wLoc04_11 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_10: (in 0x0064 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_11: (in 0x08 : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_12: (in al_122 & 0x08 : byte)
  Class: Eq_12
  DataType: byte
  OrigDataType: byte
T_13: (in 0x00 : byte)
  Class: Eq_12
  DataType: byte
  OrigDataType: byte
T_14: (in (al_122 & 0x08) == 0x00 : bool)
  Class: Eq_14
  DataType: bool
  OrigDataType: bool
T_15: (in ds : selector)
  Class: Eq_15
  DataType: (ptr (segment (1B5 T_9 t01B5) (1B7 T_9 t01B7) (1B9 T_17 t01B9) (1BB T_112 t01BB) (1BD T_76 t01BD)))
  OrigDataType: (ptr (segment (1B5 T_9 t01B5) (1B7 T_9 t01B7) (1B9 T_17 t01B9) (1BB T_112 t01BB) (1BD T_76 t01BD)))
T_16: (in 0x01B9 : word16)
  Class: Eq_16
  DataType: (memptr T_15 (struct (0 T_17 t0000)))
  OrigDataType: (memptr T_15 (struct (0 T_17 t0000)))
T_17: (in Mem30[ds:0x01B9:word16] : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_18: (in 0x0001 : word16)
  Class: Eq_18
  DataType: word16
  OrigDataType: word16
T_19: (in Mem30[ds:0x01B9:word16] + 0x0001 : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_20: (in Mem156[ds:0x01B9:word16] : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_21: (in __inb : ptr32)
  Class: Eq_21
  DataType: (ptr (fn T_23 (T_22)))
  OrigDataType: (ptr (fn T_23 (T_22)))
T_22: (in 0x03DA : word16)
  Class: Eq_22
  DataType: word16
  OrigDataType: word16
T_23: (in __inb(0x03DA) : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_24: (in 0x08 : byte)
  Class: Eq_24
  DataType: byte
  OrigDataType: byte
T_25: (in __inb(0x03DA) & 0x08 : byte)
  Class: Eq_25
  DataType: byte
  OrigDataType: byte
T_26: (in 0x00 : byte)
  Class: Eq_25
  DataType: byte
  OrigDataType: byte
T_27: (in (__inb(0x03DA) & 0x08) != 0x00 : bool)
  Class: Eq_27
  DataType: bool
  OrigDataType: bool
T_28: (in 0x01B9 : word16)
  Class: Eq_28
  DataType: (memptr T_15 (struct (0 T_17 t0000)))
  OrigDataType: (memptr T_15 (struct (0 T_17 t0000)))
T_29: (in Mem30[ds:0x01B9:word16] : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_30: (in 0x0001 : word16)
  Class: Eq_30
  DataType: word16
  OrigDataType: word16
T_31: (in Mem30[ds:0x01B9:word16] - 0x0001 : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_32: (in Mem153[ds:0x01B9:word16] : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_33: (in __inb : ptr32)
  Class: Eq_33
  DataType: (ptr (fn T_35 (T_34)))
  OrigDataType: (ptr (fn T_35 (T_34)))
T_34: (in 0x03DA : word16)
  Class: Eq_34
  DataType: word16
  OrigDataType: word16
T_35: (in __inb(0x03DA) : byte)
  Class: Eq_35
  DataType: byte
  OrigDataType: byte
T_36: (in 0x08 : byte)
  Class: Eq_36
  DataType: byte
  OrigDataType: byte
T_37: (in __inb(0x03DA) & 0x08 : byte)
  Class: Eq_37
  DataType: byte
  OrigDataType: byte
T_38: (in 0x00 : byte)
  Class: Eq_37
  DataType: byte
  OrigDataType: byte
T_39: (in (__inb(0x03DA) & 0x08) == 0x00 : bool)
  Class: Eq_39
  DataType: bool
  OrigDataType: bool
T_40: (in al_58 : byte)
  Class: Eq_40
  DataType: byte
  OrigDataType: byte
T_41: (in dl_59 : byte)
  Class: Eq_41
  DataType: byte
  OrigDataType: byte
T_42: (in ah_60 : byte)
  Class: Eq_42
  DataType: byte
  OrigDataType: byte
T_43: (in fn0C00_01C1 : ptr32)
  Class: Eq_43
  DataType: (ptr (fn T_59 (T_9, T_53, T_54, T_55, T_15, T_56, T_57, T_58)))
  OrigDataType: (ptr (fn T_59 (T_9, T_53, T_54, T_55, T_15, T_56, T_57, T_58)))
T_44: (in signature of fn0C00_01C1 : void)
  Class: Eq_43
  DataType: 
  OrigDataType: 
T_45: (in ax : word16)
  Class: Eq_9
  DataType: uint16
  OrigDataType: uint16
T_46: (in bx : word16)
  Class: Eq_46
  DataType: word16
  OrigDataType: word16
T_47: (in dl : byte)
  Class: Eq_47
  DataType: byte
  OrigDataType: byte
T_48: (in es : selector)
  Class: Eq_48
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_49: (in ds : selector)
  Class: Eq_15
  DataType: (ptr (segment (1BF T_194 t01BF)))
  OrigDataType: (ptr (segment (1BF T_194 t01BF)))
T_50: (in alOut : ptr16)
  Class: Eq_50
  DataType: ptr16
  OrigDataType: ptr16
T_51: (in dlOut : ptr16)
  Class: Eq_51
  DataType: ptr16
  OrigDataType: ptr16
T_52: (in ahOut : ptr16)
  Class: Eq_52
  DataType: ptr16
  OrigDataType: ptr16
T_53: (in 0x00A0 : word16)
  Class: Eq_46
  DataType: word16
  OrigDataType: word16
T_54: (in 0x00 : byte)
  Class: Eq_47
  DataType: byte
  OrigDataType: byte
T_55: (in 0xA000 : selector)
  Class: Eq_48
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_56: (in out al_58 : ptr16)
  Class: Eq_50
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_57: (in out dl_59 : ptr16)
  Class: Eq_51
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_58: (in out ah_60 : ptr16)
  Class: Eq_52
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_59: (in fn0C00_01C1(wLoc04_11, 0x00A0, 0x00, 0xA000, ds, out al_58, out dl_59, out ah_60) : byte)
  Class: Eq_59
  DataType: byte
  OrigDataType: byte
T_60: (in bx_65 : word16)
  Class: Eq_9
  DataType: int16
  OrigDataType: int16
T_61: (in 0x01B7 : word16)
  Class: Eq_61
  DataType: (memptr T_15 (struct (0 T_62 t0000)))
  OrigDataType: (memptr T_15 (struct (0 T_62 t0000)))
T_62: (in Mem30[ds:0x01B7:word16] : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_63: (in ax_144 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_64: (in bl_140 : byte)
  Class: Eq_64
  DataType: byte
  OrigDataType: byte
T_65: (in (byte) bx_65 : byte)
  Class: Eq_64
  DataType: byte
  OrigDataType: byte
T_66: (in true : bool)
  Class: Eq_66
  DataType: bool
  OrigDataType: bool
T_67: (in bx_72 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_68: (in fn0C00_01E5 : ptr32)
  Class: Eq_68
  DataType: (ptr (fn T_71 (T_64)))
  OrigDataType: (ptr (fn T_71 (T_64)))
T_69: (in signature of fn0C00_01E5 : void)
  Class: Eq_68
  DataType: 
  OrigDataType: 
T_70: (in bl : byte)
  Class: Eq_64
  DataType: byte
  OrigDataType: byte
T_71: (in fn0C00_01E5(bl_140) : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_72: (in 0x01B7 : word16)
  Class: Eq_72
  DataType: (memptr T_15 (struct (0 T_73 t0000)))
  OrigDataType: (memptr T_15 (struct (0 T_73 t0000)))
T_73: (in Mem74[ds:0x01B7:word16] : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_74: (in ax_75 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_75: (in 0x01BD : word16)
  Class: Eq_75
  DataType: (memptr T_15 (struct (0 T_76 t0000)))
  OrigDataType: (memptr T_15 (struct (0 T_76 t0000)))
T_76: (in Mem74[ds:0x01BD:word16] : word16)
  Class: Eq_76
  DataType: word16
  OrigDataType: word16
T_77: (in ax_144 + Mem74[ds:0x01BD:word16] : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_78: (in al_76 : byte)
  Class: Eq_78
  DataType: byte
  OrigDataType: byte
T_79: (in (byte) ax_75 : byte)
  Class: Eq_78
  DataType: byte
  OrigDataType: byte
T_80: (in 0x01 : byte)
  Class: Eq_78
  DataType: byte
  OrigDataType: byte
T_81: (in al_76 != 0x01 : bool)
  Class: Eq_81
  DataType: bool
  OrigDataType: bool
T_82: (in ax_134 : word16)
  Class: Eq_9
  DataType: int16
  OrigDataType: int16
T_83: (in 0x05 : byte)
  Class: Eq_83
  DataType: byte
  OrigDataType: byte
T_84: (in al_58 - 0x05 : byte)
  Class: Eq_84
  DataType: byte
  OrigDataType: byte
T_85: (in DPB(wLoc04_11, al_58 - 0x05, 0, 8) : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_86: (in ax_134 == bx_65 : bool)
  Class: Eq_86
  DataType: bool
  OrigDataType: bool
T_87: (in DPB(wLoc04_11, al_58, 0, 8) : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_88: (in ax_134 > bx_65 : bool)
  Class: Eq_88
  DataType: bool
  OrigDataType: bool
T_89: (in 0x0001 : word16)
  Class: Eq_89
  DataType: word16
  OrigDataType: word16
T_90: (in bx_65 + 0x0001 : word16)
  Class: Eq_90
  DataType: word16
  OrigDataType: word16
T_91: (in (byte) (bx_65 + 0x0001) : byte)
  Class: Eq_64
  DataType: byte
  OrigDataType: byte
T_92: (in 0x0001 : word16)
  Class: Eq_92
  DataType: word16
  OrigDataType: word16
T_93: (in bx_65 - 0x0001 : word16)
  Class: Eq_93
  DataType: word16
  OrigDataType: word16
T_94: (in (byte) (bx_65 - 0x0001) : byte)
  Class: Eq_64
  DataType: byte
  OrigDataType: byte
T_95: (in 0xC6 : byte)
  Class: Eq_78
  DataType: byte
  OrigDataType: byte
T_96: (in al_76 != 0xC6 : bool)
  Class: Eq_96
  DataType: bool
  OrigDataType: bool
T_97: (in 0x01BD : word16)
  Class: Eq_97
  DataType: (memptr T_15 (struct (0 T_76 t0000)))
  OrigDataType: (memptr T_15 (struct (0 T_76 t0000)))
T_98: (in Mem74[ds:0x01BD:word16] : word16)
  Class: Eq_76
  DataType: int16
  OrigDataType: int16
T_99: (in -Mem74[ds:0x01BD:word16] : word16)
  Class: Eq_76
  DataType: int16
  OrigDataType: int16
T_100: (in Mem130[ds:0x01BD:word16] : word16)
  Class: Eq_76
  DataType: word16
  OrigDataType: word16
T_101: (in cx_86 : word16)
  Class: Eq_101
  DataType: word16
  OrigDataType: word16
T_102: (in ax_87 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_103: (in fn0C00_01F4 : ptr32)
  Class: Eq_103
  DataType: (ptr (fn T_117 (T_74, T_114, T_115, T_67, T_15, T_116)))
  OrigDataType: (ptr (fn T_117 (T_74, T_114, T_115, T_67, T_15, T_116)))
T_104: (in signature of fn0C00_01F4 : void)
  Class: Eq_103
  DataType: 
  OrigDataType: 
T_105: (in ax : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_106: (in cx : word16)
  Class: Eq_101
  DataType: word16
  OrigDataType: word16
T_107: (in dx : word16)
  Class: Eq_101
  DataType: word16
  OrigDataType: word16
T_108: (in bx : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_109: (in ds : selector)
  Class: Eq_15
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_110: (in cxOut : ptr16)
  Class: Eq_110
  DataType: ptr16
  OrigDataType: ptr16
T_111: (in 0x01BB : word16)
  Class: Eq_111
  DataType: (memptr T_15 (struct (0 T_112 t0000)))
  OrigDataType: (memptr T_15 (struct (0 T_112 t0000)))
T_112: (in Mem74[ds:0x01BB:word16] : word16)
  Class: Eq_112
  DataType: word16
  OrigDataType: word16
T_113: (in 0x00A0 : word16)
  Class: Eq_113
  DataType: word16
  OrigDataType: word16
T_114: (in Mem74[ds:0x01BB:word16] + 0x00A0 : word16)
  Class: Eq_101
  DataType: word16
  OrigDataType: word16
T_115: (in 0x013F : word16)
  Class: Eq_101
  DataType: word16
  OrigDataType: word16
T_116: (in out cx_86 : ptr16)
  Class: Eq_110
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_117: (in fn0C00_01F4(ax_75, Mem74[ds:0x01BB:word16] + 0x00A0, 0x013F, bx_72, ds, out cx_86) : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_118: (in bx_92 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_119: (in fn0C00_01E5 : ptr32)
  Class: Eq_68
  DataType: (ptr (fn T_126 (T_125)))
  OrigDataType: (ptr (fn T_126 (T_125)))
T_120: (in 0x01B5 : word16)
  Class: Eq_120
  DataType: (memptr T_15 (struct (0 T_121 t0000)))
  OrigDataType: (memptr T_15 (struct (0 T_121 t0000)))
T_121: (in Mem74[ds:0x01B5:word16] : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_122: (in 0x01B9 : word16)
  Class: Eq_122
  DataType: (memptr T_15 (struct (0 T_123 t0000)))
  OrigDataType: (memptr T_15 (struct (0 T_123 t0000)))
T_123: (in Mem74[ds:0x01B9:word16] : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_124: (in Mem74[ds:0x01B5:word16] + Mem74[ds:0x01B9:word16] : word16)
  Class: Eq_124
  DataType: word16
  OrigDataType: word16
T_125: (in (byte) (Mem74[ds:0x01B5:word16] + Mem74[ds:0x01B9:word16]) : byte)
  Class: Eq_64
  DataType: byte
  OrigDataType: byte
T_126: (in fn0C00_01E5((byte) (Mem74[ds:0x01B5:word16] + Mem74[ds:0x01B9:word16])) : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_127: (in 0x01B5 : word16)
  Class: Eq_127
  DataType: (memptr T_15 (struct (0 T_128 t0000)))
  OrigDataType: (memptr T_15 (struct (0 T_128 t0000)))
T_128: (in Mem93[ds:0x01B5:word16] : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_129: (in cx_97 : word16)
  Class: Eq_129
  DataType: word16
  OrigDataType: word16
T_130: (in ax_98 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_131: (in fn0C00_01F4 : ptr32)
  Class: Eq_103
  DataType: (ptr (fn T_134 (T_102, T_101, T_132, T_118, T_15, T_133)))
  OrigDataType: (ptr (fn T_134 (T_102, T_101, T_132, T_118, T_15, T_133)))
T_132: (in 0x0000 : word16)
  Class: Eq_101
  DataType: word16
  OrigDataType: word16
T_133: (in out cx_97 : ptr16)
  Class: Eq_110
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_134: (in fn0C00_01F4(ax_87, cx_86, 0x0000, bx_92, ds, out cx_97) : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_135: (in al_103 : byte)
  Class: Eq_135
  DataType: byte
  OrigDataType: byte
T_136: (in dl_104 : byte)
  Class: Eq_47
  DataType: byte
  OrigDataType: byte
T_137: (in ah_105 : byte)
  Class: Eq_137
  DataType: byte
  OrigDataType: byte
T_138: (in fn0C00_01C1 : ptr32)
  Class: Eq_43
  DataType: (ptr (fn T_144 (T_130, T_139, T_140, T_55, T_15, T_141, T_142, T_143)))
  OrigDataType: (ptr (fn T_144 (T_130, T_139, T_140, T_55, T_15, T_141, T_142, T_143)))
T_139: (in 0x00A0 : word16)
  Class: Eq_46
  DataType: word16
  OrigDataType: word16
T_140: (in 0x0F : byte)
  Class: Eq_47
  DataType: byte
  OrigDataType: byte
T_141: (in out al_103 : ptr16)
  Class: Eq_50
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_142: (in out dl_104 : ptr16)
  Class: Eq_51
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_143: (in out ah_105 : ptr16)
  Class: Eq_52
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_144: (in fn0C00_01C1(ax_98, 0x00A0, 0x0F, 0xA000, ds, out al_103, out dl_104, out ah_105) : byte)
  Class: Eq_144
  DataType: byte
  OrigDataType: byte
T_145: (in 0x00A0 : word16)
  Class: Eq_145
  DataType: word16
  OrigDataType: word16
T_146: (in ss : selector)
  Class: Eq_146
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_147: (in fp : ptr16)
  Class: Eq_147
  DataType: (union (ptr16 u0) ((memptr T_146 (struct (FFFFFFFE T_150 tFFFFFFFE))) u1))
  OrigDataType: (union (ptr16 u0) ((memptr T_146 (struct (FFFFFFFE T_150 tFFFFFFFE))) u1))
T_148: (in 0x0002 : word16)
  Class: Eq_148
  DataType: word16
  OrigDataType: word16
T_149: (in fp - 0x0002 : word16)
  Class: Eq_149
  DataType: word16
  OrigDataType: word16
T_150: (in Mem108[ss:fp - 0x0002:word16] : word16)
  Class: Eq_145
  DataType: word16
  OrigDataType: word16
T_151: (in fn0C00_01D1 : ptr32)
  Class: Eq_151
  DataType: (ptr (fn T_161 (T_159, T_160, T_136, T_55, T_15)))
  OrigDataType: (ptr (fn T_161 (T_159, T_160, T_136, T_55, T_15)))
T_152: (in signature of fn0C00_01D1 : void)
  Class: Eq_151
  DataType: 
  OrigDataType: 
T_153: (in ax : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_154: (in bx : word16)
  Class: Eq_46
  DataType: word16
  OrigDataType: word16
T_155: (in dl : byte)
  Class: Eq_47
  DataType: byte
  OrigDataType: byte
T_156: (in es : selector)
  Class: Eq_48
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_157: (in ds : selector)
  Class: Eq_15
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_158: (in 0x01B5 : word16)
  Class: Eq_158
  DataType: (memptr T_15 (struct (0 T_159 t0000)))
  OrigDataType: (memptr T_15 (struct (0 T_159 t0000)))
T_159: (in Mem108[ds:0x01B5:word16] : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_160: (in 0x0000 : word16)
  Class: Eq_46
  DataType: word16
  OrigDataType: word16
T_161: (in fn0C00_01D1(Mem108[ds:0x01B5:word16], 0x0000, dl_104, 0xA000, ds) : byte)
  Class: Eq_161
  DataType: byte
  OrigDataType: byte
T_162: (in Z_121 : byte)
  Class: Eq_162
  DataType: byte
  OrigDataType: byte
T_163: (in fn0C00_01D1 : ptr32)
  Class: Eq_151
  DataType: (ptr (fn T_168 (T_165, T_166, T_167, T_55, T_15)))
  OrigDataType: (ptr (fn T_168 (T_165, T_166, T_167, T_55, T_15)))
T_164: (in 0x01B7 : word16)
  Class: Eq_164
  DataType: (memptr T_15 (struct (0 T_165 t0000)))
  OrigDataType: (memptr T_15 (struct (0 T_165 t0000)))
T_165: (in Mem108[ds:0x01B7:word16] : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_166: (in 0x013F : word16)
  Class: Eq_46
  DataType: word16
  OrigDataType: word16
T_167: (in 0x0F : byte)
  Class: Eq_47
  DataType: byte
  OrigDataType: byte
T_168: (in fn0C00_01D1(Mem108[ds:0x01B7:word16], 0x013F, 0x0F, 0xA000, ds) : byte)
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
T_172: (in out al_122 : ptr16)
  Class: Eq_171
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_173: (in bios_kbd_check_keystroke(out al_122) : byte)
  Class: Eq_173
  DataType: byte
  OrigDataType: byte
T_174: (in 0x01BD : word16)
  Class: Eq_174
  DataType: (memptr T_15 (struct (0 T_76 t0000)))
  OrigDataType: (memptr T_15 (struct (0 T_76 t0000)))
T_175: (in Mem74[ds:0x01BD:word16] : word16)
  Class: Eq_76
  DataType: int16
  OrigDataType: int16
T_176: (in -Mem74[ds:0x01BD:word16] : word16)
  Class: Eq_76
  DataType: int16
  OrigDataType: int16
T_177: (in Mem126[ds:0x01BD:word16] : word16)
  Class: Eq_76
  DataType: word16
  OrigDataType: word16
T_178: (in 0x0000 : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_179: (in 0x01B9 : word16)
  Class: Eq_179
  DataType: (memptr T_15 (struct (0 T_180 t0000)))
  OrigDataType: (memptr T_15 (struct (0 T_180 t0000)))
T_180: (in Mem30[ds:0x01B9:word16] : word16)
  Class: Eq_17
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
T_185: (in al_122 & 0x04 : byte)
  Class: Eq_185
  DataType: byte
  OrigDataType: byte
T_186: (in 0x00 : byte)
  Class: Eq_185
  DataType: byte
  OrigDataType: byte
T_187: (in (al_122 & 0x04) == 0x00 : bool)
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
T_193: (in 0x01BF : word16)
  Class: Eq_193
  DataType: (memptr T_49 (struct (0 T_194 t0000)))
  OrigDataType: (memptr T_49 (struct (0 T_194 t0000)))
T_194: (in Mem0[ds:0x01BF:word16] : word16)
  Class: Eq_194
  DataType: uint16
  OrigDataType: uint16
T_195: (in Mem0[ds:0x01BF:word16] *u ax : uint32)
  Class: Eq_195
  DataType: uint32
  OrigDataType: uint32
T_196: (in (word16) (Mem0[ds:0x01BF:word16] *u ax) : word16)
  Class: Eq_196
  DataType: word16
  OrigDataType: word16
T_197: (in bx + (word16) (Mem0[ds:0x01BF:word16] *u ax) : word16)
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
T_217: (in fn0C00_01C1 : ptr32)
  Class: Eq_43
  DataType: 
  OrigDataType: 
T_218: (in out al_11 : ptr16)
  Class: Eq_50
  DataType: 
  OrigDataType: 
T_219: (in out dl : ptr16)
  Class: Eq_51
  DataType: 
  OrigDataType: 
T_220: (in out ah_13 : ptr16)
  Class: Eq_52
  DataType: 
  OrigDataType: 
T_221: (in fn0C00_01C1(ax, bx, dl, es, ds, out al_11, out dl, out ah_13) : bool)
  Class: Eq_221
  DataType: 
  OrigDataType: 
T_222: (in 0x0001 : word16)
  Class: Eq_222
  DataType: 
  OrigDataType: 
T_223: (in ax + 0x0001 : word16)
  Class: Eq_9
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
  Class: Eq_47
  DataType: 
  OrigDataType: 
T_230: (in ah_25 : byte)
  Class: Eq_230
  DataType: 
  OrigDataType: 
T_231: (in fn0C00_01C1 : ptr32)
  Class: Eq_43
  DataType: 
  OrigDataType: 
T_232: (in 0x00 : byte)
  Class: Eq_47
  DataType: 
  OrigDataType: 
T_233: (in out al_23 : ptr16)
  Class: Eq_50
  DataType: 
  OrigDataType: 
T_234: (in out dl_24 : ptr16)
  Class: Eq_51
  DataType: 
  OrigDataType: 
T_235: (in out ah_25 : ptr16)
  Class: Eq_52
  DataType: 
  OrigDataType: 
T_236: (in fn0C00_01C1(ax, bx, 0x00, es, ds, out al_23, out dl_24, out ah_25) : bool)
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
T_240: (in fn0C00_01C1 : ptr32)
  Class: Eq_43
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
  Class: Eq_9
  DataType: 
  OrigDataType: 
T_244: (in out al_31 : ptr16)
  Class: Eq_50
  DataType: 
  OrigDataType: 
T_245: (in out dl_32 : ptr16)
  Class: Eq_51
  DataType: 
  OrigDataType: 
T_246: (in out ah_33 : ptr16)
  Class: Eq_52
  DataType: 
  OrigDataType: 
T_247: (in fn0C00_01C1(DPB(ax, al_23 - 0x0B, 0, 8), bx, dl_24, es, ds, out al_31, out dl_32, out ah_33) : bool)
  Class: Eq_247
  DataType: 
  OrigDataType: 
T_248: (in bx : word16)
  Class: Eq_248
  DataType: 
  OrigDataType: 
T_249: (in 0x00 : byte)
  Class: Eq_64
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
T_256: (in *cxOut : word16)
  Class: Eq_101
  DataType: 
  OrigDataType: 
T_257: (in cx != dx : bool)
  Class: Eq_257
  DataType: 
  OrigDataType: 
T_258: (in ax < bx : bool)
  Class: Eq_258
  DataType: 
  OrigDataType: 
T_259: (in al : byte)
  Class: Eq_259
  DataType: 
  OrigDataType: 
T_260: (in 0x61 : byte)
  Class: Eq_260
  DataType: 
  OrigDataType: 
T_261: (in al + 0x61 : byte)
  Class: Eq_261
  DataType: 
  OrigDataType: 
T_262: (in DPB(ax, al + 0x61, 0, 8) : word16)
  Class: Eq_262
  DataType: 
  OrigDataType: 
T_263: (in 0x007F : word16)
  Class: Eq_263
  DataType: 
  OrigDataType: 
T_264: (in DPB(ax, al + 0x61, 0, 8) & 0x007F : word16)
  Class: Eq_264
  DataType: 
  OrigDataType: 
T_265: (in 0x0024 : word16)
  Class: Eq_265
  DataType: 
  OrigDataType: 
T_266: (in (DPB(ax, al + 0x61, 0, 8) & 0x007F) + 0x0024 : word16)
  Class: Eq_9
  DataType: 
  OrigDataType: 
T_267: (in cx_39 : word16)
  Class: Eq_267
  DataType: 
  OrigDataType: 
T_268: (in 0x00A0 : word16)
  Class: Eq_268
  DataType: 
  OrigDataType: 
T_269: (in *cxOut : word16)
  Class: Eq_268
  DataType: 
  OrigDataType: 
T_270: (in bl : byte)
  Class: Eq_270
  DataType: 
  OrigDataType: 
T_271: (in 0x0A : byte)
  Class: Eq_271
  DataType: 
  OrigDataType: 
T_272: (in bl + 0x0A : byte)
  Class: Eq_272
  DataType: 
  OrigDataType: 
T_273: (in DPB(bx, bl + 0x0A, 0, 8) : word16)
  Class: Eq_9
  DataType: 
  OrigDataType: 
T_274: (in ax >= DPB(bx, bl + 0x0A, 0, 8) : bool)
  Class: Eq_274
  DataType: 
  OrigDataType: 
T_275: (in 0x01BB : word16)
  Class: Eq_275
  DataType: 
  OrigDataType: 
T_276: (in Mem0[ds:0x01BB:word16] : word16)
  Class: Eq_276
  DataType: 
  OrigDataType: 
T_277: (in -Mem0[ds:0x01BB:word16] : word16)
  Class: Eq_277
  DataType: 
  OrigDataType: 
T_278: (in Mem47[ds:0x01BB:word16] : word16)
  Class: Eq_277
  DataType: 
  OrigDataType: 
*/
