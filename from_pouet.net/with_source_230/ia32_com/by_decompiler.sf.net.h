// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_230/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_92) ptrFFFA0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
	T_175 (in bios_video_set_mode : ptr32)
Eq_7: (fn void (word16, byte))
	T_7 (in __outb : ptr32)
Eq_11: (fn void (word16, byte))
	T_11 (in __outb : ptr32)
Eq_13: (fn byte (word16))
	T_13 (in __inb : ptr32)
Eq_36: (fn void (word16, byte))
	T_36 (in __outb : ptr32)
Eq_37: (segment "Eq_37" (1A0 (arr byte) a01A0) (1C0 byte b01C0) (1C1 byte b01C1))
	T_37 (in ds : (ptr Eq_37))
Eq_58: (fn void (word16, byte))
	T_58 (in __outb : ptr32)
Eq_63: (fn void (word16, byte))
	T_63 (in __outb : ptr32)
Eq_65: (fn void (word16, byte))
	T_65 (in __outb : ptr32)
Eq_67: (fn void (word16, byte))
	T_67 (in __outb : ptr32)
Eq_92: (segment "Eq_92" (0 byte b0000) (1 byte b0001))
	T_92 (in 0xA000 : selector)
Eq_159: (fn byte (word16))
	T_159 (in __inb : ptr32)
Eq_166: (fn byte (byte))
	T_166 (in __inb : ptr32)
Eq_178: (fn void (byte))
	T_178 (in msdos_terminate : ptr32)
	T_179 (in signature of msdos_terminate : void)
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr Eq_1)
  OrigDataType: (ptr (struct "Globals"))
T_2: (in bios_video_set_mode : ptr32)
  Class: Eq_2
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (fn T_6 (T_5)))
T_3: (in signature of bios_video_set_mode : void)
  Class: Eq_2
  DataType: (ptr Eq_2)
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
  DataType: (ptr Eq_7)
  OrigDataType: (ptr (fn T_10 (T_8, T_9)))
T_8: (in 0x03D4 : word16)
  Class: Eq_8
  DataType: word16
  OrigDataType: word16
T_9: (in 0x11 : byte)
  Class: Eq_9
  DataType: byte
  OrigDataType: byte
T_10: (in __outb(0x03D4, 0x11) : void)
  Class: Eq_10
  DataType: void
  OrigDataType: void
T_11: (in __outb : ptr32)
  Class: Eq_11
  DataType: (ptr Eq_11)
  OrigDataType: (ptr (fn T_18 (T_12, T_17)))
T_12: (in 0x03D5 : word16)
  Class: Eq_12
  DataType: word16
  OrigDataType: word16
T_13: (in __inb : ptr32)
  Class: Eq_13
  DataType: (ptr Eq_13)
  OrigDataType: (ptr (fn T_15 (T_14)))
T_14: (in 0x03D5 : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_15: (in __inb(0x03D5) : byte)
  Class: Eq_15
  DataType: byte
  OrigDataType: byte
T_16: (in 0x7F : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_17: (in __inb(0x03D5) & 0x7F : byte)
  Class: Eq_17
  DataType: byte
  OrigDataType: byte
T_18: (in __outb(0x03D5, __inb(0x03D5) & 0x7F) : void)
  Class: Eq_18
  DataType: void
  OrigDataType: void
T_19: (in dx_15 : word16)
  Class: Eq_19
  DataType: word16
  OrigDataType: word16
T_20: (in 0x03D5 : word16)
  Class: Eq_19
  DataType: word16
  OrigDataType: word16
T_21: (in si_12 : (memptr (ptr Eq_37) byte))
  Class: Eq_21
  DataType: (memptr (ptr Eq_37) byte)
  OrigDataType: (memptr T_37 (struct 0001 (0 T_47 t0000)))
T_22: (in 0x01A0 : word16)
  Class: Eq_21
  DataType: (memptr (ptr Eq_37) byte)
  OrigDataType: word16
T_23: (in ah_178 : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_24: (in 0x00 : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_25: (in dx_35 : word16)
  Class: Eq_25
  DataType: word16
  OrigDataType: word16
T_26: (in 0xC8 : byte)
  Class: Eq_26
  DataType: byte
  OrigDataType: byte
T_27: (in DPB(dx_15, 0xC8, 0, 8) : word16)
  Class: Eq_25
  DataType: word16
  OrigDataType: word16
T_28: (in cl_36 : byte)
  Class: Eq_28
  DataType: byte
  OrigDataType: byte
T_29: (in 0x7F : byte)
  Class: Eq_28
  DataType: byte
  OrigDataType: byte
T_30: (in cx_38 : word16)
  Class: Eq_30
  DataType: word16
  OrigDataType: word16
T_31: (in cx : word16)
  Class: Eq_31
  DataType: word16
  OrigDataType: word16
T_32: (in 0x7F : byte)
  Class: Eq_32
  DataType: byte
  OrigDataType: byte
T_33: (in DPB(cx, 0x7F, 0, 8) : word16)
  Class: Eq_30
  DataType: word16
  OrigDataType: word16
T_34: (in al_19 : byte)
  Class: Eq_34
  DataType: byte
  OrigDataType: byte
T_35: (in DPB(dx_15, al_19, 0, 8) : word16)
  Class: Eq_19
  DataType: word16
  OrigDataType: word16
T_36: (in __outb : ptr32)
  Class: Eq_36
  DataType: (ptr Eq_36)
  OrigDataType: (ptr (fn T_42 (T_19, T_41)))
T_37: (in ds : (ptr Eq_37))
  Class: Eq_37
  DataType: (ptr Eq_37)
  OrigDataType: (ptr (segment (1A0 (arr T_183) a01A0) (1C0 T_103 t01C0) (1C1 T_142 t01C1)))
T_38: (in si_20 : (memptr (ptr Eq_37) byte))
  Class: Eq_38
  DataType: (memptr (ptr Eq_37) byte)
  OrigDataType: (memptr T_37 (struct (0 T_41 t0000)))
T_39: (in 0x0000 : word16)
  Class: Eq_39
  DataType: word16
  OrigDataType: word16
T_40: (in si_20 + 0x0000 : word16)
  Class: Eq_40
  DataType: word16
  OrigDataType: word16
T_41: (in Mem0[ds:si_20 + 0x0000:byte] : byte)
  Class: Eq_41
  DataType: byte
  OrigDataType: byte
T_42: (in __outb(dx_15, ds->*si_20) : void)
  Class: Eq_42
  DataType: void
  OrigDataType: void
T_43: (in 0x0001 : word16)
  Class: Eq_43
  DataType: word16
  OrigDataType: word16
T_44: (in si_20 + 0x0001 : word16)
  Class: Eq_21
  DataType: (memptr (ptr Eq_37) byte)
  OrigDataType: word16
T_45: (in 0x0000 : word16)
  Class: Eq_45
  DataType: word16
  OrigDataType: word16
T_46: (in si_12 + 0x0000 : word16)
  Class: Eq_46
  DataType: word16
  OrigDataType: word16
T_47: (in Mem0[ds:si_12 + 0x0000:byte] : byte)
  Class: Eq_34
  DataType: byte
  OrigDataType: byte
T_48: (in 0x0001 : word16)
  Class: Eq_48
  DataType: word16
  OrigDataType: word16
T_49: (in si_12 + 0x0001 : word16)
  Class: Eq_38
  DataType: (memptr (ptr Eq_37) byte)
  OrigDataType: word16
T_50: (in 0x00 : byte)
  Class: Eq_34
  DataType: byte
  OrigDataType: byte
T_51: (in al_19 == 0x00 : bool)
  Class: Eq_51
  DataType: bool
  OrigDataType: bool
T_52: (in 0x40 : byte)
  Class: Eq_52
  DataType: byte
  OrigDataType: byte
T_53: (in cl_36 & 0x40 : byte)
  Class: Eq_53
  DataType: byte
  OrigDataType: byte
T_54: (in 0x00 : byte)
  Class: Eq_53
  DataType: byte
  OrigDataType: byte
T_55: (in (cl_36 & 0x40) == 0x00 : bool)
  Class: Eq_55
  DataType: bool
  OrigDataType: bool
T_56: (in bh_51 : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_57: (in bl_177 : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_58: (in __outb : ptr32)
  Class: Eq_58
  DataType: (ptr Eq_58)
  OrigDataType: (ptr (fn T_59 (T_25, T_28)))
T_59: (in __outb(dx_35, cl_36) : void)
  Class: Eq_59
  DataType: void
  OrigDataType: void
T_60: (in dx_64 : word16)
  Class: Eq_60
  DataType: word16
  OrigDataType: word16
T_61: (in 0x0001 : word16)
  Class: Eq_61
  DataType: word16
  OrigDataType: word16
T_62: (in dx_35 + 0x0001 : word16)
  Class: Eq_60
  DataType: word16
  OrigDataType: word16
T_63: (in __outb : ptr32)
  Class: Eq_63
  DataType: (ptr Eq_63)
  OrigDataType: (ptr (fn T_64 (T_60, T_57)))
T_64: (in __outb(dx_64, bl_177) : void)
  Class: Eq_64
  DataType: void
  OrigDataType: void
T_65: (in __outb : ptr32)
  Class: Eq_65
  DataType: (ptr Eq_65)
  OrigDataType: (ptr (fn T_66 (T_60, T_57)))
T_66: (in __outb(dx_64, bl_177) : void)
  Class: Eq_66
  DataType: void
  OrigDataType: void
T_67: (in __outb : ptr32)
  Class: Eq_67
  DataType: (ptr Eq_67)
  OrigDataType: (ptr (fn T_68 (T_60, T_23)))
T_68: (in __outb(dx_64, ah_178) : void)
  Class: Eq_68
  DataType: void
  OrigDataType: void
T_69: (in 0x0001 : word16)
  Class: Eq_69
  DataType: word16
  OrigDataType: word16
T_70: (in cx_38 - 0x0001 : word16)
  Class: Eq_30
  DataType: word16
  OrigDataType: word16
T_71: (in al_100 : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_72: (in 0x0001 : word16)
  Class: Eq_72
  DataType: word16
  OrigDataType: word16
T_73: (in dx_64 - 0x0001 : word16)
  Class: Eq_25
  DataType: word16
  OrigDataType: word16
T_74: (in (byte) cx_38 : byte)
  Class: Eq_28
  DataType: byte
  OrigDataType: byte
T_75: (in 0x0000 : word16)
  Class: Eq_30
  DataType: word16
  OrigDataType: word16
T_76: (in cx_38 != 0x0000 : bool)
  Class: Eq_76
  DataType: bool
  OrigDataType: bool
T_77: (in 0x1F : byte)
  Class: Eq_77
  DataType: byte
  OrigDataType: byte
T_78: (in cl_36 & 0x1F : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_79: (in 0x1F : byte)
  Class: Eq_79
  DataType: byte
  OrigDataType: byte
T_80: (in 0x1F - bl_177 : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_81: (in 0x20 : byte)
  Class: Eq_81
  DataType: byte
  OrigDataType: byte
T_82: (in cl_36 & 0x20 : byte)
  Class: Eq_82
  DataType: byte
  OrigDataType: byte
T_83: (in 0x00 : byte)
  Class: Eq_82
  DataType: byte
  OrigDataType: byte
T_84: (in (cl_36 & 0x20) == 0x00 : bool)
  Class: Eq_84
  DataType: bool
  OrigDataType: bool
T_85: (in dx_80 : word16)
  Class: Eq_85
  DataType: word16
  OrigDataType: word16
T_86: (in dx_64 - 0x0001 : word16)
  Class: Eq_86
  DataType: word16
  OrigDataType: word16
T_87: (in 0xDA : byte)
  Class: Eq_87
  DataType: byte
  OrigDataType: byte
T_88: (in DPB(dx_64 - 0x0001, 0xDA, 0, 8) : word16)
  Class: Eq_85
  DataType: word16
  OrigDataType: word16
T_89: (in al_108 : byte)
  Class: Eq_89
  DataType: byte
  OrigDataType: byte
T_90: (in 0x3F : byte)
  Class: Eq_90
  DataType: byte
  OrigDataType: byte
T_91: (in al_100 & 0x3F : byte)
  Class: Eq_89
  DataType: byte
  OrigDataType: byte
T_92: (in 0xA000 : selector)
  Class: Eq_92
  DataType: (ptr Eq_92)
  OrigDataType: (ptr (segment))
T_93: (in di_104 : (memptr (ptr Eq_92) byte))
  Class: Eq_93
  DataType: (memptr (ptr Eq_92) byte)
  OrigDataType: (memptr T_92 (struct 0001 (0 T_96 t0000)))
T_94: (in 0x0000 : word16)
  Class: Eq_94
  DataType: word16
  OrigDataType: word16
T_95: (in di_104 + 0x0000 : word16)
  Class: Eq_95
  DataType: word16
  OrigDataType: word16
T_96: (in Mem109[0xA000:di_104 + 0x0000:byte] : byte)
  Class: Eq_89
  DataType: byte
  OrigDataType: byte
T_97: (in di_110 : word16)
  Class: Eq_97
  DataType: word16
  OrigDataType: word16
T_98: (in 0x0001 : word16)
  Class: Eq_98
  DataType: word16
  OrigDataType: word16
T_99: (in di_104 + 0x0001 : word16)
  Class: Eq_97
  DataType: word16
  OrigDataType: word16
T_100: (in 0x0001 : word16)
  Class: Eq_100
  DataType: word16
  OrigDataType: word16
T_101: (in di_110 + 0x0001 : word16)
  Class: Eq_93
  DataType: (memptr (ptr Eq_92) byte)
  OrigDataType: word16
T_102: (in 0x01C0 : word16)
  Class: Eq_102
  DataType: (memptr (ptr Eq_37) byte)
  OrigDataType: (memptr T_37 (struct (0 T_103 t0000)))
T_103: (in Mem109[ds:0x01C0:byte] : byte)
  Class: Eq_103
  DataType: byte
  OrigDataType: byte
T_104: (in al_108 + ds->b01C0 : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_105: (in cl_101 : byte)
  Class: Eq_105
  DataType: byte
  OrigDataType: byte
T_106: (in 0x01 : byte)
  Class: Eq_106
  DataType: byte
  OrigDataType: byte
T_107: (in cl_101 + 0x01 : byte)
  Class: Eq_105
  DataType: byte
  OrigDataType: byte
T_108: (in 0x00 : byte)
  Class: Eq_105
  DataType: byte
  OrigDataType: byte
T_109: (in cl_101 != 0x00 : bool)
  Class: Eq_109
  DataType: bool
  OrigDataType: bool
T_110: (in 0x0002 : word16)
  Class: Eq_110
  DataType: word16
  OrigDataType: word16
T_111: (in di_110 + 0x0002 : word16)
  Class: Eq_93
  DataType: (memptr (ptr Eq_92) byte)
  OrigDataType: word16
T_112: (in ch_120 : byte)
  Class: Eq_112
  DataType: byte
  OrigDataType: byte
T_113: (in 0x01 : byte)
  Class: Eq_113
  DataType: byte
  OrigDataType: byte
T_114: (in ch_120 + 0x01 : byte)
  Class: Eq_112
  DataType: byte
  OrigDataType: byte
T_115: (in 0x00 : byte)
  Class: Eq_112
  DataType: byte
  OrigDataType: byte
T_116: (in ch_120 != 0x00 : bool)
  Class: Eq_116
  DataType: bool
  OrigDataType: bool
T_117: (in 0x00 : byte)
  Class: Eq_105
  DataType: byte
  OrigDataType: byte
T_118: (in 0x01C0 : word16)
  Class: Eq_118
  DataType: (memptr (ptr Eq_37) byte)
  OrigDataType: (memptr T_37 (struct (0 T_103 t0000)))
T_119: (in Mem109[ds:0x01C0:byte] : byte)
  Class: Eq_103
  DataType: byte
  OrigDataType: byte
T_120: (in 0x01 : byte)
  Class: Eq_120
  DataType: byte
  OrigDataType: byte
T_121: (in ds->b01C0 + 0x01 : byte)
  Class: Eq_103
  DataType: byte
  OrigDataType: byte
T_122: (in Mem125[ds:0x01C0:byte] : byte)
  Class: Eq_103
  DataType: byte
  OrigDataType: byte
T_123: (in di_127 : (memptr (ptr Eq_92) byte))
  Class: Eq_123
  DataType: (memptr (ptr Eq_92) byte)
  OrigDataType: (memptr T_92 (struct 0001 (0 T_134 t0000)))
T_124: (in 0x0001 : word16)
  Class: Eq_123
  DataType: (memptr (ptr Eq_92) byte)
  OrigDataType: word16
T_125: (in ch_128 : byte)
  Class: Eq_125
  DataType: byte
  OrigDataType: byte
T_126: (in 0x00 : byte)
  Class: Eq_125
  DataType: byte
  OrigDataType: byte
T_127: (in al_145 : byte)
  Class: Eq_127
  DataType: byte
  OrigDataType: byte
T_128: (in 0x3F : byte)
  Class: Eq_128
  DataType: byte
  OrigDataType: byte
T_129: (in al_100 & 0x3F : byte)
  Class: Eq_127
  DataType: byte
  OrigDataType: byte
T_130: (in 0x40 : byte)
  Class: Eq_130
  DataType: byte
  OrigDataType: byte
T_131: (in al_145 | 0x40 : byte)
  Class: Eq_131
  DataType: byte
  OrigDataType: byte
T_132: (in 0x0000 : word16)
  Class: Eq_132
  DataType: word16
  OrigDataType: word16
T_133: (in di_127 + 0x0000 : word16)
  Class: Eq_133
  DataType: word16
  OrigDataType: word16
T_134: (in Mem147[0xA000:di_127 + 0x0000:byte] : byte)
  Class: Eq_131
  DataType: byte
  OrigDataType: byte
T_135: (in di_148 : (memptr (ptr Eq_92) byte))
  Class: Eq_123
  DataType: (memptr (ptr Eq_92) byte)
  OrigDataType: word16
T_136: (in 0x0001 : word16)
  Class: Eq_136
  DataType: word16
  OrigDataType: word16
T_137: (in di_127 + 0x0001 : word16)
  Class: Eq_123
  DataType: (memptr (ptr Eq_92) byte)
  OrigDataType: word16
T_138: (in 0x0001 : word16)
  Class: Eq_138
  DataType: word16
  OrigDataType: word16
T_139: (in di_148 + 0x0001 : word16)
  Class: Eq_123
  DataType: (memptr (ptr Eq_92) byte)
  OrigDataType: word16
T_140: (in al_145 | 0x40 : byte)
  Class: Eq_140
  DataType: byte
  OrigDataType: byte
T_141: (in 0x01C1 : word16)
  Class: Eq_141
  DataType: (memptr (ptr Eq_37) byte)
  OrigDataType: (memptr T_37 (struct (0 T_142 t0000)))
T_142: (in Mem147[ds:0x01C1:byte] : byte)
  Class: Eq_142
  DataType: byte
  OrigDataType: byte
T_143: (in (al_145 | 0x40) - ds->b01C1 : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_144: (in cl_138 : byte)
  Class: Eq_144
  DataType: byte
  OrigDataType: byte
T_145: (in 0x01 : byte)
  Class: Eq_145
  DataType: byte
  OrigDataType: byte
T_146: (in cl_138 + 0x01 : byte)
  Class: Eq_144
  DataType: byte
  OrigDataType: byte
T_147: (in 0x00 : byte)
  Class: Eq_144
  DataType: byte
  OrigDataType: byte
T_148: (in cl_138 != 0x00 : bool)
  Class: Eq_148
  DataType: bool
  OrigDataType: bool
T_149: (in 0x01 : byte)
  Class: Eq_149
  DataType: byte
  OrigDataType: byte
T_150: (in ch_128 + 0x01 : byte)
  Class: Eq_125
  DataType: byte
  OrigDataType: byte
T_151: (in 0x00 : byte)
  Class: Eq_125
  DataType: byte
  OrigDataType: byte
T_152: (in ch_128 != 0x00 : bool)
  Class: Eq_152
  DataType: bool
  OrigDataType: bool
T_153: (in 0x00 : byte)
  Class: Eq_144
  DataType: byte
  OrigDataType: byte
T_154: (in 0x01C1 : word16)
  Class: Eq_154
  DataType: (memptr (ptr Eq_37) byte)
  OrigDataType: (memptr T_37 (struct (0 T_142 t0000)))
T_155: (in Mem147[ds:0x01C1:byte] : byte)
  Class: Eq_142
  DataType: byte
  OrigDataType: byte
T_156: (in 0x01 : byte)
  Class: Eq_156
  DataType: byte
  OrigDataType: byte
T_157: (in ds->b01C1 + 0x01 : byte)
  Class: Eq_142
  DataType: byte
  OrigDataType: byte
T_158: (in Mem163[ds:0x01C1:byte] : byte)
  Class: Eq_142
  DataType: byte
  OrigDataType: byte
T_159: (in __inb : ptr32)
  Class: Eq_159
  DataType: (ptr Eq_159)
  OrigDataType: (ptr (fn T_160 (T_85)))
T_160: (in __inb(dx_80) : byte)
  Class: Eq_160
  DataType: byte
  OrigDataType: byte
T_161: (in 0x08 : byte)
  Class: Eq_161
  DataType: byte
  OrigDataType: byte
T_162: (in __inb(dx_80) & 0x08 : byte)
  Class: Eq_162
  DataType: byte
  OrigDataType: byte
T_163: (in 0x00 : byte)
  Class: Eq_162
  DataType: byte
  OrigDataType: byte
T_164: (in (__inb(dx_80) & 0x08) == 0x00 : bool)
  Class: Eq_164
  DataType: bool
  OrigDataType: bool
T_165: (in al_169 : byte)
  Class: Eq_165
  DataType: byte
  OrigDataType: byte
T_166: (in __inb : ptr32)
  Class: Eq_166
  DataType: (ptr Eq_166)
  OrigDataType: (ptr (fn T_168 (T_167)))
T_167: (in 0x60 : byte)
  Class: Eq_167
  DataType: byte
  OrigDataType: byte
T_168: (in __inb(0x60) : byte)
  Class: Eq_165
  DataType: byte
  OrigDataType: byte
T_169: (in 0x01 : byte)
  Class: Eq_169
  DataType: byte
  OrigDataType: byte
T_170: (in al_169 - 0x01 : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_171: (in 0x01 : byte)
  Class: Eq_165
  DataType: byte
  OrigDataType: byte
T_172: (in al_169 != 0x01 : bool)
  Class: Eq_172
  DataType: bool
  OrigDataType: bool
T_173: (in 0x0000 : word16)
  Class: Eq_93
  DataType: (memptr (ptr Eq_92) byte)
  OrigDataType: word16
T_174: (in 0x00 : byte)
  Class: Eq_112
  DataType: byte
  OrigDataType: byte
T_175: (in bios_video_set_mode : ptr32)
  Class: Eq_2
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (fn T_177 (T_176)))
T_176: (in 0x03 : byte)
  Class: Eq_4
  DataType: byte
  OrigDataType: byte
T_177: (in bios_video_set_mode(0x03) : void)
  Class: Eq_6
  DataType: void
  OrigDataType: void
T_178: (in msdos_terminate : ptr32)
  Class: Eq_178
  DataType: (ptr Eq_178)
  OrigDataType: (ptr (fn T_182 (T_181)))
T_179: (in signature of msdos_terminate : void)
  Class: Eq_178
  DataType: (ptr Eq_178)
  OrigDataType: 
T_180: (in al : byte)
  Class: Eq_180
  DataType: byte
  OrigDataType: byte
T_181: (in 0x03 : byte)
  Class: Eq_180
  DataType: byte
  OrigDataType: byte
T_182: (in msdos_terminate(0x03) : void)
  Class: Eq_182
  DataType: void
  OrigDataType: void
T_183:
  Class: Eq_183
  DataType: byte
  OrigDataType: (struct 0001 (0 T_47 t0000))
*/
typedef Eq_92 Eq_1struct Globals {
	Eq_92 * ptrFFFA0000;	// FFFA0000
} Eq_1;

typedef void (Eq_2)(byte);

typedef void (Eq_7)(word16, byte);

typedef void (Eq_11)(word16, byte);

typedef byte (Eq_13)(word16);

typedef void (Eq_36)(word16, byte);

typedef  Eq_37[]struct Eq_37 {
	byte a01A0[];	// 1A0
	byte b01C0;	// 1C0
	byte b01C1;	// 1C1
} Eq_37;

typedef void (Eq_58)(word16, byte);

typedef void (Eq_63)(word16, byte);

typedef void (Eq_65)(word16, byte);

typedef void (Eq_67)(word16, byte);

typedef struct Eq_92 {
	byte b0000;	// 0
	byte b0001;	// 1
} Eq_92;

typedef byte (Eq_159)(word16);

typedef byte (Eq_166)(byte);

typedef void (Eq_178)(byte);

