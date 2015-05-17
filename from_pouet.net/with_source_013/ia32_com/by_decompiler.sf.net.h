// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_013/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFB8000 (ptr Eq_13) ptrFFFB8000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_13: (segment "Eq_13")
	T_13 (in 0xB800 : selector)
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
T_5: (in 0x03 : byte)
  Class: Eq_4
  DataType: byte
  OrigDataType: byte
T_6: (in bios_video_set_mode(0x03) : void)
  Class: Eq_6
  DataType: void
  OrigDataType: void
T_7: (in al_11 : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_8: (in 0x03 : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_9: (in ax_12 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_10: (in ax : word16)
  Class: Eq_10
  DataType: word16
  OrigDataType: word16
T_11: (in 0x03 : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_12: (in DPB(ax, 0x03, 0, 8) : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_13: (in 0xB800 : selector)
  Class: Eq_13
  DataType: (ptr Eq_13)
  OrigDataType: (ptr (segment))
T_14: (in bx : (memptr (ptr Eq_13) byte))
  Class: Eq_14
  DataType: (memptr (ptr Eq_13) byte)
  OrigDataType: (memptr T_13 (struct (0 T_17 t0000)))
T_15: (in 0x0000 : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_16: (in bx + 0x0000 : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_17: (in Mem0[0xB800:bx + 0x0000:byte] : byte)
  Class: Eq_17
  DataType: byte
  OrigDataType: byte
T_18: (in 0x01 : byte)
  Class: Eq_18
  DataType: byte
  OrigDataType: byte
T_19: (in 0xB800->*bx + 0x01 : byte)
  Class: Eq_17
  DataType: byte
  OrigDataType: byte
T_20: (in 0x0000 : word16)
  Class: Eq_20
  DataType: word16
  OrigDataType: word16
T_21: (in bx + 0x0000 : word16)
  Class: Eq_21
  DataType: word16
  OrigDataType: word16
T_22: (in Mem15[0xB800:bx + 0x0000:byte] : byte)
  Class: Eq_17
  DataType: byte
  OrigDataType: byte
T_23: (in 0x01 : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_24: (in al_11 - 0x01 : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_25: (in bx - ax_12 : word16)
  Class: Eq_14
  DataType: (memptr (ptr Eq_13) byte)
  OrigDataType: word16
T_26: (in DPB(ax_12, al_11, 0, 8) : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
*/
typedef Eq_13 Eq_1struct Globals {
	Eq_13 * ptrFFFB8000;	// FFFB8000
} Eq_1;

typedef void (Eq_2)(byte);

typedef struct Eq_13 {
} Eq_13;

