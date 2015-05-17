// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_114/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_11: (struct (0 byte b0000))
	T_11 (in di_69 : word16)
	T_29 (in di_69 + 0x0001 - 0x0141 : word16)
	T_38 (in di : word16)
	T_40 (in di + 0x0001 : word16)
	T_41 (in 0x0000 : word16)
Eq_60: (union (int16 u0) (uint16 u1))
	T_60 (in ax_43 : word16)
	T_62 (in SEQ(dx, ax_39) /u ax_34 : uint16)
Eq_66: (segment)
	T_66 (in ds : selector)
Eq_70: (union (int16 u0) (uint16 u1))
	T_70 (in (dx_ax_26 % 0x0140 - 0x00A0) *s ax_43 : int16)
Eq_72: (union (uint16 u0) ((memptr (ptr Eq_66) (struct (0 byte b0000))) u1))
	T_72 (in (dx_ax_26 % 0x0140 - 0x00A0) *s ax_43 >>u 0x000C : word16)
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
T_7: (in bx_11 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_8: (in bx : word16)
  Class: Eq_8
  DataType: word16
  OrigDataType: word16
T_9: (in 0xA0 : byte)
  Class: Eq_9
  DataType: byte
  OrigDataType: byte
T_10: (in DPB(bx, 0xA0, 8, 8) : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_11: (in di_69 : word16)
  Class: Eq_11
  DataType: (memptr word16 Eq_11)
  OrigDataType: (memptr T_7 (struct (0 T_18 t0000)))
T_12: (in al_70 : byte)
  Class: Eq_12
  DataType: byte
  OrigDataType: byte
T_13: (in al_55 : byte)
  Class: Eq_13
  DataType: byte
  OrigDataType: byte
T_14: (in 0x10 : byte)
  Class: Eq_14
  DataType: byte
  OrigDataType: byte
T_15: (in al_55 | 0x10 : byte)
  Class: Eq_12
  DataType: byte
  OrigDataType: byte
T_16: (in 0x0000 : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_17: (in di_69 + 0x0000 : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_18: (in Mem72[bx_11:di_69 + 0x0000:byte] : byte)
  Class: Eq_12
  DataType: byte
  OrigDataType: byte
T_19: (in ax_71 : word16)
  Class: Eq_19
  DataType: word16
  OrigDataType: word16
T_20: (in ax_54 : word16)
  Class: Eq_20
  DataType: word16
  OrigDataType: word16
T_21: (in DPB(ax_54, al_70, 0, 8) : word16)
  Class: Eq_19
  DataType: word16
  OrigDataType: word16
T_22: (in al_76 : byte)
  Class: Eq_22
  DataType: byte
  OrigDataType: byte
T_23: (in 0x0001 : word16)
  Class: Eq_23
  DataType: word16
  OrigDataType: word16
T_24: (in ax_71 + 0x0001 : word16)
  Class: Eq_24
  DataType: word16
  OrigDataType: word16
T_25: (in (byte) (ax_71 + 0x0001) : byte)
  Class: Eq_22
  DataType: byte
  OrigDataType: byte
T_26: (in 0x0001 : word16)
  Class: Eq_26
  DataType: word16
  OrigDataType: word16
T_27: (in di_69 + 0x0001 : word16)
  Class: Eq_27
  DataType: word16
  OrigDataType: word16
T_28: (in 0x0141 : word16)
  Class: Eq_28
  DataType: word16
  OrigDataType: word16
T_29: (in di_69 + 0x0001 - 0x0141 : word16)
  Class: Eq_11
  DataType: (memptr word16 Eq_11)
  OrigDataType: word16
T_30: (in 0x0F : byte)
  Class: Eq_30
  DataType: byte
  OrigDataType: byte
T_31: (in al_76 & 0x0F : byte)
  Class: Eq_13
  DataType: byte
  OrigDataType: byte
T_32: (in ax_71 + 0x0001 : word16)
  Class: Eq_32
  DataType: word16
  OrigDataType: word16
T_33: (in al_76 & 0x0F : byte)
  Class: Eq_33
  DataType: byte
  OrigDataType: byte
T_34: (in DPB(ax_71 + 0x0001, al_76 & 0x0F, 0, 8) : word16)
  Class: Eq_20
  DataType: word16
  OrigDataType: word16
T_35: (in al_76 & 0x0F : byte)
  Class: Eq_35
  DataType: byte
  OrigDataType: byte
T_36: (in 0x00 : byte)
  Class: Eq_35
  DataType: byte
  OrigDataType: byte
T_37: (in (al_76 & 0x0F) != 0x00 : bool)
  Class: Eq_37
  DataType: bool
  OrigDataType: bool
T_38: (in di : word16)
  Class: Eq_11
  DataType: (memptr word16 Eq_11)
  OrigDataType: word16
T_39: (in 0x0001 : word16)
  Class: Eq_39
  DataType: word16
  OrigDataType: word16
T_40: (in di + 0x0001 : word16)
  Class: Eq_11
  DataType: (memptr word16 Eq_11)
  OrigDataType: word16
T_41: (in 0x0000 : word16)
  Class: Eq_11
  DataType: (memptr word16 Eq_11)
  OrigDataType: word16
T_42: (in di != 0x0000 : bool)
  Class: Eq_42
  DataType: bool
  OrigDataType: bool
T_43: (in dx_ax_26 : word32)
  Class: Eq_43
  DataType: word32
  OrigDataType: word32
T_44: (in dx : word16)
  Class: Eq_44
  DataType: uint16
  OrigDataType: uint16
T_45: (in SEQ(dx, di) : word32)
  Class: Eq_43
  DataType: word32
  OrigDataType: word32
T_46: (in ax_34 : word16)
  Class: Eq_46
  DataType: uint16
  OrigDataType: uint16
T_47: (in 0x0140 : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_48: (in dx_ax_26 % 0x0140 : uint16)
  Class: Eq_48
  DataType: uint16
  OrigDataType: uint16
T_49: (in SEQ(dx_ax_26 % 0x0140, di) : word32)
  Class: Eq_49
  DataType: uint32
  OrigDataType: uint32
T_50: (in 0x0140 : word16)
  Class: Eq_50
  DataType: uint16
  OrigDataType: uint16
T_51: (in SEQ(dx_ax_26 % 0x0140, di) /u 0x0140 : uint16)
  Class: Eq_51
  DataType: uint16
  OrigDataType: uint16
T_52: (in 0x0001 : word16)
  Class: Eq_52
  DataType: word16
  OrigDataType: word16
T_53: (in SEQ(dx_ax_26 % 0x0140, di) /u 0x0140 + 0x0001 : word16)
  Class: Eq_46
  DataType: uint16
  OrigDataType: word16
T_54: (in ax_39 : word16)
  Class: Eq_54
  DataType: word16
  OrigDataType: word16
T_55: (in cx : word16)
  Class: Eq_46
  DataType: uint16
  OrigDataType: uint16
T_56: (in 0x20 : byte)
  Class: Eq_56
  DataType: byte
  OrigDataType: byte
T_57: (in DPB(cx, 0x20, 8, 8) : word16)
  Class: Eq_54
  DataType: word16
  OrigDataType: word16
T_58: (in (word32) ax_39 : word32)
  Class: Eq_58
  DataType: word32
  OrigDataType: word32
T_59: (in (word32) ax_39 % ax_34 : uint16)
  Class: Eq_44
  DataType: uint16
  OrigDataType: uint16
T_60: (in ax_43 : word16)
  Class: Eq_60
  DataType: Eq_60
  OrigDataType: int16
T_61: (in SEQ(dx, ax_39) : word32)
  Class: Eq_61
  DataType: uint32
  OrigDataType: uint32
T_62: (in SEQ(dx, ax_39) /u ax_34 : uint16)
  Class: Eq_60
  DataType: Eq_60
  OrigDataType: uint16
T_63: (in ax_45 : word16)
  Class: Eq_63
  DataType: word16
  OrigDataType: word16
T_64: (in si : word16)
  Class: Eq_64
  DataType: word16
  OrigDataType: word16
T_65: (in ax_43 + si : word16)
  Class: Eq_63
  DataType: word16
  OrigDataType: word16
T_66: (in ds : selector)
  Class: Eq_66
  DataType: (ptr Eq_66)
  OrigDataType: (ptr (segment))
T_67: (in dx_ax_26 % 0x0140 : uint16)
  Class: Eq_67
  DataType: uint16
  OrigDataType: uint16
T_68: (in 0x00A0 : word16)
  Class: Eq_68
  DataType: word16
  OrigDataType: word16
T_69: (in dx_ax_26 % 0x0140 - 0x00A0 : word16)
  Class: Eq_69
  DataType: int16
  OrigDataType: int16
T_70: (in (dx_ax_26 % 0x0140 - 0x00A0) *s ax_43 : int16)
  Class: Eq_70
  DataType: Eq_70
  OrigDataType: (union (int16 u0) (uint16 u1))
T_71: (in 0x000C : word16)
  Class: Eq_71
  DataType: uint16
  OrigDataType: uint16
T_72: (in (dx_ax_26 % 0x0140 - 0x00A0) *s ax_43 >>u 0x000C : word16)
  Class: Eq_72
  DataType: Eq_72
  OrigDataType: (union (uint16 u0) ((memptr T_66 (struct (0 T_78 t0000))) u1))
T_73: (in (byte) ax_45 : byte)
  Class: Eq_73
  DataType: byte
  OrigDataType: byte
T_74: (in 0xF0 : byte)
  Class: Eq_74
  DataType: byte
  OrigDataType: byte
T_75: (in (byte) ax_45 & 0xF0 : byte)
  Class: Eq_75
  DataType: byte
  OrigDataType: byte
T_76: (in (uint16) ((byte) ax_45 & 0xF0) : uint16)
  Class: Eq_76
  DataType: uint16
  OrigDataType: uint16
T_77: (in ((dx_ax_26 % 0x0140 - 0x00A0) *s ax_43 >>u 0x000C) + (uint16) ((byte) ax_45 & 0xF0) : word16)
  Class: Eq_77
  DataType: word16
  OrigDataType: word16
T_78: (in Mem0[ds:((dx_ax_26 % 0x0140 - 0x00A0) *s ax_43 >>u 0x000C) + (uint16) ((byte) ax_45 & 0xF0):byte] : byte)
  Class: Eq_78
  DataType: byte
  OrigDataType: byte
T_79: (in DPB(ax_45, Mem0[ds:((dx_ax_26 % 0x0140 - 0x00A0) *s ax_43 >>u 0x000C) + (uint16) ((byte) ax_45 & 0xF0):byte], 0, 8) : word16)
  Class: Eq_79
  DataType: word16
  OrigDataType: word16
T_80: (in bp : word16)
  Class: Eq_80
  DataType: word16
  OrigDataType: word16
T_81: (in DPB(ax_45, Mem0[ds:((dx_ax_26 % 0x0140 - 0x00A0) *s ax_43 >>u 0x000C) + (uint16) ((byte) ax_45 & 0xF0):byte], 0, 8) ^ bp : word16)
  Class: Eq_20
  DataType: word16
  OrigDataType: word16
T_82: (in (byte) ax_54 : byte)
  Class: Eq_13
  DataType: byte
  OrigDataType: byte
T_83: (in 0x0001 : word16)
  Class: Eq_83
  DataType: word16
  OrigDataType: word16
T_84: (in si + 0x0001 : word16)
  Class: Eq_64
  DataType: word16
  OrigDataType: word16
T_85: (in 0x0000 : word16)
  Class: Eq_64
  DataType: word16
  OrigDataType: word16
T_86: (in si != 0x0000 : bool)
  Class: Eq_86
  DataType: bool
  OrigDataType: bool
*/
typedef struct Globals {
} Eq_1;

typedef void (Eq_2)(byte);

typedef struct  {
	byte b0000;	// 0
} Eq_11;

typedef union  {
	int16 u0;
	uint16 u1;
} Eq_60;

typedef struct  {
} Eq_66;

typedef union  {
	int16 u0;
	uint16 u1;
} Eq_70;

typedef union  {
	uint16 u0;
	struct <anonymous> Eq_66::* u1;
} Eq_72;

