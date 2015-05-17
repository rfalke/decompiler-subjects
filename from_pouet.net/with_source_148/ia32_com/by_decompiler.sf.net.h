// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_148/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_117) ptrFFFA0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_4: (segment "Eq_4" (100 (arr Eq_141) a0100) (108 int16 w0108))
	T_4 (in ds : (ptr Eq_4))
Eq_8: (fn void (byte))
	T_8 (in bios_video_set_mode : ptr32)
	T_9 (in signature of bios_video_set_mode : void)
Eq_19: (fn void (word16, byte))
	T_19 (in __outb : ptr32)
Eq_22: (fn void (word16, byte))
	T_22 (in __outb : ptr32)
Eq_29: (fn void (word16, byte))
	T_29 (in __outb : ptr32)
Eq_32: (fn void (word16, byte))
	T_32 (in __outb : ptr32)
Eq_40: (struct "Eq_40" 0006 (0 int16 w0000) (2 int16 w0002) (4 int16 w0004))
	T_40 (in si_58 : (memptr (ptr Eq_4) Eq_40))
	T_41 (in 0x0100 : word16)
	T_78 (in si_58 + 0x0006 : word16)
Eq_47: (fn real64 (real64))
	T_47 (in sqrt : ptr32)
Eq_54: (fn real64 (real64))
	T_54 (in cos : ptr32)
Eq_56: (fn real64 (real64))
	T_56 (in sin : ptr32)
Eq_87: (struct "Eq_87" (0 word16 w0000) (2 word16 w0002))
	T_87 (in si_122 : (memptr (ptr Eq_4) Eq_87))
	T_90 (in si_117 + 0x0002 : word16)
Eq_117: (segment "Eq_117" (0 byte b0000))
	T_117 (in 0xA000 : selector)
Eq_136: (fn byte (byte))
	T_136 (in __inb : ptr32)
Eq_141: (struct "Eq_141" 0006 (0 int16 w0000) (2 int16 w0002) (4 int16 w0004))
	T_141
	T_144
	T_145
Eq_142: (struct "Eq_142" 0006 (4 int16 w0004))
	T_142
Eq_143: (struct "Eq_143" 0006 (2 int16 w0002))
	T_143
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr Eq_1)
  OrigDataType: (ptr (struct "Globals"))
T_2: (in rLoc1 : real64)
  Class: Eq_2
  DataType: real64
  OrigDataType: real64
T_3: (in rLoc1_4 : real64)
  Class: Eq_3
  DataType: real64
  OrigDataType: real64
T_4: (in ds : (ptr Eq_4))
  Class: Eq_4
  DataType: (ptr Eq_4)
  OrigDataType: (ptr (segment (100 (arr T_141) a0100) (102 (arr T_143) a0102) (104 (arr T_142) a0104) (108 T_6 t0108)))
T_5: (in 0x0108 : word16)
  Class: Eq_5
  DataType: (memptr (ptr Eq_4) int16)
  OrigDataType: (memptr T_4 (struct (0 T_6 t0000)))
T_6: (in Mem0[ds:0x0108:int16] : int16)
  Class: Eq_6
  DataType: int16
  OrigDataType: int16
T_7: (in (real64) ds->w0108 : real64)
  Class: Eq_3
  DataType: real64
  OrigDataType: real64
T_8: (in bios_video_set_mode : ptr32)
  Class: Eq_8
  DataType: (ptr Eq_8)
  OrigDataType: (ptr (fn T_12 (T_11)))
T_9: (in signature of bios_video_set_mode : void)
  Class: Eq_8
  DataType: (ptr Eq_8)
  OrigDataType: 
T_10: (in al : byte)
  Class: Eq_10
  DataType: byte
  OrigDataType: byte
T_11: (in 0x13 : byte)
  Class: Eq_10
  DataType: byte
  OrigDataType: byte
T_12: (in bios_video_set_mode(0x13) : void)
  Class: Eq_12
  DataType: void
  OrigDataType: void
T_13: (in al_10 : byte)
  Class: Eq_13
  DataType: byte
  OrigDataType: byte
T_14: (in 0xFF : byte)
  Class: Eq_13
  DataType: byte
  OrigDataType: byte
T_15: (in ax_12 : uint16)
  Class: Eq_15
  DataType: uint16
  OrigDataType: uint16
T_16: (in ax : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_17: (in 0xFF : byte)
  Class: Eq_17
  DataType: byte
  OrigDataType: byte
T_18: (in DPB(ax, 0xFF, 0, 8) : word16)
  Class: Eq_15
  DataType: uint16
  OrigDataType: word16
T_19: (in __outb : ptr32)
  Class: Eq_19
  DataType: (ptr Eq_19)
  OrigDataType: (ptr (fn T_21 (T_20, T_13)))
T_20: (in 0x03C8 : word16)
  Class: Eq_20
  DataType: word16
  OrigDataType: word16
T_21: (in __outb(0x03C8, al_10) : void)
  Class: Eq_21
  DataType: void
  OrigDataType: void
T_22: (in __outb : ptr32)
  Class: Eq_22
  DataType: (ptr Eq_22)
  OrigDataType: (ptr (fn T_24 (T_23, T_13)))
T_23: (in 0x03C9 : word16)
  Class: Eq_23
  DataType: word16
  OrigDataType: word16
T_24: (in __outb(0x03C9, al_10) : void)
  Class: Eq_24
  DataType: void
  OrigDataType: void
T_25: (in al_22 : byte)
  Class: Eq_25
  DataType: byte
  OrigDataType: byte
T_26: (in 0x0002 : word16)
  Class: Eq_26
  DataType: uint16
  OrigDataType: uint16
T_27: (in ax_12 >>u 0x0002 : word16)
  Class: Eq_27
  DataType: uint16
  OrigDataType: uint16
T_28: (in (byte) (ax_12 >>u 0x0002) : byte)
  Class: Eq_25
  DataType: byte
  OrigDataType: byte
T_29: (in __outb : ptr32)
  Class: Eq_29
  DataType: (ptr Eq_29)
  OrigDataType: (ptr (fn T_31 (T_30, T_25)))
T_30: (in 0x03C9 : word16)
  Class: Eq_30
  DataType: word16
  OrigDataType: word16
T_31: (in __outb(0x03C9, al_22) : void)
  Class: Eq_31
  DataType: void
  OrigDataType: void
T_32: (in __outb : ptr32)
  Class: Eq_32
  DataType: (ptr Eq_32)
  OrigDataType: (ptr (fn T_34 (T_33, T_25)))
T_33: (in 0x03C9 : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_34: (in __outb(0x03C9, al_22) : void)
  Class: Eq_34
  DataType: void
  OrigDataType: void
T_35: (in 0x0001 : word16)
  Class: Eq_35
  DataType: word16
  OrigDataType: word16
T_36: (in ax_12 - 0x0001 : word16)
  Class: Eq_15
  DataType: uint16
  OrigDataType: word16
T_37: (in (byte) ax_12 : byte)
  Class: Eq_13
  DataType: byte
  OrigDataType: byte
T_38: (in 0x0000 : word16)
  Class: Eq_15
  DataType: uint16
  OrigDataType: word16
T_39: (in ax_12 != 0x0000 : bool)
  Class: Eq_39
  DataType: bool
  OrigDataType: bool
T_40: (in si_58 : (memptr (ptr Eq_4) Eq_40))
  Class: Eq_40
  DataType: (memptr (ptr Eq_4) Eq_40)
  OrigDataType: (memptr T_4 (struct 0006 (0 T_50 t0000) (2 T_69 t0002) (4 T_63 t0004)))
T_41: (in 0x0100 : word16)
  Class: Eq_40
  DataType: (memptr (ptr Eq_4) Eq_40)
  OrigDataType: word16
T_42: (in cx_60 : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_43: (in cx : word16)
  Class: Eq_43
  DataType: word16
  OrigDataType: word16
T_44: (in 0x02 : byte)
  Class: Eq_44
  DataType: byte
  OrigDataType: byte
T_45: (in DPB(cx, 0x02, 0, 8) : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_46: (in rLoc2_64 : real64)
  Class: Eq_46
  DataType: real64
  OrigDataType: real64
T_47: (in sqrt : ptr32)
  Class: Eq_47
  DataType: (ptr Eq_47)
  OrigDataType: (ptr (fn T_52 (T_51)))
T_48: (in 0x0000 : word16)
  Class: Eq_48
  DataType: word16
  OrigDataType: word16
T_49: (in si_58 + 0x0000 : word16)
  Class: Eq_49
  DataType: word16
  OrigDataType: word16
T_50: (in Mem0[ds:si_58 + 0x0000:int16] : int16)
  Class: Eq_50
  DataType: int16
  OrigDataType: int16
T_51: (in (real64) (ds->*si_58).w0000 : real64)
  Class: Eq_51
  DataType: real64
  OrigDataType: real64
T_52: (in sqrt((real64) (ds->*si_58).w0000) : real64)
  Class: Eq_46
  DataType: real64
  OrigDataType: real64
T_53: (in rLoc2_66 : real64)
  Class: Eq_53
  DataType: real64
  OrigDataType: real64
T_54: (in cos : ptr32)
  Class: Eq_54
  DataType: (ptr Eq_54)
  OrigDataType: (ptr (fn T_55 (T_46)))
T_55: (in cos(rLoc2_64) : real64)
  Class: Eq_53
  DataType: real64
  OrigDataType: real64
T_56: (in sin : ptr32)
  Class: Eq_56
  DataType: (ptr Eq_56)
  OrigDataType: (ptr (fn T_57 (T_46)))
T_57: (in sin(rLoc2_64) : real64)
  Class: Eq_57
  DataType: real64
  OrigDataType: real64
T_58: (in sin(rLoc2_64) * rLoc1_4 : real64)
  Class: Eq_58
  DataType: real64
  OrigDataType: real64
T_59: (in sin(rLoc2_64) * rLoc1_4 + rLoc1_4 : real64)
  Class: Eq_59
  DataType: real64
  OrigDataType: real64
T_60: (in (int16) (sin(rLoc2_64) * rLoc1_4 + rLoc1_4) : int16)
  Class: Eq_60
  DataType: int16
  OrigDataType: int16
T_61: (in 0x0004 : word16)
  Class: Eq_61
  DataType: word16
  OrigDataType: word16
T_62: (in si_58 + 0x0004 : word16)
  Class: Eq_62
  DataType: word16
  OrigDataType: word16
T_63: (in Mem70[ds:si_58 + 0x0004:int16] : int16)
  Class: Eq_60
  DataType: int16
  OrigDataType: int16
T_64: (in rLoc2_66 * rLoc1_4 : real64)
  Class: Eq_64
  DataType: real64
  OrigDataType: real64
T_65: (in rLoc2_66 * rLoc1_4 + rLoc1_4 : real64)
  Class: Eq_65
  DataType: real64
  OrigDataType: real64
T_66: (in (int16) (rLoc2_66 * rLoc1_4 + rLoc1_4) : int16)
  Class: Eq_66
  DataType: int16
  OrigDataType: int16
T_67: (in 0x0002 : word16)
  Class: Eq_67
  DataType: word16
  OrigDataType: word16
T_68: (in si_58 + 0x0002 : word16)
  Class: Eq_68
  DataType: word16
  OrigDataType: word16
T_69: (in Mem73[ds:si_58 + 0x0002:int16] : int16)
  Class: Eq_66
  DataType: int16
  OrigDataType: int16
T_70: (in 0x0000 : word16)
  Class: Eq_70
  DataType: word16
  OrigDataType: word16
T_71: (in si_58 + 0x0000 : word16)
  Class: Eq_71
  DataType: word16
  OrigDataType: word16
T_72: (in Mem73[ds:si_58 + 0x0000:word16] : word16)
  Class: Eq_50
  DataType: int16
  OrigDataType: word16
T_73: (in (ds->*si_58).w0000 + cx_60 : word16)
  Class: Eq_50
  DataType: int16
  OrigDataType: word16
T_74: (in 0x0000 : word16)
  Class: Eq_74
  DataType: word16
  OrigDataType: word16
T_75: (in si_58 + 0x0000 : word16)
  Class: Eq_75
  DataType: word16
  OrigDataType: word16
T_76: (in Mem75[ds:si_58 + 0x0000:word16] : word16)
  Class: Eq_50
  DataType: int16
  OrigDataType: word16
T_77: (in 0x0006 : word16)
  Class: Eq_77
  DataType: word16
  OrigDataType: word16
T_78: (in si_58 + 0x0006 : word16)
  Class: Eq_40
  DataType: (memptr (ptr Eq_4) Eq_40)
  OrigDataType: word16
T_79: (in 0x0001 : word16)
  Class: Eq_79
  DataType: word16
  OrigDataType: word16
T_80: (in cx_60 - 0x0001 : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_81: (in 0x0000 : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_82: (in cx_60 != 0x0000 : bool)
  Class: Eq_82
  DataType: bool
  OrigDataType: bool
T_83: (in di_108 : (memptr (ptr Eq_117) byte))
  Class: Eq_83
  DataType: (memptr (ptr Eq_117) byte)
  OrigDataType: (memptr T_117 (struct 0001 (0 T_120 t0000)))
T_84: (in 0x0000 : word16)
  Class: Eq_83
  DataType: (memptr (ptr Eq_117) byte)
  OrigDataType: word16
T_85: (in bp_151 : word16)
  Class: Eq_85
  DataType: word16
  OrigDataType: word16
T_86: (in 0x00C8 : word16)
  Class: Eq_85
  DataType: word16
  OrigDataType: word16
T_87: (in si_122 : (memptr (ptr Eq_4) Eq_87))
  Class: Eq_87
  DataType: (memptr (ptr Eq_4) Eq_87)
  OrigDataType: (memptr T_4 (struct (0 T_94 t0000) (2 T_100 t0002)))
T_88: (in si_117 : word16)
  Class: Eq_88
  DataType: word16
  OrigDataType: word16
T_89: (in 0x0002 : word16)
  Class: Eq_89
  DataType: word16
  OrigDataType: word16
T_90: (in si_117 + 0x0002 : word16)
  Class: Eq_87
  DataType: (memptr (ptr Eq_4) Eq_87)
  OrigDataType: word16
T_91: (in ax_125 : uint16)
  Class: Eq_91
  DataType: uint16
  OrigDataType: uint16
T_92: (in 0x0000 : word16)
  Class: Eq_92
  DataType: word16
  OrigDataType: word16
T_93: (in si_122 + 0x0000 : word16)
  Class: Eq_93
  DataType: word16
  OrigDataType: word16
T_94: (in Mem75[ds:si_122 + 0x0000:word16] : word16)
  Class: Eq_94
  DataType: word16
  OrigDataType: word16
T_95: (in bx_101 : word16)
  Class: Eq_95
  DataType: word16
  OrigDataType: word16
T_96: (in (ds->*si_122).w0000 - bx_101 : word16)
  Class: Eq_91
  DataType: uint16
  OrigDataType: word16
T_97: (in ax_132 : uint16)
  Class: Eq_97
  DataType: uint16
  OrigDataType: uint16
T_98: (in 0x0002 : word16)
  Class: Eq_98
  DataType: word16
  OrigDataType: word16
T_99: (in si_122 + 0x0002 : word16)
  Class: Eq_99
  DataType: word16
  OrigDataType: word16
T_100: (in Mem75[ds:si_122 + 0x0002:word16] : word16)
  Class: Eq_100
  DataType: word16
  OrigDataType: word16
T_101: (in (ds->*si_122).w0002 - bp_151 : word16)
  Class: Eq_97
  DataType: uint16
  OrigDataType: word16
T_102: (in 0x0004 : word16)
  Class: Eq_102
  DataType: word16
  OrigDataType: word16
T_103: (in si_122 + 0x0004 : word16)
  Class: Eq_88
  DataType: word16
  OrigDataType: word16
T_104: (in ch_116 : byte)
  Class: Eq_104
  DataType: byte
  OrigDataType: byte
T_105: (in ax_132 *u ax_132 : uint32)
  Class: Eq_105
  DataType: uint32
  OrigDataType: uint32
T_106: (in (word16) (ax_132 *u ax_132) : word16)
  Class: Eq_106
  DataType: word16
  OrigDataType: word16
T_107: (in ax_125 *u ax_125 : uint32)
  Class: Eq_107
  DataType: uint32
  OrigDataType: uint32
T_108: (in (word16) (ax_125 *u ax_125) : word16)
  Class: Eq_108
  DataType: word16
  OrigDataType: word16
T_109: (in (word16) (ax_132 *u ax_132) + (word16) (ax_125 *u ax_125) : word16)
  Class: Eq_109
  DataType: word16
  OrigDataType: word16
T_110: (in SLICE((word16) (ax_132 *u ax_132) + (word16) (ax_125 *u ax_125), byte, 8) : byte)
  Class: Eq_110
  DataType: byte
  OrigDataType: byte
T_111: (in ch_116 ^ SLICE((word16) (ax_132 *u ax_132) + (word16) (ax_125 *u ax_125), byte, 8) : byte)
  Class: Eq_104
  DataType: byte
  OrigDataType: byte
T_112: (in cl_115 : byte)
  Class: Eq_112
  DataType: byte
  OrigDataType: byte
T_113: (in 0x01 : byte)
  Class: Eq_113
  DataType: byte
  OrigDataType: byte
T_114: (in cl_115 - 0x01 : byte)
  Class: Eq_112
  DataType: byte
  OrigDataType: byte
T_115: (in 0x00 : byte)
  Class: Eq_112
  DataType: byte
  OrigDataType: byte
T_116: (in cl_115 != 0x00 : bool)
  Class: Eq_116
  DataType: bool
  OrigDataType: bool
T_117: (in 0xA000 : selector)
  Class: Eq_117
  DataType: (ptr Eq_117)
  OrigDataType: (ptr (segment))
T_118: (in 0x0000 : word16)
  Class: Eq_118
  DataType: word16
  OrigDataType: word16
T_119: (in di_108 + 0x0000 : word16)
  Class: Eq_119
  DataType: word16
  OrigDataType: word16
T_120: (in Mem146[0xA000:di_108 + 0x0000:byte] : byte)
  Class: Eq_104
  DataType: byte
  OrigDataType: byte
T_121: (in 0x0001 : word16)
  Class: Eq_121
  DataType: word16
  OrigDataType: word16
T_122: (in di_108 + 0x0001 : word16)
  Class: Eq_83
  DataType: (memptr (ptr Eq_117) byte)
  OrigDataType: word16
T_123: (in 0x0001 : word16)
  Class: Eq_123
  DataType: word16
  OrigDataType: word16
T_124: (in bx_101 - 0x0001 : word16)
  Class: Eq_95
  DataType: word16
  OrigDataType: word16
T_125: (in 0x0000 : word16)
  Class: Eq_95
  DataType: word16
  OrigDataType: word16
T_126: (in bx_101 != 0x0000 : bool)
  Class: Eq_126
  DataType: bool
  OrigDataType: bool
T_127: (in 0x02 : byte)
  Class: Eq_112
  DataType: byte
  OrigDataType: byte
T_128: (in 0x00 : byte)
  Class: Eq_104
  DataType: byte
  OrigDataType: byte
T_129: (in 0x0100 : word16)
  Class: Eq_88
  DataType: word16
  OrigDataType: word16
T_130: (in 0x0001 : word16)
  Class: Eq_130
  DataType: word16
  OrigDataType: word16
T_131: (in bp_151 - 0x0001 : word16)
  Class: Eq_85
  DataType: word16
  OrigDataType: word16
T_132: (in 0x0000 : word16)
  Class: Eq_85
  DataType: word16
  OrigDataType: word16
T_133: (in bp_151 != 0x0000 : bool)
  Class: Eq_133
  DataType: bool
  OrigDataType: bool
T_134: (in 0x0140 : word16)
  Class: Eq_95
  DataType: word16
  OrigDataType: word16
T_135: (in 0x0000 : word16)
  Class: Eq_43
  DataType: word16
  OrigDataType: word16
T_136: (in __inb : ptr32)
  Class: Eq_136
  DataType: (ptr Eq_136)
  OrigDataType: (ptr (fn T_138 (T_137)))
T_137: (in 0x60 : byte)
  Class: Eq_137
  DataType: byte
  OrigDataType: byte
T_138: (in __inb(0x60) : byte)
  Class: Eq_138
  DataType: byte
  OrigDataType: byte
T_139: (in 0x01 : byte)
  Class: Eq_138
  DataType: byte
  OrigDataType: byte
T_140: (in __inb(0x60) != 0x01 : bool)
  Class: Eq_140
  DataType: bool
  OrigDataType: bool
T_141:
  Class: Eq_141
  DataType: Eq_141
  OrigDataType: (struct 0006 (0 T_50 t0000))
T_142:
  Class: Eq_142
  DataType: Eq_142
  OrigDataType: (struct 0006 (0 T_63 t0000))
T_143:
  Class: Eq_143
  DataType: Eq_143
  OrigDataType: (struct 0006 (0 T_69 t0000))
T_144:
  Class: Eq_141
  DataType: Eq_141
  OrigDataType: (struct 0006 (0 T_72 t0000))
T_145:
  Class: Eq_141
  DataType: Eq_141
  OrigDataType: (struct 0006 (0 T_76 t0000))
*/
typedef Eq_117 Eq_1struct Globals {
	Eq_117 * ptrFFFA0000;	// FFFA0000
} Eq_1;

typedef Eq_141 Eq_4[]struct Eq_4 {
	Eq_141 a0100[];	// 100
	int16 w0108;	// 108
} Eq_4;

typedef void (Eq_8)(byte);

typedef void (Eq_19)(word16, byte);

typedef void (Eq_22)(word16, byte);

typedef void (Eq_29)(word16, byte);

typedef void (Eq_32)(word16, byte);

typedef struct Eq_40 {	// size: 6 6
	int16 w0000;	// 0
	int16 w0002;	// 2
	int16 w0004;	// 4
} Eq_40;

typedef real64 (Eq_47)(real64);

typedef real64 (Eq_54)(real64);

typedef real64 (Eq_56)(real64);

typedef struct Eq_87 {
	word16 w0000;	// 0
	word16 w0002;	// 2
} Eq_87;

typedef struct Eq_117 {
	byte b0000;	// 0
} Eq_117;

typedef byte (Eq_136)(byte);

typedef struct Eq_141 {	// size: 6 6
	int16 w0000;	// 0
	int16 w0002;	// 2
	int16 w0004;	// 4
} Eq_141;

typedef struct Eq_142 {	// size: 6 6
	int16 w0004;	// 4
} Eq_142;

typedef struct Eq_143 {	// size: 6 6
	int16 w0002;	// 2
} Eq_143;

