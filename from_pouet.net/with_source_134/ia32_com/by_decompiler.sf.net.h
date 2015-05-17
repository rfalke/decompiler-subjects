// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_134/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_58) ptrFFFA0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
	T_103 (in bios_video_set_mode : ptr32)
Eq_7: (fn void (word16, byte))
	T_7 (in __outb : ptr32)
Eq_21: (fn void (word16, byte))
	T_21 (in __outb : ptr32)
Eq_24: (fn void (word16, byte))
	T_24 (in __outb : ptr32)
Eq_29: (fn void (word16, byte))
	T_29 (in __outb : ptr32)
Eq_42: (struct "Eq_42" 0001 (FFFFFEC0 byte bFFFFFEC0) (0 Eq_76 t0000) (140 byte b0140))
	T_42 (in di : (memptr (ptr Eq_58) Eq_42))
	T_65 (in di_51 + 0x0001 : word16)
	T_72 (in 0x0000 : word16)
	T_93 (in di + 0x0001 : word16)
Eq_45: (fn word16 (word16, byte))
	T_45 (in __ror : ptr32)
Eq_52: (fn word16 (word16, byte))
	T_52 (in __rol : ptr32)
Eq_58: (segment "Eq_58" (0 Eq_42 t0000))
	T_58 (in 0xA000 : selector)
Eq_62: (union "Eq_62" (uint16 u0) (byte u1))
	T_62 (in al_53 : Eq_62)
	T_63 (in dh_48 & 0x5F : byte)
	T_91 (in al_73 >>u 0x02 : word16)
Eq_76: (union "Eq_76" (uint16 u0) (byte u1))
	T_76 (in Mem57[0xA000:di + 0x0000:byte] : byte)
	T_87 (in al_73 >>u 0x02 : word16)
	T_90 (in Mem77[0xA000:di + 0x0000:byte] : byte)
Eq_98: (fn byte (byte))
	T_98 (in __inb : ptr32)
Eq_106: (fn void ())
	T_106 (in msdos_terminate_program20 : ptr32)
	T_107 (in signature of msdos_terminate_program20 : void)
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
T_7: (in __outb : ptr32)
  Class: Eq_7
  DataType: (ptr Eq_7)
  OrigDataType: (ptr (fn T_10 (T_8, T_9)))
T_8: (in 0x03C8 : word16)
  Class: Eq_8
  DataType: word16
  OrigDataType: word16
T_9: (in 0x00 : byte)
  Class: Eq_9
  DataType: byte
  OrigDataType: byte
T_10: (in __outb(0x03C8, 0x00) : void)
  Class: Eq_10
  DataType: void
  OrigDataType: void
T_11: (in dx_27 : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_12: (in 0x03C9 : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_13: (in cl_11 : byte)
  Class: Eq_13
  DataType: byte
  OrigDataType: byte
T_14: (in 0xFF : byte)
  Class: Eq_13
  DataType: byte
  OrigDataType: byte
T_15: (in cx_13 : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_16: (in cx : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_17: (in 0xFF : byte)
  Class: Eq_17
  DataType: byte
  OrigDataType: byte
T_18: (in DPB(cx, 0xFF, 0, 8) : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_19: (in al_17 : byte)
  Class: Eq_19
  DataType: byte
  OrigDataType: byte
T_20: (in ~cl_11 : byte)
  Class: Eq_19
  DataType: byte
  OrigDataType: byte
T_21: (in __outb : ptr32)
  Class: Eq_21
  DataType: (ptr Eq_21)
  OrigDataType: (ptr (fn T_23 (T_22, T_19)))
T_22: (in 0x03C9 : word16)
  Class: Eq_22
  DataType: word16
  OrigDataType: word16
T_23: (in __outb(0x03C9, al_17) : void)
  Class: Eq_23
  DataType: void
  OrigDataType: void
T_24: (in __outb : ptr32)
  Class: Eq_24
  DataType: (ptr Eq_24)
  OrigDataType: (ptr (fn T_28 (T_25, T_27)))
T_25: (in 0x03C9 : word16)
  Class: Eq_25
  DataType: word16
  OrigDataType: word16
T_26: (in 0x0F : byte)
  Class: Eq_26
  DataType: byte
  OrigDataType: byte
T_27: (in al_17 & 0x0F : byte)
  Class: Eq_27
  DataType: byte
  OrigDataType: byte
T_28: (in __outb(0x03C9, al_17 & 0x0F) : void)
  Class: Eq_28
  DataType: void
  OrigDataType: void
T_29: (in __outb : ptr32)
  Class: Eq_29
  DataType: (ptr Eq_29)
  OrigDataType: (ptr (fn T_32 (T_30, T_31)))
T_30: (in 0x03C9 : word16)
  Class: Eq_30
  DataType: word16
  OrigDataType: word16
T_31: (in al_17 & 0x0F : byte)
  Class: Eq_31
  DataType: byte
  OrigDataType: byte
T_32: (in __outb(0x03C9, al_17 & 0x0F) : void)
  Class: Eq_32
  DataType: void
  OrigDataType: void
T_33: (in 0x0001 : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_34: (in cx_13 - 0x0001 : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_35: (in (byte) cx_13 : byte)
  Class: Eq_13
  DataType: byte
  OrigDataType: byte
T_36: (in 0x0000 : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_37: (in cx_13 != 0x0000 : bool)
  Class: Eq_37
  DataType: bool
  OrigDataType: bool
T_38: (in cx_39 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_39: (in 0x06 : byte)
  Class: Eq_39
  DataType: byte
  OrigDataType: byte
T_40: (in DPB(cx_13, 0x06, 8, 8) : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_41: (in di_44 : word16)
  Class: Eq_41
  DataType: word16
  OrigDataType: word16
T_42: (in di : (memptr (ptr Eq_58) Eq_42))
  Class: Eq_42
  DataType: (memptr (ptr Eq_58) Eq_42)
  OrigDataType: (memptr T_58 (struct 0001 (FFFFFEC0 T_84 tFFFFFEC0) (0 T_76 t0000) (140 T_80 t0140)))
T_43: (in 0x388E : word16)
  Class: Eq_43
  DataType: word16
  OrigDataType: word16
T_44: (in di + 0x388E : word16)
  Class: Eq_41
  DataType: word16
  OrigDataType: word16
T_45: (in __ror : ptr32)
  Class: Eq_45
  DataType: (ptr Eq_45)
  OrigDataType: (ptr (fn T_48 (T_46, T_47)))
T_46: (in dx_27 ^ di_44 : word16)
  Class: Eq_46
  DataType: word16
  OrigDataType: word16
T_47: (in 0x0B : byte)
  Class: Eq_47
  DataType: byte
  OrigDataType: byte
T_48: (in __ror(dx_27 ^ di_44, 0x0B) : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_49: (in dh_48 : byte)
  Class: Eq_49
  DataType: byte
  OrigDataType: byte
T_50: (in SLICE(dx_27, byte, 8) : byte)
  Class: Eq_49
  DataType: byte
  OrigDataType: byte
T_51: (in di_51 : (memptr (ptr Eq_58) byte))
  Class: Eq_51
  DataType: (memptr (ptr Eq_58) byte)
  OrigDataType: (memptr T_58 (struct (0 T_61 t0000)))
T_52: (in __rol : ptr32)
  Class: Eq_52
  DataType: (ptr Eq_52)
  OrigDataType: (ptr (fn T_54 (T_41, T_53)))
T_53: (in 0x07 : byte)
  Class: Eq_53
  DataType: byte
  OrigDataType: byte
T_54: (in __rol(di_44, 0x07) : word16)
  Class: Eq_54
  DataType: word16
  OrigDataType: word16
T_55: (in __rol(di_44, 0x07) + dx_27 : word16)
  Class: Eq_51
  DataType: (memptr (ptr Eq_58) byte)
  OrigDataType: word16
T_56: (in 0x5F : byte)
  Class: Eq_56
  DataType: byte
  OrigDataType: byte
T_57: (in dh_48 & 0x5F : byte)
  Class: Eq_57
  DataType: byte
  OrigDataType: byte
T_58: (in 0xA000 : selector)
  Class: Eq_58
  DataType: (ptr Eq_58)
  OrigDataType: (ptr (segment))
T_59: (in 0x0000 : word16)
  Class: Eq_59
  DataType: word16
  OrigDataType: word16
T_60: (in di_51 + 0x0000 : word16)
  Class: Eq_60
  DataType: word16
  OrigDataType: word16
T_61: (in Mem57[0xA000:di_51 + 0x0000:byte] : byte)
  Class: Eq_57
  DataType: byte
  OrigDataType: byte
T_62: (in al_53 : Eq_62)
  Class: Eq_62
  DataType: Eq_62
  OrigDataType: (union (uint16 u0) (byte u1))
T_63: (in dh_48 & 0x5F : byte)
  Class: Eq_62
  DataType: Eq_62
  OrigDataType: byte
T_64: (in 0x0001 : word16)
  Class: Eq_64
  DataType: word16
  OrigDataType: word16
T_65: (in di_51 + 0x0001 : word16)
  Class: Eq_42
  DataType: (memptr (ptr Eq_58) Eq_42)
  OrigDataType: word16
T_66: (in 0x0001 : word16)
  Class: Eq_66
  DataType: word16
  OrigDataType: word16
T_67: (in cx_39 - 0x0001 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_68: (in 0x0000 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_69: (in cx_39 != 0x0000 : bool)
  Class: Eq_69
  DataType: bool
  OrigDataType: bool
T_70: (in 0xFA : byte)
  Class: Eq_70
  DataType: byte
  OrigDataType: byte
T_71: (in DPB(cx_39, 0xFA, 8, 8) : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_72: (in 0x0000 : word16)
  Class: Eq_42
  DataType: (memptr (ptr Eq_58) Eq_42)
  OrigDataType: word16
T_73: (in al_73 : byte)
  Class: Eq_73
  DataType: uint8
  OrigDataType: uint8
T_74: (in 0x0000 : word16)
  Class: Eq_74
  DataType: word16
  OrigDataType: word16
T_75: (in di + 0x0000 : word16)
  Class: Eq_75
  DataType: word16
  OrigDataType: word16
T_76: (in Mem57[0xA000:di + 0x0000:byte] : byte)
  Class: Eq_76
  DataType: Eq_76
  OrigDataType: byte
T_77: (in al_53 + Mem57[0xA000:di + 0x0000:byte] : byte)
  Class: Eq_77
  DataType: byte
  OrigDataType: byte
T_78: (in 0x0140 : word16)
  Class: Eq_78
  DataType: word16
  OrigDataType: word16
T_79: (in di + 0x0140 : word16)
  Class: Eq_79
  DataType: word16
  OrigDataType: word16
T_80: (in Mem57[0xA000:di + 0x0140:byte] : byte)
  Class: Eq_80
  DataType: byte
  OrigDataType: byte
T_81: (in al_53 + Mem57[0xA000:di + 0x0000:byte] + Mem57[0xA000:di + 0x0140:byte] : byte)
  Class: Eq_81
  DataType: byte
  OrigDataType: byte
T_82: (in 0x0140 : word16)
  Class: Eq_82
  DataType: word16
  OrigDataType: word16
T_83: (in di - 0x0140 : word16)
  Class: Eq_83
  DataType: word16
  OrigDataType: word16
T_84: (in Mem57[0xA000:di - 0x0140:byte] : byte)
  Class: Eq_84
  DataType: byte
  OrigDataType: byte
T_85: (in al_53 + Mem57[0xA000:di + 0x0000:byte] + Mem57[0xA000:di + 0x0140:byte] + Mem57[0xA000:di - 0x0140:byte] : byte)
  Class: Eq_73
  DataType: uint8
  OrigDataType: byte
T_86: (in 0x02 : byte)
  Class: Eq_86
  DataType: uint8
  OrigDataType: uint8
T_87: (in al_73 >>u 0x02 : word16)
  Class: Eq_76
  DataType: Eq_76
  OrigDataType: uint16
T_88: (in 0x0000 : word16)
  Class: Eq_88
  DataType: word16
  OrigDataType: word16
T_89: (in di + 0x0000 : word16)
  Class: Eq_89
  DataType: word16
  OrigDataType: word16
T_90: (in Mem77[0xA000:di + 0x0000:byte] : byte)
  Class: Eq_76
  DataType: Eq_76
  OrigDataType: byte
T_91: (in al_73 >>u 0x02 : word16)
  Class: Eq_62
  DataType: Eq_62
  OrigDataType: uint16
T_92: (in 0x0001 : word16)
  Class: Eq_92
  DataType: word16
  OrigDataType: word16
T_93: (in di + 0x0001 : word16)
  Class: Eq_42
  DataType: (memptr (ptr Eq_58) Eq_42)
  OrigDataType: word16
T_94: (in 0x0001 : word16)
  Class: Eq_94
  DataType: word16
  OrigDataType: word16
T_95: (in cx_13 - 0x0001 : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_96: (in 0x0000 : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_97: (in cx_13 != 0x0000 : bool)
  Class: Eq_97
  DataType: bool
  OrigDataType: bool
T_98: (in __inb : ptr32)
  Class: Eq_98
  DataType: (ptr Eq_98)
  OrigDataType: (ptr (fn T_100 (T_99)))
T_99: (in 0x60 : byte)
  Class: Eq_99
  DataType: byte
  OrigDataType: byte
T_100: (in __inb(0x60) : byte)
  Class: Eq_100
  DataType: byte
  OrigDataType: byte
T_101: (in 0x81 : byte)
  Class: Eq_100
  DataType: byte
  OrigDataType: byte
T_102: (in __inb(0x60) != 0x81 : bool)
  Class: Eq_102
  DataType: bool
  OrigDataType: bool
T_103: (in bios_video_set_mode : ptr32)
  Class: Eq_2
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (fn T_105 (T_104)))
T_104: (in 0x03 : byte)
  Class: Eq_4
  DataType: byte
  OrigDataType: byte
T_105: (in bios_video_set_mode(0x03) : void)
  Class: Eq_6
  DataType: void
  OrigDataType: void
T_106: (in msdos_terminate_program20 : ptr32)
  Class: Eq_106
  DataType: (ptr Eq_106)
  OrigDataType: (ptr (fn T_108 ()))
T_107: (in signature of msdos_terminate_program20 : void)
  Class: Eq_106
  DataType: (ptr Eq_106)
  OrigDataType: 
T_108: (in msdos_terminate_program20() : void)
  Class: Eq_108
  DataType: void
  OrigDataType: void
*/
typedef Eq_58 Eq_1struct Globals {
	Eq_58 * ptrFFFA0000;	// FFFA0000
} Eq_1;

typedef void (Eq_2)(byte);

typedef void (Eq_7)(word16, byte);

typedef void (Eq_21)(word16, byte);

typedef void (Eq_24)(word16, byte);

typedef void (Eq_29)(word16, byte);

typedef Eq_76 Eq_42struct Eq_42 {	// size: 1 1
	byte bFFFFFEC0;	// FFFFFEC0
	Eq_76 t0000;	// 0
	byte b0140;	// 140
} Eq_42;

typedef word16 (Eq_45)(word16, byte);

typedef word16 (Eq_52)(word16, byte);

typedef Eq_42 Eq_58struct Eq_58 {
	Eq_42 t0000;	// 0
} Eq_58;

typedef union Eq_62 {
	uint16 u0;
	byte u1;
} Eq_62;

typedef union Eq_76 {
	uint16 u0;
	byte u1;
} Eq_76;

typedef byte (Eq_98)(byte);

typedef void (Eq_106)();

