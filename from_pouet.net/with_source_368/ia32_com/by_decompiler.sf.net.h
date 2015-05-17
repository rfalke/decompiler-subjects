// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_368/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (struct "Eq_2" (100 (arr word16) a0100))
	T_2 (in ax_6 : (ptr Eq_2))
	T_7 (in DPB(cs, SLICE(cs, byte, 8) + 0x10, 8, 8) : word16)
	T_18 (in Mem29[ss:fp - 0x0002:word16] : word16)
Eq_3: (segment "Eq_3")
	T_3 (in cs : selector)
Eq_14: (segment "Eq_14")
	T_14 (in ss : selector)
Eq_15: (union "Eq_15" (ptr16 u0) ((memptr (ptr Eq_14) Eq_36) u1))
	T_15 (in fp : ptr16)
Eq_19: (segment "Eq_19" (100 (arr word16) a0100))
	T_19 (in ds : (ptr Eq_19))
Eq_36: (struct "Eq_36" (FFFFFFFE (ptr Eq_2) ptrFFFFFFFE))
	T_36
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr Eq_1)
  OrigDataType: (ptr (struct "Globals"))
T_2: (in ax_6 : (ptr Eq_2))
  Class: Eq_2
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (struct (100 (arr T_35) a0100)))
T_3: (in cs : selector)
  Class: Eq_3
  DataType: (ptr Eq_3)
  OrigDataType: (ptr (segment))
T_4: (in SLICE(cs, byte, 8) : byte)
  Class: Eq_4
  DataType: byte
  OrigDataType: byte
T_5: (in 0x10 : byte)
  Class: Eq_5
  DataType: byte
  OrigDataType: byte
T_6: (in SLICE(cs, byte, 8) + 0x10 : byte)
  Class: Eq_6
  DataType: byte
  OrigDataType: byte
T_7: (in DPB(cs, SLICE(cs, byte, 8) + 0x10, 8, 8) : word16)
  Class: Eq_2
  DataType: (ptr Eq_2)
  OrigDataType: word16
T_8: (in cx_10 : word16)
  Class: Eq_8
  DataType: word16
  OrigDataType: word16
T_9: (in 0x0803 : word16)
  Class: Eq_8
  DataType: word16
  OrigDataType: word16
T_10: (in si_11 : (memptr (ptr Eq_19) word16))
  Class: Eq_10
  DataType: (memptr (ptr Eq_19) word16)
  OrigDataType: (memptr T_19 (struct 0002 (0 T_22 t0000)))
T_11: (in 0x0100 : word16)
  Class: Eq_10
  DataType: (memptr (ptr Eq_19) word16)
  OrigDataType: word16
T_12: (in di_12 : (memptr (ptr Eq_2) word16))
  Class: Eq_12
  DataType: (memptr (ptr Eq_2) word16)
  OrigDataType: (memptr T_2 (struct 0002 (0 T_25 t0000)))
T_13: (in 0x0100 : word16)
  Class: Eq_12
  DataType: (memptr (ptr Eq_2) word16)
  OrigDataType: word16
T_14: (in ss : selector)
  Class: Eq_14
  DataType: (ptr Eq_14)
  OrigDataType: (ptr (segment))
T_15: (in fp : ptr16)
  Class: Eq_15
  DataType: Eq_15
  OrigDataType: (union (ptr16 u0) ((memptr T_14 (struct (FFFFFFFE T_18 tFFFFFFFE))) u1))
T_16: (in 0x0002 : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_17: (in fp - 0x0002 : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_18: (in Mem29[ss:fp - 0x0002:word16] : word16)
  Class: Eq_2
  DataType: (ptr Eq_2)
  OrigDataType: word16
T_19: (in ds : (ptr Eq_19))
  Class: Eq_19
  DataType: (ptr Eq_19)
  OrigDataType: (ptr (segment (100 (arr T_34) a0100)))
T_20: (in 0x0000 : word16)
  Class: Eq_20
  DataType: word16
  OrigDataType: word16
T_21: (in si_11 + 0x0000 : word16)
  Class: Eq_21
  DataType: word16
  OrigDataType: word16
T_22: (in Mem0[ds:si_11 + 0x0000:word16] : word16)
  Class: Eq_22
  DataType: word16
  OrigDataType: word16
T_23: (in 0x0000 : word16)
  Class: Eq_23
  DataType: word16
  OrigDataType: word16
T_24: (in di_12 + 0x0000 : word16)
  Class: Eq_24
  DataType: word16
  OrigDataType: word16
T_25: (in Mem21[ax_6:di_12 + 0x0000:word16] : word16)
  Class: Eq_22
  DataType: word16
  OrigDataType: word16
T_26: (in 0x0002 : word16)
  Class: Eq_26
  DataType: word16
  OrigDataType: word16
T_27: (in si_11 + 0x0002 : word16)
  Class: Eq_10
  DataType: (memptr (ptr Eq_19) word16)
  OrigDataType: word16
T_28: (in 0x0002 : word16)
  Class: Eq_28
  DataType: word16
  OrigDataType: word16
T_29: (in di_12 + 0x0002 : word16)
  Class: Eq_12
  DataType: (memptr (ptr Eq_2) word16)
  OrigDataType: word16
T_30: (in 0x0001 : word16)
  Class: Eq_30
  DataType: word16
  OrigDataType: word16
T_31: (in cx_10 - 0x0001 : word16)
  Class: Eq_8
  DataType: word16
  OrigDataType: word16
T_32: (in 0x0000 : word16)
  Class: Eq_8
  DataType: word16
  OrigDataType: word16
T_33: (in cx_10 == 0x0000 : bool)
  Class: Eq_33
  DataType: bool
  OrigDataType: bool
T_34:
  Class: Eq_34
  DataType: word16
  OrigDataType: (struct 0002 (0 T_22 t0000))
T_35:
  Class: Eq_35
  DataType: word16
  OrigDataType: (struct 0002 (0 T_25 t0000))
T_36:
  Class: Eq_36
  DataType: Eq_36
  OrigDataType: 
*/
typedef struct Globals {
} Eq_1;

typedef  Eq_2[]struct Eq_2 {
	word16 a0100[];	// 100
} Eq_2;

typedef struct Eq_3 {
} Eq_3;

typedef struct Eq_14 {
} Eq_14;

typedef union Eq_15 {
	ptr16 u0;
	Eq_36 Eq_14::* u1;
} Eq_15;

typedef  Eq_19[]struct Eq_19 {
	word16 a0100[];	// 100
} Eq_19;

typedef Eq_2 Eq_36struct Eq_36 {
	Eq_2 * ptrFFFFFFFE;	// FFFFFFFE
} Eq_36;

