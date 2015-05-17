// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_353/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (C000 (ptr Eq_18) ptrC000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_5: (segment "Eq_5" (103 (arr byte) a0103) (46C8 word32 dw46C8))
	T_5 (in cs : selector)
Eq_8: (fn void (word16, byte))
	T_8 (in __outb : ptr32)
Eq_18: (segment "Eq_18" (403 word16 w0403) (405 word16 w0405) (409 word32 dw0409))
	T_18 (in 0x0C00 : selector)
Eq_30: (fn byte (word16))
	T_30 (in __in : ptr32)
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr Eq_1)
  OrigDataType: (ptr (struct "Globals"))
T_2: (in bios_video_set_mode : ptr32)
  Class: Eq_2
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (fn T_7 (T_6)))
T_3: (in signature of bios_video_set_mode : void)
  Class: Eq_2
  DataType: (ptr Eq_2)
  OrigDataType: 
T_4: (in al : byte)
  Class: Eq_4
  DataType: byte
  OrigDataType: byte
T_5: (in cs : selector)
  Class: Eq_5
  DataType: (ptr Eq_5)
  OrigDataType: (ptr (segment (103 (arr T_42) a0103) (46C8 T_17 t46C8)))
T_6: (in (byte) cs : byte)
  Class: Eq_4
  DataType: byte
  OrigDataType: byte
T_7: (in bios_video_set_mode((byte) cs) : void)
  Class: Eq_7
  DataType: void
  OrigDataType: void
T_8: (in __outb : ptr32)
  Class: Eq_8
  DataType: (ptr Eq_8)
  OrigDataType: (ptr (fn T_11 (T_9, T_10)))
T_9: (in 0x03C7 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_10: (in 0x00 : byte)
  Class: Eq_10
  DataType: byte
  OrigDataType: byte
T_11: (in __outb(0x03C7, 0x00) : void)
  Class: Eq_11
  DataType: void
  OrigDataType: void
T_12: (in di_15 : (memptr (ptr Eq_5) byte))
  Class: Eq_12
  DataType: (memptr (ptr Eq_5) byte)
  OrigDataType: (memptr T_5 (struct 0001 (0 T_35 t0000)))
T_13: (in 0x0103 : word16)
  Class: Eq_12
  DataType: (memptr (ptr Eq_5) byte)
  OrigDataType: word16
T_14: (in cx_16 : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_15: (in 0x0300 : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_16: (in 0x46C8 : word16)
  Class: Eq_16
  DataType: (memptr (ptr Eq_5) word32)
  OrigDataType: (memptr T_5 (struct (0 T_17 t0000)))
T_17: (in Mem0[cs:0x46C8:word32] : word32)
  Class: Eq_17
  DataType: word32
  OrigDataType: word32
T_18: (in 0x0C00 : selector)
  Class: Eq_18
  DataType: (ptr Eq_18)
  OrigDataType: (ptr (segment (403 T_21 t0403) (405 T_29 t0405) (409 T_20 t0409)))
T_19: (in 0x0409 : word16)
  Class: Eq_19
  DataType: (memptr (ptr Eq_18) word32)
  OrigDataType: (memptr T_18 (struct (0 T_20 t0000)))
T_20: (in Mem31[0x0C00:0x0409:word32] : word32)
  Class: Eq_17
  DataType: word32
  OrigDataType: word32
T_21: (in 0x013F : word16)
  Class: Eq_21
  DataType: word16
  OrigDataType: word16
T_22: (in 0x0403 : word16)
  Class: Eq_22
  DataType: (memptr (ptr Eq_18) word16)
  OrigDataType: (memptr T_18 (struct (0 T_23 t0000)))
T_23: (in Mem32[0x0C00:0x0403:word16] : word16)
  Class: Eq_21
  DataType: word16
  OrigDataType: word16
T_24: (in 0x0403 : word16)
  Class: Eq_24
  DataType: (memptr (ptr Eq_18) word16)
  OrigDataType: (memptr T_18 (struct (0 T_25 t0000)))
T_25: (in Mem32[0x0C00:0x0403:word16] : word16)
  Class: Eq_21
  DataType: word16
  OrigDataType: word16
T_26: (in 0x00C7 : word16)
  Class: Eq_26
  DataType: word16
  OrigDataType: word16
T_27: (in 0x0C00->w0403 + 0x00C7 : word16)
  Class: Eq_27
  DataType: word16
  OrigDataType: word16
T_28: (in 0x0405 : word16)
  Class: Eq_28
  DataType: (memptr (ptr Eq_18) word16)
  OrigDataType: (memptr T_18 (struct (0 T_29 t0000)))
T_29: (in Mem37[0x0C00:0x0405:word16] : word16)
  Class: Eq_27
  DataType: word16
  OrigDataType: word16
T_30: (in __in : ptr32)
  Class: Eq_30
  DataType: (ptr Eq_30)
  OrigDataType: (ptr (fn T_32 (T_31)))
T_31: (in 0x03C9 : word16)
  Class: Eq_31
  DataType: word16
  OrigDataType: word16
T_32: (in __in(0x03C9) : byte)
  Class: Eq_32
  DataType: byte
  OrigDataType: byte
T_33: (in 0x0000 : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_34: (in di_15 + 0x0000 : word16)
  Class: Eq_34
  DataType: word16
  OrigDataType: word16
T_35: (in Mem23[cs:di_15 + 0x0000:byte] : byte)
  Class: Eq_32
  DataType: byte
  OrigDataType: byte
T_36: (in 0x0001 : word16)
  Class: Eq_36
  DataType: word16
  OrigDataType: word16
T_37: (in di_15 + 0x0001 : word16)
  Class: Eq_12
  DataType: (memptr (ptr Eq_5) byte)
  OrigDataType: word16
T_38: (in 0x0001 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_39: (in cx_16 - 0x0001 : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_40: (in 0x0000 : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_41: (in cx_16 == 0x0000 : bool)
  Class: Eq_41
  DataType: bool
  OrigDataType: bool
T_42:
  Class: Eq_42
  DataType: byte
  OrigDataType: (struct 0001 (0 T_35 t0000))
*/
typedef Eq_18 Eq_1struct Globals {
	Eq_18 * ptrC000;	// C000
} Eq_1;

typedef void (Eq_2)(byte);

typedef  Eq_5[]struct Eq_5 {
	byte a0103[];	// 103
	word32 dw46C8;	// 46C8
} Eq_5;

typedef void (Eq_8)(word16, byte);

typedef struct Eq_18 {
	word16 w0403;	// 403
	word16 w0405;	// 405
	word32 dw0409;	// 409
} Eq_18;

typedef byte (Eq_30)(word16);

