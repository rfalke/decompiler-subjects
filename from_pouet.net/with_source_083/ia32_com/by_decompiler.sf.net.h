// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_083/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_28) ptrFFFA0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_24: (segment "Eq_24")
	T_24 (in ds : (ptr Eq_24))
Eq_28: (segment "Eq_28" (32A0 byte b32A0))
	T_28 (in 0xA000 : selector)
Eq_60: (fn byte (byte))
	T_60 (in __inb : ptr32)
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
T_7: (in ax_44 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_8: (in 0x00 : byte)
  Class: Eq_8
  DataType: byte
  OrigDataType: byte
T_9: (in DPB(ax_44, 0x00, 0, 8) : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_10: (in ax : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_11: (in al_49 : bcu8)
  Class: Eq_11
  DataType: bcu8
  OrigDataType: bcu8
T_12: (in 0x00 : byte)
  Class: Eq_11
  DataType: bcu8
  OrigDataType: byte
T_13: (in si_51 : (memptr (ptr Eq_24) byte))
  Class: Eq_13
  DataType: (memptr (ptr Eq_24) byte)
  OrigDataType: (memptr T_24 (struct 0001 (0 T_27 t0000)))
T_14: (in 0x0140 : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_15: (in ax + 0x0140 : word16)
  Class: Eq_13
  DataType: (memptr (ptr Eq_24) byte)
  OrigDataType: word16
T_16: (in di_53 : (memptr (ptr Eq_28) byte))
  Class: Eq_16
  DataType: (memptr (ptr Eq_28) byte)
  OrigDataType: (memptr T_28 (struct 0001 (0 T_31 t0000)))
T_17: (in bx_28 : (memptr (ptr Eq_28) byte))
  Class: Eq_16
  DataType: (memptr (ptr Eq_28) byte)
  OrigDataType: word16
T_18: (in cx_54 : int16)
  Class: Eq_18
  DataType: int16
  OrigDataType: int16
T_19: (in 0x00FF : word16)
  Class: Eq_18
  DataType: int16
  OrigDataType: word16
T_20: (in ah_43 : bcu8)
  Class: Eq_20
  DataType: bcu8
  OrigDataType: bcu8
T_21: (in 0xA0 : byte)
  Class: Eq_21
  DataType: byte
  OrigDataType: byte
T_22: (in ah_43 - 0xA0 : byte)
  Class: Eq_22
  DataType: byte
  OrigDataType: byte
T_23: (in DPB(ax, ah_43 - 0xA0, 8, 8) : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_24: (in ds : (ptr Eq_24))
  Class: Eq_24
  DataType: (ptr Eq_24)
  OrigDataType: (ptr (segment))
T_25: (in 0x0000 : word16)
  Class: Eq_25
  DataType: word16
  OrigDataType: word16
T_26: (in si_51 + 0x0000 : word16)
  Class: Eq_26
  DataType: word16
  OrigDataType: word16
T_27: (in Mem0[ds:si_51 + 0x0000:byte] : byte)
  Class: Eq_27
  DataType: byte
  OrigDataType: byte
T_28: (in 0xA000 : selector)
  Class: Eq_28
  DataType: (ptr Eq_28)
  OrigDataType: (ptr (segment))
T_29: (in 0x0000 : word16)
  Class: Eq_29
  DataType: word16
  OrigDataType: word16
T_30: (in di_53 + 0x0000 : word16)
  Class: Eq_30
  DataType: word16
  OrigDataType: word16
T_31: (in Mem71[0xA000:di_53 + 0x0000:byte] : byte)
  Class: Eq_27
  DataType: byte
  OrigDataType: byte
T_32: (in 0x0001 : word16)
  Class: Eq_32
  DataType: word16
  OrigDataType: word16
T_33: (in si_51 + 0x0001 : word16)
  Class: Eq_13
  DataType: (memptr (ptr Eq_24) byte)
  OrigDataType: word16
T_34: (in 0x0001 : word16)
  Class: Eq_34
  DataType: word16
  OrigDataType: word16
T_35: (in di_53 + 0x0001 : word16)
  Class: Eq_16
  DataType: (memptr (ptr Eq_28) byte)
  OrigDataType: word16
T_36: (in 0x0001 : word16)
  Class: Eq_36
  DataType: word16
  OrigDataType: word16
T_37: (in cx_54 - 0x0001 : word16)
  Class: Eq_18
  DataType: int16
  OrigDataType: word16
T_38: (in 0x0000 : word16)
  Class: Eq_18
  DataType: int16
  OrigDataType: int16
T_39: (in cx_54 >= 0x0000 : bool)
  Class: Eq_39
  DataType: bool
  OrigDataType: bool
T_40: (in 0x0001 : word16)
  Class: Eq_40
  DataType: word16
  OrigDataType: word16
T_41: (in si_51 + 0x0001 : word16)
  Class: Eq_13
  DataType: (memptr (ptr Eq_24) byte)
  OrigDataType: word16
T_42: (in 0x0001 : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_43: (in cx_54 - 0x0001 : word16)
  Class: Eq_18
  DataType: int16
  OrigDataType: word16
T_44: (in dl_31 : byte)
  Class: Eq_44
  DataType: byte
  OrigDataType: byte
T_45: (in al_49 + dl_31 : byte)
  Class: Eq_11
  DataType: bcu8
  OrigDataType: byte
T_46: (in DPB(ax, al_49, 0, 8) : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_47: (in 0x00 : byte)
  Class: Eq_11
  DataType: bcu8
  OrigDataType: bcu8
T_48: (in al_49 >=u 0x00 : bool)
  Class: Eq_48
  DataType: bool
  OrigDataType: bool
T_49: (in 0x013F : word16)
  Class: Eq_49
  DataType: word16
  OrigDataType: word16
T_50: (in bx_28 + 0x013F : word16)
  Class: Eq_16
  DataType: (memptr (ptr Eq_28) byte)
  OrigDataType: word16
T_51: (in 0x01 : byte)
  Class: Eq_51
  DataType: byte
  OrigDataType: byte
T_52: (in dl_31 - 0x01 : byte)
  Class: Eq_44
  DataType: byte
  OrigDataType: byte
T_53: (in 0x00 : byte)
  Class: Eq_44
  DataType: byte
  OrigDataType: byte
T_54: (in dl_31 != 0x00 : bool)
  Class: Eq_54
  DataType: bool
  OrigDataType: bool
T_55: (in dh : byte)
  Class: Eq_55
  DataType: byte
  OrigDataType: byte
T_56: (in dh + dl_31 : byte)
  Class: Eq_20
  DataType: bcu8
  OrigDataType: byte
T_57: (in DPB(ax, ah_43, 8, 8) : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_58: (in 0xA0 : byte)
  Class: Eq_20
  DataType: bcu8
  OrigDataType: bcu8
T_59: (in ah_43 <u 0xA0 : bool)
  Class: Eq_59
  DataType: bool
  OrigDataType: bool
T_60: (in __inb : ptr32)
  Class: Eq_60
  DataType: (ptr Eq_60)
  OrigDataType: (ptr (fn T_62 (T_61)))
T_61: (in 0x60 : byte)
  Class: Eq_61
  DataType: byte
  OrigDataType: byte
T_62: (in __inb(0x60) : byte)
  Class: Eq_62
  DataType: byte
  OrigDataType: byte
T_63: (in 0x01 : byte)
  Class: Eq_62
  DataType: byte
  OrigDataType: byte
T_64: (in __inb(0x60) != 0x01 : bool)
  Class: Eq_64
  DataType: bool
  OrigDataType: bool
T_65: (in 0x32A0 : word16)
  Class: Eq_16
  DataType: (memptr (ptr Eq_28) byte)
  OrigDataType: word16
T_66: (in 0x01 : byte)
  Class: Eq_66
  DataType: byte
  OrigDataType: byte
T_67: (in dh + 0x01 : byte)
  Class: Eq_55
  DataType: byte
  OrigDataType: byte
T_68: (in 0xA0 : byte)
  Class: Eq_44
  DataType: byte
  OrigDataType: byte
*/
typedef Eq_28 Eq_1struct Globals {
	Eq_28 * ptrFFFA0000;	// FFFA0000
} Eq_1;

typedef void (Eq_2)(byte);

typedef struct Eq_24 {
} Eq_24;

typedef struct Eq_28 {
	byte b32A0;	// 32A0
} Eq_28;

typedef byte (Eq_60)(byte);

