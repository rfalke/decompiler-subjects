// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_217/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_81) ptrFFFA0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_7: (segment "Eq_7" (0 (arr word16) a0000))
	T_7 (in es_17 : (ptr Eq_7))
	T_10 (in ds + 0x0064 : word16)
	T_38 (in es : (ptr Eq_7))
Eq_8: (segment "Eq_8" (64 Eq_7 t0064) (1F3 word16 w01F3) (1F5 word16 w01F5) (1F7 Eq_191 t01F7) (1FB word16 w01FB) (1FD int16 w01FD) (1FF int16 w01FF) (201 int16 w0201) (203 word16 w0203) (205 word16 w0205) (207 word16 w0207))
	T_8 (in ds : (ptr Eq_8))
	T_39 (in ds : (ptr Eq_8))
Eq_36: (fn void ((ptr Eq_7), (ptr Eq_8)))
	T_36 (in fn0C00_0179 : ptr32)
	T_37 (in signature of fn0C00_0179 : void)
	T_41 (in fn0C00_0179 : ptr32)
Eq_73: (fn byte (byte))
	T_73 (in __inb : ptr32)
Eq_81: (segment "Eq_81" (0 (arr word16) a0000))
	T_81 (in 0xA000 : selector)
Eq_93: (fn void ())
	T_93 (in msdos_terminate_program20 : ptr32)
	T_94 (in signature of msdos_terminate_program20 : void)
Eq_104: (struct "Eq_104" (2 int16 w0002) (4 int16 w0004))
	T_104 (in esp_3 : (memptr (ptr Eq_109) Eq_104))
	T_107 (in DPB(esp, fp, 0, 16) : word32)
Eq_108: (union "Eq_108" (real16 u0) (real64 u1))
	T_108 (in rLoc1_8 : Eq_108)
	T_117 (in (real64) (ss->*esp_3).w0002 / (real64) ds->w01FB : word16)
Eq_109: (segment "Eq_109")
	T_109 (in ss : selector)
Eq_113: (union "Eq_113" (real16 u0) (real64 u1))
	T_113 (in (real64) (ss->*esp_3).w0002 : real64)
Eq_116: (union "Eq_116" (real16 u0) (real64 u1))
	T_116 (in (real64) ds->w01FB : real64)
Eq_118: (union "Eq_118" (real16 u0) (real64 u1))
	T_118 (in rLoc1_10 : Eq_118)
	T_120 (in cos(rLoc1_8) : real64)
Eq_119: (fn Eq_118 (Eq_108))
	T_119 (in cos : ptr32)
Eq_121: (fn Eq_122 (Eq_108))
	T_121 (in sin : ptr32)
Eq_122: (union "Eq_122" (real16 u0) (real64 u1))
	T_122 (in sin(rLoc1_8) : real64)
Eq_125: (union "Eq_125" (real16 u0) (real64 u1))
	T_125 (in (real64) ds->w01F3 : real64)
Eq_132: (union "Eq_132" (real16 u0) (real64 u1))
	T_132 (in (real64) ds->w01F3 : real64)
Eq_137: (union "Eq_137" (real16 u0) (real64 u1))
	T_137 (in rLoc1_17 : Eq_137)
	T_145 (in (real64) (ss->*esp_3).w0004 / (real64) ds->w01FB : word16)
Eq_141: (union "Eq_141" (real16 u0) (real64 u1))
	T_141 (in (real64) (ss->*esp_3).w0004 : real64)
Eq_144: (union "Eq_144" (real16 u0) (real64 u1))
	T_144 (in (real64) ds->w01FB : real64)
Eq_146: (union "Eq_146" (real16 u0) (real64 u1))
	T_146 (in rLoc1_19 : Eq_146)
	T_148 (in cos(rLoc1_17) : real64)
Eq_147: (fn Eq_146 (Eq_137))
	T_147 (in cos : ptr32)
Eq_149: (fn Eq_150 (Eq_137))
	T_149 (in sin : ptr32)
Eq_150: (union "Eq_150" (real16 u0) (real64 u1))
	T_150 (in sin(rLoc1_17) : real64)
Eq_153: (union "Eq_153" (real16 u0) (real64 u1))
	T_153 (in (real64) ds->w0201 : real64)
Eq_160: (union "Eq_160" (real16 u0) (real64 u1))
	T_160 (in (real64) ds->w0201 : real64)
Eq_165: (union "Eq_165" (real16 u0) (real64 u1))
	T_165 (in rLoc3_28 : Eq_165)
	T_172 (in (real64) ds->w0201 / (real64) ds->w01FB : word16)
Eq_168: (union "Eq_168" (real16 u0) (real64 u1))
	T_168 (in (real64) ds->w0201 : real64)
Eq_171: (union "Eq_171" (real16 u0) (real64 u1))
	T_171 (in (real64) ds->w01FB : real64)
Eq_173: (union "Eq_173" (64 u0) (real64 u1))
	T_173 (in rLoc2_26 : Eq_173)
	T_176 (in (real64) ds->w01FF : real64)
Eq_177: (union "Eq_177" (real16 u0) (real64 u1))
	T_177 (in rLoc1_33 : Eq_177)
	T_185 (in (real64) ds->w01FD / (rLoc2_26 / (rLoc3_28 + (rLoc3_28 + 1))) : real64)
Eq_191: (union "Eq_191" (real16 u0) (real32 u1))
	T_191 (in Mem35[ds:0x01F7:real32] : real32)
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
T_7: (in es_17 : (ptr Eq_7))
  Class: Eq_7
  DataType: (ptr Eq_7)
  OrigDataType: (ptr (segment (0 (arr T_210) a0000)))
T_8: (in ds : (ptr Eq_8))
  Class: Eq_8
  DataType: (ptr Eq_8)
  OrigDataType: (ptr (segment (1F5 T_11 t01F5) (203 T_27 t0203) (205 T_57 t0205) (207 T_62 t0207)))
T_9: (in 0x0064 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_10: (in ds + 0x0064 : word16)
  Class: Eq_7
  DataType: (ptr Eq_7)
  OrigDataType: word16
T_11: (in 0x0009 : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_12: (in 0x01F5 : word16)
  Class: Eq_12
  DataType: (memptr (ptr Eq_8) word16)
  OrigDataType: (memptr T_8 (struct (0 T_13 t0000)))
T_13: (in Mem38[ds:0x01F5:word16] : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_14: (in 0x0000 : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_15: (in di_23 : (memptr (ptr Eq_7) word16))
  Class: Eq_15
  DataType: (memptr (ptr Eq_7) word16)
  OrigDataType: (memptr T_7 (struct 0002 (0 T_18 t0000)))
T_16: (in 0x0000 : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_17: (in di_23 + 0x0000 : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_18: (in Mem34[es_17:di_23 + 0x0000:word16] : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_19: (in 0x0002 : word16)
  Class: Eq_19
  DataType: word16
  OrigDataType: word16
T_20: (in di_23 + 0x0002 : word16)
  Class: Eq_15
  DataType: (memptr (ptr Eq_7) word16)
  OrigDataType: word16
T_21: (in cx_24 : word16)
  Class: Eq_21
  DataType: word16
  OrigDataType: word16
T_22: (in 0x0001 : word16)
  Class: Eq_22
  DataType: word16
  OrigDataType: word16
T_23: (in cx_24 - 0x0001 : word16)
  Class: Eq_21
  DataType: word16
  OrigDataType: word16
T_24: (in 0x0000 : word16)
  Class: Eq_21
  DataType: word16
  OrigDataType: word16
T_25: (in cx_24 == 0x0000 : bool)
  Class: Eq_25
  DataType: bool
  OrigDataType: bool
T_26: (in 0x0203 : word16)
  Class: Eq_26
  DataType: (memptr (ptr Eq_8) word16)
  OrigDataType: (memptr T_8 (struct (0 T_27 t0000)))
T_27: (in Mem47[ds:0x0203:word16] : word16)
  Class: Eq_27
  DataType: word16
  OrigDataType: word16
T_28: (in 0x0001 : word16)
  Class: Eq_28
  DataType: word16
  OrigDataType: word16
T_29: (in ds->w0203 + 0x0001 : word16)
  Class: Eq_27
  DataType: word16
  OrigDataType: word16
T_30: (in Mem52[ds:0x0203:word16] : word16)
  Class: Eq_27
  DataType: word16
  OrigDataType: word16
T_31: (in 0x0203 : word16)
  Class: Eq_31
  DataType: (memptr (ptr Eq_8) word16)
  OrigDataType: (memptr T_8 (struct (0 T_27 t0000)))
T_32: (in Mem52[ds:0x0203:word16] : word16)
  Class: Eq_27
  DataType: word16
  OrigDataType: word16
T_33: (in 0x0001 : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_34: (in ds->w0203 + 0x0001 : word16)
  Class: Eq_27
  DataType: word16
  OrigDataType: word16
T_35: (in Mem54[ds:0x0203:word16] : word16)
  Class: Eq_27
  DataType: word16
  OrigDataType: word16
T_36: (in fn0C00_0179 : ptr32)
  Class: Eq_36
  DataType: (ptr Eq_36)
  OrigDataType: (ptr (fn T_40 (T_7, T_8)))
T_37: (in signature of fn0C00_0179 : void)
  Class: Eq_36
  DataType: (ptr Eq_36)
  OrigDataType: 
T_38: (in es : (ptr Eq_7))
  Class: Eq_7
  DataType: (ptr Eq_7)
  OrigDataType: (ptr (segment))
T_39: (in ds : (ptr Eq_8))
  Class: Eq_8
  DataType: (ptr Eq_8)
  OrigDataType: (ptr (segment (1F3 T_124 t01F3) (1F7 T_191 t01F7) (1FB T_115 t01FB) (1FD T_155 t01FD) (1FF T_127 t01FF) (201 T_134 t0201)))
T_40: (in fn0C00_0179(es_17, ds) : void)
  Class: Eq_40
  DataType: void
  OrigDataType: void
T_41: (in fn0C00_0179 : ptr32)
  Class: Eq_36
  DataType: (ptr Eq_36)
  OrigDataType: (ptr (fn T_42 (T_7, T_8)))
T_42: (in fn0C00_0179(es_17, ds) : void)
  Class: Eq_40
  DataType: void
  OrigDataType: void
T_43: (in bp_49 : word16)
  Class: Eq_43
  DataType: word16
  OrigDataType: word16
T_44: (in 0x0001 : word16)
  Class: Eq_44
  DataType: word16
  OrigDataType: word16
T_45: (in bp_49 - 0x0001 : word16)
  Class: Eq_43
  DataType: word16
  OrigDataType: word16
T_46: (in 0x0000 : word16)
  Class: Eq_43
  DataType: word16
  OrigDataType: word16
T_47: (in bp_49 != 0x0000 : bool)
  Class: Eq_47
  DataType: bool
  OrigDataType: bool
T_48: (in v20_69 : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_49: (in 0x01F5 : word16)
  Class: Eq_49
  DataType: (memptr (ptr Eq_8) word16)
  OrigDataType: (memptr T_8 (struct (0 T_11 t0000)))
T_50: (in Mem54[ds:0x01F5:word16] : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_51: (in 0x0001 : word16)
  Class: Eq_51
  DataType: word16
  OrigDataType: word16
T_52: (in ds->w01F5 - 0x0001 : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_53: (in Mem70[ds:0x01F5:word16] : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_54: (in 0x0000 : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_55: (in v20_69 != 0x0000 : bool)
  Class: Eq_55
  DataType: bool
  OrigDataType: bool
T_56: (in 0x0205 : word16)
  Class: Eq_56
  DataType: (memptr (ptr Eq_8) word16)
  OrigDataType: (memptr T_8 (struct (0 T_57 t0000)))
T_57: (in Mem38[ds:0x0205:word16] : word16)
  Class: Eq_57
  DataType: word16
  OrigDataType: word16
T_58: (in 0x00B3 : word16)
  Class: Eq_58
  DataType: word16
  OrigDataType: word16
T_59: (in ds->w0205 + 0x00B3 : word16)
  Class: Eq_57
  DataType: word16
  OrigDataType: word16
T_60: (in Mem45[ds:0x0205:word16] : word16)
  Class: Eq_57
  DataType: word16
  OrigDataType: word16
T_61: (in 0x0207 : word16)
  Class: Eq_61
  DataType: (memptr (ptr Eq_8) word16)
  OrigDataType: (memptr T_8 (struct (0 T_62 t0000)))
T_62: (in Mem45[ds:0x0207:word16] : word16)
  Class: Eq_62
  DataType: word16
  OrigDataType: word16
T_63: (in 0x007D : word16)
  Class: Eq_63
  DataType: word16
  OrigDataType: word16
T_64: (in ds->w0207 + 0x007D : word16)
  Class: Eq_62
  DataType: word16
  OrigDataType: word16
T_65: (in Mem47[ds:0x0207:word16] : word16)
  Class: Eq_62
  DataType: word16
  OrigDataType: word16
T_66: (in 0x04E8 : word16)
  Class: Eq_43
  DataType: word16
  OrigDataType: word16
T_67: (in si_77 : (memptr (ptr Eq_7) word16))
  Class: Eq_67
  DataType: (memptr (ptr Eq_7) word16)
  OrigDataType: (memptr T_7 (struct 0002 (0 T_80 t0000)))
T_68: (in 0x0000 : word16)
  Class: Eq_67
  DataType: (memptr (ptr Eq_7) word16)
  OrigDataType: word16
T_69: (in di_78 : (memptr (ptr Eq_81) word16))
  Class: Eq_69
  DataType: (memptr (ptr Eq_81) word16)
  OrigDataType: (memptr T_81 (struct 0002 (0 T_84 t0000)))
T_70: (in 0x0000 : word16)
  Class: Eq_69
  DataType: (memptr (ptr Eq_81) word16)
  OrigDataType: word16
T_71: (in cx_86 : word16)
  Class: Eq_71
  DataType: word16
  OrigDataType: word16
T_72: (in 0x7B0C : word16)
  Class: Eq_71
  DataType: word16
  OrigDataType: word16
T_73: (in __inb : ptr32)
  Class: Eq_73
  DataType: (ptr Eq_73)
  OrigDataType: (ptr (fn T_75 (T_74)))
T_74: (in 0x60 : byte)
  Class: Eq_74
  DataType: byte
  OrigDataType: byte
T_75: (in __inb(0x60) : byte)
  Class: Eq_75
  DataType: byte
  OrigDataType: byte
T_76: (in 0x81 : byte)
  Class: Eq_75
  DataType: byte
  OrigDataType: byte
T_77: (in __inb(0x60) == 0x81 : bool)
  Class: Eq_77
  DataType: bool
  OrigDataType: bool
T_78: (in 0x0000 : word16)
  Class: Eq_78
  DataType: word16
  OrigDataType: word16
T_79: (in si_77 + 0x0000 : word16)
  Class: Eq_79
  DataType: word16
  OrigDataType: word16
T_80: (in Mem70[es_17:si_77 + 0x0000:word16] : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_81: (in 0xA000 : selector)
  Class: Eq_81
  DataType: (ptr Eq_81)
  OrigDataType: (ptr (segment (0 (arr T_212) a0000)))
T_82: (in 0x0000 : word16)
  Class: Eq_82
  DataType: word16
  OrigDataType: word16
T_83: (in di_78 + 0x0000 : word16)
  Class: Eq_83
  DataType: word16
  OrigDataType: word16
T_84: (in Mem92[0xA000:di_78 + 0x0000:word16] : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_85: (in 0x0002 : word16)
  Class: Eq_85
  DataType: word16
  OrigDataType: word16
T_86: (in si_77 + 0x0002 : word16)
  Class: Eq_67
  DataType: (memptr (ptr Eq_7) word16)
  OrigDataType: word16
T_87: (in 0x0002 : word16)
  Class: Eq_87
  DataType: word16
  OrigDataType: word16
T_88: (in di_78 + 0x0002 : word16)
  Class: Eq_69
  DataType: (memptr (ptr Eq_81) word16)
  OrigDataType: word16
T_89: (in 0x0001 : word16)
  Class: Eq_89
  DataType: word16
  OrigDataType: word16
T_90: (in cx_86 - 0x0001 : word16)
  Class: Eq_71
  DataType: word16
  OrigDataType: word16
T_91: (in 0x0000 : word16)
  Class: Eq_71
  DataType: word16
  OrigDataType: word16
T_92: (in cx_86 == 0x0000 : bool)
  Class: Eq_92
  DataType: bool
  OrigDataType: bool
T_93: (in msdos_terminate_program20 : ptr32)
  Class: Eq_93
  DataType: (ptr Eq_93)
  OrigDataType: (ptr (fn T_95 ()))
T_94: (in signature of msdos_terminate_program20 : void)
  Class: Eq_93
  DataType: (ptr Eq_93)
  OrigDataType: 
T_95: (in msdos_terminate_program20() : void)
  Class: Eq_95
  DataType: void
  OrigDataType: void
T_96: (in 0x0000 : word16)
  Class: Eq_62
  DataType: word16
  OrigDataType: word16
T_97: (in 0x0207 : word16)
  Class: Eq_97
  DataType: (memptr (ptr Eq_8) word16)
  OrigDataType: (memptr T_8 (struct (0 T_98 t0000)))
T_98: (in Mem29[ds:0x0207:word16] : word16)
  Class: Eq_62
  DataType: word16
  OrigDataType: word16
T_99: (in 0x0000 : word16)
  Class: Eq_27
  DataType: word16
  OrigDataType: word16
T_100: (in 0x0203 : word16)
  Class: Eq_100
  DataType: (memptr (ptr Eq_8) word16)
  OrigDataType: (memptr T_8 (struct (0 T_101 t0000)))
T_101: (in Mem30[ds:0x0203:word16] : word16)
  Class: Eq_27
  DataType: word16
  OrigDataType: word16
T_102: (in 0x0000 : word16)
  Class: Eq_15
  DataType: (memptr (ptr Eq_7) word16)
  OrigDataType: word16
T_103: (in 0x7B0C : word16)
  Class: Eq_21
  DataType: word16
  OrigDataType: word16
T_104: (in esp_3 : (memptr (ptr Eq_109) Eq_104))
  Class: Eq_104
  DataType: (memptr (ptr Eq_109) Eq_104)
  OrigDataType: (memptr T_109 (struct (2 T_112 t0002) (4 T_140 t0004)))
T_105: (in esp : word32)
  Class: Eq_105
  DataType: word32
  OrigDataType: word32
T_106: (in fp : ptr16)
  Class: Eq_106
  DataType: ptr16
  OrigDataType: ptr16
T_107: (in DPB(esp, fp, 0, 16) : word32)
  Class: Eq_104
  DataType: (memptr (ptr Eq_109) Eq_104)
  OrigDataType: word32
T_108: (in rLoc1_8 : Eq_108)
  Class: Eq_108
  DataType: Eq_108
  OrigDataType: real64
T_109: (in ss : selector)
  Class: Eq_109
  DataType: (ptr Eq_109)
  OrigDataType: (ptr (segment))
T_110: (in 0x00000002 : word32)
  Class: Eq_110
  DataType: word32
  OrigDataType: word32
T_111: (in esp_3 + 0x00000002 : word32)
  Class: Eq_111
  DataType: word32
  OrigDataType: word32
T_112: (in Mem0[ss:esp_3 + 0x00000002:int16] : int16)
  Class: Eq_112
  DataType: int16
  OrigDataType: int16
T_113: (in (real64) (ss->*esp_3).w0002 : real64)
  Class: Eq_113
  DataType: Eq_113
  OrigDataType: (union (real16 u0) (real64 u1))
T_114: (in 0x01FB : word16)
  Class: Eq_114
  DataType: (memptr (ptr Eq_8) word16)
  OrigDataType: (memptr T_39 (struct (0 T_115 t0000)))
T_115: (in Mem0[ds:0x01FB:word16] : word16)
  Class: Eq_115
  DataType: word16
  OrigDataType: word16
T_116: (in (real64) ds->w01FB : real64)
  Class: Eq_116
  DataType: Eq_116
  OrigDataType: (union (real16 u0) (real64 u1))
T_117: (in (real64) (ss->*esp_3).w0002 / (real64) ds->w01FB : word16)
  Class: Eq_108
  DataType: Eq_108
  OrigDataType: real16
T_118: (in rLoc1_10 : Eq_118)
  Class: Eq_118
  DataType: Eq_118
  OrigDataType: (union (real16 u0) (real64 u1))
T_119: (in cos : ptr32)
  Class: Eq_119
  DataType: (ptr Eq_119)
  OrigDataType: (ptr (fn T_120 (T_108)))
T_120: (in cos(rLoc1_8) : real64)
  Class: Eq_118
  DataType: Eq_118
  OrigDataType: real64
T_121: (in sin : ptr32)
  Class: Eq_121
  DataType: (ptr Eq_121)
  OrigDataType: (ptr (fn T_122 (T_108)))
T_122: (in sin(rLoc1_8) : real64)
  Class: Eq_122
  DataType: Eq_122
  OrigDataType: (union (real16 u0) (real64 u1))
T_123: (in 0x01F3 : word16)
  Class: Eq_123
  DataType: (memptr (ptr Eq_8) word16)
  OrigDataType: (memptr T_39 (struct (0 T_124 t0000)))
T_124: (in Mem0[ds:0x01F3:word16] : word16)
  Class: Eq_124
  DataType: word16
  OrigDataType: word16
T_125: (in (real64) ds->w01F3 : real64)
  Class: Eq_125
  DataType: Eq_125
  OrigDataType: (union (real16 u0) (real64 u1))
T_126: (in sin(rLoc1_8) * (real64) ds->w01F3 : word16)
  Class: Eq_126
  DataType: real16
  OrigDataType: real16
T_127: (in (int16) (sin(rLoc1_8) * (real64) ds->w01F3) : int16)
  Class: Eq_127
  DataType: int16
  OrigDataType: int16
T_128: (in 0x01FF : word16)
  Class: Eq_128
  DataType: (memptr (ptr Eq_8) int16)
  OrigDataType: (memptr T_39 (struct (0 T_129 t0000)))
T_129: (in Mem13[ds:0x01FF:int16] : int16)
  Class: Eq_127
  DataType: int16
  OrigDataType: int16
T_130: (in 0x01F3 : word16)
  Class: Eq_130
  DataType: (memptr (ptr Eq_8) word16)
  OrigDataType: (memptr T_39 (struct (0 T_131 t0000)))
T_131: (in Mem13[ds:0x01F3:word16] : word16)
  Class: Eq_124
  DataType: word16
  OrigDataType: word16
T_132: (in (real64) ds->w01F3 : real64)
  Class: Eq_132
  DataType: Eq_132
  OrigDataType: (union (real16 u0) (real64 u1))
T_133: (in rLoc1_10 * (real64) ds->w01F3 : word16)
  Class: Eq_133
  DataType: real16
  OrigDataType: real16
T_134: (in (int16) (rLoc1_10 * (real64) ds->w01F3) : int16)
  Class: Eq_134
  DataType: int16
  OrigDataType: int16
T_135: (in 0x0201 : word16)
  Class: Eq_135
  DataType: (memptr (ptr Eq_8) int16)
  OrigDataType: (memptr T_39 (struct (0 T_136 t0000)))
T_136: (in Mem15[ds:0x0201:int16] : int16)
  Class: Eq_134
  DataType: int16
  OrigDataType: int16
T_137: (in rLoc1_17 : Eq_137)
  Class: Eq_137
  DataType: Eq_137
  OrigDataType: real64
T_138: (in 0x00000004 : word32)
  Class: Eq_138
  DataType: word32
  OrigDataType: word32
T_139: (in esp_3 + 0x00000004 : word32)
  Class: Eq_139
  DataType: word32
  OrigDataType: word32
T_140: (in Mem15[ss:esp_3 + 0x00000004:int16] : int16)
  Class: Eq_140
  DataType: int16
  OrigDataType: int16
T_141: (in (real64) (ss->*esp_3).w0004 : real64)
  Class: Eq_141
  DataType: Eq_141
  OrigDataType: (union (real16 u0) (real64 u1))
T_142: (in 0x01FB : word16)
  Class: Eq_142
  DataType: (memptr (ptr Eq_8) word16)
  OrigDataType: (memptr T_39 (struct (0 T_143 t0000)))
T_143: (in Mem15[ds:0x01FB:word16] : word16)
  Class: Eq_115
  DataType: word16
  OrigDataType: word16
T_144: (in (real64) ds->w01FB : real64)
  Class: Eq_144
  DataType: Eq_144
  OrigDataType: (union (real16 u0) (real64 u1))
T_145: (in (real64) (ss->*esp_3).w0004 / (real64) ds->w01FB : word16)
  Class: Eq_137
  DataType: Eq_137
  OrigDataType: real16
T_146: (in rLoc1_19 : Eq_146)
  Class: Eq_146
  DataType: Eq_146
  OrigDataType: (union (real16 u0) (real64 u1))
T_147: (in cos : ptr32)
  Class: Eq_147
  DataType: (ptr Eq_147)
  OrigDataType: (ptr (fn T_148 (T_137)))
T_148: (in cos(rLoc1_17) : real64)
  Class: Eq_146
  DataType: Eq_146
  OrigDataType: real64
T_149: (in sin : ptr32)
  Class: Eq_149
  DataType: (ptr Eq_149)
  OrigDataType: (ptr (fn T_150 (T_137)))
T_150: (in sin(rLoc1_17) : real64)
  Class: Eq_150
  DataType: Eq_150
  OrigDataType: (union (real16 u0) (real64 u1))
T_151: (in 0x0201 : word16)
  Class: Eq_151
  DataType: (memptr (ptr Eq_8) int16)
  OrigDataType: (memptr T_39 (struct (0 T_152 t0000)))
T_152: (in Mem15[ds:0x0201:word16] : word16)
  Class: Eq_134
  DataType: int16
  OrigDataType: word16
T_153: (in (real64) ds->w0201 : real64)
  Class: Eq_153
  DataType: Eq_153
  OrigDataType: (union (real16 u0) (real64 u1))
T_154: (in sin(rLoc1_17) * (real64) ds->w0201 : word16)
  Class: Eq_154
  DataType: real16
  OrigDataType: real16
T_155: (in (int16) (sin(rLoc1_17) * (real64) ds->w0201) : int16)
  Class: Eq_155
  DataType: int16
  OrigDataType: int16
T_156: (in 0x01FD : word16)
  Class: Eq_156
  DataType: (memptr (ptr Eq_8) int16)
  OrigDataType: (memptr T_39 (struct (0 T_157 t0000)))
T_157: (in Mem22[ds:0x01FD:int16] : int16)
  Class: Eq_155
  DataType: int16
  OrigDataType: int16
T_158: (in 0x0201 : word16)
  Class: Eq_158
  DataType: (memptr (ptr Eq_8) int16)
  OrigDataType: (memptr T_39 (struct (0 T_159 t0000)))
T_159: (in Mem22[ds:0x0201:word16] : word16)
  Class: Eq_134
  DataType: int16
  OrigDataType: word16
T_160: (in (real64) ds->w0201 : real64)
  Class: Eq_160
  DataType: Eq_160
  OrigDataType: (union (real16 u0) (real64 u1))
T_161: (in rLoc1_19 * (real64) ds->w0201 : word16)
  Class: Eq_161
  DataType: real16
  OrigDataType: real16
T_162: (in (int16) (rLoc1_19 * (real64) ds->w0201) : int16)
  Class: Eq_134
  DataType: int16
  OrigDataType: int16
T_163: (in 0x0201 : word16)
  Class: Eq_163
  DataType: (memptr (ptr Eq_8) int16)
  OrigDataType: (memptr T_39 (struct (0 T_164 t0000)))
T_164: (in Mem24[ds:0x0201:int16] : int16)
  Class: Eq_134
  DataType: int16
  OrigDataType: int16
T_165: (in rLoc3_28 : Eq_165)
  Class: Eq_165
  DataType: Eq_165
  OrigDataType: real64
T_166: (in 0x0201 : word16)
  Class: Eq_166
  DataType: (memptr (ptr Eq_8) int16)
  OrigDataType: (memptr T_39 (struct (0 T_167 t0000)))
T_167: (in Mem24[ds:0x0201:int16] : int16)
  Class: Eq_134
  DataType: int16
  OrigDataType: int16
T_168: (in (real64) ds->w0201 : real64)
  Class: Eq_168
  DataType: Eq_168
  OrigDataType: (union (real16 u0) (real64 u1))
T_169: (in 0x01FB : word16)
  Class: Eq_169
  DataType: (memptr (ptr Eq_8) word16)
  OrigDataType: (memptr T_39 (struct (0 T_170 t0000)))
T_170: (in Mem24[ds:0x01FB:word16] : word16)
  Class: Eq_115
  DataType: word16
  OrigDataType: word16
T_171: (in (real64) ds->w01FB : real64)
  Class: Eq_171
  DataType: Eq_171
  OrigDataType: (union (real16 u0) (real64 u1))
T_172: (in (real64) ds->w0201 / (real64) ds->w01FB : word16)
  Class: Eq_165
  DataType: Eq_165
  OrigDataType: real16
T_173: (in rLoc2_26 : Eq_173)
  Class: Eq_173
  DataType: Eq_173
  OrigDataType: (union (64 u0) (real64 u1))
T_174: (in 0x01FF : word16)
  Class: Eq_174
  DataType: (memptr (ptr Eq_8) int16)
  OrigDataType: (memptr T_39 (struct (0 T_175 t0000)))
T_175: (in Mem24[ds:0x01FF:int16] : int16)
  Class: Eq_127
  DataType: int16
  OrigDataType: int16
T_176: (in (real64) ds->w01FF : real64)
  Class: Eq_173
  DataType: Eq_173
  OrigDataType: real64
T_177: (in rLoc1_33 : Eq_177)
  Class: Eq_177
  DataType: Eq_177
  OrigDataType: (union (real16 u0) (real64 u1))
T_178: (in 0x01FD : word16)
  Class: Eq_178
  DataType: (memptr (ptr Eq_8) int16)
  OrigDataType: (memptr T_39 (struct (0 T_179 t0000)))
T_179: (in Mem24[ds:0x01FD:int16] : int16)
  Class: Eq_155
  DataType: int16
  OrigDataType: int16
T_180: (in (real64) ds->w01FD : real64)
  Class: Eq_180
  DataType: real64
  OrigDataType: real64
T_181: (in 1 : real64)
  Class: Eq_181
  DataType: real64
  OrigDataType: real64
T_182: (in rLoc3_28 + 1 : real64)
  Class: Eq_182
  DataType: real64
  OrigDataType: real64
T_183: (in rLoc3_28 + (rLoc3_28 + 1) : real64)
  Class: Eq_183
  DataType: real64
  OrigDataType: real64
T_184: (in rLoc2_26 / (rLoc3_28 + (rLoc3_28 + 1)) : real64)
  Class: Eq_184
  DataType: real64
  OrigDataType: real64
T_185: (in (real64) ds->w01FD / (rLoc2_26 / (rLoc3_28 + (rLoc3_28 + 1))) : real64)
  Class: Eq_177
  DataType: Eq_177
  OrigDataType: real64
T_186: (in -rLoc2_26 : real64)
  Class: Eq_186
  DataType: 64
  OrigDataType: 64
T_187: (in (int16) -rLoc2_26 : int16)
  Class: Eq_127
  DataType: int16
  OrigDataType: int16
T_188: (in 0x01FF : word16)
  Class: Eq_188
  DataType: (memptr (ptr Eq_8) int16)
  OrigDataType: (memptr T_39 (struct (0 T_189 t0000)))
T_189: (in Mem35[ds:0x01FF:int16] : int16)
  Class: Eq_127
  DataType: int16
  OrigDataType: int16
T_190: (in 0x01F7 : word16)
  Class: Eq_190
  DataType: (memptr (ptr Eq_8) Eq_191)
  OrigDataType: (memptr T_39 (struct (0 T_191 t0000)))
T_191: (in Mem35[ds:0x01F7:real32] : real32)
  Class: Eq_191
  DataType: Eq_191
  OrigDataType: (union (real16 u0) (real32 u1))
T_192: (in rLoc1_33 * ds->t01F7 : word16)
  Class: Eq_192
  DataType: real16
  OrigDataType: real16
T_193: (in (int16) (rLoc1_33 * ds->t01F7) : int16)
  Class: Eq_155
  DataType: int16
  OrigDataType: int16
T_194: (in 0x01FD : word16)
  Class: Eq_194
  DataType: (memptr (ptr Eq_8) int16)
  OrigDataType: (memptr T_39 (struct (0 T_195 t0000)))
T_195: (in Mem37[ds:0x01FD:int16] : int16)
  Class: Eq_155
  DataType: int16
  OrigDataType: int16
T_196: (in 0x0E : byte)
  Class: Eq_196
  DataType: byte
  OrigDataType: byte
T_197: (in 0x01FF : word16)
  Class: Eq_197
  DataType: (memptr (ptr Eq_8) int16)
  OrigDataType: (memptr T_39 (struct (0 T_198 t0000)))
T_198: (in Mem37[ds:0x01FF:word16] : word16)
  Class: Eq_127
  DataType: int16
  OrigDataType: word16
T_199: (in 0x0062 : word16)
  Class: Eq_199
  DataType: word16
  OrigDataType: word16
T_200: (in ds->w01FF + 0x0062 : word16)
  Class: Eq_200
  DataType: uint16
  OrigDataType: uint16
T_201: (in 0x0140 : word16)
  Class: Eq_201
  DataType: uint16
  OrigDataType: uint16
T_202: (in (ds->w01FF + 0x0062) *u 0x0140 : uint32)
  Class: Eq_202
  DataType: uint32
  OrigDataType: uint32
T_203: (in (word16) ((ds->w01FF + 0x0062) *u 0x0140) : word16)
  Class: Eq_203
  DataType: word16
  OrigDataType: word16
T_204: (in 0x00A0 : word16)
  Class: Eq_204
  DataType: word16
  OrigDataType: word16
T_205: (in (word16) ((ds->w01FF + 0x0062) *u 0x0140) + 0x00A0 : word16)
  Class: Eq_205
  DataType: (memptr (ptr Eq_7) byte)
  OrigDataType: (memptr T_38 (struct (0 T_209 t0000)))
T_206: (in 0x01FD : word16)
  Class: Eq_206
  DataType: (memptr (ptr Eq_8) int16)
  OrigDataType: (memptr T_39 (struct (0 T_207 t0000)))
T_207: (in Mem37[ds:0x01FD:word16] : word16)
  Class: Eq_155
  DataType: int16
  OrigDataType: word16
T_208: (in (word16) ((ds->w01FF + 0x0062) *u 0x0140) + 0x00A0 + Mem37[ds:0x01FD:word16] : word16)
  Class: Eq_208
  DataType: word16
  OrigDataType: word16
T_209: (in Mem47[es:(word16) ((ds->w01FF + 0x0062) *u 0x0140) + 0x00A0 + Mem37[ds:0x01FD:word16]:byte] : byte)
  Class: Eq_196
  DataType: byte
  OrigDataType: byte
T_210:
  Class: Eq_210
  DataType: word16
  OrigDataType: (struct 0002 (0 T_18 t0000))
T_211:
  Class: Eq_210
  DataType: word16
  OrigDataType: (struct 0002 (0 T_80 t0000))
T_212:
  Class: Eq_212
  DataType: word16
  OrigDataType: (struct 0002 (0 T_84 t0000))
*/
typedef Eq_81 Eq_1struct Globals {
	Eq_81 * ptrFFFA0000;	// FFFA0000
} Eq_1;

typedef void (Eq_2)(byte);

typedef  Eq_7[]struct Eq_7 {
	word16 a0000[];	// 0
} Eq_7;

typedef Eq_7 Eq_8Eq_191 Eq_8struct Eq_8 {
	Eq_7 t0064;	// 64
	word16 w01F3;	// 1F3
	word16 w01F5;	// 1F5
	Eq_191 t01F7;	// 1F7
	word16 w01FB;	// 1FB
	int16 w01FD;	// 1FD
	int16 w01FF;	// 1FF
	int16 w0201;	// 201
	word16 w0203;	// 203
	word16 w0205;	// 205
	word16 w0207;	// 207
} Eq_8;

typedef void (Eq_36)(Eq_7 *, Eq_8 *);

typedef byte (Eq_73)(byte);

typedef  Eq_81[]struct Eq_81 {
	word16 a0000[];	// 0
} Eq_81;

typedef void (Eq_93)();

typedef struct Eq_104 {
	int16 w0002;	// 2
	int16 w0004;	// 4
} Eq_104;

typedef union Eq_108 {
	real16 u0;
	real64 u1;
} Eq_108;

typedef struct Eq_109 {
} Eq_109;

typedef union Eq_113 {
	real16 u0;
	real64 u1;
} Eq_113;

typedef union Eq_116 {
	real16 u0;
	real64 u1;
} Eq_116;

typedef union Eq_118 {
	real16 u0;
	real64 u1;
} Eq_118;

typedef Eq_118 (Eq_119)(Eq_108);

typedef Eq_122 (Eq_121)(Eq_108);

typedef union Eq_122 {
	real16 u0;
	real64 u1;
} Eq_122;

typedef union Eq_125 {
	real16 u0;
	real64 u1;
} Eq_125;

typedef union Eq_132 {
	real16 u0;
	real64 u1;
} Eq_132;

typedef union Eq_137 {
	real16 u0;
	real64 u1;
} Eq_137;

typedef union Eq_141 {
	real16 u0;
	real64 u1;
} Eq_141;

typedef union Eq_144 {
	real16 u0;
	real64 u1;
} Eq_144;

typedef union Eq_146 {
	real16 u0;
	real64 u1;
} Eq_146;

typedef Eq_146 (Eq_147)(Eq_137);

typedef Eq_150 (Eq_149)(Eq_137);

typedef union Eq_150 {
	real16 u0;
	real64 u1;
} Eq_150;

typedef union Eq_153 {
	real16 u0;
	real64 u1;
} Eq_153;

typedef union Eq_160 {
	real16 u0;
	real64 u1;
} Eq_160;

typedef union Eq_165 {
	real16 u0;
	real64 u1;
} Eq_165;

typedef union Eq_168 {
	real16 u0;
	real64 u1;
} Eq_168;

typedef union Eq_171 {
	real16 u0;
	real64 u1;
} Eq_171;

typedef union Eq_173 {
	64 u0;
	real64 u1;
} Eq_173;

typedef union Eq_177 {
	real16 u0;
	real64 u1;
} Eq_177;

typedef union Eq_191 {
	real16 u0;
	real32 u1;
} Eq_191;

