// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_381/ia32_mz/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr (struct "Globals")))
Eq_4: (struct "Eq_4" (32 (arr word16) a0032))
	T_4 (in dx_34 : (ptr Eq_4))
	T_7 (in cs + 0x01F1 : word16)
	T_37 (in dx_34 - 0x0001 : word16)
Eq_5: (segment "Eq_5" (1F1 Eq_4 t01F1))
	T_5 (in cs : selector)
Eq_10: (segment "Eq_10" (0 (arr word16) a0000))
	T_10 (in bp_31 : (ptr Eq_10))
	T_11 (in ss : selector)
	T_35 (in bp_31 - 0x0001 : word16)
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr Eq_1)
  OrigDataType: (ptr (struct "Globals"))
T_2: (in ax_2 : int16)
  Class: Eq_2
  DataType: int16
  OrigDataType: int16
T_3: (in 0x01F1 : word16)
  Class: Eq_2
  DataType: int16
  OrigDataType: word16
T_4: (in dx_34 : (ptr Eq_4))
  Class: Eq_4
  DataType: (ptr Eq_4)
  OrigDataType: (ptr (struct (32 (arr T_40) a0032)))
T_5: (in cs : selector)
  Class: Eq_5
  DataType: (ptr Eq_5)
  OrigDataType: (ptr (segment))
T_6: (in 0x01F1 : word16)
  Class: Eq_6
  DataType: word16
  OrigDataType: word16
T_7: (in cs + 0x01F1 : word16)
  Class: Eq_4
  DataType: (ptr Eq_4)
  OrigDataType: word16
T_8: (in cx_27 : word16)
  Class: Eq_8
  DataType: word16
  OrigDataType: word16
T_9: (in 0x003C : word16)
  Class: Eq_8
  DataType: word16
  OrigDataType: word16
T_10: (in bp_31 : (ptr Eq_10))
  Class: Eq_10
  DataType: (ptr Eq_10)
  OrigDataType: (ptr (struct (0 (arr T_41) a0000)))
T_11: (in ss : selector)
  Class: Eq_10
  DataType: (ptr Eq_10)
  OrigDataType: (ptr (segment))
T_12: (in 0x0001 : word16)
  Class: Eq_12
  DataType: word16
  OrigDataType: word16
T_13: (in ax_2 - 0x0001 : word16)
  Class: Eq_2
  DataType: int16
  OrigDataType: word16
T_14: (in 0x0000 : word16)
  Class: Eq_2
  DataType: int16
  OrigDataType: int16
T_15: (in ax_2 >= 0x0000 : bool)
  Class: Eq_15
  DataType: bool
  OrigDataType: bool
T_16: (in si_38 : (memptr (ptr Eq_4) word16))
  Class: Eq_16
  DataType: (memptr (ptr Eq_4) word16)
  OrigDataType: (memptr T_4 (struct 0002 (0 T_19 t0000)))
T_17: (in 0x0000 : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_18: (in si_38 + 0x0000 : word16)
  Class: Eq_18
  DataType: word16
  OrigDataType: word16
T_19: (in Mem0[dx_34:si_38 + 0x0000:word16] : word16)
  Class: Eq_19
  DataType: word16
  OrigDataType: word16
T_20: (in di_39 : (memptr (ptr Eq_10) word16))
  Class: Eq_20
  DataType: (memptr (ptr Eq_10) word16)
  OrigDataType: (memptr T_10 (struct 0002 (0 T_23 t0000)))
T_21: (in 0x0000 : word16)
  Class: Eq_21
  DataType: word16
  OrigDataType: word16
T_22: (in di_39 + 0x0000 : word16)
  Class: Eq_22
  DataType: word16
  OrigDataType: word16
T_23: (in Mem54[bp_31:di_39 + 0x0000:word16] : word16)
  Class: Eq_19
  DataType: word16
  OrigDataType: word16
T_24: (in 0x0002 : word16)
  Class: Eq_24
  DataType: word16
  OrigDataType: word16
T_25: (in si_38 + 0x0002 : word16)
  Class: Eq_16
  DataType: (memptr (ptr Eq_4) word16)
  OrigDataType: word16
T_26: (in 0x0002 : word16)
  Class: Eq_26
  DataType: word16
  OrigDataType: word16
T_27: (in di_39 + 0x0002 : word16)
  Class: Eq_20
  DataType: (memptr (ptr Eq_10) word16)
  OrigDataType: word16
T_28: (in 0x0001 : word16)
  Class: Eq_28
  DataType: word16
  OrigDataType: word16
T_29: (in cx_27 - 0x0001 : word16)
  Class: Eq_8
  DataType: word16
  OrigDataType: word16
T_30: (in 0x0000 : word16)
  Class: Eq_8
  DataType: word16
  OrigDataType: word16
T_31: (in cx_27 == 0x0000 : bool)
  Class: Eq_31
  DataType: bool
  OrigDataType: bool
T_32: (in 0x0032 : word16)
  Class: Eq_16
  DataType: (memptr (ptr Eq_4) word16)
  OrigDataType: word16
T_33: (in 0x0000 : word16)
  Class: Eq_20
  DataType: (memptr (ptr Eq_10) word16)
  OrigDataType: word16
T_34: (in 0x0001 : word16)
  Class: Eq_34
  DataType: word16
  OrigDataType: word16
T_35: (in bp_31 - 0x0001 : word16)
  Class: Eq_10
  DataType: (ptr Eq_10)
  OrigDataType: word16
T_36: (in 0x0001 : word16)
  Class: Eq_36
  DataType: word16
  OrigDataType: word16
T_37: (in dx_34 - 0x0001 : word16)
  Class: Eq_4
  DataType: (ptr Eq_4)
  OrigDataType: word16
T_38: (in 0x08 : byte)
  Class: Eq_38
  DataType: byte
  OrigDataType: byte
T_39: (in DPB(cx_27, 0x08, 0, 8) : word16)
  Class: Eq_8
  DataType: word16
  OrigDataType: word16
T_40:
  Class: Eq_40
  DataType: word16
  OrigDataType: (struct 0002 (0 T_19 t0000))
T_41:
  Class: Eq_41
  DataType: word16
  OrigDataType: (struct 0002 (0 T_23 t0000))
*/
typedef struct Globals {
} Eq_1;

typedef  Eq_4[]struct Eq_4 {
	word16 a0032[];	// 32
} Eq_4;

typedef Eq_4 Eq_5struct Eq_5 {
	Eq_4 t01F1;	// 1F1
} Eq_5;

typedef  Eq_10[]struct Eq_10 {
	word16 a0000[];	// 0
} Eq_10;

