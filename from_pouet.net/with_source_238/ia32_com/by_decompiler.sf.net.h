// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_238/ia32_com/subject.exe
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
T_7: (in wLoc02_103 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_8: (in 0x005F : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_9: (in wLoc06_12 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_10: (in 0x0064 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_11: (in __inb : ptr32)
  Class: Eq_11
  DataType: (ptr (fn T_13 (T_12)))
  OrigDataType: (ptr (fn T_13 (T_12)))
T_12: (in 0x03DA : word16)
  Class: Eq_12
  DataType: word16
  OrigDataType: word16
T_13: (in __inb(0x03DA) : byte)
  Class: Eq_13
  DataType: byte
  OrigDataType: byte
T_14: (in 0x08 : byte)
  Class: Eq_14
  DataType: byte
  OrigDataType: byte
T_15: (in __inb(0x03DA) & 0x08 : byte)
  Class: Eq_15
  DataType: byte
  OrigDataType: byte
T_16: (in 0x00 : byte)
  Class: Eq_15
  DataType: byte
  OrigDataType: byte
T_17: (in (__inb(0x03DA) & 0x08) != 0x00 : bool)
  Class: Eq_17
  DataType: bool
  OrigDataType: bool
T_18: (in __inb : ptr32)
  Class: Eq_18
  DataType: (ptr (fn T_20 (T_19)))
  OrigDataType: (ptr (fn T_20 (T_19)))
T_19: (in 0x03DA : word16)
  Class: Eq_19
  DataType: word16
  OrigDataType: word16
T_20: (in __inb(0x03DA) : byte)
  Class: Eq_20
  DataType: byte
  OrigDataType: byte
T_21: (in 0x08 : byte)
  Class: Eq_21
  DataType: byte
  OrigDataType: byte
T_22: (in __inb(0x03DA) & 0x08 : byte)
  Class: Eq_22
  DataType: byte
  OrigDataType: byte
T_23: (in 0x00 : byte)
  Class: Eq_22
  DataType: byte
  OrigDataType: byte
T_24: (in (__inb(0x03DA) & 0x08) == 0x00 : bool)
  Class: Eq_24
  DataType: bool
  OrigDataType: bool
T_25: (in dl_52 : byte)
  Class: Eq_25
  DataType: byte
  OrigDataType: byte
T_26: (in ah_53 : byte)
  Class: Eq_26
  DataType: byte
  OrigDataType: byte
T_27: (in al_160 : byte)
  Class: Eq_27
  DataType: byte
  OrigDataType: byte
T_28: (in fn0C00_01AA : ptr32)
  Class: Eq_28
  DataType: (ptr (fn T_45 (T_9, T_38, T_39, T_40, T_41, T_42, T_43, T_44)))
  OrigDataType: (ptr (fn T_45 (T_9, T_38, T_39, T_40, T_41, T_42, T_43, T_44)))
T_29: (in signature of fn0C00_01AA : void)
  Class: Eq_28
  DataType: 
  OrigDataType: 
T_30: (in ax : word16)
  Class: Eq_7
  DataType: uint16
  OrigDataType: uint16
T_31: (in bx : word16)
  Class: Eq_31
  DataType: word16
  OrigDataType: word16
T_32: (in dl : byte)
  Class: Eq_32
  DataType: byte
  OrigDataType: byte
T_33: (in es : selector)
  Class: Eq_33
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_34: (in ds : selector)
  Class: Eq_34
  DataType: (ptr (segment (1A3 T_183 t01A3)))
  OrigDataType: (ptr (segment (1A3 T_183 t01A3)))
T_35: (in alOut : ptr16)
  Class: Eq_35
  DataType: ptr16
  OrigDataType: ptr16
T_36: (in dlOut : ptr16)
  Class: Eq_36
  DataType: ptr16
  OrigDataType: ptr16
T_37: (in ahOut : ptr16)
  Class: Eq_37
  DataType: ptr16
  OrigDataType: ptr16
T_38: (in 0x00A0 : word16)
  Class: Eq_31
  DataType: word16
  OrigDataType: word16
T_39: (in 0x00 : byte)
  Class: Eq_32
  DataType: byte
  OrigDataType: byte
T_40: (in 0xA000 : selector)
  Class: Eq_33
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_41: (in ds : selector)
  Class: Eq_34
  DataType: (ptr (segment (1A5 T_7 t01A5) (1A7 T_98 t01A7) (1A9 T_62 t01A9)))
  OrigDataType: (ptr (segment (1A5 T_7 t01A5) (1A7 T_98 t01A7) (1A9 T_62 t01A9)))
T_42: (in out al_160 : ptr16)
  Class: Eq_35
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_43: (in out dl_52 : ptr16)
  Class: Eq_36
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_44: (in out ah_53 : ptr16)
  Class: Eq_37
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_45: (in fn0C00_01AA(wLoc06_12, 0x00A0, 0x00, 0xA000, ds, out al_160, out dl_52, out ah_53) : byte)
  Class: Eq_45
  DataType: byte
  OrigDataType: byte
T_46: (in bx_59 : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: int16
T_47: (in 0x01A5 : word16)
  Class: Eq_47
  DataType: (memptr T_41 (struct (0 T_48 t0000)))
  OrigDataType: (memptr T_41 (struct (0 T_48 t0000)))
T_48: (in Mem0[ds:0x01A5:word16] : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_49: (in ax_161 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_50: (in bl_157 : byte)
  Class: Eq_50
  DataType: byte
  OrigDataType: byte
T_51: (in (byte) bx_59 : byte)
  Class: Eq_50
  DataType: byte
  OrigDataType: byte
T_52: (in true : bool)
  Class: Eq_52
  DataType: bool
  OrigDataType: bool
T_53: (in bx_67 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_54: (in fn0C00_01CE : ptr32)
  Class: Eq_54
  DataType: (ptr (fn T_57 (T_50)))
  OrigDataType: (ptr (fn T_57 (T_50)))
T_55: (in signature of fn0C00_01CE : void)
  Class: Eq_54
  DataType: 
  OrigDataType: 
T_56: (in bl : byte)
  Class: Eq_50
  DataType: byte
  OrigDataType: byte
T_57: (in fn0C00_01CE(bl_157) : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_58: (in 0x01A5 : word16)
  Class: Eq_58
  DataType: (memptr T_41 (struct (0 T_59 t0000)))
  OrigDataType: (memptr T_41 (struct (0 T_59 t0000)))
T_59: (in Mem69[ds:0x01A5:word16] : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_60: (in al_70 : byte)
  Class: Eq_60
  DataType: byte
  OrigDataType: byte
T_61: (in 0x01A9 : word16)
  Class: Eq_61
  DataType: (memptr T_41 (struct (0 T_62 t0000)))
  OrigDataType: (memptr T_41 (struct (0 T_62 t0000)))
T_62: (in Mem69[ds:0x01A9:byte] : byte)
  Class: Eq_62
  DataType: byte
  OrigDataType: byte
T_63: (in al_160 + Mem69[ds:0x01A9:byte] : byte)
  Class: Eq_60
  DataType: byte
  OrigDataType: byte
T_64: (in ax_71 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_65: (in DPB(ax_161, al_70, 0, 8) : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_66: (in 0x01 : byte)
  Class: Eq_60
  DataType: byte
  OrigDataType: byte
T_67: (in al_70 != 0x01 : bool)
  Class: Eq_67
  DataType: bool
  OrigDataType: bool
T_68: (in ax_151 : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: int16
T_69: (in 0x05 : byte)
  Class: Eq_69
  DataType: byte
  OrigDataType: byte
T_70: (in al_160 - 0x05 : byte)
  Class: Eq_70
  DataType: byte
  OrigDataType: byte
T_71: (in DPB(wLoc06_12, al_160 - 0x05, 0, 8) : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_72: (in ax_151 == bx_59 : bool)
  Class: Eq_72
  DataType: bool
  OrigDataType: bool
T_73: (in DPB(wLoc06_12, al_160, 0, 8) : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_74: (in ax_151 > bx_59 : bool)
  Class: Eq_74
  DataType: bool
  OrigDataType: bool
T_75: (in 0x0001 : word16)
  Class: Eq_75
  DataType: word16
  OrigDataType: word16
T_76: (in bx_59 + 0x0001 : word16)
  Class: Eq_76
  DataType: word16
  OrigDataType: word16
T_77: (in (byte) (bx_59 + 0x0001) : byte)
  Class: Eq_50
  DataType: byte
  OrigDataType: byte
T_78: (in 0x0001 : word16)
  Class: Eq_78
  DataType: word16
  OrigDataType: word16
T_79: (in bx_59 - 0x0001 : word16)
  Class: Eq_79
  DataType: word16
  OrigDataType: word16
T_80: (in (byte) (bx_59 - 0x0001) : byte)
  Class: Eq_50
  DataType: byte
  OrigDataType: byte
T_81: (in 0xC6 : byte)
  Class: Eq_60
  DataType: byte
  OrigDataType: byte
T_82: (in al_70 != 0xC6 : bool)
  Class: Eq_82
  DataType: bool
  OrigDataType: bool
T_83: (in 0x01A9 : word16)
  Class: Eq_83
  DataType: (memptr T_41 (struct (0 T_62 t0000)))
  OrigDataType: (memptr T_41 (struct (0 T_62 t0000)))
T_84: (in Mem69[ds:0x01A9:byte] : byte)
  Class: Eq_62
  DataType: int8
  OrigDataType: int8
T_85: (in -Mem69[ds:0x01A9:byte] : byte)
  Class: Eq_62
  DataType: int8
  OrigDataType: int8
T_86: (in Mem147[ds:0x01A9:byte] : byte)
  Class: Eq_62
  DataType: byte
  OrigDataType: byte
T_87: (in cx_80 : word16)
  Class: Eq_87
  DataType: word16
  OrigDataType: word16
T_88: (in ax_81 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_89: (in fn0C00_01DD : ptr32)
  Class: Eq_89
  DataType: (ptr (fn T_103 (T_64, T_100, T_101, T_53, T_41, T_102)))
  OrigDataType: (ptr (fn T_103 (T_64, T_100, T_101, T_53, T_41, T_102)))
T_90: (in signature of fn0C00_01DD : void)
  Class: Eq_89
  DataType: 
  OrigDataType: 
T_91: (in ax : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_92: (in cx : word16)
  Class: Eq_87
  DataType: word16
  OrigDataType: word16
T_93: (in dx : word16)
  Class: Eq_87
  DataType: word16
  OrigDataType: word16
T_94: (in bx : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_95: (in ds : selector)
  Class: Eq_34
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_96: (in cxOut : ptr16)
  Class: Eq_96
  DataType: ptr16
  OrigDataType: ptr16
T_97: (in 0x01A7 : word16)
  Class: Eq_97
  DataType: (memptr T_41 (struct (0 T_98 t0000)))
  OrigDataType: (memptr T_41 (struct (0 T_98 t0000)))
T_98: (in Mem69[ds:0x01A7:word16] : word16)
  Class: Eq_98
  DataType: word16
  OrigDataType: word16
T_99: (in 0x00A0 : word16)
  Class: Eq_99
  DataType: word16
  OrigDataType: word16
T_100: (in Mem69[ds:0x01A7:word16] + 0x00A0 : word16)
  Class: Eq_87
  DataType: word16
  OrigDataType: word16
T_101: (in 0x013F : word16)
  Class: Eq_87
  DataType: word16
  OrigDataType: word16
T_102: (in out cx_80 : ptr16)
  Class: Eq_96
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_103: (in fn0C00_01DD(ax_71, Mem69[ds:0x01A7:word16] + 0x00A0, 0x013F, bx_67, ds, out cx_80) : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_104: (in __syscall : ptr32)
  Class: Eq_104
  DataType: (ptr (fn T_106 (T_105)))
  OrigDataType: (ptr (fn T_106 (T_105)))
T_105: (in 0x16 : byte)
  Class: Eq_105
  DataType: byte
  OrigDataType: byte
T_106: (in __syscall(0x16) : void)
  Class: Eq_106
  DataType: void
  OrigDataType: void
T_107: (in al_82 : byte)
  Class: Eq_107
  DataType: byte
  OrigDataType: byte
T_108: (in (byte) ax_81 : byte)
  Class: Eq_107
  DataType: byte
  OrigDataType: byte
T_109: (in bx_139 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_110: (in bl_137 : byte)
  Class: Eq_50
  DataType: byte
  OrigDataType: byte
T_111: (in (byte) wLoc02_103 : byte)
  Class: Eq_50
  DataType: byte
  OrigDataType: byte
T_112: (in 0x04 : byte)
  Class: Eq_112
  DataType: byte
  OrigDataType: byte
T_113: (in al_82 & 0x04 : byte)
  Class: Eq_113
  DataType: byte
  OrigDataType: byte
T_114: (in 0x00 : byte)
  Class: Eq_113
  DataType: byte
  OrigDataType: byte
T_115: (in (al_82 & 0x04) == 0x00 : bool)
  Class: Eq_115
  DataType: bool
  OrigDataType: bool
T_116: (in 0x01A9 : word16)
  Class: Eq_116
  DataType: (memptr T_41 (struct (0 T_62 t0000)))
  OrigDataType: (memptr T_41 (struct (0 T_62 t0000)))
T_117: (in Mem69[ds:0x01A9:byte] : byte)
  Class: Eq_62
  DataType: int8
  OrigDataType: int8
T_118: (in -Mem69[ds:0x01A9:byte] : byte)
  Class: Eq_62
  DataType: int8
  OrigDataType: int8
T_119: (in Mem143[ds:0x01A9:byte] : byte)
  Class: Eq_62
  DataType: byte
  OrigDataType: byte
T_120: (in 0x08 : byte)
  Class: Eq_120
  DataType: byte
  OrigDataType: byte
T_121: (in al_82 & 0x08 : byte)
  Class: Eq_121
  DataType: byte
  OrigDataType: byte
T_122: (in 0x00 : byte)
  Class: Eq_121
  DataType: byte
  OrigDataType: byte
T_123: (in (al_82 & 0x08) == 0x00 : bool)
  Class: Eq_123
  DataType: bool
  OrigDataType: bool
T_124: (in 0x0001 : word16)
  Class: Eq_124
  DataType: word16
  OrigDataType: word16
T_125: (in wLoc02_103 + 0x0001 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_126: (in (byte) bx_139 : byte)
  Class: Eq_50
  DataType: byte
  OrigDataType: byte
T_127: (in bx_101 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_128: (in fn0C00_01CE : ptr32)
  Class: Eq_54
  DataType: (ptr (fn T_129 (T_110)))
  OrigDataType: (ptr (fn T_129 (T_110)))
T_129: (in fn0C00_01CE(bl_137) : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_130: (in cx_107 : word16)
  Class: Eq_130
  DataType: word16
  OrigDataType: word16
T_131: (in ax_108 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_132: (in fn0C00_01DD : ptr32)
  Class: Eq_89
  DataType: (ptr (fn T_135 (T_88, T_87, T_133, T_127, T_41, T_134)))
  OrigDataType: (ptr (fn T_135 (T_88, T_87, T_133, T_127, T_41, T_134)))
T_133: (in 0x0000 : word16)
  Class: Eq_87
  DataType: word16
  OrigDataType: word16
T_134: (in out cx_107 : ptr16)
  Class: Eq_96
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_135: (in fn0C00_01DD(ax_81, cx_80, 0x0000, bx_101, ds, out cx_107) : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_136: (in al_115 : byte)
  Class: Eq_136
  DataType: byte
  OrigDataType: byte
T_137: (in dl_116 : byte)
  Class: Eq_32
  DataType: byte
  OrigDataType: byte
T_138: (in ah_117 : byte)
  Class: Eq_138
  DataType: byte
  OrigDataType: byte
T_139: (in fn0C00_01AA : ptr32)
  Class: Eq_28
  DataType: (ptr (fn T_145 (T_131, T_140, T_141, T_40, T_41, T_142, T_143, T_144)))
  OrigDataType: (ptr (fn T_145 (T_131, T_140, T_141, T_40, T_41, T_142, T_143, T_144)))
T_140: (in 0x00A0 : word16)
  Class: Eq_31
  DataType: word16
  OrigDataType: word16
T_141: (in 0x0F : byte)
  Class: Eq_32
  DataType: byte
  OrigDataType: byte
T_142: (in out al_115 : ptr16)
  Class: Eq_35
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_143: (in out dl_116 : ptr16)
  Class: Eq_36
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_144: (in out ah_117 : ptr16)
  Class: Eq_37
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_145: (in fn0C00_01AA(ax_108, 0x00A0, 0x0F, 0xA000, ds, out al_115, out dl_116, out ah_117) : byte)
  Class: Eq_145
  DataType: byte
  OrigDataType: byte
T_146: (in 0x00A0 : word16)
  Class: Eq_146
  DataType: word16
  OrigDataType: word16
T_147: (in ss : selector)
  Class: Eq_147
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_148: (in fp : ptr16)
  Class: Eq_148
  DataType: (union (ptr16 u0) ((memptr T_147 (struct (FFFFFFFC T_151 tFFFFFFFC))) u1))
  OrigDataType: (union (ptr16 u0) ((memptr T_147 (struct (FFFFFFFC T_151 tFFFFFFFC))) u1))
T_149: (in 0x0004 : word16)
  Class: Eq_149
  DataType: word16
  OrigDataType: word16
T_150: (in fp - 0x0004 : word16)
  Class: Eq_150
  DataType: word16
  OrigDataType: word16
T_151: (in Mem120[ss:fp - 0x0004:word16] : word16)
  Class: Eq_146
  DataType: word16
  OrigDataType: word16
T_152: (in fn0C00_01BA : ptr32)
  Class: Eq_152
  DataType: (ptr (fn T_160 (T_127, T_159, T_137, T_40, T_41)))
  OrigDataType: (ptr (fn T_160 (T_127, T_159, T_137, T_40, T_41)))
T_153: (in signature of fn0C00_01BA : void)
  Class: Eq_152
  DataType: 
  OrigDataType: 
T_154: (in ax : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_155: (in bx : word16)
  Class: Eq_31
  DataType: word16
  OrigDataType: word16
T_156: (in dl : byte)
  Class: Eq_32
  DataType: byte
  OrigDataType: byte
T_157: (in es : selector)
  Class: Eq_33
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_158: (in ds : selector)
  Class: Eq_34
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_159: (in 0x0000 : word16)
  Class: Eq_31
  DataType: word16
  OrigDataType: word16
T_160: (in fn0C00_01BA(bx_101, 0x0000, dl_116, 0xA000, ds) : byte)
  Class: Eq_160
  DataType: byte
  OrigDataType: byte
T_161: (in Z_133 : byte)
  Class: Eq_161
  DataType: byte
  OrigDataType: byte
T_162: (in fn0C00_01BA : ptr32)
  Class: Eq_152
  DataType: (ptr (fn T_167 (T_164, T_165, T_166, T_40, T_41)))
  OrigDataType: (ptr (fn T_167 (T_164, T_165, T_166, T_40, T_41)))
T_163: (in 0x01A5 : word16)
  Class: Eq_163
  DataType: (memptr T_41 (struct (0 T_164 t0000)))
  OrigDataType: (memptr T_41 (struct (0 T_164 t0000)))
T_164: (in Mem120[ds:0x01A5:word16] : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_165: (in 0x013F : word16)
  Class: Eq_31
  DataType: word16
  OrigDataType: word16
T_166: (in 0x0F : byte)
  Class: Eq_32
  DataType: byte
  OrigDataType: byte
T_167: (in fn0C00_01BA(Mem120[ds:0x01A5:word16], 0x013F, 0x0F, 0xA000, ds) : byte)
  Class: Eq_161
  DataType: byte
  OrigDataType: byte
T_168: (in al_134 : byte)
  Class: Eq_168
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
T_172: (in out al_134 : ptr16)
  Class: Eq_171
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_173: (in bios_kbd_check_keystroke(out al_134) : byte)
  Class: Eq_173
  DataType: byte
  OrigDataType: byte
T_174: (in 0x0001 : word16)
  Class: Eq_174
  DataType: word16
  OrigDataType: word16
T_175: (in bx_139 - 0x0001 : word16)
  Class: Eq_175
  DataType: word16
  OrigDataType: word16
T_176: (in (byte) (bx_139 - 0x0001) : byte)
  Class: Eq_50
  DataType: byte
  OrigDataType: byte
T_177: (in msdos_terminate_program20 : ptr32)
  Class: Eq_177
  DataType: (ptr (fn T_179 ()))
  OrigDataType: (ptr (fn T_179 ()))
T_178: (in signature of msdos_terminate_program20 : void)
  Class: Eq_177
  DataType: 
  OrigDataType: 
T_179: (in msdos_terminate_program20() : void)
  Class: Eq_179
  DataType: void
  OrigDataType: void
T_180: (in Z : bool)
  Class: Eq_180
  DataType: bool
  OrigDataType: bool
T_181: (in bx_15 : word16)
  Class: Eq_181
  DataType: word16
  OrigDataType: word16
T_182: (in 0x01A3 : word16)
  Class: Eq_182
  DataType: (memptr T_34 (struct (0 T_183 t0000)))
  OrigDataType: (memptr T_34 (struct (0 T_183 t0000)))
T_183: (in Mem0[ds:0x01A3:word16] : word16)
  Class: Eq_183
  DataType: uint16
  OrigDataType: uint16
T_184: (in Mem0[ds:0x01A3:word16] *u ax : uint32)
  Class: Eq_184
  DataType: uint32
  OrigDataType: uint32
T_185: (in (word16) (Mem0[ds:0x01A3:word16] *u ax) : word16)
  Class: Eq_185
  DataType: word16
  OrigDataType: word16
T_186: (in bx + (word16) (Mem0[ds:0x01A3:word16] *u ax) : word16)
  Class: Eq_181
  DataType: word16
  OrigDataType: word16
T_187: (in dl_19 : byte)
  Class: Eq_187
  DataType: byte
  OrigDataType: byte
T_188: (in dx : word16)
  Class: Eq_188
  DataType: word16
  OrigDataType: word16
T_189: (in (byte) dx : byte)
  Class: Eq_187
  DataType: byte
  OrigDataType: byte
T_190: (in *dlOut : byte)
  Class: Eq_187
  DataType: 
  OrigDataType: 
T_191: (in 0x0000 : word16)
  Class: Eq_191
  DataType: 
  OrigDataType: 
T_192: (in bx_15 + 0x0000 : word16)
  Class: Eq_192
  DataType: 
  OrigDataType: 
T_193: (in Mem21[es:bx_15 + 0x0000:byte] : byte)
  Class: Eq_187
  DataType: 
  OrigDataType: 
T_194: (in al_27 : byte)
  Class: Eq_194
  DataType: 
  OrigDataType: 
T_195: (in (byte) ax : byte)
  Class: Eq_195
  DataType: 
  OrigDataType: 
T_196: (in *alOut : byte)
  Class: Eq_195
  DataType: 
  OrigDataType: 
T_197: (in ah_28 : byte)
  Class: Eq_197
  DataType: 
  OrigDataType: 
T_198: (in SLICE(ax, byte, 8) : byte)
  Class: Eq_198
  DataType: 
  OrigDataType: 
T_199: (in *ahOut : byte)
  Class: Eq_198
  DataType: 
  OrigDataType: 
T_200: (in cond(bx_15) : byte)
  Class: Eq_200
  DataType: 
  OrigDataType: 
T_201: (in Z : bool)
  Class: Eq_201
  DataType: 
  OrigDataType: 
T_202: (in cx_19 : word16)
  Class: Eq_202
  DataType: 
  OrigDataType: 
T_203: (in 0x000A : word16)
  Class: Eq_202
  DataType: 
  OrigDataType: 
T_204: (in al_11 : byte)
  Class: Eq_204
  DataType: 
  OrigDataType: 
T_205: (in ah_13 : byte)
  Class: Eq_205
  DataType: 
  OrigDataType: 
T_206: (in fn0C00_01AA : ptr32)
  Class: Eq_28
  DataType: 
  OrigDataType: 
T_207: (in out al_11 : ptr16)
  Class: Eq_35
  DataType: 
  OrigDataType: 
T_208: (in out dl : ptr16)
  Class: Eq_36
  DataType: 
  OrigDataType: 
T_209: (in out ah_13 : ptr16)
  Class: Eq_37
  DataType: 
  OrigDataType: 
T_210: (in fn0C00_01AA(ax, bx, dl, es, ds, out al_11, out dl, out ah_13) : bool)
  Class: Eq_210
  DataType: 
  OrigDataType: 
T_211: (in 0x0001 : word16)
  Class: Eq_211
  DataType: 
  OrigDataType: 
T_212: (in ax + 0x0001 : word16)
  Class: Eq_7
  DataType: 
  OrigDataType: 
T_213: (in 0x0001 : word16)
  Class: Eq_213
  DataType: 
  OrigDataType: 
T_214: (in cx_19 - 0x0001 : word16)
  Class: Eq_202
  DataType: 
  OrigDataType: 
T_215: (in 0x0000 : word16)
  Class: Eq_202
  DataType: 
  OrigDataType: 
T_216: (in cx_19 != 0x0000 : bool)
  Class: Eq_216
  DataType: 
  OrigDataType: 
T_217: (in al_23 : byte)
  Class: Eq_217
  DataType: 
  OrigDataType: 
T_218: (in dl_24 : byte)
  Class: Eq_32
  DataType: 
  OrigDataType: 
T_219: (in ah_25 : byte)
  Class: Eq_219
  DataType: 
  OrigDataType: 
T_220: (in fn0C00_01AA : ptr32)
  Class: Eq_28
  DataType: 
  OrigDataType: 
T_221: (in 0x00 : byte)
  Class: Eq_32
  DataType: 
  OrigDataType: 
T_222: (in out al_23 : ptr16)
  Class: Eq_35
  DataType: 
  OrigDataType: 
T_223: (in out dl_24 : ptr16)
  Class: Eq_36
  DataType: 
  OrigDataType: 
T_224: (in out ah_25 : ptr16)
  Class: Eq_37
  DataType: 
  OrigDataType: 
T_225: (in fn0C00_01AA(ax, bx, 0x00, es, ds, out al_23, out dl_24, out ah_25) : bool)
  Class: Eq_225
  DataType: 
  OrigDataType: 
T_226: (in al_31 : byte)
  Class: Eq_226
  DataType: 
  OrigDataType: 
T_227: (in dl_32 : byte)
  Class: Eq_227
  DataType: 
  OrigDataType: 
T_228: (in ah_33 : byte)
  Class: Eq_228
  DataType: 
  OrigDataType: 
T_229: (in fn0C00_01AA : ptr32)
  Class: Eq_28
  DataType: 
  OrigDataType: 
T_230: (in 0x0B : byte)
  Class: Eq_230
  DataType: 
  OrigDataType: 
T_231: (in al_23 - 0x0B : byte)
  Class: Eq_231
  DataType: 
  OrigDataType: 
T_232: (in DPB(ax, al_23 - 0x0B, 0, 8) : word16)
  Class: Eq_7
  DataType: 
  OrigDataType: 
T_233: (in out al_31 : ptr16)
  Class: Eq_35
  DataType: 
  OrigDataType: 
T_234: (in out dl_32 : ptr16)
  Class: Eq_36
  DataType: 
  OrigDataType: 
T_235: (in out ah_33 : ptr16)
  Class: Eq_37
  DataType: 
  OrigDataType: 
T_236: (in fn0C00_01AA(DPB(ax, al_23 - 0x0B, 0, 8), bx, dl_24, es, ds, out al_31, out dl_32, out ah_33) : bool)
  Class: Eq_236
  DataType: 
  OrigDataType: 
T_237: (in bx : word16)
  Class: Eq_237
  DataType: 
  OrigDataType: 
T_238: (in 0x00 : byte)
  Class: Eq_50
  DataType: 
  OrigDataType: 
T_239: (in bl != 0x00 : bool)
  Class: Eq_239
  DataType: 
  OrigDataType: 
T_240: (in true : bool)
  Class: Eq_240
  DataType: 
  OrigDataType: 
T_241: (in 0x01 : byte)
  Class: Eq_241
  DataType: 
  OrigDataType: 
T_242: (in DPB(bx, 0x01, 0, 8) : word16)
  Class: Eq_237
  DataType: 
  OrigDataType: 
T_243: (in 0xBD : byte)
  Class: Eq_243
  DataType: 
  OrigDataType: 
T_244: (in DPB(bx, 0xBD, 0, 8) : word16)
  Class: Eq_237
  DataType: 
  OrigDataType: 
T_245: (in *cxOut : word16)
  Class: Eq_87
  DataType: 
  OrigDataType: 
T_246: (in cx != dx : bool)
  Class: Eq_246
  DataType: 
  OrigDataType: 
T_247: (in ax < bx : bool)
  Class: Eq_247
  DataType: 
  OrigDataType: 
T_248: (in al : byte)
  Class: Eq_248
  DataType: 
  OrigDataType: 
T_249: (in 0x61 : byte)
  Class: Eq_249
  DataType: 
  OrigDataType: 
T_250: (in al + 0x61 : byte)
  Class: Eq_250
  DataType: 
  OrigDataType: 
T_251: (in DPB(ax, al + 0x61, 0, 8) : word16)
  Class: Eq_251
  DataType: 
  OrigDataType: 
T_252: (in 0x007F : word16)
  Class: Eq_252
  DataType: 
  OrigDataType: 
T_253: (in DPB(ax, al + 0x61, 0, 8) & 0x007F : word16)
  Class: Eq_253
  DataType: 
  OrigDataType: 
T_254: (in 0x0024 : word16)
  Class: Eq_254
  DataType: 
  OrigDataType: 
T_255: (in (DPB(ax, al + 0x61, 0, 8) & 0x007F) + 0x0024 : word16)
  Class: Eq_7
  DataType: 
  OrigDataType: 
T_256: (in cx_46 : word16)
  Class: Eq_256
  DataType: 
  OrigDataType: 
T_257: (in 0x00A0 : word16)
  Class: Eq_257
  DataType: 
  OrigDataType: 
T_258: (in *cxOut : word16)
  Class: Eq_257
  DataType: 
  OrigDataType: 
T_259: (in bl : byte)
  Class: Eq_259
  DataType: 
  OrigDataType: 
T_260: (in 0x0A : byte)
  Class: Eq_260
  DataType: 
  OrigDataType: 
T_261: (in bl + 0x0A : byte)
  Class: Eq_261
  DataType: 
  OrigDataType: 
T_262: (in DPB(bx, bl + 0x0A, 0, 8) : word16)
  Class: Eq_7
  DataType: 
  OrigDataType: 
T_263: (in ax >= DPB(bx, bl + 0x0A, 0, 8) : bool)
  Class: Eq_263
  DataType: 
  OrigDataType: 
T_264: (in 0x01A7 : word16)
  Class: Eq_264
  DataType: 
  OrigDataType: 
T_265: (in Mem0[ds:0x01A7:word16] : word16)
  Class: Eq_265
  DataType: 
  OrigDataType: 
T_266: (in -Mem0[ds:0x01A7:word16] : word16)
  Class: Eq_266
  DataType: 
  OrigDataType: 
T_267: (in Mem58[ds:0x01A7:word16] : word16)
  Class: Eq_266
  DataType: 
  OrigDataType: 
*/
