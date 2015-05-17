// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_266/ia32_com/subject.exe
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
T_7: (in __outb : ptr32)
  Class: Eq_7
  DataType: (ptr (fn T_10 (T_8, T_9)))
  OrigDataType: (ptr (fn T_10 (T_8, T_9)))
T_8: (in 0x03C8 : word16)
  Class: Eq_8
  DataType: word16
  OrigDataType: word16
T_9: (in 0x00 : byte)
  Class: Eq_9
  DataType: byte
  OrigDataType: byte
T_10: (in __outb(0x03C8, 0x00) : void)
  Class: Eq_10
  DataType: void
  OrigDataType: void
T_11: (in al_17 : byte)
  Class: Eq_11
  DataType: (union (uint8 u0) (uint16 u1))
  OrigDataType: (union (uint8 u0) (uint16 u1))
T_12: (in 0x00 : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_13: (in ax_16 : word16)
  Class: Eq_13
  DataType: word16
  OrigDataType: word16
T_14: (in 0x0000 : word16)
  Class: Eq_13
  DataType: word16
  OrigDataType: word16
T_15: (in cl_11 : byte)
  Class: Eq_15
  DataType: uint8
  OrigDataType: uint8
T_16: (in 0x00 : byte)
  Class: Eq_15
  DataType: byte
  OrigDataType: byte
T_17: (in al_18 : byte)
  Class: Eq_17
  DataType: byte
  OrigDataType: byte
T_18: (in 0x01 : byte)
  Class: Eq_18
  DataType: uint8
  OrigDataType: uint8
T_19: (in al_17 >>u 0x01 : word16)
  Class: Eq_17
  DataType: uint16
  OrigDataType: uint16
T_20: (in __outb : ptr32)
  Class: Eq_20
  DataType: (ptr (fn T_22 (T_21, T_17)))
  OrigDataType: (ptr (fn T_22 (T_21, T_17)))
T_21: (in 0x03C9 : word16)
  Class: Eq_21
  DataType: word16
  OrigDataType: word16
T_22: (in __outb(0x03C9, al_18) : void)
  Class: Eq_22
  DataType: void
  OrigDataType: void
T_23: (in __outb : ptr32)
  Class: Eq_23
  DataType: (ptr (fn T_25 (T_24, T_17)))
  OrigDataType: (ptr (fn T_25 (T_24, T_17)))
T_24: (in 0x03C9 : word16)
  Class: Eq_24
  DataType: word16
  OrigDataType: word16
T_25: (in __outb(0x03C9, al_18) : void)
  Class: Eq_25
  DataType: void
  OrigDataType: void
T_26: (in 0x02 : byte)
  Class: Eq_26
  DataType: uint8
  OrigDataType: uint8
T_27: (in cl_11 >>u 0x02 : word16)
  Class: Eq_11
  DataType: uint16
  OrigDataType: uint16
T_28: (in __outb : ptr32)
  Class: Eq_28
  DataType: (ptr (fn T_30 (T_29, T_11)))
  OrigDataType: (ptr (fn T_30 (T_29, T_11)))
T_29: (in 0x03C9 : word16)
  Class: Eq_29
  DataType: word16
  OrigDataType: word16
T_30: (in __outb(0x03C9, al_17) : void)
  Class: Eq_30
  DataType: void
  OrigDataType: void
T_31: (in ax_255 : word16)
  Class: Eq_13
  DataType: word16
  OrigDataType: word16
T_32: (in DPB(ax_255, al_17, 0, 8) : word16)
  Class: Eq_13
  DataType: word16
  OrigDataType: word16
T_33: (in 0x01 : byte)
  Class: Eq_33
  DataType: byte
  OrigDataType: byte
T_34: (in cl_11 + 0x01 : byte)
  Class: Eq_15
  DataType: byte
  OrigDataType: byte
T_35: (in 0x00 : byte)
  Class: Eq_15
  DataType: byte
  OrigDataType: byte
T_36: (in cl_11 != 0x00 : bool)
  Class: Eq_36
  DataType: bool
  OrigDataType: bool
T_37: (in cx_27 : word16)
  Class: Eq_37
  DataType: word16
  OrigDataType: word16
T_38: (in 0x1520 : word16)
  Class: Eq_37
  DataType: word16
  OrigDataType: word16
T_39: (in cl_28 : byte)
  Class: Eq_39
  DataType: byte
  OrigDataType: byte
T_40: (in 0x20 : byte)
  Class: Eq_39
  DataType: byte
  OrigDataType: byte
T_41: (in di_29 : word16)
  Class: Eq_41
  DataType: word16
  OrigDataType: word16
T_42: (in 0x0200 : word16)
  Class: Eq_41
  DataType: word16
  OrigDataType: word16
T_43: (in ax_31 : word16)
  Class: Eq_43
  DataType: word16
  OrigDataType: word16
T_44: (in __inb : ptr32)
  Class: Eq_44
  DataType: (ptr (fn T_46 (T_45)))
  OrigDataType: (ptr (fn T_46 (T_45)))
T_45: (in 0x40 : byte)
  Class: Eq_45
  DataType: byte
  OrigDataType: byte
T_46: (in __inb(0x40) : byte)
  Class: Eq_46
  DataType: byte
  OrigDataType: byte
T_47: (in DPB(ax_255, __inb(0x40), 0, 8) : word16)
  Class: Eq_43
  DataType: word16
  OrigDataType: word16
T_48: (in 0x0001 : word16)
  Class: Eq_48
  DataType: word16
  OrigDataType: word16
T_49: (in cx_27 - 0x0001 : word16)
  Class: Eq_37
  DataType: word16
  OrigDataType: word16
T_50: (in fn0C00_01D5 : ptr32)
  Class: Eq_50
  DataType: (ptr (fn T_59 (T_43, T_41, T_39, T_57, T_58)))
  OrigDataType: (ptr (fn T_59 (T_43, T_41, T_39, T_57, T_58)))
T_51: (in signature of fn0C00_01D5 : void)
  Class: Eq_50
  DataType: 
  OrigDataType: 
T_52: (in ax : word16)
  Class: Eq_43
  DataType: uint16
  OrigDataType: uint16
T_53: (in di : word16)
  Class: Eq_41
  DataType: (memptr T_55 (struct (0 T_280 t0000) (2 T_290 t0002) (4 T_295 t0004) (6 T_299 t0006) (8 T_303 t0008) (A T_307 t000A)))
  OrigDataType: (memptr T_55 (struct (0 T_280 t0000) (2 T_290 t0002) (4 T_295 t0004) (6 T_299 t0006) (8 T_303 t0008) (A T_307 t000A)))
T_54: (in cl : byte)
  Class: Eq_39
  DataType: byte
  OrigDataType: byte
T_55: (in es : selector)
  Class: Eq_55
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_56: (in diOut : ptr16)
  Class: Eq_56
  DataType: ptr16
  OrigDataType: ptr16
T_57: (in es : selector)
  Class: Eq_55
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_58: (in out di_29 : ptr16)
  Class: Eq_56
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_59: (in fn0C00_01D5(ax_31, di_29, cl_28, es, out di_29) : word16)
  Class: Eq_43
  DataType: word16
  OrigDataType: word16
T_60: (in (byte) cx_27 : byte)
  Class: Eq_39
  DataType: byte
  OrigDataType: byte
T_61: (in 0x0000 : word16)
  Class: Eq_37
  DataType: word16
  OrigDataType: word16
T_62: (in cx_27 != 0x0000 : bool)
  Class: Eq_62
  DataType: bool
  OrigDataType: bool
T_63: (in al_251 : byte)
  Class: Eq_63
  DataType: byte
  OrigDataType: byte
T_64: (in 0xA000 : selector)
  Class: Eq_64
  DataType: (ptr (segment (0 (arr T_312 1) a0000)))
  OrigDataType: (ptr (segment (0 (arr T_312 1) a0000)))
T_65: (in di_64 : word16)
  Class: Eq_65
  DataType: (memptr T_64 (struct 0001 (0 T_63 t0000)))
  OrigDataType: (memptr T_64 (struct 0001 (0 T_63 t0000)))
T_66: (in 0x0000 : word16)
  Class: Eq_66
  DataType: word16
  OrigDataType: word16
T_67: (in di_64 + 0x0000 : word16)
  Class: Eq_67
  DataType: word16
  OrigDataType: word16
T_68: (in Mem80[0xA000:di_64 + 0x0000:byte] : byte)
  Class: Eq_63
  DataType: byte
  OrigDataType: byte
T_69: (in 0x0001 : word16)
  Class: Eq_69
  DataType: word16
  OrigDataType: word16
T_70: (in di_64 + 0x0001 : word16)
  Class: Eq_65
  DataType: word16
  OrigDataType: word16
T_71: (in 0x0000 : word16)
  Class: Eq_65
  DataType: word16
  OrigDataType: word16
T_72: (in di_64 != 0x0000 : bool)
  Class: Eq_72
  DataType: bool
  OrigDataType: bool
T_73: (in 0x00 : byte)
  Class: Eq_63
  DataType: byte
  OrigDataType: byte
T_74: (in al_72 : byte)
  Class: Eq_63
  DataType: bcu8
  OrigDataType: bcu8
T_75: (in 0x0000 : word16)
  Class: Eq_75
  DataType: word16
  OrigDataType: word16
T_76: (in di_64 + 0x0000 : word16)
  Class: Eq_76
  DataType: word16
  OrigDataType: word16
T_77: (in Mem0[0xA000:di_64 + 0x0000:byte] : byte)
  Class: Eq_63
  DataType: byte
  OrigDataType: byte
T_78: (in 0x19 : byte)
  Class: Eq_78
  DataType: byte
  OrigDataType: byte
T_79: (in al_72 - 0x19 : byte)
  Class: Eq_63
  DataType: byte
  OrigDataType: byte
T_80: (in 0x19 : byte)
  Class: Eq_63
  DataType: bcu8
  OrigDataType: bcu8
T_81: (in al_72 >=u 0x19 : bool)
  Class: Eq_81
  DataType: bool
  OrigDataType: bool
T_82: (in false : bool)
  Class: Eq_82
  DataType: bool
  OrigDataType: bool
T_83: (in cx_248 : word16)
  Class: Eq_83
  DataType: word16
  OrigDataType: word16
T_84: (in 0x0101 : word16)
  Class: Eq_83
  DataType: word16
  OrigDataType: word16
T_85: (in si_244 : word16)
  Class: Eq_41
  DataType: (memptr T_87 (struct 0002 (0 T_173 t0000)))
  OrigDataType: (memptr T_87 (struct 0002 (0 T_173 t0000)))
T_86: (in 0x0200 : word16)
  Class: Eq_41
  DataType: word16
  OrigDataType: word16
T_87: (in ds : selector)
  Class: Eq_87
  DataType: (ptr (segment (141 T_89 t0141) (15A T_233 t015A) (167 T_202 t0167) (200 (arr T_314) a0200)))
  OrigDataType: (ptr (segment (141 T_89 t0141) (15A T_233 t015A) (167 T_202 t0167) (200 (arr T_314) a0200)))
T_88: (in 0x0141 : word16)
  Class: Eq_88
  DataType: (memptr T_87 (struct (0 T_89 t0000)))
  OrigDataType: (memptr T_87 (struct (0 T_89 t0000)))
T_89: (in Mem80[ds:0x0141:word16] : word16)
  Class: Eq_89
  DataType: word16
  OrigDataType: word16
T_90: (in 0x0001 : word16)
  Class: Eq_90
  DataType: word16
  OrigDataType: word16
T_91: (in Mem80[ds:0x0141:word16] - 0x0001 : word16)
  Class: Eq_89
  DataType: word16
  OrigDataType: word16
T_92: (in Mem90[ds:0x0141:word16] : word16)
  Class: Eq_89
  DataType: word16
  OrigDataType: word16
T_93: (in cx_202 : word16)
  Class: Eq_93
  DataType: word16
  OrigDataType: word16
T_94: (in 0x0001 : word16)
  Class: Eq_94
  DataType: word16
  OrigDataType: word16
T_95: (in cx_248 - 0x0001 : word16)
  Class: Eq_93
  DataType: word16
  OrigDataType: word16
T_96: (in cl_203 : byte)
  Class: Eq_39
  DataType: byte
  OrigDataType: byte
T_97: (in (byte) cx_202 : byte)
  Class: Eq_39
  DataType: byte
  OrigDataType: byte
T_98: (in 0x0000 : word16)
  Class: Eq_93
  DataType: word16
  OrigDataType: word16
T_99: (in cx_202 == 0x0000 : bool)
  Class: Eq_99
  DataType: bool
  OrigDataType: bool
T_100: (in ax_108 : word16)
  Class: Eq_100
  DataType: (union (int16 u0) (cups16 u1))
  OrigDataType: (union (int16 u0) (cups16 u1))
T_101: (in si_107 : word16)
  Class: Eq_101
  DataType: (memptr T_87 (struct (0 T_107 t0000) (2 T_129 t0002) (4 T_100 t0004) (6 T_100 t0006) (8 T_130 t0008)))
  OrigDataType: (memptr T_87 (struct (0 T_107 t0000) (2 T_129 t0002) (4 T_100 t0004) (6 T_100 t0006) (8 T_130 t0008)))
T_102: (in 0x0004 : word16)
  Class: Eq_102
  DataType: word16
  OrigDataType: word16
T_103: (in si_107 + 0x0004 : word16)
  Class: Eq_103
  DataType: word16
  OrigDataType: word16
T_104: (in Mem213[ds:si_107 + 0x0004:word16] : word16)
  Class: Eq_100
  DataType: word16
  OrigDataType: word16
T_105: (in 0x0000 : word16)
  Class: Eq_105
  DataType: word16
  OrigDataType: word16
T_106: (in si_107 + 0x0000 : word16)
  Class: Eq_106
  DataType: word16
  OrigDataType: word16
T_107: (in Mem213[ds:si_107 + 0x0000:word16] : word16)
  Class: Eq_107
  DataType: word16
  OrigDataType: word16
T_108: (in 0x0001 : word16)
  Class: Eq_108
  DataType: word16
  OrigDataType: word16
T_109: (in Mem213[ds:si_107 + 0x0000:word16] + 0x0001 : word16)
  Class: Eq_107
  DataType: word16
  OrigDataType: word16
T_110: (in 0x0000 : word16)
  Class: Eq_110
  DataType: word16
  OrigDataType: word16
T_111: (in si_107 + 0x0000 : word16)
  Class: Eq_111
  DataType: word16
  OrigDataType: word16
T_112: (in Mem215[ds:si_107 + 0x0000:word16] : word16)
  Class: Eq_107
  DataType: word16
  OrigDataType: word16
T_113: (in 0x0000 : word16)
  Class: Eq_113
  DataType: word16
  OrigDataType: word16
T_114: (in si_107 + 0x0000 : word16)
  Class: Eq_114
  DataType: word16
  OrigDataType: word16
T_115: (in Mem215[ds:si_107 + 0x0000:word16] : word16)
  Class: Eq_107
  DataType: word16
  OrigDataType: word16
T_116: (in 0x0006 : word16)
  Class: Eq_116
  DataType: word16
  OrigDataType: word16
T_117: (in si_107 + 0x0006 : word16)
  Class: Eq_117
  DataType: word16
  OrigDataType: word16
T_118: (in Mem215[ds:si_107 + 0x0006:word16] : word16)
  Class: Eq_100
  DataType: word16
  OrigDataType: word16
T_119: (in Mem215[ds:si_107 + 0x0000:word16] + Mem215[ds:si_107 + 0x0006:word16] : word16)
  Class: Eq_100
  DataType: word16
  OrigDataType: word16
T_120: (in (byte) ax_108 : byte)
  Class: Eq_120
  DataType: byte
  OrigDataType: byte
T_121: (in al_109 : byte)
  Class: Eq_120
  DataType: byte
  OrigDataType: byte
T_122: (in 0x0C80 : word16)
  Class: Eq_100
  DataType: int16
  OrigDataType: int16
T_123: (in ax_108 >= 0x0C80 : bool)
  Class: Eq_123
  DataType: bool
  OrigDataType: bool
T_124: (in 0x0006 : word16)
  Class: Eq_124
  DataType: word16
  OrigDataType: word16
T_125: (in si_107 + 0x0006 : word16)
  Class: Eq_125
  DataType: word16
  OrigDataType: word16
T_126: (in Mem223[ds:si_107 + 0x0006:word16] : word16)
  Class: Eq_100
  DataType: word16
  OrigDataType: word16
T_127: (in 0x0002 : word16)
  Class: Eq_127
  DataType: word16
  OrigDataType: word16
T_128: (in si_107 + 0x0002 : word16)
  Class: Eq_128
  DataType: word16
  OrigDataType: word16
T_129: (in Mem223[ds:si_107 + 0x0002:word16] : word16)
  Class: Eq_100
  DataType: word16
  OrigDataType: word16
T_130: (in v23_228 : word16)
  Class: Eq_130
  DataType: cups16
  OrigDataType: cups16
T_131: (in 0x0008 : word16)
  Class: Eq_131
  DataType: word16
  OrigDataType: word16
T_132: (in si_107 + 0x0008 : word16)
  Class: Eq_132
  DataType: word16
  OrigDataType: word16
T_133: (in Mem223[ds:si_107 + 0x0008:word16] : word16)
  Class: Eq_130
  DataType: word16
  OrigDataType: word16
T_134: (in Mem223[ds:si_107 + 0x0008:word16] + ax_108 : word16)
  Class: Eq_130
  DataType: word16
  OrigDataType: word16
T_135: (in 0x0008 : word16)
  Class: Eq_135
  DataType: word16
  OrigDataType: word16
T_136: (in si_107 + 0x0008 : word16)
  Class: Eq_136
  DataType: word16
  OrigDataType: word16
T_137: (in Mem229[ds:si_107 + 0x0008:word16] : word16)
  Class: Eq_130
  DataType: word16
  OrigDataType: word16
T_138: (in (byte) ax_108 : byte)
  Class: Eq_120
  DataType: byte
  OrigDataType: byte
T_139: (in 0x0000 : word16)
  Class: Eq_130
  DataType: cups16
  OrigDataType: cups16
T_140: (in v23_228 >=u 0x0000 : bool)
  Class: Eq_140
  DataType: bool
  OrigDataType: bool
T_141: (in ax_236 : word16)
  Class: Eq_100
  DataType: (union (int16 u0) (uint16 u1))
  OrigDataType: (union (int16 u0) (uint16 u1))
T_142: (in 0x0006 : word16)
  Class: Eq_142
  DataType: word16
  OrigDataType: word16
T_143: (in si_107 + 0x0006 : word16)
  Class: Eq_143
  DataType: word16
  OrigDataType: word16
T_144: (in Mem229[ds:si_107 + 0x0006:word16] : word16)
  Class: Eq_100
  DataType: word16
  OrigDataType: word16
T_145: (in di_241 : word16)
  Class: Eq_145
  DataType: (memptr T_64 (struct (0 T_170 t0000)))
  OrigDataType: (memptr T_64 (struct (0 T_170 t0000)))
T_146: (in 0x0004 : word16)
  Class: Eq_146
  DataType: word16
  OrigDataType: word16
T_147: (in si_107 + 0x0004 : word16)
  Class: Eq_147
  DataType: word16
  OrigDataType: word16
T_148: (in Mem229[ds:si_107 + 0x0004:word16] : word16)
  Class: Eq_100
  DataType: uint16
  OrigDataType: uint16
T_149: (in 0x0004 : word16)
  Class: Eq_149
  DataType: uint16
  OrigDataType: uint16
T_150: (in Mem229[ds:si_107 + 0x0004:word16] >>u 0x0004 : word16)
  Class: Eq_150
  DataType: uint16
  OrigDataType: uint16
T_151: (in 0x0004 : word16)
  Class: Eq_151
  DataType: uint16
  OrigDataType: uint16
T_152: (in ax_236 >>u 0x0004 : word16)
  Class: Eq_152
  DataType: (union (int16 u0) (uint16 u1))
  OrigDataType: (union (int16 u0) (uint16 u1))
T_153: (in 0x0140 : word16)
  Class: Eq_153
  DataType: int16
  OrigDataType: int16
T_154: (in (ax_236 >>u 0x0004) *s 0x0140 : int16)
  Class: Eq_154
  DataType: int16
  OrigDataType: int16
T_155: (in (Mem229[ds:si_107 + 0x0004:word16] >>u 0x0004) + (ax_236 >>u 0x0004) *s 0x0140 : word16)
  Class: Eq_145
  DataType: word16
  OrigDataType: word16
T_156: (in 0x0008 : word16)
  Class: Eq_156
  DataType: word16
  OrigDataType: word16
T_157: (in si_107 + 0x0008 : word16)
  Class: Eq_157
  DataType: word16
  OrigDataType: word16
T_158: (in Mem229[ds:si_107 + 0x0008:word16] : word16)
  Class: Eq_130
  DataType: word16
  OrigDataType: word16
T_159: (in (byte) Mem229[ds:si_107 + 0x0008:word16] : byte)
  Class: Eq_120
  DataType: byte
  OrigDataType: byte
T_160: (in 0x000A : word16)
  Class: Eq_160
  DataType: word16
  OrigDataType: word16
T_161: (in si_107 + 0x000A : word16)
  Class: Eq_41
  DataType: word16
  OrigDataType: word16
T_162: (in 0x0000 : word16)
  Class: Eq_100
  DataType: int16
  OrigDataType: int16
T_163: (in ax_236 < 0x0000 : bool)
  Class: Eq_163
  DataType: bool
  OrigDataType: bool
T_164: (in 0x0001 : word16)
  Class: Eq_164
  DataType: word16
  OrigDataType: word16
T_165: (in cx_248 - 0x0001 : word16)
  Class: Eq_83
  DataType: word16
  OrigDataType: word16
T_166: (in 0x0000 : word16)
  Class: Eq_83
  DataType: word16
  OrigDataType: word16
T_167: (in cx_248 != 0x0000 : bool)
  Class: Eq_167
  DataType: bool
  OrigDataType: bool
T_168: (in 0x0000 : word16)
  Class: Eq_168
  DataType: word16
  OrigDataType: word16
T_169: (in di_241 + 0x0000 : word16)
  Class: Eq_169
  DataType: word16
  OrigDataType: word16
T_170: (in Mem250[0xA000:di_241 + 0x0000:byte] : byte)
  Class: Eq_120
  DataType: byte
  OrigDataType: byte
T_171: (in 0x0000 : word16)
  Class: Eq_171
  DataType: word16
  OrigDataType: word16
T_172: (in si_244 + 0x0000 : word16)
  Class: Eq_172
  DataType: word16
  OrigDataType: word16
T_173: (in Mem80[ds:si_244 + 0x0000:word16] : word16)
  Class: Eq_173
  DataType: word16
  OrigDataType: word16
T_174: (in 0x0000 : word16)
  Class: Eq_174
  DataType: word16
  OrigDataType: word16
T_175: (in si_244 + 0x0000 : word16)
  Class: Eq_175
  DataType: word16
  OrigDataType: word16
T_176: (in Mem105[ds:si_244 + 0x0000:word16] : word16)
  Class: Eq_173
  DataType: word16
  OrigDataType: word16
T_177: (in 0x0002 : word16)
  Class: Eq_177
  DataType: word16
  OrigDataType: word16
T_178: (in si_244 + 0x0002 : word16)
  Class: Eq_101
  DataType: word16
  OrigDataType: word16
T_179: (in 0x0000 : word16)
  Class: Eq_179
  DataType: word16
  OrigDataType: word16
T_180: (in si_244 + 0x0000 : word16)
  Class: Eq_180
  DataType: word16
  OrigDataType: word16
T_181: (in Mem105[ds:si_244 + 0x0000:word16] : word16)
  Class: Eq_173
  DataType: word16
  OrigDataType: word16
T_182: (in 0x0004 : word16)
  Class: Eq_182
  DataType: word16
  OrigDataType: word16
T_183: (in si_107 + 0x0004 : word16)
  Class: Eq_183
  DataType: word16
  OrigDataType: word16
T_184: (in Mem105[ds:si_107 + 0x0004:word16] : word16)
  Class: Eq_100
  DataType: word16
  OrigDataType: word16
T_185: (in Mem105[ds:si_244 + 0x0000:word16] + Mem105[ds:si_107 + 0x0004:word16] : word16)
  Class: Eq_100
  DataType: word16
  OrigDataType: word16
T_186: (in (byte) ax_108 : byte)
  Class: Eq_120
  DataType: byte
  OrigDataType: byte
T_187: (in 0x1400 : word16)
  Class: Eq_100
  DataType: cups16
  OrigDataType: cups16
T_188: (in ax_108 >=u 0x1400 : bool)
  Class: Eq_188
  DataType: bool
  OrigDataType: bool
T_189: (in msdos_direct_console_output : ptr32)
  Class: Eq_189
  DataType: (ptr (fn T_193 (T_192)))
  OrigDataType: (ptr (fn T_193 (T_192)))
T_190: (in signature of msdos_direct_console_output : void)
  Class: Eq_189
  DataType: 
  OrigDataType: 
T_191: (in dl : byte)
  Class: Eq_191
  DataType: byte
  OrigDataType: byte
T_192: (in 0xFF : byte)
  Class: Eq_191
  DataType: byte
  OrigDataType: byte
T_193: (in msdos_direct_console_output(0xFF) : void)
  Class: Eq_193
  DataType: void
  OrigDataType: void
T_194: (in al_142 : byte)
  Class: Eq_194
  DataType: byte
  OrigDataType: byte
T_195: (in 0x77 : byte)
  Class: Eq_195
  DataType: byte
  OrigDataType: byte
T_196: (in al_109 - 0x77 : byte)
  Class: Eq_194
  DataType: byte
  OrigDataType: byte
T_197: (in 0x00 : byte)
  Class: Eq_194
  DataType: byte
  OrigDataType: byte
T_198: (in al_142 != 0x00 : bool)
  Class: Eq_198
  DataType: bool
  OrigDataType: bool
T_199: (in 0xFC : byte)
  Class: Eq_194
  DataType: byte
  OrigDataType: byte
T_200: (in al_142 != 0xFC : bool)
  Class: Eq_200
  DataType: bool
  OrigDataType: bool
T_201: (in 0x0167 : word16)
  Class: Eq_201
  DataType: (memptr T_87 (struct (0 T_202 t0000)))
  OrigDataType: (memptr T_87 (struct (0 T_202 t0000)))
T_202: (in Mem105[ds:0x0167:byte] : byte)
  Class: Eq_202
  DataType: byte
  OrigDataType: byte
T_203: (in 0x01 : byte)
  Class: Eq_203
  DataType: byte
  OrigDataType: byte
T_204: (in Mem105[ds:0x0167:byte] - 0x01 : byte)
  Class: Eq_202
  DataType: byte
  OrigDataType: byte
T_205: (in 0x0167 : word16)
  Class: Eq_205
  DataType: (memptr T_87 (struct (0 T_206 t0000)))
  OrigDataType: (memptr T_87 (struct (0 T_206 t0000)))
T_206: (in Mem193[ds:0x0167:byte] : byte)
  Class: Eq_202
  DataType: byte
  OrigDataType: byte
T_207: (in 0xEA : byte)
  Class: Eq_194
  DataType: byte
  OrigDataType: byte
T_208: (in al_142 != 0xEA : bool)
  Class: Eq_208
  DataType: bool
  OrigDataType: bool
T_209: (in 0x0167 : word16)
  Class: Eq_209
  DataType: (memptr T_87 (struct (0 T_210 t0000)))
  OrigDataType: (memptr T_87 (struct (0 T_210 t0000)))
T_210: (in Mem105[ds:0x0167:byte] : byte)
  Class: Eq_202
  DataType: byte
  OrigDataType: byte
T_211: (in 0x01 : byte)
  Class: Eq_211
  DataType: byte
  OrigDataType: byte
T_212: (in Mem105[ds:0x0167:byte] + 0x01 : byte)
  Class: Eq_202
  DataType: byte
  OrigDataType: byte
T_213: (in 0x0167 : word16)
  Class: Eq_213
  DataType: (memptr T_87 (struct (0 T_214 t0000)))
  OrigDataType: (memptr T_87 (struct (0 T_214 t0000)))
T_214: (in Mem190[ds:0x0167:byte] : byte)
  Class: Eq_202
  DataType: byte
  OrigDataType: byte
T_215: (in 0x0153 : word16)
  Class: Eq_215
  DataType: word16
  OrigDataType: word16
T_216: (in ss : selector)
  Class: Eq_216
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_217: (in fp : ptr16)
  Class: Eq_217
  DataType: (union (ptr16 u0) ((memptr T_216 (struct (FFFFFFFE T_220 tFFFFFFFE))) u1))
  OrigDataType: (union (ptr16 u0) ((memptr T_216 (struct (FFFFFFFE T_220 tFFFFFFFE))) u1))
T_218: (in 0x0002 : word16)
  Class: Eq_218
  DataType: word16
  OrigDataType: word16
T_219: (in fp - 0x0002 : word16)
  Class: Eq_219
  DataType: word16
  OrigDataType: word16
T_220: (in Mem207[ss:fp - 0x0002:word16] : word16)
  Class: Eq_215
  DataType: word16
  OrigDataType: word16
T_221: (in ax_210 : word16)
  Class: Eq_43
  DataType: word16
  OrigDataType: word16
T_222: (in __inb : ptr32)
  Class: Eq_222
  DataType: (ptr (fn T_224 (T_223)))
  OrigDataType: (ptr (fn T_224 (T_223)))
T_223: (in 0x40 : byte)
  Class: Eq_223
  DataType: byte
  OrigDataType: byte
T_224: (in __inb(0x40) : byte)
  Class: Eq_224
  DataType: byte
  OrigDataType: byte
T_225: (in DPB(ax_108, __inb(0x40), 0, 8) : word16)
  Class: Eq_43
  DataType: word16
  OrigDataType: word16
T_226: (in di_211 : word16)
  Class: Eq_226
  DataType: word16
  OrigDataType: word16
T_227: (in fn0C00_01D5 : ptr32)
  Class: Eq_50
  DataType: (ptr (fn T_229 (T_221, T_85, T_96, T_57, T_228)))
  OrigDataType: (ptr (fn T_229 (T_221, T_85, T_96, T_57, T_228)))
T_228: (in out di_211 : ptr16)
  Class: Eq_56
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_229: (in fn0C00_01D5(ax_210, si_244, cl_203, es, out di_211) : word16)
  Class: Eq_229
  DataType: word16
  OrigDataType: word16
T_230: (in 0xED : byte)
  Class: Eq_194
  DataType: byte
  OrigDataType: byte
T_231: (in al_142 != 0xED : bool)
  Class: Eq_231
  DataType: bool
  OrigDataType: bool
T_232: (in 0x015A : word16)
  Class: Eq_232
  DataType: (memptr T_87 (struct (0 T_233 t0000)))
  OrigDataType: (memptr T_87 (struct (0 T_233 t0000)))
T_233: (in Mem105[ds:0x015A:byte] : byte)
  Class: Eq_233
  DataType: byte
  OrigDataType: byte
T_234: (in 0x01 : byte)
  Class: Eq_234
  DataType: byte
  OrigDataType: byte
T_235: (in Mem105[ds:0x015A:byte] - 0x01 : byte)
  Class: Eq_233
  DataType: byte
  OrigDataType: byte
T_236: (in 0x015A : word16)
  Class: Eq_236
  DataType: (memptr T_87 (struct (0 T_237 t0000)))
  OrigDataType: (memptr T_87 (struct (0 T_237 t0000)))
T_237: (in Mem187[ds:0x015A:byte] : byte)
  Class: Eq_233
  DataType: byte
  OrigDataType: byte
T_238: (in 0xB4 : byte)
  Class: Eq_194
  DataType: byte
  OrigDataType: byte
T_239: (in al_142 != 0xB4 : bool)
  Class: Eq_239
  DataType: bool
  OrigDataType: bool
T_240: (in 0x015A : word16)
  Class: Eq_240
  DataType: (memptr T_87 (struct (0 T_241 t0000)))
  OrigDataType: (memptr T_87 (struct (0 T_241 t0000)))
T_241: (in Mem105[ds:0x015A:byte] : byte)
  Class: Eq_233
  DataType: byte
  OrigDataType: byte
T_242: (in 0x01 : byte)
  Class: Eq_242
  DataType: byte
  OrigDataType: byte
T_243: (in Mem105[ds:0x015A:byte] + 0x01 : byte)
  Class: Eq_233
  DataType: byte
  OrigDataType: byte
T_244: (in 0x015A : word16)
  Class: Eq_244
  DataType: (memptr T_87 (struct (0 T_245 t0000)))
  OrigDataType: (memptr T_87 (struct (0 T_245 t0000)))
T_245: (in Mem184[ds:0x015A:byte] : byte)
  Class: Eq_233
  DataType: byte
  OrigDataType: byte
T_246: (in 0xB6 : byte)
  Class: Eq_194
  DataType: byte
  OrigDataType: byte
T_247: (in al_142 != 0xB6 : bool)
  Class: Eq_247
  DataType: bool
  OrigDataType: bool
T_248: (in 0x0141 : word16)
  Class: Eq_248
  DataType: (memptr T_87 (struct (0 T_249 t0000)))
  OrigDataType: (memptr T_87 (struct (0 T_249 t0000)))
T_249: (in Mem105[ds:0x0141:word16] : word16)
  Class: Eq_89
  DataType: word16
  OrigDataType: word16
T_250: (in 0x0001 : word16)
  Class: Eq_250
  DataType: word16
  OrigDataType: word16
T_251: (in Mem105[ds:0x0141:word16] + 0x0001 : word16)
  Class: Eq_89
  DataType: word16
  OrigDataType: word16
T_252: (in 0x0141 : word16)
  Class: Eq_252
  DataType: (memptr T_87 (struct (0 T_253 t0000)))
  OrigDataType: (memptr T_87 (struct (0 T_253 t0000)))
T_253: (in Mem181[ds:0x0141:word16] : word16)
  Class: Eq_89
  DataType: word16
  OrigDataType: word16
T_254: (in 0xA4 : byte)
  Class: Eq_194
  DataType: byte
  OrigDataType: byte
T_255: (in al_142 != 0xA4 : bool)
  Class: Eq_255
  DataType: bool
  OrigDataType: bool
T_256: (in 0x0141 : word16)
  Class: Eq_256
  DataType: (memptr T_87 (struct (0 T_257 t0000)))
  OrigDataType: (memptr T_87 (struct (0 T_257 t0000)))
T_257: (in Mem105[ds:0x0141:word16] : word16)
  Class: Eq_89
  DataType: word16
  OrigDataType: word16
T_258: (in 0x0001 : word16)
  Class: Eq_258
  DataType: word16
  OrigDataType: word16
T_259: (in Mem105[ds:0x0141:word16] - 0x0001 : word16)
  Class: Eq_89
  DataType: word16
  OrigDataType: word16
T_260: (in 0x0141 : word16)
  Class: Eq_260
  DataType: (memptr T_87 (struct (0 T_261 t0000)))
  OrigDataType: (memptr T_87 (struct (0 T_261 t0000)))
T_261: (in Mem178[ds:0x0141:word16] : word16)
  Class: Eq_89
  DataType: word16
  OrigDataType: word16
T_262: (in 0x0000 : word16)
  Class: Eq_65
  DataType: word16
  OrigDataType: word16
T_263: (in ax_7 : word16)
  Class: Eq_263
  DataType: word16
  OrigDataType: word16
T_264: (in 0x0025 : word16)
  Class: Eq_264
  DataType: uint16
  OrigDataType: uint16
T_265: (in ax *u 0x0025 : uint32)
  Class: Eq_265
  DataType: uint32
  OrigDataType: uint32
T_266: (in (word16) (ax *u 0x0025) : word16)
  Class: Eq_266
  DataType: word16
  OrigDataType: word16
T_267: (in cx : word16)
  Class: Eq_267
  DataType: word16
  OrigDataType: word16
T_268: (in (word16) (ax *u 0x0025) + cx : word16)
  Class: Eq_263
  DataType: word16
  OrigDataType: word16
T_269: (in ax_11 : word16)
  Class: Eq_269
  DataType: word16
  OrigDataType: word16
T_270: (in (byte) ax_7 : byte)
  Class: Eq_270
  DataType: byte
  OrigDataType: byte
T_271: (in (int16) (byte) ax_7 : int16)
  Class: Eq_269
  DataType: int16
  OrigDataType: int16
T_272: (in (byte) ax_11 : byte)
  Class: Eq_272
  DataType: byte
  OrigDataType: byte
T_273: (in 0x1F : byte)
  Class: Eq_273
  DataType: byte
  OrigDataType: byte
T_274: (in (byte) ax_11 & 0x1F : byte)
  Class: Eq_274
  DataType: byte
  OrigDataType: byte
T_275: (in SLICE(ax_11, byte, 8) : byte)
  Class: Eq_275
  DataType: byte
  OrigDataType: byte
T_276: (in (byte) ax_11 & 0x1F ^ SLICE(ax_11, byte, 8) : byte)
  Class: Eq_276
  DataType: byte
  OrigDataType: byte
T_277: (in DPB(ax_11, (byte) ax_11 & 0x1F ^ SLICE(ax_11, byte, 8), 0, 8) : word16)
  Class: Eq_277
  DataType: word16
  OrigDataType: word16
T_278: (in 0x0000 : word16)
  Class: Eq_278
  DataType: word16
  OrigDataType: word16
T_279: (in di + 0x0000 : word16)
  Class: Eq_279
  DataType: word16
  OrigDataType: word16
T_280: (in Mem17[es:di + 0x0000:word16] : word16)
  Class: Eq_277
  DataType: word16
  OrigDataType: word16
T_281: (in ax_30 : word16)
  Class: Eq_281
  DataType: word16
  OrigDataType: word16
T_282: (in SLICE(ax_7, byte, 8) : byte)
  Class: Eq_282
  DataType: byte
  OrigDataType: byte
T_283: (in 0xF0 : byte)
  Class: Eq_283
  DataType: byte
  OrigDataType: byte
T_284: (in SLICE(ax_7, byte, 8) | 0xF0 : byte)
  Class: Eq_284
  DataType: byte
  OrigDataType: byte
T_285: (in 0x40 : byte)
  Class: Eq_285
  DataType: byte
  OrigDataType: byte
T_286: (in (SLICE(ax_7, byte, 8) | 0xF0) - 0x40 : byte)
  Class: Eq_286
  DataType: byte
  OrigDataType: byte
T_287: (in (int16) ((SLICE(ax_7, byte, 8) | 0xF0) - 0x40) : int16)
  Class: Eq_281
  DataType: int16
  OrigDataType: int16
T_288: (in 0x0002 : word16)
  Class: Eq_288
  DataType: word16
  OrigDataType: word16
T_289: (in di + 0x0002 : word16)
  Class: Eq_289
  DataType: word16
  OrigDataType: word16
T_290: (in Mem31[es:di + 0x0002:word16] : word16)
  Class: Eq_281
  DataType: word16
  OrigDataType: word16
T_291: (in 0xFF : byte)
  Class: Eq_291
  DataType: byte
  OrigDataType: byte
T_292: (in DPB(ax_30, 0xFF, 0, 8) : word16)
  Class: Eq_292
  DataType: word16
  OrigDataType: word16
T_293: (in 0x0004 : word16)
  Class: Eq_293
  DataType: word16
  OrigDataType: word16
T_294: (in di + 0x0004 : word16)
  Class: Eq_294
  DataType: word16
  OrigDataType: word16
T_295: (in Mem35[es:di + 0x0004:word16] : word16)
  Class: Eq_292
  DataType: word16
  OrigDataType: word16
T_296: (in 0x0A00 : word16)
  Class: Eq_296
  DataType: word16
  OrigDataType: word16
T_297: (in 0x0006 : word16)
  Class: Eq_297
  DataType: word16
  OrigDataType: word16
T_298: (in di + 0x0006 : word16)
  Class: Eq_298
  DataType: word16
  OrigDataType: word16
T_299: (in Mem38[es:di + 0x0006:word16] : word16)
  Class: Eq_296
  DataType: word16
  OrigDataType: word16
T_300: (in 0x0C80 : word16)
  Class: Eq_300
  DataType: word16
  OrigDataType: word16
T_301: (in 0x0008 : word16)
  Class: Eq_301
  DataType: word16
  OrigDataType: word16
T_302: (in di + 0x0008 : word16)
  Class: Eq_302
  DataType: word16
  OrigDataType: word16
T_303: (in Mem41[es:di + 0x0008:word16] : word16)
  Class: Eq_300
  DataType: word16
  OrigDataType: word16
T_304: (in 0x00FF : word16)
  Class: Eq_304
  DataType: word16
  OrigDataType: word16
T_305: (in 0x000A : word16)
  Class: Eq_305
  DataType: word16
  OrigDataType: word16
T_306: (in di + 0x000A : word16)
  Class: Eq_306
  DataType: word16
  OrigDataType: word16
T_307: (in Mem44[es:di + 0x000A:word16] : word16)
  Class: Eq_304
  DataType: word16
  OrigDataType: word16
T_308: (in di_45 : word16)
  Class: Eq_308
  DataType: word16
  OrigDataType: word16
T_309: (in 0x000C : word16)
  Class: Eq_309
  DataType: word16
  OrigDataType: word16
T_310: (in di + 0x000C : word16)
  Class: Eq_310
  DataType: word16
  OrigDataType: word16
T_311: (in *diOut : word16)
  Class: Eq_310
  DataType: 
  OrigDataType: 
T_312:
  Class: Eq_312
  DataType: 
  OrigDataType: (struct 0001 (0 T_68 t0000))
T_313:
  Class: Eq_312
  DataType: 
  OrigDataType: (struct 0001 (0 T_77 t0000))
T_314:
  Class: Eq_314
  DataType: 
  OrigDataType: (struct 0002 (0 T_173 t0000))
T_315:
  Class: Eq_314
  DataType: 
  OrigDataType: (struct 0002 (0 T_176 t0000))
T_316:
  Class: Eq_314
  DataType: 
  OrigDataType: (struct 0002 (0 T_181 t0000))
*/
