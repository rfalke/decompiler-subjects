// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_025/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_7: (segment "Eq_7")
	T_7 (in es_7 : (ptr Eq_7))
	T_13 (in SLICE(ds->*bx, selector, 16) : selector)
Eq_8: (segment "Eq_8")
	T_8 (in ds : (ptr Eq_8))
Eq_14: (union "Eq_14" (byte u0) (word16 u1))
	T_14 (in al_11 : Eq_14)
	T_19 (in __rcl(0x13, cl, C) : byte)
	T_20 (in v14_15 : Eq_14)
	T_24 (in Mem0[es_7:di + 0x0000:byte] : byte)
	T_27 (in Mem16[es_7:di + 0x0000:byte] : byte)
	T_31 (in al_25 : Eq_14)
	T_40 (in (byte) (ax_19 >> 0x0001) + SLICE(di, byte, 8) + (ax_19 >> 0x0001 <u 0x0000) : word16)
	T_46 (in v19_35 : Eq_14)
	T_49 (in Mem16[es_7:di + 0x0000:byte] : byte)
	T_52 (in Mem36[es_7:di + 0x0000:byte] : byte)
	T_56 (in (byte) ax_26 : byte)
Eq_15: (fn Eq_14 (byte, byte, byte))
	T_15 (in __rcl : ptr32)
Eq_21: (struct "Eq_21" 0001 (0 Eq_14 t0000))
	T_21 (in di : (memptr (ptr Eq_7) Eq_21))
	T_59 (in di - 0x0001 : word16)
Eq_37: (union "Eq_37" (int16 u0) (cups16 u1))
	T_37 (in ax_19 >> 0x0001 : word16)
	T_38 (in 0x0000 : word16)
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
T_14: (in al_11 : Eq_14)
  Class: Eq_14
  DataType: Eq_14
  OrigDataType: byte
T_15: (in __rcl : ptr32)
  Class: Eq_15
  DataType: (ptr Eq_15)
  OrigDataType: (ptr (fn T_19 (T_16, T_17, T_18)))
T_16: (in 0x13 : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_17: (in cl : byte)
  Class: Eq_17
  DataType: byte
  OrigDataType: byte
T_18: (in C : byte)
  Class: Eq_18
  DataType: byte
  OrigDataType: byte
T_19: (in __rcl(0x13, cl, C) : byte)
  Class: Eq_14
  DataType: Eq_14
  OrigDataType: byte
T_20: (in v14_15 : Eq_14)
  Class: Eq_14
  DataType: Eq_14
  OrigDataType: word16
T_21: (in di : (memptr (ptr Eq_7) Eq_21))
  Class: Eq_21
  DataType: (memptr (ptr Eq_7) Eq_21)
  OrigDataType: (memptr T_7 (struct 0001 (0 T_14 t0000)))
T_22: (in 0x0000 : word16)
  Class: Eq_22
  DataType: word16
  OrigDataType: word16
T_23: (in di + 0x0000 : word16)
  Class: Eq_23
  DataType: word16
  OrigDataType: word16
T_24: (in Mem0[es_7:di + 0x0000:byte] : byte)
  Class: Eq_14
  DataType: Eq_14
  OrigDataType: byte
T_25: (in 0x0000 : word16)
  Class: Eq_25
  DataType: word16
  OrigDataType: word16
T_26: (in di + 0x0000 : word16)
  Class: Eq_26
  DataType: word16
  OrigDataType: word16
T_27: (in Mem16[es_7:di + 0x0000:byte] : byte)
  Class: Eq_14
  DataType: Eq_14
  OrigDataType: byte
T_28: (in ax_19 : int16)
  Class: Eq_28
  DataType: int16
  OrigDataType: int16
T_29: (in ax : word16)
  Class: Eq_29
  DataType: word16
  OrigDataType: word16
T_30: (in DPB(ax, v14_15, 0, 8) : word16)
  Class: Eq_28
  DataType: int16
  OrigDataType: word16
T_31: (in al_25 : Eq_14)
  Class: Eq_14
  DataType: Eq_14
  OrigDataType: byte
T_32: (in 0x0001 : word16)
  Class: Eq_32
  DataType: uint16
  OrigDataType: uint16
T_33: (in ax_19 >> 0x0001 : word16)
  Class: Eq_33
  DataType: int16
  OrigDataType: int16
T_34: (in (byte) (ax_19 >> 0x0001) : byte)
  Class: Eq_34
  DataType: byte
  OrigDataType: byte
T_35: (in SLICE(di, byte, 8) : byte)
  Class: Eq_35
  DataType: byte
  OrigDataType: byte
T_36: (in (byte) (ax_19 >> 0x0001) + SLICE(di, byte, 8) : word16)
  Class: Eq_36
  DataType: word16
  OrigDataType: word16
T_37: (in ax_19 >> 0x0001 : word16)
  Class: Eq_37
  DataType: Eq_37
  OrigDataType: (union (int16 u0) (cups16 u1))
T_38: (in 0x0000 : word16)
  Class: Eq_37
  DataType: cups16
  OrigDataType: cups16
T_39: (in ax_19 >> 0x0001 <u 0x0000 : bool)
  Class: Eq_39
  DataType: bool
  OrigDataType: bool
T_40: (in (byte) (ax_19 >> 0x0001) + SLICE(di, byte, 8) + (ax_19 >> 0x0001 <u 0x0000) : word16)
  Class: Eq_14
  DataType: Eq_14
  OrigDataType: word16
T_41: (in ax_26 : word16)
  Class: Eq_41
  DataType: word16
  OrigDataType: word16
T_42: (in ax_19 >> 0x0001 : word16)
  Class: Eq_42
  DataType: int16
  OrigDataType: int16
T_43: (in DPB(ax_19 >> 0x0001, al_25, 0, 8) : word16)
  Class: Eq_41
  DataType: word16
  OrigDataType: word16
T_44: (in C_29 : bool)
  Class: Eq_44
  DataType: bool
  OrigDataType: byte
T_45: (in false : bool)
  Class: Eq_44
  DataType: bool
  OrigDataType: bool
T_46: (in v19_35 : Eq_14)
  Class: Eq_14
  DataType: Eq_14
  OrigDataType: word16
T_47: (in 0x0000 : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_48: (in di + 0x0000 : word16)
  Class: Eq_48
  DataType: word16
  OrigDataType: word16
T_49: (in Mem16[es_7:di + 0x0000:byte] : byte)
  Class: Eq_14
  DataType: Eq_14
  OrigDataType: byte
T_50: (in 0x0000 : word16)
  Class: Eq_50
  DataType: word16
  OrigDataType: word16
T_51: (in di + 0x0000 : word16)
  Class: Eq_51
  DataType: word16
  OrigDataType: word16
T_52: (in Mem36[es_7:di + 0x0000:byte] : byte)
  Class: Eq_14
  DataType: Eq_14
  OrigDataType: byte
T_53: (in DPB(ax_26, v19_35, 0, 8) : word16)
  Class: Eq_53
  DataType: word16
  OrigDataType: word16
T_54: (in DPB(ax_26, v19_35, 0, 8) + di : word16)
  Class: Eq_54
  DataType: word16
  OrigDataType: word16
T_55: (in DPB(ax_26, v19_35, 0, 8) + di + C_29 : word16)
  Class: Eq_41
  DataType: word16
  OrigDataType: word16
T_56: (in (byte) ax_26 : byte)
  Class: Eq_14
  DataType: Eq_14
  OrigDataType: byte
T_57: (in cond(ax_26) : byte)
  Class: Eq_44
  DataType: bool
  OrigDataType: byte
T_58: (in 0x0001 : word16)
  Class: Eq_58
  DataType: word16
  OrigDataType: word16
T_59: (in di - 0x0001 : word16)
  Class: Eq_21
  DataType: (memptr (ptr Eq_7) Eq_21)
  OrigDataType: word16
*/
typedef struct Globals {
} Eq_1;

typedef void (Eq_2)(byte);

typedef struct Eq_7 {
} Eq_7;

typedef struct Eq_8 {
} Eq_8;

typedef union Eq_14 {
	byte u0;
	word16 u1;
} Eq_14;

typedef Eq_14 (Eq_15)(byte, byte, byte);

typedef Eq_14 Eq_21struct Eq_21 {	// size: 1 1
	Eq_14 t0000;	// 0
} Eq_21;

typedef union Eq_37 {
	int16 u0;
	cups16 u1;
} Eq_37;

