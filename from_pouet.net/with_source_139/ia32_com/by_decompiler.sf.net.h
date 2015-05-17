// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_139/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
	T_129 (in bios_video_set_mode : ptr32)
Eq_9: (union "Eq_9" (int16 u0) (byte u1))
	T_9 (in al_16 : Eq_9)
	T_10 (in 0x13 : byte)
	T_25 (in -(cl >> 0x02) : byte)
Eq_11: (fn void (word16, Eq_9))
	T_11 (in __outb : ptr32)
Eq_14: (fn void (word16, Eq_9))
	T_14 (in __outb : ptr32)
Eq_17: (fn void (word16, byte))
	T_17 (in __outb : ptr32)
Eq_33: (struct "Eq_33" (0 Eq_42 t0000) (280 (arr word32) a0280))
	T_33 (in ax_25 : (ptr Eq_33))
	T_35 (in DPB(ax_10, 0xA0, 8, 8) : word16)
	T_36 (in ax_118 : (ptr Eq_33))
	T_38 (in bp : (ptr Eq_33))
	T_69 (in DPB(ax_62, al_75, 0, 8) : word16)
	T_112 (in DPB(ax_118, bios_kbd_check_keystroke(out al_116), 8, 8) : word16)
Eq_42: (struct "Eq_42" 0001 (0 Eq_48 t0000))
	T_42 (in si_47 : (memptr (ptr Eq_33) Eq_42))
	T_44 (in si_47 + 0x0001 : word16)
	T_65 (in di_51 : (memptr (ptr Eq_33) Eq_42))
	T_71 (in di_51 + 0x0001 : word16)
	T_80 (in bx : (memptr (ptr Eq_33) Eq_42))
	T_82 (in bx + 0x0140 : word16)
	T_101 (in bx - di_107 : word16)
	T_113 (in 0x0000 : word16)
Eq_48: (union "Eq_48" (byte u0) (word16 u1))
	T_48 (in Mem0[ax_25:si_47 + 0x0000:byte] : byte)
	T_51 (in Mem0[ax_25:si_47 + 0x0000:byte] : byte)
	T_59 (in al_75 : Eq_48)
	T_64 (in al_72 - 0x08 - (al_72 <u 0x00) : word16)
	T_68 (in Mem79[ax_25:di_51 + 0x0000:byte] : byte)
Eq_85: (fn byte (word16))
	T_85 (in __inb : ptr32)
Eq_92: (fn byte (word16))
	T_92 (in __inb : ptr32)
Eq_99: (struct "Eq_99" 0001 (0 word32 dw0000))
	T_99 (in di_107 : (memptr (ptr Eq_33) Eq_99))
	T_100 (in di_51 - bx : word16)
	T_124 (in di_107 + 0x0004 : word16)
Eq_107: (fn byte ((ptr byte)))
	T_107 (in bios_kbd_check_keystroke : ptr32)
	T_108 (in signature of bios_kbd_check_keystroke : void)
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
T_7: (in ax_10 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_8: (in 0x0013 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_9: (in al_16 : Eq_9)
  Class: Eq_9
  DataType: Eq_9
  OrigDataType: (union (int16 u0) (byte u1))
T_10: (in 0x13 : byte)
  Class: Eq_9
  DataType: byte
  OrigDataType: byte
T_11: (in __outb : ptr32)
  Class: Eq_11
  DataType: (ptr Eq_11)
  OrigDataType: (ptr (fn T_13 (T_12, T_9)))
T_12: (in 0x03C9 : word16)
  Class: Eq_12
  DataType: word16
  OrigDataType: word16
T_13: (in __outb(0x03C9, al_16) : void)
  Class: Eq_13
  DataType: void
  OrigDataType: void
T_14: (in __outb : ptr32)
  Class: Eq_14
  DataType: (ptr Eq_14)
  OrigDataType: (ptr (fn T_16 (T_15, T_9)))
T_15: (in 0x03C9 : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_16: (in __outb(0x03C9, al_16) : void)
  Class: Eq_16
  DataType: void
  OrigDataType: void
T_17: (in __outb : ptr32)
  Class: Eq_17
  DataType: (ptr Eq_17)
  OrigDataType: (ptr (fn T_21 (T_18, T_20)))
T_18: (in 0x03C9 : word16)
  Class: Eq_18
  DataType: word16
  OrigDataType: word16
T_19: (in 0x15 : byte)
  Class: Eq_19
  DataType: byte
  OrigDataType: byte
T_20: (in al_16 + 0x15 : byte)
  Class: Eq_20
  DataType: byte
  OrigDataType: byte
T_21: (in __outb(0x03C9, al_16 + 0x15) : void)
  Class: Eq_21
  DataType: void
  OrigDataType: void
T_22: (in cl : byte)
  Class: Eq_22
  DataType: int8
  OrigDataType: int8
T_23: (in 0x02 : byte)
  Class: Eq_23
  DataType: uint8
  OrigDataType: uint8
T_24: (in cl >> 0x02 : word16)
  Class: Eq_24
  DataType: int16
  OrigDataType: int16
T_25: (in -(cl >> 0x02) : byte)
  Class: Eq_9
  DataType: Eq_9
  OrigDataType: int16
T_26: (in cx : word16)
  Class: Eq_26
  DataType: word16
  OrigDataType: word16
T_27: (in 0x0001 : word16)
  Class: Eq_27
  DataType: word16
  OrigDataType: word16
T_28: (in cx - 0x0001 : word16)
  Class: Eq_26
  DataType: word16
  OrigDataType: word16
T_29: (in DPB(ax_10, al_16, 0, 8) : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_30: (in (byte) cx : byte)
  Class: Eq_22
  DataType: int8
  OrigDataType: byte
T_31: (in 0x0000 : word16)
  Class: Eq_26
  DataType: word16
  OrigDataType: word16
T_32: (in cx != 0x0000 : bool)
  Class: Eq_32
  DataType: bool
  OrigDataType: bool
T_33: (in ax_25 : (ptr Eq_33))
  Class: Eq_33
  DataType: (ptr Eq_33)
  OrigDataType: (ptr (struct (280 (arr T_132) a0280)))
T_34: (in 0xA0 : byte)
  Class: Eq_34
  DataType: byte
  OrigDataType: byte
T_35: (in DPB(ax_10, 0xA0, 8, 8) : word16)
  Class: Eq_33
  DataType: (ptr Eq_33)
  OrigDataType: word16
T_36: (in ax_118 : (ptr Eq_33))
  Class: Eq_33
  DataType: (ptr Eq_33)
  OrigDataType: word16
T_37: (in ax_62 : uint16)
  Class: Eq_37
  DataType: uint16
  OrigDataType: uint16
T_38: (in bp : (ptr Eq_33))
  Class: Eq_33
  DataType: (ptr Eq_33)
  OrigDataType: uint16
T_39: (in 0x8405 : word16)
  Class: Eq_39
  DataType: uint16
  OrigDataType: uint16
T_40: (in bp *u 0x8405 : uint32)
  Class: Eq_40
  DataType: uint32
  OrigDataType: uint32
T_41: (in (word16) (bp *u 0x8405) : word16)
  Class: Eq_37
  DataType: uint16
  OrigDataType: word16
T_42: (in si_47 : (memptr (ptr Eq_33) Eq_42))
  Class: Eq_42
  DataType: (memptr (ptr Eq_33) Eq_42)
  OrigDataType: (memptr T_33 (struct 0001 (0 T_48 t0000)))
T_43: (in 0x0001 : word16)
  Class: Eq_43
  DataType: word16
  OrigDataType: word16
T_44: (in si_47 + 0x0001 : word16)
  Class: Eq_42
  DataType: (memptr (ptr Eq_33) Eq_42)
  OrigDataType: word16
T_45: (in al_72 : byte)
  Class: Eq_45
  DataType: bcu8
  OrigDataType: bcu8
T_46: (in 0x0000 : word16)
  Class: Eq_46
  DataType: word16
  OrigDataType: word16
T_47: (in si_47 + 0x0000 : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_48: (in Mem0[ax_25:si_47 + 0x0000:byte] : byte)
  Class: Eq_48
  DataType: Eq_48
  OrigDataType: byte
T_49: (in 0x0000 : word16)
  Class: Eq_49
  DataType: word16
  OrigDataType: word16
T_50: (in si_47 + 0x0000 : word16)
  Class: Eq_50
  DataType: word16
  OrigDataType: word16
T_51: (in Mem0[ax_25:si_47 + 0x0000:byte] : byte)
  Class: Eq_48
  DataType: Eq_48
  OrigDataType: byte
T_52: (in Mem0[ax_25:si_47 + 0x0000:byte] + Mem0[ax_25:si_47 + 0x0000:byte] : byte)
  Class: Eq_52
  DataType: uint8
  OrigDataType: uint8
T_53: (in 0x01 : byte)
  Class: Eq_53
  DataType: uint8
  OrigDataType: uint8
T_54: (in Mem0[ax_25:si_47 + 0x0000:byte] + Mem0[ax_25:si_47 + 0x0000:byte] >>u 0x01 : word16)
  Class: Eq_54
  DataType: uint16
  OrigDataType: uint16
T_55: (in 0x0012 : word16)
  Class: Eq_55
  DataType: uint16
  OrigDataType: uint16
T_56: (in ax_62 *u 0x0012 : uint32)
  Class: Eq_56
  DataType: uint32
  OrigDataType: uint32
T_57: (in SLICE(ax_62 *u 0x0012, byte, 16) : byte)
  Class: Eq_57
  DataType: byte
  OrigDataType: byte
T_58: (in (Mem0[ax_25:si_47 + 0x0000:byte] + Mem0[ax_25:si_47 + 0x0000:byte] >>u 0x01) + SLICE(ax_62 *u 0x0012, byte, 16) : byte)
  Class: Eq_45
  DataType: bcu8
  OrigDataType: byte
T_59: (in al_75 : Eq_48)
  Class: Eq_48
  DataType: Eq_48
  OrigDataType: byte
T_60: (in 0x08 : byte)
  Class: Eq_60
  DataType: byte
  OrigDataType: byte
T_61: (in al_72 - 0x08 : word16)
  Class: Eq_61
  DataType: word16
  OrigDataType: word16
T_62: (in 0x00 : byte)
  Class: Eq_45
  DataType: bcu8
  OrigDataType: bcu8
T_63: (in al_72 <u 0x00 : bool)
  Class: Eq_63
  DataType: bool
  OrigDataType: bool
T_64: (in al_72 - 0x08 - (al_72 <u 0x00) : word16)
  Class: Eq_48
  DataType: Eq_48
  OrigDataType: word16
T_65: (in di_51 : (memptr (ptr Eq_33) Eq_42))
  Class: Eq_42
  DataType: (memptr (ptr Eq_33) Eq_42)
  OrigDataType: (memptr T_33 (struct 0001 (0 T_68 t0000)))
T_66: (in 0x0000 : word16)
  Class: Eq_66
  DataType: word16
  OrigDataType: word16
T_67: (in di_51 + 0x0000 : word16)
  Class: Eq_67
  DataType: word16
  OrigDataType: word16
T_68: (in Mem79[ax_25:di_51 + 0x0000:byte] : byte)
  Class: Eq_48
  DataType: Eq_48
  OrigDataType: byte
T_69: (in DPB(ax_62, al_75, 0, 8) : word16)
  Class: Eq_33
  DataType: (ptr Eq_33)
  OrigDataType: word16
T_70: (in 0x0001 : word16)
  Class: Eq_70
  DataType: word16
  OrigDataType: word16
T_71: (in di_51 + 0x0001 : word16)
  Class: Eq_42
  DataType: (memptr (ptr Eq_33) Eq_42)
  OrigDataType: word16
T_72: (in cx_45 : word16)
  Class: Eq_72
  DataType: word16
  OrigDataType: word16
T_73: (in 0x0001 : word16)
  Class: Eq_73
  DataType: word16
  OrigDataType: word16
T_74: (in cx_45 - 0x0001 : word16)
  Class: Eq_72
  DataType: word16
  OrigDataType: word16
T_75: (in 0x0000 : word16)
  Class: Eq_72
  DataType: word16
  OrigDataType: word16
T_76: (in cx_45 != 0x0000 : bool)
  Class: Eq_76
  DataType: bool
  OrigDataType: bool
T_77: (in bh_49 : byte)
  Class: Eq_77
  DataType: byte
  OrigDataType: byte
T_78: (in 0xFA : byte)
  Class: Eq_77
  DataType: byte
  OrigDataType: byte
T_79: (in bh_49 != 0xFA : bool)
  Class: Eq_79
  DataType: bool
  OrigDataType: bool
T_80: (in bx : (memptr (ptr Eq_33) Eq_42))
  Class: Eq_42
  DataType: (memptr (ptr Eq_33) Eq_42)
  OrigDataType: word16
T_81: (in 0x0140 : word16)
  Class: Eq_81
  DataType: word16
  OrigDataType: word16
T_82: (in bx + 0x0140 : word16)
  Class: Eq_42
  DataType: (memptr (ptr Eq_33) Eq_42)
  OrigDataType: word16
T_83: (in 0x0140 : word16)
  Class: Eq_72
  DataType: word16
  OrigDataType: word16
T_84: (in SLICE(bx, byte, 8) : byte)
  Class: Eq_77
  DataType: byte
  OrigDataType: byte
T_85: (in __inb : ptr32)
  Class: Eq_85
  DataType: (ptr Eq_85)
  OrigDataType: (ptr (fn T_87 (T_86)))
T_86: (in 0x03DA : word16)
  Class: Eq_86
  DataType: word16
  OrigDataType: word16
T_87: (in __inb(0x03DA) : byte)
  Class: Eq_87
  DataType: byte
  OrigDataType: byte
T_88: (in 0x08 : byte)
  Class: Eq_88
  DataType: byte
  OrigDataType: byte
T_89: (in __inb(0x03DA) & 0x08 : byte)
  Class: Eq_89
  DataType: byte
  OrigDataType: byte
T_90: (in 0x00 : byte)
  Class: Eq_89
  DataType: byte
  OrigDataType: byte
T_91: (in (__inb(0x03DA) & 0x08) == 0x00 : bool)
  Class: Eq_91
  DataType: bool
  OrigDataType: bool
T_92: (in __inb : ptr32)
  Class: Eq_92
  DataType: (ptr Eq_92)
  OrigDataType: (ptr (fn T_94 (T_93)))
T_93: (in 0x03DA : word16)
  Class: Eq_93
  DataType: word16
  OrigDataType: word16
T_94: (in __inb(0x03DA) : byte)
  Class: Eq_94
  DataType: byte
  OrigDataType: byte
T_95: (in 0x08 : byte)
  Class: Eq_95
  DataType: byte
  OrigDataType: byte
T_96: (in __inb(0x03DA) & 0x08 : byte)
  Class: Eq_96
  DataType: byte
  OrigDataType: byte
T_97: (in 0x00 : byte)
  Class: Eq_96
  DataType: byte
  OrigDataType: byte
T_98: (in (__inb(0x03DA) & 0x08) != 0x00 : bool)
  Class: Eq_98
  DataType: bool
  OrigDataType: bool
T_99: (in di_107 : (memptr (ptr Eq_33) Eq_99))
  Class: Eq_99
  DataType: (memptr (ptr Eq_33) Eq_99)
  OrigDataType: (memptr T_33 (struct 0001 (0 T_120 t0000)))
T_100: (in di_51 - bx : word16)
  Class: Eq_99
  DataType: (memptr (ptr Eq_33) Eq_99)
  OrigDataType: word16
T_101: (in bx - di_107 : word16)
  Class: Eq_42
  DataType: (memptr (ptr Eq_33) Eq_42)
  OrigDataType: word16
T_102: (in si_103 : (memptr (ptr Eq_33) word32))
  Class: Eq_102
  DataType: (memptr (ptr Eq_33) word32)
  OrigDataType: (memptr T_33 (struct 0004 (0 T_117 t0000)))
T_103: (in 0x0280 : word16)
  Class: Eq_102
  DataType: (memptr (ptr Eq_33) word32)
  OrigDataType: word16
T_104: (in cx_104 : word16)
  Class: Eq_104
  DataType: word16
  OrigDataType: word16
T_105: (in 0x3E30 : word16)
  Class: Eq_104
  DataType: word16
  OrigDataType: word16
T_106: (in al_116 : byte)
  Class: Eq_106
  DataType: byte
  OrigDataType: byte
T_107: (in bios_kbd_check_keystroke : ptr32)
  Class: Eq_107
  DataType: (ptr Eq_107)
  OrigDataType: (ptr (fn T_111 (T_110)))
T_108: (in signature of bios_kbd_check_keystroke : void)
  Class: Eq_107
  DataType: (ptr Eq_107)
  OrigDataType: 
T_109: (in alOut : ptr16)
  Class: Eq_109
  DataType: (ptr byte)
  OrigDataType: ptr16
T_110: (in out al_116 : ptr16)
  Class: Eq_109
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_111: (in bios_kbd_check_keystroke(out al_116) : byte)
  Class: Eq_111
  DataType: byte
  OrigDataType: byte
T_112: (in DPB(ax_118, bios_kbd_check_keystroke(out al_116), 8, 8) : word16)
  Class: Eq_33
  DataType: (ptr Eq_33)
  OrigDataType: word16
T_113: (in 0x0000 : word16)
  Class: Eq_42
  DataType: (memptr (ptr Eq_33) Eq_42)
  OrigDataType: word16
T_114: (in bx == &Eq_33::t0000 : bool)
  Class: Eq_114
  DataType: bool
  OrigDataType: bool
T_115: (in 0x0000 : word16)
  Class: Eq_115
  DataType: word16
  OrigDataType: word16
T_116: (in si_103 + 0x0000 : word16)
  Class: Eq_116
  DataType: word16
  OrigDataType: word16
T_117: (in Mem79[ax_25:si_103 + 0x0000:word32] : word32)
  Class: Eq_117
  DataType: word32
  OrigDataType: word32
T_118: (in 0x0000 : word16)
  Class: Eq_118
  DataType: word16
  OrigDataType: word16
T_119: (in di_107 + 0x0000 : word16)
  Class: Eq_119
  DataType: word16
  OrigDataType: word16
T_120: (in Mem111[ax_25:di_107 + 0x0000:word32] : word32)
  Class: Eq_117
  DataType: word32
  OrigDataType: word32
T_121: (in 0x0004 : word16)
  Class: Eq_121
  DataType: word16
  OrigDataType: word16
T_122: (in si_103 + 0x0004 : word16)
  Class: Eq_102
  DataType: (memptr (ptr Eq_33) word32)
  OrigDataType: word16
T_123: (in 0x0004 : word16)
  Class: Eq_123
  DataType: word16
  OrigDataType: word16
T_124: (in di_107 + 0x0004 : word16)
  Class: Eq_99
  DataType: (memptr (ptr Eq_33) Eq_99)
  OrigDataType: word16
T_125: (in 0x0001 : word16)
  Class: Eq_125
  DataType: word16
  OrigDataType: word16
T_126: (in cx_104 - 0x0001 : word16)
  Class: Eq_104
  DataType: word16
  OrigDataType: word16
T_127: (in 0x0000 : word16)
  Class: Eq_104
  DataType: word16
  OrigDataType: word16
T_128: (in cx_104 == 0x0000 : bool)
  Class: Eq_128
  DataType: bool
  OrigDataType: bool
T_129: (in bios_video_set_mode : ptr32)
  Class: Eq_2
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (fn T_131 (T_130)))
T_130: (in 0x03 : byte)
  Class: Eq_4
  DataType: byte
  OrigDataType: byte
T_131: (in bios_video_set_mode(0x03) : void)
  Class: Eq_6
  DataType: void
  OrigDataType: void
T_132:
  Class: Eq_132
  DataType: word32
  OrigDataType: (struct 0004 (0 T_117 t0000))
*/
typedef struct Globals {
} Eq_1;

typedef void (Eq_2)(byte);

typedef union Eq_9 {
	int16 u0;
	byte u1;
} Eq_9;

typedef void (Eq_11)(word16, Eq_9);

typedef void (Eq_14)(word16, Eq_9);

typedef void (Eq_17)(word16, byte);

typedef Eq_42 Eq_33 Eq_33[]struct Eq_33 {
	Eq_42 t0000;	// 0
	word32 a0280[];	// 280
} Eq_33;

typedef Eq_48 Eq_42struct Eq_42 {	// size: 1 1
	Eq_48 t0000;	// 0
} Eq_42;

typedef union Eq_48 {
	byte u0;
	word16 u1;
} Eq_48;

typedef byte (Eq_85)(word16);

typedef byte (Eq_92)(word16);

typedef struct Eq_99 {	// size: 1 1
	word32 dw0000;	// 0
} Eq_99;

typedef byte (Eq_107)(byte *);

