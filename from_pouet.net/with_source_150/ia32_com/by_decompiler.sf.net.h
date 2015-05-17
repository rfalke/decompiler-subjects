// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_150/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_12) ptrFFFA0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_7: (union "Eq_7" (int16 u0) (int32 u1))
	T_7 (in eax_123 : Eq_7)
	T_10 (in DPB(eax, 0x13, 0, 8) : word32)
	T_19 (in cx_112 : Eq_7)
	T_21 (in cx_112 + 0x0001 : word16)
	T_22 (in 0x00A0 : word16)
	T_26 (in Mem94[ds:0x733C:word32] : word32)
	T_29 (in Mem94[ds:0x733C:int32] : int32)
	T_32 (in (int16) sqrt((real64) ds->t733C) : int16)
	T_34 (in Mem97[ds:0x733C:int16] : int16)
	T_36 (in Mem97[ds:0x733C:word16] : word16)
	T_38 (in ds->t733C - 0x4E20 : word16)
	T_40 (in Mem99[ds:0x733C:word16] : word16)
	T_42 (in Mem99[ds:0x733C:word16] : word16)
	T_43 (in -ds->t733C : word16)
	T_45 (in Mem101[ds:0x733C:word16] : word16)
	T_48 (in Mem101[ds:0x733C:int16] : int16)
	T_55 (in Mem106[ds:0x733C:word16] : word16)
	T_57 (in Mem106[ds:0x733C:int16] : int16)
	T_60 (in (int16) ((real64) ds->t733C * rLoc1_105) : int16)
	T_62 (in Mem109[ds:0x733C:int16] : int16)
	T_103 (in DPB(eax_86, ax_87 >>u 0x0001, 0, 16) : word32)
	T_112 (in 0xFF60 : word16)
	T_119 (in DPB(eax_123, al_120 - 0x01, 0, 8) : word32)
Eq_12: (segment "Eq_12" (0 byte b0000))
	T_12 (in 0xA000 : selector)
Eq_24: (segment "Eq_24" (733C Eq_7 t733C) (7340 Eq_51 t7340) (7342 word16 w7342))
	T_24 (in ds : (ptr Eq_24))
Eq_27: (fn real64 (real64))
	T_27 (in sqrt : ptr32)
Eq_46: (union "Eq_46" (real16 u0) (real64 u1))
	T_46 (in rLoc1_105 : Eq_46)
	T_53 (in (real64) ds->t733C / (real64) ds->t7340 : word16)
Eq_49: (union "Eq_49" (real16 u0) (real64 u1))
	T_49 (in (real64) ds->t733C : real64)
Eq_51: (union "Eq_51" (word16 u0) (word32 u1))
	T_51 (in Mem101[ds:0x7340:word32] : word32)
	T_75 (in ax_68 + 0x1000 : word16)
	T_77 (in Mem71[ds:0x7340:word16] : word16)
Eq_52: (union "Eq_52" (real16 u0) (real64 u1))
	T_52 (in (real64) ds->t7340 : real64)
Eq_83: (fn word32 (word32, byte))
	T_83 (in __ror : ptr32)
Eq_84: (fn word32 (word32, byte))
	T_84 (in __ror : ptr32)
Eq_104: (union "Eq_104" (int16 u0) (uint16 u1))
	T_104 (in ax_87 >>u 0x0001 : word16)
	T_105 (in 0x0000 : word16)
Eq_114: (fn byte (byte))
	T_114 (in __inb : ptr32)
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
T_7: (in eax_123 : Eq_7)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word32
T_8: (in eax : word32)
  Class: Eq_8
  DataType: word32
  OrigDataType: word32
T_9: (in 0x13 : byte)
  Class: Eq_9
  DataType: byte
  OrigDataType: byte
T_10: (in DPB(eax, 0x13, 0, 8) : word32)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word32
T_11: (in al_89 : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_12: (in 0xA000 : selector)
  Class: Eq_12
  DataType: (ptr Eq_12)
  OrigDataType: (ptr (segment))
T_13: (in di_111 : (memptr (ptr Eq_12) byte))
  Class: Eq_13
  DataType: (memptr (ptr Eq_12) byte)
  OrigDataType: (memptr T_12 (struct 0001 (0 T_16 t0000)))
T_14: (in 0x0000 : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_15: (in di_111 + 0x0000 : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_16: (in Mem110[0xA000:di_111 + 0x0000:byte] : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_17: (in 0x0001 : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_18: (in di_111 + 0x0001 : word16)
  Class: Eq_13
  DataType: (memptr (ptr Eq_12) byte)
  OrigDataType: word16
T_19: (in cx_112 : Eq_7)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: int16
T_20: (in 0x0001 : word16)
  Class: Eq_20
  DataType: word16
  OrigDataType: word16
T_21: (in cx_112 + 0x0001 : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_22: (in 0x00A0 : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: word16
T_23: (in cx_112 != 0x00A0 : bool)
  Class: Eq_23
  DataType: bool
  OrigDataType: bool
T_24: (in ds : (ptr Eq_24))
  Class: Eq_24
  DataType: (ptr Eq_24)
  OrigDataType: (ptr (segment (733C T_7 t733C) (7340 T_51 t7340) (7342 T_80 t7342)))
T_25: (in 0x733C : word16)
  Class: Eq_25
  DataType: (memptr (ptr Eq_24) Eq_7)
  OrigDataType: (memptr T_24 (struct (0 T_26 t0000)))
T_26: (in Mem94[ds:0x733C:word32] : word32)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word32
T_27: (in sqrt : ptr32)
  Class: Eq_27
  DataType: (ptr Eq_27)
  OrigDataType: (ptr (fn T_31 (T_30)))
T_28: (in 0x733C : word16)
  Class: Eq_28
  DataType: (memptr (ptr Eq_24) Eq_7)
  OrigDataType: (memptr T_24 (struct (0 T_29 t0000)))
T_29: (in Mem94[ds:0x733C:int32] : int32)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: int32
T_30: (in (real64) ds->t733C : real64)
  Class: Eq_30
  DataType: real64
  OrigDataType: real64
T_31: (in sqrt((real64) ds->t733C) : real64)
  Class: Eq_31
  DataType: real64
  OrigDataType: real64
T_32: (in (int16) sqrt((real64) ds->t733C) : int16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: int16
T_33: (in 0x733C : word16)
  Class: Eq_33
  DataType: (memptr (ptr Eq_24) Eq_7)
  OrigDataType: (memptr T_24 (struct (0 T_34 t0000)))
T_34: (in Mem97[ds:0x733C:int16] : int16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: int16
T_35: (in 0x733C : word16)
  Class: Eq_35
  DataType: (memptr (ptr Eq_24) Eq_7)
  OrigDataType: (memptr T_24 (struct (0 T_36 t0000)))
T_36: (in Mem97[ds:0x733C:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_37: (in 0x4E20 : word16)
  Class: Eq_37
  DataType: word16
  OrigDataType: word16
T_38: (in ds->t733C - 0x4E20 : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_39: (in 0x733C : word16)
  Class: Eq_39
  DataType: (memptr (ptr Eq_24) Eq_7)
  OrigDataType: (memptr T_24 (struct (0 T_40 t0000)))
T_40: (in Mem99[ds:0x733C:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_41: (in 0x733C : word16)
  Class: Eq_41
  DataType: (memptr (ptr Eq_24) Eq_7)
  OrigDataType: (memptr T_24 (struct (0 T_42 t0000)))
T_42: (in Mem99[ds:0x733C:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: int16
T_43: (in -ds->t733C : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: int16
T_44: (in 0x733C : word16)
  Class: Eq_44
  DataType: (memptr (ptr Eq_24) Eq_7)
  OrigDataType: (memptr T_24 (struct (0 T_45 t0000)))
T_45: (in Mem101[ds:0x733C:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_46: (in rLoc1_105 : Eq_46)
  Class: Eq_46
  DataType: Eq_46
  OrigDataType: real64
T_47: (in 0x733C : word16)
  Class: Eq_47
  DataType: (memptr (ptr Eq_24) Eq_7)
  OrigDataType: (memptr T_24 (struct (0 T_48 t0000)))
T_48: (in Mem101[ds:0x733C:int16] : int16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: int16
T_49: (in (real64) ds->t733C : real64)
  Class: Eq_49
  DataType: Eq_49
  OrigDataType: (union (real16 u0) (real64 u1))
T_50: (in 0x7340 : word16)
  Class: Eq_50
  DataType: (memptr (ptr Eq_24) Eq_51)
  OrigDataType: (memptr T_24 (struct (0 T_51 t0000)))
T_51: (in Mem101[ds:0x7340:word32] : word32)
  Class: Eq_51
  DataType: Eq_51
  OrigDataType: word32
T_52: (in (real64) ds->t7340 : real64)
  Class: Eq_52
  DataType: Eq_52
  OrigDataType: (union (real16 u0) (real64 u1))
T_53: (in (real64) ds->t733C / (real64) ds->t7340 : word16)
  Class: Eq_46
  DataType: Eq_46
  OrigDataType: real16
T_54: (in 0x733C : word16)
  Class: Eq_54
  DataType: (memptr (ptr Eq_24) Eq_7)
  OrigDataType: (memptr T_24 (struct (0 T_55 t0000)))
T_55: (in Mem106[ds:0x733C:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_56: (in 0x733C : word16)
  Class: Eq_56
  DataType: (memptr (ptr Eq_24) Eq_7)
  OrigDataType: (memptr T_24 (struct (0 T_57 t0000)))
T_57: (in Mem106[ds:0x733C:int16] : int16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: int16
T_58: (in (real64) ds->t733C : real64)
  Class: Eq_58
  DataType: real64
  OrigDataType: real64
T_59: (in (real64) ds->t733C * rLoc1_105 : real64)
  Class: Eq_59
  DataType: real64
  OrigDataType: real64
T_60: (in (int16) ((real64) ds->t733C * rLoc1_105) : int16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: int16
T_61: (in 0x733C : word16)
  Class: Eq_61
  DataType: (memptr (ptr Eq_24) Eq_7)
  OrigDataType: (memptr T_24 (struct (0 T_62 t0000)))
T_62: (in Mem109[ds:0x733C:int16] : int16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: int16
T_63: (in ax_68 : word16)
  Class: Eq_63
  DataType: word16
  OrigDataType: word16
T_64: (in (int32) cx_112 : int32)
  Class: Eq_64
  DataType: int32
  OrigDataType: int32
T_65: (in (word16) (int32) cx_112 : word16)
  Class: Eq_65
  DataType: int16
  OrigDataType: int16
T_66: (in cx_112 *s (word16) ((int32) cx_112) : int32)
  Class: Eq_66
  DataType: int32
  OrigDataType: int32
T_67: (in (word16) (cx_112 *s (word16) ((int32) cx_112)) : word16)
  Class: Eq_67
  DataType: word16
  OrigDataType: word16
T_68: (in bx_115 : int16)
  Class: Eq_68
  DataType: int16
  OrigDataType: int16
T_69: (in (int32) bx_115 : int32)
  Class: Eq_69
  DataType: int32
  OrigDataType: int32
T_70: (in (word16) (int32) bx_115 : word16)
  Class: Eq_70
  DataType: int16
  OrigDataType: int16
T_71: (in bx_115 *s (word16) ((int32) bx_115) : int32)
  Class: Eq_71
  DataType: int32
  OrigDataType: int32
T_72: (in (word16) (bx_115 *s (word16) ((int32) bx_115)) : word16)
  Class: Eq_72
  DataType: word16
  OrigDataType: word16
T_73: (in (word16) (cx_112 *s (word16) ((int32) cx_112)) + (word16) (bx_115 *s (word16) ((int32) bx_115)) : word16)
  Class: Eq_63
  DataType: word16
  OrigDataType: word16
T_74: (in 0x1000 : word16)
  Class: Eq_74
  DataType: word16
  OrigDataType: word16
T_75: (in ax_68 + 0x1000 : word16)
  Class: Eq_51
  DataType: Eq_51
  OrigDataType: word16
T_76: (in 0x7340 : word16)
  Class: Eq_76
  DataType: (memptr (ptr Eq_24) Eq_51)
  OrigDataType: (memptr T_24 (struct (0 T_77 t0000)))
T_77: (in Mem71[ds:0x7340:word16] : word16)
  Class: Eq_51
  DataType: Eq_51
  OrigDataType: word16
T_78: (in 0x0000 : word16)
  Class: Eq_78
  DataType: word16
  OrigDataType: word16
T_79: (in 0x7342 : word16)
  Class: Eq_79
  DataType: (memptr (ptr Eq_24) word16)
  OrigDataType: (memptr T_24 (struct (0 T_80 t0000)))
T_80: (in Mem73[ds:0x7342:word16] : word16)
  Class: Eq_78
  DataType: word16
  OrigDataType: word16
T_81: (in eax_86 : word32)
  Class: Eq_81
  DataType: word32
  OrigDataType: word32
T_82: (in 0x17D78400 : word32)
  Class: Eq_82
  DataType: word32
  OrigDataType: word32
T_83: (in __ror : ptr32)
  Class: Eq_83
  DataType: (ptr Eq_83)
  OrigDataType: (ptr (fn T_95 (T_93, T_94)))
T_84: (in __ror : ptr32)
  Class: Eq_84
  DataType: (ptr Eq_84)
  OrigDataType: (ptr (fn T_88 (T_86, T_87)))
T_85: (in ax_68 + 0x1000 : word16)
  Class: Eq_85
  DataType: word16
  OrigDataType: word16
T_86: (in DPB(eax_123, ax_68 + 0x1000, 0, 16) : word32)
  Class: Eq_86
  DataType: word32
  OrigDataType: word32
T_87: (in 0x10 : byte)
  Class: Eq_87
  DataType: byte
  OrigDataType: byte
T_88: (in __ror(DPB(eax_123, ax_68 + 0x1000, 0, 16), 0x10) : word32)
  Class: Eq_88
  DataType: word32
  OrigDataType: word32
T_89: (in ax_68 + 0x1000 : word16)
  Class: Eq_89
  DataType: uint16
  OrigDataType: uint16
T_90: (in 0x733C : word16)
  Class: Eq_90
  DataType: uint16
  OrigDataType: uint16
T_91: (in (ax_68 + 0x1000) *u 0x733C : uint32)
  Class: Eq_91
  DataType: uint32
  OrigDataType: uint32
T_92: (in SLICE((ax_68 + 0x1000) *u 0x733C, word16, 16) : word16)
  Class: Eq_92
  DataType: word16
  OrigDataType: word16
T_93: (in DPB(__ror(DPB(eax_123, ax_68 + 0x1000, 0, 16), 0x10), SLICE((ax_68 + 0x1000) *u 0x733C, word16, 16), 0, 16) : word32)
  Class: Eq_93
  DataType: word32
  OrigDataType: word32
T_94: (in 0x10 : byte)
  Class: Eq_94
  DataType: byte
  OrigDataType: byte
T_95: (in __ror(DPB(__ror(DPB(eax_123, ax_68 + 0x1000, 0, 16), 0x10), SLICE((ax_68 + 0x1000) *u 0x733C, word16, 16), 0, 16), 0x10) : word32)
  Class: Eq_95
  DataType: word32
  OrigDataType: word32
T_96: (in 0x17D78400 - __ror(DPB(__ror(DPB(eax_123, ax_68 + 0x1000, 0, 16), 0x10), SLICE((ax_68 + 0x1000) *u 0x733C, word16, 16), 0, 16), 0x10) : word32)
  Class: Eq_81
  DataType: word32
  OrigDataType: word32
T_97: (in ax_87 : uint16)
  Class: Eq_97
  DataType: uint16
  OrigDataType: uint16
T_98: (in (word16) eax_86 : word16)
  Class: Eq_97
  DataType: uint16
  OrigDataType: word16
T_99: (in 0x0001 : word16)
  Class: Eq_99
  DataType: uint16
  OrigDataType: uint16
T_100: (in ax_87 >>u 0x0001 : word16)
  Class: Eq_100
  DataType: uint16
  OrigDataType: uint16
T_101: (in (byte) (ax_87 >>u 0x0001) : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_102: (in ax_87 >>u 0x0001 : word16)
  Class: Eq_102
  DataType: uint16
  OrigDataType: uint16
T_103: (in DPB(eax_86, ax_87 >>u 0x0001, 0, 16) : word32)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word32
T_104: (in ax_87 >>u 0x0001 : word16)
  Class: Eq_104
  DataType: Eq_104
  OrigDataType: (union (int16 u0) (uint16 u1))
T_105: (in 0x0000 : word16)
  Class: Eq_104
  DataType: int16
  OrigDataType: int16
T_106: (in ax_87 >>u 0x0001 < 0x0000 : bool)
  Class: Eq_106
  DataType: bool
  OrigDataType: bool
T_107: (in 0x0001 : word16)
  Class: Eq_107
  DataType: word16
  OrigDataType: word16
T_108: (in bx_115 + 0x0001 : word16)
  Class: Eq_68
  DataType: int16
  OrigDataType: word16
T_109: (in (byte) bx_115 : byte)
  Class: Eq_109
  DataType: byte
  OrigDataType: byte
T_110: (in 0x64 : byte)
  Class: Eq_109
  DataType: byte
  OrigDataType: byte
T_111: (in (byte) bx_115 != 0x64 : bool)
  Class: Eq_111
  DataType: bool
  OrigDataType: bool
T_112: (in 0xFF60 : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: word16
T_113: (in al_120 : byte)
  Class: Eq_113
  DataType: byte
  OrigDataType: byte
T_114: (in __inb : ptr32)
  Class: Eq_114
  DataType: (ptr Eq_114)
  OrigDataType: (ptr (fn T_116 (T_115)))
T_115: (in 0x60 : byte)
  Class: Eq_115
  DataType: byte
  OrigDataType: byte
T_116: (in __inb(0x60) : byte)
  Class: Eq_113
  DataType: byte
  OrigDataType: byte
T_117: (in 0x01 : byte)
  Class: Eq_117
  DataType: byte
  OrigDataType: byte
T_118: (in al_120 - 0x01 : byte)
  Class: Eq_118
  DataType: byte
  OrigDataType: byte
T_119: (in DPB(eax_123, al_120 - 0x01, 0, 8) : word32)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word32
T_120: (in 0x01 : byte)
  Class: Eq_113
  DataType: byte
  OrigDataType: byte
T_121: (in al_120 != 0x01 : bool)
  Class: Eq_121
  DataType: bool
  OrigDataType: bool
T_122: (in 0x0000 : word16)
  Class: Eq_13
  DataType: (memptr (ptr Eq_12) byte)
  OrigDataType: word16
T_123: (in 0xFF9D : word16)
  Class: Eq_68
  DataType: int16
  OrigDataType: word16
*/
typedef Eq_12 Eq_1struct Globals {
	Eq_12 * ptrFFFA0000;	// FFFA0000
} Eq_1;

typedef void (Eq_2)(byte);

typedef union Eq_7 {
	int16 u0;
	int32 u1;
} Eq_7;

typedef struct Eq_12 {
	byte b0000;	// 0
} Eq_12;

typedef Eq_7 Eq_24Eq_51 Eq_24struct Eq_24 {
	Eq_7 t733C;	// 733C
	Eq_51 t7340;	// 7340
	word16 w7342;	// 7342
} Eq_24;

typedef real64 (Eq_27)(real64);

typedef union Eq_46 {
	real16 u0;
	real64 u1;
} Eq_46;

typedef union Eq_49 {
	real16 u0;
	real64 u1;
} Eq_49;

typedef union Eq_51 {
	word16 u0;
	word32 u1;
} Eq_51;

typedef union Eq_52 {
	real16 u0;
	real64 u1;
} Eq_52;

typedef word32 (Eq_83)(word32, byte);

typedef word32 (Eq_84)(word32, byte);

typedef union Eq_104 {
	int16 u0;
	uint16 u1;
} Eq_104;

typedef byte (Eq_114)(byte);

