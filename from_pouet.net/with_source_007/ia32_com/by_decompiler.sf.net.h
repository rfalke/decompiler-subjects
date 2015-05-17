// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_007/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_11: (segment "Eq_11")
	T_11 (in es_8 : (ptr Eq_11))
	T_17 (in SLICE(ds->*bx, selector, 16) : selector)
Eq_12: (segment "Eq_12")
	T_12 (in ds : (ptr Eq_12))
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
T_7: (in ax_13 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_8: (in 0x0013 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_9: (in al_12 : byte)
  Class: Eq_9
  DataType: byte
  OrigDataType: byte
T_10: (in 0x13 : byte)
  Class: Eq_9
  DataType: byte
  OrigDataType: byte
T_11: (in es_8 : (ptr Eq_11))
  Class: Eq_11
  DataType: (ptr Eq_11)
  OrigDataType: (ptr (segment))
T_12: (in ds : (ptr Eq_12))
  Class: Eq_12
  DataType: (ptr Eq_12)
  OrigDataType: (ptr (segment))
T_13: (in bx : (memptr (ptr Eq_12) segptr32))
  Class: Eq_13
  DataType: (memptr (ptr Eq_12) segptr32)
  OrigDataType: (memptr T_12 (struct (0 T_16 t0000)))
T_14: (in 0x0000 : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_15: (in bx + 0x0000 : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_16: (in Mem0[ds:bx + 0x0000:segptr32] : segptr32)
  Class: Eq_16
  DataType: segptr32
  OrigDataType: segptr32
T_17: (in SLICE(ds->*bx, selector, 16) : selector)
  Class: Eq_11
  DataType: (ptr Eq_11)
  OrigDataType: (ptr (segment))
T_18: (in di_15 : (memptr (ptr Eq_11) byte))
  Class: Eq_18
  DataType: (memptr (ptr Eq_11) byte)
  OrigDataType: (memptr T_11 (struct (0 T_27 t0000)))
T_19: (in di : word16)
  Class: Eq_19
  DataType: word16
  OrigDataType: word16
T_20: (in di + ax_13 : word16)
  Class: Eq_20
  DataType: word16
  OrigDataType: word16
T_21: (in C : byte)
  Class: Eq_21
  DataType: byte
  OrigDataType: byte
T_22: (in di + ax_13 + C : word16)
  Class: Eq_18
  DataType: (memptr (ptr Eq_11) byte)
  OrigDataType: word16
T_23: (in 0x01 : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_24: (in al_12 - 0x01 : byte)
  Class: Eq_9
  DataType: byte
  OrigDataType: byte
T_25: (in 0x0000 : word16)
  Class: Eq_25
  DataType: word16
  OrigDataType: word16
T_26: (in di_15 + 0x0000 : word16)
  Class: Eq_26
  DataType: word16
  OrigDataType: word16
T_27: (in Mem22[es_8:di_15 + 0x0000:byte] : byte)
  Class: Eq_9
  DataType: byte
  OrigDataType: byte
T_28: (in cond(di_15) : byte)
  Class: Eq_21
  DataType: byte
  OrigDataType: byte
T_29: (in DPB(ax_13, al_12, 0, 8) : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_30: (in 0x0001 : word16)
  Class: Eq_30
  DataType: word16
  OrigDataType: word16
T_31: (in di_15 + 0x0001 : word16)
  Class: Eq_19
  DataType: word16
  OrigDataType: word16
*/
typedef struct Globals {
} Eq_1;

typedef void (Eq_2)(byte);

typedef struct Eq_11 {
} Eq_11;

typedef struct Eq_12 {
} Eq_12;

