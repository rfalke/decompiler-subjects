// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_093/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr (struct "Globals")))
Eq_8: (fn void (byte))
	T_8 (in bios_video_set_mode : ptr32)
	T_9 (in signature of bios_video_set_mode : void)
Eq_12: (union "Eq_12" (real16 u0) (real64 u1))
	T_12 (in rLoc2_21 : Eq_12)
	T_17 (in sin(rLoc2 * (real64) ax_4) : real64)
Eq_13: (fn Eq_12 (real16))
	T_13 (in sin : ptr32)
Eq_14: (union "Eq_14" (real16 u0) (real64 u1))
	T_14 (in rLoc2 : real64)
	T_47 (in 1 : real64)
Eq_15: (union "Eq_15" (real16 u0) (real64 u1))
	T_15 (in (real64) ax_4 : real64)
Eq_18: (fn real64 (real16))
	T_18 (in sin : ptr32)
Eq_19: (union "Eq_19" (real16 u0) (real64 u1))
	T_19 (in 240 : real64)
Eq_21: (union "Eq_21" (real16 u0) (real64 u1))
	T_21 (in 49 : real64)
Eq_24: (union "Eq_24" (real16 u0) (real64 u1))
	T_24 (in rLoc2_21 * 240 : word16)
Eq_25: (union "Eq_25" (real16 u0) (real64 u1))
	T_25 (in sin(rLoc2_21 * 240 * 49) * (rLoc2_21 * 240) : real64)
Eq_26: (union "Eq_26" (real16 u0) (real64 u1))
	T_26 (in 240 : real64)
Eq_29: (segment "Eq_29")
	T_29 (in ds : (ptr Eq_29))
Eq_34: (union "Eq_34" (real16 u0) (real64 u1))
	T_34 (in rLoc2_21 * 240 : word16)
Eq_35: (fn real64 (real16))
	T_35 (in cos : ptr32)
Eq_37: (union "Eq_37" (real16 u0) (real64 u1))
	T_37 (in 40 : real64)
Eq_40: (union "Eq_40" (real16 u0) (real64 u1))
	T_40 (in rLoc2_21 * 240 * cos((rLoc2_21 * 240) * 40) : real64)
Eq_41: (union "Eq_41" (real16 u0) (real64 u1))
	T_41 (in 240 : real64)
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr Eq_1)
  OrigDataType: (ptr (struct "Globals"))
T_2: (in al_18 : byte)
  Class: Eq_2
  DataType: byte
  OrigDataType: byte
T_3: (in 0x12 : byte)
  Class: Eq_2
  DataType: byte
  OrigDataType: byte
T_4: (in ax_4 : word16)
  Class: Eq_4
  DataType: word16
  OrigDataType: word16
T_5: (in ax : word16)
  Class: Eq_5
  DataType: word16
  OrigDataType: word16
T_6: (in 0x12 : byte)
  Class: Eq_6
  DataType: byte
  OrigDataType: byte
T_7: (in DPB(ax, 0x12, 0, 8) : word16)
  Class: Eq_4
  DataType: word16
  OrigDataType: word16
T_8: (in bios_video_set_mode : ptr32)
  Class: Eq_8
  DataType: (ptr Eq_8)
  OrigDataType: (ptr (fn T_11 (T_2)))
T_9: (in signature of bios_video_set_mode : void)
  Class: Eq_8
  DataType: (ptr Eq_8)
  OrigDataType: 
T_10: (in al : byte)
  Class: Eq_2
  DataType: byte
  OrigDataType: byte
T_11: (in bios_video_set_mode(al_18) : void)
  Class: Eq_11
  DataType: void
  OrigDataType: void
T_12: (in rLoc2_21 : Eq_12)
  Class: Eq_12
  DataType: Eq_12
  OrigDataType: (union (real16 u0) (real64 u1))
T_13: (in sin : ptr32)
  Class: Eq_13
  DataType: (ptr Eq_13)
  OrigDataType: (ptr (fn T_17 (T_16)))
T_14: (in rLoc2 : real64)
  Class: Eq_14
  DataType: Eq_14
  OrigDataType: (union (real16 u0) (real64 u1))
T_15: (in (real64) ax_4 : real64)
  Class: Eq_15
  DataType: Eq_15
  OrigDataType: (union (real16 u0) (real64 u1))
T_16: (in rLoc2 * (real64) ax_4 : word16)
  Class: Eq_16
  DataType: real16
  OrigDataType: real16
T_17: (in sin(rLoc2 * (real64) ax_4) : real64)
  Class: Eq_12
  DataType: Eq_12
  OrigDataType: real64
T_18: (in sin : ptr32)
  Class: Eq_18
  DataType: (ptr Eq_18)
  OrigDataType: (ptr (fn T_23 (T_22)))
T_19: (in 240 : real64)
  Class: Eq_19
  DataType: real16
  OrigDataType: (union (real16 u0) (real64 u1))
T_20: (in rLoc2_21 * 240 : word16)
  Class: Eq_20
  DataType: real16
  OrigDataType: real16
T_21: (in 49 : real64)
  Class: Eq_21
  DataType: real16
  OrigDataType: (union (real16 u0) (real64 u1))
T_22: (in rLoc2_21 * 240 * 49 : word16)
  Class: Eq_22
  DataType: real16
  OrigDataType: real16
T_23: (in sin(rLoc2_21 * 240 * 49) : real64)
  Class: Eq_23
  DataType: real64
  OrigDataType: real64
T_24: (in rLoc2_21 * 240 : word16)
  Class: Eq_24
  DataType: Eq_24
  OrigDataType: (union (real16 u0) (real64 u1))
T_25: (in sin(rLoc2_21 * 240 * 49) * (rLoc2_21 * 240) : real64)
  Class: Eq_25
  DataType: Eq_25
  OrigDataType: (union (real16 u0) (real64 u1))
T_26: (in 240 : real64)
  Class: Eq_26
  DataType: Eq_26
  OrigDataType: (union (real16 u0) (real64 u1))
T_27: (in sin(rLoc2_21 * 240 * 49) * (rLoc2_21 * 240) + 240 : word16)
  Class: Eq_27
  DataType: real16
  OrigDataType: real16
T_28: (in (int16) (sin(rLoc2_21 * 240 * 49) * (rLoc2_21 * 240) + 240) : int16)
  Class: Eq_28
  DataType: int16
  OrigDataType: int16
T_29: (in ds : (ptr Eq_29))
  Class: Eq_29
  DataType: (ptr Eq_29)
  OrigDataType: (ptr (segment))
T_30: (in di : (memptr (ptr Eq_29) int16))
  Class: Eq_30
  DataType: (memptr (ptr Eq_29) int16)
  OrigDataType: (memptr T_29 (struct (0 T_28 t0000)))
T_31: (in 0x0000 : word16)
  Class: Eq_31
  DataType: word16
  OrigDataType: word16
T_32: (in di + 0x0000 : word16)
  Class: Eq_32
  DataType: word16
  OrigDataType: word16
T_33: (in Mem28[ds:di + 0x0000:int16] : int16)
  Class: Eq_28
  DataType: int16
  OrigDataType: int16
T_34: (in rLoc2_21 * 240 : word16)
  Class: Eq_34
  DataType: Eq_34
  OrigDataType: (union (real16 u0) (real64 u1))
T_35: (in cos : ptr32)
  Class: Eq_35
  DataType: (ptr Eq_35)
  OrigDataType: (ptr (fn T_39 (T_38)))
T_36: (in rLoc2_21 * 240 : word16)
  Class: Eq_36
  DataType: real16
  OrigDataType: real16
T_37: (in 40 : real64)
  Class: Eq_37
  DataType: Eq_37
  OrigDataType: (union (real16 u0) (real64 u1))
T_38: (in rLoc2_21 * 240 * 40 : word16)
  Class: Eq_38
  DataType: real16
  OrigDataType: real16
T_39: (in cos(rLoc2_21 * 240 * 40) : real64)
  Class: Eq_39
  DataType: real64
  OrigDataType: real64
T_40: (in rLoc2_21 * 240 * cos((rLoc2_21 * 240) * 40) : real64)
  Class: Eq_40
  DataType: Eq_40
  OrigDataType: (union (real16 u0) (real64 u1))
T_41: (in 240 : real64)
  Class: Eq_41
  DataType: Eq_41
  OrigDataType: (union (real16 u0) (real64 u1))
T_42: (in rLoc2_21 * 240 * cos((rLoc2_21 * 240) * 40) + 240 : word16)
  Class: Eq_42
  DataType: real16
  OrigDataType: real16
T_43: (in (int16) (rLoc2_21 * 240 * cos((rLoc2_21 * 240) * 40) + 240) : int16)
  Class: Eq_28
  DataType: int16
  OrigDataType: int16
T_44: (in 0x0000 : word16)
  Class: Eq_44
  DataType: word16
  OrigDataType: word16
T_45: (in di + 0x0000 : word16)
  Class: Eq_45
  DataType: word16
  OrigDataType: word16
T_46: (in Mem37[ds:di + 0x0000:int16] : int16)
  Class: Eq_28
  DataType: int16
  OrigDataType: int16
T_47: (in 1 : real64)
  Class: Eq_14
  DataType: real64
  OrigDataType: real64
T_48: (in 0x01 : byte)
  Class: Eq_2
  DataType: byte
  OrigDataType: byte
*/
typedef struct Globals {
} Eq_1;

typedef void (Eq_8)(byte);

typedef union Eq_12 {
	real16 u0;
	real64 u1;
} Eq_12;

typedef Eq_12 (Eq_13)(real16);

typedef union Eq_14 {
	real16 u0;
	real64 u1;
} Eq_14;

typedef union Eq_15 {
	real16 u0;
	real64 u1;
} Eq_15;

typedef real64 (Eq_18)(real16);

typedef union Eq_19 {
	real16 u0;
	real64 u1;
} Eq_19;

typedef union Eq_21 {
	real16 u0;
	real64 u1;
} Eq_21;

typedef union Eq_24 {
	real16 u0;
	real64 u1;
} Eq_24;

typedef union Eq_25 {
	real16 u0;
	real64 u1;
} Eq_25;

typedef union Eq_26 {
	real16 u0;
	real64 u1;
} Eq_26;

typedef struct Eq_29 {
} Eq_29;

typedef union Eq_34 {
	real16 u0;
	real64 u1;
} Eq_34;

typedef real64 (Eq_35)(real16);

typedef union Eq_37 {
	real16 u0;
	real64 u1;
} Eq_37;

typedef union Eq_40 {
	real16 u0;
	real64 u1;
} Eq_40;

typedef union Eq_41 {
	real16 u0;
	real64 u1;
} Eq_41;

