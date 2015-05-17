// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_075/ia32_com/subject.exe
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
	T_40 (in ax_71 : Eq_20)
	T_45 (in (word16) ((dx_108 + bx) *s (bx - dx_108)) + bp_28 : word16)
	T_46 (in 0x0000 : word16)
Eq_63: (fn void (byte))
	T_63 (in __syscall : ptr32)
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
T_11: (in bp_28 : word16)
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
T_18: (in wLoc02_114 : word16)
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
T_22: (in cx_113 : word16)
  Class: Eq_22
  DataType: word16
  OrigDataType: word16
T_23: (in 0x0C : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_24: (in DPB(cx_113, 0x0C, 8, 8) : word16)
  Class: Eq_7
  DataType: uint16
  OrigDataType: word16
T_25: (in 0x0000 : word16)
  Class: Eq_25
  DataType: word16
  OrigDataType: word16
T_26: (in bp_28 + 0x0000 : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_27: (in cx_35 : word16)
  Class: Eq_27
  DataType: word16
  OrigDataType: word16
T_28: (in 0x0001 : word16)
  Class: Eq_28
  DataType: word16
  OrigDataType: word16
T_29: (in cx_35 - 0x0001 : word16)
  Class: Eq_27
  DataType: word16
  OrigDataType: word16
T_30: (in 0x0000 : word16)
  Class: Eq_27
  DataType: word16
  OrigDataType: word16
T_31: (in cx_35 != 0x0000 : bool)
  Class: Eq_31
  DataType: bool
  OrigDataType: bool
T_32: (in cl_112 : byte)
  Class: Eq_32
  DataType: byte
  OrigDataType: byte
T_33: (in ~cl_112 : byte)
  Class: Eq_32
  DataType: byte
  OrigDataType: byte
T_34: (in dx_108 : word16)
  Class: Eq_34
  DataType: word16
  OrigDataType: word16
T_35: (in di : word16)
  Class: Eq_35
  DataType: word16
  OrigDataType: word16
T_36: (in dx_108 + di : word16)
  Class: Eq_34
  DataType: word16
  OrigDataType: word16
T_37: (in DPB(cx_113, cl_112, 0, 8) : word16)
  Class: Eq_22
  DataType: word16
  OrigDataType: word16
T_38: (in 0x0000 : word16)
  Class: Eq_34
  DataType: word16
  OrigDataType: word16
T_39: (in dx_108 != 0x0000 : bool)
  Class: Eq_39
  DataType: bool
  OrigDataType: bool
T_40: (in ax_71 : Eq_20)
  Class: Eq_20
  DataType: Eq_20
  OrigDataType: int16
T_41: (in dx_108 + bx : word16)
  Class: Eq_41
  DataType: int16
  OrigDataType: int16
T_42: (in bx - dx_108 : word16)
  Class: Eq_42
  DataType: int16
  OrigDataType: int16
T_43: (in (dx_108 + bx) *s (bx - dx_108) : int32)
  Class: Eq_43
  DataType: int32
  OrigDataType: int32
T_44: (in (word16) ((dx_108 + bx) *s (bx - dx_108)) : word16)
  Class: Eq_44
  DataType: word16
  OrigDataType: word16
T_45: (in (word16) ((dx_108 + bx) *s (bx - dx_108)) + bp_28 : word16)
  Class: Eq_20
  DataType: Eq_20
  OrigDataType: word16
T_46: (in 0x0000 : word16)
  Class: Eq_20
  DataType: int16
  OrigDataType: int16
T_47: (in ax_71 > 0x0000 : bool)
  Class: Eq_47
  DataType: bool
  OrigDataType: bool
T_48: (in 0x0000 : word16)
  Class: Eq_22
  DataType: word16
  OrigDataType: word16
T_49: (in 0x00 : byte)
  Class: Eq_32
  DataType: byte
  OrigDataType: byte
T_50: (in bx *u ax_27 : uint32)
  Class: Eq_50
  DataType: uint32
  OrigDataType: uint32
T_51: (in SLICE(bx *u ax_27, word16, 16) : word16)
  Class: Eq_34
  DataType: word16
  OrigDataType: word16
T_52: (in 0x0001 : word16)
  Class: Eq_52
  DataType: word16
  OrigDataType: word16
T_53: (in di + 0x0001 : word16)
  Class: Eq_35
  DataType: word16
  OrigDataType: word16
T_54: (in 0x0001 : word16)
  Class: Eq_54
  DataType: word16
  OrigDataType: word16
T_55: (in wLoc02_114 - 0x0001 : word16)
  Class: Eq_13
  DataType: word16
  OrigDataType: word16
T_56: (in 0x0000 : word16)
  Class: Eq_13
  DataType: word16
  OrigDataType: word16
T_57: (in cx_10 != 0x0000 : bool)
  Class: Eq_57
  DataType: bool
  OrigDataType: bool
T_58: (in 0x027F : word16)
  Class: Eq_27
  DataType: word16
  OrigDataType: word16
T_59: (in 0x027F : word16)
  Class: Eq_59
  DataType: word16
  OrigDataType: word16
T_60: (in bp_28 - 0x027F : word16)
  Class: Eq_60
  DataType: word16
  OrigDataType: word16
T_61: (in 0x0001 : word16)
  Class: Eq_61
  DataType: word16
  OrigDataType: word16
T_62: (in bp_28 - 0x027F + 0x0001 : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_63: (in __syscall : ptr32)
  Class: Eq_63
  DataType: (ptr Eq_63)
  OrigDataType: (ptr (fn T_65 (T_64)))
T_64: (in 0x16 : byte)
  Class: Eq_64
  DataType: byte
  OrigDataType: byte
T_65: (in __syscall(0x16) : void)
  Class: Eq_65
  DataType: void
  OrigDataType: void
*/
typedef struct Globals {
} Eq_1;

typedef void (Eq_2)(byte);

typedef void (Eq_15)(byte);

typedef union Eq_20 {
	int16 u0;
	uint16 u1;
} Eq_20;

typedef void (Eq_63)(byte);

