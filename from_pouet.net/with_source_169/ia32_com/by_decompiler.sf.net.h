// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_169/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_106) ptrFFFA0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_13: (union "Eq_13" (cups16 u0) ((memptr (ptr Eq_15) byte) u1))
	T_13 (in di_101 : Eq_13)
	T_14 (in 0x0400 : word16)
	T_16 (in di_40 : Eq_13)
	T_21 (in di_40 + 0x0001 : word16)
	T_30 (in di_131 : Eq_13)
	T_32 (in di_131 + 0x0140 : word16)
	T_33 (in 0x0340 : word16)
	T_60 (in di : Eq_13)
Eq_15: (segment "Eq_15" (400 (arr byte) a0400))
	T_15 (in es : (ptr Eq_15))
	T_48 (in es : (ptr Eq_15))
	T_62 (in es : (ptr Eq_15))
Eq_27: (fn void ())
	T_27 (in msdos_terminate_program20 : ptr32)
	T_28 (in signature of msdos_terminate_program20 : void)
Eq_35: (union "Eq_35" (real16 u0) (real64 u1))
	T_35 (in rLoc2_62 : Eq_35)
	T_38 (in rLoc2 / 32 : word16)
Eq_36: (union "Eq_36" (real16 u0) (real64 u1))
	T_36 (in rLoc2 : real64)
	T_87 (in 1 : real64)
Eq_37: (union "Eq_37" (real16 u0) (real64 u1))
	T_37 (in 32 : real64)
Eq_39: (union "Eq_39" (real16 u0) (real64 u1))
	T_39 (in rLoc2_64 : Eq_39)
	T_41 (in cos(rLoc2_62) : real64)
	T_64 (in rArg0 : Eq_39)
	T_72 (in sin(rLoc2_62) : real64)
Eq_40: (fn Eq_39 (Eq_35))
	T_40 (in cos : ptr32)
Eq_42: (fn word16 ((memptr (ptr Eq_49) Eq_44), cups16, word16, byte, (ptr Eq_15), (ptr Eq_49)))
	T_42 (in fn0C00_015E : ptr32)
	T_43 (in signature of fn0C00_015E : void)
	T_162 (in fn0C00_015E : ptr32)
Eq_44: (struct "Eq_44" (0 int16 w0000) (4 word16 w0004))
	T_44 (in bx : (memptr (ptr Eq_49) Eq_44))
	T_52 (in fp - 0x0006 : word16)
	T_58 (in bx : (memptr (ptr Eq_49) Eq_44))
	T_65 (in fp - 0x0006 : word16)
	T_80 (in fp - 0x0006 : word16)
Eq_49: (segment "Eq_49" (400 (arr byte) a0400))
	T_49 (in ds : (ptr Eq_49))
	T_63 (in ds : (ptr Eq_49))
	T_70 (in ds : (ptr Eq_49))
Eq_50: (union "Eq_50" (ptr16 u0) ((memptr (ptr Eq_92) Eq_169) u1))
	T_50 (in fp : ptr16)
Eq_56: (fn word16 ((memptr (ptr Eq_49) Eq_44), cups16, Eq_13, byte, (ptr Eq_15), (ptr Eq_49), Eq_39))
	T_56 (in fn0C00_0171 : ptr32)
	T_57 (in signature of fn0C00_0171 : void)
	T_79 (in fn0C00_0171 : ptr32)
Eq_71: (fn Eq_39 (Eq_35))
	T_71 (in sin : ptr32)
Eq_84: (fn byte (byte))
	T_84 (in __inb : ptr32)
Eq_92: (segment "Eq_92")
	T_92 (in ss : selector)
Eq_106: (segment "Eq_106" (0 (arr byte) a0000))
	T_106 (in 0xA000 : selector)
Eq_129: (struct "Eq_129" (0 byte b0000) (1 byte b0001) (2 byte b0002))
	T_129 (in di_15 : (memptr (ptr Eq_15) Eq_129))
	T_131 (in di_12 + 0x0001 : word16)
Eq_156: (union "Eq_156" (real16 u0) (real64 u1))
	T_156 (in (real64) (ds->*bx).w0004 : real64)
Eq_169: (struct "Eq_169" (FFFFFFF6 word16 wFFFFFFF6))
	T_169
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
T_7: (in al_2 : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_8: (in 0x13 : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_9: (in ax_31 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_10: (in ax : word16)
  Class: Eq_10
  DataType: word16
  OrigDataType: word16
T_11: (in 0x13 : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_12: (in DPB(ax, 0x13, 0, 8) : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_13: (in di_101 : Eq_13)
  Class: Eq_13
  DataType: Eq_13
  OrigDataType: word16
T_14: (in 0x0400 : word16)
  Class: Eq_13
  DataType: cups16
  OrigDataType: word16
T_15: (in es : (ptr Eq_15))
  Class: Eq_15
  DataType: (ptr Eq_15)
  OrigDataType: (ptr (segment (400 (arr T_166) a0400)))
T_16: (in di_40 : Eq_13)
  Class: Eq_13
  DataType: Eq_13
  OrigDataType: (memptr T_15 (struct 0001 (0 T_19 t0000)))
T_17: (in 0x0000 : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_18: (in di_40 + 0x0000 : word16)
  Class: Eq_18
  DataType: word16
  OrigDataType: word16
T_19: (in Mem49[es:di_40 + 0x0000:byte] : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_20: (in 0x0001 : word16)
  Class: Eq_20
  DataType: word16
  OrigDataType: word16
T_21: (in di_40 + 0x0001 : word16)
  Class: Eq_13
  DataType: Eq_13
  OrigDataType: word16
T_22: (in cx_44 : word16)
  Class: Eq_22
  DataType: word16
  OrigDataType: word16
T_23: (in 0x0001 : word16)
  Class: Eq_23
  DataType: word16
  OrigDataType: word16
T_24: (in cx_44 - 0x0001 : word16)
  Class: Eq_22
  DataType: word16
  OrigDataType: word16
T_25: (in 0x0000 : word16)
  Class: Eq_22
  DataType: word16
  OrigDataType: word16
T_26: (in cx_44 == 0x0000 : bool)
  Class: Eq_26
  DataType: bool
  OrigDataType: bool
T_27: (in msdos_terminate_program20 : ptr32)
  Class: Eq_27
  DataType: (ptr Eq_27)
  OrigDataType: (ptr (fn T_29 ()))
T_28: (in signature of msdos_terminate_program20 : void)
  Class: Eq_27
  DataType: (ptr Eq_27)
  OrigDataType: 
T_29: (in msdos_terminate_program20() : void)
  Class: Eq_29
  DataType: void
  OrigDataType: void
T_30: (in di_131 : Eq_13)
  Class: Eq_13
  DataType: Eq_13
  OrigDataType: cups16
T_31: (in 0x0140 : word16)
  Class: Eq_31
  DataType: word16
  OrigDataType: word16
T_32: (in di_131 + 0x0140 : word16)
  Class: Eq_13
  DataType: Eq_13
  OrigDataType: word16
T_33: (in 0x0340 : word16)
  Class: Eq_13
  DataType: cups16
  OrigDataType: cups16
T_34: (in di_131 <u 0x0340 : bool)
  Class: Eq_34
  DataType: bool
  OrigDataType: bool
T_35: (in rLoc2_62 : Eq_35)
  Class: Eq_35
  DataType: Eq_35
  OrigDataType: real64
T_36: (in rLoc2 : real64)
  Class: Eq_36
  DataType: Eq_36
  OrigDataType: (union (real16 u0) (real64 u1))
T_37: (in 32 : real64)
  Class: Eq_37
  DataType: real16
  OrigDataType: (union (real16 u0) (real64 u1))
T_38: (in rLoc2 / 32 : word16)
  Class: Eq_35
  DataType: Eq_35
  OrigDataType: real16
T_39: (in rLoc2_64 : Eq_39)
  Class: Eq_39
  DataType: Eq_39
  OrigDataType: real64
T_40: (in cos : ptr32)
  Class: Eq_40
  DataType: (ptr Eq_40)
  OrigDataType: (ptr (fn T_41 (T_35)))
T_41: (in cos(rLoc2_62) : real64)
  Class: Eq_39
  DataType: Eq_39
  OrigDataType: real64
T_42: (in fn0C00_015E : ptr32)
  Class: Eq_42
  DataType: (ptr Eq_42)
  OrigDataType: (ptr (fn T_77 (T_52, T_53, T_55, T_76, T_15, T_70)))
T_43: (in signature of fn0C00_015E : void)
  Class: Eq_42
  DataType: (ptr Eq_42)
  OrigDataType: 
T_44: (in bx : (memptr (ptr Eq_49) Eq_44))
  Class: Eq_44
  DataType: (memptr (ptr Eq_49) Eq_44)
  OrigDataType: (memptr T_49 (struct (0 T_124 t0000)))
T_45: (in bp : cups16)
  Class: Eq_45
  DataType: cups16
  OrigDataType: cups16
T_46: (in di : word16)
  Class: Eq_46
  DataType: word16
  OrigDataType: word16
T_47: (in al : byte)
  Class: Eq_47
  DataType: byte
  OrigDataType: byte
T_48: (in es : (ptr Eq_15))
  Class: Eq_15
  DataType: (ptr Eq_15)
  OrigDataType: (ptr (segment))
T_49: (in ds : (ptr Eq_49))
  Class: Eq_49
  DataType: (ptr Eq_49)
  OrigDataType: (ptr (segment))
T_50: (in fp : ptr16)
  Class: Eq_50
  DataType: Eq_50
  OrigDataType: (union (ptr16 u0) ((memptr T_92 (struct (FFFFFFF6 T_95 tFFFFFFF6))) u1))
T_51: (in 0x0006 : word16)
  Class: Eq_51
  DataType: word16
  OrigDataType: word16
T_52: (in fp - 0x0006 : word16)
  Class: Eq_44
  DataType: (memptr (ptr Eq_49) Eq_44)
  OrigDataType: word16
T_53: (in 0xFE00 : word16)
  Class: Eq_45
  DataType: cups16
  OrigDataType: word16
T_54: (in 0x0096 : word16)
  Class: Eq_54
  DataType: word16
  OrigDataType: word16
T_55: (in di_131 + 0x0096 : word16)
  Class: Eq_46
  DataType: word16
  OrigDataType: word16
T_56: (in fn0C00_0171 : ptr32)
  Class: Eq_56
  DataType: (ptr Eq_56)
  OrigDataType: (ptr (fn T_73 (T_65, T_66, T_30, T_69, T_15, T_70, T_72)))
T_57: (in signature of fn0C00_0171 : void)
  Class: Eq_56
  DataType: (ptr Eq_56)
  OrigDataType: 
T_58: (in bx : (memptr (ptr Eq_49) Eq_44))
  Class: Eq_44
  DataType: (memptr (ptr Eq_49) Eq_44)
  OrigDataType: (memptr T_63 (struct (0 T_161 t0000) (4 T_155 t0004)))
T_59: (in bp : cups16)
  Class: Eq_45
  DataType: cups16
  OrigDataType: word16
T_60: (in di : Eq_13)
  Class: Eq_13
  DataType: Eq_13
  OrigDataType: word16
T_61: (in al : byte)
  Class: Eq_47
  DataType: byte
  OrigDataType: byte
T_62: (in es : (ptr Eq_15))
  Class: Eq_15
  DataType: (ptr Eq_15)
  OrigDataType: (ptr (segment))
T_63: (in ds : (ptr Eq_49))
  Class: Eq_49
  DataType: (ptr Eq_49)
  OrigDataType: (ptr (segment))
T_64: (in rArg0 : Eq_39)
  Class: Eq_39
  DataType: Eq_39
  OrigDataType: (union (real16 u0) (real64 u1))
T_65: (in fp - 0x0006 : word16)
  Class: Eq_44
  DataType: (memptr (ptr Eq_49) Eq_44)
  OrigDataType: word16
T_66: (in 0xFE00 : word16)
  Class: Eq_45
  DataType: cups16
  OrigDataType: word16
T_67: (in 0x0001 : word16)
  Class: Eq_67
  DataType: word16
  OrigDataType: word16
T_68: (in ax_31 + 0x0001 : word16)
  Class: Eq_68
  DataType: word16
  OrigDataType: word16
T_69: (in (byte) (ax_31 + 0x0001) : byte)
  Class: Eq_47
  DataType: byte
  OrigDataType: byte
T_70: (in ds : (ptr Eq_49))
  Class: Eq_49
  DataType: (ptr Eq_49)
  OrigDataType: (ptr (segment (400 (arr byte) a0400)))
T_71: (in sin : ptr32)
  Class: Eq_71
  DataType: (ptr Eq_71)
  OrigDataType: (ptr (fn T_72 (T_35)))
T_72: (in sin(rLoc2_62) : real64)
  Class: Eq_39
  DataType: Eq_39
  OrigDataType: real64
T_73: (in fn0C00_0171(fp - 0x0006, 0xFE00, di_131, (byte) (ax_31 + 0x0001), es, ds, sin(rLoc2_62)) : word16)
  Class: Eq_73
  DataType: word16
  OrigDataType: word16
T_74: (in 0x0001 : word16)
  Class: Eq_74
  DataType: word16
  OrigDataType: word16
T_75: (in fn0C00_0171(fp - 0x0006, 0xFE00, di_131, (byte) (ax_31 + 0x0001), es, ds, sin(rLoc2_62)) + 0x0001 : word16)
  Class: Eq_75
  DataType: word16
  OrigDataType: word16
T_76: (in (byte) (fn0C00_0171(fp - 0x0006, 0xFE00, di_131, (byte) (ax_31 + 0x0001), es, ds, sin(rLoc2_62)) + 0x0001) : byte)
  Class: Eq_47
  DataType: byte
  OrigDataType: byte
T_77: (in fn0C00_015E(fp - 0x0006, 0xFE00, di_131.u0, (byte) (fn0C00_0171(fp - 0x0006, 0xFE00, di_131, (byte) (ax_31 + 0x0001), es, ds, sin(rLoc2_62)) + 0x0001), es, ds) : word16)
  Class: Eq_77
  DataType: word16
  OrigDataType: word16
T_78: (in ax_91 : word16)
  Class: Eq_73
  DataType: word16
  OrigDataType: word16
T_79: (in fn0C00_0171 : ptr32)
  Class: Eq_56
  DataType: (ptr Eq_56)
  OrigDataType: (ptr (fn T_83 (T_80, T_81, T_30, T_82, T_15, T_70, T_39)))
T_80: (in fp - 0x0006 : word16)
  Class: Eq_44
  DataType: (memptr (ptr Eq_49) Eq_44)
  OrigDataType: word16
T_81: (in 0xFE00 : word16)
  Class: Eq_45
  DataType: cups16
  OrigDataType: word16
T_82: (in 0x04 : byte)
  Class: Eq_47
  DataType: byte
  OrigDataType: byte
T_83: (in fn0C00_0171(fp - 0x0006, 0xFE00, di_131, 0x04, es, ds, rLoc2_64) : word16)
  Class: Eq_73
  DataType: word16
  OrigDataType: word16
T_84: (in __inb : ptr32)
  Class: Eq_84
  DataType: (ptr Eq_84)
  OrigDataType: (ptr (fn T_86 (T_85)))
T_85: (in 0x60 : byte)
  Class: Eq_85
  DataType: byte
  OrigDataType: byte
T_86: (in __inb(0x60) : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_87: (in 1 : real64)
  Class: Eq_36
  DataType: real64
  OrigDataType: real64
T_88: (in DPB(ax_91, al_2, 0, 8) : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_89: (in 0x01 : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_90: (in al_2 == 0x01 : bool)
  Class: Eq_90
  DataType: bool
  OrigDataType: bool
T_91: (in 0xA000 : word16)
  Class: Eq_91
  DataType: word16
  OrigDataType: word16
T_92: (in ss : selector)
  Class: Eq_92
  DataType: (ptr Eq_92)
  OrigDataType: (ptr (segment))
T_93: (in 0x000A : word16)
  Class: Eq_93
  DataType: word16
  OrigDataType: word16
T_94: (in fp - 0x000A : word16)
  Class: Eq_94
  DataType: word16
  OrigDataType: word16
T_95: (in Mem107[ss:fp - 0x000A:word16] : word16)
  Class: Eq_91
  DataType: word16
  OrigDataType: word16
T_96: (in 0xFA : byte)
  Class: Eq_96
  DataType: byte
  OrigDataType: byte
T_97: (in DPB(cx_44, 0xFA, 8, 8) : word16)
  Class: Eq_97
  DataType: word16
  OrigDataType: word16
T_98: (in cx : word16)
  Class: Eq_97
  DataType: word16
  OrigDataType: word16
T_99: (in si_113 : (memptr (ptr Eq_49) byte))
  Class: Eq_99
  DataType: (memptr (ptr Eq_49) byte)
  OrigDataType: (memptr T_70 (struct 0001 (0 T_105 t0000)))
T_100: (in 0x0400 : word16)
  Class: Eq_99
  DataType: (memptr (ptr Eq_49) byte)
  OrigDataType: word16
T_101: (in di_114 : (memptr (ptr Eq_106) byte))
  Class: Eq_101
  DataType: (memptr (ptr Eq_106) byte)
  OrigDataType: (memptr T_106 (struct 0001 (0 T_109 t0000)))
T_102: (in 0x0000 : word16)
  Class: Eq_101
  DataType: (memptr (ptr Eq_106) byte)
  OrigDataType: word16
T_103: (in 0x0000 : word16)
  Class: Eq_103
  DataType: word16
  OrigDataType: word16
T_104: (in si_113 + 0x0000 : word16)
  Class: Eq_104
  DataType: word16
  OrigDataType: word16
T_105: (in Mem107[ds:si_113 + 0x0000:byte] : byte)
  Class: Eq_105
  DataType: byte
  OrigDataType: byte
T_106: (in 0xA000 : selector)
  Class: Eq_106
  DataType: (ptr Eq_106)
  OrigDataType: (ptr (segment (0 (arr T_168) a0000)))
T_107: (in 0x0000 : word16)
  Class: Eq_107
  DataType: word16
  OrigDataType: word16
T_108: (in di_114 + 0x0000 : word16)
  Class: Eq_108
  DataType: word16
  OrigDataType: word16
T_109: (in Mem123[0xA000:di_114 + 0x0000:byte] : byte)
  Class: Eq_105
  DataType: byte
  OrigDataType: byte
T_110: (in 0x0001 : word16)
  Class: Eq_110
  DataType: word16
  OrigDataType: word16
T_111: (in si_113 + 0x0001 : word16)
  Class: Eq_99
  DataType: (memptr (ptr Eq_49) byte)
  OrigDataType: word16
T_112: (in 0x0001 : word16)
  Class: Eq_112
  DataType: word16
  OrigDataType: word16
T_113: (in di_114 + 0x0001 : word16)
  Class: Eq_101
  DataType: (memptr (ptr Eq_106) byte)
  OrigDataType: word16
T_114: (in 0x0001 : word16)
  Class: Eq_114
  DataType: word16
  OrigDataType: word16
T_115: (in cx - 0x0001 : word16)
  Class: Eq_97
  DataType: word16
  OrigDataType: word16
T_116: (in 0x0000 : word16)
  Class: Eq_97
  DataType: word16
  OrigDataType: word16
T_117: (in cx == 0x0000 : bool)
  Class: Eq_117
  DataType: bool
  OrigDataType: bool
T_118: (in 0xFA : byte)
  Class: Eq_118
  DataType: byte
  OrigDataType: byte
T_119: (in DPB(cx, 0xFA, 8, 8) : word16)
  Class: Eq_22
  DataType: word16
  OrigDataType: word16
T_120: (in ax : word16)
  Class: Eq_120
  DataType: word16
  OrigDataType: word16
T_121: (in di_12 : (memptr (ptr Eq_15) byte))
  Class: Eq_121
  DataType: (memptr (ptr Eq_15) byte)
  OrigDataType: (memptr T_48 (struct 0001 (0 T_128 t0000)))
T_122: (in 0x0000 : word16)
  Class: Eq_122
  DataType: word16
  OrigDataType: word16
T_123: (in bx + 0x0000 : word16)
  Class: Eq_123
  DataType: word16
  OrigDataType: word16
T_124: (in Mem0[ds:bx + 0x0000:word16] : word16)
  Class: Eq_124
  DataType: int16
  OrigDataType: word16
T_125: (in di + (ds->*bx).w0000 : word16)
  Class: Eq_121
  DataType: (memptr (ptr Eq_15) byte)
  OrigDataType: word16
T_126: (in 0x0000 : word16)
  Class: Eq_126
  DataType: word16
  OrigDataType: word16
T_127: (in di_12 + 0x0000 : word16)
  Class: Eq_127
  DataType: word16
  OrigDataType: word16
T_128: (in Mem13[es:di_12 + 0x0000:byte] : byte)
  Class: Eq_47
  DataType: byte
  OrigDataType: byte
T_129: (in di_15 : (memptr (ptr Eq_15) Eq_129))
  Class: Eq_129
  DataType: (memptr (ptr Eq_15) Eq_129)
  OrigDataType: (memptr T_48 (struct (0 T_134 t0000) (1 T_140 t0001) (2 T_143 t0002)))
T_130: (in 0x0001 : word16)
  Class: Eq_130
  DataType: word16
  OrigDataType: word16
T_131: (in di_12 + 0x0001 : word16)
  Class: Eq_129
  DataType: (memptr (ptr Eq_15) Eq_129)
  OrigDataType: word16
T_132: (in 0x0000 : word16)
  Class: Eq_132
  DataType: word16
  OrigDataType: word16
T_133: (in di_15 + 0x0000 : word16)
  Class: Eq_133
  DataType: word16
  OrigDataType: word16
T_134: (in Mem16[es:di_15 + 0x0000:byte] : byte)
  Class: Eq_47
  DataType: byte
  OrigDataType: byte
T_135: (in al_18 : byte)
  Class: Eq_135
  DataType: byte
  OrigDataType: byte
T_136: (in 0x08 : byte)
  Class: Eq_136
  DataType: byte
  OrigDataType: byte
T_137: (in al ^ 0x08 : byte)
  Class: Eq_135
  DataType: byte
  OrigDataType: byte
T_138: (in 0x0001 : word16)
  Class: Eq_138
  DataType: word16
  OrigDataType: word16
T_139: (in di_15 + 0x0001 : word16)
  Class: Eq_139
  DataType: word16
  OrigDataType: word16
T_140: (in Mem19[es:di_15 + 0x0001:byte] : byte)
  Class: Eq_135
  DataType: byte
  OrigDataType: byte
T_141: (in 0x0002 : word16)
  Class: Eq_141
  DataType: word16
  OrigDataType: word16
T_142: (in di_15 + 0x0002 : word16)
  Class: Eq_142
  DataType: word16
  OrigDataType: word16
T_143: (in Mem21[es:di_15 + 0x0002:byte] : byte)
  Class: Eq_135
  DataType: byte
  OrigDataType: byte
T_144: (in 0x08 : byte)
  Class: Eq_144
  DataType: byte
  OrigDataType: byte
T_145: (in al_18 ^ 0x08 : byte)
  Class: Eq_47
  DataType: byte
  OrigDataType: byte
T_146: (in al_18 ^ 0x08 : byte)
  Class: Eq_146
  DataType: byte
  OrigDataType: byte
T_147: (in DPB(ax, al_18 ^ 0x08, 0, 8) : word16)
  Class: Eq_120
  DataType: word16
  OrigDataType: word16
T_148: (in 0x013F : word16)
  Class: Eq_148
  DataType: word16
  OrigDataType: word16
T_149: (in di_15 + 0x013F : word16)
  Class: Eq_121
  DataType: (memptr (ptr Eq_15) byte)
  OrigDataType: word16
T_150: (in di_15 + 0x013F : word16)
  Class: Eq_45
  DataType: cups16
  OrigDataType: cups16
T_151: (in &di_15->b0002 <u bp : bool)
  Class: Eq_151
  DataType: bool
  OrigDataType: bool
T_152: (in ax : word16)
  Class: Eq_152
  DataType: word16
  OrigDataType: word16
T_153: (in 0x0004 : word16)
  Class: Eq_153
  DataType: word16
  OrigDataType: word16
T_154: (in bx + 0x0004 : word16)
  Class: Eq_154
  DataType: word16
  OrigDataType: word16
T_155: (in Mem0[ds:bx + 0x0004:word16] : word16)
  Class: Eq_155
  DataType: word16
  OrigDataType: word16
T_156: (in (real64) (ds->*bx).w0004 : real64)
  Class: Eq_156
  DataType: Eq_156
  OrigDataType: (union (real16 u0) (real64 u1))
T_157: (in rArg0 * (real64) (ds->*bx).w0004 : word16)
  Class: Eq_157
  DataType: real16
  OrigDataType: real16
T_158: (in (int16) (rArg0 * (real64) (ds->*bx).w0004) : int16)
  Class: Eq_124
  DataType: int16
  OrigDataType: int16
T_159: (in 0x0000 : word16)
  Class: Eq_159
  DataType: word16
  OrigDataType: word16
T_160: (in bx + 0x0000 : word16)
  Class: Eq_160
  DataType: word16
  OrigDataType: word16
T_161: (in Mem7[ds:bx + 0x0000:int16] : int16)
  Class: Eq_124
  DataType: int16
  OrigDataType: int16
T_162: (in fn0C00_015E : ptr32)
  Class: Eq_42
  DataType: (ptr Eq_42)
  OrigDataType: (ptr (fn T_165 (T_58, T_59, T_164, T_61, T_62, T_63)))
T_163: (in 0x00AA : word16)
  Class: Eq_163
  DataType: word16
  OrigDataType: word16
T_164: (in di + 0x00AA : word16)
  Class: Eq_46
  DataType: word16
  OrigDataType: word16
T_165: (in fn0C00_015E(bx, bp, di + 0x00AA, al, es, ds) : word16)
  Class: Eq_77
  DataType: word16
  OrigDataType: word16
T_166:
  Class: Eq_166
  DataType: byte
  OrigDataType: (struct 0001 (0 T_19 t0000))
T_167:
  Class: Eq_167
  DataType: byte
  OrigDataType: (struct 0001 (0 T_105 t0000))
T_168:
  Class: Eq_168
  DataType: byte
  OrigDataType: (struct 0001 (0 T_109 t0000))
T_169:
  Class: Eq_169
  DataType: Eq_169
  OrigDataType: 
*/
typedef Eq_106 Eq_1struct Globals {
	Eq_106 * ptrFFFA0000;	// FFFA0000
} Eq_1;

typedef void (Eq_2)(byte);

typedef union Eq_13 {
	cups16 u0;
	byte Eq_15::* u1;
} Eq_13;

typedef  Eq_15[]struct Eq_15 {
	byte a0400[];	// 400
} Eq_15;

typedef void (Eq_27)();

typedef union Eq_35 {
	real16 u0;
	real64 u1;
} Eq_35;

typedef union Eq_36 {
	real16 u0;
	real64 u1;
} Eq_36;

typedef union Eq_37 {
	real16 u0;
	real64 u1;
} Eq_37;

typedef union Eq_39 {
	real16 u0;
	real64 u1;
} Eq_39;

typedef Eq_39 (Eq_40)(Eq_35);

typedef word16 (Eq_42)(Eq_44 Eq_49::*, cups16, word16, byte, Eq_15 *, Eq_49 *);

typedef struct Eq_44 {
	int16 w0000;	// 0
	word16 w0004;	// 4
} Eq_44;

typedef  Eq_49[]struct Eq_49 {
	byte a0400[];	// 400
} Eq_49;

typedef union Eq_50 {
	ptr16 u0;
	Eq_169 Eq_92::* u1;
} Eq_50;

typedef word16 (Eq_56)(Eq_44 Eq_49::*, cups16, Eq_13, byte, Eq_15 *, Eq_49 *, Eq_39);

typedef Eq_39 (Eq_71)(Eq_35);

typedef byte (Eq_84)(byte);

typedef struct Eq_92 {
} Eq_92;

typedef  Eq_106[]struct Eq_106 {
	byte a0000[];	// 0
} Eq_106;

typedef struct Eq_129 {
	byte b0000;	// 0
	byte b0001;	// 1
	byte b0002;	// 2
} Eq_129;

typedef union Eq_156 {
	real16 u0;
	real64 u1;
} Eq_156;

typedef struct Eq_169 {
	word16 wFFFFFFF6;	// FFFFFFF6
} Eq_169;

