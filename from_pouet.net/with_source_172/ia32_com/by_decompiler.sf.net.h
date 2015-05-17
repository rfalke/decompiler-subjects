// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_172/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_7: (fn void ((ptr Eq_9), word16))
	T_7 (in msdos_display_string : ptr32)
	T_8 (in signature of msdos_display_string : void)
Eq_9: (segment "Eq_9")
	T_9 (in ds : selector)
	T_11 (in ds : (ptr Eq_9))
Eq_17: (fn real64 (real16))
	T_17 (in sin : ptr32)
Eq_18: (union "Eq_18" (real16 u0) (real64 u1))
	T_18 (in (real64) cx_15 : real64)
Eq_19: (union "Eq_19" (real16 u0) (real64 u1))
	T_19 (in 21167 : real64)
Eq_22: (fn void (word16, byte))
	T_22 (in __outb : ptr32)
Eq_24: (union "Eq_24" (real16 u0) (real64 u1))
	T_24 (in rLoc1_20 * rLoc1_20 : real64)
Eq_25: (union "Eq_25" (real16 u0) (real64 u1))
	T_25 (in 63 : real64)
Eq_34: (union "Eq_34" (word16 u0) ((ptr (arr Eq_134)) u1))
	T_34 (in bx_28 : Eq_34)
	T_37 (in DPB(bx, 0xA0, 8, 8) : word16)
Eq_39: (struct "Eq_39" 0001 (FFFFFEC0 byte bFFFFFEC0) (FFFFFFFF byte bFFFFFFFF) (0 Eq_71 t0000) (1 byte b0001) (140 byte b0140))
	T_39 (in di : (memptr Eq_34 Eq_39))
	T_79 (in di - 0x0001 : word16)
	T_121 (in di - 0x0001 : word16)
Eq_50: (union "Eq_50" (16 u0) (uint16 u1))
	T_50 (in dx_ax_38 % 0x0140 : uint16)
Eq_57: (union "Eq_57" (int16 u0) (uint16 u1))
	T_57 (in ax_53 : Eq_57)
	T_65 (in (int16) (byte) (SEQ(dx_ax_44 % 0x0D, dx_ax_41 /u 0x0140) /u 0x0D) : int16)
	T_119 (in ax_83 >>u 0x0002 : word16)
Eq_71: (union "Eq_71" (ui16 u0) (byte u1))
	T_71 (in SEQ(bx_28, ax_53)[dx_43 * 0x0050] << 0x05 : word16)
	T_74 (in Mem61[bx_28:di + 0x0000:byte] : byte)
	T_115 (in (byte) (ax_83 >>u 0x0002) : byte)
	T_118 (in Mem88[bx_28:di + 0x0000:byte] : byte)
Eq_126: (fn byte (byte))
	T_126 (in __inb : ptr32)
Eq_131: (fn void ())
	T_131 (in msdos_terminate_program20 : ptr32)
	T_132 (in signature of msdos_terminate_program20 : void)
Eq_134: (struct "Eq_134" 0140 (0 byte b0000))
	T_134
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
  OrigDataType: (ptr (segment))
T_12: (in 0x017C : word16)
  Class: Eq_10
  DataType: word16
  OrigDataType: word16
T_13: (in msdos_display_string(ds, 0x017C) : void)
  Class: Eq_13
  DataType: void
  OrigDataType: void
T_14: (in cx_15 : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_15: (in 0x0300 : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_16: (in rLoc1_20 : real64)
  Class: Eq_16
  DataType: real64
  OrigDataType: real64
T_17: (in sin : ptr32)
  Class: Eq_17
  DataType: (ptr Eq_17)
  OrigDataType: (ptr (fn T_21 (T_20)))
T_18: (in (real64) cx_15 : real64)
  Class: Eq_18
  DataType: Eq_18
  OrigDataType: (union (real16 u0) (real64 u1))
T_19: (in 21167 : real64)
  Class: Eq_19
  DataType: real16
  OrigDataType: (union (real16 u0) (real64 u1))
T_20: (in (real64) cx_15 * 21167 : word16)
  Class: Eq_20
  DataType: real16
  OrigDataType: real16
T_21: (in sin((real64) cx_15 * 21167) : real64)
  Class: Eq_16
  DataType: real64
  OrigDataType: real64
T_22: (in __outb : ptr32)
  Class: Eq_22
  DataType: (ptr Eq_22)
  OrigDataType: (ptr (fn T_29 (T_23, T_28)))
T_23: (in 0x03C9 : word16)
  Class: Eq_23
  DataType: word16
  OrigDataType: word16
T_24: (in rLoc1_20 * rLoc1_20 : real64)
  Class: Eq_24
  DataType: Eq_24
  OrigDataType: (union (real16 u0) (real64 u1))
T_25: (in 63 : real64)
  Class: Eq_25
  DataType: real16
  OrigDataType: (union (real16 u0) (real64 u1))
T_26: (in rLoc1_20 * rLoc1_20 * 63 : word16)
  Class: Eq_26
  DataType: real16
  OrigDataType: real16
T_27: (in (int16) (rLoc1_20 * rLoc1_20 * 63) : int16)
  Class: Eq_27
  DataType: int16
  OrigDataType: int16
T_28: (in (byte) (int16) (rLoc1_20 * rLoc1_20 * 63) : byte)
  Class: Eq_28
  DataType: byte
  OrigDataType: byte
T_29: (in __outb(0x03C9, (byte) (int16) (rLoc1_20 * rLoc1_20 * 63)) : void)
  Class: Eq_29
  DataType: void
  OrigDataType: void
T_30: (in 0x0001 : word16)
  Class: Eq_30
  DataType: word16
  OrigDataType: word16
T_31: (in cx_15 - 0x0001 : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_32: (in 0x0000 : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_33: (in cx_15 != 0x0000 : bool)
  Class: Eq_33
  DataType: bool
  OrigDataType: bool
T_34: (in bx_28 : Eq_34)
  Class: Eq_34
  DataType: Eq_34
  OrigDataType: (union (word16 u0) ((ptr (struct (0 (arr T_134) a0000))) u1))
T_35: (in bx : word16)
  Class: Eq_35
  DataType: word16
  OrigDataType: word16
T_36: (in 0xA0 : byte)
  Class: Eq_36
  DataType: byte
  OrigDataType: byte
T_37: (in DPB(bx, 0xA0, 8, 8) : word16)
  Class: Eq_34
  DataType: Eq_34
  OrigDataType: word16
T_38: (in ax_36 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_39: (in di : (memptr Eq_34 Eq_39))
  Class: Eq_39
  DataType: (memptr Eq_34 Eq_39)
  OrigDataType: (memptr T_34 (struct 0001 (FFFFFEC0 T_87 tFFFFFEC0) (FFFFFFFF T_90 tFFFFFFFF) (0 T_71 t0000) (1 T_95 t0001) (140 T_107 t0140)))
T_40: (in 0x0530 : word16)
  Class: Eq_40
  DataType: word16
  OrigDataType: word16
T_41: (in di - 0x0530 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_42: (in dx_ax_38 : word32)
  Class: Eq_42
  DataType: word32
  OrigDataType: word32
T_43: (in 0x0000 : word16)
  Class: Eq_43
  DataType: word16
  OrigDataType: word16
T_44: (in SEQ(0x0000, ax_36) : word32)
  Class: Eq_42
  DataType: word32
  OrigDataType: word32
T_45: (in dx_ax_41 : uint32)
  Class: Eq_45
  DataType: uint32
  OrigDataType: uint32
T_46: (in 0x0140 : word16)
  Class: Eq_46
  DataType: word16
  OrigDataType: word16
T_47: (in dx_ax_38 % 0x0140 : uint16)
  Class: Eq_47
  DataType: uint16
  OrigDataType: uint16
T_48: (in SEQ(dx_ax_38 % 0x0140, ax_36) : word32)
  Class: Eq_45
  DataType: uint32
  OrigDataType: word32
T_49: (in dx_43 : int16)
  Class: Eq_49
  DataType: int16
  OrigDataType: ui16
T_50: (in dx_ax_38 % 0x0140 : uint16)
  Class: Eq_50
  DataType: Eq_50
  OrigDataType: (union (16 u0) (uint16 u1))
T_51: (in 0x0005 : word16)
  Class: Eq_51
  DataType: uint16
  OrigDataType: uint16
T_52: (in dx_ax_38 % 0x0140 >> 0x0005 : word16)
  Class: Eq_49
  DataType: int16
  OrigDataType: int16
T_53: (in dx_ax_44 : word32)
  Class: Eq_53
  DataType: word32
  OrigDataType: word32
T_54: (in 0x0140 : word16)
  Class: Eq_54
  DataType: uint16
  OrigDataType: uint16
T_55: (in dx_ax_41 /u 0x0140 : uint16)
  Class: Eq_55
  DataType: uint16
  OrigDataType: uint16
T_56: (in SEQ(dx_43, dx_ax_41 /u 0x0140) : word32)
  Class: Eq_53
  DataType: word32
  OrigDataType: word32
T_57: (in ax_53 : Eq_57)
  Class: Eq_57
  DataType: Eq_57
  OrigDataType: uint16
T_58: (in 0x0D : byte)
  Class: Eq_58
  DataType: byte
  OrigDataType: byte
T_59: (in dx_ax_44 % 0x0D : uint16)
  Class: Eq_59
  DataType: uint16
  OrigDataType: uint16
T_60: (in dx_ax_41 /u 0x0140 : uint16)
  Class: Eq_60
  DataType: uint16
  OrigDataType: uint16
T_61: (in SEQ(dx_ax_44 % 0x0D, dx_ax_41 /u 0x0140) : word32)
  Class: Eq_61
  DataType: uint32
  OrigDataType: uint32
T_62: (in 0x0D : byte)
  Class: Eq_62
  DataType: uint8
  OrigDataType: uint8
T_63: (in SEQ(dx_ax_44 % 0x0D, dx_ax_41 /u 0x0140) /u 0x0D : uint16)
  Class: Eq_63
  DataType: uint16
  OrigDataType: uint16
T_64: (in (byte) (SEQ(dx_ax_44 % 0x0D, dx_ax_41 /u 0x0140) /u 0x0D) : byte)
  Class: Eq_64
  DataType: byte
  OrigDataType: byte
T_65: (in (int16) (byte) (SEQ(dx_ax_44 % 0x0D, dx_ax_41 /u 0x0140) /u 0x0D) : int16)
  Class: Eq_57
  DataType: Eq_57
  OrigDataType: int16
T_66: (in SEQ(bx_28, ax_53) : ptr32)
  Class: Eq_66
  DataType: ptr32
  OrigDataType: ptr32
T_67: (in 0x0140 : word16)
  Class: Eq_67
  DataType: ui16
  OrigDataType: ui16
T_68: (in dx_43 * 0x0140 : word16)
  Class: Eq_68
  DataType: ui16
  OrigDataType: ui16
T_69: (in SEQ(bx_28, ax_53)[dx_43 * 0x0140] : byte)
  Class: Eq_69
  DataType: byte
  OrigDataType: byte
T_70: (in 0x05 : byte)
  Class: Eq_70
  DataType: byte
  OrigDataType: byte
T_71: (in SEQ(bx_28, ax_53)[dx_43 * 0x0050] << 0x05 : word16)
  Class: Eq_71
  DataType: Eq_71
  OrigDataType: ui16
T_72: (in 0x0000 : word16)
  Class: Eq_72
  DataType: word16
  OrigDataType: word16
T_73: (in di + 0x0000 : word16)
  Class: Eq_73
  DataType: word16
  OrigDataType: word16
T_74: (in Mem61[bx_28:di + 0x0000:byte] : byte)
  Class: Eq_71
  DataType: Eq_71
  OrigDataType: byte
T_75: (in dl_50 : byte)
  Class: Eq_75
  DataType: byte
  OrigDataType: byte
T_76: (in dx_ax_44 % 0x0D : uint16)
  Class: Eq_76
  DataType: uint16
  OrigDataType: uint16
T_77: (in (byte) (dx_ax_44 % 0x0D) : byte)
  Class: Eq_75
  DataType: byte
  OrigDataType: byte
T_78: (in 0x0001 : word16)
  Class: Eq_78
  DataType: word16
  OrigDataType: word16
T_79: (in di - 0x0001 : word16)
  Class: Eq_39
  DataType: (memptr Eq_34 Eq_39)
  OrigDataType: word16
T_80: (in 0x0001 : word16)
  Class: Eq_80
  DataType: word16
  OrigDataType: word16
T_81: (in cx_15 - 0x0001 : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_82: (in 0x0000 : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_83: (in cx_15 != 0x0000 : bool)
  Class: Eq_83
  DataType: bool
  OrigDataType: bool
T_84: (in al_71 : bcu8)
  Class: Eq_84
  DataType: bcu8
  OrigDataType: bcu8
T_85: (in 0x0140 : word16)
  Class: Eq_85
  DataType: word16
  OrigDataType: word16
T_86: (in di - 0x0140 : word16)
  Class: Eq_86
  DataType: word16
  OrigDataType: word16
T_87: (in Mem61[bx_28:di - 0x0140:byte] : byte)
  Class: Eq_87
  DataType: byte
  OrigDataType: byte
T_88: (in 0x0001 : word16)
  Class: Eq_88
  DataType: word16
  OrigDataType: word16
T_89: (in di - 0x0001 : word16)
  Class: Eq_89
  DataType: word16
  OrigDataType: word16
T_90: (in Mem61[bx_28:di - 0x0001:byte] : byte)
  Class: Eq_90
  DataType: byte
  OrigDataType: byte
T_91: (in (bx_28->*di).b0140 + (bx_28->*di).b0001 : byte)
  Class: Eq_84
  DataType: bcu8
  OrigDataType: byte
T_92: (in al_75 : bcu8)
  Class: Eq_92
  DataType: bcu8
  OrigDataType: bcu8
T_93: (in 0x0001 : word16)
  Class: Eq_93
  DataType: word16
  OrigDataType: word16
T_94: (in di + 0x0001 : word16)
  Class: Eq_94
  DataType: word16
  OrigDataType: word16
T_95: (in Mem61[bx_28:di + 0x0001:byte] : byte)
  Class: Eq_95
  DataType: byte
  OrigDataType: byte
T_96: (in al_71 + (bx_28->*di).b0001 : byte)
  Class: Eq_92
  DataType: bcu8
  OrigDataType: byte
T_97: (in ax_83 : uint16)
  Class: Eq_97
  DataType: uint16
  OrigDataType: uint16
T_98: (in 0x00 : byte)
  Class: Eq_84
  DataType: bcu8
  OrigDataType: bcu8
T_99: (in al_71 <u 0x00 : bool)
  Class: Eq_99
  DataType: bool
  OrigDataType: bool
T_100: (in (al_71 <u 0x00) + dl_50 : word16)
  Class: Eq_100
  DataType: word16
  OrigDataType: word16
T_101: (in 0x00 : byte)
  Class: Eq_92
  DataType: bcu8
  OrigDataType: bcu8
T_102: (in al_75 <u 0x00 : bool)
  Class: Eq_102
  DataType: bool
  OrigDataType: bool
T_103: (in (al_71 <u 0x00) + dl_50 + (al_75 <u 0x00) : word16)
  Class: Eq_103
  DataType: word16
  OrigDataType: word16
T_104: (in (al_71 <u 0x00) + dl_50 + (al_75 <u 0x00) + dl_50 : word16)
  Class: Eq_104
  DataType: word16
  OrigDataType: word16
T_105: (in 0x0140 : word16)
  Class: Eq_105
  DataType: word16
  OrigDataType: word16
T_106: (in di + 0x0140 : word16)
  Class: Eq_106
  DataType: word16
  OrigDataType: word16
T_107: (in Mem61[bx_28:di + 0x0140:byte] : byte)
  Class: Eq_107
  DataType: byte
  OrigDataType: byte
T_108: (in al_75 + (bx_28->*di).b0140 : byte)
  Class: Eq_108
  DataType: bcu8
  OrigDataType: bcu8
T_109: (in 0x00 : byte)
  Class: Eq_108
  DataType: bcu8
  OrigDataType: bcu8
T_110: (in al_75 + (bx_28->*di).b0140 <u 0x00 : bool)
  Class: Eq_110
  DataType: bool
  OrigDataType: bool
T_111: (in (al_71 <u 0x00) + dl_50 + (al_75 <u 0x00) + dl_50 + (al_75 + (bx_28->*di).b0140 <u 0x00) : word16)
  Class: Eq_111
  DataType: word16
  OrigDataType: word16
T_112: (in DPB(ax_53, (al_71 <u 0x00) + dl_50 + (al_75 <u 0x00) + dl_50 + (al_75 + (bx_28->*di).b0140 <u 0x00), 8, 8) : word16)
  Class: Eq_97
  DataType: uint16
  OrigDataType: word16
T_113: (in 0x0002 : word16)
  Class: Eq_113
  DataType: uint16
  OrigDataType: uint16
T_114: (in ax_83 >>u 0x0002 : word16)
  Class: Eq_114
  DataType: uint16
  OrigDataType: uint16
T_115: (in (byte) (ax_83 >>u 0x0002) : byte)
  Class: Eq_71
  DataType: Eq_71
  OrigDataType: byte
T_116: (in 0x0000 : word16)
  Class: Eq_116
  DataType: word16
  OrigDataType: word16
T_117: (in di + 0x0000 : word16)
  Class: Eq_117
  DataType: word16
  OrigDataType: word16
T_118: (in Mem88[bx_28:di + 0x0000:byte] : byte)
  Class: Eq_71
  DataType: Eq_71
  OrigDataType: byte
T_119: (in ax_83 >>u 0x0002 : word16)
  Class: Eq_57
  DataType: Eq_57
  OrigDataType: uint16
T_120: (in 0x0001 : word16)
  Class: Eq_120
  DataType: word16
  OrigDataType: word16
T_121: (in di - 0x0001 : word16)
  Class: Eq_39
  DataType: (memptr Eq_34 Eq_39)
  OrigDataType: word16
T_122: (in 0x0001 : word16)
  Class: Eq_122
  DataType: word16
  OrigDataType: word16
T_123: (in cx_15 - 0x0001 : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_124: (in 0x0000 : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_125: (in cx_15 != 0x0000 : bool)
  Class: Eq_125
  DataType: bool
  OrigDataType: bool
T_126: (in __inb : ptr32)
  Class: Eq_126
  DataType: (ptr Eq_126)
  OrigDataType: (ptr (fn T_128 (T_127)))
T_127: (in 0x60 : byte)
  Class: Eq_127
  DataType: byte
  OrigDataType: byte
T_128: (in __inb(0x60) : byte)
  Class: Eq_128
  DataType: byte
  OrigDataType: byte
T_129: (in 0x01 : byte)
  Class: Eq_128
  DataType: byte
  OrigDataType: byte
T_130: (in __inb(0x60) != 0x01 : bool)
  Class: Eq_130
  DataType: bool
  OrigDataType: bool
T_131: (in msdos_terminate_program20 : ptr32)
  Class: Eq_131
  DataType: (ptr Eq_131)
  OrigDataType: (ptr (fn T_133 ()))
T_132: (in signature of msdos_terminate_program20 : void)
  Class: Eq_131
  DataType: (ptr Eq_131)
  OrigDataType: 
T_133: (in msdos_terminate_program20() : void)
  Class: Eq_133
  DataType: void
  OrigDataType: void
T_134:
  Class: Eq_134
  DataType: Eq_134
  OrigDataType: (struct 0140 (0 T_69 t0000))
*/
typedef struct Globals {
} Eq_1;

typedef void (Eq_2)(byte);

typedef void (Eq_7)(Eq_9 *, word16);

typedef struct Eq_9 {
} Eq_9;

typedef real64 (Eq_17)(real16);

typedef union Eq_18 {
	real16 u0;
	real64 u1;
} Eq_18;

typedef union Eq_19 {
	real16 u0;
	real64 u1;
} Eq_19;

typedef void (Eq_22)(word16, byte);

typedef union Eq_24 {
	real16 u0;
	real64 u1;
} Eq_24;

typedef union Eq_25 {
	real16 u0;
	real64 u1;
} Eq_25;

typedef union Eq_34 {
	word16 u0;
	Eq_134 (* u1)[];
} Eq_34;

typedef Eq_71 Eq_39struct Eq_39 {	// size: 1 1
	byte bFFFFFEC0;	// FFFFFEC0
	byte bFFFFFFFF;	// FFFFFFFF
	Eq_71 t0000;	// 0
	byte b0001;	// 1
	byte b0140;	// 140
} Eq_39;

typedef union Eq_50 {
	16 u0;
	uint16 u1;
} Eq_50;

typedef union Eq_57 {
	int16 u0;
	uint16 u1;
} Eq_57;

typedef union Eq_71 {
	ui16 u0;
	byte u1;
} Eq_71;

typedef byte (Eq_126)(byte);

typedef void (Eq_131)();

typedef struct Eq_134 {	// size: 320 140
	byte b0000;	// 0
} Eq_134;

