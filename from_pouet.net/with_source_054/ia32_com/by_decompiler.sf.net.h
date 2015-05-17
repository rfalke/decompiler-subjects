// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_054/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_30) ptrFFFA0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_7: (fn void (word16, byte))
	T_7 (in __outb : ptr32)
Eq_11: (fn void (word16, byte))
	T_11 (in __outb : ptr32)
Eq_14: (fn void (word16, byte))
	T_14 (in __outb : ptr32)
Eq_18: (fn void (word16, byte))
	T_18 (in __outb : ptr32)
Eq_30: (segment "Eq_30")
	T_30 (in 0xA000 : selector)
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
  DataType: byte
  OrigDataType: byte
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
T_14: (in __outb : ptr32)
  Class: Eq_14
  DataType: (ptr Eq_14)
  OrigDataType: (ptr (fn T_17 (T_15, T_16)))
T_15: (in 0x03C9 : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_16: (in 0x00 : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_17: (in __outb(0x03C9, 0x00) : void)
  Class: Eq_17
  DataType: void
  OrigDataType: void
T_18: (in __outb : ptr32)
  Class: Eq_18
  DataType: (ptr Eq_18)
  OrigDataType: (ptr (fn T_21 (T_19, T_20)))
T_19: (in 0x03C9 : word16)
  Class: Eq_19
  DataType: word16
  OrigDataType: word16
T_20: (in 0x00 : byte)
  Class: Eq_20
  DataType: byte
  OrigDataType: byte
T_21: (in __outb(0x03C9, 0x00) : void)
  Class: Eq_21
  DataType: void
  OrigDataType: void
T_22: (in cx : word16)
  Class: Eq_22
  DataType: word16
  OrigDataType: word16
T_23: (in 0x0001 : word16)
  Class: Eq_23
  DataType: word16
  OrigDataType: word16
T_24: (in cx - 0x0001 : word16)
  Class: Eq_22
  DataType: word16
  OrigDataType: word16
T_25: (in (byte) cx : byte)
  Class: Eq_9
  DataType: byte
  OrigDataType: byte
T_26: (in 0x0000 : word16)
  Class: Eq_22
  DataType: word16
  OrigDataType: word16
T_27: (in cx != 0x0000 : bool)
  Class: Eq_27
  DataType: bool
  OrigDataType: bool
T_28: (in bx : (memptr (ptr Eq_30) byte))
  Class: Eq_28
  DataType: (memptr (ptr Eq_30) byte)
  OrigDataType: (memptr T_30 (struct (0 T_33 t0000)))
T_29: (in bx + cx : word16)
  Class: Eq_28
  DataType: (memptr (ptr Eq_30) byte)
  OrigDataType: word16
T_30: (in 0xA000 : selector)
  Class: Eq_30
  DataType: (ptr Eq_30)
  OrigDataType: (ptr (segment))
T_31: (in 0x0000 : word16)
  Class: Eq_31
  DataType: word16
  OrigDataType: word16
T_32: (in bx + 0x0000 : word16)
  Class: Eq_32
  DataType: word16
  OrigDataType: word16
T_33: (in Mem24[0xA000:bx + 0x0000:byte] : byte)
  Class: Eq_9
  DataType: byte
  OrigDataType: byte
T_34: (in 0x0012 : word16)
  Class: Eq_34
  DataType: word16
  OrigDataType: word16
T_35: (in cx + 0x0012 : word16)
  Class: Eq_22
  DataType: word16
  OrigDataType: word16
T_36: (in (byte) cx : byte)
  Class: Eq_9
  DataType: byte
  OrigDataType: byte
*/
typedef Eq_30 Eq_1struct Globals {
	Eq_30 * ptrFFFA0000;	// FFFA0000
} Eq_1;

typedef void (Eq_2)(byte);

typedef void (Eq_7)(word16, byte);

typedef void (Eq_11)(word16, byte);

typedef void (Eq_14)(word16, byte);

typedef void (Eq_18)(word16, byte);

typedef struct Eq_30 {
} Eq_30;

