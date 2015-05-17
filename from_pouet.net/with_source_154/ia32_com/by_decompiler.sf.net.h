// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_154/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_7: (union "Eq_7" (byte u0) (word16 u1))
	T_7 (in al_2 : Eq_7)
	T_8 (in 0x13 : byte)
	T_9 (in ax_31 : Eq_7)
	T_12 (in DPB(ax, 0x13, 0, 8) : word16)
	T_61 (in Mem51[es_9:di_33 + 0x0000:word16] : word16)
	T_78 (in Mem72[es_9:dx *s 0x0140 + bx + 0xBC30:byte] : byte)
	T_82 (in __rol(ax_31 + di_33, 0x02) : word16)
	T_85 (in (byte) ax_31 : byte)
	T_110 (in Mem58[es_9:di_33 + 0x0000:byte] : byte)
	T_122 (in al_95 - 0x01 : byte)
	T_124 (in DPB(ax_31, al_95 - 0x01, 0, 8) : word16)
Eq_13: (segment "Eq_13" (0 Eq_20 t0000) (16B word16 w016B) (16D word16 w016D))
	T_13 (in es_9 : (ptr Eq_13))
	T_14 (in ds : (ptr Eq_13))
	T_19 (in SLICE(ds->*bx, selector, 16) : selector)
Eq_20: (struct "Eq_20" 0001 (0 Eq_7 t0000) (165 int16 w0165) (16F int16 w016F) (177 int16 w0177))
	T_20 (in di_33 : (memptr (ptr Eq_13) Eq_20))
	T_63 (in di_33 + 0x0002 : word16)
	T_87 (in di_80 & 0x0006 : word16)
	T_112 (in di_33 + 0x0001 : word16)
	T_127 (in 0x0000 : word16)
Eq_29: (union "Eq_29" (real16 u0) (real64 u1))
	T_29 (in rLoc1_43 : Eq_29)
	T_37 (in (real64) (ds->*di_33).w0165 / (real64) ds->w016B : word16)
Eq_33: (union "Eq_33" (real16 u0) (real64 u1))
	T_33 (in (real64) (ds->*di_33).w0165 : real64)
Eq_36: (union "Eq_36" (real16 u0) (real64 u1))
	T_36 (in (real64) ds->w016B : real64)
Eq_38: (union "Eq_38" (real16 u0) (real64 u1))
	T_38 (in rLoc1_45 : Eq_38)
	T_40 (in cos(rLoc1_43) : real64)
Eq_39: (fn Eq_38 (Eq_29))
	T_39 (in cos : ptr32)
Eq_41: (fn Eq_42 (Eq_29))
	T_41 (in sin : ptr32)
Eq_42: (union "Eq_42" (real16 u0) (real64 u1))
	T_42 (in sin(rLoc1_43) : real64)
Eq_45: (union "Eq_45" (real16 u0) (real64 u1))
	T_45 (in (real64) ds->w016D : real64)
Eq_53: (union "Eq_53" (real16 u0) (real64 u1))
	T_53 (in (real64) ds->w016B : real64)
Eq_75: (struct "Eq_75" (FFFFBC30 Eq_7 tFFFFBC30))
	T_75 (in dx *s 0x0140 + bx : word16)
Eq_79: (fn Eq_7 (word16, byte))
	T_79 (in __rol : ptr32)
Eq_88: (struct "Eq_88" (16F word16 w016F))
	T_88 (in di_80 & 0x0006 : word16)
Eq_96: (struct "Eq_96" (177 word16 w0177))
	T_96 (in di_80 & 0x0006 : word16)
Eq_118: (fn byte (byte))
	T_118 (in __inb : ptr32)
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
T_7: (in al_2 : Eq_7)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: byte
T_8: (in 0x13 : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_9: (in ax_31 : Eq_7)
  Class: Eq_7
  DataType: Eq_7
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
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_13: (in es_9 : (ptr Eq_13))
  Class: Eq_13
  DataType: (ptr Eq_13)
  OrigDataType: (ptr (segment))
T_14: (in ds : (ptr Eq_13))
  Class: Eq_13
  DataType: (ptr Eq_13)
  OrigDataType: (ptr (segment (16B word16 w016B) (16D T_44 t016D)))
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
T_20: (in di_33 : (memptr (ptr Eq_13) Eq_20))
  Class: Eq_20
  DataType: (memptr (ptr Eq_13) Eq_20)
  OrigDataType: (memptr T_13 (struct 0001 (0 T_7 t0000) (165 T_23 t0165) (16F T_50 t016F) (177 T_58 t0177)))
T_21: (in 0x0165 : word16)
  Class: Eq_21
  DataType: word16
  OrigDataType: word16
T_22: (in di_33 + 0x0165 : word16)
  Class: Eq_22
  DataType: word16
  OrigDataType: word16
T_23: (in Mem0[ds:di_33 + 0x0165:word16] : word16)
  Class: Eq_23
  DataType: int16
  OrigDataType: word16
T_24: (in 0x0001 : word16)
  Class: Eq_24
  DataType: word16
  OrigDataType: word16
T_25: (in (ds->*di_33).w0165 + 0x0001 : word16)
  Class: Eq_23
  DataType: int16
  OrigDataType: word16
T_26: (in 0x0165 : word16)
  Class: Eq_26
  DataType: word16
  OrigDataType: word16
T_27: (in di_33 + 0x0165 : word16)
  Class: Eq_27
  DataType: word16
  OrigDataType: word16
T_28: (in Mem40[ds:di_33 + 0x0165:word16] : word16)
  Class: Eq_23
  DataType: int16
  OrigDataType: word16
T_29: (in rLoc1_43 : Eq_29)
  Class: Eq_29
  DataType: Eq_29
  OrigDataType: real64
T_30: (in 0x0165 : word16)
  Class: Eq_30
  DataType: word16
  OrigDataType: word16
T_31: (in di_33 + 0x0165 : word16)
  Class: Eq_31
  DataType: word16
  OrigDataType: word16
T_32: (in Mem40[ds:di_33 + 0x0165:int16] : int16)
  Class: Eq_23
  DataType: int16
  OrigDataType: int16
T_33: (in (real64) (ds->*di_33).w0165 : real64)
  Class: Eq_33
  DataType: Eq_33
  OrigDataType: (union (real16 u0) (real64 u1))
T_34: (in 0x016B : word16)
  Class: Eq_34
  DataType: (memptr (ptr Eq_13) word16)
  OrigDataType: (memptr T_14 (struct (0 T_35 t0000)))
T_35: (in Mem40[ds:0x016B:word16] : word16)
  Class: Eq_35
  DataType: word16
  OrigDataType: word16
T_36: (in (real64) ds->w016B : real64)
  Class: Eq_36
  DataType: Eq_36
  OrigDataType: (union (real16 u0) (real64 u1))
T_37: (in (real64) (ds->*di_33).w0165 / (real64) ds->w016B : word16)
  Class: Eq_29
  DataType: Eq_29
  OrigDataType: real16
T_38: (in rLoc1_45 : Eq_38)
  Class: Eq_38
  DataType: Eq_38
  OrigDataType: (union (real16 u0) (real64 u1))
T_39: (in cos : ptr32)
  Class: Eq_39
  DataType: (ptr Eq_39)
  OrigDataType: (ptr (fn T_40 (T_29)))
T_40: (in cos(rLoc1_43) : real64)
  Class: Eq_38
  DataType: Eq_38
  OrigDataType: real64
T_41: (in sin : ptr32)
  Class: Eq_41
  DataType: (ptr Eq_41)
  OrigDataType: (ptr (fn T_42 (T_29)))
T_42: (in sin(rLoc1_43) : real64)
  Class: Eq_42
  DataType: Eq_42
  OrigDataType: (union (real16 u0) (real64 u1))
T_43: (in 0x016D : word16)
  Class: Eq_43
  DataType: (memptr (ptr Eq_13) word16)
  OrigDataType: (memptr T_14 (struct (0 T_44 t0000)))
T_44: (in Mem40[ds:0x016D:word16] : word16)
  Class: Eq_44
  DataType: word16
  OrigDataType: word16
T_45: (in (real64) ds->w016D : real64)
  Class: Eq_45
  DataType: Eq_45
  OrigDataType: (union (real16 u0) (real64 u1))
T_46: (in sin(rLoc1_43) * (real64) ds->w016D : word16)
  Class: Eq_46
  DataType: real16
  OrigDataType: real16
T_47: (in (int16) (sin(rLoc1_43) * (real64) ds->w016D) : int16)
  Class: Eq_47
  DataType: int16
  OrigDataType: int16
T_48: (in 0x016F : word16)
  Class: Eq_48
  DataType: word16
  OrigDataType: word16
T_49: (in di_33 + 0x016F : word16)
  Class: Eq_49
  DataType: word16
  OrigDataType: word16
T_50: (in Mem48[ds:di_33 + 0x016F:int16] : int16)
  Class: Eq_47
  DataType: int16
  OrigDataType: int16
T_51: (in 0x016B : word16)
  Class: Eq_51
  DataType: (memptr (ptr Eq_13) word16)
  OrigDataType: (memptr T_14 (struct (0 T_52 t0000)))
T_52: (in Mem48[ds:0x016B:word16] : word16)
  Class: Eq_35
  DataType: word16
  OrigDataType: word16
T_53: (in (real64) ds->w016B : real64)
  Class: Eq_53
  DataType: Eq_53
  OrigDataType: (union (real16 u0) (real64 u1))
T_54: (in rLoc1_45 * (real64) ds->w016B : word16)
  Class: Eq_54
  DataType: real16
  OrigDataType: real16
T_55: (in (int16) (rLoc1_45 * (real64) ds->w016B) : int16)
  Class: Eq_55
  DataType: int16
  OrigDataType: int16
T_56: (in 0x0177 : word16)
  Class: Eq_56
  DataType: word16
  OrigDataType: word16
T_57: (in di_33 + 0x0177 : word16)
  Class: Eq_57
  DataType: word16
  OrigDataType: word16
T_58: (in Mem50[ds:di_33 + 0x0177:int16] : int16)
  Class: Eq_55
  DataType: int16
  OrigDataType: int16
T_59: (in 0x0000 : word16)
  Class: Eq_59
  DataType: word16
  OrigDataType: word16
T_60: (in di_33 + 0x0000 : word16)
  Class: Eq_60
  DataType: word16
  OrigDataType: word16
T_61: (in Mem51[es_9:di_33 + 0x0000:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_62: (in 0x0002 : word16)
  Class: Eq_62
  DataType: word16
  OrigDataType: word16
T_63: (in di_33 + 0x0002 : word16)
  Class: Eq_20
  DataType: (memptr (ptr Eq_13) Eq_20)
  OrigDataType: word16
T_64: (in cx_36 : word16)
  Class: Eq_64
  DataType: word16
  OrigDataType: word16
T_65: (in 0x0001 : word16)
  Class: Eq_65
  DataType: word16
  OrigDataType: word16
T_66: (in cx_36 - 0x0001 : word16)
  Class: Eq_64
  DataType: word16
  OrigDataType: word16
T_67: (in 0x0000 : word16)
  Class: Eq_64
  DataType: word16
  OrigDataType: word16
T_68: (in cx_36 != 0x0000 : bool)
  Class: Eq_68
  DataType: bool
  OrigDataType: bool
T_69: (in cx_54 : word16)
  Class: Eq_69
  DataType: word16
  OrigDataType: word16
T_70: (in 0x0001 : word16)
  Class: Eq_70
  DataType: word16
  OrigDataType: word16
T_71: (in cx_36 - 0x0001 : word16)
  Class: Eq_69
  DataType: word16
  OrigDataType: word16
T_72: (in dx : int16)
  Class: Eq_72
  DataType: int16
  OrigDataType: int16
T_73: (in 0x0140 : word16)
  Class: Eq_73
  DataType: int16
  OrigDataType: int16
T_74: (in dx *s 0x0140 : int16)
  Class: Eq_74
  DataType: int16
  OrigDataType: int16
T_75: (in dx *s 0x0140 + bx : word16)
  Class: Eq_75
  DataType: (memptr (ptr Eq_13) Eq_75)
  OrigDataType: (memptr T_13 (struct (FFFFBC30 T_78 tFFFFBC30)))
T_76: (in 0xBC30 : word16)
  Class: Eq_76
  DataType: word16
  OrigDataType: word16
T_77: (in dx *s 0x0140 + bx + 0xBC30 : word16)
  Class: Eq_77
  DataType: word16
  OrigDataType: word16
T_78: (in Mem72[es_9:dx *s 0x0140 + bx + 0xBC30:byte] : byte)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: byte
T_79: (in __rol : ptr32)
  Class: Eq_79
  DataType: (ptr Eq_79)
  OrigDataType: (ptr (fn T_82 (T_80, T_81)))
T_80: (in ax_31 + di_33 : word16)
  Class: Eq_80
  DataType: word16
  OrigDataType: word16
T_81: (in 0x02 : byte)
  Class: Eq_81
  DataType: byte
  OrigDataType: byte
T_82: (in __rol(ax_31 + di_33, 0x02) : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_83: (in di_80 : word16)
  Class: Eq_83
  DataType: word16
  OrigDataType: word16
T_84: (in di_33 + ax_31 : word16)
  Class: Eq_83
  DataType: word16
  OrigDataType: word16
T_85: (in (byte) ax_31 : byte)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: byte
T_86: (in 0x0006 : word16)
  Class: Eq_86
  DataType: word16
  OrigDataType: word16
T_87: (in di_80 & 0x0006 : word16)
  Class: Eq_20
  DataType: (memptr (ptr Eq_13) Eq_20)
  OrigDataType: word16
T_88: (in di_80 & 0x0006 : word16)
  Class: Eq_88
  DataType: (memptr (ptr Eq_13) Eq_88)
  OrigDataType: (memptr T_14 (struct (16F T_91 t016F)))
T_89: (in 0x016F : word16)
  Class: Eq_89
  DataType: word16
  OrigDataType: word16
T_90: (in (di_80 & 0x0006) + 0x016F : word16)
  Class: Eq_90
  DataType: word16
  OrigDataType: word16
T_91: (in Mem72[ds:(di_80 & 0x0006) + 0x016F:word16] : word16)
  Class: Eq_91
  DataType: word16
  OrigDataType: word16
T_92: (in (ds->*(di_80 & 0x0006)).w016F - bx : word16)
  Class: Eq_92
  DataType: int16
  OrigDataType: int16
T_93: (in 0x0001 : word16)
  Class: Eq_93
  DataType: uint16
  OrigDataType: uint16
T_94: (in (ds->*(di_80 & 0x0006)).w016F - bx >> 0x0001 : word16)
  Class: Eq_94
  DataType: int16
  OrigDataType: int16
T_95: (in bx + (Mem72[ds:(di_80 & 0x0006) + 0x016F:word16] - bx >> 0x0001) : word16)
  Class: Eq_15
  DataType: (memptr (ptr Eq_13) segptr32)
  OrigDataType: word16
T_96: (in di_80 & 0x0006 : word16)
  Class: Eq_96
  DataType: (memptr (ptr Eq_13) Eq_96)
  OrigDataType: (memptr T_14 (struct (177 T_99 t0177)))
T_97: (in 0x0177 : word16)
  Class: Eq_97
  DataType: word16
  OrigDataType: word16
T_98: (in (di_80 & 0x0006) + 0x0177 : word16)
  Class: Eq_98
  DataType: word16
  OrigDataType: word16
T_99: (in Mem72[ds:(di_80 & 0x0006) + 0x0177:word16] : word16)
  Class: Eq_99
  DataType: word16
  OrigDataType: word16
T_100: (in (ds->*(di_80 & 0x0006)).w0177 - dx : word16)
  Class: Eq_100
  DataType: int16
  OrigDataType: int16
T_101: (in 0x0001 : word16)
  Class: Eq_101
  DataType: uint16
  OrigDataType: uint16
T_102: (in (ds->*(di_80 & 0x0006)).w0177 - dx >> 0x0001 : word16)
  Class: Eq_102
  DataType: int16
  OrigDataType: int16
T_103: (in dx + ((ds->*(di_80 & 0x0006)).w0177 - dx >> 0x0001) : word16)
  Class: Eq_72
  DataType: int16
  OrigDataType: word16
T_104: (in 0x0001 : word16)
  Class: Eq_104
  DataType: word16
  OrigDataType: word16
T_105: (in cx_54 - 0x0001 : word16)
  Class: Eq_69
  DataType: word16
  OrigDataType: word16
T_106: (in 0x0000 : word16)
  Class: Eq_69
  DataType: word16
  OrigDataType: word16
T_107: (in cx_54 != 0x0000 : bool)
  Class: Eq_107
  DataType: bool
  OrigDataType: bool
T_108: (in 0x0000 : word16)
  Class: Eq_108
  DataType: word16
  OrigDataType: word16
T_109: (in di_33 + 0x0000 : word16)
  Class: Eq_109
  DataType: word16
  OrigDataType: word16
T_110: (in Mem58[es_9:di_33 + 0x0000:byte] : byte)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: byte
T_111: (in 0x0001 : word16)
  Class: Eq_111
  DataType: word16
  OrigDataType: word16
T_112: (in di_33 + 0x0001 : word16)
  Class: Eq_20
  DataType: (memptr (ptr Eq_13) Eq_20)
  OrigDataType: word16
T_113: (in 0x0001 : word16)
  Class: Eq_113
  DataType: word16
  OrigDataType: word16
T_114: (in cx_54 - 0x0001 : word16)
  Class: Eq_69
  DataType: word16
  OrigDataType: word16
T_115: (in 0x0000 : word16)
  Class: Eq_69
  DataType: word16
  OrigDataType: word16
T_116: (in cx_54 == 0x0000 : bool)
  Class: Eq_116
  DataType: bool
  OrigDataType: bool
T_117: (in al_95 : byte)
  Class: Eq_117
  DataType: byte
  OrigDataType: byte
T_118: (in __inb : ptr32)
  Class: Eq_118
  DataType: (ptr Eq_118)
  OrigDataType: (ptr (fn T_120 (T_119)))
T_119: (in 0x60 : byte)
  Class: Eq_119
  DataType: byte
  OrigDataType: byte
T_120: (in __inb(0x60) : byte)
  Class: Eq_117
  DataType: byte
  OrigDataType: byte
T_121: (in 0x01 : byte)
  Class: Eq_121
  DataType: byte
  OrigDataType: byte
T_122: (in al_95 - 0x01 : byte)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: byte
T_123: (in al_95 - 0x01 : byte)
  Class: Eq_123
  DataType: byte
  OrigDataType: byte
T_124: (in DPB(ax_31, al_95 - 0x01, 0, 8) : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_125: (in 0x01 : byte)
  Class: Eq_117
  DataType: byte
  OrigDataType: byte
T_126: (in al_95 != 0x01 : bool)
  Class: Eq_126
  DataType: bool
  OrigDataType: bool
T_127: (in 0x0000 : word16)
  Class: Eq_20
  DataType: (memptr (ptr Eq_13) Eq_20)
  OrigDataType: word16
T_128: (in 0x0003 : word16)
  Class: Eq_64
  DataType: word16
  OrigDataType: word16
*/
typedef struct Globals {
} Eq_1;

typedef void (Eq_2)(byte);

typedef union Eq_7 {
	byte u0;
	word16 u1;
} Eq_7;

typedef Eq_20 Eq_13struct Eq_13 {
	Eq_20 t0000;	// 0
	word16 w016B;	// 16B
	word16 w016D;	// 16D
} Eq_13;

typedef Eq_7 Eq_20struct Eq_20 {	// size: 1 1
	Eq_7 t0000;	// 0
	int16 w0165;	// 165
	int16 w016F;	// 16F
	int16 w0177;	// 177
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

typedef Eq_7 Eq_75struct Eq_75 {
	Eq_7 tFFFFBC30;	// FFFFBC30
} Eq_75;

typedef Eq_7 (Eq_79)(word16, byte);

typedef struct Eq_88 {
	word16 w016F;	// 16F
} Eq_88;

typedef struct Eq_96 {
	word16 w0177;	// 177
} Eq_96;

typedef byte (Eq_118)(byte);

