// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_388/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr (struct "Globals")))
Eq_3: (fn word16 (byte))
	T_3 (in __aam : ptr32)
Eq_6: (segment "Eq_6")
	T_6 (in ds : (ptr Eq_6))
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr Eq_1)
  OrigDataType: (ptr (struct "Globals"))
T_2: (in ax_8 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_3: (in __aam : ptr32)
  Class: Eq_3
  DataType: (ptr Eq_3)
  OrigDataType: (ptr (fn T_5 (T_4)))
T_4: (in al : byte)
  Class: Eq_4
  DataType: byte
  OrigDataType: byte
T_5: (in __aam(al) : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_6: (in ds : (ptr Eq_6))
  Class: Eq_6
  DataType: (ptr Eq_6)
  OrigDataType: (ptr (segment))
T_7: (in bx : (memptr (ptr Eq_6) word16))
  Class: Eq_7
  DataType: (memptr (ptr Eq_6) word16)
  OrigDataType: (memptr T_6 (struct (0 T_10 t0000)))
T_8: (in si : word16)
  Class: Eq_8
  DataType: word16
  OrigDataType: word16
T_9: (in bx + si : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_10: (in Mem0[ds:bx + si:word16] : word16)
  Class: Eq_10
  DataType: word16
  OrigDataType: word16
T_11: (in (byte) ax_8 : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_12: (in DPB(ax_8, (byte) ax_8, 0, 8) : word16)
  Class: Eq_12
  DataType: word16
  OrigDataType: word16
T_13: (in bx[si] + DPB(ax_8, (byte) ax_8, 0, 8) : word16)
  Class: Eq_10
  DataType: word16
  OrigDataType: word16
T_14: (in bx + si : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_15: (in Mem17[ds:bx + si:word16] : word16)
  Class: Eq_10
  DataType: word16
  OrigDataType: word16
*/
typedef struct Globals {
} Eq_1;

typedef word16 (Eq_3)(byte);

typedef struct Eq_6 {
} Eq_6;

