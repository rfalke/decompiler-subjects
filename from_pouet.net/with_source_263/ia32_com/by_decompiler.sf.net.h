// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_263/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_84) ptrFFFA0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_7: (fn void ((ptr Eq_9), word16))
	T_7 (in msdos_display_string : ptr32)
	T_8 (in signature of msdos_display_string : void)
Eq_9: (segment "Eq_9" (147 word16 w0147) (150 uint16 w0150))
	T_9 (in ds : selector)
	T_11 (in ds : (ptr Eq_9))
Eq_14: (fn void (byte, word32))
	T_14 (in msdos_set_interrupt_vector : ptr32)
	T_15 (in signature of msdos_set_interrupt_vector : void)
Eq_22: (fn void (word16, byte))
	T_22 (in __outb : ptr32)
Eq_26: (union "Eq_26" (ptr16 u0) ((memptr (ptr Eq_57) int16) u1))
	T_26 (in sp_123 : Eq_26)
	T_27 (in fp : ptr16)
	T_54 (in sp_123 - 0x0002 : word16)
	T_109 (in sp_123 + 0x0002 : word16)
	T_122 (in sp_123 + 0x0002 : word16)
Eq_35: (fn void (word16, byte))
	T_35 (in __outb : ptr32)
Eq_44: (struct "Eq_44" 0001 (0 Eq_104 t0000))
	T_44 (in di : (memptr (ptr Eq_84) Eq_44))
	T_111 (in di + 0x0001 : word16)
	T_117 (in di + 0x0001 : word16)
Eq_57: (segment "Eq_57")
	T_57 (in ss : selector)
Eq_84: (segment "Eq_84")
	T_84 (in 0xA000 : selector)
Eq_99: (struct "Eq_99" (30 byte b0030))
	T_99 (in (-(SEQ(dx_85, ax_83) / ax_119) & 0x003F) *s 0x0140 + SEQ(SEQ(dx_85, ax_95 *s 0x0032) % ax_119, ax_95 *s 0x0032) / ax_119 : word16)
Eq_104: (union "Eq_104" (ui16 u0) (byte u1))
	T_104 (in (0xA000->*((-(SEQ(dx_85, ax_83) / ax_119) & 0x003F) *s 0x0140 + SEQ(SEQ(dx_85, ax_95 *s 0x0032) % ax_119, ax_95 *s 0x0032) / ax_119)).b0030 << 0x01 : word16)
	T_107 (in Mem106[0xA000:di + 0x0000:byte] : byte)
Eq_132: (fn word16 (byte))
	T_132 (in __inw : ptr32)
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
T_7: (in msdos_display_string : ptr32)
  Class: Eq_7
  DataType: (ptr Eq_7)
  OrigDataType: (ptr (fn T_13 (T_11, T_12)))
T_8: (in signature of msdos_display_string : void)
  Class: Eq_7
  DataType: (ptr Eq_7)
  OrigDataType: 
T_9: (in ds : selector)
  Class: Eq_9
  DataType: (ptr Eq_9)
  OrigDataType: (ptr (segment))
T_10: (in dx : word16)
  Class: Eq_10
  DataType: word16
  OrigDataType: word16
T_11: (in ds : (ptr Eq_9))
  Class: Eq_9
  DataType: (ptr Eq_9)
  OrigDataType: (ptr (segment (147 word16 w0147) (150 T_47 t0150)))
T_12: (in 0x01AC : word16)
  Class: Eq_10
  DataType: word16
  OrigDataType: word16
T_13: (in msdos_display_string(ds, 0x01AC) : void)
  Class: Eq_13
  DataType: void
  OrigDataType: void
T_14: (in msdos_set_interrupt_vector : ptr32)
  Class: Eq_14
  DataType: (ptr Eq_14)
  OrigDataType: (ptr (fn T_21 (T_18, T_20)))
T_15: (in signature of msdos_set_interrupt_vector : void)
  Class: Eq_14
  DataType: (ptr Eq_14)
  OrigDataType: 
T_16: (in al : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_17: (in ds_dx : word32)
  Class: Eq_17
  DataType: word32
  OrigDataType: word32
T_18: (in 0x1C : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_19: (in 0x016E : word16)
  Class: Eq_19
  DataType: word16
  OrigDataType: word16
T_20: (in SEQ(ds, 0x016E) : word32)
  Class: Eq_17
  DataType: word32
  OrigDataType: word32
T_21: (in msdos_set_interrupt_vector(0x1C, &ds->w0150) : void)
  Class: Eq_21
  DataType: void
  OrigDataType: void
T_22: (in __outb : ptr32)
  Class: Eq_22
  DataType: (ptr Eq_22)
  OrigDataType: (ptr (fn T_25 (T_23, T_24)))
T_23: (in 0x0331 : word16)
  Class: Eq_23
  DataType: word16
  OrigDataType: word16
T_24: (in 0x3F : byte)
  Class: Eq_24
  DataType: byte
  OrigDataType: byte
T_25: (in __outb(0x0331, 0x3F) : void)
  Class: Eq_25
  DataType: void
  OrigDataType: void
T_26: (in sp_123 : Eq_26)
  Class: Eq_26
  DataType: Eq_26
  OrigDataType: (memptr T_57 (struct 0002 (0 T_56 t0000)))
T_27: (in fp : ptr16)
  Class: Eq_26
  DataType: Eq_26
  OrigDataType: ptr16
T_28: (in al_21 : byte)
  Class: Eq_28
  DataType: byte
  OrigDataType: byte
T_29: (in bx : word16)
  Class: Eq_29
  DataType: word16
  OrigDataType: word16
T_30: (in (byte) bx : byte)
  Class: Eq_28
  DataType: byte
  OrigDataType: byte
T_31: (in cx_108 : word16)
  Class: Eq_31
  DataType: word16
  OrigDataType: word16
T_32: (in cx : word16)
  Class: Eq_32
  DataType: word16
  OrigDataType: word16
T_33: (in 0x18 : byte)
  Class: Eq_33
  DataType: byte
  OrigDataType: byte
T_34: (in DPB(cx, 0x18, 0, 8) : word16)
  Class: Eq_31
  DataType: word16
  OrigDataType: word16
T_35: (in __outb : ptr32)
  Class: Eq_35
  DataType: (ptr Eq_35)
  OrigDataType: (ptr (fn T_37 (T_36, T_28)))
T_36: (in 0x03C9 : word16)
  Class: Eq_36
  DataType: word16
  OrigDataType: word16
T_37: (in __outb(0x03C9, al_21) : void)
  Class: Eq_37
  DataType: void
  OrigDataType: void
T_38: (in 0x0001 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_39: (in cx_108 - 0x0001 : word16)
  Class: Eq_31
  DataType: word16
  OrigDataType: word16
T_40: (in 0x0000 : word16)
  Class: Eq_31
  DataType: word16
  OrigDataType: word16
T_41: (in cx_108 != 0x0000 : bool)
  Class: Eq_41
  DataType: bool
  OrigDataType: bool
T_42: (in dx_52 : uint16)
  Class: Eq_42
  DataType: uint16
  OrigDataType: word16
T_43: (in 0x0000 : word16)
  Class: Eq_43
  DataType: word16
  OrigDataType: word16
T_44: (in di : (memptr (ptr Eq_84) Eq_44))
  Class: Eq_44
  DataType: (memptr (ptr Eq_84) Eq_44)
  OrigDataType: (memptr T_84 (struct 0001 (0 T_107 t0000)))
T_45: (in SEQ(0x0000, di) : word32)
  Class: Eq_45
  DataType: word32
  OrigDataType: word32
T_46: (in 0x0150 : word16)
  Class: Eq_46
  DataType: (memptr (ptr Eq_9) uint16)
  OrigDataType: (memptr T_11 (struct (0 T_47 t0000)))
T_47: (in Mem0[ds:0x0150:word16] : word16)
  Class: Eq_47
  DataType: uint16
  OrigDataType: word16
T_48: (in SEQ(0x0000, di) % ds->w0150 : uint16)
  Class: Eq_42
  DataType: uint16
  OrigDataType: uint16
T_49: (in ax_54 : uint16)
  Class: Eq_49
  DataType: uint16
  OrigDataType: word16
T_50: (in SEQ(dx_52, di) : word32)
  Class: Eq_50
  DataType: uint32
  OrigDataType: uint32
T_51: (in Mem0[ds:0x0150:word16] : word16)
  Class: Eq_47
  DataType: uint16
  OrigDataType: uint16
T_52: (in SEQ(dx_52, di) /u ds->w0150 : uint16)
  Class: Eq_49
  DataType: uint16
  OrigDataType: uint16
T_53: (in 0x0002 : word16)
  Class: Eq_53
  DataType: word16
  OrigDataType: word16
T_54: (in sp_123 - 0x0002 : word16)
  Class: Eq_26
  DataType: Eq_26
  OrigDataType: word16
T_55: (in 0x00A0 : word16)
  Class: Eq_55
  DataType: word16
  OrigDataType: word16
T_56: (in dx_52 - 0x00A0 : word16)
  Class: Eq_56
  DataType: int16
  OrigDataType: word16
T_57: (in ss : selector)
  Class: Eq_57
  DataType: (ptr Eq_57)
  OrigDataType: (ptr (segment))
T_58: (in 0x0000 : word16)
  Class: Eq_58
  DataType: word16
  OrigDataType: word16
T_59: (in sp_123 + 0x0000 : word16)
  Class: Eq_59
  DataType: word16
  OrigDataType: word16
T_60: (in Mem63[ss:sp_123 + 0x0000:word16] : word16)
  Class: Eq_56
  DataType: int16
  OrigDataType: word16
T_61: (in ax_119 : int16)
  Class: Eq_56
  DataType: int16
  OrigDataType: int16
T_62: (in 0x0001 : word16)
  Class: Eq_62
  DataType: word16
  OrigDataType: word16
T_63: (in ax_54 + 0x0001 : word16)
  Class: Eq_56
  DataType: int16
  OrigDataType: word16
T_64: (in dx_58 : int16)
  Class: Eq_64
  DataType: int16
  OrigDataType: int16
T_65: (in dx_52 - 0x00A0 : word16)
  Class: Eq_64
  DataType: int16
  OrigDataType: word16
T_66: (in -dx_58 : word16)
  Class: Eq_64
  DataType: int16
  OrigDataType: int16
T_67: (in 0x0000 : word16)
  Class: Eq_64
  DataType: int16
  OrigDataType: int16
T_68: (in dx_58 < 0x0000 : bool)
  Class: Eq_68
  DataType: bool
  OrigDataType: bool
T_69: (in ax_54 + 0x0001 : word16)
  Class: Eq_64
  DataType: int16
  OrigDataType: int16
T_70: (in dx_58 < ax_54 + 0x0001 : bool)
  Class: Eq_70
  DataType: bool
  OrigDataType: bool
T_71: (in ax_83 : word16)
  Class: Eq_71
  DataType: word16
  OrigDataType: word16
T_72: (in bp : int16)
  Class: Eq_56
  DataType: int16
  OrigDataType: int16
T_73: (in 0x10 : byte)
  Class: Eq_73
  DataType: byte
  OrigDataType: byte
T_74: (in DPB(bp, 0x10, 8, 8) : word16)
  Class: Eq_71
  DataType: word16
  OrigDataType: word16
T_75: (in dx_85 : int16)
  Class: Eq_75
  DataType: int16
  OrigDataType: word16
T_76: (in (word32) ax_83 : word32)
  Class: Eq_76
  DataType: word32
  OrigDataType: word32
T_77: (in (word32) ax_83 % ax_119 : int16)
  Class: Eq_75
  DataType: int16
  OrigDataType: int16
T_78: (in ax_95 : word16)
  Class: Eq_78
  DataType: int16
  OrigDataType: int16
T_79: (in 0x0000 : word16)
  Class: Eq_79
  DataType: word16
  OrigDataType: word16
T_80: (in sp_123 + 0x0000 : word16)
  Class: Eq_80
  DataType: word16
  OrigDataType: word16
T_81: (in Mem63[ss:sp_123 + 0x0000:word16] : word16)
  Class: Eq_56
  DataType: int16
  OrigDataType: word16
T_82: (in (word32) Mem63[ss:sp_123 + 0x0000:word16] : word32)
  Class: Eq_82
  DataType: word32
  OrigDataType: word32
T_83: (in (word16) (word32) Mem63[ss:sp_123 + 0x0000:word16] : word16)
  Class: Eq_78
  DataType: int16
  OrigDataType: word16
T_84: (in 0xA000 : selector)
  Class: Eq_84
  DataType: (ptr Eq_84)
  OrigDataType: (ptr (segment))
T_85: (in SEQ(dx_85, ax_83) : word32)
  Class: Eq_85
  DataType: int32
  OrigDataType: int32
T_86: (in SEQ(dx_85, ax_83) / ax_119 : int16)
  Class: Eq_86
  DataType: int16
  OrigDataType: int16
T_87: (in -(SEQ(dx_85, ax_83) / ax_119) : word16)
  Class: Eq_87
  DataType: int16
  OrigDataType: int16
T_88: (in 0x003F : word16)
  Class: Eq_88
  DataType: word16
  OrigDataType: word16
T_89: (in -(SEQ(dx_85, ax_83) / ax_119) & 0x003F : word16)
  Class: Eq_89
  DataType: int16
  OrigDataType: int16
T_90: (in 0x0140 : word16)
  Class: Eq_90
  DataType: int16
  OrigDataType: int16
T_91: (in (-(SEQ(dx_85, ax_83) / ax_119) & 0x003F) *s 0x0140 : int16)
  Class: Eq_91
  DataType: int16
  OrigDataType: int16
T_92: (in 0x0032 : word16)
  Class: Eq_92
  DataType: int16
  OrigDataType: int16
T_93: (in ax_95 *s 0x0032 : int16)
  Class: Eq_93
  DataType: int16
  OrigDataType: int16
T_94: (in SEQ(dx_85, ax_95 *s 0x0032) : word32)
  Class: Eq_94
  DataType: word32
  OrigDataType: word32
T_95: (in SEQ(dx_85, ax_95 *s 0x0032) % ax_119 : int16)
  Class: Eq_95
  DataType: int16
  OrigDataType: int16
T_96: (in ax_95 *s 0x0032 : int16)
  Class: Eq_96
  DataType: int16
  OrigDataType: int16
T_97: (in SEQ(SEQ(dx_85, ax_95 *s 0x0032) % ax_119, ax_95 *s 0x0032) : word32)
  Class: Eq_97
  DataType: int32
  OrigDataType: int32
T_98: (in SEQ(SEQ(dx_85, ax_95 *s 0x0032) % ax_119, ax_95 *s 0x0032) / ax_119 : int16)
  Class: Eq_98
  DataType: int16
  OrigDataType: int16
T_99: (in (-(SEQ(dx_85, ax_83) / ax_119) & 0x003F) *s 0x0140 + SEQ(SEQ(dx_85, ax_95 *s 0x0032) % ax_119, ax_95 *s 0x0032) / ax_119 : word16)
  Class: Eq_99
  DataType: (memptr (ptr Eq_84) Eq_99)
  OrigDataType: (memptr T_84 (struct (30 T_102 t0030)))
T_100: (in 0x0030 : word16)
  Class: Eq_100
  DataType: word16
  OrigDataType: word16
T_101: (in (-(SEQ(dx_85, ax_83) / ax_119) & 0x003F) *s 0x0140 + SEQ(SEQ(dx_85, ax_95 *s 0x0032) % ax_119, ax_95 *s 0x0032) / ax_119 + 0x0030 : word16)
  Class: Eq_101
  DataType: word16
  OrigDataType: word16
T_102: (in Mem63[0xA000:(-(SEQ(dx_85, ax_83) / ax_119) & 0x003F) *s 0x0140 + SEQ(SEQ(dx_85, ax_95 *s 0x0032) % ax_119, ax_95 *s 0x0032) / ax_119 + 0x0030:byte] : byte)
  Class: Eq_102
  DataType: byte
  OrigDataType: byte
T_103: (in 0x01 : byte)
  Class: Eq_103
  DataType: byte
  OrigDataType: byte
T_104: (in (0xA000->*((-(SEQ(dx_85, ax_83) / ax_119) & 0x003F) *s 0x0140 + SEQ(SEQ(dx_85, ax_95 *s 0x0032) % ax_119, ax_95 *s 0x0032) / ax_119)).b0030 << 0x01 : word16)
  Class: Eq_104
  DataType: Eq_104
  OrigDataType: ui16
T_105: (in 0x0000 : word16)
  Class: Eq_105
  DataType: word16
  OrigDataType: word16
T_106: (in di + 0x0000 : word16)
  Class: Eq_106
  DataType: word16
  OrigDataType: word16
T_107: (in Mem106[0xA000:di + 0x0000:byte] : byte)
  Class: Eq_104
  DataType: Eq_104
  OrigDataType: byte
T_108: (in 0x0002 : word16)
  Class: Eq_108
  DataType: word16
  OrigDataType: word16
T_109: (in sp_123 + 0x0002 : word16)
  Class: Eq_26
  DataType: Eq_26
  OrigDataType: word16
T_110: (in 0x0001 : word16)
  Class: Eq_110
  DataType: word16
  OrigDataType: word16
T_111: (in di + 0x0001 : word16)
  Class: Eq_44
  DataType: (memptr (ptr Eq_84) Eq_44)
  OrigDataType: word16
T_112: (in 0x0001 : word16)
  Class: Eq_112
  DataType: word16
  OrigDataType: word16
T_113: (in cx_108 - 0x0001 : word16)
  Class: Eq_31
  DataType: word16
  OrigDataType: word16
T_114: (in 0x0000 : word16)
  Class: Eq_31
  DataType: word16
  OrigDataType: word16
T_115: (in cx_108 != 0x0000 : bool)
  Class: Eq_115
  DataType: bool
  OrigDataType: bool
T_116: (in 0x0001 : word16)
  Class: Eq_116
  DataType: word16
  OrigDataType: word16
T_117: (in di + 0x0001 : word16)
  Class: Eq_44
  DataType: (memptr (ptr Eq_84) Eq_44)
  OrigDataType: word16
T_118: (in 0x0000 : word16)
  Class: Eq_118
  DataType: word16
  OrigDataType: word16
T_119: (in sp_123 + 0x0000 : word16)
  Class: Eq_119
  DataType: word16
  OrigDataType: word16
T_120: (in Mem63[ss:sp_123 + 0x0000:word16] : word16)
  Class: Eq_56
  DataType: int16
  OrigDataType: word16
T_121: (in 0x0002 : word16)
  Class: Eq_121
  DataType: word16
  OrigDataType: word16
T_122: (in sp_123 + 0x0002 : word16)
  Class: Eq_26
  DataType: Eq_26
  OrigDataType: word16
T_123: (in 0x0001 : word16)
  Class: Eq_123
  DataType: word16
  OrigDataType: word16
T_124: (in cx_108 - 0x0001 : word16)
  Class: Eq_31
  DataType: word16
  OrigDataType: word16
T_125: (in 0x0000 : word16)
  Class: Eq_31
  DataType: word16
  OrigDataType: word16
T_126: (in cx_108 != 0x0000 : bool)
  Class: Eq_126
  DataType: bool
  OrigDataType: bool
T_127: (in 0x0147 : word16)
  Class: Eq_127
  DataType: (memptr (ptr Eq_9) word16)
  OrigDataType: (memptr T_11 (struct (0 T_128 t0000)))
T_128: (in Mem106[ds:0x0147:word16] : word16)
  Class: Eq_128
  DataType: word16
  OrigDataType: word16
T_129: (in 0x0001 : word16)
  Class: Eq_129
  DataType: word16
  OrigDataType: word16
T_130: (in ds->w0147 - 0x0001 : word16)
  Class: Eq_128
  DataType: word16
  OrigDataType: word16
T_131: (in Mem112[ds:0x0147:word16] : word16)
  Class: Eq_128
  DataType: word16
  OrigDataType: word16
T_132: (in __inw : ptr32)
  Class: Eq_132
  DataType: (ptr Eq_132)
  OrigDataType: (ptr (fn T_134 (T_133)))
T_133: (in 0x60 : byte)
  Class: Eq_133
  DataType: byte
  OrigDataType: byte
T_134: (in __inw(0x60) : word16)
  Class: Eq_134
  DataType: word16
  OrigDataType: word16
T_135: (in 0x0001 : word16)
  Class: Eq_134
  DataType: word16
  OrigDataType: word16
T_136: (in __inw(0x60) != 0x0001 : bool)
  Class: Eq_136
  DataType: bool
  OrigDataType: bool
*/
typedef Eq_84 Eq_1struct Globals {
	Eq_84 * ptrFFFA0000;	// FFFA0000
} Eq_1;

typedef void (Eq_2)(byte);

typedef void (Eq_7)(Eq_9 *, word16);

typedef struct Eq_9 {
	word16 w0147;	// 147
	uint16 w0150;	// 150
} Eq_9;

typedef void (Eq_14)(byte, word32);

typedef void (Eq_22)(word16, byte);

typedef union Eq_26 {
	ptr16 u0;
	int16 Eq_57::* u1;
} Eq_26;

typedef void (Eq_35)(word16, byte);

typedef Eq_104 Eq_44struct Eq_44 {	// size: 1 1
	Eq_104 t0000;	// 0
} Eq_44;

typedef struct Eq_57 {
} Eq_57;

typedef struct Eq_84 {
} Eq_84;

typedef struct Eq_99 {
	byte b0030;	// 30
} Eq_99;

typedef union Eq_104 {
	ui16 u0;
	byte u1;
} Eq_104;

typedef word16 (Eq_132)(byte);

