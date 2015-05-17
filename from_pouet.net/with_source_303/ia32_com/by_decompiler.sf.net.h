// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_303/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0020 (ptr Eq_71) ptrFFFA0020))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_7: (fn void (word16, word16))
	T_7 (in msmouse_define_horizontal_range : ptr32)
	T_8 (in signature of msmouse_define_horizontal_range : void)
Eq_24: (segment "Eq_24" (0 byte b0000) (21F Eq_81 t021F) (300 word16 w0300) (3EC word16 w03EC) (400 Eq_91 t0400) (402 uint16 w0402) (404 (arr word16) a0404) (42C (arr word16) a042C) (42E (arr word16) a042E))
	T_24 (in es : (ptr Eq_24))
	T_67 (in ds : (ptr Eq_24))
	T_143 (in es : (ptr Eq_24))
Eq_48: (fn byte (word16))
	T_48 (in __inb : ptr32)
Eq_60: (struct "Eq_60" 0002 (FFFFFFFE word16 wFFFFFFFE) (0 word16 w0000))
	T_60 (in si_147 : (memptr (ptr Eq_24) Eq_60))
	T_61 (in 0x042E : word16)
	T_76 (in si_147 + 0x0002 : word16)
Eq_71: (segment "Eq_71" (0 (arr word16) a0000))
	T_71 (in 0xA002 : selector)
Eq_81: (union "Eq_81" (byte u0) (word16 u1))
	T_81 (in al_160 : Eq_81)
	T_82 (in (byte) ax_159 : byte)
	T_100 (in cl_195 : Eq_81)
	T_101 (in (byte) cx_173 : byte)
	T_112 (in Mem182[ds:si_171 + 0x0000:byte] : byte)
	T_115 (in bl_184 : Eq_81)
	T_118 (in Mem182[ds:si_171 + 0x0000:byte] : byte)
	T_121 (in Mem187[ds:si_171 + 0x0001:byte] : byte)
	T_123 (in 0x00 : byte)
	T_128 (in v23_199 : Eq_81)
	T_130 (in Mem187[ds:0x021F:byte] : byte)
	T_131 (in Mem200[ds:0x021F:byte] : byte)
	T_132 (in bl_202 : Eq_81)
	T_133 (in bl_184 ^ v23_199 : byte)
	T_134 (in 0x00 : byte)
	T_138 (in Mem209[ds:si_171 + 0x0000:byte] : byte)
Eq_91: (struct "Eq_91" 0001 (0 Eq_81 t0000) (1 Eq_81 t0001))
	T_91 (in si_171 : (memptr (ptr Eq_24) Eq_91))
	T_92 (in 0x0400 : word16)
	T_114 (in si_171 - 0x0001 : word16)
Eq_125: (fn void (byte))
	T_125 (in __syscall : ptr32)
Eq_139: (fn bool (uint32, (memptr (ptr Eq_24) bool), (ptr Eq_24)))
	T_139 (in fn0C00_020A : ptr32)
	T_140 (in signature of fn0C00_020A : void)
	T_251 (in fn0C00_020A : ptr32)
Eq_254: (fn uint16 (word16, byte))
	T_254 (in __ror : ptr32)
Eq_271: (fn word16 (word16, byte))
	T_271 (in __rol : ptr32)
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
T_7: (in msmouse_define_horizontal_range : ptr32)
  Class: Eq_7
  DataType: (ptr Eq_7)
  OrigDataType: (ptr (fn T_13 (T_11, T_12)))
T_8: (in signature of msmouse_define_horizontal_range : void)
  Class: Eq_7
  DataType: (ptr Eq_7)
  OrigDataType: 
T_9: (in cx : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_10: (in dx : word16)
  Class: Eq_10
  DataType: word16
  OrigDataType: word16
T_11: (in 0x0000 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_12: (in 0x00FF : word16)
  Class: Eq_10
  DataType: word16
  OrigDataType: word16
T_13: (in msmouse_define_horizontal_range(0x0000, 0x00FF) : void)
  Class: Eq_13
  DataType: void
  OrigDataType: void
T_14: (in cx_111 : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_15: (in 0x0000 : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_16: (in dx_413 : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_17: (in 0x00FF : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_18: (in cx_65 : word16)
  Class: Eq_18
  DataType: word16
  OrigDataType: word16
T_19: (in 0x0E : byte)
  Class: Eq_19
  DataType: byte
  OrigDataType: byte
T_20: (in DPB(cx_65, 0x0E, 0, 8) : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_21: (in ax_102 : uint16)
  Class: Eq_21
  DataType: uint16
  OrigDataType: word16
T_22: (in 0x07FE : word16)
  Class: Eq_21
  DataType: uint16
  OrigDataType: word16
T_23: (in 0x0000 : word16)
  Class: Eq_23
  DataType: word16
  OrigDataType: word16
T_24: (in es : (ptr Eq_24))
  Class: Eq_24
  DataType: (ptr Eq_24)
  OrigDataType: (ptr (segment (42C (arr T_312) a042C) (42E (arr T_310) a042E)))
T_25: (in di_59 : (memptr (ptr Eq_24) word16))
  Class: Eq_25
  DataType: (memptr (ptr Eq_24) word16)
  OrigDataType: (memptr T_24 (struct 0002 (0 T_23 t0000)))
T_26: (in 0x0000 : word16)
  Class: Eq_26
  DataType: word16
  OrigDataType: word16
T_27: (in di_59 + 0x0000 : word16)
  Class: Eq_27
  DataType: word16
  OrigDataType: word16
T_28: (in Mem70[es:di_59 + 0x0000:word16] : word16)
  Class: Eq_23
  DataType: word16
  OrigDataType: word16
T_29: (in 0x0002 : word16)
  Class: Eq_29
  DataType: word16
  OrigDataType: word16
T_30: (in di_59 + 0x0002 : word16)
  Class: Eq_25
  DataType: (memptr (ptr Eq_24) word16)
  OrigDataType: word16
T_31: (in 0x0001 : word16)
  Class: Eq_31
  DataType: word16
  OrigDataType: word16
T_32: (in cx_65 - 0x0001 : word16)
  Class: Eq_18
  DataType: word16
  OrigDataType: word16
T_33: (in 0x0000 : word16)
  Class: Eq_18
  DataType: word16
  OrigDataType: word16
T_34: (in cx_65 == 0x0000 : bool)
  Class: Eq_34
  DataType: bool
  OrigDataType: bool
T_35: (in bx_100 : word16)
  Class: Eq_35
  DataType: word16
  OrigDataType: word16
T_36: (in 0x0102 : word16)
  Class: Eq_35
  DataType: word16
  OrigDataType: word16
T_37: (in 0x07FE : word16)
  Class: Eq_23
  DataType: word16
  OrigDataType: word16
T_38: (in 0x0000 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_39: (in di_59 + 0x0000 : word16)
  Class: Eq_39
  DataType: word16
  OrigDataType: word16
T_40: (in Mem82[es:di_59 + 0x0000:word16] : word16)
  Class: Eq_23
  DataType: word16
  OrigDataType: word16
T_41: (in 0x0002 : word16)
  Class: Eq_41
  DataType: word16
  OrigDataType: word16
T_42: (in di_59 + 0x0002 : word16)
  Class: Eq_25
  DataType: (memptr (ptr Eq_24) word16)
  OrigDataType: word16
T_43: (in 0x0001 : word16)
  Class: Eq_43
  DataType: word16
  OrigDataType: word16
T_44: (in cx_111 - 0x0001 : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_45: (in 0x0000 : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_46: (in cx_111 == 0x0000 : bool)
  Class: Eq_46
  DataType: bool
  OrigDataType: bool
T_47: (in ax_133 : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_48: (in __inb : ptr32)
  Class: Eq_48
  DataType: (ptr Eq_48)
  OrigDataType: (ptr (fn T_50 (T_49)))
T_49: (in 0x03DA : word16)
  Class: Eq_49
  DataType: word16
  OrigDataType: word16
T_50: (in __inb(0x03DA) : byte)
  Class: Eq_50
  DataType: byte
  OrigDataType: byte
T_51: (in DPB(ax_102, __inb(0x03DA), 0, 8) : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_52: (in 0x0008 : word16)
  Class: Eq_52
  DataType: word16
  OrigDataType: word16
T_53: (in ax_133 & 0x0008 : word16)
  Class: Eq_21
  DataType: uint16
  OrigDataType: word16
T_54: (in ax_133 & 0x0008 : word16)
  Class: Eq_54
  DataType: word16
  OrigDataType: word16
T_55: (in 0x0000 : word16)
  Class: Eq_54
  DataType: word16
  OrigDataType: word16
T_56: (in (ax_133 & 0x0008) == 0x0000 : bool)
  Class: Eq_56
  DataType: bool
  OrigDataType: bool
T_57: (in cx_146 : word16)
  Class: Eq_57
  DataType: word16
  OrigDataType: word16
T_58: (in 0x7D : byte)
  Class: Eq_58
  DataType: byte
  OrigDataType: byte
T_59: (in DPB(cx_111, 0x7D, 8, 8) : word16)
  Class: Eq_57
  DataType: word16
  OrigDataType: word16
T_60: (in si_147 : (memptr (ptr Eq_24) Eq_60))
  Class: Eq_60
  DataType: (memptr (ptr Eq_24) Eq_60)
  OrigDataType: (memptr T_67 (struct 0002 (FFFFFFFE T_80 tFFFFFFFE) (0 T_70 t0000)))
T_61: (in 0x042E : word16)
  Class: Eq_60
  DataType: (memptr (ptr Eq_24) Eq_60)
  OrigDataType: word16
T_62: (in di_148 : (memptr (ptr Eq_71) word16))
  Class: Eq_62
  DataType: (memptr (ptr Eq_71) word16)
  OrigDataType: (memptr T_71 (struct 0002 (0 T_74 t0000)))
T_63: (in 0x0000 : word16)
  Class: Eq_62
  DataType: (memptr (ptr Eq_71) word16)
  OrigDataType: word16
T_64: (in bx_149 : (memptr (ptr Eq_24) byte))
  Class: Eq_64
  DataType: (memptr (ptr Eq_24) byte)
  OrigDataType: (memptr T_67 (struct (0 T_105 t0000)))
T_65: (in 0x0000 : word16)
  Class: Eq_64
  DataType: (memptr (ptr Eq_24) byte)
  OrigDataType: word16
T_66: (in ax_159 : word16)
  Class: Eq_66
  DataType: word16
  OrigDataType: word16
T_67: (in ds : (ptr Eq_24))
  Class: Eq_24
  DataType: (ptr Eq_24)
  OrigDataType: (ptr (segment (21F T_81 t021F) (402 T_161 t0402) (404 (arr T_313) a0404) (42C (arr T_312) a042C) (42E (arr T_310) a042E)))
T_68: (in 0x0000 : word16)
  Class: Eq_68
  DataType: word16
  OrigDataType: word16
T_69: (in si_147 + 0x0000 : word16)
  Class: Eq_69
  DataType: word16
  OrigDataType: word16
T_70: (in Mem0[ds:si_147 + 0x0000:word16] : word16)
  Class: Eq_66
  DataType: word16
  OrigDataType: word16
T_71: (in 0xA002 : selector)
  Class: Eq_71
  DataType: (ptr Eq_71)
  OrigDataType: (ptr (segment (0 (arr T_311) a0000)))
T_72: (in 0x0000 : word16)
  Class: Eq_72
  DataType: word16
  OrigDataType: word16
T_73: (in di_148 + 0x0000 : word16)
  Class: Eq_73
  DataType: word16
  OrigDataType: word16
T_74: (in Mem162[0xA002:di_148 + 0x0000:word16] : word16)
  Class: Eq_66
  DataType: word16
  OrigDataType: word16
T_75: (in 0x0002 : word16)
  Class: Eq_75
  DataType: word16
  OrigDataType: word16
T_76: (in si_147 + 0x0002 : word16)
  Class: Eq_60
  DataType: (memptr (ptr Eq_24) Eq_60)
  OrigDataType: word16
T_77: (in 0x0000 : word16)
  Class: Eq_77
  DataType: word16
  OrigDataType: word16
T_78: (in 0x0002 : word16)
  Class: Eq_78
  DataType: word16
  OrigDataType: word16
T_79: (in si_147 - 0x0002 : word16)
  Class: Eq_79
  DataType: word16
  OrigDataType: word16
T_80: (in Mem164[ds:si_147 - 0x0002:word16] : word16)
  Class: Eq_77
  DataType: word16
  OrigDataType: word16
T_81: (in al_160 : Eq_81)
  Class: Eq_81
  DataType: Eq_81
  OrigDataType: byte
T_82: (in (byte) ax_159 : byte)
  Class: Eq_81
  DataType: Eq_81
  OrigDataType: byte
T_83: (in 0x0002 : word16)
  Class: Eq_83
  DataType: word16
  OrigDataType: word16
T_84: (in di_148 + 0x0002 : word16)
  Class: Eq_62
  DataType: (memptr (ptr Eq_71) word16)
  OrigDataType: word16
T_85: (in 0x0001 : word16)
  Class: Eq_85
  DataType: word16
  OrigDataType: word16
T_86: (in cx_146 - 0x0001 : word16)
  Class: Eq_57
  DataType: word16
  OrigDataType: word16
T_87: (in 0x0000 : word16)
  Class: Eq_57
  DataType: word16
  OrigDataType: word16
T_88: (in cx_146 != 0x0000 : bool)
  Class: Eq_88
  DataType: bool
  OrigDataType: bool
T_89: (in di_170 : word16)
  Class: Eq_89
  DataType: word16
  OrigDataType: word16
T_90: (in 0x132E : word16)
  Class: Eq_89
  DataType: word16
  OrigDataType: word16
T_91: (in si_171 : (memptr (ptr Eq_24) Eq_91))
  Class: Eq_91
  DataType: (memptr (ptr Eq_24) Eq_91)
  OrigDataType: (memptr T_67 (struct 0001 (0 T_81 t0000) (1 T_121 t0001)))
T_92: (in 0x0400 : word16)
  Class: Eq_91
  DataType: (memptr (ptr Eq_24) Eq_91)
  OrigDataType: word16
T_93: (in cx_173 : word16)
  Class: Eq_93
  DataType: word16
  OrigDataType: word16
T_94: (in 0x14 : byte)
  Class: Eq_94
  DataType: byte
  OrigDataType: byte
T_95: (in DPB(cx_146, 0x14, 0, 8) : word16)
  Class: Eq_93
  DataType: word16
  OrigDataType: word16
T_96: (in 0x0001 : word16)
  Class: Eq_96
  DataType: word16
  OrigDataType: word16
T_97: (in cx_173 - 0x0001 : word16)
  Class: Eq_93
  DataType: word16
  OrigDataType: word16
T_98: (in 0x0A00 : word16)
  Class: Eq_98
  DataType: word16
  OrigDataType: word16
T_99: (in di_170 + 0x0A00 : word16)
  Class: Eq_89
  DataType: word16
  OrigDataType: word16
T_100: (in cl_195 : Eq_81)
  Class: Eq_81
  DataType: Eq_81
  OrigDataType: byte
T_101: (in (byte) cx_173 : byte)
  Class: Eq_81
  DataType: Eq_81
  OrigDataType: byte
T_102: (in 0x0000 : word16)
  Class: Eq_93
  DataType: word16
  OrigDataType: word16
T_103: (in cx_173 != 0x0000 : bool)
  Class: Eq_103
  DataType: bool
  OrigDataType: bool
T_104: (in bx_149 + di_170 : word16)
  Class: Eq_104
  DataType: word16
  OrigDataType: word16
T_105: (in Mem187[ds:bx_149 + di_170:byte] : byte)
  Class: Eq_105
  DataType: byte
  OrigDataType: byte
T_106: (in 0x01 : byte)
  Class: Eq_106
  DataType: byte
  OrigDataType: byte
T_107: (in bx_149[di_170] + 0x01 : byte)
  Class: Eq_105
  DataType: byte
  OrigDataType: byte
T_108: (in bx_149 + di_170 : word16)
  Class: Eq_108
  DataType: word16
  OrigDataType: word16
T_109: (in Mem469[ds:bx_149 + di_170:byte] : byte)
  Class: Eq_105
  DataType: byte
  OrigDataType: byte
T_110: (in 0x0000 : word16)
  Class: Eq_110
  DataType: word16
  OrigDataType: word16
T_111: (in si_171 + 0x0000 : word16)
  Class: Eq_111
  DataType: word16
  OrigDataType: word16
T_112: (in Mem182[ds:si_171 + 0x0000:byte] : byte)
  Class: Eq_81
  DataType: Eq_81
  OrigDataType: byte
T_113: (in 0x0001 : word16)
  Class: Eq_113
  DataType: word16
  OrigDataType: word16
T_114: (in si_171 - 0x0001 : word16)
  Class: Eq_91
  DataType: (memptr (ptr Eq_24) Eq_91)
  OrigDataType: word16
T_115: (in bl_184 : Eq_81)
  Class: Eq_81
  DataType: Eq_81
  OrigDataType: byte
T_116: (in 0x0000 : word16)
  Class: Eq_116
  DataType: word16
  OrigDataType: word16
T_117: (in si_171 + 0x0000 : word16)
  Class: Eq_117
  DataType: word16
  OrigDataType: word16
T_118: (in Mem182[ds:si_171 + 0x0000:byte] : byte)
  Class: Eq_81
  DataType: Eq_81
  OrigDataType: byte
T_119: (in 0x0001 : word16)
  Class: Eq_119
  DataType: word16
  OrigDataType: word16
T_120: (in si_171 + 0x0001 : word16)
  Class: Eq_120
  DataType: word16
  OrigDataType: word16
T_121: (in Mem187[ds:si_171 + 0x0001:byte] : byte)
  Class: Eq_81
  DataType: Eq_81
  OrigDataType: byte
T_122: (in DPB(bx_149, bl_184, 0, 8) : word16)
  Class: Eq_64
  DataType: (memptr (ptr Eq_24) byte)
  OrigDataType: word16
T_123: (in 0x00 : byte)
  Class: Eq_81
  DataType: byte
  OrigDataType: byte
T_124: (in bl_184 == 0x00 : bool)
  Class: Eq_124
  DataType: bool
  OrigDataType: bool
T_125: (in __syscall : ptr32)
  Class: Eq_125
  DataType: (ptr Eq_125)
  OrigDataType: (ptr (fn T_127 (T_126)))
T_126: (in 0x33 : byte)
  Class: Eq_126
  DataType: byte
  OrigDataType: byte
T_127: (in __syscall(0x33) : void)
  Class: Eq_127
  DataType: void
  OrigDataType: void
T_128: (in v23_199 : Eq_81)
  Class: Eq_81
  DataType: Eq_81
  OrigDataType: word16
T_129: (in 0x021F : word16)
  Class: Eq_129
  DataType: (memptr (ptr Eq_24) Eq_81)
  OrigDataType: (memptr T_67 (struct (0 T_81 t0000)))
T_130: (in Mem187[ds:0x021F:byte] : byte)
  Class: Eq_81
  DataType: Eq_81
  OrigDataType: byte
T_131: (in Mem200[ds:0x021F:byte] : byte)
  Class: Eq_81
  DataType: Eq_81
  OrigDataType: byte
T_132: (in bl_202 : Eq_81)
  Class: Eq_81
  DataType: Eq_81
  OrigDataType: byte
T_133: (in bl_184 ^ v23_199 : byte)
  Class: Eq_81
  DataType: Eq_81
  OrigDataType: byte
T_134: (in 0x00 : byte)
  Class: Eq_81
  DataType: byte
  OrigDataType: byte
T_135: (in bl_202 == 0x00 : bool)
  Class: Eq_135
  DataType: bool
  OrigDataType: bool
T_136: (in 0x0000 : word16)
  Class: Eq_136
  DataType: word16
  OrigDataType: word16
T_137: (in si_171 + 0x0000 : word16)
  Class: Eq_137
  DataType: word16
  OrigDataType: word16
T_138: (in Mem209[ds:si_171 + 0x0000:byte] : byte)
  Class: Eq_81
  DataType: Eq_81
  OrigDataType: byte
T_139: (in fn0C00_020A : ptr32)
  Class: Eq_139
  DataType: (ptr Eq_139)
  OrigDataType: (ptr (fn T_148 (T_144, T_147, T_67)))
T_140: (in signature of fn0C00_020A : void)
  Class: Eq_139
  DataType: (ptr Eq_139)
  OrigDataType: 
T_141: (in ebx : uint32)
  Class: Eq_141
  DataType: uint32
  OrigDataType: uint32
T_142: (in di : (memptr (ptr Eq_24) bool))
  Class: Eq_142
  DataType: (memptr (ptr Eq_24) bool)
  OrigDataType: (memptr T_143 (struct 0001 (0 T_295 t0000)))
T_143: (in es : (ptr Eq_24))
  Class: Eq_24
  DataType: (ptr Eq_24)
  OrigDataType: (ptr (segment))
T_144: (in 0x7E3C1818 : word32)
  Class: Eq_141
  DataType: uint32
  OrigDataType: word32
T_145: (in di_170 + cx_173 : word16)
  Class: Eq_145
  DataType: word16
  OrigDataType: word16
T_146: (in 0x0004 : word16)
  Class: Eq_146
  DataType: word16
  OrigDataType: word16
T_147: (in di_170 + cx_173 - 0x0004 : word16)
  Class: Eq_142
  DataType: (memptr (ptr Eq_24) bool)
  OrigDataType: word16
T_148: (in fn0C00_020A(0x7E3C1818, di_170 + cx_173 - 0x0004, ds) : byte)
  Class: Eq_148
  DataType: bool
  OrigDataType: byte
T_149: (in bh_225 : int8)
  Class: Eq_149
  DataType: int8
  OrigDataType: int8
T_150: (in SLICE(bx_100, byte, 8) : byte)
  Class: Eq_149
  DataType: int8
  OrigDataType: byte
T_151: (in dl_244 : byte)
  Class: Eq_151
  DataType: byte
  OrigDataType: byte
T_152: (in (byte) dx_413 : byte)
  Class: Eq_152
  DataType: byte
  OrigDataType: byte
T_153: (in (byte) dx_413 + bh_225 : byte)
  Class: Eq_151
  DataType: byte
  OrigDataType: byte
T_154: (in bx_222 : word16)
  Class: Eq_35
  DataType: word16
  OrigDataType: word16
T_155: (in bl_224 : byte)
  Class: Eq_155
  DataType: byte
  OrigDataType: byte
T_156: (in (byte) bx_100 : byte)
  Class: Eq_155
  DataType: byte
  OrigDataType: byte
T_157: (in ch_231 : byte)
  Class: Eq_157
  DataType: byte
  OrigDataType: byte
T_158: (in SLICE(cx_111, byte, 8) : byte)
  Class: Eq_157
  DataType: byte
  OrigDataType: byte
T_159: (in ax_236 : uint16)
  Class: Eq_21
  DataType: uint16
  OrigDataType: word16
T_160: (in 0x0402 : word16)
  Class: Eq_160
  DataType: (memptr (ptr Eq_24) uint16)
  OrigDataType: (memptr T_67 (struct (0 T_161 t0000)))
T_161: (in Mem209[ds:0x0402:word16] : word16)
  Class: Eq_21
  DataType: uint16
  OrigDataType: word16
T_162: (in si_237 : (memptr (ptr Eq_24) word16))
  Class: Eq_162
  DataType: (memptr (ptr Eq_24) word16)
  OrigDataType: (memptr T_67 (struct 0002 (0 T_257 t0000)))
T_163: (in 0x0404 : word16)
  Class: Eq_162
  DataType: (memptr (ptr Eq_24) word16)
  OrigDataType: word16
T_164: (in di_240 : (memptr (ptr Eq_24) uint16))
  Class: Eq_164
  DataType: (memptr (ptr Eq_24) uint16)
  OrigDataType: (memptr T_67 (struct 0002 (0 T_217 t0000)))
T_165: (in 0x0404 : word16)
  Class: Eq_164
  DataType: (memptr (ptr Eq_24) uint16)
  OrigDataType: word16
T_166: (in cl_241 : byte)
  Class: Eq_166
  DataType: byte
  OrigDataType: byte
T_167: (in 0x00 : byte)
  Class: Eq_166
  DataType: byte
  OrigDataType: byte
T_168: (in cx_242 : word16)
  Class: Eq_168
  DataType: word16
  OrigDataType: word16
T_169: (in 0x00 : byte)
  Class: Eq_169
  DataType: byte
  OrigDataType: byte
T_170: (in DPB(cx_111, 0x00, 0, 8) : word16)
  Class: Eq_168
  DataType: word16
  OrigDataType: word16
T_171: (in dx_245 : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_172: (in DPB(dx_413, dl_244, 0, 8) : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_173: (in 0xF0 : byte)
  Class: Eq_173
  DataType: byte
  OrigDataType: byte
T_174: (in dl_244 & 0xF0 : byte)
  Class: Eq_174
  DataType: byte
  OrigDataType: byte
T_175: (in 0x00 : byte)
  Class: Eq_174
  DataType: byte
  OrigDataType: byte
T_176: (in (dl_244 & 0xF0) == 0x00 : bool)
  Class: Eq_176
  DataType: bool
  OrigDataType: bool
T_177: (in bp_258 : (memptr (ptr Eq_24) bool))
  Class: Eq_142
  DataType: (memptr (ptr Eq_24) bool)
  OrigDataType: word16
T_178: (in 0xCC1E : word16)
  Class: Eq_178
  DataType: word16
  OrigDataType: word16
T_179: (in dx_245 + 0xCC1E : word16)
  Class: Eq_142
  DataType: (memptr (ptr Eq_24) bool)
  OrigDataType: word16
T_180: (in bx_261 : (memptr (ptr Eq_24) word16))
  Class: Eq_180
  DataType: (memptr (ptr Eq_24) word16)
  OrigDataType: (memptr T_67 (struct (0 T_168 t0000)))
T_181: (in 0x03EC : word16)
  Class: Eq_180
  DataType: (memptr (ptr Eq_24) word16)
  OrigDataType: word16
T_182: (in dx_267 : word16)
  Class: Eq_182
  DataType: word16
  OrigDataType: word16
T_183: (in 0x0000 : word16)
  Class: Eq_182
  DataType: word16
  OrigDataType: word16
T_184: (in ch_434 : byte)
  Class: Eq_184
  DataType: byte
  OrigDataType: byte
T_185: (in ch_231 & bl_224 : byte)
  Class: Eq_184
  DataType: byte
  OrigDataType: byte
T_186: (in 0x0F : byte)
  Class: Eq_186
  DataType: byte
  OrigDataType: byte
T_187: (in bh_225 & 0x0F : byte)
  Class: Eq_166
  DataType: byte
  OrigDataType: byte
T_188: (in DPB(cx_242, ch_434, 8, 8) : word16)
  Class: Eq_168
  DataType: word16
  OrigDataType: word16
T_189: (in 0x00 : byte)
  Class: Eq_184
  DataType: byte
  OrigDataType: byte
T_190: (in ch_434 == 0x00 : bool)
  Class: Eq_190
  DataType: bool
  OrigDataType: bool
T_191: (in 0x0F : byte)
  Class: Eq_191
  DataType: byte
  OrigDataType: byte
T_192: (in dl_244 & 0x0F : byte)
  Class: Eq_192
  DataType: byte
  OrigDataType: byte
T_193: (in DPB(dx_245, dl_244 & 0x0F, 0, 8) : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_194: (in dl_244 - bh_225 : byte)
  Class: Eq_151
  DataType: byte
  OrigDataType: byte
T_195: (in DPB(dx_413, dl_244, 0, 8) : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_196: (in -bh_225 : byte)
  Class: Eq_196
  DataType: int8
  OrigDataType: int8
T_197: (in DPB(bx_100, -bh_225, 8, 8) : word16)
  Class: Eq_35
  DataType: word16
  OrigDataType: word16
T_198: (in 0x0402 : word16)
  Class: Eq_164
  DataType: (memptr (ptr Eq_24) uint16)
  OrigDataType: word16
T_199: (in 0x00 : byte)
  Class: Eq_166
  DataType: byte
  OrigDataType: byte
T_200: (in 0x00 : byte)
  Class: Eq_200
  DataType: byte
  OrigDataType: byte
T_201: (in DPB(cx_242, 0x00, 0, 8) : word16)
  Class: Eq_168
  DataType: word16
  OrigDataType: word16
T_202: (in cx_313 : word16)
  Class: Eq_168
  DataType: word16
  OrigDataType: word16
T_203: (in v28_298 : word16)
  Class: Eq_168
  DataType: word16
  OrigDataType: word16
T_204: (in cl_301 : bcu8)
  Class: Eq_204
  DataType: bcu8
  OrigDataType: bcu8
T_205: (in 0x08 : byte)
  Class: Eq_204
  DataType: bcu8
  OrigDataType: bcu8
T_206: (in cl_301 >=u 0x08 : bool)
  Class: Eq_206
  DataType: bool
  OrigDataType: bool
T_207: (in v29_319 : word16)
  Class: Eq_168
  DataType: word16
  OrigDataType: word16
T_208: (in 0x0000 : word16)
  Class: Eq_208
  DataType: word16
  OrigDataType: word16
T_209: (in bx_261 + 0x0000 : word16)
  Class: Eq_209
  DataType: word16
  OrigDataType: word16
T_210: (in Mem299[ds:bx_261 + 0x0000:word16] : word16)
  Class: Eq_168
  DataType: word16
  OrigDataType: word16
T_211: (in 0x0000 : word16)
  Class: Eq_211
  DataType: word16
  OrigDataType: word16
T_212: (in bx_261 + 0x0000 : word16)
  Class: Eq_212
  DataType: word16
  OrigDataType: word16
T_213: (in Mem320[ds:bx_261 + 0x0000:word16] : word16)
  Class: Eq_168
  DataType: word16
  OrigDataType: word16
T_214: (in ax_296 : uint16)
  Class: Eq_21
  DataType: uint16
  OrigDataType: word16
T_215: (in 0x0000 : word16)
  Class: Eq_215
  DataType: word16
  OrigDataType: word16
T_216: (in di_240 + 0x0000 : word16)
  Class: Eq_216
  DataType: word16
  OrigDataType: word16
T_217: (in Mem325[ds:di_240 + 0x0000:word16] : word16)
  Class: Eq_21
  DataType: uint16
  OrigDataType: word16
T_218: (in dx_322 : word16)
  Class: Eq_182
  DataType: word16
  OrigDataType: word16
T_219: (in dx_267 | ax_296 : word16)
  Class: Eq_182
  DataType: word16
  OrigDataType: word16
T_220: (in di_326 : (memptr (ptr Eq_24) uint16))
  Class: Eq_164
  DataType: (memptr (ptr Eq_24) uint16)
  OrigDataType: (memptr T_67 (struct (0 T_280 t0000)))
T_221: (in 0x0002 : word16)
  Class: Eq_221
  DataType: word16
  OrigDataType: word16
T_222: (in di_240 + 0x0002 : word16)
  Class: Eq_164
  DataType: (memptr (ptr Eq_24) uint16)
  OrigDataType: word16
T_223: (in dx_343 : uint16)
  Class: Eq_21
  DataType: uint16
  OrigDataType: uint16
T_224: (in wLoc18_347 : (memptr (ptr Eq_24) bool))
  Class: Eq_142
  DataType: (memptr (ptr Eq_24) bool)
  OrigDataType: word16
T_225: (in C_348 : bool)
  Class: Eq_148
  DataType: bool
  OrigDataType: byte
T_226: (in true : bool)
  Class: Eq_148
  DataType: bool
  OrigDataType: bool
T_227: (in 0x00 : byte)
  Class: Eq_227
  DataType: byte
  OrigDataType: byte
T_228: (in DPB(v28_298, 0x00, 0, 8) : word16)
  Class: Eq_168
  DataType: word16
  OrigDataType: word16
T_229: (in 0x0002 : word16)
  Class: Eq_229
  DataType: ui16
  OrigDataType: ui16
T_230: (in dx_343 * 0x0002 : word16)
  Class: Eq_230
  DataType: ui16
  OrigDataType: ui16
T_231: (in dx_343 * 0x0002 + C_348 : word16)
  Class: Eq_21
  DataType: uint16
  OrigDataType: word16
T_232: (in di_359 : (memptr (ptr Eq_24) bool))
  Class: Eq_142
  DataType: (memptr (ptr Eq_24) bool)
  OrigDataType: word16
T_233: (in 0x0010 : word16)
  Class: Eq_233
  DataType: word16
  OrigDataType: word16
T_234: (in di_359 + 0x0010 : word16)
  Class: Eq_142
  DataType: (memptr (ptr Eq_24) bool)
  OrigDataType: word16
T_235: (in cond(dx_343) : byte)
  Class: Eq_148
  DataType: bool
  OrigDataType: byte
T_236: (in 0x0000 : word16)
  Class: Eq_21
  DataType: uint16
  OrigDataType: cups16
T_237: (in dx_343 >=u 0x0000 : bool)
  Class: Eq_237
  DataType: bool
  OrigDataType: bool
T_238: (in 0x0000 : word16)
  Class: Eq_21
  DataType: uint16
  OrigDataType: word16
T_239: (in dx_343 == 0x0000 : bool)
  Class: Eq_239
  DataType: bool
  OrigDataType: bool
T_240: (in bl_385 : byte)
  Class: Eq_240
  DataType: byte
  OrigDataType: byte
T_241: (in (byte) bx_261 : byte)
  Class: Eq_240
  DataType: byte
  OrigDataType: byte
T_242: (in si_294 : (memptr (ptr Eq_24) word16))
  Class: Eq_162
  DataType: (memptr (ptr Eq_24) word16)
  OrigDataType: word16
T_243: (in (byte) v29_319 : byte)
  Class: Eq_166
  DataType: byte
  OrigDataType: byte
T_244: (in 0x0A00 : word16)
  Class: Eq_244
  DataType: word16
  OrigDataType: word16
T_245: (in bp_258 - 0x0A00 : word16)
  Class: Eq_142
  DataType: (memptr (ptr Eq_24) bool)
  OrigDataType: word16
T_246: (in 0x01 : byte)
  Class: Eq_246
  DataType: byte
  OrigDataType: byte
T_247: (in bl_385 + 0x01 : byte)
  Class: Eq_247
  DataType: byte
  OrigDataType: byte
T_248: (in DPB(bx_261, bl_385 + 0x01, 0, 8) : word16)
  Class: Eq_180
  DataType: (memptr (ptr Eq_24) word16)
  OrigDataType: word16
T_249: (in 0x01 : byte)
  Class: Eq_240
  DataType: byte
  OrigDataType: byte
T_250: (in bl_385 != 0x01 : bool)
  Class: Eq_250
  DataType: bool
  OrigDataType: bool
T_251: (in fn0C00_020A : ptr32)
  Class: Eq_139
  DataType: (ptr Eq_139)
  OrigDataType: (ptr (fn T_253 (T_252, T_232, T_67)))
T_252: (in 0x66FF997E : word32)
  Class: Eq_141
  DataType: uint32
  OrigDataType: word32
T_253: (in fn0C00_020A(0x66FF997E, di_359, ds) : byte)
  Class: Eq_148
  DataType: bool
  OrigDataType: byte
T_254: (in __ror : ptr32)
  Class: Eq_254
  DataType: (ptr Eq_254)
  OrigDataType: (ptr (fn T_258 (T_257, T_166)))
T_255: (in 0x0000 : word16)
  Class: Eq_255
  DataType: word16
  OrigDataType: word16
T_256: (in si_237 + 0x0000 : word16)
  Class: Eq_256
  DataType: word16
  OrigDataType: word16
T_257: (in Mem209[ds:si_237 + 0x0000:word16] : word16)
  Class: Eq_257
  DataType: word16
  OrigDataType: word16
T_258: (in __ror(ds->*si_237, cl_241) : word16)
  Class: Eq_21
  DataType: uint16
  OrigDataType: word16
T_259: (in 0x0000 : word16)
  Class: Eq_259
  DataType: word16
  OrigDataType: word16
T_260: (in bx_261 + 0x0000 : word16)
  Class: Eq_260
  DataType: word16
  OrigDataType: word16
T_261: (in Mem209[ds:bx_261 + 0x0000:word16] : word16)
  Class: Eq_168
  DataType: word16
  OrigDataType: word16
T_262: (in 0x0000 : word16)
  Class: Eq_262
  DataType: word16
  OrigDataType: word16
T_263: (in bx_261 + 0x0000 : word16)
  Class: Eq_263
  DataType: word16
  OrigDataType: word16
T_264: (in Mem299[ds:bx_261 + 0x0000:word16] : word16)
  Class: Eq_168
  DataType: word16
  OrigDataType: word16
T_265: (in 0x0002 : word16)
  Class: Eq_265
  DataType: word16
  OrigDataType: word16
T_266: (in si_237 + 0x0002 : word16)
  Class: Eq_162
  DataType: (memptr (ptr Eq_24) word16)
  OrigDataType: word16
T_267: (in (byte) v28_298 : byte)
  Class: Eq_204
  DataType: bcu8
  OrigDataType: byte
T_268: (in 0x08 : byte)
  Class: Eq_204
  DataType: bcu8
  OrigDataType: bcu8
T_269: (in cl_301 <u 0x08 : bool)
  Class: Eq_269
  DataType: bool
  OrigDataType: bool
T_270: (in dx_406 : word16)
  Class: Eq_270
  DataType: word16
  OrigDataType: word16
T_271: (in __rol : ptr32)
  Class: Eq_271
  DataType: (ptr Eq_271)
  OrigDataType: (ptr (fn T_273 (T_218, T_272)))
T_272: (in 0x01 : byte)
  Class: Eq_272
  DataType: byte
  OrigDataType: byte
T_273: (in __rol(dx_322, 0x01) : word16)
  Class: Eq_270
  DataType: word16
  OrigDataType: word16
T_274: (in (byte) dx_406 : byte)
  Class: Eq_274
  DataType: byte
  OrigDataType: byte
T_275: (in DPB(v29_319, (byte) dx_406, 8, 8) : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_276: (in 0x0000 : word16)
  Class: Eq_270
  DataType: word16
  OrigDataType: word16
T_277: (in dx_406 == 0x0000 : bool)
  Class: Eq_277
  DataType: bool
  OrigDataType: bool
T_278: (in 0x0000 : word16)
  Class: Eq_278
  DataType: word16
  OrigDataType: word16
T_279: (in di_326 + 0x0000 : word16)
  Class: Eq_279
  DataType: word16
  OrigDataType: word16
T_280: (in Mem423[ds:di_326 + 0x0000:word16] : word16)
  Class: Eq_21
  DataType: uint16
  OrigDataType: word16
T_281: (in 0x0000 : word16)
  Class: Eq_21
  DataType: uint16
  OrigDataType: word16
T_282: (in ax_236 != 0x0000 : bool)
  Class: Eq_282
  DataType: bool
  OrigDataType: bool
T_283: (in 0x0300 : word16)
  Class: Eq_25
  DataType: (memptr (ptr Eq_24) word16)
  OrigDataType: word16
T_284: (in 0x89 : byte)
  Class: Eq_284
  DataType: byte
  OrigDataType: byte
T_285: (in DPB(cx_111, 0x89, 0, 8) : word16)
  Class: Eq_18
  DataType: word16
  OrigDataType: word16
T_286: (in C : byte)
  Class: Eq_286
  DataType: byte
  OrigDataType: byte
T_287: (in cx_18 : word16)
  Class: Eq_287
  DataType: word16
  OrigDataType: word16
T_288: (in 0x0008 : word16)
  Class: Eq_287
  DataType: word16
  OrigDataType: word16
T_289: (in 0x00000001 : word32)
  Class: Eq_289
  DataType: uint32
  OrigDataType: uint32
T_290: (in ebx >>u 0x00000001 : word32)
  Class: Eq_141
  DataType: uint32
  OrigDataType: uint32
T_291: (in 0x00000000 : word32)
  Class: Eq_141
  DataType: uint32
  OrigDataType: up32
T_292: (in ebx <u 0x00000000 : bool)
  Class: Eq_292
  DataType: bool
  OrigDataType: bool
T_293: (in 0x0000 : word16)
  Class: Eq_293
  DataType: word16
  OrigDataType: word16
T_294: (in di + 0x0000 : word16)
  Class: Eq_294
  DataType: word16
  OrigDataType: word16
T_295: (in Mem27[es:di + 0x0000:byte] : byte)
  Class: Eq_292
  DataType: bool
  OrigDataType: byte
T_296: (in bx_23 : word16)
  Class: Eq_296
  DataType: word16
  OrigDataType: word16
T_297: (in (word16) ebx : word16)
  Class: Eq_296
  DataType: word16
  OrigDataType: word16
T_298: (in 0x0001 : word16)
  Class: Eq_298
  DataType: word16
  OrigDataType: word16
T_299: (in di + 0x0001 : word16)
  Class: Eq_142
  DataType: (memptr (ptr Eq_24) bool)
  OrigDataType: word16
T_300: (in 0x0001 : word16)
  Class: Eq_300
  DataType: word16
  OrigDataType: word16
T_301: (in cx_18 - 0x0001 : word16)
  Class: Eq_287
  DataType: word16
  OrigDataType: word16
T_302: (in 0x0000 : word16)
  Class: Eq_287
  DataType: word16
  OrigDataType: word16
T_303: (in cx_18 != 0x0000 : bool)
  Class: Eq_303
  DataType: bool
  OrigDataType: bool
T_304: (in 0x0138 : word16)
  Class: Eq_304
  DataType: word16
  OrigDataType: word16
T_305: (in di + 0x0138 : word16)
  Class: Eq_142
  DataType: (memptr (ptr Eq_24) bool)
  OrigDataType: word16
T_306: (in DPB(ebx, bx_23, 0, 16) : word32)
  Class: Eq_141
  DataType: uint32
  OrigDataType: word32
T_307: (in 0x0000 : word16)
  Class: Eq_296
  DataType: word16
  OrigDataType: word16
T_308: (in bx_23 != 0x0000 : bool)
  Class: Eq_308
  DataType: bool
  OrigDataType: bool
T_309: (in false : bool)
  Class: Eq_309
  DataType: bool
  OrigDataType: bool
T_310:
  Class: Eq_310
  DataType: word16
  OrigDataType: (struct 0002 (0 T_70 t0000))
T_311:
  Class: Eq_311
  DataType: word16
  OrigDataType: (struct 0002 (0 T_74 t0000))
T_312:
  Class: Eq_312
  DataType: word16
  OrigDataType: (struct 0002 (0 T_80 t0000))
T_313:
  Class: Eq_313
  DataType: word16
  OrigDataType: (struct 0002 (0 T_257 t0000))
*/
typedef Eq_71 Eq_1struct Globals {
	Eq_71 * ptrFFFA0020;	// FFFA0020
} Eq_1;

typedef void (Eq_2)(byte);

typedef void (Eq_7)(word16, word16);

typedef Eq_81 Eq_24Eq_91 Eq_24 Eq_24[][][]struct Eq_24 {
	byte b0000;	// 0
	Eq_81 t021F;	// 21F
	word16 w0300;	// 300
	word16 w03EC;	// 3EC
	Eq_91 t0400;	// 400
	uint16 w0402;	// 402
	word16 a0404[];	// 404
	word16 a042C[];	// 42C
	word16 a042E[];	// 42E
} Eq_24;

typedef byte (Eq_48)(word16);

typedef struct Eq_60 {	// size: 2 2
	word16 wFFFFFFFE;	// FFFFFFFE
	word16 w0000;	// 0
} Eq_60;

typedef  Eq_71[]struct Eq_71 {
	word16 a0000[];	// 0
} Eq_71;

typedef union Eq_81 {
	byte u0;
	word16 u1;
} Eq_81;

typedef Eq_81 Eq_91Eq_81 Eq_91struct Eq_91 {	// size: 1 1
	Eq_81 t0000;	// 0
	Eq_81 t0001;	// 1
} Eq_91;

typedef void (Eq_125)(byte);

typedef bool (Eq_139)(uint32, bool Eq_24::*, Eq_24 *);

typedef uint16 (Eq_254)(word16, byte);

typedef word16 (Eq_271)(word16, byte);

