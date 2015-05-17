// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_195/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (40000 (ptr Eq_16) ptr40000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_12: (segment "Eq_12" (1D5 word16 w01D5))
	T_12 (in ds : (ptr Eq_12))
Eq_16: (segment "Eq_16" (0 (arr word16) a0000))
	T_16 (in 0x4000 : selector)
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
T_7: (in di_18 : (memptr (ptr Eq_16) word16))
  Class: Eq_7
  DataType: (memptr (ptr Eq_16) word16)
  OrigDataType: (memptr T_16 (struct 0002 (0 T_19 t0000)))
T_8: (in 0x0000 : word16)
  Class: Eq_7
  DataType: (memptr (ptr Eq_16) word16)
  OrigDataType: word16
T_9: (in cx_21 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_10: (in 0x6400 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_11: (in 0x0040 : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_12: (in ds : (ptr Eq_12))
  Class: Eq_12
  DataType: (ptr Eq_12)
  OrigDataType: (ptr (segment (1D5 T_14 t01D5)))
T_13: (in 0x01D5 : word16)
  Class: Eq_13
  DataType: (memptr (ptr Eq_12) word16)
  OrigDataType: (memptr T_12 (struct (0 T_14 t0000)))
T_14: (in Mem32[ds:0x01D5:word16] : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_15: (in 0x5151 : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_16: (in 0x4000 : selector)
  Class: Eq_16
  DataType: (ptr Eq_16)
  OrigDataType: (ptr (segment (0 (arr T_26) a0000)))
T_17: (in 0x0000 : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_18: (in di_18 + 0x0000 : word16)
  Class: Eq_18
  DataType: word16
  OrigDataType: word16
T_19: (in Mem24[0x4000:di_18 + 0x0000:word16] : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_20: (in 0x0002 : word16)
  Class: Eq_20
  DataType: word16
  OrigDataType: word16
T_21: (in di_18 + 0x0002 : word16)
  Class: Eq_7
  DataType: (memptr (ptr Eq_16) word16)
  OrigDataType: word16
T_22: (in 0x0001 : word16)
  Class: Eq_22
  DataType: word16
  OrigDataType: word16
T_23: (in cx_21 - 0x0001 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_24: (in 0x0000 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_25: (in cx_21 == 0x0000 : bool)
  Class: Eq_25
  DataType: bool
  OrigDataType: bool
T_26:
  Class: Eq_26
  DataType: word16
  OrigDataType: (struct 0002 (0 T_19 t0000))
*/
typedef Eq_16 Eq_1struct Globals {
	Eq_16 * ptr40000;	// 40000
} Eq_1;

typedef void (Eq_2)(byte);

typedef struct Eq_12 {
	word16 w01D5;	// 1D5
} Eq_12;

typedef  Eq_16[]struct Eq_16 {
	word16 a0000[];	// 0
} Eq_16;

