// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_024/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_7) ptrFFFA0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_7: (segment "Eq_7")
	T_7 (in 0xA000 : selector)
Eq_21: (fn byte (byte))
	T_21 (in __inb : ptr32)
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
T_7: (in 0xA000 : selector)
  Class: Eq_7
  DataType: (ptr Eq_7)
  OrigDataType: (ptr (segment))
T_8: (in di : (memptr (ptr Eq_7) byte))
  Class: Eq_8
  DataType: (memptr (ptr Eq_7) byte)
  OrigDataType: (memptr T_7 (struct (0 T_11 t0000)))
T_9: (in 0x0000 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_10: (in di + 0x0000 : word16)
  Class: Eq_10
  DataType: word16
  OrigDataType: word16
T_11: (in Mem0[0xA000:di + 0x0000:byte] : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_12: (in 0x01 : byte)
  Class: Eq_12
  DataType: byte
  OrigDataType: byte
T_13: (in 0xA000->*di + 0x01 : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_14: (in 0x0000 : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_15: (in di + 0x0000 : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_16: (in Mem18[0xA000:di + 0x0000:byte] : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_17: (in 0x0001 : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_18: (in di + 0x0001 : word16)
  Class: Eq_18
  DataType: word16
  OrigDataType: word16
T_19: (in 0x0140 : word16)
  Class: Eq_19
  DataType: word16
  OrigDataType: word16
T_20: (in di + 1 + 0x0140 : word16)
  Class: Eq_8
  DataType: (memptr (ptr Eq_7) byte)
  OrigDataType: word16
T_21: (in __inb : ptr32)
  Class: Eq_21
  DataType: (ptr Eq_21)
  OrigDataType: (ptr (fn T_23 (T_22)))
T_22: (in 0x60 : byte)
  Class: Eq_22
  DataType: byte
  OrigDataType: byte
T_23: (in __inb(0x60) : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_24: (in 0x01 : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_25: (in __inb(0x60) != 0x01 : bool)
  Class: Eq_25
  DataType: bool
  OrigDataType: bool
*/
typedef Eq_7 Eq_1struct Globals {
	Eq_7 * ptrFFFA0000;	// FFFA0000
} Eq_1;

typedef void (Eq_2)(byte);

typedef struct Eq_7 {
} Eq_7;

typedef byte (Eq_21)(byte);

