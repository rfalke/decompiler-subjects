// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_061/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_40) ptrFFFA0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_7: (fn void (word16, byte))
	T_7 (in __outb : ptr32)
Eq_11: (fn void (word16, byte))
	T_11 (in __outb : ptr32)
Eq_14: (fn void (word16, byte))
	T_14 (in __outb : ptr32)
Eq_24: (union "Eq_24" (int8 u0) (uint16 u1))
	T_24 (in al_17 : Eq_24)
	T_29 (in cl >>u 0x01 : word16)
	T_31 (in 0x40 : byte)
Eq_40: (segment "Eq_40" (0 (arr byte 1) a0000))
	T_40 (in 0xA000 : selector)
Eq_49: (fn byte ((ptr byte)))
	T_49 (in bios_kbd_get_keystroke : ptr32)
	T_50 (in signature of bios_kbd_get_keystroke : void)
Eq_54: (fn void ())
	T_54 (in msdos_terminate_program20 : ptr32)
	T_55 (in signature of msdos_terminate_program20 : void)
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
T_8: (in 0x03C9 : word16)
  Class: Eq_8
  DataType: word16
  OrigDataType: word16
T_9: (in al_18 : byte)
  Class: Eq_9
  DataType: byte
  OrigDataType: byte
T_10: (in __outb(0x03C9, al_18) : void)
  Class: Eq_10
  DataType: void
  OrigDataType: void
T_11: (in __outb : ptr32)
  Class: Eq_11
  DataType: (ptr Eq_11)
  OrigDataType: (ptr (fn T_13 (T_12, T_9)))
T_12: (in 0x03C9 : word16)
  Class: Eq_12
  DataType: word16
  OrigDataType: word16
T_13: (in __outb(0x03C9, al_18) : void)
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
T_16: (in __outb(0x03C9, al_18) : void)
  Class: Eq_16
  DataType: void
  OrigDataType: void
T_17: (in cx : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_18: (in 0x0001 : word16)
  Class: Eq_18
  DataType: word16
  OrigDataType: word16
T_19: (in cx - 0x0001 : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_20: (in (byte) cx : byte)
  Class: Eq_20
  DataType: uint8
  OrigDataType: byte
T_21: (in cl : byte)
  Class: Eq_20
  DataType: uint8
  OrigDataType: uint8
T_22: (in 0x0000 : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_23: (in cx != 0x0000 : bool)
  Class: Eq_23
  DataType: bool
  OrigDataType: bool
T_24: (in al_17 : Eq_24)
  Class: Eq_24
  DataType: Eq_24
  OrigDataType: int8
T_25: (in 0x40 : byte)
  Class: Eq_25
  DataType: byte
  OrigDataType: byte
T_26: (in al_17 - 0x40 : byte)
  Class: Eq_26
  DataType: byte
  OrigDataType: byte
T_27: (in ~(al_17 - 0x40) : byte)
  Class: Eq_9
  DataType: byte
  OrigDataType: byte
T_28: (in 0x01 : byte)
  Class: Eq_28
  DataType: uint8
  OrigDataType: uint8
T_29: (in cl >>u 0x01 : word16)
  Class: Eq_24
  DataType: Eq_24
  OrigDataType: uint16
T_30: (in al_17 - 0x40 : byte)
  Class: Eq_9
  DataType: byte
  OrigDataType: byte
T_31: (in 0x40 : byte)
  Class: Eq_24
  DataType: int8
  OrigDataType: int8
T_32: (in al_17 < 0x40 : bool)
  Class: Eq_32
  DataType: bool
  OrigDataType: bool
T_33: (in di_29 : (memptr (ptr Eq_40) byte))
  Class: Eq_33
  DataType: (memptr (ptr Eq_40) byte)
  OrigDataType: (memptr T_40 (struct 0001 (0 T_43 t0000)))
T_34: (in 0x0000 : word16)
  Class: Eq_33
  DataType: (memptr (ptr Eq_40) byte)
  OrigDataType: word16
T_35: (in 0x0000 : word16)
  Class: Eq_35
  DataType: word16
  OrigDataType: word16
T_36: (in SEQ(0x0000, di_29) : word32)
  Class: Eq_36
  DataType: word32
  OrigDataType: word32
T_37: (in 0x0140 : word16)
  Class: Eq_37
  DataType: word16
  OrigDataType: word16
T_38: (in SEQ(0x0000, di_29) % 0x0140 : uint16)
  Class: Eq_38
  DataType: uint16
  OrigDataType: uint16
T_39: (in (byte) (SEQ(0x0000, di_29) % 0x0140) : byte)
  Class: Eq_39
  DataType: byte
  OrigDataType: byte
T_40: (in 0xA000 : selector)
  Class: Eq_40
  DataType: (ptr Eq_40)
  OrigDataType: (ptr (segment (0 (arr T_57 1) a0000)))
T_41: (in 0x0000 : word16)
  Class: Eq_41
  DataType: word16
  OrigDataType: word16
T_42: (in di_29 + 0x0000 : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_43: (in Mem41[0xA000:di_29 + 0x0000:byte] : byte)
  Class: Eq_39
  DataType: byte
  OrigDataType: byte
T_44: (in 0x0001 : word16)
  Class: Eq_44
  DataType: word16
  OrigDataType: word16
T_45: (in di_29 + 0x0001 : word16)
  Class: Eq_33
  DataType: (memptr (ptr Eq_40) byte)
  OrigDataType: word16
T_46: (in 0x0000 : word16)
  Class: Eq_33
  DataType: (memptr (ptr Eq_40) byte)
  OrigDataType: word16
T_47: (in di_29 != Eq_40::a0000 : bool)
  Class: Eq_47
  DataType: bool
  OrigDataType: bool
T_48: (in al_50 : byte)
  Class: Eq_48
  DataType: byte
  OrigDataType: byte
T_49: (in bios_kbd_get_keystroke : ptr32)
  Class: Eq_49
  DataType: (ptr Eq_49)
  OrigDataType: (ptr (fn T_53 (T_52)))
T_50: (in signature of bios_kbd_get_keystroke : void)
  Class: Eq_49
  DataType: (ptr Eq_49)
  OrigDataType: 
T_51: (in alOut : ptr16)
  Class: Eq_51
  DataType: (ptr byte)
  OrigDataType: ptr16
T_52: (in out al_50 : ptr16)
  Class: Eq_51
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_53: (in bios_kbd_get_keystroke(out al_50) : byte)
  Class: Eq_53
  DataType: byte
  OrigDataType: byte
T_54: (in msdos_terminate_program20 : ptr32)
  Class: Eq_54
  DataType: (ptr Eq_54)
  OrigDataType: (ptr (fn T_56 ()))
T_55: (in signature of msdos_terminate_program20 : void)
  Class: Eq_54
  DataType: (ptr Eq_54)
  OrigDataType: 
T_56: (in msdos_terminate_program20() : void)
  Class: Eq_56
  DataType: void
  OrigDataType: void
T_57:
  Class: Eq_57
  DataType: byte
  OrigDataType: (struct 0001 (0 T_43 t0000))
*/
typedef Eq_40 Eq_1struct Globals {
	Eq_40 * ptrFFFA0000;	// FFFA0000
} Eq_1;

typedef void (Eq_2)(byte);

typedef void (Eq_7)(word16, byte);

typedef void (Eq_11)(word16, byte);

typedef void (Eq_14)(word16, byte);

typedef union Eq_24 {
	int8 u0;
	uint16 u1;
} Eq_24;

typedef  Eq_40[1]struct Eq_40 {
	byte a0000[1];	// 0
} Eq_40;

typedef byte (Eq_49)(byte *);

typedef void (Eq_54)();

