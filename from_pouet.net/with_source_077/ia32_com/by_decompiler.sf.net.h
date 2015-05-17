// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_077/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_12) ptrFFFA0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
	T_78 (in bios_video_set_mode : ptr32)
Eq_7: (struct "Eq_7" (FFFFFFFF word16 wFFFFFFFF))
	T_7 (in si_39 : (memptr (ptr Eq_12) Eq_7))
	T_10 (in si_28 + 0x0002 : word16)
Eq_12: (segment "Eq_12" (0 byte b0000) (13F (arr word16) a013F))
	T_12 (in 0xA000 : selector)
Eq_42: (segment "Eq_42")
	T_42 (in ss : selector)
Eq_62: (fn byte (word16))
	T_62 (in __inb : ptr32)
Eq_69: (fn byte (byte))
	T_69 (in __inb : ptr32)
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
T_7: (in si_39 : (memptr (ptr Eq_12) Eq_7))
  Class: Eq_7
  DataType: (memptr (ptr Eq_12) Eq_7)
  OrigDataType: (memptr T_12 (struct (FFFFFFFF T_18 tFFFFFFFF)))
T_8: (in si_28 : (memptr (ptr Eq_12) word16))
  Class: Eq_8
  DataType: (memptr (ptr Eq_12) word16)
  OrigDataType: (memptr T_12 (struct 0002 (0 T_15 t0000)))
T_9: (in 0x0002 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_10: (in si_28 + 0x0002 : word16)
  Class: Eq_7
  DataType: (memptr (ptr Eq_12) Eq_7)
  OrigDataType: word16
T_11: (in ax_41 : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_12: (in 0xA000 : selector)
  Class: Eq_12
  DataType: (ptr Eq_12)
  OrigDataType: (ptr (segment (13F (arr T_81) a013F)))
T_13: (in 0x0000 : word16)
  Class: Eq_13
  DataType: word16
  OrigDataType: word16
T_14: (in si_28 + 0x0000 : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_15: (in Mem0[0xA000:si_28 + 0x0000:word16] : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_16: (in 0x0001 : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_17: (in si_39 - 0x0001 : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_18: (in Mem0[0xA000:si_39 - 0x0001:word16] : word16)
  Class: Eq_18
  DataType: word16
  OrigDataType: word16
T_19: (in 0xA000->*si_28 + (0xA000->*si_39).wFFFFFFFF : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_20: (in SLICE(ax_41, byte, 8) : byte)
  Class: Eq_20
  DataType: byte
  OrigDataType: byte
T_21: (in (byte) ax_41 : byte)
  Class: Eq_21
  DataType: byte
  OrigDataType: byte
T_22: (in SLICE(ax_41, byte, 8) + (byte) ax_41 : byte)
  Class: Eq_22
  DataType: byte
  OrigDataType: byte
T_23: (in DPB(ax_41, SLICE(ax_41, byte, 8) + (byte) ax_41, 8, 8) : word16)
  Class: Eq_23
  DataType: uint16
  OrigDataType: uint16
T_24: (in 0x000A : word16)
  Class: Eq_24
  DataType: uint16
  OrigDataType: uint16
T_25: (in DPB(ax_41, SLICE(ax_41, byte, 8) + (byte) ax_41, 8, 8) >>u 0x000A : word16)
  Class: Eq_25
  DataType: uint16
  OrigDataType: uint16
T_26: (in (byte) (DPB(ax_41, SLICE(ax_41, byte, 8) + (byte) ax_41, 8, 8) >>u 0x000A) : byte)
  Class: Eq_26
  DataType: byte
  OrigDataType: byte
T_27: (in di_29 : (memptr (ptr Eq_12) byte))
  Class: Eq_27
  DataType: (memptr (ptr Eq_12) byte)
  OrigDataType: (memptr T_12 (struct 0001 (0 T_26 t0000)))
T_28: (in 0x0000 : word16)
  Class: Eq_28
  DataType: word16
  OrigDataType: word16
T_29: (in di_29 + 0x0000 : word16)
  Class: Eq_29
  DataType: word16
  OrigDataType: word16
T_30: (in Mem49[0xA000:di_29 + 0x0000:byte] : byte)
  Class: Eq_26
  DataType: byte
  OrigDataType: byte
T_31: (in si_39 - 0x0001 : word16)
  Class: Eq_8
  DataType: (memptr (ptr Eq_12) word16)
  OrigDataType: word16
T_32: (in 0x0001 : word16)
  Class: Eq_32
  DataType: word16
  OrigDataType: word16
T_33: (in di_29 + 0x0001 : word16)
  Class: Eq_27
  DataType: (memptr (ptr Eq_12) byte)
  OrigDataType: word16
T_34: (in cx_33 : word16)
  Class: Eq_34
  DataType: word16
  OrigDataType: word16
T_35: (in 0x0001 : word16)
  Class: Eq_35
  DataType: word16
  OrigDataType: word16
T_36: (in cx_33 - 0x0001 : word16)
  Class: Eq_34
  DataType: word16
  OrigDataType: word16
T_37: (in 0x0000 : word16)
  Class: Eq_34
  DataType: word16
  OrigDataType: word16
T_38: (in cx_33 != 0x0000 : bool)
  Class: Eq_38
  DataType: bool
  OrigDataType: bool
T_39: (in 0x02 : byte)
  Class: Eq_39
  DataType: byte
  OrigDataType: byte
T_40: (in DPB(cx_33, 0x02, 8, 8) : word16)
  Class: Eq_40
  DataType: word16
  OrigDataType: word16
T_41: (in cx : word16)
  Class: Eq_40
  DataType: word16
  OrigDataType: word16
T_42: (in ss : selector)
  Class: Eq_42
  DataType: (ptr Eq_42)
  OrigDataType: (ptr (segment))
T_43: (in bp : (memptr (ptr Eq_42) byte))
  Class: Eq_43
  DataType: (memptr (ptr Eq_42) byte)
  OrigDataType: (memptr T_42 (struct 0001 (0 T_46 t0000)))
T_44: (in 0x0000 : word16)
  Class: Eq_44
  DataType: word16
  OrigDataType: word16
T_45: (in bp + 0x0000 : word16)
  Class: Eq_45
  DataType: word16
  OrigDataType: word16
T_46: (in Mem49[ss:bp + 0x0000:byte] : byte)
  Class: Eq_46
  DataType: byte
  OrigDataType: byte
T_47: (in 0x0F : byte)
  Class: Eq_47
  DataType: byte
  OrigDataType: byte
T_48: (in ss->*bp & 0x0F : byte)
  Class: Eq_48
  DataType: byte
  OrigDataType: byte
T_49: (in 0x10 : byte)
  Class: Eq_49
  DataType: byte
  OrigDataType: byte
T_50: (in ss->*bp & 0x0F | 0x10 : byte)
  Class: Eq_26
  DataType: byte
  OrigDataType: byte
T_51: (in 0x0000 : word16)
  Class: Eq_51
  DataType: word16
  OrigDataType: word16
T_52: (in di_29 + 0x0000 : word16)
  Class: Eq_52
  DataType: word16
  OrigDataType: word16
T_53: (in Mem66[0xA000:di_29 + 0x0000:byte] : byte)
  Class: Eq_26
  DataType: byte
  OrigDataType: byte
T_54: (in 0x0001 : word16)
  Class: Eq_54
  DataType: word16
  OrigDataType: word16
T_55: (in bp + 0x0001 : word16)
  Class: Eq_43
  DataType: (memptr (ptr Eq_42) byte)
  OrigDataType: word16
T_56: (in 0x0001 : word16)
  Class: Eq_56
  DataType: word16
  OrigDataType: word16
T_57: (in di_29 + 0x0001 : word16)
  Class: Eq_27
  DataType: (memptr (ptr Eq_12) byte)
  OrigDataType: word16
T_58: (in 0x0001 : word16)
  Class: Eq_58
  DataType: word16
  OrigDataType: word16
T_59: (in cx - 0x0001 : word16)
  Class: Eq_40
  DataType: word16
  OrigDataType: word16
T_60: (in 0x0000 : word16)
  Class: Eq_40
  DataType: word16
  OrigDataType: word16
T_61: (in cx != 0x0000 : bool)
  Class: Eq_61
  DataType: bool
  OrigDataType: bool
T_62: (in __inb : ptr32)
  Class: Eq_62
  DataType: (ptr Eq_62)
  OrigDataType: (ptr (fn T_64 (T_63)))
T_63: (in 0x03DA : word16)
  Class: Eq_63
  DataType: word16
  OrigDataType: word16
T_64: (in __inb(0x03DA) : byte)
  Class: Eq_64
  DataType: byte
  OrigDataType: byte
T_65: (in 0x08 : byte)
  Class: Eq_65
  DataType: byte
  OrigDataType: byte
T_66: (in __inb(0x03DA) & 0x08 : byte)
  Class: Eq_66
  DataType: byte
  OrigDataType: byte
T_67: (in 0x00 : byte)
  Class: Eq_66
  DataType: byte
  OrigDataType: byte
T_68: (in (__inb(0x03DA) & 0x08) == 0x00 : bool)
  Class: Eq_68
  DataType: bool
  OrigDataType: bool
T_69: (in __inb : ptr32)
  Class: Eq_69
  DataType: (ptr Eq_69)
  OrigDataType: (ptr (fn T_71 (T_70)))
T_70: (in 0x60 : byte)
  Class: Eq_70
  DataType: byte
  OrigDataType: byte
T_71: (in __inb(0x60) : byte)
  Class: Eq_71
  DataType: byte
  OrigDataType: byte
T_72: (in 0x01 : byte)
  Class: Eq_71
  DataType: byte
  OrigDataType: byte
T_73: (in __inb(0x60) != 0x01 : bool)
  Class: Eq_73
  DataType: bool
  OrigDataType: bool
T_74: (in 0x013F : word16)
  Class: Eq_8
  DataType: (memptr (ptr Eq_12) word16)
  OrigDataType: word16
T_75: (in 0x0000 : word16)
  Class: Eq_27
  DataType: (memptr (ptr Eq_12) byte)
  OrigDataType: word16
T_76: (in 0xFC : byte)
  Class: Eq_76
  DataType: byte
  OrigDataType: byte
T_77: (in DPB(cx, 0xFC, 8, 8) : word16)
  Class: Eq_34
  DataType: word16
  OrigDataType: word16
T_78: (in bios_video_set_mode : ptr32)
  Class: Eq_2
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (fn T_80 (T_79)))
T_79: (in 0x03 : byte)
  Class: Eq_4
  DataType: byte
  OrigDataType: byte
T_80: (in bios_video_set_mode(0x03) : void)
  Class: Eq_6
  DataType: void
  OrigDataType: void
T_81:
  Class: Eq_81
  DataType: word16
  OrigDataType: (struct 0002 (0 T_15 t0000))
*/
typedef Eq_12 Eq_1struct Globals {
	Eq_12 * ptrFFFA0000;	// FFFA0000
} Eq_1;

typedef void (Eq_2)(byte);

typedef struct Eq_7 {
	word16 wFFFFFFFF;	// FFFFFFFF
} Eq_7;

typedef  Eq_12[]struct Eq_12 {
	byte b0000;	// 0
	word16 a013F[];	// 13F
} Eq_12;

typedef struct Eq_42 {
} Eq_42;

typedef byte (Eq_62)(word16);

typedef byte (Eq_69)(byte);

