// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_201/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_9: (union "Eq_9" (int8 u0) (uint8 u1))
	T_9 (in cl_14 : Eq_9)
	T_10 (in 0x00 : byte)
	T_12 (in al_18 : Eq_9)
	T_30 (in (byte) cx_13 : byte)
	T_33 (in ~cl_14 : byte)
	T_37 (in 0x00 : byte)
Eq_11: (union "Eq_11" (uint8 u0) (uint16 u1))
	T_11 (in al_24 : Eq_11)
	T_14 (in al_18 >>u 0x01 : word16)
Eq_15: (fn void (word16, Eq_11))
	T_15 (in __outb : ptr32)
Eq_18: (fn void (word16, Eq_11))
	T_18 (in __outb : ptr32)
Eq_21: (fn void (word16, byte))
	T_21 (in __outb : ptr32)
Eq_34: (fn void (word16, Eq_9))
	T_34 (in __outb : ptr32)
Eq_39: (segment "Eq_39" (100 word16 w0100))
	T_39 (in ds : (ptr Eq_39))
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
T_7: (in cx_13 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_8: (in 0x0000 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_9: (in cl_14 : Eq_9)
  Class: Eq_9
  DataType: Eq_9
  OrigDataType: (union (int8 u0) (uint8 u1))
T_10: (in 0x00 : byte)
  Class: Eq_9
  DataType: int8
  OrigDataType: byte
T_11: (in al_24 : Eq_11)
  Class: Eq_11
  DataType: Eq_11
  OrigDataType: uint8
T_12: (in al_18 : Eq_9)
  Class: Eq_9
  DataType: Eq_9
  OrigDataType: uint8
T_13: (in 0x01 : byte)
  Class: Eq_13
  DataType: uint8
  OrigDataType: uint8
T_14: (in al_18 >>u 0x01 : word16)
  Class: Eq_11
  DataType: Eq_11
  OrigDataType: uint16
T_15: (in __outb : ptr32)
  Class: Eq_15
  DataType: (ptr Eq_15)
  OrigDataType: (ptr (fn T_17 (T_16, T_11)))
T_16: (in 0x03C9 : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_17: (in __outb(0x03C9, al_24) : void)
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
T_20: (in __outb(0x03C9, al_24) : void)
  Class: Eq_20
  DataType: void
  OrigDataType: void
T_21: (in __outb : ptr32)
  Class: Eq_21
  DataType: (ptr Eq_21)
  OrigDataType: (ptr (fn T_27 (T_22, T_26)))
T_22: (in 0x03C9 : word16)
  Class: Eq_22
  DataType: word16
  OrigDataType: word16
T_23: (in cl_14 *u al_24 : uint16)
  Class: Eq_23
  DataType: uint16
  OrigDataType: uint16
T_24: (in SLICE(cl_14 *u al_24, byte, 8) : byte)
  Class: Eq_24
  DataType: byte
  OrigDataType: byte
T_25: (in 0x13 : byte)
  Class: Eq_25
  DataType: byte
  OrigDataType: byte
T_26: (in SLICE(cl_14 *u al_24, byte, 8) + 0x13 : byte)
  Class: Eq_26
  DataType: byte
  OrigDataType: byte
T_27: (in __outb(0x03C9, SLICE(cl_14 *u al_24, byte, 8) + 0x13) : void)
  Class: Eq_27
  DataType: void
  OrigDataType: void
T_28: (in 0x0001 : word16)
  Class: Eq_28
  DataType: word16
  OrigDataType: word16
T_29: (in cx_13 - 0x0001 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_30: (in (byte) cx_13 : byte)
  Class: Eq_9
  DataType: Eq_9
  OrigDataType: byte
T_31: (in 0x0000 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_32: (in cx_13 != 0x0000 : bool)
  Class: Eq_32
  DataType: bool
  OrigDataType: bool
T_33: (in ~cl_14 : byte)
  Class: Eq_9
  DataType: Eq_9
  OrigDataType: byte
T_34: (in __outb : ptr32)
  Class: Eq_34
  DataType: (ptr Eq_34)
  OrigDataType: (ptr (fn T_36 (T_35, T_9)))
T_35: (in 0x03C8 : word16)
  Class: Eq_35
  DataType: word16
  OrigDataType: word16
T_36: (in __outb(0x03C8, cl_14) : void)
  Class: Eq_36
  DataType: void
  OrigDataType: void
T_37: (in 0x00 : byte)
  Class: Eq_9
  DataType: int8
  OrigDataType: int8
T_38: (in cl_14 >= 0x00 : bool)
  Class: Eq_38
  DataType: bool
  OrigDataType: bool
T_39: (in ds : (ptr Eq_39))
  Class: Eq_39
  DataType: (ptr Eq_39)
  OrigDataType: (ptr (segment (100 T_41 t0100)))
T_40: (in 0x0100 : word16)
  Class: Eq_40
  DataType: (memptr (ptr Eq_39) word16)
  OrigDataType: (memptr T_39 (struct (0 T_41 t0000)))
T_41: (in Mem0[ds:0x0100:word16] : word16)
  Class: Eq_41
  DataType: word16
  OrigDataType: word16
T_42: (in 0x0001 : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_43: (in ds->w0100 + 0x0001 : word16)
  Class: Eq_41
  DataType: word16
  OrigDataType: word16
T_44: (in Mem35[ds:0x0100:word16] : word16)
  Class: Eq_41
  DataType: word16
  OrigDataType: word16
*/
typedef struct Globals {
} Eq_1;

typedef void (Eq_2)(byte);

typedef union Eq_9 {
	int8 u0;
	uint8 u1;
} Eq_9;

typedef union Eq_11 {
	uint8 u0;
	uint16 u1;
} Eq_11;

typedef void (Eq_15)(word16, Eq_11);

typedef void (Eq_18)(word16, Eq_11);

typedef void (Eq_21)(word16, byte);

typedef void (Eq_34)(word16, Eq_9);

typedef struct Eq_39 {
	word16 w0100;	// 100
} Eq_39;

