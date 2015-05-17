// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_304/ia32_com/subject.exe
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
T_7: (in al_115 : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_8: (in 0x13 : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_9: (in wLoc02_104 : word16)
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
T_12: (in al_115 & 0x08 : byte)
  Class: Eq_12
  DataType: byte
  OrigDataType: byte
T_13: (in 0x00 : byte)
  Class: Eq_12
  DataType: byte
  OrigDataType: byte
T_14: (in (al_115 & 0x08) == 0x00 : bool)
  Class: Eq_14
  DataType: bool
  OrigDataType: bool
T_15: (in ds : selector)
  Class: Eq_15
  DataType: (ptr (segment (1BC T_9 t01BC) (1BE T_9 t01BE) (1C0 T_17 t01C0) (1C2 T_40 t01C2) (1C4 T_108 t01C4) (1C6 T_79 t01C6)))
  OrigDataType: (ptr (segment (1BC T_9 t01BC) (1BE T_9 t01BE) (1C0 T_17 t01C0) (1C2 T_40 t01C2) (1C4 T_108 t01C4) (1C6 T_79 t01C6)))
T_16: (in 0x01C0 : word16)
  Class: Eq_16
  DataType: (memptr T_15 (struct (0 T_17 t0000)))
  OrigDataType: (memptr T_15 (struct (0 T_17 t0000)))
T_17: (in Mem28[ds:0x01C0:word16] : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_18: (in 0x0001 : word16)
  Class: Eq_18
  DataType: word16
  OrigDataType: word16
T_19: (in Mem28[ds:0x01C0:word16] + 0x0001 : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_20: (in Mem149[ds:0x01C0:word16] : word16)
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
T_28: (in 0x01C0 : word16)
  Class: Eq_28
  DataType: (memptr T_15 (struct (0 T_17 t0000)))
  OrigDataType: (memptr T_15 (struct (0 T_17 t0000)))
T_29: (in Mem28[ds:0x01C0:word16] : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_30: (in 0x0001 : word16)
  Class: Eq_30
  DataType: word16
  OrigDataType: word16
T_31: (in Mem28[ds:0x01C0:word16] - 0x0001 : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_32: (in Mem146[ds:0x01C0:word16] : word16)
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
T_40: (in bx_51 : word16)
  Class: Eq_40
  DataType: int16
  OrigDataType: int16
T_41: (in 0x01C2 : word16)
  Class: Eq_41
  DataType: (memptr T_15 (struct (0 T_42 t0000)))
  OrigDataType: (memptr T_15 (struct (0 T_42 t0000)))
T_42: (in Mem28[ds:0x01C2:word16] : word16)
  Class: Eq_40
  DataType: word16
  OrigDataType: word16
T_43: (in al_55 : byte)
  Class: Eq_43
  DataType: byte
  OrigDataType: byte
T_44: (in dl_56 : byte)
  Class: Eq_44
  DataType: byte
  OrigDataType: byte
T_45: (in ah_57 : byte)
  Class: Eq_45
  DataType: byte
  OrigDataType: byte
T_46: (in fn0C00_01CA : ptr32)
  Class: Eq_46
  DataType: (ptr (fn T_61 (T_9, T_40, T_56, T_57, T_15, T_58, T_59, T_60)))
  OrigDataType: (ptr (fn T_61 (T_9, T_40, T_56, T_57, T_15, T_58, T_59, T_60)))
T_47: (in signature of fn0C00_01CA : void)
  Class: Eq_46
  DataType: 
  OrigDataType: 
T_48: (in ax : word16)
  Class: Eq_9
  DataType: uint16
  OrigDataType: uint16
T_49: (in bx : word16)
  Class: Eq_40
  DataType: word16
  OrigDataType: word16
T_50: (in dl : byte)
  Class: Eq_50
  DataType: byte
  OrigDataType: byte
T_51: (in es : selector)
  Class: Eq_51
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_52: (in ds : selector)
  Class: Eq_15
  DataType: (ptr (segment (1C8 T_191 t01C8)))
  OrigDataType: (ptr (segment (1C8 T_191 t01C8)))
T_53: (in alOut : ptr16)
  Class: Eq_53
  DataType: ptr16
  OrigDataType: ptr16
T_54: (in dlOut : ptr16)
  Class: Eq_54
  DataType: ptr16
  OrigDataType: ptr16
T_55: (in ahOut : ptr16)
  Class: Eq_55
  DataType: ptr16
  OrigDataType: ptr16
T_56: (in 0x00 : byte)
  Class: Eq_50
  DataType: byte
  OrigDataType: byte
T_57: (in 0xA000 : selector)
  Class: Eq_51
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_58: (in out al_55 : ptr16)
  Class: Eq_53
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_59: (in out dl_56 : ptr16)
  Class: Eq_54
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_60: (in out ah_57 : ptr16)
  Class: Eq_55
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_61: (in fn0C00_01CA(wLoc02_104, bx_51, 0x00, 0xA000, ds, out al_55, out dl_56, out ah_57) : byte)
  Class: Eq_61
  DataType: byte
  OrigDataType: byte
T_62: (in bx_61 : word16)
  Class: Eq_9
  DataType: int16
  OrigDataType: int16
T_63: (in 0x01BE : word16)
  Class: Eq_63
  DataType: (memptr T_15 (struct (0 T_64 t0000)))
  OrigDataType: (memptr T_15 (struct (0 T_64 t0000)))
T_64: (in Mem28[ds:0x01BE:word16] : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_65: (in ax_137 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_66: (in bl_133 : byte)
  Class: Eq_66
  DataType: byte
  OrigDataType: byte
T_67: (in (byte) bx_61 : byte)
  Class: Eq_66
  DataType: byte
  OrigDataType: byte
T_68: (in 0x00E6 : word16)
  Class: Eq_40
  DataType: int16
  OrigDataType: int16
T_69: (in bx_51 < 0x00E6 : bool)
  Class: Eq_69
  DataType: bool
  OrigDataType: bool
T_70: (in bx_68 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_71: (in fn0C00_01EE : ptr32)
  Class: Eq_71
  DataType: (ptr (fn T_74 (T_66)))
  OrigDataType: (ptr (fn T_74 (T_66)))
T_72: (in signature of fn0C00_01EE : void)
  Class: Eq_71
  DataType: 
  OrigDataType: 
T_73: (in bl : byte)
  Class: Eq_66
  DataType: byte
  OrigDataType: byte
T_74: (in fn0C00_01EE(bl_133) : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_75: (in 0x01BE : word16)
  Class: Eq_75
  DataType: (memptr T_15 (struct (0 T_76 t0000)))
  OrigDataType: (memptr T_15 (struct (0 T_76 t0000)))
T_76: (in Mem70[ds:0x01BE:word16] : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_77: (in ax_71 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_78: (in 0x01C6 : word16)
  Class: Eq_78
  DataType: (memptr T_15 (struct (0 T_79 t0000)))
  OrigDataType: (memptr T_15 (struct (0 T_79 t0000)))
T_79: (in Mem70[ds:0x01C6:word16] : word16)
  Class: Eq_79
  DataType: word16
  OrigDataType: word16
T_80: (in ax_137 + Mem70[ds:0x01C6:word16] : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_81: (in al_72 : byte)
  Class: Eq_81
  DataType: byte
  OrigDataType: byte
T_82: (in (byte) ax_71 : byte)
  Class: Eq_81
  DataType: byte
  OrigDataType: byte
T_83: (in 0x01 : byte)
  Class: Eq_81
  DataType: byte
  OrigDataType: byte
T_84: (in al_72 != 0x01 : bool)
  Class: Eq_84
  DataType: bool
  OrigDataType: bool
T_85: (in ax_127 : word16)
  Class: Eq_9
  DataType: int16
  OrigDataType: int16
T_86: (in 0x05 : byte)
  Class: Eq_86
  DataType: byte
  OrigDataType: byte
T_87: (in al_55 - 0x05 : byte)
  Class: Eq_87
  DataType: byte
  OrigDataType: byte
T_88: (in DPB(wLoc02_104, al_55 - 0x05, 0, 8) : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_89: (in ax_127 == bx_61 : bool)
  Class: Eq_89
  DataType: bool
  OrigDataType: bool
T_90: (in DPB(wLoc02_104, al_55, 0, 8) : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_91: (in ax_127 > bx_61 : bool)
  Class: Eq_91
  DataType: bool
  OrigDataType: bool
T_92: (in 0x0001 : word16)
  Class: Eq_92
  DataType: word16
  OrigDataType: word16
T_93: (in bx_61 + 0x0001 : word16)
  Class: Eq_93
  DataType: word16
  OrigDataType: word16
T_94: (in (byte) (bx_61 + 0x0001) : byte)
  Class: Eq_66
  DataType: byte
  OrigDataType: byte
T_95: (in 0x0001 : word16)
  Class: Eq_95
  DataType: word16
  OrigDataType: word16
T_96: (in bx_61 - 0x0001 : word16)
  Class: Eq_96
  DataType: word16
  OrigDataType: word16
T_97: (in (byte) (bx_61 - 0x0001) : byte)
  Class: Eq_66
  DataType: byte
  OrigDataType: byte
T_98: (in 0xC6 : byte)
  Class: Eq_81
  DataType: byte
  OrigDataType: byte
T_99: (in al_72 != 0xC6 : bool)
  Class: Eq_99
  DataType: bool
  OrigDataType: bool
T_100: (in 0x01C6 : word16)
  Class: Eq_100
  DataType: (memptr T_15 (struct (0 T_79 t0000)))
  OrigDataType: (memptr T_15 (struct (0 T_79 t0000)))
T_101: (in Mem70[ds:0x01C6:word16] : word16)
  Class: Eq_79
  DataType: int16
  OrigDataType: int16
T_102: (in -Mem70[ds:0x01C6:word16] : word16)
  Class: Eq_79
  DataType: int16
  OrigDataType: int16
T_103: (in Mem123[ds:0x01C6:word16] : word16)
  Class: Eq_79
  DataType: word16
  OrigDataType: word16
T_104: (in cx_80 : word16)
  Class: Eq_40
  DataType: word16
  OrigDataType: word16
T_105: (in 0x01C2 : word16)
  Class: Eq_105
  DataType: (memptr T_15 (struct (0 T_106 t0000)))
  OrigDataType: (memptr T_15 (struct (0 T_106 t0000)))
T_106: (in Mem70[ds:0x01C2:word16] : word16)
  Class: Eq_40
  DataType: word16
  OrigDataType: word16
T_107: (in 0x01C4 : word16)
  Class: Eq_107
  DataType: (memptr T_15 (struct (0 T_108 t0000)))
  OrigDataType: (memptr T_15 (struct (0 T_108 t0000)))
T_108: (in Mem70[ds:0x01C4:word16] : word16)
  Class: Eq_108
  DataType: word16
  OrigDataType: word16
T_109: (in Mem70[ds:0x01C2:word16] + Mem70[ds:0x01C4:word16] : word16)
  Class: Eq_40
  DataType: word16
  OrigDataType: word16
T_110: (in 0x01C2 : word16)
  Class: Eq_110
  DataType: (memptr T_15 (struct (0 T_111 t0000)))
  OrigDataType: (memptr T_15 (struct (0 T_111 t0000)))
T_111: (in Mem82[ds:0x01C2:word16] : word16)
  Class: Eq_40
  DataType: word16
  OrigDataType: word16
T_112: (in ax_84 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_113: (in fn0C00_01FD : ptr32)
  Class: Eq_113
  DataType: (ptr (fn T_121 (T_77, T_104, T_120, T_70, T_15)))
  OrigDataType: (ptr (fn T_121 (T_77, T_104, T_120, T_70, T_15)))
T_114: (in signature of fn0C00_01FD : void)
  Class: Eq_113
  DataType: 
  OrigDataType: 
T_115: (in ax : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_116: (in cx : word16)
  Class: Eq_40
  DataType: word16
  OrigDataType: word16
T_117: (in dx : word16)
  Class: Eq_40
  DataType: word16
  OrigDataType: word16
T_118: (in bx : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_119: (in ds : selector)
  Class: Eq_15
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_120: (in 0x013F : word16)
  Class: Eq_40
  DataType: word16
  OrigDataType: word16
T_121: (in fn0C00_01FD(ax_71, cx_80, 0x013F, bx_68, ds) : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_122: (in bx_89 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_123: (in fn0C00_01EE : ptr32)
  Class: Eq_71
  DataType: (ptr (fn T_130 (T_129)))
  OrigDataType: (ptr (fn T_130 (T_129)))
T_124: (in 0x01BC : word16)
  Class: Eq_124
  DataType: (memptr T_15 (struct (0 T_125 t0000)))
  OrigDataType: (memptr T_15 (struct (0 T_125 t0000)))
T_125: (in Mem82[ds:0x01BC:word16] : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_126: (in 0x01C0 : word16)
  Class: Eq_126
  DataType: (memptr T_15 (struct (0 T_127 t0000)))
  OrigDataType: (memptr T_15 (struct (0 T_127 t0000)))
T_127: (in Mem82[ds:0x01C0:word16] : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_128: (in Mem82[ds:0x01BC:word16] + Mem82[ds:0x01C0:word16] : word16)
  Class: Eq_128
  DataType: word16
  OrigDataType: word16
T_129: (in (byte) (Mem82[ds:0x01BC:word16] + Mem82[ds:0x01C0:word16]) : byte)
  Class: Eq_66
  DataType: byte
  OrigDataType: byte
T_130: (in fn0C00_01EE((byte) (Mem82[ds:0x01BC:word16] + Mem82[ds:0x01C0:word16])) : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_131: (in 0x01BC : word16)
  Class: Eq_131
  DataType: (memptr T_15 (struct (0 T_132 t0000)))
  OrigDataType: (memptr T_15 (struct (0 T_132 t0000)))
T_132: (in Mem90[ds:0x01BC:word16] : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_133: (in ax_94 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_134: (in fn0C00_01FD : ptr32)
  Class: Eq_113
  DataType: (ptr (fn T_136 (T_112, T_104, T_135, T_122, T_15)))
  OrigDataType: (ptr (fn T_136 (T_112, T_104, T_135, T_122, T_15)))
T_135: (in 0x0000 : word16)
  Class: Eq_40
  DataType: word16
  OrigDataType: word16
T_136: (in fn0C00_01FD(ax_84, cx_80, 0x0000, bx_89, ds) : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_137: (in al_99 : byte)
  Class: Eq_137
  DataType: byte
  OrigDataType: byte
T_138: (in dl_100 : byte)
  Class: Eq_50
  DataType: byte
  OrigDataType: byte
T_139: (in ah_101 : byte)
  Class: Eq_139
  DataType: byte
  OrigDataType: byte
T_140: (in fn0C00_01CA : ptr32)
  Class: Eq_46
  DataType: (ptr (fn T_147 (T_133, T_142, T_143, T_57, T_15, T_144, T_145, T_146)))
  OrigDataType: (ptr (fn T_147 (T_133, T_142, T_143, T_57, T_15, T_144, T_145, T_146)))
T_141: (in 0x01C2 : word16)
  Class: Eq_141
  DataType: (memptr T_15 (struct (0 T_142 t0000)))
  OrigDataType: (memptr T_15 (struct (0 T_142 t0000)))
T_142: (in Mem90[ds:0x01C2:word16] : word16)
  Class: Eq_40
  DataType: word16
  OrigDataType: word16
T_143: (in 0x0F : byte)
  Class: Eq_50
  DataType: byte
  OrigDataType: byte
T_144: (in out al_99 : ptr16)
  Class: Eq_53
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_145: (in out dl_100 : ptr16)
  Class: Eq_54
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_146: (in out ah_101 : ptr16)
  Class: Eq_55
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_147: (in fn0C00_01CA(ax_94, Mem90[ds:0x01C2:word16], 0x0F, 0xA000, ds, out al_99, out dl_100, out ah_101) : byte)
  Class: Eq_147
  DataType: byte
  OrigDataType: byte
T_148: (in fn0C00_01DA : ptr32)
  Class: Eq_148
  DataType: (ptr (fn T_158 (T_156, T_157, T_138, T_57, T_15)))
  OrigDataType: (ptr (fn T_158 (T_156, T_157, T_138, T_57, T_15)))
T_149: (in signature of fn0C00_01DA : void)
  Class: Eq_148
  DataType: 
  OrigDataType: 
T_150: (in ax : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_151: (in bx : word16)
  Class: Eq_40
  DataType: word16
  OrigDataType: word16
T_152: (in dl : byte)
  Class: Eq_50
  DataType: byte
  OrigDataType: byte
T_153: (in es : selector)
  Class: Eq_51
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_154: (in ds : selector)
  Class: Eq_15
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_155: (in 0x01BC : word16)
  Class: Eq_155
  DataType: (memptr T_15 (struct (0 T_156 t0000)))
  OrigDataType: (memptr T_15 (struct (0 T_156 t0000)))
T_156: (in Mem90[ds:0x01BC:word16] : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_157: (in 0x0000 : word16)
  Class: Eq_40
  DataType: word16
  OrigDataType: word16
T_158: (in fn0C00_01DA(Mem90[ds:0x01BC:word16], 0x0000, dl_100, 0xA000, ds) : byte)
  Class: Eq_158
  DataType: byte
  OrigDataType: byte
T_159: (in Z_114 : byte)
  Class: Eq_159
  DataType: byte
  OrigDataType: byte
T_160: (in fn0C00_01DA : ptr32)
  Class: Eq_148
  DataType: (ptr (fn T_165 (T_162, T_163, T_164, T_57, T_15)))
  OrigDataType: (ptr (fn T_165 (T_162, T_163, T_164, T_57, T_15)))
T_161: (in 0x01BE : word16)
  Class: Eq_161
  DataType: (memptr T_15 (struct (0 T_162 t0000)))
  OrigDataType: (memptr T_15 (struct (0 T_162 t0000)))
T_162: (in Mem90[ds:0x01BE:word16] : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_163: (in 0x013F : word16)
  Class: Eq_40
  DataType: word16
  OrigDataType: word16
T_164: (in 0x0F : byte)
  Class: Eq_50
  DataType: byte
  OrigDataType: byte
T_165: (in fn0C00_01DA(Mem90[ds:0x01BE:word16], 0x013F, 0x0F, 0xA000, ds) : byte)
  Class: Eq_159
  DataType: byte
  OrigDataType: byte
T_166: (in bios_kbd_check_keystroke : ptr32)
  Class: Eq_166
  DataType: (ptr (fn T_170 (T_169)))
  OrigDataType: (ptr (fn T_170 (T_169)))
T_167: (in signature of bios_kbd_check_keystroke : void)
  Class: Eq_166
  DataType: 
  OrigDataType: 
T_168: (in alOut : ptr16)
  Class: Eq_168
  DataType: ptr16
  OrigDataType: ptr16
T_169: (in out al_115 : ptr16)
  Class: Eq_168
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_170: (in bios_kbd_check_keystroke(out al_115) : byte)
  Class: Eq_170
  DataType: byte
  OrigDataType: byte
T_171: (in 0x01C6 : word16)
  Class: Eq_171
  DataType: (memptr T_15 (struct (0 T_79 t0000)))
  OrigDataType: (memptr T_15 (struct (0 T_79 t0000)))
T_172: (in Mem70[ds:0x01C6:word16] : word16)
  Class: Eq_79
  DataType: int16
  OrigDataType: int16
T_173: (in -Mem70[ds:0x01C6:word16] : word16)
  Class: Eq_79
  DataType: int16
  OrigDataType: int16
T_174: (in Mem119[ds:0x01C6:word16] : word16)
  Class: Eq_79
  DataType: word16
  OrigDataType: word16
T_175: (in 0x0000 : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_176: (in 0x01C0 : word16)
  Class: Eq_176
  DataType: (memptr T_15 (struct (0 T_177 t0000)))
  OrigDataType: (memptr T_15 (struct (0 T_177 t0000)))
T_177: (in Mem28[ds:0x01C0:word16] : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_178: (in __syscall : ptr32)
  Class: Eq_178
  DataType: (ptr (fn T_180 (T_179)))
  OrigDataType: (ptr (fn T_180 (T_179)))
T_179: (in 0x16 : byte)
  Class: Eq_179
  DataType: byte
  OrigDataType: byte
T_180: (in __syscall(0x16) : void)
  Class: Eq_180
  DataType: void
  OrigDataType: void
T_181: (in 0x04 : byte)
  Class: Eq_181
  DataType: byte
  OrigDataType: byte
T_182: (in al_115 & 0x04 : byte)
  Class: Eq_182
  DataType: byte
  OrigDataType: byte
T_183: (in 0x00 : byte)
  Class: Eq_182
  DataType: byte
  OrigDataType: byte
T_184: (in (al_115 & 0x04) == 0x00 : bool)
  Class: Eq_184
  DataType: bool
  OrigDataType: bool
T_185: (in msdos_terminate_program20 : ptr32)
  Class: Eq_185
  DataType: (ptr (fn T_187 ()))
  OrigDataType: (ptr (fn T_187 ()))
T_186: (in signature of msdos_terminate_program20 : void)
  Class: Eq_185
  DataType: 
  OrigDataType: 
T_187: (in msdos_terminate_program20() : void)
  Class: Eq_187
  DataType: void
  OrigDataType: void
T_188: (in Z : bool)
  Class: Eq_188
  DataType: bool
  OrigDataType: bool
T_189: (in bx_15 : word16)
  Class: Eq_189
  DataType: word16
  OrigDataType: word16
T_190: (in 0x01C8 : word16)
  Class: Eq_190
  DataType: (memptr T_52 (struct (0 T_191 t0000)))
  OrigDataType: (memptr T_52 (struct (0 T_191 t0000)))
T_191: (in Mem0[ds:0x01C8:word16] : word16)
  Class: Eq_191
  DataType: uint16
  OrigDataType: uint16
T_192: (in Mem0[ds:0x01C8:word16] *u ax : uint32)
  Class: Eq_192
  DataType: uint32
  OrigDataType: uint32
T_193: (in (word16) (Mem0[ds:0x01C8:word16] *u ax) : word16)
  Class: Eq_193
  DataType: word16
  OrigDataType: word16
T_194: (in bx + (word16) (Mem0[ds:0x01C8:word16] *u ax) : word16)
  Class: Eq_189
  DataType: word16
  OrigDataType: word16
T_195: (in dl_19 : byte)
  Class: Eq_195
  DataType: byte
  OrigDataType: byte
T_196: (in dx : word16)
  Class: Eq_196
  DataType: word16
  OrigDataType: word16
T_197: (in (byte) dx : byte)
  Class: Eq_195
  DataType: byte
  OrigDataType: byte
T_198: (in *dlOut : byte)
  Class: Eq_195
  DataType: 
  OrigDataType: 
T_199: (in 0x0000 : word16)
  Class: Eq_199
  DataType: 
  OrigDataType: 
T_200: (in bx_15 + 0x0000 : word16)
  Class: Eq_200
  DataType: 
  OrigDataType: 
T_201: (in Mem21[es:bx_15 + 0x0000:byte] : byte)
  Class: Eq_195
  DataType: 
  OrigDataType: 
T_202: (in al_27 : byte)
  Class: Eq_202
  DataType: 
  OrigDataType: 
T_203: (in (byte) ax : byte)
  Class: Eq_203
  DataType: 
  OrigDataType: 
T_204: (in *alOut : byte)
  Class: Eq_203
  DataType: 
  OrigDataType: 
T_205: (in ah_28 : byte)
  Class: Eq_205
  DataType: 
  OrigDataType: 
T_206: (in SLICE(ax, byte, 8) : byte)
  Class: Eq_206
  DataType: 
  OrigDataType: 
T_207: (in *ahOut : byte)
  Class: Eq_206
  DataType: 
  OrigDataType: 
T_208: (in cond(bx_15) : byte)
  Class: Eq_208
  DataType: 
  OrigDataType: 
T_209: (in Z : bool)
  Class: Eq_209
  DataType: 
  OrigDataType: 
T_210: (in cx_19 : word16)
  Class: Eq_210
  DataType: 
  OrigDataType: 
T_211: (in 0x000A : word16)
  Class: Eq_210
  DataType: 
  OrigDataType: 
T_212: (in al_11 : byte)
  Class: Eq_212
  DataType: 
  OrigDataType: 
T_213: (in ah_13 : byte)
  Class: Eq_213
  DataType: 
  OrigDataType: 
T_214: (in fn0C00_01CA : ptr32)
  Class: Eq_46
  DataType: 
  OrigDataType: 
T_215: (in out al_11 : ptr16)
  Class: Eq_53
  DataType: 
  OrigDataType: 
T_216: (in out dl : ptr16)
  Class: Eq_54
  DataType: 
  OrigDataType: 
T_217: (in out ah_13 : ptr16)
  Class: Eq_55
  DataType: 
  OrigDataType: 
T_218: (in fn0C00_01CA(ax, bx, dl, es, ds, out al_11, out dl, out ah_13) : bool)
  Class: Eq_218
  DataType: 
  OrigDataType: 
T_219: (in 0x0001 : word16)
  Class: Eq_219
  DataType: 
  OrigDataType: 
T_220: (in ax + 0x0001 : word16)
  Class: Eq_9
  DataType: 
  OrigDataType: 
T_221: (in 0x0001 : word16)
  Class: Eq_221
  DataType: 
  OrigDataType: 
T_222: (in cx_19 - 0x0001 : word16)
  Class: Eq_210
  DataType: 
  OrigDataType: 
T_223: (in 0x0000 : word16)
  Class: Eq_210
  DataType: 
  OrigDataType: 
T_224: (in cx_19 != 0x0000 : bool)
  Class: Eq_224
  DataType: 
  OrigDataType: 
T_225: (in al_23 : byte)
  Class: Eq_225
  DataType: 
  OrigDataType: 
T_226: (in dl_24 : byte)
  Class: Eq_50
  DataType: 
  OrigDataType: 
T_227: (in ah_25 : byte)
  Class: Eq_227
  DataType: 
  OrigDataType: 
T_228: (in fn0C00_01CA : ptr32)
  Class: Eq_46
  DataType: 
  OrigDataType: 
T_229: (in 0x00 : byte)
  Class: Eq_50
  DataType: 
  OrigDataType: 
T_230: (in out al_23 : ptr16)
  Class: Eq_53
  DataType: 
  OrigDataType: 
T_231: (in out dl_24 : ptr16)
  Class: Eq_54
  DataType: 
  OrigDataType: 
T_232: (in out ah_25 : ptr16)
  Class: Eq_55
  DataType: 
  OrigDataType: 
T_233: (in fn0C00_01CA(ax, bx, 0x00, es, ds, out al_23, out dl_24, out ah_25) : bool)
  Class: Eq_233
  DataType: 
  OrigDataType: 
T_234: (in al_31 : byte)
  Class: Eq_234
  DataType: 
  OrigDataType: 
T_235: (in dl_32 : byte)
  Class: Eq_235
  DataType: 
  OrigDataType: 
T_236: (in ah_33 : byte)
  Class: Eq_236
  DataType: 
  OrigDataType: 
T_237: (in fn0C00_01CA : ptr32)
  Class: Eq_46
  DataType: 
  OrigDataType: 
T_238: (in 0x0B : byte)
  Class: Eq_238
  DataType: 
  OrigDataType: 
T_239: (in al_23 - 0x0B : byte)
  Class: Eq_239
  DataType: 
  OrigDataType: 
T_240: (in DPB(ax, al_23 - 0x0B, 0, 8) : word16)
  Class: Eq_9
  DataType: 
  OrigDataType: 
T_241: (in out al_31 : ptr16)
  Class: Eq_53
  DataType: 
  OrigDataType: 
T_242: (in out dl_32 : ptr16)
  Class: Eq_54
  DataType: 
  OrigDataType: 
T_243: (in out ah_33 : ptr16)
  Class: Eq_55
  DataType: 
  OrigDataType: 
T_244: (in fn0C00_01CA(DPB(ax, al_23 - 0x0B, 0, 8), bx, dl_24, es, ds, out al_31, out dl_32, out ah_33) : bool)
  Class: Eq_244
  DataType: 
  OrigDataType: 
T_245: (in bx : word16)
  Class: Eq_245
  DataType: 
  OrigDataType: 
T_246: (in 0x00 : byte)
  Class: Eq_66
  DataType: 
  OrigDataType: 
T_247: (in bl != 0x00 : bool)
  Class: Eq_247
  DataType: 
  OrigDataType: 
T_248: (in true : bool)
  Class: Eq_248
  DataType: 
  OrigDataType: 
T_249: (in 0x01 : byte)
  Class: Eq_249
  DataType: 
  OrigDataType: 
T_250: (in DPB(bx, 0x01, 0, 8) : word16)
  Class: Eq_245
  DataType: 
  OrigDataType: 
T_251: (in 0xBD : byte)
  Class: Eq_251
  DataType: 
  OrigDataType: 
T_252: (in DPB(bx, 0xBD, 0, 8) : word16)
  Class: Eq_245
  DataType: 
  OrigDataType: 
T_253: (in cx != dx : bool)
  Class: Eq_253
  DataType: 
  OrigDataType: 
T_254: (in ax < bx : bool)
  Class: Eq_254
  DataType: 
  OrigDataType: 
T_255: (in 0x00A0 : word16)
  Class: Eq_255
  DataType: 
  OrigDataType: 
T_256: (in 0x01C2 : word16)
  Class: Eq_256
  DataType: 
  OrigDataType: 
T_257: (in Mem36[ds:0x01C2:word16] : word16)
  Class: Eq_255
  DataType: 
  OrigDataType: 
T_258: (in al : byte)
  Class: Eq_258
  DataType: 
  OrigDataType: 
T_259: (in 0x61 : byte)
  Class: Eq_259
  DataType: 
  OrigDataType: 
T_260: (in al + 0x61 : byte)
  Class: Eq_260
  DataType: 
  OrigDataType: 
T_261: (in DPB(ax, al + 0x61, 0, 8) : word16)
  Class: Eq_261
  DataType: 
  OrigDataType: 
T_262: (in 0x007F : word16)
  Class: Eq_262
  DataType: 
  OrigDataType: 
T_263: (in DPB(ax, al + 0x61, 0, 8) & 0x007F : word16)
  Class: Eq_263
  DataType: 
  OrigDataType: 
T_264: (in 0x0024 : word16)
  Class: Eq_264
  DataType: 
  OrigDataType: 
T_265: (in (DPB(ax, al + 0x61, 0, 8) & 0x007F) + 0x0024 : word16)
  Class: Eq_9
  DataType: 
  OrigDataType: 
T_266: (in bl : byte)
  Class: Eq_266
  DataType: 
  OrigDataType: 
T_267: (in 0x0A : byte)
  Class: Eq_267
  DataType: 
  OrigDataType: 
T_268: (in bl + 0x0A : byte)
  Class: Eq_268
  DataType: 
  OrigDataType: 
T_269: (in DPB(bx, bl + 0x0A, 0, 8) : word16)
  Class: Eq_9
  DataType: 
  OrigDataType: 
T_270: (in ax >= DPB(bx, bl + 0x0A, 0, 8) : bool)
  Class: Eq_270
  DataType: 
  OrigDataType: 
T_271: (in 0x01C4 : word16)
  Class: Eq_271
  DataType: 
  OrigDataType: 
T_272: (in Mem0[ds:0x01C4:word16] : word16)
  Class: Eq_272
  DataType: 
  OrigDataType: 
T_273: (in -Mem0[ds:0x01C4:word16] : word16)
  Class: Eq_273
  DataType: 
  OrigDataType: 
T_274: (in Mem44[ds:0x01C4:word16] : word16)
  Class: Eq_273
  DataType: 
  OrigDataType: 
*/
