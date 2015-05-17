// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_173/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_51) ptrFFFA0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
	T_80 (in bios_video_set_mode : ptr32)
Eq_7: (fn void (word16, byte))
	T_7 (in __outb : ptr32)
Eq_15: (fn void (word16, byte))
	T_15 (in __outb : ptr32)
Eq_19: (fn void (word16, byte))
	T_19 (in __outb : ptr32)
Eq_31: (union "Eq_31" (int16 u0) (uint16 u1))
	T_31 (in ax_41 : Eq_31)
	T_32 (in 0x0064 : word16)
	T_69 (in SEQ(dx_39, di_18) /u ds->w0157 : uint16)
Eq_35: (union "Eq_35" (int16 u0) (uint16 u1))
	T_35 (in dx_39 : Eq_35)
	T_66 (in SEQ(0x0000, di_18) % ds->w0157 : uint16)
	T_71 (in 0x00A0 : word16)
Eq_51: (segment "Eq_51" (0 byte b0000))
	T_51 (in 0xA000 : selector)
Eq_63: (segment "Eq_63" (157 uint16 w0157))
	T_63 (in ds : (ptr Eq_63))
Eq_75: (fn word16 (byte))
	T_75 (in __inw : ptr32)
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
T_7: (in __outb : ptr32)
  Class: Eq_7
  DataType: (ptr Eq_7)
  OrigDataType: (ptr (fn T_11 (T_8, T_10)))
T_8: (in 0x03C9 : word16)
  Class: Eq_8
  DataType: word16
  OrigDataType: word16
T_9: (in cx : uint16)
  Class: Eq_9
  DataType: uint16
  OrigDataType: uint16
T_10: (in (byte) cx : byte)
  Class: Eq_10
  DataType: byte
  OrigDataType: byte
T_11: (in __outb(0x03C9, (byte) cx) : void)
  Class: Eq_11
  DataType: void
  OrigDataType: void
T_12: (in ax_12 : uint16)
  Class: Eq_12
  DataType: uint16
  OrigDataType: uint16
T_13: (in 0x0001 : word16)
  Class: Eq_13
  DataType: uint16
  OrigDataType: uint16
T_14: (in cx >>u 0x0001 : word16)
  Class: Eq_12
  DataType: uint16
  OrigDataType: uint16
T_15: (in __outb : ptr32)
  Class: Eq_15
  DataType: (ptr Eq_15)
  OrigDataType: (ptr (fn T_18 (T_16, T_17)))
T_16: (in 0x03C9 : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_17: (in (byte) ax_12 : byte)
  Class: Eq_17
  DataType: byte
  OrigDataType: byte
T_18: (in __outb(0x03C9, (byte) ax_12) : void)
  Class: Eq_18
  DataType: void
  OrigDataType: void
T_19: (in __outb : ptr32)
  Class: Eq_19
  DataType: (ptr Eq_19)
  OrigDataType: (ptr (fn T_24 (T_20, T_23)))
T_20: (in 0x03C9 : word16)
  Class: Eq_20
  DataType: word16
  OrigDataType: word16
T_21: (in 0x0001 : word16)
  Class: Eq_21
  DataType: uint16
  OrigDataType: uint16
T_22: (in ax_12 >>u 0x0001 : word16)
  Class: Eq_22
  DataType: uint16
  OrigDataType: uint16
T_23: (in (byte) (ax_12 >>u 0x0001) : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_24: (in __outb(0x03C9, (byte) (ax_12 >>u 0x0001)) : void)
  Class: Eq_24
  DataType: void
  OrigDataType: void
T_25: (in 0x0001 : word16)
  Class: Eq_25
  DataType: word16
  OrigDataType: word16
T_26: (in cx - 0x0001 : word16)
  Class: Eq_9
  DataType: uint16
  OrigDataType: word16
T_27: (in 0x0000 : word16)
  Class: Eq_9
  DataType: uint16
  OrigDataType: word16
T_28: (in cx != 0x0000 : bool)
  Class: Eq_28
  DataType: bool
  OrigDataType: bool
T_29: (in di_18 : (memptr (ptr Eq_51) byte))
  Class: Eq_29
  DataType: (memptr (ptr Eq_51) byte)
  OrigDataType: (memptr T_51 (struct 0001 (0 T_54 t0000)))
T_30: (in 0x0000 : word16)
  Class: Eq_29
  DataType: (memptr (ptr Eq_51) byte)
  OrigDataType: word16
T_31: (in ax_41 : Eq_31)
  Class: Eq_31
  DataType: Eq_31
  OrigDataType: int16
T_32: (in 0x0064 : word16)
  Class: Eq_31
  DataType: int16
  OrigDataType: int16
T_33: (in ax_41 <= 0x0064 : bool)
  Class: Eq_33
  DataType: bool
  OrigDataType: bool
T_34: (in 0x00A0 : word16)
  Class: Eq_34
  DataType: word16
  OrigDataType: word16
T_35: (in dx_39 : Eq_35)
  Class: Eq_35
  DataType: Eq_35
  OrigDataType: int16
T_36: (in 0x00A0 - dx_39 : word16)
  Class: Eq_36
  DataType: int16
  OrigDataType: word16
T_37: (in dx_104 : int16)
  Class: Eq_36
  DataType: int16
  OrigDataType: int16
T_38: (in 0x0039 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_39: (in ax_41 - 0x0039 : word16)
  Class: Eq_39
  DataType: int16
  OrigDataType: int16
T_40: (in 0x0007 : word16)
  Class: Eq_40
  DataType: int16
  OrigDataType: int16
T_41: (in dx_104 *s 0x0007 : int16)
  Class: Eq_41
  DataType: int16
  OrigDataType: int16
T_42: (in 0x0002 : word16)
  Class: Eq_42
  DataType: uint16
  OrigDataType: uint16
T_43: (in dx_104 *s 0x0007 >> 0x0002 : word16)
  Class: Eq_39
  DataType: int16
  OrigDataType: int16
T_44: (in ax_41 - 0x0039 >= dx_104 *s 0x0007 >> 0x0002 : bool)
  Class: Eq_44
  DataType: bool
  OrigDataType: bool
T_45: (in ax_41 - 0x0039 : word16)
  Class: Eq_45
  DataType: word16
  OrigDataType: word16
T_46: (in bp : word16)
  Class: Eq_46
  DataType: word16
  OrigDataType: word16
T_47: (in ax_41 - 0x0039 + bp : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_48: (in dx_104 + bp : word16)
  Class: Eq_48
  DataType: word16
  OrigDataType: word16
T_49: (in ax_41 - 0x0039 + bp ^ dx_104 + bp : word16)
  Class: Eq_49
  DataType: word16
  OrigDataType: word16
T_50: (in (byte) (ax_41 - 0x0039 + bp ^ dx_104 + bp) : byte)
  Class: Eq_50
  DataType: byte
  OrigDataType: byte
T_51: (in 0xA000 : selector)
  Class: Eq_51
  DataType: (ptr Eq_51)
  OrigDataType: (ptr (segment))
T_52: (in 0x0000 : word16)
  Class: Eq_52
  DataType: word16
  OrigDataType: word16
T_53: (in di_18 + 0x0000 : word16)
  Class: Eq_53
  DataType: word16
  OrigDataType: word16
T_54: (in Mem95[0xA000:di_18 + 0x0000:byte] : byte)
  Class: Eq_50
  DataType: byte
  OrigDataType: byte
T_55: (in 0x0001 : word16)
  Class: Eq_55
  DataType: word16
  OrigDataType: word16
T_56: (in di_18 + 0x0001 : word16)
  Class: Eq_29
  DataType: (memptr (ptr Eq_51) byte)
  OrigDataType: word16
T_57: (in 0x0001 : word16)
  Class: Eq_57
  DataType: word16
  OrigDataType: word16
T_58: (in cx - 0x0001 : word16)
  Class: Eq_9
  DataType: uint16
  OrigDataType: word16
T_59: (in 0x0000 : word16)
  Class: Eq_9
  DataType: uint16
  OrigDataType: word16
T_60: (in cx != 0x0000 : bool)
  Class: Eq_60
  DataType: bool
  OrigDataType: bool
T_61: (in 0x0000 : word16)
  Class: Eq_61
  DataType: word16
  OrigDataType: word16
T_62: (in SEQ(0x0000, di_18) : word32)
  Class: Eq_62
  DataType: word32
  OrigDataType: word32
T_63: (in ds : (ptr Eq_63))
  Class: Eq_63
  DataType: (ptr Eq_63)
  OrigDataType: (ptr (segment (157 T_65 t0157)))
T_64: (in 0x0157 : word16)
  Class: Eq_64
  DataType: (memptr (ptr Eq_63) uint16)
  OrigDataType: (memptr T_63 (struct (0 T_65 t0000)))
T_65: (in Mem0[ds:0x0157:word16] : word16)
  Class: Eq_65
  DataType: uint16
  OrigDataType: word16
T_66: (in SEQ(0x0000, di_18) % ds->w0157 : uint16)
  Class: Eq_35
  DataType: Eq_35
  OrigDataType: uint16
T_67: (in SEQ(dx_39, di_18) : word32)
  Class: Eq_67
  DataType: uint32
  OrigDataType: uint32
T_68: (in Mem0[ds:0x0157:word16] : word16)
  Class: Eq_65
  DataType: uint16
  OrigDataType: uint16
T_69: (in SEQ(dx_39, di_18) /u ds->w0157 : uint16)
  Class: Eq_31
  DataType: Eq_31
  OrigDataType: uint16
T_70: (in dx_39 - 0x00A0 : word16)
  Class: Eq_36
  DataType: int16
  OrigDataType: word16
T_71: (in 0x00A0 : word16)
  Class: Eq_35
  DataType: int16
  OrigDataType: int16
T_72: (in dx_39 > 0x00A0 : bool)
  Class: Eq_72
  DataType: bool
  OrigDataType: bool
T_73: (in 0x0001 : word16)
  Class: Eq_73
  DataType: word16
  OrigDataType: word16
T_74: (in bp + 0x0001 : word16)
  Class: Eq_46
  DataType: word16
  OrigDataType: word16
T_75: (in __inw : ptr32)
  Class: Eq_75
  DataType: (ptr Eq_75)
  OrigDataType: (ptr (fn T_77 (T_76)))
T_76: (in 0x60 : byte)
  Class: Eq_76
  DataType: byte
  OrigDataType: byte
T_77: (in __inw(0x60) : word16)
  Class: Eq_77
  DataType: word16
  OrigDataType: word16
T_78: (in 0x0001 : word16)
  Class: Eq_77
  DataType: word16
  OrigDataType: word16
T_79: (in __inw(0x60) != 0x0001 : bool)
  Class: Eq_79
  DataType: bool
  OrigDataType: bool
T_80: (in bios_video_set_mode : ptr32)
  Class: Eq_2
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (fn T_82 (T_81)))
T_81: (in 0x03 : byte)
  Class: Eq_4
  DataType: byte
  OrigDataType: byte
T_82: (in bios_video_set_mode(0x03) : void)
  Class: Eq_6
  DataType: void
  OrigDataType: void
*/
typedef Eq_51 Eq_1struct Globals {
	Eq_51 * ptrFFFA0000;	// FFFA0000
} Eq_1;

typedef void (Eq_2)(byte);

typedef void (Eq_7)(word16, byte);

typedef void (Eq_15)(word16, byte);

typedef void (Eq_19)(word16, byte);

typedef union Eq_31 {
	int16 u0;
	uint16 u1;
} Eq_31;

typedef union Eq_35 {
	int16 u0;
	uint16 u1;
} Eq_35;

typedef struct Eq_51 {
	byte b0000;	// 0
} Eq_51;

typedef struct Eq_63 {
	uint16 w0157;	// 157
} Eq_63;

typedef word16 (Eq_75)(byte);

