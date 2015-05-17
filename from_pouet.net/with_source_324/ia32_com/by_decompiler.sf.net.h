// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_324/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_7: (segment "Eq_7")
	T_7 (in cs : selector)
Eq_11: (segment "Eq_11")
	T_11 (in DPB(cs, SLICE(cs, byte, 8) + 0x20, 8, 8) : selector)
	T_14 (in Mem11[ds:0x040C:word16] : word16)
Eq_12: (segment "Eq_12" (40C (ptr Eq_11) ptr040C))
	T_12 (in ds : (ptr Eq_12))
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
T_7: (in cs : selector)
  Class: Eq_7
  DataType: (ptr Eq_7)
  OrigDataType: (ptr (segment))
T_8: (in SLICE(cs, byte, 8) : byte)
  Class: Eq_8
  DataType: byte
  OrigDataType: byte
T_9: (in 0x20 : byte)
  Class: Eq_9
  DataType: byte
  OrigDataType: byte
T_10: (in SLICE(cs, byte, 8) + 0x20 : byte)
  Class: Eq_10
  DataType: byte
  OrigDataType: byte
T_11: (in DPB(cs, SLICE(cs, byte, 8) + 0x20, 8, 8) : selector)
  Class: Eq_11
  DataType: (ptr Eq_11)
  OrigDataType: (ptr (segment))
T_12: (in ds : (ptr Eq_12))
  Class: Eq_12
  DataType: (ptr Eq_12)
  OrigDataType: (ptr (segment (40C T_14 t040C)))
T_13: (in 0x040C : word16)
  Class: Eq_13
  DataType: (memptr (ptr Eq_12) (ptr Eq_11))
  OrigDataType: (memptr T_12 (struct (0 T_14 t0000)))
T_14: (in Mem11[ds:0x040C:word16] : word16)
  Class: Eq_11
  DataType: (ptr Eq_11)
  OrigDataType: word16
*/
typedef struct Globals {
} Eq_1;

typedef void (Eq_2)(byte);

typedef struct Eq_7 {
} Eq_7;

typedef struct Eq_11 {
} Eq_11;

typedef Eq_11 Eq_12struct Eq_12 {
	Eq_11 * ptr040C;	// 40C
} Eq_12;

