// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_052/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_11: (fn void (word16, word16))
	T_11 (in __outw : ptr32)
Eq_24: (segment "Eq_24")
	T_24 (in es_35 : (ptr Eq_24))
	T_55 (in SLICE(es_di_34, selector, 16) : selector)
Eq_40: (struct "Eq_40" 0001 (0 Eq_50 t0000))
	T_40 (in DPB(bx_49, bh_51 + 0x01, 8, 8) : word16)
	T_41 (in bx : (memptr (ptr Eq_51) Eq_40))
Eq_50: (union "Eq_50" (ptr32 u0) (segptr32 u1))
	T_50 (in es_di_34 : Eq_50)
	T_54 (in Mem0[ds:bx + 0x0000:segptr32] : segptr32)
Eq_51: (segment "Eq_51")
	T_51 (in ds : (ptr Eq_51))
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
T_7: (in ax_21 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_8: (in ax : word16)
  Class: Eq_8
  DataType: word16
  OrigDataType: word16
T_9: (in 0x20 : byte)
  Class: Eq_9
  DataType: byte
  OrigDataType: byte
T_10: (in DPB(ax, 0x20, 8, 8) : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_11: (in __outw : ptr32)
  Class: Eq_11
  DataType: (ptr Eq_11)
  OrigDataType: (ptr (fn T_13 (T_12, T_7)))
T_12: (in 0x03D4 : word16)
  Class: Eq_12
  DataType: word16
  OrigDataType: word16
T_13: (in __outw(0x03D4, ax_21) : void)
  Class: Eq_13
  DataType: void
  OrigDataType: void
T_14: (in cx : word16)
  Class: Eq_14
  DataType: int16
  OrigDataType: int16
T_15: (in bl_50 : byte)
  Class: Eq_15
  DataType: byte
  OrigDataType: byte
T_16: (in DPB(cx, bl_50, 0, 8) : word16)
  Class: Eq_14
  DataType: int16
  OrigDataType: word16
T_17: (in (int32) ax_21 : int32)
  Class: Eq_17
  DataType: int32
  OrigDataType: int32
T_18: (in (int32) ax_21 % cx : int16)
  Class: Eq_18
  DataType: int16
  OrigDataType: int16
T_19: (in SEQ((int32) ax_21 % cx, ax_21) : int32)
  Class: Eq_19
  DataType: int32
  OrigDataType: int32
T_20: (in SEQ((int32) ax_21 % cx, ax_21) / cx : int16)
  Class: Eq_20
  DataType: int16
  OrigDataType: int16
T_21: (in si : word16)
  Class: Eq_21
  DataType: word16
  OrigDataType: word16
T_22: (in SEQ((int32) ax_21 % cx, ax_21) / cx + si : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_23: (in (byte) ax_21 : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_24: (in es_35 : (ptr Eq_24))
  Class: Eq_24
  DataType: (ptr Eq_24)
  OrigDataType: (ptr (segment))
T_25: (in di_36 : (memptr (ptr Eq_24) byte))
  Class: Eq_25
  DataType: (memptr (ptr Eq_24) byte)
  OrigDataType: (memptr T_24 (struct 0001 (0 T_28 t0000)))
T_26: (in 0x0000 : word16)
  Class: Eq_26
  DataType: word16
  OrigDataType: word16
T_27: (in di_36 + 0x0000 : word16)
  Class: Eq_27
  DataType: word16
  OrigDataType: word16
T_28: (in Mem69[es_35:di_36 + 0x0000:byte] : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_29: (in 0x01 : byte)
  Class: Eq_29
  DataType: byte
  OrigDataType: byte
T_30: (in bl_50 + 0x01 : byte)
  Class: Eq_15
  DataType: byte
  OrigDataType: byte
T_31: (in 0x0001 : word16)
  Class: Eq_31
  DataType: word16
  OrigDataType: word16
T_32: (in di_36 + 0x0001 : word16)
  Class: Eq_25
  DataType: (memptr (ptr Eq_24) byte)
  OrigDataType: word16
T_33: (in bx_49 : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_34: (in DPB(bx_49, bl_50, 0, 8) : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_35: (in 0x00 : byte)
  Class: Eq_15
  DataType: byte
  OrigDataType: byte
T_36: (in bl_50 != 0x00 : bool)
  Class: Eq_36
  DataType: bool
  OrigDataType: bool
T_37: (in bh_51 : byte)
  Class: Eq_37
  DataType: byte
  OrigDataType: byte
T_38: (in 0x01 : byte)
  Class: Eq_38
  DataType: byte
  OrigDataType: byte
T_39: (in bh_51 + 0x01 : byte)
  Class: Eq_39
  DataType: byte
  OrigDataType: byte
T_40: (in DPB(bx_49, bh_51 + 0x01, 8, 8) : word16)
  Class: Eq_40
  DataType: (memptr (ptr Eq_51) Eq_40)
  OrigDataType: word16
T_41: (in bx : (memptr (ptr Eq_51) Eq_40))
  Class: Eq_40
  DataType: (memptr (ptr Eq_51) Eq_40)
  OrigDataType: (memptr T_51 (struct 0001 (0 T_54 t0000)))
T_42: (in 0x01 : byte)
  Class: Eq_37
  DataType: byte
  OrigDataType: byte
T_43: (in bh_51 != 0x01 : bool)
  Class: Eq_43
  DataType: bool
  OrigDataType: bool
T_44: (in 0x0001 : word16)
  Class: Eq_44
  DataType: word16
  OrigDataType: word16
T_45: (in bx + 0x0001 : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_46: (in (byte) bx_49 : byte)
  Class: Eq_15
  DataType: byte
  OrigDataType: byte
T_47: (in SLICE(bx_49, byte, 8) : byte)
  Class: Eq_37
  DataType: byte
  OrigDataType: byte
T_48: (in 0x0001 : word16)
  Class: Eq_48
  DataType: word16
  OrigDataType: word16
T_49: (in si + 0x0001 : word16)
  Class: Eq_21
  DataType: word16
  OrigDataType: word16
T_50: (in es_di_34 : Eq_50)
  Class: Eq_50
  DataType: Eq_50
  OrigDataType: ptr32
T_51: (in ds : (ptr Eq_51))
  Class: Eq_51
  DataType: (ptr Eq_51)
  OrigDataType: (ptr (segment))
T_52: (in 0x0000 : word16)
  Class: Eq_52
  DataType: word16
  OrigDataType: word16
T_53: (in bx + 0x0000 : word16)
  Class: Eq_53
  DataType: word16
  OrigDataType: word16
T_54: (in Mem0[ds:bx + 0x0000:segptr32] : segptr32)
  Class: Eq_50
  DataType: Eq_50
  OrigDataType: segptr32
T_55: (in SLICE(es_di_34, selector, 16) : selector)
  Class: Eq_24
  DataType: (ptr Eq_24)
  OrigDataType: (ptr (segment))
T_56: (in (word16) es_di_34 : word16)
  Class: Eq_25
  DataType: (memptr (ptr Eq_24) byte)
  OrigDataType: word16
*/
typedef struct Globals {
} Eq_1;

typedef void (Eq_2)(byte);

typedef void (Eq_11)(word16, word16);

typedef struct Eq_24 {
} Eq_24;

typedef Eq_50 Eq_40struct Eq_40 {	// size: 1 1
	Eq_50 t0000;	// 0
} Eq_40;

typedef union Eq_50 {
	ptr32 u0;
	segptr32 u1;
} Eq_50;

typedef struct Eq_51 {
} Eq_51;

