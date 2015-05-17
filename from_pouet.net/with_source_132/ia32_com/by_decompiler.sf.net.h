// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_132/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_14) ptrFFFA0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_11: (fn void (word16, word16))
	T_11 (in __outw : ptr32)
Eq_14: (segment "Eq_14")
	T_14 (in dx_6 : (ptr Eq_14))
	T_19 (in DPB(dx, dh + 0x13, 8, 8) : word16)
	T_33 (in 0xA000 : selector)
Eq_25: (struct "Eq_25" (FFFFFF20 byte bFFFFFF20) (0 uint8 b0000))
	T_25 (in bx_121 : (memptr (ptr Eq_14) Eq_25))
	T_48 (in DPB(bx_121, bl, 0, 8) : word16)
	T_69 (in bx_179 : (memptr (ptr Eq_14) Eq_25))
	T_77 (in DPB(bx_179, bh_166 + 0x01, 8, 8) : word16)
	T_90 (in bx : (memptr (ptr Eq_14) Eq_25))
Eq_81: (segment "Eq_81")
	T_81 (in ss : selector)
Eq_82: (union "Eq_82" ((memptr (ptr Eq_81) Eq_121) u0) (Eq_123 u1))
	T_82 (in fp : ptr16)
Eq_95: (fn byte (byte))
	T_95 (in __inb : ptr32)
Eq_117: (fn word16 (word16, cups16, byte))
	T_117 (in __shld : ptr32)
Eq_121: (struct "Eq_121" (FFFFFFEA word16 wFFFFFFEA))
	T_121
Eq_122: (struct "Eq_122" (FFFFFFFA word16 wFFFFFFFA))
	T_122
Eq_123: (union "Eq_123" (ptr16 u0) ((memptr (ptr Eq_81) Eq_122) u1))
	T_123
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
T_7: (in ax_16 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_8: (in ax : word16)
  Class: Eq_8
  DataType: word16
  OrigDataType: word16
T_9: (in 0x20 : byte)
  Class: Eq_9
  DataType: byte
  OrigDataType: byte
T_10: (in DPB(ax, 0x20, 8, 8) : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_11: (in __outw : ptr32)
  Class: Eq_11
  DataType: (ptr Eq_11)
  OrigDataType: (ptr (fn T_13 (T_12, T_7)))
T_12: (in 0x03D4 : word16)
  Class: Eq_12
  DataType: word16
  OrigDataType: word16
T_13: (in __outw(0x03D4, ax_16) : void)
  Class: Eq_13
  DataType: void
  OrigDataType: void
T_14: (in dx_6 : (ptr Eq_14))
  Class: Eq_14
  DataType: (ptr Eq_14)
  OrigDataType: word16
T_15: (in dx : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_16: (in dh : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_17: (in 0x13 : byte)
  Class: Eq_17
  DataType: byte
  OrigDataType: byte
T_18: (in dh + 0x13 : byte)
  Class: Eq_18
  DataType: byte
  OrigDataType: byte
T_19: (in DPB(dx, dh + 0x13, 8, 8) : word16)
  Class: Eq_14
  DataType: (ptr Eq_14)
  OrigDataType: word16
T_20: (in al_143 : uint8)
  Class: Eq_20
  DataType: uint8
  OrigDataType: uint8
T_21: (in ax_133 : word16)
  Class: Eq_21
  DataType: word16
  OrigDataType: word16
T_22: (in 0x0001 : word16)
  Class: Eq_22
  DataType: word16
  OrigDataType: word16
T_23: (in ax_133 - 0x0001 : word16)
  Class: Eq_23
  DataType: word16
  OrigDataType: word16
T_24: (in (byte) (ax_133 - 0x0001) : byte)
  Class: Eq_20
  DataType: uint8
  OrigDataType: byte
T_25: (in bx_121 : (memptr (ptr Eq_14) Eq_25))
  Class: Eq_25
  DataType: (memptr (ptr Eq_14) Eq_25)
  OrigDataType: (memptr T_14 (struct (FFFFFF20 T_36 tFFFFFF20) (0 T_28 t0000)))
T_26: (in 0x0000 : word16)
  Class: Eq_26
  DataType: word16
  OrigDataType: word16
T_27: (in bx_121 + 0x0000 : word16)
  Class: Eq_27
  DataType: word16
  OrigDataType: word16
T_28: (in Mem144[dx_6:bx_121 + 0x0000:byte] : byte)
  Class: Eq_20
  DataType: uint8
  OrigDataType: byte
T_29: (in 0x03 : byte)
  Class: Eq_29
  DataType: uint8
  OrigDataType: uint8
T_30: (in al_143 >>u 0x03 : word16)
  Class: Eq_30
  DataType: uint16
  OrigDataType: uint16
T_31: (in 0x10 : byte)
  Class: Eq_31
  DataType: byte
  OrigDataType: byte
T_32: (in (al_143 >>u 0x03) + 0x10 : byte)
  Class: Eq_32
  DataType: byte
  OrigDataType: byte
T_33: (in 0xA000 : selector)
  Class: Eq_14
  DataType: (ptr Eq_14)
  OrigDataType: (ptr (segment))
T_34: (in 0x00E0 : word16)
  Class: Eq_34
  DataType: word16
  OrigDataType: word16
T_35: (in bx_121 - 0x00E0 : word16)
  Class: Eq_35
  DataType: word16
  OrigDataType: word16
T_36: (in Mem147[0xA000:bx_121 - 0x00E0:byte] : byte)
  Class: Eq_32
  DataType: byte
  OrigDataType: byte
T_37: (in cx_123 : word16)
  Class: Eq_37
  DataType: word16
  OrigDataType: word16
T_38: (in di_156 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_39: (in cx_123 + di_156 : word16)
  Class: Eq_37
  DataType: word16
  OrigDataType: word16
T_40: (in bl : byte)
  Class: Eq_40
  DataType: byte
  OrigDataType: byte
T_41: (in 0x01 : byte)
  Class: Eq_41
  DataType: byte
  OrigDataType: byte
T_42: (in bl + 0x01 : byte)
  Class: Eq_40
  DataType: byte
  OrigDataType: byte
T_43: (in SLICE(cx_123, byte, 8) : byte)
  Class: Eq_43
  DataType: byte
  OrigDataType: byte
T_44: (in ch_124 : byte)
  Class: Eq_43
  DataType: byte
  OrigDataType: byte
T_45: (in bp_120 : word16)
  Class: Eq_45
  DataType: word16
  OrigDataType: word16
T_46: (in 0x03D4 : word16)
  Class: Eq_46
  DataType: word16
  OrigDataType: word16
T_47: (in bp_120 + 0x03D4 : word16)
  Class: Eq_45
  DataType: word16
  OrigDataType: word16
T_48: (in DPB(bx_121, bl, 0, 8) : word16)
  Class: Eq_25
  DataType: (memptr (ptr Eq_14) Eq_25)
  OrigDataType: word16
T_49: (in 0x00 : byte)
  Class: Eq_40
  DataType: byte
  OrigDataType: byte
T_50: (in bl != 0x00 : bool)
  Class: Eq_50
  DataType: bool
  OrigDataType: bool
T_51: (in ax_129 : (memptr (ptr Eq_14) byte))
  Class: Eq_51
  DataType: (memptr (ptr Eq_14) byte)
  OrigDataType: (memptr T_14 (struct (0 T_54 t0000)))
T_52: (in 0x0000 : word16)
  Class: Eq_52
  DataType: word16
  OrigDataType: word16
T_53: (in ax_129 + 0x0000 : word16)
  Class: Eq_53
  DataType: word16
  OrigDataType: word16
T_54: (in Mem108[dx_6:ax_129 + 0x0000:byte] : byte)
  Class: Eq_54
  DataType: byte
  OrigDataType: byte
T_55: (in DPB(bp_120, dx_6->*ax_129, 0, 8) : word16)
  Class: Eq_21
  DataType: word16
  OrigDataType: word16
T_56: (in al_132 : byte)
  Class: Eq_56
  DataType: byte
  OrigDataType: byte
T_57: (in SLICE(bp_120, byte, 8) : byte)
  Class: Eq_57
  DataType: byte
  OrigDataType: byte
T_58: (in ch_124 & SLICE(bp_120, byte, 8) : byte)
  Class: Eq_56
  DataType: byte
  OrigDataType: byte
T_59: (in DPB(bp_120, ch_124, 0, 8) : word16)
  Class: Eq_51
  DataType: (memptr (ptr Eq_14) byte)
  OrigDataType: word16
T_60: (in DPB(bp_120, al_132, 0, 8) : word16)
  Class: Eq_21
  DataType: word16
  OrigDataType: word16
T_61: (in 0x40 : byte)
  Class: Eq_61
  DataType: byte
  OrigDataType: byte
T_62: (in al_132 & 0x40 : byte)
  Class: Eq_62
  DataType: byte
  OrigDataType: byte
T_63: (in 0x00 : byte)
  Class: Eq_62
  DataType: byte
  OrigDataType: byte
T_64: (in (al_132 & 0x40) != 0x00 : bool)
  Class: Eq_64
  DataType: bool
  OrigDataType: bool
T_65: (in cx_174 : word16)
  Class: Eq_37
  DataType: word16
  OrigDataType: word16
T_66: (in 0x03D4 : word16)
  Class: Eq_66
  DataType: word16
  OrigDataType: word16
T_67: (in cx_174 - 0x03D4 : word16)
  Class: Eq_37
  DataType: word16
  OrigDataType: word16
T_68: (in bh_166 : byte)
  Class: Eq_68
  DataType: byte
  OrigDataType: byte
T_69: (in bx_179 : (memptr (ptr Eq_14) Eq_25))
  Class: Eq_25
  DataType: (memptr (ptr Eq_14) Eq_25)
  OrigDataType: word16
T_70: (in SLICE(bx_179, byte, 8) : byte)
  Class: Eq_68
  DataType: byte
  OrigDataType: byte
T_71: (in (byte) bx_179 : byte)
  Class: Eq_40
  DataType: byte
  OrigDataType: byte
T_72: (in SLICE(cx_174, byte, 8) : byte)
  Class: Eq_43
  DataType: byte
  OrigDataType: byte
T_73: (in bp_176 : word16)
  Class: Eq_45
  DataType: word16
  OrigDataType: word16
T_74: (in bp_176 + di_156 : word16)
  Class: Eq_45
  DataType: word16
  OrigDataType: word16
T_75: (in 0x01 : byte)
  Class: Eq_75
  DataType: byte
  OrigDataType: byte
T_76: (in bh_166 + 0x01 : byte)
  Class: Eq_76
  DataType: byte
  OrigDataType: byte
T_77: (in DPB(bx_179, bh_166 + 0x01, 8, 8) : word16)
  Class: Eq_25
  DataType: (memptr (ptr Eq_14) Eq_25)
  OrigDataType: word16
T_78: (in 0x01 : byte)
  Class: Eq_68
  DataType: byte
  OrigDataType: byte
T_79: (in bh_166 != 0x01 : bool)
  Class: Eq_79
  DataType: bool
  OrigDataType: bool
T_80: (in 0x03D4 : word16)
  Class: Eq_80
  DataType: word16
  OrigDataType: word16
T_81: (in ss : selector)
  Class: Eq_81
  DataType: (ptr Eq_81)
  OrigDataType: (ptr (segment))
T_82: (in fp : ptr16)
  Class: Eq_82
  DataType: Eq_82
  OrigDataType: (union ((union (ptr16 u0) ((memptr T_81 (struct (FFFFFFFA T_107 tFFFFFFFA))) u1)) u0) ((memptr T_81 (struct (FFFFFFEA T_85 tFFFFFFEA))) u1))
T_83: (in 0x0016 : word16)
  Class: Eq_83
  DataType: word16
  OrigDataType: word16
T_84: (in fp - 0x0016 : word16)
  Class: Eq_84
  DataType: word16
  OrigDataType: word16
T_85: (in Mem108[ss:fp - 0x0016:word16] : word16)
  Class: Eq_80
  DataType: word16
  OrigDataType: word16
T_86: (in di_60 : word16)
  Class: Eq_86
  DataType: word16
  OrigDataType: word16
T_87: (in di : word16)
  Class: Eq_86
  DataType: word16
  OrigDataType: word16
T_88: (in si_57 : cups16)
  Class: Eq_88
  DataType: cups16
  OrigDataType: cups16
T_89: (in si : cups16)
  Class: Eq_88
  DataType: cups16
  OrigDataType: word16
T_90: (in bx : (memptr (ptr Eq_14) Eq_25))
  Class: Eq_25
  DataType: (memptr (ptr Eq_14) Eq_25)
  OrigDataType: word16
T_91: (in (byte) bx : byte)
  Class: Eq_40
  DataType: byte
  OrigDataType: byte
T_92: (in cx_62 : word16)
  Class: Eq_37
  DataType: word16
  OrigDataType: word16
T_93: (in cx : word16)
  Class: Eq_37
  DataType: word16
  OrigDataType: word16
T_94: (in ax_61 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_95: (in __inb : ptr32)
  Class: Eq_95
  DataType: (ptr Eq_95)
  OrigDataType: (ptr (fn T_97 (T_96)))
T_96: (in 0x60 : byte)
  Class: Eq_96
  DataType: byte
  OrigDataType: byte
T_97: (in __inb(0x60) : byte)
  Class: Eq_97
  DataType: byte
  OrigDataType: byte
T_98: (in 0x01 : byte)
  Class: Eq_97
  DataType: byte
  OrigDataType: byte
T_99: (in __inb(0x60) != 0x01 : bool)
  Class: Eq_99
  DataType: bool
  OrigDataType: bool
T_100: (in ax_56 : word16)
  Class: Eq_100
  DataType: word16
  OrigDataType: word16
T_101: (in (int32) ax_16 : int32)
  Class: Eq_101
  DataType: int32
  OrigDataType: int32
T_102: (in (word16) (int32) ax_16 : word16)
  Class: Eq_100
  DataType: word16
  OrigDataType: word16
T_103: (in si - ax_56 : word16)
  Class: Eq_88
  DataType: cups16
  OrigDataType: word16
T_104: (in 0x03D4 : word16)
  Class: Eq_104
  DataType: word16
  OrigDataType: word16
T_105: (in 0x0006 : word16)
  Class: Eq_105
  DataType: word16
  OrigDataType: word16
T_106: (in fp - 0x0006 : word16)
  Class: Eq_106
  DataType: word16
  OrigDataType: word16
T_107: (in Mem69[ss:fp - 0x0006:word16] : word16)
  Class: Eq_104
  DataType: word16
  OrigDataType: word16
T_108: (in 0x03D4 : word16)
  Class: Eq_108
  DataType: word16
  OrigDataType: word16
T_109: (in di - 0x03D4 : word16)
  Class: Eq_109
  DataType: word16
  OrigDataType: word16
T_110: (in 0x0000 : word16)
  Class: Eq_88
  DataType: cups16
  OrigDataType: cups16
T_111: (in si_57 <u 0x0000 : bool)
  Class: Eq_111
  DataType: bool
  OrigDataType: bool
T_112: (in di - 0x03D4 - (si_57 <u 0x0000) : word16)
  Class: Eq_86
  DataType: word16
  OrigDataType: word16
T_113: (in 0x0001 : word16)
  Class: Eq_113
  DataType: word16
  OrigDataType: word16
T_114: (in cx - 0x0001 : word16)
  Class: Eq_37
  DataType: word16
  OrigDataType: word16
T_115: (in ax_56 + di_60 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_116: (in SLICE(cx_62, byte, 8) : byte)
  Class: Eq_43
  DataType: byte
  OrigDataType: byte
T_117: (in __shld : ptr32)
  Class: Eq_117
  DataType: (ptr Eq_117)
  OrigDataType: (ptr (fn T_119 (T_86, T_88, T_118)))
T_118: (in 0x03 : byte)
  Class: Eq_118
  DataType: byte
  OrigDataType: byte
T_119: (in __shld(di_60, si_57, 0x03) : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_120: (in bp : word16)
  Class: Eq_45
  DataType: word16
  OrigDataType: word16
T_121:
  Class: Eq_121
  DataType: Eq_121
  OrigDataType: 
T_122:
  Class: Eq_122
  DataType: Eq_122
  OrigDataType: 
T_123:
  Class: Eq_123
  DataType: Eq_123
  OrigDataType: 
*/
typedef Eq_14 Eq_1struct Globals {
	Eq_14 * ptrFFFA0000;	// FFFA0000
} Eq_1;

typedef void (Eq_2)(byte);

typedef void (Eq_11)(word16, word16);

typedef struct Eq_14 {
} Eq_14;

typedef struct Eq_25 {
	byte bFFFFFF20;	// FFFFFF20
	uint8 b0000;	// 0
} Eq_25;

typedef struct Eq_81 {
} Eq_81;

typedef union Eq_82 {
	Eq_121 Eq_81::* u0;
	Eq_123 u1;
} Eq_82;

typedef byte (Eq_95)(byte);

typedef word16 (Eq_117)(word16, cups16, byte);

typedef struct Eq_121 {
	word16 wFFFFFFEA;	// FFFFFFEA
} Eq_121;

typedef struct Eq_122 {
	word16 wFFFFFFFA;	// FFFFFFFA
} Eq_122;

typedef union Eq_123 {
	ptr16 u0;
	Eq_122 Eq_81::* u1;
} Eq_123;

