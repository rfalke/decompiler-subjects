// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_023/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr (struct "Globals")))
Eq_4: (fn void (byte))
	T_4 (in bios_video_set_mode : ptr32)
	T_5 (in signature of bios_video_set_mode : void)
Eq_8: (fn void (byte))
	T_8 (in __syscall : ptr32)
Eq_11: (union "Eq_11" (bcu8 u0) (word16 u1))
	T_11 (in bh_8 : Eq_11)
	T_14 (in 0x0000 - C : word16)
	T_23 (in 0x00 : byte)
Eq_18: (fn byte (byte))
	T_18 (in __inb : ptr32)
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr Eq_1)
  OrigDataType: (ptr (struct "Globals"))
T_2: (in al_2 : byte)
  Class: Eq_2
  DataType: byte
  OrigDataType: byte
T_3: (in 0x03 : byte)
  Class: Eq_2
  DataType: byte
  OrigDataType: byte
T_4: (in bios_video_set_mode : ptr32)
  Class: Eq_4
  DataType: (ptr Eq_4)
  OrigDataType: (ptr (fn T_7 (T_2)))
T_5: (in signature of bios_video_set_mode : void)
  Class: Eq_4
  DataType: (ptr Eq_4)
  OrigDataType: 
T_6: (in al : byte)
  Class: Eq_2
  DataType: byte
  OrigDataType: byte
T_7: (in bios_video_set_mode(al_2) : void)
  Class: Eq_7
  DataType: void
  OrigDataType: void
T_8: (in __syscall : ptr32)
  Class: Eq_8
  DataType: (ptr Eq_8)
  OrigDataType: (ptr (fn T_10 (T_9)))
T_9: (in 0x15 : byte)
  Class: Eq_9
  DataType: byte
  OrigDataType: byte
T_10: (in __syscall(0x15) : void)
  Class: Eq_10
  DataType: void
  OrigDataType: void
T_11: (in bh_8 : Eq_11)
  Class: Eq_11
  DataType: Eq_11
  OrigDataType: bcu8
T_12: (in 0x0000 : word16)
  Class: Eq_12
  DataType: word16
  OrigDataType: word16
T_13: (in C : byte)
  Class: Eq_13
  DataType: bool
  OrigDataType: bool
T_14: (in 0x0000 - C : word16)
  Class: Eq_11
  DataType: Eq_11
  OrigDataType: word16
T_15: (in cond(bh_8) : byte)
  Class: Eq_15
  DataType: bool
  OrigDataType: bool
T_16: (in !cond(bh_8) : bool)
  Class: Eq_13
  DataType: bool
  OrigDataType: bool
T_17: (in 0x00 : byte)
  Class: Eq_2
  DataType: byte
  OrigDataType: byte
T_18: (in __inb : ptr32)
  Class: Eq_18
  DataType: (ptr Eq_18)
  OrigDataType: (ptr (fn T_20 (T_19)))
T_19: (in 0x60 : byte)
  Class: Eq_19
  DataType: byte
  OrigDataType: byte
T_20: (in __inb(0x60) : byte)
  Class: Eq_20
  DataType: byte
  OrigDataType: byte
T_21: (in 0x01 : byte)
  Class: Eq_20
  DataType: byte
  OrigDataType: byte
T_22: (in __inb(0x60) != 0x01 : bool)
  Class: Eq_22
  DataType: bool
  OrigDataType: bool
T_23: (in 0x00 : byte)
  Class: Eq_11
  DataType: bcu8
  OrigDataType: bcu8
T_24: (in bh_8 <u 0x00 : bool)
  Class: Eq_24
  DataType: bool
  OrigDataType: bool
*/
typedef struct Globals {
} Eq_1;

typedef void (Eq_4)(byte);

typedef void (Eq_8)(byte);

typedef union Eq_11 {
	bcu8 u0;
	word16 u1;
} Eq_11;

typedef byte (Eq_18)(byte);

