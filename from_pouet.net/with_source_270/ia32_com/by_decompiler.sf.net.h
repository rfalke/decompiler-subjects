// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_270/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_7: (segment "Eq_7" (1F8 word16 w01F8) (1FE word16 w01FE) (200 word16 w0200) (202 word16 w0202))
	T_7 (in cs : selector)
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
  OrigDataType: (ptr (segment (1F8 T_9 t01F8) (1FE T_15 t01FE) (200 T_22 t0200) (202 T_26 t0202)))
T_8: (in 0x01F8 : word16)
  Class: Eq_8
  DataType: (memptr (ptr Eq_7) word16)
  OrigDataType: (memptr T_7 (struct (0 T_9 t0000)))
T_9: (in Mem0[cs:0x01F8:word16] : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_10: (in 0x0001 : word16)
  Class: Eq_10
  DataType: word16
  OrigDataType: word16
T_11: (in cs->w01F8 + 0x0001 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_12: (in 0x01F8 : word16)
  Class: Eq_12
  DataType: (memptr (ptr Eq_7) word16)
  OrigDataType: (memptr T_7 (struct (0 T_13 t0000)))
T_13: (in Mem15[cs:0x01F8:word16] : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_14: (in 0x01FE : word16)
  Class: Eq_14
  DataType: (memptr (ptr Eq_7) word16)
  OrigDataType: (memptr T_7 (struct (0 T_15 t0000)))
T_15: (in Mem15[cs:0x01FE:word16] : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_16: (in 0x0001 : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_17: (in cs->w01FE + 0x0001 : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_18: (in 0x01FE : word16)
  Class: Eq_18
  DataType: (memptr (ptr Eq_7) word16)
  OrigDataType: (memptr T_7 (struct (0 T_19 t0000)))
T_19: (in Mem17[cs:0x01FE:word16] : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_20: (in 0xFF9C : word16)
  Class: Eq_20
  DataType: word16
  OrigDataType: word16
T_21: (in 0x0200 : word16)
  Class: Eq_21
  DataType: (memptr (ptr Eq_7) word16)
  OrigDataType: (memptr T_7 (struct (0 T_22 t0000)))
T_22: (in Mem21[cs:0x0200:word16] : word16)
  Class: Eq_20
  DataType: word16
  OrigDataType: word16
T_23: (in 0x01FE : word16)
  Class: Eq_23
  DataType: (memptr (ptr Eq_7) word16)
  OrigDataType: (memptr T_7 (struct (0 T_24 t0000)))
T_24: (in Mem21[cs:0x01FE:word16] : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_25: (in 0x0202 : word16)
  Class: Eq_25
  DataType: (memptr (ptr Eq_7) word16)
  OrigDataType: (memptr T_7 (struct (0 T_26 t0000)))
T_26: (in Mem25[cs:0x0202:word16] : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
*/
typedef struct Globals {
} Eq_1;

typedef void (Eq_2)(byte);

typedef struct Eq_7 {
	word16 w01F8;	// 1F8
	word16 w01FE;	// 1FE
	word16 w0200;	// 200
	word16 w0202;	// 202
} Eq_7;

