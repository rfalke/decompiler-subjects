// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_129/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_13: (segment "Eq_13" (0 (arr Eq_75) a0000))
	T_13 (in es_9 : (ptr Eq_13))
	T_19 (in SLICE(ds->*bx, selector, 16) : selector)
Eq_14: (segment "Eq_14" (137 int16 w0137) (139 int16 w0139))
	T_14 (in ds : (ptr Eq_14))
Eq_36: (fn real64 (real64))
	T_36 (in cos : ptr32)
Eq_39: (fn real64 (real64))
	T_39 (in sin : ptr32)
Eq_42: (fn real64 (real64))
	T_42 (in cos : ptr32)
Eq_75: (struct "Eq_75" 0140 (0 byte b0000))
	T_75
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
T_7: (in al_15 : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_8: (in 0x13 : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_9: (in ax_14 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_10: (in ax : word16)
  Class: Eq_10
  DataType: word16
  OrigDataType: word16
T_11: (in 0x13 : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_12: (in DPB(ax, 0x13, 0, 8) : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_13: (in es_9 : (ptr Eq_13))
  Class: Eq_13
  DataType: (ptr Eq_13)
  OrigDataType: (ptr (segment (0 (arr T_75) a0000)))
T_14: (in ds : (ptr Eq_14))
  Class: Eq_14
  DataType: (ptr Eq_14)
  OrigDataType: (ptr (segment (137 T_29 t0137) (139 T_22 t0139)))
T_15: (in bx : (memptr (ptr Eq_14) segptr32))
  Class: Eq_15
  DataType: (memptr (ptr Eq_14) segptr32)
  OrigDataType: (memptr T_14 (struct (0 T_18 t0000)))
T_16: (in 0x0000 : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_17: (in bx + 0x0000 : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_18: (in Mem0[ds:bx + 0x0000:segptr32] : segptr32)
  Class: Eq_18
  DataType: segptr32
  OrigDataType: segptr32
T_19: (in SLICE(ds->*bx, selector, 16) : selector)
  Class: Eq_13
  DataType: (ptr Eq_13)
  OrigDataType: (ptr (segment))
T_20: (in rLoc1_24 : real64)
  Class: Eq_20
  DataType: real64
  OrigDataType: real64
T_21: (in 0x0139 : word16)
  Class: Eq_21
  DataType: (memptr (ptr Eq_14) int16)
  OrigDataType: (memptr T_14 (struct (0 T_22 t0000)))
T_22: (in Mem0[ds:0x0139:int16] : int16)
  Class: Eq_22
  DataType: int16
  OrigDataType: int16
T_23: (in (real64) ds->w0139 : real64)
  Class: Eq_20
  DataType: real64
  OrigDataType: real64
T_24: (in rLoc3_26 : real64)
  Class: Eq_24
  DataType: real64
  OrigDataType: real64
T_25: (in cx : word16)
  Class: Eq_25
  DataType: word16
  OrigDataType: word16
T_26: (in (real64) cx : real64)
  Class: Eq_24
  DataType: real64
  OrigDataType: real64
T_27: (in rLoc2_25 : real64)
  Class: Eq_27
  DataType: real64
  OrigDataType: real64
T_28: (in 0x0137 : word16)
  Class: Eq_28
  DataType: (memptr (ptr Eq_14) int16)
  OrigDataType: (memptr T_14 (struct (0 T_29 t0000)))
T_29: (in Mem0[ds:0x0137:int16] : int16)
  Class: Eq_29
  DataType: int16
  OrigDataType: int16
T_30: (in (real64) ds->w0137 : real64)
  Class: Eq_27
  DataType: real64
  OrigDataType: real64
T_31: (in rLoc4_29 : real64)
  Class: Eq_31
  DataType: real64
  OrigDataType: real64
T_32: (in (real64) ax_14 : real64)
  Class: Eq_32
  DataType: real64
  OrigDataType: real64
T_33: (in (real64) ax_14 / rLoc1_24 : real64)
  Class: Eq_33
  DataType: real64
  OrigDataType: real64
T_34: (in (real64) ax_14 / rLoc1_24 + rLoc3_26 : real64)
  Class: Eq_31
  DataType: real64
  OrigDataType: real64
T_35: (in rLoc4_31 : real64)
  Class: Eq_35
  DataType: real64
  OrigDataType: real64
T_36: (in cos : ptr32)
  Class: Eq_36
  DataType: (ptr Eq_36)
  OrigDataType: (ptr (fn T_37 (T_31)))
T_37: (in cos(rLoc4_29) : real64)
  Class: Eq_35
  DataType: real64
  OrigDataType: real64
T_38: (in rLoc5_32 : real64)
  Class: Eq_38
  DataType: real64
  OrigDataType: real64
T_39: (in sin : ptr32)
  Class: Eq_39
  DataType: (ptr Eq_39)
  OrigDataType: (ptr (fn T_40 (T_31)))
T_40: (in sin(rLoc4_29) : real64)
  Class: Eq_38
  DataType: real64
  OrigDataType: real64
T_41: (in wLoc04_46 : int16)
  Class: Eq_41
  DataType: int16
  OrigDataType: word16
T_42: (in cos : ptr32)
  Class: Eq_42
  DataType: (ptr Eq_42)
  OrigDataType: (ptr (fn T_45 (T_44)))
T_43: (in rLoc3_26 * rLoc2_25 : real64)
  Class: Eq_43
  DataType: real64
  OrigDataType: real64
T_44: (in rLoc3_26 * rLoc2_25 / rLoc1_24 : real64)
  Class: Eq_44
  DataType: real64
  OrigDataType: real64
T_45: (in cos(rLoc3_26 * rLoc2_25 / rLoc1_24) : real64)
  Class: Eq_45
  DataType: real64
  OrigDataType: real64
T_46: (in rLoc4_31 * cos((rLoc3_26 * rLoc2_25) / rLoc1_24) : real64)
  Class: Eq_46
  DataType: real64
  OrigDataType: real64
T_47: (in rLoc4_31 * cos((rLoc3_26 * rLoc2_25) / rLoc1_24) * rLoc2_25 : real64)
  Class: Eq_47
  DataType: real64
  OrigDataType: real64
T_48: (in rLoc2_25 + (rLoc4_31 * cos((rLoc3_26 * rLoc2_25) / rLoc1_24)) * rLoc2_25 : real64)
  Class: Eq_48
  DataType: real64
  OrigDataType: real64
T_49: (in rLoc1_24 + (rLoc2_25 + (rLoc4_31 * cos((rLoc3_26 * rLoc2_25) / rLoc1_24)) * rLoc2_25) : real64)
  Class: Eq_49
  DataType: real64
  OrigDataType: real64
T_50: (in (int16) (rLoc1_24 + (rLoc2_25 + (rLoc4_31 * cos((rLoc3_26 * rLoc2_25) / rLoc1_24)) * rLoc2_25)) : int16)
  Class: Eq_41
  DataType: int16
  OrigDataType: int16
T_51: (in si : (memptr (ptr Eq_14) byte))
  Class: Eq_51
  DataType: (memptr (ptr Eq_14) byte)
  OrigDataType: (memptr T_14 (struct (0 T_54 t0000)))
T_52: (in 0x0000 : word16)
  Class: Eq_52
  DataType: word16
  OrigDataType: word16
T_53: (in si + 0x0000 : word16)
  Class: Eq_53
  DataType: word16
  OrigDataType: word16
T_54: (in Mem0[ds:si + 0x0000:byte] : byte)
  Class: Eq_54
  DataType: byte
  OrigDataType: byte
T_55: (in ah : byte)
  Class: Eq_55
  DataType: byte
  OrigDataType: byte
T_56: (in ds->*si + ah : byte)
  Class: Eq_54
  DataType: byte
  OrigDataType: byte
T_57: (in 0x0000 : word16)
  Class: Eq_57
  DataType: word16
  OrigDataType: word16
T_58: (in si + 0x0000 : word16)
  Class: Eq_58
  DataType: word16
  OrigDataType: word16
T_59: (in Mem53[ds:si + 0x0000:byte] : byte)
  Class: Eq_54
  DataType: byte
  OrigDataType: byte
T_60: (in SEQ(es_9, wLoc04_46) : ptr32)
  Class: Eq_60
  DataType: ptr32
  OrigDataType: ptr32
T_61: (in rLoc5_32 * rLoc1_24 : real64)
  Class: Eq_61
  DataType: real64
  OrigDataType: real64
T_62: (in rLoc5_32 * rLoc1_24 + rLoc1_24 : real64)
  Class: Eq_62
  DataType: real64
  OrigDataType: real64
T_63: (in (int16) (rLoc5_32 * rLoc1_24 + rLoc1_24) : int16)
  Class: Eq_63
  DataType: int16
  OrigDataType: int16
T_64: (in 0x0140 : word16)
  Class: Eq_64
  DataType: ui16
  OrigDataType: ui16
T_65: (in (int16) (rLoc5_32 * rLoc1_24 + rLoc1_24) * 0x0140 : int16)
  Class: Eq_65
  DataType: int16
  OrigDataType: int16
T_66: (in SEQ(es_9, wLoc04_46)[(int16) (rLoc5_32 * rLoc1_24 + rLoc1_24) * 0x0140] : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_67: (in 0x0001 : word16)
  Class: Eq_67
  DataType: word16
  OrigDataType: word16
T_68: (in cx - 0x0001 : word16)
  Class: Eq_25
  DataType: word16
  OrigDataType: word16
T_69: (in 0x0000 : word16)
  Class: Eq_25
  DataType: word16
  OrigDataType: word16
T_70: (in cx != 0x0000 : bool)
  Class: Eq_70
  DataType: bool
  OrigDataType: bool
T_71: (in 0x0001 : word16)
  Class: Eq_71
  DataType: word16
  OrigDataType: word16
T_72: (in ax_14 + 0x0001 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_73: (in (byte) ax_14 : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_74: (in SLICE(ax_14, byte, 8) : byte)
  Class: Eq_55
  DataType: byte
  OrigDataType: byte
T_75:
  Class: Eq_75
  DataType: Eq_75
  OrigDataType: (struct 0140 (0 T_66 t0000))
*/
typedef struct Globals {
} Eq_1;

typedef void (Eq_2)(byte);

typedef Eq_75 Eq_13[]struct Eq_13 {
	Eq_75 a0000[];	// 0
} Eq_13;

typedef struct Eq_14 {
	int16 w0137;	// 137
	int16 w0139;	// 139
} Eq_14;

typedef real64 (Eq_36)(real64);

typedef real64 (Eq_39)(real64);

typedef real64 (Eq_42)(real64);

typedef struct Eq_75 {	// size: 320 140
	byte b0000;	// 0
} Eq_75;

