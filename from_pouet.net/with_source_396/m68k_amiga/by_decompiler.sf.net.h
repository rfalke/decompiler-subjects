// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_396/m68k_amiga/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (4 word32 dw0004))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_7: (struct "Eq_7" (FFFFFF6F byte bFFFFFF6F) (0 word16 w0000) (4 word16 w0004) (6 word16 w0006) (AA int32 dw00AA) (EA int32 dw00EA) (146 word16 w0146))
	T_7 (in a5_33 : (ptr Eq_7))
	T_8 (in 00DFF096 : ptr32)
Eq_9: (fn bool (byte, word16))
	T_9 (in __btst : ptr32)
Eq_15: (fn bool (byte, word16))
	T_15 (in __btst : ptr32)
Eq_49: (struct "Eq_49" 0001 (0 byte b0000) (1 Eq_49 t0001))
	T_49 (in a0_52 : (ptr Eq_49))
	T_50 (in 0000106E : ptr32)
	T_62 (in a0_52 + 0x00000001 : word32)
Eq_53: (struct "Eq_53" 0001 (0 byte b0000) (1 Eq_53 t0001))
	T_53 (in a1_54 : (ptr Eq_53))
	T_54 (in 000004B2 : ptr32)
	T_64 (in a1_54 + 0x00000001 : word32)
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr Eq_1)
  OrigDataType: (ptr (struct "Globals"))
T_2: (in a6_3 : word32)
  Class: Eq_2
  DataType: word32
  OrigDataType: word32
T_3: (in 00000004 : ptr32)
  Class: Eq_3
  DataType: (ptr word32)
  OrigDataType: (ptr (struct (0 T_4 t0000)))
T_4: (in Mem0[0x00000004:word32] : word32)
  Class: Eq_2
  DataType: word32
  OrigDataType: word32
T_5: (in -150 : int32)
  Class: Eq_5
  DataType: int32
  OrigDataType: int32
T_6: (in a6_3 + -150 : word32)
  Class: Eq_6
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_7: (in a5_33 : (ptr Eq_7))
  Class: Eq_7
  DataType: (ptr Eq_7)
  OrigDataType: (ptr (struct (FFFFFF6F T_12 tFFFFFF6F) (0 T_28 t0000) (4 T_32 t0004) (6 T_36 t0006) (AA T_40 t00AA) (EA T_44 t00EA) (146 T_48 t0146)))
T_8: (in 00DFF096 : ptr32)
  Class: Eq_7
  DataType: (ptr Eq_7)
  OrigDataType: ptr32
T_9: (in __btst : ptr32)
  Class: Eq_9
  DataType: (ptr Eq_9)
  OrigDataType: (ptr (fn T_14 (T_12, T_13)))
T_10: (in -145 : int32)
  Class: Eq_10
  DataType: int32
  OrigDataType: int32
T_11: (in a5_33 + -145 : word32)
  Class: Eq_11
  DataType: word32
  OrigDataType: word32
T_12: (in Mem0[a5_33 + -145:byte] : byte)
  Class: Eq_12
  DataType: byte
  OrigDataType: byte
T_13: (in 0x0000 : word16)
  Class: Eq_13
  DataType: word16
  OrigDataType: word16
T_14: (in __btst(a5_33->bFFFFFF6F, 0x0000) : bool)
  Class: Eq_14
  DataType: bool
  OrigDataType: bool
T_15: (in __btst : ptr32)
  Class: Eq_15
  DataType: (ptr Eq_15)
  OrigDataType: (ptr (fn T_20 (T_18, T_19)))
T_16: (in -145 : int32)
  Class: Eq_16
  DataType: int32
  OrigDataType: int32
T_17: (in a5_33 + -145 : word32)
  Class: Eq_17
  DataType: word32
  OrigDataType: word32
T_18: (in Mem0[a5_33 + -145:byte] : byte)
  Class: Eq_12
  DataType: byte
  OrigDataType: byte
T_19: (in 0x0000 : word16)
  Class: Eq_19
  DataType: word16
  OrigDataType: word16
T_20: (in __btst(a5_33->bFFFFFF6F, 0x0000) : bool)
  Class: Eq_20
  DataType: bool
  OrigDataType: bool
T_21: (in d4_36 : word32)
  Class: Eq_21
  DataType: word32
  OrigDataType: word32
T_22: (in d4 : word32)
  Class: Eq_22
  DataType: word32
  OrigDataType: word32
T_23: (in 0x7FFF : word16)
  Class: Eq_23
  DataType: word16
  OrigDataType: word16
T_24: (in DPB(d4, 0x7FFF, 0, 16) : word32)
  Class: Eq_21
  DataType: word32
  OrigDataType: word32
T_25: (in (word16) d4_36 : word16)
  Class: Eq_25
  DataType: word16
  OrigDataType: word16
T_26: (in 0x00000000 : word32)
  Class: Eq_26
  DataType: word32
  OrigDataType: word32
T_27: (in a5_33 + 0x00000000 : word32)
  Class: Eq_27
  DataType: word32
  OrigDataType: word32
T_28: (in Mem38[a5_33 + 0x00000000:word16] : word16)
  Class: Eq_25
  DataType: word16
  OrigDataType: word16
T_29: (in (word16) d4_36 : word16)
  Class: Eq_29
  DataType: word16
  OrigDataType: word16
T_30: (in 4 : int32)
  Class: Eq_30
  DataType: int32
  OrigDataType: int32
T_31: (in a5_33 + 4 : word32)
  Class: Eq_31
  DataType: word32
  OrigDataType: word32
T_32: (in Mem40[a5_33 + 4:word16] : word16)
  Class: Eq_29
  DataType: word16
  OrigDataType: word16
T_33: (in (word16) d4_36 : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_34: (in 6 : int32)
  Class: Eq_34
  DataType: int32
  OrigDataType: int32
T_35: (in a5_33 + 6 : word32)
  Class: Eq_35
  DataType: word32
  OrigDataType: word32
T_36: (in Mem42[a5_33 + 6:word16] : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_37: (in 0 : int32)
  Class: Eq_37
  DataType: int32
  OrigDataType: int32
T_38: (in 170 : int32)
  Class: Eq_38
  DataType: int32
  OrigDataType: int32
T_39: (in a5_33 + 170 : word32)
  Class: Eq_39
  DataType: word32
  OrigDataType: word32
T_40: (in Mem45[a5_33 + 170:word32] : word32)
  Class: Eq_37
  DataType: int32
  OrigDataType: word32
T_41: (in 0 : int32)
  Class: Eq_41
  DataType: int32
  OrigDataType: int32
T_42: (in 234 : int32)
  Class: Eq_42
  DataType: int32
  OrigDataType: int32
T_43: (in a5_33 + 234 : word32)
  Class: Eq_43
  DataType: word32
  OrigDataType: word32
T_44: (in Mem47[a5_33 + 234:word32] : word32)
  Class: Eq_41
  DataType: int32
  OrigDataType: word32
T_45: (in 0x0020 : word16)
  Class: Eq_45
  DataType: word16
  OrigDataType: word16
T_46: (in 326 : int32)
  Class: Eq_46
  DataType: int32
  OrigDataType: int32
T_47: (in a5_33 + 326 : word32)
  Class: Eq_47
  DataType: word32
  OrigDataType: word32
T_48: (in Mem49[a5_33 + 326:word16] : word16)
  Class: Eq_45
  DataType: word16
  OrigDataType: word16
T_49: (in a0_52 : (ptr Eq_49))
  Class: Eq_49
  DataType: (ptr Eq_49)
  OrigDataType: (ptr (struct 0001 (0 T_57 t0000)))
T_50: (in 0000106E : ptr32)
  Class: Eq_49
  DataType: (ptr Eq_49)
  OrigDataType: ptr32
T_51: (in a2_53 : ptr32)
  Class: Eq_51
  DataType: ptr32
  OrigDataType: word32
T_52: (in 000106A4 : ptr32)
  Class: Eq_51
  DataType: ptr32
  OrigDataType: ptr32
T_53: (in a1_54 : (ptr Eq_53))
  Class: Eq_53
  DataType: (ptr Eq_53)
  OrigDataType: (ptr (struct 0001 (0 T_60 t0000)))
T_54: (in 000004B2 : ptr32)
  Class: Eq_53
  DataType: (ptr Eq_53)
  OrigDataType: ptr32
T_55: (in 0x00000000 : word32)
  Class: Eq_55
  DataType: word32
  OrigDataType: word32
T_56: (in a0_52 + 0x00000000 : word32)
  Class: Eq_56
  DataType: word32
  OrigDataType: word32
T_57: (in Mem49[a0_52 + 0x00000000:byte] : byte)
  Class: Eq_57
  DataType: byte
  OrigDataType: byte
T_58: (in 0x00000000 : word32)
  Class: Eq_58
  DataType: word32
  OrigDataType: word32
T_59: (in a1_54 + 0x00000000 : word32)
  Class: Eq_59
  DataType: word32
  OrigDataType: word32
T_60: (in Mem61[a1_54 + 0x00000000:byte] : byte)
  Class: Eq_57
  DataType: byte
  OrigDataType: byte
T_61: (in 0x00000001 : word32)
  Class: Eq_61
  DataType: word32
  OrigDataType: word32
T_62: (in a0_52 + 0x00000001 : word32)
  Class: Eq_49
  DataType: (ptr Eq_49)
  OrigDataType: word32
T_63: (in 0x00000001 : word32)
  Class: Eq_63
  DataType: word32
  OrigDataType: word32
T_64: (in a1_54 + 0x00000001 : word32)
  Class: Eq_53
  DataType: (ptr Eq_53)
  OrigDataType: word32
T_65: (in a0_52 - a2_53 : word32)
  Class: Eq_65
  DataType: up32
  OrigDataType: up32
T_66: (in 0x00000000 : word32)
  Class: Eq_65
  DataType: up32
  OrigDataType: up32
T_67: (in a0_52 - a2_53 <u 0x00000000 : bool)
  Class: Eq_67
  DataType: bool
  OrigDataType: bool
*/
typedef struct Globals {
	word32 dw0004;	// 4
} Eq_1;

typedef struct Eq_7 {
	byte bFFFFFF6F;	// FFFFFF6F
	word16 w0000;	// 0
	word16 w0004;	// 4
	word16 w0006;	// 6
	int32 dw00AA;	// AA
	int32 dw00EA;	// EA
	word16 w0146;	// 146
} Eq_7;

typedef bool (Eq_9)(byte, word16);

typedef bool (Eq_15)(byte, word16);

typedef Eq_49 Eq_49struct Eq_49 {	// size: 1 1
	byte b0000;	// 0
	Eq_49 t0001;	// 1
} Eq_49;

typedef Eq_53 Eq_53struct Eq_53 {	// size: 1 1
	byte b0000;	// 0
	Eq_53 t0001;	// 1
} Eq_53;

