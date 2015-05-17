// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_044/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_7: (union "Eq_7" (ptr32 u0) (segptr32 u1))
	T_7 (in ds_bx_6 : ptr32)
	T_12 (in Mem0[ds:bx + 0x0000:segptr32] : segptr32)
Eq_8: (segment "Eq_8")
	T_8 (in ds : (ptr Eq_8))
Eq_13: (segment "Eq_13")
	T_13 (in ds_7 : (ptr Eq_13))
	T_14 (in SLICE(ds_bx_6, selector, 16) : selector)
Eq_15: (union "Eq_15" (int16 u0) ((memptr (ptr Eq_13) Eq_58) u1))
	T_15 (in bx_11 : Eq_15)
	T_16 (in (word16) ds_bx_6 : word16)
	T_52 (in bx_17 - 0x0001 : word16)
Eq_19: (union "Eq_19" (bcu8 u0) (word16 u1))
	T_19 (in Mem0[ds_7:bx_11 + 0x0000:byte] : byte)
	T_24 (in Mem0[ds_7:bx_11 + 0x0000:byte] : byte)
	T_25 (in cl : Eq_19)
	T_27 (in Mem0[ds_7:bx_11 + 0x0000:byte] + ah + (Mem0[ds_7:bx_11 + 0x0000:byte] <u cl) : word16)
	T_30 (in Mem16[ds_7:bx_11 + 0x0000:byte] : byte)
	T_50 (in Mem16[ds_7:bx_17 + 0x0000:byte] + Mem16[ds_7:bx_17 + di:byte] + Mem16[ds_7:bx_17 - 0x0141:byte] + Mem16[ds_7:(bx_17 + 0x003F) + si:byte] : byte)
Eq_31: (union "Eq_31" (int16 u0) ((memptr (ptr Eq_13) Eq_59) u1))
	T_31 (in bx_17 : Eq_31)
	T_33 (in bx_11 *s 0xFFE5 : int16)
Eq_53: (fn byte (byte))
	T_53 (in __inb : ptr32)
Eq_58: (struct "Eq_58" 0001 (0 Eq_19 t0000))
	T_58
Eq_59: (struct "Eq_59" (FFFFFEBF byte bFFFFFEBF) (0 byte b0000))
	T_59
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
T_7: (in ds_bx_6 : ptr32)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: ptr32
T_8: (in ds : (ptr Eq_8))
  Class: Eq_8
  DataType: (ptr Eq_8)
  OrigDataType: (ptr (segment))
T_9: (in bx : (memptr (ptr Eq_8) Eq_7))
  Class: Eq_9
  DataType: (memptr (ptr Eq_8) Eq_7)
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
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: segptr32
T_13: (in ds_7 : (ptr Eq_13))
  Class: Eq_13
  DataType: (ptr Eq_13)
  OrigDataType: (ptr (segment))
T_14: (in SLICE(ds_bx_6, selector, 16) : selector)
  Class: Eq_13
  DataType: (ptr Eq_13)
  OrigDataType: (ptr (segment))
T_15: (in bx_11 : Eq_15)
  Class: Eq_15
  DataType: Eq_15
  OrigDataType: (union (int16 u0) ((memptr T_13 (struct 0001 (0 T_19 t0000))) u1))
T_16: (in (word16) ds_bx_6 : word16)
  Class: Eq_15
  DataType: Eq_15
  OrigDataType: word16
T_17: (in 0x0000 : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_18: (in bx_11 + 0x0000 : word16)
  Class: Eq_18
  DataType: word16
  OrigDataType: word16
T_19: (in Mem0[ds_7:bx_11 + 0x0000:byte] : byte)
  Class: Eq_19
  DataType: Eq_19
  OrigDataType: byte
T_20: (in ah : byte)
  Class: Eq_20
  DataType: byte
  OrigDataType: byte
T_21: (in Mem0[ds_7:bx_11 + 0x0000:byte] + ah : word16)
  Class: Eq_21
  DataType: word16
  OrigDataType: word16
T_22: (in 0x0000 : word16)
  Class: Eq_22
  DataType: word16
  OrigDataType: word16
T_23: (in bx_11 + 0x0000 : word16)
  Class: Eq_23
  DataType: word16
  OrigDataType: word16
T_24: (in Mem0[ds_7:bx_11 + 0x0000:byte] : byte)
  Class: Eq_19
  DataType: Eq_19
  OrigDataType: bcu8
T_25: (in cl : Eq_19)
  Class: Eq_19
  DataType: Eq_19
  OrigDataType: bcu8
T_26: (in Mem0[ds_7:bx_11 + 0x0000:byte] <u cl : bool)
  Class: Eq_26
  DataType: bool
  OrigDataType: bool
T_27: (in Mem0[ds_7:bx_11 + 0x0000:byte] + ah + (Mem0[ds_7:bx_11 + 0x0000:byte] <u cl) : word16)
  Class: Eq_19
  DataType: Eq_19
  OrigDataType: word16
T_28: (in 0x0000 : word16)
  Class: Eq_28
  DataType: word16
  OrigDataType: word16
T_29: (in bx_11 + 0x0000 : word16)
  Class: Eq_29
  DataType: word16
  OrigDataType: word16
T_30: (in Mem16[ds_7:bx_11 + 0x0000:byte] : byte)
  Class: Eq_19
  DataType: Eq_19
  OrigDataType: byte
T_31: (in bx_17 : Eq_31)
  Class: Eq_31
  DataType: Eq_31
  OrigDataType: (memptr T_13 (struct (FFFFFEBF T_43 tFFFFFEBF) (0 T_36 t0000)))
T_32: (in 0xFFE5 : word16)
  Class: Eq_32
  DataType: int16
  OrigDataType: int16
T_33: (in bx_11 *s 0xFFE5 : int16)
  Class: Eq_31
  DataType: Eq_31
  OrigDataType: int16
T_34: (in 0x0000 : word16)
  Class: Eq_34
  DataType: word16
  OrigDataType: word16
T_35: (in bx_17 + 0x0000 : word16)
  Class: Eq_35
  DataType: word16
  OrigDataType: word16
T_36: (in Mem16[ds_7:bx_17 + 0x0000:byte] : byte)
  Class: Eq_36
  DataType: byte
  OrigDataType: byte
T_37: (in di : word16)
  Class: Eq_37
  DataType: word16
  OrigDataType: word16
T_38: (in bx_17 + di : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_39: (in Mem16[ds_7:bx_17 + di:byte] : byte)
  Class: Eq_36
  DataType: byte
  OrigDataType: byte
T_40: (in Mem16[ds_7:bx_17 + 0x0000:byte] + Mem16[ds_7:bx_17 + di:byte] : byte)
  Class: Eq_40
  DataType: byte
  OrigDataType: byte
T_41: (in 0x0141 : word16)
  Class: Eq_41
  DataType: word16
  OrigDataType: word16
T_42: (in bx_17 - 0x0141 : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_43: (in Mem16[ds_7:bx_17 - 0x0141:byte] : byte)
  Class: Eq_43
  DataType: byte
  OrigDataType: byte
T_44: (in Mem16[ds_7:bx_17 + 0x0000:byte] + Mem16[ds_7:bx_17 + di:byte] + Mem16[ds_7:bx_17 - 0x0141:byte] : byte)
  Class: Eq_44
  DataType: byte
  OrigDataType: byte
T_45: (in 0x003F : word16)
  Class: Eq_45
  DataType: word16
  OrigDataType: word16
T_46: (in bx_17 + 0x003F : word16)
  Class: Eq_46
  DataType: (memptr (ptr Eq_13) byte)
  OrigDataType: (memptr T_13 (struct (0 T_49 t0000)))
T_47: (in si : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_48: (in bx_17 + 0x003F + si : word16)
  Class: Eq_48
  DataType: word16
  OrigDataType: word16
T_49: (in Mem16[ds_7:bx_17 + 0x003F + si:byte] : byte)
  Class: Eq_49
  DataType: byte
  OrigDataType: byte
T_50: (in Mem16[ds_7:bx_17 + 0x0000:byte] + Mem16[ds_7:bx_17 + di:byte] + Mem16[ds_7:bx_17 - 0x0141:byte] + Mem16[ds_7:(bx_17 + 0x003F) + si:byte] : byte)
  Class: Eq_19
  DataType: Eq_19
  OrigDataType: byte
T_51: (in 0x0001 : word16)
  Class: Eq_51
  DataType: word16
  OrigDataType: word16
T_52: (in bx_17 - 0x0001 : word16)
  Class: Eq_15
  DataType: Eq_15
  OrigDataType: word16
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
T_58:
  Class: Eq_58
  DataType: Eq_58
  OrigDataType: 
T_59:
  Class: Eq_59
  DataType: Eq_59
  OrigDataType: 
*/
typedef struct Globals {
} Eq_1;

typedef void (Eq_2)(byte);

typedef union Eq_7 {
	ptr32 u0;
	segptr32 u1;
} Eq_7;

typedef struct Eq_8 {
} Eq_8;

typedef struct Eq_13 {
} Eq_13;

typedef union Eq_15 {
	int16 u0;
	Eq_58 Eq_13::* u1;
} Eq_15;

typedef union Eq_19 {
	bcu8 u0;
	word16 u1;
} Eq_19;

typedef union Eq_31 {
	int16 u0;
	Eq_59 Eq_13::* u1;
} Eq_31;

typedef byte (Eq_53)(byte);

typedef Eq_19 Eq_58struct Eq_58 {	// size: 1 1
	Eq_19 t0000;	// 0
} Eq_58;

typedef struct Eq_59 {
	byte bFFFFFEBF;	// FFFFFEBF
	byte b0000;	// 0
} Eq_59;

