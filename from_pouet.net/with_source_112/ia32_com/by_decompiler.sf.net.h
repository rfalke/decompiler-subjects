// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_112/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_13: (segment "Eq_13")
	T_13 (in ds_9 : (ptr Eq_13))
	T_19 (in SLICE(ds->*bx, selector, 16) : selector)
Eq_14: (segment "Eq_14")
	T_14 (in ds : (ptr Eq_14))
Eq_20: (fn void (word16, byte))
	T_20 (in __outb : ptr32)
Eq_56: (segment "Eq_56")
	T_56 (in ss : selector)
Eq_57: (union "Eq_57" (ptr16 u0) ((memptr (ptr Eq_56) Eq_88) u1))
	T_57 (in fp : ptr16)
Eq_88: (struct "Eq_88" (FFFFFFF2 word16 wFFFFFFF2))
	T_88
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
T_7: (in al_12 : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_8: (in 0x13 : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_9: (in ax_13 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
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
  DataType: word16
  OrigDataType: word16
T_13: (in ds_9 : (ptr Eq_13))
  Class: Eq_13
  DataType: (ptr Eq_13)
  OrigDataType: (ptr (segment))
T_14: (in ds : (ptr Eq_14))
  Class: Eq_14
  DataType: (ptr Eq_14)
  OrigDataType: (ptr (segment))
T_15: (in bx : (memptr (ptr Eq_14) segptr32))
  Class: Eq_15
  DataType: (memptr (ptr Eq_14) segptr32)
  OrigDataType: (memptr T_14 (struct (0 T_18 t0000)))
T_16: (in 0x0000 : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_17: (in bx + 0x0000 : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_18: (in Mem0[ds:bx + 0x0000:segptr32] : segptr32)
  Class: Eq_18
  DataType: segptr32
  OrigDataType: segptr32
T_19: (in SLICE(ds->*bx, selector, 16) : selector)
  Class: Eq_13
  DataType: (ptr Eq_13)
  OrigDataType: (ptr (segment))
T_20: (in __outb : ptr32)
  Class: Eq_20
  DataType: (ptr Eq_20)
  OrigDataType: (ptr (fn T_22 (T_21, T_7)))
T_21: (in 0x03C9 : word16)
  Class: Eq_21
  DataType: word16
  OrigDataType: word16
T_22: (in __outb(0x03C9, al_12) : void)
  Class: Eq_22
  DataType: void
  OrigDataType: void
T_23: (in 0x0001 : word16)
  Class: Eq_23
  DataType: word16
  OrigDataType: word16
T_24: (in ax_13 + 0x0001 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_25: (in (byte) ax_13 : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_26: (in 0x0000 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_27: (in ax_13 != 0x0000 : bool)
  Class: Eq_27
  DataType: bool
  OrigDataType: bool
T_28: (in si_100 : word16)
  Class: Eq_28
  DataType: word16
  OrigDataType: word16
T_29: (in 0x0141 : word16)
  Class: Eq_28
  DataType: word16
  OrigDataType: word16
T_30: (in di_90 : (memptr (ptr Eq_13) byte))
  Class: Eq_30
  DataType: (memptr (ptr Eq_13) byte)
  OrigDataType: (memptr T_13 (struct 0001 (0 T_33 t0000)))
T_31: (in 0x0000 : word16)
  Class: Eq_31
  DataType: word16
  OrigDataType: word16
T_32: (in di_90 + 0x0000 : word16)
  Class: Eq_32
  DataType: word16
  OrigDataType: word16
T_33: (in Mem81[ds_9:di_90 + 0x0000:byte] : byte)
  Class: Eq_33
  DataType: byte
  OrigDataType: byte
T_34: (in 0x01 : byte)
  Class: Eq_34
  DataType: byte
  OrigDataType: byte
T_35: (in ds_9->*di_90 + 0x01 : byte)
  Class: Eq_33
  DataType: byte
  OrigDataType: byte
T_36: (in 0x0000 : word16)
  Class: Eq_36
  DataType: word16
  OrigDataType: word16
T_37: (in di_90 + 0x0000 : word16)
  Class: Eq_37
  DataType: word16
  OrigDataType: word16
T_38: (in Mem92[ds_9:di_90 + 0x0000:byte] : byte)
  Class: Eq_33
  DataType: byte
  OrigDataType: byte
T_39: (in 0x0001 : word16)
  Class: Eq_39
  DataType: word16
  OrigDataType: word16
T_40: (in di_90 + 0x0001 : word16)
  Class: Eq_30
  DataType: (memptr (ptr Eq_13) byte)
  OrigDataType: word16
T_41: (in cx_88 : word16)
  Class: Eq_41
  DataType: word16
  OrigDataType: word16
T_42: (in 0x0001 : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_43: (in cx_88 - 0x0001 : word16)
  Class: Eq_41
  DataType: word16
  OrigDataType: word16
T_44: (in 0x0000 : word16)
  Class: Eq_41
  DataType: word16
  OrigDataType: word16
T_45: (in cx_88 != 0x0000 : bool)
  Class: Eq_45
  DataType: bool
  OrigDataType: bool
T_46: (in si_145 : word16)
  Class: Eq_28
  DataType: word16
  OrigDataType: word16
T_47: (in di_114 : (memptr (ptr Eq_13) byte))
  Class: Eq_30
  DataType: (memptr (ptr Eq_13) byte)
  OrigDataType: word16
T_48: (in 0x0140 : word16)
  Class: Eq_48
  DataType: word16
  OrigDataType: word16
T_49: (in di_114 + 0x0140 : word16)
  Class: Eq_30
  DataType: (memptr (ptr Eq_13) byte)
  OrigDataType: word16
T_50: (in cx : word16)
  Class: Eq_50
  DataType: word16
  OrigDataType: word16
T_51: (in 0x0001 : word16)
  Class: Eq_51
  DataType: word16
  OrigDataType: word16
T_52: (in cx - 0x0001 : word16)
  Class: Eq_50
  DataType: word16
  OrigDataType: word16
T_53: (in 0x0000 : word16)
  Class: Eq_50
  DataType: word16
  OrigDataType: word16
T_54: (in cx != 0x0000 : bool)
  Class: Eq_54
  DataType: bool
  OrigDataType: bool
T_55: (in 0x0140 : word16)
  Class: Eq_55
  DataType: word16
  OrigDataType: word16
T_56: (in ss : selector)
  Class: Eq_56
  DataType: (ptr Eq_56)
  OrigDataType: (ptr (segment))
T_57: (in fp : ptr16)
  Class: Eq_57
  DataType: Eq_57
  OrigDataType: (union (ptr16 u0) ((memptr T_56 (struct (FFFFFFF2 T_60 tFFFFFFF2))) u1))
T_58: (in 0x000E : word16)
  Class: Eq_58
  DataType: word16
  OrigDataType: word16
T_59: (in fp - 0x000E : word16)
  Class: Eq_59
  DataType: word16
  OrigDataType: word16
T_60: (in Mem81[ss:fp - 0x000E:word16] : word16)
  Class: Eq_55
  DataType: word16
  OrigDataType: word16
T_61: (in 0x20 : byte)
  Class: Eq_61
  DataType: byte
  OrigDataType: byte
T_62: (in DPB(cx, 0x20, 0, 8) : word16)
  Class: Eq_41
  DataType: word16
  OrigDataType: word16
T_63: (in di : (memptr (ptr Eq_13) byte))
  Class: Eq_30
  DataType: (memptr (ptr Eq_13) byte)
  OrigDataType: word16
T_64: (in di + si_145 : word16)
  Class: Eq_30
  DataType: (memptr (ptr Eq_13) byte)
  OrigDataType: word16
T_65: (in dx_ax_124 : word32)
  Class: Eq_65
  DataType: word32
  OrigDataType: word32
T_66: (in 0x0000 : word16)
  Class: Eq_66
  DataType: word16
  OrigDataType: word16
T_67: (in SEQ(0x0000, di) : word32)
  Class: Eq_65
  DataType: word32
  OrigDataType: word32
T_68: (in 0x0140 : word16)
  Class: Eq_68
  DataType: word16
  OrigDataType: word16
T_69: (in dx_ax_124 % 0x0140 : uint16)
  Class: Eq_69
  DataType: uint16
  OrigDataType: uint16
T_70: (in SEQ(dx_ax_124 % 0x0140, di) : word32)
  Class: Eq_70
  DataType: uint32
  OrigDataType: uint32
T_71: (in 0x0140 : word16)
  Class: Eq_71
  DataType: uint16
  OrigDataType: uint16
T_72: (in SEQ(dx_ax_124 % 0x0140, di) /u 0x0140 : uint16)
  Class: Eq_72
  DataType: uint16
  OrigDataType: uint16
T_73: (in 0x007F : word16)
  Class: Eq_73
  DataType: word16
  OrigDataType: word16
T_74: (in SEQ(dx_ax_124 % 0x0140, di) /u 0x0140 & 0x007F : word16)
  Class: Eq_74
  DataType: word16
  OrigDataType: word16
T_75: (in 0x0000 : word16)
  Class: Eq_74
  DataType: word16
  OrigDataType: word16
T_76: (in (SEQ(dx_ax_124 % 0x0140, di) /u 0x0140 & 0x007F) != 0x0000 : bool)
  Class: Eq_76
  DataType: bool
  OrigDataType: bool
T_77: (in dx_ax_124 % 0x0140 : uint16)
  Class: Eq_77
  DataType: uint16
  OrigDataType: uint16
T_78: (in 0x00FF : word16)
  Class: Eq_78
  DataType: word16
  OrigDataType: word16
T_79: (in dx_ax_124 % 0x0140 & 0x00FF : word16)
  Class: Eq_79
  DataType: word16
  OrigDataType: word16
T_80: (in 0x0000 : word16)
  Class: Eq_79
  DataType: word16
  OrigDataType: word16
T_81: (in (dx_ax_124 % 0x0140 & 0x00FF) != 0x0000 : bool)
  Class: Eq_81
  DataType: bool
  OrigDataType: bool
T_82: (in 0x007E : word16)
  Class: Eq_82
  DataType: word16
  OrigDataType: word16
T_83: (in si_145 ^ 0x007E : word16)
  Class: Eq_28
  DataType: word16
  OrigDataType: word16
T_84: (in 0xFF80 : word16)
  Class: Eq_84
  DataType: word16
  OrigDataType: word16
T_85: (in si_100 ^ 0xFF80 : word16)
  Class: Eq_28
  DataType: word16
  OrigDataType: word16
T_86: (in 0x20 : byte)
  Class: Eq_86
  DataType: byte
  OrigDataType: byte
T_87: (in DPB(cx, 0x20, 0, 8) : word16)
  Class: Eq_50
  DataType: word16
  OrigDataType: word16
T_88:
  Class: Eq_88
  DataType: Eq_88
  OrigDataType: 
*/
typedef struct Globals {
} Eq_1;

typedef void (Eq_2)(byte);

typedef struct Eq_13 {
} Eq_13;

typedef struct Eq_14 {
} Eq_14;

typedef void (Eq_20)(word16, byte);

typedef struct Eq_56 {
} Eq_56;

typedef union Eq_57 {
	ptr16 u0;
	Eq_88 Eq_56::* u1;
} Eq_57;

typedef struct Eq_88 {
	word16 wFFFFFFF2;	// FFFFFFF2
} Eq_88;

