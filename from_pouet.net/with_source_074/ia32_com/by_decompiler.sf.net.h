// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_074/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_15: (fn void (byte))
	T_15 (in __syscall : ptr32)
Eq_20: (union "Eq_20" (int16 u0) (uint16 u1))
	T_20 (in 0x0000 : word16)
	T_21 (in bx : Eq_20)
	T_45 (in ax_75 : Eq_20)
	T_51 (in __rcr((word16) dx_ax_67, 0x08, cond(dx_ax_67)) + bp_100 : word16)
	T_52 (in 0x0000 : word16)
Eq_46: (fn word16 (word16, byte, byte))
	T_46 (in __rcr : ptr32)
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
T_5: (in 0x12 : byte)
  Class: Eq_4
  DataType: byte
  OrigDataType: byte
T_6: (in bios_video_set_mode(0x12) : void)
  Class: Eq_6
  DataType: void
  OrigDataType: void
T_7: (in ax_27 : uint16)
  Class: Eq_7
  DataType: uint16
  OrigDataType: uint16
T_8: (in ax : word16)
  Class: Eq_8
  DataType: word16
  OrigDataType: word16
T_9: (in 0x12 : byte)
  Class: Eq_9
  DataType: byte
  OrigDataType: byte
T_10: (in DPB(ax, 0x12, 0, 8) : word16)
  Class: Eq_7
  DataType: uint16
  OrigDataType: word16
T_11: (in bp_100 : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_12: (in 0x0000 : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_13: (in cx_10 : word16)
  Class: Eq_13
  DataType: word16
  OrigDataType: word16
T_14: (in 0x01E0 : word16)
  Class: Eq_13
  DataType: word16
  OrigDataType: word16
T_15: (in __syscall : ptr32)
  Class: Eq_15
  DataType: (ptr Eq_15)
  OrigDataType: (ptr (fn T_17 (T_16)))
T_16: (in 0x10 : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_17: (in __syscall(0x10) : void)
  Class: Eq_17
  DataType: void
  OrigDataType: void
T_18: (in wLoc02_117 : word16)
  Class: Eq_13
  DataType: word16
  OrigDataType: word16
T_19: (in wLoc02_34 : word16)
  Class: Eq_13
  DataType: word16
  OrigDataType: word16
T_20: (in 0x0000 : word16)
  Class: Eq_20
  DataType: int16
  OrigDataType: word16
T_21: (in bx : Eq_20)
  Class: Eq_20
  DataType: Eq_20
  OrigDataType: uint16
T_22: (in cx_114 : word16)
  Class: Eq_22
  DataType: word16
  OrigDataType: word16
T_23: (in 0x0C : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_24: (in DPB(cx_114, 0x0C, 8, 8) : word16)
  Class: Eq_7
  DataType: uint16
  OrigDataType: word16
T_25: (in 0x0000 : word16)
  Class: Eq_25
  DataType: word16
  OrigDataType: word16
T_26: (in bp_100 + 0x0000 : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_27: (in cx_102 : word16)
  Class: Eq_27
  DataType: word16
  OrigDataType: word16
T_28: (in 0x0001 : word16)
  Class: Eq_28
  DataType: word16
  OrigDataType: word16
T_29: (in cx_102 - 0x0001 : word16)
  Class: Eq_27
  DataType: word16
  OrigDataType: word16
T_30: (in 0x0000 : word16)
  Class: Eq_27
  DataType: word16
  OrigDataType: word16
T_31: (in cx_102 != 0x0000 : bool)
  Class: Eq_31
  DataType: bool
  OrigDataType: bool
T_32: (in cl_113 : byte)
  Class: Eq_32
  DataType: byte
  OrigDataType: byte
T_33: (in 0x01 : byte)
  Class: Eq_33
  DataType: byte
  OrigDataType: byte
T_34: (in cl_113 + 0x01 : byte)
  Class: Eq_32
  DataType: byte
  OrigDataType: byte
T_35: (in dx_110 : word16)
  Class: Eq_35
  DataType: word16
  OrigDataType: word16
T_36: (in di : word16)
  Class: Eq_36
  DataType: word16
  OrigDataType: word16
T_37: (in dx_110 + di : word16)
  Class: Eq_35
  DataType: word16
  OrigDataType: word16
T_38: (in DPB(cx_114, cl_113, 0, 8) : word16)
  Class: Eq_22
  DataType: word16
  OrigDataType: word16
T_39: (in 0x00 : byte)
  Class: Eq_32
  DataType: byte
  OrigDataType: byte
T_40: (in cl_113 != 0x00 : bool)
  Class: Eq_40
  DataType: bool
  OrigDataType: bool
T_41: (in dx_ax_67 : int32)
  Class: Eq_41
  DataType: int32
  OrigDataType: word32
T_42: (in dx_110 + bx : word16)
  Class: Eq_42
  DataType: int16
  OrigDataType: int16
T_43: (in bx - dx_110 : word16)
  Class: Eq_43
  DataType: int16
  OrigDataType: int16
T_44: (in (dx_110 + bx) *s (bx - dx_110) : int32)
  Class: Eq_41
  DataType: int32
  OrigDataType: int32
T_45: (in ax_75 : Eq_20)
  Class: Eq_20
  DataType: Eq_20
  OrigDataType: int16
T_46: (in __rcr : ptr32)
  Class: Eq_46
  DataType: (ptr Eq_46)
  OrigDataType: (ptr (fn T_50 (T_47, T_48, T_49)))
T_47: (in (word16) dx_ax_67 : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_48: (in 0x08 : byte)
  Class: Eq_48
  DataType: byte
  OrigDataType: byte
T_49: (in cond(dx_ax_67) : byte)
  Class: Eq_49
  DataType: byte
  OrigDataType: byte
T_50: (in __rcr((word16) dx_ax_67, 0x08, cond(dx_ax_67)) : word16)
  Class: Eq_50
  DataType: word16
  OrigDataType: word16
T_51: (in __rcr((word16) dx_ax_67, 0x08, cond(dx_ax_67)) + bp_100 : word16)
  Class: Eq_20
  DataType: Eq_20
  OrigDataType: word16
T_52: (in 0x0000 : word16)
  Class: Eq_20
  DataType: int16
  OrigDataType: int16
T_53: (in ax_75 > 0x0000 : bool)
  Class: Eq_53
  DataType: bool
  OrigDataType: bool
T_54: (in 0x0000 : word16)
  Class: Eq_22
  DataType: word16
  OrigDataType: word16
T_55: (in 0x00 : byte)
  Class: Eq_32
  DataType: byte
  OrigDataType: byte
T_56: (in bx *u ax_27 : uint32)
  Class: Eq_56
  DataType: uint32
  OrigDataType: uint32
T_57: (in SLICE(bx *u ax_27, word16, 16) : word16)
  Class: Eq_35
  DataType: word16
  OrigDataType: word16
T_58: (in 0x0001 : word16)
  Class: Eq_58
  DataType: word16
  OrigDataType: word16
T_59: (in di + 0x0001 : word16)
  Class: Eq_36
  DataType: word16
  OrigDataType: word16
T_60: (in 0x0001 : word16)
  Class: Eq_60
  DataType: word16
  OrigDataType: word16
T_61: (in wLoc02_117 - 0x0001 : word16)
  Class: Eq_13
  DataType: word16
  OrigDataType: word16
T_62: (in 0x0000 : word16)
  Class: Eq_13
  DataType: word16
  OrigDataType: word16
T_63: (in cx_10 != 0x0000 : bool)
  Class: Eq_63
  DataType: bool
  OrigDataType: bool
T_64: (in 0x027F : word16)
  Class: Eq_27
  DataType: word16
  OrigDataType: word16
T_65: (in 0x027F : word16)
  Class: Eq_65
  DataType: word16
  OrigDataType: word16
T_66: (in bp_100 - 0x027F : word16)
  Class: Eq_66
  DataType: word16
  OrigDataType: word16
T_67: (in 0x0001 : word16)
  Class: Eq_67
  DataType: word16
  OrigDataType: word16
T_68: (in bp_100 - 0x027F + 0x0001 : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
*/
typedef struct Globals {
} Eq_1;

typedef void (Eq_2)(byte);

typedef void (Eq_15)(byte);

typedef union Eq_20 {
	int16 u0;
	uint16 u1;
} Eq_20;

typedef word16 (Eq_46)(word16, byte, byte);

