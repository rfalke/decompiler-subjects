// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_177/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_7: (fn void (word16, byte))
	T_7 (in __outb : ptr32)
Eq_17: (segment "Eq_17" (186 word32 dw0186))
	T_17 (in ds : (ptr Eq_17))
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
  OrigDataType: (ptr (fn T_11 (T_8, T_10)))
T_8: (in 0x03C9 : word16)
  Class: Eq_8
  DataType: word16
  OrigDataType: word16
T_9: (in cx : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_10: (in (byte) cx : byte)
  Class: Eq_10
  DataType: byte
  OrigDataType: byte
T_11: (in __outb(0x03C9, (byte) cx) : void)
  Class: Eq_11
  DataType: void
  OrigDataType: void
T_12: (in 0x0001 : word16)
  Class: Eq_12
  DataType: word16
  OrigDataType: word16
T_13: (in cx - 0x0001 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_14: (in 0x0000 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_15: (in cx != 0x0000 : bool)
  Class: Eq_15
  DataType: bool
  OrigDataType: bool
T_16: (in 0xC00CCCCD : word32)
  Class: Eq_16
  DataType: word32
  OrigDataType: word32
T_17: (in ds : (ptr Eq_17))
  Class: Eq_17
  DataType: (ptr Eq_17)
  OrigDataType: (ptr (segment (186 T_19 t0186)))
T_18: (in 0x0186 : word16)
  Class: Eq_18
  DataType: (memptr (ptr Eq_17) word32)
  OrigDataType: (memptr T_17 (struct (0 T_19 t0000)))
T_19: (in Mem17[ds:0x0186:word32] : word32)
  Class: Eq_16
  DataType: word32
  OrigDataType: word32
*/
typedef struct Globals {
} Eq_1;

typedef void (Eq_2)(byte);

typedef void (Eq_7)(word16, byte);

typedef struct Eq_17 {
	word32 dw0186;	// 186
} Eq_17;

