// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_347/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (segment "Eq_2")
	T_2 (in cs : selector)
Eq_5: (segment "Eq_5" (4F6 word16 w04F6))
	T_5 (in ds : (ptr Eq_5))
Eq_8: (fn void (byte))
	T_8 (in bios_video_set_mode : ptr32)
	T_9 (in signature of bios_video_set_mode : void)
Eq_13: (fn void (word16, byte))
	T_13 (in __outb : ptr32)
Eq_19: (union "Eq_19" (uint16 u0) (byte u1))
	T_19 (in al_22 : Eq_19)
	T_21 (in ah_15 >>u 0x02 : word16)
Eq_22: (fn void (word16, Eq_19))
	T_22 (in __outb : ptr32)
Eq_25: (fn void (word16, Eq_19))
	T_25 (in __outb : ptr32)
Eq_28: (fn void (word16, Eq_19))
	T_28 (in __outb : ptr32)
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr Eq_1)
  OrigDataType: (ptr (struct "Globals"))
T_2: (in cs : selector)
  Class: Eq_2
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (segment))
T_3: (in 0x1000 : word16)
  Class: Eq_3
  DataType: word16
  OrigDataType: word16
T_4: (in cs + 0x1000 : word16)
  Class: Eq_4
  DataType: word16
  OrigDataType: word16
T_5: (in ds : (ptr Eq_5))
  Class: Eq_5
  DataType: (ptr Eq_5)
  OrigDataType: (ptr (segment (4F6 T_7 t04F6)))
T_6: (in 0x04F6 : word16)
  Class: Eq_6
  DataType: (memptr (ptr Eq_5) word16)
  OrigDataType: (memptr T_5 (struct (0 T_7 t0000)))
T_7: (in Mem5[ds:0x04F6:word16] : word16)
  Class: Eq_4
  DataType: word16
  OrigDataType: word16
T_8: (in bios_video_set_mode : ptr32)
  Class: Eq_8
  DataType: (ptr Eq_8)
  OrigDataType: (ptr (fn T_12 (T_11)))
T_9: (in signature of bios_video_set_mode : void)
  Class: Eq_8
  DataType: (ptr Eq_8)
  OrigDataType: 
T_10: (in al : byte)
  Class: Eq_10
  DataType: byte
  OrigDataType: byte
T_11: (in 0x13 : byte)
  Class: Eq_10
  DataType: byte
  OrigDataType: byte
T_12: (in bios_video_set_mode(0x13) : void)
  Class: Eq_12
  DataType: void
  OrigDataType: void
T_13: (in __outb : ptr32)
  Class: Eq_13
  DataType: (ptr Eq_13)
  OrigDataType: (ptr (fn T_16 (T_14, T_15)))
T_14: (in 0x03C8 : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_15: (in 0x00 : byte)
  Class: Eq_15
  DataType: byte
  OrigDataType: byte
T_16: (in __outb(0x03C8, 0x00) : void)
  Class: Eq_16
  DataType: void
  OrigDataType: void
T_17: (in ah_15 : uint8)
  Class: Eq_17
  DataType: uint8
  OrigDataType: uint8
T_18: (in 0x00 : byte)
  Class: Eq_17
  DataType: uint8
  OrigDataType: byte
T_19: (in al_22 : Eq_19)
  Class: Eq_19
  DataType: Eq_19
  OrigDataType: byte
T_20: (in 0x02 : byte)
  Class: Eq_20
  DataType: uint8
  OrigDataType: uint8
T_21: (in ah_15 >>u 0x02 : word16)
  Class: Eq_19
  DataType: Eq_19
  OrigDataType: uint16
T_22: (in __outb : ptr32)
  Class: Eq_22
  DataType: (ptr Eq_22)
  OrigDataType: (ptr (fn T_24 (T_23, T_19)))
T_23: (in 0x03C9 : word16)
  Class: Eq_23
  DataType: word16
  OrigDataType: word16
T_24: (in __outb(0x03C9, al_22) : void)
  Class: Eq_24
  DataType: void
  OrigDataType: void
T_25: (in __outb : ptr32)
  Class: Eq_25
  DataType: (ptr Eq_25)
  OrigDataType: (ptr (fn T_27 (T_26, T_19)))
T_26: (in 0x03C9 : word16)
  Class: Eq_26
  DataType: word16
  OrigDataType: word16
T_27: (in __outb(0x03C9, al_22) : void)
  Class: Eq_27
  DataType: void
  OrigDataType: void
T_28: (in __outb : ptr32)
  Class: Eq_28
  DataType: (ptr Eq_28)
  OrigDataType: (ptr (fn T_30 (T_29, T_19)))
T_29: (in 0x03C9 : word16)
  Class: Eq_29
  DataType: word16
  OrigDataType: word16
T_30: (in __outb(0x03C9, al_22) : void)
  Class: Eq_30
  DataType: void
  OrigDataType: void
T_31: (in 0x01 : byte)
  Class: Eq_31
  DataType: byte
  OrigDataType: byte
T_32: (in ah_15 + 0x01 : byte)
  Class: Eq_17
  DataType: uint8
  OrigDataType: byte
T_33: (in 0x00 : byte)
  Class: Eq_17
  DataType: uint8
  OrigDataType: byte
T_34: (in ah_15 != 0x00 : bool)
  Class: Eq_34
  DataType: bool
  OrigDataType: bool
*/
typedef struct Globals {
} Eq_1;

typedef struct Eq_2 {
} Eq_2;

typedef struct Eq_5 {
	word16 w04F6;	// 4F6
} Eq_5;

typedef void (Eq_8)(byte);

typedef void (Eq_13)(word16, byte);

typedef union Eq_19 {
	uint16 u0;
	byte u1;
} Eq_19;

typedef void (Eq_22)(word16, Eq_19);

typedef void (Eq_25)(word16, Eq_19);

typedef void (Eq_28)(word16, Eq_19);

