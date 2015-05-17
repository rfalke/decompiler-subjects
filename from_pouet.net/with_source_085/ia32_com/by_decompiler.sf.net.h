// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_085/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_21) ptrFFFA0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_20: (union "Eq_20" (uint16 u0) (byte u1))
	T_20 (in (byte) ax_21 + 0x09 : byte)
	T_25 (in Mem25[0xA000:di + 0x0000:byte] : byte)
	T_50 (in Mem30[0xA000:di + 0x0000:byte] : byte)
	T_57 (in (0xA000->*di).b0001 + (0xA000->*di).b0001 + (0xA000->*di).t0000 + (0xA000->*di).b0141 >>u 0x02 : word16)
	T_60 (in Mem47[0xA000:di + 0x0000:byte] : byte)
	T_72 (in al_60 : Eq_20)
	T_75 (in Mem47[0xA000:di - 0x0001:byte] : byte)
	T_78 (in v17_66 : Eq_20)
	T_81 (in Mem47[0xA000:di + 0x0000:byte] : byte)
	T_84 (in Mem67[0xA000:di + 0x0000:byte] : byte)
Eq_21: (segment "Eq_21")
	T_21 (in 0xA000 : selector)
	T_37 (in Mem30[ss:fp - 0x0002:word16] : word16)
Eq_22: (struct "Eq_22" 0001 (FFFFFEC1 byte bFFFFFEC1) (FFFFFFFF Eq_20 tFFFFFFFF) (0 Eq_20 t0000) (1 byte b0001) (141 byte b0141))
	T_22 (in di : (memptr (ptr Eq_21) Eq_22))
	T_28 (in di + 0x0001 : word16)
	T_62 (in di + 0x0001 : word16)
	T_88 (in di + 0x0001 : word16)
Eq_33: (segment "Eq_33")
	T_33 (in ss : selector)
Eq_34: (union "Eq_34" (ptr16 u0) ((memptr (ptr Eq_33) Eq_102) u1))
	T_34 (in fp : ptr16)
Eq_94: (fn byte (byte))
	T_94 (in __inb : ptr32)
Eq_102: (struct "Eq_102" (FFFFFFFE (ptr Eq_21) ptrFFFFFFFE))
	T_102
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
T_7: (in cx_17 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_8: (in ax : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_9: (in ax_18 : int16)
  Class: Eq_9
  DataType: int16
  OrigDataType: word16
T_10: (in bp : int16)
  Class: Eq_10
  DataType: int16
  OrigDataType: int16
T_11: (in 0x8805 : word16)
  Class: Eq_11
  DataType: int16
  OrigDataType: int16
T_12: (in bp *s 0x8805 : int16)
  Class: Eq_9
  DataType: int16
  OrigDataType: int16
T_13: (in ax_21 : uint16)
  Class: Eq_13
  DataType: uint16
  OrigDataType: word16
T_14: (in 0x0001 : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_15: (in ax_18 + 0x0001 : word16)
  Class: Eq_15
  DataType: uint16
  OrigDataType: uint16
T_16: (in 0x000B : word16)
  Class: Eq_16
  DataType: uint16
  OrigDataType: uint16
T_17: (in ax_18 + 0x0001 >>u 0x000B : word16)
  Class: Eq_13
  DataType: uint16
  OrigDataType: uint16
T_18: (in (byte) ax_21 : byte)
  Class: Eq_18
  DataType: byte
  OrigDataType: byte
T_19: (in 0x09 : byte)
  Class: Eq_19
  DataType: byte
  OrigDataType: byte
T_20: (in (byte) ax_21 + 0x09 : byte)
  Class: Eq_20
  DataType: Eq_20
  OrigDataType: byte
T_21: (in 0xA000 : selector)
  Class: Eq_21
  DataType: (ptr Eq_21)
  OrigDataType: (ptr (segment))
T_22: (in di : (memptr (ptr Eq_21) Eq_22))
  Class: Eq_22
  DataType: (memptr (ptr Eq_21) Eq_22)
  OrigDataType: (memptr T_21 (struct 0001 (FFFFFEC1 T_43 tFFFFFEC1) (FFFFFFFF T_75 tFFFFFFFF) (0 T_20 t0000) (1 T_46 t0001) (141 T_54 t0141)))
T_23: (in 0x0000 : word16)
  Class: Eq_23
  DataType: word16
  OrigDataType: word16
T_24: (in di + 0x0000 : word16)
  Class: Eq_24
  DataType: word16
  OrigDataType: word16
T_25: (in Mem25[0xA000:di + 0x0000:byte] : byte)
  Class: Eq_20
  DataType: Eq_20
  OrigDataType: byte
T_26: (in ax_18 + 0x0001 : word16)
  Class: Eq_10
  DataType: int16
  OrigDataType: word16
T_27: (in 0x0001 : word16)
  Class: Eq_27
  DataType: word16
  OrigDataType: word16
T_28: (in di + 0x0001 : word16)
  Class: Eq_22
  DataType: (memptr (ptr Eq_21) Eq_22)
  OrigDataType: word16
T_29: (in 0x0001 : word16)
  Class: Eq_29
  DataType: word16
  OrigDataType: word16
T_30: (in cx_17 - 0x0001 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_31: (in 0x0000 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_32: (in cx_17 != 0x0000 : bool)
  Class: Eq_32
  DataType: bool
  OrigDataType: bool
T_33: (in ss : selector)
  Class: Eq_33
  DataType: (ptr Eq_33)
  OrigDataType: (ptr (segment))
T_34: (in fp : ptr16)
  Class: Eq_34
  DataType: Eq_34
  OrigDataType: (union (ptr16 u0) ((memptr T_33 (struct (FFFFFFFE T_37 tFFFFFFFE))) u1))
T_35: (in 0x0002 : word16)
  Class: Eq_35
  DataType: word16
  OrigDataType: word16
T_36: (in fp - 0x0002 : word16)
  Class: Eq_36
  DataType: word16
  OrigDataType: word16
T_37: (in Mem30[ss:fp - 0x0002:word16] : word16)
  Class: Eq_21
  DataType: (ptr Eq_21)
  OrigDataType: word16
T_38: (in cx_35 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_39: (in 0x05 : byte)
  Class: Eq_39
  DataType: byte
  OrigDataType: byte
T_40: (in DPB(cx_17, 0x05, 0, 8) : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_41: (in 0x013F : word16)
  Class: Eq_41
  DataType: word16
  OrigDataType: word16
T_42: (in di - 0x013F : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_43: (in Mem30[0xA000:di - 0x013F:byte] : byte)
  Class: Eq_43
  DataType: byte
  OrigDataType: byte
T_44: (in 0x0001 : word16)
  Class: Eq_44
  DataType: word16
  OrigDataType: word16
T_45: (in di + 0x0001 : word16)
  Class: Eq_45
  DataType: word16
  OrigDataType: word16
T_46: (in Mem30[0xA000:di + 0x0001:byte] : byte)
  Class: Eq_46
  DataType: byte
  OrigDataType: byte
T_47: (in (0xA000->*di).b0001 + (0xA000->*di).b0001 : byte)
  Class: Eq_47
  DataType: byte
  OrigDataType: byte
T_48: (in 0x0000 : word16)
  Class: Eq_48
  DataType: word16
  OrigDataType: word16
T_49: (in di + 0x0000 : word16)
  Class: Eq_49
  DataType: word16
  OrigDataType: word16
T_50: (in Mem30[0xA000:di + 0x0000:byte] : byte)
  Class: Eq_20
  DataType: Eq_20
  OrigDataType: byte
T_51: (in (0xA000->*di).b0001 + (0xA000->*di).b0001 + (0xA000->*di).t0000 : byte)
  Class: Eq_51
  DataType: byte
  OrigDataType: byte
T_52: (in 0x0141 : word16)
  Class: Eq_52
  DataType: word16
  OrigDataType: word16
T_53: (in di + 0x0141 : word16)
  Class: Eq_53
  DataType: word16
  OrigDataType: word16
T_54: (in Mem30[0xA000:di + 0x0141:byte] : byte)
  Class: Eq_54
  DataType: byte
  OrigDataType: byte
T_55: (in (0xA000->*di).b0001 + (0xA000->*di).b0001 + (0xA000->*di).t0000 + (0xA000->*di).b0141 : byte)
  Class: Eq_55
  DataType: uint8
  OrigDataType: uint8
T_56: (in 0x02 : byte)
  Class: Eq_56
  DataType: uint8
  OrigDataType: uint8
T_57: (in (0xA000->*di).b0001 + (0xA000->*di).b0001 + (0xA000->*di).t0000 + (0xA000->*di).b0141 >>u 0x02 : word16)
  Class: Eq_20
  DataType: Eq_20
  OrigDataType: uint16
T_58: (in 0x0000 : word16)
  Class: Eq_58
  DataType: word16
  OrigDataType: word16
T_59: (in di + 0x0000 : word16)
  Class: Eq_59
  DataType: word16
  OrigDataType: word16
T_60: (in Mem47[0xA000:di + 0x0000:byte] : byte)
  Class: Eq_20
  DataType: Eq_20
  OrigDataType: byte
T_61: (in 0x0001 : word16)
  Class: Eq_61
  DataType: word16
  OrigDataType: word16
T_62: (in di + 0x0001 : word16)
  Class: Eq_22
  DataType: (memptr (ptr Eq_21) Eq_22)
  OrigDataType: word16
T_63: (in bx : word16)
  Class: Eq_63
  DataType: word16
  OrigDataType: word16
T_64: (in 0x0001 : word16)
  Class: Eq_64
  DataType: word16
  OrigDataType: word16
T_65: (in bx - 0x0001 : word16)
  Class: Eq_63
  DataType: word16
  OrigDataType: word16
T_66: (in 0x0000 : word16)
  Class: Eq_63
  DataType: word16
  OrigDataType: word16
T_67: (in bx != 0x0000 : bool)
  Class: Eq_67
  DataType: bool
  OrigDataType: bool
T_68: (in 0x0001 : word16)
  Class: Eq_68
  DataType: word16
  OrigDataType: word16
T_69: (in cx_35 - 0x0001 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_70: (in 0x0000 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_71: (in cx_35 != 0x0000 : bool)
  Class: Eq_71
  DataType: bool
  OrigDataType: bool
T_72: (in al_60 : Eq_20)
  Class: Eq_20
  DataType: Eq_20
  OrigDataType: (union (byte u0) (word16 u1))
T_73: (in 0x0001 : word16)
  Class: Eq_73
  DataType: word16
  OrigDataType: word16
T_74: (in di - 0x0001 : word16)
  Class: Eq_74
  DataType: word16
  OrigDataType: word16
T_75: (in Mem47[0xA000:di - 0x0001:byte] : byte)
  Class: Eq_20
  DataType: Eq_20
  OrigDataType: byte
T_76: (in ax_61 : word16)
  Class: Eq_76
  DataType: word16
  OrigDataType: word16
T_77: (in DPB(ax_21, al_60, 0, 8) : word16)
  Class: Eq_76
  DataType: word16
  OrigDataType: word16
T_78: (in v17_66 : Eq_20)
  Class: Eq_20
  DataType: Eq_20
  OrigDataType: word16
T_79: (in 0x0000 : word16)
  Class: Eq_79
  DataType: word16
  OrigDataType: word16
T_80: (in di + 0x0000 : word16)
  Class: Eq_80
  DataType: word16
  OrigDataType: word16
T_81: (in Mem47[0xA000:di + 0x0000:byte] : byte)
  Class: Eq_20
  DataType: Eq_20
  OrigDataType: byte
T_82: (in 0x0000 : word16)
  Class: Eq_82
  DataType: word16
  OrigDataType: word16
T_83: (in di + 0x0000 : word16)
  Class: Eq_83
  DataType: word16
  OrigDataType: word16
T_84: (in Mem67[0xA000:di + 0x0000:byte] : byte)
  Class: Eq_20
  DataType: Eq_20
  OrigDataType: byte
T_85: (in ax_79 : word16)
  Class: Eq_76
  DataType: word16
  OrigDataType: word16
T_86: (in DPB(ax_79, v17_66, 0, 8) : word16)
  Class: Eq_76
  DataType: word16
  OrigDataType: word16
T_87: (in 0x0001 : word16)
  Class: Eq_87
  DataType: word16
  OrigDataType: word16
T_88: (in di + 0x0001 : word16)
  Class: Eq_22
  DataType: (memptr (ptr Eq_21) Eq_22)
  OrigDataType: word16
T_89: (in 0x0001 : word16)
  Class: Eq_89
  DataType: word16
  OrigDataType: word16
T_90: (in cx_35 - 0x0001 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_91: (in 0x0000 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_92: (in cx_35 != 0x0000 : bool)
  Class: Eq_92
  DataType: bool
  OrigDataType: bool
T_93: (in ax_75 : word16)
  Class: Eq_93
  DataType: word16
  OrigDataType: word16
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
T_97: (in DPB(ax_79, __inb(0x60), 0, 8) : word16)
  Class: Eq_93
  DataType: word16
  OrigDataType: word16
T_98: (in 0x0001 : word16)
  Class: Eq_98
  DataType: word16
  OrigDataType: word16
T_99: (in ax_75 - 0x0001 : word16)
  Class: Eq_13
  DataType: uint16
  OrigDataType: word16
T_100: (in 0x0001 : word16)
  Class: Eq_93
  DataType: word16
  OrigDataType: word16
T_101: (in ax_75 != 0x0001 : bool)
  Class: Eq_101
  DataType: bool
  OrigDataType: bool
T_102:
  Class: Eq_102
  DataType: Eq_102
  OrigDataType: 
*/
typedef Eq_21 Eq_1struct Globals {
	Eq_21 * ptrFFFA0000;	// FFFA0000
} Eq_1;

typedef void (Eq_2)(byte);

typedef union Eq_20 {
	uint16 u0;
	byte u1;
} Eq_20;

typedef struct Eq_21 {
} Eq_21;

typedef Eq_20 Eq_22Eq_20 Eq_22struct Eq_22 {	// size: 1 1
	byte bFFFFFEC1;	// FFFFFEC1
	Eq_20 tFFFFFFFF;	// FFFFFFFF
	Eq_20 t0000;	// 0
	byte b0001;	// 1
	byte b0141;	// 141
} Eq_22;

typedef struct Eq_33 {
} Eq_33;

typedef union Eq_34 {
	ptr16 u0;
	Eq_102 Eq_33::* u1;
} Eq_34;

typedef byte (Eq_94)(byte);

typedef Eq_21 Eq_102struct Eq_102 {
	Eq_21 * ptrFFFFFFFE;	// FFFFFFFE
} Eq_102;

