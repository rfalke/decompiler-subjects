// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_056/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_7: (union "Eq_7" (ptr32 u0) (segptr32 u1))
	T_7 (in ds_bx_8 : ptr32)
	T_12 (in Mem0[ds:bx + 0x0000:segptr32] : segptr32)
Eq_8: (segment "Eq_8")
	T_8 (in ds : (ptr Eq_8))
Eq_17: (segment "Eq_17" (FFFFFEB0 (struct "Eq_19" 0001 (0 word16 w0000) (1 word16 w0001) (140 word16 w0140)) tFFFFFEB0) (0 Eq_19 t0000) (FEB0 Eq_19 tFEB0))
	T_17 (in ds_9 : (ptr Eq_17))
	T_18 (in SLICE(ds_bx_8, selector, 16) : selector)
Eq_19: (struct "Eq_19" 0001 (0 word16 w0000) (1 word16 w0001) (140 word16 w0140))
	T_19 (in bx_10 : (memptr (ptr Eq_17) Eq_19))
	T_20 (in (word16) ds_bx_8 : word16)
	T_26 (in 0xFEB0 : word16)
	T_46 (in bx_10 - 0x0001 : word16)
	T_47 (in 0x0000 : word16)
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
T_7: (in ds_bx_8 : ptr32)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: ptr32
T_8: (in ds : (ptr Eq_8))
  Class: Eq_8
  DataType: (ptr Eq_8)
  OrigDataType: (ptr (segment))
T_9: (in bx : (memptr (ptr Eq_8) Eq_7))
  Class: Eq_9
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_8 (struct (0 T_12 t0000)))
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
T_13: (in ax_22 : word16)
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
T_17: (in ds_9 : (ptr Eq_17))
  Class: Eq_17
  DataType: (ptr Eq_17)
  OrigDataType: (ptr (segment))
T_18: (in SLICE(ds_bx_8, selector, 16) : selector)
  Class: Eq_17
  DataType: (ptr Eq_17)
  OrigDataType: (ptr (segment))
T_19: (in bx_10 : (memptr (ptr Eq_17) Eq_19))
  Class: Eq_19
  DataType: (memptr (ptr Eq_17) Eq_19)
  OrigDataType: (memptr T_17 (struct 0001 (0 T_30 t0000) (1 T_40 t0001) (140 T_33 t0140)))
T_20: (in (word16) ds_bx_8 : word16)
  Class: Eq_19
  DataType: (memptr (ptr Eq_17) Eq_19)
  OrigDataType: word16
T_21: (in cx : word16)
  Class: Eq_21
  DataType: word16
  OrigDataType: word16
T_22: (in 0x0001 : word16)
  Class: Eq_22
  DataType: word16
  OrigDataType: word16
T_23: (in cx - 0x0001 : word16)
  Class: Eq_21
  DataType: word16
  OrigDataType: word16
T_24: (in 0x0000 : word16)
  Class: Eq_21
  DataType: word16
  OrigDataType: word16
T_25: (in cx != 0x0000 : bool)
  Class: Eq_25
  DataType: bool
  OrigDataType: bool
T_26: (in 0xFEB0 : word16)
  Class: Eq_19
  DataType: (memptr (ptr Eq_17) Eq_19)
  OrigDataType: word16
T_27: (in dx_28 : word16)
  Class: Eq_27
  DataType: word16
  OrigDataType: word16
T_28: (in 0x0000 : word16)
  Class: Eq_28
  DataType: word16
  OrigDataType: word16
T_29: (in bx_10 + 0x0000 : word16)
  Class: Eq_29
  DataType: word16
  OrigDataType: word16
T_30: (in Mem0[ds_9:bx_10 + 0x0000:word16] : word16)
  Class: Eq_27
  DataType: word16
  OrigDataType: word16
T_31: (in 0x0140 : word16)
  Class: Eq_31
  DataType: word16
  OrigDataType: word16
T_32: (in bx_10 + 0x0140 : word16)
  Class: Eq_32
  DataType: word16
  OrigDataType: word16
T_33: (in Mem0[ds_9:bx_10 + 0x0140:word16] : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_34: (in (ds_9->*bx_10).w0140 | dx_28 : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_35: (in 0x0140 : word16)
  Class: Eq_35
  DataType: word16
  OrigDataType: word16
T_36: (in bx_10 + 0x0140 : word16)
  Class: Eq_36
  DataType: word16
  OrigDataType: word16
T_37: (in Mem30[ds_9:bx_10 + 0x0140:word16] : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_38: (in 0x0001 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_39: (in bx_10 + 0x0001 : word16)
  Class: Eq_39
  DataType: word16
  OrigDataType: word16
T_40: (in Mem30[ds_9:bx_10 + 0x0001:word16] : word16)
  Class: Eq_40
  DataType: word16
  OrigDataType: word16
T_41: (in (ds_9->*bx_10).w0001 | dx_28 : word16)
  Class: Eq_40
  DataType: word16
  OrigDataType: word16
T_42: (in 0x0001 : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_43: (in bx_10 + 0x0001 : word16)
  Class: Eq_43
  DataType: word16
  OrigDataType: word16
T_44: (in Mem33[ds_9:bx_10 + 0x0001:word16] : word16)
  Class: Eq_40
  DataType: word16
  OrigDataType: word16
T_45: (in 0x0001 : word16)
  Class: Eq_45
  DataType: word16
  OrigDataType: word16
T_46: (in bx_10 - 0x0001 : word16)
  Class: Eq_19
  DataType: (memptr (ptr Eq_17) Eq_19)
  OrigDataType: word16
T_47: (in 0x0000 : word16)
  Class: Eq_19
  DataType: (memptr (ptr Eq_17) Eq_19)
  OrigDataType: word16
T_48: (in bx_10 != &Eq_17::t0000 : bool)
  Class: Eq_48
  DataType: bool
  OrigDataType: bool
T_49: (in ax_45 : word16)
  Class: Eq_49
  DataType: word16
  OrigDataType: word16
T_50: (in si : (memptr (ptr Eq_17) byte))
  Class: Eq_50
  DataType: (memptr (ptr Eq_17) byte)
  OrigDataType: (memptr T_17 (struct 0001 (0 T_53 t0000)))
T_51: (in 0x0000 : word16)
  Class: Eq_51
  DataType: word16
  OrigDataType: word16
T_52: (in si + 0x0000 : word16)
  Class: Eq_52
  DataType: word16
  OrigDataType: word16
T_53: (in Mem33[ds_9:si + 0x0000:byte] : byte)
  Class: Eq_53
  DataType: byte
  OrigDataType: byte
T_54: (in DPB(ax_22, ds_9->*si, 0, 8) : word16)
  Class: Eq_49
  DataType: word16
  OrigDataType: word16
T_55: (in 0x0001 : word16)
  Class: Eq_55
  DataType: word16
  OrigDataType: word16
T_56: (in ax_45 + 0x0001 : word16)
  Class: Eq_56
  DataType: word16
  OrigDataType: word16
T_57: (in (byte) (ax_45 + 0x0001) : byte)
  Class: Eq_57
  DataType: byte
  OrigDataType: byte
T_58: (in di : (memptr (ptr Eq_17) byte))
  Class: Eq_58
  DataType: (memptr (ptr Eq_17) byte)
  OrigDataType: (memptr T_17 (struct 0001 (0 T_61 t0000)))
T_59: (in 0x0000 : word16)
  Class: Eq_59
  DataType: word16
  OrigDataType: word16
T_60: (in di + 0x0000 : word16)
  Class: Eq_60
  DataType: word16
  OrigDataType: word16
T_61: (in Mem51[ds_9:di + 0x0000:byte] : byte)
  Class: Eq_57
  DataType: byte
  OrigDataType: byte
T_62: (in 0x0001 : word16)
  Class: Eq_62
  DataType: word16
  OrigDataType: word16
T_63: (in si + 0x0001 : word16)
  Class: Eq_50
  DataType: (memptr (ptr Eq_17) byte)
  OrigDataType: word16
T_64: (in ax_45 + 0x0001 : word16)
  Class: Eq_13
  DataType: word16
  OrigDataType: word16
T_65: (in 0x0001 : word16)
  Class: Eq_65
  DataType: word16
  OrigDataType: word16
T_66: (in di + 0x0001 : word16)
  Class: Eq_58
  DataType: (memptr (ptr Eq_17) byte)
  OrigDataType: word16
T_67: (in 0x1F : byte)
  Class: Eq_67
  DataType: byte
  OrigDataType: byte
T_68: (in DPB(cx, 0x1F, 0, 8) : word16)
  Class: Eq_21
  DataType: word16
  OrigDataType: word16
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

typedef struct Eq_19;
Eq_19 Eq_17Eq_19 Eq_17struct Eq_17 {
	struct Eq_19 tFFFFFEB0;	// FFFFFEB0
	Eq_19 t0000;	// 0
	Eq_19 tFEB0;	// FEB0
} Eq_17;

typedef struct Eq_19 Eq_19;

