// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_111/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
	T_114 (in bios_video_set_mode : ptr32)
Eq_7: (union "Eq_7" (ptr32 u0) (segptr32 u1))
	T_7 (in ds_cx_8 : ptr32)
	T_12 (in Mem0[ds:bx + 0x0000:segptr32] : segptr32)
Eq_8: (segment "Eq_8")
	T_8 (in ds : (ptr Eq_8))
Eq_13: (segment "Eq_13" (FFFFFEC0 byte bFFFFFEC0) (FEC0 byte bFEC0))
	T_13 (in ds_9 : (ptr Eq_13))
	T_14 (in SLICE(ds_cx_8, selector, 16) : selector)
Eq_17: (fn void (word16, byte))
	T_17 (in __outb : ptr32)
Eq_24: (fn void (word16, byte))
	T_24 (in __outb : ptr32)
Eq_28: (fn void (word16, byte))
	T_28 (in __outb : ptr32)
Eq_45: (union "Eq_45" (cups16 u0) ((memptr (ptr Eq_13) Eq_116) u1))
	T_45 (in si_37 : Eq_45)
	T_49 (in si + ax_18 + C_23 + cx_10 : word16)
	T_58 (in 0x0000 : word16)
Eq_71: (union "Eq_71" (uint16 u0) (bcu8 u1))
	T_71 (in cl_49 : Eq_71)
	T_72 (in cl_27 >>u cl_27 : word16)
	T_75 (in 0x00 : byte)
Eq_73: (union "Eq_73" (ui8 u0) (word16 u1))
	T_73 (in cl_52 : Eq_73)
	T_77 (in cl_49 + al_48 + (cl_49 <u 0x00) : word16)
Eq_103: (fn byte (byte))
	T_103 (in __inb : ptr32)
Eq_116: (struct "Eq_116" (0 byte b0000) (1 byte b0001))
	T_116
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
T_7: (in ds_cx_8 : ptr32)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: ptr32
T_8: (in ds : (ptr Eq_8))
  Class: Eq_8
  DataType: (ptr Eq_8)
  OrigDataType: (ptr (segment))
T_9: (in bx : (memptr (ptr Eq_8) Eq_7))
  Class: Eq_9
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_8 (struct (0 T_12 t0000)))
T_10: (in 0x0000 : word16)
  Class: Eq_10
  DataType: word16
  OrigDataType: word16
T_11: (in bx + 0x0000 : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_12: (in Mem0[ds:bx + 0x0000:segptr32] : segptr32)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: segptr32
T_13: (in ds_9 : (ptr Eq_13))
  Class: Eq_13
  DataType: (ptr Eq_13)
  OrigDataType: (ptr (segment))
T_14: (in SLICE(ds_cx_8, selector, 16) : selector)
  Class: Eq_13
  DataType: (ptr Eq_13)
  OrigDataType: (ptr (segment))
T_15: (in cx_10 : uint16)
  Class: Eq_15
  DataType: uint16
  OrigDataType: uint16
T_16: (in (word16) ds_cx_8 : word16)
  Class: Eq_15
  DataType: uint16
  OrigDataType: word16
T_17: (in __outb : ptr32)
  Class: Eq_17
  DataType: (ptr Eq_17)
  OrigDataType: (ptr (fn T_20 (T_18, T_19)))
T_18: (in 0x03C9 : word16)
  Class: Eq_18
  DataType: word16
  OrigDataType: word16
T_19: (in (byte) cx_10 : byte)
  Class: Eq_19
  DataType: byte
  OrigDataType: byte
T_20: (in __outb(0x03C9, (byte) cx_10) : void)
  Class: Eq_20
  DataType: void
  OrigDataType: void
T_21: (in ax_16 : uint16)
  Class: Eq_21
  DataType: uint16
  OrigDataType: uint16
T_22: (in 0x0001 : word16)
  Class: Eq_22
  DataType: uint16
  OrigDataType: uint16
T_23: (in cx_10 >>u 0x0001 : word16)
  Class: Eq_21
  DataType: uint16
  OrigDataType: uint16
T_24: (in __outb : ptr32)
  Class: Eq_24
  DataType: (ptr Eq_24)
  OrigDataType: (ptr (fn T_27 (T_25, T_26)))
T_25: (in 0x03C9 : word16)
  Class: Eq_25
  DataType: word16
  OrigDataType: word16
T_26: (in (byte) ax_16 : byte)
  Class: Eq_26
  DataType: byte
  OrigDataType: byte
T_27: (in __outb(0x03C9, (byte) ax_16) : void)
  Class: Eq_27
  DataType: void
  OrigDataType: void
T_28: (in __outb : ptr32)
  Class: Eq_28
  DataType: (ptr Eq_28)
  OrigDataType: (ptr (fn T_33 (T_29, T_32)))
T_29: (in 0x03C9 : word16)
  Class: Eq_29
  DataType: word16
  OrigDataType: word16
T_30: (in 0x0001 : word16)
  Class: Eq_30
  DataType: uint16
  OrigDataType: uint16
T_31: (in ax_16 >>u 0x0001 : word16)
  Class: Eq_31
  DataType: uint16
  OrigDataType: uint16
T_32: (in (byte) (ax_16 >>u 0x0001) : byte)
  Class: Eq_32
  DataType: byte
  OrigDataType: byte
T_33: (in __outb(0x03C9, (byte) (ax_16 >>u 0x0001)) : void)
  Class: Eq_33
  DataType: void
  OrigDataType: void
T_34: (in 0x0001 : word16)
  Class: Eq_34
  DataType: word16
  OrigDataType: word16
T_35: (in cx_10 - 0x0001 : word16)
  Class: Eq_15
  DataType: uint16
  OrigDataType: word16
T_36: (in ax_18 : uint16)
  Class: Eq_36
  DataType: uint16
  OrigDataType: word16
T_37: (in ax_16 >>u 0x0001 : word16)
  Class: Eq_36
  DataType: uint16
  OrigDataType: uint16
T_38: (in C_23 : bool)
  Class: Eq_38
  DataType: bool
  OrigDataType: bool
T_39: (in ax_16 >>u 0x0001 : word16)
  Class: Eq_39
  DataType: uint16
  OrigDataType: uint16
T_40: (in cond(ax_16 >>u 0x0001) : byte)
  Class: Eq_38
  DataType: bool
  OrigDataType: byte
T_41: (in cl_27 : uint8)
  Class: Eq_41
  DataType: uint8
  OrigDataType: uint8
T_42: (in (byte) cx_10 : byte)
  Class: Eq_41
  DataType: uint8
  OrigDataType: byte
T_43: (in 0x0000 : word16)
  Class: Eq_15
  DataType: uint16
  OrigDataType: word16
T_44: (in cx_10 != 0x0000 : bool)
  Class: Eq_44
  DataType: bool
  OrigDataType: bool
T_45: (in si_37 : Eq_45)
  Class: Eq_45
  DataType: Eq_45
  OrigDataType: (union (cups16 u0) ((memptr T_13 (struct (0 T_53 t0000) (1 T_56 t0001))) u1))
T_46: (in si : word16)
  Class: Eq_46
  DataType: word16
  OrigDataType: word16
T_47: (in si + ax_18 : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_48: (in si + ax_18 + C_23 : word16)
  Class: Eq_48
  DataType: word16
  OrigDataType: word16
T_49: (in si + ax_18 + C_23 + cx_10 : word16)
  Class: Eq_45
  DataType: Eq_45
  OrigDataType: word16
T_50: (in ax_45 : word16)
  Class: Eq_50
  DataType: word16
  OrigDataType: word16
T_51: (in 0x0000 : word16)
  Class: Eq_51
  DataType: word16
  OrigDataType: word16
T_52: (in si_37 + 0x0000 : word16)
  Class: Eq_52
  DataType: word16
  OrigDataType: word16
T_53: (in Mem0[ds_9:si_37 + 0x0000:byte] : byte)
  Class: Eq_53
  DataType: byte
  OrigDataType: byte
T_54: (in 0x0001 : word16)
  Class: Eq_54
  DataType: word16
  OrigDataType: word16
T_55: (in si_37 + 0x0001 : word16)
  Class: Eq_55
  DataType: word16
  OrigDataType: word16
T_56: (in Mem0[ds_9:si_37 + 0x0001:byte] : byte)
  Class: Eq_56
  DataType: byte
  OrigDataType: byte
T_57: (in Mem0[ds_9:si_37 + 0x0000:byte] - Mem0[ds_9:si_37 + 0x0001:byte] : word16)
  Class: Eq_57
  DataType: word16
  OrigDataType: word16
T_58: (in 0x0000 : word16)
  Class: Eq_45
  DataType: Eq_45
  OrigDataType: cups16
T_59: (in si_37 <u 0x0000 : bool)
  Class: Eq_59
  DataType: bool
  OrigDataType: bool
T_60: (in Mem0[ds_9:si_37 + 0x0000:byte] - Mem0[ds_9:si_37 + 0x0001:byte] - (si_37 <u 0x0000) : word16)
  Class: Eq_60
  DataType: int16
  OrigDataType: int16
T_61: (in 0x01 : byte)
  Class: Eq_61
  DataType: uint8
  OrigDataType: uint8
T_62: (in Mem0[ds_9:si_37 + 0x0000:byte] - Mem0[ds_9:si_37 + 0x0001:byte] - (si_37 <u 0x0000) >> 0x01 : word16)
  Class: Eq_62
  DataType: int16
  OrigDataType: int16
T_63: (in si_37 + 0x0001 : word16)
  Class: Eq_63
  DataType: word16
  OrigDataType: word16
T_64: (in Mem0[ds_9:si_37 + 0x0001:byte] : byte)
  Class: Eq_56
  DataType: byte
  OrigDataType: byte
T_65: (in (Mem0[ds_9:si_37 + 0x0000:byte] - Mem0[ds_9:si_37 + 0x0001:byte] - (si_37 <u 0x0000) >> 0x01) + Mem0[ds_9:si_37 + 0x0001:byte] : byte)
  Class: Eq_65
  DataType: byte
  OrigDataType: byte
T_66: (in DPB(ax_18, (Mem0[ds_9:si_37 + 0x0000:byte] - Mem0[ds_9:si_37 + 0x0001:byte] - (si_37 <u 0x0000) >> 0x01) + Mem0[ds_9:si_37 + 0x0001:byte], 0, 8) : word16)
  Class: Eq_50
  DataType: word16
  OrigDataType: word16
T_67: (in al_48 : byte)
  Class: Eq_67
  DataType: byte
  OrigDataType: byte
T_68: (in 0x0001 : word16)
  Class: Eq_68
  DataType: word16
  OrigDataType: word16
T_69: (in ax_45 - 0x0001 : word16)
  Class: Eq_69
  DataType: word16
  OrigDataType: word16
T_70: (in (byte) (ax_45 - 0x0001) : byte)
  Class: Eq_67
  DataType: byte
  OrigDataType: byte
T_71: (in cl_49 : Eq_71)
  Class: Eq_71
  DataType: Eq_71
  OrigDataType: bcu8
T_72: (in cl_27 >>u cl_27 : word16)
  Class: Eq_71
  DataType: Eq_71
  OrigDataType: uint16
T_73: (in cl_52 : Eq_73)
  Class: Eq_73
  DataType: Eq_73
  OrigDataType: ui8
T_74: (in cl_49 + al_48 : word16)
  Class: Eq_74
  DataType: word16
  OrigDataType: word16
T_75: (in 0x00 : byte)
  Class: Eq_71
  DataType: bcu8
  OrigDataType: bcu8
T_76: (in cl_49 <u 0x00 : bool)
  Class: Eq_76
  DataType: bool
  OrigDataType: bool
T_77: (in cl_49 + al_48 + (cl_49 <u 0x00) : word16)
  Class: Eq_73
  DataType: Eq_73
  OrigDataType: word16
T_78: (in si_37 + 0x0001 : word16)
  Class: Eq_46
  DataType: word16
  OrigDataType: word16
T_79: (in ax_45 - 0x0001 : word16)
  Class: Eq_36
  DataType: uint16
  OrigDataType: word16
T_80: (in 0x02 : byte)
  Class: Eq_80
  DataType: ui8
  OrigDataType: ui8
T_81: (in cl_52 * 0x02 : byte)
  Class: Eq_81
  DataType: ui8
  OrigDataType: ui8
T_82: (in cond(cl_52 * 0x02) : byte)
  Class: Eq_38
  DataType: bool
  OrigDataType: byte
T_83: (in bx_61 : (memptr (ptr Eq_13) byte))
  Class: Eq_83
  DataType: (memptr (ptr Eq_13) byte)
  OrigDataType: (memptr T_13 (struct (0 T_94 t0000)))
T_84: (in di : (memptr (ptr Eq_13) byte))
  Class: Eq_83
  DataType: (memptr (ptr Eq_13) byte)
  OrigDataType: word16
T_85: (in cl_52 * 0x02 : byte)
  Class: Eq_85
  DataType: int8
  OrigDataType: int8
T_86: (in 0x00 : byte)
  Class: Eq_85
  DataType: int8
  OrigDataType: int8
T_87: (in cl_52 * 0x02 < 0x00 : bool)
  Class: Eq_87
  DataType: bool
  OrigDataType: bool
T_88: (in cl_52 * 0x02 : byte)
  Class: Eq_88
  DataType: uint8
  OrigDataType: uint8
T_89: (in 0x00 : byte)
  Class: Eq_88
  DataType: uint8
  OrigDataType: bcu8
T_90: (in cl_52 * 0x02 <u 0x00 : bool)
  Class: Eq_90
  DataType: bool
  OrigDataType: bool
T_91: (in 0xFEC0 : word16)
  Class: Eq_83
  DataType: (memptr (ptr Eq_13) byte)
  OrigDataType: word16
T_92: (in si_37 + 0x0001 : word16)
  Class: Eq_92
  DataType: word16
  OrigDataType: word16
T_93: (in bx_61 + (si_37 + 0x0001) : word16)
  Class: Eq_93
  DataType: word16
  OrigDataType: word16
T_94: (in Mem69[ds_9:bx_61 + (si_37 + 0x0001):byte] : byte)
  Class: Eq_67
  DataType: byte
  OrigDataType: byte
T_95: (in 0x0001 : word16)
  Class: Eq_95
  DataType: word16
  OrigDataType: word16
T_96: (in cx_10 - 0x0001 : word16)
  Class: Eq_15
  DataType: uint16
  OrigDataType: word16
T_97: (in (byte) cx_10 : byte)
  Class: Eq_41
  DataType: uint8
  OrigDataType: byte
T_98: (in 0x0000 : word16)
  Class: Eq_15
  DataType: uint16
  OrigDataType: word16
T_99: (in cx_10 != 0x0000 : bool)
  Class: Eq_99
  DataType: bool
  OrigDataType: bool
T_100: (in bx_61 ^ di : word16)
  Class: Eq_83
  DataType: (memptr (ptr Eq_13) byte)
  OrigDataType: word16
T_101: (in false : bool)
  Class: Eq_38
  DataType: bool
  OrigDataType: bool
T_102: (in ax_77 : int16)
  Class: Eq_102
  DataType: int16
  OrigDataType: word16
T_103: (in __inb : ptr32)
  Class: Eq_103
  DataType: (ptr Eq_103)
  OrigDataType: (ptr (fn T_105 (T_104)))
T_104: (in 0x60 : byte)
  Class: Eq_104
  DataType: byte
  OrigDataType: byte
T_105: (in __inb(0x60) : byte)
  Class: Eq_105
  DataType: byte
  OrigDataType: byte
T_106: (in (int16) __inb(0x60) : int16)
  Class: Eq_102
  DataType: int16
  OrigDataType: int16
T_107: (in 0x0001 : word16)
  Class: Eq_107
  DataType: word16
  OrigDataType: word16
T_108: (in ax_77 - 0x0001 : word16)
  Class: Eq_36
  DataType: uint16
  OrigDataType: word16
T_109: (in al_79 : byte)
  Class: Eq_4
  DataType: byte
  OrigDataType: byte
T_110: (in ax_77 - 0x0001 : word16)
  Class: Eq_110
  DataType: word16
  OrigDataType: word16
T_111: (in (byte) (ax_77 - 0x0001) : byte)
  Class: Eq_4
  DataType: byte
  OrigDataType: byte
T_112: (in 0x0001 : word16)
  Class: Eq_102
  DataType: int16
  OrigDataType: word16
T_113: (in ax_77 != 0x0001 : bool)
  Class: Eq_113
  DataType: bool
  OrigDataType: bool
T_114: (in bios_video_set_mode : ptr32)
  Class: Eq_2
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (fn T_115 (T_109)))
T_115: (in bios_video_set_mode(al_79) : void)
  Class: Eq_6
  DataType: void
  OrigDataType: void
T_116:
  Class: Eq_116
  DataType: Eq_116
  OrigDataType: 
*/
typedef struct Globals {
} Eq_1;

typedef void (Eq_2)(byte);

typedef union Eq_7 {
	ptr32 u0;
	segptr32 u1;
} Eq_7;

typedef struct Eq_8 {
} Eq_8;

typedef struct Eq_13 {
	byte bFFFFFEC0;	// FFFFFEC0
	byte bFEC0;	// FEC0
} Eq_13;

typedef void (Eq_17)(word16, byte);

typedef void (Eq_24)(word16, byte);

typedef void (Eq_28)(word16, byte);

typedef union Eq_45 {
	cups16 u0;
	Eq_116 Eq_13::* u1;
} Eq_45;

typedef union Eq_71 {
	uint16 u0;
	bcu8 u1;
} Eq_71;

typedef union Eq_73 {
	ui8 u0;
	word16 u1;
} Eq_73;

typedef byte (Eq_103)(byte);

typedef struct Eq_116 {
	byte b0000;	// 0
	byte b0001;	// 1
} Eq_116;

