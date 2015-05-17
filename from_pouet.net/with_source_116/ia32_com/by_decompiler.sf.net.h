// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_116/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_7: (union "Eq_7" (ptr32 u0) (segptr32 u1))
	T_7 (in ds_bx_6 : ptr32)
	T_12 (in Mem0[ds:bx + 0x0000:segptr32] : segptr32)
Eq_8: (segment "Eq_8")
	T_8 (in ds : (ptr Eq_8))
Eq_13: (segment "Eq_13")
	T_13 (in ds_7 : (ptr Eq_13))
	T_14 (in SLICE(ds_bx_6, selector, 16) : selector)
Eq_17: (fn void (word16, byte))
	T_17 (in __outb : ptr32)
Eq_21: (fn void (word16, byte))
	T_21 (in __outb : ptr32)
Eq_24: (fn void (word16, byte))
	T_24 (in __outb : ptr32)
Eq_34: (union "Eq_34" (int8 u0) (uint16 u1))
	T_34 (in al_21 : Eq_34)
	T_41 (in cl >>u 0x01 : word16)
	T_45 (in 0x40 : byte)
Eq_53: (fn word64 ())
	T_53 (in __rdtsc : ptr32)
Eq_75: (fn byte (byte))
	T_75 (in __inb : ptr32)
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
T_7: (in ds_bx_6 : ptr32)
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
T_13: (in ds_7 : (ptr Eq_13))
  Class: Eq_13
  DataType: (ptr Eq_13)
  OrigDataType: (ptr (segment))
T_14: (in SLICE(ds_bx_6, selector, 16) : selector)
  Class: Eq_13
  DataType: (ptr Eq_13)
  OrigDataType: (ptr (segment))
T_15: (in bx_36 : int16)
  Class: Eq_15
  DataType: int16
  OrigDataType: int16
T_16: (in (word16) ds_bx_6 : word16)
  Class: Eq_15
  DataType: int16
  OrigDataType: word16
T_17: (in __outb : ptr32)
  Class: Eq_17
  DataType: (ptr Eq_17)
  OrigDataType: (ptr (fn T_20 (T_18, T_19)))
T_18: (in 0x03C9 : word16)
  Class: Eq_18
  DataType: word16
  OrigDataType: word16
T_19: (in al_22 : byte)
  Class: Eq_19
  DataType: byte
  OrigDataType: byte
T_20: (in __outb(0x03C9, al_22) : void)
  Class: Eq_20
  DataType: void
  OrigDataType: void
T_21: (in __outb : ptr32)
  Class: Eq_21
  DataType: (ptr Eq_21)
  OrigDataType: (ptr (fn T_23 (T_22, T_19)))
T_22: (in 0x03C9 : word16)
  Class: Eq_22
  DataType: word16
  OrigDataType: word16
T_23: (in __outb(0x03C9, al_22) : void)
  Class: Eq_23
  DataType: void
  OrigDataType: void
T_24: (in __outb : ptr32)
  Class: Eq_24
  DataType: (ptr Eq_24)
  OrigDataType: (ptr (fn T_26 (T_25, T_19)))
T_25: (in 0x03C9 : word16)
  Class: Eq_25
  DataType: word16
  OrigDataType: word16
T_26: (in __outb(0x03C9, al_22) : void)
  Class: Eq_26
  DataType: void
  OrigDataType: void
T_27: (in cx : int16)
  Class: Eq_27
  DataType: int16
  OrigDataType: int16
T_28: (in 0x0001 : word16)
  Class: Eq_28
  DataType: word16
  OrigDataType: word16
T_29: (in cx - 0x0001 : word16)
  Class: Eq_27
  DataType: int16
  OrigDataType: word16
T_30: (in (byte) cx : byte)
  Class: Eq_30
  DataType: uint8
  OrigDataType: byte
T_31: (in cl : byte)
  Class: Eq_30
  DataType: uint8
  OrigDataType: uint8
T_32: (in 0x0000 : word16)
  Class: Eq_27
  DataType: int16
  OrigDataType: word16
T_33: (in cx != 0x0000 : bool)
  Class: Eq_33
  DataType: bool
  OrigDataType: bool
T_34: (in al_21 : Eq_34)
  Class: Eq_34
  DataType: Eq_34
  OrigDataType: int8
T_35: (in 0x40 : byte)
  Class: Eq_35
  DataType: byte
  OrigDataType: byte
T_36: (in al_21 - 0x40 : byte)
  Class: Eq_36
  DataType: byte
  OrigDataType: byte
T_37: (in ~(al_21 - 0x40) : byte)
  Class: Eq_19
  DataType: byte
  OrigDataType: byte
T_38: (in ax : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_39: (in DPB(ax, al_22, 0, 8) : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_40: (in 0x01 : byte)
  Class: Eq_40
  DataType: uint8
  OrigDataType: uint8
T_41: (in cl >>u 0x01 : word16)
  Class: Eq_34
  DataType: Eq_34
  OrigDataType: uint16
T_42: (in al_21 - 0x40 : byte)
  Class: Eq_19
  DataType: byte
  OrigDataType: byte
T_43: (in al_21 - 0x40 : byte)
  Class: Eq_43
  DataType: byte
  OrigDataType: byte
T_44: (in DPB(ax, al_21 - 0x40, 0, 8) : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_45: (in 0x40 : byte)
  Class: Eq_34
  DataType: int8
  OrigDataType: int8
T_46: (in al_21 < 0x40 : bool)
  Class: Eq_46
  DataType: bool
  OrigDataType: bool
T_47: (in cx_40 : int16)
  Class: Eq_47
  DataType: int16
  OrigDataType: int16
T_48: (in cx - bx_36 : word16)
  Class: Eq_47
  DataType: int16
  OrigDataType: word16
T_49: (in 0x0001 : word16)
  Class: Eq_49
  DataType: uint16
  OrigDataType: uint16
T_50: (in cx_40 >> 0x0001 : word16)
  Class: Eq_27
  DataType: int16
  OrigDataType: int16
T_51: (in cx_40 >> 0x0001 : word16)
  Class: Eq_51
  DataType: int16
  OrigDataType: int16
T_52: (in bx_36 + (cx_40 >> 0x0001) : word16)
  Class: Eq_15
  DataType: int16
  OrigDataType: word16
T_53: (in __rdtsc : ptr32)
  Class: Eq_53
  DataType: (ptr Eq_53)
  OrigDataType: (ptr (fn T_54 ()))
T_54: (in __rdtsc() : word64)
  Class: Eq_54
  DataType: word64
  OrigDataType: word64
T_55: (in (byte) __rdtsc() : byte)
  Class: Eq_55
  DataType: byte
  OrigDataType: byte
T_56: (in 0x04 : byte)
  Class: Eq_56
  DataType: byte
  OrigDataType: byte
T_57: (in (byte) __rdtsc() & 0x04 : byte)
  Class: Eq_57
  DataType: byte
  OrigDataType: byte
T_58: (in 0x00 : byte)
  Class: Eq_57
  DataType: byte
  OrigDataType: byte
T_59: (in ((byte) __rdtsc() & 0x04) == 0x00 : bool)
  Class: Eq_59
  DataType: bool
  OrigDataType: bool
T_60: (in di_56 : (memptr (ptr Eq_13) byte))
  Class: Eq_60
  DataType: (memptr (ptr Eq_13) byte)
  OrigDataType: (memptr T_13 (struct (0 T_68 t0000)))
T_61: (in 0xFEC0 : word16)
  Class: Eq_61
  DataType: int16
  OrigDataType: int16
T_62: (in bx_36 *s 0xFEC0 : int16)
  Class: Eq_62
  DataType: int16
  OrigDataType: int16
T_63: (in 0xBBF4 : word16)
  Class: Eq_63
  DataType: word16
  OrigDataType: word16
T_64: (in bx_36 *s 0xFEC0 + 0xBBF4 : word16)
  Class: Eq_64
  DataType: word16
  OrigDataType: word16
T_65: (in bx_36 *s 0xFEC0 + 0xBBF4 + cx : word16)
  Class: Eq_60
  DataType: (memptr (ptr Eq_13) byte)
  OrigDataType: word16
T_66: (in 0x0000 : word16)
  Class: Eq_66
  DataType: word16
  OrigDataType: word16
T_67: (in di_56 + 0x0000 : word16)
  Class: Eq_67
  DataType: word16
  OrigDataType: word16
T_68: (in Mem0[ds_7:di_56 + 0x0000:byte] : byte)
  Class: Eq_68
  DataType: byte
  OrigDataType: byte
T_69: (in 0x01 : byte)
  Class: Eq_69
  DataType: byte
  OrigDataType: byte
T_70: (in ds_7->*di_56 + 0x01 : byte)
  Class: Eq_68
  DataType: byte
  OrigDataType: byte
T_71: (in 0x0000 : word16)
  Class: Eq_71
  DataType: word16
  OrigDataType: word16
T_72: (in di_56 + 0x0000 : word16)
  Class: Eq_72
  DataType: word16
  OrigDataType: word16
T_73: (in Mem59[ds_7:di_56 + 0x0000:byte] : byte)
  Class: Eq_68
  DataType: byte
  OrigDataType: byte
T_74: (in ax_61 : word16)
  Class: Eq_74
  DataType: word16
  OrigDataType: word16
T_75: (in __inb : ptr32)
  Class: Eq_75
  DataType: (ptr Eq_75)
  OrigDataType: (ptr (fn T_77 (T_76)))
T_76: (in 0x60 : byte)
  Class: Eq_76
  DataType: byte
  OrigDataType: byte
T_77: (in __inb(0x60) : byte)
  Class: Eq_77
  DataType: byte
  OrigDataType: byte
T_78: (in DPB(ax, __inb(0x60), 0, 8) : word16)
  Class: Eq_74
  DataType: word16
  OrigDataType: word16
T_79: (in 0x0001 : word16)
  Class: Eq_79
  DataType: word16
  OrigDataType: word16
T_80: (in ax_61 - 0x0001 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_81: (in 0x0001 : word16)
  Class: Eq_74
  DataType: word16
  OrigDataType: word16
T_82: (in ax_61 != 0x0001 : bool)
  Class: Eq_82
  DataType: bool
  OrigDataType: bool
T_83: (in 0x0040 : word16)
  Class: Eq_83
  DataType: word16
  OrigDataType: word16
T_84: (in bx_36 + 0x0040 : word16)
  Class: Eq_27
  DataType: int16
  OrigDataType: word16
T_85: (in cx_40 >> 0x0001 : word16)
  Class: Eq_85
  DataType: int16
  OrigDataType: int16
T_86: (in -(cx_40 >> 0x0001) : word16)
  Class: Eq_86
  DataType: int16
  OrigDataType: int16
T_87: (in 0x0040 : word16)
  Class: Eq_87
  DataType: word16
  OrigDataType: word16
T_88: (in -(cx_40 >> 0x0001) + 0x0040 : word16)
  Class: Eq_15
  DataType: int16
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

typedef struct Eq_13 {
} Eq_13;

typedef void (Eq_17)(word16, byte);

typedef void (Eq_21)(word16, byte);

typedef void (Eq_24)(word16, byte);

typedef union Eq_34 {
	int8 u0;
	uint16 u1;
} Eq_34;

typedef word64 (Eq_53)();

typedef byte (Eq_75)(byte);

