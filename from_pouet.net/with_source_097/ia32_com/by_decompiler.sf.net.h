// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_097/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_16) ptrFFFA0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in __syscall : ptr32)
Eq_5: (union "Eq_5" (int16 u0) (uint16 u1))
	T_5 (in si_27 : Eq_5)
	T_33 (in si_27 - 0x0001 : word16)
	T_34 (in 0x0000 : word16)
	T_40 (in 0x01DF : word16)
Eq_16: (segment "Eq_16" (0 uint16 w0000))
	T_16 (in 0xA000 : selector)
Eq_27: (fn void (byte))
	T_27 (in __syscall : ptr32)
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr Eq_1)
  OrigDataType: (ptr (struct "Globals"))
T_2: (in __syscall : ptr32)
  Class: Eq_2
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (fn T_4 (T_3)))
T_3: (in 0x10 : byte)
  Class: Eq_3
  DataType: byte
  OrigDataType: byte
T_4: (in __syscall(0x10) : void)
  Class: Eq_4
  DataType: void
  OrigDataType: void
T_5: (in si_27 : Eq_5)
  Class: Eq_5
  DataType: Eq_5
  OrigDataType: (union (int16 u0) (uint16 u1))
T_6: (in si_27 *u si_27 : uint32)
  Class: Eq_6
  DataType: uint32
  OrigDataType: uint32
T_7: (in (word16) (si_27 *u si_27) : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_8: (in cx_41 : uint16)
  Class: Eq_8
  DataType: uint16
  OrigDataType: uint16
T_9: (in cx_41 *u cx_41 : uint32)
  Class: Eq_9
  DataType: uint32
  OrigDataType: uint32
T_10: (in (word16) (cx_41 *u cx_41) : word16)
  Class: Eq_10
  DataType: word16
  OrigDataType: word16
T_11: (in (word16) (si_27 *u si_27) + (word16) (cx_41 *u cx_41) : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_12: (in bp : word16)
  Class: Eq_12
  DataType: word16
  OrigDataType: word16
T_13: (in (word16) (si_27 *u si_27) + (word16) (cx_41 *u cx_41) + bp : word16)
  Class: Eq_13
  DataType: uint16
  OrigDataType: uint16
T_14: (in 0x0005 : word16)
  Class: Eq_14
  DataType: uint16
  OrigDataType: uint16
T_15: (in (word16) (si_27 *u si_27) + (word16) (cx_41 *u cx_41) + bp >>u 0x0005 : word16)
  Class: Eq_15
  DataType: uint16
  OrigDataType: uint16
T_16: (in 0xA000 : selector)
  Class: Eq_16
  DataType: (ptr Eq_16)
  OrigDataType: (ptr (segment))
T_17: (in di_24 : (memptr (ptr Eq_16) uint16))
  Class: Eq_17
  DataType: (memptr (ptr Eq_16) uint16)
  OrigDataType: (memptr T_16 (struct 0002 (0 T_20 t0000)))
T_18: (in 0x0000 : word16)
  Class: Eq_18
  DataType: word16
  OrigDataType: word16
T_19: (in di_24 + 0x0000 : word16)
  Class: Eq_19
  DataType: word16
  OrigDataType: word16
T_20: (in Mem71[0xA000:di_24 + 0x0000:word16] : word16)
  Class: Eq_15
  DataType: uint16
  OrigDataType: word16
T_21: (in 0x0002 : word16)
  Class: Eq_21
  DataType: word16
  OrigDataType: word16
T_22: (in di_24 + 0x0002 : word16)
  Class: Eq_17
  DataType: (memptr (ptr Eq_16) uint16)
  OrigDataType: word16
T_23: (in 0x0001 : word16)
  Class: Eq_23
  DataType: word16
  OrigDataType: word16
T_24: (in cx_41 - 0x0001 : word16)
  Class: Eq_8
  DataType: uint16
  OrigDataType: word16
T_25: (in 0x0000 : word16)
  Class: Eq_8
  DataType: uint16
  OrigDataType: word16
T_26: (in cx_41 != 0x0000 : bool)
  Class: Eq_26
  DataType: bool
  OrigDataType: bool
T_27: (in __syscall : ptr32)
  Class: Eq_27
  DataType: (ptr Eq_27)
  OrigDataType: (ptr (fn T_29 (T_28)))
T_28: (in 0x10 : byte)
  Class: Eq_28
  DataType: byte
  OrigDataType: byte
T_29: (in __syscall(0x10) : void)
  Class: Eq_29
  DataType: void
  OrigDataType: void
T_30: (in 0x0000 : word16)
  Class: Eq_17
  DataType: (memptr (ptr Eq_16) uint16)
  OrigDataType: word16
T_31: (in di_24 != &Eq_16::w0000 : bool)
  Class: Eq_31
  DataType: bool
  OrigDataType: bool
T_32: (in 0x0001 : word16)
  Class: Eq_32
  DataType: word16
  OrigDataType: word16
T_33: (in si_27 - 0x0001 : word16)
  Class: Eq_5
  DataType: Eq_5
  OrigDataType: word16
T_34: (in 0x0000 : word16)
  Class: Eq_5
  DataType: int16
  OrigDataType: int16
T_35: (in si_27 >= 0x0000 : bool)
  Class: Eq_35
  DataType: bool
  OrigDataType: bool
T_36: (in 0x027F : word16)
  Class: Eq_8
  DataType: uint16
  OrigDataType: word16
T_37: (in 0x007F : word16)
  Class: Eq_37
  DataType: word16
  OrigDataType: word16
T_38: (in bp - 0x007F : word16)
  Class: Eq_12
  DataType: word16
  OrigDataType: word16
T_39: (in 0x0000 : word16)
  Class: Eq_17
  DataType: (memptr (ptr Eq_16) uint16)
  OrigDataType: word16
T_40: (in 0x01DF : word16)
  Class: Eq_5
  DataType: int16
  OrigDataType: word16
*/
typedef Eq_16 Eq_1struct Globals {
	Eq_16 * ptrFFFA0000;	// FFFA0000
} Eq_1;

typedef void (Eq_2)(byte);

typedef union Eq_5 {
	int16 u0;
	uint16 u1;
} Eq_5;

typedef struct Eq_16 {
	uint16 w0000;	// 0
} Eq_16;

typedef void (Eq_27)(byte);

