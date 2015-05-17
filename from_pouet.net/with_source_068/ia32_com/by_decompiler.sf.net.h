// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_068/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_7: (union "Eq_7" (ptr32 u0) (segptr32 u1))
	T_7 (in es_bx_8 : ptr32)
	T_12 (in Mem0[ds:bx + 0x0000:segptr32] : segptr32)
Eq_8: (segment "Eq_8")
	T_8 (in ds : (ptr Eq_8))
Eq_17: (segment "Eq_17")
	T_17 (in es_9 : (ptr Eq_17))
	T_18 (in SLICE(es_bx_8, selector, 16) : selector)
Eq_19: (union "Eq_19" (int16 u0) (uint16 u1) ((memptr (ptr Eq_17) byte) u2))
	T_19 (in bx_10 : Eq_19)
	T_20 (in (word16) es_bx_8 : word16)
	T_35 (in bx_30 >>u 0x0001 : word16)
Eq_31: (union "Eq_31" (int16 u0) (uint16 u1))
	T_31 (in dx_37 : Eq_31)
	T_33 (in dx_27 >>u 0x0001 : word16)
	T_51 (in bp : Eq_31)
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
T_7: (in es_bx_8 : ptr32)
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
T_13: (in ax_14 : int16)
  Class: Eq_13
  DataType: int16
  OrigDataType: int16
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
  DataType: int16
  OrigDataType: word16
T_17: (in es_9 : (ptr Eq_17))
  Class: Eq_17
  DataType: (ptr Eq_17)
  OrigDataType: (ptr (segment))
T_18: (in SLICE(es_bx_8, selector, 16) : selector)
  Class: Eq_17
  DataType: (ptr Eq_17)
  OrigDataType: (ptr (segment))
T_19: (in bx_10 : Eq_19)
  Class: Eq_19
  DataType: Eq_19
  OrigDataType: (union (int16 u0) (uint16 u1) ((memptr T_17 (struct (0 T_43 t0000))) u2))
T_20: (in (word16) es_bx_8 : word16)
  Class: Eq_19
  DataType: Eq_19
  OrigDataType: word16
T_21: (in bx_23 : word16)
  Class: Eq_21
  DataType: word16
  OrigDataType: word16
T_22: (in 0x0050 : word16)
  Class: Eq_22
  DataType: word16
  OrigDataType: word16
T_23: (in bx_23 - 0x0050 : word16)
  Class: Eq_23
  DataType: uint16
  OrigDataType: word16
T_24: (in bx_30 : uint16)
  Class: Eq_23
  DataType: uint16
  OrigDataType: uint16
T_25: (in dx_26 : word16)
  Class: Eq_25
  DataType: word16
  OrigDataType: word16
T_26: (in 0x007D : word16)
  Class: Eq_26
  DataType: word16
  OrigDataType: word16
T_27: (in dx_26 + 0x007D : word16)
  Class: Eq_27
  DataType: uint16
  OrigDataType: word16
T_28: (in dx_27 : uint16)
  Class: Eq_27
  DataType: uint16
  OrigDataType: uint16
T_29: (in 0x0050 : word16)
  Class: Eq_29
  DataType: word16
  OrigDataType: word16
T_30: (in bx_23 + 0x0050 : word16)
  Class: Eq_23
  DataType: uint16
  OrigDataType: word16
T_31: (in dx_37 : Eq_31)
  Class: Eq_31
  DataType: Eq_31
  OrigDataType: int16
T_32: (in 0x0001 : word16)
  Class: Eq_32
  DataType: uint16
  OrigDataType: uint16
T_33: (in dx_27 >>u 0x0001 : word16)
  Class: Eq_31
  DataType: Eq_31
  OrigDataType: uint16
T_34: (in 0x0001 : word16)
  Class: Eq_34
  DataType: uint16
  OrigDataType: uint16
T_35: (in bx_30 >>u 0x0001 : word16)
  Class: Eq_19
  DataType: Eq_19
  OrigDataType: uint16
T_36: (in di_40 : word16)
  Class: Eq_36
  DataType: word16
  OrigDataType: word16
T_37: (in 0x0140 : word16)
  Class: Eq_37
  DataType: int16
  OrigDataType: int16
T_38: (in dx_37 *s 0x0140 : int16)
  Class: Eq_38
  DataType: int16
  OrigDataType: int16
T_39: (in 0x0069 : word16)
  Class: Eq_39
  DataType: word16
  OrigDataType: word16
T_40: (in dx_37 *s 0x0140 - 0x0069 : word16)
  Class: Eq_36
  DataType: word16
  OrigDataType: word16
T_41: (in 0x04 : byte)
  Class: Eq_41
  DataType: byte
  OrigDataType: byte
T_42: (in bx_10 + di_40 : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_43: (in Mem42[es_9:bx_10 + di_40:byte] : byte)
  Class: Eq_41
  DataType: byte
  OrigDataType: byte
T_44: (in 0x14 : byte)
  Class: Eq_44
  DataType: byte
  OrigDataType: byte
T_45: (in 0x0004 : word16)
  Class: Eq_45
  DataType: word16
  OrigDataType: word16
T_46: (in bx_10 - 0x0004 : word16)
  Class: Eq_46
  DataType: (memptr (ptr Eq_17) byte)
  OrigDataType: (memptr T_17 (struct (0 T_48 t0000)))
T_47: (in bx_10 - 0x0004 + di_40 : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_48: (in Mem43[es_9:bx_10 - 0x0004 + di_40:byte] : byte)
  Class: Eq_44
  DataType: byte
  OrigDataType: byte
T_49: (in ax_19 : int16)
  Class: Eq_49
  DataType: int16
  OrigDataType: int16
T_50: (in ax_19 + bx_30 : word16)
  Class: Eq_13
  DataType: int16
  OrigDataType: word16
T_51: (in bp : Eq_31)
  Class: Eq_31
  DataType: Eq_31
  OrigDataType: int16
T_52: (in -bx_10 : word16)
  Class: Eq_52
  DataType: int16
  OrigDataType: int16
T_53: (in -bx_10 + bp : word16)
  Class: Eq_25
  DataType: word16
  OrigDataType: word16
T_54: (in 0x0003 : word16)
  Class: Eq_54
  DataType: int16
  OrigDataType: int16
T_55: (in ax_14 *s 0x0003 : int16)
  Class: Eq_49
  DataType: int16
  OrigDataType: int16
T_56: (in bx_10 + bp : word16)
  Class: Eq_21
  DataType: word16
  OrigDataType: word16
T_57: (in 0x004B : word16)
  Class: Eq_57
  DataType: word16
  OrigDataType: word16
T_58: (in dx_26 + 0x004B : word16)
  Class: Eq_27
  DataType: uint16
  OrigDataType: word16
T_59: (in 0x0000 : word16)
  Class: Eq_49
  DataType: int16
  OrigDataType: int16
T_60: (in ax_19 > 0x0000 : bool)
  Class: Eq_60
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

typedef struct Eq_17 {
} Eq_17;

typedef union Eq_19 {
	int16 u0;
	uint16 u1;
	byte Eq_17::* u2;
} Eq_19;

typedef union Eq_31 {
	int16 u0;
	uint16 u1;
} Eq_31;

