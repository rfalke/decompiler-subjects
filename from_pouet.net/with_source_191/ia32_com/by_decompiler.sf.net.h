// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_191/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_81) ptrFFFA0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_7: (fn void (word16, byte))
	T_7 (in __outb : ptr32)
Eq_11: (fn void (word16, byte))
	T_11 (in __outb : ptr32)
Eq_13: (fn byte (word16))
	T_13 (in __inb : ptr32)
Eq_30: (fn void (word16, byte))
	T_30 (in __outb : ptr32)
Eq_31: (segment "Eq_31" (16E (arr byte) a016E))
	T_31 (in cs : selector)
Eq_46: (fn void (word16, int8))
	T_46 (in __outb : ptr32)
Eq_51: (fn void (word16, int8))
	T_51 (in __outb : ptr32)
Eq_53: (fn void (word16, byte))
	T_53 (in __outb : ptr32)
Eq_56: (fn void (word16, int8))
	T_56 (in __outb : ptr32)
Eq_81: (segment "Eq_81" (0 byte b0000))
	T_81 (in 0xA000 : selector)
Eq_95: (fn byte (word16))
	T_95 (in __inb : ptr32)
Eq_101: (fn byte (byte))
	T_101 (in __inb : ptr32)
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
T_5: (in al : byte)
  Class: Eq_4
  DataType: byte
  OrigDataType: byte
T_6: (in bios_video_set_mode(al) : void)
  Class: Eq_6
  DataType: void
  OrigDataType: void
T_7: (in __outb : ptr32)
  Class: Eq_7
  DataType: (ptr Eq_7)
  OrigDataType: (ptr (fn T_10 (T_8, T_9)))
T_8: (in 0x03D4 : word16)
  Class: Eq_8
  DataType: word16
  OrigDataType: word16
T_9: (in 0x11 : byte)
  Class: Eq_9
  DataType: byte
  OrigDataType: byte
T_10: (in __outb(0x03D4, 0x11) : void)
  Class: Eq_10
  DataType: void
  OrigDataType: void
T_11: (in __outb : ptr32)
  Class: Eq_11
  DataType: (ptr Eq_11)
  OrigDataType: (ptr (fn T_18 (T_12, T_17)))
T_12: (in 0x03D5 : word16)
  Class: Eq_12
  DataType: word16
  OrigDataType: word16
T_13: (in __inb : ptr32)
  Class: Eq_13
  DataType: (ptr Eq_13)
  OrigDataType: (ptr (fn T_15 (T_14)))
T_14: (in 0x03D5 : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_15: (in __inb(0x03D5) : byte)
  Class: Eq_15
  DataType: byte
  OrigDataType: byte
T_16: (in 0x7F : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_17: (in __inb(0x03D5) & 0x7F : byte)
  Class: Eq_17
  DataType: byte
  OrigDataType: byte
T_18: (in __outb(0x03D5, __inb(0x03D5) & 0x7F) : void)
  Class: Eq_18
  DataType: void
  OrigDataType: void
T_19: (in si_10 : (memptr (ptr Eq_31) byte))
  Class: Eq_19
  DataType: (memptr (ptr Eq_31) byte)
  OrigDataType: (memptr T_31 (struct 0001 (0 T_41 t0000)))
T_20: (in 0x016E : word16)
  Class: Eq_19
  DataType: (memptr (ptr Eq_31) byte)
  OrigDataType: word16
T_21: (in dx_17 : word16)
  Class: Eq_21
  DataType: word16
  OrigDataType: word16
T_22: (in 0x03D5 : word16)
  Class: Eq_21
  DataType: word16
  OrigDataType: word16
T_23: (in dx_36 : word16)
  Class: Eq_23
  DataType: word16
  OrigDataType: word16
T_24: (in 0xC8 : byte)
  Class: Eq_24
  DataType: byte
  OrigDataType: byte
T_25: (in DPB(dx_17, 0xC8, 0, 8) : word16)
  Class: Eq_23
  DataType: word16
  OrigDataType: word16
T_26: (in cl_37 : int8)
  Class: Eq_26
  DataType: int8
  OrigDataType: int8
T_27: (in 0x3F : byte)
  Class: Eq_26
  DataType: int8
  OrigDataType: byte
T_28: (in al_24 : byte)
  Class: Eq_28
  DataType: byte
  OrigDataType: byte
T_29: (in DPB(dx_17, al_24, 0, 8) : word16)
  Class: Eq_21
  DataType: word16
  OrigDataType: word16
T_30: (in __outb : ptr32)
  Class: Eq_30
  DataType: (ptr Eq_30)
  OrigDataType: (ptr (fn T_36 (T_21, T_35)))
T_31: (in cs : selector)
  Class: Eq_31
  DataType: (ptr Eq_31)
  OrigDataType: (ptr (segment (16E (arr T_106) a016E)))
T_32: (in si_25 : (memptr (ptr Eq_31) byte))
  Class: Eq_32
  DataType: (memptr (ptr Eq_31) byte)
  OrigDataType: (memptr T_31 (struct (0 T_35 t0000)))
T_33: (in 0x0000 : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_34: (in si_25 + 0x0000 : word16)
  Class: Eq_34
  DataType: word16
  OrigDataType: word16
T_35: (in Mem0[cs:si_25 + 0x0000:byte] : byte)
  Class: Eq_35
  DataType: byte
  OrigDataType: byte
T_36: (in __outb(dx_17, cs->*si_25) : void)
  Class: Eq_36
  DataType: void
  OrigDataType: void
T_37: (in 0x0001 : word16)
  Class: Eq_37
  DataType: word16
  OrigDataType: word16
T_38: (in si_25 + 0x0001 : word16)
  Class: Eq_19
  DataType: (memptr (ptr Eq_31) byte)
  OrigDataType: word16
T_39: (in 0x0000 : word16)
  Class: Eq_39
  DataType: word16
  OrigDataType: word16
T_40: (in si_10 + 0x0000 : word16)
  Class: Eq_40
  DataType: word16
  OrigDataType: word16
T_41: (in Mem0[cs:si_10 + 0x0000:byte] : byte)
  Class: Eq_28
  DataType: byte
  OrigDataType: byte
T_42: (in 0x0001 : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_43: (in si_10 + 0x0001 : word16)
  Class: Eq_32
  DataType: (memptr (ptr Eq_31) byte)
  OrigDataType: word16
T_44: (in 0x00 : byte)
  Class: Eq_28
  DataType: byte
  OrigDataType: byte
T_45: (in al_24 == 0x00 : bool)
  Class: Eq_45
  DataType: bool
  OrigDataType: bool
T_46: (in __outb : ptr32)
  Class: Eq_46
  DataType: (ptr Eq_46)
  OrigDataType: (ptr (fn T_47 (T_23, T_26)))
T_47: (in __outb(dx_36, cl_37) : void)
  Class: Eq_47
  DataType: void
  OrigDataType: void
T_48: (in dx_41 : word16)
  Class: Eq_48
  DataType: word16
  OrigDataType: word16
T_49: (in 0x0001 : word16)
  Class: Eq_49
  DataType: word16
  OrigDataType: word16
T_50: (in dx_36 + 0x0001 : word16)
  Class: Eq_48
  DataType: word16
  OrigDataType: word16
T_51: (in __outb : ptr32)
  Class: Eq_51
  DataType: (ptr Eq_51)
  OrigDataType: (ptr (fn T_52 (T_48, T_26)))
T_52: (in __outb(dx_41, cl_37) : void)
  Class: Eq_52
  DataType: void
  OrigDataType: void
T_53: (in __outb : ptr32)
  Class: Eq_53
  DataType: (ptr Eq_53)
  OrigDataType: (ptr (fn T_55 (T_48, T_54)))
T_54: (in 0x00 : byte)
  Class: Eq_54
  DataType: byte
  OrigDataType: byte
T_55: (in __outb(dx_41, 0x00) : void)
  Class: Eq_55
  DataType: void
  OrigDataType: void
T_56: (in __outb : ptr32)
  Class: Eq_56
  DataType: (ptr Eq_56)
  OrigDataType: (ptr (fn T_57 (T_48, T_26)))
T_57: (in __outb(dx_41, cl_37) : void)
  Class: Eq_57
  DataType: void
  OrigDataType: void
T_58: (in 0x0001 : word16)
  Class: Eq_58
  DataType: word16
  OrigDataType: word16
T_59: (in dx_41 - 0x0001 : word16)
  Class: Eq_23
  DataType: word16
  OrigDataType: word16
T_60: (in 0x01 : byte)
  Class: Eq_60
  DataType: byte
  OrigDataType: byte
T_61: (in cl_37 - 0x01 : byte)
  Class: Eq_26
  DataType: int8
  OrigDataType: byte
T_62: (in 0x00 : byte)
  Class: Eq_26
  DataType: int8
  OrigDataType: int8
T_63: (in cl_37 >= 0x00 : bool)
  Class: Eq_63
  DataType: bool
  OrigDataType: bool
T_64: (in dx_55 : word16)
  Class: Eq_64
  DataType: word16
  OrigDataType: word16
T_65: (in dx_41 - 0x0001 : word16)
  Class: Eq_65
  DataType: word16
  OrigDataType: word16
T_66: (in 0xDA : byte)
  Class: Eq_66
  DataType: byte
  OrigDataType: byte
T_67: (in DPB(dx_41 - 0x0001, 0xDA, 0, 8) : word16)
  Class: Eq_64
  DataType: word16
  OrigDataType: word16
T_68: (in ch : uint8)
  Class: Eq_68
  DataType: uint8
  OrigDataType: uint8
T_69: (in bh : byte)
  Class: Eq_69
  DataType: uint8
  OrigDataType: uint8
T_70: (in ch *u bh : uint16)
  Class: Eq_70
  DataType: uint16
  OrigDataType: uint16
T_71: (in 0x0004 : word16)
  Class: Eq_71
  DataType: uint16
  OrigDataType: uint16
T_72: (in ch *u bh >>u 0x0004 : word16)
  Class: Eq_72
  DataType: uint16
  OrigDataType: uint16
T_73: (in bl : byte)
  Class: Eq_73
  DataType: uint8
  OrigDataType: uint8
T_74: (in ch *u bl : uint16)
  Class: Eq_74
  DataType: uint16
  OrigDataType: uint16
T_75: (in 0x0004 : word16)
  Class: Eq_75
  DataType: uint16
  OrigDataType: uint16
T_76: (in ch *u bl >>u 0x0004 : word16)
  Class: Eq_76
  DataType: uint16
  OrigDataType: uint16
T_77: (in ch *u bh >>u 0x0004 ^ ch *u bl >>u 0x0004 : word16)
  Class: Eq_77
  DataType: word16
  OrigDataType: word16
T_78: (in (byte) (ch *u bh >>u 0x0004 ^ ch *u bl >>u 0x0004) : byte)
  Class: Eq_78
  DataType: byte
  OrigDataType: byte
T_79: (in 0x3F : byte)
  Class: Eq_79
  DataType: byte
  OrigDataType: byte
T_80: (in (byte) (ch *u bh >>u 0x0004 ^ ch *u bl >>u 0x0004) & 0x3F : byte)
  Class: Eq_80
  DataType: byte
  OrigDataType: byte
T_81: (in 0xA000 : selector)
  Class: Eq_81
  DataType: (ptr Eq_81)
  OrigDataType: (ptr (segment))
T_82: (in bx : (memptr (ptr Eq_81) byte))
  Class: Eq_82
  DataType: (memptr (ptr Eq_81) byte)
  OrigDataType: (memptr T_81 (struct 0001 (0 T_85 t0000)))
T_83: (in 0x0000 : word16)
  Class: Eq_83
  DataType: word16
  OrigDataType: word16
T_84: (in bx + 0x0000 : word16)
  Class: Eq_84
  DataType: word16
  OrigDataType: word16
T_85: (in Mem74[0xA000:bx + 0x0000:byte] : byte)
  Class: Eq_80
  DataType: byte
  OrigDataType: byte
T_86: (in bx_75 : (memptr (ptr Eq_81) byte))
  Class: Eq_82
  DataType: (memptr (ptr Eq_81) byte)
  OrigDataType: word16
T_87: (in 0x0001 : word16)
  Class: Eq_87
  DataType: word16
  OrigDataType: word16
T_88: (in bx + 0x0001 : word16)
  Class: Eq_82
  DataType: (memptr (ptr Eq_81) byte)
  OrigDataType: word16
T_89: (in (byte) bx_75 : byte)
  Class: Eq_73
  DataType: uint8
  OrigDataType: byte
T_90: (in SLICE(bx_75, byte, 8) : byte)
  Class: Eq_69
  DataType: uint8
  OrigDataType: byte
T_91: (in 0x0000 : word16)
  Class: Eq_82
  DataType: (memptr (ptr Eq_81) byte)
  OrigDataType: word16
T_92: (in bx_75 != &Eq_81::b0000 : bool)
  Class: Eq_92
  DataType: bool
  OrigDataType: bool
T_93: (in 0x01 : byte)
  Class: Eq_93
  DataType: byte
  OrigDataType: byte
T_94: (in ch + 0x01 : byte)
  Class: Eq_68
  DataType: uint8
  OrigDataType: byte
T_95: (in __inb : ptr32)
  Class: Eq_95
  DataType: (ptr Eq_95)
  OrigDataType: (ptr (fn T_96 (T_64)))
T_96: (in __inb(dx_55) : byte)
  Class: Eq_96
  DataType: byte
  OrigDataType: byte
T_97: (in 0x08 : byte)
  Class: Eq_97
  DataType: byte
  OrigDataType: byte
T_98: (in __inb(dx_55) & 0x08 : byte)
  Class: Eq_98
  DataType: byte
  OrigDataType: byte
T_99: (in 0x00 : byte)
  Class: Eq_98
  DataType: byte
  OrigDataType: byte
T_100: (in (__inb(dx_55) & 0x08) != 0x00 : bool)
  Class: Eq_100
  DataType: bool
  OrigDataType: bool
T_101: (in __inb : ptr32)
  Class: Eq_101
  DataType: (ptr Eq_101)
  OrigDataType: (ptr (fn T_103 (T_102)))
T_102: (in 0x60 : byte)
  Class: Eq_102
  DataType: byte
  OrigDataType: byte
T_103: (in __inb(0x60) : byte)
  Class: Eq_103
  DataType: byte
  OrigDataType: byte
T_104: (in 0x01 : byte)
  Class: Eq_103
  DataType: byte
  OrigDataType: byte
T_105: (in __inb(0x60) != 0x01 : bool)
  Class: Eq_105
  DataType: bool
  OrigDataType: bool
T_106:
  Class: Eq_106
  DataType: byte
  OrigDataType: (struct 0001 (0 T_41 t0000))
*/
typedef Eq_81 Eq_1struct Globals {
	Eq_81 * ptrFFFA0000;	// FFFA0000
} Eq_1;

typedef void (Eq_2)(byte);

typedef void (Eq_7)(word16, byte);

typedef void (Eq_11)(word16, byte);

typedef byte (Eq_13)(word16);

typedef void (Eq_30)(word16, byte);

typedef  Eq_31[]struct Eq_31 {
	byte a016E[];	// 16E
} Eq_31;

typedef void (Eq_46)(word16, int8);

typedef void (Eq_51)(word16, int8);

typedef void (Eq_53)(word16, byte);

typedef void (Eq_56)(word16, int8);

typedef struct Eq_81 {
	byte b0000;	// 0
} Eq_81;

typedef byte (Eq_95)(word16);

typedef byte (Eq_101)(byte);

