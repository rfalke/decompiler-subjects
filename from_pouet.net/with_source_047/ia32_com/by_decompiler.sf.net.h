// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_047/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_7: (segment "Eq_7" (0 (arr bool) a0000))
	T_7 (in ds_7 : (ptr Eq_7))
	T_13 (in SLICE(ds->*bx, selector, 16) : selector)
Eq_8: (segment "Eq_8")
	T_8 (in ds : (ptr Eq_8))
Eq_28: (union "Eq_28" (int8 u0) (uint8 u1))
	T_28 (in bh_28 : Eq_28)
	T_43 (in bh_21 | bl_22 : byte)
	T_47 (in 0x00 : byte)
Eq_30: (union "Eq_30" (int16 u0) (uint16 u1))
	T_30 (in bh_28 >>u 0x01 : word16)
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
T_7: (in ds_7 : (ptr Eq_7))
  Class: Eq_7
  DataType: (ptr Eq_7)
  OrigDataType: (ptr (segment (0 (arr T_55) a0000)))
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
T_14: (in dl : byte)
  Class: Eq_14
  DataType: byte
  OrigDataType: byte
T_15: (in bx_29 : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_16: (in bl_22 : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_17: (in dh : byte)
  Class: Eq_17
  DataType: byte
  OrigDataType: byte
T_18: (in bl_22 + dh : byte)
  Class: Eq_18
  DataType: byte
  OrigDataType: byte
T_19: (in DPB(bx_29, bl_22 + dh, 0, 8) : word16)
  Class: Eq_19
  DataType: (memptr (ptr Eq_7) byte)
  OrigDataType: (memptr T_7 (struct (0 T_20 t0000)))
T_20: (in Mem39[ds_7:DPB(bx_29, bl_22 + dh, 0, 8):byte] : byte)
  Class: Eq_14
  DataType: byte
  OrigDataType: byte
T_21: (in cx : (memptr (ptr Eq_7) bool))
  Class: Eq_21
  DataType: (memptr (ptr Eq_7) bool)
  OrigDataType: (memptr T_7 (struct 0001 (0 T_38 t0000)))
T_22: (in 0x0001 : word16)
  Class: Eq_22
  DataType: word16
  OrigDataType: word16
T_23: (in cx - 0x0001 : word16)
  Class: Eq_21
  DataType: (memptr (ptr Eq_7) bool)
  OrigDataType: word16
T_24: (in SLICE(cx, byte, 8) : byte)
  Class: Eq_24
  DataType: byte
  OrigDataType: byte
T_25: (in ch : byte)
  Class: Eq_24
  DataType: byte
  OrigDataType: byte
T_26: (in 0x0000 : word16)
  Class: Eq_21
  DataType: (memptr (ptr Eq_7) bool)
  OrigDataType: word16
T_27: (in cx != Eq_7::a0000 : bool)
  Class: Eq_27
  DataType: bool
  OrigDataType: bool
T_28: (in bh_28 : Eq_28)
  Class: Eq_28
  DataType: Eq_28
  OrigDataType: (union (int8 u0) (uint8 u1))
T_29: (in 0x01 : byte)
  Class: Eq_29
  DataType: uint8
  OrigDataType: uint8
T_30: (in bh_28 >>u 0x01 : word16)
  Class: Eq_30
  DataType: Eq_30
  OrigDataType: (union (int16 u0) (uint16 u1))
T_31: (in -(bh_28 >>u 0x01) : byte)
  Class: Eq_31
  DataType: int16
  OrigDataType: int16
T_32: (in DPB(cx, -(bh_28 >>u 0x01), 8, 8) : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_33: (in dl & ch : byte)
  Class: Eq_33
  DataType: int8
  OrigDataType: int8
T_34: (in 0x00 : byte)
  Class: Eq_33
  DataType: int8
  OrigDataType: int8
T_35: (in (dl & ch) < 0x00 : bool)
  Class: Eq_35
  DataType: bool
  OrigDataType: bool
T_36: (in 0x0000 : word16)
  Class: Eq_36
  DataType: word16
  OrigDataType: word16
T_37: (in cx + 0x0000 : word16)
  Class: Eq_37
  DataType: word16
  OrigDataType: word16
T_38: (in Mem25[ds_7:cx + 0x0000:byte] : byte)
  Class: Eq_35
  DataType: bool
  OrigDataType: byte
T_39: (in bh_21 : byte)
  Class: Eq_39
  DataType: byte
  OrigDataType: byte
T_40: (in SLICE(cx, byte, 8) : byte)
  Class: Eq_39
  DataType: byte
  OrigDataType: byte
T_41: (in dl - bh_21 : byte)
  Class: Eq_14
  DataType: byte
  OrigDataType: byte
T_42: (in (byte) cx : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_43: (in bh_21 | bl_22 : byte)
  Class: Eq_28
  DataType: Eq_28
  OrigDataType: byte
T_44: (in dx : word16)
  Class: Eq_44
  DataType: word16
  OrigDataType: word16
T_45: (in DPB(dx, dl, 0, 8) : word16)
  Class: Eq_44
  DataType: word16
  OrigDataType: word16
T_46: (in DPB(cx, bh_28, 8, 8) : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_47: (in 0x00 : byte)
  Class: Eq_28
  DataType: int8
  OrigDataType: int8
T_48: (in bh_28 >= 0x00 : bool)
  Class: Eq_48
  DataType: bool
  OrigDataType: bool
T_49: (in 0x0001 : word16)
  Class: Eq_49
  DataType: word16
  OrigDataType: word16
T_50: (in dx + 0x0001 : word16)
  Class: Eq_44
  DataType: word16
  OrigDataType: word16
T_51: (in dx + 0x0001 : word16)
  Class: Eq_51
  DataType: word16
  OrigDataType: word16
T_52: (in (byte) (dx + 0x0001) : byte)
  Class: Eq_14
  DataType: byte
  OrigDataType: byte
T_53: (in dx + 0x0001 : word16)
  Class: Eq_53
  DataType: word16
  OrigDataType: word16
T_54: (in SLICE(dx + 0x0001, byte, 8) : byte)
  Class: Eq_17
  DataType: byte
  OrigDataType: byte
T_55:
  Class: Eq_55
  DataType: bool
  OrigDataType: (struct 0001 (0 T_38 t0000))
*/
typedef struct Globals {
} Eq_1;

typedef void (Eq_2)(byte);

typedef  Eq_7[]struct Eq_7 {
	bool a0000[];	// 0
} Eq_7;

typedef struct Eq_8 {
} Eq_8;

typedef union Eq_28 {
	int8 u0;
	uint8 u1;
} Eq_28;

typedef union Eq_30 {
	int16 u0;
	uint16 u1;
} Eq_30;

