// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_041/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_14: (union "Eq_14" (uint8 u0) (uint16 u1))
	T_14 (in ax_15 : Eq_14)
	T_18 (in Mem33[bx_5:bx_14 + 0x00A0:word16] : word16)
	T_21 (in Mem0[bx_5:bx_14 + 0x0000:word16] : word16)
	T_22 (in v11_37 : Eq_14)
	T_25 (in Mem0[bx_5:bx_14 + 0x0000:byte] : byte)
	T_27 (in (bx_5->*bx_14).t0000 >>u 0x01 : word16)
	T_30 (in Mem38[bx_5:bx_14 + 0x0000:byte] : byte)
	T_31 (in 0x00 : byte)
	T_42 (in __inw(0x40) : word16)
Eq_15: (struct "Eq_15" (0 Eq_14 t0000) (A0 Eq_14 t00A0))
	T_15 (in bx_14 : (memptr word16 Eq_15))
	T_39 (in DPB(bx_10, bh_11 & 0x3F, 8, 8) : word16)
Eq_40: (fn Eq_14 (byte))
	T_40 (in __inw : ptr32)
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
T_5: (in 0x03 : byte)
  Class: Eq_4
  DataType: byte
  OrigDataType: byte
T_6: (in bios_video_set_mode(0x03) : void)
  Class: Eq_6
  DataType: void
  OrigDataType: void
T_7: (in bh_11 : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_8: (in 0xB8 : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_9: (in bx_5 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_10: (in bx : word16)
  Class: Eq_10
  DataType: word16
  OrigDataType: word16
T_11: (in 0xB8 : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_12: (in DPB(bx, 0xB8, 8, 8) : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_13: (in bx_10 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_14: (in ax_15 : Eq_14)
  Class: Eq_14
  DataType: Eq_14
  OrigDataType: word16
T_15: (in bx_14 : (memptr word16 Eq_15))
  Class: Eq_15
  DataType: (memptr word16 Eq_15)
  OrigDataType: (memptr T_9 (struct (0 T_14 t0000) (A0 T_18 t00A0)))
T_16: (in 0x00A0 : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_17: (in bx_14 + 0x00A0 : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_18: (in Mem33[bx_5:bx_14 + 0x00A0:word16] : word16)
  Class: Eq_14
  DataType: Eq_14
  OrigDataType: word16
T_19: (in 0x0000 : word16)
  Class: Eq_19
  DataType: word16
  OrigDataType: word16
T_20: (in bx_14 + 0x0000 : word16)
  Class: Eq_20
  DataType: word16
  OrigDataType: word16
T_21: (in Mem0[bx_5:bx_14 + 0x0000:word16] : word16)
  Class: Eq_14
  DataType: Eq_14
  OrigDataType: word16
T_22: (in v11_37 : Eq_14)
  Class: Eq_14
  DataType: Eq_14
  OrigDataType: byte
T_23: (in 0x0000 : word16)
  Class: Eq_23
  DataType: word16
  OrigDataType: word16
T_24: (in bx_14 + 0x0000 : word16)
  Class: Eq_24
  DataType: word16
  OrigDataType: word16
T_25: (in Mem0[bx_5:bx_14 + 0x0000:byte] : byte)
  Class: Eq_14
  DataType: Eq_14
  OrigDataType: uint8
T_26: (in 0x01 : byte)
  Class: Eq_26
  DataType: uint8
  OrigDataType: uint8
T_27: (in (bx_5->*bx_14).t0000 >>u 0x01 : word16)
  Class: Eq_14
  DataType: Eq_14
  OrigDataType: uint16
T_28: (in 0x0000 : word16)
  Class: Eq_28
  DataType: word16
  OrigDataType: word16
T_29: (in bx_14 + 0x0000 : word16)
  Class: Eq_29
  DataType: word16
  OrigDataType: word16
T_30: (in Mem38[bx_5:bx_14 + 0x0000:byte] : byte)
  Class: Eq_14
  DataType: Eq_14
  OrigDataType: byte
T_31: (in 0x00 : byte)
  Class: Eq_14
  DataType: uint8
  OrigDataType: byte
T_32: (in v11_37 == 0x00 : bool)
  Class: Eq_32
  DataType: bool
  OrigDataType: bool
T_33: (in 0x0002 : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_34: (in bx_14 - 0x0002 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_35: (in bx_14 - 0x0002 : word16)
  Class: Eq_35
  DataType: word16
  OrigDataType: word16
T_36: (in SLICE(bx_14 - 0x0002, byte, 8) : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_37: (in 0x3F : byte)
  Class: Eq_37
  DataType: byte
  OrigDataType: byte
T_38: (in bh_11 & 0x3F : byte)
  Class: Eq_38
  DataType: byte
  OrigDataType: byte
T_39: (in DPB(bx_10, bh_11 & 0x3F, 8, 8) : word16)
  Class: Eq_15
  DataType: (memptr word16 Eq_15)
  OrigDataType: word16
T_40: (in __inw : ptr32)
  Class: Eq_40
  DataType: (ptr Eq_40)
  OrigDataType: (ptr (fn T_42 (T_41)))
T_41: (in 0x40 : byte)
  Class: Eq_41
  DataType: byte
  OrigDataType: byte
T_42: (in __inw(0x40) : word16)
  Class: Eq_14
  DataType: Eq_14
  OrigDataType: word16
T_43: (in 0xF5F0 : word16)
  Class: Eq_43
  DataType: word16
  OrigDataType: word16
T_44: (in ax_15 & 0xF5F0 : word16)
  Class: Eq_44
  DataType: word16
  OrigDataType: word16
T_45: (in 0x0000 : word16)
  Class: Eq_44
  DataType: word16
  OrigDataType: word16
T_46: (in (ax_15 & 0xF5F0) == 0x0000 : bool)
  Class: Eq_46
  DataType: bool
  OrigDataType: bool
*/
typedef struct Globals {
} Eq_1;

typedef void (Eq_2)(byte);

typedef union Eq_14 {
	uint8 u0;
	uint16 u1;
} Eq_14;

typedef Eq_14 Eq_15Eq_14 Eq_15struct Eq_15 {
	Eq_14 t0000;	// 0
	Eq_14 t00A0;	// A0
} Eq_15;

typedef Eq_14 (Eq_40)(byte);

