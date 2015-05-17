// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_094/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_14) ptrFFFA0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_14: (segment "Eq_14")
	T_14 (in 0xA000 : selector)
Eq_52: (union "Eq_52" (int16 u0) (uint16 u1))
	T_52 (in ax_28 : Eq_52)
	T_53 (in al_27 *s al_27 : int16)
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
T_7: (in al_2 : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_8: (in 0x13 : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_9: (in ax_20 : uint16)
  Class: Eq_9
  DataType: uint16
  OrigDataType: uint16
T_10: (in ax : word16)
  Class: Eq_10
  DataType: word16
  OrigDataType: word16
T_11: (in 0x13 : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_12: (in DPB(ax, 0x13, 0, 8) : word16)
  Class: Eq_9
  DataType: uint16
  OrigDataType: word16
T_13: (in al_43 : byte)
  Class: Eq_13
  DataType: byte
  OrigDataType: byte
T_14: (in 0xA000 : selector)
  Class: Eq_14
  DataType: (ptr Eq_14)
  OrigDataType: (ptr (segment))
T_15: (in di : (memptr (ptr Eq_14) byte))
  Class: Eq_15
  DataType: (memptr (ptr Eq_14) byte)
  OrigDataType: (memptr T_14 (struct 0001 (0 T_18 t0000)))
T_16: (in 0x0000 : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_17: (in di + 0x0000 : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_18: (in Mem53[0xA000:di + 0x0000:byte] : byte)
  Class: Eq_13
  DataType: byte
  OrigDataType: byte
T_19: (in 0x0001 : word16)
  Class: Eq_19
  DataType: word16
  OrigDataType: word16
T_20: (in di + 0x0001 : word16)
  Class: Eq_15
  DataType: (memptr (ptr Eq_14) byte)
  OrigDataType: word16
T_21: (in dx_ax_57 : word32)
  Class: Eq_21
  DataType: word32
  OrigDataType: word32
T_22: (in dx_34 : int16)
  Class: Eq_22
  DataType: int16
  OrigDataType: int16
T_23: (in SEQ(dx_34, di) : word32)
  Class: Eq_21
  DataType: word32
  OrigDataType: word32
T_24: (in dx_ax_60 : uint32)
  Class: Eq_24
  DataType: uint32
  OrigDataType: uint32
T_25: (in 0x0140 : word16)
  Class: Eq_25
  DataType: word16
  OrigDataType: word16
T_26: (in dx_ax_57 % 0x0140 : uint16)
  Class: Eq_26
  DataType: uint16
  OrigDataType: uint16
T_27: (in SEQ(dx_ax_57 % 0x0140, di) : word32)
  Class: Eq_24
  DataType: uint32
  OrigDataType: word32
T_28: (in dx_ax_57 % 0x0140 : uint16)
  Class: Eq_28
  DataType: uint16
  OrigDataType: uint16
T_29: (in dx : uint16)
  Class: Eq_28
  DataType: uint16
  OrigDataType: uint16
T_30: (in 0x0140 : word16)
  Class: Eq_30
  DataType: uint16
  OrigDataType: uint16
T_31: (in dx_ax_60 /u 0x0140 : uint16)
  Class: Eq_9
  DataType: uint16
  OrigDataType: uint16
T_32: (in dx_ax_60 /u 0x0140 : uint16)
  Class: Eq_32
  DataType: uint16
  OrigDataType: uint16
T_33: (in (byte) (dx_ax_60 /u 0x0140) : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_34: (in cx : word16)
  Class: Eq_34
  DataType: word16
  OrigDataType: word16
T_35: (in 0x0001 : word16)
  Class: Eq_35
  DataType: word16
  OrigDataType: word16
T_36: (in cx - 0x0001 : word16)
  Class: Eq_34
  DataType: word16
  OrigDataType: word16
T_37: (in 0x0000 : word16)
  Class: Eq_34
  DataType: word16
  OrigDataType: word16
T_38: (in cx != 0x0000 : bool)
  Class: Eq_38
  DataType: bool
  OrigDataType: bool
T_39: (in ax_44 : word16)
  Class: Eq_39
  DataType: word16
  OrigDataType: word16
T_40: (in al_31 : byte)
  Class: Eq_40
  DataType: byte
  OrigDataType: byte
T_41: (in 0x7F : byte)
  Class: Eq_41
  DataType: byte
  OrigDataType: byte
T_42: (in al_31 & 0x7F : byte)
  Class: Eq_42
  DataType: byte
  OrigDataType: byte
T_43: (in ~(al_31 & 0x7F) : byte)
  Class: Eq_43
  DataType: byte
  OrigDataType: byte
T_44: (in DPB(ax_20, ~(al_31 & 0x7F), 8, 8) : word16)
  Class: Eq_44
  DataType: uint16
  OrigDataType: uint16
T_45: (in 0x000C : word16)
  Class: Eq_45
  DataType: uint16
  OrigDataType: uint16
T_46: (in DPB(ax_20, ~(al_31 & 0x7F), 8, 8) >>u 0x000C : word16)
  Class: Eq_46
  DataType: uint16
  OrigDataType: uint16
T_47: (in ax_44 - (DPB(ax_20, ~(al_31 & 0x7F), 8, 8) >>u 0x000C) : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_48: (in (byte) (ax_44 - (DPB(ax_20, ~(al_31 & 0x7F), 8, 8) >>u 0x000C)) : byte)
  Class: Eq_13
  DataType: byte
  OrigDataType: byte
T_49: (in al_27 : int8)
  Class: Eq_49
  DataType: int8
  OrigDataType: int8
T_50: (in 0x9C : byte)
  Class: Eq_50
  DataType: byte
  OrigDataType: byte
T_51: (in al_2 + 0x9C : byte)
  Class: Eq_49
  DataType: int8
  OrigDataType: byte
T_52: (in ax_28 : Eq_52)
  Class: Eq_52
  DataType: Eq_52
  OrigDataType: uint16
T_53: (in al_27 *s al_27 : int16)
  Class: Eq_52
  DataType: Eq_52
  OrigDataType: int16
T_54: (in 0x0007 : word16)
  Class: Eq_54
  DataType: uint16
  OrigDataType: uint16
T_55: (in ax_28 >>u 0x0007 : word16)
  Class: Eq_55
  DataType: uint16
  OrigDataType: uint16
T_56: (in (byte) (ax_28 >>u 0x0007) : byte)
  Class: Eq_56
  DataType: byte
  OrigDataType: byte
T_57: (in ~(byte) (ax_28 >>u 0x0007) : byte)
  Class: Eq_40
  DataType: byte
  OrigDataType: byte
T_58: (in 0x00A0 : word16)
  Class: Eq_58
  DataType: word16
  OrigDataType: word16
T_59: (in dx - 0x00A0 : word16)
  Class: Eq_22
  DataType: int16
  OrigDataType: word16
T_60: (in ax_39 : uint16)
  Class: Eq_60
  DataType: uint16
  OrigDataType: uint16
T_61: (in ax_28 >>u 0x0007 : word16)
  Class: Eq_61
  DataType: uint16
  OrigDataType: uint16
T_62: (in al_31 & 0x7F : byte)
  Class: Eq_62
  DataType: byte
  OrigDataType: byte
T_63: (in DPB(ax_28 >>u 0x0007, al_31 & 0x7F, 0, 8) : word16)
  Class: Eq_63
  DataType: int16
  OrigDataType: int16
T_64: (in dx_34 *s DPB(ax_28 >>u 0x0007, al_31 & 0x7F, 0, 8) : int32)
  Class: Eq_64
  DataType: int32
  OrigDataType: int32
T_65: (in (word16) (dx_34 *s DPB(ax_28 >>u 0x0007, al_31 & 0x7F, 0, 8)) : word16)
  Class: Eq_65
  DataType: word16
  OrigDataType: word16
T_66: (in si : word16)
  Class: Eq_66
  DataType: word16
  OrigDataType: word16
T_67: (in (word16) (dx_34 *s DPB(ax_28 >>u 0x0007, al_31 & 0x7F, 0, 8)) + si : word16)
  Class: Eq_60
  DataType: uint16
  OrigDataType: word16
T_68: (in al_42 : byte)
  Class: Eq_68
  DataType: byte
  OrigDataType: byte
T_69: (in 0x0007 : word16)
  Class: Eq_69
  DataType: uint16
  OrigDataType: uint16
T_70: (in ax_39 >>u 0x0007 : word16)
  Class: Eq_70
  DataType: uint16
  OrigDataType: uint16
T_71: (in (byte) (ax_39 >>u 0x0007) : byte)
  Class: Eq_71
  DataType: byte
  OrigDataType: byte
T_72: (in (byte) ax_20 : byte)
  Class: Eq_72
  DataType: byte
  OrigDataType: byte
T_73: (in (byte) (ax_39 >>u 0x0007) ^ (byte) ax_20 : byte)
  Class: Eq_68
  DataType: byte
  OrigDataType: byte
T_74: (in 0x20 : byte)
  Class: Eq_74
  DataType: byte
  OrigDataType: byte
T_75: (in al_42 & 0x20 : byte)
  Class: Eq_13
  DataType: byte
  OrigDataType: byte
T_76: (in ax_39 >>u 0x0007 : word16)
  Class: Eq_76
  DataType: uint16
  OrigDataType: uint16
T_77: (in al_42 & 0x20 : byte)
  Class: Eq_77
  DataType: byte
  OrigDataType: byte
T_78: (in DPB(ax_39 >>u 0x0007, al_42 & 0x20, 0, 8) : word16)
  Class: Eq_39
  DataType: word16
  OrigDataType: word16
T_79: (in al_42 & 0x20 : byte)
  Class: Eq_79
  DataType: byte
  OrigDataType: byte
T_80: (in 0x00 : byte)
  Class: Eq_79
  DataType: byte
  OrigDataType: byte
T_81: (in (al_42 & 0x20) == 0x00 : bool)
  Class: Eq_81
  DataType: bool
  OrigDataType: bool
T_82: (in 0x0040 : word16)
  Class: Eq_82
  DataType: word16
  OrigDataType: word16
T_83: (in si + 0x0040 : word16)
  Class: Eq_66
  DataType: word16
  OrigDataType: word16
*/
typedef Eq_14 Eq_1struct Globals {
	Eq_14 * ptrFFFA0000;	// FFFA0000
} Eq_1;

typedef void (Eq_2)(byte);

typedef struct Eq_14 {
} Eq_14;

typedef union Eq_52 {
	int16 u0;
	uint16 u1;
} Eq_52;

