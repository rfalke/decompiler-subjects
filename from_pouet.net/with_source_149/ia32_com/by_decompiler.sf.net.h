// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_149/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_37) ptrFFFA0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_7: (fn void (word16, byte))
	T_7 (in __outb : ptr32)
Eq_21: (fn void (word16, byte))
	T_21 (in __outb : ptr32)
Eq_24: (fn void (word16, byte))
	T_24 (in __outb : ptr32)
Eq_27: (fn void (word16, byte))
	T_27 (in __outb : ptr32)
Eq_37: (segment "Eq_37" (0 byte b0000))
	T_37 (in 0xA000 : selector)
	T_42 (in Mem52[ss:fp - 0x0006:word16] : word16)
Eq_38: (segment "Eq_38")
	T_38 (in ss : selector)
Eq_39: (union "Eq_39" (ptr16 u0) ((memptr (ptr Eq_38) Eq_124) u1))
	T_39 (in fp : ptr16)
Eq_71: (segment "Eq_71" (179 uint16 w0179) (17B word16 w017B) (17D word16 w017D))
	T_71 (in ds : (ptr Eq_71))
Eq_94: (fn byte (byte))
	T_94 (in __inb : ptr32)
Eq_124: (struct "Eq_124" (FFFFFFFA (ptr Eq_37) ptrFFFFFFFA))
	T_124
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
T_11: (in di_118 : (memptr (ptr Eq_37) byte))
  Class: Eq_11
  DataType: (memptr (ptr Eq_37) byte)
  OrigDataType: (memptr T_37 (struct 0001 (0 T_109 t0000)))
T_12: (in 0x0000 : word16)
  Class: Eq_11
  DataType: (memptr (ptr Eq_37) byte)
  OrigDataType: word16
T_13: (in ax_18 : word16)
  Class: Eq_13
  DataType: word16
  OrigDataType: word16
T_14: (in 0x0000 : word16)
  Class: Eq_13
  DataType: word16
  OrigDataType: word16
T_15: (in al_10 : byte)
  Class: Eq_15
  DataType: byte
  OrigDataType: byte
T_16: (in 0x00 : byte)
  Class: Eq_15
  DataType: byte
  OrigDataType: byte
T_17: (in cx_122 : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_18: (in cx : word16)
  Class: Eq_18
  DataType: word16
  OrigDataType: word16
T_19: (in 0x40 : byte)
  Class: Eq_19
  DataType: byte
  OrigDataType: byte
T_20: (in DPB(cx, 0x40, 0, 8) : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_21: (in __outb : ptr32)
  Class: Eq_21
  DataType: (ptr Eq_21)
  OrigDataType: (ptr (fn T_23 (T_22, T_15)))
T_22: (in 0x03C9 : word16)
  Class: Eq_22
  DataType: word16
  OrigDataType: word16
T_23: (in __outb(0x03C9, al_10) : void)
  Class: Eq_23
  DataType: void
  OrigDataType: void
T_24: (in __outb : ptr32)
  Class: Eq_24
  DataType: (ptr Eq_24)
  OrigDataType: (ptr (fn T_26 (T_25, T_15)))
T_25: (in 0x03C9 : word16)
  Class: Eq_25
  DataType: word16
  OrigDataType: word16
T_26: (in __outb(0x03C9, al_10) : void)
  Class: Eq_26
  DataType: void
  OrigDataType: void
T_27: (in __outb : ptr32)
  Class: Eq_27
  DataType: (ptr Eq_27)
  OrigDataType: (ptr (fn T_29 (T_28, T_15)))
T_28: (in 0x03C9 : word16)
  Class: Eq_28
  DataType: word16
  OrigDataType: word16
T_29: (in __outb(0x03C9, al_10) : void)
  Class: Eq_29
  DataType: void
  OrigDataType: void
T_30: (in 0x0001 : word16)
  Class: Eq_30
  DataType: word16
  OrigDataType: word16
T_31: (in ax_18 + 0x0001 : word16)
  Class: Eq_13
  DataType: word16
  OrigDataType: word16
T_32: (in (byte) ax_18 : byte)
  Class: Eq_15
  DataType: byte
  OrigDataType: byte
T_33: (in 0x0001 : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_34: (in cx_122 - 0x0001 : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_35: (in 0x0000 : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_36: (in cx_122 != 0x0000 : bool)
  Class: Eq_36
  DataType: bool
  OrigDataType: bool
T_37: (in 0xA000 : selector)
  Class: Eq_37
  DataType: (ptr Eq_37)
  OrigDataType: (ptr (segment))
T_38: (in ss : selector)
  Class: Eq_38
  DataType: (ptr Eq_38)
  OrigDataType: (ptr (segment))
T_39: (in fp : ptr16)
  Class: Eq_39
  DataType: Eq_39
  OrigDataType: (union (ptr16 u0) ((memptr T_38 (struct (FFFFFFFA T_42 tFFFFFFFA))) u1))
T_40: (in 0x0006 : word16)
  Class: Eq_40
  DataType: word16
  OrigDataType: word16
T_41: (in fp - 0x0006 : word16)
  Class: Eq_41
  DataType: word16
  OrigDataType: word16
T_42: (in Mem52[ss:fp - 0x0006:word16] : word16)
  Class: Eq_37
  DataType: (ptr Eq_37)
  OrigDataType: word16
T_43: (in cx_46 : word16)
  Class: Eq_43
  DataType: word16
  OrigDataType: word16
T_44: (in 0xFA : byte)
  Class: Eq_44
  DataType: byte
  OrigDataType: byte
T_45: (in DPB(cx_122, 0xFA, 8, 8) : word16)
  Class: Eq_43
  DataType: word16
  OrigDataType: word16
T_46: (in di_58 : (memptr (ptr Eq_37) byte))
  Class: Eq_11
  DataType: (memptr (ptr Eq_37) byte)
  OrigDataType: (memptr T_37 (struct 0001 (0 T_47 t0000)))
T_47: (in al_129 : byte)
  Class: Eq_47
  DataType: byte
  OrigDataType: byte
T_48: (in 0x0000 : word16)
  Class: Eq_48
  DataType: word16
  OrigDataType: word16
T_49: (in di_58 + 0x0000 : word16)
  Class: Eq_49
  DataType: word16
  OrigDataType: word16
T_50: (in Mem75[0xA000:di_58 + 0x0000:byte] : byte)
  Class: Eq_47
  DataType: byte
  OrigDataType: byte
T_51: (in 0x0001 : word16)
  Class: Eq_51
  DataType: word16
  OrigDataType: word16
T_52: (in di_58 + 0x0001 : word16)
  Class: Eq_11
  DataType: (memptr (ptr Eq_37) byte)
  OrigDataType: word16
T_53: (in 0x0001 : word16)
  Class: Eq_53
  DataType: word16
  OrigDataType: word16
T_54: (in cx_46 - 0x0001 : word16)
  Class: Eq_43
  DataType: word16
  OrigDataType: word16
T_55: (in 0x0000 : word16)
  Class: Eq_43
  DataType: word16
  OrigDataType: word16
T_56: (in cx_46 != 0x0000 : bool)
  Class: Eq_56
  DataType: bool
  OrigDataType: bool
T_57: (in al_63 : byte)
  Class: Eq_47
  DataType: byte
  OrigDataType: byte
T_58: (in 0x01 : byte)
  Class: Eq_58
  DataType: byte
  OrigDataType: byte
T_59: (in al_63 - 0x01 : byte)
  Class: Eq_47
  DataType: byte
  OrigDataType: byte
T_60: (in 0x0000 : word16)
  Class: Eq_60
  DataType: word16
  OrigDataType: word16
T_61: (in di_58 + 0x0000 : word16)
  Class: Eq_61
  DataType: word16
  OrigDataType: word16
T_62: (in Mem52[0xA000:di_58 + 0x0000:byte] : byte)
  Class: Eq_47
  DataType: byte
  OrigDataType: byte
T_63: (in 0x00 : byte)
  Class: Eq_47
  DataType: byte
  OrigDataType: byte
T_64: (in al_63 == 0x00 : bool)
  Class: Eq_64
  DataType: bool
  OrigDataType: bool
T_65: (in 0x02 : byte)
  Class: Eq_65
  DataType: byte
  OrigDataType: byte
T_66: (in DPB(cx_46, 0x02, 8, 8) : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_67: (in dx_98 : uint16)
  Class: Eq_67
  DataType: uint16
  OrigDataType: word16
T_68: (in 0x013F : word16)
  Class: Eq_67
  DataType: uint16
  OrigDataType: word16
T_69: (in dx_98 != 0x013F : bool)
  Class: Eq_69
  DataType: bool
  OrigDataType: bool
T_70: (in 0x0001 : word16)
  Class: Eq_70
  DataType: word16
  OrigDataType: word16
T_71: (in ds : (ptr Eq_71))
  Class: Eq_71
  DataType: (ptr Eq_71)
  OrigDataType: (ptr (segment (179 T_116 t0179) (17B T_70 t017B) (17D T_82 t017D)))
T_72: (in 0x017B : word16)
  Class: Eq_72
  DataType: (memptr (ptr Eq_71) word16)
  OrigDataType: (memptr T_71 (struct (0 T_73 t0000)))
T_73: (in Mem128[ds:0x017B:word16] : word16)
  Class: Eq_70
  DataType: word16
  OrigDataType: word16
T_74: (in ax_100 : uint16)
  Class: Eq_74
  DataType: uint16
  OrigDataType: word16
T_75: (in 0x0000 : word16)
  Class: Eq_74
  DataType: uint16
  OrigDataType: word16
T_76: (in ax_100 != 0x0000 : bool)
  Class: Eq_76
  DataType: bool
  OrigDataType: bool
T_77: (in 0xFFFF : word16)
  Class: Eq_70
  DataType: word16
  OrigDataType: word16
T_78: (in 0x017B : word16)
  Class: Eq_78
  DataType: (memptr (ptr Eq_71) word16)
  OrigDataType: (memptr T_71 (struct (0 T_79 t0000)))
T_79: (in Mem127[ds:0x017B:word16] : word16)
  Class: Eq_70
  DataType: word16
  OrigDataType: word16
T_80: (in 0x00C7 : word16)
  Class: Eq_74
  DataType: uint16
  OrigDataType: word16
T_81: (in ax_100 != 0x00C7 : bool)
  Class: Eq_81
  DataType: bool
  OrigDataType: bool
T_82: (in 0x0140 : word16)
  Class: Eq_82
  DataType: word16
  OrigDataType: word16
T_83: (in 0x017D : word16)
  Class: Eq_83
  DataType: (memptr (ptr Eq_71) word16)
  OrigDataType: (memptr T_71 (struct (0 T_84 t0000)))
T_84: (in Mem126[ds:0x017D:word16] : word16)
  Class: Eq_82
  DataType: word16
  OrigDataType: word16
T_85: (in di_93 : word16)
  Class: Eq_85
  DataType: word16
  OrigDataType: word16
T_86: (in 0x0001 : word16)
  Class: Eq_86
  DataType: word16
  OrigDataType: word16
T_87: (in di_93 - 0x0001 : word16)
  Class: Eq_87
  DataType: word16
  OrigDataType: word16
T_88: (in 0x017B : word16)
  Class: Eq_88
  DataType: (memptr (ptr Eq_71) word16)
  OrigDataType: (memptr T_71 (struct (0 T_89 t0000)))
T_89: (in Mem92[ds:0x017B:word16] : word16)
  Class: Eq_70
  DataType: word16
  OrigDataType: word16
T_90: (in di_93 - 0x0001 + ds->w017B : word16)
  Class: Eq_90
  DataType: word16
  OrigDataType: word16
T_91: (in 0x017D : word16)
  Class: Eq_91
  DataType: (memptr (ptr Eq_71) word16)
  OrigDataType: (memptr T_71 (struct (0 T_92 t0000)))
T_92: (in Mem92[ds:0x017D:word16] : word16)
  Class: Eq_82
  DataType: word16
  OrigDataType: word16
T_93: (in di_93 - 0x0001 + ds->w017B + ds->w017D : word16)
  Class: Eq_11
  DataType: (memptr (ptr Eq_37) byte)
  OrigDataType: word16
T_94: (in __inb : ptr32)
  Class: Eq_94
  DataType: (ptr Eq_94)
  OrigDataType: (ptr (fn T_96 (T_95)))
T_95: (in 0x60 : byte)
  Class: Eq_95
  DataType: byte
  OrigDataType: byte
T_96: (in __inb(0x60) : byte)
  Class: Eq_96
  DataType: byte
  OrigDataType: byte
T_97: (in 0x01 : byte)
  Class: Eq_96
  DataType: byte
  OrigDataType: byte
T_98: (in __inb(0x60) == 0x01 : bool)
  Class: Eq_98
  DataType: bool
  OrigDataType: bool
T_99: (in 0xFEC0 : word16)
  Class: Eq_82
  DataType: word16
  OrigDataType: word16
T_100: (in 0x017D : word16)
  Class: Eq_100
  DataType: (memptr (ptr Eq_71) word16)
  OrigDataType: (memptr T_71 (struct (0 T_101 t0000)))
T_101: (in Mem125[ds:0x017D:word16] : word16)
  Class: Eq_82
  DataType: word16
  OrigDataType: word16
T_102: (in 0x0001 : word16)
  Class: Eq_102
  DataType: word16
  OrigDataType: word16
T_103: (in cx_122 - 0x0001 : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_104: (in 0x0000 : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_105: (in cx_122 != 0x0000 : bool)
  Class: Eq_105
  DataType: bool
  OrigDataType: bool
T_106: (in 0x3F : byte)
  Class: Eq_47
  DataType: byte
  OrigDataType: byte
T_107: (in 0x0000 : word16)
  Class: Eq_107
  DataType: word16
  OrigDataType: word16
T_108: (in di_118 + 0x0000 : word16)
  Class: Eq_108
  DataType: word16
  OrigDataType: word16
T_109: (in Mem92[0xA000:di_118 + 0x0000:byte] : byte)
  Class: Eq_47
  DataType: byte
  OrigDataType: byte
T_110: (in 0x0001 : word16)
  Class: Eq_110
  DataType: word16
  OrigDataType: word16
T_111: (in di_118 + 0x0001 : word16)
  Class: Eq_85
  DataType: word16
  OrigDataType: word16
T_112: (in 0x0000 : word16)
  Class: Eq_112
  DataType: word16
  OrigDataType: word16
T_113: (in di_93 - 0x0001 : word16)
  Class: Eq_113
  DataType: word16
  OrigDataType: word16
T_114: (in SEQ(0x0000, di_93 - 0x0001) : word32)
  Class: Eq_114
  DataType: word32
  OrigDataType: word32
T_115: (in 0x0179 : word16)
  Class: Eq_115
  DataType: (memptr (ptr Eq_71) uint16)
  OrigDataType: (memptr T_71 (struct (0 T_116 t0000)))
T_116: (in Mem92[ds:0x0179:word16] : word16)
  Class: Eq_116
  DataType: uint16
  OrigDataType: word16
T_117: (in SEQ(0x0000, di_93 - 0x0001) % ds->w0179 : uint16)
  Class: Eq_67
  DataType: uint16
  OrigDataType: uint16
T_118: (in di_93 - 0x0001 : word16)
  Class: Eq_118
  DataType: word16
  OrigDataType: word16
T_119: (in SEQ(dx_98, di_93 - 0x0001) : word32)
  Class: Eq_119
  DataType: uint32
  OrigDataType: uint32
T_120: (in Mem92[ds:0x0179:word16] : word16)
  Class: Eq_116
  DataType: uint16
  OrigDataType: uint16
T_121: (in SEQ(dx_98, di_93 - 0x0001) /u ds->w0179 : uint16)
  Class: Eq_74
  DataType: uint16
  OrigDataType: uint16
T_122: (in 0x0000 : word16)
  Class: Eq_67
  DataType: uint16
  OrigDataType: word16
T_123: (in dx_98 != 0x0000 : bool)
  Class: Eq_123
  DataType: bool
  OrigDataType: bool
T_124:
  Class: Eq_124
  DataType: Eq_124
  OrigDataType: 
*/
typedef Eq_37 Eq_1struct Globals {
	Eq_37 * ptrFFFA0000;	// FFFA0000
} Eq_1;

typedef void (Eq_2)(byte);

typedef void (Eq_7)(word16, byte);

typedef void (Eq_21)(word16, byte);

typedef void (Eq_24)(word16, byte);

typedef void (Eq_27)(word16, byte);

typedef struct Eq_37 {
	byte b0000;	// 0
} Eq_37;

typedef struct Eq_38 {
} Eq_38;

typedef union Eq_39 {
	ptr16 u0;
	Eq_124 Eq_38::* u1;
} Eq_39;

typedef struct Eq_71 {
	uint16 w0179;	// 179
	word16 w017B;	// 17B
	word16 w017D;	// 17D
} Eq_71;

typedef byte (Eq_94)(byte);

typedef Eq_37 Eq_124struct Eq_124 {
	Eq_37 * ptrFFFFFFFA;	// FFFFFFFA
} Eq_124;

