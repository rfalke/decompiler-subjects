// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_142/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_34) ptrFFFA0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
	T_71 (in bios_video_set_mode : ptr32)
Eq_34: (segment "Eq_34")
	T_34 (in 0xA000 : selector)
Eq_40: (fn byte (word16))
	T_40 (in __inb : ptr32)
Eq_47: (fn byte (word16))
	T_47 (in __inb : ptr32)
Eq_58: (fn byte (byte))
	T_58 (in __inb : ptr32)
Eq_74: (fn void ())
	T_74 (in msdos_terminate_program20 : ptr32)
	T_75 (in signature of msdos_terminate_program20 : void)
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
T_7: (in cx_20 : int16)
  Class: Eq_7
  DataType: int16
  OrigDataType: int16
T_8: (in 0x0000 : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: word16
T_9: (in si_17 : cups16)
  Class: Eq_9
  DataType: cups16
  OrigDataType: cups16
T_10: (in 0x0001 : word16)
  Class: Eq_9
  DataType: cups16
  OrigDataType: word16
T_11: (in bp_18 : int16)
  Class: Eq_11
  DataType: int16
  OrigDataType: int16
T_12: (in 0x0001 : word16)
  Class: Eq_11
  DataType: int16
  OrigDataType: word16
T_13: (in bx_11 : uint16)
  Class: Eq_13
  DataType: uint16
  OrigDataType: word16
T_14: (in 0x3200 : word16)
  Class: Eq_13
  DataType: uint16
  OrigDataType: word16
T_15: (in 0x0000 : word16)
  Class: Eq_9
  DataType: cups16
  OrigDataType: cups16
T_16: (in si_17 <=u 0x0000 : bool)
  Class: Eq_16
  DataType: bool
  OrigDataType: bool
T_17: (in -bp_18 : word16)
  Class: Eq_11
  DataType: int16
  OrigDataType: int16
T_18: (in bx_27 : uint16)
  Class: Eq_13
  DataType: uint16
  OrigDataType: uint16
T_19: (in dl_31 : bcu8)
  Class: Eq_19
  DataType: bcu8
  OrigDataType: bcu8
T_20: (in 0xC7 : byte)
  Class: Eq_19
  DataType: bcu8
  OrigDataType: bcu8
T_21: (in dl_31 <=u 0xC7 : bool)
  Class: Eq_21
  DataType: bool
  OrigDataType: bool
T_22: (in -bp_18 : word16)
  Class: Eq_11
  DataType: int16
  OrigDataType: int16
T_23: (in di_50 : (memptr (ptr Eq_34) byte))
  Class: Eq_23
  DataType: (memptr (ptr Eq_34) byte)
  OrigDataType: (memptr T_34 (struct (0 T_33 t0000)))
T_24: (in 0x0007 : word16)
  Class: Eq_24
  DataType: uint16
  OrigDataType: uint16
T_25: (in bx_27 >>u 0x0007 : word16)
  Class: Eq_25
  DataType: uint16
  OrigDataType: uint16
T_26: (in 0x0006 : word16)
  Class: Eq_26
  DataType: word16
  OrigDataType: word16
T_27: (in bx_27 >>u 0x0007 << 0x0006 : word16)
  Class: Eq_27
  DataType: ui16
  OrigDataType: ui16
T_28: (in bx_27 >>u 0x0007 : word16)
  Class: Eq_28
  DataType: uint16
  OrigDataType: uint16
T_29: (in 0x0008 : word16)
  Class: Eq_29
  DataType: word16
  OrigDataType: word16
T_30: (in bx_27 >>u 0x0007 << 0x0008 : word16)
  Class: Eq_30
  DataType: ui16
  OrigDataType: ui16
T_31: (in (bx_27 >>u 0x0007 << 0x0006) + ((bx_27 >>u 0x0007) << 0x0008) : word16)
  Class: Eq_31
  DataType: word16
  OrigDataType: word16
T_32: (in (bx_27 >>u 0x0007 << 0x0006) + ((bx_27 >>u 0x0007) << 0x0008) + si_17 : word16)
  Class: Eq_23
  DataType: (memptr (ptr Eq_34) byte)
  OrigDataType: word16
T_33: (in 0x0F : byte)
  Class: Eq_33
  DataType: byte
  OrigDataType: byte
T_34: (in 0xA000 : selector)
  Class: Eq_34
  DataType: (ptr Eq_34)
  OrigDataType: (ptr (segment))
T_35: (in 0x0000 : word16)
  Class: Eq_35
  DataType: word16
  OrigDataType: word16
T_36: (in di_50 + 0x0000 : word16)
  Class: Eq_36
  DataType: word16
  OrigDataType: word16
T_37: (in Mem53[0xA000:di_50 + 0x0000:byte] : byte)
  Class: Eq_33
  DataType: byte
  OrigDataType: byte
T_38: (in -cx_20 : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: int16
T_39: (in 0x6300 : word16)
  Class: Eq_13
  DataType: uint16
  OrigDataType: word16
T_40: (in __inb : ptr32)
  Class: Eq_40
  DataType: (ptr Eq_40)
  OrigDataType: (ptr (fn T_42 (T_41)))
T_41: (in 0x03DA : word16)
  Class: Eq_41
  DataType: word16
  OrigDataType: word16
T_42: (in __inb(0x03DA) : byte)
  Class: Eq_42
  DataType: byte
  OrigDataType: byte
T_43: (in 0x08 : byte)
  Class: Eq_43
  DataType: byte
  OrigDataType: byte
T_44: (in __inb(0x03DA) & 0x08 : byte)
  Class: Eq_44
  DataType: byte
  OrigDataType: byte
T_45: (in 0x00 : byte)
  Class: Eq_44
  DataType: byte
  OrigDataType: byte
T_46: (in (__inb(0x03DA) & 0x08) != 0x00 : bool)
  Class: Eq_46
  DataType: bool
  OrigDataType: bool
T_47: (in __inb : ptr32)
  Class: Eq_47
  DataType: (ptr Eq_47)
  OrigDataType: (ptr (fn T_49 (T_48)))
T_48: (in 0x03DA : word16)
  Class: Eq_48
  DataType: word16
  OrigDataType: word16
T_49: (in __inb(0x03DA) : byte)
  Class: Eq_49
  DataType: byte
  OrigDataType: byte
T_50: (in 0x08 : byte)
  Class: Eq_50
  DataType: byte
  OrigDataType: byte
T_51: (in __inb(0x03DA) & 0x08 : byte)
  Class: Eq_51
  DataType: byte
  OrigDataType: byte
T_52: (in 0x00 : byte)
  Class: Eq_51
  DataType: byte
  OrigDataType: byte
T_53: (in (__inb(0x03DA) & 0x08) == 0x00 : bool)
  Class: Eq_53
  DataType: bool
  OrigDataType: bool
T_54: (in 0x00 : byte)
  Class: Eq_33
  DataType: byte
  OrigDataType: byte
T_55: (in 0x0000 : word16)
  Class: Eq_55
  DataType: word16
  OrigDataType: word16
T_56: (in di_50 + 0x0000 : word16)
  Class: Eq_56
  DataType: word16
  OrigDataType: word16
T_57: (in Mem70[0xA000:di_50 + 0x0000:byte] : byte)
  Class: Eq_33
  DataType: byte
  OrigDataType: byte
T_58: (in __inb : ptr32)
  Class: Eq_58
  DataType: (ptr Eq_58)
  OrigDataType: (ptr (fn T_60 (T_59)))
T_59: (in 0x60 : byte)
  Class: Eq_59
  DataType: byte
  OrigDataType: byte
T_60: (in __inb(0x60) : byte)
  Class: Eq_60
  DataType: byte
  OrigDataType: byte
T_61: (in 0x01 : byte)
  Class: Eq_60
  DataType: byte
  OrigDataType: byte
T_62: (in __inb(0x60) != 0x01 : bool)
  Class: Eq_62
  DataType: bool
  OrigDataType: bool
T_63: (in 0x000F : word16)
  Class: Eq_63
  DataType: word16
  OrigDataType: word16
T_64: (in cx_20 + 0x000F : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: word16
T_65: (in bx_11 + cx_20 : word16)
  Class: Eq_13
  DataType: uint16
  OrigDataType: word16
T_66: (in bx_27 >>u 0x0007 : word16)
  Class: Eq_66
  DataType: uint16
  OrigDataType: uint16
T_67: (in (byte) (bx_27 >>u 0x0007) : byte)
  Class: Eq_19
  DataType: bcu8
  OrigDataType: byte
T_68: (in si_17 + bp_18 : word16)
  Class: Eq_9
  DataType: cups16
  OrigDataType: word16
T_69: (in 0x013F : word16)
  Class: Eq_9
  DataType: cups16
  OrigDataType: cups16
T_70: (in si_17 >=u 0x013F : bool)
  Class: Eq_70
  DataType: bool
  OrigDataType: bool
T_71: (in bios_video_set_mode : ptr32)
  Class: Eq_2
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (fn T_73 (T_72)))
T_72: (in 0x03 : byte)
  Class: Eq_4
  DataType: byte
  OrigDataType: byte
T_73: (in bios_video_set_mode(0x03) : void)
  Class: Eq_6
  DataType: void
  OrigDataType: void
T_74: (in msdos_terminate_program20 : ptr32)
  Class: Eq_74
  DataType: (ptr Eq_74)
  OrigDataType: (ptr (fn T_76 ()))
T_75: (in signature of msdos_terminate_program20 : void)
  Class: Eq_74
  DataType: (ptr Eq_74)
  OrigDataType: 
T_76: (in msdos_terminate_program20() : void)
  Class: Eq_76
  DataType: void
  OrigDataType: void
*/
typedef Eq_34 Eq_1struct Globals {
	Eq_34 * ptrFFFA0000;	// FFFA0000
} Eq_1;

typedef void (Eq_2)(byte);

typedef struct Eq_34 {
} Eq_34;

typedef byte (Eq_40)(word16);

typedef byte (Eq_47)(word16);

typedef byte (Eq_58)(byte);

typedef void (Eq_74)();

