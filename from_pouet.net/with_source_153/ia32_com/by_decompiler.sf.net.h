// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_153/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_8: (segment "Eq_8" (17E word32 dw017E))
	T_8 (in ds : (ptr Eq_8))
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
T_7: (in 0xC00CCCCD : word32)
  Class: Eq_7
  DataType: word32
  OrigDataType: word32
T_8: (in ds : (ptr Eq_8))
  Class: Eq_8
  DataType: (ptr Eq_8)
  OrigDataType: (ptr (segment (17E T_10 t017E)))
T_9: (in 0x017E : word16)
  Class: Eq_9
  DataType: (memptr (ptr Eq_8) word32)
  OrigDataType: (memptr T_8 (struct (0 T_10 t0000)))
T_10: (in Mem11[ds:0x017E:word32] : word32)
  Class: Eq_7
  DataType: word32
  OrigDataType: word32
*/
typedef struct Globals {
} Eq_1;

typedef void (Eq_2)(byte);

typedef struct Eq_8 {
	word32 dw017E;	// 17E
} Eq_8;

