// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_140/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_7: (union "Eq_7" (ptr32 u0) (segptr32 u1))
	T_7 (in es_cx_8 : ptr32)
	T_12 (in Mem0[ds:bx + 0x0000:segptr32] : segptr32)
Eq_8: (segment "Eq_8" (64 Eq_26 t0064) (157 real64 r0157) (15F real64 r015F))
	T_8 (in ds : (ptr Eq_8))
Eq_19: (segment "Eq_19" (0 (arr Eq_70) a0000))
	T_19 (in es_9 : (ptr Eq_19))
	T_20 (in SLICE(es_cx_8, selector, 16) : selector)
Eq_23: (fn real64 (real64))
	T_23 (in cos : ptr32)
Eq_26: (union "Eq_26" (real32 u0) (real64 u1))
	T_26 (in Mem0[ds:0x0064:real32] : real32)
	T_45 (in Mem0[ds:0x0064:real32] : real32)
	T_61 (in Mem56[ds:0x0064:real32] : real32)
	T_64 (in ds->t0064 + ds->r0157 : real64)
	T_66 (in Mem63[ds:0x0064:real32] : real32)
Eq_29: (fn real64 (real64))
	T_29 (in cos : ptr32)
Eq_42: (fn real64 (real64))
	T_42 (in sin : ptr32)
Eq_70: (struct "Eq_70" 0140 (0 byte b0000))
	T_70
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
T_7: (in es_cx_8 : ptr32)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: ptr32
T_8: (in ds : (ptr Eq_8))
  Class: Eq_8
  DataType: (ptr Eq_8)
  OrigDataType: (ptr (segment (64 T_26 t0064) (157 T_63 t0157) (15F T_32 t015F)))
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
T_13: (in al_16 : byte)
  Class: Eq_13
  DataType: byte
  OrigDataType: byte
T_14: (in 0x13 : byte)
  Class: Eq_13
  DataType: byte
  OrigDataType: byte
T_15: (in ax_15 : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_16: (in ax : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_17: (in 0x13 : byte)
  Class: Eq_17
  DataType: byte
  OrigDataType: byte
T_18: (in DPB(ax, 0x13, 0, 8) : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_19: (in es_9 : (ptr Eq_19))
  Class: Eq_19
  DataType: (ptr Eq_19)
  OrigDataType: (ptr (segment (0 (arr T_70) a0000)))
T_20: (in SLICE(es_cx_8, selector, 16) : selector)
  Class: Eq_19
  DataType: (ptr Eq_19)
  OrigDataType: (ptr (segment))
T_21: (in cx_10 : word16)
  Class: Eq_21
  DataType: word16
  OrigDataType: word16
T_22: (in (word16) es_cx_8 : word16)
  Class: Eq_21
  DataType: word16
  OrigDataType: word16
T_23: (in cos : ptr32)
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: (ptr (fn T_28 (T_27)))
T_24: (in (real64) cx_10 : real64)
  Class: Eq_24
  DataType: real64
  OrigDataType: real64
T_25: (in 0x0064 : word16)
  Class: Eq_25
  DataType: (memptr (ptr Eq_8) Eq_26)
  OrigDataType: (memptr T_8 (struct (0 T_26 t0000)))
T_26: (in Mem0[ds:0x0064:real32] : real32)
  Class: Eq_26
  DataType: Eq_26
  OrigDataType: (union (real32 u0) (real64 u1))
T_27: (in (real64) cx_10 + ds->t0064 : real64)
  Class: Eq_27
  DataType: real64
  OrigDataType: real64
T_28: (in cos((real64) cx_10 + ds->t0064) : real64)
  Class: Eq_28
  DataType: real64
  OrigDataType: real64
T_29: (in cos : ptr32)
  Class: Eq_29
  DataType: (ptr Eq_29)
  OrigDataType: (ptr (fn T_34 (T_33)))
T_30: (in (real64) cx_10 : real64)
  Class: Eq_30
  DataType: real64
  OrigDataType: real64
T_31: (in 0x015F : word16)
  Class: Eq_31
  DataType: (memptr (ptr Eq_8) real64)
  OrigDataType: (memptr T_8 (struct (0 T_32 t0000)))
T_32: (in Mem0[ds:0x015F:real64] : real64)
  Class: Eq_32
  DataType: real64
  OrigDataType: real64
T_33: (in (real64) cx_10 * ds->r015F : real64)
  Class: Eq_33
  DataType: real64
  OrigDataType: real64
T_34: (in cos((real64) cx_10 * ds->r015F) : real64)
  Class: Eq_34
  DataType: real64
  OrigDataType: real64
T_35: (in cos((real64) cx_10 + ds->t0064) * cos((real64) cx_10 * ds->r015F) : real64)
  Class: Eq_35
  DataType: real64
  OrigDataType: real64
T_36: (in 80 : real64)
  Class: Eq_36
  DataType: real64
  OrigDataType: real64
T_37: (in cos((real64) cx_10 + ds->t0064) * cos((real64) cx_10 * ds->r015F) * 80 : real64)
  Class: Eq_37
  DataType: real64
  OrigDataType: real64
T_38: (in (int16) (cos((real64) cx_10 + ds->t0064) * cos((real64) cx_10 * ds->r015F) * 80) : int16)
  Class: Eq_38
  DataType: int16
  OrigDataType: int16
T_39: (in 0x00AA : word16)
  Class: Eq_39
  DataType: word16
  OrigDataType: word16
T_40: (in (int16) (cos((real64) cx_10 + ds->t0064) * cos((real64) cx_10 * ds->r015F) * 80) + 0x00AA : word16)
  Class: Eq_40
  DataType: word16
  OrigDataType: word16
T_41: (in SEQ(es_9, (int16) (cos((real64) cx_10 + ds->t0064) * cos((real64) cx_10 * ds->r015F) * 80) + 0x00AA) : ptr32)
  Class: Eq_41
  DataType: ptr32
  OrigDataType: ptr32
T_42: (in sin : ptr32)
  Class: Eq_42
  DataType: (ptr Eq_42)
  OrigDataType: (ptr (fn T_47 (T_46)))
T_43: (in (real64) cx_10 : real64)
  Class: Eq_43
  DataType: real64
  OrigDataType: real64
T_44: (in 0x0064 : word16)
  Class: Eq_44
  DataType: (memptr (ptr Eq_8) Eq_26)
  OrigDataType: (memptr T_8 (struct (0 T_45 t0000)))
T_45: (in Mem0[ds:0x0064:real32] : real32)
  Class: Eq_26
  DataType: Eq_26
  OrigDataType: (union (real32 u0) (real64 u1))
T_46: (in (real64) cx_10 + ds->t0064 : real64)
  Class: Eq_46
  DataType: real64
  OrigDataType: real64
T_47: (in sin((real64) cx_10 + ds->t0064) : real64)
  Class: Eq_47
  DataType: real64
  OrigDataType: real64
T_48: (in 100 : real64)
  Class: Eq_48
  DataType: real64
  OrigDataType: real64
T_49: (in sin((real64) cx_10 + ds->t0064) * 100 : real64)
  Class: Eq_49
  DataType: real64
  OrigDataType: real64
T_50: (in (int16) (sin((real64) cx_10 + ds->t0064) * 100) : int16)
  Class: Eq_50
  DataType: int16
  OrigDataType: int16
T_51: (in 0x0064 : word16)
  Class: Eq_51
  DataType: word16
  OrigDataType: word16
T_52: (in (int16) (sin((real64) cx_10 + ds->t0064) * 100) + 0x0064 : word16)
  Class: Eq_52
  DataType: ui16
  OrigDataType: ui16
T_53: (in 0x0140 : word16)
  Class: Eq_53
  DataType: ui16
  OrigDataType: ui16
T_54: (in ((int16) (sin((real64) cx_10 + ds->t0064) * 100) + 0x0064) * 0x0140 : word16)
  Class: Eq_54
  DataType: ui16
  OrigDataType: ui16
T_55: (in SEQ(es_9, (int16) (cos((real64) cx_10 + ds->t0064) * cos((real64) cx_10 * ds->r015F) * 80) + 0x00AA)[((int16) (sin((real64) cx_10 + ds->t0064) * 100) + 0x0064) * 0x0140] : byte)
  Class: Eq_13
  DataType: byte
  OrigDataType: byte
T_56: (in 0x0001 : word16)
  Class: Eq_56
  DataType: word16
  OrigDataType: word16
T_57: (in cx_10 - 0x0001 : word16)
  Class: Eq_21
  DataType: word16
  OrigDataType: word16
T_58: (in 0x0000 : word16)
  Class: Eq_21
  DataType: word16
  OrigDataType: word16
T_59: (in cx_10 != 0x0000 : bool)
  Class: Eq_59
  DataType: bool
  OrigDataType: bool
T_60: (in 0x0064 : word16)
  Class: Eq_60
  DataType: (memptr (ptr Eq_8) Eq_26)
  OrigDataType: (memptr T_8 (struct (0 T_61 t0000)))
T_61: (in Mem56[ds:0x0064:real32] : real32)
  Class: Eq_26
  DataType: Eq_26
  OrigDataType: (union (real32 u0) (real64 u1))
T_62: (in 0x0157 : word16)
  Class: Eq_62
  DataType: (memptr (ptr Eq_8) real64)
  OrigDataType: (memptr T_8 (struct (0 T_63 t0000)))
T_63: (in Mem56[ds:0x0157:real64] : real64)
  Class: Eq_63
  DataType: real64
  OrigDataType: real64
T_64: (in ds->t0064 + ds->r0157 : real64)
  Class: Eq_26
  DataType: Eq_26
  OrigDataType: real64
T_65: (in 0x0064 : word16)
  Class: Eq_65
  DataType: (memptr (ptr Eq_8) Eq_26)
  OrigDataType: (memptr T_8 (struct (0 T_66 t0000)))
T_66: (in Mem63[ds:0x0064:real32] : real32)
  Class: Eq_26
  DataType: Eq_26
  OrigDataType: real32
T_67: (in 0x0001 : word16)
  Class: Eq_67
  DataType: word16
  OrigDataType: word16
T_68: (in ax_15 + 0x0001 : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_69: (in (byte) ax_15 : byte)
  Class: Eq_13
  DataType: byte
  OrigDataType: byte
T_70:
  Class: Eq_70
  DataType: Eq_70
  OrigDataType: (struct 0140 (0 T_55 t0000))
*/
typedef struct Globals {
} Eq_1;

typedef void (Eq_2)(byte);

typedef union Eq_7 {
	ptr32 u0;
	segptr32 u1;
} Eq_7;

typedef Eq_26 Eq_8struct Eq_8 {
	Eq_26 t0064;	// 64
	real64 r0157;	// 157
	real64 r015F;	// 15F
} Eq_8;

typedef Eq_70 Eq_19[]struct Eq_19 {
	Eq_70 a0000[];	// 0
} Eq_19;

typedef real64 (Eq_23)(real64);

typedef union Eq_26 {
	real32 u0;
	real64 u1;
} Eq_26;

typedef real64 (Eq_29)(real64);

typedef real64 (Eq_42)(real64);

typedef struct Eq_70 {	// size: 320 140
	byte b0000;	// 0
} Eq_70;

