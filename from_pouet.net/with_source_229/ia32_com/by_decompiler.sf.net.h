// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_229/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_7: (fn void (word16, uint8))
	T_7 (in __outb : ptr32)
Eq_11: (fn void (word16, uint8))
	T_11 (in __outb : ptr32)
Eq_14: (union "Eq_14" (uint16 u0) (byte u1))
	T_14 (in al_17 : Eq_14)
	T_16 (in cl >>u 0x02 : word16)
Eq_17: (fn void (word16, Eq_14))
	T_17 (in __outb : ptr32)
Eq_20: (fn void (word16, Eq_14))
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
T_7: (in __outb : ptr32)
  Class: Eq_7
  DataType: (ptr Eq_7)
  OrigDataType: (ptr (fn T_10 (T_8, T_9)))
T_8: (in 0x03C8 : word16)
  Class: Eq_8
  DataType: word16
  OrigDataType: word16
T_9: (in cl : byte)
  Class: Eq_9
  DataType: uint8
  OrigDataType: uint8
T_10: (in __outb(0x03C8, cl) : void)
  Class: Eq_10
  DataType: void
  OrigDataType: void
T_11: (in __outb : ptr32)
  Class: Eq_11
  DataType: (ptr Eq_11)
  OrigDataType: (ptr (fn T_13 (T_12, T_9)))
T_12: (in 0x03C9 : word16)
  Class: Eq_12
  DataType: word16
  OrigDataType: word16
T_13: (in __outb(0x03C9, cl) : void)
  Class: Eq_13
  DataType: void
  OrigDataType: void
T_14: (in al_17 : Eq_14)
  Class: Eq_14
  DataType: Eq_14
  OrigDataType: byte
T_15: (in 0x02 : byte)
  Class: Eq_15
  DataType: uint8
  OrigDataType: uint8
T_16: (in cl >>u 0x02 : word16)
  Class: Eq_14
  DataType: Eq_14
  OrigDataType: uint16
T_17: (in __outb : ptr32)
  Class: Eq_17
  DataType: (ptr Eq_17)
  OrigDataType: (ptr (fn T_19 (T_18, T_14)))
T_18: (in 0x03C9 : word16)
  Class: Eq_18
  DataType: word16
  OrigDataType: word16
T_19: (in __outb(0x03C9, al_17) : void)
  Class: Eq_19
  DataType: void
  OrigDataType: void
T_20: (in __outb : ptr32)
  Class: Eq_20
  DataType: (ptr Eq_20)
  OrigDataType: (ptr (fn T_22 (T_21, T_14)))
T_21: (in 0x03C9 : word16)
  Class: Eq_21
  DataType: word16
  OrigDataType: word16
T_22: (in __outb(0x03C9, al_17) : void)
  Class: Eq_22
  DataType: void
  OrigDataType: void
T_23: (in cx : word16)
  Class: Eq_23
  DataType: word16
  OrigDataType: word16
T_24: (in 0x0001 : word16)
  Class: Eq_24
  DataType: word16
  OrigDataType: word16
T_25: (in cx - 0x0001 : word16)
  Class: Eq_23
  DataType: word16
  OrigDataType: word16
T_26: (in (byte) cx : byte)
  Class: Eq_9
  DataType: uint8
  OrigDataType: byte
T_27: (in 0x0000 : word16)
  Class: Eq_23
  DataType: word16
  OrigDataType: word16
T_28: (in cx != 0x0000 : bool)
  Class: Eq_28
  DataType: bool
  OrigDataType: bool
*/
typedef struct Globals {
} Eq_1;

typedef void (Eq_2)(byte);

typedef void (Eq_7)(word16, uint8);

typedef void (Eq_11)(word16, uint8);

typedef union Eq_14 {
	uint16 u0;
	byte u1;
} Eq_14;

typedef void (Eq_17)(word16, Eq_14);

typedef void (Eq_20)(word16, Eq_14);

