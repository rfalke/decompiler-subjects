// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_165/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_111) ptrFFFA0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_11: (fn void (word16, int16))
	T_11 (in __outw : ptr32)
Eq_30: (struct 0001 (0 bcu8 b0000))
	T_30 (in bx : word16)
	T_44 (in bx - 0x0001 : word16)
	T_49 (in 0x0000 : word16)
	T_107 (in DPB(bx, bh_141, 8, 8) : word16)
Eq_70: (union (int16 u0) (uint16 u1) ((memptr int16 (struct (0 byte b0000))) u2))
	T_70 (in bp_143 : word16)
	T_71 (in 0x0000 : word16)
	T_76 (in ax_132 : word16)
	T_81 (in (int16) (byte) ((bp_143 >>u cl_126) + si_110) : int16)
	T_109 (in bp_143 + 0x0001 : word16)
	T_135 (in DPB(ax_178, al_153, 0, 8) : word16)
	T_141 (in DPB(ax_132, al_153, 0, 8) : word16)
Eq_72: (union (uint8 u0) (ui16 u1))
	T_72 (in cl_126 : byte)
	T_75 (in cl_119 << 0x01 : word16)
Eq_82: (fn void (word16, uint16))
	T_82 (in __outb : ptr32)
Eq_111: (segment)
	T_111 (in 0xA000 : selector)
Eq_112: (struct 0001 (0 byte b0000))
	T_112 (in di : word16)
	T_117 (in di + 0x0001 : word16)
Eq_143: (fn byte (byte))
	T_143 (in __inb : ptr32)
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
T_7: (in ax_8 : word16)
  Class: Eq_7
  DataType: int16
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
  DataType: int16
  OrigDataType: word16
T_11: (in __outw : ptr32)
  Class: Eq_11
  DataType: (ptr Eq_11)
  OrigDataType: (ptr (fn T_13 (T_12, T_7)))
T_12: (in 0x03D4 : word16)
  Class: Eq_12
  DataType: word16
  OrigDataType: word16
T_13: (in __outw(0x03D4, ax_8) : void)
  Class: Eq_13
  DataType: void
  OrigDataType: void
T_14: (in dx_21 : word16)
  Class: Eq_14
  DataType: int16
  OrigDataType: int16
T_15: (in 0x03D4 : word16)
  Class: Eq_14
  DataType: int16
  OrigDataType: word16
T_16: (in cx_111 : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_17: (in 0x0020 : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_18: (in cl_13 : byte)
  Class: Eq_18
  DataType: bcu8
  OrigDataType: bcu8
T_19: (in 0x20 : byte)
  Class: Eq_18
  DataType: bcu8
  OrigDataType: byte
T_20: (in ax_191 : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: int16
T_21: (in dh_43 : byte)
  Class: Eq_21
  DataType: int8
  OrigDataType: int8
T_22: (in dh_43 *s dh_43 : int16)
  Class: Eq_22
  DataType: int16
  OrigDataType: int16
T_23: (in dl_42 : byte)
  Class: Eq_23
  DataType: int8
  OrigDataType: int8
T_24: (in dl_42 *s dl_42 : int16)
  Class: Eq_24
  DataType: int16
  OrigDataType: int16
T_25: (in dh_43 *s dh_43 + dl_42 *s dl_42 : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: word16
T_26: (in ah_190 : byte)
  Class: Eq_26
  DataType: bcu8
  OrigDataType: bcu8
T_27: (in SLICE(ax_191, byte, 8) : byte)
  Class: Eq_26
  DataType: bcu8
  OrigDataType: byte
T_28: (in 0x1F : byte)
  Class: Eq_26
  DataType: bcu8
  OrigDataType: bcu8
T_29: (in ah_190 <=u 0x1F : bool)
  Class: Eq_29
  DataType: bool
  OrigDataType: bool
T_30: (in bx : word16)
  Class: Eq_30
  DataType: (memptr int16 Eq_30)
  OrigDataType: (memptr T_7 (struct 0001 (0 T_18 t0000)))
T_31: (in 0x0000 : word16)
  Class: Eq_31
  DataType: word16
  OrigDataType: word16
T_32: (in bx + 0x0000 : word16)
  Class: Eq_32
  DataType: word16
  OrigDataType: word16
T_33: (in Mem193[ax_8:bx + 0x0000:byte] : byte)
  Class: Eq_18
  DataType: bcu8
  OrigDataType: byte
T_34: (in 0x0000 : word16)
  Class: Eq_34
  DataType: word16
  OrigDataType: word16
T_35: (in bx + 0x0000 : word16)
  Class: Eq_35
  DataType: word16
  OrigDataType: word16
T_36: (in Mem0[ax_8:bx + 0x0000:byte] : byte)
  Class: Eq_18
  DataType: bcu8
  OrigDataType: byte
T_37: (in Mem0[ax_8:bx + 0x0000:byte] + ah_190 : byte)
  Class: Eq_18
  DataType: bcu8
  OrigDataType: byte
T_38: (in 0x0000 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_39: (in bx + 0x0000 : word16)
  Class: Eq_39
  DataType: word16
  OrigDataType: word16
T_40: (in Mem75[ax_8:bx + 0x0000:byte] : byte)
  Class: Eq_18
  DataType: bcu8
  OrigDataType: byte
T_41: (in 0x0001 : word16)
  Class: Eq_41
  DataType: word16
  OrigDataType: word16
T_42: (in dx_21 + 0x0001 : word16)
  Class: Eq_14
  DataType: int16
  OrigDataType: word16
T_43: (in 0x0001 : word16)
  Class: Eq_43
  DataType: word16
  OrigDataType: word16
T_44: (in bx - 0x0001 : word16)
  Class: Eq_30
  DataType: (memptr int16 Eq_30)
  OrigDataType: word16
T_45: (in (byte) dx_21 : byte)
  Class: Eq_23
  DataType: int8
  OrigDataType: byte
T_46: (in SLICE(dx_21, byte, 8) : byte)
  Class: Eq_21
  DataType: int8
  OrigDataType: byte
T_47: (in bh_141 : byte)
  Class: Eq_47
  DataType: byte
  OrigDataType: byte
T_48: (in SLICE(bx, byte, 8) : byte)
  Class: Eq_47
  DataType: byte
  OrigDataType: byte
T_49: (in 0x0000 : word16)
  Class: Eq_30
  DataType: (memptr int16 Eq_30)
  OrigDataType: word16
T_50: (in bx != 0x0000 : bool)
  Class: Eq_50
  DataType: bool
  OrigDataType: bool
T_51: (in 0x1F : byte)
  Class: Eq_26
  DataType: bcu8
  OrigDataType: byte
T_52: (in 0x1F : byte)
  Class: Eq_52
  DataType: byte
  OrigDataType: byte
T_53: (in DPB(ax_191, 0x1F, 8, 8) : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: word16
T_54: (in 0x1E : byte)
  Class: Eq_18
  DataType: bcu8
  OrigDataType: bcu8
T_55: (in cl_13 <u 0x1E : bool)
  Class: Eq_55
  DataType: bool
  OrigDataType: bool
T_56: (in 0x0001 : word16)
  Class: Eq_56
  DataType: word16
  OrigDataType: word16
T_57: (in cx_111 - 0x0001 : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_58: (in (byte) cx_111 : byte)
  Class: Eq_18
  DataType: bcu8
  OrigDataType: byte
T_59: (in 0x0000 : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_60: (in cx_111 != 0x0000 : bool)
  Class: Eq_60
  DataType: bool
  OrigDataType: bool
T_61: (in ax_34 : word16)
  Class: Eq_61
  DataType: word16
  OrigDataType: word16
T_62: (in dx_21 *s ax_191 : int32)
  Class: Eq_62
  DataType: int32
  OrigDataType: int32
T_63: (in (word16) (dx_21 *s ax_191) : word16)
  Class: Eq_61
  DataType: word16
  OrigDataType: word16
T_64: (in 0x0001 : word16)
  Class: Eq_64
  DataType: word16
  OrigDataType: word16
T_65: (in ax_34 + 0x0001 : word16)
  Class: Eq_14
  DataType: int16
  OrigDataType: word16
T_66: (in ax_34 + 0x0001 : word16)
  Class: Eq_66
  DataType: word16
  OrigDataType: word16
T_67: (in (byte) (ax_34 + 0x0001) : byte)
  Class: Eq_23
  DataType: int8
  OrigDataType: byte
T_68: (in ax_34 + 0x0001 : word16)
  Class: Eq_68
  DataType: word16
  OrigDataType: word16
T_69: (in SLICE(ax_34 + 0x0001, byte, 8) : byte)
  Class: Eq_21
  DataType: int8
  OrigDataType: byte
T_70: (in bp_143 : word16)
  Class: Eq_70
  DataType: Eq_70
  OrigDataType: (union (uint16 u0) ((memptr T_7 (struct (0 T_137 t0000))) u1))
T_71: (in 0x0000 : word16)
  Class: Eq_70
  DataType: Eq_70
  OrigDataType: word16
T_72: (in cl_126 : byte)
  Class: Eq_72
  DataType: Eq_72
  OrigDataType: uint8
T_73: (in cl_119 : byte)
  Class: Eq_73
  DataType: bcu8
  OrigDataType: bcu8
T_74: (in 0x01 : byte)
  Class: Eq_74
  DataType: byte
  OrigDataType: byte
T_75: (in cl_119 << 0x01 : word16)
  Class: Eq_72
  DataType: Eq_72
  OrigDataType: ui16
T_76: (in ax_132 : word16)
  Class: Eq_70
  DataType: Eq_70
  OrigDataType: cups16
T_77: (in bp_143 >>u cl_126 : word16)
  Class: Eq_77
  DataType: uint16
  OrigDataType: uint16
T_78: (in si_110 : word16)
  Class: Eq_78
  DataType: word16
  OrigDataType: word16
T_79: (in (bp_143 >>u cl_126) + si_110 : word16)
  Class: Eq_79
  DataType: word16
  OrigDataType: word16
T_80: (in (byte) ((bp_143 >>u cl_126) + si_110) : byte)
  Class: Eq_80
  DataType: byte
  OrigDataType: byte
T_81: (in (int16) (byte) ((bp_143 >>u cl_126) + si_110) : int16)
  Class: Eq_70
  DataType: Eq_70
  OrigDataType: int16
T_82: (in __outb : ptr32)
  Class: Eq_82
  DataType: (ptr Eq_82)
  OrigDataType: (ptr (fn T_89 (T_83, T_88)))
T_83: (in 0x03C9 : word16)
  Class: Eq_83
  DataType: word16
  OrigDataType: word16
T_84: (in (byte) ax_132 : byte)
  Class: Eq_84
  DataType: byte
  OrigDataType: byte
T_85: (in SLICE(ax_132, byte, 8) : byte)
  Class: Eq_85
  DataType: byte
  OrigDataType: byte
T_86: (in (byte) ax_132 ^ SLICE(ax_132, byte, 8) : byte)
  Class: Eq_86
  DataType: uint8
  OrigDataType: uint8
T_87: (in 0x01 : byte)
  Class: Eq_87
  DataType: uint8
  OrigDataType: uint8
T_88: (in ((byte) ax_132 ^ SLICE(ax_132, byte, 8)) >>u 0x01 : word16)
  Class: Eq_88
  DataType: uint16
  OrigDataType: uint16
T_89: (in __outb(0x03C9, ((byte) ax_132 ^ SLICE(ax_132, byte, 8)) >>u 0x01) : void)
  Class: Eq_89
  DataType: void
  OrigDataType: void
T_90: (in cx_118 : word16)
  Class: Eq_90
  DataType: word16
  OrigDataType: word16
T_91: (in 0x01 : byte)
  Class: Eq_91
  DataType: uint8
  OrigDataType: uint8
T_92: (in cl_126 >>u 0x01 : word16)
  Class: Eq_92
  DataType: uint16
  OrigDataType: uint16
T_93: (in DPB(cx_118, cl_126 >>u 0x01, 0, 8) : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_94: (in 0x0001 : word16)
  Class: Eq_94
  DataType: word16
  OrigDataType: word16
T_95: (in si_110 - 0x0001 : word16)
  Class: Eq_78
  DataType: word16
  OrigDataType: word16
T_96: (in 0x0000 : word16)
  Class: Eq_78
  DataType: word16
  OrigDataType: word16
T_97: (in si_110 != 0x0000 : bool)
  Class: Eq_97
  DataType: bool
  OrigDataType: bool
T_98: (in 0x0000 : word16)
  Class: Eq_90
  DataType: word16
  OrigDataType: word16
T_99: (in 0x00 : byte)
  Class: Eq_73
  DataType: bcu8
  OrigDataType: byte
T_100: (in 0x0001 : word16)
  Class: Eq_100
  DataType: word16
  OrigDataType: word16
T_101: (in cx_111 + 0x0001 : word16)
  Class: Eq_90
  DataType: word16
  OrigDataType: word16
T_102: (in (byte) cx_118 : byte)
  Class: Eq_73
  DataType: bcu8
  OrigDataType: byte
T_103: (in 0x03 : byte)
  Class: Eq_73
  DataType: bcu8
  OrigDataType: bcu8
T_104: (in cl_119 <u 0x03 : bool)
  Class: Eq_104
  DataType: bool
  OrigDataType: bool
T_105: (in 0x01 : byte)
  Class: Eq_105
  DataType: byte
  OrigDataType: byte
T_106: (in bh_141 - 0x01 : byte)
  Class: Eq_47
  DataType: byte
  OrigDataType: byte
T_107: (in DPB(bx, bh_141, 8, 8) : word16)
  Class: Eq_30
  DataType: (memptr int16 Eq_30)
  OrigDataType: word16
T_108: (in 0x0001 : word16)
  Class: Eq_108
  DataType: word16
  OrigDataType: word16
T_109: (in bp_143 + 0x0001 : word16)
  Class: Eq_70
  DataType: Eq_70
  OrigDataType: word16
T_110: (in al_153 : byte)
  Class: Eq_110
  DataType: byte
  OrigDataType: byte
T_111: (in 0xA000 : selector)
  Class: Eq_111
  DataType: (ptr Eq_111)
  OrigDataType: (ptr (segment))
T_112: (in di : word16)
  Class: Eq_112
  DataType: (memptr (ptr Eq_111) Eq_112)
  OrigDataType: (memptr T_111 (struct 0001 (0 T_115 t0000)))
T_113: (in 0x0000 : word16)
  Class: Eq_113
  DataType: word16
  OrigDataType: word16
T_114: (in di + 0x0000 : word16)
  Class: Eq_114
  DataType: word16
  OrigDataType: word16
T_115: (in Mem163[0xA000:di + 0x0000:byte] : byte)
  Class: Eq_110
  DataType: byte
  OrigDataType: byte
T_116: (in 0x0001 : word16)
  Class: Eq_116
  DataType: word16
  OrigDataType: word16
T_117: (in di + 0x0001 : word16)
  Class: Eq_112
  DataType: (memptr (ptr Eq_111) Eq_112)
  OrigDataType: word16
T_118: (in 0x0001 : word16)
  Class: Eq_118
  DataType: word16
  OrigDataType: word16
T_119: (in si_110 - 0x0001 : word16)
  Class: Eq_78
  DataType: word16
  OrigDataType: word16
T_120: (in 0x0000 : word16)
  Class: Eq_78
  DataType: word16
  OrigDataType: word16
T_121: (in si_110 != 0x0000 : bool)
  Class: Eq_121
  DataType: bool
  OrigDataType: bool
T_122: (in ax_171 : word16)
  Class: Eq_122
  DataType: int16
  OrigDataType: word16
T_123: (in (int16) al_153 : int16)
  Class: Eq_122
  DataType: int16
  OrigDataType: int16
T_124: (in ax_178 : word16)
  Class: Eq_124
  DataType: word16
  OrigDataType: word16
T_125: (in (byte) ax_171 : byte)
  Class: Eq_125
  DataType: byte
  OrigDataType: byte
T_126: (in SLICE(ax_171, byte, 8) : byte)
  Class: Eq_126
  DataType: byte
  OrigDataType: byte
T_127: (in (byte) ax_171 ^ SLICE(ax_171, byte, 8) : byte)
  Class: Eq_127
  DataType: uint8
  OrigDataType: uint8
T_128: (in 0x02 : byte)
  Class: Eq_128
  DataType: uint8
  OrigDataType: uint8
T_129: (in ((byte) ax_171 ^ SLICE(ax_171, byte, 8)) >>u 0x02 : word16)
  Class: Eq_129
  DataType: uint16
  OrigDataType: uint16
T_130: (in DPB(ax_171, ((byte) ax_171 ^ SLICE(ax_171, byte, 8)) >>u 0x02, 8, 8) : word16)
  Class: Eq_130
  DataType: word16
  OrigDataType: word16
T_131: (in DPB(ax_171, ((byte) ax_171 ^ SLICE(ax_171, byte, 8)) >>u 0x02, 8, 8) + si_110 : word16)
  Class: Eq_124
  DataType: word16
  OrigDataType: word16
T_132: (in (byte) ax_178 : byte)
  Class: Eq_132
  DataType: byte
  OrigDataType: byte
T_133: (in SLICE(ax_178, byte, 8) : byte)
  Class: Eq_133
  DataType: byte
  OrigDataType: byte
T_134: (in (byte) ax_178 ^ SLICE(ax_178, byte, 8) : byte)
  Class: Eq_110
  DataType: byte
  OrigDataType: byte
T_135: (in DPB(ax_178, al_153, 0, 8) : word16)
  Class: Eq_70
  DataType: Eq_70
  OrigDataType: word16
T_136: (in bp_143 + si_110 : word16)
  Class: Eq_136
  DataType: word16
  OrigDataType: word16
T_137: (in Mem75[ax_8:bp_143 + si_110:byte] : byte)
  Class: Eq_137
  DataType: byte
  OrigDataType: byte
T_138: (in bx + si_110 : word16)
  Class: Eq_138
  DataType: word16
  OrigDataType: word16
T_139: (in Mem75[ax_8:bx + si_110:byte] : byte)
  Class: Eq_18
  DataType: bcu8
  OrigDataType: byte
T_140: (in Mem75[ax_8:bp_143 + si_110:byte] + Mem75[ax_8:bx + si_110:byte] : byte)
  Class: Eq_110
  DataType: byte
  OrigDataType: byte
T_141: (in DPB(ax_132, al_153, 0, 8) : word16)
  Class: Eq_70
  DataType: Eq_70
  OrigDataType: word16
T_142: (in ax_132 <u bp_143 : bool)
  Class: Eq_142
  DataType: bool
  OrigDataType: bool
T_143: (in __inb : ptr32)
  Class: Eq_143
  DataType: (ptr Eq_143)
  OrigDataType: (ptr (fn T_145 (T_144)))
T_144: (in 0x60 : byte)
  Class: Eq_144
  DataType: byte
  OrigDataType: byte
T_145: (in __inb(0x60) : byte)
  Class: Eq_145
  DataType: byte
  OrigDataType: byte
T_146: (in 0x01 : byte)
  Class: Eq_145
  DataType: byte
  OrigDataType: byte
T_147: (in __inb(0x60) != 0x01 : bool)
  Class: Eq_147
  DataType: bool
  OrigDataType: bool
T_148: (in 0x0300 : word16)
  Class: Eq_78
  DataType: word16
  OrigDataType: word16
*/
typedef  Eq_1struct Globals {
	 * ptrFFFA0000;	// FFFA0000
} Eq_1;

typedef void (Eq_2)(byte);

typedef void (Eq_11)(word16, int16);

typedef struct  {	// size: 1 1
	bcu8 b0000;	// 0
} Eq_30;

typedef union  {
	int16 u0;
	uint16 u1;
	struct <anonymous> int16::* u2;
} Eq_70;

typedef union  {
	uint8 u0;
	ui16 u1;
} Eq_72;

typedef void (Eq_82)(word16, uint16);

typedef struct  {
} Eq_111;

typedef struct  {	// size: 1 1
	byte b0000;	// 0
} Eq_112;

typedef byte (Eq_143)(byte);

