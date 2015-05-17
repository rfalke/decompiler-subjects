// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_071/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_18) ptrFFFA0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
	T_51 (in bios_video_set_mode : ptr32)
Eq_18: (segment "Eq_18" (0 (arr Eq_54) a0000))
	T_18 (in 0xA000 : selector)
Eq_30: (fn byte (byte))
	T_30 (in __inb : ptr32)
Eq_54: (struct "Eq_54" 0140 (0 byte b0000))
	T_54
	T_55
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
T_7: (in ax_24 : int16)
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
T_17: (in 0x09 : byte)
  Class: Eq_17
  DataType: byte
  OrigDataType: byte
T_18: (in 0xA000 : selector)
  Class: Eq_18
  DataType: (ptr Eq_18)
  OrigDataType: (ptr (segment (0 (arr T_54) a0000)))
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
T_23: (in 0x04 : byte)
  Class: Eq_17
  DataType: byte
  OrigDataType: byte
T_24: (in 0x0004 : word16)
  Class: Eq_24
  DataType: word16
  OrigDataType: word16
T_25: (in bp - 0x0004 : word16)
  Class: Eq_25
  DataType: word16
  OrigDataType: word16
T_26: (in SEQ(0xA000, bp - 0x0004) : ptr32)
  Class: Eq_26
  DataType: ptr32
  OrigDataType: ptr32
T_27: (in bx * 0x0140 : word16)
  Class: Eq_27
  DataType: ui16
  OrigDataType: ui16
T_28: (in SEQ(0xA000, bp - 0x0004)[bx * 0x0140] : byte)
  Class: Eq_17
  DataType: byte
  OrigDataType: byte
T_29: (in ax_26 : int16)
  Class: Eq_7
  DataType: int16
  OrigDataType: int16
T_30: (in __inb : ptr32)
  Class: Eq_30
  DataType: (ptr Eq_30)
  OrigDataType: (ptr (fn T_32 (T_31)))
T_31: (in 0x60 : byte)
  Class: Eq_31
  DataType: byte
  OrigDataType: byte
T_32: (in __inb(0x60) : byte)
  Class: Eq_32
  DataType: byte
  OrigDataType: byte
T_33: (in DPB(ax_26, __inb(0x60), 0, 8) : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_34: (in 0x0001 : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_35: (in DPB(ax_26, __inb(0x60), 0, 8) != 0x0001 : bool)
  Class: Eq_35
  DataType: bool
  OrigDataType: bool
T_36: (in cx : word16)
  Class: Eq_36
  DataType: word16
  OrigDataType: word16
T_37: (in 0xA0 : byte)
  Class: Eq_37
  DataType: byte
  OrigDataType: byte
T_38: (in DPB(cx, 0xA0, 0, 8) : word16)
  Class: Eq_36
  DataType: word16
  OrigDataType: word16
T_39: (in bp + cx : word16)
  Class: Eq_11
  DataType: uint16
  OrigDataType: word16
T_40: (in 0x2AAB : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: int16
T_41: (in ax_26 > 0x2AAB : bool)
  Class: Eq_41
  DataType: bool
  OrigDataType: bool
T_42: (in 0x00C8 : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_43: (in bx + 0x00C8 : word16)
  Class: Eq_14
  DataType: uint16
  OrigDataType: word16
T_44: (in 0x0001 : word16)
  Class: Eq_44
  DataType: word16
  OrigDataType: word16
T_45: (in ax_26 + 0x0001 : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: word16
T_46: (in bp + cx : word16)
  Class: Eq_11
  DataType: uint16
  OrigDataType: word16
T_47: (in 0x0003 : word16)
  Class: Eq_47
  DataType: int16
  OrigDataType: int16
T_48: (in ax_24 *s 0x0003 : int16)
  Class: Eq_7
  DataType: int16
  OrigDataType: int16
T_49: (in 0xD555 : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: int16
T_50: (in ax_26 < 0xD555 : bool)
  Class: Eq_50
  DataType: bool
  OrigDataType: bool
T_51: (in bios_video_set_mode : ptr32)
  Class: Eq_2
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (fn T_53 (T_52)))
T_52: (in 0x03 : byte)
  Class: Eq_4
  DataType: byte
  OrigDataType: byte
T_53: (in bios_video_set_mode(0x03) : void)
  Class: Eq_6
  DataType: void
  OrigDataType: void
T_54:
  Class: Eq_54
  DataType: Eq_54
  OrigDataType: (struct 0140 (0 T_22 t0000))
T_55:
  Class: Eq_54
  DataType: Eq_54
  OrigDataType: (struct 0140 (0 T_28 t0000))
*/
typedef Eq_18 Eq_1struct Globals {
	Eq_18 * ptrFFFA0000;	// FFFA0000
} Eq_1;

typedef void (Eq_2)(byte);

typedef Eq_54 Eq_18[]struct Eq_18 {
	Eq_54 a0000[];	// 0
} Eq_18;

typedef byte (Eq_30)(byte);

typedef struct Eq_54 {	// size: 320 140
	byte b0000;	// 0
} Eq_54;

