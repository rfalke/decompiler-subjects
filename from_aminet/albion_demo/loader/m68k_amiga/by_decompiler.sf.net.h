// subject.h
// Generated on 5/4/2015 12:00:23 AM by decompiling from_aminet/albion_demo/loader/m68k_amiga/subject.exe
// using Decompiler version 0.4.2.0.

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (4 word32 dw0004) (A0 code t00A0) (15E8 int32 dw15E8) (15EC int32 dw15EC))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_4: word32
	T_4 (in 00000004 : ptr32)
Eq_13: int32
	T_13 (in 000015E8 : ptr32)
Eq_16: int32
	T_16 (in 000015E8 : ptr32)
Eq_22: (struct 0001 (0 Eq_22 t0000) (0 Eq_41 t0000) (1 Eq_22 t0001))
	T_22 (in a0_111 : word32)
	T_23 (in 000011C8 : ptr32)
	T_45 (in a0_229 : word32)
	T_47 (in a0_229 + 0x00000000 : word32)
	T_63 (in a0_111 + 0x00000004 + 0x00000001 : word32)
	T_67 (in a0_111 + 0x00000001 : word32)
	T_80 (in a0 : word32)
	T_82 (in 00001196 : ptr32)
	T_86 (in a0_142 : word32)
	T_87 (in 000011AE : ptr32)
	T_115 (in a0 : word32)
	T_129 (in a0_22 : word32)
	T_131 (in a0_22 + 0x00000001 : word32)
Eq_26: (struct (0 int32 dw0000))
	T_26 (in 000015E8 : ptr32)
Eq_35: (struct (0 int32 dw0000))
	T_35 (in 000015E8 : ptr32)
Eq_41: (union (int32 u0) (byte u1))
	T_41 (in v18_117 : word32)
	T_50 (in Mem0[a0_229 + 0x00000000:byte] : byte)
	T_51 (in 0xFFFFFFFF : ui32)
	T_59 (in Mem0[a0_111 + 0x00000000:word32] : word32)
	T_64 (in 0x00000000 : word32)
	T_134 (in Mem0[a0_22 + 0x00000000:byte] : byte)
	T_135 (in 0x00 : byte)
Eq_53: (fn bool (byte, word16))
	T_53 (in __btst : ptr32)
Eq_69: (struct (0 int32 dw0000))
	T_69 (in 000015E8 : ptr32)
Eq_76: (struct (0 int32 dw0000))
	T_76 (in 000015EC : ptr32)
Eq_78: (fn void ((ptr Eq_22), word32))
	T_78 (in fn0000112A : ptr32)
	T_79 (in signature of fn0000112A : void)
	T_84 (in fn0000112A : ptr32)
	T_88 (in fn0000112A : ptr32)
Eq_90: (fn void (word32))
	T_90 (in fn0000110C : ptr32)
	T_91 (in signature of fn0000110C : void)
Eq_95: (struct (0 int32 dw0000))
	T_95 (in 000015E8 : ptr32)
Eq_100: (struct (0 word32 dw0000))
	T_100 (in 00000004 : ptr32)
Eq_105: (struct (0 int32 dw0000))
	T_105 (in 0x000015E8 : word32)
Eq_108: (struct (0 int32 dw0000))
	T_108 (in 000015E8 : ptr32)
Eq_113: (fn word32 ((ptr Eq_22)))
	T_113 (in fn00001156 : ptr32)
	T_114 (in signature of fn00001156 : void)
Eq_120: (struct (0 int32 dw0000))
	T_120 (in 000015E8 : ptr32)
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr Eq_1)
  OrigDataType: (ptr (struct "Globals"))
T_2: (in d0_101 : word32)
  Class: Eq_2
  DataType: int32
  OrigDataType: int32
T_3: (in a6_10 : word32)
  Class: Eq_3
  DataType: word32
  OrigDataType: word32
T_4: (in 00000004 : ptr32)
  Class: Eq_4
  DataType: (ptr Eq_4)
  OrigDataType: (ptr (struct (0 T_5 t0000)))
T_5: (in Mem0[0x00000004:word32] : word32)
  Class: Eq_3
  DataType: word32
  OrigDataType: word32
T_6: (in -552 : int32)
  Class: Eq_6
  DataType: int32
  OrigDataType: int32
T_7: (in a6_10 + -552 : word32)
  Class: Eq_7
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_8: (in a6_103 : word32)
  Class: Eq_8
  DataType: word32
  OrigDataType: word32
T_9: (in a6 : word32)
  Class: Eq_8
  DataType: word32
  OrigDataType: word32
T_10: (in true : bool)
  Class: Eq_10
  DataType: bool
  OrigDataType: bool
T_11: (in d0_189 : word32)
  Class: Eq_11
  DataType: int32
  OrigDataType: int32
T_12: (in 39 : int32)
  Class: Eq_12
  DataType: int32
  OrigDataType: int32
T_13: (in 000015E8 : ptr32)
  Class: Eq_13
  DataType: (ptr Eq_13)
  OrigDataType: (ptr (struct (0 T_14 t0000)))
T_14: (in Mem169[0x000015E8:word32] : word32)
  Class: Eq_12
  DataType: int32
  OrigDataType: word32
T_15: (in a6_175 : word32)
  Class: Eq_12
  DataType: int32
  OrigDataType: word32
T_16: (in 000015E8 : ptr32)
  Class: Eq_16
  DataType: (ptr Eq_16)
  OrigDataType: (ptr (struct (0 T_17 t0000)))
T_17: (in Mem169[0x000015E8:word32] : word32)
  Class: Eq_12
  DataType: int32
  OrigDataType: word32
T_18: (in -150 : int32)
  Class: Eq_18
  DataType: int32
  OrigDataType: int32
T_19: (in a6_175 + -150 : word32)
  Class: Eq_19
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_20: (in true : bool)
  Class: Eq_20
  DataType: bool
  OrigDataType: bool
T_21: (in 12 : int32)
  Class: Eq_2
  DataType: int32
  OrigDataType: int32
T_22: (in a0_111 : word32)
  Class: Eq_22
  DataType: (ptr Eq_22)
  OrigDataType: (ptr (struct 0001 (0 T_59 t0000)))
T_23: (in 000011C8 : ptr32)
  Class: Eq_22
  DataType: (ptr Eq_22)
  OrigDataType: ptr32
T_24: (in 160 : int32)
  Class: Eq_24
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_25: (in a6_223 : word32)
  Class: Eq_12
  DataType: int32
  OrigDataType: word32
T_26: (in 000015E8 : ptr32)
  Class: Eq_26
  DataType: (ptr Eq_26)
  OrigDataType: (ptr (struct (0 T_27 t0000)))
T_27: (in Mem169[0x000015E8:word32] : word32)
  Class: Eq_12
  DataType: int32
  OrigDataType: word32
T_28: (in -156 : int32)
  Class: Eq_28
  DataType: int32
  OrigDataType: int32
T_29: (in a6_223 + -156 : word32)
  Class: Eq_29
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_30: (in 39 : int32)
  Class: Eq_11
  DataType: int32
  OrigDataType: int32
T_31: (in -1 : int32)
  Class: Eq_11
  DataType: int32
  OrigDataType: int32
T_32: (in 0x00000000 : word32)
  Class: Eq_11
  DataType: int32
  OrigDataType: word32
T_33: (in d0_189 == 0x00000000 : bool)
  Class: Eq_33
  DataType: bool
  OrigDataType: bool
T_34: (in a6_129 : word32)
  Class: Eq_12
  DataType: int32
  OrigDataType: word32
T_35: (in 000015E8 : ptr32)
  Class: Eq_35
  DataType: (ptr Eq_35)
  OrigDataType: (ptr (struct (0 T_36 t0000)))
T_36: (in Mem0[0x000015E8:word32] : word32)
  Class: Eq_12
  DataType: int32
  OrigDataType: word32
T_37: (in -30 : int32)
  Class: Eq_37
  DataType: int32
  OrigDataType: int32
T_38: (in a6_129 + -30 : word32)
  Class: Eq_38
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_39: (in 0x00000000 : word32)
  Class: Eq_2
  DataType: int32
  OrigDataType: word32
T_40: (in d0_101 == 0x00000000 : bool)
  Class: Eq_40
  DataType: bool
  OrigDataType: bool
T_41: (in v18_117 : word32)
  Class: Eq_41
  DataType: Eq_41
  OrigDataType: int32
T_42: (in v18_117 - d0_101 : word32)
  Class: Eq_42
  DataType: word32
  OrigDataType: word32
T_43: (in 0x00000000 : word32)
  Class: Eq_42
  DataType: word32
  OrigDataType: word32
T_44: (in v18_117 - d0_101 == 0x00000000 : bool)
  Class: Eq_44
  DataType: bool
  OrigDataType: bool
T_45: (in a0_229 : word32)
  Class: Eq_22
  DataType: (ptr Eq_22)
  OrigDataType: (ptr (struct (0 T_50 t0000)))
T_46: (in 0x00000000 : word32)
  Class: Eq_46
  DataType: word32
  OrigDataType: word32
T_47: (in a0_229 + 0x00000000 : word32)
  Class: Eq_22
  DataType: (ptr Eq_22)
  OrigDataType: word32
T_48: (in 0x00000000 : word32)
  Class: Eq_48
  DataType: word32
  OrigDataType: word32
T_49: (in a0_229 + 0x00000000 : word32)
  Class: Eq_49
  DataType: word32
  OrigDataType: word32
T_50: (in Mem0[a0_229 + 0x00000000:byte] : byte)
  Class: Eq_41
  DataType: Eq_41
  OrigDataType: byte
T_51: (in 0xFFFFFFFF : ui32)
  Class: Eq_41
  DataType: Eq_41
  OrigDataType: ui32
T_52: (in Mem0[a0_229 + 0x00000000:byte] != 0xFFFFFFFF : bool)
  Class: Eq_52
  DataType: bool
  OrigDataType: bool
T_53: (in __btst : ptr32)
  Class: Eq_53
  DataType: (ptr Eq_53)
  OrigDataType: (ptr (fn T_56 (T_54, T_55)))
T_54: (in (byte) a0_111 : byte)
  Class: Eq_54
  DataType: byte
  OrigDataType: byte
T_55: (in 0x0000 : word16)
  Class: Eq_55
  DataType: word16
  OrigDataType: word16
T_56: (in __btst((byte) a0_111, 0x0000) : bool)
  Class: Eq_56
  DataType: bool
  OrigDataType: bool
T_57: (in 0x00000000 : word32)
  Class: Eq_57
  DataType: word32
  OrigDataType: word32
T_58: (in a0_111 + 0x00000000 : word32)
  Class: Eq_58
  DataType: word32
  OrigDataType: word32
T_59: (in Mem0[a0_111 + 0x00000000:word32] : word32)
  Class: Eq_41
  DataType: Eq_41
  OrigDataType: word32
T_60: (in 0x00000004 : word32)
  Class: Eq_60
  DataType: word32
  OrigDataType: word32
T_61: (in a0_111 + 0x00000004 : word32)
  Class: Eq_61
  DataType: word32
  OrigDataType: word32
T_62: (in 0x00000001 : word32)
  Class: Eq_62
  DataType: word32
  OrigDataType: word32
T_63: (in a0_111 + 0x00000004 + 0x00000001 : word32)
  Class: Eq_22
  DataType: (ptr Eq_22)
  OrigDataType: word32
T_64: (in 0x00000000 : word32)
  Class: Eq_41
  DataType: Eq_41
  OrigDataType: int32
T_65: (in v18_117 < 0x00000000 : bool)
  Class: Eq_65
  DataType: bool
  OrigDataType: bool
T_66: (in 0x00000001 : word32)
  Class: Eq_66
  DataType: word32
  OrigDataType: word32
T_67: (in a0_111 + 0x00000001 : word32)
  Class: Eq_22
  DataType: (ptr Eq_22)
  OrigDataType: word32
T_68: (in d0_61 : word32)
  Class: Eq_12
  DataType: int32
  OrigDataType: word32
T_69: (in 000015E8 : ptr32)
  Class: Eq_69
  DataType: (ptr Eq_69)
  OrigDataType: (ptr (struct (0 T_70 t0000)))
T_70: (in Mem0[0x000015E8:word32] : word32)
  Class: Eq_12
  DataType: int32
  OrigDataType: word32
T_71: (in 0x00000000 : word32)
  Class: Eq_12
  DataType: int32
  OrigDataType: word32
T_72: (in d0_61 == 0x00000000 : bool)
  Class: Eq_72
  DataType: bool
  OrigDataType: bool
T_73: (in 0x00000001 : word32)
  Class: Eq_73
  DataType: word32
  OrigDataType: word32
T_74: (in d0_189 + 0x00000001 : word32)
  Class: Eq_74
  DataType: int32
  OrigDataType: int32
T_75: (in -(d0_189 + 0x00000001) : word32)
  Class: Eq_2
  DataType: int32
  OrigDataType: int32
T_76: (in 000015EC : ptr32)
  Class: Eq_76
  DataType: (ptr Eq_76)
  OrigDataType: (ptr (struct (0 T_77 t0000)))
T_77: (in Mem138[0x000015EC:word32] : word32)
  Class: Eq_2
  DataType: int32
  OrigDataType: word32
T_78: (in fn0000112A : ptr32)
  Class: Eq_78
  DataType: (ptr Eq_78)
  OrigDataType: (ptr (fn T_83 (T_82, T_8)))
T_79: (in signature of fn0000112A : void)
  Class: Eq_78
  DataType: (ptr Eq_78)
  OrigDataType: 
T_80: (in a0 : word32)
  Class: Eq_22
  DataType: (ptr Eq_22)
  OrigDataType: word32
T_81: (in a6 : word32)
  Class: Eq_8
  DataType: word32
  OrigDataType: word32
T_82: (in 00001196 : ptr32)
  Class: Eq_22
  DataType: (ptr Eq_22)
  OrigDataType: ptr32
T_83: (in fn0000112A(0x00001196, a6_103) : void)
  Class: Eq_83
  DataType: void
  OrigDataType: void
T_84: (in fn0000112A : ptr32)
  Class: Eq_78
  DataType: (ptr Eq_78)
  OrigDataType: (ptr (fn T_85 (T_22, T_8)))
T_85: (in fn0000112A(a0_111, a6_103) : void)
  Class: Eq_83
  DataType: void
  OrigDataType: void
T_86: (in a0_142 : word32)
  Class: Eq_22
  DataType: (ptr Eq_22)
  OrigDataType: word32
T_87: (in 000011AE : ptr32)
  Class: Eq_22
  DataType: (ptr Eq_22)
  OrigDataType: ptr32
T_88: (in fn0000112A : ptr32)
  Class: Eq_78
  DataType: (ptr Eq_78)
  OrigDataType: (ptr (fn T_89 (T_86, T_8)))
T_89: (in fn0000112A(a0_142, a6_103) : void)
  Class: Eq_83
  DataType: void
  OrigDataType: void
T_90: (in fn0000110C : ptr32)
  Class: Eq_90
  DataType: (ptr Eq_90)
  OrigDataType: (ptr (fn T_93 (T_8)))
T_91: (in signature of fn0000110C : void)
  Class: Eq_90
  DataType: (ptr Eq_90)
  OrigDataType: 
T_92: (in a6 : word32)
  Class: Eq_8
  DataType: word32
  OrigDataType: word32
T_93: (in fn0000110C(a6_103) : void)
  Class: Eq_93
  DataType: void
  OrigDataType: void
T_94: (in a6_148 : word32)
  Class: Eq_12
  DataType: int32
  OrigDataType: word32
T_95: (in 000015E8 : ptr32)
  Class: Eq_95
  DataType: (ptr Eq_95)
  OrigDataType: (ptr (struct (0 T_96 t0000)))
T_96: (in Mem138[0x000015E8:word32] : word32)
  Class: Eq_12
  DataType: int32
  OrigDataType: word32
T_97: (in -36 : int32)
  Class: Eq_97
  DataType: int32
  OrigDataType: int32
T_98: (in a6_148 + -36 : word32)
  Class: Eq_98
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_99: (in a6_86 : word32)
  Class: Eq_3
  DataType: word32
  OrigDataType: word32
T_100: (in 00000004 : ptr32)
  Class: Eq_100
  DataType: (ptr Eq_100)
  OrigDataType: (ptr (struct (0 T_101 t0000)))
T_101: (in Mem0[0x00000004:word32] : word32)
  Class: Eq_3
  DataType: word32
  OrigDataType: word32
T_102: (in -414 : int32)
  Class: Eq_102
  DataType: int32
  OrigDataType: int32
T_103: (in a6_86 + -414 : word32)
  Class: Eq_103
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_104: (in 0x00000000 : word32)
  Class: Eq_12
  DataType: int32
  OrigDataType: word32
T_105: (in 0x000015E8 : word32)
  Class: Eq_105
  DataType: (ptr Eq_105)
  OrigDataType: (ptr (struct (0 T_106 t0000)))
T_106: (in Mem90[0x000015E8:word32] : word32)
  Class: Eq_12
  DataType: int32
  OrigDataType: word32
T_107: (in a6_11 : word32)
  Class: Eq_12
  DataType: int32
  OrigDataType: word32
T_108: (in 000015E8 : ptr32)
  Class: Eq_108
  DataType: (ptr Eq_108)
  OrigDataType: (ptr (struct (0 T_109 t0000)))
T_109: (in Mem0[0x000015E8:word32] : word32)
  Class: Eq_12
  DataType: int32
  OrigDataType: word32
T_110: (in -42 : int32)
  Class: Eq_110
  DataType: int32
  OrigDataType: int32
T_111: (in a6_11 + -42 : word32)
  Class: Eq_111
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_112: (in d0_20 : word32)
  Class: Eq_112
  DataType: word32
  OrigDataType: word32
T_113: (in fn00001156 : ptr32)
  Class: Eq_113
  DataType: (ptr Eq_113)
  OrigDataType: (ptr (fn T_116 (T_80)))
T_114: (in signature of fn00001156 : void)
  Class: Eq_113
  DataType: (ptr Eq_113)
  OrigDataType: 
T_115: (in a0 : word32)
  Class: Eq_22
  DataType: (ptr Eq_22)
  OrigDataType: word32
T_116: (in fn00001156(a0) : word32)
  Class: Eq_112
  DataType: word32
  OrigDataType: word32
T_117: (in 0x00000000 : word32)
  Class: Eq_112
  DataType: word32
  OrigDataType: word32
T_118: (in d0_20 == 0x00000000 : bool)
  Class: Eq_118
  DataType: bool
  OrigDataType: bool
T_119: (in a6_55 : word32)
  Class: Eq_12
  DataType: int32
  OrigDataType: word32
T_120: (in 000015E8 : ptr32)
  Class: Eq_120
  DataType: (ptr Eq_120)
  OrigDataType: (ptr (struct (0 T_121 t0000)))
T_121: (in Mem0[0x000015E8:word32] : word32)
  Class: Eq_12
  DataType: int32
  OrigDataType: word32
T_122: (in -48 : int32)
  Class: Eq_122
  DataType: int32
  OrigDataType: int32
T_123: (in a6_55 + -48 : word32)
  Class: Eq_123
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_124: (in d0 : word32)
  Class: Eq_124
  DataType: word32
  OrigDataType: word32
T_125: (in d0_10 : word32)
  Class: Eq_125
  DataType: int32
  OrigDataType: word32
T_126: (in -1 : int32)
  Class: Eq_125
  DataType: int32
  OrigDataType: int32
T_127: (in 0x00000001 : word32)
  Class: Eq_127
  DataType: word32
  OrigDataType: word32
T_128: (in d0_10 + 0x00000001 : word32)
  Class: Eq_125
  DataType: int32
  OrigDataType: word32
T_129: (in a0_22 : word32)
  Class: Eq_22
  DataType: (ptr Eq_22)
  OrigDataType: (ptr (struct (0 T_134 t0000)))
T_130: (in 0x00000001 : word32)
  Class: Eq_130
  DataType: word32
  OrigDataType: word32
T_131: (in a0_22 + 0x00000001 : word32)
  Class: Eq_22
  DataType: (ptr Eq_22)
  OrigDataType: word32
T_132: (in 0x00000000 : word32)
  Class: Eq_132
  DataType: word32
  OrigDataType: word32
T_133: (in a0_22 + 0x00000000 : word32)
  Class: Eq_133
  DataType: word32
  OrigDataType: word32
T_134: (in Mem0[a0_22 + 0x00000000:byte] : byte)
  Class: Eq_41
  DataType: Eq_41
  OrigDataType: byte
T_135: (in 0x00 : byte)
  Class: Eq_41
  DataType: Eq_41
  OrigDataType: byte
T_136: (in Mem0[a0_22 + 0x00000000:byte] != 0x00 : bool)
  Class: Eq_136
  DataType: bool
  OrigDataType: bool
*/
typedef code Eq_1struct Globals {
	word32 dw0004;	// 4
	code t00A0;	// A0
	int32 dw15E8;	// 15E8
	int32 dw15EC;	// 15EC
} Eq_1;

typedef word32 Eq_4;

typedef int32 Eq_13;

typedef int32 Eq_16;

typedef  Eq_22 Eq_22 Eq_22struct  {	// size: 1 1
	 t0000;	// 0
	 t0000;	// 0
	 t0001;	// 1
} Eq_22;

typedef struct  {
	int32 dw0000;	// 0
} Eq_26;

typedef struct  {
	int32 dw0000;	// 0
} Eq_35;

typedef union  {
	int32 u0;
	byte u1;
} Eq_41;

typedef bool (Eq_53)(byte, word16);

typedef struct  {
	int32 dw0000;	// 0
} Eq_69;

typedef struct  {
	int32 dw0000;	// 0
} Eq_76;

typedef void (Eq_78)( *, word32);

typedef void (Eq_90)(word32);

typedef struct  {
	int32 dw0000;	// 0
} Eq_95;

typedef struct  {
	word32 dw0000;	// 0
} Eq_100;

typedef struct  {
	int32 dw0000;	// 0
} Eq_105;

typedef struct  {
	int32 dw0000;	// 0
} Eq_108;

typedef word32 (Eq_113)( *);

typedef struct  {
	int32 dw0000;	// 0
} Eq_120;

