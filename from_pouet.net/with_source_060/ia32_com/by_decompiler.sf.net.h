// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_060/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_12) ptrFFFA0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_12: (segment "Eq_12" (0 byte b0000) (FFF byte b0FFF))
	T_12 (in 0xA000 : selector)
Eq_27: (struct "Eq_27" (140 byte b0140))
	T_27 (in si_19 : (memptr (ptr Eq_12) Eq_27))
	T_28 (in 0x0000 : word16)
	T_42 (in si_19 + ax_24 + 0x0001 : word16)
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
T_7: (in cx_11 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_8: (in 0x0FFF : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_9: (in si_10 : (memptr (ptr Eq_12) byte))
  Class: Eq_9
  DataType: (memptr (ptr Eq_12) byte)
  OrigDataType: (memptr T_12 (struct (0 T_15 t0000)))
T_10: (in 0x0FFF : word16)
  Class: Eq_9
  DataType: (memptr (ptr Eq_12) byte)
  OrigDataType: word16
T_11: (in 0x28 : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_12: (in 0xA000 : selector)
  Class: Eq_12
  DataType: (ptr Eq_12)
  OrigDataType: (ptr (segment (0 T_26 t0000)))
T_13: (in 0x0000 : word16)
  Class: Eq_13
  DataType: word16
  OrigDataType: word16
T_14: (in si_10 + 0x0000 : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_15: (in Mem13[0xA000:si_10 + 0x0000:byte] : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_16: (in 0x0157 : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_17: (in si_10 + 0x0157 : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_18: (in 0x0934 : word16)
  Class: Eq_18
  DataType: word16
  OrigDataType: word16
T_19: (in si_10 + 343 ^ 0x0934 : word16)
  Class: Eq_9
  DataType: (memptr (ptr Eq_12) byte)
  OrigDataType: word16
T_20: (in 0x0001 : word16)
  Class: Eq_20
  DataType: word16
  OrigDataType: word16
T_21: (in cx_11 - 0x0001 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_22: (in 0x0000 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_23: (in cx_11 != 0x0000 : bool)
  Class: Eq_23
  DataType: bool
  OrigDataType: bool
T_24: (in al_22 : byte)
  Class: Eq_24
  DataType: byte
  OrigDataType: byte
T_25: (in 0x0000 : word16)
  Class: Eq_25
  DataType: (memptr (ptr Eq_12) byte)
  OrigDataType: (memptr T_12 (struct (0 T_26 t0000)))
T_26: (in Mem13[0xA000:0x0000:byte] : byte)
  Class: Eq_24
  DataType: byte
  OrigDataType: byte
T_27: (in si_19 : (memptr (ptr Eq_12) Eq_27))
  Class: Eq_27
  DataType: (memptr (ptr Eq_12) Eq_27)
  OrigDataType: (memptr T_12 (struct (140 T_24 t0140)))
T_28: (in 0x0000 : word16)
  Class: Eq_27
  DataType: (memptr (ptr Eq_12) Eq_27)
  OrigDataType: word16
T_29: (in ax_24 : word16)
  Class: Eq_29
  DataType: word16
  OrigDataType: word16
T_30: (in ax : word16)
  Class: Eq_30
  DataType: word16
  OrigDataType: word16
T_31: (in DPB(ax, al_22, 0, 8) : word16)
  Class: Eq_29
  DataType: word16
  OrigDataType: word16
T_32: (in ah_28 : byte)
  Class: Eq_24
  DataType: byte
  OrigDataType: byte
T_33: (in 0x0140 : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_34: (in si_19 + 0x0140 : word16)
  Class: Eq_34
  DataType: word16
  OrigDataType: word16
T_35: (in Mem13[0xA000:si_19 + 0x0140:byte] : byte)
  Class: Eq_24
  DataType: byte
  OrigDataType: byte
T_36: (in 0x0140 : word16)
  Class: Eq_36
  DataType: word16
  OrigDataType: word16
T_37: (in si_19 + 0x0140 : word16)
  Class: Eq_37
  DataType: word16
  OrigDataType: word16
T_38: (in Mem29[0xA000:si_19 + 0x0140:byte] : byte)
  Class: Eq_24
  DataType: byte
  OrigDataType: byte
T_39: (in DPB(ax_24, ah_28, 0, 8) : word16)
  Class: Eq_29
  DataType: word16
  OrigDataType: word16
T_40: (in si_19 + ax_24 : word16)
  Class: Eq_40
  DataType: word16
  OrigDataType: word16
T_41: (in 0x0001 : word16)
  Class: Eq_41
  DataType: word16
  OrigDataType: word16
T_42: (in si_19 + ax_24 + 0x0001 : word16)
  Class: Eq_27
  DataType: (memptr (ptr Eq_12) Eq_27)
  OrigDataType: word16
*/
typedef Eq_12 Eq_1struct Globals {
	Eq_12 * ptrFFFA0000;	// FFFA0000
} Eq_1;

typedef void (Eq_2)(byte);

typedef struct Eq_12 {
	byte b0000;	// 0
	byte b0FFF;	// FFF
} Eq_12;

typedef struct Eq_27 {
	byte b0140;	// 140
} Eq_27;

