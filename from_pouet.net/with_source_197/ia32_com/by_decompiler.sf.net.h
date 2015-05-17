// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_197/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr (struct "Globals")))
Eq_10: (segment "Eq_10" (1E2 (arr Eq_157) a01E2) (1E9 (arr byte) a01E9))
	T_10 (in es : (ptr Eq_10))
Eq_24: (struct "Eq_24" 0001 (0 Eq_41 t0000))
	T_24 (in di_24 : (memptr (ptr Eq_10) Eq_24))
	T_25 (in 0x01E2 : word16)
	T_57 (in di_24 + 0x0001 : word16)
Eq_26: (struct "Eq_26" 0001 (0 byte b0000) (1EA byte b01EA) (212 Eq_41 t0212))
	T_26 (in bx_119 : (memptr (ptr Eq_46) Eq_26))
	T_29 (in DPB(bx, 0x0A, 0, 8) : word16)
	T_34 (in bx_119 - 0x0001 : word16)
	T_104 (in bx_119 - 0x0001 : word16)
	T_105 (in 0x0000 : word16)
	T_129 (in DPB(bx_119, 0x08, 0, 8) : word16)
Eq_27: (struct "Eq_27" (46C int16 w046C))
	T_27 (in bx : (ptr Eq_27))
Eq_37: (union "Eq_37" (uint16 u0) ((memptr (ptr Eq_42) Eq_160) u1))
	T_37 (in dx_44 : Eq_37)
	T_40 (in SEQ(0x0000, si_29) % bx_119 : uint16)
Eq_41: (union "Eq_41" (byte u0) (word16 u1))
	T_41 (in v20_50 : word16)
	T_45 (in Mem13[ss:dx_44 + 0x0212:byte] : byte)
	T_49 (in Mem13[cs:bx_119 + 0x0212:byte] : byte)
	T_52 (in Mem51[ss:dx_44 + 0x0212:byte] : byte)
	T_55 (in Mem53[es:di_24 + 0x0000:byte] : byte)
	T_61 (in 0x24 : byte)
	T_64 (in Mem58[es:di_24 + 0x0000:byte] : byte)
Eq_42: (segment "Eq_42")
	T_42 (in ss : selector)
Eq_46: (segment "Eq_46" (0 Eq_26 t0000) (1E2 (arr byte) a01E2) (1EA byte b01EA))
	T_46 (in cs : selector)
	T_68 (in ds : (ptr Eq_46))
	T_150 (in ds : selector)
Eq_65: (fn void (byte, (ptr Eq_46)))
	T_65 (in fn0C00_018B : ptr32)
	T_66 (in signature of fn0C00_018B : void)
	T_73 (in fn0C00_018B : ptr32)
	T_100 (in fn0C00_018B : ptr32)
	T_145 (in fn0C00_018B : ptr32)
Eq_76: (fn void (byte))
	T_76 (in __syscall : ptr32)
Eq_135: (fn void (byte))
	T_135 (in msdos_write_console_char : ptr32)
	T_136 (in signature of msdos_write_console_char : void)
	T_139 (in msdos_write_console_char : ptr32)
	T_142 (in msdos_write_console_char : ptr32)
Eq_148: (fn void ((ptr Eq_46), word16))
	T_148 (in msdos_display_string : ptr32)
	T_149 (in signature of msdos_display_string : void)
Eq_157: (struct "Eq_157" 0001 (0 Eq_41 t0000))
	T_157
	T_158
Eq_160: (struct "Eq_160" (212 Eq_41 t0212))
	T_160
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr Eq_1)
  OrigDataType: (ptr (struct "Globals"))
T_2: (in di_15 : (memptr (ptr Eq_10) byte))
  Class: Eq_2
  DataType: (memptr (ptr Eq_10) byte)
  OrigDataType: (memptr T_10 (struct 0001 (0 T_13 t0000)))
T_3: (in 0x01E9 : word16)
  Class: Eq_2
  DataType: (memptr (ptr Eq_10) byte)
  OrigDataType: word16
T_4: (in al_10 : byte)
  Class: Eq_4
  DataType: byte
  OrigDataType: byte
T_5: (in 0x07 : byte)
  Class: Eq_4
  DataType: byte
  OrigDataType: byte
T_6: (in ax_11 : word16)
  Class: Eq_6
  DataType: word16
  OrigDataType: word16
T_7: (in ax : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_8: (in 0x07 : byte)
  Class: Eq_8
  DataType: byte
  OrigDataType: byte
T_9: (in DPB(ax, 0x07, 0, 8) : word16)
  Class: Eq_6
  DataType: word16
  OrigDataType: word16
T_10: (in es : (ptr Eq_10))
  Class: Eq_10
  DataType: (ptr Eq_10)
  OrigDataType: (ptr (segment (1E2 (arr T_157) a01E2) (1E9 (arr T_156) a01E9)))
T_11: (in 0x0000 : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_12: (in di_15 + 0x0000 : word16)
  Class: Eq_12
  DataType: word16
  OrigDataType: word16
T_13: (in Mem13[es:di_15 + 0x0000:byte] : byte)
  Class: Eq_4
  DataType: byte
  OrigDataType: byte
T_14: (in 0x0001 : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_15: (in ax_11 + 0x0001 : word16)
  Class: Eq_6
  DataType: word16
  OrigDataType: word16
T_16: (in 0x0001 : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_17: (in di_15 + 0x0001 : word16)
  Class: Eq_2
  DataType: (memptr (ptr Eq_10) byte)
  OrigDataType: word16
T_18: (in (byte) ax_11 : byte)
  Class: Eq_4
  DataType: byte
  OrigDataType: byte
T_19: (in cx : word16)
  Class: Eq_19
  DataType: word16
  OrigDataType: word16
T_20: (in 0x0001 : word16)
  Class: Eq_20
  DataType: word16
  OrigDataType: word16
T_21: (in cx - 0x0001 : word16)
  Class: Eq_19
  DataType: word16
  OrigDataType: word16
T_22: (in 0x0000 : word16)
  Class: Eq_19
  DataType: word16
  OrigDataType: word16
T_23: (in cx != 0x0000 : bool)
  Class: Eq_23
  DataType: bool
  OrigDataType: bool
T_24: (in di_24 : (memptr (ptr Eq_10) Eq_24))
  Class: Eq_24
  DataType: (memptr (ptr Eq_10) Eq_24)
  OrigDataType: (memptr T_10 (struct 0001 (0 T_41 t0000)))
T_25: (in 0x01E2 : word16)
  Class: Eq_24
  DataType: (memptr (ptr Eq_10) Eq_24)
  OrigDataType: word16
T_26: (in bx_119 : (memptr (ptr Eq_46) Eq_26))
  Class: Eq_26
  DataType: (memptr (ptr Eq_46) Eq_26)
  OrigDataType: (memptr T_46 (struct 0001 (0 T_131 t0000) (1EA T_118 t01EA) (212 T_49 t0212)))
T_27: (in bx : (ptr Eq_27))
  Class: Eq_27
  DataType: (ptr Eq_27)
  OrigDataType: (ptr (struct (46C T_32 t046C)))
T_28: (in 0x0A : byte)
  Class: Eq_28
  DataType: byte
  OrigDataType: byte
T_29: (in DPB(bx, 0x0A, 0, 8) : word16)
  Class: Eq_26
  DataType: (memptr (ptr Eq_46) Eq_26)
  OrigDataType: word16
T_30: (in si_29 : int16)
  Class: Eq_30
  DataType: int16
  OrigDataType: int16
T_31: (in 0x046C : word16)
  Class: Eq_31
  DataType: (memptr (ptr Eq_27) int16)
  OrigDataType: (memptr T_27 (struct (0 T_32 t0000)))
T_32: (in Mem13[bx:0x046C:word16] : word16)
  Class: Eq_30
  DataType: int16
  OrigDataType: word16
T_33: (in 0x0001 : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_34: (in bx_119 - 0x0001 : word16)
  Class: Eq_26
  DataType: (memptr (ptr Eq_46) Eq_26)
  OrigDataType: word16
T_35: (in 0x22E3 : word16)
  Class: Eq_35
  DataType: int16
  OrigDataType: int16
T_36: (in si_29 *s 0x22E3 : int16)
  Class: Eq_30
  DataType: int16
  OrigDataType: int16
T_37: (in dx_44 : Eq_37)
  Class: Eq_37
  DataType: Eq_37
  OrigDataType: (memptr T_42 (struct (212 T_41 t0212)))
T_38: (in 0x0000 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_39: (in SEQ(0x0000, si_29) : word32)
  Class: Eq_39
  DataType: word32
  OrigDataType: word32
T_40: (in SEQ(0x0000, si_29) % bx_119 : uint16)
  Class: Eq_37
  DataType: Eq_37
  OrigDataType: uint16
T_41: (in v20_50 : word16)
  Class: Eq_41
  DataType: Eq_41
  OrigDataType: word16
T_42: (in ss : selector)
  Class: Eq_42
  DataType: (ptr Eq_42)
  OrigDataType: (ptr (segment))
T_43: (in 0x0212 : word16)
  Class: Eq_43
  DataType: word16
  OrigDataType: word16
T_44: (in dx_44 + 0x0212 : word16)
  Class: Eq_44
  DataType: word16
  OrigDataType: word16
T_45: (in Mem13[ss:dx_44 + 0x0212:byte] : byte)
  Class: Eq_41
  DataType: Eq_41
  OrigDataType: byte
T_46: (in cs : selector)
  Class: Eq_46
  DataType: (ptr Eq_46)
  OrigDataType: (ptr (segment (1E2 (arr T_159) a01E2) (1EA T_81 t01EA)))
T_47: (in 0x0212 : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_48: (in bx_119 + 0x0212 : word16)
  Class: Eq_48
  DataType: word16
  OrigDataType: word16
T_49: (in Mem13[cs:bx_119 + 0x0212:byte] : byte)
  Class: Eq_41
  DataType: Eq_41
  OrigDataType: byte
T_50: (in 0x0212 : word16)
  Class: Eq_50
  DataType: word16
  OrigDataType: word16
T_51: (in dx_44 + 0x0212 : word16)
  Class: Eq_51
  DataType: word16
  OrigDataType: word16
T_52: (in Mem51[ss:dx_44 + 0x0212:byte] : byte)
  Class: Eq_41
  DataType: Eq_41
  OrigDataType: byte
T_53: (in 0x0000 : word16)
  Class: Eq_53
  DataType: word16
  OrigDataType: word16
T_54: (in di_24 + 0x0000 : word16)
  Class: Eq_54
  DataType: word16
  OrigDataType: word16
T_55: (in Mem53[es:di_24 + 0x0000:byte] : byte)
  Class: Eq_41
  DataType: Eq_41
  OrigDataType: byte
T_56: (in 0x0001 : word16)
  Class: Eq_56
  DataType: word16
  OrigDataType: word16
T_57: (in di_24 + 0x0001 : word16)
  Class: Eq_24
  DataType: (memptr (ptr Eq_10) Eq_24)
  OrigDataType: word16
T_58: (in (byte) bx_119 : byte)
  Class: Eq_58
  DataType: byte
  OrigDataType: byte
T_59: (in 0x04 : byte)
  Class: Eq_58
  DataType: byte
  OrigDataType: byte
T_60: (in (byte) bx_119 != 0x04 : bool)
  Class: Eq_60
  DataType: bool
  OrigDataType: bool
T_61: (in 0x24 : byte)
  Class: Eq_41
  DataType: byte
  OrigDataType: byte
T_62: (in 0x0000 : word16)
  Class: Eq_62
  DataType: word16
  OrigDataType: word16
T_63: (in di_24 + 0x0000 : word16)
  Class: Eq_63
  DataType: word16
  OrigDataType: word16
T_64: (in Mem58[es:di_24 + 0x0000:byte] : byte)
  Class: Eq_41
  DataType: Eq_41
  OrigDataType: byte
T_65: (in fn0C00_018B : ptr32)
  Class: Eq_65
  DataType: (ptr Eq_65)
  OrigDataType: (ptr (fn T_70 (T_69, T_46)))
T_66: (in signature of fn0C00_018B : void)
  Class: Eq_65
  DataType: (ptr Eq_65)
  OrigDataType: 
T_67: (in dl : byte)
  Class: Eq_67
  DataType: byte
  OrigDataType: byte
T_68: (in ds : (ptr Eq_46))
  Class: Eq_46
  DataType: (ptr Eq_46)
  OrigDataType: (ptr (segment))
T_69: (in 0x96 : byte)
  Class: Eq_67
  DataType: byte
  OrigDataType: byte
T_70: (in fn0C00_018B(0x96, cs) : void)
  Class: Eq_70
  DataType: void
  OrigDataType: void
T_71: (in bp_107 : word16)
  Class: Eq_71
  DataType: word16
  OrigDataType: word16
T_72: (in 0x0014 : word16)
  Class: Eq_71
  DataType: word16
  OrigDataType: word16
T_73: (in fn0C00_018B : ptr32)
  Class: Eq_65
  DataType: (ptr Eq_65)
  OrigDataType: (ptr (fn T_75 (T_74, T_46)))
T_74: (in 0xDA : byte)
  Class: Eq_67
  DataType: byte
  OrigDataType: byte
T_75: (in fn0C00_018B(0xDA, cs) : void)
  Class: Eq_70
  DataType: void
  OrigDataType: void
T_76: (in __syscall : ptr32)
  Class: Eq_76
  DataType: (ptr Eq_76)
  OrigDataType: (ptr (fn T_78 (T_77)))
T_77: (in 0x21 : byte)
  Class: Eq_77
  DataType: byte
  OrigDataType: byte
T_78: (in __syscall(0x21) : void)
  Class: Eq_78
  DataType: void
  OrigDataType: void
T_79: (in al_76 : byte)
  Class: Eq_79
  DataType: byte
  OrigDataType: byte
T_80: (in 0x01EA : word16)
  Class: Eq_80
  DataType: (memptr (ptr Eq_46) byte)
  OrigDataType: (memptr T_46 (struct (0 T_81 t0000)))
T_81: (in Mem58[cs:0x01EA:byte] : byte)
  Class: Eq_79
  DataType: byte
  OrigDataType: byte
T_82: (in 0x00 : byte)
  Class: Eq_79
  DataType: byte
  OrigDataType: byte
T_83: (in al_76 == 0x00 : bool)
  Class: Eq_83
  DataType: bool
  OrigDataType: bool
T_84: (in 0x06 : byte)
  Class: Eq_79
  DataType: byte
  OrigDataType: byte
T_85: (in al_76 != 0x06 : bool)
  Class: Eq_85
  DataType: bool
  OrigDataType: bool
T_86: (in 0x0001 : word16)
  Class: Eq_86
  DataType: word16
  OrigDataType: word16
T_87: (in bp_107 - 0x0001 : word16)
  Class: Eq_71
  DataType: word16
  OrigDataType: word16
T_88: (in 0x0000 : word16)
  Class: Eq_71
  DataType: word16
  OrigDataType: word16
T_89: (in bp_107 != 0x0000 : bool)
  Class: Eq_89
  DataType: bool
  OrigDataType: bool
T_90: (in si_110 : (memptr (ptr Eq_46) byte))
  Class: Eq_90
  DataType: (memptr (ptr Eq_46) byte)
  OrigDataType: (memptr T_46 (struct 0001 (0 T_125 t0000)))
T_91: (in 0x01E2 : word16)
  Class: Eq_90
  DataType: (memptr (ptr Eq_46) byte)
  OrigDataType: word16
T_92: (in dx_111 : word16)
  Class: Eq_92
  DataType: word16
  OrigDataType: word16
T_93: (in 0x6030 : word16)
  Class: Eq_92
  DataType: word16
  OrigDataType: word16
T_94: (in dl_113 : byte)
  Class: Eq_94
  DataType: byte
  OrigDataType: byte
T_95: (in 0x30 : byte)
  Class: Eq_94
  DataType: byte
  OrigDataType: byte
T_96: (in dh_114 : byte)
  Class: Eq_96
  DataType: byte
  OrigDataType: byte
T_97: (in 0x60 : byte)
  Class: Eq_96
  DataType: byte
  OrigDataType: byte
T_98: (in 0x06 : byte)
  Class: Eq_98
  DataType: byte
  OrigDataType: byte
T_99: (in DPB(cx, 0x06, 0, 8) : word16)
  Class: Eq_19
  DataType: word16
  OrigDataType: word16
T_100: (in fn0C00_018B : ptr32)
  Class: Eq_65
  DataType: (ptr Eq_65)
  OrigDataType: (ptr (fn T_102 (T_101, T_46)))
T_101: (in 0xE2 : byte)
  Class: Eq_67
  DataType: byte
  OrigDataType: byte
T_102: (in fn0C00_018B(0xE2, cs) : void)
  Class: Eq_70
  DataType: void
  OrigDataType: void
T_103: (in 0x0001 : word16)
  Class: Eq_103
  DataType: word16
  OrigDataType: word16
T_104: (in bx_119 - 0x0001 : word16)
  Class: Eq_26
  DataType: (memptr (ptr Eq_46) Eq_26)
  OrigDataType: word16
T_105: (in 0x0000 : word16)
  Class: Eq_26
  DataType: (memptr (ptr Eq_46) Eq_26)
  OrigDataType: word16
T_106: (in bx_119 == &Eq_46::t0000 : bool)
  Class: Eq_106
  DataType: bool
  OrigDataType: bool
T_107: (in 0x0001 : word16)
  Class: Eq_107
  DataType: word16
  OrigDataType: word16
T_108: (in dx_111 + 0x0001 : word16)
  Class: Eq_92
  DataType: word16
  OrigDataType: word16
T_109: (in (byte) dx_111 : byte)
  Class: Eq_94
  DataType: byte
  OrigDataType: byte
T_110: (in SLICE(dx_111, byte, 8) : byte)
  Class: Eq_96
  DataType: byte
  OrigDataType: byte
T_111: (in 0x0001 : word16)
  Class: Eq_111
  DataType: word16
  OrigDataType: word16
T_112: (in cx - 0x0001 : word16)
  Class: Eq_19
  DataType: word16
  OrigDataType: word16
T_113: (in 0x0000 : word16)
  Class: Eq_19
  DataType: word16
  OrigDataType: word16
T_114: (in cx != 0x0000 : bool)
  Class: Eq_114
  DataType: bool
  OrigDataType: bool
T_115: (in al_127 : byte)
  Class: Eq_115
  DataType: byte
  OrigDataType: byte
T_116: (in 0x01EA : word16)
  Class: Eq_116
  DataType: word16
  OrigDataType: word16
T_117: (in bx_119 + 0x01EA : word16)
  Class: Eq_117
  DataType: word16
  OrigDataType: word16
T_118: (in Mem58[cs:bx_119 + 0x01EA:byte] : byte)
  Class: Eq_115
  DataType: byte
  OrigDataType: byte
T_119: (in al_127 != (cs->*bx_119).b01EA : bool)
  Class: Eq_119
  DataType: bool
  OrigDataType: bool
T_120: (in 0x01 : byte)
  Class: Eq_120
  DataType: byte
  OrigDataType: byte
T_121: (in dh_114 + 0x01 : byte)
  Class: Eq_96
  DataType: byte
  OrigDataType: byte
T_122: (in DPB(dx_111, dh_114, 8, 8) : word16)
  Class: Eq_92
  DataType: word16
  OrigDataType: word16
T_123: (in 0x0000 : word16)
  Class: Eq_123
  DataType: word16
  OrigDataType: word16
T_124: (in si_110 + 0x0000 : word16)
  Class: Eq_124
  DataType: word16
  OrigDataType: word16
T_125: (in Mem58[cs:si_110 + 0x0000:byte] : byte)
  Class: Eq_115
  DataType: byte
  OrigDataType: byte
T_126: (in 0x0001 : word16)
  Class: Eq_126
  DataType: word16
  OrigDataType: word16
T_127: (in si_110 + 0x0001 : word16)
  Class: Eq_90
  DataType: (memptr (ptr Eq_46) byte)
  OrigDataType: word16
T_128: (in 0x08 : byte)
  Class: Eq_128
  DataType: byte
  OrigDataType: byte
T_129: (in DPB(bx_119, 0x08, 0, 8) : word16)
  Class: Eq_26
  DataType: (memptr (ptr Eq_46) Eq_26)
  OrigDataType: word16
T_130: (in bx_119 + si_110 : word16)
  Class: Eq_130
  DataType: word16
  OrigDataType: word16
T_131: (in Mem58[cs:bx_119 + si_110:byte] : byte)
  Class: Eq_115
  DataType: byte
  OrigDataType: byte
T_132: (in al_127 != Mem58[cs:bx_119 + si_110:byte] : bool)
  Class: Eq_132
  DataType: bool
  OrigDataType: bool
T_133: (in 0x36 : byte)
  Class: Eq_94
  DataType: byte
  OrigDataType: byte
T_134: (in dl_113 == 0x36 : bool)
  Class: Eq_134
  DataType: bool
  OrigDataType: bool
T_135: (in msdos_write_console_char : ptr32)
  Class: Eq_135
  DataType: (ptr Eq_135)
  OrigDataType: (ptr (fn T_138 (T_94)))
T_136: (in signature of msdos_write_console_char : void)
  Class: Eq_135
  DataType: (ptr Eq_135)
  OrigDataType: 
T_137: (in dl : byte)
  Class: Eq_94
  DataType: byte
  OrigDataType: byte
T_138: (in msdos_write_console_char(dl_113) : void)
  Class: Eq_138
  DataType: void
  OrigDataType: void
T_139: (in msdos_write_console_char : ptr32)
  Class: Eq_135
  DataType: (ptr Eq_135)
  OrigDataType: (ptr (fn T_141 (T_140)))
T_140: (in 0x2F : byte)
  Class: Eq_94
  DataType: byte
  OrigDataType: byte
T_141: (in msdos_write_console_char(0x2F) : void)
  Class: Eq_138
  DataType: void
  OrigDataType: void
T_142: (in msdos_write_console_char : ptr32)
  Class: Eq_135
  DataType: (ptr Eq_135)
  OrigDataType: (ptr (fn T_144 (T_143)))
T_143: (in dh_114 - dl_113 : byte)
  Class: Eq_94
  DataType: byte
  OrigDataType: byte
T_144: (in msdos_write_console_char(dh_114 - dl_113) : void)
  Class: Eq_138
  DataType: void
  OrigDataType: void
T_145: (in fn0C00_018B : ptr32)
  Class: Eq_65
  DataType: (ptr Eq_65)
  OrigDataType: (ptr (fn T_147 (T_146, T_46)))
T_146: (in 0xDE : byte)
  Class: Eq_67
  DataType: byte
  OrigDataType: byte
T_147: (in fn0C00_018B(0xDE, cs) : void)
  Class: Eq_70
  DataType: void
  OrigDataType: void
T_148: (in msdos_display_string : ptr32)
  Class: Eq_148
  DataType: (ptr Eq_148)
  OrigDataType: (ptr (fn T_155 (T_68, T_154)))
T_149: (in signature of msdos_display_string : void)
  Class: Eq_148
  DataType: (ptr Eq_148)
  OrigDataType: 
T_150: (in ds : selector)
  Class: Eq_46
  DataType: (ptr Eq_46)
  OrigDataType: (ptr (segment))
T_151: (in dx : word16)
  Class: Eq_151
  DataType: word16
  OrigDataType: word16
T_152: (in dx : word16)
  Class: Eq_152
  DataType: word16
  OrigDataType: word16
T_153: (in 0x01 : byte)
  Class: Eq_153
  DataType: byte
  OrigDataType: byte
T_154: (in DPB(dx, 0x01, 8, 8) : word16)
  Class: Eq_151
  DataType: word16
  OrigDataType: word16
T_155: (in msdos_display_string(ds, DPB(dx, 0x01, 8, 8)) : void)
  Class: Eq_155
  DataType: void
  OrigDataType: void
T_156:
  Class: Eq_156
  DataType: byte
  OrigDataType: (struct 0001 (0 T_13 t0000))
T_157:
  Class: Eq_157
  DataType: Eq_157
  OrigDataType: (struct 0001 (0 T_55 t0000))
T_158:
  Class: Eq_157
  DataType: Eq_157
  OrigDataType: (struct 0001 (0 T_64 t0000))
T_159:
  Class: Eq_159
  DataType: byte
  OrigDataType: (struct 0001 (0 T_125 t0000))
T_160:
  Class: Eq_160
  DataType: Eq_160
  OrigDataType: 
*/
typedef struct Globals {
} Eq_1;

typedef Eq_157 Eq_10[][]struct Eq_10 {
	Eq_157 a01E2[];	// 1E2
	byte a01E9[];	// 1E9
} Eq_10;

typedef Eq_41 Eq_24struct Eq_24 {	// size: 1 1
	Eq_41 t0000;	// 0
} Eq_24;

typedef Eq_41 Eq_26struct Eq_26 {	// size: 1 1
	byte b0000;	// 0
	byte b01EA;	// 1EA
	Eq_41 t0212;	// 212
} Eq_26;

typedef struct Eq_27 {
	int16 w046C;	// 46C
} Eq_27;

typedef union Eq_37 {
	uint16 u0;
	Eq_160 Eq_42::* u1;
} Eq_37;

typedef union Eq_41 {
	byte u0;
	word16 u1;
} Eq_41;

typedef struct Eq_42 {
} Eq_42;

typedef Eq_26 Eq_46 Eq_46[]struct Eq_46 {
	Eq_26 t0000;	// 0
	byte a01E2[];	// 1E2
	byte b01EA;	// 1EA
} Eq_46;

typedef void (Eq_65)(byte, Eq_46 *);

typedef void (Eq_76)(byte);

typedef void (Eq_135)(byte);

typedef void (Eq_148)(Eq_46 *, word16);

typedef Eq_41 Eq_157struct Eq_157 {	// size: 1 1
	Eq_41 t0000;	// 0
} Eq_157;

typedef Eq_41 Eq_160struct Eq_160 {
	Eq_41 t0212;	// 212
} Eq_160;

