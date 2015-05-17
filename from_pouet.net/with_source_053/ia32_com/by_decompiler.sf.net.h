// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_053/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_11) ptrFFFA0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_11: (segment "Eq_11" (FFFFFA00 byte bFFFFFA00) (0 byte b0000) (FA00 byte bFA00))
	T_11 (in 0xA000 : selector)
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
T_7: (in al_16 : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_8: (in 0x13 : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_9: (in di_20 : (memptr (ptr Eq_11) byte))
  Class: Eq_9
  DataType: (memptr (ptr Eq_11) byte)
  OrigDataType: (memptr T_11 (struct 0001 (0 T_14 t0000)))
T_10: (in 0x0000 : word16)
  Class: Eq_9
  DataType: (memptr (ptr Eq_11) byte)
  OrigDataType: word16
T_11: (in 0xA000 : selector)
  Class: Eq_11
  DataType: (ptr Eq_11)
  OrigDataType: (ptr (segment))
T_12: (in 0x0000 : word16)
  Class: Eq_12
  DataType: word16
  OrigDataType: word16
T_13: (in di_20 + 0x0000 : word16)
  Class: Eq_13
  DataType: word16
  OrigDataType: word16
T_14: (in Mem34[0xA000:di_20 + 0x0000:byte] : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_15: (in 0x0001 : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_16: (in di_20 + 0x0001 : word16)
  Class: Eq_9
  DataType: (memptr (ptr Eq_11) byte)
  OrigDataType: word16
T_17: (in cx_31 : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_18: (in 0x0001 : word16)
  Class: Eq_18
  DataType: word16
  OrigDataType: word16
T_19: (in cx_31 - 0x0001 : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_20: (in 0x0000 : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_21: (in cx_31 == 0x0000 : bool)
  Class: Eq_21
  DataType: bool
  OrigDataType: bool
T_22: (in 0xFA00 : word16)
  Class: Eq_9
  DataType: (memptr (ptr Eq_11) byte)
  OrigDataType: word16
T_23: (in di_20 == &Eq_11::bFFFFFA00 : bool)
  Class: Eq_23
  DataType: bool
  OrigDataType: bool
T_24: (in dx_22 : word16)
  Class: Eq_24
  DataType: word16
  OrigDataType: word16
T_25: (in 0x0001 : word16)
  Class: Eq_25
  DataType: word16
  OrigDataType: word16
T_26: (in dx_22 - 0x0001 : word16)
  Class: Eq_24
  DataType: word16
  OrigDataType: word16
T_27: (in 0x0000 : word16)
  Class: Eq_24
  DataType: word16
  OrigDataType: word16
T_28: (in dx_22 == 0x0000 : bool)
  Class: Eq_28
  DataType: bool
  OrigDataType: bool
T_29: (in 0x00C8 : word16)
  Class: Eq_24
  DataType: word16
  OrigDataType: word16
T_30: (in 0x1C : byte)
  Class: Eq_30
  DataType: byte
  OrigDataType: byte
T_31: (in al_16 ^ 0x1C : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_32: (in 0x0028 : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
*/
typedef Eq_11 Eq_1struct Globals {
	Eq_11 * ptrFFFA0000;	// FFFA0000
} Eq_1;

typedef void (Eq_2)(byte);

typedef struct Eq_11 {
	byte bFFFFFA00;	// FFFFFA00
	byte b0000;	// 0
	byte bFA00;	// FA00
} Eq_11;

