// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_065/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_42) ptrFFFA0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_11: (fn void (word16, word16))
	T_11 (in __outw : ptr32)
Eq_16: (union "Eq_16" (uint16 u0) (byte u1))
	T_16 (in al_14 : Eq_16)
	T_18 (in al_10 >>u 0x02 : word16)
Eq_19: (fn void (word16, Eq_16))
	T_19 (in __outb : ptr32)
Eq_22: (fn void (word16, ui16))
	T_22 (in __outb : ptr32)
Eq_27: (fn void (word16, uint16))
	T_27 (in __outb : ptr32)
Eq_42: (segment "Eq_42" (FFFFFA00 (struct "Eq_43" 0001 (FFFFFFFF byte bFFFFFFFF)) tFFFFFA00) (FFFFFFFF (arr byte 1535) aFFFFFFFF) (0 Eq_43 t0000) (FA00 Eq_43 tFA00))
	T_42 (in 0xA000 : selector)
Eq_43: (struct "Eq_43" 0001 (FFFFFFFF byte bFFFFFFFF))
	T_43 (in cx_39 : (memptr (ptr Eq_42) Eq_43))
	T_50 (in cx_39 - 0x0001 : word16)
	T_51 (in 0x0000 : word16)
	T_64 (in 0xFA00 : word16)
Eq_54: (fn byte ((ptr byte)))
	T_54 (in bios_kbd_check_keystroke : ptr32)
	T_55 (in signature of bios_kbd_check_keystroke : void)
Eq_65: (fn void (byte))
	T_65 (in msdos_terminate : ptr32)
	T_66 (in signature of msdos_terminate : void)
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
T_8: (in ax : word16)
  Class: Eq_8
  DataType: word16
  OrigDataType: word16
T_9: (in 0x00 : byte)
  Class: Eq_9
  DataType: byte
  OrigDataType: byte
T_10: (in DPB(ax, 0x00, 0, 8) : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_11: (in __outw : ptr32)
  Class: Eq_11
  DataType: (ptr Eq_11)
  OrigDataType: (ptr (fn T_13 (T_12, T_7)))
T_12: (in 0x03C8 : word16)
  Class: Eq_12
  DataType: word16
  OrigDataType: word16
T_13: (in __outw(0x03C8, ax_11) : void)
  Class: Eq_13
  DataType: void
  OrigDataType: void
T_14: (in al_10 : uint8)
  Class: Eq_14
  DataType: uint8
  OrigDataType: uint8
T_15: (in 0x00 : byte)
  Class: Eq_14
  DataType: uint8
  OrigDataType: byte
T_16: (in al_14 : Eq_16)
  Class: Eq_16
  DataType: Eq_16
  OrigDataType: byte
T_17: (in 0x02 : byte)
  Class: Eq_17
  DataType: uint8
  OrigDataType: uint8
T_18: (in al_10 >>u 0x02 : word16)
  Class: Eq_16
  DataType: Eq_16
  OrigDataType: uint16
T_19: (in __outb : ptr32)
  Class: Eq_19
  DataType: (ptr Eq_19)
  OrigDataType: (ptr (fn T_21 (T_20, T_16)))
T_20: (in 0x03C9 : word16)
  Class: Eq_20
  DataType: word16
  OrigDataType: word16
T_21: (in __outb(0x03C9, al_14) : void)
  Class: Eq_21
  DataType: void
  OrigDataType: void
T_22: (in __outb : ptr32)
  Class: Eq_22
  DataType: (ptr Eq_22)
  OrigDataType: (ptr (fn T_26 (T_23, T_25)))
T_23: (in 0x03C9 : word16)
  Class: Eq_23
  DataType: word16
  OrigDataType: word16
T_24: (in 0x01 : byte)
  Class: Eq_24
  DataType: byte
  OrigDataType: byte
T_25: (in al_14 << 0x01 : word16)
  Class: Eq_25
  DataType: ui16
  OrigDataType: ui16
T_26: (in __outb(0x03C9, al_14 << 0x01) : void)
  Class: Eq_26
  DataType: void
  OrigDataType: void
T_27: (in __outb : ptr32)
  Class: Eq_27
  DataType: (ptr Eq_27)
  OrigDataType: (ptr (fn T_32 (T_28, T_31)))
T_28: (in 0x03C9 : word16)
  Class: Eq_28
  DataType: word16
  OrigDataType: word16
T_29: (in al_14 << 0x01 : word16)
  Class: Eq_29
  DataType: uint16
  OrigDataType: uint16
T_30: (in 0x01 : byte)
  Class: Eq_30
  DataType: uint8
  OrigDataType: uint8
T_31: (in al_14 << 0x01 >>u 0x01 : word16)
  Class: Eq_31
  DataType: uint16
  OrigDataType: uint16
T_32: (in __outb(0x03C9, al_14 << 0x01 >>u 0x01) : void)
  Class: Eq_32
  DataType: void
  OrigDataType: void
T_33: (in al_19 : byte)
  Class: Eq_33
  DataType: byte
  OrigDataType: byte
T_34: (in (byte) ax_11 : byte)
  Class: Eq_33
  DataType: byte
  OrigDataType: byte
T_35: (in 0x01 : byte)
  Class: Eq_35
  DataType: byte
  OrigDataType: byte
T_36: (in al_19 + 0x01 : byte)
  Class: Eq_14
  DataType: uint8
  OrigDataType: byte
T_37: (in al_19 + 0x01 : byte)
  Class: Eq_37
  DataType: byte
  OrigDataType: byte
T_38: (in DPB(ax_11, al_19 + 0x01, 0, 8) : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_39: (in 0x01 : byte)
  Class: Eq_33
  DataType: byte
  OrigDataType: byte
T_40: (in al_19 != 0x01 : bool)
  Class: Eq_40
  DataType: bool
  OrigDataType: bool
T_41: (in bl_38 : byte)
  Class: Eq_41
  DataType: byte
  OrigDataType: byte
T_42: (in 0xA000 : selector)
  Class: Eq_42
  DataType: (ptr Eq_42)
  OrigDataType: (ptr (segment (FFFFFFFF (arr T_70 1535) aFFFFFFFF)))
T_43: (in cx_39 : (memptr (ptr Eq_42) Eq_43))
  Class: Eq_43
  DataType: (memptr (ptr Eq_42) Eq_43)
  OrigDataType: (memptr T_42 (struct 0001 (FFFFFFFF T_46 tFFFFFFFF)))
T_44: (in 0x0001 : word16)
  Class: Eq_44
  DataType: word16
  OrigDataType: word16
T_45: (in cx_39 - 0x0001 : word16)
  Class: Eq_45
  DataType: word16
  OrigDataType: word16
T_46: (in Mem44[0xA000:cx_39 - 0x0001:byte] : byte)
  Class: Eq_41
  DataType: byte
  OrigDataType: byte
T_47: (in 0x01 : byte)
  Class: Eq_47
  DataType: byte
  OrigDataType: byte
T_48: (in bl_38 + 0x01 : byte)
  Class: Eq_41
  DataType: byte
  OrigDataType: byte
T_49: (in 0x0001 : word16)
  Class: Eq_49
  DataType: word16
  OrigDataType: word16
T_50: (in cx_39 - 0x0001 : word16)
  Class: Eq_43
  DataType: (memptr (ptr Eq_42) Eq_43)
  OrigDataType: word16
T_51: (in 0x0000 : word16)
  Class: Eq_43
  DataType: (memptr (ptr Eq_42) Eq_43)
  OrigDataType: word16
T_52: (in cx_39 != &Eq_42::t0000 : bool)
  Class: Eq_52
  DataType: bool
  OrigDataType: bool
T_53: (in al_51 : byte)
  Class: Eq_53
  DataType: byte
  OrigDataType: byte
T_54: (in bios_kbd_check_keystroke : ptr32)
  Class: Eq_54
  DataType: (ptr Eq_54)
  OrigDataType: (ptr (fn T_58 (T_57)))
T_55: (in signature of bios_kbd_check_keystroke : void)
  Class: Eq_54
  DataType: (ptr Eq_54)
  OrigDataType: 
T_56: (in alOut : ptr16)
  Class: Eq_56
  DataType: (ptr byte)
  OrigDataType: ptr16
T_57: (in out al_51 : ptr16)
  Class: Eq_56
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_58: (in bios_kbd_check_keystroke(out al_51) : byte)
  Class: Eq_58
  DataType: byte
  OrigDataType: byte
T_59: (in bh : byte)
  Class: Eq_41
  DataType: byte
  OrigDataType: byte
T_60: (in 0x01 : byte)
  Class: Eq_60
  DataType: byte
  OrigDataType: byte
T_61: (in bh + 0x01 : byte)
  Class: Eq_41
  DataType: byte
  OrigDataType: byte
T_62: (in 0x00 : byte)
  Class: Eq_41
  DataType: byte
  OrigDataType: byte
T_63: (in bh == 0x00 : bool)
  Class: Eq_63
  DataType: bool
  OrigDataType: bool
T_64: (in 0xFA00 : word16)
  Class: Eq_43
  DataType: (memptr (ptr Eq_42) Eq_43)
  OrigDataType: word16
T_65: (in msdos_terminate : ptr32)
  Class: Eq_65
  DataType: (ptr Eq_65)
  OrigDataType: (ptr (fn T_69 (T_68)))
T_66: (in signature of msdos_terminate : void)
  Class: Eq_65
  DataType: (ptr Eq_65)
  OrigDataType: 
T_67: (in al : byte)
  Class: Eq_67
  DataType: byte
  OrigDataType: byte
T_68: (in 0x00 : byte)
  Class: Eq_67
  DataType: byte
  OrigDataType: byte
T_69: (in msdos_terminate(0x00) : void)
  Class: Eq_69
  DataType: void
  OrigDataType: void
T_70:
  Class: Eq_70
  DataType: byte
  OrigDataType: (struct 0001 (0 T_46 t0000))
*/
typedef Eq_42 Eq_1struct Globals {
	Eq_42 * ptrFFFA0000;	// FFFA0000
} Eq_1;

typedef void (Eq_2)(byte);

typedef void (Eq_11)(word16, word16);

typedef union Eq_16 {
	uint16 u0;
	byte u1;
} Eq_16;

typedef void (Eq_19)(word16, Eq_16);

typedef void (Eq_22)(word16, ui16);

typedef void (Eq_27)(word16, uint16);

typedef struct Eq_43;
 Eq_42[1535]Eq_43Eq_43struct Eq_42 {
	struct Eq_43 tFFFFFA00;	// FFFFFA00
	byte aFFFFFFFF[1535];	// FFFFFFFF
	Eq_43 t0000;	// 0
	Eq_43 tFA00;	// FA00
} Eq_42;

typedef struct Eq_43 Eq_43;

typedef byte (Eq_54)(byte *);

typedef void (Eq_65)(byte);

