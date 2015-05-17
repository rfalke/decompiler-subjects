// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_143/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_29) ptrFFFA0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
	T_102 (in bios_video_set_mode : ptr32)
Eq_7: (fn void (word16, byte))
	T_7 (in __outb : ptr32)
Eq_11: (fn void (word16, byte))
	T_11 (in __outb : ptr32)
Eq_15: (fn void (word16, byte))
	T_15 (in __outb : ptr32)
Eq_19: (fn void (word16, byte))
	T_19 (in __outb : ptr32)
Eq_29: (segment "Eq_29" (0 (arr Eq_107 1) a0000))
	T_29 (in 0xA000 : selector)
Eq_30: (segment "Eq_30" (0 Eq_31 t0000) (1D1 (arr Eq_106 101) a01D1) (320 Eq_31 t0320))
	T_30 (in ss : selector)
Eq_31: (struct "Eq_31" 0008 (1D1 word16 w01D1) (1D3 word16 w01D3))
	T_31 (in bp_41 : (memptr (ptr Eq_30) Eq_31))
	T_74 (in bp_41 - 0x0008 : word16)
	T_75 (in 0x0000 : word16)
	T_101 (in 0x0320 : word16)
Eq_46: (fn byte (byte))
	T_46 (in __inb : ptr32)
Eq_61: (fn byte (byte))
	T_61 (in __inb : ptr32)
Eq_94: (fn byte (byte))
	T_94 (in __inb : ptr32)
Eq_105: (struct "Eq_105" 0008 (2 word16 w0002))
	T_105
	T_108
	T_109
Eq_106: (struct "Eq_106" 0008 (0 word16 w0000) (2 word16 w0002))
	T_106
	T_110
	T_111
Eq_107: (union "Eq_107" (byte u0) (Eq_114 u1))
	T_107
	T_112
	T_113
Eq_114: (struct "Eq_114" 0140 (0 byte b0000))
	T_114
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
T_7: (in __outb : ptr32)
  Class: Eq_7
  DataType: (ptr Eq_7)
  OrigDataType: (ptr (fn T_10 (T_8, T_9)))
T_8: (in 0x03C8 : word16)
  Class: Eq_8
  DataType: word16
  OrigDataType: word16
T_9: (in cl : byte)
  Class: Eq_9
  DataType: byte
  OrigDataType: byte
T_10: (in __outb(0x03C8, cl) : void)
  Class: Eq_10
  DataType: void
  OrigDataType: void
T_11: (in __outb : ptr32)
  Class: Eq_11
  DataType: (ptr Eq_11)
  OrigDataType: (ptr (fn T_14 (T_12, T_13)))
T_12: (in 0x03C9 : word16)
  Class: Eq_12
  DataType: word16
  OrigDataType: word16
T_13: (in 0x00 : byte)
  Class: Eq_13
  DataType: byte
  OrigDataType: byte
T_14: (in __outb(0x03C9, 0x00) : void)
  Class: Eq_14
  DataType: void
  OrigDataType: void
T_15: (in __outb : ptr32)
  Class: Eq_15
  DataType: (ptr Eq_15)
  OrigDataType: (ptr (fn T_18 (T_16, T_17)))
T_16: (in 0x03C9 : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_17: (in 0x00 : byte)
  Class: Eq_17
  DataType: byte
  OrigDataType: byte
T_18: (in __outb(0x03C9, 0x00) : void)
  Class: Eq_18
  DataType: void
  OrigDataType: void
T_19: (in __outb : ptr32)
  Class: Eq_19
  DataType: (ptr Eq_19)
  OrigDataType: (ptr (fn T_21 (T_20, T_9)))
T_20: (in 0x03C9 : word16)
  Class: Eq_20
  DataType: word16
  OrigDataType: word16
T_21: (in __outb(0x03C9, cl) : void)
  Class: Eq_21
  DataType: void
  OrigDataType: void
T_22: (in cx : word16)
  Class: Eq_22
  DataType: word16
  OrigDataType: word16
T_23: (in 0x0001 : word16)
  Class: Eq_23
  DataType: word16
  OrigDataType: word16
T_24: (in cx - 0x0001 : word16)
  Class: Eq_22
  DataType: word16
  OrigDataType: word16
T_25: (in (byte) cx : byte)
  Class: Eq_9
  DataType: byte
  OrigDataType: byte
T_26: (in 0x0000 : word16)
  Class: Eq_22
  DataType: word16
  OrigDataType: word16
T_27: (in cx != 0x0000 : bool)
  Class: Eq_27
  DataType: bool
  OrigDataType: bool
T_28: (in 0xFF : byte)
  Class: Eq_28
  DataType: byte
  OrigDataType: byte
T_29: (in 0xA000 : selector)
  Class: Eq_29
  DataType: (ptr Eq_29)
  OrigDataType: (ptr (segment (0 (arr T_107 1) a0000)))
T_30: (in ss : selector)
  Class: Eq_30
  DataType: (ptr Eq_30)
  OrigDataType: (ptr (segment (1D1 (arr T_106 101) a01D1) (1D3 (arr T_105 101) a01D3)))
T_31: (in bp_41 : (memptr (ptr Eq_30) Eq_31))
  Class: Eq_31
  DataType: (memptr (ptr Eq_30) Eq_31)
  OrigDataType: (memptr T_30 (struct 0008 (1D1 T_38 t01D1) (1D3 T_34 t01D3)))
T_32: (in 0x01D3 : word16)
  Class: Eq_32
  DataType: word16
  OrigDataType: word16
T_33: (in bp_41 + 0x01D3 : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_34: (in Mem0[ss:bp_41 + 0x01D3:word16] : word16)
  Class: Eq_34
  DataType: word16
  OrigDataType: word16
T_35: (in SEQ(0xA000, Mem0[ss:bp_41 + 0x01D3:word16]) : ptr32)
  Class: Eq_35
  DataType: ptr32
  OrigDataType: ptr32
T_36: (in 0x01D1 : word16)
  Class: Eq_36
  DataType: word16
  OrigDataType: word16
T_37: (in bp_41 + 0x01D1 : word16)
  Class: Eq_37
  DataType: word16
  OrigDataType: word16
T_38: (in Mem0[ss:bp_41 + 0x01D1:word16] : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_39: (in (word32) (ss->*bp_41).w01D1 : word32)
  Class: Eq_39
  DataType: ui32
  OrigDataType: ui32
T_40: (in 0x0140 : word16)
  Class: Eq_40
  DataType: ui16
  OrigDataType: ui16
T_41: (in (word32) (ss->*bp_41).w01D1 * 0x0140 : word32)
  Class: Eq_41
  DataType: ui32
  OrigDataType: ui32
T_42: (in SEQ(0xA000, Mem0[ss:bp_41 + 0x01D3:word16])[(word32) (ss->*bp_41).w01D1 * 0x0140] : byte)
  Class: Eq_28
  DataType: byte
  OrigDataType: byte
T_43: (in 0x01D3 : word16)
  Class: Eq_43
  DataType: word16
  OrigDataType: word16
T_44: (in bp_41 + 0x01D3 : word16)
  Class: Eq_44
  DataType: word16
  OrigDataType: word16
T_45: (in Mem49[ss:bp_41 + 0x01D3:word16] : word16)
  Class: Eq_34
  DataType: word16
  OrigDataType: word16
T_46: (in __inb : ptr32)
  Class: Eq_46
  DataType: (ptr Eq_46)
  OrigDataType: (ptr (fn T_48 (T_47)))
T_47: (in 0x40 : byte)
  Class: Eq_47
  DataType: byte
  OrigDataType: byte
T_48: (in __inb(0x40) : byte)
  Class: Eq_48
  DataType: byte
  OrigDataType: byte
T_49: (in 0x03 : byte)
  Class: Eq_49
  DataType: byte
  OrigDataType: byte
T_50: (in __inb(0x40) & 0x03 : byte)
  Class: Eq_50
  DataType: byte
  OrigDataType: byte
T_51: (in 0x01 : byte)
  Class: Eq_51
  DataType: byte
  OrigDataType: byte
T_52: (in (__inb(0x40) & 0x03) - 0x01 : byte)
  Class: Eq_52
  DataType: byte
  OrigDataType: byte
T_53: (in (int16) ((__inb(0x40) & 0x03) - 0x01) : int16)
  Class: Eq_53
  DataType: int16
  OrigDataType: int16
T_54: (in (ss->*bp_41).w01D3 + (int16) ((__inb(0x40) & 0x03) - 0x01) : word16)
  Class: Eq_34
  DataType: word16
  OrigDataType: word16
T_55: (in 0x01D3 : word16)
  Class: Eq_55
  DataType: word16
  OrigDataType: word16
T_56: (in bp_41 + 0x01D3 : word16)
  Class: Eq_56
  DataType: word16
  OrigDataType: word16
T_57: (in Mem55[ss:bp_41 + 0x01D3:word16] : word16)
  Class: Eq_34
  DataType: word16
  OrigDataType: word16
T_58: (in 0x01D1 : word16)
  Class: Eq_58
  DataType: word16
  OrigDataType: word16
T_59: (in bp_41 + 0x01D1 : word16)
  Class: Eq_59
  DataType: word16
  OrigDataType: word16
T_60: (in Mem55[ss:bp_41 + 0x01D1:word16] : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_61: (in __inb : ptr32)
  Class: Eq_61
  DataType: (ptr Eq_61)
  OrigDataType: (ptr (fn T_63 (T_62)))
T_62: (in 0x40 : byte)
  Class: Eq_62
  DataType: byte
  OrigDataType: byte
T_63: (in __inb(0x40) : byte)
  Class: Eq_63
  DataType: byte
  OrigDataType: byte
T_64: (in 0x03 : byte)
  Class: Eq_64
  DataType: byte
  OrigDataType: byte
T_65: (in __inb(0x40) & 0x03 : byte)
  Class: Eq_65
  DataType: byte
  OrigDataType: byte
T_66: (in 0x01 : byte)
  Class: Eq_66
  DataType: byte
  OrigDataType: byte
T_67: (in (__inb(0x40) & 0x03) - 0x01 : byte)
  Class: Eq_67
  DataType: byte
  OrigDataType: byte
T_68: (in (int16) ((__inb(0x40) & 0x03) - 0x01) : int16)
  Class: Eq_68
  DataType: int16
  OrigDataType: int16
T_69: (in (ss->*bp_41).w01D1 + (int16) ((__inb(0x40) & 0x03) - 0x01) : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_70: (in 0x01D1 : word16)
  Class: Eq_70
  DataType: word16
  OrigDataType: word16
T_71: (in bp_41 + 0x01D1 : word16)
  Class: Eq_71
  DataType: word16
  OrigDataType: word16
T_72: (in Mem61[ss:bp_41 + 0x01D1:word16] : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_73: (in 0x0008 : word16)
  Class: Eq_73
  DataType: word16
  OrigDataType: word16
T_74: (in bp_41 - 0x0008 : word16)
  Class: Eq_31
  DataType: (memptr (ptr Eq_30) Eq_31)
  OrigDataType: word16
T_75: (in 0x0000 : word16)
  Class: Eq_31
  DataType: (memptr (ptr Eq_30) Eq_31)
  OrigDataType: word16
T_76: (in bp_41 != &Eq_30::t0000 : bool)
  Class: Eq_76
  DataType: bool
  OrigDataType: bool
T_77: (in si_65 : (memptr (ptr Eq_29) byte))
  Class: Eq_77
  DataType: (memptr (ptr Eq_29) byte)
  OrigDataType: (memptr T_29 (struct 0001 (0 T_83 t0000)))
T_78: (in 0x0000 : word16)
  Class: Eq_77
  DataType: (memptr (ptr Eq_29) byte)
  OrigDataType: word16
T_79: (in 0x0001 : word16)
  Class: Eq_79
  DataType: word16
  OrigDataType: word16
T_80: (in si_65 - 0x0001 : word16)
  Class: Eq_77
  DataType: (memptr (ptr Eq_29) byte)
  OrigDataType: word16
T_81: (in 0x0000 : word16)
  Class: Eq_77
  DataType: (memptr (ptr Eq_29) byte)
  OrigDataType: word16
T_82: (in si_65 != Eq_29::a0000 : bool)
  Class: Eq_82
  DataType: bool
  OrigDataType: bool
T_83: (in al_70 : byte)
  Class: Eq_83
  DataType: byte
  OrigDataType: byte
T_84: (in 0x01 : byte)
  Class: Eq_84
  DataType: byte
  OrigDataType: byte
T_85: (in al_70 - 0x01 : byte)
  Class: Eq_83
  DataType: byte
  OrigDataType: byte
T_86: (in 0x0000 : word16)
  Class: Eq_86
  DataType: word16
  OrigDataType: word16
T_87: (in si_65 + 0x0000 : word16)
  Class: Eq_87
  DataType: word16
  OrigDataType: word16
T_88: (in Mem86[0xA000:si_65 + 0x0000:byte] : byte)
  Class: Eq_83
  DataType: byte
  OrigDataType: byte
T_89: (in 0x0000 : word16)
  Class: Eq_89
  DataType: word16
  OrigDataType: word16
T_90: (in si_65 + 0x0000 : word16)
  Class: Eq_90
  DataType: word16
  OrigDataType: word16
T_91: (in Mem61[0xA000:si_65 + 0x0000:byte] : byte)
  Class: Eq_83
  DataType: byte
  OrigDataType: byte
T_92: (in 0x00 : byte)
  Class: Eq_83
  DataType: byte
  OrigDataType: byte
T_93: (in al_70 == 0x00 : bool)
  Class: Eq_93
  DataType: bool
  OrigDataType: bool
T_94: (in __inb : ptr32)
  Class: Eq_94
  DataType: (ptr Eq_94)
  OrigDataType: (ptr (fn T_96 (T_95)))
T_95: (in 0x60 : byte)
  Class: Eq_95
  DataType: byte
  OrigDataType: byte
T_96: (in __inb(0x60) : byte)
  Class: Eq_96
  DataType: byte
  OrigDataType: byte
T_97: (in 0x01 : byte)
  Class: Eq_97
  DataType: byte
  OrigDataType: byte
T_98: (in __inb(0x60) & 0x01 : byte)
  Class: Eq_98
  DataType: byte
  OrigDataType: byte
T_99: (in 0x00 : byte)
  Class: Eq_98
  DataType: byte
  OrigDataType: byte
T_100: (in (__inb(0x60) & 0x01) == 0x00 : bool)
  Class: Eq_100
  DataType: bool
  OrigDataType: bool
T_101: (in 0x0320 : word16)
  Class: Eq_31
  DataType: (memptr (ptr Eq_30) Eq_31)
  OrigDataType: word16
T_102: (in bios_video_set_mode : ptr32)
  Class: Eq_2
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (fn T_104 (T_103)))
T_103: (in 0x03 : byte)
  Class: Eq_4
  DataType: byte
  OrigDataType: byte
T_104: (in bios_video_set_mode(0x03) : void)
  Class: Eq_6
  DataType: void
  OrigDataType: void
T_105:
  Class: Eq_105
  DataType: Eq_105
  OrigDataType: (struct 0008 (0 T_34 t0000))
T_106:
  Class: Eq_106
  DataType: Eq_106
  OrigDataType: (struct 0008 (0 T_38 t0000))
T_107:
  Class: Eq_107
  DataType: Eq_107
  OrigDataType: (struct 0140 (0 T_42 t0000))
T_108:
  Class: Eq_105
  DataType: Eq_105
  OrigDataType: (struct 0008 (0 T_45 t0000))
T_109:
  Class: Eq_105
  DataType: Eq_105
  OrigDataType: (struct 0008 (0 T_57 t0000))
T_110:
  Class: Eq_106
  DataType: Eq_106
  OrigDataType: (struct 0008 (0 T_60 t0000))
T_111:
  Class: Eq_106
  DataType: Eq_106
  OrigDataType: (struct 0008 (0 T_72 t0000))
T_112:
  Class: Eq_107
  DataType: Eq_107
  OrigDataType: (struct 0001 (0 T_88 t0000))
T_113:
  Class: Eq_107
  DataType: Eq_107
  OrigDataType: (struct 0001 (0 T_91 t0000))
T_114:
  Class: Eq_114
  DataType: Eq_114
  OrigDataType: 
*/
typedef Eq_29 Eq_1struct Globals {
	Eq_29 * ptrFFFA0000;	// FFFA0000
} Eq_1;

typedef void (Eq_2)(byte);

typedef void (Eq_7)(word16, byte);

typedef void (Eq_11)(word16, byte);

typedef void (Eq_15)(word16, byte);

typedef void (Eq_19)(word16, byte);

typedef Eq_107 Eq_29[1]struct Eq_29 {
	Eq_107 a0000[1];	// 0
} Eq_29;

typedef Eq_31 Eq_30Eq_106 Eq_30[101]Eq_31struct Eq_30 {
	Eq_31 t0000;	// 0
	Eq_106 a01D1[101];	// 1D1
	Eq_31 t0320;	// 320
} Eq_30;

typedef struct Eq_31 {	// size: 8 8
	word16 w01D1;	// 1D1
	word16 w01D3;	// 1D3
} Eq_31;

typedef byte (Eq_46)(byte);

typedef byte (Eq_61)(byte);

typedef byte (Eq_94)(byte);

typedef struct Eq_105 {	// size: 8 8
	word16 w0002;	// 2
} Eq_105;

typedef struct Eq_106 {	// size: 8 8
	word16 w0000;	// 0
	word16 w0002;	// 2
} Eq_106;

typedef union Eq_107 {
	byte u0;
	Eq_114 u1;
} Eq_107;

typedef struct Eq_114 {	// size: 320 140
	byte b0000;	// 0
} Eq_114;

