// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_221/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn Eq_4 (Eq_3))
	T_2 (in cos : ptr32)
Eq_3: (union "Eq_3" (real16 u0) (real64 u1))
	T_3 (in rLoc2 : real64)
	T_9 (in cos(rLoc2) * (real64) ds->w0125 : word16)
Eq_4: (union "Eq_4" (real16 u0) (real64 u1))
	T_4 (in cos(rLoc2) : real64)
Eq_5: (segment "Eq_5" (125 word16 w0125) (202 Eq_12 t0202))
	T_5 (in ds : (ptr Eq_5))
Eq_8: (union "Eq_8" (real16 u0) (real64 u1))
	T_8 (in (real64) ds->w0125 : real64)
Eq_12: (struct "Eq_12" 0001 (0 int16 w0000))
	T_12 (in 0x0202 : word16)
Eq_19: (fn void (byte))
	T_19 (in bios_video_set_mode : ptr32)
	T_20 (in signature of bios_video_set_mode : void)
Eq_24: (fn void ())
	T_24 (in msdos_terminate_program : ptr32)
	T_25 (in signature of msdos_terminate_program : void)
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr Eq_1)
  OrigDataType: (ptr (struct "Globals"))
T_2: (in cos : ptr32)
  Class: Eq_2
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (fn T_4 (T_3)))
T_3: (in rLoc2 : real64)
  Class: Eq_3
  DataType: Eq_3
  OrigDataType: (union (real16 u0) (real64 u1))
T_4: (in cos(rLoc2) : real64)
  Class: Eq_4
  DataType: Eq_4
  OrigDataType: (union (real16 u0) (real64 u1))
T_5: (in ds : (ptr Eq_5))
  Class: Eq_5
  DataType: (ptr Eq_5)
  OrigDataType: (ptr (segment (125 T_7 t0125)))
T_6: (in 0x0125 : word16)
  Class: Eq_6
  DataType: (memptr (ptr Eq_5) word16)
  OrigDataType: (memptr T_5 (struct (0 T_7 t0000)))
T_7: (in Mem0[ds:0x0125:word16] : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_8: (in (real64) ds->w0125 : real64)
  Class: Eq_8
  DataType: Eq_8
  OrigDataType: (union (real16 u0) (real64 u1))
T_9: (in cos(rLoc2) * (real64) ds->w0125 : word16)
  Class: Eq_3
  DataType: Eq_3
  OrigDataType: real16
T_10: (in (int16) rLoc2 : int16)
  Class: Eq_10
  DataType: int16
  OrigDataType: int16
T_11: (in bx : int16)
  Class: Eq_11
  DataType: int16
  OrigDataType: int16
T_12: (in 0x0202 : word16)
  Class: Eq_12
  DataType: (memptr (ptr Eq_5) Eq_12)
  OrigDataType: (memptr T_5 (struct 0001 (0 T_14 t0000)))
T_13: (in bx + 0x0202 : word16)
  Class: Eq_13
  DataType: word16
  OrigDataType: word16
T_14: (in Mem14[ds:bx + 0x0202:int16] : int16)
  Class: Eq_10
  DataType: int16
  OrigDataType: int16
T_15: (in 0x0001 : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_16: (in bx + 0x0001 : word16)
  Class: Eq_11
  DataType: int16
  OrigDataType: word16
T_17: (in 0x0000 : word16)
  Class: Eq_11
  DataType: int16
  OrigDataType: int16
T_18: (in bx >= 0x0000 : bool)
  Class: Eq_18
  DataType: bool
  OrigDataType: bool
T_19: (in bios_video_set_mode : ptr32)
  Class: Eq_19
  DataType: (ptr Eq_19)
  OrigDataType: (ptr (fn T_23 (T_22)))
T_20: (in signature of bios_video_set_mode : void)
  Class: Eq_19
  DataType: (ptr Eq_19)
  OrigDataType: 
T_21: (in al : byte)
  Class: Eq_21
  DataType: byte
  OrigDataType: byte
T_22: (in 0x13 : byte)
  Class: Eq_21
  DataType: byte
  OrigDataType: byte
T_23: (in bios_video_set_mode(0x13) : void)
  Class: Eq_23
  DataType: void
  OrigDataType: void
T_24: (in msdos_terminate_program : ptr32)
  Class: Eq_24
  DataType: (ptr Eq_24)
  OrigDataType: (ptr (fn T_26 ()))
T_25: (in signature of msdos_terminate_program : void)
  Class: Eq_24
  DataType: (ptr Eq_24)
  OrigDataType: 
T_26: (in msdos_terminate_program() : void)
  Class: Eq_26
  DataType: void
  OrigDataType: void
*/
typedef struct Globals {
} Eq_1;

typedef Eq_4 (Eq_2)(Eq_3);

typedef union Eq_3 {
	real16 u0;
	real64 u1;
} Eq_3;

typedef union Eq_4 {
	real16 u0;
	real64 u1;
} Eq_4;

typedef Eq_12 Eq_5struct Eq_5 {
	word16 w0125;	// 125
	Eq_12 t0202;	// 202
} Eq_5;

typedef union Eq_8 {
	real16 u0;
	real64 u1;
} Eq_8;

typedef struct Eq_12 {	// size: 1 1
	int16 w0000;	// 0
} Eq_12;

typedef void (Eq_19)(byte);

typedef void (Eq_24)();

