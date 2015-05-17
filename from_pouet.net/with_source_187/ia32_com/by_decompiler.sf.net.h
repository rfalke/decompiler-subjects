// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_187/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_7: (fn void (word16, byte))
	T_7 (in __outb : ptr32)
Eq_15: (fn void (word16, byte))
	T_15 (in __outb : ptr32)
Eq_18: (fn void (word16, byte))
	T_18 (in __outb : ptr32)
Eq_21: (fn void (word16, byte))
	T_21 (in __outb : ptr32)
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
T_9: (in 0x00 : byte)
  Class: Eq_9
  DataType: byte
  OrigDataType: byte
T_10: (in __outb(0x03C8, 0x00) : void)
  Class: Eq_10
  DataType: void
  OrigDataType: void
T_11: (in al_10 : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_12: (in 0x00 : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_13: (in cx_16 : word16)
  Class: Eq_13
  DataType: word16
  OrigDataType: word16
T_14: (in 0x0040 : word16)
  Class: Eq_13
  DataType: word16
  OrigDataType: word16
T_15: (in __outb : ptr32)
  Class: Eq_15
  DataType: (ptr Eq_15)
  OrigDataType: (ptr (fn T_17 (T_16, T_11)))
T_16: (in 0x03C9 : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_17: (in __outb(0x03C9, al_10) : void)
  Class: Eq_17
  DataType: void
  OrigDataType: void
T_18: (in __outb : ptr32)
  Class: Eq_18
  DataType: (ptr Eq_18)
  OrigDataType: (ptr (fn T_20 (T_19, T_11)))
T_19: (in 0x03C9 : word16)
  Class: Eq_19
  DataType: word16
  OrigDataType: word16
T_20: (in __outb(0x03C9, al_10) : void)
  Class: Eq_20
  DataType: void
  OrigDataType: void
T_21: (in __outb : ptr32)
  Class: Eq_21
  DataType: (ptr Eq_21)
  OrigDataType: (ptr (fn T_23 (T_22, T_11)))
T_22: (in 0x03C9 : word16)
  Class: Eq_22
  DataType: word16
  OrigDataType: word16
T_23: (in __outb(0x03C9, al_10) : void)
  Class: Eq_23
  DataType: void
  OrigDataType: void
T_24: (in 0x01 : byte)
  Class: Eq_24
  DataType: byte
  OrigDataType: byte
T_25: (in al_10 + 0x01 : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_26: (in 0x0001 : word16)
  Class: Eq_26
  DataType: word16
  OrigDataType: word16
T_27: (in cx_16 - 0x0001 : word16)
  Class: Eq_13
  DataType: word16
  OrigDataType: word16
T_28: (in 0x0000 : word16)
  Class: Eq_13
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

typedef void (Eq_7)(word16, byte);

typedef void (Eq_15)(word16, byte);

typedef void (Eq_18)(word16, byte);

typedef void (Eq_21)(word16, byte);

