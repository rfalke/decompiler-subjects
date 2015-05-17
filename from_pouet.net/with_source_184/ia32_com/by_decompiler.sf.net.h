// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_184/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void ((ptr Eq_4), word16))
	T_2 (in msdos_display_string : ptr32)
	T_3 (in signature of msdos_display_string : void)
Eq_4: (segment "Eq_4" (0 byte b0000) (168 (memptr (ptr Eq_4) byte) ptr0168))
	T_4 (in ds : selector)
	T_6 (in ds : (ptr Eq_4))
Eq_14: (fn void (uint16))
	T_14 (in fn0C00_0184 : ptr32)
	T_15 (in signature of fn0C00_0184 : void)
Eq_21: (fn void (byte))
	T_21 (in __syscall : ptr32)
Eq_24: (fn byte (byte))
	T_24 (in __inb : ptr32)
Eq_29: (struct "Eq_29" (1 (memptr (ptr Eq_4) byte) ptr0001))
	T_29 (in di_54 : (memptr (ptr Eq_4) Eq_29))
	T_31 (in di_11 + 0x0001 : word16)
Eq_38: (fn void (byte, byte))
	T_38 (in __outb : ptr32)
Eq_40: (fn byte (byte))
	T_40 (in __inb : ptr32)
Eq_46: (fn void (byte))
	T_46 (in msdos_terminate : ptr32)
	T_47 (in signature of msdos_terminate : void)
Eq_73: (fn byte (byte))
	T_73 (in __inb : ptr32)
Eq_80: (fn void (byte, byte))
	T_80 (in __outb : ptr32)
Eq_83: (fn void (byte, byte))
	T_83 (in __outb : ptr32)
Eq_86: (fn void (byte, byte))
	T_86 (in __outb : ptr32)
Eq_91: (fn void (byte, byte))
	T_91 (in __outb : ptr32)
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr Eq_1)
  OrigDataType: (ptr (struct "Globals"))
T_2: (in msdos_display_string : ptr32)
  Class: Eq_2
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (fn T_8 (T_6, T_7)))
T_3: (in signature of msdos_display_string : void)
  Class: Eq_2
  DataType: (ptr Eq_2)
  OrigDataType: 
T_4: (in ds : selector)
  Class: Eq_4
  DataType: (ptr Eq_4)
  OrigDataType: (ptr (segment))
T_5: (in dx : word16)
  Class: Eq_5
  DataType: word16
  OrigDataType: word16
T_6: (in ds : (ptr Eq_4))
  Class: Eq_4
  DataType: (ptr Eq_4)
  OrigDataType: (ptr (segment (168 (memptr (ptr Eq_4) byte) ptr0168)))
T_7: (in 0x0178 : word16)
  Class: Eq_5
  DataType: word16
  OrigDataType: word16
T_8: (in msdos_display_string(ds, 0x0178) : void)
  Class: Eq_8
  DataType: void
  OrigDataType: void
T_9: (in di_11 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_10: (in 0x0168 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_11: (in si_12 : (memptr (ptr Eq_4) byte))
  Class: Eq_11
  DataType: (memptr (ptr Eq_4) byte)
  OrigDataType: (memptr T_6 (struct 0001 (0 T_54 t0000)))
T_12: (in 0x0168 : word16)
  Class: Eq_12
  DataType: (memptr (ptr Eq_4) (memptr (ptr Eq_4) byte))
  OrigDataType: (memptr T_6 (struct (0 T_13 t0000)))
T_13: (in Mem0[ds:0x0168:word16] : word16)
  Class: Eq_11
  DataType: (memptr (ptr Eq_4) byte)
  OrigDataType: word16
T_14: (in fn0C00_0184 : ptr32)
  Class: Eq_14
  DataType: (ptr Eq_14)
  OrigDataType: (ptr (fn T_20 (T_19)))
T_15: (in signature of fn0C00_0184 : void)
  Class: Eq_14
  DataType: (ptr Eq_14)
  OrigDataType: 
T_16: (in ax : uint16)
  Class: Eq_16
  DataType: uint16
  OrigDataType: uint16
T_17: (in ax_20 : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_18: (in 0x0004 : word16)
  Class: Eq_18
  DataType: word16
  OrigDataType: word16
T_19: (in ax_20 << 0x0004 : word16)
  Class: Eq_16
  DataType: uint16
  OrigDataType: ui16
T_20: (in fn0C00_0184(ax_20 << 0x0004) : void)
  Class: Eq_20
  DataType: void
  OrigDataType: void
T_21: (in __syscall : ptr32)
  Class: Eq_21
  DataType: (ptr Eq_21)
  OrigDataType: (ptr (fn T_23 (T_22)))
T_22: (in 0x15 : byte)
  Class: Eq_22
  DataType: byte
  OrigDataType: byte
T_23: (in __syscall(0x15) : void)
  Class: Eq_23
  DataType: void
  OrigDataType: void
T_24: (in __inb : ptr32)
  Class: Eq_24
  DataType: (ptr Eq_24)
  OrigDataType: (ptr (fn T_26 (T_25)))
T_25: (in 0x60 : byte)
  Class: Eq_25
  DataType: byte
  OrigDataType: byte
T_26: (in __inb(0x60) : byte)
  Class: Eq_26
  DataType: byte
  OrigDataType: byte
T_27: (in 0x01 : byte)
  Class: Eq_26
  DataType: byte
  OrigDataType: byte
T_28: (in __inb(0x60) != 0x01 : bool)
  Class: Eq_28
  DataType: bool
  OrigDataType: bool
T_29: (in di_54 : (memptr (ptr Eq_4) Eq_29))
  Class: Eq_29
  DataType: (memptr (ptr Eq_4) Eq_29)
  OrigDataType: (memptr T_6 (struct (1 T_35 t0001)))
T_30: (in 0x0001 : word16)
  Class: Eq_30
  DataType: word16
  OrigDataType: word16
T_31: (in di_11 + 0x0001 : word16)
  Class: Eq_29
  DataType: (memptr (ptr Eq_4) Eq_29)
  OrigDataType: word16
T_32: (in 0x0001 : word16)
  Class: Eq_32
  DataType: word16
  OrigDataType: word16
T_33: (in di_54 + 0x0001 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_34: (in di_54 + 0x0001 : word16)
  Class: Eq_34
  DataType: word16
  OrigDataType: word16
T_35: (in Mem0[ds:di_54 + 0x0001:word16] : word16)
  Class: Eq_11
  DataType: (memptr (ptr Eq_4) byte)
  OrigDataType: word16
T_36: (in 0x0000 : word16)
  Class: Eq_11
  DataType: (memptr (ptr Eq_4) byte)
  OrigDataType: word16
T_37: (in si_12 == &Eq_4::b0000 : bool)
  Class: Eq_37
  DataType: bool
  OrigDataType: bool
T_38: (in __outb : ptr32)
  Class: Eq_38
  DataType: (ptr Eq_38)
  OrigDataType: (ptr (fn T_45 (T_39, T_44)))
T_39: (in 0x61 : byte)
  Class: Eq_39
  DataType: byte
  OrigDataType: byte
T_40: (in __inb : ptr32)
  Class: Eq_40
  DataType: (ptr Eq_40)
  OrigDataType: (ptr (fn T_42 (T_41)))
T_41: (in 0x61 : byte)
  Class: Eq_41
  DataType: byte
  OrigDataType: byte
T_42: (in __inb(0x61) : byte)
  Class: Eq_42
  DataType: byte
  OrigDataType: byte
T_43: (in 0xFC : byte)
  Class: Eq_43
  DataType: byte
  OrigDataType: byte
T_44: (in __inb(0x61) & 0xFC : byte)
  Class: Eq_44
  DataType: byte
  OrigDataType: byte
T_45: (in __outb(0x61, __inb(0x61) & 0xFC) : void)
  Class: Eq_45
  DataType: void
  OrigDataType: void
T_46: (in msdos_terminate : ptr32)
  Class: Eq_46
  DataType: (ptr Eq_46)
  OrigDataType: (ptr (fn T_50 (T_49)))
T_47: (in signature of msdos_terminate : void)
  Class: Eq_46
  DataType: (ptr Eq_46)
  OrigDataType: 
T_48: (in al : byte)
  Class: Eq_48
  DataType: byte
  OrigDataType: byte
T_49: (in 0x00 : byte)
  Class: Eq_48
  DataType: byte
  OrigDataType: byte
T_50: (in msdos_terminate(0x00) : void)
  Class: Eq_50
  DataType: void
  OrigDataType: void
T_51: (in al_19 : byte)
  Class: Eq_51
  DataType: byte
  OrigDataType: byte
T_52: (in 0x0000 : word16)
  Class: Eq_52
  DataType: word16
  OrigDataType: word16
T_53: (in si_12 + 0x0000 : word16)
  Class: Eq_53
  DataType: word16
  OrigDataType: word16
T_54: (in Mem0[ds:si_12 + 0x0000:byte] : byte)
  Class: Eq_51
  DataType: byte
  OrigDataType: byte
T_55: (in (word16) al_19 : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_56: (in 0x0001 : word16)
  Class: Eq_56
  DataType: word16
  OrigDataType: word16
T_57: (in si_12 + 0x0001 : word16)
  Class: Eq_11
  DataType: (memptr (ptr Eq_4) byte)
  OrigDataType: word16
T_58: (in 0x00 : byte)
  Class: Eq_51
  DataType: byte
  OrigDataType: byte
T_59: (in al_19 != 0x00 : bool)
  Class: Eq_59
  DataType: bool
  OrigDataType: bool
T_60: (in 0x0012 : word16)
  Class: Eq_16
  DataType: uint16
  OrigDataType: cups16
T_61: (in 0x0012 >=u ax : bool)
  Class: Eq_61
  DataType: bool
  OrigDataType: bool
T_62: (in ax_26 : uint16)
  Class: Eq_62
  DataType: uint16
  OrigDataType: word16
T_63: (in 0x001234DD : uip32)
  Class: Eq_63
  DataType: uip32
  OrigDataType: uip32
T_64: (in 0x001234DD % ax : uint16)
  Class: Eq_64
  DataType: uint16
  OrigDataType: uint16
T_65: (in 0x34DD : word16)
  Class: Eq_65
  DataType: word16
  OrigDataType: word16
T_66: (in SEQ(0x001234DD % ax, 0x34DD) : word32)
  Class: Eq_66
  DataType: uint32
  OrigDataType: uint32
T_67: (in SEQ(0x001234DD % ax, 0x34DD) /u ax : uint16)
  Class: Eq_62
  DataType: uint16
  OrigDataType: uint16
T_68: (in bl_28 : byte)
  Class: Eq_68
  DataType: byte
  OrigDataType: byte
T_69: (in (byte) ax_26 : byte)
  Class: Eq_68
  DataType: byte
  OrigDataType: byte
T_70: (in bh_29 : byte)
  Class: Eq_70
  DataType: byte
  OrigDataType: byte
T_71: (in SLICE(ax_26, byte, 8) : byte)
  Class: Eq_70
  DataType: byte
  OrigDataType: byte
T_72: (in al_30 : byte)
  Class: Eq_72
  DataType: byte
  OrigDataType: byte
T_73: (in __inb : ptr32)
  Class: Eq_73
  DataType: (ptr Eq_73)
  OrigDataType: (ptr (fn T_75 (T_74)))
T_74: (in 0x61 : byte)
  Class: Eq_74
  DataType: byte
  OrigDataType: byte
T_75: (in __inb(0x61) : byte)
  Class: Eq_72
  DataType: byte
  OrigDataType: byte
T_76: (in 0x03 : byte)
  Class: Eq_76
  DataType: byte
  OrigDataType: byte
T_77: (in al_30 & 0x03 : byte)
  Class: Eq_77
  DataType: byte
  OrigDataType: byte
T_78: (in 0x00 : byte)
  Class: Eq_77
  DataType: byte
  OrigDataType: byte
T_79: (in (al_30 & 0x03) != 0x00 : bool)
  Class: Eq_79
  DataType: bool
  OrigDataType: bool
T_80: (in __outb : ptr32)
  Class: Eq_80
  DataType: (ptr Eq_80)
  OrigDataType: (ptr (fn T_82 (T_81, T_68)))
T_81: (in 0x42 : byte)
  Class: Eq_81
  DataType: byte
  OrigDataType: byte
T_82: (in __outb(0x42, bl_28) : void)
  Class: Eq_82
  DataType: void
  OrigDataType: void
T_83: (in __outb : ptr32)
  Class: Eq_83
  DataType: (ptr Eq_83)
  OrigDataType: (ptr (fn T_85 (T_84, T_70)))
T_84: (in 0x42 : byte)
  Class: Eq_84
  DataType: byte
  OrigDataType: byte
T_85: (in __outb(0x42, bh_29) : void)
  Class: Eq_85
  DataType: void
  OrigDataType: void
T_86: (in __outb : ptr32)
  Class: Eq_86
  DataType: (ptr Eq_86)
  OrigDataType: (ptr (fn T_90 (T_87, T_89)))
T_87: (in 0x61 : byte)
  Class: Eq_87
  DataType: byte
  OrigDataType: byte
T_88: (in 0x03 : byte)
  Class: Eq_88
  DataType: byte
  OrigDataType: byte
T_89: (in al_30 | 0x03 : byte)
  Class: Eq_89
  DataType: byte
  OrigDataType: byte
T_90: (in __outb(0x61, al_30 | 0x03) : void)
  Class: Eq_90
  DataType: void
  OrigDataType: void
T_91: (in __outb : ptr32)
  Class: Eq_91
  DataType: (ptr Eq_91)
  OrigDataType: (ptr (fn T_94 (T_92, T_93)))
T_92: (in 0x43 : byte)
  Class: Eq_92
  DataType: byte
  OrigDataType: byte
T_93: (in 0xB6 : byte)
  Class: Eq_93
  DataType: byte
  OrigDataType: byte
T_94: (in __outb(0x43, 0xB6) : void)
  Class: Eq_94
  DataType: void
  OrigDataType: void
*/
typedef struct Globals {
} Eq_1;

typedef void (Eq_2)(Eq_4 *, word16);

typedef struct Eq_4 {
	byte b0000;	// 0
	byte Eq_4::*ptr0168;	// 168
} Eq_4;

typedef void (Eq_14)(uint16);

typedef void (Eq_21)(byte);

typedef byte (Eq_24)(byte);

typedef struct Eq_29 {
	byte Eq_4::*ptr0001;	// 1
} Eq_29;

typedef void (Eq_38)(byte, byte);

typedef byte (Eq_40)(byte);

typedef void (Eq_46)(byte);

typedef byte (Eq_73)(byte);

typedef void (Eq_80)(byte, byte);

typedef void (Eq_83)(byte, byte);

typedef void (Eq_86)(byte, byte);

typedef void (Eq_91)(byte, byte);

