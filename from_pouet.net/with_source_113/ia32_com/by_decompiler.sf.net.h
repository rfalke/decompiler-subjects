// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_113/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_30) ptrFFFA0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_22: (union "Eq_22" (int16 u0) (uint16 u1))
	T_22 (in dx_ax_60 % 0x0140 : uint16)
Eq_25: (union "Eq_25" (int16 u0) (uint16 u1))
	T_25 (in dx_ax_63 /u 0x0140 : uint16)
Eq_30: (segment "Eq_30")
	T_30 (in 0xA000 : selector)
Eq_45: (segment "Eq_45")
	T_45 (in ss : selector)
Eq_46: (union "Eq_46" (ptr16 u0) ((memptr (ptr Eq_45) Eq_75) u1))
	T_46 (in fp : ptr16)
Eq_59: (union "Eq_59" (int16 u0) (uint16 u1))
	T_59 (in dx_ax_63 /u 0x0140 : uint16)
Eq_60: (union "Eq_60" (int16 u0) (uint16 u1))
	T_60 (in dx_ax_63 /u 0x0140 : uint16)
Eq_66: (fn byte (byte))
	T_66 (in __inb : ptr32)
Eq_75: (struct "Eq_75" (FFFFFFF4 word16 wFFFFFFF4))
	T_75
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
T_7: (in al_112 : int8)
  Class: Eq_7
  DataType: int8
  OrigDataType: int8
T_8: (in ax_102 : uint16)
  Class: Eq_8
  DataType: uint16
  OrigDataType: word16
T_9: (in bx : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_10: (in ax_102 + bx : word16)
  Class: Eq_10
  DataType: uint16
  OrigDataType: uint16
T_11: (in 0x0002 : word16)
  Class: Eq_11
  DataType: uint16
  OrigDataType: uint16
T_12: (in ax_102 + bx >>u 0x0002 : word16)
  Class: Eq_12
  DataType: uint16
  OrigDataType: uint16
T_13: (in (byte) (ax_102 + bx >>u 0x0002) : byte)
  Class: Eq_13
  DataType: byte
  OrigDataType: byte
T_14: (in 0x1F : byte)
  Class: Eq_14
  DataType: byte
  OrigDataType: byte
T_15: (in (byte) (ax_102 + bx >>u 0x0002) & 0x1F : byte)
  Class: Eq_15
  DataType: byte
  OrigDataType: byte
T_16: (in 0x10 : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_17: (in ((byte) (ax_102 + bx >>u 0x0002) & 0x1F) - 0x10 : byte)
  Class: Eq_7
  DataType: int8
  OrigDataType: byte
T_18: (in 0x00 : byte)
  Class: Eq_7
  DataType: int8
  OrigDataType: int8
T_19: (in al_112 >= 0x00 : bool)
  Class: Eq_19
  DataType: bool
  OrigDataType: bool
T_20: (in dx_ax_60 : word32)
  Class: Eq_20
  DataType: word32
  OrigDataType: word32
T_21: (in 0x0140 : word16)
  Class: Eq_21
  DataType: word16
  OrigDataType: word16
T_22: (in dx_ax_60 % 0x0140 : uint16)
  Class: Eq_22
  DataType: Eq_22
  OrigDataType: (union (int16 u0) (uint16 u1))
T_23: (in dx_ax_63 : uint32)
  Class: Eq_23
  DataType: uint32
  OrigDataType: uint32
T_24: (in 0x0140 : word16)
  Class: Eq_24
  DataType: uint16
  OrigDataType: uint16
T_25: (in dx_ax_63 /u 0x0140 : uint16)
  Class: Eq_25
  DataType: Eq_25
  OrigDataType: (union (int16 u0) (uint16 u1))
T_26: (in dx_ax_60 % 0x0140 *s (dx_ax_63 /u 0x0140) : int32)
  Class: Eq_26
  DataType: int32
  OrigDataType: int32
T_27: (in (word16) (dx_ax_60 % 0x0140 *s (dx_ax_63 /u 0x0140)) : word16)
  Class: Eq_8
  DataType: uint16
  OrigDataType: word16
T_28: (in 0x20 : byte)
  Class: Eq_28
  DataType: byte
  OrigDataType: byte
T_29: (in al_112 + 0x20 : byte)
  Class: Eq_29
  DataType: byte
  OrigDataType: byte
T_30: (in 0xA000 : selector)
  Class: Eq_30
  DataType: (ptr Eq_30)
  OrigDataType: (ptr (segment))
T_31: (in di : (memptr (ptr Eq_30) byte))
  Class: Eq_31
  DataType: (memptr (ptr Eq_30) byte)
  OrigDataType: (memptr T_30 (struct 0001 (0 T_34 t0000)))
T_32: (in 0x0000 : word16)
  Class: Eq_32
  DataType: word16
  OrigDataType: word16
T_33: (in di + 0x0000 : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_34: (in Mem123[0xA000:di + 0x0000:byte] : byte)
  Class: Eq_29
  DataType: byte
  OrigDataType: byte
T_35: (in 0x0001 : word16)
  Class: Eq_35
  DataType: word16
  OrigDataType: word16
T_36: (in di + 0x0001 : word16)
  Class: Eq_31
  DataType: (memptr (ptr Eq_30) byte)
  OrigDataType: word16
T_37: (in cx_138 : word16)
  Class: Eq_37
  DataType: word16
  OrigDataType: word16
T_38: (in 0x0001 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_39: (in cx_138 - 0x0001 : word16)
  Class: Eq_37
  DataType: word16
  OrigDataType: word16
T_40: (in cx : word16)
  Class: Eq_37
  DataType: word16
  OrigDataType: word16
T_41: (in 0x0001 : word16)
  Class: Eq_37
  DataType: word16
  OrigDataType: word16
T_42: (in cx_138 != 0x0001 : bool)
  Class: Eq_42
  DataType: bool
  OrigDataType: bool
T_43: (in -al_112 : byte)
  Class: Eq_7
  DataType: int8
  OrigDataType: int8
T_44: (in 0x0140 : word16)
  Class: Eq_44
  DataType: word16
  OrigDataType: word16
T_45: (in ss : selector)
  Class: Eq_45
  DataType: (ptr Eq_45)
  OrigDataType: (ptr (segment))
T_46: (in fp : ptr16)
  Class: Eq_46
  DataType: Eq_46
  OrigDataType: (union (ptr16 u0) ((memptr T_45 (struct (FFFFFFF4 T_49 tFFFFFFF4))) u1))
T_47: (in 0x000C : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_48: (in fp - 0x000C : word16)
  Class: Eq_48
  DataType: word16
  OrigDataType: word16
T_49: (in Mem76[ss:fp - 0x000C:word16] : word16)
  Class: Eq_44
  DataType: word16
  OrigDataType: word16
T_50: (in 0x0000 : word16)
  Class: Eq_50
  DataType: word16
  OrigDataType: word16
T_51: (in SEQ(0x0000, di) : word32)
  Class: Eq_20
  DataType: word32
  OrigDataType: word32
T_52: (in dx_ax_60 % 0x0140 : uint16)
  Class: Eq_52
  DataType: uint16
  OrigDataType: uint16
T_53: (in SEQ(dx_ax_60 % 0x0140, di) : word32)
  Class: Eq_23
  DataType: uint32
  OrigDataType: word32
T_54: (in dx_82 : int16)
  Class: Eq_54
  DataType: int16
  OrigDataType: int16
T_55: (in dx_ax_60 % 0x0140 : uint16)
  Class: Eq_55
  DataType: uint16
  OrigDataType: uint16
T_56: (in 0x007F : word16)
  Class: Eq_56
  DataType: word16
  OrigDataType: word16
T_57: (in dx_ax_60 % 0x0140 + 0x007F : word16)
  Class: Eq_54
  DataType: int16
  OrigDataType: word16
T_58: (in dx_ax_63 /u 0x0140 : uint16)
  Class: Eq_8
  DataType: uint16
  OrigDataType: uint16
T_59: (in dx_ax_63 /u 0x0140 : uint16)
  Class: Eq_59
  DataType: Eq_59
  OrigDataType: (union (int16 u0) (uint16 u1))
T_60: (in dx_ax_63 /u 0x0140 : uint16)
  Class: Eq_60
  DataType: Eq_60
  OrigDataType: (union (int16 u0) (uint16 u1))
T_61: (in dx_ax_63 /u 0x0140 *s (dx_ax_63 /u 0x0140) : int16)
  Class: Eq_61
  DataType: int16
  OrigDataType: int16
T_62: (in dx_82 *s dx_82 : int16)
  Class: Eq_62
  DataType: int16
  OrigDataType: int16
T_63: (in dx_ax_63 /u 0x0140 *s (dx_ax_63 /u 0x0140) + dx_82 *s dx_82 : word16)
  Class: Eq_63
  DataType: cups16
  OrigDataType: cups16
T_64: (in 0x2710 : word16)
  Class: Eq_63
  DataType: cups16
  OrigDataType: cups16
T_65: (in dx_ax_63 /u 0x0140 *s (dx_ax_63 /u 0x0140) + dx_82 *s dx_82 <=u 0x2710 : bool)
  Class: Eq_65
  DataType: bool
  OrigDataType: bool
T_66: (in __inb : ptr32)
  Class: Eq_66
  DataType: (ptr Eq_66)
  OrigDataType: (ptr (fn T_68 (T_67)))
T_67: (in 0x60 : byte)
  Class: Eq_67
  DataType: byte
  OrigDataType: byte
T_68: (in __inb(0x60) : byte)
  Class: Eq_68
  DataType: byte
  OrigDataType: byte
T_69: (in 0x01 : byte)
  Class: Eq_68
  DataType: byte
  OrigDataType: byte
T_70: (in __inb(0x60) != 0x01 : bool)
  Class: Eq_70
  DataType: bool
  OrigDataType: bool
T_71: (in 0x0001 : word16)
  Class: Eq_71
  DataType: word16
  OrigDataType: word16
T_72: (in bx + 0x0001 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_73: (in 0x0001 : word16)
  Class: Eq_73
  DataType: word16
  OrigDataType: word16
T_74: (in cx - 0x0001 : word16)
  Class: Eq_37
  DataType: word16
  OrigDataType: word16
T_75:
  Class: Eq_75
  DataType: Eq_75
  OrigDataType: 
*/
typedef Eq_30 Eq_1struct Globals {
	Eq_30 * ptrFFFA0000;	// FFFA0000
} Eq_1;

typedef void (Eq_2)(byte);

typedef union Eq_22 {
	int16 u0;
	uint16 u1;
} Eq_22;

typedef union Eq_25 {
	int16 u0;
	uint16 u1;
} Eq_25;

typedef struct Eq_30 {
} Eq_30;

typedef struct Eq_45 {
} Eq_45;

typedef union Eq_46 {
	ptr16 u0;
	Eq_75 Eq_45::* u1;
} Eq_46;

typedef union Eq_59 {
	int16 u0;
	uint16 u1;
} Eq_59;

typedef union Eq_60 {
	int16 u0;
	uint16 u1;
} Eq_60;

typedef byte (Eq_66)(byte);

typedef struct Eq_75 {
	word16 wFFFFFFF4;	// FFFFFFF4
} Eq_75;

