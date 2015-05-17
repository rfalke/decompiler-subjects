// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_099/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_18) ptrFFFA0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
	T_44 (in bios_video_set_mode : ptr32)
Eq_18: (segment "Eq_18" (0 (arr Eq_47) a0000))
	T_18 (in 0xA000 : selector)
Eq_24: (fn byte (byte))
	T_24 (in __inb : ptr32)
Eq_47: (struct "Eq_47" 0140 (0 byte b0000))
	T_47
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
T_7: (in ax_23 : int16)
  Class: Eq_7
  DataType: int16
  OrigDataType: int16
T_8: (in ax : word16)
  Class: Eq_8
  DataType: word16
  OrigDataType: word16
T_9: (in 0x13 : byte)
  Class: Eq_9
  DataType: byte
  OrigDataType: byte
T_10: (in DPB(ax, 0x13, 0, 8) : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: word16
T_11: (in bp : uint16)
  Class: Eq_11
  DataType: uint16
  OrigDataType: uint16
T_12: (in 0x0001 : word16)
  Class: Eq_12
  DataType: uint16
  OrigDataType: uint16
T_13: (in bp >>u 0x0001 : word16)
  Class: Eq_11
  DataType: uint16
  OrigDataType: uint16
T_14: (in bx : uint16)
  Class: Eq_14
  DataType: uint16
  OrigDataType: uint16
T_15: (in 0x0001 : word16)
  Class: Eq_15
  DataType: uint16
  OrigDataType: uint16
T_16: (in bx >>u 0x0001 : word16)
  Class: Eq_14
  DataType: uint16
  OrigDataType: uint16
T_17: (in 0x0A : byte)
  Class: Eq_17
  DataType: byte
  OrigDataType: byte
T_18: (in 0xA000 : selector)
  Class: Eq_18
  DataType: (ptr Eq_18)
  OrigDataType: (ptr (segment (0 (arr T_47) a0000)))
T_19: (in SEQ(0xA000, bp) : ptr32)
  Class: Eq_19
  DataType: ptr32
  OrigDataType: ptr32
T_20: (in 0x0140 : word16)
  Class: Eq_20
  DataType: ui16
  OrigDataType: ui16
T_21: (in bx * 0x0140 : word16)
  Class: Eq_21
  DataType: ui16
  OrigDataType: ui16
T_22: (in SEQ(0xA000, bp)[bx * 0x0140] : byte)
  Class: Eq_17
  DataType: byte
  OrigDataType: byte
T_23: (in ax_24 : int16)
  Class: Eq_7
  DataType: int16
  OrigDataType: int16
T_24: (in __inb : ptr32)
  Class: Eq_24
  DataType: (ptr Eq_24)
  OrigDataType: (ptr (fn T_26 (T_25)))
T_25: (in 0x60 : byte)
  Class: Eq_25
  DataType: byte
  OrigDataType: byte
T_26: (in __inb(0x60) : byte)
  Class: Eq_26
  DataType: byte
  OrigDataType: byte
T_27: (in DPB(ax_24, __inb(0x60), 0, 8) : word16)
  Class: Eq_27
  DataType: word16
  OrigDataType: word16
T_28: (in 0x0001 : word16)
  Class: Eq_27
  DataType: word16
  OrigDataType: word16
T_29: (in DPB(ax_24, __inb(0x60), 0, 8) != 0x0001 : bool)
  Class: Eq_29
  DataType: bool
  OrigDataType: bool
T_30: (in 0x4000 : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: int16
T_31: (in ax_24 > 0x4000 : bool)
  Class: Eq_31
  DataType: bool
  OrigDataType: bool
T_32: (in 0x00C8 : word16)
  Class: Eq_32
  DataType: word16
  OrigDataType: word16
T_33: (in bx + 0x00C8 : word16)
  Class: Eq_14
  DataType: uint16
  OrigDataType: word16
T_34: (in 0x0000 : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: int16
T_35: (in ax_24 > 0x0000 : bool)
  Class: Eq_35
  DataType: bool
  OrigDataType: bool
T_36: (in 0x0140 : word16)
  Class: Eq_36
  DataType: word16
  OrigDataType: word16
T_37: (in bp + 0x0140 : word16)
  Class: Eq_11
  DataType: uint16
  OrigDataType: word16
T_38: (in 0x00C8 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_39: (in bx - 0x00C8 : word16)
  Class: Eq_14
  DataType: uint16
  OrigDataType: word16
T_40: (in 0x0003 : word16)
  Class: Eq_40
  DataType: int16
  OrigDataType: int16
T_41: (in ax_23 *s 0x0003 : int16)
  Class: Eq_7
  DataType: int16
  OrigDataType: int16
T_42: (in 0xC000 : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: int16
T_43: (in ax_24 < 0xC000 : bool)
  Class: Eq_43
  DataType: bool
  OrigDataType: bool
T_44: (in bios_video_set_mode : ptr32)
  Class: Eq_2
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (fn T_46 (T_45)))
T_45: (in 0x03 : byte)
  Class: Eq_4
  DataType: byte
  OrigDataType: byte
T_46: (in bios_video_set_mode(0x03) : void)
  Class: Eq_6
  DataType: void
  OrigDataType: void
T_47:
  Class: Eq_47
  DataType: Eq_47
  OrigDataType: (struct 0140 (0 T_22 t0000))
*/
typedef Eq_18 Eq_1struct Globals {
	Eq_18 * ptrFFFA0000;	// FFFA0000
} Eq_1;

typedef void (Eq_2)(byte);

typedef Eq_47 Eq_18[]struct Eq_18 {
	Eq_47 a0000[];	// 0
} Eq_18;

typedef byte (Eq_24)(byte);

typedef struct Eq_47 {	// size: 320 140
	byte b0000;	// 0
} Eq_47;

