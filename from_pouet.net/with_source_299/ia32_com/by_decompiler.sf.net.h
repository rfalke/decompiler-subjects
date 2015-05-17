// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_299/ia32_com/subject.exe
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
T_7: (in al_133 : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_8: (in 0x13 : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_9: (in wLoc02_10 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_10: (in 0x005F : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_11: (in wLoc06_122 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_12: (in 0x0064 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_13: (in 0x08 : byte)
  Class: Eq_13
  DataType: byte
  OrigDataType: byte
T_14: (in al_133 & 0x08 : byte)
  Class: Eq_14
  DataType: byte
  OrigDataType: byte
T_15: (in 0x00 : byte)
  Class: Eq_14
  DataType: byte
  OrigDataType: byte
T_16: (in (al_133 & 0x08) == 0x00 : bool)
  Class: Eq_16
  DataType: bool
  OrigDataType: bool
T_17: (in 0x0001 : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_18: (in bx_166 : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_19: (in 0x01 : byte)
  Class: Eq_19
  DataType: byte
  OrigDataType: byte
T_20: (in bl_164 : byte)
  Class: Eq_19
  DataType: byte
  OrigDataType: byte
T_21: (in ds : selector)
  Class: Eq_21
  DataType: (ptr (segment (1AD T_9 t01AD) (1AF T_113 t01AF) (1B1 T_77 t01B1) (1B2 T_19 t01B2)))
  OrigDataType: (ptr (segment (1AD T_9 t01AD) (1AF T_113 t01AF) (1B1 T_77 t01B1) (1B2 T_19 t01B2)))
T_22: (in 0x01B2 : word16)
  Class: Eq_22
  DataType: (memptr T_21 (struct (0 T_23 t0000)))
  OrigDataType: (memptr T_21 (struct (0 T_23 t0000)))
T_23: (in Mem45[ds:0x01B2:byte] : byte)
  Class: Eq_19
  DataType: byte
  OrigDataType: byte
T_24: (in 0x0001 : word16)
  Class: Eq_24
  DataType: word16
  OrigDataType: word16
T_25: (in bx_166 - 0x0001 : word16)
  Class: Eq_25
  DataType: word16
  OrigDataType: word16
T_26: (in (byte) (bx_166 - 0x0001) : byte)
  Class: Eq_19
  DataType: byte
  OrigDataType: byte
T_27: (in __inb : ptr32)
  Class: Eq_27
  DataType: (ptr (fn T_29 (T_28)))
  OrigDataType: (ptr (fn T_29 (T_28)))
T_28: (in 0x03DA : word16)
  Class: Eq_28
  DataType: word16
  OrigDataType: word16
T_29: (in __inb(0x03DA) : byte)
  Class: Eq_29
  DataType: byte
  OrigDataType: byte
T_30: (in 0x08 : byte)
  Class: Eq_30
  DataType: byte
  OrigDataType: byte
T_31: (in __inb(0x03DA) & 0x08 : byte)
  Class: Eq_31
  DataType: byte
  OrigDataType: byte
T_32: (in 0x00 : byte)
  Class: Eq_31
  DataType: byte
  OrigDataType: byte
T_33: (in (__inb(0x03DA) & 0x08) != 0x00 : bool)
  Class: Eq_33
  DataType: bool
  OrigDataType: bool
T_34: (in __inb : ptr32)
  Class: Eq_34
  DataType: (ptr (fn T_36 (T_35)))
  OrigDataType: (ptr (fn T_36 (T_35)))
T_35: (in 0x03DA : word16)
  Class: Eq_35
  DataType: word16
  OrigDataType: word16
T_36: (in __inb(0x03DA) : byte)
  Class: Eq_36
  DataType: byte
  OrigDataType: byte
T_37: (in 0x08 : byte)
  Class: Eq_37
  DataType: byte
  OrigDataType: byte
T_38: (in __inb(0x03DA) & 0x08 : byte)
  Class: Eq_38
  DataType: byte
  OrigDataType: byte
T_39: (in 0x00 : byte)
  Class: Eq_38
  DataType: byte
  OrigDataType: byte
T_40: (in (__inb(0x03DA) & 0x08) == 0x00 : bool)
  Class: Eq_40
  DataType: bool
  OrigDataType: bool
T_41: (in dl_66 : byte)
  Class: Eq_41
  DataType: byte
  OrigDataType: byte
T_42: (in ah_67 : byte)
  Class: Eq_42
  DataType: byte
  OrigDataType: byte
T_43: (in al_154 : byte)
  Class: Eq_43
  DataType: byte
  OrigDataType: byte
T_44: (in fn0C00_01B3 : ptr32)
  Class: Eq_44
  DataType: (ptr (fn T_60 (T_11, T_54, T_55, T_56, T_21, T_57, T_58, T_59)))
  OrigDataType: (ptr (fn T_60 (T_11, T_54, T_55, T_56, T_21, T_57, T_58, T_59)))
T_45: (in signature of fn0C00_01B3 : void)
  Class: Eq_44
  DataType: 
  OrigDataType: 
T_46: (in ax : word16)
  Class: Eq_9
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
  Class: Eq_21
  DataType: (ptr (segment (1AB T_188 t01AB)))
  OrigDataType: (ptr (segment (1AB T_188 t01AB)))
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
T_54: (in 0x00A0 : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_55: (in 0x00 : byte)
  Class: Eq_48
  DataType: byte
  OrigDataType: byte
T_56: (in 0xA000 : selector)
  Class: Eq_49
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_57: (in out al_154 : ptr16)
  Class: Eq_51
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_58: (in out dl_66 : ptr16)
  Class: Eq_52
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_59: (in out ah_67 : ptr16)
  Class: Eq_53
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_60: (in fn0C00_01B3(wLoc06_122, 0x00A0, 0x00, 0xA000, ds, out al_154, out dl_66, out ah_67) : byte)
  Class: Eq_60
  DataType: byte
  OrigDataType: byte
T_61: (in bx_72 : word16)
  Class: Eq_9
  DataType: int16
  OrigDataType: int16
T_62: (in 0x01AD : word16)
  Class: Eq_62
  DataType: (memptr T_21 (struct (0 T_63 t0000)))
  OrigDataType: (memptr T_21 (struct (0 T_63 t0000)))
T_63: (in Mem45[ds:0x01AD:word16] : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_64: (in ax_155 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_65: (in bl_151 : byte)
  Class: Eq_65
  DataType: byte
  OrigDataType: byte
T_66: (in (byte) bx_72 : byte)
  Class: Eq_65
  DataType: byte
  OrigDataType: byte
T_67: (in true : bool)
  Class: Eq_67
  DataType: bool
  OrigDataType: bool
T_68: (in bx_80 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_69: (in fn0C00_01D7 : ptr32)
  Class: Eq_69
  DataType: (ptr (fn T_72 (T_65)))
  OrigDataType: (ptr (fn T_72 (T_65)))
T_70: (in signature of fn0C00_01D7 : void)
  Class: Eq_69
  DataType: 
  OrigDataType: 
T_71: (in bl : byte)
  Class: Eq_65
  DataType: byte
  OrigDataType: byte
T_72: (in fn0C00_01D7(bl_151) : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_73: (in 0x01AD : word16)
  Class: Eq_73
  DataType: (memptr T_21 (struct (0 T_74 t0000)))
  OrigDataType: (memptr T_21 (struct (0 T_74 t0000)))
T_74: (in Mem82[ds:0x01AD:word16] : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_75: (in al_83 : byte)
  Class: Eq_75
  DataType: byte
  OrigDataType: byte
T_76: (in 0x01B1 : word16)
  Class: Eq_76
  DataType: (memptr T_21 (struct (0 T_77 t0000)))
  OrigDataType: (memptr T_21 (struct (0 T_77 t0000)))
T_77: (in Mem82[ds:0x01B1:byte] : byte)
  Class: Eq_77
  DataType: byte
  OrigDataType: byte
T_78: (in al_154 + Mem82[ds:0x01B1:byte] : byte)
  Class: Eq_75
  DataType: byte
  OrigDataType: byte
T_79: (in ax_84 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_80: (in DPB(ax_155, al_83, 0, 8) : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_81: (in 0x01 : byte)
  Class: Eq_75
  DataType: byte
  OrigDataType: byte
T_82: (in al_83 != 0x01 : bool)
  Class: Eq_82
  DataType: bool
  OrigDataType: bool
T_83: (in ax_145 : word16)
  Class: Eq_9
  DataType: int16
  OrigDataType: int16
T_84: (in 0x05 : byte)
  Class: Eq_84
  DataType: byte
  OrigDataType: byte
T_85: (in al_154 - 0x05 : byte)
  Class: Eq_85
  DataType: byte
  OrigDataType: byte
T_86: (in DPB(wLoc06_122, al_154 - 0x05, 0, 8) : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_87: (in ax_145 == bx_72 : bool)
  Class: Eq_87
  DataType: bool
  OrigDataType: bool
T_88: (in DPB(wLoc06_122, al_154, 0, 8) : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_89: (in ax_145 > bx_72 : bool)
  Class: Eq_89
  DataType: bool
  OrigDataType: bool
T_90: (in 0x0001 : word16)
  Class: Eq_90
  DataType: word16
  OrigDataType: word16
T_91: (in bx_72 + 0x0001 : word16)
  Class: Eq_91
  DataType: word16
  OrigDataType: word16
T_92: (in (byte) (bx_72 + 0x0001) : byte)
  Class: Eq_65
  DataType: byte
  OrigDataType: byte
T_93: (in 0x0001 : word16)
  Class: Eq_93
  DataType: word16
  OrigDataType: word16
T_94: (in bx_72 - 0x0001 : word16)
  Class: Eq_94
  DataType: word16
  OrigDataType: word16
T_95: (in (byte) (bx_72 - 0x0001) : byte)
  Class: Eq_65
  DataType: byte
  OrigDataType: byte
T_96: (in 0xC6 : byte)
  Class: Eq_75
  DataType: byte
  OrigDataType: byte
T_97: (in al_83 != 0xC6 : bool)
  Class: Eq_97
  DataType: bool
  OrigDataType: bool
T_98: (in 0x01B1 : word16)
  Class: Eq_98
  DataType: (memptr T_21 (struct (0 T_77 t0000)))
  OrigDataType: (memptr T_21 (struct (0 T_77 t0000)))
T_99: (in Mem82[ds:0x01B1:byte] : byte)
  Class: Eq_77
  DataType: int8
  OrigDataType: int8
T_100: (in -Mem82[ds:0x01B1:byte] : byte)
  Class: Eq_77
  DataType: int8
  OrigDataType: int8
T_101: (in Mem141[ds:0x01B1:byte] : byte)
  Class: Eq_77
  DataType: byte
  OrigDataType: byte
T_102: (in cx_93 : word16)
  Class: Eq_102
  DataType: word16
  OrigDataType: word16
T_103: (in ax_94 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_104: (in fn0C00_01E6 : ptr32)
  Class: Eq_104
  DataType: (ptr (fn T_118 (T_79, T_115, T_116, T_68, T_21, T_117)))
  OrigDataType: (ptr (fn T_118 (T_79, T_115, T_116, T_68, T_21, T_117)))
T_105: (in signature of fn0C00_01E6 : void)
  Class: Eq_104
  DataType: 
  OrigDataType: 
T_106: (in ax : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_107: (in cx : word16)
  Class: Eq_102
  DataType: word16
  OrigDataType: word16
T_108: (in dx : word16)
  Class: Eq_102
  DataType: word16
  OrigDataType: word16
T_109: (in bx : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_110: (in ds : selector)
  Class: Eq_21
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_111: (in cxOut : ptr16)
  Class: Eq_111
  DataType: ptr16
  OrigDataType: ptr16
T_112: (in 0x01AF : word16)
  Class: Eq_112
  DataType: (memptr T_21 (struct (0 T_113 t0000)))
  OrigDataType: (memptr T_21 (struct (0 T_113 t0000)))
T_113: (in Mem82[ds:0x01AF:word16] : word16)
  Class: Eq_113
  DataType: word16
  OrigDataType: word16
T_114: (in 0x00A0 : word16)
  Class: Eq_114
  DataType: word16
  OrigDataType: word16
T_115: (in Mem82[ds:0x01AF:word16] + 0x00A0 : word16)
  Class: Eq_102
  DataType: word16
  OrigDataType: word16
T_116: (in 0x013F : word16)
  Class: Eq_102
  DataType: word16
  OrigDataType: word16
T_117: (in out cx_93 : ptr16)
  Class: Eq_111
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_118: (in fn0C00_01E6(ax_84, Mem82[ds:0x01AF:word16] + 0x00A0, 0x013F, bx_80, ds, out cx_93) : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_119: (in bx_100 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_120: (in fn0C00_01D7 : ptr32)
  Class: Eq_69
  DataType: (ptr (fn T_125 (T_124)))
  OrigDataType: (ptr (fn T_125 (T_124)))
T_121: (in (byte) wLoc02_10 : byte)
  Class: Eq_121
  DataType: byte
  OrigDataType: byte
T_122: (in 0x01B2 : word16)
  Class: Eq_122
  DataType: (memptr T_21 (struct (0 T_123 t0000)))
  OrigDataType: (memptr T_21 (struct (0 T_123 t0000)))
T_123: (in Mem82[ds:0x01B2:byte] : byte)
  Class: Eq_19
  DataType: byte
  OrigDataType: byte
T_124: (in (byte) wLoc02_10 + Mem82[ds:0x01B2:byte] : byte)
  Class: Eq_65
  DataType: byte
  OrigDataType: byte
T_125: (in fn0C00_01D7((byte) wLoc02_10 + Mem82[ds:0x01B2:byte]) : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_126: (in cx_106 : word16)
  Class: Eq_126
  DataType: word16
  OrigDataType: word16
T_127: (in ax_107 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_128: (in fn0C00_01E6 : ptr32)
  Class: Eq_104
  DataType: (ptr (fn T_131 (T_103, T_102, T_129, T_119, T_21, T_130)))
  OrigDataType: (ptr (fn T_131 (T_103, T_102, T_129, T_119, T_21, T_130)))
T_129: (in 0x0000 : word16)
  Class: Eq_102
  DataType: word16
  OrigDataType: word16
T_130: (in out cx_106 : ptr16)
  Class: Eq_111
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_131: (in fn0C00_01E6(ax_94, cx_93, 0x0000, bx_100, ds, out cx_106) : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_132: (in al_114 : byte)
  Class: Eq_132
  DataType: byte
  OrigDataType: byte
T_133: (in dl_115 : byte)
  Class: Eq_48
  DataType: byte
  OrigDataType: byte
T_134: (in ah_116 : byte)
  Class: Eq_134
  DataType: byte
  OrigDataType: byte
T_135: (in fn0C00_01B3 : ptr32)
  Class: Eq_44
  DataType: (ptr (fn T_141 (T_127, T_136, T_137, T_56, T_21, T_138, T_139, T_140)))
  OrigDataType: (ptr (fn T_141 (T_127, T_136, T_137, T_56, T_21, T_138, T_139, T_140)))
T_136: (in 0x00A0 : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_137: (in 0x0F : byte)
  Class: Eq_48
  DataType: byte
  OrigDataType: byte
T_138: (in out al_114 : ptr16)
  Class: Eq_51
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_139: (in out dl_115 : ptr16)
  Class: Eq_52
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_140: (in out ah_116 : ptr16)
  Class: Eq_53
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_141: (in fn0C00_01B3(ax_107, 0x00A0, 0x0F, 0xA000, ds, out al_114, out dl_115, out ah_116) : byte)
  Class: Eq_141
  DataType: byte
  OrigDataType: byte
T_142: (in 0x00A0 : word16)
  Class: Eq_142
  DataType: word16
  OrigDataType: word16
T_143: (in ss : selector)
  Class: Eq_143
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_144: (in fp : ptr16)
  Class: Eq_144
  DataType: (union (ptr16 u0) ((memptr T_143 (struct (FFFFFFFC T_147 tFFFFFFFC))) u1))
  OrigDataType: (union (ptr16 u0) ((memptr T_143 (struct (FFFFFFFC T_147 tFFFFFFFC))) u1))
T_145: (in 0x0004 : word16)
  Class: Eq_145
  DataType: word16
  OrigDataType: word16
T_146: (in fp - 0x0004 : word16)
  Class: Eq_146
  DataType: word16
  OrigDataType: word16
T_147: (in Mem119[ss:fp - 0x0004:word16] : word16)
  Class: Eq_142
  DataType: word16
  OrigDataType: word16
T_148: (in fn0C00_01C3 : ptr32)
  Class: Eq_148
  DataType: (ptr (fn T_156 (T_119, T_155, T_133, T_56, T_21)))
  OrigDataType: (ptr (fn T_156 (T_119, T_155, T_133, T_56, T_21)))
T_149: (in signature of fn0C00_01C3 : void)
  Class: Eq_148
  DataType: 
  OrigDataType: 
T_150: (in ax : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_151: (in bx : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_152: (in dl : byte)
  Class: Eq_48
  DataType: byte
  OrigDataType: byte
T_153: (in es : selector)
  Class: Eq_49
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_154: (in ds : selector)
  Class: Eq_21
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_155: (in 0x0000 : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_156: (in fn0C00_01C3(bx_100, 0x0000, dl_115, 0xA000, ds) : byte)
  Class: Eq_156
  DataType: byte
  OrigDataType: byte
T_157: (in Z_132 : byte)
  Class: Eq_157
  DataType: byte
  OrigDataType: byte
T_158: (in fn0C00_01C3 : ptr32)
  Class: Eq_148
  DataType: (ptr (fn T_163 (T_160, T_161, T_162, T_56, T_21)))
  OrigDataType: (ptr (fn T_163 (T_160, T_161, T_162, T_56, T_21)))
T_159: (in 0x01AD : word16)
  Class: Eq_159
  DataType: (memptr T_21 (struct (0 T_160 t0000)))
  OrigDataType: (memptr T_21 (struct (0 T_160 t0000)))
T_160: (in Mem119[ds:0x01AD:word16] : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_161: (in 0x013F : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_162: (in 0x0F : byte)
  Class: Eq_48
  DataType: byte
  OrigDataType: byte
T_163: (in fn0C00_01C3(Mem119[ds:0x01AD:word16], 0x013F, 0x0F, 0xA000, ds) : byte)
  Class: Eq_157
  DataType: byte
  OrigDataType: byte
T_164: (in bios_kbd_check_keystroke : ptr32)
  Class: Eq_164
  DataType: (ptr (fn T_168 (T_167)))
  OrigDataType: (ptr (fn T_168 (T_167)))
T_165: (in signature of bios_kbd_check_keystroke : void)
  Class: Eq_164
  DataType: 
  OrigDataType: 
T_166: (in alOut : ptr16)
  Class: Eq_166
  DataType: ptr16
  OrigDataType: ptr16
T_167: (in out al_133 : ptr16)
  Class: Eq_166
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_168: (in bios_kbd_check_keystroke(out al_133) : byte)
  Class: Eq_168
  DataType: byte
  OrigDataType: byte
T_169: (in 0x01B1 : word16)
  Class: Eq_169
  DataType: (memptr T_21 (struct (0 T_77 t0000)))
  OrigDataType: (memptr T_21 (struct (0 T_77 t0000)))
T_170: (in Mem82[ds:0x01B1:byte] : byte)
  Class: Eq_77
  DataType: int8
  OrigDataType: int8
T_171: (in -Mem82[ds:0x01B1:byte] : byte)
  Class: Eq_77
  DataType: int8
  OrigDataType: int8
T_172: (in Mem137[ds:0x01B1:byte] : byte)
  Class: Eq_77
  DataType: byte
  OrigDataType: byte
T_173: (in __syscall : ptr32)
  Class: Eq_173
  DataType: (ptr (fn T_175 (T_174)))
  OrigDataType: (ptr (fn T_175 (T_174)))
T_174: (in 0x16 : byte)
  Class: Eq_174
  DataType: byte
  OrigDataType: byte
T_175: (in __syscall(0x16) : void)
  Class: Eq_175
  DataType: void
  OrigDataType: void
T_176: (in 0x0000 : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_177: (in 0x00 : byte)
  Class: Eq_19
  DataType: byte
  OrigDataType: byte
T_178: (in 0x04 : byte)
  Class: Eq_178
  DataType: byte
  OrigDataType: byte
T_179: (in al_133 & 0x04 : byte)
  Class: Eq_179
  DataType: byte
  OrigDataType: byte
T_180: (in 0x00 : byte)
  Class: Eq_179
  DataType: byte
  OrigDataType: byte
T_181: (in (al_133 & 0x04) == 0x00 : bool)
  Class: Eq_181
  DataType: bool
  OrigDataType: bool
T_182: (in msdos_terminate_program20 : ptr32)
  Class: Eq_182
  DataType: (ptr (fn T_184 ()))
  OrigDataType: (ptr (fn T_184 ()))
T_183: (in signature of msdos_terminate_program20 : void)
  Class: Eq_182
  DataType: 
  OrigDataType: 
T_184: (in msdos_terminate_program20() : void)
  Class: Eq_184
  DataType: void
  OrigDataType: void
T_185: (in Z : bool)
  Class: Eq_185
  DataType: bool
  OrigDataType: bool
T_186: (in bx_15 : word16)
  Class: Eq_186
  DataType: word16
  OrigDataType: word16
T_187: (in 0x01AB : word16)
  Class: Eq_187
  DataType: (memptr T_50 (struct (0 T_188 t0000)))
  OrigDataType: (memptr T_50 (struct (0 T_188 t0000)))
T_188: (in Mem0[ds:0x01AB:word16] : word16)
  Class: Eq_188
  DataType: uint16
  OrigDataType: uint16
T_189: (in Mem0[ds:0x01AB:word16] *u ax : uint32)
  Class: Eq_189
  DataType: uint32
  OrigDataType: uint32
T_190: (in (word16) (Mem0[ds:0x01AB:word16] *u ax) : word16)
  Class: Eq_190
  DataType: word16
  OrigDataType: word16
T_191: (in bx + (word16) (Mem0[ds:0x01AB:word16] *u ax) : word16)
  Class: Eq_186
  DataType: word16
  OrigDataType: word16
T_192: (in dl_19 : byte)
  Class: Eq_192
  DataType: byte
  OrigDataType: byte
T_193: (in dx : word16)
  Class: Eq_193
  DataType: word16
  OrigDataType: word16
T_194: (in (byte) dx : byte)
  Class: Eq_192
  DataType: byte
  OrigDataType: byte
T_195: (in *dlOut : byte)
  Class: Eq_192
  DataType: 
  OrigDataType: 
T_196: (in 0x0000 : word16)
  Class: Eq_196
  DataType: 
  OrigDataType: 
T_197: (in bx_15 + 0x0000 : word16)
  Class: Eq_197
  DataType: 
  OrigDataType: 
T_198: (in Mem21[es:bx_15 + 0x0000:byte] : byte)
  Class: Eq_192
  DataType: 
  OrigDataType: 
T_199: (in al_27 : byte)
  Class: Eq_199
  DataType: 
  OrigDataType: 
T_200: (in (byte) ax : byte)
  Class: Eq_200
  DataType: 
  OrigDataType: 
T_201: (in *alOut : byte)
  Class: Eq_200
  DataType: 
  OrigDataType: 
T_202: (in ah_28 : byte)
  Class: Eq_202
  DataType: 
  OrigDataType: 
T_203: (in SLICE(ax, byte, 8) : byte)
  Class: Eq_203
  DataType: 
  OrigDataType: 
T_204: (in *ahOut : byte)
  Class: Eq_203
  DataType: 
  OrigDataType: 
T_205: (in cond(bx_15) : byte)
  Class: Eq_205
  DataType: 
  OrigDataType: 
T_206: (in Z : bool)
  Class: Eq_206
  DataType: 
  OrigDataType: 
T_207: (in cx_19 : word16)
  Class: Eq_207
  DataType: 
  OrigDataType: 
T_208: (in 0x000A : word16)
  Class: Eq_207
  DataType: 
  OrigDataType: 
T_209: (in al_11 : byte)
  Class: Eq_209
  DataType: 
  OrigDataType: 
T_210: (in ah_13 : byte)
  Class: Eq_210
  DataType: 
  OrigDataType: 
T_211: (in fn0C00_01B3 : ptr32)
  Class: Eq_44
  DataType: 
  OrigDataType: 
T_212: (in out al_11 : ptr16)
  Class: Eq_51
  DataType: 
  OrigDataType: 
T_213: (in out dl : ptr16)
  Class: Eq_52
  DataType: 
  OrigDataType: 
T_214: (in out ah_13 : ptr16)
  Class: Eq_53
  DataType: 
  OrigDataType: 
T_215: (in fn0C00_01B3(ax, bx, dl, es, ds, out al_11, out dl, out ah_13) : bool)
  Class: Eq_215
  DataType: 
  OrigDataType: 
T_216: (in 0x0001 : word16)
  Class: Eq_216
  DataType: 
  OrigDataType: 
T_217: (in ax + 0x0001 : word16)
  Class: Eq_9
  DataType: 
  OrigDataType: 
T_218: (in 0x0001 : word16)
  Class: Eq_218
  DataType: 
  OrigDataType: 
T_219: (in cx_19 - 0x0001 : word16)
  Class: Eq_207
  DataType: 
  OrigDataType: 
T_220: (in 0x0000 : word16)
  Class: Eq_207
  DataType: 
  OrigDataType: 
T_221: (in cx_19 != 0x0000 : bool)
  Class: Eq_221
  DataType: 
  OrigDataType: 
T_222: (in al_23 : byte)
  Class: Eq_222
  DataType: 
  OrigDataType: 
T_223: (in dl_24 : byte)
  Class: Eq_48
  DataType: 
  OrigDataType: 
T_224: (in ah_25 : byte)
  Class: Eq_224
  DataType: 
  OrigDataType: 
T_225: (in fn0C00_01B3 : ptr32)
  Class: Eq_44
  DataType: 
  OrigDataType: 
T_226: (in 0x00 : byte)
  Class: Eq_48
  DataType: 
  OrigDataType: 
T_227: (in out al_23 : ptr16)
  Class: Eq_51
  DataType: 
  OrigDataType: 
T_228: (in out dl_24 : ptr16)
  Class: Eq_52
  DataType: 
  OrigDataType: 
T_229: (in out ah_25 : ptr16)
  Class: Eq_53
  DataType: 
  OrigDataType: 
T_230: (in fn0C00_01B3(ax, bx, 0x00, es, ds, out al_23, out dl_24, out ah_25) : bool)
  Class: Eq_230
  DataType: 
  OrigDataType: 
T_231: (in al_31 : byte)
  Class: Eq_231
  DataType: 
  OrigDataType: 
T_232: (in dl_32 : byte)
  Class: Eq_232
  DataType: 
  OrigDataType: 
T_233: (in ah_33 : byte)
  Class: Eq_233
  DataType: 
  OrigDataType: 
T_234: (in fn0C00_01B3 : ptr32)
  Class: Eq_44
  DataType: 
  OrigDataType: 
T_235: (in 0x0B : byte)
  Class: Eq_235
  DataType: 
  OrigDataType: 
T_236: (in al_23 - 0x0B : byte)
  Class: Eq_236
  DataType: 
  OrigDataType: 
T_237: (in DPB(ax, al_23 - 0x0B, 0, 8) : word16)
  Class: Eq_9
  DataType: 
  OrigDataType: 
T_238: (in out al_31 : ptr16)
  Class: Eq_51
  DataType: 
  OrigDataType: 
T_239: (in out dl_32 : ptr16)
  Class: Eq_52
  DataType: 
  OrigDataType: 
T_240: (in out ah_33 : ptr16)
  Class: Eq_53
  DataType: 
  OrigDataType: 
T_241: (in fn0C00_01B3(DPB(ax, al_23 - 0x0B, 0, 8), bx, dl_24, es, ds, out al_31, out dl_32, out ah_33) : bool)
  Class: Eq_241
  DataType: 
  OrigDataType: 
T_242: (in bx : word16)
  Class: Eq_242
  DataType: 
  OrigDataType: 
T_243: (in 0x00 : byte)
  Class: Eq_65
  DataType: 
  OrigDataType: 
T_244: (in bl != 0x00 : bool)
  Class: Eq_244
  DataType: 
  OrigDataType: 
T_245: (in true : bool)
  Class: Eq_245
  DataType: 
  OrigDataType: 
T_246: (in 0x01 : byte)
  Class: Eq_246
  DataType: 
  OrigDataType: 
T_247: (in DPB(bx, 0x01, 0, 8) : word16)
  Class: Eq_242
  DataType: 
  OrigDataType: 
T_248: (in 0xBD : byte)
  Class: Eq_248
  DataType: 
  OrigDataType: 
T_249: (in DPB(bx, 0xBD, 0, 8) : word16)
  Class: Eq_242
  DataType: 
  OrigDataType: 
T_250: (in *cxOut : word16)
  Class: Eq_102
  DataType: 
  OrigDataType: 
T_251: (in cx != dx : bool)
  Class: Eq_251
  DataType: 
  OrigDataType: 
T_252: (in ax < bx : bool)
  Class: Eq_252
  DataType: 
  OrigDataType: 
T_253: (in al : byte)
  Class: Eq_253
  DataType: 
  OrigDataType: 
T_254: (in 0x61 : byte)
  Class: Eq_254
  DataType: 
  OrigDataType: 
T_255: (in al + 0x61 : byte)
  Class: Eq_255
  DataType: 
  OrigDataType: 
T_256: (in DPB(ax, al + 0x61, 0, 8) : word16)
  Class: Eq_256
  DataType: 
  OrigDataType: 
T_257: (in 0x007F : word16)
  Class: Eq_257
  DataType: 
  OrigDataType: 
T_258: (in DPB(ax, al + 0x61, 0, 8) & 0x007F : word16)
  Class: Eq_258
  DataType: 
  OrigDataType: 
T_259: (in 0x0024 : word16)
  Class: Eq_259
  DataType: 
  OrigDataType: 
T_260: (in (DPB(ax, al + 0x61, 0, 8) & 0x007F) + 0x0024 : word16)
  Class: Eq_9
  DataType: 
  OrigDataType: 
T_261: (in cx_46 : word16)
  Class: Eq_261
  DataType: 
  OrigDataType: 
T_262: (in 0x00A0 : word16)
  Class: Eq_262
  DataType: 
  OrigDataType: 
T_263: (in *cxOut : word16)
  Class: Eq_262
  DataType: 
  OrigDataType: 
T_264: (in bl : byte)
  Class: Eq_264
  DataType: 
  OrigDataType: 
T_265: (in 0x0A : byte)
  Class: Eq_265
  DataType: 
  OrigDataType: 
T_266: (in bl + 0x0A : byte)
  Class: Eq_266
  DataType: 
  OrigDataType: 
T_267: (in DPB(bx, bl + 0x0A, 0, 8) : word16)
  Class: Eq_9
  DataType: 
  OrigDataType: 
T_268: (in ax >= DPB(bx, bl + 0x0A, 0, 8) : bool)
  Class: Eq_268
  DataType: 
  OrigDataType: 
T_269: (in 0x01AF : word16)
  Class: Eq_269
  DataType: 
  OrigDataType: 
T_270: (in Mem0[ds:0x01AF:word16] : word16)
  Class: Eq_270
  DataType: 
  OrigDataType: 
T_271: (in -Mem0[ds:0x01AF:word16] : word16)
  Class: Eq_271
  DataType: 
  OrigDataType: 
T_272: (in Mem58[ds:0x01AF:word16] : word16)
  Class: Eq_271
  DataType: 
  OrigDataType: 
*/
