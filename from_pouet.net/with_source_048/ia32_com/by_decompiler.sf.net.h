// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_048/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_13) ptrFFFA0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_13: (segment "Eq_13" (0 byte b0000))
	T_13 (in 0xA000 : selector)
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
T_7: (in dx_19 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_8: (in bx : word16)
  Class: Eq_8
  DataType: word16
  OrigDataType: word16
T_9: (in dx_19 + bx : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_10: (in cx_27 : word16)
  Class: Eq_10
  DataType: word16
  OrigDataType: word16
T_11: (in dx_19 + bx ^ cx_27 : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_12: (in (byte) (dx_19 + bx ^ cx_27) : byte)
  Class: Eq_12
  DataType: byte
  OrigDataType: byte
T_13: (in 0xA000 : selector)
  Class: Eq_13
  DataType: (ptr Eq_13)
  OrigDataType: (ptr (segment))
T_14: (in di_16 : (memptr (ptr Eq_13) byte))
  Class: Eq_14
  DataType: (memptr (ptr Eq_13) byte)
  OrigDataType: (memptr T_13 (struct 0001 (0 T_17 t0000)))
T_15: (in 0x0000 : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_16: (in di_16 + 0x0000 : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_17: (in Mem36[0xA000:di_16 + 0x0000:byte] : byte)
  Class: Eq_12
  DataType: byte
  OrigDataType: byte
T_18: (in 0x0001 : word16)
  Class: Eq_18
  DataType: word16
  OrigDataType: word16
T_19: (in di_16 + 0x0001 : word16)
  Class: Eq_14
  DataType: (memptr (ptr Eq_13) byte)
  OrigDataType: word16
T_20: (in 0x0001 : word16)
  Class: Eq_20
  DataType: word16
  OrigDataType: word16
T_21: (in cx_27 - 0x0001 : word16)
  Class: Eq_10
  DataType: word16
  OrigDataType: word16
T_22: (in 0x0000 : word16)
  Class: Eq_10
  DataType: word16
  OrigDataType: word16
T_23: (in cx_27 != 0x0000 : bool)
  Class: Eq_23
  DataType: bool
  OrigDataType: bool
T_24: (in 0x0001 : word16)
  Class: Eq_24
  DataType: word16
  OrigDataType: word16
T_25: (in dx_19 - 0x0001 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_26: (in 0x0000 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_27: (in dx_19 != 0x0000 : bool)
  Class: Eq_27
  DataType: bool
  OrigDataType: bool
T_28: (in 0x0140 : word16)
  Class: Eq_10
  DataType: word16
  OrigDataType: word16
T_29: (in 0x0001 : word16)
  Class: Eq_29
  DataType: word16
  OrigDataType: word16
T_30: (in bx + 0x0001 : word16)
  Class: Eq_8
  DataType: word16
  OrigDataType: word16
T_31: (in 0x0000 : word16)
  Class: Eq_14
  DataType: (memptr (ptr Eq_13) byte)
  OrigDataType: word16
T_32: (in 0x00C7 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
*/
typedef Eq_13 Eq_1struct Globals {
	Eq_13 * ptrFFFA0000;	// FFFA0000
} Eq_1;

typedef void (Eq_2)(byte);

typedef struct Eq_13 {
	byte b0000;	// 0
} Eq_13;

