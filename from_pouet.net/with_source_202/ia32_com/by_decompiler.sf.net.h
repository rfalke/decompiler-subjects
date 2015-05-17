// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_202/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_11: (fn void (word16, uint8))
	T_11 (in __outb : ptr32)
Eq_15: (union "Eq_15" (uint8 u0) (uint16 u1))
	T_15 (in al_20 : Eq_15)
	T_17 (in cl >>u 0x02 : word16)
Eq_18: (fn void (word16, Eq_15))
	T_18 (in __outb : ptr32)
Eq_21: (fn void (word16, uint16))
	T_21 (in __outb : ptr32)
Eq_26: (fn void (word16, uint16))
	T_26 (in __outb : ptr32)
Eq_40: (segment "Eq_40" (1E5 word16 w01E5) (1E7 uint16 w01E7) (1EB word16 w01EB))
	T_40 (in ds : (ptr Eq_40))
Eq_49: (union "Eq_49" (int16 u0) (real32 u1) (real64 u2))
	T_49 (in ax_4 + 0x0001 : word16)
	T_53 (in Mem38[ds:si + 0x0000:word16] : word16)
	T_57 (in Mem38[ds:si + 0x0000:int16] : int16)
	T_60 (in dx_32 - 0x00A0 : word16)
	T_63 (in Mem41[ds:si + 0x0000:word16] : word16)
	T_67 (in Mem41[ds:si + 0x0000:int16] : int16)
	T_74 (in ax_34 - 0x0064 : word16)
	T_77 (in Mem44[ds:si + 0x0000:word16] : word16)
	T_81 (in Mem44[ds:si + 0x0000:int16] : int16)
	T_96 (in sin(rLoc5_49) : real64)
	T_99 (in Mem53[ds:si + 0x0000:real32] : real32)
	T_104 (in Mem53[ds:si + 0x0000:real32] : real32)
Eq_64: (union "Eq_64" (real16 u0) (real64 u1))
	T_64 (in rLoc2_43 : real64)
	T_72 (in (real64) Mem41[ds:si + 0x0000:int16] / (real64) Mem41[ds:0x01E5:word16] : word16)
Eq_68: (union "Eq_68" (real16 u0) (real64 u1))
	T_68 (in (real64) Mem41[ds:si + 0x0000:int16] : real64)
Eq_71: (union "Eq_71" (real16 u0) (real64 u1))
	T_71 (in (real64) Mem41[ds:0x01E5:word16] : real64)
Eq_78: (union "Eq_78" (real16 u0) (real64 u1))
	T_78 (in rLoc3_46 : real64)
	T_86 (in (real64) Mem44[ds:si + 0x0000:int16] / (real64) Mem44[ds:0x01E5:word16] : word16)
Eq_82: (union "Eq_82" (real16 u0) (real64 u1))
	T_82 (in (real64) Mem44[ds:si + 0x0000:int16] : real64)
Eq_85: (union "Eq_85" (real16 u0) (real64 u1))
	T_85 (in (real64) Mem44[ds:0x01E5:word16] : real64)
Eq_87: (union "Eq_87" (real16 u0) (real64 u1))
	T_87 (in rLoc5_49 : Eq_87)
	T_91 (in rLoc2_43 / (real64) ds->w01EB : word16)
Eq_90: (union "Eq_90" (real16 u0) (real64 u1))
	T_90 (in (real64) ds->w01EB : real64)
Eq_93: (fn real64 (Eq_87))
	T_93 (in cos : ptr32)
Eq_95: (fn Eq_49 (Eq_87))
	T_95 (in sin : ptr32)
Eq_111: (fn real64 (real64))
	T_111 (in sin : ptr32)
Eq_115: (fn real64 (real64))
	T_115 (in cos : ptr32)
Eq_119: (fn real64 (real64))
	T_119 (in cos : ptr32)
Eq_123: (fn real64 (real64))
	T_123 (in cos : ptr32)
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
T_7: (in ax_4 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_8: (in ax : word16)
  Class: Eq_8
  DataType: word16
  OrigDataType: word16
T_9: (in 0x13 : byte)
  Class: Eq_9
  DataType: byte
  OrigDataType: byte
T_10: (in DPB(ax, 0x13, 0, 8) : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_11: (in __outb : ptr32)
  Class: Eq_11
  DataType: (ptr Eq_11)
  OrigDataType: (ptr (fn T_14 (T_12, T_13)))
T_12: (in 0x03C8 : word16)
  Class: Eq_12
  DataType: word16
  OrigDataType: word16
T_13: (in cl : byte)
  Class: Eq_13
  DataType: uint8
  OrigDataType: uint8
T_14: (in __outb(0x03C8, cl) : void)
  Class: Eq_14
  DataType: void
  OrigDataType: void
T_15: (in al_20 : Eq_15)
  Class: Eq_15
  DataType: Eq_15
  OrigDataType: uint8
T_16: (in 0x02 : byte)
  Class: Eq_16
  DataType: uint8
  OrigDataType: uint8
T_17: (in cl >>u 0x02 : word16)
  Class: Eq_15
  DataType: Eq_15
  OrigDataType: uint16
T_18: (in __outb : ptr32)
  Class: Eq_18
  DataType: (ptr Eq_18)
  OrigDataType: (ptr (fn T_20 (T_19, T_15)))
T_19: (in 0x03C9 : word16)
  Class: Eq_19
  DataType: word16
  OrigDataType: word16
T_20: (in __outb(0x03C9, al_20) : void)
  Class: Eq_20
  DataType: void
  OrigDataType: void
T_21: (in __outb : ptr32)
  Class: Eq_21
  DataType: (ptr Eq_21)
  OrigDataType: (ptr (fn T_25 (T_22, T_24)))
T_22: (in 0x03C9 : word16)
  Class: Eq_22
  DataType: word16
  OrigDataType: word16
T_23: (in 0x01 : byte)
  Class: Eq_23
  DataType: uint8
  OrigDataType: uint8
T_24: (in al_20 >>u 0x01 : word16)
  Class: Eq_24
  DataType: uint16
  OrigDataType: uint16
T_25: (in __outb(0x03C9, al_20 >>u 0x01) : void)
  Class: Eq_25
  DataType: void
  OrigDataType: void
T_26: (in __outb : ptr32)
  Class: Eq_26
  DataType: (ptr Eq_26)
  OrigDataType: (ptr (fn T_29 (T_27, T_28)))
T_27: (in 0x03C9 : word16)
  Class: Eq_27
  DataType: word16
  OrigDataType: word16
T_28: (in al_20 >>u 0x01 : word16)
  Class: Eq_28
  DataType: uint16
  OrigDataType: uint16
T_29: (in __outb(0x03C9, al_20 >>u 0x01) : void)
  Class: Eq_29
  DataType: void
  OrigDataType: void
T_30: (in cx : word16)
  Class: Eq_30
  DataType: word16
  OrigDataType: word16
T_31: (in 0x0001 : word16)
  Class: Eq_31
  DataType: word16
  OrigDataType: word16
T_32: (in cx - 0x0001 : word16)
  Class: Eq_30
  DataType: word16
  OrigDataType: word16
T_33: (in (byte) cx : byte)
  Class: Eq_13
  DataType: uint8
  OrigDataType: byte
T_34: (in 0x0000 : word16)
  Class: Eq_30
  DataType: word16
  OrigDataType: word16
T_35: (in cx != 0x0000 : bool)
  Class: Eq_35
  DataType: bool
  OrigDataType: bool
T_36: (in dx_32 : uint16)
  Class: Eq_36
  DataType: uint16
  OrigDataType: word16
T_37: (in 0x0000 : word16)
  Class: Eq_37
  DataType: word16
  OrigDataType: word16
T_38: (in di : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_39: (in SEQ(0x0000, di) : word32)
  Class: Eq_39
  DataType: word32
  OrigDataType: word32
T_40: (in ds : (ptr Eq_40))
  Class: Eq_40
  DataType: (ptr Eq_40)
  OrigDataType: (ptr (segment (1E5 T_70 t01E5) (1E7 T_42 t01E7) (1EB T_89 t01EB)))
T_41: (in 0x01E7 : word16)
  Class: Eq_41
  DataType: (memptr (ptr Eq_40) uint16)
  OrigDataType: (memptr T_40 (struct (0 T_42 t0000)))
T_42: (in Mem0[ds:0x01E7:word16] : word16)
  Class: Eq_42
  DataType: uint16
  OrigDataType: word16
T_43: (in SEQ(0x0000, di) % ds->w01E7 : uint16)
  Class: Eq_36
  DataType: uint16
  OrigDataType: uint16
T_44: (in ax_34 : uint16)
  Class: Eq_44
  DataType: uint16
  OrigDataType: word16
T_45: (in SEQ(dx_32, di) : word32)
  Class: Eq_45
  DataType: uint32
  OrigDataType: uint32
T_46: (in Mem0[ds:0x01E7:word16] : word16)
  Class: Eq_42
  DataType: uint16
  OrigDataType: uint16
T_47: (in SEQ(dx_32, di) /u ds->w01E7 : uint16)
  Class: Eq_44
  DataType: uint16
  OrigDataType: uint16
T_48: (in 0x0001 : word16)
  Class: Eq_48
  DataType: word16
  OrigDataType: word16
T_49: (in ax_4 + 0x0001 : word16)
  Class: Eq_49
  DataType: Eq_49
  OrigDataType: word16
T_50: (in si : (memptr (ptr Eq_40) Eq_49))
  Class: Eq_50
  DataType: (memptr (ptr Eq_40) Eq_49)
  OrigDataType: (memptr T_40 (struct (0 T_49 t0000)))
T_51: (in 0x0000 : word16)
  Class: Eq_51
  DataType: word16
  OrigDataType: word16
T_52: (in si + 0x0000 : word16)
  Class: Eq_52
  DataType: word16
  OrigDataType: word16
T_53: (in Mem38[ds:si + 0x0000:word16] : word16)
  Class: Eq_49
  DataType: Eq_49
  OrigDataType: word16
T_54: (in rLoc1_40 : real64)
  Class: Eq_54
  DataType: real64
  OrigDataType: real64
T_55: (in 0x0000 : word16)
  Class: Eq_55
  DataType: word16
  OrigDataType: word16
T_56: (in si + 0x0000 : word16)
  Class: Eq_56
  DataType: word16
  OrigDataType: word16
T_57: (in Mem38[ds:si + 0x0000:int16] : int16)
  Class: Eq_49
  DataType: Eq_49
  OrigDataType: int16
T_58: (in (real64) Mem38[ds:si + 0x0000:int16] : real64)
  Class: Eq_54
  DataType: real64
  OrigDataType: real64
T_59: (in 0x00A0 : word16)
  Class: Eq_59
  DataType: word16
  OrigDataType: word16
T_60: (in dx_32 - 0x00A0 : word16)
  Class: Eq_49
  DataType: Eq_49
  OrigDataType: word16
T_61: (in 0x0000 : word16)
  Class: Eq_61
  DataType: word16
  OrigDataType: word16
T_62: (in si + 0x0000 : word16)
  Class: Eq_62
  DataType: word16
  OrigDataType: word16
T_63: (in Mem41[ds:si + 0x0000:word16] : word16)
  Class: Eq_49
  DataType: Eq_49
  OrigDataType: word16
T_64: (in rLoc2_43 : real64)
  Class: Eq_64
  DataType: Eq_64
  OrigDataType: (union (real16 u0) (real64 u1))
T_65: (in 0x0000 : word16)
  Class: Eq_65
  DataType: word16
  OrigDataType: word16
T_66: (in si + 0x0000 : word16)
  Class: Eq_66
  DataType: word16
  OrigDataType: word16
T_67: (in Mem41[ds:si + 0x0000:int16] : int16)
  Class: Eq_49
  DataType: Eq_49
  OrigDataType: int16
T_68: (in (real64) Mem41[ds:si + 0x0000:int16] : real64)
  Class: Eq_68
  DataType: Eq_68
  OrigDataType: (union (real16 u0) (real64 u1))
T_69: (in 0x01E5 : word16)
  Class: Eq_69
  DataType: (memptr (ptr Eq_40) word16)
  OrigDataType: (memptr T_40 (struct (0 T_70 t0000)))
T_70: (in Mem41[ds:0x01E5:word16] : word16)
  Class: Eq_70
  DataType: word16
  OrigDataType: word16
T_71: (in (real64) Mem41[ds:0x01E5:word16] : real64)
  Class: Eq_71
  DataType: Eq_71
  OrigDataType: (union (real16 u0) (real64 u1))
T_72: (in (real64) Mem41[ds:si + 0x0000:int16] / (real64) Mem41[ds:0x01E5:word16] : word16)
  Class: Eq_64
  DataType: Eq_64
  OrigDataType: real16
T_73: (in 0x0064 : word16)
  Class: Eq_73
  DataType: word16
  OrigDataType: word16
T_74: (in ax_34 - 0x0064 : word16)
  Class: Eq_49
  DataType: Eq_49
  OrigDataType: word16
T_75: (in 0x0000 : word16)
  Class: Eq_75
  DataType: word16
  OrigDataType: word16
T_76: (in si + 0x0000 : word16)
  Class: Eq_76
  DataType: word16
  OrigDataType: word16
T_77: (in Mem44[ds:si + 0x0000:word16] : word16)
  Class: Eq_49
  DataType: Eq_49
  OrigDataType: word16
T_78: (in rLoc3_46 : real64)
  Class: Eq_78
  DataType: Eq_78
  OrigDataType: real64
T_79: (in 0x0000 : word16)
  Class: Eq_79
  DataType: word16
  OrigDataType: word16
T_80: (in si + 0x0000 : word16)
  Class: Eq_80
  DataType: word16
  OrigDataType: word16
T_81: (in Mem44[ds:si + 0x0000:int16] : int16)
  Class: Eq_49
  DataType: Eq_49
  OrigDataType: int16
T_82: (in (real64) Mem44[ds:si + 0x0000:int16] : real64)
  Class: Eq_82
  DataType: Eq_82
  OrigDataType: (union (real16 u0) (real64 u1))
T_83: (in 0x01E5 : word16)
  Class: Eq_83
  DataType: (memptr (ptr Eq_40) word16)
  OrigDataType: (memptr T_40 (struct (0 T_84 t0000)))
T_84: (in Mem44[ds:0x01E5:word16] : word16)
  Class: Eq_70
  DataType: word16
  OrigDataType: word16
T_85: (in (real64) Mem44[ds:0x01E5:word16] : real64)
  Class: Eq_85
  DataType: Eq_85
  OrigDataType: (union (real16 u0) (real64 u1))
T_86: (in (real64) Mem44[ds:si + 0x0000:int16] / (real64) Mem44[ds:0x01E5:word16] : word16)
  Class: Eq_78
  DataType: Eq_78
  OrigDataType: real16
T_87: (in rLoc5_49 : Eq_87)
  Class: Eq_87
  DataType: Eq_87
  OrigDataType: real64
T_88: (in 0x01EB : word16)
  Class: Eq_88
  DataType: (memptr (ptr Eq_40) word16)
  OrigDataType: (memptr T_40 (struct (0 T_89 t0000)))
T_89: (in Mem44[ds:0x01EB:word16] : word16)
  Class: Eq_89
  DataType: word16
  OrigDataType: word16
T_90: (in (real64) ds->w01EB : real64)
  Class: Eq_90
  DataType: Eq_90
  OrigDataType: (union (real16 u0) (real64 u1))
T_91: (in rLoc2_43 / (real64) ds->w01EB : word16)
  Class: Eq_87
  DataType: Eq_87
  OrigDataType: real16
T_92: (in rLoc5_51 : real64)
  Class: Eq_92
  DataType: real64
  OrigDataType: real64
T_93: (in cos : ptr32)
  Class: Eq_93
  DataType: (ptr Eq_93)
  OrigDataType: (ptr (fn T_94 (T_87)))
T_94: (in cos(rLoc5_49) : real64)
  Class: Eq_92
  DataType: real64
  OrigDataType: real64
T_95: (in sin : ptr32)
  Class: Eq_95
  DataType: (ptr Eq_95)
  OrigDataType: (ptr (fn T_96 (T_87)))
T_96: (in sin(rLoc5_49) : real64)
  Class: Eq_49
  DataType: Eq_49
  OrigDataType: real64
T_97: (in 0x0000 : word16)
  Class: Eq_97
  DataType: word16
  OrigDataType: word16
T_98: (in si + 0x0000 : word16)
  Class: Eq_98
  DataType: word16
  OrigDataType: word16
T_99: (in Mem53[ds:si + 0x0000:real32] : real32)
  Class: Eq_49
  DataType: Eq_49
  OrigDataType: real32
T_100: (in rLoc6_62 : real64)
  Class: Eq_100
  DataType: real64
  OrigDataType: real64
T_101: (in rLoc5_51 * rLoc2_43 : real64)
  Class: Eq_101
  DataType: real64
  OrigDataType: real64
T_102: (in 0x0000 : word16)
  Class: Eq_102
  DataType: word16
  OrigDataType: word16
T_103: (in si + 0x0000 : word16)
  Class: Eq_103
  DataType: word16
  OrigDataType: word16
T_104: (in Mem53[ds:si + 0x0000:real32] : real32)
  Class: Eq_49
  DataType: Eq_49
  OrigDataType: (union (real32 u0) (real64 u1))
T_105: (in 1 : real64)
  Class: Eq_105
  DataType: real64
  OrigDataType: real64
T_106: (in Mem53[ds:si + 0x0000:real32] * 1 : real64)
  Class: Eq_106
  DataType: real64
  OrigDataType: real64
T_107: (in rLoc5_51 * rLoc2_43 + Mem53[ds:si + 0x0000:real32] * 1 : real64)
  Class: Eq_100
  DataType: real64
  OrigDataType: real64
T_108: (in 0x0B : byte)
  Class: Eq_108
  DataType: byte
  OrigDataType: byte
T_109: (in 0x00 : byte)
  Class: Eq_108
  DataType: byte
  OrigDataType: byte
T_110: (in 0x0B == 0x00 : bool)
  Class: Eq_110
  DataType: bool
  OrigDataType: bool
T_111: (in sin : ptr32)
  Class: Eq_111
  DataType: (ptr Eq_111)
  OrigDataType: (ptr (fn T_114 (T_113)))
T_112: (in 0 : real64)
  Class: Eq_112
  DataType: real64
  OrigDataType: real64
T_113: (in rLoc3_46 * 0 : real64)
  Class: Eq_113
  DataType: real64
  OrigDataType: real64
T_114: (in sin(rLoc3_46 * 0) : real64)
  Class: Eq_114
  DataType: real64
  OrigDataType: real64
T_115: (in cos : ptr32)
  Class: Eq_115
  DataType: (ptr Eq_115)
  OrigDataType: (ptr (fn T_118 (T_117)))
T_116: (in 0 : real64)
  Class: Eq_116
  DataType: real64
  OrigDataType: real64
T_117: (in rLoc3_46 * 0 : real64)
  Class: Eq_117
  DataType: real64
  OrigDataType: real64
T_118: (in cos(rLoc3_46 * 0) : real64)
  Class: Eq_118
  DataType: real64
  OrigDataType: real64
T_119: (in cos : ptr32)
  Class: Eq_119
  DataType: (ptr Eq_119)
  OrigDataType: (ptr (fn T_122 (T_121)))
T_120: (in 0 : real64)
  Class: Eq_120
  DataType: real64
  OrigDataType: real64
T_121: (in rLoc6_62 * 0 : real64)
  Class: Eq_121
  DataType: real64
  OrigDataType: real64
T_122: (in cos(rLoc6_62 * 0) : real64)
  Class: Eq_122
  DataType: real64
  OrigDataType: real64
T_123: (in cos : ptr32)
  Class: Eq_123
  DataType: (ptr Eq_123)
  OrigDataType: (ptr (fn T_128 (T_127)))
T_124: (in 0 : real64)
  Class: Eq_124
  DataType: real64
  OrigDataType: real64
T_125: (in 0 : real64)
  Class: Eq_125
  DataType: real64
  OrigDataType: real64
T_126: (in 0 * 0 : real64)
  Class: Eq_126
  DataType: real64
  OrigDataType: real64
T_127: (in 0 * 0 + rLoc1_40 : real64)
  Class: Eq_127
  DataType: real64
  OrigDataType: real64
T_128: (in cos(0 * 0 + rLoc1_40) : real64)
  Class: Eq_128
  DataType: real64
  OrigDataType: real64
*/
typedef struct Globals {
} Eq_1;

typedef void (Eq_2)(byte);

typedef void (Eq_11)(word16, uint8);

typedef union Eq_15 {
	uint8 u0;
	uint16 u1;
} Eq_15;

typedef void (Eq_18)(word16, Eq_15);

typedef void (Eq_21)(word16, uint16);

typedef void (Eq_26)(word16, uint16);

typedef struct Eq_40 {
	word16 w01E5;	// 1E5
	uint16 w01E7;	// 1E7
	word16 w01EB;	// 1EB
} Eq_40;

typedef union Eq_49 {
	int16 u0;
	real32 u1;
	real64 u2;
} Eq_49;

typedef union Eq_64 {
	real16 u0;
	real64 u1;
} Eq_64;

typedef union Eq_68 {
	real16 u0;
	real64 u1;
} Eq_68;

typedef union Eq_71 {
	real16 u0;
	real64 u1;
} Eq_71;

typedef union Eq_78 {
	real16 u0;
	real64 u1;
} Eq_78;

typedef union Eq_82 {
	real16 u0;
	real64 u1;
} Eq_82;

typedef union Eq_85 {
	real16 u0;
	real64 u1;
} Eq_85;

typedef union Eq_87 {
	real16 u0;
	real64 u1;
} Eq_87;

typedef union Eq_90 {
	real16 u0;
	real64 u1;
} Eq_90;

typedef real64 (Eq_93)(Eq_87);

typedef Eq_49 (Eq_95)(Eq_87);

typedef real64 (Eq_111)(real64);

typedef real64 (Eq_115)(real64);

typedef real64 (Eq_119)(real64);

typedef real64 (Eq_123)(real64);

