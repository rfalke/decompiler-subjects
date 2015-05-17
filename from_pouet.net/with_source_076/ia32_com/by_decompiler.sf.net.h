// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_076/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_29) ptrFFFA0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
	T_60 (in bios_video_set_mode : ptr32)
Eq_14: (fn word16 (byte))
	T_14 (in __aam : ptr32)
Eq_22: (struct "Eq_22" (0 byte b0000) (1 byte b0001))
	T_22 (in di_38 : (memptr (ptr Eq_29) Eq_22))
	T_26 (in (cx >>u 0x0002) + cx : word16)
Eq_29: (segment "Eq_29")
	T_29 (in 0xA000 : selector)
Eq_43: (fn byte (word16))
	T_43 (in __inb : ptr32)
Eq_50: (fn byte (byte))
	T_50 (in __inb : ptr32)
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
T_7: (in al_24 : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_8: (in 0x13 : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_9: (in al_40 : uint8)
  Class: Eq_9
  DataType: uint8
  OrigDataType: uint8
T_10: (in ah : byte)
  Class: Eq_10
  DataType: byte
  OrigDataType: byte
T_11: (in al_24 ^ ah : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_12: (in bh : byte)
  Class: Eq_12
  DataType: byte
  OrigDataType: byte
T_13: (in (al_24 ^ ah) + bh : byte)
  Class: Eq_9
  DataType: uint8
  OrigDataType: byte
T_14: (in __aam : ptr32)
  Class: Eq_14
  DataType: (ptr Eq_14)
  OrigDataType: (ptr (fn T_20 (T_19)))
T_15: (in al_40 *u al_40 : uint16)
  Class: Eq_15
  DataType: uint16
  OrigDataType: uint16
T_16: (in SLICE(al_40 *u al_40, byte, 8) : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_17: (in ch_30 : byte)
  Class: Eq_17
  DataType: byte
  OrigDataType: byte
T_18: (in SLICE(al_40 *u al_40, byte, 8) + ch_30 : byte)
  Class: Eq_18
  DataType: byte
  OrigDataType: byte
T_19: (in SLICE(al_40 *u al_40, byte, 8) + ch_30 + bh : byte)
  Class: Eq_19
  DataType: byte
  OrigDataType: byte
T_20: (in __aam(SLICE(al_40 *u al_40, byte, 8) + ch_30 + bh) : word16)
  Class: Eq_20
  DataType: word16
  OrigDataType: word16
T_21: (in SLICE(__aam(SLICE(al_40 *u al_40, byte, 8) + ch_30 + bh), byte, 8) : byte)
  Class: Eq_10
  DataType: byte
  OrigDataType: byte
T_22: (in di_38 : (memptr (ptr Eq_29) Eq_22))
  Class: Eq_22
  DataType: (memptr (ptr Eq_29) Eq_22)
  OrigDataType: (memptr T_29 (struct (0 T_32 t0000) (1 T_36 t0001)))
T_23: (in cx : word16)
  Class: Eq_23
  DataType: uint16
  OrigDataType: uint16
T_24: (in 0x0002 : word16)
  Class: Eq_24
  DataType: uint16
  OrigDataType: uint16
T_25: (in cx >>u 0x0002 : word16)
  Class: Eq_25
  DataType: uint16
  OrigDataType: uint16
T_26: (in (cx >>u 0x0002) + cx : word16)
  Class: Eq_22
  DataType: (memptr (ptr Eq_29) Eq_22)
  OrigDataType: word16
T_27: (in 0x20 : byte)
  Class: Eq_27
  DataType: byte
  OrigDataType: byte
T_28: (in ah + 0x20 : byte)
  Class: Eq_28
  DataType: byte
  OrigDataType: byte
T_29: (in 0xA000 : selector)
  Class: Eq_29
  DataType: (ptr Eq_29)
  OrigDataType: (ptr (segment))
T_30: (in 0x0000 : word16)
  Class: Eq_30
  DataType: word16
  OrigDataType: word16
T_31: (in di_38 + 0x0000 : word16)
  Class: Eq_31
  DataType: word16
  OrigDataType: word16
T_32: (in Mem52[0xA000:di_38 + 0x0000:byte] : byte)
  Class: Eq_28
  DataType: byte
  OrigDataType: byte
T_33: (in ah + 0x20 : byte)
  Class: Eq_33
  DataType: byte
  OrigDataType: byte
T_34: (in 0x0001 : word16)
  Class: Eq_34
  DataType: word16
  OrigDataType: word16
T_35: (in di_38 + 0x0001 : word16)
  Class: Eq_35
  DataType: word16
  OrigDataType: word16
T_36: (in Mem54[0xA000:di_38 + 0x0001:byte] : byte)
  Class: Eq_33
  DataType: byte
  OrigDataType: byte
T_37: (in 0x0001 : word16)
  Class: Eq_37
  DataType: word16
  OrigDataType: word16
T_38: (in cx - 0x0001 : word16)
  Class: Eq_23
  DataType: uint16
  OrigDataType: word16
T_39: (in ah + 0x20 : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_40: (in SLICE(cx, byte, 8) : byte)
  Class: Eq_17
  DataType: byte
  OrigDataType: byte
T_41: (in 0x0000 : word16)
  Class: Eq_23
  DataType: uint16
  OrigDataType: word16
T_42: (in cx != 0x0000 : bool)
  Class: Eq_42
  DataType: bool
  OrigDataType: bool
T_43: (in __inb : ptr32)
  Class: Eq_43
  DataType: (ptr Eq_43)
  OrigDataType: (ptr (fn T_45 (T_44)))
T_44: (in 0x03DA : word16)
  Class: Eq_44
  DataType: word16
  OrigDataType: word16
T_45: (in __inb(0x03DA) : byte)
  Class: Eq_45
  DataType: byte
  OrigDataType: byte
T_46: (in 0x08 : byte)
  Class: Eq_46
  DataType: byte
  OrigDataType: byte
T_47: (in __inb(0x03DA) & 0x08 : byte)
  Class: Eq_47
  DataType: byte
  OrigDataType: byte
T_48: (in 0x00 : byte)
  Class: Eq_47
  DataType: byte
  OrigDataType: byte
T_49: (in (__inb(0x03DA) & 0x08) == 0x00 : bool)
  Class: Eq_49
  DataType: bool
  OrigDataType: bool
T_50: (in __inb : ptr32)
  Class: Eq_50
  DataType: (ptr Eq_50)
  OrigDataType: (ptr (fn T_52 (T_51)))
T_51: (in 0x60 : byte)
  Class: Eq_51
  DataType: byte
  OrigDataType: byte
T_52: (in __inb(0x60) : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_53: (in 0x01 : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_54: (in al_24 != 0x01 : bool)
  Class: Eq_54
  DataType: bool
  OrigDataType: bool
T_55: (in 0x01 : byte)
  Class: Eq_55
  DataType: byte
  OrigDataType: byte
T_56: (in bh + 0x01 : byte)
  Class: Eq_12
  DataType: byte
  OrigDataType: byte
T_57: (in 0xC8 : byte)
  Class: Eq_17
  DataType: byte
  OrigDataType: byte
T_58: (in 0xC8 : byte)
  Class: Eq_58
  DataType: byte
  OrigDataType: byte
T_59: (in DPB(cx, 0xC8, 8, 8) : word16)
  Class: Eq_23
  DataType: uint16
  OrigDataType: word16
T_60: (in bios_video_set_mode : ptr32)
  Class: Eq_2
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (fn T_62 (T_61)))
T_61: (in 0x03 : byte)
  Class: Eq_4
  DataType: byte
  OrigDataType: byte
T_62: (in bios_video_set_mode(0x03) : void)
  Class: Eq_6
  DataType: void
  OrigDataType: void
*/
typedef Eq_29 Eq_1struct Globals {
	Eq_29 * ptrFFFA0000;	// FFFA0000
} Eq_1;

typedef void (Eq_2)(byte);

typedef word16 (Eq_14)(byte);

typedef struct Eq_22 {
	byte b0000;	// 0
	byte b0001;	// 1
} Eq_22;

typedef struct Eq_29 {
} Eq_29;

typedef byte (Eq_43)(word16);

typedef byte (Eq_50)(byte);

