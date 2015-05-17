// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_222/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFF90000 (ptr Eq_30) ptrFFF90000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_7: (fn void (word16, byte))
	T_7 (in __outb : ptr32)
Eq_17: (fn void (word16, byte))
	T_17 (in __outb : ptr32)
Eq_20: (fn void (word16, byte))
	T_20 (in __outb : ptr32)
Eq_23: (fn void (word16, byte))
	T_23 (in __outb : ptr32)
Eq_30: (segment "Eq_30")
	T_30 (in 0x9000 : selector)
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
T_11: (in al_11 : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_12: (in 0x00 : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_13: (in ax_13 : word16)
  Class: Eq_13
  DataType: word16
  OrigDataType: word16
T_14: (in ax : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_15: (in 0x00 : byte)
  Class: Eq_15
  DataType: byte
  OrigDataType: byte
T_16: (in DPB(ax, 0x00, 0, 8) : word16)
  Class: Eq_13
  DataType: word16
  OrigDataType: word16
T_17: (in __outb : ptr32)
  Class: Eq_17
  DataType: (ptr Eq_17)
  OrigDataType: (ptr (fn T_19 (T_18, T_11)))
T_18: (in 0x03C9 : word16)
  Class: Eq_18
  DataType: word16
  OrigDataType: word16
T_19: (in __outb(0x03C9, al_11) : void)
  Class: Eq_19
  DataType: void
  OrigDataType: void
T_20: (in __outb : ptr32)
  Class: Eq_20
  DataType: (ptr Eq_20)
  OrigDataType: (ptr (fn T_22 (T_21, T_11)))
T_21: (in 0x03C9 : word16)
  Class: Eq_21
  DataType: word16
  OrigDataType: word16
T_22: (in __outb(0x03C9, al_11) : void)
  Class: Eq_22
  DataType: void
  OrigDataType: void
T_23: (in __outb : ptr32)
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: (ptr (fn T_25 (T_24, T_11)))
T_24: (in 0x03C9 : word16)
  Class: Eq_24
  DataType: word16
  OrigDataType: word16
T_25: (in __outb(0x03C9, al_11) : void)
  Class: Eq_25
  DataType: void
  OrigDataType: void
T_26: (in di : (memptr (ptr Eq_30) byte))
  Class: Eq_26
  DataType: (memptr (ptr Eq_30) byte)
  OrigDataType: (memptr T_30 (struct 0001 (0 T_33 t0000)))
T_27: (in 0x0001 : word16)
  Class: Eq_27
  DataType: word16
  OrigDataType: word16
T_28: (in di + 0x0001 : word16)
  Class: Eq_26
  DataType: (memptr (ptr Eq_30) byte)
  OrigDataType: word16
T_29: (in 0x00 : byte)
  Class: Eq_29
  DataType: byte
  OrigDataType: byte
T_30: (in 0x9000 : selector)
  Class: Eq_30
  DataType: (ptr Eq_30)
  OrigDataType: (ptr (segment))
T_31: (in 0x0000 : word16)
  Class: Eq_31
  DataType: word16
  OrigDataType: word16
T_32: (in di + 0x0000 : word16)
  Class: Eq_32
  DataType: word16
  OrigDataType: word16
T_33: (in Mem23[0x9000:di + 0x0000:byte] : byte)
  Class: Eq_29
  DataType: byte
  OrigDataType: byte
T_34: (in 0x0001 : word16)
  Class: Eq_34
  DataType: word16
  OrigDataType: word16
T_35: (in ax_13 + 0x0001 : word16)
  Class: Eq_13
  DataType: word16
  OrigDataType: word16
T_36: (in (byte) ax_13 : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_37: (in 0x0000 : word16)
  Class: Eq_13
  DataType: word16
  OrigDataType: word16
T_38: (in ax_13 != 0x0000 : bool)
  Class: Eq_38
  DataType: bool
  OrigDataType: bool
*/
typedef Eq_30 Eq_1struct Globals {
	Eq_30 * ptrFFF90000;	// FFF90000
} Eq_1;

typedef void (Eq_2)(byte);

typedef void (Eq_7)(word16, byte);

typedef void (Eq_17)(word16, byte);

typedef void (Eq_20)(word16, byte);

typedef void (Eq_23)(word16, byte);

typedef struct Eq_30 {
} Eq_30;

