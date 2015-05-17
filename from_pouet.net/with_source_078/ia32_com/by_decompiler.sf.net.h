// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_078/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_34) ptrFFFA0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
	T_81 (in bios_video_set_mode : ptr32)
Eq_9: (fn void (word16, byte))
	T_9 (in __outb : ptr32)
Eq_14: (union "Eq_14" (uint16 u0) (byte u1))
	T_14 (in al_30 : Eq_14)
	T_15 (in (byte) ax_15 : byte)
	T_52 (in al_59 >>u 0x02 : word16)
Eq_16: (fn void (word16, Eq_14))
	T_16 (in __outb : ptr32)
Eq_19: (fn void (word16, Eq_14))
	T_19 (in __outb : ptr32)
Eq_29: (struct "Eq_29" 0001 (0 Eq_48 t0000) (13E byte b013E) (142 byte b0142) (282 byte b0282))
	T_29 (in cx_50 : (memptr (ptr Eq_34) Eq_29))
	T_31 (in DPB(cx, 0x7F, 8, 8) : word16)
	T_32 (in di_51 : (memptr (ptr Eq_34) Eq_29))
	T_54 (in di_51 + 0x0001 : word16)
	T_56 (in cx_50 - 0x0001 : word16)
	T_57 (in 0x0000 : word16)
	T_76 (in di_51 + 0x0002 : word16)
Eq_34: (segment "Eq_34" (0 Eq_29 t0000))
	T_34 (in 0xA000 : selector)
Eq_48: (union "Eq_48" (uint16 u0) (byte u1))
	T_48 (in al_59 >>u 0x02 : word16)
	T_51 (in Mem65[0xA000:di_51 + 0x0000:byte] : byte)
	T_71 (in __in(0x0040) : word16)
	T_74 (in Mem77[0xA000:di_51 + 0x0000:word16] : word16)
Eq_61: (fn byte ((ptr Eq_63)))
	T_61 (in bios_kbd_check_keystroke : ptr32)
	T_62 (in signature of bios_kbd_check_keystroke : void)
Eq_63: (union "Eq_63" (uint16 u0) (byte u1))
	T_63 (in alOut : ptr16)
	T_64 (in out al_30 : ptr16)
Eq_66: (union "Eq_66" (uint16 u0) (byte u1))
	T_66 (in al_59 >>u 0x02 : word16)
	T_67 (in 0x00 : byte)
Eq_69: (fn Eq_48 (word16))
	T_69 (in __in : ptr32)
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
T_7: (in ax_15 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_8: (in si : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_9: (in __outb : ptr32)
  Class: Eq_9
  DataType: (ptr Eq_9)
  OrigDataType: (ptr (fn T_13 (T_10, T_12)))
T_10: (in 0x03C9 : word16)
  Class: Eq_10
  DataType: word16
  OrigDataType: word16
T_11: (in bx : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_12: (in (byte) bx : byte)
  Class: Eq_12
  DataType: byte
  OrigDataType: byte
T_13: (in __outb(0x03C9, (byte) bx) : void)
  Class: Eq_13
  DataType: void
  OrigDataType: void
T_14: (in al_30 : Eq_14)
  Class: Eq_14
  DataType: Eq_14
  OrigDataType: (union (uint16 u0) (byte u1))
T_15: (in (byte) ax_15 : byte)
  Class: Eq_14
  DataType: Eq_14
  OrigDataType: byte
T_16: (in __outb : ptr32)
  Class: Eq_16
  DataType: (ptr Eq_16)
  OrigDataType: (ptr (fn T_18 (T_17, T_14)))
T_17: (in 0x03C9 : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_18: (in __outb(0x03C9, al_30) : void)
  Class: Eq_18
  DataType: void
  OrigDataType: void
T_19: (in __outb : ptr32)
  Class: Eq_19
  DataType: (ptr Eq_19)
  OrigDataType: (ptr (fn T_21 (T_20, T_14)))
T_20: (in 0x03C9 : word16)
  Class: Eq_20
  DataType: word16
  OrigDataType: word16
T_21: (in __outb(0x03C9, al_30) : void)
  Class: Eq_21
  DataType: void
  OrigDataType: void
T_22: (in 0x0001 : word16)
  Class: Eq_22
  DataType: word16
  OrigDataType: word16
T_23: (in bx + 0x0001 : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_24: (in cx : word16)
  Class: Eq_24
  DataType: word16
  OrigDataType: word16
T_25: (in 0x0001 : word16)
  Class: Eq_25
  DataType: word16
  OrigDataType: word16
T_26: (in cx - 0x0001 : word16)
  Class: Eq_24
  DataType: word16
  OrigDataType: word16
T_27: (in 0x0000 : word16)
  Class: Eq_24
  DataType: word16
  OrigDataType: word16
T_28: (in cx != 0x0000 : bool)
  Class: Eq_28
  DataType: bool
  OrigDataType: bool
T_29: (in cx_50 : (memptr (ptr Eq_34) Eq_29))
  Class: Eq_29
  DataType: (memptr (ptr Eq_34) Eq_29)
  OrigDataType: word16
T_30: (in 0x7F : byte)
  Class: Eq_30
  DataType: byte
  OrigDataType: byte
T_31: (in DPB(cx, 0x7F, 8, 8) : word16)
  Class: Eq_29
  DataType: (memptr (ptr Eq_34) Eq_29)
  OrigDataType: word16
T_32: (in di_51 : (memptr (ptr Eq_34) Eq_29))
  Class: Eq_29
  DataType: (memptr (ptr Eq_34) Eq_29)
  OrigDataType: (memptr T_34 (struct 0001 (0 T_48 t0000) (13E T_37 t013E) (142 T_41 t0142) (282 T_45 t0282)))
T_33: (in al_59 : uint8)
  Class: Eq_33
  DataType: uint8
  OrigDataType: uint8
T_34: (in 0xA000 : selector)
  Class: Eq_34
  DataType: (ptr Eq_34)
  OrigDataType: (ptr (segment))
T_35: (in 0x013E : word16)
  Class: Eq_35
  DataType: word16
  OrigDataType: word16
T_36: (in di_51 + 0x013E : word16)
  Class: Eq_36
  DataType: word16
  OrigDataType: word16
T_37: (in Mem0[0xA000:di_51 + 0x013E:byte] : byte)
  Class: Eq_37
  DataType: byte
  OrigDataType: byte
T_38: (in al_30 + Mem0[0xA000:di_51 + 0x013E:byte] : byte)
  Class: Eq_38
  DataType: byte
  OrigDataType: byte
T_39: (in 0x0142 : word16)
  Class: Eq_39
  DataType: word16
  OrigDataType: word16
T_40: (in di_51 + 0x0142 : word16)
  Class: Eq_40
  DataType: word16
  OrigDataType: word16
T_41: (in Mem0[0xA000:di_51 + 0x0142:byte] : byte)
  Class: Eq_41
  DataType: byte
  OrigDataType: byte
T_42: (in al_30 + Mem0[0xA000:di_51 + 0x013E:byte] + (0xA000->*di_51).b0142 : byte)
  Class: Eq_42
  DataType: byte
  OrigDataType: byte
T_43: (in 0x0282 : word16)
  Class: Eq_43
  DataType: word16
  OrigDataType: word16
T_44: (in di_51 + 0x0282 : word16)
  Class: Eq_44
  DataType: word16
  OrigDataType: word16
T_45: (in Mem0[0xA000:di_51 + 0x0282:byte] : byte)
  Class: Eq_45
  DataType: byte
  OrigDataType: byte
T_46: (in al_30 + Mem0[0xA000:di_51 + 0x013E:byte] + (0xA000->*di_51).b0142 + (0xA000->*di_51).b0282 : byte)
  Class: Eq_33
  DataType: uint8
  OrigDataType: byte
T_47: (in 0x02 : byte)
  Class: Eq_47
  DataType: uint8
  OrigDataType: uint8
T_48: (in al_59 >>u 0x02 : word16)
  Class: Eq_48
  DataType: Eq_48
  OrigDataType: uint16
T_49: (in 0x0000 : word16)
  Class: Eq_49
  DataType: word16
  OrigDataType: word16
T_50: (in di_51 + 0x0000 : word16)
  Class: Eq_50
  DataType: word16
  OrigDataType: word16
T_51: (in Mem65[0xA000:di_51 + 0x0000:byte] : byte)
  Class: Eq_48
  DataType: Eq_48
  OrigDataType: byte
T_52: (in al_59 >>u 0x02 : word16)
  Class: Eq_14
  DataType: Eq_14
  OrigDataType: uint16
T_53: (in 0x0001 : word16)
  Class: Eq_53
  DataType: word16
  OrigDataType: word16
T_54: (in di_51 + 0x0001 : word16)
  Class: Eq_29
  DataType: (memptr (ptr Eq_34) Eq_29)
  OrigDataType: word16
T_55: (in 0x0001 : word16)
  Class: Eq_55
  DataType: word16
  OrigDataType: word16
T_56: (in cx_50 - 0x0001 : word16)
  Class: Eq_29
  DataType: (memptr (ptr Eq_34) Eq_29)
  OrigDataType: word16
T_57: (in 0x0000 : word16)
  Class: Eq_29
  DataType: (memptr (ptr Eq_34) Eq_29)
  OrigDataType: word16
T_58: (in cx_50 != &Eq_34::t0000 : bool)
  Class: Eq_58
  DataType: bool
  OrigDataType: bool
T_59: (in 0xA0 : byte)
  Class: Eq_59
  DataType: byte
  OrigDataType: byte
T_60: (in DPB(cx_50, 0xA0, 0, 8) : word16)
  Class: Eq_24
  DataType: word16
  OrigDataType: word16
T_61: (in bios_kbd_check_keystroke : ptr32)
  Class: Eq_61
  DataType: (ptr Eq_61)
  OrigDataType: (ptr (fn T_65 (T_64)))
T_62: (in signature of bios_kbd_check_keystroke : void)
  Class: Eq_61
  DataType: (ptr Eq_61)
  OrigDataType: 
T_63: (in alOut : ptr16)
  Class: Eq_63
  DataType: (ptr Eq_63)
  OrigDataType: ptr16
T_64: (in out al_30 : ptr16)
  Class: Eq_63
  DataType: (ptr Eq_63)
  OrigDataType: (ptr (union (uint16 u0) (byte u1)))
T_65: (in bios_kbd_check_keystroke(out al_30) : byte)
  Class: Eq_65
  DataType: byte
  OrigDataType: byte
T_66: (in al_59 >>u 0x02 : word16)
  Class: Eq_66
  DataType: Eq_66
  OrigDataType: uint16
T_67: (in 0x00 : byte)
  Class: Eq_66
  DataType: byte
  OrigDataType: byte
T_68: (in al_59 >>u 0x02 == 0x00 : bool)
  Class: Eq_68
  DataType: bool
  OrigDataType: bool
T_69: (in __in : ptr32)
  Class: Eq_69
  DataType: (ptr Eq_69)
  OrigDataType: (ptr (fn T_71 (T_70)))
T_70: (in 0x0040 : word16)
  Class: Eq_70
  DataType: word16
  OrigDataType: word16
T_71: (in __in(0x0040) : word16)
  Class: Eq_48
  DataType: Eq_48
  OrigDataType: word16
T_72: (in 0x0000 : word16)
  Class: Eq_72
  DataType: word16
  OrigDataType: word16
T_73: (in di_51 + 0x0000 : word16)
  Class: Eq_73
  DataType: word16
  OrigDataType: word16
T_74: (in Mem77[0xA000:di_51 + 0x0000:word16] : word16)
  Class: Eq_48
  DataType: Eq_48
  OrigDataType: word16
T_75: (in 0x0002 : word16)
  Class: Eq_75
  DataType: word16
  OrigDataType: word16
T_76: (in di_51 + 0x0002 : word16)
  Class: Eq_29
  DataType: (memptr (ptr Eq_34) Eq_29)
  OrigDataType: word16
T_77: (in 0x0001 : word16)
  Class: Eq_77
  DataType: word16
  OrigDataType: word16
T_78: (in cx - 0x0001 : word16)
  Class: Eq_24
  DataType: word16
  OrigDataType: word16
T_79: (in 0x0000 : word16)
  Class: Eq_24
  DataType: word16
  OrigDataType: word16
T_80: (in cx == 0x0000 : bool)
  Class: Eq_80
  DataType: bool
  OrigDataType: bool
T_81: (in bios_video_set_mode : ptr32)
  Class: Eq_2
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (fn T_83 (T_82)))
T_82: (in 0x03 : byte)
  Class: Eq_4
  DataType: byte
  OrigDataType: byte
T_83: (in bios_video_set_mode(0x03) : void)
  Class: Eq_6
  DataType: void
  OrigDataType: void
*/
typedef Eq_34 Eq_1struct Globals {
	Eq_34 * ptrFFFA0000;	// FFFA0000
} Eq_1;

typedef void (Eq_2)(byte);

typedef void (Eq_9)(word16, byte);

typedef union Eq_14 {
	uint16 u0;
	byte u1;
} Eq_14;

typedef void (Eq_16)(word16, Eq_14);

typedef void (Eq_19)(word16, Eq_14);

typedef Eq_48 Eq_29struct Eq_29 {	// size: 1 1
	Eq_48 t0000;	// 0
	byte b013E;	// 13E
	byte b0142;	// 142
	byte b0282;	// 282
} Eq_29;

typedef Eq_29 Eq_34struct Eq_34 {
	Eq_29 t0000;	// 0
} Eq_34;

typedef union Eq_48 {
	uint16 u0;
	byte u1;
} Eq_48;

typedef byte (Eq_61)(Eq_63 *);

typedef union Eq_63 {
	uint16 u0;
	byte u1;
} Eq_63;

typedef union Eq_66 {
	uint16 u0;
	byte u1;
} Eq_66;

typedef Eq_48 (Eq_69)(word16);

