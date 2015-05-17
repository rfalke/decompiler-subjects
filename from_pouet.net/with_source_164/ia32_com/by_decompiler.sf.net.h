// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_164/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_45) ptrFFFA0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_17: (union "Eq_17" (int8 u0) (uint8 u1))
	T_17 (in al_210 : Eq_17)
	T_31 (in -al_210 : byte)
	T_39 (in (byte) ax_24 : byte)
Eq_21: (fn void (word16, byte))
	T_21 (in __outb : ptr32)
Eq_24: (fn void (word16, byte))
	T_24 (in __outb : ptr32)
Eq_32: (fn void (word16, byte))
	T_32 (in __outb : ptr32)
Eq_42: (struct "Eq_42" 0140 (0 byte b0000))
	T_42 (in di_172 : (memptr (ptr Eq_45) Eq_42))
	T_43 (in 0x0000 : word16)
	T_44 (in di_127 : (memptr (ptr Eq_45) Eq_42))
	T_55 (in di_127 + 0x0001 : word16)
	T_61 (in di_101 : (memptr (ptr Eq_45) Eq_42))
	T_63 (in di_101 + 0x0140 : word16)
	T_71 (in di_172 + wLoc02_190 + wLoc04_10 : word16)
Eq_45: (segment "Eq_45" (0 Eq_42 t0000))
	T_45 (in 0xA000 : selector)
Eq_80: (union "Eq_80" (16 u0) (int16 u1) (uint16 u2))
	T_80 (in dx_ax_178 /u 0x0140 : uint16)
	T_81 (in 0x0000 : word16)
Eq_83: (segment "Eq_83")
	T_83 (in ss : selector)
Eq_84: (union "Eq_84" ((memptr (ptr Eq_83) Eq_111) u0) (Eq_113 u1))
	T_84 (in fp : ptr16)
Eq_89: (union "Eq_89" (16 u0) (int16 u1) (uint16 u2))
	T_89 (in dx_ax_178 /u 0x0140 : uint16)
	T_90 (in 0x00A1 : word16)
Eq_92: (union "Eq_92" (16 u0) (int16 u1) (uint16 u2))
	T_92 (in dx_ax_176 % 0x0140 : uint16)
	T_93 (in 0x0000 : word16)
Eq_99: (union "Eq_99" (16 u0) (int16 u1) (uint16 u2))
	T_99 (in dx_ax_176 % 0x0140 : uint16)
	T_100 (in 0x0119 : word16)
Eq_102: (fn byte (byte))
	T_102 (in __inb : ptr32)
Eq_108: (fn void ())
	T_108 (in msdos_terminate_program20 : ptr32)
	T_109 (in signature of msdos_terminate_program20 : void)
Eq_111: (struct "Eq_111" (FFFFFFFC int16 wFFFFFFFC))
	T_111
Eq_112: (struct "Eq_112" (FFFFFFFE int16 wFFFFFFFE))
	T_112
Eq_113: (union "Eq_113" (ptr16 u0) ((memptr (ptr Eq_83) Eq_112) u1))
	T_113
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
T_7: (in wLoc02_190 : int16)
  Class: Eq_7
  DataType: int16
  OrigDataType: int16
T_8: (in 0x0001 : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: word16
T_9: (in wLoc04_10 : int16)
  Class: Eq_9
  DataType: int16
  OrigDataType: int16
T_10: (in 0x0140 : word16)
  Class: Eq_9
  DataType: int16
  OrigDataType: word16
T_11: (in cx_14 : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_12: (in cx : word16)
  Class: Eq_12
  DataType: word16
  OrigDataType: word16
T_13: (in 0xFE : byte)
  Class: Eq_13
  DataType: byte
  OrigDataType: byte
T_14: (in DPB(cx, 0xFE, 0, 8) : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_15: (in al_34 : byte)
  Class: Eq_15
  DataType: byte
  OrigDataType: byte
T_16: (in 0x3F : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_17: (in al_210 : Eq_17)
  Class: Eq_17
  DataType: Eq_17
  OrigDataType: (union (int8 u0) (uint8 u1))
T_18: (in 0x01 : byte)
  Class: Eq_18
  DataType: uint8
  OrigDataType: uint8
T_19: (in al_210 >>u 0x01 : word16)
  Class: Eq_19
  DataType: uint16
  OrigDataType: uint16
T_20: (in 0x3F - (al_210 >>u 0x01) : byte)
  Class: Eq_15
  DataType: byte
  OrigDataType: byte
T_21: (in __outb : ptr32)
  Class: Eq_21
  DataType: (ptr Eq_21)
  OrigDataType: (ptr (fn T_23 (T_22, T_15)))
T_22: (in 0x03C9 : word16)
  Class: Eq_22
  DataType: word16
  OrigDataType: word16
T_23: (in __outb(0x03C9, al_34) : void)
  Class: Eq_23
  DataType: void
  OrigDataType: void
T_24: (in __outb : ptr32)
  Class: Eq_24
  DataType: (ptr Eq_24)
  OrigDataType: (ptr (fn T_26 (T_25, T_15)))
T_25: (in 0x03C9 : word16)
  Class: Eq_25
  DataType: word16
  OrigDataType: word16
T_26: (in __outb(0x03C9, al_34) : void)
  Class: Eq_26
  DataType: void
  OrigDataType: void
T_27: (in 0x0001 : word16)
  Class: Eq_27
  DataType: word16
  OrigDataType: word16
T_28: (in cx_14 - 0x0001 : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_29: (in 0x0000 : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_30: (in cx_14 != 0x0000 : bool)
  Class: Eq_30
  DataType: bool
  OrigDataType: bool
T_31: (in -al_210 : byte)
  Class: Eq_17
  DataType: Eq_17
  OrigDataType: int8
T_32: (in __outb : ptr32)
  Class: Eq_32
  DataType: (ptr Eq_32)
  OrigDataType: (ptr (fn T_35 (T_33, T_34)))
T_33: (in 0x03C9 : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_34: (in 0x00 : byte)
  Class: Eq_34
  DataType: byte
  OrigDataType: byte
T_35: (in __outb(0x03C9, 0x00) : void)
  Class: Eq_35
  DataType: void
  OrigDataType: void
T_36: (in ax_24 : int16)
  Class: Eq_36
  DataType: int16
  OrigDataType: int16
T_37: (in 0x007F : word16)
  Class: Eq_37
  DataType: word16
  OrigDataType: word16
T_38: (in cx_14 - 0x007F : word16)
  Class: Eq_36
  DataType: int16
  OrigDataType: word16
T_39: (in (byte) ax_24 : byte)
  Class: Eq_17
  DataType: Eq_17
  OrigDataType: byte
T_40: (in 0x0000 : word16)
  Class: Eq_36
  DataType: int16
  OrigDataType: int16
T_41: (in ax_24 > 0x0000 : bool)
  Class: Eq_41
  DataType: bool
  OrigDataType: bool
T_42: (in di_172 : (memptr (ptr Eq_45) Eq_42))
  Class: Eq_42
  DataType: (memptr (ptr Eq_45) Eq_42)
  OrigDataType: word16
T_43: (in 0x0000 : word16)
  Class: Eq_42
  DataType: (memptr (ptr Eq_45) Eq_42)
  OrigDataType: word16
T_44: (in di_127 : (memptr (ptr Eq_45) Eq_42))
  Class: Eq_42
  DataType: (memptr (ptr Eq_45) Eq_42)
  OrigDataType: (memptr T_45 (struct 0140 (0 T_48 t0000)))
T_45: (in 0xA000 : selector)
  Class: Eq_45
  DataType: (ptr Eq_45)
  OrigDataType: (ptr (segment))
T_46: (in 0x0000 : word16)
  Class: Eq_46
  DataType: word16
  OrigDataType: word16
T_47: (in di_127 + 0x0000 : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_48: (in Mem0[0xA000:di_127 + 0x0000:byte] : byte)
  Class: Eq_48
  DataType: byte
  OrigDataType: byte
T_49: (in 0x01 : byte)
  Class: Eq_49
  DataType: byte
  OrigDataType: byte
T_50: (in (0xA000->*di_127).b0000 + 0x01 : byte)
  Class: Eq_48
  DataType: byte
  OrigDataType: byte
T_51: (in 0x0000 : word16)
  Class: Eq_51
  DataType: word16
  OrigDataType: word16
T_52: (in di_127 + 0x0000 : word16)
  Class: Eq_52
  DataType: word16
  OrigDataType: word16
T_53: (in Mem130[0xA000:di_127 + 0x0000:byte] : byte)
  Class: Eq_48
  DataType: byte
  OrigDataType: byte
T_54: (in 0x0001 : word16)
  Class: Eq_54
  DataType: word16
  OrigDataType: word16
T_55: (in di_127 + 0x0001 : word16)
  Class: Eq_42
  DataType: (memptr (ptr Eq_45) Eq_42)
  OrigDataType: word16
T_56: (in cx_123 : word16)
  Class: Eq_56
  DataType: word16
  OrigDataType: word16
T_57: (in 0x0001 : word16)
  Class: Eq_57
  DataType: word16
  OrigDataType: word16
T_58: (in cx_123 - 0x0001 : word16)
  Class: Eq_56
  DataType: word16
  OrigDataType: word16
T_59: (in 0x0000 : word16)
  Class: Eq_56
  DataType: word16
  OrigDataType: word16
T_60: (in cx_123 != 0x0000 : bool)
  Class: Eq_60
  DataType: bool
  OrigDataType: bool
T_61: (in di_101 : (memptr (ptr Eq_45) Eq_42))
  Class: Eq_42
  DataType: (memptr (ptr Eq_45) Eq_42)
  OrigDataType: word16
T_62: (in 0x0140 : word16)
  Class: Eq_62
  DataType: word16
  OrigDataType: word16
T_63: (in di_101 + 0x0140 : word16)
  Class: Eq_42
  DataType: (memptr (ptr Eq_45) Eq_42)
  OrigDataType: word16
T_64: (in cx_100 : word16)
  Class: Eq_64
  DataType: word16
  OrigDataType: word16
T_65: (in 0x0001 : word16)
  Class: Eq_65
  DataType: word16
  OrigDataType: word16
T_66: (in cx_100 - 0x0001 : word16)
  Class: Eq_64
  DataType: word16
  OrigDataType: word16
T_67: (in 0x0000 : word16)
  Class: Eq_64
  DataType: word16
  OrigDataType: word16
T_68: (in cx_100 != 0x0000 : bool)
  Class: Eq_68
  DataType: bool
  OrigDataType: bool
T_69: (in 0x0027 : word16)
  Class: Eq_56
  DataType: word16
  OrigDataType: word16
T_70: (in di_172 + wLoc02_190 : word16)
  Class: Eq_70
  DataType: word16
  OrigDataType: word16
T_71: (in di_172 + wLoc02_190 + wLoc04_10 : word16)
  Class: Eq_42
  DataType: (memptr (ptr Eq_45) Eq_42)
  OrigDataType: word16
T_72: (in dx_ax_176 : word32)
  Class: Eq_72
  DataType: word32
  OrigDataType: word32
T_73: (in 0x0000 : word16)
  Class: Eq_73
  DataType: word16
  OrigDataType: word16
T_74: (in SEQ(0x0000, di_172) : word32)
  Class: Eq_72
  DataType: word32
  OrigDataType: word32
T_75: (in dx_ax_178 : uint32)
  Class: Eq_75
  DataType: uint32
  OrigDataType: uint32
T_76: (in 0x0140 : word16)
  Class: Eq_76
  DataType: word16
  OrigDataType: word16
T_77: (in dx_ax_176 % 0x0140 : uint16)
  Class: Eq_77
  DataType: uint16
  OrigDataType: uint16
T_78: (in SEQ(dx_ax_176 % 0x0140, di_172) : word32)
  Class: Eq_75
  DataType: uint32
  OrigDataType: word32
T_79: (in 0x0140 : word16)
  Class: Eq_79
  DataType: uint16
  OrigDataType: uint16
T_80: (in dx_ax_178 /u 0x0140 : uint16)
  Class: Eq_80
  DataType: Eq_80
  OrigDataType: (union (16 u0) (uint16 u1))
T_81: (in 0x0000 : word16)
  Class: Eq_80
  DataType: int16
  OrigDataType: int16
T_82: (in dx_ax_178 /u 0x0140 <= 0x0000 : bool)
  Class: Eq_82
  DataType: bool
  OrigDataType: bool
T_83: (in ss : selector)
  Class: Eq_83
  DataType: (ptr Eq_83)
  OrigDataType: (ptr (segment))
T_84: (in fp : ptr16)
  Class: Eq_84
  DataType: Eq_84
  OrigDataType: (union ((union (ptr16 u0) ((memptr T_83 (struct (FFFFFFFE T_97 tFFFFFFFE))) u1)) u0) ((memptr T_83 (struct (FFFFFFFC T_87 tFFFFFFFC))) u1))
T_85: (in 0x0004 : word16)
  Class: Eq_85
  DataType: word16
  OrigDataType: word16
T_86: (in fp - 0x0004 : word16)
  Class: Eq_86
  DataType: word16
  OrigDataType: word16
T_87: (in Mem130[ss:fp - 0x0004:word16] : word16)
  Class: Eq_87
  DataType: int16
  OrigDataType: int16
T_88: (in -Mem130[ss:fp - 0x0004:word16] : word16)
  Class: Eq_9
  DataType: int16
  OrigDataType: int16
T_89: (in dx_ax_178 /u 0x0140 : uint16)
  Class: Eq_89
  DataType: Eq_89
  OrigDataType: (union (16 u0) (uint16 u1))
T_90: (in 0x00A1 : word16)
  Class: Eq_89
  DataType: int16
  OrigDataType: int16
T_91: (in dx_ax_178 /u 0x0140 >= 0x00A1 : bool)
  Class: Eq_91
  DataType: bool
  OrigDataType: bool
T_92: (in dx_ax_176 % 0x0140 : uint16)
  Class: Eq_92
  DataType: Eq_92
  OrigDataType: (union (16 u0) (uint16 u1))
T_93: (in 0x0000 : word16)
  Class: Eq_92
  DataType: int16
  OrigDataType: int16
T_94: (in dx_ax_176 % 0x0140 <= 0x0000 : bool)
  Class: Eq_94
  DataType: bool
  OrigDataType: bool
T_95: (in 0x0002 : word16)
  Class: Eq_95
  DataType: word16
  OrigDataType: word16
T_96: (in fp - 0x0002 : word16)
  Class: Eq_96
  DataType: word16
  OrigDataType: word16
T_97: (in Mem130[ss:fp - 0x0002:word16] : word16)
  Class: Eq_97
  DataType: int16
  OrigDataType: int16
T_98: (in -Mem130[ss:fp - 0x0002:word16] : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: int16
T_99: (in dx_ax_176 % 0x0140 : uint16)
  Class: Eq_99
  DataType: Eq_99
  OrigDataType: (union (16 u0) (uint16 u1))
T_100: (in 0x0119 : word16)
  Class: Eq_99
  DataType: int16
  OrigDataType: int16
T_101: (in dx_ax_176 % 0x0140 >= 0x0119 : bool)
  Class: Eq_101
  DataType: bool
  OrigDataType: bool
T_102: (in __inb : ptr32)
  Class: Eq_102
  DataType: (ptr Eq_102)
  OrigDataType: (ptr (fn T_104 (T_103)))
T_103: (in 0x60 : byte)
  Class: Eq_103
  DataType: byte
  OrigDataType: byte
T_104: (in __inb(0x60) : byte)
  Class: Eq_104
  DataType: byte
  OrigDataType: byte
T_105: (in 0x01 : byte)
  Class: Eq_104
  DataType: byte
  OrigDataType: byte
T_106: (in __inb(0x60) != 0x01 : bool)
  Class: Eq_106
  DataType: bool
  OrigDataType: bool
T_107: (in 0x0027 : word16)
  Class: Eq_64
  DataType: word16
  OrigDataType: word16
T_108: (in msdos_terminate_program20 : ptr32)
  Class: Eq_108
  DataType: (ptr Eq_108)
  OrigDataType: (ptr (fn T_110 ()))
T_109: (in signature of msdos_terminate_program20 : void)
  Class: Eq_108
  DataType: (ptr Eq_108)
  OrigDataType: 
T_110: (in msdos_terminate_program20() : void)
  Class: Eq_110
  DataType: void
  OrigDataType: void
T_111:
  Class: Eq_111
  DataType: Eq_111
  OrigDataType: 
T_112:
  Class: Eq_112
  DataType: Eq_112
  OrigDataType: 
T_113:
  Class: Eq_113
  DataType: Eq_113
  OrigDataType: 
*/
typedef Eq_45 Eq_1struct Globals {
	Eq_45 * ptrFFFA0000;	// FFFA0000
} Eq_1;

typedef void (Eq_2)(byte);

typedef union Eq_17 {
	int8 u0;
	uint8 u1;
} Eq_17;

typedef void (Eq_21)(word16, byte);

typedef void (Eq_24)(word16, byte);

typedef void (Eq_32)(word16, byte);

typedef struct Eq_42 {	// size: 320 140
	byte b0000;	// 0
} Eq_42;

typedef Eq_42 Eq_45struct Eq_45 {
	Eq_42 t0000;	// 0
} Eq_45;

typedef union Eq_80 {
	16 u0;
	int16 u1;
	uint16 u2;
} Eq_80;

typedef struct Eq_83 {
} Eq_83;

typedef union Eq_84 {
	Eq_111 Eq_83::* u0;
	Eq_113 u1;
} Eq_84;

typedef union Eq_89 {
	16 u0;
	int16 u1;
	uint16 u2;
} Eq_89;

typedef union Eq_92 {
	16 u0;
	int16 u1;
	uint16 u2;
} Eq_92;

typedef union Eq_99 {
	16 u0;
	int16 u1;
	uint16 u2;
} Eq_99;

typedef byte (Eq_102)(byte);

typedef void (Eq_108)();

typedef struct Eq_111 {
	int16 wFFFFFFFC;	// FFFFFFFC
} Eq_111;

typedef struct Eq_112 {
	int16 wFFFFFFFE;	// FFFFFFFE
} Eq_112;

typedef union Eq_113 {
	ptr16 u0;
	Eq_112 Eq_83::* u1;
} Eq_113;

