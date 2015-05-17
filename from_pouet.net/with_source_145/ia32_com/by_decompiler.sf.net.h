// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_145/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_85) ptrFFFA0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (struct "Eq_2" 0002 (0 word32 dw0000))
	T_2 (in si_2 : (memptr (ptr Eq_20) Eq_2))
	T_3 (in 0x017A : word16)
	T_16 (in si_23 + 0x0001 : word16)
Eq_4: (fn void (word16, word16))
	T_4 (in __outw : ptr32)
Eq_8: (fn void (word16, byte))
	T_8 (in __outb : ptr32)
Eq_20: (segment "Eq_20" (17A (arr Eq_129) a017A))
	T_20 (in ds : (ptr Eq_20))
Eq_44: (segment "Eq_44")
	T_44 (in es : (ptr Eq_44))
Eq_49: (fn void (byte))
	T_49 (in bios_video_set_mode : ptr32)
	T_50 (in signature of bios_video_set_mode : void)
Eq_67: (union "Eq_67" (int16 u0) (uint16 u1))
	T_67 (in ax_176 : Eq_67)
	T_72 (in -ax_176 : word16)
	T_98 (in 0x00A0 - cx_128 : word16)
	T_99 (in 0x0000 : word16)
Eq_85: (segment "Eq_85")
	T_85 (in 0xA000 : selector)
Eq_110: (fn byte (word16))
	T_110 (in __inb : ptr32)
Eq_117: (fn void (word16, byte))
	T_117 (in __outb : ptr32)
Eq_121: (fn void (word16, byte))
	T_121 (in __outb : ptr32)
Eq_129: (struct "Eq_129" 0002 (0 word32 dw0000))
	T_129
	T_130
	T_131
	T_132
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr Eq_1)
  OrigDataType: (ptr (struct "Globals"))
T_2: (in si_2 : (memptr (ptr Eq_20) Eq_2))
  Class: Eq_2
  DataType: (memptr (ptr Eq_20) Eq_2)
  OrigDataType: (memptr T_20 (struct 0002 (0 T_23 t0000)))
T_3: (in 0x017A : word16)
  Class: Eq_2
  DataType: (memptr (ptr Eq_20) Eq_2)
  OrigDataType: word16
T_4: (in __outw : ptr32)
  Class: Eq_4
  DataType: (ptr Eq_4)
  OrigDataType: (ptr (fn T_7 (T_5, T_6)))
T_5: (in 0x1F1F : word16)
  Class: Eq_5
  DataType: word16
  OrigDataType: word16
T_6: (in ax : word16)
  Class: Eq_6
  DataType: word16
  OrigDataType: word16
T_7: (in __outw(0x1F1F, ax) : void)
  Class: Eq_7
  DataType: void
  OrigDataType: void
T_8: (in __outb : ptr32)
  Class: Eq_8
  DataType: (ptr Eq_8)
  OrigDataType: (ptr (fn T_11 (T_9, T_10)))
T_9: (in 0x1F1F : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_10: (in al : byte)
  Class: Eq_10
  DataType: byte
  OrigDataType: byte
T_11: (in __outb(0x1F1F, al) : void)
  Class: Eq_11
  DataType: void
  OrigDataType: void
T_12: (in si_23 : word16)
  Class: Eq_12
  DataType: word16
  OrigDataType: word16
T_13: (in 0x0002 : word16)
  Class: Eq_13
  DataType: word16
  OrigDataType: word16
T_14: (in si_2 + 0x0002 : word16)
  Class: Eq_12
  DataType: word16
  OrigDataType: word16
T_15: (in 0x0001 : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_16: (in si_23 + 0x0001 : word16)
  Class: Eq_2
  DataType: (memptr (ptr Eq_20) Eq_2)
  OrigDataType: word16
T_17: (in si_23 + 0x0001 : word16)
  Class: Eq_17
  DataType: ptr16
  OrigDataType: cups16
T_18: (in fp : ptr16)
  Class: Eq_17
  DataType: ptr16
  OrigDataType: ptr16
T_19: (in si_23 + 0x0001 <u fp : bool)
  Class: Eq_19
  DataType: bool
  OrigDataType: bool
T_20: (in ds : (ptr Eq_20))
  Class: Eq_20
  DataType: (ptr Eq_20)
  OrigDataType: (ptr (segment (17A (arr T_129) a017A)))
T_21: (in 0x0000 : word16)
  Class: Eq_21
  DataType: word16
  OrigDataType: word16
T_22: (in si_2 + 0x0000 : word16)
  Class: Eq_22
  DataType: word16
  OrigDataType: word16
T_23: (in Mem14[ds:si_2 + 0x0000:word32] : word32)
  Class: Eq_23
  DataType: word32
  OrigDataType: word32
T_24: (in 0xFF1F1F1F : word32)
  Class: Eq_24
  DataType: word32
  OrigDataType: word32
T_25: (in (ds->*si_2).dw0000 - 0xFF1F1F1F : word32)
  Class: Eq_23
  DataType: word32
  OrigDataType: word32
T_26: (in 0x0000 : word16)
  Class: Eq_26
  DataType: word16
  OrigDataType: word16
T_27: (in si_2 + 0x0000 : word16)
  Class: Eq_27
  DataType: word16
  OrigDataType: word16
T_28: (in Mem182[ds:si_2 + 0x0000:word32] : word32)
  Class: Eq_23
  DataType: word32
  OrigDataType: word32
T_29: (in cx : word16)
  Class: Eq_29
  DataType: word16
  OrigDataType: word16
T_30: (in 0x09 : byte)
  Class: Eq_30
  DataType: byte
  OrigDataType: byte
T_31: (in DPB(cx, 0x09, 0, 8) : word16)
  Class: Eq_29
  DataType: word16
  OrigDataType: word16
T_32: (in 0x0000 : word16)
  Class: Eq_32
  DataType: word16
  OrigDataType: word16
T_33: (in si_2 + 0x0000 : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_34: (in Mem0[ds:si_2 + 0x0000:word32] : word32)
  Class: Eq_23
  DataType: word32
  OrigDataType: word32
T_35: (in 0xFF1F1F1F : word32)
  Class: Eq_35
  DataType: word32
  OrigDataType: word32
T_36: (in (ds->*si_2).dw0000 & 0xFF1F1F1F : word32)
  Class: Eq_23
  DataType: word32
  OrigDataType: word32
T_37: (in 0x0000 : word16)
  Class: Eq_37
  DataType: word16
  OrigDataType: word16
T_38: (in si_2 + 0x0000 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_39: (in Mem14[ds:si_2 + 0x0000:word32] : word32)
  Class: Eq_23
  DataType: word32
  OrigDataType: word32
T_40: (in 0x0001 : word16)
  Class: Eq_40
  DataType: word16
  OrigDataType: word16
T_41: (in cx - 0x0001 : word16)
  Class: Eq_29
  DataType: word16
  OrigDataType: word16
T_42: (in 0x0000 : word16)
  Class: Eq_29
  DataType: word16
  OrigDataType: word16
T_43: (in cx != 0x0000 : bool)
  Class: Eq_43
  DataType: bool
  OrigDataType: bool
T_44: (in es : (ptr Eq_44))
  Class: Eq_44
  DataType: (ptr Eq_44)
  OrigDataType: (ptr (segment))
T_45: (in di : (memptr (ptr Eq_44) word16))
  Class: Eq_45
  DataType: (memptr (ptr Eq_44) word16)
  OrigDataType: (memptr T_44 (struct (0 T_48 t0000)))
T_46: (in 0x0000 : word16)
  Class: Eq_46
  DataType: word16
  OrigDataType: word16
T_47: (in di + 0x0000 : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_48: (in Mem30[es:di + 0x0000:word16] : word16)
  Class: Eq_6
  DataType: word16
  OrigDataType: word16
T_49: (in bios_video_set_mode : ptr32)
  Class: Eq_49
  DataType: (ptr Eq_49)
  OrigDataType: (ptr (fn T_53 (T_52)))
T_50: (in signature of bios_video_set_mode : void)
  Class: Eq_49
  DataType: (ptr Eq_49)
  OrigDataType: 
T_51: (in al : byte)
  Class: Eq_51
  DataType: byte
  OrigDataType: byte
T_52: (in 0x13 : byte)
  Class: Eq_51
  DataType: byte
  OrigDataType: byte
T_53: (in bios_video_set_mode(0x13) : void)
  Class: Eq_53
  DataType: void
  OrigDataType: void
T_54: (in di_127 : (memptr (ptr Eq_85) int8))
  Class: Eq_54
  DataType: (memptr (ptr Eq_85) int8)
  OrigDataType: (memptr T_85 (struct 0001 (0 T_88 t0000)))
T_55: (in 0x0002 : word16)
  Class: Eq_55
  DataType: word16
  OrigDataType: word16
T_56: (in di + 0x0002 : word16)
  Class: Eq_54
  DataType: (memptr (ptr Eq_85) int8)
  OrigDataType: word16
T_57: (in si_131 : word16)
  Class: Eq_57
  DataType: word16
  OrigDataType: word16
T_58: (in 0x00C7 : word16)
  Class: Eq_57
  DataType: word16
  OrigDataType: word16
T_59: (in ax_93 : int16)
  Class: Eq_59
  DataType: int16
  OrigDataType: int16
T_60: (in 0x0064 : word16)
  Class: Eq_60
  DataType: word16
  OrigDataType: word16
T_61: (in si_131 - 0x0064 : word16)
  Class: Eq_59
  DataType: int16
  OrigDataType: word16
T_62: (in dx_ax_94 : int32)
  Class: Eq_62
  DataType: int32
  OrigDataType: word32
T_63: (in ax_93 *s ax_93 : int32)
  Class: Eq_62
  DataType: int32
  OrigDataType: int32
T_64: (in dx_100 : word16)
  Class: Eq_64
  DataType: word16
  OrigDataType: word16
T_65: (in SLICE(dx_ax_94, word16, 16) : word16)
  Class: Eq_64
  DataType: word16
  OrigDataType: word16
T_66: (in bp_98 : word16)
  Class: Eq_66
  DataType: word16
  OrigDataType: word16
T_67: (in ax_176 : Eq_67)
  Class: Eq_67
  DataType: Eq_67
  OrigDataType: (union (int16 u0) (uint16 u1))
T_68: (in ax_176 *u ax_176 : uint32)
  Class: Eq_68
  DataType: uint32
  OrigDataType: uint32
T_69: (in (word16) (ax_176 *u ax_176) : word16)
  Class: Eq_69
  DataType: word16
  OrigDataType: word16
T_70: (in (word16) dx_ax_94 : word16)
  Class: Eq_70
  DataType: word16
  OrigDataType: word16
T_71: (in (word16) (ax_176 *u ax_176) + (word16) dx_ax_94 : word16)
  Class: Eq_66
  DataType: word16
  OrigDataType: word16
T_72: (in -ax_176 : word16)
  Class: Eq_67
  DataType: Eq_67
  OrigDataType: int16
T_73: (in 0x0001 : word16)
  Class: Eq_73
  DataType: word16
  OrigDataType: word16
T_74: (in dx_100 - 0x0001 : word16)
  Class: Eq_64
  DataType: word16
  OrigDataType: word16
T_75: (in dl_104 : uint8)
  Class: Eq_75
  DataType: uint8
  OrigDataType: uint8
T_76: (in (byte) dx_100 : byte)
  Class: Eq_75
  DataType: uint8
  OrigDataType: byte
T_77: (in dl_104 *u dl_104 : uint16)
  Class: Eq_77
  DataType: uint16
  OrigDataType: uint16
T_78: (in dl_104 *u dl_104 - bp_98 : word16)
  Class: Eq_78
  DataType: cups16
  OrigDataType: cups16
T_79: (in 0x0000 : word16)
  Class: Eq_78
  DataType: cups16
  OrigDataType: cups16
T_80: (in dl_104 *u dl_104 - bp_98 >u 0x0000 : bool)
  Class: Eq_80
  DataType: bool
  OrigDataType: bool
T_81: (in al_115 : int8)
  Class: Eq_81
  DataType: int8
  OrigDataType: int8
T_82: (in (byte) dx_100 : byte)
  Class: Eq_81
  DataType: int8
  OrigDataType: byte
T_83: (in 0x64 : byte)
  Class: Eq_81
  DataType: int8
  OrigDataType: int8
T_84: (in al_115 < 0x64 : bool)
  Class: Eq_84
  DataType: bool
  OrigDataType: bool
T_85: (in 0xA000 : selector)
  Class: Eq_85
  DataType: (ptr Eq_85)
  OrigDataType: (ptr (segment))
T_86: (in 0x0000 : word16)
  Class: Eq_86
  DataType: word16
  OrigDataType: word16
T_87: (in di_127 + 0x0000 : word16)
  Class: Eq_87
  DataType: word16
  OrigDataType: word16
T_88: (in Mem126[0xA000:di_127 + 0x0000:byte] : byte)
  Class: Eq_81
  DataType: int8
  OrigDataType: byte
T_89: (in 0x0001 : word16)
  Class: Eq_89
  DataType: word16
  OrigDataType: word16
T_90: (in di_127 + 0x0001 : word16)
  Class: Eq_54
  DataType: (memptr (ptr Eq_85) int8)
  OrigDataType: word16
T_91: (in cx_128 : word16)
  Class: Eq_91
  DataType: word16
  OrigDataType: word16
T_92: (in 0x0001 : word16)
  Class: Eq_92
  DataType: word16
  OrigDataType: word16
T_93: (in cx_128 - 0x0001 : word16)
  Class: Eq_91
  DataType: word16
  OrigDataType: word16
T_94: (in 0x0000 : word16)
  Class: Eq_91
  DataType: word16
  OrigDataType: word16
T_95: (in cx_128 != 0x0000 : bool)
  Class: Eq_95
  DataType: bool
  OrigDataType: bool
T_96: (in (byte) ax_176 : byte)
  Class: Eq_81
  DataType: int8
  OrigDataType: byte
T_97: (in 0x00A0 : word16)
  Class: Eq_97
  DataType: word16
  OrigDataType: word16
T_98: (in 0x00A0 - cx_128 : word16)
  Class: Eq_67
  DataType: Eq_67
  OrigDataType: word16
T_99: (in 0x0000 : word16)
  Class: Eq_67
  DataType: int16
  OrigDataType: int16
T_100: (in ax_176 >= 0x0000 : bool)
  Class: Eq_100
  DataType: bool
  OrigDataType: bool
T_101: (in 0x0001 : word16)
  Class: Eq_101
  DataType: word16
  OrigDataType: word16
T_102: (in si_131 - 0x0001 : word16)
  Class: Eq_57
  DataType: word16
  OrigDataType: word16
T_103: (in 0x0000 : word16)
  Class: Eq_57
  DataType: word16
  OrigDataType: word16
T_104: (in si_131 != 0x0000 : bool)
  Class: Eq_104
  DataType: bool
  OrigDataType: bool
T_105: (in 0x0140 : word16)
  Class: Eq_91
  DataType: word16
  OrigDataType: word16
T_106: (in cx_135 : word16)
  Class: Eq_106
  DataType: word16
  OrigDataType: word16
T_107: (in 0x02 : byte)
  Class: Eq_107
  DataType: byte
  OrigDataType: byte
T_108: (in DPB(cx_128, 0x02, 8, 8) : word16)
  Class: Eq_106
  DataType: word16
  OrigDataType: word16
T_109: (in al_139 : byte)
  Class: Eq_109
  DataType: byte
  OrigDataType: byte
T_110: (in __inb : ptr32)
  Class: Eq_110
  DataType: (ptr Eq_110)
  OrigDataType: (ptr (fn T_112 (T_111)))
T_111: (in 0x03DA : word16)
  Class: Eq_111
  DataType: word16
  OrigDataType: word16
T_112: (in __inb(0x03DA) : byte)
  Class: Eq_109
  DataType: byte
  OrigDataType: byte
T_113: (in 0x08 : byte)
  Class: Eq_113
  DataType: byte
  OrigDataType: byte
T_114: (in al_139 & 0x08 : byte)
  Class: Eq_114
  DataType: byte
  OrigDataType: byte
T_115: (in 0x00 : byte)
  Class: Eq_114
  DataType: byte
  OrigDataType: byte
T_116: (in (al_139 & 0x08) == 0x00 : bool)
  Class: Eq_116
  DataType: bool
  OrigDataType: bool
T_117: (in __outb : ptr32)
  Class: Eq_117
  DataType: (ptr Eq_117)
  OrigDataType: (ptr (fn T_120 (T_118, T_119)))
T_118: (in 0x03C8 : word16)
  Class: Eq_118
  DataType: word16
  OrigDataType: word16
T_119: (in al_139 & 0x08 : byte)
  Class: Eq_119
  DataType: byte
  OrigDataType: byte
T_120: (in __outb(0x03C8, al_139 & 0x08) : void)
  Class: Eq_120
  DataType: void
  OrigDataType: void
T_121: (in __outb : ptr32)
  Class: Eq_121
  DataType: (ptr Eq_121)
  OrigDataType: (ptr (fn T_124 (T_122, T_123)))
T_122: (in 0x03C9 : word16)
  Class: Eq_122
  DataType: word16
  OrigDataType: word16
T_123: (in al_139 & 0x08 : byte)
  Class: Eq_123
  DataType: byte
  OrigDataType: byte
T_124: (in __outb(0x03C9, al_139 & 0x08) : void)
  Class: Eq_124
  DataType: void
  OrigDataType: void
T_125: (in 0x0001 : word16)
  Class: Eq_125
  DataType: word16
  OrigDataType: word16
T_126: (in cx_135 - 0x0001 : word16)
  Class: Eq_106
  DataType: word16
  OrigDataType: word16
T_127: (in 0x0000 : word16)
  Class: Eq_106
  DataType: word16
  OrigDataType: word16
T_128: (in cx_135 == 0x0000 : bool)
  Class: Eq_128
  DataType: bool
  OrigDataType: bool
T_129:
  Class: Eq_129
  DataType: Eq_129
  OrigDataType: (struct 0002 (0 T_23 t0000))
T_130:
  Class: Eq_129
  DataType: Eq_129
  OrigDataType: (struct 0002 (0 T_28 t0000))
T_131:
  Class: Eq_129
  DataType: Eq_129
  OrigDataType: (struct 0002 (0 T_34 t0000))
T_132:
  Class: Eq_129
  DataType: Eq_129
  OrigDataType: (struct 0002 (0 T_39 t0000))
*/
typedef Eq_85 Eq_1struct Globals {
	Eq_85 * ptrFFFA0000;	// FFFA0000
} Eq_1;

typedef struct Eq_2 {	// size: 2 2
	word32 dw0000;	// 0
} Eq_2;

typedef void (Eq_4)(word16, word16);

typedef void (Eq_8)(word16, byte);

typedef Eq_129 Eq_20[]struct Eq_20 {
	Eq_129 a017A[];	// 17A
} Eq_20;

typedef struct Eq_44 {
} Eq_44;

typedef void (Eq_49)(byte);

typedef union Eq_67 {
	int16 u0;
	uint16 u1;
} Eq_67;

typedef struct Eq_85 {
} Eq_85;

typedef byte (Eq_110)(word16);

typedef void (Eq_117)(word16, byte);

typedef void (Eq_121)(word16, byte);

typedef struct Eq_129 {	// size: 2 2
	word32 dw0000;	// 0
} Eq_129;

