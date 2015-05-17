// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_231/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (union "Eq_2" (real16 u0) (real64 u1))
	T_2 (in rArg0 : Eq_2)
Eq_3: (fn void (byte))
	T_3 (in bios_video_set_mode : ptr32)
	T_4 (in signature of bios_video_set_mode : void)
Eq_8: (union "Eq_8" (ptr32 u0) (segptr32 u1))
	T_8 (in es_bx_10 : ptr32)
	T_13 (in Mem0[ds:bx + 0x0000:segptr32] : segptr32)
Eq_9: (segment "Eq_9" (15A Eq_18 t015A) (5CC2 byte b5CC2) (FFF2 Eq_71 tFFF2) (FFF8 int16 wFFF8) (FFFC int16 wFFFC))
	T_9 (in ds : (ptr Eq_9))
Eq_14: (segment "Eq_14")
	T_14 (in es_11 : (ptr Eq_14))
	T_15 (in SLICE(es_bx_10, selector, 16) : selector)
Eq_18: (struct "Eq_18" 0001 (0 cups16 w0000))
	T_18 (in si_110 : (memptr (ptr Eq_9) Eq_18))
	T_19 (in 0x015A : word16)
	T_43 (in si_67 + 0x0001 : word16)
	T_100 (in si_195 : (memptr (ptr Eq_9) Eq_18))
Eq_30: (fn word16 (byte))
	T_30 (in __aam : ptr32)
Eq_36: (struct "Eq_36" (0 cups16 w0000) (2 word16 w0002) (140 byte b0140))
	T_36 (in di_111 : (memptr (ptr Eq_14) Eq_36))
	T_41 (in DPB(ax_63 << 0x0002, ah_80 + (ah_80 << 0x02), 8, 8) : word16)
	T_94 (in di_196 : (memptr (ptr Eq_14) Eq_36))
Eq_57: (segment "Eq_57")
	T_57 (in ss : selector)
Eq_58: (union "Eq_58" (ptr16 u0) ((memptr (ptr Eq_57) Eq_143) u1))
	T_58 (in fp : ptr16)
Eq_66: (union "Eq_66" (real16 u0) (real64 u1))
	T_66 (in rLoc3_134 : Eq_66)
	T_73 (in (real64) ds->wFFFC / (real64) ds->tFFF2 : word16)
Eq_69: (union "Eq_69" (real16 u0) (real64 u1))
	T_69 (in (real64) ds->wFFFC : real64)
Eq_71: (union "Eq_71" (int32 u0) (word16 u1))
	T_71 (in Mem124[ds:0xFFF2:word16] : word16)
	T_84 (in Mem124[ds:0xFFF2:word16] : word16)
	T_89 (in (int32) (rLoc1_131 * rLoc3_136 + rLoc2) : int32)
	T_91 (in Mem143[ds:0xFFF2:int32] : int32)
Eq_72: (union "Eq_72" (real16 u0) (real64 u1))
	T_72 (in (real64) ds->tFFF2 : real64)
Eq_75: (fn real64 (Eq_66))
	T_75 (in cos : ptr32)
Eq_77: (fn Eq_82 (real64))
	T_77 (in __rndint : ptr32)
Eq_78: (union "Eq_78" (real16 u0) (real64 u1))
	T_78 (in rLoc2 : real64)
	T_86 (in __rndint(rLoc2 * sin(rLoc3_134)) * (real64) ds->tFFF2 : word16)
Eq_79: (fn real64 (Eq_66))
	T_79 (in sin : ptr32)
Eq_82: (union "Eq_82" (real16 u0) (real64 u1))
	T_82 (in __rndint(rLoc2 * sin(rLoc3_134)) : real64)
Eq_85: (union "Eq_85" (real16 u0) (real64 u1))
	T_85 (in (real64) ds->tFFF2 : real64)
Eq_118: (fn byte ((ptr byte)))
	T_118 (in bios_kbd_get_keystroke : ptr32)
	T_119 (in signature of bios_kbd_get_keystroke : void)
Eq_124: (union "Eq_124" (real16 u0) (real64 u1))
	T_124 (in rArg0_181 : real64)
	T_129 (in rArg0 / Mem161[ds:(bx_194 + 0x1FF9) + di_196:real64] : word16)
Eq_128: (union "Eq_128" (real16 u0) (real64 u1))
	T_128 (in Mem161[ds:bx_194 + 0x1FF9 + di_196:real64] : real64)
Eq_138: (fn word16 (word16))
	T_138 (in __in : ptr32)
Eq_143: (struct "Eq_143" (FFFFFFF4 word16 wFFFFFFF4))
	T_143
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr Eq_1)
  OrigDataType: (ptr (struct "Globals"))
T_2: (in rArg0 : Eq_2)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: (union (real16 u0) (real64 u1))
T_3: (in bios_video_set_mode : ptr32)
  Class: Eq_3
  DataType: (ptr Eq_3)
  OrigDataType: (ptr (fn T_7 (T_6)))
T_4: (in signature of bios_video_set_mode : void)
  Class: Eq_3
  DataType: (ptr Eq_3)
  OrigDataType: 
T_5: (in al : byte)
  Class: Eq_5
  DataType: byte
  OrigDataType: byte
T_6: (in 0x13 : byte)
  Class: Eq_5
  DataType: byte
  OrigDataType: byte
T_7: (in bios_video_set_mode(0x13) : void)
  Class: Eq_7
  DataType: void
  OrigDataType: void
T_8: (in es_bx_10 : ptr32)
  Class: Eq_8
  DataType: Eq_8
  OrigDataType: ptr32
T_9: (in ds : (ptr Eq_9))
  Class: Eq_9
  DataType: (ptr Eq_9)
  OrigDataType: (ptr (segment (5CC2 T_131 t5CC2) (FFF2 T_71 tFFF2) (FFF8 T_64 tFFF8) (FFFC T_68 tFFFC)))
T_10: (in bx : (memptr (ptr Eq_9) Eq_8))
  Class: Eq_10
  DataType: (memptr (ptr Eq_9) Eq_8)
  OrigDataType: (memptr T_9 (struct (0 T_13 t0000)))
T_11: (in 0x0000 : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_12: (in bx + 0x0000 : word16)
  Class: Eq_12
  DataType: word16
  OrigDataType: word16
T_13: (in Mem0[ds:bx + 0x0000:segptr32] : segptr32)
  Class: Eq_8
  DataType: Eq_8
  OrigDataType: segptr32
T_14: (in es_11 : (ptr Eq_14))
  Class: Eq_14
  DataType: (ptr Eq_14)
  OrigDataType: (ptr (segment))
T_15: (in SLICE(es_bx_10, selector, 16) : selector)
  Class: Eq_14
  DataType: (ptr Eq_14)
  OrigDataType: (ptr (segment))
T_16: (in bx_106 : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_17: (in (word16) es_bx_10 : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_18: (in si_110 : (memptr (ptr Eq_9) Eq_18))
  Class: Eq_18
  DataType: (memptr (ptr Eq_9) Eq_18)
  OrigDataType: (memptr T_9 (struct 0001 (0 T_112 t0000)))
T_19: (in 0x015A : word16)
  Class: Eq_18
  DataType: (memptr (ptr Eq_9) Eq_18)
  OrigDataType: word16
T_20: (in ax_63 : cups16)
  Class: Eq_20
  DataType: cups16
  OrigDataType: cups16
T_21: (in 0x1000 : word16)
  Class: Eq_21
  DataType: word16
  OrigDataType: word16
T_22: (in ax_63 + 0x1000 : word16)
  Class: Eq_20
  DataType: cups16
  OrigDataType: word16
T_23: (in 0x0000 : word16)
  Class: Eq_20
  DataType: cups16
  OrigDataType: cups16
T_24: (in ax_63 >=u 0x0000 : bool)
  Class: Eq_24
  DataType: bool
  OrigDataType: bool
T_25: (in ah_80 : byte)
  Class: Eq_25
  DataType: byte
  OrigDataType: byte
T_26: (in 0x0002 : word16)
  Class: Eq_26
  DataType: word16
  OrigDataType: word16
T_27: (in ax_63 << 0x0002 : word16)
  Class: Eq_27
  DataType: ui16
  OrigDataType: ui16
T_28: (in SLICE(ax_63 << 0x0002, byte, 8) : byte)
  Class: Eq_25
  DataType: byte
  OrigDataType: byte
T_29: (in ax_89 : word16)
  Class: Eq_29
  DataType: word16
  OrigDataType: word16
T_30: (in __aam : ptr32)
  Class: Eq_30
  DataType: (ptr Eq_30)
  OrigDataType: (ptr (fn T_35 (T_34)))
T_31: (in si_67 : (memptr (ptr Eq_9) byte))
  Class: Eq_31
  DataType: (memptr (ptr Eq_9) byte)
  OrigDataType: (memptr T_9 (struct (0 T_34 t0000)))
T_32: (in 0x0000 : word16)
  Class: Eq_32
  DataType: word16
  OrigDataType: word16
T_33: (in si_67 + 0x0000 : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_34: (in Mem0[ds:si_67 + 0x0000:byte] : byte)
  Class: Eq_34
  DataType: byte
  OrigDataType: byte
T_35: (in __aam(ds->*si_67) : word16)
  Class: Eq_29
  DataType: word16
  OrigDataType: word16
T_36: (in di_111 : (memptr (ptr Eq_14) Eq_36))
  Class: Eq_36
  DataType: (memptr (ptr Eq_14) Eq_36)
  OrigDataType: (memptr T_14 (struct (140 T_97 t0140)))
T_37: (in ax_63 << 0x0002 : word16)
  Class: Eq_37
  DataType: ui16
  OrigDataType: ui16
T_38: (in 0x02 : byte)
  Class: Eq_38
  DataType: byte
  OrigDataType: byte
T_39: (in ah_80 << 0x02 : word16)
  Class: Eq_39
  DataType: ui16
  OrigDataType: ui16
T_40: (in ah_80 + (ah_80 << 0x02) : byte)
  Class: Eq_40
  DataType: byte
  OrigDataType: byte
T_41: (in DPB(ax_63 << 0x0002, ah_80 + (ah_80 << 0x02), 8, 8) : word16)
  Class: Eq_36
  DataType: (memptr (ptr Eq_14) Eq_36)
  OrigDataType: word16
T_42: (in 0x0001 : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_43: (in si_67 + 0x0001 : word16)
  Class: Eq_18
  DataType: (memptr (ptr Eq_9) Eq_18)
  OrigDataType: word16
T_44: (in ax_108 : uint16)
  Class: Eq_44
  DataType: uint16
  OrigDataType: word16
T_45: (in cl : byte)
  Class: Eq_45
  DataType: byte
  OrigDataType: byte
T_46: (in DPB(ax_89, cl, 0, 8) : word16)
  Class: Eq_46
  DataType: uint16
  OrigDataType: uint16
T_47: (in 0x0001 : word16)
  Class: Eq_47
  DataType: uint16
  OrigDataType: uint16
T_48: (in DPB(ax_89, cl, 0, 8) >>u 0x0001 : word16)
  Class: Eq_44
  DataType: uint16
  OrigDataType: uint16
T_49: (in cx : word16)
  Class: Eq_49
  DataType: ui16
  OrigDataType: ui16
T_50: (in (byte) ax_89 : byte)
  Class: Eq_50
  DataType: byte
  OrigDataType: byte
T_51: (in DPB(cx, (byte) ax_89, 0, 8) : word16)
  Class: Eq_51
  DataType: word16
  OrigDataType: word16
T_52: (in 0x0001 : word16)
  Class: Eq_52
  DataType: word16
  OrigDataType: word16
T_53: (in DPB(cx, (byte) ax_89, 0, 8) + 0x0001 : word16)
  Class: Eq_53
  DataType: word16
  OrigDataType: word16
T_54: (in 0x0007 : word16)
  Class: Eq_54
  DataType: word16
  OrigDataType: word16
T_55: (in DPB(cx, (byte) ax_89, 0, 8) + 0x0001 << 0x0007 : word16)
  Class: Eq_49
  DataType: ui16
  OrigDataType: ui16
T_56: (in 0x0140 : word16)
  Class: Eq_56
  DataType: word16
  OrigDataType: word16
T_57: (in ss : selector)
  Class: Eq_57
  DataType: (ptr Eq_57)
  OrigDataType: (ptr (segment))
T_58: (in fp : ptr16)
  Class: Eq_58
  DataType: Eq_58
  OrigDataType: (union (ptr16 u0) ((memptr T_57 (struct (FFFFFFF4 T_61 tFFFFFFF4))) u1))
T_59: (in 0x000C : word16)
  Class: Eq_59
  DataType: word16
  OrigDataType: word16
T_60: (in fp - 0x000C : word16)
  Class: Eq_60
  DataType: word16
  OrigDataType: word16
T_61: (in Mem124[ss:fp - 0x000C:word16] : word16)
  Class: Eq_56
  DataType: word16
  OrigDataType: word16
T_62: (in rLoc1_131 : real64)
  Class: Eq_62
  DataType: real64
  OrigDataType: real64
T_63: (in 0xFFF8 : word16)
  Class: Eq_63
  DataType: (memptr (ptr Eq_9) int16)
  OrigDataType: (memptr T_9 (struct (0 T_64 t0000)))
T_64: (in Mem124[ds:0xFFF8:int16] : int16)
  Class: Eq_64
  DataType: int16
  OrigDataType: int16
T_65: (in (real64) ds->wFFF8 : real64)
  Class: Eq_62
  DataType: real64
  OrigDataType: real64
T_66: (in rLoc3_134 : Eq_66)
  Class: Eq_66
  DataType: Eq_66
  OrigDataType: real64
T_67: (in 0xFFFC : word16)
  Class: Eq_67
  DataType: (memptr (ptr Eq_9) int16)
  OrigDataType: (memptr T_9 (struct (0 T_68 t0000)))
T_68: (in Mem124[ds:0xFFFC:int16] : int16)
  Class: Eq_68
  DataType: int16
  OrigDataType: int16
T_69: (in (real64) ds->wFFFC : real64)
  Class: Eq_69
  DataType: Eq_69
  OrigDataType: (union (real16 u0) (real64 u1))
T_70: (in 0xFFF2 : word16)
  Class: Eq_70
  DataType: (memptr (ptr Eq_9) Eq_71)
  OrigDataType: (memptr T_9 (struct (0 T_71 t0000)))
T_71: (in Mem124[ds:0xFFF2:word16] : word16)
  Class: Eq_71
  DataType: Eq_71
  OrigDataType: word16
T_72: (in (real64) ds->tFFF2 : real64)
  Class: Eq_72
  DataType: Eq_72
  OrigDataType: (union (real16 u0) (real64 u1))
T_73: (in (real64) ds->wFFFC / (real64) ds->tFFF2 : word16)
  Class: Eq_66
  DataType: Eq_66
  OrigDataType: real16
T_74: (in rLoc3_136 : real64)
  Class: Eq_74
  DataType: real64
  OrigDataType: real64
T_75: (in cos : ptr32)
  Class: Eq_75
  DataType: (ptr Eq_75)
  OrigDataType: (ptr (fn T_76 (T_66)))
T_76: (in cos(rLoc3_134) : real64)
  Class: Eq_74
  DataType: real64
  OrigDataType: real64
T_77: (in __rndint : ptr32)
  Class: Eq_77
  DataType: (ptr Eq_77)
  OrigDataType: (ptr (fn T_82 (T_81)))
T_78: (in rLoc2 : real64)
  Class: Eq_78
  DataType: Eq_78
  OrigDataType: (union (real16 u0) (real64 u1))
T_79: (in sin : ptr32)
  Class: Eq_79
  DataType: (ptr Eq_79)
  OrigDataType: (ptr (fn T_80 (T_66)))
T_80: (in sin(rLoc3_134) : real64)
  Class: Eq_80
  DataType: real64
  OrigDataType: real64
T_81: (in rLoc2 * sin(rLoc3_134) : real64)
  Class: Eq_81
  DataType: real64
  OrigDataType: real64
T_82: (in __rndint(rLoc2 * sin(rLoc3_134)) : real64)
  Class: Eq_82
  DataType: Eq_82
  OrigDataType: (union (real16 u0) (real64 u1))
T_83: (in 0xFFF2 : word16)
  Class: Eq_83
  DataType: (memptr (ptr Eq_9) Eq_71)
  OrigDataType: (memptr T_9 (struct (0 T_84 t0000)))
T_84: (in Mem124[ds:0xFFF2:word16] : word16)
  Class: Eq_71
  DataType: Eq_71
  OrigDataType: word16
T_85: (in (real64) ds->tFFF2 : real64)
  Class: Eq_85
  DataType: Eq_85
  OrigDataType: (union (real16 u0) (real64 u1))
T_86: (in __rndint(rLoc2 * sin(rLoc3_134)) * (real64) ds->tFFF2 : word16)
  Class: Eq_78
  DataType: Eq_78
  OrigDataType: real16
T_87: (in rLoc1_131 * rLoc3_136 : real64)
  Class: Eq_87
  DataType: real64
  OrigDataType: real64
T_88: (in rLoc1_131 * rLoc3_136 + rLoc2 : real64)
  Class: Eq_88
  DataType: real64
  OrigDataType: real64
T_89: (in (int32) (rLoc1_131 * rLoc3_136 + rLoc2) : int32)
  Class: Eq_71
  DataType: Eq_71
  OrigDataType: int32
T_90: (in 0xFFF2 : word16)
  Class: Eq_90
  DataType: (memptr (ptr Eq_9) Eq_71)
  OrigDataType: (memptr T_9 (struct (0 T_91 t0000)))
T_91: (in Mem143[ds:0xFFF2:int32] : int32)
  Class: Eq_71
  DataType: Eq_71
  OrigDataType: int32
T_92: (in bx_194 : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_93: (in SLICE(bx_194, byte, 8) : byte)
  Class: Eq_93
  DataType: byte
  OrigDataType: byte
T_94: (in di_196 : (memptr (ptr Eq_14) Eq_36))
  Class: Eq_36
  DataType: (memptr (ptr Eq_14) Eq_36)
  OrigDataType: (memptr T_14 (struct (0 T_137 t0000) (2 T_142 t0002) (140 T_97 t0140)))
T_95: (in 0x0140 : word16)
  Class: Eq_95
  DataType: word16
  OrigDataType: word16
T_96: (in di_196 + 0x0140 : word16)
  Class: Eq_96
  DataType: word16
  OrigDataType: word16
T_97: (in Mem161[es_11:di_196 + 0x0140:byte] : byte)
  Class: Eq_93
  DataType: byte
  OrigDataType: byte
T_98: (in 0x0001 : word16)
  Class: Eq_98
  DataType: word16
  OrigDataType: word16
T_99: (in cx - 0x0001 : word16)
  Class: Eq_49
  DataType: ui16
  OrigDataType: word16
T_100: (in si_195 : (memptr (ptr Eq_9) Eq_18))
  Class: Eq_18
  DataType: (memptr (ptr Eq_9) Eq_18)
  OrigDataType: (memptr T_9 (struct (0 T_134 t0000)))
T_101: (in 0x0001 : word16)
  Class: Eq_101
  DataType: word16
  OrigDataType: word16
T_102: (in ax_108 + 0x0001 : word16)
  Class: Eq_44
  DataType: uint16
  OrigDataType: word16
T_103: (in (byte) cx : byte)
  Class: Eq_45
  DataType: byte
  OrigDataType: byte
T_104: (in 0x0000 : word16)
  Class: Eq_49
  DataType: ui16
  OrigDataType: word16
T_105: (in cx != 0x0000 : bool)
  Class: Eq_105
  DataType: bool
  OrigDataType: bool
T_106: (in 0x0C80 : word16)
  Class: Eq_106
  DataType: word16
  OrigDataType: word16
T_107: (in ax_108 ^ 0x0C80 : word16)
  Class: Eq_107
  DataType: word16
  OrigDataType: word16
T_108: (in 0x0000 : word16)
  Class: Eq_107
  DataType: word16
  OrigDataType: word16
T_109: (in (ax_108 ^ 0x0C80) != 0x0000 : bool)
  Class: Eq_109
  DataType: bool
  OrigDataType: bool
T_110: (in 0x0000 : word16)
  Class: Eq_110
  DataType: word16
  OrigDataType: word16
T_111: (in si_110 + 0x0000 : word16)
  Class: Eq_111
  DataType: word16
  OrigDataType: word16
T_112: (in Mem0[ds:si_110 + 0x0000:word16] : word16)
  Class: Eq_20
  DataType: cups16
  OrigDataType: word16
T_113: (in 0x0002 : word16)
  Class: Eq_113
  DataType: word16
  OrigDataType: word16
T_114: (in si_110 + 0x0002 : word16)
  Class: Eq_31
  DataType: (memptr (ptr Eq_9) byte)
  OrigDataType: word16
T_115: (in al_177 : byte)
  Class: Eq_115
  DataType: byte
  OrigDataType: byte
T_116: (in ax_179 : word16)
  Class: Eq_116
  DataType: word16
  OrigDataType: word16
T_117: (in ax_108 ^ 0x0C80 : word16)
  Class: Eq_117
  DataType: word16
  OrigDataType: word16
T_118: (in bios_kbd_get_keystroke : ptr32)
  Class: Eq_118
  DataType: (ptr Eq_118)
  OrigDataType: (ptr (fn T_122 (T_121)))
T_119: (in signature of bios_kbd_get_keystroke : void)
  Class: Eq_118
  DataType: (ptr Eq_118)
  OrigDataType: 
T_120: (in alOut : ptr16)
  Class: Eq_120
  DataType: (ptr byte)
  OrigDataType: ptr16
T_121: (in out al_177 : ptr16)
  Class: Eq_120
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_122: (in bios_kbd_get_keystroke(out al_177) : byte)
  Class: Eq_122
  DataType: byte
  OrigDataType: byte
T_123: (in DPB(ax_108 ^ 0x0C80, bios_kbd_get_keystroke(out al_177), 8, 8) : word16)
  Class: Eq_116
  DataType: word16
  OrigDataType: word16
T_124: (in rArg0_181 : real64)
  Class: Eq_124
  DataType: Eq_124
  OrigDataType: real64
T_125: (in 0x1FF9 : word16)
  Class: Eq_125
  DataType: word16
  OrigDataType: word16
T_126: (in bx_194 + 0x1FF9 : word16)
  Class: Eq_126
  DataType: (memptr (ptr Eq_9) Eq_128)
  OrigDataType: (memptr T_9 (struct (0 T_128 t0000)))
T_127: (in bx_194 + 0x1FF9 + di_196 : word16)
  Class: Eq_127
  DataType: word16
  OrigDataType: word16
T_128: (in Mem161[ds:bx_194 + 0x1FF9 + di_196:real64] : real64)
  Class: Eq_128
  DataType: Eq_128
  OrigDataType: (union (real16 u0) (real64 u1))
T_129: (in rArg0 / Mem161[ds:(bx_194 + 0x1FF9) + di_196:real64] : word16)
  Class: Eq_124
  DataType: Eq_124
  OrigDataType: real16
T_130: (in 0x5CC2 : word16)
  Class: Eq_130
  DataType: (memptr (ptr Eq_9) byte)
  OrigDataType: (memptr T_9 (struct (0 T_131 t0000)))
T_131: (in Mem182[ds:0x5CC2:byte] : byte)
  Class: Eq_115
  DataType: byte
  OrigDataType: byte
T_132: (in 0x0000 : word16)
  Class: Eq_132
  DataType: word16
  OrigDataType: word16
T_133: (in si_195 + 0x0000 : word16)
  Class: Eq_133
  DataType: word16
  OrigDataType: word16
T_134: (in Mem182[ds:si_195 + 0x0000:word16] : word16)
  Class: Eq_20
  DataType: cups16
  OrigDataType: word16
T_135: (in 0x0000 : word16)
  Class: Eq_135
  DataType: word16
  OrigDataType: word16
T_136: (in di_196 + 0x0000 : word16)
  Class: Eq_136
  DataType: word16
  OrigDataType: word16
T_137: (in Mem187[es_11:di_196 + 0x0000:word16] : word16)
  Class: Eq_20
  DataType: cups16
  OrigDataType: word16
T_138: (in __in : ptr32)
  Class: Eq_138
  DataType: (ptr Eq_138)
  OrigDataType: (ptr (fn T_139 (T_116)))
T_139: (in __in(ax_179) : word16)
  Class: Eq_139
  DataType: word16
  OrigDataType: word16
T_140: (in 0x0002 : word16)
  Class: Eq_140
  DataType: word16
  OrigDataType: word16
T_141: (in di_196 + 0x0002 : word16)
  Class: Eq_141
  DataType: word16
  OrigDataType: word16
T_142: (in Mem190[es_11:di_196 + 0x0002:word16] : word16)
  Class: Eq_139
  DataType: word16
  OrigDataType: word16
T_143:
  Class: Eq_143
  DataType: Eq_143
  OrigDataType: 
*/
typedef struct Globals {
} Eq_1;

typedef union Eq_2 {
	real16 u0;
	real64 u1;
} Eq_2;

typedef void (Eq_3)(byte);

typedef union Eq_8 {
	ptr32 u0;
	segptr32 u1;
} Eq_8;

typedef Eq_18 Eq_9Eq_71 Eq_9struct Eq_9 {
	Eq_18 t015A;	// 15A
	byte b5CC2;	// 5CC2
	Eq_71 tFFF2;	// FFF2
	int16 wFFF8;	// FFF8
	int16 wFFFC;	// FFFC
} Eq_9;

typedef struct Eq_14 {
} Eq_14;

typedef struct Eq_18 {	// size: 1 1
	cups16 w0000;	// 0
} Eq_18;

typedef word16 (Eq_30)(byte);

typedef struct Eq_36 {
	cups16 w0000;	// 0
	word16 w0002;	// 2
	byte b0140;	// 140
} Eq_36;

typedef struct Eq_57 {
} Eq_57;

typedef union Eq_58 {
	ptr16 u0;
	Eq_143 Eq_57::* u1;
} Eq_58;

typedef union Eq_66 {
	real16 u0;
	real64 u1;
} Eq_66;

typedef union Eq_69 {
	real16 u0;
	real64 u1;
} Eq_69;

typedef union Eq_71 {
	int32 u0;
	word16 u1;
} Eq_71;

typedef union Eq_72 {
	real16 u0;
	real64 u1;
} Eq_72;

typedef real64 (Eq_75)(Eq_66);

typedef Eq_82 (Eq_77)(real64);

typedef union Eq_78 {
	real16 u0;
	real64 u1;
} Eq_78;

typedef real64 (Eq_79)(Eq_66);

typedef union Eq_82 {
	real16 u0;
	real64 u1;
} Eq_82;

typedef union Eq_85 {
	real16 u0;
	real64 u1;
} Eq_85;

typedef byte (Eq_118)(byte *);

typedef union Eq_124 {
	real16 u0;
	real64 u1;
} Eq_124;

typedef union Eq_128 {
	real16 u0;
	real64 u1;
} Eq_128;

typedef word16 (Eq_138)(word16);

typedef struct Eq_143 {
	word16 wFFFFFFF4;	// FFFFFFF4
} Eq_143;

