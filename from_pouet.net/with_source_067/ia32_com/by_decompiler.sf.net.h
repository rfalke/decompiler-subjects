// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_067/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_7: (segment "Eq_7" (7D10 byte b7D10))
	T_7 (in es_7 : (ptr Eq_7))
	T_13 (in SLICE(ds->*bx, selector, 16) : selector)
Eq_8: (segment "Eq_8")
	T_8 (in ds : (ptr Eq_8))
Eq_57: (fn byte (byte))
	T_57 (in __inb : ptr32)
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
T_7: (in es_7 : (ptr Eq_7))
  Class: Eq_7
  DataType: (ptr Eq_7)
  OrigDataType: (ptr (segment))
T_8: (in ds : (ptr Eq_8))
  Class: Eq_8
  DataType: (ptr Eq_8)
  OrigDataType: (ptr (segment))
T_9: (in bx : (memptr (ptr Eq_8) segptr32))
  Class: Eq_9
  DataType: (memptr (ptr Eq_8) segptr32)
  OrigDataType: (memptr T_8 (struct (0 T_12 t0000)))
T_10: (in 0x0000 : word16)
  Class: Eq_10
  DataType: word16
  OrigDataType: word16
T_11: (in bx + 0x0000 : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_12: (in Mem0[ds:bx + 0x0000:segptr32] : segptr32)
  Class: Eq_12
  DataType: segptr32
  OrigDataType: segptr32
T_13: (in SLICE(ds->*bx, selector, 16) : selector)
  Class: Eq_7
  DataType: (ptr Eq_7)
  OrigDataType: (ptr (segment))
T_14: (in ax_52 : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_15: (in cx_46 : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_16: (in 0x00A0 : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_17: (in cx_46 - 0x00A0 : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_18: (in 0x0006 : word16)
  Class: Eq_18
  DataType: word16
  OrigDataType: word16
T_19: (in ax_52 << 0x0006 : word16)
  Class: Eq_19
  DataType: ui16
  OrigDataType: ui16
T_20: (in (int32) (ax_52 << 0x0006) : int32)
  Class: Eq_20
  DataType: int32
  OrigDataType: int32
T_21: (in bx_28 : int16)
  Class: Eq_21
  DataType: int16
  OrigDataType: int16
T_22: (in (int32) (ax_52 << 0x0006) % bx_28 : int16)
  Class: Eq_22
  DataType: int16
  OrigDataType: int16
T_23: (in ax_52 << 0x0006 : word16)
  Class: Eq_23
  DataType: ui16
  OrigDataType: ui16
T_24: (in SEQ((int32) (ax_52 << 0x0006) % bx_28, ax_52 << 0x0006) : int32)
  Class: Eq_24
  DataType: int32
  OrigDataType: int32
T_25: (in SEQ((int32) (ax_52 << 0x0006) % bx_28, ax_52 << 0x0006) / bx_28 : int16)
  Class: Eq_25
  DataType: int16
  OrigDataType: int16
T_26: (in bp : word16)
  Class: Eq_26
  DataType: word16
  OrigDataType: word16
T_27: (in SEQ((int32) (ax_52 << 0x0006) % bx_28, ax_52 << 0x0006) / bx_28 + bp : word16)
  Class: Eq_27
  DataType: word16
  OrigDataType: word16
T_28: (in (byte) (SEQ((int32) (ax_52 << 0x0006) % bx_28, ax_52 << 0x0006) / bx_28 + bp) : byte)
  Class: Eq_28
  DataType: byte
  OrigDataType: byte
T_29: (in 14336 : int32)
  Class: Eq_29
  DataType: int32
  OrigDataType: int32
T_30: (in 14336 % bx_28 : int16)
  Class: Eq_30
  DataType: int16
  OrigDataType: int16
T_31: (in 0x3800 : word16)
  Class: Eq_31
  DataType: word16
  OrigDataType: word16
T_32: (in SEQ(14336 % bx_28, 0x3800) : int32)
  Class: Eq_32
  DataType: int32
  OrigDataType: int32
T_33: (in SEQ(14336 % bx_28, 0x3800) / bx_28 : int16)
  Class: Eq_33
  DataType: int16
  OrigDataType: int16
T_34: (in (byte) (SEQ(14336 % bx_28, 0x3800) / bx_28) : byte)
  Class: Eq_34
  DataType: byte
  OrigDataType: byte
T_35: (in (byte) (SEQ((int32) (ax_52 << 0x0006) % bx_28, ax_52 << 0x0006) / bx_28 + bp) ^ (byte) (SEQ(14336 % bx_28, 0x3800) / bx_28) : byte)
  Class: Eq_35
  DataType: uint8
  OrigDataType: uint8
T_36: (in 0x04 : byte)
  Class: Eq_36
  DataType: uint8
  OrigDataType: uint8
T_37: (in ((byte) (SEQ((int32) (ax_52 << 0x0006) % bx_28, ax_52 << 0x0006) / bx_28 + bp) ^ (byte) (SEQ(14336 % bx_28, 0x3800) / bx_28)) >>u 0x04 : word16)
  Class: Eq_37
  DataType: uint16
  OrigDataType: uint16
T_38: (in 0x10 : byte)
  Class: Eq_38
  DataType: byte
  OrigDataType: byte
T_39: (in ((byte) (SEQ((int32) (ax_52 << 0x0006) % bx_28, ax_52 << 0x0006) / bx_28 + bp) ^ (byte) (SEQ(14336 % bx_28, 0x3800) / bx_28)) >>u 0x04 | 0x10 : byte)
  Class: Eq_39
  DataType: byte
  OrigDataType: byte
T_40: (in di_31 : (memptr (ptr Eq_7) byte))
  Class: Eq_40
  DataType: (memptr (ptr Eq_7) byte)
  OrigDataType: (memptr T_7 (struct 0001 (0 T_43 t0000)))
T_41: (in 0x0000 : word16)
  Class: Eq_41
  DataType: word16
  OrigDataType: word16
T_42: (in di_31 + 0x0000 : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_43: (in Mem77[es_7:di_31 + 0x0000:byte] : byte)
  Class: Eq_39
  DataType: byte
  OrigDataType: byte
T_44: (in 0x0001 : word16)
  Class: Eq_44
  DataType: word16
  OrigDataType: word16
T_45: (in di_31 + 0x0001 : word16)
  Class: Eq_40
  DataType: (memptr (ptr Eq_7) byte)
  OrigDataType: word16
T_46: (in 0x0001 : word16)
  Class: Eq_46
  DataType: word16
  OrigDataType: word16
T_47: (in cx_46 - 0x0001 : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_48: (in 0x0000 : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_49: (in cx_46 != 0x0000 : bool)
  Class: Eq_49
  DataType: bool
  OrigDataType: bool
T_50: (in 0x0064 : word16)
  Class: Eq_21
  DataType: int16
  OrigDataType: word16
T_51: (in bx_28 != 0x0064 : bool)
  Class: Eq_51
  DataType: bool
  OrigDataType: bool
T_52: (in 0x0140 : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_53: (in 0x0001 : word16)
  Class: Eq_53
  DataType: word16
  OrigDataType: word16
T_54: (in bx_28 + 0x0001 : word16)
  Class: Eq_21
  DataType: int16
  OrigDataType: word16
T_55: (in 0x0001 : word16)
  Class: Eq_55
  DataType: word16
  OrigDataType: word16
T_56: (in bp - 0x0001 : word16)
  Class: Eq_26
  DataType: word16
  OrigDataType: word16
T_57: (in __inb : ptr32)
  Class: Eq_57
  DataType: (ptr Eq_57)
  OrigDataType: (ptr (fn T_59 (T_58)))
T_58: (in 0x60 : byte)
  Class: Eq_58
  DataType: byte
  OrigDataType: byte
T_59: (in __inb(0x60) : byte)
  Class: Eq_59
  DataType: byte
  OrigDataType: byte
T_60: (in 0x01 : byte)
  Class: Eq_59
  DataType: byte
  OrigDataType: byte
T_61: (in __inb(0x60) != 0x01 : bool)
  Class: Eq_61
  DataType: bool
  OrigDataType: bool
T_62: (in 0x0000 : word16)
  Class: Eq_21
  DataType: int16
  OrigDataType: word16
T_63: (in 0x7D10 : word16)
  Class: Eq_40
  DataType: (memptr (ptr Eq_7) byte)
  OrigDataType: word16
*/
typedef struct Globals {
} Eq_1;

typedef void (Eq_2)(byte);

typedef struct Eq_7 {
	byte b7D10;	// 7D10
} Eq_7;

typedef struct Eq_8 {
} Eq_8;

typedef byte (Eq_57)(byte);

