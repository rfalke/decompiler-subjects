// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_176/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_38) ptrFFFA0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_13: (union "Eq_13" (int16 u0) (int32 u1))
	T_13 (in eax_101 : Eq_13)
	T_16 (in DPB(eax, 0x13, 0, 8) : word32)
	T_28 (in DPB(eax_101, ax_15, 0, 16) : word32)
	T_44 (in cx_119 : Eq_13)
	T_46 (in cx_119 + 0x0001 : word16)
	T_47 (in 0x00A0 : word16)
	T_51 (in Mem104[ds:0x733C:word32] : word32)
	T_54 (in Mem104[ds:0x733C:int32] : int32)
	T_57 (in (int16) sqrt((real64) ds->t733C) : int16)
	T_59 (in Mem107[ds:0x733C:int16] : int16)
	T_61 (in Mem107[ds:0x733C:word16] : word16)
	T_63 (in ds->t733C - 0x4E20 : word16)
	T_65 (in Mem109[ds:0x733C:word16] : word16)
	T_68 (in Mem109[ds:0x733C:int16] : int16)
	T_75 (in Mem113[ds:0x733C:word16] : word16)
	T_77 (in Mem113[ds:0x733C:int16] : int16)
	T_80 (in (int16) ((real64) ds->t733C * rLoc1_112) : int16)
	T_82 (in Mem116[ds:0x733C:int16] : int16)
	T_122 (in DPB(eax_96, ax_97 >>u 0x0001, 0, 16) : word32)
	T_131 (in 0xFF60 : word16)
Eq_19: (fn void (word16, byte))
	T_19 (in __outb : ptr32)
Eq_25: (fn void (word16, byte))
	T_25 (in __outb : ptr32)
Eq_38: (segment "Eq_38" (0 byte b0000))
	T_38 (in 0xA000 : selector)
Eq_49: (segment "Eq_49" (733C Eq_13 t733C) (7340 Eq_71 t7340) (7342 word16 w7342))
	T_49 (in ds : (ptr Eq_49))
Eq_52: (fn real64 (real64))
	T_52 (in sqrt : ptr32)
Eq_66: (union "Eq_66" (real16 u0) (real64 u1))
	T_66 (in rLoc1_112 : Eq_66)
	T_73 (in (real64) ds->t733C / (real64) ds->t7340 : word16)
Eq_69: (union "Eq_69" (real16 u0) (real64 u1))
	T_69 (in (real64) ds->t733C : real64)
Eq_71: (union "Eq_71" (word16 u0) (word32 u1))
	T_71 (in Mem109[ds:0x7340:word32] : word32)
	T_94 (in ax_78 + 0x1000 : word16)
	T_96 (in Mem81[ds:0x7340:word16] : word16)
Eq_72: (union "Eq_72" (real16 u0) (real64 u1))
	T_72 (in (real64) ds->t7340 : real64)
Eq_102: (fn word32 (word32, byte))
	T_102 (in __ror : ptr32)
Eq_103: (fn word32 (word32, byte))
	T_103 (in __ror : ptr32)
Eq_123: (union "Eq_123" (int16 u0) (uint16 u1))
	T_123 (in ax_97 >>u 0x0001 : word16)
	T_124 (in 0x0000 : word16)
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
T_7: (in al_16 : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_8: (in 0x13 : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_9: (in ax_15 : word16)
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
T_13: (in eax_101 : Eq_13)
  Class: Eq_13
  DataType: Eq_13
  OrigDataType: word32
T_14: (in eax : word32)
  Class: Eq_14
  DataType: word32
  OrigDataType: word32
T_15: (in 0x13 : byte)
  Class: Eq_15
  DataType: byte
  OrigDataType: byte
T_16: (in DPB(eax, 0x13, 0, 8) : word32)
  Class: Eq_13
  DataType: Eq_13
  OrigDataType: word32
T_17: (in cx_14 : ptr16)
  Class: Eq_17
  DataType: ptr16
  OrigDataType: word16
T_18: (in fp : ptr16)
  Class: Eq_17
  DataType: ptr16
  OrigDataType: ptr16
T_19: (in __outb : ptr32)
  Class: Eq_19
  DataType: (ptr Eq_19)
  OrigDataType: (ptr (fn T_21 (T_20, T_7)))
T_20: (in 0x03C9 : word16)
  Class: Eq_20
  DataType: word16
  OrigDataType: word16
T_21: (in __outb(0x03C9, al_16) : void)
  Class: Eq_21
  DataType: void
  OrigDataType: void
T_22: (in 0x0001 : word16)
  Class: Eq_22
  DataType: word16
  OrigDataType: word16
T_23: (in ax_15 - 0x0001 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_24: (in (byte) ax_15 : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_25: (in __outb : ptr32)
  Class: Eq_25
  DataType: (ptr Eq_25)
  OrigDataType: (ptr (fn T_27 (T_26, T_7)))
T_26: (in 0x03C9 : word16)
  Class: Eq_26
  DataType: word16
  OrigDataType: word16
T_27: (in __outb(0x03C9, al_16) : void)
  Class: Eq_27
  DataType: void
  OrigDataType: void
T_28: (in DPB(eax_101, ax_15, 0, 16) : word32)
  Class: Eq_13
  DataType: Eq_13
  OrigDataType: word32
T_29: (in 0x0001 : word16)
  Class: Eq_29
  DataType: word16
  OrigDataType: word16
T_30: (in cx_14 - 0x0001 : word16)
  Class: Eq_17
  DataType: ptr16
  OrigDataType: word16
T_31: (in 0x0000 : word16)
  Class: Eq_17
  DataType: ptr16
  OrigDataType: word16
T_32: (in cx_14 != 0x0000 : bool)
  Class: Eq_32
  DataType: bool
  OrigDataType: bool
T_33: (in di_118 : (memptr (ptr Eq_38) byte))
  Class: Eq_33
  DataType: (memptr (ptr Eq_38) byte)
  OrigDataType: (memptr T_38 (struct 0001 (0 T_41 t0000)))
T_34: (in 0x0000 : word16)
  Class: Eq_33
  DataType: (memptr (ptr Eq_38) byte)
  OrigDataType: word16
T_35: (in bx_122 : int16)
  Class: Eq_35
  DataType: int16
  OrigDataType: int16
T_36: (in 0xFF9D : word16)
  Class: Eq_35
  DataType: int16
  OrigDataType: word16
T_37: (in al_99 : byte)
  Class: Eq_37
  DataType: byte
  OrigDataType: byte
T_38: (in 0xA000 : selector)
  Class: Eq_38
  DataType: (ptr Eq_38)
  OrigDataType: (ptr (segment))
T_39: (in 0x0000 : word16)
  Class: Eq_39
  DataType: word16
  OrigDataType: word16
T_40: (in di_118 + 0x0000 : word16)
  Class: Eq_40
  DataType: word16
  OrigDataType: word16
T_41: (in Mem117[0xA000:di_118 + 0x0000:byte] : byte)
  Class: Eq_37
  DataType: byte
  OrigDataType: byte
T_42: (in 0x0001 : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_43: (in di_118 + 0x0001 : word16)
  Class: Eq_33
  DataType: (memptr (ptr Eq_38) byte)
  OrigDataType: word16
T_44: (in cx_119 : Eq_13)
  Class: Eq_13
  DataType: Eq_13
  OrigDataType: int16
T_45: (in 0x0001 : word16)
  Class: Eq_45
  DataType: word16
  OrigDataType: word16
T_46: (in cx_119 + 0x0001 : word16)
  Class: Eq_13
  DataType: Eq_13
  OrigDataType: word16
T_47: (in 0x00A0 : word16)
  Class: Eq_13
  DataType: int16
  OrigDataType: word16
T_48: (in cx_119 != 0x00A0 : bool)
  Class: Eq_48
  DataType: bool
  OrigDataType: bool
T_49: (in ds : (ptr Eq_49))
  Class: Eq_49
  DataType: (ptr Eq_49)
  OrigDataType: (ptr (segment (733C T_13 t733C) (7340 T_71 t7340) (7342 T_99 t7342)))
T_50: (in 0x733C : word16)
  Class: Eq_50
  DataType: (memptr (ptr Eq_49) Eq_13)
  OrigDataType: (memptr T_49 (struct (0 T_51 t0000)))
T_51: (in Mem104[ds:0x733C:word32] : word32)
  Class: Eq_13
  DataType: Eq_13
  OrigDataType: word32
T_52: (in sqrt : ptr32)
  Class: Eq_52
  DataType: (ptr Eq_52)
  OrigDataType: (ptr (fn T_56 (T_55)))
T_53: (in 0x733C : word16)
  Class: Eq_53
  DataType: (memptr (ptr Eq_49) Eq_13)
  OrigDataType: (memptr T_49 (struct (0 T_54 t0000)))
T_54: (in Mem104[ds:0x733C:int32] : int32)
  Class: Eq_13
  DataType: Eq_13
  OrigDataType: int32
T_55: (in (real64) ds->t733C : real64)
  Class: Eq_55
  DataType: real64
  OrigDataType: real64
T_56: (in sqrt((real64) ds->t733C) : real64)
  Class: Eq_56
  DataType: real64
  OrigDataType: real64
T_57: (in (int16) sqrt((real64) ds->t733C) : int16)
  Class: Eq_13
  DataType: Eq_13
  OrigDataType: int16
T_58: (in 0x733C : word16)
  Class: Eq_58
  DataType: (memptr (ptr Eq_49) Eq_13)
  OrigDataType: (memptr T_49 (struct (0 T_59 t0000)))
T_59: (in Mem107[ds:0x733C:int16] : int16)
  Class: Eq_13
  DataType: Eq_13
  OrigDataType: int16
T_60: (in 0x733C : word16)
  Class: Eq_60
  DataType: (memptr (ptr Eq_49) Eq_13)
  OrigDataType: (memptr T_49 (struct (0 T_61 t0000)))
T_61: (in Mem107[ds:0x733C:word16] : word16)
  Class: Eq_13
  DataType: Eq_13
  OrigDataType: word16
T_62: (in 0x4E20 : word16)
  Class: Eq_62
  DataType: word16
  OrigDataType: word16
T_63: (in ds->t733C - 0x4E20 : word16)
  Class: Eq_13
  DataType: Eq_13
  OrigDataType: word16
T_64: (in 0x733C : word16)
  Class: Eq_64
  DataType: (memptr (ptr Eq_49) Eq_13)
  OrigDataType: (memptr T_49 (struct (0 T_65 t0000)))
T_65: (in Mem109[ds:0x733C:word16] : word16)
  Class: Eq_13
  DataType: Eq_13
  OrigDataType: word16
T_66: (in rLoc1_112 : Eq_66)
  Class: Eq_66
  DataType: Eq_66
  OrigDataType: real64
T_67: (in 0x733C : word16)
  Class: Eq_67
  DataType: (memptr (ptr Eq_49) Eq_13)
  OrigDataType: (memptr T_49 (struct (0 T_68 t0000)))
T_68: (in Mem109[ds:0x733C:int16] : int16)
  Class: Eq_13
  DataType: Eq_13
  OrigDataType: int16
T_69: (in (real64) ds->t733C : real64)
  Class: Eq_69
  DataType: Eq_69
  OrigDataType: (union (real16 u0) (real64 u1))
T_70: (in 0x7340 : word16)
  Class: Eq_70
  DataType: (memptr (ptr Eq_49) Eq_71)
  OrigDataType: (memptr T_49 (struct (0 T_71 t0000)))
T_71: (in Mem109[ds:0x7340:word32] : word32)
  Class: Eq_71
  DataType: Eq_71
  OrigDataType: word32
T_72: (in (real64) ds->t7340 : real64)
  Class: Eq_72
  DataType: Eq_72
  OrigDataType: (union (real16 u0) (real64 u1))
T_73: (in (real64) ds->t733C / (real64) ds->t7340 : word16)
  Class: Eq_66
  DataType: Eq_66
  OrigDataType: real16
T_74: (in 0x733C : word16)
  Class: Eq_74
  DataType: (memptr (ptr Eq_49) Eq_13)
  OrigDataType: (memptr T_49 (struct (0 T_75 t0000)))
T_75: (in Mem113[ds:0x733C:word16] : word16)
  Class: Eq_13
  DataType: Eq_13
  OrigDataType: word16
T_76: (in 0x733C : word16)
  Class: Eq_76
  DataType: (memptr (ptr Eq_49) Eq_13)
  OrigDataType: (memptr T_49 (struct (0 T_77 t0000)))
T_77: (in Mem113[ds:0x733C:int16] : int16)
  Class: Eq_13
  DataType: Eq_13
  OrigDataType: int16
T_78: (in (real64) ds->t733C : real64)
  Class: Eq_78
  DataType: real64
  OrigDataType: real64
T_79: (in (real64) ds->t733C * rLoc1_112 : real64)
  Class: Eq_79
  DataType: real64
  OrigDataType: real64
T_80: (in (int16) ((real64) ds->t733C * rLoc1_112) : int16)
  Class: Eq_13
  DataType: Eq_13
  OrigDataType: int16
T_81: (in 0x733C : word16)
  Class: Eq_81
  DataType: (memptr (ptr Eq_49) Eq_13)
  OrigDataType: (memptr T_49 (struct (0 T_82 t0000)))
T_82: (in Mem116[ds:0x733C:int16] : int16)
  Class: Eq_13
  DataType: Eq_13
  OrigDataType: int16
T_83: (in ax_78 : word16)
  Class: Eq_83
  DataType: word16
  OrigDataType: word16
T_84: (in (int32) cx_119 : int32)
  Class: Eq_84
  DataType: int32
  OrigDataType: int32
T_85: (in (word16) (int32) cx_119 : word16)
  Class: Eq_85
  DataType: int16
  OrigDataType: int16
T_86: (in cx_119 *s (word16) ((int32) cx_119) : int32)
  Class: Eq_86
  DataType: int32
  OrigDataType: int32
T_87: (in (word16) (cx_119 *s (word16) ((int32) cx_119)) : word16)
  Class: Eq_87
  DataType: word16
  OrigDataType: word16
T_88: (in (int32) bx_122 : int32)
  Class: Eq_88
  DataType: int32
  OrigDataType: int32
T_89: (in (word16) (int32) bx_122 : word16)
  Class: Eq_89
  DataType: int16
  OrigDataType: int16
T_90: (in bx_122 *s (word16) ((int32) bx_122) : int32)
  Class: Eq_90
  DataType: int32
  OrigDataType: int32
T_91: (in (word16) (bx_122 *s (word16) ((int32) bx_122)) : word16)
  Class: Eq_91
  DataType: word16
  OrigDataType: word16
T_92: (in (word16) (cx_119 *s (word16) ((int32) cx_119)) + (word16) (bx_122 *s (word16) ((int32) bx_122)) : word16)
  Class: Eq_83
  DataType: word16
  OrigDataType: word16
T_93: (in 0x1000 : word16)
  Class: Eq_93
  DataType: word16
  OrigDataType: word16
T_94: (in ax_78 + 0x1000 : word16)
  Class: Eq_71
  DataType: Eq_71
  OrigDataType: word16
T_95: (in 0x7340 : word16)
  Class: Eq_95
  DataType: (memptr (ptr Eq_49) Eq_71)
  OrigDataType: (memptr T_49 (struct (0 T_96 t0000)))
T_96: (in Mem81[ds:0x7340:word16] : word16)
  Class: Eq_71
  DataType: Eq_71
  OrigDataType: word16
T_97: (in 0x0000 : word16)
  Class: Eq_97
  DataType: word16
  OrigDataType: word16
T_98: (in 0x7342 : word16)
  Class: Eq_98
  DataType: (memptr (ptr Eq_49) word16)
  OrigDataType: (memptr T_49 (struct (0 T_99 t0000)))
T_99: (in Mem83[ds:0x7342:word16] : word16)
  Class: Eq_97
  DataType: word16
  OrigDataType: word16
T_100: (in eax_96 : word32)
  Class: Eq_100
  DataType: word32
  OrigDataType: word32
T_101: (in 0x17D78400 : word32)
  Class: Eq_101
  DataType: word32
  OrigDataType: word32
T_102: (in __ror : ptr32)
  Class: Eq_102
  DataType: (ptr Eq_102)
  OrigDataType: (ptr (fn T_114 (T_112, T_113)))
T_103: (in __ror : ptr32)
  Class: Eq_103
  DataType: (ptr Eq_103)
  OrigDataType: (ptr (fn T_107 (T_105, T_106)))
T_104: (in ax_78 + 0x1000 : word16)
  Class: Eq_104
  DataType: word16
  OrigDataType: word16
T_105: (in DPB(eax_101, ax_78 + 0x1000, 0, 16) : word32)
  Class: Eq_105
  DataType: word32
  OrigDataType: word32
T_106: (in 0x10 : byte)
  Class: Eq_106
  DataType: byte
  OrigDataType: byte
T_107: (in __ror(DPB(eax_101, ax_78 + 0x1000, 0, 16), 0x10) : word32)
  Class: Eq_107
  DataType: word32
  OrigDataType: word32
T_108: (in ax_78 + 0x1000 : word16)
  Class: Eq_108
  DataType: uint16
  OrigDataType: uint16
T_109: (in 0x733C : word16)
  Class: Eq_109
  DataType: uint16
  OrigDataType: uint16
T_110: (in (ax_78 + 0x1000) *u 0x733C : uint32)
  Class: Eq_110
  DataType: uint32
  OrigDataType: uint32
T_111: (in SLICE((ax_78 + 0x1000) *u 0x733C, word16, 16) : word16)
  Class: Eq_111
  DataType: word16
  OrigDataType: word16
T_112: (in DPB(__ror(DPB(eax_101, ax_78 + 0x1000, 0, 16), 0x10), SLICE((ax_78 + 0x1000) *u 0x733C, word16, 16), 0, 16) : word32)
  Class: Eq_112
  DataType: word32
  OrigDataType: word32
T_113: (in 0x10 : byte)
  Class: Eq_113
  DataType: byte
  OrigDataType: byte
T_114: (in __ror(DPB(__ror(DPB(eax_101, ax_78 + 0x1000, 0, 16), 0x10), SLICE((ax_78 + 0x1000) *u 0x733C, word16, 16), 0, 16), 0x10) : word32)
  Class: Eq_114
  DataType: word32
  OrigDataType: word32
T_115: (in 0x17D78400 - __ror(DPB(__ror(DPB(eax_101, ax_78 + 0x1000, 0, 16), 0x10), SLICE((ax_78 + 0x1000) *u 0x733C, word16, 16), 0, 16), 0x10) : word32)
  Class: Eq_100
  DataType: word32
  OrigDataType: word32
T_116: (in ax_97 : uint16)
  Class: Eq_116
  DataType: uint16
  OrigDataType: uint16
T_117: (in (word16) eax_96 : word16)
  Class: Eq_116
  DataType: uint16
  OrigDataType: word16
T_118: (in 0x0001 : word16)
  Class: Eq_118
  DataType: uint16
  OrigDataType: uint16
T_119: (in ax_97 >>u 0x0001 : word16)
  Class: Eq_119
  DataType: uint16
  OrigDataType: uint16
T_120: (in (byte) (ax_97 >>u 0x0001) : byte)
  Class: Eq_37
  DataType: byte
  OrigDataType: byte
T_121: (in ax_97 >>u 0x0001 : word16)
  Class: Eq_121
  DataType: uint16
  OrigDataType: uint16
T_122: (in DPB(eax_96, ax_97 >>u 0x0001, 0, 16) : word32)
  Class: Eq_13
  DataType: Eq_13
  OrigDataType: word32
T_123: (in ax_97 >>u 0x0001 : word16)
  Class: Eq_123
  DataType: Eq_123
  OrigDataType: (union (int16 u0) (uint16 u1))
T_124: (in 0x0000 : word16)
  Class: Eq_123
  DataType: int16
  OrigDataType: int16
T_125: (in ax_97 >>u 0x0001 < 0x0000 : bool)
  Class: Eq_125
  DataType: bool
  OrigDataType: bool
T_126: (in 0x0001 : word16)
  Class: Eq_126
  DataType: word16
  OrigDataType: word16
T_127: (in bx_122 + 0x0001 : word16)
  Class: Eq_35
  DataType: int16
  OrigDataType: word16
T_128: (in (byte) bx_122 : byte)
  Class: Eq_128
  DataType: byte
  OrigDataType: byte
T_129: (in 0x64 : byte)
  Class: Eq_128
  DataType: byte
  OrigDataType: byte
T_130: (in (byte) bx_122 != 0x64 : bool)
  Class: Eq_130
  DataType: bool
  OrigDataType: bool
T_131: (in 0xFF60 : word16)
  Class: Eq_13
  DataType: int16
  OrigDataType: word16
*/
typedef Eq_38 Eq_1struct Globals {
	Eq_38 * ptrFFFA0000;	// FFFA0000
} Eq_1;

typedef void (Eq_2)(byte);

typedef union Eq_13 {
	int16 u0;
	int32 u1;
} Eq_13;

typedef void (Eq_19)(word16, byte);

typedef void (Eq_25)(word16, byte);

typedef struct Eq_38 {
	byte b0000;	// 0
} Eq_38;

typedef Eq_13 Eq_49Eq_71 Eq_49struct Eq_49 {
	Eq_13 t733C;	// 733C
	Eq_71 t7340;	// 7340
	word16 w7342;	// 7342
} Eq_49;

typedef real64 (Eq_52)(real64);

typedef union Eq_66 {
	real16 u0;
	real64 u1;
} Eq_66;

typedef union Eq_69 {
	real16 u0;
	real64 u1;
} Eq_69;

typedef union Eq_71 {
	word16 u0;
	word32 u1;
} Eq_71;

typedef union Eq_72 {
	real16 u0;
	real64 u1;
} Eq_72;

typedef word32 (Eq_102)(word32, byte);

typedef word32 (Eq_103)(word32, byte);

typedef union Eq_123 {
	int16 u0;
	uint16 u1;
} Eq_123;

