// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_069/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_14) ptrFFFA0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_12: (union "Eq_12" (int16 u0) (uint16 u1))
	T_12 (in si_11 : Eq_12)
	T_13 (in 0x6F0C : word16)
	T_51 (in ax_52 >>u 0x0001 : word16)
Eq_14: (segment "Eq_14")
	T_14 (in 0xA000 : selector)
Eq_44: (union "Eq_44" (int16 u0) (uint16 u1))
	T_44 (in (ax_44 << 0x0001) + 0x0061 + (ax_44 << 0x0001 <u 0x0000) >>u 0x0001 : word16)
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
T_7: (in dx_24 : int16)
  Class: Eq_7
  DataType: int16
  OrigDataType: word16
T_8: (in dx : word16)
  Class: Eq_8
  DataType: word16
  OrigDataType: word16
T_9: (in 0x40 : byte)
  Class: Eq_9
  DataType: byte
  OrigDataType: byte
T_10: (in DPB(dx, 0x40, 0, 8) : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: word16
T_11: (in bp_10 : int16)
  Class: Eq_7
  DataType: int16
  OrigDataType: int16
T_12: (in si_11 : Eq_12)
  Class: Eq_12
  DataType: Eq_12
  OrigDataType: (union (int16 u0) (uint16 u1))
T_13: (in 0x6F0C : word16)
  Class: Eq_12
  DataType: int16
  OrigDataType: word16
T_14: (in 0xA000 : selector)
  Class: Eq_14
  DataType: (ptr Eq_14)
  OrigDataType: (ptr (segment))
T_15: (in di_30 : (memptr (ptr Eq_14) byte))
  Class: Eq_15
  DataType: (memptr (ptr Eq_14) byte)
  OrigDataType: (memptr T_14 (struct 0001 (0 T_18 t0000)))
T_16: (in 0x0000 : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_17: (in di_30 + 0x0000 : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_18: (in Mem0[0xA000:di_30 + 0x0000:byte] : byte)
  Class: Eq_18
  DataType: byte
  OrigDataType: byte
T_19: (in 0x01 : byte)
  Class: Eq_19
  DataType: byte
  OrigDataType: byte
T_20: (in 0xA000->*di_30 + 0x01 : byte)
  Class: Eq_18
  DataType: byte
  OrigDataType: byte
T_21: (in 0x0000 : word16)
  Class: Eq_21
  DataType: word16
  OrigDataType: word16
T_22: (in di_30 + 0x0000 : word16)
  Class: Eq_22
  DataType: word16
  OrigDataType: word16
T_23: (in Mem38[0xA000:di_30 + 0x0000:byte] : byte)
  Class: Eq_18
  DataType: byte
  OrigDataType: byte
T_24: (in 0x0001 : word16)
  Class: Eq_24
  DataType: word16
  OrigDataType: word16
T_25: (in di_30 + 0x0001 : word16)
  Class: Eq_15
  DataType: (memptr (ptr Eq_14) byte)
  OrigDataType: word16
T_26: (in cx : word16)
  Class: Eq_26
  DataType: word16
  OrigDataType: word16
T_27: (in 0x0001 : word16)
  Class: Eq_27
  DataType: word16
  OrigDataType: word16
T_28: (in cx - 0x0001 : word16)
  Class: Eq_26
  DataType: word16
  OrigDataType: word16
T_29: (in 0x0000 : word16)
  Class: Eq_26
  DataType: word16
  OrigDataType: word16
T_30: (in cx != 0x0000 : bool)
  Class: Eq_30
  DataType: bool
  OrigDataType: bool
T_31: (in ax_44 : int16)
  Class: Eq_31
  DataType: int16
  OrigDataType: word16
T_32: (in 0x4E6D : word16)
  Class: Eq_32
  DataType: int16
  OrigDataType: int16
T_33: (in si_11 *s 0x4E6D : int16)
  Class: Eq_31
  DataType: int16
  OrigDataType: int16
T_34: (in ax_52 : uint16)
  Class: Eq_34
  DataType: uint16
  OrigDataType: uint16
T_35: (in 0x0001 : word16)
  Class: Eq_35
  DataType: word16
  OrigDataType: word16
T_36: (in ax_44 << 0x0001 : word16)
  Class: Eq_36
  DataType: ui16
  OrigDataType: ui16
T_37: (in 0x0061 : word16)
  Class: Eq_37
  DataType: word16
  OrigDataType: word16
T_38: (in (ax_44 << 0x0001) + 0x0061 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_39: (in ax_44 << 0x0001 : word16)
  Class: Eq_39
  DataType: uint16
  OrigDataType: uint16
T_40: (in 0x0000 : word16)
  Class: Eq_39
  DataType: uint16
  OrigDataType: cups16
T_41: (in ax_44 << 0x0001 <u 0x0000 : bool)
  Class: Eq_41
  DataType: bool
  OrigDataType: bool
T_42: (in (ax_44 << 0x0001) + 0x0061 + (ax_44 << 0x0001 <u 0x0000) : word16)
  Class: Eq_42
  DataType: uint16
  OrigDataType: uint16
T_43: (in 0x0001 : word16)
  Class: Eq_43
  DataType: uint16
  OrigDataType: uint16
T_44: (in (ax_44 << 0x0001) + 0x0061 + (ax_44 << 0x0001 <u 0x0000) >>u 0x0001 : word16)
  Class: Eq_44
  DataType: Eq_44
  OrigDataType: (union (int16 u0) (uint16 u1))
T_45: (in -((ax_44 << 0x0001) + 0x0061 + (ax_44 << 0x0001 <u 0x0000) >>u 0x0001) : word16)
  Class: Eq_45
  DataType: int16
  OrigDataType: int16
T_46: (in 0x0001 : word16)
  Class: Eq_46
  DataType: word16
  OrigDataType: word16
T_47: (in -((ax_44 << 0x0001) + 0x0061 + (ax_44 << 0x0001 <u 0x0000) >>u 0x0001) << 0x0001 : word16)
  Class: Eq_47
  DataType: ui16
  OrigDataType: ui16
T_48: (in 0x7FFE : word16)
  Class: Eq_48
  DataType: word16
  OrigDataType: word16
T_49: (in -((ax_44 << 0x0001) + 0x0061 + (ax_44 << 0x0001 <u 0x0000) >>u 0x0001) << 0x0001 & 0x7FFE : word16)
  Class: Eq_34
  DataType: uint16
  OrigDataType: word16
T_50: (in 0x0001 : word16)
  Class: Eq_50
  DataType: uint16
  OrigDataType: uint16
T_51: (in ax_52 >>u 0x0001 : word16)
  Class: Eq_12
  DataType: Eq_12
  OrigDataType: uint16
T_52: (in ax_52 >>u 0x0001 : word16)
  Class: Eq_52
  DataType: uint16
  OrigDataType: uint16
T_53: (in (byte) (ax_52 >>u 0x0001) : byte)
  Class: Eq_53
  DataType: bcu8
  OrigDataType: bcu8
T_54: (in 0x80 : byte)
  Class: Eq_53
  DataType: bcu8
  OrigDataType: bcu8
T_55: (in (byte) (ax_52 >>u 0x0001) <u 0x80 : bool)
  Class: Eq_55
  DataType: bool
  OrigDataType: bool
T_56: (in 0x0001 : word16)
  Class: Eq_56
  DataType: word16
  OrigDataType: word16
T_57: (in dx_24 - 0x0001 : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: word16
T_58: (in 0x0001 : word16)
  Class: Eq_58
  DataType: word16
  OrigDataType: word16
T_59: (in bp_10 + 0x0001 : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: word16
T_60: (in 0x0001 : word16)
  Class: Eq_60
  DataType: word16
  OrigDataType: word16
T_61: (in dx_24 + 0x0001 : word16)
  Class: Eq_61
  DataType: word16
  OrigDataType: word16
T_62: (in 0x0001 : word16)
  Class: Eq_62
  DataType: word16
  OrigDataType: word16
T_63: (in dx_24 + 0x0001 + 0x0001 : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: word16
T_64: (in 0x0140 : word16)
  Class: Eq_64
  DataType: int16
  OrigDataType: int16
T_65: (in bp_10 *s 0x0140 : int16)
  Class: Eq_65
  DataType: int16
  OrigDataType: int16
T_66: (in bp_10 *s 0x0140 + dx_24 : word16)
  Class: Eq_15
  DataType: (memptr (ptr Eq_14) byte)
  OrigDataType: word16
T_67: (in 0x1E : byte)
  Class: Eq_67
  DataType: byte
  OrigDataType: byte
T_68: (in DPB(cx, 0x1E, 0, 8) : word16)
  Class: Eq_26
  DataType: word16
  OrigDataType: word16
*/
typedef Eq_14 Eq_1struct Globals {
	Eq_14 * ptrFFFA0000;	// FFFA0000
} Eq_1;

typedef void (Eq_2)(byte);

typedef union Eq_12 {
	int16 u0;
	uint16 u1;
} Eq_12;

typedef struct Eq_14 {
} Eq_14;

typedef union Eq_44 {
	int16 u0;
	uint16 u1;
} Eq_44;

