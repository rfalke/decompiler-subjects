// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_108/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_53) ptrFFFA0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_11: (union "Eq_11" (uint16 u0) (byte u1))
	T_11 (in al_16 : Eq_11)
	T_14 (in cl >>u 0x02 : word16)
Eq_15: (fn void (word16, Eq_11))
	T_15 (in __outb : ptr32)
Eq_18: (fn void (word16, Eq_11))
	T_18 (in __outb : ptr32)
Eq_27: (fn void (word16, uint8))
	T_27 (in __outb : ptr32)
Eq_53: (segment "Eq_53" (0 (arr Eq_70) a0000))
	T_53 (in 0xA000 : selector)
Eq_70: (struct "Eq_70" 0140 (0 byte b0000))
	T_70
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
T_7: (in ax_12 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_8: (in ax : word16)
  Class: Eq_8
  DataType: word16
  OrigDataType: word16
T_9: (in 0x13 : byte)
  Class: Eq_9
  DataType: byte
  OrigDataType: byte
T_10: (in DPB(ax, 0x13, 0, 8) : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_11: (in al_16 : Eq_11)
  Class: Eq_11
  DataType: Eq_11
  OrigDataType: byte
T_12: (in cl : byte)
  Class: Eq_12
  DataType: uint8
  OrigDataType: uint8
T_13: (in 0x02 : byte)
  Class: Eq_13
  DataType: uint8
  OrigDataType: uint8
T_14: (in cl >>u 0x02 : word16)
  Class: Eq_11
  DataType: Eq_11
  OrigDataType: uint16
T_15: (in __outb : ptr32)
  Class: Eq_15
  DataType: (ptr Eq_15)
  OrigDataType: (ptr (fn T_17 (T_16, T_11)))
T_16: (in 0x03C9 : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_17: (in __outb(0x03C9, al_16) : void)
  Class: Eq_17
  DataType: void
  OrigDataType: void
T_18: (in __outb : ptr32)
  Class: Eq_18
  DataType: (ptr Eq_18)
  OrigDataType: (ptr (fn T_20 (T_19, T_11)))
T_19: (in 0x03C9 : word16)
  Class: Eq_19
  DataType: word16
  OrigDataType: word16
T_20: (in __outb(0x03C9, al_16) : void)
  Class: Eq_20
  DataType: void
  OrigDataType: void
T_21: (in ax_17 : word16)
  Class: Eq_21
  DataType: word16
  OrigDataType: word16
T_22: (in DPB(ax_12, al_16, 0, 8) : word16)
  Class: Eq_21
  DataType: word16
  OrigDataType: word16
T_23: (in al_19 : uint8)
  Class: Eq_23
  DataType: uint8
  OrigDataType: uint8
T_24: (in 0x03C9 : word16)
  Class: Eq_24
  DataType: word16
  OrigDataType: word16
T_25: (in ax_17 ^ 0x03C9 : word16)
  Class: Eq_25
  DataType: word16
  OrigDataType: word16
T_26: (in (byte) (ax_17 ^ 0x03C9) : byte)
  Class: Eq_23
  DataType: uint8
  OrigDataType: byte
T_27: (in __outb : ptr32)
  Class: Eq_27
  DataType: (ptr Eq_27)
  OrigDataType: (ptr (fn T_29 (T_28, T_23)))
T_28: (in 0x03C9 : word16)
  Class: Eq_28
  DataType: word16
  OrigDataType: word16
T_29: (in __outb(0x03C9, al_19) : void)
  Class: Eq_29
  DataType: void
  OrigDataType: void
T_30: (in cx : ui16)
  Class: Eq_30
  DataType: ui16
  OrigDataType: ui16
T_31: (in 0x0001 : word16)
  Class: Eq_31
  DataType: word16
  OrigDataType: word16
T_32: (in cx - 0x0001 : word16)
  Class: Eq_30
  DataType: ui16
  OrigDataType: word16
T_33: (in ax_17 ^ 0x03C9 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_34: (in (byte) cx : byte)
  Class: Eq_12
  DataType: uint8
  OrigDataType: byte
T_35: (in 0x0000 : word16)
  Class: Eq_30
  DataType: ui16
  OrigDataType: word16
T_36: (in cx != 0x0000 : bool)
  Class: Eq_36
  DataType: bool
  OrigDataType: bool
T_37: (in dx_39 : int16)
  Class: Eq_37
  DataType: int16
  OrigDataType: int16
T_38: (in 0x0140 : word16)
  Class: Eq_37
  DataType: int16
  OrigDataType: word16
T_39: (in ax_56 : word16)
  Class: Eq_39
  DataType: word16
  OrigDataType: word16
T_40: (in al_19 *u al_19 : uint16)
  Class: Eq_40
  DataType: uint16
  OrigDataType: uint16
T_41: (in dx_39 *s dx_39 : int16)
  Class: Eq_41
  DataType: int16
  OrigDataType: int16
T_42: (in al_19 *u al_19 + dx_39 *s dx_39 : word16)
  Class: Eq_39
  DataType: word16
  OrigDataType: word16
T_43: (in ax_63 : word16)
  Class: Eq_43
  DataType: word16
  OrigDataType: word16
T_44: (in (byte) ax_56 : byte)
  Class: Eq_44
  DataType: uint8
  OrigDataType: uint8
T_45: (in 0x03 : byte)
  Class: Eq_45
  DataType: uint8
  OrigDataType: uint8
T_46: (in (byte) ax_56 >>u 0x03 : word16)
  Class: Eq_46
  DataType: uint16
  OrigDataType: uint16
T_47: (in DPB(ax_56, (byte) ax_56 >>u 0x03, 0, 8) : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_48: (in di : word16)
  Class: Eq_48
  DataType: word16
  OrigDataType: word16
T_49: (in DPB(ax_56, (byte) ax_56 >>u 0x03, 0, 8) + di : word16)
  Class: Eq_43
  DataType: word16
  OrigDataType: word16
T_50: (in (byte) ax_63 : byte)
  Class: Eq_23
  DataType: uint8
  OrigDataType: byte
T_51: (in SLICE(ax_63, byte, 8) : byte)
  Class: Eq_51
  DataType: byte
  OrigDataType: byte
T_52: (in SLICE(ax_63, byte, 8) + al_19 : byte)
  Class: Eq_52
  DataType: byte
  OrigDataType: byte
T_53: (in 0xA000 : selector)
  Class: Eq_53
  DataType: (ptr Eq_53)
  OrigDataType: (ptr (segment (0 (arr T_70) a0000)))
T_54: (in SEQ(0xA000, dx_39) : ptr32)
  Class: Eq_54
  DataType: ptr32
  OrigDataType: ptr32
T_55: (in 0x0140 : word16)
  Class: Eq_55
  DataType: ui16
  OrigDataType: ui16
T_56: (in cx * 0x0140 : word16)
  Class: Eq_56
  DataType: ui16
  OrigDataType: ui16
T_57: (in SEQ(0xA000, dx_39)[cx * 0x0140] : byte)
  Class: Eq_52
  DataType: byte
  OrigDataType: byte
T_58: (in 0x0001 : word16)
  Class: Eq_58
  DataType: word16
  OrigDataType: word16
T_59: (in cx - 0x0001 : word16)
  Class: Eq_30
  DataType: ui16
  OrigDataType: word16
T_60: (in 0x0000 : word16)
  Class: Eq_30
  DataType: ui16
  OrigDataType: word16
T_61: (in cx != 0x0000 : bool)
  Class: Eq_61
  DataType: bool
  OrigDataType: bool
T_62: (in 0x0001 : word16)
  Class: Eq_62
  DataType: word16
  OrigDataType: word16
T_63: (in dx_39 - 0x0001 : word16)
  Class: Eq_37
  DataType: int16
  OrigDataType: word16
T_64: (in 0x0000 : word16)
  Class: Eq_37
  DataType: int16
  OrigDataType: word16
T_65: (in dx_39 != 0x0000 : bool)
  Class: Eq_65
  DataType: bool
  OrigDataType: bool
T_66: (in 0xC8 : byte)
  Class: Eq_66
  DataType: byte
  OrigDataType: byte
T_67: (in DPB(cx, 0xC8, 0, 8) : word16)
  Class: Eq_30
  DataType: ui16
  OrigDataType: word16
T_68: (in 0x0001 : word16)
  Class: Eq_68
  DataType: word16
  OrigDataType: word16
T_69: (in di + 0x0001 : word16)
  Class: Eq_48
  DataType: word16
  OrigDataType: word16
T_70:
  Class: Eq_70
  DataType: Eq_70
  OrigDataType: (struct 0140 (0 T_57 t0000))
*/
typedef Eq_53 Eq_1struct Globals {
	Eq_53 * ptrFFFA0000;	// FFFA0000
} Eq_1;

typedef void (Eq_2)(byte);

typedef union Eq_11 {
	uint16 u0;
	byte u1;
} Eq_11;

typedef void (Eq_15)(word16, Eq_11);

typedef void (Eq_18)(word16, Eq_11);

typedef void (Eq_27)(word16, uint8);

typedef Eq_70 Eq_53[]struct Eq_53 {
	Eq_70 a0000[];	// 0
} Eq_53;

typedef struct Eq_70 {	// size: 320 140
	byte b0000;	// 0
} Eq_70;

