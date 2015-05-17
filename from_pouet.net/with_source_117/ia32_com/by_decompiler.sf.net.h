// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_117/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_44) ptrFFFA0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_8: (union "Eq_8" (int32 u0) (uint32 u1))
	T_8 (in dx_ax_46 : Eq_8)
	T_63 (in SEQ(dx_ax_43 % 0x0140, di) : int32)
Eq_32: (union "Eq_32" (int32 u0) (uint32 u1))
	T_32 (in SEQ(dx, ax_62) : int32)
Eq_44: (segment "Eq_44")
	T_44 (in 0xA000 : selector)
Eq_68: (fn byte (byte))
	T_68 (in __inb : ptr32)
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
T_7: (in ax_60 : int16)
  Class: Eq_7
  DataType: int16
  OrigDataType: int16
T_8: (in dx_ax_46 : Eq_8)
  Class: Eq_8
  DataType: Eq_8
  OrigDataType: (union (int32 u0) (uint32 u1))
T_9: (in 0x0140 : word16)
  Class: Eq_9
  DataType: uint16
  OrigDataType: uint16
T_10: (in dx_ax_46 /u 0x0140 : uint16)
  Class: Eq_10
  DataType: uint16
  OrigDataType: uint16
T_11: (in 0x0078 : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_12: (in dx_ax_46 /u 0x0140 - 0x0078 : word16)
  Class: Eq_12
  DataType: word16
  OrigDataType: word16
T_13: (in dx_51 : int16)
  Class: Eq_13
  DataType: int16
  OrigDataType: int16
T_14: (in dx_ax_46 /u 0x0140 - 0x0078 + dx_51 : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: word16
T_15: (in dx_ax_61 : int32)
  Class: Eq_15
  DataType: int32
  OrigDataType: int32
T_16: (in ax_60 *s ax_60 : int32)
  Class: Eq_15
  DataType: int32
  OrigDataType: int32
T_17: (in ax_62 : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_18: (in (word16) dx_ax_61 : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_19: (in bx_63 : word16)
  Class: Eq_19
  DataType: word16
  OrigDataType: word16
T_20: (in dx_ax_46 /u 0x0140 : uint16)
  Class: Eq_20
  DataType: uint16
  OrigDataType: uint16
T_21: (in dx_ax_46 /u 0x0140 - 0x0078 : word16)
  Class: Eq_21
  DataType: int16
  OrigDataType: int16
T_22: (in dx_ax_46 /u 0x0140 : uint16)
  Class: Eq_22
  DataType: uint16
  OrigDataType: uint16
T_23: (in dx_ax_46 /u 0x0140 - 0x0078 : word16)
  Class: Eq_23
  DataType: int16
  OrigDataType: int16
T_24: (in (dx_ax_46 /u 0x0140 - 0x0078) *s (dx_ax_46 /u 0x0140 - 0x0078) : int16)
  Class: Eq_24
  DataType: int16
  OrigDataType: int16
T_25: (in (dx_ax_46 /u 0x0140 - 0x0078) *s (dx_ax_46 /u 0x0140 - 0x0078) + ax_62 : word16)
  Class: Eq_19
  DataType: word16
  OrigDataType: word16
T_26: (in 0x09 : byte)
  Class: Eq_26
  DataType: byte
  OrigDataType: byte
T_27: (in DPB(dx_ax_61, 0x09, 16, 8) : int32)
  Class: Eq_27
  DataType: int32
  OrigDataType: int32
T_28: (in 0x000A : word16)
  Class: Eq_28
  DataType: word16
  OrigDataType: word16
T_29: (in bx_63 + 0x000A : word16)
  Class: Eq_29
  DataType: word16
  OrigDataType: word16
T_30: (in DPB(dx_ax_61, 0x09, 16, 8) % (bx_63 + 0x000A) : uint16)
  Class: Eq_30
  DataType: uint16
  OrigDataType: uint16
T_31: (in dx : word16)
  Class: Eq_30
  DataType: uint16
  OrigDataType: uint16
T_32: (in SEQ(dx, ax_62) : int32)
  Class: Eq_32
  DataType: Eq_32
  OrigDataType: (union (int32 u0) (uint32 u1))
T_33: (in bx_63 + 0x000A : word16)
  Class: Eq_33
  DataType: uint16
  OrigDataType: uint16
T_34: (in SEQ(dx, ax_62) /u (bx_63 + 0x000A) : uint16)
  Class: Eq_34
  DataType: uint16
  OrigDataType: uint16
T_35: (in bp : word16)
  Class: Eq_35
  DataType: word16
  OrigDataType: word16
T_36: (in SEQ(dx, ax_62) /u (bx_63 + 0x000A) + bp : word16)
  Class: Eq_36
  DataType: uint16
  OrigDataType: uint16
T_37: (in 0x0001 : word16)
  Class: Eq_37
  DataType: uint16
  OrigDataType: uint16
T_38: (in SEQ(dx, ax_62) /u (bx_63 + 0x000A) + bp >>u 0x0001 : word16)
  Class: Eq_38
  DataType: uint16
  OrigDataType: uint16
T_39: (in (byte) (SEQ(dx, ax_62) /u (bx_63 + 0x000A) + bp >>u 0x0001) : byte)
  Class: Eq_39
  DataType: byte
  OrigDataType: byte
T_40: (in 0x3F : byte)
  Class: Eq_40
  DataType: byte
  OrigDataType: byte
T_41: (in (byte) (SEQ(dx, ax_62) /u (bx_63 + 0x000A) + bp >>u 0x0001) & 0x3F : byte)
  Class: Eq_41
  DataType: byte
  OrigDataType: byte
T_42: (in 0x20 : byte)
  Class: Eq_42
  DataType: byte
  OrigDataType: byte
T_43: (in ((byte) (SEQ(dx, ax_62) /u (bx_63 + 0x000A) + bp >>u 0x0001) & 0x3F) + 0x20 : byte)
  Class: Eq_43
  DataType: byte
  OrigDataType: byte
T_44: (in 0xA000 : selector)
  Class: Eq_44
  DataType: (ptr Eq_44)
  OrigDataType: (ptr (segment))
T_45: (in di : (memptr (ptr Eq_44) byte))
  Class: Eq_45
  DataType: (memptr (ptr Eq_44) byte)
  OrigDataType: (memptr T_44 (struct 0001 (0 T_48 t0000)))
T_46: (in 0x0000 : word16)
  Class: Eq_46
  DataType: word16
  OrigDataType: word16
T_47: (in di + 0x0000 : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_48: (in Mem79[0xA000:di + 0x0000:byte] : byte)
  Class: Eq_43
  DataType: byte
  OrigDataType: byte
T_49: (in 0x0001 : word16)
  Class: Eq_49
  DataType: word16
  OrigDataType: word16
T_50: (in di + 0x0001 : word16)
  Class: Eq_45
  DataType: (memptr (ptr Eq_44) byte)
  OrigDataType: word16
T_51: (in cx : word16)
  Class: Eq_51
  DataType: word16
  OrigDataType: word16
T_52: (in 0x0001 : word16)
  Class: Eq_52
  DataType: word16
  OrigDataType: word16
T_53: (in cx - 0x0001 : word16)
  Class: Eq_51
  DataType: word16
  OrigDataType: word16
T_54: (in 0x0000 : word16)
  Class: Eq_51
  DataType: word16
  OrigDataType: word16
T_55: (in cx != 0x0000 : bool)
  Class: Eq_55
  DataType: bool
  OrigDataType: bool
T_56: (in 0x00A0 : word16)
  Class: Eq_56
  DataType: word16
  OrigDataType: word16
T_57: (in dx_ax_43 : int32)
  Class: Eq_57
  DataType: int32
  OrigDataType: int32
T_58: (in 0x0140 : word16)
  Class: Eq_58
  DataType: word16
  OrigDataType: word16
T_59: (in dx_ax_43 % 0x0140 : uint16)
  Class: Eq_59
  DataType: uint16
  OrigDataType: uint16
T_60: (in 0x00A0 - dx_ax_43 % 0x0140 : word16)
  Class: Eq_13
  DataType: int16
  OrigDataType: word16
T_61: (in SEQ(dx, di) : int32)
  Class: Eq_57
  DataType: int32
  OrigDataType: int32
T_62: (in dx_ax_43 % 0x0140 : uint16)
  Class: Eq_62
  DataType: uint16
  OrigDataType: uint16
T_63: (in SEQ(dx_ax_43 % 0x0140, di) : int32)
  Class: Eq_8
  DataType: Eq_8
  OrigDataType: int32
T_64: (in dx_ax_43 % 0x0140 : uint16)
  Class: Eq_64
  DataType: uint16
  OrigDataType: uint16
T_65: (in dx_ax_43 % 0x0140 - 0x00A0 : word16)
  Class: Eq_13
  DataType: int16
  OrigDataType: word16
T_66: (in 0x0000 : word16)
  Class: Eq_13
  DataType: int16
  OrigDataType: int16
T_67: (in dx_51 > 0x0000 : bool)
  Class: Eq_67
  DataType: bool
  OrigDataType: bool
T_68: (in __inb : ptr32)
  Class: Eq_68
  DataType: (ptr Eq_68)
  OrigDataType: (ptr (fn T_70 (T_69)))
T_69: (in 0x60 : byte)
  Class: Eq_69
  DataType: byte
  OrigDataType: byte
T_70: (in __inb(0x60) : byte)
  Class: Eq_70
  DataType: byte
  OrigDataType: byte
T_71: (in 0x01 : byte)
  Class: Eq_70
  DataType: byte
  OrigDataType: byte
T_72: (in __inb(0x60) != 0x01 : bool)
  Class: Eq_72
  DataType: bool
  OrigDataType: bool
T_73: (in 0x0001 : word16)
  Class: Eq_73
  DataType: word16
  OrigDataType: word16
T_74: (in bp + 0x0001 : word16)
  Class: Eq_35
  DataType: word16
  OrigDataType: word16
*/
typedef Eq_44 Eq_1struct Globals {
	Eq_44 * ptrFFFA0000;	// FFFA0000
} Eq_1;

typedef void (Eq_2)(byte);

typedef union Eq_8 {
	int32 u0;
	uint32 u1;
} Eq_8;

typedef union Eq_32 {
	int32 u0;
	uint32 u1;
} Eq_32;

typedef struct Eq_44 {
} Eq_44;

typedef byte (Eq_68)(byte);

