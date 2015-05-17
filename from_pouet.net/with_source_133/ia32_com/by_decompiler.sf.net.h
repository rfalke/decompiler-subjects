// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_133/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_26) ptrFFFA0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
	T_65 (in bios_video_set_mode : ptr32)
Eq_15: (struct "Eq_15" (A0 byte b00A0))
	T_15 (in di_44 : (memptr (ptr Eq_26) Eq_15))
	T_24 (in (bx_27 >>u 0x0007 << 0x0006) + ((bx_27 >>u 0x0007) << 0x0008) : word16)
Eq_26: (segment "Eq_26")
	T_26 (in 0xA000 : selector)
Eq_35: (fn byte (word16))
	T_35 (in __inb : ptr32)
Eq_42: (fn byte (word16))
	T_42 (in __inb : ptr32)
Eq_53: (fn byte (byte))
	T_53 (in __inb : ptr32)
Eq_68: (fn void ())
	T_68 (in msdos_terminate_program20 : ptr32)
	T_69 (in signature of msdos_terminate_program20 : void)
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
T_7: (in cx_19 : int16)
  Class: Eq_7
  DataType: int16
  OrigDataType: int16
T_8: (in 0x0000 : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: word16
T_9: (in bx_11 : uint16)
  Class: Eq_9
  DataType: uint16
  OrigDataType: uint16
T_10: (in bx : word16)
  Class: Eq_10
  DataType: word16
  OrigDataType: word16
T_11: (in 0x14 : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_12: (in DPB(bx, 0x14, 0, 8) : word16)
  Class: Eq_12
  DataType: word16
  OrigDataType: word16
T_13: (in 0x0007 : word16)
  Class: Eq_13
  DataType: word16
  OrigDataType: word16
T_14: (in DPB(bx, 0x14, 0, 8) << 0x0007 : word16)
  Class: Eq_9
  DataType: uint16
  OrigDataType: ui16
T_15: (in di_44 : (memptr (ptr Eq_26) Eq_15))
  Class: Eq_15
  DataType: (memptr (ptr Eq_26) Eq_15)
  OrigDataType: (memptr T_26 (struct (A0 T_25 t00A0)))
T_16: (in bx_27 : uint16)
  Class: Eq_9
  DataType: uint16
  OrigDataType: uint16
T_17: (in 0x0007 : word16)
  Class: Eq_17
  DataType: uint16
  OrigDataType: uint16
T_18: (in bx_27 >>u 0x0007 : word16)
  Class: Eq_18
  DataType: uint16
  OrigDataType: uint16
T_19: (in 0x0006 : word16)
  Class: Eq_19
  DataType: word16
  OrigDataType: word16
T_20: (in bx_27 >>u 0x0007 << 0x0006 : word16)
  Class: Eq_20
  DataType: ui16
  OrigDataType: ui16
T_21: (in bx_27 >>u 0x0007 : word16)
  Class: Eq_21
  DataType: uint16
  OrigDataType: uint16
T_22: (in 0x0008 : word16)
  Class: Eq_22
  DataType: word16
  OrigDataType: word16
T_23: (in bx_27 >>u 0x0007 << 0x0008 : word16)
  Class: Eq_23
  DataType: ui16
  OrigDataType: ui16
T_24: (in (bx_27 >>u 0x0007 << 0x0006) + ((bx_27 >>u 0x0007) << 0x0008) : word16)
  Class: Eq_15
  DataType: (memptr (ptr Eq_26) Eq_15)
  OrigDataType: word16
T_25: (in 0x0F : byte)
  Class: Eq_25
  DataType: byte
  OrigDataType: byte
T_26: (in 0xA000 : selector)
  Class: Eq_26
  DataType: (ptr Eq_26)
  OrigDataType: (ptr (segment))
T_27: (in 0x00A0 : word16)
  Class: Eq_27
  DataType: word16
  OrigDataType: word16
T_28: (in di_44 + 0x00A0 : word16)
  Class: Eq_28
  DataType: word16
  OrigDataType: word16
T_29: (in Mem48[0xA000:di_44 + 0x00A0:byte] : byte)
  Class: Eq_25
  DataType: byte
  OrigDataType: byte
T_30: (in -cx_19 : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: int16
T_31: (in 0xC6 : byte)
  Class: Eq_31
  DataType: byte
  OrigDataType: byte
T_32: (in DPB(bx_27, 0xC6, 0, 8) : word16)
  Class: Eq_32
  DataType: word16
  OrigDataType: word16
T_33: (in 0x0007 : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_34: (in DPB(bx_27, 0xC6, 0, 8) << 0x0007 : word16)
  Class: Eq_9
  DataType: uint16
  OrigDataType: ui16
T_35: (in __inb : ptr32)
  Class: Eq_35
  DataType: (ptr Eq_35)
  OrigDataType: (ptr (fn T_37 (T_36)))
T_36: (in 0x03DA : word16)
  Class: Eq_36
  DataType: word16
  OrigDataType: word16
T_37: (in __inb(0x03DA) : byte)
  Class: Eq_37
  DataType: byte
  OrigDataType: byte
T_38: (in 0x08 : byte)
  Class: Eq_38
  DataType: byte
  OrigDataType: byte
T_39: (in __inb(0x03DA) & 0x08 : byte)
  Class: Eq_39
  DataType: byte
  OrigDataType: byte
T_40: (in 0x00 : byte)
  Class: Eq_39
  DataType: byte
  OrigDataType: byte
T_41: (in (__inb(0x03DA) & 0x08) != 0x00 : bool)
  Class: Eq_41
  DataType: bool
  OrigDataType: bool
T_42: (in __inb : ptr32)
  Class: Eq_42
  DataType: (ptr Eq_42)
  OrigDataType: (ptr (fn T_44 (T_43)))
T_43: (in 0x03DA : word16)
  Class: Eq_43
  DataType: word16
  OrigDataType: word16
T_44: (in __inb(0x03DA) : byte)
  Class: Eq_44
  DataType: byte
  OrigDataType: byte
T_45: (in 0x08 : byte)
  Class: Eq_45
  DataType: byte
  OrigDataType: byte
T_46: (in __inb(0x03DA) & 0x08 : byte)
  Class: Eq_46
  DataType: byte
  OrigDataType: byte
T_47: (in 0x00 : byte)
  Class: Eq_46
  DataType: byte
  OrigDataType: byte
T_48: (in (__inb(0x03DA) & 0x08) == 0x00 : bool)
  Class: Eq_48
  DataType: bool
  OrigDataType: bool
T_49: (in 0x00 : byte)
  Class: Eq_25
  DataType: byte
  OrigDataType: byte
T_50: (in 0x00A0 : word16)
  Class: Eq_50
  DataType: word16
  OrigDataType: word16
T_51: (in di_44 + 0x00A0 : word16)
  Class: Eq_51
  DataType: word16
  OrigDataType: word16
T_52: (in Mem65[0xA000:di_44 + 0x00A0:byte] : byte)
  Class: Eq_25
  DataType: byte
  OrigDataType: byte
T_53: (in __inb : ptr32)
  Class: Eq_53
  DataType: (ptr Eq_53)
  OrigDataType: (ptr (fn T_55 (T_54)))
T_54: (in 0x60 : byte)
  Class: Eq_54
  DataType: byte
  OrigDataType: byte
T_55: (in __inb(0x60) : byte)
  Class: Eq_55
  DataType: byte
  OrigDataType: byte
T_56: (in 0x01 : byte)
  Class: Eq_55
  DataType: byte
  OrigDataType: byte
T_57: (in __inb(0x60) != 0x01 : bool)
  Class: Eq_57
  DataType: bool
  OrigDataType: bool
T_58: (in 0x000F : word16)
  Class: Eq_58
  DataType: word16
  OrigDataType: word16
T_59: (in cx_19 + 0x000F : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: word16
T_60: (in bx_11 + cx_19 : word16)
  Class: Eq_9
  DataType: uint16
  OrigDataType: word16
T_61: (in bx_27 >>u 0x0007 : word16)
  Class: Eq_61
  DataType: uint16
  OrigDataType: uint16
T_62: (in (byte) (bx_27 >>u 0x0007) : byte)
  Class: Eq_62
  DataType: bcu8
  OrigDataType: bcu8
T_63: (in 0xC7 : byte)
  Class: Eq_62
  DataType: bcu8
  OrigDataType: bcu8
T_64: (in (byte) (bx_27 >>u 0x0007) <=u 0xC7 : bool)
  Class: Eq_64
  DataType: bool
  OrigDataType: bool
T_65: (in bios_video_set_mode : ptr32)
  Class: Eq_2
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (fn T_67 (T_66)))
T_66: (in 0x03 : byte)
  Class: Eq_4
  DataType: byte
  OrigDataType: byte
T_67: (in bios_video_set_mode(0x03) : void)
  Class: Eq_6
  DataType: void
  OrigDataType: void
T_68: (in msdos_terminate_program20 : ptr32)
  Class: Eq_68
  DataType: (ptr Eq_68)
  OrigDataType: (ptr (fn T_70 ()))
T_69: (in signature of msdos_terminate_program20 : void)
  Class: Eq_68
  DataType: (ptr Eq_68)
  OrigDataType: 
T_70: (in msdos_terminate_program20() : void)
  Class: Eq_70
  DataType: void
  OrigDataType: void
*/
typedef Eq_26 Eq_1struct Globals {
	Eq_26 * ptrFFFA0000;	// FFFA0000
} Eq_1;

typedef void (Eq_2)(byte);

typedef struct Eq_15 {
	byte b00A0;	// A0
} Eq_15;

typedef struct Eq_26 {
} Eq_26;

typedef byte (Eq_35)(word16);

typedef byte (Eq_42)(word16);

typedef byte (Eq_53)(byte);

typedef void (Eq_68)();

