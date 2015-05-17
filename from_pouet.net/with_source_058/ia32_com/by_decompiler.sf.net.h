// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_058/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA2D00 (ptr Eq_8) ptrFFFA2D00))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_8: (segment "Eq_8" (0 (arr word16) a0000) (9F word16 w009F) (141 (arr word16) a0141))
	T_8 (in 0xA2D0 : selector)
Eq_36: (fn byte ((ptr byte)))
	T_36 (in bios_kbd_get_keystroke : ptr32)
	T_37 (in signature of bios_kbd_get_keystroke : void)
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
T_7: (in 0x4F51 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_8: (in 0xA2D0 : selector)
  Class: Eq_8
  DataType: (ptr Eq_8)
  OrigDataType: (ptr (segment (0 (arr T_41) a0000) (9F T_10 t009F) (141 (arr T_43) a0141)))
T_9: (in 0x009F : word16)
  Class: Eq_9
  DataType: (memptr (ptr Eq_8) word16)
  OrigDataType: (memptr T_8 (struct (0 T_10 t0000)))
T_10: (in Mem17[0xA2D0:0x009F:word16] : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_11: (in si_12 : (memptr (ptr Eq_8) word16))
  Class: Eq_11
  DataType: (memptr (ptr Eq_8) word16)
  OrigDataType: (memptr T_8 (struct 0002 (0 T_21 t0000)))
T_12: (in 0x0000 : word16)
  Class: Eq_11
  DataType: (memptr (ptr Eq_8) word16)
  OrigDataType: word16
T_13: (in di_15 : (memptr (ptr Eq_8) word16))
  Class: Eq_13
  DataType: (memptr (ptr Eq_8) word16)
  OrigDataType: (memptr T_8 (struct 0002 (0 T_28 t0000)))
T_14: (in 0x0141 : word16)
  Class: Eq_13
  DataType: (memptr (ptr Eq_8) word16)
  OrigDataType: word16
T_15: (in cx_16 : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_16: (in 0x4F51 : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_17: (in 0x0002 : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_18: (in si_12 + 0x0002 : word16)
  Class: Eq_11
  DataType: (memptr (ptr Eq_8) word16)
  OrigDataType: word16
T_19: (in 0x0000 : word16)
  Class: Eq_19
  DataType: word16
  OrigDataType: word16
T_20: (in si_12 + 0x0000 : word16)
  Class: Eq_20
  DataType: word16
  OrigDataType: word16
T_21: (in Mem17[0xA2D0:si_12 + 0x0000:word16] : word16)
  Class: Eq_21
  DataType: word16
  OrigDataType: word16
T_22: (in 0x0000 : word16)
  Class: Eq_22
  DataType: word16
  OrigDataType: word16
T_23: (in si_12 + 0x0000 : word16)
  Class: Eq_23
  DataType: word16
  OrigDataType: word16
T_24: (in Mem17[0xA2D0:si_12 + 0x0000:word16] : word16)
  Class: Eq_21
  DataType: word16
  OrigDataType: word16
T_25: (in 0xA2D0->*si_12 ^ 0xA2D0->*si_12 : word16)
  Class: Eq_25
  DataType: word16
  OrigDataType: word16
T_26: (in 0x0000 : word16)
  Class: Eq_26
  DataType: word16
  OrigDataType: word16
T_27: (in di_15 + 0x0000 : word16)
  Class: Eq_27
  DataType: word16
  OrigDataType: word16
T_28: (in Mem26[0xA2D0:di_15 + 0x0000:word16] : word16)
  Class: Eq_25
  DataType: word16
  OrigDataType: word16
T_29: (in 0x0002 : word16)
  Class: Eq_29
  DataType: word16
  OrigDataType: word16
T_30: (in di_15 + 0x0002 : word16)
  Class: Eq_13
  DataType: (memptr (ptr Eq_8) word16)
  OrigDataType: word16
T_31: (in 0x0001 : word16)
  Class: Eq_31
  DataType: word16
  OrigDataType: word16
T_32: (in cx_16 - 0x0001 : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_33: (in 0x0000 : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_34: (in cx_16 != 0x0000 : bool)
  Class: Eq_34
  DataType: bool
  OrigDataType: bool
T_35: (in al_29 : byte)
  Class: Eq_35
  DataType: byte
  OrigDataType: byte
T_36: (in bios_kbd_get_keystroke : ptr32)
  Class: Eq_36
  DataType: (ptr Eq_36)
  OrigDataType: (ptr (fn T_40 (T_39)))
T_37: (in signature of bios_kbd_get_keystroke : void)
  Class: Eq_36
  DataType: (ptr Eq_36)
  OrigDataType: 
T_38: (in alOut : ptr16)
  Class: Eq_38
  DataType: (ptr byte)
  OrigDataType: ptr16
T_39: (in out al_29 : ptr16)
  Class: Eq_38
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_40: (in bios_kbd_get_keystroke(out al_29) : byte)
  Class: Eq_40
  DataType: byte
  OrigDataType: byte
T_41:
  Class: Eq_41
  DataType: word16
  OrigDataType: (struct 0002 (0 T_21 t0000))
T_42:
  Class: Eq_41
  DataType: word16
  OrigDataType: (struct 0002 (0 T_24 t0000))
T_43:
  Class: Eq_43
  DataType: word16
  OrigDataType: (struct 0002 (0 T_28 t0000))
*/
typedef Eq_8 Eq_1struct Globals {
	Eq_8 * ptrFFFA2D00;	// FFFA2D00
} Eq_1;

typedef void (Eq_2)(byte);

typedef  Eq_8[][]struct Eq_8 {
	word16 a0000[];	// 0
	word16 w009F;	// 9F
	word16 a0141[];	// 141
} Eq_8;

typedef byte (Eq_36)(byte *);

