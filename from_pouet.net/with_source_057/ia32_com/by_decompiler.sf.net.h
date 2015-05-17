// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_057/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_7: (union "Eq_7" (ptr32 u0) (word16 u1) (segptr32 u2))
	T_7 (in ds_cx_8 : Eq_7)
	T_12 (in Mem0[ds:bx + 0x0000:segptr32] : segptr32)
	T_21 (in dx_27 : Eq_7)
	T_24 (in Mem0[ds_9:bx + 0x0000:word16] : word16)
Eq_8: (segment "Eq_8")
	T_8 (in ds : (ptr Eq_8))
	T_17 (in ds_9 : (ptr Eq_8))
	T_18 (in SLICE(ds_cx_8, selector, 16) : selector)
Eq_9: (struct "Eq_9" 0001 (0 Eq_7 t0000) (1 word16 w0001) (140 word16 w0140))
	T_9 (in bx : (memptr (ptr Eq_8) Eq_9))
	T_40 (in bx - 0x0001 : word16)
Eq_60: (fn byte (byte))
	T_60 (in __inb : ptr32)
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
T_7: (in ds_cx_8 : Eq_7)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: ptr32
T_8: (in ds : (ptr Eq_8))
  Class: Eq_8
  DataType: (ptr Eq_8)
  OrigDataType: (ptr (segment))
T_9: (in bx : (memptr (ptr Eq_8) Eq_9))
  Class: Eq_9
  DataType: (memptr (ptr Eq_8) Eq_9)
  OrigDataType: (memptr T_8 (struct 0001 (0 T_7 t0000) (1 T_34 t0001) (140 T_27 t0140)))
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
T_13: (in ax_24 : word16)
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
T_17: (in ds_9 : (ptr Eq_8))
  Class: Eq_8
  DataType: (ptr Eq_8)
  OrigDataType: (ptr (segment))
T_18: (in SLICE(ds_cx_8, selector, 16) : selector)
  Class: Eq_8
  DataType: (ptr Eq_8)
  OrigDataType: (ptr (segment))
T_19: (in cx_10 : word16)
  Class: Eq_19
  DataType: word16
  OrigDataType: word16
T_20: (in (word16) ds_cx_8 : word16)
  Class: Eq_19
  DataType: word16
  OrigDataType: word16
T_21: (in dx_27 : Eq_7)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_22: (in 0x0000 : word16)
  Class: Eq_22
  DataType: word16
  OrigDataType: word16
T_23: (in bx + 0x0000 : word16)
  Class: Eq_23
  DataType: word16
  OrigDataType: word16
T_24: (in Mem0[ds_9:bx + 0x0000:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_25: (in 0x0140 : word16)
  Class: Eq_25
  DataType: word16
  OrigDataType: word16
T_26: (in bx + 0x0140 : word16)
  Class: Eq_26
  DataType: word16
  OrigDataType: word16
T_27: (in Mem0[ds_9:bx + 0x0140:word16] : word16)
  Class: Eq_27
  DataType: word16
  OrigDataType: word16
T_28: (in (ds_9->*bx).w0140 | dx_27 : word16)
  Class: Eq_27
  DataType: word16
  OrigDataType: word16
T_29: (in 0x0140 : word16)
  Class: Eq_29
  DataType: word16
  OrigDataType: word16
T_30: (in bx + 0x0140 : word16)
  Class: Eq_30
  DataType: word16
  OrigDataType: word16
T_31: (in Mem29[ds_9:bx + 0x0140:word16] : word16)
  Class: Eq_27
  DataType: word16
  OrigDataType: word16
T_32: (in 0x0001 : word16)
  Class: Eq_32
  DataType: word16
  OrigDataType: word16
T_33: (in bx + 0x0001 : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_34: (in Mem29[ds_9:bx + 0x0001:word16] : word16)
  Class: Eq_34
  DataType: word16
  OrigDataType: word16
T_35: (in (ds_9->*bx).w0001 | dx_27 : word16)
  Class: Eq_34
  DataType: word16
  OrigDataType: word16
T_36: (in 0x0001 : word16)
  Class: Eq_36
  DataType: word16
  OrigDataType: word16
T_37: (in bx + 0x0001 : word16)
  Class: Eq_37
  DataType: word16
  OrigDataType: word16
T_38: (in Mem32[ds_9:bx + 0x0001:word16] : word16)
  Class: Eq_34
  DataType: word16
  OrigDataType: word16
T_39: (in 0x0001 : word16)
  Class: Eq_39
  DataType: word16
  OrigDataType: word16
T_40: (in bx - 0x0001 : word16)
  Class: Eq_9
  DataType: (memptr (ptr Eq_8) Eq_9)
  OrigDataType: word16
T_41: (in 0x0001 : word16)
  Class: Eq_41
  DataType: word16
  OrigDataType: word16
T_42: (in cx_10 - 0x0001 : word16)
  Class: Eq_19
  DataType: word16
  OrigDataType: word16
T_43: (in 0x0000 : word16)
  Class: Eq_19
  DataType: word16
  OrigDataType: word16
T_44: (in cx_10 != 0x0000 : bool)
  Class: Eq_44
  DataType: bool
  OrigDataType: bool
T_45: (in ax_40 : word16)
  Class: Eq_45
  DataType: word16
  OrigDataType: word16
T_46: (in si : (memptr (ptr Eq_8) byte))
  Class: Eq_46
  DataType: (memptr (ptr Eq_8) byte)
  OrigDataType: (memptr T_17 (struct 0001 (0 T_49 t0000)))
T_47: (in 0x0000 : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_48: (in si + 0x0000 : word16)
  Class: Eq_48
  DataType: word16
  OrigDataType: word16
T_49: (in Mem32[ds_9:si + 0x0000:byte] : byte)
  Class: Eq_49
  DataType: byte
  OrigDataType: byte
T_50: (in DPB(ax_24, ds_9->*si, 0, 8) : word16)
  Class: Eq_45
  DataType: word16
  OrigDataType: word16
T_51: (in 0x0001 : word16)
  Class: Eq_51
  DataType: word16
  OrigDataType: word16
T_52: (in ax_40 + 0x0001 : word16)
  Class: Eq_52
  DataType: word16
  OrigDataType: word16
T_53: (in (byte) (ax_40 + 0x0001) : byte)
  Class: Eq_53
  DataType: byte
  OrigDataType: byte
T_54: (in di : (memptr (ptr Eq_8) byte))
  Class: Eq_54
  DataType: (memptr (ptr Eq_8) byte)
  OrigDataType: (memptr T_17 (struct 0001 (0 T_57 t0000)))
T_55: (in 0x0000 : word16)
  Class: Eq_55
  DataType: word16
  OrigDataType: word16
T_56: (in di + 0x0000 : word16)
  Class: Eq_56
  DataType: word16
  OrigDataType: word16
T_57: (in Mem44[ds_9:di + 0x0000:byte] : byte)
  Class: Eq_53
  DataType: byte
  OrigDataType: byte
T_58: (in ax_49 : word16)
  Class: Eq_58
  DataType: word16
  OrigDataType: word16
T_59: (in ax_40 + 0x0001 : word16)
  Class: Eq_59
  DataType: word16
  OrigDataType: word16
T_60: (in __inb : ptr32)
  Class: Eq_60
  DataType: (ptr Eq_60)
  OrigDataType: (ptr (fn T_62 (T_61)))
T_61: (in 0x60 : byte)
  Class: Eq_61
  DataType: byte
  OrigDataType: byte
T_62: (in __inb(0x60) : byte)
  Class: Eq_62
  DataType: byte
  OrigDataType: byte
T_63: (in DPB(ax_40 + 0x0001, __inb(0x60), 0, 8) : word16)
  Class: Eq_58
  DataType: word16
  OrigDataType: word16
T_64: (in 0x0001 : word16)
  Class: Eq_64
  DataType: word16
  OrigDataType: word16
T_65: (in si + 0x0001 : word16)
  Class: Eq_46
  DataType: (memptr (ptr Eq_8) byte)
  OrigDataType: word16
T_66: (in 0x0001 : word16)
  Class: Eq_66
  DataType: word16
  OrigDataType: word16
T_67: (in di + 0x0001 : word16)
  Class: Eq_54
  DataType: (memptr (ptr Eq_8) byte)
  OrigDataType: word16
T_68: (in 0x0065 : word16)
  Class: Eq_19
  DataType: word16
  OrigDataType: word16
T_69: (in 0x0001 : word16)
  Class: Eq_69
  DataType: word16
  OrigDataType: word16
T_70: (in ax_49 - 0x0001 : word16)
  Class: Eq_13
  DataType: word16
  OrigDataType: word16
T_71: (in 0x0001 : word16)
  Class: Eq_58
  DataType: word16
  OrigDataType: word16
T_72: (in ax_49 != 0x0001 : bool)
  Class: Eq_72
  DataType: bool
  OrigDataType: bool
*/
typedef struct Globals {
} Eq_1;

typedef void (Eq_2)(byte);

typedef union Eq_7 {
	ptr32 u0;
	word16 u1;
	segptr32 u2;
} Eq_7;

typedef struct Eq_8 {
} Eq_8;

typedef Eq_7 Eq_9struct Eq_9 {	// size: 1 1
	Eq_7 t0000;	// 0
	word16 w0001;	// 1
	word16 w0140;	// 140
} Eq_9;

typedef byte (Eq_60)(byte);

