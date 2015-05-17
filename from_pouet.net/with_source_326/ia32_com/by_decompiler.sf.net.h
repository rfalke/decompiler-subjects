// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_326/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_7: (fn word16 (byte))
	T_7 (in __aam : ptr32)
Eq_11: (segment "Eq_11")
	T_11 (in ds : (ptr Eq_11))
Eq_12: (struct "Eq_12" (683 byte b0683))
	T_12 (in bx : (memptr (ptr Eq_11) Eq_12))
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
T_7: (in __aam : ptr32)
  Class: Eq_7
  DataType: (ptr Eq_7)
  OrigDataType: (ptr (fn T_9 (T_8)))
T_8: (in 0x13 : byte)
  Class: Eq_8
  DataType: byte
  OrigDataType: byte
T_9: (in __aam(0x13) : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_10: (in (byte) __aam(0x13) : byte)
  Class: Eq_10
  DataType: byte
  OrigDataType: byte
T_11: (in ds : (ptr Eq_11))
  Class: Eq_11
  DataType: (ptr Eq_11)
  OrigDataType: (ptr (segment))
T_12: (in bx : (memptr (ptr Eq_11) Eq_12))
  Class: Eq_12
  DataType: (memptr (ptr Eq_11) Eq_12)
  OrigDataType: (memptr T_11 (struct (683 T_15 t0683)))
T_13: (in 0x0683 : word16)
  Class: Eq_13
  DataType: word16
  OrigDataType: word16
T_14: (in bx + 0x0683 : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_15: (in Mem7[ds:bx + 0x0683:byte] : byte)
  Class: Eq_10
  DataType: byte
  OrigDataType: byte
*/
typedef struct Globals {
} Eq_1;

typedef void (Eq_2)(byte);

typedef word16 (Eq_7)(byte);

typedef struct Eq_11 {
} Eq_11;

typedef struct Eq_12 {
	byte b0683;	// 683
} Eq_12;

