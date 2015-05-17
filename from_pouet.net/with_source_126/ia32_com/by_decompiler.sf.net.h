// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_126/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_45) ptrFFFA0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_11: (fn void (word16, byte))
	T_11 (in __outb : ptr32)
Eq_19: (fn void (word16, byte))
	T_19 (in __outb : ptr32)
Eq_22: (fn void (word16, byte))
	T_22 (in __outb : ptr32)
Eq_25: (fn void (word16, byte))
	T_25 (in __outb : ptr32)
Eq_45: (segment "Eq_45" (FFFFF8C0 (struct "Eq_57" 0001 (0 byte b0000) (1 byte b0001) (140 byte b0140)) tFFFFF8C0) (0 (arr byte 1855) a0000) (1 (arr byte 1855) a0001) (140 (arr byte 1855) a0140) (F8C0 Eq_57 tF8C0))
	T_45 (in 0xA000 : selector)
Eq_57: (struct "Eq_57" 0001 (0 byte b0000) (1 byte b0001) (140 byte b0140))
	T_57 (in cx_54 : (memptr (ptr Eq_45) Eq_57))
	T_58 (in 0xF8C0 : word16)
	T_81 (in cx_54 - 0x0001 : word16)
	T_82 (in 0x0000 : word16)
Eq_88: (fn byte (word16))
	T_88 (in __inb : ptr32)
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
T_7: (in ax_10 : uint16)
  Class: Eq_7
  DataType: uint16
  OrigDataType: uint16
T_8: (in 0xA000 : word16)
  Class: Eq_7
  DataType: uint16
  OrigDataType: word16
T_9: (in al_24 : byte)
  Class: Eq_9
  DataType: byte
  OrigDataType: byte
T_10: (in 0x00 : byte)
  Class: Eq_9
  DataType: byte
  OrigDataType: byte
T_11: (in __outb : ptr32)
  Class: Eq_11
  DataType: (ptr Eq_11)
  OrigDataType: (ptr (fn T_13 (T_12, T_9)))
T_12: (in 0x03C8 : word16)
  Class: Eq_12
  DataType: word16
  OrigDataType: word16
T_13: (in __outb(0x03C8, al_24) : void)
  Class: Eq_13
  DataType: void
  OrigDataType: void
T_14: (in ax_15 : uint16)
  Class: Eq_14
  DataType: uint16
  OrigDataType: word16
T_15: (in 0x0002 : word16)
  Class: Eq_15
  DataType: uint16
  OrigDataType: uint16
T_16: (in ax_10 >>u 0x0002 : word16)
  Class: Eq_14
  DataType: uint16
  OrigDataType: uint16
T_17: (in al_16 : byte)
  Class: Eq_17
  DataType: byte
  OrigDataType: byte
T_18: (in (byte) ax_15 : byte)
  Class: Eq_17
  DataType: byte
  OrigDataType: byte
T_19: (in __outb : ptr32)
  Class: Eq_19
  DataType: (ptr Eq_19)
  OrigDataType: (ptr (fn T_21 (T_20, T_17)))
T_20: (in 0x03C9 : word16)
  Class: Eq_20
  DataType: word16
  OrigDataType: word16
T_21: (in __outb(0x03C9, al_16) : void)
  Class: Eq_21
  DataType: void
  OrigDataType: void
T_22: (in __outb : ptr32)
  Class: Eq_22
  DataType: (ptr Eq_22)
  OrigDataType: (ptr (fn T_24 (T_23, T_17)))
T_23: (in 0x03C9 : word16)
  Class: Eq_23
  DataType: word16
  OrigDataType: word16
T_24: (in __outb(0x03C9, al_16) : void)
  Class: Eq_24
  DataType: void
  OrigDataType: void
T_25: (in __outb : ptr32)
  Class: Eq_25
  DataType: (ptr Eq_25)
  OrigDataType: (ptr (fn T_27 (T_26, T_17)))
T_26: (in 0x03C9 : word16)
  Class: Eq_26
  DataType: word16
  OrigDataType: word16
T_27: (in __outb(0x03C9, al_16) : void)
  Class: Eq_27
  DataType: void
  OrigDataType: void
T_28: (in bx_14 : word16)
  Class: Eq_28
  DataType: word16
  OrigDataType: word16
T_29: (in bx : word16)
  Class: Eq_14
  DataType: uint16
  OrigDataType: word16
T_30: (in DPB(bx, al_24, 0, 8) : word16)
  Class: Eq_28
  DataType: word16
  OrigDataType: word16
T_31: (in dx_12 : word16)
  Class: Eq_31
  DataType: word16
  OrigDataType: word16
T_32: (in 0x03C9 : word16)
  Class: Eq_31
  DataType: word16
  OrigDataType: word16
T_33: (in bl_21 : byte)
  Class: Eq_33
  DataType: byte
  OrigDataType: byte
T_34: (in (byte) ax_15 : byte)
  Class: Eq_33
  DataType: byte
  OrigDataType: byte
T_35: (in 0x0001 : word16)
  Class: Eq_35
  DataType: word16
  OrigDataType: word16
T_36: (in bx_14 - 0x0001 : word16)
  Class: Eq_7
  DataType: uint16
  OrigDataType: word16
T_37: (in bx_14 - 0x0001 : word16)
  Class: Eq_37
  DataType: word16
  OrigDataType: word16
T_38: (in (byte) (bx_14 - 0x0001) : byte)
  Class: Eq_9
  DataType: byte
  OrigDataType: byte
T_39: (in 0x0001 : word16)
  Class: Eq_28
  DataType: word16
  OrigDataType: word16
T_40: (in bx_14 != 0x0001 : bool)
  Class: Eq_40
  DataType: bool
  OrigDataType: bool
T_41: (in ax_29 : uint16)
  Class: Eq_41
  DataType: uint16
  OrigDataType: uint16
T_42: (in bx_14 - 0x0001 : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_43: (in 0xFA : byte)
  Class: Eq_43
  DataType: byte
  OrigDataType: byte
T_44: (in DPB(bx_14 - 0x0001, 0xFA, 8, 8) : word16)
  Class: Eq_41
  DataType: uint16
  OrigDataType: word16
T_45: (in 0xA000 : selector)
  Class: Eq_45
  DataType: (ptr Eq_45)
  OrigDataType: (ptr (segment (0 (arr T_100 1855) a0000) (1 (arr T_98 1855) a0001) (140 (arr T_99 1855) a0140)))
T_46: (in di : (memptr (ptr Eq_45) byte))
  Class: Eq_46
  DataType: (memptr (ptr Eq_45) byte)
  OrigDataType: (memptr T_45 (struct 0001 (0 T_49 t0000)))
T_47: (in 0x0000 : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_48: (in di + 0x0000 : word16)
  Class: Eq_48
  DataType: word16
  OrigDataType: word16
T_49: (in Mem34[0xA000:di + 0x0000:byte] : byte)
  Class: Eq_9
  DataType: byte
  OrigDataType: byte
T_50: (in 0x0001 : word16)
  Class: Eq_50
  DataType: word16
  OrigDataType: word16
T_51: (in ax_29 - 0x0001 : word16)
  Class: Eq_41
  DataType: uint16
  OrigDataType: word16
T_52: (in 0x0001 : word16)
  Class: Eq_52
  DataType: word16
  OrigDataType: word16
T_53: (in di + 0x0001 : word16)
  Class: Eq_46
  DataType: (memptr (ptr Eq_45) byte)
  OrigDataType: word16
T_54: (in (byte) ax_29 : byte)
  Class: Eq_9
  DataType: byte
  OrigDataType: byte
T_55: (in 0x0000 : word16)
  Class: Eq_41
  DataType: uint16
  OrigDataType: word16
T_56: (in ax_29 != 0x0000 : bool)
  Class: Eq_56
  DataType: bool
  OrigDataType: bool
T_57: (in cx_54 : (memptr (ptr Eq_45) Eq_57))
  Class: Eq_57
  DataType: (memptr (ptr Eq_45) Eq_57)
  OrigDataType: (memptr T_45 (struct 0001 (0 T_78 t0000) (1 T_61 t0001) (140 T_66 t0140)))
T_58: (in 0xF8C0 : word16)
  Class: Eq_57
  DataType: (memptr (ptr Eq_45) Eq_57)
  OrigDataType: word16
T_59: (in 0x0001 : word16)
  Class: Eq_59
  DataType: word16
  OrigDataType: word16
T_60: (in cx_54 + 0x0001 : word16)
  Class: Eq_60
  DataType: word16
  OrigDataType: word16
T_61: (in Mem34[0xA000:cx_54 + 0x0001:byte] : byte)
  Class: Eq_61
  DataType: byte
  OrigDataType: byte
T_62: (in DPB(dx_12, (0xA000->*cx_54).b0001, 0, 8) : word16)
  Class: Eq_31
  DataType: word16
  OrigDataType: word16
T_63: (in ax_63 : word16)
  Class: Eq_63
  DataType: word16
  OrigDataType: word16
T_64: (in 0x0140 : word16)
  Class: Eq_64
  DataType: word16
  OrigDataType: word16
T_65: (in cx_54 + 0x0140 : word16)
  Class: Eq_65
  DataType: word16
  OrigDataType: word16
T_66: (in Mem34[0xA000:cx_54 + 0x0140:byte] : byte)
  Class: Eq_66
  DataType: byte
  OrigDataType: byte
T_67: (in DPB(ax_29, (0xA000->*cx_54).b0140, 0, 8) : word16)
  Class: Eq_67
  DataType: word16
  OrigDataType: word16
T_68: (in DPB(ax_29, (0xA000->*cx_54).b0140, 0, 8) + dx_12 : word16)
  Class: Eq_63
  DataType: word16
  OrigDataType: word16
T_69: (in ax_66 : uint16)
  Class: Eq_69
  DataType: uint16
  OrigDataType: uint16
T_70: (in (byte) ax_63 : byte)
  Class: Eq_70
  DataType: byte
  OrigDataType: byte
T_71: (in (byte) ax_63 + bl_21 : byte)
  Class: Eq_71
  DataType: byte
  OrigDataType: byte
T_72: (in DPB(ax_63, (byte) ax_63 + bl_21, 0, 8) : word16)
  Class: Eq_69
  DataType: uint16
  OrigDataType: word16
T_73: (in 0x0001 : word16)
  Class: Eq_73
  DataType: uint16
  OrigDataType: uint16
T_74: (in ax_66 >>u 0x0001 : word16)
  Class: Eq_74
  DataType: uint16
  OrigDataType: uint16
T_75: (in (byte) (ax_66 >>u 0x0001) : byte)
  Class: Eq_75
  DataType: byte
  OrigDataType: byte
T_76: (in 0x0000 : word16)
  Class: Eq_76
  DataType: word16
  OrigDataType: word16
T_77: (in cx_54 + 0x0000 : word16)
  Class: Eq_77
  DataType: word16
  OrigDataType: word16
T_78: (in Mem71[0xA000:cx_54 + 0x0000:byte] : byte)
  Class: Eq_75
  DataType: byte
  OrigDataType: byte
T_79: (in ax_66 >>u 0x0001 : word16)
  Class: Eq_41
  DataType: uint16
  OrigDataType: uint16
T_80: (in 0x0001 : word16)
  Class: Eq_80
  DataType: word16
  OrigDataType: word16
T_81: (in cx_54 - 0x0001 : word16)
  Class: Eq_57
  DataType: (memptr (ptr Eq_45) Eq_57)
  OrigDataType: word16
T_82: (in 0x0000 : word16)
  Class: Eq_57
  DataType: (memptr (ptr Eq_45) Eq_57)
  OrigDataType: word16
T_83: (in cx_54 != Eq_45::a0000 : bool)
  Class: Eq_83
  DataType: bool
  OrigDataType: bool
T_84: (in 0x0001 : word16)
  Class: Eq_84
  DataType: word16
  OrigDataType: word16
T_85: (in bx + 0x0001 : word16)
  Class: Eq_14
  DataType: uint16
  OrigDataType: word16
T_86: (in ax_79 : word16)
  Class: Eq_86
  DataType: word16
  OrigDataType: word16
T_87: (in ax_66 >>u 0x0001 : word16)
  Class: Eq_87
  DataType: uint16
  OrigDataType: uint16
T_88: (in __inb : ptr32)
  Class: Eq_88
  DataType: (ptr Eq_88)
  OrigDataType: (ptr (fn T_90 (T_89)))
T_89: (in 0x0060 : word16)
  Class: Eq_89
  DataType: word16
  OrigDataType: word16
T_90: (in __inb(0x0060) : byte)
  Class: Eq_90
  DataType: byte
  OrigDataType: byte
T_91: (in DPB(ax_66 >>u 0x0001, __inb(0x0060), 0, 8) : word16)
  Class: Eq_86
  DataType: word16
  OrigDataType: word16
T_92: (in (byte) bx : byte)
  Class: Eq_33
  DataType: byte
  OrigDataType: byte
T_93: (in 0x0060 : word16)
  Class: Eq_31
  DataType: word16
  OrigDataType: word16
T_94: (in 0x0001 : word16)
  Class: Eq_94
  DataType: word16
  OrigDataType: word16
T_95: (in ax_79 - 0x0001 : word16)
  Class: Eq_41
  DataType: uint16
  OrigDataType: word16
T_96: (in 0x0001 : word16)
  Class: Eq_86
  DataType: word16
  OrigDataType: word16
T_97: (in ax_79 != 0x0001 : bool)
  Class: Eq_97
  DataType: bool
  OrigDataType: bool
T_98:
  Class: Eq_98
  DataType: byte
  OrigDataType: (struct 0001 (0 T_61 t0000))
T_99:
  Class: Eq_99
  DataType: byte
  OrigDataType: (struct 0001 (0 T_66 t0000))
T_100:
  Class: Eq_100
  DataType: byte
  OrigDataType: (struct 0001 (0 T_78 t0000))
*/
typedef Eq_45 Eq_1struct Globals {
	Eq_45 * ptrFFFA0000;	// FFFA0000
} Eq_1;

typedef void (Eq_2)(byte);

typedef void (Eq_11)(word16, byte);

typedef void (Eq_19)(word16, byte);

typedef void (Eq_22)(word16, byte);

typedef void (Eq_25)(word16, byte);

typedef struct Eq_57;
 Eq_45[1855][1855][1855]Eq_57struct Eq_45 {
	struct Eq_57 tFFFFF8C0;	// FFFFF8C0
	byte a0000[1855];	// 0
	byte a0001[1855];	// 1
	byte a0140[1855];	// 140
	Eq_57 tF8C0;	// F8C0
} Eq_45;

typedef struct Eq_57 Eq_57;

typedef byte (Eq_88)(word16);

