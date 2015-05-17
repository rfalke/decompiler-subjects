// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_026/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_7: (segment "Eq_7")
	T_7 (in es_7 : selector)
	T_13 (in SLICE(Mem0[ds:bx + 0x0000:segptr32], selector, 16) : selector)
Eq_8: (segment "Eq_8")
	T_8 (in ds : (ptr Eq_8))
Eq_9: (union "Eq_9" (int16 u0) ((memptr (ptr Eq_8) Eq_32) u1))
	T_9 (in bx : Eq_9)
	T_22 (in bx + 0x0001 : word16)
Eq_14: (segment "Eq_14" (46C byte b046C))
	T_14 (in fs : (ptr Eq_14))
Eq_27: (fn byte (byte))
	T_27 (in __inb : ptr32)
Eq_32: (struct "Eq_32" 0001 (0 segptr32 ptr0000))
	T_32
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
T_7: (in es_7 : selector)
  Class: Eq_7
  DataType: (ptr Eq_7)
  OrigDataType: (ptr (segment))
T_8: (in ds : (ptr Eq_8))
  Class: Eq_8
  DataType: (ptr Eq_8)
  OrigDataType: (ptr (segment))
T_9: (in bx : Eq_9)
  Class: Eq_9
  DataType: Eq_9
  OrigDataType: (union (int16 u0) ((memptr T_8 (struct 0001 (0 T_12 t0000))) u1))
T_10: (in 0x0000 : word16)
  Class: Eq_10
  DataType: word16
  OrigDataType: word16
T_11: (in bx + 0x0000 : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_12: (in Mem0[ds:bx + 0x0000:segptr32] : segptr32)
  Class: Eq_12
  DataType: segptr32
  OrigDataType: segptr32
T_13: (in SLICE(Mem0[ds:bx + 0x0000:segptr32], selector, 16) : selector)
  Class: Eq_7
  DataType: (ptr Eq_7)
  OrigDataType: (ptr (segment))
T_14: (in fs : (ptr Eq_14))
  Class: Eq_14
  DataType: (ptr Eq_14)
  OrigDataType: (ptr (segment (46C T_16 t046C)))
T_15: (in 0x046C : word16)
  Class: Eq_15
  DataType: (memptr (ptr Eq_14) byte)
  OrigDataType: (memptr T_14 (struct (0 T_16 t0000)))
T_16: (in Mem0[fs:0x046C:byte] : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_17: (in di : (memptr (ptr Eq_7) byte))
  Class: Eq_17
  DataType: (memptr (ptr Eq_7) byte)
  OrigDataType: (memptr T_7 (struct (0 T_20 t0000)))
T_18: (in 0x0000 : word16)
  Class: Eq_18
  DataType: word16
  OrigDataType: word16
T_19: (in di + 0x0000 : word16)
  Class: Eq_19
  DataType: word16
  OrigDataType: word16
T_20: (in Mem13[es_7:di + 0x0000:byte] : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_21: (in 0x0001 : word16)
  Class: Eq_21
  DataType: word16
  OrigDataType: word16
T_22: (in bx + 0x0001 : word16)
  Class: Eq_9
  DataType: Eq_9
  OrigDataType: word16
T_23: (in 0x0140 : word16)
  Class: Eq_23
  DataType: int16
  OrigDataType: int16
T_24: (in bx *s 0x0140 : int16)
  Class: Eq_24
  DataType: int16
  OrigDataType: int16
T_25: (in bx *s 0x0140 *s bx : int16)
  Class: Eq_25
  DataType: int16
  OrigDataType: int16
T_26: (in bx *s 0x0140 *s bx + bx : word16)
  Class: Eq_17
  DataType: (memptr (ptr Eq_7) byte)
  OrigDataType: word16
T_27: (in __inb : ptr32)
  Class: Eq_27
  DataType: (ptr Eq_27)
  OrigDataType: (ptr (fn T_29 (T_28)))
T_28: (in 0x60 : byte)
  Class: Eq_28
  DataType: byte
  OrigDataType: byte
T_29: (in __inb(0x60) : byte)
  Class: Eq_29
  DataType: byte
  OrigDataType: byte
T_30: (in 0x01 : byte)
  Class: Eq_29
  DataType: byte
  OrigDataType: byte
T_31: (in __inb(0x60) != 0x01 : bool)
  Class: Eq_31
  DataType: bool
  OrigDataType: bool
T_32:
  Class: Eq_32
  DataType: Eq_32
  OrigDataType: 
*/
typedef struct Globals {
} Eq_1;

typedef void (Eq_2)(byte);

typedef struct Eq_7 {
} Eq_7;

typedef struct Eq_8 {
} Eq_8;

typedef union Eq_9 {
	int16 u0;
	Eq_32 Eq_8::* u1;
} Eq_9;

typedef struct Eq_14 {
	byte b046C;	// 46C
} Eq_14;

typedef byte (Eq_27)(byte);

typedef struct Eq_32 {	// size: 1 1
	segptr32 ptr0000;	// 0
} Eq_32;

