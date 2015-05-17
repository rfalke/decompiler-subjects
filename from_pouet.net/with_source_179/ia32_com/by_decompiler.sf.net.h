// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_179/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_13: (segment "Eq_13" (0 (arr word16) a0000) (179 (arr int16) a0179) (17F word16 w017F) (181 word16 w0181) (183 (arr int16) a0183) (18B (arr int16) a018B) (19A (arr byte) a019A))
	T_13 (in es_9 : (ptr Eq_13))
	T_14 (in ds : (ptr Eq_13))
	T_19 (in SLICE(ds->*bx, selector, 16) : selector)
Eq_20: (struct "Eq_20" 0002 (0 word16 w0000) (179 int16 w0179) (183 int16 w0183) (18B int16 w018B))
	T_20 (in di_35 : (memptr (ptr Eq_13) Eq_20))
	T_63 (in di_35 + 0x0002 : word16)
	T_151 (in 0x0000 : word16)
Eq_29: (union "Eq_29" (real16 u0) (real64 u1))
	T_29 (in rLoc1_47 : Eq_29)
	T_37 (in (real64) (ds->*di_35).w0179 / (real64) ds->w017F : word16)
Eq_33: (union "Eq_33" (real16 u0) (real64 u1))
	T_33 (in (real64) (ds->*di_35).w0179 : real64)
Eq_36: (union "Eq_36" (real16 u0) (real64 u1))
	T_36 (in (real64) ds->w017F : real64)
Eq_38: (union "Eq_38" (real16 u0) (real64 u1))
	T_38 (in rLoc1_49 : Eq_38)
	T_40 (in cos(rLoc1_47) : real64)
Eq_39: (fn Eq_38 (Eq_29))
	T_39 (in cos : ptr32)
Eq_41: (fn Eq_42 (Eq_29))
	T_41 (in sin : ptr32)
Eq_42: (union "Eq_42" (real16 u0) (real64 u1))
	T_42 (in sin(rLoc1_47) : real64)
Eq_45: (union "Eq_45" (real16 u0) (real64 u1))
	T_45 (in (real64) ds->w0181 : real64)
Eq_53: (union "Eq_53" (real16 u0) (real64 u1))
	T_53 (in (real64) ds->w017F : real64)
Eq_108: (struct "Eq_108" (FFFFBC30 byte bFFFFBC30))
	T_108 (in dx *s 0x0140 + bx : word16)
Eq_112: (fn word16 (word16, byte))
	T_112 (in __rol : ptr32)
Eq_121: (struct "Eq_121" (183 word16 w0183))
	T_121 (in di_106 & 0x0006 : word16)
Eq_129: (struct "Eq_129" (18B word16 w018B))
	T_129 (in di_106 & 0x0006 : word16)
Eq_142: (fn byte (byte))
	T_142 (in __inb : ptr32)
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
T_7: (in al_104 : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_8: (in 0x13 : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_9: (in ax_103 : word16)
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
T_13: (in es_9 : (ptr Eq_13))
  Class: Eq_13
  DataType: (ptr Eq_13)
  OrigDataType: (ptr (segment (0 (arr T_159) a0000) (19A (arr T_161) a019A)))
T_14: (in ds : (ptr Eq_13))
  Class: Eq_13
  DataType: (ptr Eq_13)
  OrigDataType: (ptr (segment (179 (arr T_154) a0179) (17F T_35 t017F) (181 T_44 t0181) (183 (arr T_157) a0183) (18B (arr T_158) a018B) (19A (arr T_160) a019A)))
T_15: (in bx : (memptr (ptr Eq_13) segptr32))
  Class: Eq_15
  DataType: (memptr (ptr Eq_13) segptr32)
  OrigDataType: (memptr T_14 (struct (0 T_18 t0000)))
T_16: (in 0x0000 : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_17: (in bx + 0x0000 : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_18: (in Mem0[ds:bx + 0x0000:segptr32] : segptr32)
  Class: Eq_18
  DataType: segptr32
  OrigDataType: segptr32
T_19: (in SLICE(ds->*bx, selector, 16) : selector)
  Class: Eq_13
  DataType: (ptr Eq_13)
  OrigDataType: (ptr (segment))
T_20: (in di_35 : (memptr (ptr Eq_13) Eq_20))
  Class: Eq_20
  DataType: (memptr (ptr Eq_13) Eq_20)
  OrigDataType: (memptr T_13 (struct 0002 (0 T_61 t0000) (179 T_23 t0179) (183 T_50 t0183) (18B T_58 t018B)))
T_21: (in 0x0179 : word16)
  Class: Eq_21
  DataType: word16
  OrigDataType: word16
T_22: (in di_35 + 0x0179 : word16)
  Class: Eq_22
  DataType: word16
  OrigDataType: word16
T_23: (in Mem0[ds:di_35 + 0x0179:word16] : word16)
  Class: Eq_23
  DataType: int16
  OrigDataType: word16
T_24: (in 0x0001 : word16)
  Class: Eq_24
  DataType: word16
  OrigDataType: word16
T_25: (in (ds->*di_35).w0179 + 0x0001 : word16)
  Class: Eq_23
  DataType: int16
  OrigDataType: word16
T_26: (in 0x0179 : word16)
  Class: Eq_26
  DataType: word16
  OrigDataType: word16
T_27: (in di_35 + 0x0179 : word16)
  Class: Eq_27
  DataType: word16
  OrigDataType: word16
T_28: (in Mem44[ds:di_35 + 0x0179:word16] : word16)
  Class: Eq_23
  DataType: int16
  OrigDataType: word16
T_29: (in rLoc1_47 : Eq_29)
  Class: Eq_29
  DataType: Eq_29
  OrigDataType: real64
T_30: (in 0x0179 : word16)
  Class: Eq_30
  DataType: word16
  OrigDataType: word16
T_31: (in di_35 + 0x0179 : word16)
  Class: Eq_31
  DataType: word16
  OrigDataType: word16
T_32: (in Mem44[ds:di_35 + 0x0179:int16] : int16)
  Class: Eq_23
  DataType: int16
  OrigDataType: int16
T_33: (in (real64) (ds->*di_35).w0179 : real64)
  Class: Eq_33
  DataType: Eq_33
  OrigDataType: (union (real16 u0) (real64 u1))
T_34: (in 0x017F : word16)
  Class: Eq_34
  DataType: (memptr (ptr Eq_13) word16)
  OrigDataType: (memptr T_14 (struct (0 T_35 t0000)))
T_35: (in Mem44[ds:0x017F:word16] : word16)
  Class: Eq_35
  DataType: word16
  OrigDataType: word16
T_36: (in (real64) ds->w017F : real64)
  Class: Eq_36
  DataType: Eq_36
  OrigDataType: (union (real16 u0) (real64 u1))
T_37: (in (real64) (ds->*di_35).w0179 / (real64) ds->w017F : word16)
  Class: Eq_29
  DataType: Eq_29
  OrigDataType: real16
T_38: (in rLoc1_49 : Eq_38)
  Class: Eq_38
  DataType: Eq_38
  OrigDataType: (union (real16 u0) (real64 u1))
T_39: (in cos : ptr32)
  Class: Eq_39
  DataType: (ptr Eq_39)
  OrigDataType: (ptr (fn T_40 (T_29)))
T_40: (in cos(rLoc1_47) : real64)
  Class: Eq_38
  DataType: Eq_38
  OrigDataType: real64
T_41: (in sin : ptr32)
  Class: Eq_41
  DataType: (ptr Eq_41)
  OrigDataType: (ptr (fn T_42 (T_29)))
T_42: (in sin(rLoc1_47) : real64)
  Class: Eq_42
  DataType: Eq_42
  OrigDataType: (union (real16 u0) (real64 u1))
T_43: (in 0x0181 : word16)
  Class: Eq_43
  DataType: (memptr (ptr Eq_13) word16)
  OrigDataType: (memptr T_14 (struct (0 T_44 t0000)))
T_44: (in Mem44[ds:0x0181:word16] : word16)
  Class: Eq_44
  DataType: word16
  OrigDataType: word16
T_45: (in (real64) ds->w0181 : real64)
  Class: Eq_45
  DataType: Eq_45
  OrigDataType: (union (real16 u0) (real64 u1))
T_46: (in sin(rLoc1_47) * (real64) ds->w0181 : word16)
  Class: Eq_46
  DataType: real16
  OrigDataType: real16
T_47: (in (int16) (sin(rLoc1_47) * (real64) ds->w0181) : int16)
  Class: Eq_47
  DataType: int16
  OrigDataType: int16
T_48: (in 0x0183 : word16)
  Class: Eq_48
  DataType: word16
  OrigDataType: word16
T_49: (in di_35 + 0x0183 : word16)
  Class: Eq_49
  DataType: word16
  OrigDataType: word16
T_50: (in Mem52[ds:di_35 + 0x0183:int16] : int16)
  Class: Eq_47
  DataType: int16
  OrigDataType: int16
T_51: (in 0x017F : word16)
  Class: Eq_51
  DataType: (memptr (ptr Eq_13) word16)
  OrigDataType: (memptr T_14 (struct (0 T_52 t0000)))
T_52: (in Mem52[ds:0x017F:word16] : word16)
  Class: Eq_35
  DataType: word16
  OrigDataType: word16
T_53: (in (real64) ds->w017F : real64)
  Class: Eq_53
  DataType: Eq_53
  OrigDataType: (union (real16 u0) (real64 u1))
T_54: (in rLoc1_49 * (real64) ds->w017F : word16)
  Class: Eq_54
  DataType: real16
  OrigDataType: real16
T_55: (in (int16) (rLoc1_49 * (real64) ds->w017F) : int16)
  Class: Eq_55
  DataType: int16
  OrigDataType: int16
T_56: (in 0x018B : word16)
  Class: Eq_56
  DataType: word16
  OrigDataType: word16
T_57: (in di_35 + 0x018B : word16)
  Class: Eq_57
  DataType: word16
  OrigDataType: word16
T_58: (in Mem54[ds:di_35 + 0x018B:int16] : int16)
  Class: Eq_55
  DataType: int16
  OrigDataType: int16
T_59: (in 0x0000 : word16)
  Class: Eq_59
  DataType: word16
  OrigDataType: word16
T_60: (in di_35 + 0x0000 : word16)
  Class: Eq_60
  DataType: word16
  OrigDataType: word16
T_61: (in Mem55[es_9:di_35 + 0x0000:word16] : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_62: (in 0x0002 : word16)
  Class: Eq_62
  DataType: word16
  OrigDataType: word16
T_63: (in di_35 + 0x0002 : word16)
  Class: Eq_20
  DataType: (memptr (ptr Eq_13) Eq_20)
  OrigDataType: word16
T_64: (in cx_40 : word16)
  Class: Eq_64
  DataType: word16
  OrigDataType: word16
T_65: (in 0x0001 : word16)
  Class: Eq_65
  DataType: word16
  OrigDataType: word16
T_66: (in cx_40 - 0x0001 : word16)
  Class: Eq_64
  DataType: word16
  OrigDataType: word16
T_67: (in 0x0000 : word16)
  Class: Eq_64
  DataType: word16
  OrigDataType: word16
T_68: (in cx_40 != 0x0000 : bool)
  Class: Eq_68
  DataType: bool
  OrigDataType: bool
T_69: (in si_60 : (memptr (ptr Eq_13) byte))
  Class: Eq_69
  DataType: (memptr (ptr Eq_13) byte)
  OrigDataType: (memptr T_14 (struct 0001 (0 T_83 t0000)))
T_70: (in 0x019A : word16)
  Class: Eq_69
  DataType: (memptr (ptr Eq_13) byte)
  OrigDataType: word16
T_71: (in di_61 : (memptr (ptr Eq_13) byte))
  Class: Eq_71
  DataType: (memptr (ptr Eq_13) byte)
  OrigDataType: (memptr T_13 (struct 0001 (0 T_86 t0000)))
T_72: (in 0x019A : word16)
  Class: Eq_71
  DataType: (memptr (ptr Eq_13) byte)
  OrigDataType: word16
T_73: (in cx_63 : word16)
  Class: Eq_73
  DataType: word16
  OrigDataType: word16
T_74: (in 0xF6 : byte)
  Class: Eq_74
  DataType: byte
  OrigDataType: byte
T_75: (in DPB(cx_40, 0xF6, 8, 8) : word16)
  Class: Eq_73
  DataType: word16
  OrigDataType: word16
T_76: (in 0xF7 : byte)
  Class: Eq_76
  DataType: byte
  OrigDataType: byte
T_77: (in DPB(cx_63, 0xF7, 8, 8) : word16)
  Class: Eq_77
  DataType: word16
  OrigDataType: word16
T_78: (in cx : word16)
  Class: Eq_77
  DataType: word16
  OrigDataType: word16
T_79: (in di_107 : (memptr (ptr Eq_13) byte))
  Class: Eq_79
  DataType: (memptr (ptr Eq_13) byte)
  OrigDataType: (memptr T_14 (struct 0001 (0 T_98 t0000)))
T_80: (in 0x019A : word16)
  Class: Eq_79
  DataType: (memptr (ptr Eq_13) byte)
  OrigDataType: word16
T_81: (in 0x0000 : word16)
  Class: Eq_81
  DataType: word16
  OrigDataType: word16
T_82: (in si_60 + 0x0000 : word16)
  Class: Eq_82
  DataType: word16
  OrigDataType: word16
T_83: (in Mem55[ds:si_60 + 0x0000:byte] : byte)
  Class: Eq_83
  DataType: byte
  OrigDataType: byte
T_84: (in 0x0000 : word16)
  Class: Eq_84
  DataType: word16
  OrigDataType: word16
T_85: (in di_61 + 0x0000 : word16)
  Class: Eq_85
  DataType: word16
  OrigDataType: word16
T_86: (in Mem70[es_9:di_61 + 0x0000:byte] : byte)
  Class: Eq_83
  DataType: byte
  OrigDataType: byte
T_87: (in 0x0001 : word16)
  Class: Eq_87
  DataType: word16
  OrigDataType: word16
T_88: (in si_60 + 0x0001 : word16)
  Class: Eq_69
  DataType: (memptr (ptr Eq_13) byte)
  OrigDataType: word16
T_89: (in 0x0001 : word16)
  Class: Eq_89
  DataType: word16
  OrigDataType: word16
T_90: (in di_61 + 0x0001 : word16)
  Class: Eq_71
  DataType: (memptr (ptr Eq_13) byte)
  OrigDataType: word16
T_91: (in 0x0001 : word16)
  Class: Eq_91
  DataType: word16
  OrigDataType: word16
T_92: (in cx_63 - 0x0001 : word16)
  Class: Eq_73
  DataType: word16
  OrigDataType: word16
T_93: (in 0x0000 : word16)
  Class: Eq_73
  DataType: word16
  OrigDataType: word16
T_94: (in cx_63 == 0x0000 : bool)
  Class: Eq_94
  DataType: bool
  OrigDataType: bool
T_95: (in 0x00 : byte)
  Class: Eq_95
  DataType: byte
  OrigDataType: byte
T_96: (in 0x0000 : word16)
  Class: Eq_96
  DataType: word16
  OrigDataType: word16
T_97: (in di_107 + 0x0000 : word16)
  Class: Eq_97
  DataType: word16
  OrigDataType: word16
T_98: (in Mem81[ds:di_107 + 0x0000:byte] : byte)
  Class: Eq_95
  DataType: byte
  OrigDataType: byte
T_99: (in 0x0001 : word16)
  Class: Eq_99
  DataType: word16
  OrigDataType: word16
T_100: (in di_107 + 0x0001 : word16)
  Class: Eq_79
  DataType: (memptr (ptr Eq_13) byte)
  OrigDataType: word16
T_101: (in 0x0001 : word16)
  Class: Eq_101
  DataType: word16
  OrigDataType: word16
T_102: (in cx - 0x0001 : word16)
  Class: Eq_77
  DataType: word16
  OrigDataType: word16
T_103: (in 0x0000 : word16)
  Class: Eq_77
  DataType: word16
  OrigDataType: word16
T_104: (in cx != 0x0000 : bool)
  Class: Eq_104
  DataType: bool
  OrigDataType: bool
T_105: (in dx : int16)
  Class: Eq_105
  DataType: int16
  OrigDataType: int16
T_106: (in 0x0140 : word16)
  Class: Eq_106
  DataType: int16
  OrigDataType: int16
T_107: (in dx *s 0x0140 : int16)
  Class: Eq_107
  DataType: int16
  OrigDataType: int16
T_108: (in dx *s 0x0140 + bx : word16)
  Class: Eq_108
  DataType: (memptr (ptr Eq_13) Eq_108)
  OrigDataType: (memptr T_14 (struct (FFFFBC30 T_111 tFFFFBC30)))
T_109: (in 0xBC30 : word16)
  Class: Eq_109
  DataType: word16
  OrigDataType: word16
T_110: (in dx *s 0x0140 + bx + 0xBC30 : word16)
  Class: Eq_110
  DataType: word16
  OrigDataType: word16
T_111: (in Mem98[ds:dx *s 0x0140 + bx + 0xBC30:byte] : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_112: (in __rol : ptr32)
  Class: Eq_112
  DataType: (ptr Eq_112)
  OrigDataType: (ptr (fn T_115 (T_113, T_114)))
T_113: (in ax_103 + di_107 : word16)
  Class: Eq_113
  DataType: word16
  OrigDataType: word16
T_114: (in 0x02 : byte)
  Class: Eq_114
  DataType: byte
  OrigDataType: byte
T_115: (in __rol(ax_103 + di_107, 0x02) : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_116: (in di_106 : word16)
  Class: Eq_116
  DataType: word16
  OrigDataType: word16
T_117: (in di_107 + ax_103 : word16)
  Class: Eq_116
  DataType: word16
  OrigDataType: word16
T_118: (in (byte) ax_103 : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_119: (in 0x0006 : word16)
  Class: Eq_119
  DataType: word16
  OrigDataType: word16
T_120: (in di_106 & 0x0006 : word16)
  Class: Eq_79
  DataType: (memptr (ptr Eq_13) byte)
  OrigDataType: word16
T_121: (in di_106 & 0x0006 : word16)
  Class: Eq_121
  DataType: (memptr (ptr Eq_13) Eq_121)
  OrigDataType: (memptr T_14 (struct (183 T_124 t0183)))
T_122: (in 0x0183 : word16)
  Class: Eq_122
  DataType: word16
  OrigDataType: word16
T_123: (in (di_106 & 0x0006) + 0x0183 : word16)
  Class: Eq_123
  DataType: word16
  OrigDataType: word16
T_124: (in Mem98[ds:(di_106 & 0x0006) + 0x0183:word16] : word16)
  Class: Eq_124
  DataType: word16
  OrigDataType: word16
T_125: (in (ds->*(di_106 & 0x0006)).w0183 - bx : word16)
  Class: Eq_125
  DataType: int16
  OrigDataType: int16
T_126: (in 0x0001 : word16)
  Class: Eq_126
  DataType: uint16
  OrigDataType: uint16
T_127: (in (ds->*(di_106 & 0x0006)).w0183 - bx >> 0x0001 : word16)
  Class: Eq_127
  DataType: int16
  OrigDataType: int16
T_128: (in bx + (Mem98[ds:(di_106 & 0x0006) + 0x0183:word16] - bx >> 0x0001) : word16)
  Class: Eq_15
  DataType: (memptr (ptr Eq_13) segptr32)
  OrigDataType: word16
T_129: (in di_106 & 0x0006 : word16)
  Class: Eq_129
  DataType: (memptr (ptr Eq_13) Eq_129)
  OrigDataType: (memptr T_14 (struct (18B T_132 t018B)))
T_130: (in 0x018B : word16)
  Class: Eq_130
  DataType: word16
  OrigDataType: word16
T_131: (in (di_106 & 0x0006) + 0x018B : word16)
  Class: Eq_131
  DataType: word16
  OrigDataType: word16
T_132: (in Mem98[ds:(di_106 & 0x0006) + 0x018B:word16] : word16)
  Class: Eq_132
  DataType: word16
  OrigDataType: word16
T_133: (in (ds->*(di_106 & 0x0006)).w018B - dx : word16)
  Class: Eq_133
  DataType: int16
  OrigDataType: int16
T_134: (in 0x0001 : word16)
  Class: Eq_134
  DataType: uint16
  OrigDataType: uint16
T_135: (in (ds->*(di_106 & 0x0006)).w018B - dx >> 0x0001 : word16)
  Class: Eq_135
  DataType: int16
  OrigDataType: int16
T_136: (in dx + ((ds->*(di_106 & 0x0006)).w018B - dx >> 0x0001) : word16)
  Class: Eq_105
  DataType: int16
  OrigDataType: word16
T_137: (in 0x0001 : word16)
  Class: Eq_137
  DataType: word16
  OrigDataType: word16
T_138: (in cx - 0x0001 : word16)
  Class: Eq_77
  DataType: word16
  OrigDataType: word16
T_139: (in 0x0000 : word16)
  Class: Eq_77
  DataType: word16
  OrigDataType: word16
T_140: (in cx != 0x0000 : bool)
  Class: Eq_140
  DataType: bool
  OrigDataType: bool
T_141: (in al_123 : byte)
  Class: Eq_141
  DataType: byte
  OrigDataType: byte
T_142: (in __inb : ptr32)
  Class: Eq_142
  DataType: (ptr Eq_142)
  OrigDataType: (ptr (fn T_144 (T_143)))
T_143: (in 0x60 : byte)
  Class: Eq_143
  DataType: byte
  OrigDataType: byte
T_144: (in __inb(0x60) : byte)
  Class: Eq_141
  DataType: byte
  OrigDataType: byte
T_145: (in 0x01 : byte)
  Class: Eq_145
  DataType: byte
  OrigDataType: byte
T_146: (in al_123 - 0x01 : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_147: (in al_123 - 0x01 : byte)
  Class: Eq_147
  DataType: byte
  OrigDataType: byte
T_148: (in DPB(ax_103, al_123 - 0x01, 0, 8) : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_149: (in 0x01 : byte)
  Class: Eq_141
  DataType: byte
  OrigDataType: byte
T_150: (in al_123 != 0x01 : bool)
  Class: Eq_150
  DataType: bool
  OrigDataType: bool
T_151: (in 0x0000 : word16)
  Class: Eq_20
  DataType: (memptr (ptr Eq_13) Eq_20)
  OrigDataType: word16
T_152: (in 0x03 : byte)
  Class: Eq_152
  DataType: byte
  OrigDataType: byte
T_153: (in DPB(cx, 0x03, 0, 8) : word16)
  Class: Eq_64
  DataType: word16
  OrigDataType: word16
T_154:
  Class: Eq_154
  DataType: int16
  OrigDataType: (struct 0002 (0 T_23 t0000))
T_155:
  Class: Eq_154
  DataType: int16
  OrigDataType: (struct 0002 (0 T_28 t0000))
T_156:
  Class: Eq_154
  DataType: int16
  OrigDataType: (struct 0002 (0 T_32 t0000))
T_157:
  Class: Eq_157
  DataType: int16
  OrigDataType: (struct 0002 (0 T_50 t0000))
T_158:
  Class: Eq_158
  DataType: int16
  OrigDataType: (struct 0002 (0 T_58 t0000))
T_159:
  Class: Eq_159
  DataType: word16
  OrigDataType: (struct 0002 (0 T_61 t0000))
T_160:
  Class: Eq_160
  DataType: byte
  OrigDataType: (struct 0001 (0 T_83 t0000))
T_161:
  Class: Eq_160
  DataType: byte
  OrigDataType: (struct 0001 (0 T_86 t0000))
*/
typedef struct Globals {
} Eq_1;

typedef void (Eq_2)(byte);

typedef  Eq_13[][][][][]struct Eq_13 {
	word16 a0000[];	// 0
	int16 a0179[];	// 179
	word16 w017F;	// 17F
	word16 w0181;	// 181
	int16 a0183[];	// 183
	int16 a018B[];	// 18B
	byte a019A[];	// 19A
} Eq_13;

typedef struct Eq_20 {	// size: 2 2
	word16 w0000;	// 0
	int16 w0179;	// 179
	int16 w0183;	// 183
	int16 w018B;	// 18B
} Eq_20;

typedef union Eq_29 {
	real16 u0;
	real64 u1;
} Eq_29;

typedef union Eq_33 {
	real16 u0;
	real64 u1;
} Eq_33;

typedef union Eq_36 {
	real16 u0;
	real64 u1;
} Eq_36;

typedef union Eq_38 {
	real16 u0;
	real64 u1;
} Eq_38;

typedef Eq_38 (Eq_39)(Eq_29);

typedef Eq_42 (Eq_41)(Eq_29);

typedef union Eq_42 {
	real16 u0;
	real64 u1;
} Eq_42;

typedef union Eq_45 {
	real16 u0;
	real64 u1;
} Eq_45;

typedef union Eq_53 {
	real16 u0;
	real64 u1;
} Eq_53;

typedef struct Eq_108 {
	byte bFFFFBC30;	// FFFFBC30
} Eq_108;

typedef word16 (Eq_112)(word16, byte);

typedef struct Eq_121 {
	word16 w0183;	// 183
} Eq_121;

typedef struct Eq_129 {
	word16 w018B;	// 18B
} Eq_129;

typedef byte (Eq_142)(byte);

