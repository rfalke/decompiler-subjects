// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_365/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr (struct "Globals")))
Eq_8: (segment "Eq_8" (10D (arr byte) a010D))
	T_8 (in ds : (ptr Eq_8))
Eq_12: (segment "Eq_12" (7F00 (arr byte) a7F00))
	T_12 (in es : (ptr Eq_12))
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr Eq_1)
  OrigDataType: (ptr (struct "Globals"))
T_2: (in si_16 : (memptr (ptr Eq_8) byte))
  Class: Eq_2
  DataType: (memptr (ptr Eq_8) byte)
  OrigDataType: (memptr T_8 (struct 0001 (0 T_11 t0000)))
T_3: (in 0x010D : word16)
  Class: Eq_2
  DataType: (memptr (ptr Eq_8) byte)
  OrigDataType: word16
T_4: (in di_17 : (memptr (ptr Eq_12) byte))
  Class: Eq_4
  DataType: (memptr (ptr Eq_12) byte)
  OrigDataType: (memptr T_12 (struct 0001 (0 T_15 t0000)))
T_5: (in 0x7F00 : word16)
  Class: Eq_4
  DataType: (memptr (ptr Eq_12) byte)
  OrigDataType: word16
T_6: (in cx_10 : word16)
  Class: Eq_6
  DataType: word16
  OrigDataType: word16
T_7: (in 0x7F00 : word16)
  Class: Eq_6
  DataType: word16
  OrigDataType: word16
T_8: (in ds : (ptr Eq_8))
  Class: Eq_8
  DataType: (ptr Eq_8)
  OrigDataType: (ptr (segment (10D (arr T_24) a010D)))
T_9: (in 0x0000 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_10: (in si_16 + 0x0000 : word16)
  Class: Eq_10
  DataType: word16
  OrigDataType: word16
T_11: (in Mem0[ds:si_16 + 0x0000:byte] : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_12: (in es : (ptr Eq_12))
  Class: Eq_12
  DataType: (ptr Eq_12)
  OrigDataType: (ptr (segment (7F00 (arr T_25) a7F00)))
T_13: (in 0x0000 : word16)
  Class: Eq_13
  DataType: word16
  OrigDataType: word16
T_14: (in di_17 + 0x0000 : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_15: (in Mem14[es:di_17 + 0x0000:byte] : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_16: (in 0x0001 : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_17: (in si_16 + 0x0001 : word16)
  Class: Eq_2
  DataType: (memptr (ptr Eq_8) byte)
  OrigDataType: word16
T_18: (in 0x0001 : word16)
  Class: Eq_18
  DataType: word16
  OrigDataType: word16
T_19: (in di_17 + 0x0001 : word16)
  Class: Eq_4
  DataType: (memptr (ptr Eq_12) byte)
  OrigDataType: word16
T_20: (in 0x0001 : word16)
  Class: Eq_20
  DataType: word16
  OrigDataType: word16
T_21: (in cx_10 - 0x0001 : word16)
  Class: Eq_6
  DataType: word16
  OrigDataType: word16
T_22: (in 0x0000 : word16)
  Class: Eq_6
  DataType: word16
  OrigDataType: word16
T_23: (in cx_10 == 0x0000 : bool)
  Class: Eq_23
  DataType: bool
  OrigDataType: bool
T_24:
  Class: Eq_24
  DataType: byte
  OrigDataType: (struct 0001 (0 T_11 t0000))
T_25:
  Class: Eq_25
  DataType: byte
  OrigDataType: (struct 0001 (0 T_15 t0000))
*/
typedef struct Globals {
} Eq_1;

typedef  Eq_8[]struct Eq_8 {
	byte a010D[];	// 10D
} Eq_8;

typedef  Eq_12[]struct Eq_12 {
	byte a7F00[];	// 7F00
} Eq_12;

