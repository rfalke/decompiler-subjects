// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_042/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_13) ptrFFFA0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_8: (struct "Eq_8" 0001 (FFFFFFFF byte bFFFFFFFF))
	T_8 (in cx : word16)
	T_18 (in cx - 0x0001 : word16)
	T_19 (in 0x0000 : word16)
	T_27 (in DPB(cx, 0xFA, 8, 8) : word16)
Eq_13: (segment "Eq_13" (0 Eq_8 t0000))
	T_13 (in 0xA000 : selector)
Eq_21: (fn byte (byte))
	T_21 (in __inb : ptr32)
Eq_28: (fn void ())
	T_28 (in msdos_terminate_program20 : ptr32)
	T_29 (in signature of msdos_terminate_program20 : void)
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
T_7: (in ah : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_8: (in cx : word16)
  Class: Eq_8
  DataType: (memptr (ptr Eq_13) Eq_8)
  OrigDataType: (memptr T_13 (struct 0001 (FFFFFFFF T_16 tFFFFFFFF)))
T_9: (in (byte) cx : byte)
  Class: Eq_9
  DataType: byte
  OrigDataType: byte
T_10: (in SLICE(cx, byte, 8) : byte)
  Class: Eq_10
  DataType: byte
  OrigDataType: byte
T_11: (in (byte) cx + SLICE(cx, byte, 8) : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_12: (in ah + ((byte) cx + SLICE(cx, byte, 8)) : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_13: (in 0xA000 : selector)
  Class: Eq_13
  DataType: (ptr Eq_13)
  OrigDataType: (ptr (segment))
T_14: (in 0x0001 : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_15: (in cx - 0x0001 : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_16: (in Mem39[0xA000:cx - 0x0001:byte] : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_17: (in 0x0001 : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_18: (in cx - 0x0001 : word16)
  Class: Eq_8
  DataType: (memptr (ptr Eq_13) Eq_8)
  OrigDataType: word16
T_19: (in 0x0000 : word16)
  Class: Eq_8
  DataType: (memptr (ptr Eq_13) Eq_8)
  OrigDataType: word16
T_20: (in cx != &Eq_13::t0000 : bool)
  Class: Eq_20
  DataType: bool
  OrigDataType: bool
T_21: (in __inb : ptr32)
  Class: Eq_21
  DataType: (ptr Eq_21)
  OrigDataType: (ptr (fn T_23 (T_22)))
T_22: (in 0x60 : byte)
  Class: Eq_22
  DataType: byte
  OrigDataType: byte
T_23: (in __inb(0x60) : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_24: (in 0x01 : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_25: (in __inb(0x60) != 0x01 : bool)
  Class: Eq_25
  DataType: bool
  OrigDataType: bool
T_26: (in 0xFA : byte)
  Class: Eq_26
  DataType: byte
  OrigDataType: byte
T_27: (in DPB(cx, 0xFA, 8, 8) : word16)
  Class: Eq_8
  DataType: (memptr (ptr Eq_13) Eq_8)
  OrigDataType: word16
T_28: (in msdos_terminate_program20 : ptr32)
  Class: Eq_28
  DataType: (ptr Eq_28)
  OrigDataType: (ptr (fn T_30 ()))
T_29: (in signature of msdos_terminate_program20 : void)
  Class: Eq_28
  DataType: (ptr Eq_28)
  OrigDataType: 
T_30: (in msdos_terminate_program20() : void)
  Class: Eq_30
  DataType: void
  OrigDataType: void
*/
typedef Eq_13 Eq_1struct Globals {
	Eq_13 * ptrFFFA0000;	// FFFA0000
} Eq_1;

typedef void (Eq_2)(byte);

typedef struct Eq_8 {	// size: 1 1
	byte bFFFFFFFF;	// FFFFFFFF
} Eq_8;

typedef Eq_8 Eq_13struct Eq_13 {
	Eq_8 t0000;	// 0
} Eq_13;

typedef byte (Eq_21)(byte);

typedef void (Eq_28)();

