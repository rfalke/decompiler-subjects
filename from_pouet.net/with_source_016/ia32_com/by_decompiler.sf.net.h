// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_016/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_7: (union "Eq_7" (byte u0) (word16 u1))
	T_7 (in al_14 : Eq_7)
	T_8 (in 0x13 : byte)
	T_19 (in al_14 + dh_20 + C_24 : word16)
	T_23 (in Mem34[es_7:di + 0x0000:byte] : byte)
Eq_9: (segment "Eq_9")
	T_9 (in es_7 : (ptr Eq_9))
	T_15 (in SLICE(ds->*bx, selector, 16) : selector)
Eq_10: (segment "Eq_10")
	T_10 (in ds : (ptr Eq_10))
Eq_20: (struct "Eq_20" 0001 (0 Eq_7 t0000))
	T_20 (in di : (memptr (ptr Eq_9) Eq_20))
	T_29 (in di + 0x0001 : word16)
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
T_7: (in al_14 : Eq_7)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: (union (byte u0) (word16 u1))
T_8: (in 0x13 : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_9: (in es_7 : (ptr Eq_9))
  Class: Eq_9
  DataType: (ptr Eq_9)
  OrigDataType: (ptr (segment))
T_10: (in ds : (ptr Eq_10))
  Class: Eq_10
  DataType: (ptr Eq_10)
  OrigDataType: (ptr (segment))
T_11: (in bx : (memptr (ptr Eq_10) segptr32))
  Class: Eq_11
  DataType: (memptr (ptr Eq_10) segptr32)
  OrigDataType: (memptr T_10 (struct (0 T_14 t0000)))
T_12: (in 0x0000 : word16)
  Class: Eq_12
  DataType: word16
  OrigDataType: word16
T_13: (in bx + 0x0000 : word16)
  Class: Eq_13
  DataType: word16
  OrigDataType: word16
T_14: (in Mem0[ds:bx + 0x0000:segptr32] : segptr32)
  Class: Eq_14
  DataType: segptr32
  OrigDataType: segptr32
T_15: (in SLICE(ds->*bx, selector, 16) : selector)
  Class: Eq_9
  DataType: (ptr Eq_9)
  OrigDataType: (ptr (segment))
T_16: (in dh_20 : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_17: (in al_14 + dh_20 : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_18: (in C_24 : bool)
  Class: Eq_18
  DataType: bool
  OrigDataType: byte
T_19: (in al_14 + dh_20 + C_24 : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_20: (in di : (memptr (ptr Eq_9) Eq_20))
  Class: Eq_20
  DataType: (memptr (ptr Eq_9) Eq_20)
  OrigDataType: (memptr T_9 (struct 0001 (0 T_23 t0000)))
T_21: (in 0x0000 : word16)
  Class: Eq_21
  DataType: word16
  OrigDataType: word16
T_22: (in di + 0x0000 : word16)
  Class: Eq_22
  DataType: word16
  OrigDataType: word16
T_23: (in Mem34[es_7:di + 0x0000:byte] : byte)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: byte
T_24: (in cx : word16)
  Class: Eq_24
  DataType: word16
  OrigDataType: word16
T_25: (in 0x0001 : word16)
  Class: Eq_25
  DataType: word16
  OrigDataType: word16
T_26: (in cx - 0x0001 : word16)
  Class: Eq_24
  DataType: word16
  OrigDataType: word16
T_27: (in cond(al_14) : byte)
  Class: Eq_18
  DataType: bool
  OrigDataType: byte
T_28: (in 0x0001 : word16)
  Class: Eq_28
  DataType: word16
  OrigDataType: word16
T_29: (in di + 0x0001 : word16)
  Class: Eq_20
  DataType: (memptr (ptr Eq_9) Eq_20)
  OrigDataType: word16
T_30: (in SLICE(cx, byte, 8) : byte)
  Class: Eq_30
  DataType: byte
  OrigDataType: byte
T_31: (in ch : byte)
  Class: Eq_30
  DataType: byte
  OrigDataType: byte
T_32: (in 0x0000 : word16)
  Class: Eq_24
  DataType: word16
  OrigDataType: word16
T_33: (in cx != 0x0000 : bool)
  Class: Eq_33
  DataType: bool
  OrigDataType: bool
T_34: (in dx : word16)
  Class: Eq_34
  DataType: word16
  OrigDataType: word16
T_35: (in 0x0001 : word16)
  Class: Eq_35
  DataType: word16
  OrigDataType: word16
T_36: (in dx + 0x0001 : word16)
  Class: Eq_34
  DataType: word16
  OrigDataType: word16
T_37: (in SLICE(dx, byte, 8) : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_38: (in ch | al_14 : byte)
  Class: Eq_38
  DataType: byte
  OrigDataType: byte
T_39: (in DPB(cx, ch | al_14, 8, 8) : word16)
  Class: Eq_24
  DataType: word16
  OrigDataType: word16
T_40: (in false : bool)
  Class: Eq_18
  DataType: bool
  OrigDataType: bool
*/
typedef struct Globals {
} Eq_1;

typedef void (Eq_2)(byte);

typedef union Eq_7 {
	byte u0;
	word16 u1;
} Eq_7;

typedef struct Eq_9 {
} Eq_9;

typedef struct Eq_10 {
} Eq_10;

typedef Eq_7 Eq_20struct Eq_20 {	// size: 1 1
	Eq_7 t0000;	// 0
} Eq_20;

