// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_110/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
	T_94 (in bios_video_set_mode : ptr32)
Eq_7: (union "Eq_7" (byte u0) (ptr32 u1) (segptr32 u2))
	T_7 (in ds_cx_8 : ptr32)
	T_12 (in Mem0[ds:bx + 0x0000:segptr32] : segptr32)
	T_39 (in al_35 : byte)
	T_43 (in Mem0[ds_9:si + 0x0000:byte] : byte)
	T_50 (in Mem54[ds_9:bx + si:byte] : byte)
	T_78 (in Mem0[ds_9:si + 0x0000:byte] : byte)
	T_80 (in Mem0[ds_9:si + 0x0000:byte] - 0x01 : byte)
	T_83 (in Mem87[ds_9:si + 0x0000:byte] : byte)
Eq_8: (segment "Eq_8")
	T_8 (in ds : (ptr Eq_8))
	T_13 (in ds_9 : (ptr Eq_8))
	T_14 (in SLICE(ds_cx_8, selector, 16) : selector)
Eq_9: (union "Eq_9" (int16 u0) ((memptr (ptr Eq_8) Eq_7) u1))
	T_9 (in bx : Eq_9)
	T_65 (in 0x0000 - (cl_37 <u 0x00) : word16)
	T_75 (in 0x0140 : word16)
	T_84 (in -bx : word16)
Eq_19: (fn void (word16, uint8))
	T_19 (in __outb : ptr32)
Eq_22: (fn void (word16, uint16))
	T_22 (in __outb : ptr32)
Eq_27: (fn void (word16, uint8))
	T_27 (in __outb : ptr32)
Eq_45: (union "Eq_45" (uint16 u0) (bcu8 u1))
	T_45 (in cl_37 : Eq_45)
	T_46 (in cl_21 >>u cl_21 : word16)
	T_47 (in 0x00 : byte)
	T_63 (in 0x00 : byte)
Eq_86: (fn byte (byte))
	T_86 (in __inb : ptr32)
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
T_7: (in ds_cx_8 : ptr32)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: ptr32
T_8: (in ds : (ptr Eq_8))
  Class: Eq_8
  DataType: (ptr Eq_8)
  OrigDataType: (ptr (segment))
T_9: (in bx : Eq_9)
  Class: Eq_9
  DataType: Eq_9
  OrigDataType: (union (int16 u0) ((memptr T_8 (struct (0 T_7 t0000))) u1))
T_10: (in 0x0000 : word16)
  Class: Eq_10
  DataType: word16
  OrigDataType: word16
T_11: (in bx + 0x0000 : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_12: (in Mem0[ds:bx + 0x0000:segptr32] : segptr32)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: segptr32
T_13: (in ds_9 : (ptr Eq_8))
  Class: Eq_8
  DataType: (ptr Eq_8)
  OrigDataType: (ptr (segment))
T_14: (in SLICE(ds_cx_8, selector, 16) : selector)
  Class: Eq_8
  DataType: (ptr Eq_8)
  OrigDataType: (ptr (segment))
T_15: (in cx_10 : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_16: (in (word16) ds_cx_8 : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_17: (in al_15 : uint8)
  Class: Eq_17
  DataType: uint8
  OrigDataType: uint8
T_18: (in (byte) cx_10 : byte)
  Class: Eq_17
  DataType: uint8
  OrigDataType: byte
T_19: (in __outb : ptr32)
  Class: Eq_19
  DataType: (ptr Eq_19)
  OrigDataType: (ptr (fn T_21 (T_20, T_17)))
T_20: (in 0x03C9 : word16)
  Class: Eq_20
  DataType: word16
  OrigDataType: word16
T_21: (in __outb(0x03C9, al_15) : void)
  Class: Eq_21
  DataType: void
  OrigDataType: void
T_22: (in __outb : ptr32)
  Class: Eq_22
  DataType: (ptr Eq_22)
  OrigDataType: (ptr (fn T_26 (T_23, T_25)))
T_23: (in 0x03C9 : word16)
  Class: Eq_23
  DataType: word16
  OrigDataType: word16
T_24: (in 0x01 : byte)
  Class: Eq_24
  DataType: uint8
  OrigDataType: uint8
T_25: (in al_15 >>u 0x01 : word16)
  Class: Eq_25
  DataType: uint16
  OrigDataType: uint16
T_26: (in __outb(0x03C9, al_15 >>u 0x01) : void)
  Class: Eq_26
  DataType: void
  OrigDataType: void
T_27: (in __outb : ptr32)
  Class: Eq_27
  DataType: (ptr Eq_27)
  OrigDataType: (ptr (fn T_31 (T_28, T_30)))
T_28: (in 0x03C9 : word16)
  Class: Eq_28
  DataType: word16
  OrigDataType: word16
T_29: (in 0x02 : byte)
  Class: Eq_29
  DataType: uint8
  OrigDataType: uint8
T_30: (in al_15 >>u 0x02 : byte)
  Class: Eq_30
  DataType: uint8
  OrigDataType: uint8
T_31: (in __outb(0x03C9, al_15 >>u 0x02) : void)
  Class: Eq_31
  DataType: void
  OrigDataType: void
T_32: (in 0x0001 : word16)
  Class: Eq_32
  DataType: word16
  OrigDataType: word16
T_33: (in cx_10 - 0x0001 : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_34: (in ax_14 : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_35: (in cl_21 : uint8)
  Class: Eq_35
  DataType: uint8
  OrigDataType: uint8
T_36: (in (byte) cx_10 : byte)
  Class: Eq_35
  DataType: uint8
  OrigDataType: byte
T_37: (in 0x0000 : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_38: (in cx_10 != 0x0000 : bool)
  Class: Eq_38
  DataType: bool
  OrigDataType: bool
T_39: (in al_35 : byte)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: byte
T_40: (in si : (memptr (ptr Eq_8) Eq_7))
  Class: Eq_40
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_13 (struct (0 T_7 t0000)))
T_41: (in 0x0000 : word16)
  Class: Eq_41
  DataType: word16
  OrigDataType: word16
T_42: (in si + 0x0000 : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_43: (in Mem0[ds_9:si + 0x0000:byte] : byte)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: byte
T_44: (in DPB(ax_14, al_35, 0, 8) : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_45: (in cl_37 : Eq_45)
  Class: Eq_45
  DataType: Eq_45
  OrigDataType: bcu8
T_46: (in cl_21 >>u cl_21 : word16)
  Class: Eq_45
  DataType: Eq_45
  OrigDataType: uint16
T_47: (in 0x00 : byte)
  Class: Eq_45
  DataType: bcu8
  OrigDataType: bcu8
T_48: (in cl_37 >=u 0x00 : bool)
  Class: Eq_48
  DataType: bool
  OrigDataType: bool
T_49: (in bx + si : word16)
  Class: Eq_49
  DataType: word16
  OrigDataType: word16
T_50: (in Mem54[ds_9:bx + si:byte] : byte)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: byte
T_51: (in si_55 : word16)
  Class: Eq_51
  DataType: word16
  OrigDataType: word16
T_52: (in si + cx_10 : word16)
  Class: Eq_51
  DataType: word16
  OrigDataType: word16
T_53: (in 0x0001 : word16)
  Class: Eq_53
  DataType: word16
  OrigDataType: word16
T_54: (in cx_10 - 0x0001 : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_55: (in SEQ(si_55, si_55) : ui32)
  Class: Eq_55
  DataType: ui32
  OrigDataType: ui32
T_56: (in SEQ(ax_14, cx_10) : ui32)
  Class: Eq_56
  DataType: ui32
  OrigDataType: ui32
T_57: (in SEQ(si_55, si_55) + SEQ(ax_14, cx_10) : ui32)
  Class: Eq_57
  DataType: ui32
  OrigDataType: ui32
T_58: (in (word16) (SEQ(si_55, si_55) + SEQ(ax_14, cx_10)) : word16)
  Class: Eq_40
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: word16
T_59: (in (byte) cx_10 : byte)
  Class: Eq_35
  DataType: uint8
  OrigDataType: byte
T_60: (in 0x0000 : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_61: (in cx_10 != 0x0000 : bool)
  Class: Eq_61
  DataType: bool
  OrigDataType: bool
T_62: (in 0x0000 : word16)
  Class: Eq_62
  DataType: word16
  OrigDataType: word16
T_63: (in 0x00 : byte)
  Class: Eq_45
  DataType: bcu8
  OrigDataType: bcu8
T_64: (in cl_37 <u 0x00 : bool)
  Class: Eq_64
  DataType: bool
  OrigDataType: bool
T_65: (in 0x0000 - (cl_37 <u 0x00) : word16)
  Class: Eq_9
  DataType: Eq_9
  OrigDataType: word16
T_66: (in cl_73 : byte)
  Class: Eq_66
  DataType: ui8
  OrigDataType: ui8
T_67: (in cl_37 + al_35 : byte)
  Class: Eq_66
  DataType: ui8
  OrigDataType: byte
T_68: (in 0x02 : byte)
  Class: Eq_68
  DataType: ui8
  OrigDataType: ui8
T_69: (in cl_73 * 0x02 : byte)
  Class: Eq_69
  DataType: int8
  OrigDataType: int8
T_70: (in 0x00 : byte)
  Class: Eq_69
  DataType: int8
  OrigDataType: int8
T_71: (in cl_73 * 0x02 < 0x00 : bool)
  Class: Eq_71
  DataType: bool
  OrigDataType: bool
T_72: (in cl_73 * 0x02 : byte)
  Class: Eq_72
  DataType: uint8
  OrigDataType: uint8
T_73: (in 0x00 : byte)
  Class: Eq_72
  DataType: uint8
  OrigDataType: bcu8
T_74: (in cl_73 * 0x02 >=u 0x00 : bool)
  Class: Eq_74
  DataType: bool
  OrigDataType: bool
T_75: (in 0x0140 : word16)
  Class: Eq_9
  DataType: int16
  OrigDataType: word16
T_76: (in 0x0000 : word16)
  Class: Eq_76
  DataType: word16
  OrigDataType: word16
T_77: (in si + 0x0000 : word16)
  Class: Eq_77
  DataType: word16
  OrigDataType: word16
T_78: (in Mem0[ds_9:si + 0x0000:byte] : byte)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: byte
T_79: (in 0x01 : byte)
  Class: Eq_79
  DataType: byte
  OrigDataType: byte
T_80: (in Mem0[ds_9:si + 0x0000:byte] - 0x01 : byte)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: byte
T_81: (in 0x0000 : word16)
  Class: Eq_81
  DataType: word16
  OrigDataType: word16
T_82: (in si + 0x0000 : word16)
  Class: Eq_82
  DataType: word16
  OrigDataType: word16
T_83: (in Mem87[ds_9:si + 0x0000:byte] : byte)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: byte
T_84: (in -bx : word16)
  Class: Eq_9
  DataType: Eq_9
  OrigDataType: int16
T_85: (in ax_66 : int16)
  Class: Eq_85
  DataType: int16
  OrigDataType: word16
T_86: (in __inb : ptr32)
  Class: Eq_86
  DataType: (ptr Eq_86)
  OrigDataType: (ptr (fn T_88 (T_87)))
T_87: (in 0x60 : byte)
  Class: Eq_87
  DataType: byte
  OrigDataType: byte
T_88: (in __inb(0x60) : byte)
  Class: Eq_88
  DataType: byte
  OrigDataType: byte
T_89: (in (int16) __inb(0x60) : int16)
  Class: Eq_85
  DataType: int16
  OrigDataType: int16
T_90: (in 0x0001 : word16)
  Class: Eq_90
  DataType: word16
  OrigDataType: word16
T_91: (in ax_66 - 0x0001 : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_92: (in 0x0001 : word16)
  Class: Eq_85
  DataType: int16
  OrigDataType: word16
T_93: (in ax_66 != 0x0001 : bool)
  Class: Eq_93
  DataType: bool
  OrigDataType: bool
T_94: (in bios_video_set_mode : ptr32)
  Class: Eq_2
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (fn T_96 (T_95)))
T_95: (in 0x03 : byte)
  Class: Eq_4
  DataType: byte
  OrigDataType: byte
T_96: (in bios_video_set_mode(0x03) : void)
  Class: Eq_6
  DataType: void
  OrigDataType: void
*/
typedef struct Globals {
} Eq_1;

typedef void (Eq_2)(byte);

typedef union Eq_7 {
	byte u0;
	ptr32 u1;
	segptr32 u2;
} Eq_7;

typedef struct Eq_8 {
} Eq_8;

typedef union Eq_9 {
	int16 u0;
	Eq_7 Eq_8::* u1;
} Eq_9;

typedef void (Eq_19)(word16, uint8);

typedef void (Eq_22)(word16, uint16);

typedef void (Eq_27)(word16, uint8);

typedef union Eq_45 {
	uint16 u0;
	bcu8 u1;
} Eq_45;

typedef byte (Eq_86)(byte);

