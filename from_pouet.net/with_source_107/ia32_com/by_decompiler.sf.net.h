// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_107/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_15: (segment "Eq_15" (140 (arr word16) a0140))
	T_15 (in es : (ptr Eq_15))
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
T_7: (in ax_12 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_8: (in ax : word16)
  Class: Eq_8
  DataType: word16
  OrigDataType: word16
T_9: (in 0x13 : byte)
  Class: Eq_9
  DataType: byte
  OrigDataType: byte
T_10: (in DPB(ax, 0x13, 0, 8) : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_11: (in di_14 : (memptr (ptr Eq_15) word16))
  Class: Eq_11
  DataType: (memptr (ptr Eq_15) word16)
  OrigDataType: (memptr T_15 (struct 0002 (0 T_18 t0000)))
T_12: (in 0x0140 : word16)
  Class: Eq_11
  DataType: (memptr (ptr Eq_15) word16)
  OrigDataType: word16
T_13: (in cx_13 : word16)
  Class: Eq_13
  DataType: word16
  OrigDataType: word16
T_14: (in 0x046C : word16)
  Class: Eq_13
  DataType: word16
  OrigDataType: word16
T_15: (in es : (ptr Eq_15))
  Class: Eq_15
  DataType: (ptr Eq_15)
  OrigDataType: (ptr (segment (140 (arr T_26) a0140)))
T_16: (in 0x0000 : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_17: (in di_14 + 0x0000 : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_18: (in Mem15[es:di_14 + 0x0000:word16] : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_19: (in 0x0002 : word16)
  Class: Eq_19
  DataType: word16
  OrigDataType: word16
T_20: (in di_14 + 0x0002 : word16)
  Class: Eq_11
  DataType: (memptr (ptr Eq_15) word16)
  OrigDataType: word16
T_21: (in ax_12 + di_14 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_22: (in 0x0001 : word16)
  Class: Eq_22
  DataType: word16
  OrigDataType: word16
T_23: (in cx_13 - 0x0001 : word16)
  Class: Eq_13
  DataType: word16
  OrigDataType: word16
T_24: (in 0x0000 : word16)
  Class: Eq_13
  DataType: word16
  OrigDataType: word16
T_25: (in cx_13 != 0x0000 : bool)
  Class: Eq_25
  DataType: bool
  OrigDataType: bool
T_26:
  Class: Eq_26
  DataType: word16
  OrigDataType: (struct 0002 (0 T_18 t0000))
*/
typedef struct Globals {
} Eq_1;

typedef void (Eq_2)(byte);

typedef  Eq_15[]struct Eq_15 {
	word16 a0140[];	// 140
} Eq_15;

