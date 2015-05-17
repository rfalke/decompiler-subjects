// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_128/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_11: (fn void (word16, byte))
	T_11 (in __outb : ptr32)
Eq_14: (fn void (word16, byte))
	T_14 (in __outb : ptr32)
Eq_17: (fn void (word16, byte))
	T_17 (in __outb : ptr32)
Eq_20: (fn void (word16, byte))
	T_20 (in __outb : ptr32)
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
T_7: (in cx_16 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_8: (in 0x0000 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_9: (in cl_17 : byte)
  Class: Eq_9
  DataType: byte
  OrigDataType: byte
T_10: (in 0x00 : byte)
  Class: Eq_9
  DataType: byte
  OrigDataType: byte
T_11: (in __outb : ptr32)
  Class: Eq_11
  DataType: (ptr Eq_11)
  OrigDataType: (ptr (fn T_13 (T_12, T_9)))
T_12: (in 0x03C8 : word16)
  Class: Eq_12
  DataType: word16
  OrigDataType: word16
T_13: (in __outb(0x03C8, cl_17) : void)
  Class: Eq_13
  DataType: void
  OrigDataType: void
T_14: (in __outb : ptr32)
  Class: Eq_14
  DataType: (ptr Eq_14)
  OrigDataType: (ptr (fn T_16 (T_15, T_9)))
T_15: (in 0x03C9 : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_16: (in __outb(0x03C9, cl_17) : void)
  Class: Eq_16
  DataType: void
  OrigDataType: void
T_17: (in __outb : ptr32)
  Class: Eq_17
  DataType: (ptr Eq_17)
  OrigDataType: (ptr (fn T_19 (T_18, T_9)))
T_18: (in 0x03C9 : word16)
  Class: Eq_18
  DataType: word16
  OrigDataType: word16
T_19: (in __outb(0x03C9, cl_17) : void)
  Class: Eq_19
  DataType: void
  OrigDataType: void
T_20: (in __outb : ptr32)
  Class: Eq_20
  DataType: (ptr Eq_20)
  OrigDataType: (ptr (fn T_24 (T_21, T_23)))
T_21: (in 0x03C9 : word16)
  Class: Eq_21
  DataType: word16
  OrigDataType: word16
T_22: (in 0x88 : byte)
  Class: Eq_22
  DataType: byte
  OrigDataType: byte
T_23: (in cl_17 & 0x88 : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_24: (in __outb(0x03C9, cl_17 & 0x88) : void)
  Class: Eq_24
  DataType: void
  OrigDataType: void
T_25: (in 0x0001 : word16)
  Class: Eq_25
  DataType: word16
  OrigDataType: word16
T_26: (in cx_16 - 0x0001 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_27: (in (byte) cx_16 : byte)
  Class: Eq_9
  DataType: byte
  OrigDataType: byte
T_28: (in 0x0000 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_29: (in cx_16 != 0x0000 : bool)
  Class: Eq_29
  DataType: bool
  OrigDataType: bool
*/
typedef struct Globals {
} Eq_1;

typedef void (Eq_2)(byte);

typedef void (Eq_11)(word16, byte);

typedef void (Eq_14)(word16, byte);

typedef void (Eq_17)(word16, byte);

typedef void (Eq_20)(word16, byte);

