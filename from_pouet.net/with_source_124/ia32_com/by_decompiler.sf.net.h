// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_124/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_7: (union "Eq_7" (ptr32 u0) (segptr32 u1))
	T_7 (in es_bx_6 : ptr32)
	T_12 (in Mem0[ds:bx + 0x0000:segptr32] : segptr32)
Eq_8: (segment "Eq_8")
	T_8 (in ds : (ptr Eq_8))
Eq_13: (segment "Eq_13" (0 byte b0000))
	T_13 (in es_7 : (ptr Eq_13))
	T_14 (in SLICE(es_bx_6, selector, 16) : selector)
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
T_7: (in es_bx_6 : ptr32)
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
T_13: (in es_7 : (ptr Eq_13))
  Class: Eq_13
  DataType: (ptr Eq_13)
  OrigDataType: (ptr (segment))
T_14: (in SLICE(es_bx_6, selector, 16) : selector)
  Class: Eq_13
  DataType: (ptr Eq_13)
  OrigDataType: (ptr (segment))
T_15: (in bl_19 : byte)
  Class: Eq_15
  DataType: byte
  OrigDataType: byte
T_16: (in (byte) es_bx_6 : byte)
  Class: Eq_15
  DataType: byte
  OrigDataType: byte
T_17: (in al_10 : int8)
  Class: Eq_17
  DataType: int8
  OrigDataType: int8
T_18: (in 0x01 : byte)
  Class: Eq_17
  DataType: int8
  OrigDataType: byte
T_19: (in ax_12 : word16)
  Class: Eq_19
  DataType: word16
  OrigDataType: word16
T_20: (in ax : word16)
  Class: Eq_20
  DataType: word16
  OrigDataType: word16
T_21: (in 0x01 : byte)
  Class: Eq_21
  DataType: byte
  OrigDataType: byte
T_22: (in DPB(ax, 0x01, 0, 8) : word16)
  Class: Eq_19
  DataType: word16
  OrigDataType: word16
T_23: (in di_38 : (memptr (ptr Eq_13) byte))
  Class: Eq_23
  DataType: (memptr (ptr Eq_13) byte)
  OrigDataType: (memptr T_13 (struct 0001 (0 T_37 t0000)))
T_24: (in 0x0000 : word16)
  Class: Eq_23
  DataType: (memptr (ptr Eq_13) byte)
  OrigDataType: word16
T_25: (in dl_39 : byte)
  Class: Eq_25
  DataType: byte
  OrigDataType: byte
T_26: (in 0xC8 : byte)
  Class: Eq_25
  DataType: byte
  OrigDataType: byte
T_27: (in bl_19 + al_10 : byte)
  Class: Eq_15
  DataType: byte
  OrigDataType: byte
T_28: (in -al_10 : byte)
  Class: Eq_17
  DataType: int8
  OrigDataType: int8
T_29: (in DPB(ax_12, al_10, 0, 8) : word16)
  Class: Eq_19
  DataType: word16
  OrigDataType: word16
T_30: (in al_62 : bcu8)
  Class: Eq_30
  DataType: bcu8
  OrigDataType: bcu8
T_31: (in 0x1F : byte)
  Class: Eq_31
  DataType: byte
  OrigDataType: byte
T_32: (in al_62 & 0x1F : byte)
  Class: Eq_32
  DataType: byte
  OrigDataType: byte
T_33: (in 0x10 : byte)
  Class: Eq_33
  DataType: byte
  OrigDataType: byte
T_34: (in (al_62 & 0x1F) + 0x10 : byte)
  Class: Eq_34
  DataType: byte
  OrigDataType: byte
T_35: (in 0x0000 : word16)
  Class: Eq_35
  DataType: word16
  OrigDataType: word16
T_36: (in di_38 + 0x0000 : word16)
  Class: Eq_36
  DataType: word16
  OrigDataType: word16
T_37: (in Mem73[es_7:di_38 + 0x0000:byte] : byte)
  Class: Eq_34
  DataType: byte
  OrigDataType: byte
T_38: (in cx_54 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_39: (in 0x0001 : word16)
  Class: Eq_39
  DataType: word16
  OrigDataType: word16
T_40: (in cx_54 - 0x0001 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_41: (in 0x0001 : word16)
  Class: Eq_41
  DataType: word16
  OrigDataType: word16
T_42: (in di_38 + 0x0001 : word16)
  Class: Eq_23
  DataType: (memptr (ptr Eq_13) byte)
  OrigDataType: word16
T_43: (in (byte) cx_54 : byte)
  Class: Eq_43
  DataType: byte
  OrigDataType: byte
T_44: (in cl_55 : byte)
  Class: Eq_43
  DataType: byte
  OrigDataType: byte
T_45: (in 0x0000 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_46: (in cx_54 != 0x0000 : bool)
  Class: Eq_46
  DataType: bool
  OrigDataType: bool
T_47: (in al_62 - bl_19 : byte)
  Class: Eq_47
  DataType: byte
  OrigDataType: byte
T_48: (in al_62 - bl_19 - bl_19 : byte)
  Class: Eq_48
  DataType: byte
  OrigDataType: byte
T_49: (in al_62 - bl_19 - bl_19 + dl_39 : byte)
  Class: Eq_49
  DataType: byte
  OrigDataType: byte
T_50: (in al_62 - bl_19 - bl_19 + dl_39 & dl_39 : byte)
  Class: Eq_30
  DataType: bcu8
  OrigDataType: byte
T_51: (in cl_55 + bl_19 : byte)
  Class: Eq_30
  DataType: bcu8
  OrigDataType: byte
T_52: (in 0xA0 : byte)
  Class: Eq_30
  DataType: bcu8
  OrigDataType: bcu8
T_53: (in al_62 <u 0xA0 : bool)
  Class: Eq_53
  DataType: bool
  OrigDataType: bool
T_54: (in 0x01 : byte)
  Class: Eq_54
  DataType: byte
  OrigDataType: byte
T_55: (in dl_39 - 0x01 : byte)
  Class: Eq_25
  DataType: byte
  OrigDataType: byte
T_56: (in 0x00 : byte)
  Class: Eq_25
  DataType: byte
  OrigDataType: byte
T_57: (in dl_39 != 0x00 : bool)
  Class: Eq_57
  DataType: bool
  OrigDataType: bool
T_58: (in 0x0140 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_59: (in 0x40 : byte)
  Class: Eq_43
  DataType: byte
  OrigDataType: byte
T_60: (in (byte) ax_12 : byte)
  Class: Eq_17
  DataType: int8
  OrigDataType: byte
T_61: (in bl_19 + al_10 : byte)
  Class: Eq_61
  DataType: byte
  OrigDataType: byte
T_62: (in 0x00 : byte)
  Class: Eq_61
  DataType: byte
  OrigDataType: byte
T_63: (in bl_19 + al_10 != 0x00 : bool)
  Class: Eq_63
  DataType: bool
  OrigDataType: bool
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

typedef struct Eq_13 {
	byte b0000;	// 0
} Eq_13;

