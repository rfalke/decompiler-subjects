// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_089/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_11: (struct "Eq_11" 0001 (0 Eq_15 t0000))
	T_11 (in di_10 : (memptr (ptr Eq_16) Eq_11))
	T_12 (in 0xF93F : word16)
	T_21 (in di_10 + 0x0001 : word16)
Eq_15: (union "Eq_15" (uint8 u0) (uint16 u1))
	T_15 (in al_22 : Eq_15)
	T_19 (in Mem29[ds:di_10 + 0x0000:byte] : byte)
	T_22 (in 0x5B : byte)
	T_24 (in 0x5B : byte)
	T_42 (in al_21 : Eq_15)
	T_45 (in Mem0[ds:di_10 + 0x0000:byte] : byte)
	T_47 (in al_21 >>u 0x01 : word16)
Eq_16: (segment "Eq_16" (FFFFF93F (arr Eq_56) aFFFFF93F) (F93F Eq_11 tF93F))
	T_16 (in ds : (ptr Eq_16))
Eq_31: (fn uint8 (byte))
	T_31 (in __inb : ptr32)
Eq_38: (struct "Eq_38" (140 byte b0140))
	T_38 (in di_10 + ax_16 : word16)
Eq_54: (fn void ())
	T_54 (in __hlt : ptr32)
Eq_56: (struct "Eq_56" 0001 (0 Eq_15 t0000))
	T_56
	T_57
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
T_7: (in ax_16 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
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
  DataType: word16
  OrigDataType: word16
T_11: (in di_10 : (memptr (ptr Eq_16) Eq_11))
  Class: Eq_11
  DataType: (memptr (ptr Eq_16) Eq_11)
  OrigDataType: (memptr T_16 (struct 0001 (0 T_15 t0000)))
T_12: (in 0xF93F : word16)
  Class: Eq_11
  DataType: (memptr (ptr Eq_16) Eq_11)
  OrigDataType: word16
T_13: (in cx_12 : word16)
  Class: Eq_13
  DataType: word16
  OrigDataType: word16
T_14: (in 0xF800 : word16)
  Class: Eq_13
  DataType: word16
  OrigDataType: word16
T_15: (in al_22 : Eq_15)
  Class: Eq_15
  DataType: Eq_15
  OrigDataType: byte
T_16: (in ds : (ptr Eq_16))
  Class: Eq_16
  DataType: (ptr Eq_16)
  OrigDataType: (ptr (segment (FFFFF93F (arr T_56) aFFFFF93F)))
T_17: (in 0x0000 : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_18: (in di_10 + 0x0000 : word16)
  Class: Eq_18
  DataType: word16
  OrigDataType: word16
T_19: (in Mem29[ds:di_10 + 0x0000:byte] : byte)
  Class: Eq_15
  DataType: Eq_15
  OrigDataType: byte
T_20: (in 0x0001 : word16)
  Class: Eq_20
  DataType: word16
  OrigDataType: word16
T_21: (in di_10 + 0x0001 : word16)
  Class: Eq_11
  DataType: (memptr (ptr Eq_16) Eq_11)
  OrigDataType: word16
T_22: (in 0x5B : byte)
  Class: Eq_15
  DataType: uint8
  OrigDataType: byte
T_23: (in al_22 != 0x5B : bool)
  Class: Eq_23
  DataType: bool
  OrigDataType: bool
T_24: (in 0x5B : byte)
  Class: Eq_15
  DataType: uint8
  OrigDataType: byte
T_25: (in 0x5B : byte)
  Class: Eq_25
  DataType: byte
  OrigDataType: byte
T_26: (in DPB(ax_16, 0x5B, 0, 8) : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_27: (in 0x0001 : word16)
  Class: Eq_27
  DataType: word16
  OrigDataType: word16
T_28: (in cx_12 - 0x0001 : word16)
  Class: Eq_13
  DataType: word16
  OrigDataType: word16
T_29: (in 0x0000 : word16)
  Class: Eq_13
  DataType: word16
  OrigDataType: word16
T_30: (in cx_12 != 0x0000 : bool)
  Class: Eq_30
  DataType: bool
  OrigDataType: bool
T_31: (in __inb : ptr32)
  Class: Eq_31
  DataType: (ptr Eq_31)
  OrigDataType: (ptr (fn T_33 (T_32)))
T_32: (in 0x40 : byte)
  Class: Eq_32
  DataType: byte
  OrigDataType: byte
T_33: (in __inb(0x40) : byte)
  Class: Eq_33
  DataType: uint8
  OrigDataType: uint8
T_34: (in 0x06 : byte)
  Class: Eq_34
  DataType: uint8
  OrigDataType: uint8
T_35: (in __inb(0x40) >>u 0x06 : word16)
  Class: Eq_35
  DataType: uint16
  OrigDataType: uint16
T_36: (in DPB(ax_16, __inb(0x40) >>u 0x06, 0, 8) : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_37: (in 0xB7 : byte)
  Class: Eq_37
  DataType: byte
  OrigDataType: byte
T_38: (in di_10 + ax_16 : word16)
  Class: Eq_38
  DataType: (memptr (ptr Eq_16) Eq_38)
  OrigDataType: (memptr T_16 (struct (140 T_41 t0140)))
T_39: (in 0x0140 : word16)
  Class: Eq_39
  DataType: word16
  OrigDataType: word16
T_40: (in di_10 + ax_16 + 0x0140 : word16)
  Class: Eq_40
  DataType: word16
  OrigDataType: word16
T_41: (in Mem44[ds:di_10 + ax_16 + 0x0140:byte] : byte)
  Class: Eq_37
  DataType: byte
  OrigDataType: byte
T_42: (in al_21 : Eq_15)
  Class: Eq_15
  DataType: Eq_15
  OrigDataType: uint8
T_43: (in 0x0000 : word16)
  Class: Eq_43
  DataType: word16
  OrigDataType: word16
T_44: (in di_10 + 0x0000 : word16)
  Class: Eq_44
  DataType: word16
  OrigDataType: word16
T_45: (in Mem0[ds:di_10 + 0x0000:byte] : byte)
  Class: Eq_15
  DataType: Eq_15
  OrigDataType: byte
T_46: (in 0x01 : byte)
  Class: Eq_46
  DataType: uint8
  OrigDataType: uint8
T_47: (in al_21 >>u 0x01 : word16)
  Class: Eq_15
  DataType: Eq_15
  OrigDataType: uint16
T_48: (in al_21 >>u 0x01 : word16)
  Class: Eq_48
  DataType: uint16
  OrigDataType: uint16
T_49: (in DPB(ax_16, al_21 >>u 0x01, 0, 8) : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_50: (in 0xFE2F : word16)
  Class: Eq_50
  DataType: word16
  OrigDataType: word16
T_51: (in cx_12 & 0xFE2F : word16)
  Class: Eq_51
  DataType: word16
  OrigDataType: word16
T_52: (in 0x0000 : word16)
  Class: Eq_51
  DataType: word16
  OrigDataType: word16
T_53: (in (cx_12 & 0xFE2F) != 0x0000 : bool)
  Class: Eq_53
  DataType: bool
  OrigDataType: bool
T_54: (in __hlt : ptr32)
  Class: Eq_54
  DataType: (ptr Eq_54)
  OrigDataType: (ptr (fn T_55 ()))
T_55: (in __hlt() : void)
  Class: Eq_55
  DataType: void
  OrigDataType: void
T_56:
  Class: Eq_56
  DataType: Eq_56
  OrigDataType: (struct 0001 (0 T_19 t0000))
T_57:
  Class: Eq_56
  DataType: Eq_56
  OrigDataType: (struct 0001 (0 T_45 t0000))
*/
typedef struct Globals {
} Eq_1;

typedef void (Eq_2)(byte);

typedef Eq_15 Eq_11struct Eq_11 {	// size: 1 1
	Eq_15 t0000;	// 0
} Eq_11;

typedef union Eq_15 {
	uint8 u0;
	uint16 u1;
} Eq_15;

typedef Eq_56 Eq_16[]Eq_11struct Eq_16 {
	Eq_56 aFFFFF93F[];	// FFFFF93F
	Eq_11 tF93F;	// F93F
} Eq_16;

typedef uint8 (Eq_31)(byte);

typedef struct Eq_38 {
	byte b0140;	// 140
} Eq_38;

typedef void (Eq_54)();

typedef Eq_15 Eq_56struct Eq_56 {	// size: 1 1
	Eq_15 t0000;	// 0
} Eq_56;

