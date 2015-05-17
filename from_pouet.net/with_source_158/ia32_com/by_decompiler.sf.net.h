// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_158/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_63) ptrFFFA0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
	T_106 (in bios_video_set_mode : ptr32)
Eq_9: (fn void (word16, byte))
	T_9 (in __outb : ptr32)
Eq_13: (fn void (word16, byte))
	T_13 (in __outb : ptr32)
Eq_17: (fn void (word16, byte))
	T_17 (in __outb : ptr32)
Eq_21: (fn void (word16, ui16))
	T_21 (in __outb : ptr32)
Eq_32: (fn byte (byte))
	T_32 (in __inb : ptr32)
Eq_38: (union "Eq_38" (int16 u0) (uint16 u1))
	T_38 (in dx_46 : Eq_38)
	T_39 (in 0x0005 : word16)
	T_41 (in dx_46 + 0x0001 : word16)
	T_44 (in cx_102 : Eq_38)
	T_45 (in -dx_46 : word16)
	T_58 (in dx_134 : Eq_38)
	T_75 (in cx_102 + 0x0001 : word16)
	T_104 (in 0x0014 : word16)
Eq_46: (fn real64 (real64))
	T_46 (in sqrt : ptr32)
Eq_47: (segment "Eq_47" (FFFC int16 wFFFC))
	T_47 (in ss : selector)
Eq_57: (union "Eq_57" (int16 u0) ((memptr (ptr Eq_63) byte) u1))
	T_57 (in bx_88 : Eq_57)
	T_61 (in (word16) (dx_134 *u dx_134) - ax_110 : word16)
Eq_63: (segment "Eq_63")
	T_63 (in 0xA000 : selector)
Eq_67: (union "Eq_67" (int16 u0) ((memptr (ptr Eq_63) byte) u1))
	T_67 (in bx_108 : Eq_67)
	T_68 (in -bx_88 : word16)
	T_87 (in bx_108 - 0x0001 : word16)
	T_88 (in 0x0000 : word16)
Eq_77: (union "Eq_77" (cui16 u0) (byte u1))
	T_77 (in al_111 : byte)
	T_81 (in Mem100[0xA000:di + 0x0000:byte] : byte)
	T_83 (in 0xFEC0 : cui16)
	T_91 (in al_111 - 0x01 : byte)
	T_94 (in Mem133[0xA000:di + 0x0000:byte] : byte)
Eq_95: (fn byte (byte))
	T_95 (in __inb : ptr32)
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
T_7: (in ax_110 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_8: (in 0x0013 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_9: (in __outb : ptr32)
  Class: Eq_9
  DataType: (ptr Eq_9)
  OrigDataType: (ptr (fn T_12 (T_10, T_11)))
T_10: (in 0x03C8 : word16)
  Class: Eq_10
  DataType: word16
  OrigDataType: word16
T_11: (in cl : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_12: (in __outb(0x03C8, cl) : void)
  Class: Eq_12
  DataType: void
  OrigDataType: void
T_13: (in __outb : ptr32)
  Class: Eq_13
  DataType: (ptr Eq_13)
  OrigDataType: (ptr (fn T_16 (T_14, T_15)))
T_14: (in 0x03C9 : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_15: (in 0x00 : byte)
  Class: Eq_15
  DataType: byte
  OrigDataType: byte
T_16: (in __outb(0x03C9, 0x00) : void)
  Class: Eq_16
  DataType: void
  OrigDataType: void
T_17: (in __outb : ptr32)
  Class: Eq_17
  DataType: (ptr Eq_17)
  OrigDataType: (ptr (fn T_20 (T_18, T_19)))
T_18: (in 0x03C9 : word16)
  Class: Eq_18
  DataType: word16
  OrigDataType: word16
T_19: (in 0x00 : byte)
  Class: Eq_19
  DataType: byte
  OrigDataType: byte
T_20: (in __outb(0x03C9, 0x00) : void)
  Class: Eq_20
  DataType: void
  OrigDataType: void
T_21: (in __outb : ptr32)
  Class: Eq_21
  DataType: (ptr Eq_21)
  OrigDataType: (ptr (fn T_25 (T_22, T_24)))
T_22: (in 0x03C9 : word16)
  Class: Eq_22
  DataType: word16
  OrigDataType: word16
T_23: (in 0x04 : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_24: (in cl << 0x04 : word16)
  Class: Eq_24
  DataType: ui16
  OrigDataType: ui16
T_25: (in __outb(0x03C9, cl << 0x04) : void)
  Class: Eq_25
  DataType: void
  OrigDataType: void
T_26: (in cx : word16)
  Class: Eq_26
  DataType: word16
  OrigDataType: word16
T_27: (in 0x0001 : word16)
  Class: Eq_27
  DataType: word16
  OrigDataType: word16
T_28: (in cx - 0x0001 : word16)
  Class: Eq_26
  DataType: word16
  OrigDataType: word16
T_29: (in (byte) cx : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_30: (in 0x0000 : word16)
  Class: Eq_26
  DataType: word16
  OrigDataType: word16
T_31: (in cx != 0x0000 : bool)
  Class: Eq_31
  DataType: bool
  OrigDataType: bool
T_32: (in __inb : ptr32)
  Class: Eq_32
  DataType: (ptr Eq_32)
  OrigDataType: (ptr (fn T_34 (T_33)))
T_33: (in 0x40 : byte)
  Class: Eq_33
  DataType: byte
  OrigDataType: byte
T_34: (in __inb(0x40) : byte)
  Class: Eq_34
  DataType: byte
  OrigDataType: byte
T_35: (in DPB(ax_110, __inb(0x40), 0, 8) : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_36: (in bp : word16)
  Class: Eq_36
  DataType: word16
  OrigDataType: word16
T_37: (in bp + ax_110 : word16)
  Class: Eq_36
  DataType: word16
  OrigDataType: word16
T_38: (in dx_46 : Eq_38)
  Class: Eq_38
  DataType: Eq_38
  OrigDataType: (union (int16 u0) (uint16 u1))
T_39: (in 0x0005 : word16)
  Class: Eq_38
  DataType: int16
  OrigDataType: word16
T_40: (in 0x0001 : word16)
  Class: Eq_40
  DataType: word16
  OrigDataType: word16
T_41: (in dx_46 + 0x0001 : word16)
  Class: Eq_38
  DataType: Eq_38
  OrigDataType: word16
T_42: (in 0x0140 : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_43: (in bp - 0x0140 : word16)
  Class: Eq_36
  DataType: word16
  OrigDataType: word16
T_44: (in cx_102 : Eq_38)
  Class: Eq_38
  DataType: Eq_38
  OrigDataType: int16
T_45: (in -dx_46 : word16)
  Class: Eq_38
  DataType: Eq_38
  OrigDataType: int16
T_46: (in sqrt : ptr32)
  Class: Eq_46
  DataType: (ptr Eq_46)
  OrigDataType: (ptr (fn T_51 (T_50)))
T_47: (in ss : selector)
  Class: Eq_47
  DataType: (ptr Eq_47)
  OrigDataType: (ptr (segment (FFFC T_49 tFFFC)))
T_48: (in 0xFFFC : word16)
  Class: Eq_48
  DataType: (memptr (ptr Eq_47) int16)
  OrigDataType: (memptr T_47 (struct (0 T_49 t0000)))
T_49: (in Mem0[ss:0xFFFC:int16] : int16)
  Class: Eq_49
  DataType: int16
  OrigDataType: int16
T_50: (in (real64) ss->wFFFC : real64)
  Class: Eq_50
  DataType: real64
  OrigDataType: real64
T_51: (in sqrt((real64) ss->wFFFC) : real64)
  Class: Eq_51
  DataType: real64
  OrigDataType: real64
T_52: (in (int16) sqrt((real64) ss->wFFFC) : int16)
  Class: Eq_49
  DataType: int16
  OrigDataType: int16
T_53: (in 0xFFFC : word16)
  Class: Eq_53
  DataType: (memptr (ptr Eq_47) int16)
  OrigDataType: (memptr T_47 (struct (0 T_54 t0000)))
T_54: (in Mem95[ss:0xFFFC:int16] : int16)
  Class: Eq_49
  DataType: int16
  OrigDataType: int16
T_55: (in cx_102 *s cx_102 : int32)
  Class: Eq_55
  DataType: int32
  OrigDataType: int32
T_56: (in (word16) (cx_102 *s cx_102) : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_57: (in bx_88 : Eq_57)
  Class: Eq_57
  DataType: Eq_57
  OrigDataType: (union (int16 u0) ((memptr T_63 (struct (0 T_66 t0000))) u1))
T_58: (in dx_134 : Eq_38)
  Class: Eq_38
  DataType: Eq_38
  OrigDataType: (union (int16 u0) (uint16 u1))
T_59: (in dx_134 *u dx_134 : uint32)
  Class: Eq_59
  DataType: uint32
  OrigDataType: uint32
T_60: (in (word16) (dx_134 *u dx_134) : word16)
  Class: Eq_60
  DataType: word16
  OrigDataType: word16
T_61: (in (word16) (dx_134 *u dx_134) - ax_110 : word16)
  Class: Eq_57
  DataType: Eq_57
  OrigDataType: word16
T_62: (in 0x0F : byte)
  Class: Eq_62
  DataType: byte
  OrigDataType: byte
T_63: (in 0xA000 : selector)
  Class: Eq_63
  DataType: (ptr Eq_63)
  OrigDataType: (ptr (segment))
T_64: (in si_101 : word16)
  Class: Eq_64
  DataType: word16
  OrigDataType: word16
T_65: (in bx_88 + si_101 : word16)
  Class: Eq_65
  DataType: word16
  OrigDataType: word16
T_66: (in Mem98[0xA000:bx_88 + si_101:byte] : byte)
  Class: Eq_62
  DataType: byte
  OrigDataType: byte
T_67: (in bx_108 : Eq_67)
  Class: Eq_67
  DataType: Eq_67
  OrigDataType: (memptr T_63 (struct (0 T_71 t0000)))
T_68: (in -bx_88 : word16)
  Class: Eq_67
  DataType: Eq_67
  OrigDataType: int16
T_69: (in 0x0F : byte)
  Class: Eq_69
  DataType: byte
  OrigDataType: byte
T_70: (in bx_108 + si_101 : word16)
  Class: Eq_70
  DataType: word16
  OrigDataType: word16
T_71: (in Mem100[0xA000:bx_108 + si_101:byte] : byte)
  Class: Eq_69
  DataType: byte
  OrigDataType: byte
T_72: (in 0x0000 : word16)
  Class: Eq_72
  DataType: word16
  OrigDataType: word16
T_73: (in si_101 + 0x0000 : word16)
  Class: Eq_64
  DataType: word16
  OrigDataType: word16
T_74: (in 0x0001 : word16)
  Class: Eq_74
  DataType: word16
  OrigDataType: word16
T_75: (in cx_102 + 0x0001 : word16)
  Class: Eq_38
  DataType: Eq_38
  OrigDataType: word16
T_76: (in cx_102 <= dx_134 : bool)
  Class: Eq_76
  DataType: bool
  OrigDataType: bool
T_77: (in al_111 : byte)
  Class: Eq_77
  DataType: Eq_77
  OrigDataType: byte
T_78: (in di : (memptr (ptr Eq_63) Eq_77))
  Class: Eq_78
  DataType: (memptr (ptr Eq_63) Eq_77)
  OrigDataType: (memptr T_63 (struct (0 T_77 t0000)))
T_79: (in 0x0000 : word16)
  Class: Eq_79
  DataType: word16
  OrigDataType: word16
T_80: (in di + 0x0000 : word16)
  Class: Eq_80
  DataType: word16
  OrigDataType: word16
T_81: (in Mem100[0xA000:di + 0x0000:byte] : byte)
  Class: Eq_77
  DataType: Eq_77
  OrigDataType: byte
T_82: (in DPB(ax_110, al_111, 0, 8) : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_83: (in 0xFEC0 : cui16)
  Class: Eq_77
  DataType: cui16
  OrigDataType: cui16
T_84: (in al_111 == 0xFEC0 : bool)
  Class: Eq_84
  DataType: bool
  OrigDataType: bool
T_85: (in di - bx_108 : word16)
  Class: Eq_78
  DataType: (memptr (ptr Eq_63) Eq_77)
  OrigDataType: word16
T_86: (in 0x0001 : word16)
  Class: Eq_86
  DataType: word16
  OrigDataType: word16
T_87: (in bx_108 - 0x0001 : word16)
  Class: Eq_67
  DataType: Eq_67
  OrigDataType: word16
T_88: (in 0x0000 : word16)
  Class: Eq_67
  DataType: int16
  OrigDataType: word16
T_89: (in bx_108 != 0x0000 : bool)
  Class: Eq_89
  DataType: bool
  OrigDataType: bool
T_90: (in 0x01 : byte)
  Class: Eq_90
  DataType: byte
  OrigDataType: byte
T_91: (in al_111 - 0x01 : byte)
  Class: Eq_77
  DataType: Eq_77
  OrigDataType: byte
T_92: (in 0x0000 : word16)
  Class: Eq_92
  DataType: word16
  OrigDataType: word16
T_93: (in di + 0x0000 : word16)
  Class: Eq_93
  DataType: word16
  OrigDataType: word16
T_94: (in Mem133[0xA000:di + 0x0000:byte] : byte)
  Class: Eq_77
  DataType: Eq_77
  OrigDataType: byte
T_95: (in __inb : ptr32)
  Class: Eq_95
  DataType: (ptr Eq_95)
  OrigDataType: (ptr (fn T_97 (T_96)))
T_96: (in 0x60 : byte)
  Class: Eq_96
  DataType: byte
  OrigDataType: byte
T_97: (in __inb(0x60) : byte)
  Class: Eq_97
  DataType: byte
  OrigDataType: byte
T_98: (in 0x01 : byte)
  Class: Eq_98
  DataType: byte
  OrigDataType: byte
T_99: (in __inb(0x60) & 0x01 : byte)
  Class: Eq_99
  DataType: byte
  OrigDataType: byte
T_100: (in 0x00 : byte)
  Class: Eq_99
  DataType: byte
  OrigDataType: byte
T_101: (in (__inb(0x60) & 0x01) == 0x00 : bool)
  Class: Eq_101
  DataType: bool
  OrigDataType: bool
T_102: (in 0x0140 : word16)
  Class: Eq_102
  DataType: word16
  OrigDataType: word16
T_103: (in bp + 0x0140 : word16)
  Class: Eq_64
  DataType: word16
  OrigDataType: word16
T_104: (in 0x0014 : word16)
  Class: Eq_38
  DataType: int16
  OrigDataType: word16
T_105: (in dx_46 == 0x0014 : bool)
  Class: Eq_105
  DataType: bool
  OrigDataType: bool
T_106: (in bios_video_set_mode : ptr32)
  Class: Eq_2
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (fn T_108 (T_107)))
T_107: (in 0x03 : byte)
  Class: Eq_4
  DataType: byte
  OrigDataType: byte
T_108: (in bios_video_set_mode(0x03) : void)
  Class: Eq_6
  DataType: void
  OrigDataType: void
*/
typedef Eq_63 Eq_1struct Globals {
	Eq_63 * ptrFFFA0000;	// FFFA0000
} Eq_1;

typedef void (Eq_2)(byte);

typedef void (Eq_9)(word16, byte);

typedef void (Eq_13)(word16, byte);

typedef void (Eq_17)(word16, byte);

typedef void (Eq_21)(word16, ui16);

typedef byte (Eq_32)(byte);

typedef union Eq_38 {
	int16 u0;
	uint16 u1;
} Eq_38;

typedef real64 (Eq_46)(real64);

typedef struct Eq_47 {
	int16 wFFFC;	// FFFC
} Eq_47;

typedef union Eq_57 {
	int16 u0;
	byte Eq_63::* u1;
} Eq_57;

typedef struct Eq_63 {
} Eq_63;

typedef union Eq_67 {
	int16 u0;
	byte Eq_63::* u1;
} Eq_67;

typedef union Eq_77 {
	cui16 u0;
	byte u1;
} Eq_77;

typedef byte (Eq_95)(byte);

