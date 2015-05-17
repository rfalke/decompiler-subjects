// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_125/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFB8000 (ptr Eq_9) ptrFFFB8000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void ())
	T_2 (in __cli : ptr32)
Eq_9: (segment "Eq_9")
	T_9 (in 0xB800 : selector)
Eq_24: (fn void (word16, ui16))
	T_24 (in __outb : ptr32)
Eq_31: (fn void (word16, byte))
	T_31 (in __outb : ptr32)
Eq_36: (fn void (word16, byte))
	T_36 (in __outb : ptr32)
Eq_44: (fn byte (word16))
	T_44 (in __inb : ptr32)
Eq_54: (fn byte (word16))
	T_54 (in __inb : ptr32)
Eq_58: (fn void (word16, byte))
	T_58 (in __outb : ptr32)
Eq_67: (fn void (byte))
	T_67 (in __syscall : ptr32)
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr Eq_1)
  OrigDataType: (ptr (struct "Globals"))
T_2: (in __cli : ptr32)
  Class: Eq_2
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (fn T_3 ()))
T_3: (in __cli() : void)
  Class: Eq_3
  DataType: void
  OrigDataType: void
T_4: (in al_27 : byte)
  Class: Eq_4
  DataType: byte
  OrigDataType: byte
T_5: (in 0x01 : byte)
  Class: Eq_5
  DataType: byte
  OrigDataType: byte
T_6: (in al_27 & 0x01 : byte)
  Class: Eq_6
  DataType: byte
  OrigDataType: byte
T_7: (in 0x00 : byte)
  Class: Eq_6
  DataType: byte
  OrigDataType: byte
T_8: (in (al_27 & 0x01) == 0x00 : bool)
  Class: Eq_8
  DataType: bool
  OrigDataType: bool
T_9: (in 0xB800 : selector)
  Class: Eq_9
  DataType: (ptr Eq_9)
  OrigDataType: (ptr (segment))
T_10: (in di : (memptr (ptr Eq_9) byte))
  Class: Eq_10
  DataType: (memptr (ptr Eq_9) byte)
  OrigDataType: (memptr T_9 (struct (0 T_13 t0000)))
T_11: (in 0x0000 : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_12: (in di + 0x0000 : word16)
  Class: Eq_12
  DataType: word16
  OrigDataType: word16
T_13: (in Mem61[0xB800:di + 0x0000:byte] : byte)
  Class: Eq_4
  DataType: byte
  OrigDataType: byte
T_14: (in 0x03C9 : word16)
  Class: Eq_14
  DataType: uint16
  OrigDataType: word16
T_15: (in bx : uint16)
  Class: Eq_14
  DataType: uint16
  OrigDataType: uint16
T_16: (in 0x0001 : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_17: (in di + 0x0001 : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_18: (in 0x0001 : word16)
  Class: Eq_18
  DataType: word16
  OrigDataType: word16
T_19: (in di + 1 + 0x0001 : word16)
  Class: Eq_19
  DataType: word16
  OrigDataType: word16
T_20: (in 0x1FFF : word16)
  Class: Eq_20
  DataType: word16
  OrigDataType: word16
T_21: (in di + 1 + 0x0001 & 0x1FFF : word16)
  Class: Eq_10
  DataType: (memptr (ptr Eq_9) byte)
  OrigDataType: word16
T_22: (in 0xC9 : byte)
  Class: Eq_22
  DataType: byte
  OrigDataType: byte
T_23: (in cl : byte)
  Class: Eq_22
  DataType: byte
  OrigDataType: byte
T_24: (in __outb : ptr32)
  Class: Eq_24
  DataType: (ptr Eq_24)
  OrigDataType: (ptr (fn T_28 (T_25, T_27)))
T_25: (in 0x03C9 : word16)
  Class: Eq_25
  DataType: word16
  OrigDataType: word16
T_26: (in 0x02 : byte)
  Class: Eq_26
  DataType: byte
  OrigDataType: byte
T_27: (in al_27 << 0x02 : word16)
  Class: Eq_27
  DataType: ui16
  OrigDataType: ui16
T_28: (in __outb(0x03C9, al_27 << 0x02) : void)
  Class: Eq_28
  DataType: void
  OrigDataType: void
T_29: (in 0x05 : byte)
  Class: Eq_29
  DataType: byte
  OrigDataType: byte
T_30: (in cl + 0x05 : byte)
  Class: Eq_22
  DataType: byte
  OrigDataType: byte
T_31: (in __outb : ptr32)
  Class: Eq_31
  DataType: (ptr Eq_31)
  OrigDataType: (ptr (fn T_33 (T_32, T_23)))
T_32: (in 0x03C9 : word16)
  Class: Eq_32
  DataType: word16
  OrigDataType: word16
T_33: (in __outb(0x03C9, cl) : void)
  Class: Eq_33
  DataType: void
  OrigDataType: void
T_34: (in 0x0001 : word16)
  Class: Eq_34
  DataType: word16
  OrigDataType: word16
T_35: (in bx + 0x0001 : word16)
  Class: Eq_14
  DataType: uint16
  OrigDataType: word16
T_36: (in __outb : ptr32)
  Class: Eq_36
  DataType: (ptr Eq_36)
  OrigDataType: (ptr (fn T_41 (T_37, T_40)))
T_37: (in 0x03C9 : word16)
  Class: Eq_37
  DataType: word16
  OrigDataType: word16
T_38: (in 0x0006 : word16)
  Class: Eq_38
  DataType: uint16
  OrigDataType: uint16
T_39: (in bx >>u 0x0006 : word16)
  Class: Eq_39
  DataType: uint16
  OrigDataType: uint16
T_40: (in (byte) (bx >>u 0x0006) : byte)
  Class: Eq_40
  DataType: byte
  OrigDataType: byte
T_41: (in __outb(0x03C9, (byte) (bx >>u 0x0006)) : void)
  Class: Eq_41
  DataType: void
  OrigDataType: void
T_42: (in ax_52 : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_43: (in bx >>u 0x0006 : word16)
  Class: Eq_43
  DataType: uint16
  OrigDataType: uint16
T_44: (in __inb : ptr32)
  Class: Eq_44
  DataType: (ptr Eq_44)
  OrigDataType: (ptr (fn T_46 (T_45)))
T_45: (in 0x0060 : word16)
  Class: Eq_45
  DataType: word16
  OrigDataType: word16
T_46: (in __inb(0x0060) : byte)
  Class: Eq_46
  DataType: byte
  OrigDataType: byte
T_47: (in DPB(bx >>u 0x0006, __inb(0x0060), 0, 8) : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_48: (in 0x0001 : word16)
  Class: Eq_48
  DataType: word16
  OrigDataType: word16
T_49: (in ax_52 - 0x0001 : word16)
  Class: Eq_49
  DataType: word16
  OrigDataType: word16
T_50: (in ax : word16)
  Class: Eq_49
  DataType: word16
  OrigDataType: word16
T_51: (in 0x0001 : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_52: (in ax_52 != 0x0001 : bool)
  Class: Eq_52
  DataType: bool
  OrigDataType: bool
T_53: (in ax_20 : word16)
  Class: Eq_53
  DataType: word16
  OrigDataType: word16
T_54: (in __inb : ptr32)
  Class: Eq_54
  DataType: (ptr Eq_54)
  OrigDataType: (ptr (fn T_56 (T_55)))
T_55: (in 0x03DA : word16)
  Class: Eq_55
  DataType: word16
  OrigDataType: word16
T_56: (in __inb(0x03DA) : byte)
  Class: Eq_56
  DataType: byte
  OrigDataType: byte
T_57: (in DPB(ax, __inb(0x03DA), 0, 8) : word16)
  Class: Eq_53
  DataType: word16
  OrigDataType: word16
T_58: (in __outb : ptr32)
  Class: Eq_58
  DataType: (ptr Eq_58)
  OrigDataType: (ptr (fn T_61 (T_59, T_60)))
T_59: (in 0x03C8 : word16)
  Class: Eq_59
  DataType: word16
  OrigDataType: word16
T_60: (in 0x00 : byte)
  Class: Eq_60
  DataType: byte
  OrigDataType: byte
T_61: (in __outb(0x03C8, 0x00) : void)
  Class: Eq_61
  DataType: void
  OrigDataType: void
T_62: (in (byte) ax_20 : byte)
  Class: Eq_4
  DataType: byte
  OrigDataType: byte
T_63: (in 0x08 : byte)
  Class: Eq_63
  DataType: byte
  OrigDataType: byte
T_64: (in al_27 & 0x08 : byte)
  Class: Eq_64
  DataType: byte
  OrigDataType: byte
T_65: (in 0x00 : byte)
  Class: Eq_64
  DataType: byte
  OrigDataType: byte
T_66: (in (al_27 & 0x08) == 0x00 : bool)
  Class: Eq_66
  DataType: bool
  OrigDataType: bool
T_67: (in __syscall : ptr32)
  Class: Eq_67
  DataType: (ptr Eq_67)
  OrigDataType: (ptr (fn T_69 (T_68)))
T_68: (in 0x18 : byte)
  Class: Eq_68
  DataType: byte
  OrigDataType: byte
T_69: (in __syscall(0x18) : void)
  Class: Eq_69
  DataType: void
  OrigDataType: void
*/
typedef Eq_9 Eq_1struct Globals {
	Eq_9 * ptrFFFB8000;	// FFFB8000
} Eq_1;

typedef void (Eq_2)();

typedef struct Eq_9 {
} Eq_9;

typedef void (Eq_24)(word16, ui16);

typedef void (Eq_31)(word16, byte);

typedef void (Eq_36)(word16, byte);

typedef byte (Eq_44)(word16);

typedef byte (Eq_54)(word16);

typedef void (Eq_58)(word16, byte);

typedef void (Eq_67)(byte);

