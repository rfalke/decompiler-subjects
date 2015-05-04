// subject.h
// Generated on 5/4/2015 12:11:01 AM by decompiling from_pouet.net/with_source_369/ia32_mz/subject.exe
// using Decompiler version 0.4.2.0.

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr (struct "Globals")))
Eq_4: (struct "Eq_4" (0 (arr word16) a0000) (630 (arr word16) a0630))
	T_4 (in bx_11 : (ptr Eq_4))
	T_7 (in cs + 0x0105 : word16)
	T_34 (in bx_11 - 0x0001 : word16)
Eq_5: (segment "Eq_5" (105 Eq_4 t0105))
	T_5 (in cs : selector)
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr Eq_1)
  OrigDataType: (ptr (struct "Globals"))
T_2: (in dx_10 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_3: (in 0x0105 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_4: (in bx_11 : (ptr Eq_4))
  Class: Eq_4
  DataType: (ptr Eq_4)
  OrigDataType: (ptr (struct (0 (arr T_36) a0000)))
T_5: (in cs : selector)
  Class: Eq_5
  DataType: (ptr Eq_5)
  OrigDataType: (ptr (segment))
T_6: (in 0x0105 : word16)
  Class: Eq_6
  DataType: word16
  OrigDataType: word16
T_7: (in cs + 0x0105 : word16)
  Class: Eq_4
  DataType: (ptr Eq_4)
  OrigDataType: word16
T_8: (in 0x0001 : word16)
  Class: Eq_8
  DataType: word16
  OrigDataType: word16
T_9: (in dx_10 - 0x0001 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_10: (in 0x0000 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_11: (in dx_10 != 0x0000 : bool)
  Class: Eq_11
  DataType: bool
  OrigDataType: bool
T_12: (in si_18 : (memptr (ptr Eq_4) word16))
  Class: Eq_12
  DataType: (memptr (ptr Eq_4) word16)
  OrigDataType: (memptr T_4 (struct 0002 (0 T_15 t0000)))
T_13: (in 0x0000 : word16)
  Class: Eq_13
  DataType: word16
  OrigDataType: word16
T_14: (in si_18 + 0x0000 : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_15: (in Mem0[bx_11:si_18 + 0x0000:word16] : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_16: (in 0x0630 : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_17: (in bx_11 + 0x0630 : word16)
  Class: Eq_17
  DataType: (ptr (arr word16))
  OrigDataType: (ptr (struct (0 (arr T_37) a0000)))
T_18: (in di_19 : word16)
  Class: Eq_18
  DataType: (memptr (ptr (arr word16)) word16)
  OrigDataType: (memptr T_17 (struct 0002 (0 T_21 t0000)))
T_19: (in 0x0000 : word16)
  Class: Eq_19
  DataType: word16
  OrigDataType: word16
T_20: (in di_19 + 0x0000 : word16)
  Class: Eq_20
  DataType: word16
  OrigDataType: word16
T_21: (in Mem32[bx_11 + 0x0630:di_19 + 0x0000:word16] : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_22: (in 0x0002 : word16)
  Class: Eq_22
  DataType: word16
  OrigDataType: word16
T_23: (in si_18 + 0x0002 : word16)
  Class: Eq_12
  DataType: (memptr (ptr Eq_4) word16)
  OrigDataType: word16
T_24: (in 0x0002 : word16)
  Class: Eq_24
  DataType: word16
  OrigDataType: word16
T_25: (in di_19 + 0x0002 : word16)
  Class: Eq_18
  DataType: (memptr (ptr (arr word16)) word16)
  OrigDataType: word16
T_26: (in cx_26 : word16)
  Class: Eq_26
  DataType: word16
  OrigDataType: word16
T_27: (in 0x0001 : word16)
  Class: Eq_27
  DataType: word16
  OrigDataType: word16
T_28: (in cx_26 - 0x0001 : word16)
  Class: Eq_26
  DataType: word16
  OrigDataType: word16
T_29: (in 0x0000 : word16)
  Class: Eq_26
  DataType: word16
  OrigDataType: word16
T_30: (in cx_26 == 0x0000 : bool)
  Class: Eq_30
  DataType: bool
  OrigDataType: bool
T_31: (in 0x0000 : word16)
  Class: Eq_12
  DataType: (memptr (ptr Eq_4) word16)
  OrigDataType: word16
T_32: (in 0x0000 : word16)
  Class: Eq_18
  DataType: (memptr (ptr (arr word16)) word16)
  OrigDataType: word16
T_33: (in 0x0001 : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_34: (in bx_11 - 0x0001 : word16)
  Class: Eq_4
  DataType: (ptr Eq_4)
  OrigDataType: word16
T_35: (in 0x0008 : word16)
  Class: Eq_26
  DataType: word16
  OrigDataType: word16
T_36:
  Class: Eq_36
  DataType: word16
  OrigDataType: (struct 0002 (0 T_15 t0000))
T_37:
  Class: Eq_37
  DataType: word16
  OrigDataType: (struct 0002 (0 T_21 t0000))
*/
typedef struct Globals {
} Eq_1;

typedef  Eq_4[][]struct Eq_4 {
	word16 a0000[];	// 0
	word16 a0630[];	// 630
} Eq_4;

typedef Eq_4 Eq_5struct Eq_5 {
	Eq_4 t0105;	// 105
} Eq_5;

