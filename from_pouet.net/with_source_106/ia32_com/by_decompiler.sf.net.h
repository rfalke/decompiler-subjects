// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_106/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_25) ptrFFFA0000) (0 (ptr Eq_60) ptr0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_25: (segment "Eq_25" (0 byte b0000))
	T_25 (in 0xA000 : selector)
Eq_51: (fn byte (byte))
	T_51 (in __inb : ptr32)
Eq_60: (segment "Eq_60" (46C byte b046C))
	T_60 (in 0x0000 : selector)
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
T_7: (in bl_118 : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_8: (in 0x03 : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_9: (in bx_119 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_10: (in bx : word16)
  Class: Eq_10
  DataType: word16
  OrigDataType: word16
T_11: (in 0x03 : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_12: (in DPB(bx, 0x03, 0, 8) : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_13: (in dx_61 : uint16)
  Class: Eq_13
  DataType: uint16
  OrigDataType: word16
T_14: (in dx_112 : uint16)
  Class: Eq_13
  DataType: uint16
  OrigDataType: word16
T_15: (in ax_110 : uint16)
  Class: Eq_13
  DataType: uint16
  OrigDataType: word16
T_16: (in 0x0281 : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_17: (in ax_110 + 0x0281 : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_18: (in si_53 : word16)
  Class: Eq_18
  DataType: word16
  OrigDataType: word16
T_19: (in ax_110 + 0x0281 - si_53 : word16)
  Class: Eq_19
  DataType: word16
  OrigDataType: word16
T_20: (in SEQ(dx_112, ax_110 + 0x0281 - si_53) : word32)
  Class: Eq_20
  DataType: word32
  OrigDataType: word32
T_21: (in SEQ(dx_112, ax_110 + 0x0281 - si_53) % bx_119 : uint16)
  Class: Eq_13
  DataType: uint16
  OrigDataType: uint16
T_22: (in (byte) dx_61 : byte)
  Class: Eq_22
  DataType: byte
  OrigDataType: byte
T_23: (in 0x0F : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_24: (in (byte) dx_61 & 0x0F : byte)
  Class: Eq_24
  DataType: byte
  OrigDataType: byte
T_25: (in 0xA000 : selector)
  Class: Eq_25
  DataType: (ptr Eq_25)
  OrigDataType: (ptr (segment))
T_26: (in di_35 : (memptr (ptr Eq_25) byte))
  Class: Eq_26
  DataType: (memptr (ptr Eq_25) byte)
  OrigDataType: (memptr T_25 (struct 0001 (0 T_29 t0000)))
T_27: (in 0x0000 : word16)
  Class: Eq_27
  DataType: word16
  OrigDataType: word16
T_28: (in di_35 + 0x0000 : word16)
  Class: Eq_28
  DataType: word16
  OrigDataType: word16
T_29: (in Mem67[0xA000:di_35 + 0x0000:byte] : byte)
  Class: Eq_24
  DataType: byte
  OrigDataType: byte
T_30: (in si_77 : word16)
  Class: Eq_30
  DataType: word16
  OrigDataType: word16
T_31: (in 0x0001 : word16)
  Class: Eq_31
  DataType: word16
  OrigDataType: word16
T_32: (in si_53 - 0x0001 : word16)
  Class: Eq_30
  DataType: word16
  OrigDataType: word16
T_33: (in 0x0001 : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_34: (in di_35 + 0x0001 : word16)
  Class: Eq_26
  DataType: (memptr (ptr Eq_25) byte)
  OrigDataType: word16
T_35: (in 0x0000 : word16)
  Class: Eq_13
  DataType: uint16
  OrigDataType: word16
T_36: (in 0x0001 : word16)
  Class: Eq_36
  DataType: word16
  OrigDataType: word16
T_37: (in si_77 - 0x0001 : word16)
  Class: Eq_18
  DataType: word16
  OrigDataType: word16
T_38: (in 0x0001 : word16)
  Class: Eq_30
  DataType: word16
  OrigDataType: word16
T_39: (in si_77 != 0x0001 : bool)
  Class: Eq_39
  DataType: bool
  OrigDataType: bool
T_40: (in cx : word16)
  Class: Eq_40
  DataType: uint16
  OrigDataType: uint16
T_41: (in 0x0001 : word16)
  Class: Eq_41
  DataType: word16
  OrigDataType: word16
T_42: (in cx - 0x0001 : word16)
  Class: Eq_40
  DataType: uint16
  OrigDataType: word16
T_43: (in 0x0000 : word16)
  Class: Eq_40
  DataType: uint16
  OrigDataType: word16
T_44: (in cx != 0x0000 : bool)
  Class: Eq_44
  DataType: bool
  OrigDataType: bool
T_45: (in dx_ax_47 : uint32)
  Class: Eq_45
  DataType: uint32
  OrigDataType: word32
T_46: (in cx *u cx : uint32)
  Class: Eq_45
  DataType: uint32
  OrigDataType: uint32
T_47: (in (word16) dx_ax_47 : word16)
  Class: Eq_13
  DataType: uint16
  OrigDataType: word16
T_48: (in SLICE(dx_ax_47, word16, 16) : word16)
  Class: Eq_13
  DataType: uint16
  OrigDataType: word16
T_49: (in 0x0280 : word16)
  Class: Eq_18
  DataType: word16
  OrigDataType: word16
T_50: (in ax_90 : word16)
  Class: Eq_50
  DataType: word16
  OrigDataType: word16
T_51: (in __inb : ptr32)
  Class: Eq_51
  DataType: (ptr Eq_51)
  OrigDataType: (ptr (fn T_53 (T_52)))
T_52: (in 0x60 : byte)
  Class: Eq_52
  DataType: byte
  OrigDataType: byte
T_53: (in __inb(0x60) : byte)
  Class: Eq_53
  DataType: byte
  OrigDataType: byte
T_54: (in DPB(ax_110, __inb(0x60), 0, 8) : word16)
  Class: Eq_50
  DataType: word16
  OrigDataType: word16
T_55: (in 0x0001 : word16)
  Class: Eq_50
  DataType: word16
  OrigDataType: word16
T_56: (in ax_90 == 0x0001 : bool)
  Class: Eq_56
  DataType: bool
  OrigDataType: bool
T_57: (in ax_108 : uint16)
  Class: Eq_13
  DataType: uint16
  OrigDataType: word16
T_58: (in 0x0001 : word16)
  Class: Eq_58
  DataType: word16
  OrigDataType: word16
T_59: (in ax_90 - 0x0001 : word16)
  Class: Eq_59
  DataType: word16
  OrigDataType: word16
T_60: (in 0x0000 : selector)
  Class: Eq_60
  DataType: (ptr Eq_60)
  OrigDataType: (ptr (segment (46C T_62 t046C)))
T_61: (in 0x046C : word16)
  Class: Eq_61
  DataType: (memptr (ptr Eq_60) byte)
  OrigDataType: (memptr T_60 (struct (0 T_62 t0000)))
T_62: (in Mem67[0x0000:0x046C:byte] : byte)
  Class: Eq_62
  DataType: byte
  OrigDataType: byte
T_63: (in 0x0F : byte)
  Class: Eq_63
  DataType: byte
  OrigDataType: byte
T_64: (in 0x0000->b046C & 0x0F : byte)
  Class: Eq_64
  DataType: byte
  OrigDataType: byte
T_65: (in DPB(ax_90 - 0x0001, 0x0000->b046C & 0x0F, 0, 8) : word16)
  Class: Eq_13
  DataType: uint16
  OrigDataType: word16
T_66: (in dx_122 : uint16)
  Class: Eq_13
  DataType: uint16
  OrigDataType: word16
T_67: (in (byte) dx_122 : byte)
  Class: Eq_67
  DataType: byte
  OrigDataType: byte
T_68: (in (byte) ax_108 : byte)
  Class: Eq_68
  DataType: byte
  OrigDataType: byte
T_69: (in (byte) dx_122 - (byte) ax_108 : byte)
  Class: Eq_69
  DataType: bcu8
  OrigDataType: bcu8
T_70: (in 0x00 : byte)
  Class: Eq_69
  DataType: bcu8
  OrigDataType: bcu8
T_71: (in (byte) dx_122 - (byte) ax_108 <=u 0x00 : bool)
  Class: Eq_71
  DataType: bool
  OrigDataType: bool
T_72: (in 0x01 : byte)
  Class: Eq_72
  DataType: byte
  OrigDataType: byte
T_73: (in bl_118 + 0x01 : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_74: (in DPB(bx_119, bl_118, 0, 8) : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_75: (in 0x00 : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_76: (in bl_118 != 0x00 : bool)
  Class: Eq_76
  DataType: bool
  OrigDataType: bool
T_77: (in 0xC8 : byte)
  Class: Eq_77
  DataType: byte
  OrigDataType: byte
T_78: (in DPB(cx, 0xC8, 0, 8) : word16)
  Class: Eq_40
  DataType: uint16
  OrigDataType: word16
T_79: (in 0x0000 : word16)
  Class: Eq_26
  DataType: (memptr (ptr Eq_25) byte)
  OrigDataType: word16
*/
typedef Eq_25 Eq_1Eq_60 Eq_1struct Globals {
	Eq_25 * ptrFFFA0000;	// FFFA0000
	Eq_60 * ptr0000;	// 0
} Eq_1;

typedef void (Eq_2)(byte);

typedef struct Eq_25 {
	byte b0000;	// 0
} Eq_25;

typedef byte (Eq_51)(byte);

typedef struct Eq_60 {
	byte b046C;	// 46C
} Eq_60;

