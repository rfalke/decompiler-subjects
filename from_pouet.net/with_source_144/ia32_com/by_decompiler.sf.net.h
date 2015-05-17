// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_144/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_13: (fn void (word16, byte))
	T_13 (in __outb : ptr32)
Eq_16: (fn void (word16, byte))
	T_16 (in __outb : ptr32)
Eq_19: (fn void (word16, byte))
	T_19 (in __outb : ptr32)
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
T_7: (in al_10 : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_8: (in 0x00 : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_9: (in ax_5 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_10: (in ax : word16)
  Class: Eq_10
  DataType: word16
  OrigDataType: word16
T_11: (in 0x00 : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_12: (in DPB(ax, 0x00, 0, 8) : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_13: (in __outb : ptr32)
  Class: Eq_13
  DataType: (ptr Eq_13)
  OrigDataType: (ptr (fn T_15 (T_14, T_7)))
T_14: (in 0x03C9 : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_15: (in __outb(0x03C9, al_10) : void)
  Class: Eq_15
  DataType: void
  OrigDataType: void
T_16: (in __outb : ptr32)
  Class: Eq_16
  DataType: (ptr Eq_16)
  OrigDataType: (ptr (fn T_18 (T_17, T_7)))
T_17: (in 0x03C9 : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_18: (in __outb(0x03C9, al_10) : void)
  Class: Eq_18
  DataType: void
  OrigDataType: void
T_19: (in __outb : ptr32)
  Class: Eq_19
  DataType: (ptr Eq_19)
  OrigDataType: (ptr (fn T_21 (T_20, T_7)))
T_20: (in 0x03C9 : word16)
  Class: Eq_20
  DataType: word16
  OrigDataType: word16
T_21: (in __outb(0x03C9, al_10) : void)
  Class: Eq_21
  DataType: void
  OrigDataType: void
T_22: (in 0x0001 : word16)
  Class: Eq_22
  DataType: word16
  OrigDataType: word16
T_23: (in ax_5 + 0x0001 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_24: (in (byte) ax_5 : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_25: (in 0x0000 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_26: (in ax_5 != 0x0000 : bool)
  Class: Eq_26
  DataType: bool
  OrigDataType: bool
*/
typedef struct Globals {
} Eq_1;

typedef void (Eq_2)(byte);

typedef void (Eq_13)(word16, byte);

typedef void (Eq_16)(word16, byte);

typedef void (Eq_19)(word16, byte);

