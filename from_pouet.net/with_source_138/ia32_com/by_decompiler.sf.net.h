// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_138/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
	T_131 (in bios_video_set_mode : ptr32)
Eq_11: (union (byte u0) (word16 u1))
	T_11 (in 0x0013 : word16)
	T_17 (in Mem14[ax_4 * 0x0002:di + 0x0000:word16] : word16)
	T_79 (in Mem14[ax_4 * 0x0002:di + 0x0000:byte] : byte)
	T_91 (in (byte) ((bx_69 >>u 0x0002) - (bx_69 >>u 0x0009)) : byte)
	T_95 (in Mem77[ax_4 * 0x0002:di + 0x0000:byte] : byte)
	T_119 (in Mem77[ax_4 * 0x0002:si_45 + 0x0000:byte] : byte)
	T_122 (in Mem87[ax_4:di + 0x0000:byte] : byte)
Eq_14: (struct 0001 (FFFFFEBE byte bFFFFFEBE) (FFFFFFFE byte bFFFFFFFE) (0 Eq_11 t0000) (13E byte b013E))
	T_14 (in di : word16)
	T_19 (in di - 0x0001 : word16)
	T_20 (in 0x0000 : word16)
	T_49 (in si_45 : word16)
	T_51 (in si_45 + 0x0001 : word16)
	T_98 (in di + 0x0001 : word16)
	T_124 (in si_45 + 0x0001 : word16)
	T_126 (in di + 0x0001 : word16)
Eq_22: (fn void (word16, byte))
	T_22 (in __outb : ptr32)
Eq_26: (fn void (word16, byte))
	T_26 (in __outb : ptr32)
Eq_30: (union (uint16 u0) (byte u1))
	T_30 (in al_25 : byte)
	T_33 (in bl >>u 0x02 : word16)
Eq_34: (fn void (word16, Eq_30))
	T_34 (in __outb : ptr32)
Eq_107: (fn byte (byte))
	T_107 (in __inb : ptr32)
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
T_7: (in ax_4 : word16)
  Class: Eq_7
  DataType: ui16
  OrigDataType: ui16
T_8: (in ax : word16)
  Class: Eq_8
  DataType: word16
  OrigDataType: word16
T_9: (in 0xA0 : byte)
  Class: Eq_9
  DataType: byte
  OrigDataType: byte
T_10: (in DPB(ax, 0xA0, 8, 8) : word16)
  Class: Eq_7
  DataType: ui16
  OrigDataType: word16
T_11: (in 0x0013 : word16)
  Class: Eq_11
  DataType: Eq_11
  OrigDataType: word16
T_12: (in 0x0002 : word16)
  Class: Eq_12
  DataType: ui16
  OrigDataType: ui16
T_13: (in ax_4 * 0x0002 : word16)
  Class: Eq_7
  DataType: ui16
  OrigDataType: ui16
T_14: (in di : word16)
  Class: Eq_14
  DataType: (memptr ui16 Eq_14)
  OrigDataType: (memptr T_7 (struct 0001 (0 T_11 t0000)))
T_15: (in 0x0000 : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_16: (in di + 0x0000 : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_17: (in Mem14[ax_4 * 0x0002:di + 0x0000:word16] : word16)
  Class: Eq_11
  DataType: Eq_11
  OrigDataType: word16
T_18: (in 0x0001 : word16)
  Class: Eq_18
  DataType: word16
  OrigDataType: word16
T_19: (in di - 0x0001 : word16)
  Class: Eq_14
  DataType: (memptr ui16 Eq_14)
  OrigDataType: word16
T_20: (in 0x0000 : word16)
  Class: Eq_14
  DataType: (memptr ui16 Eq_14)
  OrigDataType: word16
T_21: (in di != 0x0000 : bool)
  Class: Eq_21
  DataType: bool
  OrigDataType: bool
T_22: (in __outb : ptr32)
  Class: Eq_22
  DataType: (ptr Eq_22)
  OrigDataType: (ptr (fn T_25 (T_23, T_24)))
T_23: (in 0x03C9 : word16)
  Class: Eq_23
  DataType: word16
  OrigDataType: word16
T_24: (in 0x00 : byte)
  Class: Eq_24
  DataType: byte
  OrigDataType: byte
T_25: (in __outb(0x03C9, 0x00) : void)
  Class: Eq_25
  DataType: void
  OrigDataType: void
T_26: (in __outb : ptr32)
  Class: Eq_26
  DataType: (ptr Eq_26)
  OrigDataType: (ptr (fn T_29 (T_27, T_28)))
T_27: (in 0x03C9 : word16)
  Class: Eq_27
  DataType: word16
  OrigDataType: word16
T_28: (in 0x00 : byte)
  Class: Eq_28
  DataType: byte
  OrigDataType: byte
T_29: (in __outb(0x03C9, 0x00) : void)
  Class: Eq_29
  DataType: void
  OrigDataType: void
T_30: (in al_25 : byte)
  Class: Eq_30
  DataType: Eq_30
  OrigDataType: byte
T_31: (in bl : byte)
  Class: Eq_31
  DataType: uint8
  OrigDataType: uint8
T_32: (in 0x02 : byte)
  Class: Eq_32
  DataType: uint8
  OrigDataType: uint8
T_33: (in bl >>u 0x02 : word16)
  Class: Eq_30
  DataType: Eq_30
  OrigDataType: uint16
T_34: (in __outb : ptr32)
  Class: Eq_34
  DataType: (ptr Eq_34)
  OrigDataType: (ptr (fn T_36 (T_35, T_30)))
T_35: (in 0x03C9 : word16)
  Class: Eq_35
  DataType: word16
  OrigDataType: word16
T_36: (in __outb(0x03C9, al_25) : void)
  Class: Eq_36
  DataType: void
  OrigDataType: void
T_37: (in bx : word16)
  Class: Eq_37
  DataType: word16
  OrigDataType: word16
T_38: (in 0x0001 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_39: (in bx + 0x0001 : word16)
  Class: Eq_37
  DataType: word16
  OrigDataType: word16
T_40: (in ax_26 : word16)
  Class: Eq_40
  DataType: uint16
  OrigDataType: uint16
T_41: (in (word16) al_25 : word16)
  Class: Eq_40
  DataType: uint16
  OrigDataType: word16
T_42: (in (byte) bx : byte)
  Class: Eq_31
  DataType: uint8
  OrigDataType: byte
T_43: (in 0x0000 : word16)
  Class: Eq_37
  DataType: word16
  OrigDataType: word16
T_44: (in bx != 0x0000 : bool)
  Class: Eq_44
  DataType: bool
  OrigDataType: bool
T_45: (in bx_40 : word16)
  Class: Eq_45
  DataType: word16
  OrigDataType: word16
T_46: (in 0x0000 : word16)
  Class: Eq_45
  DataType: word16
  OrigDataType: word16
T_47: (in dx_44 : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_48: (in 0x0003 : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_49: (in si_45 : word16)
  Class: Eq_14
  DataType: (memptr ui16 Eq_14)
  OrigDataType: (memptr T_53 (struct 0001 (FFFFFEBE T_61 tFFFFFEBE) (FFFFFFFE T_56 tFFFFFFFE) (0 T_119 t0000) (13E T_67 t013E)))
T_50: (in 0x0001 : word16)
  Class: Eq_50
  DataType: word16
  OrigDataType: word16
T_51: (in si_45 + 0x0001 : word16)
  Class: Eq_14
  DataType: (memptr ui16 Eq_14)
  OrigDataType: word16
T_52: (in ax_97 : word16)
  Class: Eq_40
  DataType: uint16
  OrigDataType: word16
T_53: (in ax_4 * 0x0002 : word16)
  Class: Eq_7
  DataType: ui16
  OrigDataType: ui16
T_54: (in 0x0002 : word16)
  Class: Eq_54
  DataType: word16
  OrigDataType: word16
T_55: (in si_45 - 0x0002 : word16)
  Class: Eq_55
  DataType: word16
  OrigDataType: word16
T_56: (in Mem14[ax_4 * 0x0002:si_45 - 0x0002:byte] : byte)
  Class: Eq_56
  DataType: byte
  OrigDataType: byte
T_57: (in DPB(ax_97, Mem14[ax_4 * 0x0002:si_45 - 0x0002:byte], 0, 8) : word16)
  Class: Eq_40
  DataType: uint16
  OrigDataType: word16
T_58: (in ax_4 * 0x0002 : word16)
  Class: Eq_7
  DataType: ui16
  OrigDataType: ui16
T_59: (in 0x0142 : word16)
  Class: Eq_59
  DataType: word16
  OrigDataType: word16
T_60: (in si_45 - 0x0142 : word16)
  Class: Eq_60
  DataType: word16
  OrigDataType: word16
T_61: (in Mem14[ax_4 * 0x0002:si_45 - 0x0142:byte] : byte)
  Class: Eq_61
  DataType: byte
  OrigDataType: byte
T_62: (in DPB(ax_97, Mem14[ax_4 * 0x0002:si_45 - 0x0142:byte], 0, 8) : word16)
  Class: Eq_62
  DataType: word16
  OrigDataType: word16
T_63: (in bx_40 + DPB(ax_97, Mem14[ax_4 * 0x0002:si_45 - 0x0142:byte], 0, 8) : word16)
  Class: Eq_63
  DataType: word16
  OrigDataType: word16
T_64: (in ax_4 * 0x0002 : word16)
  Class: Eq_7
  DataType: ui16
  OrigDataType: ui16
T_65: (in 0x013E : word16)
  Class: Eq_65
  DataType: word16
  OrigDataType: word16
T_66: (in si_45 + 0x013E : word16)
  Class: Eq_66
  DataType: word16
  OrigDataType: word16
T_67: (in Mem14[ax_4 * 0x0002:si_45 + 0x013E:byte] : byte)
  Class: Eq_67
  DataType: byte
  OrigDataType: byte
T_68: (in DPB(ax_97, Mem14[ax_4 * 0x0002:si_45 + 0x013E:byte], 0, 8) : word16)
  Class: Eq_68
  DataType: word16
  OrigDataType: word16
T_69: (in bx_40 + DPB(ax_97, Mem14[ax_4 * 0x0002:si_45 - 0x0142:byte], 0, 8) + DPB(ax_97, Mem14[ax_4 * 0x0002:si_45 + 0x013E:byte], 0, 8) : word16)
  Class: Eq_69
  DataType: word16
  OrigDataType: word16
T_70: (in bx_40 + DPB(ax_97, Mem14[ax_4 * 0x0002:si_45 - 0x0142:byte], 0, 8) + DPB(ax_97, Mem14[ax_4 * 0x0002:si_45 + 0x013E:byte], 0, 8) + ax_26 : word16)
  Class: Eq_45
  DataType: word16
  OrigDataType: word16
T_71: (in 0x0001 : word16)
  Class: Eq_71
  DataType: word16
  OrigDataType: word16
T_72: (in dx_44 - 0x0001 : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_73: (in 0x0000 : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_74: (in dx_44 != 0x0000 : bool)
  Class: Eq_74
  DataType: bool
  OrigDataType: bool
T_75: (in ax_66 : word16)
  Class: Eq_75
  DataType: word16
  OrigDataType: word16
T_76: (in ax_4 * 0x0002 : word16)
  Class: Eq_7
  DataType: ui16
  OrigDataType: ui16
T_77: (in 0x0000 : word16)
  Class: Eq_77
  DataType: word16
  OrigDataType: word16
T_78: (in di + 0x0000 : word16)
  Class: Eq_78
  DataType: word16
  OrigDataType: word16
T_79: (in Mem14[ax_4 * 0x0002:di + 0x0000:byte] : byte)
  Class: Eq_11
  DataType: Eq_11
  OrigDataType: byte
T_80: (in DPB(ax_97, Mem14[ax_4 * 0x0002:di + 0x0000:byte], 0, 8) : word16)
  Class: Eq_75
  DataType: word16
  OrigDataType: word16
T_81: (in bx_69 : word16)
  Class: Eq_81
  DataType: uint16
  OrigDataType: uint16
T_82: (in bx_40 - ax_66 : word16)
  Class: Eq_82
  DataType: word16
  OrigDataType: word16
T_83: (in 0x0002 : word16)
  Class: Eq_83
  DataType: word16
  OrigDataType: word16
T_84: (in ax_66 << 0x0002 : word16)
  Class: Eq_84
  DataType: ui16
  OrigDataType: ui16
T_85: (in bx_40 - ax_66 - (ax_66 << 0x0002) : word16)
  Class: Eq_81
  DataType: uint16
  OrigDataType: word16
T_86: (in 0x0002 : word16)
  Class: Eq_86
  DataType: uint16
  OrigDataType: uint16
T_87: (in bx_69 >>u 0x0002 : word16)
  Class: Eq_87
  DataType: uint16
  OrigDataType: uint16
T_88: (in 0x0009 : word16)
  Class: Eq_88
  DataType: uint16
  OrigDataType: uint16
T_89: (in bx_69 >>u 0x0009 : word16)
  Class: Eq_89
  DataType: uint16
  OrigDataType: uint16
T_90: (in (bx_69 >>u 0x0002) - (bx_69 >>u 0x0009) : word16)
  Class: Eq_90
  DataType: word16
  OrigDataType: word16
T_91: (in (byte) ((bx_69 >>u 0x0002) - (bx_69 >>u 0x0009)) : byte)
  Class: Eq_11
  DataType: Eq_11
  OrigDataType: byte
T_92: (in ax_4 * 0x0002 : word16)
  Class: Eq_7
  DataType: ui16
  OrigDataType: ui16
T_93: (in 0x0000 : word16)
  Class: Eq_93
  DataType: word16
  OrigDataType: word16
T_94: (in di + 0x0000 : word16)
  Class: Eq_94
  DataType: word16
  OrigDataType: word16
T_95: (in Mem77[ax_4 * 0x0002:di + 0x0000:byte] : byte)
  Class: Eq_11
  DataType: Eq_11
  OrigDataType: byte
T_96: (in bx_69 >>u 0x0009 : word16)
  Class: Eq_40
  DataType: uint16
  OrigDataType: uint16
T_97: (in 0x0001 : word16)
  Class: Eq_97
  DataType: word16
  OrigDataType: word16
T_98: (in di + 0x0001 : word16)
  Class: Eq_14
  DataType: (memptr ui16 Eq_14)
  OrigDataType: word16
T_99: (in cx : word16)
  Class: Eq_99
  DataType: word16
  OrigDataType: word16
T_100: (in 0x0001 : word16)
  Class: Eq_100
  DataType: word16
  OrigDataType: word16
T_101: (in cx - 0x0001 : word16)
  Class: Eq_99
  DataType: word16
  OrigDataType: word16
T_102: (in 0x0000 : word16)
  Class: Eq_99
  DataType: word16
  OrigDataType: word16
T_103: (in cx != 0x0000 : bool)
  Class: Eq_103
  DataType: bool
  OrigDataType: bool
T_104: (in 0x0001 : word16)
  Class: Eq_104
  DataType: word16
  OrigDataType: word16
T_105: (in cx - 0x0001 : word16)
  Class: Eq_99
  DataType: word16
  OrigDataType: word16
T_106: (in al_91 : byte)
  Class: Eq_106
  DataType: byte
  OrigDataType: byte
T_107: (in __inb : ptr32)
  Class: Eq_107
  DataType: (ptr Eq_107)
  OrigDataType: (ptr (fn T_109 (T_108)))
T_108: (in 0x60 : byte)
  Class: Eq_108
  DataType: byte
  OrigDataType: byte
T_109: (in __inb(0x60) : byte)
  Class: Eq_106
  DataType: byte
  OrigDataType: byte
T_110: (in bx_69 >>u 0x0009 : word16)
  Class: Eq_110
  DataType: uint16
  OrigDataType: uint16
T_111: (in 0x01 : byte)
  Class: Eq_111
  DataType: byte
  OrigDataType: byte
T_112: (in al_91 - 0x01 : byte)
  Class: Eq_112
  DataType: byte
  OrigDataType: byte
T_113: (in DPB(bx_69 >>u 0x0009, al_91 - 0x01, 0, 8) : word16)
  Class: Eq_40
  DataType: uint16
  OrigDataType: word16
T_114: (in 0x01 : byte)
  Class: Eq_106
  DataType: byte
  OrigDataType: byte
T_115: (in al_91 != 0x01 : bool)
  Class: Eq_115
  DataType: bool
  OrigDataType: bool
T_116: (in ax_4 * 0x0002 : word16)
  Class: Eq_7
  DataType: ui16
  OrigDataType: ui16
T_117: (in 0x0000 : word16)
  Class: Eq_117
  DataType: word16
  OrigDataType: word16
T_118: (in si_45 + 0x0000 : word16)
  Class: Eq_118
  DataType: word16
  OrigDataType: word16
T_119: (in Mem77[ax_4 * 0x0002:si_45 + 0x0000:byte] : byte)
  Class: Eq_11
  DataType: Eq_11
  OrigDataType: byte
T_120: (in 0x0000 : word16)
  Class: Eq_120
  DataType: word16
  OrigDataType: word16
T_121: (in di + 0x0000 : word16)
  Class: Eq_121
  DataType: word16
  OrigDataType: word16
T_122: (in Mem87[ax_4:di + 0x0000:byte] : byte)
  Class: Eq_11
  DataType: Eq_11
  OrigDataType: byte
T_123: (in 0x0001 : word16)
  Class: Eq_123
  DataType: word16
  OrigDataType: word16
T_124: (in si_45 + 0x0001 : word16)
  Class: Eq_14
  DataType: (memptr ui16 Eq_14)
  OrigDataType: word16
T_125: (in 0x0001 : word16)
  Class: Eq_125
  DataType: word16
  OrigDataType: word16
T_126: (in di + 0x0001 : word16)
  Class: Eq_14
  DataType: (memptr ui16 Eq_14)
  OrigDataType: word16
T_127: (in 0x0001 : word16)
  Class: Eq_127
  DataType: word16
  OrigDataType: word16
T_128: (in cx - 0x0001 : word16)
  Class: Eq_99
  DataType: word16
  OrigDataType: word16
T_129: (in 0x0000 : word16)
  Class: Eq_99
  DataType: word16
  OrigDataType: word16
T_130: (in cx == 0x0000 : bool)
  Class: Eq_130
  DataType: bool
  OrigDataType: bool
T_131: (in bios_video_set_mode : ptr32)
  Class: Eq_2
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (fn T_133 (T_132)))
T_132: (in 0x03 : byte)
  Class: Eq_4
  DataType: byte
  OrigDataType: byte
T_133: (in bios_video_set_mode(0x03) : void)
  Class: Eq_6
  DataType: void
  OrigDataType: void
*/
typedef struct Globals {
} Eq_1;

typedef void (Eq_2)(byte);

typedef union  {
	byte u0;
	word16 u1;
} Eq_11;

typedef  Eq_14struct  {	// size: 1 1
	byte bFFFFFEBE;	// FFFFFEBE
	byte bFFFFFFFE;	// FFFFFFFE
	 t0000;	// 0
	byte b013E;	// 13E
} Eq_14;

typedef void (Eq_22)(word16, byte);

typedef void (Eq_26)(word16, byte);

typedef union  {
	uint16 u0;
	byte u1;
} Eq_30;

typedef void (Eq_34)(word16, );

typedef byte (Eq_107)(byte);

