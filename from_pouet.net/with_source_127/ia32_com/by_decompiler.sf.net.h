// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_127/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_7: (segment "Eq_7")
	T_7 (in es_10 : (ptr Eq_7))
	T_13 (in SLICE(ds->*bx, selector, 16) : selector)
Eq_8: (segment "Eq_8")
	T_8 (in ds : (ptr Eq_8))
Eq_25: (fn bool (int16))
	T_25 (in OVERFLOW : ptr32)
Eq_30: (fn bool (word16))
	T_30 (in OVERFLOW : ptr32)
Eq_44: (union "Eq_44" (int32 u0) (uint32 u1))
	T_44 (in dx_ax_28 : Eq_44)
	T_63 (in SEQ(dx_ax_25 % 0x0140, di) : int32)
Eq_56: (fn bool (int16))
	T_56 (in OVERFLOW : ptr32)
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
T_7: (in es_10 : (ptr Eq_7))
  Class: Eq_7
  DataType: (ptr Eq_7)
  OrigDataType: (ptr (segment))
T_8: (in ds : (ptr Eq_8))
  Class: Eq_8
  DataType: (ptr Eq_8)
  OrigDataType: (ptr (segment))
T_9: (in bx : (memptr (ptr Eq_8) segptr32))
  Class: Eq_9
  DataType: (memptr (ptr Eq_8) segptr32)
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
  Class: Eq_12
  DataType: segptr32
  OrigDataType: segptr32
T_13: (in SLICE(ds->*bx, selector, 16) : selector)
  Class: Eq_7
  DataType: (ptr Eq_7)
  OrigDataType: (ptr (segment))
T_14: (in cx_26 : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_15: (in (byte) cx_26 : byte)
  Class: Eq_15
  DataType: byte
  OrigDataType: byte
T_16: (in di : (memptr (ptr Eq_7) byte))
  Class: Eq_16
  DataType: (memptr (ptr Eq_7) byte)
  OrigDataType: (memptr T_7 (struct 0001 (0 T_19 t0000)))
T_17: (in 0x0000 : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_18: (in di + 0x0000 : word16)
  Class: Eq_18
  DataType: word16
  OrigDataType: word16
T_19: (in Mem62[es_10:di + 0x0000:byte] : byte)
  Class: Eq_15
  DataType: byte
  OrigDataType: byte
T_20: (in 0x0001 : word16)
  Class: Eq_20
  DataType: word16
  OrigDataType: word16
T_21: (in di + 0x0001 : word16)
  Class: Eq_16
  DataType: (memptr (ptr Eq_7) byte)
  OrigDataType: word16
T_22: (in bp_64 : int16)
  Class: Eq_22
  DataType: int16
  OrigDataType: word16
T_23: (in si_38 : int16)
  Class: Eq_23
  DataType: int16
  OrigDataType: int16
T_24: (in si_38 *s si_38 : int16)
  Class: Eq_22
  DataType: int16
  OrigDataType: int16
T_25: (in OVERFLOW : ptr32)
  Class: Eq_25
  DataType: (ptr Eq_25)
  OrigDataType: (ptr (fn T_26 (T_22)))
T_26: (in OVERFLOW(bp_64) : bool)
  Class: Eq_26
  DataType: bool
  OrigDataType: bool
T_27: (in bx_67 : word16)
  Class: Eq_27
  DataType: word16
  OrigDataType: word16
T_28: (in bx_47 : int16)
  Class: Eq_28
  DataType: int16
  OrigDataType: word16
T_29: (in bx_47 + bp_64 : word16)
  Class: Eq_27
  DataType: word16
  OrigDataType: word16
T_30: (in OVERFLOW : ptr32)
  Class: Eq_30
  DataType: (ptr Eq_30)
  OrigDataType: (ptr (fn T_31 (T_27)))
T_31: (in OVERFLOW(bx_67) : bool)
  Class: Eq_31
  DataType: bool
  OrigDataType: bool
T_32: (in bx_67 - bp_64 : word16)
  Class: Eq_32
  DataType: word16
  OrigDataType: word16
T_33: (in bx_67 - bp_64 - bp_64 : word16)
  Class: Eq_33
  DataType: int16
  OrigDataType: int16
T_34: (in 0x0006 : word16)
  Class: Eq_34
  DataType: uint16
  OrigDataType: uint16
T_35: (in bx_67 - bp_64 - bp_64 >> 0x0006 : word16)
  Class: Eq_35
  DataType: int16
  OrigDataType: int16
T_36: (in dx : word16)
  Class: Eq_36
  DataType: word16
  OrigDataType: word16
T_37: (in (bx_67 - bp_64 - bp_64 >> 0x0006) + dx : word16)
  Class: Eq_37
  DataType: int16
  OrigDataType: word16
T_38: (in bx_37 : int16)
  Class: Eq_37
  DataType: int16
  OrigDataType: int16
T_39: (in si_45 : int16)
  Class: Eq_39
  DataType: int16
  OrigDataType: ui16
T_40: (in 0x0002 : word16)
  Class: Eq_40
  DataType: ui16
  OrigDataType: ui16
T_41: (in si_45 * 0x0002 : word16)
  Class: Eq_41
  DataType: int16
  OrigDataType: int16
T_42: (in 0x0006 : word16)
  Class: Eq_42
  DataType: uint16
  OrigDataType: uint16
T_43: (in si_45 * 0x0002 >> 0x0006 : word16)
  Class: Eq_43
  DataType: int16
  OrigDataType: int16
T_44: (in dx_ax_28 : Eq_44)
  Class: Eq_44
  DataType: Eq_44
  OrigDataType: (union (int32 u0) (uint32 u1))
T_45: (in 0x0140 : word16)
  Class: Eq_45
  DataType: uint16
  OrigDataType: uint16
T_46: (in dx_ax_28 /u 0x0140 : uint16)
  Class: Eq_46
  DataType: uint16
  OrigDataType: uint16
T_47: (in 0x0064 : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_48: (in dx_ax_28 /u 0x0140 - 0x0064 : word16)
  Class: Eq_48
  DataType: word16
  OrigDataType: word16
T_49: (in (si_45 * 0x0002 >> 0x0006) + (dx_ax_28 /u 0x0140 - 0x0064) : word16)
  Class: Eq_23
  DataType: int16
  OrigDataType: word16
T_50: (in 0x0001 : word16)
  Class: Eq_50
  DataType: word16
  OrigDataType: word16
T_51: (in cx_26 - 0x0001 : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_52: (in 0x0000 : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_53: (in cx_26 != 0x0000 : bool)
  Class: Eq_53
  DataType: bool
  OrigDataType: bool
T_54: (in si_38 *s bx_37 : int16)
  Class: Eq_39
  DataType: int16
  OrigDataType: int16
T_55: (in bx_37 *s bx_37 : int16)
  Class: Eq_28
  DataType: int16
  OrigDataType: int16
T_56: (in OVERFLOW : ptr32)
  Class: Eq_56
  DataType: (ptr Eq_56)
  OrigDataType: (ptr (fn T_57 (T_28)))
T_57: (in OVERFLOW(bx_47) : bool)
  Class: Eq_57
  DataType: bool
  OrigDataType: bool
T_58: (in dx_ax_25 : int32)
  Class: Eq_58
  DataType: int32
  OrigDataType: int32
T_59: (in SEQ(dx, di) : int32)
  Class: Eq_58
  DataType: int32
  OrigDataType: int32
T_60: (in 0x0140 : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_61: (in 0x0140 : word16)
  Class: Eq_61
  DataType: word16
  OrigDataType: word16
T_62: (in dx_ax_25 % 0x0140 : uint16)
  Class: Eq_62
  DataType: uint16
  OrigDataType: uint16
T_63: (in SEQ(dx_ax_25 % 0x0140, di) : int32)
  Class: Eq_44
  DataType: Eq_44
  OrigDataType: int32
T_64: (in dx_ax_25 % 0x0140 : uint16)
  Class: Eq_64
  DataType: uint16
  OrigDataType: uint16
T_65: (in dx_ax_25 % 0x0140 : uint16)
  Class: Eq_65
  DataType: uint16
  OrigDataType: uint16
T_66: (in SLICE(dx_ax_25 % 0x0140, byte, 8) : byte)
  Class: Eq_66
  DataType: byte
  OrigDataType: byte
T_67: (in 0x01 : byte)
  Class: Eq_67
  DataType: byte
  OrigDataType: byte
T_68: (in SLICE(dx_ax_25 % 0x0140, byte, 8) - 0x01 : byte)
  Class: Eq_68
  DataType: byte
  OrigDataType: byte
T_69: (in DPB(dx_ax_25 % 0x0140, SLICE(dx_ax_25 % 0x0140, byte, 8) - 0x01, 8, 8) : word16)
  Class: Eq_36
  DataType: word16
  OrigDataType: word16
T_70: (in 0x0000 : word16)
  Class: Eq_37
  DataType: int16
  OrigDataType: word16
T_71: (in 0x0000 : word16)
  Class: Eq_23
  DataType: int16
  OrigDataType: word16
*/
typedef struct Globals {
} Eq_1;

typedef void (Eq_2)(byte);

typedef struct Eq_7 {
} Eq_7;

typedef struct Eq_8 {
} Eq_8;

typedef bool (Eq_25)(int16);

typedef bool (Eq_30)(word16);

typedef union Eq_44 {
	int32 u0;
	uint32 u1;
} Eq_44;

typedef bool (Eq_56)(int16);

