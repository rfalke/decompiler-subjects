// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_362/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr (struct "Globals")))
Eq_5: (fn void ((ptr Eq_7), word16))
	T_5 (in msdos_display_string : ptr32)
	T_6 (in signature of msdos_display_string : void)
Eq_7: (segment "Eq_7" (17E (arr word16) a017E))
	T_7 (in ds : selector)
	T_9 (in ds : (ptr Eq_7))
Eq_12: (fn void ())
	T_12 (in msdos_terminate_program20 : ptr32)
	T_13 (in signature of msdos_terminate_program20 : void)
Eq_27: (segment "Eq_27")
	T_27 (in es : (ptr Eq_27))
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr Eq_1)
  OrigDataType: (ptr (struct "Globals"))
T_2: (in 0x26E1 : word16)
  Class: Eq_2
  DataType: ptr16
  OrigDataType: cups16
T_3: (in fp : ptr16)
  Class: Eq_2
  DataType: ptr16
  OrigDataType: ptr16
T_4: (in 0x26E1 >=u fp : bool)
  Class: Eq_4
  DataType: bool
  OrigDataType: bool
T_5: (in msdos_display_string : ptr32)
  Class: Eq_5
  DataType: (ptr Eq_5)
  OrigDataType: (ptr (fn T_11 (T_9, T_10)))
T_6: (in signature of msdos_display_string : void)
  Class: Eq_5
  DataType: (ptr Eq_5)
  OrigDataType: 
T_7: (in ds : selector)
  Class: Eq_7
  DataType: (ptr Eq_7)
  OrigDataType: (ptr (segment))
T_8: (in dx : word16)
  Class: Eq_8
  DataType: word16
  OrigDataType: word16
T_9: (in ds : (ptr Eq_7))
  Class: Eq_7
  DataType: (ptr Eq_7)
  OrigDataType: (ptr (segment (17E (arr word16) a017E)))
T_10: (in 0x0161 : word16)
  Class: Eq_8
  DataType: word16
  OrigDataType: word16
T_11: (in msdos_display_string(ds, 0x0161) : void)
  Class: Eq_11
  DataType: void
  OrigDataType: void
T_12: (in msdos_terminate_program20 : ptr32)
  Class: Eq_12
  DataType: (ptr Eq_12)
  OrigDataType: (ptr (fn T_14 ()))
T_13: (in signature of msdos_terminate_program20 : void)
  Class: Eq_12
  DataType: (ptr Eq_12)
  OrigDataType: 
T_14: (in msdos_terminate_program20() : void)
  Class: Eq_14
  DataType: void
  OrigDataType: void
T_15: (in di_27 : (memptr (ptr Eq_27) word16))
  Class: Eq_15
  DataType: (memptr (ptr Eq_27) word16)
  OrigDataType: (memptr T_27 (struct 0002 (0 T_30 t0000)))
T_16: (in 0x0346 : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_17: (in fp - 0x0346 : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_18: (in 0xFFF0 : word16)
  Class: Eq_18
  DataType: word16
  OrigDataType: word16
T_19: (in fp - 0x0346 & 0xFFF0 : word16)
  Class: Eq_15
  DataType: (memptr (ptr Eq_27) word16)
  OrigDataType: word16
T_20: (in cx_28 : word16)
  Class: Eq_20
  DataType: word16
  OrigDataType: word16
T_21: (in 0x00A2 : word16)
  Class: Eq_20
  DataType: word16
  OrigDataType: word16
T_22: (in si_30 : (memptr (ptr Eq_7) word16))
  Class: Eq_22
  DataType: (memptr (ptr Eq_7) word16)
  OrigDataType: (memptr T_9 (struct 0002 (0 T_26 t0000)))
T_23: (in 0x017E : word16)
  Class: Eq_22
  DataType: (memptr (ptr Eq_7) word16)
  OrigDataType: word16
T_24: (in 0x0000 : word16)
  Class: Eq_24
  DataType: word16
  OrigDataType: word16
T_25: (in si_30 + 0x0000 : word16)
  Class: Eq_25
  DataType: word16
  OrigDataType: word16
T_26: (in Mem0[ds:si_30 + 0x0000:word16] : word16)
  Class: Eq_26
  DataType: word16
  OrigDataType: word16
T_27: (in es : (ptr Eq_27))
  Class: Eq_27
  DataType: (ptr Eq_27)
  OrigDataType: (ptr (segment))
T_28: (in 0x0000 : word16)
  Class: Eq_28
  DataType: word16
  OrigDataType: word16
T_29: (in di_27 + 0x0000 : word16)
  Class: Eq_29
  DataType: word16
  OrigDataType: word16
T_30: (in Mem39[es:di_27 + 0x0000:word16] : word16)
  Class: Eq_26
  DataType: word16
  OrigDataType: word16
T_31: (in 0x0002 : word16)
  Class: Eq_31
  DataType: word16
  OrigDataType: word16
T_32: (in si_30 + 0x0002 : word16)
  Class: Eq_22
  DataType: (memptr (ptr Eq_7) word16)
  OrigDataType: word16
T_33: (in 0x0002 : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_34: (in di_27 + 0x0002 : word16)
  Class: Eq_15
  DataType: (memptr (ptr Eq_27) word16)
  OrigDataType: word16
T_35: (in 0x0001 : word16)
  Class: Eq_35
  DataType: word16
  OrigDataType: word16
T_36: (in cx_28 - 0x0001 : word16)
  Class: Eq_20
  DataType: word16
  OrigDataType: word16
T_37: (in 0x0000 : word16)
  Class: Eq_20
  DataType: word16
  OrigDataType: word16
T_38: (in cx_28 == 0x0000 : bool)
  Class: Eq_38
  DataType: bool
  OrigDataType: bool
T_39:
  Class: Eq_39
  DataType: word16
  OrigDataType: (struct 0002 (0 T_26 t0000))
*/
typedef struct Globals {
} Eq_1;

typedef void (Eq_5)(Eq_7 *, word16);

typedef  Eq_7[]struct Eq_7 {
	word16 a017E[];	// 17E
} Eq_7;

typedef void (Eq_12)();

typedef struct Eq_27 {
} Eq_27;

