// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_070/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_13: (segment "Eq_13")
	T_13 (in ds : (ptr Eq_13))
Eq_28: (union "Eq_28" (real16 u0) (real64 u1))
	T_28 (in rLoc1_21 : Eq_28)
	T_32 (in (real64) (ds->*si_11) : real64)
Eq_36: (fn real64 (real16))
	T_36 (in sin : ptr32)
Eq_40: (union "Eq_40" (real16 u0) (real64 u1))
	T_40 (in (real64) (ds->*si_11) : real64)
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
T_7: (in si_11 : (memptr (ptr Eq_13) int16))
  Class: Eq_7
  DataType: (memptr (ptr Eq_13) int16)
  OrigDataType: (memptr T_13 (struct (0 T_12 t0000)))
T_8: (in si : word16)
  Class: Eq_8
  DataType: word16
  OrigDataType: word16
T_9: (in ~si : word16)
  Class: Eq_7
  DataType: (memptr (ptr Eq_13) int16)
  OrigDataType: word16
T_10: (in cx : word16)
  Class: Eq_10
  DataType: word16
  OrigDataType: word16
T_11: (in 0xCC : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_12: (in DPB(cx, 0xCC, 0, 8) : word16)
  Class: Eq_12
  DataType: int16
  OrigDataType: word16
T_13: (in ds : (ptr Eq_13))
  Class: Eq_13
  DataType: (ptr Eq_13)
  OrigDataType: (ptr (segment))
T_14: (in 0x0000 : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_15: (in si_11 + 0x0000 : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_16: (in Mem17[ds:si_11 + 0x0000:word16] : word16)
  Class: Eq_12
  DataType: int16
  OrigDataType: word16
T_17: (in ax_8 : int16)
  Class: Eq_12
  DataType: int16
  OrigDataType: word16
T_18: (in ax : word16)
  Class: Eq_18
  DataType: word16
  OrigDataType: word16
T_19: (in 0x13 : byte)
  Class: Eq_19
  DataType: byte
  OrigDataType: byte
T_20: (in DPB(ax, 0x13, 0, 8) : word16)
  Class: Eq_12
  DataType: int16
  OrigDataType: word16
T_21: (in 0x0000 : word16)
  Class: Eq_21
  DataType: word16
  OrigDataType: word16
T_22: (in si_11 + 0x0000 : word16)
  Class: Eq_22
  DataType: word16
  OrigDataType: word16
T_23: (in Mem17[ds:si_11 + 0x0000:word16] : word16)
  Class: Eq_12
  DataType: int16
  OrigDataType: word16
T_24: (in ds->*si_11 + ax_8 : word16)
  Class: Eq_12
  DataType: int16
  OrigDataType: word16
T_25: (in 0x0000 : word16)
  Class: Eq_25
  DataType: word16
  OrigDataType: word16
T_26: (in si_11 + 0x0000 : word16)
  Class: Eq_26
  DataType: word16
  OrigDataType: word16
T_27: (in Mem19[ds:si_11 + 0x0000:word16] : word16)
  Class: Eq_12
  DataType: int16
  OrigDataType: word16
T_28: (in rLoc1_21 : Eq_28)
  Class: Eq_28
  DataType: Eq_28
  OrigDataType: (union (real16 u0) (real64 u1))
T_29: (in 0x0000 : word16)
  Class: Eq_29
  DataType: word16
  OrigDataType: word16
T_30: (in si_11 + 0x0000 : word16)
  Class: Eq_30
  DataType: word16
  OrigDataType: word16
T_31: (in Mem19[ds:si_11 + 0x0000:int16] : int16)
  Class: Eq_12
  DataType: int16
  OrigDataType: int16
T_32: (in (real64) (ds->*si_11) : real64)
  Class: Eq_28
  DataType: Eq_28
  OrigDataType: real64
T_33: (in 0x0000 : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_34: (in si_11 + 0x0000 : word16)
  Class: Eq_34
  DataType: word16
  OrigDataType: word16
T_35: (in Mem22[ds:si_11 + 0x0000:word16] : word16)
  Class: Eq_12
  DataType: int16
  OrigDataType: word16
T_36: (in sin : ptr32)
  Class: Eq_36
  DataType: (ptr Eq_36)
  OrigDataType: (ptr (fn T_42 (T_41)))
T_37: (in 0x0000 : word16)
  Class: Eq_37
  DataType: word16
  OrigDataType: word16
T_38: (in si_11 + 0x0000 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_39: (in Mem22[ds:si_11 + 0x0000:word16] : word16)
  Class: Eq_12
  DataType: int16
  OrigDataType: word16
T_40: (in (real64) (ds->*si_11) : real64)
  Class: Eq_40
  DataType: Eq_40
  OrigDataType: (union (real16 u0) (real64 u1))
T_41: (in rLoc1_21 / (real64) (ds->*si_11) : word16)
  Class: Eq_41
  DataType: real16
  OrigDataType: real16
T_42: (in sin(rLoc1_21 / (real64) (ds->*si_11)) : real64)
  Class: Eq_42
  DataType: real64
  OrigDataType: real64
T_43: (in 0x0140 : word16)
  Class: Eq_12
  DataType: int16
  OrigDataType: word16
T_44: (in 0x0000 : word16)
  Class: Eq_44
  DataType: word16
  OrigDataType: word16
T_45: (in si_11 + 0x0000 : word16)
  Class: Eq_45
  DataType: word16
  OrigDataType: word16
T_46: (in Mem26[ds:si_11 + 0x0000:word16] : word16)
  Class: Eq_12
  DataType: int16
  OrigDataType: word16
*/
typedef struct Globals {
} Eq_1;

typedef void (Eq_2)(byte);

typedef struct Eq_13 {
} Eq_13;

typedef union Eq_28 {
	real16 u0;
	real64 u1;
} Eq_28;

typedef real64 (Eq_36)(real16);

typedef union Eq_40 {
	real16 u0;
	real64 u1;
} Eq_40;

