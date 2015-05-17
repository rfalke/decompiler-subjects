// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_037/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (segment "Eq_2")
	T_2 (in es_6 : (ptr Eq_2))
	T_8 (in SLICE(ds->*bx, selector, 16) : selector)
Eq_3: (segment "Eq_3")
	T_3 (in ds : (ptr Eq_3))
Eq_9: (fn void (byte))
	T_9 (in bios_video_set_mode : ptr32)
	T_10 (in signature of bios_video_set_mode : void)
Eq_15: (struct "Eq_15" 0141 (0 byte b0000))
	T_15 (in di : (memptr (ptr Eq_2) Eq_15))
	T_23 (in di + 0x0000 : word16)
	T_45 (in &di->b0000 + 0x0001 : word16)
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr Eq_1)
  OrigDataType: (ptr (struct "Globals"))
T_2: (in es_6 : (ptr Eq_2))
  Class: Eq_2
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (segment))
T_3: (in ds : (ptr Eq_3))
  Class: Eq_3
  DataType: (ptr Eq_3)
  OrigDataType: (ptr (segment))
T_4: (in bx : (memptr (ptr Eq_3) segptr32))
  Class: Eq_4
  DataType: (memptr (ptr Eq_3) segptr32)
  OrigDataType: (memptr T_3 (struct (0 T_7 t0000)))
T_5: (in 0x0000 : word16)
  Class: Eq_5
  DataType: word16
  OrigDataType: word16
T_6: (in bx + 0x0000 : word16)
  Class: Eq_6
  DataType: word16
  OrigDataType: word16
T_7: (in Mem0[ds:bx + 0x0000:segptr32] : segptr32)
  Class: Eq_7
  DataType: segptr32
  OrigDataType: segptr32
T_8: (in SLICE(ds->*bx, selector, 16) : selector)
  Class: Eq_2
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (segment))
T_9: (in bios_video_set_mode : ptr32)
  Class: Eq_9
  DataType: (ptr Eq_9)
  OrigDataType: (ptr (fn T_13 (T_12)))
T_10: (in signature of bios_video_set_mode : void)
  Class: Eq_9
  DataType: (ptr Eq_9)
  OrigDataType: 
T_11: (in al : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_12: (in 0x13 : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_13: (in bios_video_set_mode(0x13) : void)
  Class: Eq_13
  DataType: void
  OrigDataType: void
T_14: (in al_29 : byte)
  Class: Eq_14
  DataType: byte
  OrigDataType: byte
T_15: (in di : (memptr (ptr Eq_2) Eq_15))
  Class: Eq_15
  DataType: (memptr (ptr Eq_2) Eq_15)
  OrigDataType: (memptr T_2 (struct 0141 (0 T_18 t0000)))
T_16: (in 0x0000 : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_17: (in di + 0x0000 : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_18: (in Mem37[es_6:di + 0x0000:byte] : byte)
  Class: Eq_14
  DataType: byte
  OrigDataType: byte
T_19: (in cx : word16)
  Class: Eq_19
  DataType: word16
  OrigDataType: word16
T_20: (in 0x0001 : word16)
  Class: Eq_20
  DataType: word16
  OrigDataType: word16
T_21: (in cx - 0x0001 : word16)
  Class: Eq_19
  DataType: word16
  OrigDataType: word16
T_22: (in 0x0000 : word16)
  Class: Eq_22
  DataType: word16
  OrigDataType: word16
T_23: (in di + 0x0000 : word16)
  Class: Eq_15
  DataType: (memptr (ptr Eq_2) Eq_15)
  OrigDataType: word16
T_24: (in (byte) cx : byte)
  Class: Eq_24
  DataType: byte
  OrigDataType: byte
T_25: (in cl : byte)
  Class: Eq_24
  DataType: byte
  OrigDataType: byte
T_26: (in SLICE(cx, byte, 8) : byte)
  Class: Eq_26
  DataType: byte
  OrigDataType: byte
T_27: (in ch : byte)
  Class: Eq_26
  DataType: byte
  OrigDataType: byte
T_28: (in 0x0000 : word16)
  Class: Eq_19
  DataType: word16
  OrigDataType: word16
T_29: (in cx != 0x0000 : bool)
  Class: Eq_29
  DataType: bool
  OrigDataType: bool
T_30: (in 0x1E : byte)
  Class: Eq_30
  DataType: byte
  OrigDataType: byte
T_31: (in ch & 0x1E : byte)
  Class: Eq_31
  DataType: byte
  OrigDataType: byte
T_32: (in 0x00 : byte)
  Class: Eq_31
  DataType: byte
  OrigDataType: byte
T_33: (in (ch & 0x1E) == 0x00 : bool)
  Class: Eq_33
  DataType: bool
  OrigDataType: bool
T_34: (in ch ^ cl : byte)
  Class: Eq_34
  DataType: byte
  OrigDataType: byte
T_35: (in 0x38 : byte)
  Class: Eq_35
  DataType: byte
  OrigDataType: byte
T_36: (in (ch ^ cl) & 0x38 : byte)
  Class: Eq_14
  DataType: byte
  OrigDataType: byte
T_37: (in 0x1E : byte)
  Class: Eq_14
  DataType: byte
  OrigDataType: byte
T_38: (in 0x1E : byte)
  Class: Eq_38
  DataType: byte
  OrigDataType: byte
T_39: (in cl & 0x1E : byte)
  Class: Eq_39
  DataType: byte
  OrigDataType: byte
T_40: (in 0x00 : byte)
  Class: Eq_39
  DataType: byte
  OrigDataType: byte
T_41: (in (cl & 0x1E) == 0x00 : bool)
  Class: Eq_41
  DataType: bool
  OrigDataType: bool
T_42: (in 0x0141 : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_43: (in di + 0x0141 : word16)
  Class: Eq_43
  DataType: word16
  OrigDataType: word16
T_44: (in 0x0001 : word16)
  Class: Eq_44
  DataType: word16
  OrigDataType: word16
T_45: (in &di->b0000 + 0x0001 : word16)
  Class: Eq_15
  DataType: (memptr (ptr Eq_2) Eq_15)
  OrigDataType: word16
*/
typedef struct Globals {
} Eq_1;

typedef struct Eq_2 {
} Eq_2;

typedef struct Eq_3 {
} Eq_3;

typedef void (Eq_9)(byte);

typedef struct Eq_15 {	// size: 321 141
	byte b0000;	// 0
} Eq_15;

