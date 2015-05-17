// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_066/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_22) ptrFFFA0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_22: (segment "Eq_22" (FFFFBA8F byte bFFFFBA8F) (3ECF byte b3ECF) (BA8F byte bBA8F))
	T_22 (in 0xA000 : selector)
Eq_48: (fn byte (byte))
	T_48 (in __inb : ptr32)
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
T_7: (in ax_100 : word16)
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
T_11: (in cx : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_12: (in 0xA0 : byte)
  Class: Eq_12
  DataType: byte
  OrigDataType: byte
T_13: (in DPB(cx, 0xA0, 0, 8) : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_14: (in 0xBA8F : word16)
  Class: Eq_14
  DataType: (memptr (ptr Eq_22) byte)
  OrigDataType: word16
T_15: (in di_104 : (memptr (ptr Eq_22) byte))
  Class: Eq_14
  DataType: (memptr (ptr Eq_22) byte)
  OrigDataType: (memptr T_22 (struct 0001 (0 T_25 t0000)))
T_16: (in 0xFE20 : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_17: (in si_105 : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_18: (in dx : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_19: (in 0x10 : byte)
  Class: Eq_19
  DataType: byte
  OrigDataType: byte
T_20: (in DPB(dx, 0x10, 8, 8) : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_21: (in al_40 : byte)
  Class: Eq_21
  DataType: byte
  OrigDataType: byte
T_22: (in 0xA000 : selector)
  Class: Eq_22
  DataType: (ptr Eq_22)
  OrigDataType: (ptr (segment))
T_23: (in 0x0000 : word16)
  Class: Eq_23
  DataType: word16
  OrigDataType: word16
T_24: (in di_104 + 0x0000 : word16)
  Class: Eq_24
  DataType: word16
  OrigDataType: word16
T_25: (in Mem63[0xA000:di_104 + 0x0000:byte] : byte)
  Class: Eq_21
  DataType: byte
  OrigDataType: byte
T_26: (in 0x0001 : word16)
  Class: Eq_26
  DataType: word16
  OrigDataType: word16
T_27: (in di_104 + 0x0001 : word16)
  Class: Eq_14
  DataType: (memptr (ptr Eq_22) byte)
  OrigDataType: word16
T_28: (in 0x0001 : word16)
  Class: Eq_28
  DataType: word16
  OrigDataType: word16
T_29: (in cx - 0x0001 : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_30: (in 0x0000 : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_31: (in cx == 0x0000 : bool)
  Class: Eq_31
  DataType: bool
  OrigDataType: bool
T_32: (in 0x0001 : word16)
  Class: Eq_32
  DataType: word16
  OrigDataType: word16
T_33: (in cx - 0x0001 : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_34: (in 0x0000 : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_35: (in cx != 0x0000 : bool)
  Class: Eq_35
  DataType: bool
  OrigDataType: bool
T_36: (in dx_106 : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_37: (in 0x0001 : word16)
  Class: Eq_37
  DataType: word16
  OrigDataType: word16
T_38: (in dx_106 - 0x0001 : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_39: (in 0x0000 : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_40: (in dx != 0x0000 : bool)
  Class: Eq_40
  DataType: bool
  OrigDataType: bool
T_41: (in di_104 + si_105 : word16)
  Class: Eq_14
  DataType: (memptr (ptr Eq_22) byte)
  OrigDataType: word16
T_42: (in bx : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_43: (in 0x0001 : word16)
  Class: Eq_43
  DataType: word16
  OrigDataType: word16
T_44: (in bx - 0x0001 : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_45: (in 0x0000 : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_46: (in bx != 0x0000 : bool)
  Class: Eq_46
  DataType: bool
  OrigDataType: bool
T_47: (in ax_98 : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_48: (in __inb : ptr32)
  Class: Eq_48
  DataType: (ptr Eq_48)
  OrigDataType: (ptr (fn T_50 (T_49)))
T_49: (in 0x60 : byte)
  Class: Eq_49
  DataType: byte
  OrigDataType: byte
T_50: (in __inb(0x60) : byte)
  Class: Eq_50
  DataType: byte
  OrigDataType: byte
T_51: (in DPB(dx_106, __inb(0x60), 0, 8) : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_52: (in ax_39 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_53: (in 0x0000 : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_54: (in ax_98 == 0x0000 : bool)
  Class: Eq_54
  DataType: bool
  OrigDataType: bool
T_55: (in 0x0001 : word16)
  Class: Eq_55
  DataType: word16
  OrigDataType: word16
T_56: (in ax_100 + 0x0001 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_57: (in 0x64 : byte)
  Class: Eq_57
  DataType: byte
  OrigDataType: byte
T_58: (in DPB(bx, 0x64, 0, 8) : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_59: (in 0x3ECF : word16)
  Class: Eq_14
  DataType: (memptr (ptr Eq_22) byte)
  OrigDataType: word16
T_60: (in 0x00A0 : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_61: (in (byte) ax_39 : byte)
  Class: Eq_21
  DataType: byte
  OrigDataType: byte
T_62: (in 0x01 : byte)
  Class: Eq_62
  DataType: byte
  OrigDataType: byte
T_63: (in al_40 & 0x01 : byte)
  Class: Eq_63
  DataType: byte
  OrigDataType: byte
T_64: (in 0x00 : byte)
  Class: Eq_63
  DataType: byte
  OrigDataType: byte
T_65: (in (al_40 & 0x01) == 0x00 : bool)
  Class: Eq_65
  DataType: bool
  OrigDataType: bool
*/
typedef Eq_22 Eq_1struct Globals {
	Eq_22 * ptrFFFA0000;	// FFFA0000
} Eq_1;

typedef void (Eq_2)(byte);

typedef struct Eq_22 {
	byte bFFFFBA8F;	// FFFFBA8F
	byte b3ECF;	// 3ECF
	byte bBA8F;	// BA8F
} Eq_22;

typedef byte (Eq_48)(byte);

