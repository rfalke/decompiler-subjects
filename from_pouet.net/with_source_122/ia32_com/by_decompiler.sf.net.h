// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_122/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void ())
	T_2 (in __cli : ptr32)
Eq_5: (fn byte (word16))
	T_5 (in __inb : ptr32)
Eq_23: (fn byte (word16))
	T_23 (in __inb : ptr32)
Eq_33: (fn byte (word16))
	T_33 (in __inb : ptr32)
Eq_43: (fn void (word16, byte))
	T_43 (in __outb : ptr32)
Eq_47: (fn void (word16, byte))
	T_47 (in __outb : ptr32)
Eq_50: (union "Eq_50" (uint16 u0) (byte u1))
	T_50 (in al_65 : Eq_50)
	T_52 (in bl_35 >>u 0x01 : word16)
Eq_53: (fn void (word16, Eq_50))
	T_53 (in __outb : ptr32)
Eq_58: (fn void (word16, byte))
	T_58 (in __outb : ptr32)
Eq_68: (fn byte (byte))
	T_68 (in __inb : ptr32)
Eq_79: (fn void (word16, byte))
	T_79 (in __outb : ptr32)
Eq_82: (fn void (word16, byte))
	T_82 (in __outb : ptr32)
Eq_85: (fn void (word16, byte))
	T_85 (in __outb : ptr32)
Eq_88: (fn void (word16, byte))
	T_88 (in __outb : ptr32)
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
T_4: (in al_26 : byte)
  Class: Eq_4
  DataType: byte
  OrigDataType: byte
T_5: (in __inb : ptr32)
  Class: Eq_5
  DataType: (ptr Eq_5)
  OrigDataType: (ptr (fn T_7 (T_6)))
T_6: (in 0x03DA : word16)
  Class: Eq_6
  DataType: word16
  OrigDataType: word16
T_7: (in __inb(0x03DA) : byte)
  Class: Eq_4
  DataType: byte
  OrigDataType: byte
T_8: (in ax : word16)
  Class: Eq_8
  DataType: word16
  OrigDataType: word16
T_9: (in 0x08 : byte)
  Class: Eq_9
  DataType: byte
  OrigDataType: byte
T_10: (in al_26 & 0x08 : byte)
  Class: Eq_10
  DataType: byte
  OrigDataType: byte
T_11: (in DPB(ax, al_26 & 0x08, 0, 8) : word16)
  Class: Eq_8
  DataType: word16
  OrigDataType: word16
T_12: (in al_26 & 0x08 : byte)
  Class: Eq_12
  DataType: byte
  OrigDataType: byte
T_13: (in 0x00 : byte)
  Class: Eq_12
  DataType: byte
  OrigDataType: byte
T_14: (in (al_26 & 0x08) == 0x00 : bool)
  Class: Eq_14
  DataType: bool
  OrigDataType: bool
T_15: (in cl : byte)
  Class: Eq_15
  DataType: byte
  OrigDataType: byte
T_16: (in 0x01 : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_17: (in cl + 0x01 : byte)
  Class: Eq_15
  DataType: byte
  OrigDataType: byte
T_18: (in bx_34 : word16)
  Class: Eq_18
  DataType: word16
  OrigDataType: word16
T_19: (in 0x018F : word16)
  Class: Eq_18
  DataType: word16
  OrigDataType: word16
T_20: (in bl_35 : uint8)
  Class: Eq_20
  DataType: uint8
  OrigDataType: uint8
T_21: (in 0x8F : byte)
  Class: Eq_20
  DataType: uint8
  OrigDataType: byte
T_22: (in al_47 : byte)
  Class: Eq_22
  DataType: byte
  OrigDataType: byte
T_23: (in __inb : ptr32)
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: (ptr (fn T_25 (T_24)))
T_24: (in 0x03DA : word16)
  Class: Eq_24
  DataType: word16
  OrigDataType: word16
T_25: (in __inb(0x03DA) : byte)
  Class: Eq_22
  DataType: byte
  OrigDataType: byte
T_26: (in 0x01 : byte)
  Class: Eq_26
  DataType: byte
  OrigDataType: byte
T_27: (in al_47 & 0x01 : byte)
  Class: Eq_27
  DataType: byte
  OrigDataType: byte
T_28: (in DPB(ax, al_47 & 0x01, 0, 8) : word16)
  Class: Eq_8
  DataType: word16
  OrigDataType: word16
T_29: (in al_47 & 0x01 : byte)
  Class: Eq_29
  DataType: byte
  OrigDataType: byte
T_30: (in 0x00 : byte)
  Class: Eq_29
  DataType: byte
  OrigDataType: byte
T_31: (in (al_47 & 0x01) != 0x00 : bool)
  Class: Eq_31
  DataType: bool
  OrigDataType: bool
T_32: (in al_54 : byte)
  Class: Eq_32
  DataType: byte
  OrigDataType: byte
T_33: (in __inb : ptr32)
  Class: Eq_33
  DataType: (ptr Eq_33)
  OrigDataType: (ptr (fn T_35 (T_34)))
T_34: (in 0x03DA : word16)
  Class: Eq_34
  DataType: word16
  OrigDataType: word16
T_35: (in __inb(0x03DA) : byte)
  Class: Eq_32
  DataType: byte
  OrigDataType: byte
T_36: (in ax_84 : word16)
  Class: Eq_8
  DataType: word16
  OrigDataType: word16
T_37: (in 0x01 : byte)
  Class: Eq_37
  DataType: byte
  OrigDataType: byte
T_38: (in al_54 & 0x01 : byte)
  Class: Eq_38
  DataType: byte
  OrigDataType: byte
T_39: (in DPB(ax_84, al_54 & 0x01, 0, 8) : word16)
  Class: Eq_8
  DataType: word16
  OrigDataType: word16
T_40: (in al_54 & 0x01 : byte)
  Class: Eq_40
  DataType: byte
  OrigDataType: byte
T_41: (in 0x00 : byte)
  Class: Eq_40
  DataType: byte
  OrigDataType: byte
T_42: (in (al_54 & 0x01) == 0x00 : bool)
  Class: Eq_42
  DataType: bool
  OrigDataType: bool
T_43: (in __outb : ptr32)
  Class: Eq_43
  DataType: (ptr Eq_43)
  OrigDataType: (ptr (fn T_46 (T_44, T_45)))
T_44: (in 0x03C8 : word16)
  Class: Eq_44
  DataType: word16
  OrigDataType: word16
T_45: (in 0x00 : byte)
  Class: Eq_45
  DataType: byte
  OrigDataType: byte
T_46: (in __outb(0x03C8, 0x00) : void)
  Class: Eq_46
  DataType: void
  OrigDataType: void
T_47: (in __outb : ptr32)
  Class: Eq_47
  DataType: (ptr Eq_47)
  OrigDataType: (ptr (fn T_49 (T_48, T_15)))
T_48: (in 0x03C9 : word16)
  Class: Eq_48
  DataType: word16
  OrigDataType: word16
T_49: (in __outb(0x03C9, cl) : void)
  Class: Eq_49
  DataType: void
  OrigDataType: void
T_50: (in al_65 : Eq_50)
  Class: Eq_50
  DataType: Eq_50
  OrigDataType: byte
T_51: (in 0x01 : byte)
  Class: Eq_51
  DataType: uint8
  OrigDataType: uint8
T_52: (in bl_35 >>u 0x01 : word16)
  Class: Eq_50
  DataType: Eq_50
  OrigDataType: uint16
T_53: (in __outb : ptr32)
  Class: Eq_53
  DataType: (ptr Eq_53)
  OrigDataType: (ptr (fn T_55 (T_54, T_50)))
T_54: (in 0x03C9 : word16)
  Class: Eq_54
  DataType: word16
  OrigDataType: word16
T_55: (in __outb(0x03C9, al_65) : void)
  Class: Eq_55
  DataType: void
  OrigDataType: void
T_56: (in ch : byte)
  Class: Eq_56
  DataType: byte
  OrigDataType: byte
T_57: (in ch + al_65 : byte)
  Class: Eq_56
  DataType: byte
  OrigDataType: byte
T_58: (in __outb : ptr32)
  Class: Eq_58
  DataType: (ptr Eq_58)
  OrigDataType: (ptr (fn T_60 (T_59, T_56)))
T_59: (in 0x03C9 : word16)
  Class: Eq_59
  DataType: word16
  OrigDataType: word16
T_60: (in __outb(0x03C9, ch) : void)
  Class: Eq_60
  DataType: void
  OrigDataType: void
T_61: (in 0x0001 : word16)
  Class: Eq_61
  DataType: word16
  OrigDataType: word16
T_62: (in bx_34 - 0x0001 : word16)
  Class: Eq_18
  DataType: word16
  OrigDataType: word16
T_63: (in DPB(ax_84, ch, 0, 8) : word16)
  Class: Eq_8
  DataType: word16
  OrigDataType: word16
T_64: (in (byte) bx_34 : byte)
  Class: Eq_20
  DataType: uint8
  OrigDataType: byte
T_65: (in 0x0000 : word16)
  Class: Eq_18
  DataType: word16
  OrigDataType: word16
T_66: (in bx_34 != 0x0000 : bool)
  Class: Eq_66
  DataType: bool
  OrigDataType: bool
T_67: (in ax_75 : word16)
  Class: Eq_67
  DataType: word16
  OrigDataType: word16
T_68: (in __inb : ptr32)
  Class: Eq_68
  DataType: (ptr Eq_68)
  OrigDataType: (ptr (fn T_70 (T_69)))
T_69: (in 0x60 : byte)
  Class: Eq_69
  DataType: byte
  OrigDataType: byte
T_70: (in __inb(0x60) : byte)
  Class: Eq_70
  DataType: byte
  OrigDataType: byte
T_71: (in DPB(ax_84, __inb(0x60), 0, 8) : word16)
  Class: Eq_67
  DataType: word16
  OrigDataType: word16
T_72: (in 0x0001 : word16)
  Class: Eq_72
  DataType: word16
  OrigDataType: word16
T_73: (in ax_75 - 0x0001 : word16)
  Class: Eq_8
  DataType: word16
  OrigDataType: word16
T_74: (in al_77 : byte)
  Class: Eq_74
  DataType: byte
  OrigDataType: byte
T_75: (in ax_75 - 0x0001 : word16)
  Class: Eq_75
  DataType: word16
  OrigDataType: word16
T_76: (in (byte) (ax_75 - 0x0001) : byte)
  Class: Eq_74
  DataType: byte
  OrigDataType: byte
T_77: (in 0x0001 : word16)
  Class: Eq_67
  DataType: word16
  OrigDataType: word16
T_78: (in ax_75 != 0x0001 : bool)
  Class: Eq_78
  DataType: bool
  OrigDataType: bool
T_79: (in __outb : ptr32)
  Class: Eq_79
  DataType: (ptr Eq_79)
  OrigDataType: (ptr (fn T_81 (T_80, T_74)))
T_80: (in 0x03C8 : word16)
  Class: Eq_80
  DataType: word16
  OrigDataType: word16
T_81: (in __outb(0x03C8, al_77) : void)
  Class: Eq_81
  DataType: void
  OrigDataType: void
T_82: (in __outb : ptr32)
  Class: Eq_82
  DataType: (ptr Eq_82)
  OrigDataType: (ptr (fn T_84 (T_83, T_74)))
T_83: (in 0x03C9 : word16)
  Class: Eq_83
  DataType: word16
  OrigDataType: word16
T_84: (in __outb(0x03C9, al_77) : void)
  Class: Eq_84
  DataType: void
  OrigDataType: void
T_85: (in __outb : ptr32)
  Class: Eq_85
  DataType: (ptr Eq_85)
  OrigDataType: (ptr (fn T_87 (T_86, T_74)))
T_86: (in 0x03C9 : word16)
  Class: Eq_86
  DataType: word16
  OrigDataType: word16
T_87: (in __outb(0x03C9, al_77) : void)
  Class: Eq_87
  DataType: void
  OrigDataType: void
T_88: (in __outb : ptr32)
  Class: Eq_88
  DataType: (ptr Eq_88)
  OrigDataType: (ptr (fn T_90 (T_89, T_74)))
T_89: (in 0x03C9 : word16)
  Class: Eq_89
  DataType: word16
  OrigDataType: word16
T_90: (in __outb(0x03C9, al_77) : void)
  Class: Eq_90
  DataType: void
  OrigDataType: void
*/
typedef struct Globals {
} Eq_1;

typedef void (Eq_2)();

typedef byte (Eq_5)(word16);

typedef byte (Eq_23)(word16);

typedef byte (Eq_33)(word16);

typedef void (Eq_43)(word16, byte);

typedef void (Eq_47)(word16, byte);

typedef union Eq_50 {
	uint16 u0;
	byte u1;
} Eq_50;

typedef void (Eq_53)(word16, Eq_50);

typedef void (Eq_58)(word16, byte);

typedef byte (Eq_68)(byte);

typedef void (Eq_79)(word16, byte);

typedef void (Eq_82)(word16, byte);

typedef void (Eq_85)(word16, byte);

typedef void (Eq_88)(word16, byte);

