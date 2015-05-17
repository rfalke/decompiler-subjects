// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_214/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_7: (fn void (word16, byte))
	T_7 (in __outb : ptr32)
Eq_17: (fn void (word16, int8))
	T_17 (in __outb : ptr32)
Eq_21: (fn void (word16, byte))
	T_21 (in __outb : ptr32)
Eq_25: (fn void (word16, byte))
	T_25 (in __outb : ptr32)
Eq_39: (fn void (word16, byte))
	T_39 (in __outb : ptr32)
Eq_43: (fn void (word16, byte))
	T_43 (in __outb : ptr32)
Eq_47: (fn void (word16, byte))
	T_47 (in __outb : ptr32)
Eq_62: (fn void (word16, byte))
	T_62 (in __outb : ptr32)
Eq_66: (fn void (word16, int8))
	T_66 (in __outb : ptr32)
Eq_70: (fn void (word16, byte))
	T_70 (in __outb : ptr32)
Eq_87: (fn void (word16, byte))
	T_87 (in __outb : ptr32)
Eq_90: (fn void (word16, byte))
	T_90 (in __outb : ptr32)
Eq_93: (fn void (word16, byte))
	T_93 (in __outb : ptr32)
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
  OrigDataType: (ptr (fn T_10 (T_8, T_9)))
T_8: (in 0x03C8 : word16)
  Class: Eq_8
  DataType: word16
  OrigDataType: word16
T_9: (in 0x00 : byte)
  Class: Eq_9
  DataType: byte
  OrigDataType: byte
T_10: (in __outb(0x03C8, 0x00) : void)
  Class: Eq_10
  DataType: void
  OrigDataType: void
T_11: (in cl_12 : int8)
  Class: Eq_11
  DataType: int8
  OrigDataType: int8
T_12: (in 0x40 : byte)
  Class: Eq_11
  DataType: int8
  OrigDataType: byte
T_13: (in cx_10 : word16)
  Class: Eq_13
  DataType: word16
  OrigDataType: word16
T_14: (in cx : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_15: (in 0x40 : byte)
  Class: Eq_15
  DataType: byte
  OrigDataType: byte
T_16: (in DPB(cx, 0x40, 0, 8) : word16)
  Class: Eq_13
  DataType: word16
  OrigDataType: word16
T_17: (in __outb : ptr32)
  Class: Eq_17
  DataType: (ptr Eq_17)
  OrigDataType: (ptr (fn T_20 (T_18, T_19)))
T_18: (in 0x03C9 : word16)
  Class: Eq_18
  DataType: word16
  OrigDataType: word16
T_19: (in -cl_12 : byte)
  Class: Eq_19
  DataType: int8
  OrigDataType: int8
T_20: (in __outb(0x03C9, -cl_12) : void)
  Class: Eq_20
  DataType: void
  OrigDataType: void
T_21: (in __outb : ptr32)
  Class: Eq_21
  DataType: (ptr Eq_21)
  OrigDataType: (ptr (fn T_24 (T_22, T_23)))
T_22: (in 0x03C9 : word16)
  Class: Eq_22
  DataType: word16
  OrigDataType: word16
T_23: (in 0x00 : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_24: (in __outb(0x03C9, 0x00) : void)
  Class: Eq_24
  DataType: void
  OrigDataType: void
T_25: (in __outb : ptr32)
  Class: Eq_25
  DataType: (ptr Eq_25)
  OrigDataType: (ptr (fn T_28 (T_26, T_27)))
T_26: (in 0x03C9 : word16)
  Class: Eq_26
  DataType: word16
  OrigDataType: word16
T_27: (in 0x00 : byte)
  Class: Eq_27
  DataType: byte
  OrigDataType: byte
T_28: (in __outb(0x03C9, 0x00) : void)
  Class: Eq_28
  DataType: void
  OrigDataType: void
T_29: (in 0x0001 : word16)
  Class: Eq_29
  DataType: word16
  OrigDataType: word16
T_30: (in cx_10 - 0x0001 : word16)
  Class: Eq_13
  DataType: word16
  OrigDataType: word16
T_31: (in (byte) cx_10 : byte)
  Class: Eq_11
  DataType: int8
  OrigDataType: byte
T_32: (in 0x0000 : word16)
  Class: Eq_13
  DataType: word16
  OrigDataType: word16
T_33: (in cx_10 != 0x0000 : bool)
  Class: Eq_33
  DataType: bool
  OrigDataType: bool
T_34: (in cl_21 : byte)
  Class: Eq_34
  DataType: byte
  OrigDataType: byte
T_35: (in 0x40 : byte)
  Class: Eq_34
  DataType: byte
  OrigDataType: byte
T_36: (in cx_22 : word16)
  Class: Eq_36
  DataType: word16
  OrigDataType: word16
T_37: (in 0x40 : byte)
  Class: Eq_37
  DataType: byte
  OrigDataType: byte
T_38: (in DPB(cx_10, 0x40, 0, 8) : word16)
  Class: Eq_36
  DataType: word16
  OrigDataType: word16
T_39: (in __outb : ptr32)
  Class: Eq_39
  DataType: (ptr Eq_39)
  OrigDataType: (ptr (fn T_42 (T_40, T_41)))
T_40: (in 0x03C9 : word16)
  Class: Eq_40
  DataType: word16
  OrigDataType: word16
T_41: (in 0x00 : byte)
  Class: Eq_41
  DataType: byte
  OrigDataType: byte
T_42: (in __outb(0x03C9, 0x00) : void)
  Class: Eq_42
  DataType: void
  OrigDataType: void
T_43: (in __outb : ptr32)
  Class: Eq_43
  DataType: (ptr Eq_43)
  OrigDataType: (ptr (fn T_46 (T_44, T_45)))
T_44: (in 0x03C9 : word16)
  Class: Eq_44
  DataType: word16
  OrigDataType: word16
T_45: (in 0x00 : byte)
  Class: Eq_45
  DataType: byte
  OrigDataType: byte
T_46: (in __outb(0x03C9, 0x00) : void)
  Class: Eq_46
  DataType: void
  OrigDataType: void
T_47: (in __outb : ptr32)
  Class: Eq_47
  DataType: (ptr Eq_47)
  OrigDataType: (ptr (fn T_51 (T_48, T_50)))
T_48: (in 0x03C9 : word16)
  Class: Eq_48
  DataType: word16
  OrigDataType: word16
T_49: (in 0x01 : byte)
  Class: Eq_49
  DataType: byte
  OrigDataType: byte
T_50: (in cl_21 - 0x01 : byte)
  Class: Eq_50
  DataType: byte
  OrigDataType: byte
T_51: (in __outb(0x03C9, cl_21 - 0x01) : void)
  Class: Eq_51
  DataType: void
  OrigDataType: void
T_52: (in 0x0001 : word16)
  Class: Eq_52
  DataType: word16
  OrigDataType: word16
T_53: (in cx_22 - 0x0001 : word16)
  Class: Eq_36
  DataType: word16
  OrigDataType: word16
T_54: (in (byte) cx_22 : byte)
  Class: Eq_34
  DataType: byte
  OrigDataType: byte
T_55: (in 0x0000 : word16)
  Class: Eq_36
  DataType: word16
  OrigDataType: word16
T_56: (in cx_22 != 0x0000 : bool)
  Class: Eq_56
  DataType: bool
  OrigDataType: bool
T_57: (in cl_33 : int8)
  Class: Eq_57
  DataType: int8
  OrigDataType: int8
T_58: (in 0x40 : byte)
  Class: Eq_57
  DataType: int8
  OrigDataType: byte
T_59: (in cx_34 : word16)
  Class: Eq_59
  DataType: word16
  OrigDataType: word16
T_60: (in 0x40 : byte)
  Class: Eq_60
  DataType: byte
  OrigDataType: byte
T_61: (in DPB(cx_22, 0x40, 0, 8) : word16)
  Class: Eq_59
  DataType: word16
  OrigDataType: word16
T_62: (in __outb : ptr32)
  Class: Eq_62
  DataType: (ptr Eq_62)
  OrigDataType: (ptr (fn T_65 (T_63, T_64)))
T_63: (in 0x03C9 : word16)
  Class: Eq_63
  DataType: word16
  OrigDataType: word16
T_64: (in 0x00 : byte)
  Class: Eq_64
  DataType: byte
  OrigDataType: byte
T_65: (in __outb(0x03C9, 0x00) : void)
  Class: Eq_65
  DataType: void
  OrigDataType: void
T_66: (in __outb : ptr32)
  Class: Eq_66
  DataType: (ptr Eq_66)
  OrigDataType: (ptr (fn T_69 (T_67, T_68)))
T_67: (in 0x03C9 : word16)
  Class: Eq_67
  DataType: word16
  OrigDataType: word16
T_68: (in -cl_33 : byte)
  Class: Eq_68
  DataType: int8
  OrigDataType: int8
T_69: (in __outb(0x03C9, -cl_33) : void)
  Class: Eq_69
  DataType: void
  OrigDataType: void
T_70: (in __outb : ptr32)
  Class: Eq_70
  DataType: (ptr Eq_70)
  OrigDataType: (ptr (fn T_73 (T_71, T_72)))
T_71: (in 0x03C9 : word16)
  Class: Eq_71
  DataType: word16
  OrigDataType: word16
T_72: (in 0x00 : byte)
  Class: Eq_72
  DataType: byte
  OrigDataType: byte
T_73: (in __outb(0x03C9, 0x00) : void)
  Class: Eq_73
  DataType: void
  OrigDataType: void
T_74: (in 0x0001 : word16)
  Class: Eq_74
  DataType: word16
  OrigDataType: word16
T_75: (in cx_34 - 0x0001 : word16)
  Class: Eq_59
  DataType: word16
  OrigDataType: word16
T_76: (in (byte) cx_34 : byte)
  Class: Eq_57
  DataType: int8
  OrigDataType: byte
T_77: (in 0x0000 : word16)
  Class: Eq_59
  DataType: word16
  OrigDataType: word16
T_78: (in cx_34 != 0x0000 : bool)
  Class: Eq_78
  DataType: bool
  OrigDataType: bool
T_79: (in cl_46 : byte)
  Class: Eq_79
  DataType: byte
  OrigDataType: byte
T_80: (in 0x40 : byte)
  Class: Eq_79
  DataType: byte
  OrigDataType: byte
T_81: (in cx_47 : word16)
  Class: Eq_81
  DataType: word16
  OrigDataType: word16
T_82: (in 0x40 : byte)
  Class: Eq_82
  DataType: byte
  OrigDataType: byte
T_83: (in DPB(cx_34, 0x40, 0, 8) : word16)
  Class: Eq_81
  DataType: word16
  OrigDataType: word16
T_84: (in al_51 : byte)
  Class: Eq_84
  DataType: byte
  OrigDataType: byte
T_85: (in 0x01 : byte)
  Class: Eq_85
  DataType: byte
  OrigDataType: byte
T_86: (in cl_46 - 0x01 : byte)
  Class: Eq_84
  DataType: byte
  OrigDataType: byte
T_87: (in __outb : ptr32)
  Class: Eq_87
  DataType: (ptr Eq_87)
  OrigDataType: (ptr (fn T_89 (T_88, T_84)))
T_88: (in 0x03C9 : word16)
  Class: Eq_88
  DataType: word16
  OrigDataType: word16
T_89: (in __outb(0x03C9, al_51) : void)
  Class: Eq_89
  DataType: void
  OrigDataType: void
T_90: (in __outb : ptr32)
  Class: Eq_90
  DataType: (ptr Eq_90)
  OrigDataType: (ptr (fn T_92 (T_91, T_84)))
T_91: (in 0x03C9 : word16)
  Class: Eq_91
  DataType: word16
  OrigDataType: word16
T_92: (in __outb(0x03C9, al_51) : void)
  Class: Eq_92
  DataType: void
  OrigDataType: void
T_93: (in __outb : ptr32)
  Class: Eq_93
  DataType: (ptr Eq_93)
  OrigDataType: (ptr (fn T_96 (T_94, T_95)))
T_94: (in 0x03C9 : word16)
  Class: Eq_94
  DataType: word16
  OrigDataType: word16
T_95: (in 0x00 : byte)
  Class: Eq_95
  DataType: byte
  OrigDataType: byte
T_96: (in __outb(0x03C9, 0x00) : void)
  Class: Eq_96
  DataType: void
  OrigDataType: void
T_97: (in 0x0001 : word16)
  Class: Eq_97
  DataType: word16
  OrigDataType: word16
T_98: (in cx_47 - 0x0001 : word16)
  Class: Eq_81
  DataType: word16
  OrigDataType: word16
T_99: (in (byte) cx_47 : byte)
  Class: Eq_79
  DataType: byte
  OrigDataType: byte
T_100: (in 0x0000 : word16)
  Class: Eq_81
  DataType: word16
  OrigDataType: word16
T_101: (in cx_47 != 0x0000 : bool)
  Class: Eq_101
  DataType: bool
  OrigDataType: bool
*/
typedef struct Globals {
} Eq_1;

typedef void (Eq_2)(byte);

typedef void (Eq_7)(word16, byte);

typedef void (Eq_17)(word16, int8);

typedef void (Eq_21)(word16, byte);

typedef void (Eq_25)(word16, byte);

typedef void (Eq_39)(word16, byte);

typedef void (Eq_43)(word16, byte);

typedef void (Eq_47)(word16, byte);

typedef void (Eq_62)(word16, byte);

typedef void (Eq_66)(word16, int8);

typedef void (Eq_70)(word16, byte);

typedef void (Eq_87)(word16, byte);

typedef void (Eq_90)(word16, byte);

typedef void (Eq_93)(word16, byte);

