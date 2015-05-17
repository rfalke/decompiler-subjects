// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_288/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_9: (union "Eq_9" (int8 u0) (uint8 u1))
	T_9 (in ah_51 : Eq_9)
	T_10 (in bl : byte)
	T_11 (in al_32 : Eq_9)
	T_13 (in SLICE(bl *u al_32, byte, 8) : byte)
	T_26 (in (byte) (al_32 *s al_32 >>u 0x0007) : byte)
	T_32 (in (byte) bx : byte)
Eq_14: (fn void (word16, Eq_9))
	T_14 (in __outb : ptr32)
Eq_23: (union "Eq_23" (int16 u0) (uint16 u1))
	T_23 (in al_32 *s al_32 : int16)
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
T_7: (in dx_24 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_8: (in 0x03C8 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_9: (in ah_51 : Eq_9)
  Class: Eq_9
  DataType: Eq_9
  OrigDataType: byte
T_10: (in bl : byte)
  Class: Eq_9
  DataType: Eq_9
  OrigDataType: uint8
T_11: (in al_32 : Eq_9)
  Class: Eq_9
  DataType: Eq_9
  OrigDataType: (union (int8 u0) (uint8 u1))
T_12: (in bl *u al_32 : uint16)
  Class: Eq_12
  DataType: uint16
  OrigDataType: uint16
T_13: (in SLICE(bl *u al_32, byte, 8) : byte)
  Class: Eq_9
  DataType: Eq_9
  OrigDataType: byte
T_14: (in __outb : ptr32)
  Class: Eq_14
  DataType: (ptr Eq_14)
  OrigDataType: (ptr (fn T_15 (T_7, T_9)))
T_15: (in __outb(dx_24, ah_51) : void)
  Class: Eq_15
  DataType: void
  OrigDataType: void
T_16: (in 0xC9 : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_17: (in DPB(dx_24, 0xC9, 0, 8) : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_18: (in cx : word16)
  Class: Eq_18
  DataType: word16
  OrigDataType: word16
T_19: (in 0x0001 : word16)
  Class: Eq_19
  DataType: word16
  OrigDataType: word16
T_20: (in cx - 0x0001 : word16)
  Class: Eq_18
  DataType: word16
  OrigDataType: word16
T_21: (in 0x0000 : word16)
  Class: Eq_18
  DataType: word16
  OrigDataType: word16
T_22: (in cx != 0x0000 : bool)
  Class: Eq_22
  DataType: bool
  OrigDataType: bool
T_23: (in al_32 *s al_32 : int16)
  Class: Eq_23
  DataType: Eq_23
  OrigDataType: (union (int16 u0) (uint16 u1))
T_24: (in 0x0007 : word16)
  Class: Eq_24
  DataType: uint16
  OrigDataType: uint16
T_25: (in al_32 *s al_32 >>u 0x0007 : word16)
  Class: Eq_25
  DataType: uint16
  OrigDataType: uint16
T_26: (in (byte) (al_32 *s al_32 >>u 0x0007) : byte)
  Class: Eq_9
  DataType: Eq_9
  OrigDataType: byte
T_27: (in bx : word16)
  Class: Eq_27
  DataType: word16
  OrigDataType: word16
T_28: (in 0x0001 : word16)
  Class: Eq_28
  DataType: word16
  OrigDataType: word16
T_29: (in bx - 0x0001 : word16)
  Class: Eq_27
  DataType: word16
  OrigDataType: word16
T_30: (in 0x03 : byte)
  Class: Eq_30
  DataType: byte
  OrigDataType: byte
T_31: (in DPB(cx, 0x03, 0, 8) : word16)
  Class: Eq_18
  DataType: word16
  OrigDataType: word16
T_32: (in (byte) bx : byte)
  Class: Eq_9
  DataType: Eq_9
  OrigDataType: byte
T_33: (in 0x0000 : word16)
  Class: Eq_27
  DataType: word16
  OrigDataType: word16
T_34: (in bx != 0x0000 : bool)
  Class: Eq_34
  DataType: bool
  OrigDataType: bool
T_35: (in P : byte)
  Class: Eq_35
  DataType: byte
  OrigDataType: byte
*/
typedef struct Globals {
} Eq_1;

typedef void (Eq_2)(byte);

typedef union Eq_9 {
	int8 u0;
	uint8 u1;
} Eq_9;

typedef void (Eq_14)(word16, Eq_9);

typedef union Eq_23 {
	int16 u0;
	uint16 u1;
} Eq_23;

