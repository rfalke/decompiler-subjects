// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_130/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_38) ptrFFFA0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_11: (fn void (word16, byte))
	T_11 (in __outb : ptr32)
Eq_14: (fn void (word16, byte))
	T_14 (in __outb : ptr32)
Eq_17: (fn void (word16, byte))
	T_17 (in __outb : ptr32)
Eq_30: (fn byte (byte))
	T_30 (in __inb : ptr32)
Eq_38: (segment "Eq_38" (7D00 byte b7D00) (7E40 byte b7E40))
	T_38 (in 0xA000 : selector)
Eq_47: (fn byte (word16))
	T_47 (in __inb : ptr32)
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
T_7: (in ax_11 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_8: (in 0x0000 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_9: (in al_10 : byte)
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
T_12: (in 0x03C9 : word16)
  Class: Eq_12
  DataType: word16
  OrigDataType: word16
T_13: (in __outb(0x03C9, al_10) : void)
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
T_16: (in __outb(0x03C9, al_10) : void)
  Class: Eq_16
  DataType: void
  OrigDataType: void
T_17: (in __outb : ptr32)
  Class: Eq_17
  DataType: (ptr Eq_17)
  OrigDataType: (ptr (fn T_19 (T_18, T_9)))
T_18: (in 0x03C9 : word16)
  Class: Eq_18
  DataType: word16
  OrigDataType: word16
T_19: (in __outb(0x03C9, al_10) : void)
  Class: Eq_19
  DataType: void
  OrigDataType: void
T_20: (in 0x0001 : word16)
  Class: Eq_20
  DataType: word16
  OrigDataType: word16
T_21: (in ax_11 + 0x0001 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_22: (in (byte) ax_11 : byte)
  Class: Eq_9
  DataType: byte
  OrigDataType: byte
T_23: (in 0x0000 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_24: (in ax_11 != 0x0000 : bool)
  Class: Eq_24
  DataType: bool
  OrigDataType: bool
T_25: (in ax_16 : word16)
  Class: Eq_25
  DataType: word16
  OrigDataType: word16
T_26: (in 0xA000 : word16)
  Class: Eq_25
  DataType: word16
  OrigDataType: word16
T_27: (in bx_19 : (memptr (ptr Eq_38) byte))
  Class: Eq_27
  DataType: (memptr (ptr Eq_38) byte)
  OrigDataType: (memptr T_38 (struct 0001 (0 T_41 t0000)))
T_28: (in 0x7D00 : word16)
  Class: Eq_27
  DataType: (memptr (ptr Eq_38) byte)
  OrigDataType: word16
T_29: (in ax_35 : word16)
  Class: Eq_29
  DataType: word16
  OrigDataType: word16
T_30: (in __inb : ptr32)
  Class: Eq_30
  DataType: (ptr Eq_30)
  OrigDataType: (ptr (fn T_32 (T_31)))
T_31: (in 0x60 : byte)
  Class: Eq_31
  DataType: byte
  OrigDataType: byte
T_32: (in __inb(0x60) : byte)
  Class: Eq_32
  DataType: byte
  OrigDataType: byte
T_33: (in DPB(ax_16, __inb(0x60), 0, 8) : word16)
  Class: Eq_29
  DataType: word16
  OrigDataType: word16
T_34: (in 0x0001 : word16)
  Class: Eq_29
  DataType: word16
  OrigDataType: word16
T_35: (in ax_35 != 0x0001 : bool)
  Class: Eq_35
  DataType: bool
  OrigDataType: bool
T_36: (in 0x7D00 : word16)
  Class: Eq_27
  DataType: (memptr (ptr Eq_38) byte)
  OrigDataType: word16
T_37: (in 0x40 : byte)
  Class: Eq_37
  DataType: byte
  OrigDataType: byte
T_38: (in 0xA000 : selector)
  Class: Eq_38
  DataType: (ptr Eq_38)
  OrigDataType: (ptr (segment))
T_39: (in 0x0000 : word16)
  Class: Eq_39
  DataType: word16
  OrigDataType: word16
T_40: (in bx_19 + 0x0000 : word16)
  Class: Eq_40
  DataType: word16
  OrigDataType: word16
T_41: (in Mem42[0xA000:bx_19 + 0x0000:byte] : byte)
  Class: Eq_37
  DataType: byte
  OrigDataType: byte
T_42: (in 0x0001 : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_43: (in ax_35 - 0x0001 : word16)
  Class: Eq_43
  DataType: word16
  OrigDataType: word16
T_44: (in 0x40 : byte)
  Class: Eq_44
  DataType: byte
  OrigDataType: byte
T_45: (in DPB(ax_35 - 0x0001, 0x40, 0, 8) : word16)
  Class: Eq_25
  DataType: word16
  OrigDataType: word16
T_46: (in al_45 : byte)
  Class: Eq_46
  DataType: byte
  OrigDataType: byte
T_47: (in __inb : ptr32)
  Class: Eq_47
  DataType: (ptr Eq_47)
  OrigDataType: (ptr (fn T_49 (T_48)))
T_48: (in 0x03DA : word16)
  Class: Eq_48
  DataType: word16
  OrigDataType: word16
T_49: (in __inb(0x03DA) : byte)
  Class: Eq_46
  DataType: byte
  OrigDataType: byte
T_50: (in 0x08 : byte)
  Class: Eq_50
  DataType: byte
  OrigDataType: byte
T_51: (in al_45 & 0x08 : byte)
  Class: Eq_51
  DataType: byte
  OrigDataType: byte
T_52: (in DPB(ax_16, al_45 & 0x08, 0, 8) : word16)
  Class: Eq_25
  DataType: word16
  OrigDataType: word16
T_53: (in al_45 & 0x08 : byte)
  Class: Eq_53
  DataType: byte
  OrigDataType: byte
T_54: (in 0x00 : byte)
  Class: Eq_53
  DataType: byte
  OrigDataType: byte
T_55: (in (al_45 & 0x08) == 0x00 : bool)
  Class: Eq_55
  DataType: bool
  OrigDataType: bool
T_56: (in di_51 : (memptr (ptr Eq_38) byte))
  Class: Eq_56
  DataType: (memptr (ptr Eq_38) byte)
  OrigDataType: (memptr T_38 (struct 0001 (0 T_62 t0000)))
T_57: (in 0x7D00 : word16)
  Class: Eq_56
  DataType: (memptr (ptr Eq_38) byte)
  OrigDataType: word16
T_58: (in 0x0001 : word16)
  Class: Eq_58
  DataType: word16
  OrigDataType: word16
T_59: (in bx_19 + 0x0001 : word16)
  Class: Eq_27
  DataType: (memptr (ptr Eq_38) byte)
  OrigDataType: word16
T_60: (in 0x7E40 : word16)
  Class: Eq_27
  DataType: (memptr (ptr Eq_38) byte)
  OrigDataType: word16
T_61: (in bx_19 != &Eq_38::b7E40 : bool)
  Class: Eq_61
  DataType: bool
  OrigDataType: bool
T_62: (in al_60 : byte)
  Class: Eq_62
  DataType: byte
  OrigDataType: byte
T_63: (in 0x0000 : word16)
  Class: Eq_63
  DataType: word16
  OrigDataType: word16
T_64: (in di_51 + 0x0000 : word16)
  Class: Eq_64
  DataType: word16
  OrigDataType: word16
T_65: (in Mem42[0xA000:di_51 + 0x0000:byte] : byte)
  Class: Eq_62
  DataType: byte
  OrigDataType: byte
T_66: (in DPB(ax_16, al_60, 0, 8) : word16)
  Class: Eq_25
  DataType: word16
  OrigDataType: word16
T_67: (in 0x00 : byte)
  Class: Eq_62
  DataType: byte
  OrigDataType: byte
T_68: (in al_60 == 0x00 : bool)
  Class: Eq_68
  DataType: bool
  OrigDataType: bool
T_69: (in 0x0001 : word16)
  Class: Eq_69
  DataType: word16
  OrigDataType: word16
T_70: (in di_51 + 0x0001 : word16)
  Class: Eq_56
  DataType: (memptr (ptr Eq_38) byte)
  OrigDataType: word16
T_71: (in 0x7E40 : word16)
  Class: Eq_56
  DataType: (memptr (ptr Eq_38) byte)
  OrigDataType: word16
T_72: (in di_51 == &Eq_38::b7E40 : bool)
  Class: Eq_72
  DataType: bool
  OrigDataType: bool
T_73: (in 0x0001 : word16)
  Class: Eq_73
  DataType: word16
  OrigDataType: word16
T_74: (in ax_16 - 0x0001 : word16)
  Class: Eq_74
  DataType: word16
  OrigDataType: word16
T_75: (in (byte) (ax_16 - 0x0001) : byte)
  Class: Eq_62
  DataType: byte
  OrigDataType: byte
T_76: (in 0x0000 : word16)
  Class: Eq_76
  DataType: word16
  OrigDataType: word16
T_77: (in di_51 + 0x0000 : word16)
  Class: Eq_77
  DataType: word16
  OrigDataType: word16
T_78: (in Mem68[0xA000:di_51 + 0x0000:byte] : byte)
  Class: Eq_62
  DataType: byte
  OrigDataType: byte
T_79: (in ax_16 - 0x0001 : word16)
  Class: Eq_25
  DataType: word16
  OrigDataType: word16
*/
typedef Eq_38 Eq_1struct Globals {
	Eq_38 * ptrFFFA0000;	// FFFA0000
} Eq_1;

typedef void (Eq_2)(byte);

typedef void (Eq_11)(word16, byte);

typedef void (Eq_14)(word16, byte);

typedef void (Eq_17)(word16, byte);

typedef byte (Eq_30)(byte);

typedef struct Eq_38 {
	byte b7D00;	// 7D00
	byte b7E40;	// 7E40
} Eq_38;

typedef byte (Eq_47)(word16);

