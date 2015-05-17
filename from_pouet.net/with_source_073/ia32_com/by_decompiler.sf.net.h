// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_073/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_28) ptrFFFA0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_16: (fn byte (byte))
	T_16 (in __inb : ptr32)
Eq_28: (segment "Eq_28")
	T_28 (in 0xA000 : selector)
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
T_7: (in ax_21 : int16)
  Class: Eq_7
  DataType: int16
  OrigDataType: int16
T_8: (in (byte) ax_21 : byte)
  Class: Eq_8
  DataType: bcu8
  OrigDataType: bcu8
T_9: (in 0xC8 : byte)
  Class: Eq_8
  DataType: bcu8
  OrigDataType: bcu8
T_10: (in (byte) ax_21 >=u 0xC8 : bool)
  Class: Eq_10
  DataType: bool
  OrigDataType: bool
T_11: (in di : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_12: (in 0x0001 : word16)
  Class: Eq_12
  DataType: word16
  OrigDataType: word16
T_13: (in di + 0x0001 : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_14: (in 0x1F40 : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_15: (in dx : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_16: (in __inb : ptr32)
  Class: Eq_16
  DataType: (ptr Eq_16)
  OrigDataType: (ptr (fn T_18 (T_17)))
T_17: (in 0x60 : byte)
  Class: Eq_17
  DataType: byte
  OrigDataType: byte
T_18: (in __inb(0x60) : byte)
  Class: Eq_18
  DataType: byte
  OrigDataType: byte
T_19: (in 0x01 : byte)
  Class: Eq_18
  DataType: byte
  OrigDataType: byte
T_20: (in __inb(0x60) != 0x01 : bool)
  Class: Eq_20
  DataType: bool
  OrigDataType: bool
T_21: (in ax_60 : (memptr (ptr Eq_28) byte))
  Class: Eq_21
  DataType: (memptr (ptr Eq_28) byte)
  OrigDataType: (memptr T_28 (struct (0 T_31 t0000)))
T_22: (in 0x0140 : word16)
  Class: Eq_22
  DataType: int16
  OrigDataType: int16
T_23: (in ax_21 *s 0x0140 : int16)
  Class: Eq_23
  DataType: int16
  OrigDataType: int16
T_24: (in ax_35 : word16)
  Class: Eq_24
  DataType: word16
  OrigDataType: word16
T_25: (in ax_21 *s 0x0140 + ax_35 : word16)
  Class: Eq_21
  DataType: (memptr (ptr Eq_28) byte)
  OrigDataType: word16
T_26: (in al_63 : byte)
  Class: Eq_26
  DataType: byte
  OrigDataType: byte
T_27: (in (byte) di : byte)
  Class: Eq_26
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
T_30: (in ax_60 + 0x0000 : word16)
  Class: Eq_30
  DataType: word16
  OrigDataType: word16
T_31: (in Mem65[0xA000:ax_60 + 0x0000:byte] : byte)
  Class: Eq_26
  DataType: byte
  OrigDataType: byte
T_32: (in bl : bcu8)
  Class: Eq_32
  DataType: bcu8
  OrigDataType: bcu8
T_33: (in 0x40 : byte)
  Class: Eq_32
  DataType: bcu8
  OrigDataType: bcu8
T_34: (in bl >=u 0x40 : bool)
  Class: Eq_34
  DataType: bool
  OrigDataType: bool
T_35: (in 0x0001 : word16)
  Class: Eq_35
  DataType: word16
  OrigDataType: word16
T_36: (in ax_60 + 0x0001 : word16)
  Class: Eq_36
  DataType: (memptr (ptr Eq_28) byte)
  OrigDataType: (memptr T_28 (struct (0 T_39 t0000)))
T_37: (in cx : word16)
  Class: Eq_37
  DataType: word16
  OrigDataType: word16
T_38: (in ax_60 + 0x0001 + cx : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_39: (in Mem77[0xA000:ax_60 + 0x0001 + cx:byte] : byte)
  Class: Eq_26
  DataType: byte
  OrigDataType: byte
T_40: (in 0x00D2 : word16)
  Class: Eq_40
  DataType: word16
  OrigDataType: word16
T_41: (in 0xD2 : byte)
  Class: Eq_41
  DataType: byte
  OrigDataType: byte
T_42: (in 0xD2 - bl : byte)
  Class: Eq_42
  DataType: byte
  OrigDataType: byte
T_43: (in DPB(0x00D2, 0xD2 - bl, 0, 8) : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: word16
T_44: (in si : int16)
  Class: Eq_7
  DataType: int16
  OrigDataType: int16
T_45: (in (byte) si : byte)
  Class: Eq_45
  DataType: byte
  OrigDataType: byte
T_46: (in bx : word16)
  Class: Eq_24
  DataType: word16
  OrigDataType: word16
T_47: (in 0x000F : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_48: (in di & 0x000F : word16)
  Class: Eq_48
  DataType: word16
  OrigDataType: word16
T_49: (in bx - (di & 0x000F) : word16)
  Class: Eq_49
  DataType: uint16
  OrigDataType: uint16
T_50: (in 0x0001 : word16)
  Class: Eq_50
  DataType: uint16
  OrigDataType: uint16
T_51: (in bx - (di & 0x000F) >>u 0x0001 : word16)
  Class: Eq_51
  DataType: uint16
  OrigDataType: uint16
T_52: (in (byte) (bx - (di & 0x000F) >>u 0x0001) : byte)
  Class: Eq_52
  DataType: byte
  OrigDataType: byte
T_53: (in (byte) si - (byte) (bx - (di & 0x000F) >>u 0x0001) : byte)
  Class: Eq_53
  DataType: byte
  OrigDataType: byte
T_54: (in DPB(si, (byte) si - (byte) (bx - (di & 0x000F) >>u 0x0001), 0, 8) : word16)
  Class: Eq_24
  DataType: word16
  OrigDataType: word16
T_55: (in (byte) ax_35 : byte)
  Class: Eq_32
  DataType: bcu8
  OrigDataType: byte
T_56: (in 0x0001 : word16)
  Class: Eq_56
  DataType: word16
  OrigDataType: word16
T_57: (in dx - 0x0001 : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_58: (in 0x0000 : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_59: (in dx != 0x0000 : bool)
  Class: Eq_59
  DataType: bool
  OrigDataType: bool
*/
typedef Eq_28 Eq_1struct Globals {
	Eq_28 * ptrFFFA0000;	// FFFA0000
} Eq_1;

typedef void (Eq_2)(byte);

typedef byte (Eq_16)(byte);

typedef struct Eq_28 {
} Eq_28;

