// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_239/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_21) ptrFFFA0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
	T_194 (in bios_video_set_mode : ptr32)
Eq_7: (union "Eq_7" (real16 u0) (real32 u1) (real64 u2) (word16 u3))
	T_7 (in rLoc1_49 : Eq_7)
	T_10 (in Mem28[ds:0x01FB:real32] : real32)
	T_13 (in ds->t01FB + ds->t01F3 : word16)
	T_15 (in Mem50[ds:0x01FB:real32] : real32)
	T_17 (in Mem51[ds:0x01FF:real32] : real32)
	T_69 (in Mem61[ds:0x01FB:real32] : real32)
	T_71 (in Mem61[ds:0x01FF:real32] : real32)
	T_74 (in Mem61[ds:0x01FF:real32] : real32)
	T_83 (in rLoc2_70 : Eq_7)
	T_85 (in Mem68[ds:0x01FF:real32] : real32)
	T_88 (in ds->t01FF - ds->r01F7 : word16)
	T_90 (in Mem71[ds:0x01FF:real32] : real32)
Eq_8: (segment "Eq_8" (1D0 byte b01D0) (1E9 word16 w01E9) (1EB word16 w01EB) (1ED word16 w01ED) (1EF word16 w01EF) (1F1 word16 w01F1) (1F3 Eq_12 t01F3) (1F7 real32 r01F7) (1FB Eq_7 t01FB) (1FF Eq_7 t01FF) (203 Eq_80 t0203) (207 int16 w0207) (209 int16 w0209) (20B int16 w020B) (20D (arr byte) a020D))
	T_8 (in ds : (ptr Eq_8))
Eq_12: (union "Eq_12" (real16 u0) (real32 u1))
	T_12 (in Mem28[ds:0x01F3:real32] : real32)
Eq_21: (segment "Eq_21" (0 (arr byte) a0000) (20D (arr byte) a020D))
	T_21 (in 0xA000 : selector)
Eq_67: (union "Eq_67" (real64 u0) (word16 u1))
	T_67 (in rLoc1_64 : Eq_67)
	T_75 (in ds->t01FB - ds->t01FF - ds->t01FF : word16)
Eq_77: (fn real64 (Eq_67))
	T_77 (in cos : ptr32)
Eq_79: (fn Eq_80 (Eq_67))
	T_79 (in sin : ptr32)
Eq_80: (union "Eq_80" (real16 u0) (real32 u1) (real64 u2))
	T_80 (in sin(rLoc1_64) : real64)
	T_82 (in Mem68[ds:0x0203:real32] : real32)
	T_114 (in Mem71[ds:0x0203:real32] : real32)
Eq_91: (union "Eq_91" (real16 u0) (real64 u1))
	T_91 (in rLoc2_72 : Eq_91)
	T_95 (in rLoc2_70 * (real64) ds->w01EF : word16)
Eq_94: (union "Eq_94" (real16 u0) (real64 u1))
	T_94 (in (real64) ds->w01EF : real64)
Eq_96: (union "Eq_96" (real16 u0) (real64 u1))
	T_96 (in rLoc2_74 : Eq_96)
	T_98 (in cos(rLoc2_72) : real64)
Eq_97: (fn Eq_96 (Eq_91))
	T_97 (in cos : ptr32)
Eq_99: (fn Eq_100 (Eq_91))
	T_99 (in sin : ptr32)
Eq_100: (union "Eq_100" (real16 u0) (real64 u1))
	T_100 (in sin(rLoc2_72) : real64)
Eq_103: (union "Eq_103" (real16 u0) (real64 u1))
	T_103 (in (real64) ds->w01ED : real64)
Eq_107: (union "Eq_107" (real16 u0) (real64 u1))
	T_107 (in (real64) ds->w0207 : real64)
Eq_110: (union "Eq_110" (real16 u0) (real64 u1))
	T_110 (in (real64) ds->w01EF : real64)
Eq_112: (union "Eq_112" (real16 u0) (real64 u1))
	T_112 (in sin(rLoc2_72) * (real64) ds->w01ED - (real64) ds->w0207 / (real64) ds->w01EF : real64)
Eq_118: (union "Eq_118" (real16 u0) (real64 u1))
	T_118 (in (real64) ds->w01EB : real64)
Eq_125: (union "Eq_125" (real16 u0) (real64 u1))
	T_125 (in (real64) ds->w01ED : real64)
Eq_129: (union "Eq_129" (real16 u0) (real64 u1))
	T_129 (in (real64) ds->w0207 : real64)
Eq_132: (union "Eq_132" (real16 u0) (real64 u1))
	T_132 (in (real64) ds->w01F1 : real64)
Eq_135: (union "Eq_135" (real16 u0) (real64 u1))
	T_135 (in rLoc1_66 * (rLoc2_74 * (real64) ds->w01ED - (real64) ds->w0207 / (real64) ds->w01F1) : real64)
Eq_138: (union "Eq_138" (real16 u0) (real64 u1))
	T_138 (in (real64) ds->w01E9 : real64)
Eq_154: (fn byte (word16))
	T_154 (in __inb : ptr32)
Eq_167: (fn byte (byte))
	T_167 (in __inb : ptr32)
Eq_186: (segment "Eq_186")
	T_186 (in cs : selector)
	T_191 (in Mem28[ss:fp - 0x0002:word16] : word16)
Eq_187: (segment "Eq_187")
	T_187 (in ss : selector)
Eq_188: (union "Eq_188" (ptr16 u0) ((memptr (ptr Eq_187) Eq_200) u1))
	T_188 (in fp : ptr16)
Eq_200: (struct "Eq_200" (FFFFFFFE (ptr Eq_186) ptrFFFFFFFE))
	T_200
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
T_7: (in rLoc1_49 : Eq_7)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: real64
T_8: (in ds : (ptr Eq_8))
  Class: Eq_8
  DataType: (ptr Eq_8)
  OrigDataType: (ptr (segment (1E9 T_137 t01E9) (1EB T_117 t01EB) (1ED T_102 t01ED) (1EF T_93 t01EF) (1F1 T_131 t01F1) (1F3 T_12 t01F3) (1F7 T_87 t01F7) (1FB T_7 t01FB) (1FF T_7 t01FF) (203 T_80 t0203) (207 T_18 t0207) (209 T_140 t0209) (20B T_120 t020B) (20D (arr T_198) a020D)))
T_9: (in 0x01FB : word16)
  Class: Eq_9
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_8 (struct (0 T_10 t0000)))
T_10: (in Mem28[ds:0x01FB:real32] : real32)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: (union (real16 u0) (real32 u1) (real64 u2))
T_11: (in 0x01F3 : word16)
  Class: Eq_11
  DataType: (memptr (ptr Eq_8) Eq_12)
  OrigDataType: (memptr T_8 (struct (0 T_12 t0000)))
T_12: (in Mem28[ds:0x01F3:real32] : real32)
  Class: Eq_12
  DataType: Eq_12
  OrigDataType: (union (real16 u0) (real32 u1))
T_13: (in ds->t01FB + ds->t01F3 : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: real16
T_14: (in 0x01FB : word16)
  Class: Eq_14
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_8 (struct (0 T_15 t0000)))
T_15: (in Mem50[ds:0x01FB:real32] : real32)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: real32
T_16: (in 0x01FF : word16)
  Class: Eq_16
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_8 (struct (0 T_17 t0000)))
T_17: (in Mem51[ds:0x01FF:real32] : real32)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: real32
T_18: (in cx_133 : int16)
  Class: Eq_18
  DataType: int16
  OrigDataType: word16
T_19: (in 0x015E : word16)
  Class: Eq_18
  DataType: int16
  OrigDataType: word16
T_20: (in 0x00 : byte)
  Class: Eq_20
  DataType: byte
  OrigDataType: byte
T_21: (in 0xA000 : selector)
  Class: Eq_21
  DataType: (ptr Eq_21)
  OrigDataType: (ptr (segment (0 (arr T_199) a0000) (20D (arr T_197) a020D)))
T_22: (in di_32 : (memptr (ptr Eq_21) byte))
  Class: Eq_22
  DataType: (memptr (ptr Eq_21) byte)
  OrigDataType: (memptr T_21 (struct 0001 (0 T_25 t0000)))
T_23: (in 0x0000 : word16)
  Class: Eq_23
  DataType: word16
  OrigDataType: word16
T_24: (in di_32 + 0x0000 : word16)
  Class: Eq_24
  DataType: word16
  OrigDataType: word16
T_25: (in Mem40[0xA000:di_32 + 0x0000:byte] : byte)
  Class: Eq_20
  DataType: byte
  OrigDataType: byte
T_26: (in 0x0001 : word16)
  Class: Eq_26
  DataType: word16
  OrigDataType: word16
T_27: (in di_32 + 0x0001 : word16)
  Class: Eq_22
  DataType: (memptr (ptr Eq_21) byte)
  OrigDataType: word16
T_28: (in cx_33 : word16)
  Class: Eq_28
  DataType: word16
  OrigDataType: word16
T_29: (in 0x0001 : word16)
  Class: Eq_29
  DataType: word16
  OrigDataType: word16
T_30: (in cx_33 - 0x0001 : word16)
  Class: Eq_28
  DataType: word16
  OrigDataType: word16
T_31: (in 0x0000 : word16)
  Class: Eq_28
  DataType: word16
  OrigDataType: word16
T_32: (in cx_33 == 0x0000 : bool)
  Class: Eq_32
  DataType: bool
  OrigDataType: bool
T_33: (in di_107 : (memptr (ptr Eq_8) byte))
  Class: Eq_33
  DataType: (memptr (ptr Eq_8) byte)
  OrigDataType: (memptr T_8 (struct 0001 (0 T_44 t0000)))
T_34: (in 0x0001 : word16)
  Class: Eq_34
  DataType: word16
  OrigDataType: word16
T_35: (in di_107 + 0x0001 : word16)
  Class: Eq_33
  DataType: (memptr (ptr Eq_8) byte)
  OrigDataType: word16
T_36: (in dl_108 : byte)
  Class: Eq_36
  DataType: byte
  OrigDataType: byte
T_37: (in 0x01 : byte)
  Class: Eq_37
  DataType: byte
  OrigDataType: byte
T_38: (in dl_108 - 0x01 : byte)
  Class: Eq_36
  DataType: byte
  OrigDataType: byte
T_39: (in 0x00 : byte)
  Class: Eq_36
  DataType: byte
  OrigDataType: byte
T_40: (in dl_108 != 0x00 : bool)
  Class: Eq_40
  DataType: bool
  OrigDataType: bool
T_41: (in al_115 : byte)
  Class: Eq_41
  DataType: byte
  OrigDataType: byte
T_42: (in 0x0000 : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_43: (in di_107 + 0x0000 : word16)
  Class: Eq_43
  DataType: word16
  OrigDataType: word16
T_44: (in Mem159[ds:di_107 + 0x0000:byte] : byte)
  Class: Eq_41
  DataType: byte
  OrigDataType: byte
T_45: (in si_106 : (memptr (ptr Eq_8) byte))
  Class: Eq_45
  DataType: (memptr (ptr Eq_8) byte)
  OrigDataType: (memptr T_8 (struct 0001 (0 T_48 t0000)))
T_46: (in 0x0000 : word16)
  Class: Eq_46
  DataType: word16
  OrigDataType: word16
T_47: (in si_106 + 0x0000 : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_48: (in Mem89[ds:si_106 + 0x0000:byte] : byte)
  Class: Eq_41
  DataType: byte
  OrigDataType: byte
T_49: (in 0x0001 : word16)
  Class: Eq_49
  DataType: word16
  OrigDataType: word16
T_50: (in si_106 + 0x0001 : word16)
  Class: Eq_45
  DataType: (memptr (ptr Eq_8) byte)
  OrigDataType: word16
T_51: (in 0x00 : byte)
  Class: Eq_41
  DataType: byte
  OrigDataType: byte
T_52: (in al_115 == 0x00 : bool)
  Class: Eq_52
  DataType: bool
  OrigDataType: bool
T_53: (in 0x013B : word16)
  Class: Eq_53
  DataType: word16
  OrigDataType: word16
T_54: (in di_107 + 0x013B : word16)
  Class: Eq_33
  DataType: (memptr (ptr Eq_8) byte)
  OrigDataType: word16
T_55: (in dh_129 : byte)
  Class: Eq_55
  DataType: byte
  OrigDataType: byte
T_56: (in 0x01 : byte)
  Class: Eq_56
  DataType: byte
  OrigDataType: byte
T_57: (in dh_129 - 0x01 : byte)
  Class: Eq_55
  DataType: byte
  OrigDataType: byte
T_58: (in 0x00 : byte)
  Class: Eq_55
  DataType: byte
  OrigDataType: byte
T_59: (in dh_129 != 0x00 : bool)
  Class: Eq_59
  DataType: bool
  OrigDataType: bool
T_60: (in 0x05 : byte)
  Class: Eq_36
  DataType: byte
  OrigDataType: byte
T_61: (in 0x0001 : word16)
  Class: Eq_61
  DataType: word16
  OrigDataType: word16
T_62: (in cx_133 - 0x0001 : word16)
  Class: Eq_18
  DataType: int16
  OrigDataType: word16
T_63: (in 0x0000 : word16)
  Class: Eq_18
  DataType: int16
  OrigDataType: word16
T_64: (in cx_133 != 0x0000 : bool)
  Class: Eq_64
  DataType: bool
  OrigDataType: bool
T_65: (in 0x0207 : word16)
  Class: Eq_65
  DataType: (memptr (ptr Eq_8) int16)
  OrigDataType: (memptr T_8 (struct (0 T_66 t0000)))
T_66: (in Mem61[ds:0x0207:word16] : word16)
  Class: Eq_18
  DataType: int16
  OrigDataType: word16
T_67: (in rLoc1_64 : Eq_67)
  Class: Eq_67
  DataType: Eq_67
  OrigDataType: real64
T_68: (in 0x01FB : word16)
  Class: Eq_68
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_8 (struct (0 T_69 t0000)))
T_69: (in Mem61[ds:0x01FB:real32] : real32)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: real32
T_70: (in 0x01FF : word16)
  Class: Eq_70
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_8 (struct (0 T_71 t0000)))
T_71: (in Mem61[ds:0x01FF:real32] : real32)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: real32
T_72: (in ds->t01FB - ds->t01FF : word16)
  Class: Eq_72
  DataType: word16
  OrigDataType: word16
T_73: (in 0x01FF : word16)
  Class: Eq_73
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_8 (struct (0 T_74 t0000)))
T_74: (in Mem61[ds:0x01FF:real32] : real32)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: real32
T_75: (in ds->t01FB - ds->t01FF - ds->t01FF : word16)
  Class: Eq_67
  DataType: Eq_67
  OrigDataType: word16
T_76: (in rLoc1_66 : real64)
  Class: Eq_76
  DataType: real64
  OrigDataType: real64
T_77: (in cos : ptr32)
  Class: Eq_77
  DataType: (ptr Eq_77)
  OrigDataType: (ptr (fn T_78 (T_67)))
T_78: (in cos(rLoc1_64) : real64)
  Class: Eq_76
  DataType: real64
  OrigDataType: real64
T_79: (in sin : ptr32)
  Class: Eq_79
  DataType: (ptr Eq_79)
  OrigDataType: (ptr (fn T_80 (T_67)))
T_80: (in sin(rLoc1_64) : real64)
  Class: Eq_80
  DataType: Eq_80
  OrigDataType: real64
T_81: (in 0x0203 : word16)
  Class: Eq_81
  DataType: (memptr (ptr Eq_8) Eq_80)
  OrigDataType: (memptr T_8 (struct (0 T_82 t0000)))
T_82: (in Mem68[ds:0x0203:real32] : real32)
  Class: Eq_80
  DataType: Eq_80
  OrigDataType: real32
T_83: (in rLoc2_70 : Eq_7)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: (union (real16 u0) (real64 u1))
T_84: (in 0x01FF : word16)
  Class: Eq_84
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_8 (struct (0 T_85 t0000)))
T_85: (in Mem68[ds:0x01FF:real32] : real32)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: real32
T_86: (in 0x01F7 : word16)
  Class: Eq_86
  DataType: (memptr (ptr Eq_8) real32)
  OrigDataType: (memptr T_8 (struct (0 T_87 t0000)))
T_87: (in Mem68[ds:0x01F7:real32] : real32)
  Class: Eq_87
  DataType: real32
  OrigDataType: real32
T_88: (in ds->t01FF - ds->r01F7 : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_89: (in 0x01FF : word16)
  Class: Eq_89
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_8 (struct (0 T_90 t0000)))
T_90: (in Mem71[ds:0x01FF:real32] : real32)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: real32
T_91: (in rLoc2_72 : Eq_91)
  Class: Eq_91
  DataType: Eq_91
  OrigDataType: real64
T_92: (in 0x01EF : word16)
  Class: Eq_92
  DataType: (memptr (ptr Eq_8) word16)
  OrigDataType: (memptr T_8 (struct (0 T_93 t0000)))
T_93: (in Mem71[ds:0x01EF:word16] : word16)
  Class: Eq_93
  DataType: word16
  OrigDataType: word16
T_94: (in (real64) ds->w01EF : real64)
  Class: Eq_94
  DataType: Eq_94
  OrigDataType: (union (real16 u0) (real64 u1))
T_95: (in rLoc2_70 * (real64) ds->w01EF : word16)
  Class: Eq_91
  DataType: Eq_91
  OrigDataType: real16
T_96: (in rLoc2_74 : Eq_96)
  Class: Eq_96
  DataType: Eq_96
  OrigDataType: (union (real16 u0) (real64 u1))
T_97: (in cos : ptr32)
  Class: Eq_97
  DataType: (ptr Eq_97)
  OrigDataType: (ptr (fn T_98 (T_91)))
T_98: (in cos(rLoc2_72) : real64)
  Class: Eq_96
  DataType: Eq_96
  OrigDataType: real64
T_99: (in sin : ptr32)
  Class: Eq_99
  DataType: (ptr Eq_99)
  OrigDataType: (ptr (fn T_100 (T_91)))
T_100: (in sin(rLoc2_72) : real64)
  Class: Eq_100
  DataType: Eq_100
  OrigDataType: (union (real16 u0) (real64 u1))
T_101: (in 0x01ED : word16)
  Class: Eq_101
  DataType: (memptr (ptr Eq_8) word16)
  OrigDataType: (memptr T_8 (struct (0 T_102 t0000)))
T_102: (in Mem71[ds:0x01ED:word16] : word16)
  Class: Eq_102
  DataType: word16
  OrigDataType: word16
T_103: (in (real64) ds->w01ED : real64)
  Class: Eq_103
  DataType: Eq_103
  OrigDataType: (union (real16 u0) (real64 u1))
T_104: (in sin(rLoc2_72) * (real64) ds->w01ED : word16)
  Class: Eq_104
  DataType: real16
  OrigDataType: real16
T_105: (in 0x0207 : word16)
  Class: Eq_105
  DataType: (memptr (ptr Eq_8) int16)
  OrigDataType: (memptr T_8 (struct (0 T_106 t0000)))
T_106: (in Mem71[ds:0x0207:int16] : int16)
  Class: Eq_18
  DataType: int16
  OrigDataType: int16
T_107: (in (real64) ds->w0207 : real64)
  Class: Eq_107
  DataType: Eq_107
  OrigDataType: (union (real16 u0) (real64 u1))
T_108: (in 0x01EF : word16)
  Class: Eq_108
  DataType: (memptr (ptr Eq_8) word16)
  OrigDataType: (memptr T_8 (struct (0 T_109 t0000)))
T_109: (in Mem71[ds:0x01EF:word16] : word16)
  Class: Eq_93
  DataType: word16
  OrigDataType: word16
T_110: (in (real64) ds->w01EF : real64)
  Class: Eq_110
  DataType: Eq_110
  OrigDataType: (union (real16 u0) (real64 u1))
T_111: (in (real64) ds->w0207 / (real64) ds->w01EF : word16)
  Class: Eq_111
  DataType: real16
  OrigDataType: real16
T_112: (in sin(rLoc2_72) * (real64) ds->w01ED - (real64) ds->w0207 / (real64) ds->w01EF : real64)
  Class: Eq_112
  DataType: Eq_112
  OrigDataType: (union (real16 u0) (real64 u1))
T_113: (in 0x0203 : word16)
  Class: Eq_113
  DataType: (memptr (ptr Eq_8) Eq_80)
  OrigDataType: (memptr T_8 (struct (0 T_114 t0000)))
T_114: (in Mem71[ds:0x0203:real32] : real32)
  Class: Eq_80
  DataType: Eq_80
  OrigDataType: (union (real16 u0) (real32 u1))
T_115: (in (sin(rLoc2_72) * (real64) ds->w01ED - (real64) ds->w0207 / (real64) ds->w01EF) * ds->t0203 : word16)
  Class: Eq_115
  DataType: real16
  OrigDataType: real16
T_116: (in 0x01EB : word16)
  Class: Eq_116
  DataType: (memptr (ptr Eq_8) word16)
  OrigDataType: (memptr T_8 (struct (0 T_117 t0000)))
T_117: (in Mem71[ds:0x01EB:word16] : word16)
  Class: Eq_117
  DataType: word16
  OrigDataType: word16
T_118: (in (real64) ds->w01EB : real64)
  Class: Eq_118
  DataType: Eq_118
  OrigDataType: (union (real16 u0) (real64 u1))
T_119: (in (sin(rLoc2_72) * (real64) ds->w01ED - (real64) ds->w0207 / (real64) ds->w01EF) * ds->t0203 + (real64) ds->w01EB : word16)
  Class: Eq_119
  DataType: real16
  OrigDataType: real16
T_120: (in (int16) ((sin(rLoc2_72) * (real64) ds->w01ED - (real64) ds->w0207 / (real64) ds->w01EF) * ds->t0203 + (real64) ds->w01EB) : int16)
  Class: Eq_120
  DataType: int16
  OrigDataType: int16
T_121: (in 0x020B : word16)
  Class: Eq_121
  DataType: (memptr (ptr Eq_8) int16)
  OrigDataType: (memptr T_8 (struct (0 T_122 t0000)))
T_122: (in Mem82[ds:0x020B:int16] : int16)
  Class: Eq_120
  DataType: int16
  OrigDataType: int16
T_123: (in 0x01ED : word16)
  Class: Eq_123
  DataType: (memptr (ptr Eq_8) word16)
  OrigDataType: (memptr T_8 (struct (0 T_124 t0000)))
T_124: (in Mem82[ds:0x01ED:word16] : word16)
  Class: Eq_102
  DataType: word16
  OrigDataType: word16
T_125: (in (real64) ds->w01ED : real64)
  Class: Eq_125
  DataType: Eq_125
  OrigDataType: (union (real16 u0) (real64 u1))
T_126: (in rLoc2_74 * (real64) ds->w01ED : word16)
  Class: Eq_126
  DataType: real16
  OrigDataType: real16
T_127: (in 0x0207 : word16)
  Class: Eq_127
  DataType: (memptr (ptr Eq_8) int16)
  OrigDataType: (memptr T_8 (struct (0 T_128 t0000)))
T_128: (in Mem82[ds:0x0207:int16] : int16)
  Class: Eq_18
  DataType: int16
  OrigDataType: int16
T_129: (in (real64) ds->w0207 : real64)
  Class: Eq_129
  DataType: Eq_129
  OrigDataType: (union (real16 u0) (real64 u1))
T_130: (in 0x01F1 : word16)
  Class: Eq_130
  DataType: (memptr (ptr Eq_8) word16)
  OrigDataType: (memptr T_8 (struct (0 T_131 t0000)))
T_131: (in Mem82[ds:0x01F1:word16] : word16)
  Class: Eq_131
  DataType: word16
  OrigDataType: word16
T_132: (in (real64) ds->w01F1 : real64)
  Class: Eq_132
  DataType: Eq_132
  OrigDataType: (union (real16 u0) (real64 u1))
T_133: (in (real64) ds->w0207 / (real64) ds->w01F1 : word16)
  Class: Eq_133
  DataType: real16
  OrigDataType: real16
T_134: (in rLoc2_74 * (real64) ds->w01ED - (real64) ds->w0207 / (real64) ds->w01F1 : real64)
  Class: Eq_134
  DataType: real64
  OrigDataType: real64
T_135: (in rLoc1_66 * (rLoc2_74 * (real64) ds->w01ED - (real64) ds->w0207 / (real64) ds->w01F1) : real64)
  Class: Eq_135
  DataType: Eq_135
  OrigDataType: (union (real16 u0) (real64 u1))
T_136: (in 0x01E9 : word16)
  Class: Eq_136
  DataType: (memptr (ptr Eq_8) word16)
  OrigDataType: (memptr T_8 (struct (0 T_137 t0000)))
T_137: (in Mem82[ds:0x01E9:word16] : word16)
  Class: Eq_137
  DataType: word16
  OrigDataType: word16
T_138: (in (real64) ds->w01E9 : real64)
  Class: Eq_138
  DataType: Eq_138
  OrigDataType: (union (real16 u0) (real64 u1))
T_139: (in rLoc1_66 * (rLoc2_74 * (real64) ds->w01ED - (real64) ds->w0207 / (real64) ds->w01F1) + (real64) ds->w01E9 : word16)
  Class: Eq_139
  DataType: real16
  OrigDataType: real16
T_140: (in (int16) (rLoc1_66 * (rLoc2_74 * (real64) ds->w01ED - (real64) ds->w0207 / (real64) ds->w01F1) + (real64) ds->w01E9) : int16)
  Class: Eq_140
  DataType: int16
  OrigDataType: int16
T_141: (in 0x0209 : word16)
  Class: Eq_141
  DataType: (memptr (ptr Eq_8) int16)
  OrigDataType: (memptr T_8 (struct (0 T_142 t0000)))
T_142: (in Mem89[ds:0x0209:int16] : int16)
  Class: Eq_140
  DataType: int16
  OrigDataType: int16
T_143: (in 0x020B : word16)
  Class: Eq_143
  DataType: (memptr (ptr Eq_8) int16)
  OrigDataType: (memptr T_8 (struct (0 T_144 t0000)))
T_144: (in Mem89[ds:0x020B:word16] : word16)
  Class: Eq_120
  DataType: int16
  OrigDataType: int16
T_145: (in 0x0140 : word16)
  Class: Eq_145
  DataType: int16
  OrigDataType: int16
T_146: (in ds->w020B *s 0x0140 : int16)
  Class: Eq_146
  DataType: int16
  OrigDataType: int16
T_147: (in 0x0209 : word16)
  Class: Eq_147
  DataType: (memptr (ptr Eq_8) int16)
  OrigDataType: (memptr T_8 (struct (0 T_148 t0000)))
T_148: (in Mem89[ds:0x0209:word16] : word16)
  Class: Eq_140
  DataType: int16
  OrigDataType: word16
T_149: (in ds->w020B *s 0x0140 + ds->w0209 : word16)
  Class: Eq_149
  DataType: word16
  OrigDataType: word16
T_150: (in 0x020D : word16)
  Class: Eq_150
  DataType: word16
  OrigDataType: word16
T_151: (in ds->w020B *s 0x0140 + ds->w0209 + 0x020D : word16)
  Class: Eq_33
  DataType: (memptr (ptr Eq_8) byte)
  OrigDataType: word16
T_152: (in 0x01D0 : word16)
  Class: Eq_45
  DataType: (memptr (ptr Eq_8) byte)
  OrigDataType: word16
T_153: (in 0x05 : byte)
  Class: Eq_55
  DataType: byte
  OrigDataType: byte
T_154: (in __inb : ptr32)
  Class: Eq_154
  DataType: (ptr Eq_154)
  OrigDataType: (ptr (fn T_156 (T_155)))
T_155: (in 0x03DA : word16)
  Class: Eq_155
  DataType: word16
  OrigDataType: word16
T_156: (in __inb(0x03DA) : byte)
  Class: Eq_156
  DataType: byte
  OrigDataType: byte
T_157: (in 0x08 : byte)
  Class: Eq_157
  DataType: byte
  OrigDataType: byte
T_158: (in __inb(0x03DA) & 0x08 : byte)
  Class: Eq_158
  DataType: byte
  OrigDataType: byte
T_159: (in 0x00 : byte)
  Class: Eq_158
  DataType: byte
  OrigDataType: byte
T_160: (in (__inb(0x03DA) & 0x08) == 0x00 : bool)
  Class: Eq_160
  DataType: bool
  OrigDataType: bool
T_161: (in di_141 : (memptr (ptr Eq_21) byte))
  Class: Eq_161
  DataType: (memptr (ptr Eq_21) byte)
  OrigDataType: (memptr T_21 (struct 0001 (0 T_177 t0000)))
T_162: (in 0x0000 : word16)
  Class: Eq_161
  DataType: (memptr (ptr Eq_21) byte)
  OrigDataType: word16
T_163: (in si_144 : (memptr (ptr Eq_8) byte))
  Class: Eq_163
  DataType: (memptr (ptr Eq_8) byte)
  OrigDataType: (memptr T_8 (struct 0001 (0 T_174 t0000)))
T_164: (in 0x020D : word16)
  Class: Eq_163
  DataType: (memptr (ptr Eq_8) byte)
  OrigDataType: word16
T_165: (in cx_145 : word16)
  Class: Eq_165
  DataType: word16
  OrigDataType: word16
T_166: (in 0xFA00 : word16)
  Class: Eq_165
  DataType: word16
  OrigDataType: word16
T_167: (in __inb : ptr32)
  Class: Eq_167
  DataType: (ptr Eq_167)
  OrigDataType: (ptr (fn T_169 (T_168)))
T_168: (in 0x60 : byte)
  Class: Eq_168
  DataType: byte
  OrigDataType: byte
T_169: (in __inb(0x60) : byte)
  Class: Eq_169
  DataType: byte
  OrigDataType: byte
T_170: (in 0x01 : byte)
  Class: Eq_169
  DataType: byte
  OrigDataType: byte
T_171: (in __inb(0x60) != 0x01 : bool)
  Class: Eq_171
  DataType: bool
  OrigDataType: bool
T_172: (in 0x0000 : word16)
  Class: Eq_172
  DataType: word16
  OrigDataType: word16
T_173: (in si_144 + 0x0000 : word16)
  Class: Eq_173
  DataType: word16
  OrigDataType: word16
T_174: (in Mem89[ds:si_144 + 0x0000:byte] : byte)
  Class: Eq_174
  DataType: byte
  OrigDataType: byte
T_175: (in 0x0000 : word16)
  Class: Eq_175
  DataType: word16
  OrigDataType: word16
T_176: (in di_141 + 0x0000 : word16)
  Class: Eq_176
  DataType: word16
  OrigDataType: word16
T_177: (in Mem150[0xA000:di_141 + 0x0000:byte] : byte)
  Class: Eq_174
  DataType: byte
  OrigDataType: byte
T_178: (in 0x0001 : word16)
  Class: Eq_178
  DataType: word16
  OrigDataType: word16
T_179: (in si_144 + 0x0001 : word16)
  Class: Eq_163
  DataType: (memptr (ptr Eq_8) byte)
  OrigDataType: word16
T_180: (in 0x0001 : word16)
  Class: Eq_180
  DataType: word16
  OrigDataType: word16
T_181: (in di_141 + 0x0001 : word16)
  Class: Eq_161
  DataType: (memptr (ptr Eq_21) byte)
  OrigDataType: word16
T_182: (in 0x0001 : word16)
  Class: Eq_182
  DataType: word16
  OrigDataType: word16
T_183: (in cx_145 - 0x0001 : word16)
  Class: Eq_165
  DataType: word16
  OrigDataType: word16
T_184: (in 0x0000 : word16)
  Class: Eq_165
  DataType: word16
  OrigDataType: word16
T_185: (in cx_145 == 0x0000 : bool)
  Class: Eq_185
  DataType: bool
  OrigDataType: bool
T_186: (in cs : selector)
  Class: Eq_186
  DataType: (ptr Eq_186)
  OrigDataType: (ptr (segment))
T_187: (in ss : selector)
  Class: Eq_187
  DataType: (ptr Eq_187)
  OrigDataType: (ptr (segment))
T_188: (in fp : ptr16)
  Class: Eq_188
  DataType: Eq_188
  OrigDataType: (union (ptr16 u0) ((memptr T_187 (struct (FFFFFFFE T_191 tFFFFFFFE))) u1))
T_189: (in 0x0002 : word16)
  Class: Eq_189
  DataType: word16
  OrigDataType: word16
T_190: (in fp - 0x0002 : word16)
  Class: Eq_190
  DataType: word16
  OrigDataType: word16
T_191: (in Mem28[ss:fp - 0x0002:word16] : word16)
  Class: Eq_186
  DataType: (ptr Eq_186)
  OrigDataType: word16
T_192: (in 0x020D : word16)
  Class: Eq_22
  DataType: (memptr (ptr Eq_21) byte)
  OrigDataType: word16
T_193: (in 0xFA00 : word16)
  Class: Eq_28
  DataType: word16
  OrigDataType: word16
T_194: (in bios_video_set_mode : ptr32)
  Class: Eq_2
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (fn T_196 (T_195)))
T_195: (in 0x03 : byte)
  Class: Eq_4
  DataType: byte
  OrigDataType: byte
T_196: (in bios_video_set_mode(0x03) : void)
  Class: Eq_6
  DataType: void
  OrigDataType: void
T_197:
  Class: Eq_197
  DataType: byte
  OrigDataType: (struct 0001 (0 T_25 t0000))
T_198:
  Class: Eq_198
  DataType: byte
  OrigDataType: (struct 0001 (0 T_174 t0000))
T_199:
  Class: Eq_199
  DataType: byte
  OrigDataType: (struct 0001 (0 T_177 t0000))
T_200:
  Class: Eq_200
  DataType: Eq_200
  OrigDataType: 
*/
typedef Eq_21 Eq_1struct Globals {
	Eq_21 * ptrFFFA0000;	// FFFA0000
} Eq_1;

typedef void (Eq_2)(byte);

typedef union Eq_7 {
	real16 u0;
	real32 u1;
	real64 u2;
	word16 u3;
} Eq_7;

typedef Eq_12 Eq_8Eq_7 Eq_8Eq_7 Eq_8Eq_80 Eq_8 Eq_8[]struct Eq_8 {
	byte b01D0;	// 1D0
	word16 w01E9;	// 1E9
	word16 w01EB;	// 1EB
	word16 w01ED;	// 1ED
	word16 w01EF;	// 1EF
	word16 w01F1;	// 1F1
	Eq_12 t01F3;	// 1F3
	real32 r01F7;	// 1F7
	Eq_7 t01FB;	// 1FB
	Eq_7 t01FF;	// 1FF
	Eq_80 t0203;	// 203
	int16 w0207;	// 207
	int16 w0209;	// 209
	int16 w020B;	// 20B
	byte a020D[];	// 20D
} Eq_8;

typedef union Eq_12 {
	real16 u0;
	real32 u1;
} Eq_12;

typedef  Eq_21[][]struct Eq_21 {
	byte a0000[];	// 0
	byte a020D[];	// 20D
} Eq_21;

typedef union Eq_67 {
	real64 u0;
	word16 u1;
} Eq_67;

typedef real64 (Eq_77)(Eq_67);

typedef Eq_80 (Eq_79)(Eq_67);

typedef union Eq_80 {
	real16 u0;
	real32 u1;
	real64 u2;
} Eq_80;

typedef union Eq_91 {
	real16 u0;
	real64 u1;
} Eq_91;

typedef union Eq_94 {
	real16 u0;
	real64 u1;
} Eq_94;

typedef union Eq_96 {
	real16 u0;
	real64 u1;
} Eq_96;

typedef Eq_96 (Eq_97)(Eq_91);

typedef Eq_100 (Eq_99)(Eq_91);

typedef union Eq_100 {
	real16 u0;
	real64 u1;
} Eq_100;

typedef union Eq_103 {
	real16 u0;
	real64 u1;
} Eq_103;

typedef union Eq_107 {
	real16 u0;
	real64 u1;
} Eq_107;

typedef union Eq_110 {
	real16 u0;
	real64 u1;
} Eq_110;

typedef union Eq_112 {
	real16 u0;
	real64 u1;
} Eq_112;

typedef union Eq_118 {
	real16 u0;
	real64 u1;
} Eq_118;

typedef union Eq_125 {
	real16 u0;
	real64 u1;
} Eq_125;

typedef union Eq_129 {
	real16 u0;
	real64 u1;
} Eq_129;

typedef union Eq_132 {
	real16 u0;
	real64 u1;
} Eq_132;

typedef union Eq_135 {
	real16 u0;
	real64 u1;
} Eq_135;

typedef union Eq_138 {
	real16 u0;
	real64 u1;
} Eq_138;

typedef byte (Eq_154)(word16);

typedef byte (Eq_167)(byte);

typedef struct Eq_186 {
} Eq_186;

typedef struct Eq_187 {
} Eq_187;

typedef union Eq_188 {
	ptr16 u0;
	Eq_200 Eq_187::* u1;
} Eq_188;

typedef Eq_186 Eq_200struct Eq_200 {
	Eq_186 * ptrFFFFFFFE;	// FFFFFFFE
} Eq_200;

