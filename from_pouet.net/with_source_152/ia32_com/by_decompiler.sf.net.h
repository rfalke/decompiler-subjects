// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_152/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_10: (fn real64 (real16))
	T_10 (in sin : ptr32)
Eq_11: (union "Eq_11" (real16 u0) (real64 u1))
	T_11 (in (real64) cx_14 : real64)
Eq_12: (segment "Eq_12" (174 Eq_14 t0174) (178 word16 w0178))
	T_12 (in ds : (ptr Eq_12))
Eq_14: (union "Eq_14" (real16 u0) (real32 u1))
	T_14 (in Mem0[ds:0x0174:real32] : real32)
Eq_17: (fn void (word16, byte))
	T_17 (in __outb : ptr32)
Eq_19: (union "Eq_19" (real16 u0) (real64 u1))
	T_19 (in rLoc1_19 * rLoc1_19 : real64)
Eq_22: (union "Eq_22" (real16 u0) (real64 u1))
	T_22 (in (real64) ds->w0178 : real64)
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
T_7: (in cx_14 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_8: (in 0x0300 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_9: (in rLoc1_19 : real64)
  Class: Eq_9
  DataType: real64
  OrigDataType: real64
T_10: (in sin : ptr32)
  Class: Eq_10
  DataType: (ptr Eq_10)
  OrigDataType: (ptr (fn T_16 (T_15)))
T_11: (in (real64) cx_14 : real64)
  Class: Eq_11
  DataType: Eq_11
  OrigDataType: (union (real16 u0) (real64 u1))
T_12: (in ds : (ptr Eq_12))
  Class: Eq_12
  DataType: (ptr Eq_12)
  OrigDataType: (ptr (segment (174 T_14 t0174) (178 T_21 t0178)))
T_13: (in 0x0174 : word16)
  Class: Eq_13
  DataType: (memptr (ptr Eq_12) Eq_14)
  OrigDataType: (memptr T_12 (struct (0 T_14 t0000)))
T_14: (in Mem0[ds:0x0174:real32] : real32)
  Class: Eq_14
  DataType: Eq_14
  OrigDataType: (union (real16 u0) (real32 u1))
T_15: (in (real64) cx_14 * ds->t0174 : word16)
  Class: Eq_15
  DataType: real16
  OrigDataType: real16
T_16: (in sin((real64) cx_14 * ds->t0174) : real64)
  Class: Eq_9
  DataType: real64
  OrigDataType: real64
T_17: (in __outb : ptr32)
  Class: Eq_17
  DataType: (ptr Eq_17)
  OrigDataType: (ptr (fn T_26 (T_18, T_25)))
T_18: (in 0x03C9 : word16)
  Class: Eq_18
  DataType: word16
  OrigDataType: word16
T_19: (in rLoc1_19 * rLoc1_19 : real64)
  Class: Eq_19
  DataType: Eq_19
  OrigDataType: (union (real16 u0) (real64 u1))
T_20: (in 0x0178 : word16)
  Class: Eq_20
  DataType: (memptr (ptr Eq_12) word16)
  OrigDataType: (memptr T_12 (struct (0 T_21 t0000)))
T_21: (in Mem0[ds:0x0178:word16] : word16)
  Class: Eq_21
  DataType: word16
  OrigDataType: word16
T_22: (in (real64) ds->w0178 : real64)
  Class: Eq_22
  DataType: Eq_22
  OrigDataType: (union (real16 u0) (real64 u1))
T_23: (in rLoc1_19 * rLoc1_19 * (real64) ds->w0178 : word16)
  Class: Eq_23
  DataType: real16
  OrigDataType: real16
T_24: (in (int16) (rLoc1_19 * rLoc1_19 * (real64) ds->w0178) : int16)
  Class: Eq_24
  DataType: int16
  OrigDataType: int16
T_25: (in (byte) (int16) (rLoc1_19 * rLoc1_19 * (real64) ds->w0178) : byte)
  Class: Eq_25
  DataType: byte
  OrigDataType: byte
T_26: (in __outb(0x03C9, (byte) (int16) (rLoc1_19 * rLoc1_19 * (real64) ds->w0178)) : void)
  Class: Eq_26
  DataType: void
  OrigDataType: void
T_27: (in 0x0001 : word16)
  Class: Eq_27
  DataType: word16
  OrigDataType: word16
T_28: (in cx_14 - 0x0001 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_29: (in 0x0000 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_30: (in cx_14 != 0x0000 : bool)
  Class: Eq_30
  DataType: bool
  OrigDataType: bool
*/
typedef struct Globals {
} Eq_1;

typedef void (Eq_2)(byte);

typedef real64 (Eq_10)(real16);

typedef union Eq_11 {
	real16 u0;
	real64 u1;
} Eq_11;

typedef Eq_14 Eq_12struct Eq_12 {
	Eq_14 t0174;	// 174
	word16 w0178;	// 178
} Eq_12;

typedef union Eq_14 {
	real16 u0;
	real32 u1;
} Eq_14;

typedef void (Eq_17)(word16, byte);

typedef union Eq_19 {
	real16 u0;
	real64 u1;
} Eq_19;

typedef union Eq_22 {
	real16 u0;
	real64 u1;
} Eq_22;

