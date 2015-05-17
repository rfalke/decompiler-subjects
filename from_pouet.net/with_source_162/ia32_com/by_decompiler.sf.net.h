// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_162/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_96) ptrFFFA0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_11: (fn void (word16, uint16))
	T_11 (in __outw : ptr32)
Eq_21: (union "Eq_21" (uint16 u0) ((memptr uint16 bcu8) u1))
	T_21 (in bx_59 : Eq_21)
	T_32 (in DPB(di_47, bl_54 & 0x1F, 0, 8) : word16)
Eq_66: (union "Eq_66" (int16 u0) ((memptr (ptr Eq_96) byte) u1))
	T_66 (in bx_170 : Eq_66)
	T_69 (in (ax_78 >>u 0x0005) + 0x649F : word16)
	T_101 (in bx_170 + 0x0001 : word16)
	T_106 (in 0x9B61 : word16)
Eq_96: (segment "Eq_96")
	T_96 (in 0xA000 : selector)
Eq_129: (union "Eq_129" (int16 u0) (uint16 u1))
	T_129 (in SEQ((word32) ax_118 % (cx_114 + 0x0001), ax_118) / (cx_114 + 0x0001) : int16)
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
T_7: (in ax_6 : uint16)
  Class: Eq_7
  DataType: uint16
  OrigDataType: word16
T_8: (in ax : word16)
  Class: Eq_8
  DataType: word16
  OrigDataType: word16
T_9: (in 0x20 : byte)
  Class: Eq_9
  DataType: byte
  OrigDataType: byte
T_10: (in DPB(ax, 0x20, 8, 8) : word16)
  Class: Eq_7
  DataType: uint16
  OrigDataType: word16
T_11: (in __outw : ptr32)
  Class: Eq_11
  DataType: (ptr Eq_11)
  OrigDataType: (ptr (fn T_13 (T_12, T_7)))
T_12: (in 0x03D4 : word16)
  Class: Eq_12
  DataType: word16
  OrigDataType: word16
T_13: (in __outw(0x03D4, ax_6) : void)
  Class: Eq_13
  DataType: void
  OrigDataType: void
T_14: (in ax_164 : uint16)
  Class: Eq_7
  DataType: uint16
  OrigDataType: uint16
T_15: (in di_47 : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_16: (in 0x0001 : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_17: (in di_47 + 0x0001 : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_18: (in 0x0000 : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_19: (in di_47 != 0x0000 : bool)
  Class: Eq_19
  DataType: bool
  OrigDataType: bool
T_20: (in al_80 : bcu8)
  Class: Eq_20
  DataType: bcu8
  OrigDataType: bcu8
T_21: (in bx_59 : Eq_21)
  Class: Eq_21
  DataType: Eq_21
  OrigDataType: (union (uint16 u0) ((memptr T_7 (struct (0 T_24 t0000))) u1))
T_22: (in 0x0000 : word16)
  Class: Eq_22
  DataType: word16
  OrigDataType: word16
T_23: (in bx_59 + 0x0000 : word16)
  Class: Eq_23
  DataType: word16
  OrigDataType: word16
T_24: (in Mem175[ax_6:bx_59 + 0x0000:byte] : byte)
  Class: Eq_20
  DataType: bcu8
  OrigDataType: byte
T_25: (in bl_54 : byte)
  Class: Eq_25
  DataType: byte
  OrigDataType: byte
T_26: (in (byte) di_47 : byte)
  Class: Eq_25
  DataType: byte
  OrigDataType: byte
T_27: (in cx_57 : uint16)
  Class: Eq_27
  DataType: uint16
  OrigDataType: uint16
T_28: (in cx : word16)
  Class: Eq_28
  DataType: uint16
  OrigDataType: uint16
T_29: (in DPB(cx, bl_54, 0, 8) : word16)
  Class: Eq_27
  DataType: uint16
  OrigDataType: word16
T_30: (in 0x1F : byte)
  Class: Eq_30
  DataType: byte
  OrigDataType: byte
T_31: (in bl_54 & 0x1F : byte)
  Class: Eq_31
  DataType: byte
  OrigDataType: byte
T_32: (in DPB(di_47, bl_54 & 0x1F, 0, 8) : word16)
  Class: Eq_21
  DataType: Eq_21
  OrigDataType: word16
T_33: (in al_72 : int8)
  Class: Eq_33
  DataType: int8
  OrigDataType: int8
T_34: (in 0x0014 : word16)
  Class: Eq_34
  DataType: word16
  OrigDataType: word16
T_35: (in 0x0005 : word16)
  Class: Eq_35
  DataType: uint16
  OrigDataType: uint16
T_36: (in cx_57 >>u 0x0005 : word16)
  Class: Eq_36
  DataType: uint16
  OrigDataType: uint16
T_37: (in 0x0014 - (cx_57 >>u 0x0005) : word16)
  Class: Eq_37
  DataType: word16
  OrigDataType: word16
T_38: (in SEQ(0x0014 - (cx_57 >>u 0x0005), ax_164) : word32)
  Class: Eq_38
  DataType: word32
  OrigDataType: word32
T_39: (in SEQ(0x0014 - (cx_57 >>u 0x0005), ax_164) % bx_59 : uint16)
  Class: Eq_39
  DataType: uint16
  OrigDataType: uint16
T_40: (in SEQ(SEQ(0x0014 - (cx_57 >>u 0x0005), ax_164) % bx_59, ax_164) : word32)
  Class: Eq_40
  DataType: uint32
  OrigDataType: uint32
T_41: (in SEQ(SEQ(0x0014 - (cx_57 >>u 0x0005), ax_164) % bx_59, ax_164) /u bx_59 : uint16)
  Class: Eq_41
  DataType: uint16
  OrigDataType: uint16
T_42: (in si : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_43: (in SEQ(SEQ(0x0014 - (cx_57 >>u 0x0005), ax_164) % bx_59, ax_164) /u bx_59 + si : word16)
  Class: Eq_43
  DataType: word16
  OrigDataType: word16
T_44: (in (byte) (SEQ(SEQ(0x0014 - (cx_57 >>u 0x0005), ax_164) % bx_59, ax_164) /u bx_59 + si) : byte)
  Class: Eq_44
  DataType: byte
  OrigDataType: byte
T_45: (in 0x1F : byte)
  Class: Eq_45
  DataType: byte
  OrigDataType: byte
T_46: (in (byte) (SEQ(SEQ(0x0014 - (cx_57 >>u 0x0005), ax_164) % bx_59, ax_164) /u bx_59 + si) & 0x1F : byte)
  Class: Eq_46
  DataType: byte
  OrigDataType: byte
T_47: (in 0x10 : byte)
  Class: Eq_47
  DataType: byte
  OrigDataType: byte
T_48: (in ((byte) (SEQ(SEQ(0x0014 - (cx_57 >>u 0x0005), ax_164) % bx_59, ax_164) /u bx_59 + si) & 0x1F) - 0x10 : byte)
  Class: Eq_33
  DataType: int8
  OrigDataType: byte
T_49: (in ax_73 : int16)
  Class: Eq_49
  DataType: int16
  OrigDataType: word16
T_50: (in al_72 *s al_72 : int16)
  Class: Eq_49
  DataType: int16
  OrigDataType: int16
T_51: (in al_74 : int8)
  Class: Eq_51
  DataType: int8
  OrigDataType: int8
T_52: (in (byte) ax_73 : byte)
  Class: Eq_51
  DataType: int8
  OrigDataType: byte
T_53: (in ax_78 : uint16)
  Class: Eq_53
  DataType: uint16
  OrigDataType: uint16
T_54: (in al_74 *s al_74 : int16)
  Class: Eq_54
  DataType: int16
  OrigDataType: int16
T_55: (in al_74 *s al_74 + ax_73 : word16)
  Class: Eq_53
  DataType: uint16
  OrigDataType: word16
T_56: (in cx_57 >>u 0x0005 : word16)
  Class: Eq_28
  DataType: uint16
  OrigDataType: uint16
T_57: (in 0x0005 : word16)
  Class: Eq_57
  DataType: uint16
  OrigDataType: uint16
T_58: (in ax_78 >>u 0x0005 : word16)
  Class: Eq_7
  DataType: uint16
  OrigDataType: uint16
T_59: (in ax_78 >>u 0x0005 : word16)
  Class: Eq_59
  DataType: uint16
  OrigDataType: uint16
T_60: (in (byte) (ax_78 >>u 0x0005) : byte)
  Class: Eq_20
  DataType: bcu8
  OrigDataType: byte
T_61: (in cx_57 >>u 0x0005 : word16)
  Class: Eq_61
  DataType: uint16
  OrigDataType: uint16
T_62: (in (byte) (cx_57 >>u 0x0005) : byte)
  Class: Eq_20
  DataType: bcu8
  OrigDataType: bcu8
T_63: (in al_80 <u (byte) (cx_57 >>u 0x0005) : bool)
  Class: Eq_63
  DataType: bool
  OrigDataType: bool
T_64: (in ah_151 : byte)
  Class: Eq_64
  DataType: byte
  OrigDataType: byte
T_65: (in SLICE(bx_59, byte, 8) : byte)
  Class: Eq_64
  DataType: byte
  OrigDataType: byte
T_66: (in bx_170 : Eq_66)
  Class: Eq_66
  DataType: Eq_66
  OrigDataType: (union (int16 u0) ((memptr T_96 (struct 0001 (0 T_99 t0000))) u1))
T_67: (in ax_78 >>u 0x0005 : word16)
  Class: Eq_67
  DataType: uint16
  OrigDataType: uint16
T_68: (in 0x649F : word16)
  Class: Eq_68
  DataType: word16
  OrigDataType: word16
T_69: (in (ax_78 >>u 0x0005) + 0x649F : word16)
  Class: Eq_66
  DataType: Eq_66
  OrigDataType: word16
T_70: (in bl_171 : byte)
  Class: Eq_70
  DataType: byte
  OrigDataType: byte
T_71: (in ax_78 >>u 0x0005 : word16)
  Class: Eq_71
  DataType: uint16
  OrigDataType: uint16
T_72: (in (byte) (ax_78 >>u 0x0005) : byte)
  Class: Eq_70
  DataType: byte
  OrigDataType: byte
T_73: (in bh_100 : byte)
  Class: Eq_73
  DataType: byte
  OrigDataType: byte
T_74: (in ax_78 >>u 0x0005 : word16)
  Class: Eq_74
  DataType: uint16
  OrigDataType: uint16
T_75: (in SLICE(ax_78 >>u 0x0005, byte, 8) : byte)
  Class: Eq_73
  DataType: byte
  OrigDataType: byte
T_76: (in ax_141 : word16)
  Class: Eq_76
  DataType: word16
  OrigDataType: word16
T_77: (in 0x0001 : word16)
  Class: Eq_77
  DataType: word16
  OrigDataType: word16
T_78: (in ax_141 + 0x0001 : word16)
  Class: Eq_76
  DataType: word16
  OrigDataType: word16
T_79: (in al_150 : byte)
  Class: Eq_79
  DataType: byte
  OrigDataType: byte
T_80: (in (byte) ax_141 : byte)
  Class: Eq_79
  DataType: byte
  OrigDataType: byte
T_81: (in SLICE(ax_141, byte, 8) : byte)
  Class: Eq_64
  DataType: byte
  OrigDataType: byte
T_82: (in bp_140 : int16)
  Class: Eq_82
  DataType: int16
  OrigDataType: int16
T_83: (in bp_140 - ax_141 : word16)
  Class: Eq_83
  DataType: word16
  OrigDataType: word16
T_84: (in bp_140 - ax_141 - ax_141 : word16)
  Class: Eq_82
  DataType: int16
  OrigDataType: word16
T_85: (in 0x0000 : word16)
  Class: Eq_82
  DataType: int16
  OrigDataType: int16
T_86: (in bp_140 >= 0x0000 : bool)
  Class: Eq_86
  DataType: bool
  OrigDataType: bool
T_87: (in al_162 : byte)
  Class: Eq_87
  DataType: byte
  OrigDataType: byte
T_88: (in ax_124 : word16)
  Class: Eq_88
  DataType: word16
  OrigDataType: word16
T_89: (in DPB(ax_124, al_150, 8, 8) : word16)
  Class: Eq_89
  DataType: (memptr uint16 byte)
  OrigDataType: (memptr T_7 (struct (0 T_93 t0000)))
T_90: (in bh_132 : byte)
  Class: Eq_90
  DataType: byte
  OrigDataType: byte
T_91: (in (uint16) bh_132 : uint16)
  Class: Eq_91
  DataType: uint16
  OrigDataType: uint16
T_92: (in DPB(ax_124, al_150, 8, 8) + (uint16) bh_132 : word16)
  Class: Eq_92
  DataType: word16
  OrigDataType: word16
T_93: (in Mem0[ax_6:DPB(ax_124, al_150, 8, 8) + (uint16) bh_132:byte] : byte)
  Class: Eq_87
  DataType: byte
  OrigDataType: byte
T_94: (in 0x10 : byte)
  Class: Eq_94
  DataType: byte
  OrigDataType: byte
T_95: (in al_162 + 0x10 : byte)
  Class: Eq_95
  DataType: byte
  OrigDataType: byte
T_96: (in 0xA000 : selector)
  Class: Eq_96
  DataType: (ptr Eq_96)
  OrigDataType: (ptr (segment))
T_97: (in 0x0000 : word16)
  Class: Eq_97
  DataType: word16
  OrigDataType: word16
T_98: (in bx_170 + 0x0000 : word16)
  Class: Eq_98
  DataType: word16
  OrigDataType: word16
T_99: (in Mem169[0xA000:bx_170 + 0x0000:byte] : byte)
  Class: Eq_95
  DataType: byte
  OrigDataType: byte
T_100: (in 0x0001 : word16)
  Class: Eq_100
  DataType: word16
  OrigDataType: word16
T_101: (in bx_170 + 0x0001 : word16)
  Class: Eq_66
  DataType: Eq_66
  OrigDataType: word16
T_102: (in al_162 + 0x10 : byte)
  Class: Eq_102
  DataType: byte
  OrigDataType: byte
T_103: (in DPB(ax_141, al_162 + 0x10, 0, 8) : word16)
  Class: Eq_7
  DataType: uint16
  OrigDataType: word16
T_104: (in (byte) bx_170 : byte)
  Class: Eq_70
  DataType: byte
  OrigDataType: byte
T_105: (in SLICE(bx_170, byte, 8) : byte)
  Class: Eq_73
  DataType: byte
  OrigDataType: byte
T_106: (in 0x9B61 : word16)
  Class: Eq_66
  DataType: int16
  OrigDataType: word16
T_107: (in bx_170 != 0x9B61 : bool)
  Class: Eq_107
  DataType: bool
  OrigDataType: bool
T_108: (in ax_109 : int16)
  Class: Eq_108
  DataType: int16
  OrigDataType: word16
T_109: (in (int16) bl_171 : int16)
  Class: Eq_108
  DataType: int16
  OrigDataType: int16
T_110: (in ax_104 : int16)
  Class: Eq_110
  DataType: int16
  OrigDataType: word16
T_111: (in bh_100 ^ ah_151 : byte)
  Class: Eq_111
  DataType: byte
  OrigDataType: byte
T_112: (in (int16) (bh_100 ^ ah_151) : int16)
  Class: Eq_110
  DataType: int16
  OrigDataType: int16
T_113: (in al_112 : byte)
  Class: Eq_113
  DataType: byte
  OrigDataType: byte
T_114: (in (byte) ax_109 : byte)
  Class: Eq_114
  DataType: byte
  OrigDataType: byte
T_115: (in SLICE(ax_109, byte, 8) : byte)
  Class: Eq_115
  DataType: byte
  OrigDataType: byte
T_116: (in (byte) ax_109 ^ SLICE(ax_109, byte, 8) : byte)
  Class: Eq_113
  DataType: byte
  OrigDataType: byte
T_117: (in cx_114 : word16)
  Class: Eq_117
  DataType: word16
  OrigDataType: word16
T_118: (in (byte) ax_104 : byte)
  Class: Eq_118
  DataType: byte
  OrigDataType: byte
T_119: (in (byte) ax_104 + al_112 : byte)
  Class: Eq_119
  DataType: byte
  OrigDataType: byte
T_120: (in DPB(ax_104, (byte) ax_104 + al_112, 0, 8) : word16)
  Class: Eq_117
  DataType: word16
  OrigDataType: word16
T_121: (in ax_118 : word16)
  Class: Eq_121
  DataType: word16
  OrigDataType: word16
T_122: (in DPB(ax_109, al_112, 8, 8) : word16)
  Class: Eq_121
  DataType: word16
  OrigDataType: word16
T_123: (in (word32) ax_118 : word32)
  Class: Eq_123
  DataType: word32
  OrigDataType: word32
T_124: (in 0x0001 : word16)
  Class: Eq_124
  DataType: word16
  OrigDataType: word16
T_125: (in cx_114 + 0x0001 : word16)
  Class: Eq_125
  DataType: word16
  OrigDataType: word16
T_126: (in (word32) ax_118 % (cx_114 + 0x0001) : int16)
  Class: Eq_126
  DataType: int16
  OrigDataType: int16
T_127: (in SEQ((word32) ax_118 % (cx_114 + 0x0001), ax_118) : word32)
  Class: Eq_127
  DataType: int32
  OrigDataType: int32
T_128: (in cx_114 + 0x0001 : word16)
  Class: Eq_128
  DataType: int16
  OrigDataType: int16
T_129: (in SEQ((word32) ax_118 % (cx_114 + 0x0001), ax_118) / (cx_114 + 0x0001) : int16)
  Class: Eq_129
  DataType: Eq_129
  OrigDataType: (union (int16 u0) (uint16 u1))
T_130: (in 0x0002 : word16)
  Class: Eq_130
  DataType: uint16
  OrigDataType: uint16
T_131: (in SEQ((word32) ax_118 % (cx_114 + 0x0001), ax_118) / (cx_114 + 0x0001) >>u 0x0002 : word16)
  Class: Eq_131
  DataType: uint16
  OrigDataType: uint16
T_132: (in 0x001F : word16)
  Class: Eq_132
  DataType: word16
  OrigDataType: word16
T_133: (in SEQ((word32) ax_118 % (cx_114 + 0x0001), ax_118) / (cx_114 + 0x0001) >>u 0x0002 & 0x001F : word16)
  Class: Eq_88
  DataType: word16
  OrigDataType: word16
T_134: (in al_129 : int8)
  Class: Eq_134
  DataType: int8
  OrigDataType: int8
T_135: (in (byte) bx_170 : byte)
  Class: Eq_134
  DataType: int8
  OrigDataType: byte
T_136: (in cx_114 + 0x0001 : word16)
  Class: Eq_28
  DataType: uint16
  OrigDataType: word16
T_137: (in SLICE(ax_124, byte, 8) : byte)
  Class: Eq_90
  DataType: byte
  OrigDataType: byte
T_138: (in al_129 *s al_129 : int16)
  Class: Eq_138
  DataType: int16
  OrigDataType: int16
T_139: (in bx_170 *s bx_170 : int32)
  Class: Eq_139
  DataType: int32
  OrigDataType: int32
T_140: (in SLICE(bx_170 *s bx_170, word16, 16) : word16)
  Class: Eq_140
  DataType: word16
  OrigDataType: word16
T_141: (in al_129 *s al_129 + SLICE(bx_170 *s bx_170, word16, 16) : word16)
  Class: Eq_82
  DataType: int16
  OrigDataType: word16
T_142: (in 0x0000 : word16)
  Class: Eq_76
  DataType: word16
  OrigDataType: word16
T_143: (in 0x0001 : word16)
  Class: Eq_143
  DataType: word16
  OrigDataType: word16
T_144: (in si + 0x0001 : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_145: (in 0x0100 : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
*/
typedef Eq_96 Eq_1struct Globals {
	Eq_96 * ptrFFFA0000;	// FFFA0000
} Eq_1;

typedef void (Eq_2)(byte);

typedef void (Eq_11)(word16, uint16);

typedef union Eq_21 {
	uint16 u0;
	bcu8 uint16::* u1;
} Eq_21;

typedef union Eq_66 {
	int16 u0;
	byte Eq_96::* u1;
} Eq_66;

typedef struct Eq_96 {
} Eq_96;

typedef union Eq_129 {
	int16 u0;
	uint16 u1;
} Eq_129;

