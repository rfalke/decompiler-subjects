// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_101/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_28) ptrFFFA0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_24: (struct "Eq_24" (0 byte b0000) (1 byte b0001))
	T_24 (in di_34 : (memptr (ptr Eq_28) Eq_24))
	T_27 (in bx *s 0x0140 + bp : word16)
Eq_28: (segment "Eq_28")
	T_28 (in 0xA000 : selector)
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
T_7: (in eax_19 : ui32)
  Class: Eq_7
  DataType: ui32
  OrigDataType: ui32
T_8: (in eax : word32)
  Class: Eq_8
  DataType: word32
  OrigDataType: word32
T_9: (in 0x13 : byte)
  Class: Eq_9
  DataType: byte
  OrigDataType: byte
T_10: (in DPB(eax, 0x13, 0, 8) : word32)
  Class: Eq_7
  DataType: ui32
  OrigDataType: word32
T_11: (in ax_22 : int16)
  Class: Eq_11
  DataType: int16
  OrigDataType: int16
T_12: (in 0x0000 : word16)
  Class: Eq_11
  DataType: int16
  OrigDataType: int16
T_13: (in ax_22 > 0x0000 : bool)
  Class: Eq_13
  DataType: bool
  OrigDataType: bool
T_14: (in bp : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_15: (in 0x0001 : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_16: (in bp + 0x0001 : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_17: (in bx : int16)
  Class: Eq_17
  DataType: int16
  OrigDataType: int16
T_18: (in 0x0001 : word16)
  Class: Eq_18
  DataType: word16
  OrigDataType: word16
T_19: (in bx + 0x0001 : word16)
  Class: Eq_17
  DataType: int16
  OrigDataType: word16
T_20: (in al_32 : byte)
  Class: Eq_20
  DataType: byte
  OrigDataType: byte
T_21: (in 0x0001 : word16)
  Class: Eq_21
  DataType: word16
  OrigDataType: word16
T_22: (in ax_22 + 0x0001 : word16)
  Class: Eq_22
  DataType: word16
  OrigDataType: word16
T_23: (in (byte) (ax_22 + 0x0001) : byte)
  Class: Eq_20
  DataType: byte
  OrigDataType: byte
T_24: (in di_34 : (memptr (ptr Eq_28) Eq_24))
  Class: Eq_24
  DataType: (memptr (ptr Eq_28) Eq_24)
  OrigDataType: (memptr T_28 (struct (0 T_31 t0000) (1 T_34 t0001)))
T_25: (in 0x0140 : word16)
  Class: Eq_25
  DataType: int16
  OrigDataType: int16
T_26: (in bx *s 0x0140 : int16)
  Class: Eq_26
  DataType: int16
  OrigDataType: int16
T_27: (in bx *s 0x0140 + bp : word16)
  Class: Eq_24
  DataType: (memptr (ptr Eq_28) Eq_24)
  OrigDataType: word16
T_28: (in 0xA000 : selector)
  Class: Eq_28
  DataType: (ptr Eq_28)
  OrigDataType: (ptr (segment))
T_29: (in 0x0000 : word16)
  Class: Eq_29
  DataType: word16
  OrigDataType: word16
T_30: (in di_34 + 0x0000 : word16)
  Class: Eq_30
  DataType: word16
  OrigDataType: word16
T_31: (in Mem36[0xA000:di_34 + 0x0000:byte] : byte)
  Class: Eq_20
  DataType: byte
  OrigDataType: byte
T_32: (in 0x0001 : word16)
  Class: Eq_32
  DataType: word16
  OrigDataType: word16
T_33: (in di_34 + 0x0001 : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_34: (in Mem38[0xA000:di_34 + 0x0001:byte] : byte)
  Class: Eq_20
  DataType: byte
  OrigDataType: byte
T_35: (in eax_24 : word32)
  Class: Eq_35
  DataType: word32
  OrigDataType: word32
T_36: (in 0x00 : byte)
  Class: Eq_36
  DataType: byte
  OrigDataType: byte
T_37: (in DPB(eax_24, 0x00, 0, 8) : word32)
  Class: Eq_7
  DataType: ui32
  OrigDataType: word32
T_38: (in 0x4000 : word16)
  Class: Eq_11
  DataType: int16
  OrigDataType: int16
T_39: (in ax_22 > 0x4000 : bool)
  Class: Eq_39
  DataType: bool
  OrigDataType: bool
T_40: (in cx : word16)
  Class: Eq_40
  DataType: word16
  OrigDataType: word16
T_41: (in 0x0001 : word16)
  Class: Eq_41
  DataType: word16
  OrigDataType: word16
T_42: (in cx + 0x0001 : word16)
  Class: Eq_40
  DataType: word16
  OrigDataType: word16
T_43: (in 0x0001 : word16)
  Class: Eq_43
  DataType: word16
  OrigDataType: word16
T_44: (in bp + 0x0001 : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_45: (in 0x0001 : word16)
  Class: Eq_45
  DataType: word16
  OrigDataType: word16
T_46: (in bx - 0x0001 : word16)
  Class: Eq_17
  DataType: int16
  OrigDataType: word16
T_47: (in eax_20 : ui32)
  Class: Eq_47
  DataType: ui32
  OrigDataType: word32
T_48: (in 0x00000003 : word32)
  Class: Eq_48
  DataType: ui32
  OrigDataType: ui32
T_49: (in eax_19 * 0x00000003 : word32)
  Class: Eq_47
  DataType: ui32
  OrigDataType: ui32
T_50: (in (word16) eax_20 : word16)
  Class: Eq_50
  DataType: word16
  OrigDataType: word16
T_51: (in (word16) eax_20 + cx : word16)
  Class: Eq_11
  DataType: int16
  OrigDataType: word16
T_52: (in DPB(eax_20, ax_22, 0, 16) : word32)
  Class: Eq_35
  DataType: word32
  OrigDataType: word32
T_53: (in 0xC000 : word16)
  Class: Eq_11
  DataType: int16
  OrigDataType: int16
T_54: (in ax_22 > 0xC000 : bool)
  Class: Eq_54
  DataType: bool
  OrigDataType: bool
T_55: (in 0x0001 : word16)
  Class: Eq_55
  DataType: word16
  OrigDataType: word16
T_56: (in bp - 0x0001 : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_57: (in 0x0001 : word16)
  Class: Eq_57
  DataType: word16
  OrigDataType: word16
T_58: (in bp - 0x0001 : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_59: (in 0x0001 : word16)
  Class: Eq_59
  DataType: word16
  OrigDataType: word16
T_60: (in bx + 0x0001 : word16)
  Class: Eq_17
  DataType: int16
  OrigDataType: word16
*/
typedef Eq_28 Eq_1struct Globals {
	Eq_28 * ptrFFFA0000;	// FFFA0000
} Eq_1;

typedef void (Eq_2)(byte);

typedef struct Eq_24 {
	byte b0000;	// 0
	byte b0001;	// 1
} Eq_24;

typedef struct Eq_28 {
} Eq_28;

