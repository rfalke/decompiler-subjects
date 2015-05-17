// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_046/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_7: (union "Eq_7" (ptr32 u0) (segptr32 u1))
	T_7 (in ds_cx_10 : Eq_7)
	T_12 (in Mem0[ds:di + 0x0002:segptr32] : segptr32)
Eq_8: (segment "Eq_8")
	T_8 (in ds : (ptr Eq_8))
Eq_9: (struct "Eq_9" (2 Eq_7 t0002))
	T_9 (in di : (memptr (ptr Eq_8) Eq_9))
Eq_17: (segment "Eq_17" (2 (arr Eq_89) a0002))
	T_17 (in ds_11 : (ptr Eq_17))
	T_18 (in SLICE(ds_cx_10, selector, 16) : selector)
Eq_23: (fn word16 (word16, byte))
	T_23 (in __rol : ptr32)
Eq_30: (struct "Eq_30" 0001 (0 Eq_71 t0000))
	T_30 (in bx : (memptr (ptr Eq_17) Eq_30))
	T_62 (in bx_39 - 0x0001 : word16)
Eq_44: (fn byte (byte))
	T_44 (in __inb : ptr32)
Eq_71: (union "Eq_71" (byte u0) (word16 u1))
	T_71 (in Mem0[ds_11:bx + 0x0000:byte] : byte)
	T_73 (in (ds_11->*bx).t0000 - dh - C : word16)
	T_76 (in Mem65[ds_11:bx + 0x0000:byte] : byte)
	T_79 (in Mem65[ds_11:bx + 0x0000:byte] : byte)
	T_81 (in (ds_11->*bx).t0000 | 0x10 : byte)
	T_84 (in Mem67[ds_11:bx + 0x0000:byte] : byte)
Eq_89: (struct "Eq_89" 0001 (0 Eq_71 t0000))
	T_89
	T_90
	T_91
	T_92
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
T_7: (in ds_cx_10 : Eq_7)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: ptr32
T_8: (in ds : (ptr Eq_8))
  Class: Eq_8
  DataType: (ptr Eq_8)
  OrigDataType: (ptr (segment))
T_9: (in di : (memptr (ptr Eq_8) Eq_9))
  Class: Eq_9
  DataType: (memptr (ptr Eq_8) Eq_9)
  OrigDataType: (memptr T_8 (struct (2 T_12 t0002)))
T_10: (in 0x0002 : word16)
  Class: Eq_10
  DataType: word16
  OrigDataType: word16
T_11: (in di + 0x0002 : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_12: (in Mem0[ds:di + 0x0002:segptr32] : segptr32)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: segptr32
T_13: (in ax_23 : word16)
  Class: Eq_13
  DataType: word16
  OrigDataType: word16
T_14: (in ax : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_15: (in 0x13 : byte)
  Class: Eq_15
  DataType: byte
  OrigDataType: byte
T_16: (in DPB(ax, 0x13, 0, 8) : word16)
  Class: Eq_13
  DataType: word16
  OrigDataType: word16
T_17: (in ds_11 : (ptr Eq_17))
  Class: Eq_17
  DataType: (ptr Eq_17)
  OrigDataType: (ptr (segment (2 (arr T_89) a0002)))
T_18: (in SLICE(ds_cx_10, selector, 16) : selector)
  Class: Eq_17
  DataType: (ptr Eq_17)
  OrigDataType: (ptr (segment))
T_19: (in cx_12 : int16)
  Class: Eq_19
  DataType: int16
  OrigDataType: int16
T_20: (in (word16) ds_cx_10 : word16)
  Class: Eq_19
  DataType: int16
  OrigDataType: word16
T_21: (in cl_13 : byte)
  Class: Eq_21
  DataType: byte
  OrigDataType: byte
T_22: (in (byte) ds_cx_10 : byte)
  Class: Eq_21
  DataType: byte
  OrigDataType: byte
T_23: (in __rol : ptr32)
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: (ptr (fn T_25 (T_24, T_21)))
T_24: (in bp : word16)
  Class: Eq_24
  DataType: word16
  OrigDataType: word16
T_25: (in __rol(bp, cl_13) : word16)
  Class: Eq_24
  DataType: word16
  OrigDataType: word16
T_26: (in dx_ax_46 : int32)
  Class: Eq_26
  DataType: int32
  OrigDataType: word32
T_27: (in si : int16)
  Class: Eq_27
  DataType: int16
  OrigDataType: int16
T_28: (in si *s cx_12 : int32)
  Class: Eq_26
  DataType: int32
  OrigDataType: int32
T_29: (in bx_39 : (memptr (ptr Eq_17) byte))
  Class: Eq_29
  DataType: (memptr (ptr Eq_17) byte)
  OrigDataType: (memptr T_17 (struct (0 T_52 t0000)))
T_30: (in bx : (memptr (ptr Eq_17) Eq_30))
  Class: Eq_30
  DataType: (memptr (ptr Eq_17) Eq_30)
  OrigDataType: (memptr T_17 (struct 0001 (0 T_71 t0000)))
T_31: (in bx + bp : word16)
  Class: Eq_31
  DataType: word16
  OrigDataType: word16
T_32: (in 0x0001 : word16)
  Class: Eq_32
  DataType: word16
  OrigDataType: word16
T_33: (in 0x10 : byte)
  Class: Eq_33
  DataType: byte
  OrigDataType: byte
T_34: (in 0x10 - cl_13 : byte)
  Class: Eq_34
  DataType: byte
  OrigDataType: byte
T_35: (in 0x0001 << 0x10 - cl_13 : word16)
  Class: Eq_35
  DataType: ui16
  OrigDataType: ui16
T_36: (in bp & 0x0001 << 0x10 - cl_13 : word16)
  Class: Eq_36
  DataType: word16
  OrigDataType: word16
T_37: (in 0x0000 : word16)
  Class: Eq_36
  DataType: word16
  OrigDataType: word16
T_38: (in (bp & 0x0001 << 0x10 - cl_13) != 0x0000 : bool)
  Class: Eq_38
  DataType: bool
  OrigDataType: bool
T_39: (in bx + bp + ((bp & 0x0001 << 0x10 - cl_13) != 0x0000) : word16)
  Class: Eq_29
  DataType: (memptr (ptr Eq_17) byte)
  OrigDataType: word16
T_40: (in ax_41 : word16)
  Class: Eq_40
  DataType: word16
  OrigDataType: word16
T_41: (in ax_29 : word16)
  Class: Eq_41
  DataType: word16
  OrigDataType: word16
T_42: (in 0x0001 : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_43: (in ax_29 + 0x0001 : word16)
  Class: Eq_43
  DataType: word16
  OrigDataType: word16
T_44: (in __inb : ptr32)
  Class: Eq_44
  DataType: (ptr Eq_44)
  OrigDataType: (ptr (fn T_46 (T_45)))
T_45: (in 0x60 : byte)
  Class: Eq_45
  DataType: byte
  OrigDataType: byte
T_46: (in __inb(0x60) : byte)
  Class: Eq_46
  DataType: byte
  OrigDataType: byte
T_47: (in DPB(ax_29 + 0x0001, __inb(0x60), 0, 8) : word16)
  Class: Eq_40
  DataType: word16
  OrigDataType: word16
T_48: (in al_52 : byte)
  Class: Eq_48
  DataType: byte
  OrigDataType: byte
T_49: (in (byte) dx_ax_46 : byte)
  Class: Eq_49
  DataType: byte
  OrigDataType: byte
T_50: (in (uint16) (byte) dx_ax_46 : uint16)
  Class: Eq_50
  DataType: uint16
  OrigDataType: uint16
T_51: (in bx_39 + (uint16) ((byte) dx_ax_46) : word16)
  Class: Eq_51
  DataType: word16
  OrigDataType: word16
T_52: (in Mem0[ds_11:bx_39 + (uint16) ((byte) dx_ax_46):byte] : byte)
  Class: Eq_52
  DataType: byte
  OrigDataType: byte
T_53: (in bx_39 + di : word16)
  Class: Eq_53
  DataType: word16
  OrigDataType: word16
T_54: (in Mem0[ds_11:bx_39 + di:byte] : byte)
  Class: Eq_52
  DataType: byte
  OrigDataType: byte
T_55: (in Mem0[ds_11:bx_39 + (uint16) ((byte) dx_ax_46):byte] + Mem0[ds_11:bx_39 + di:byte] : byte)
  Class: Eq_48
  DataType: byte
  OrigDataType: byte
T_56: (in SLICE(dx_ax_46, byte, 24) : byte)
  Class: Eq_56
  DataType: byte
  OrigDataType: byte
T_57: (in dh : byte)
  Class: Eq_56
  DataType: byte
  OrigDataType: byte
T_58: (in DPB(cx_12, al_52, 0, 8) : word16)
  Class: Eq_13
  DataType: word16
  OrigDataType: word16
T_59: (in cond(al_52) : byte)
  Class: Eq_59
  DataType: byte
  OrigDataType: byte
T_60: (in C : byte)
  Class: Eq_59
  DataType: byte
  OrigDataType: byte
T_61: (in 0x0001 : word16)
  Class: Eq_61
  DataType: word16
  OrigDataType: word16
T_62: (in bx_39 - 0x0001 : word16)
  Class: Eq_30
  DataType: (memptr (ptr Eq_17) Eq_30)
  OrigDataType: word16
T_63: (in 0x0001 : word16)
  Class: Eq_63
  DataType: word16
  OrigDataType: word16
T_64: (in ax_41 - 0x0001 : word16)
  Class: Eq_19
  DataType: int16
  OrigDataType: word16
T_65: (in ax_41 - 0x0001 : word16)
  Class: Eq_65
  DataType: word16
  OrigDataType: word16
T_66: (in (byte) (ax_41 - 0x0001) : byte)
  Class: Eq_21
  DataType: byte
  OrigDataType: byte
T_67: (in 0x0001 : word16)
  Class: Eq_40
  DataType: word16
  OrigDataType: word16
T_68: (in ax_41 != 0x0001 : bool)
  Class: Eq_68
  DataType: bool
  OrigDataType: bool
T_69: (in 0x0000 : word16)
  Class: Eq_69
  DataType: word16
  OrigDataType: word16
T_70: (in bx + 0x0000 : word16)
  Class: Eq_70
  DataType: word16
  OrigDataType: word16
T_71: (in Mem0[ds_11:bx + 0x0000:byte] : byte)
  Class: Eq_71
  DataType: Eq_71
  OrigDataType: byte
T_72: (in (ds_11->*bx).t0000 - dh : word16)
  Class: Eq_72
  DataType: word16
  OrigDataType: word16
T_73: (in (ds_11->*bx).t0000 - dh - C : word16)
  Class: Eq_71
  DataType: Eq_71
  OrigDataType: word16
T_74: (in 0x0000 : word16)
  Class: Eq_74
  DataType: word16
  OrigDataType: word16
T_75: (in bx + 0x0000 : word16)
  Class: Eq_75
  DataType: word16
  OrigDataType: word16
T_76: (in Mem65[ds_11:bx + 0x0000:byte] : byte)
  Class: Eq_71
  DataType: Eq_71
  OrigDataType: byte
T_77: (in 0x0000 : word16)
  Class: Eq_77
  DataType: word16
  OrigDataType: word16
T_78: (in bx + 0x0000 : word16)
  Class: Eq_78
  DataType: word16
  OrigDataType: word16
T_79: (in Mem65[ds_11:bx + 0x0000:byte] : byte)
  Class: Eq_71
  DataType: Eq_71
  OrigDataType: byte
T_80: (in 0x10 : byte)
  Class: Eq_80
  DataType: byte
  OrigDataType: byte
T_81: (in (ds_11->*bx).t0000 | 0x10 : byte)
  Class: Eq_71
  DataType: Eq_71
  OrigDataType: byte
T_82: (in 0x0000 : word16)
  Class: Eq_82
  DataType: word16
  OrigDataType: word16
T_83: (in bx + 0x0000 : word16)
  Class: Eq_83
  DataType: word16
  OrigDataType: word16
T_84: (in Mem67[ds_11:bx + 0x0000:byte] : byte)
  Class: Eq_71
  DataType: Eq_71
  OrigDataType: byte
T_85: (in 0x0001 : word16)
  Class: Eq_85
  DataType: word16
  OrigDataType: word16
T_86: (in ax_23 + 0x0001 : word16)
  Class: Eq_41
  DataType: word16
  OrigDataType: word16
T_87: (in 0x0001 : word16)
  Class: Eq_41
  DataType: word16
  OrigDataType: word16
T_88: (in ax_29 == 0x0001 : bool)
  Class: Eq_88
  DataType: bool
  OrigDataType: bool
T_89:
  Class: Eq_89
  DataType: Eq_89
  OrigDataType: (struct 0001 (0 T_71 t0000))
T_90:
  Class: Eq_89
  DataType: Eq_89
  OrigDataType: (struct 0001 (0 T_76 t0000))
T_91:
  Class: Eq_89
  DataType: Eq_89
  OrigDataType: (struct 0001 (0 T_79 t0000))
T_92:
  Class: Eq_89
  DataType: Eq_89
  OrigDataType: (struct 0001 (0 T_84 t0000))
*/
typedef struct Globals {
} Eq_1;

typedef void (Eq_2)(byte);

typedef union Eq_7 {
	ptr32 u0;
	segptr32 u1;
} Eq_7;

typedef struct Eq_8 {
} Eq_8;

typedef Eq_7 Eq_9struct Eq_9 {
	Eq_7 t0002;	// 2
} Eq_9;

typedef Eq_89 Eq_17[]struct Eq_17 {
	Eq_89 a0002[];	// 2
} Eq_17;

typedef word16 (Eq_23)(word16, byte);

typedef Eq_71 Eq_30struct Eq_30 {	// size: 1 1
	Eq_71 t0000;	// 0
} Eq_30;

typedef byte (Eq_44)(byte);

typedef union Eq_71 {
	byte u0;
	word16 u1;
} Eq_71;

typedef Eq_71 Eq_89struct Eq_89 {	// size: 1 1
	Eq_71 t0000;	// 0
} Eq_89;

