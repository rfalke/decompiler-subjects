// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_166/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_12) ptrFFFA0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_11: (struct "Eq_11" (FFFF80E4 byte bFFFF80E4) (FFFF8224 byte bFFFF8224) (FFFF8225 byte bFFFF8225))
	T_11 (in bx_34 : (memptr (ptr Eq_12) Eq_11))
	T_19 (in ds->w0182 *s 0x013F + ds->w0180 : word16)
Eq_12: (segment "Eq_12" (FFFFFA00 (struct "Eq_91" 0001 (0 byte b0000) (184 byte b0184)) tFFFFFA00) (0 (arr byte 1535) a0000) (15A word16 w015A) (176 word16 w0176) (178 Eq_46 t0178) (17C Eq_57 t017C) (180 int16 w0180) (182 int16 w0182) (184 (arr byte 1535) a0184) (FA00 Eq_91 tFA00))
	T_12 (in ds : (ptr Eq_12))
	T_94 (in 0xA000 : selector)
Eq_44: (fn Eq_47 (Eq_46))
	T_44 (in sin : ptr32)
Eq_46: (union "Eq_46" (real32 u0) (word16 u1))
	T_46 (in Mem40[ds:0x0178:real32] : real32)
	T_67 (in Mem48[ds:0x0178:word16] : word16)
	T_69 (in Mem48[ds:0x0178:word16] + 0x0062 : word16)
	T_70 (in Mem50[ds:0x0178:word16] : word16)
	T_82 (in Mem52[ds:0x0178:word16] : word16)
	T_84 (in ds->t0178 - 0x1ACD : word16)
	T_85 (in Mem58[ds:0x0178:word16] : word16)
Eq_47: (union "Eq_47" (real16 u0) (real64 u1))
	T_47 (in sin(ds->t0178) : real64)
Eq_50: (union "Eq_50" (real16 u0) (real64 u1))
	T_50 (in (real64) ds->w015A : real64)
Eq_55: (fn Eq_58 (Eq_57))
	T_55 (in cos : ptr32)
Eq_57: (union "Eq_57" (real32 u0) (word16 u1))
	T_57 (in Mem44[ds:0x017C:real32] : real32)
	T_72 (in Mem50[ds:0x017C:word16] : word16)
	T_74 (in Mem50[ds:0x017C:word16] + 0x009E : word16)
	T_75 (in Mem52[ds:0x017C:word16] : word16)
	T_87 (in Mem58[ds:0x017C:word16] : word16)
	T_89 (in ds->t017C - 0x2B37 : word16)
	T_90 (in Mem60[ds:0x017C:word16] : word16)
Eq_58: (union "Eq_58" (real16 u0) (real64 u1))
	T_58 (in cos(ds->t017C) : real64)
Eq_61: (union "Eq_61" (real16 u0) (real64 u1))
	T_61 (in (real64) ds->w0176 : real64)
Eq_91: (struct "Eq_91" 0001 (0 byte b0000) (184 byte b0184))
	T_91 (in bx_62 : (memptr (ptr Eq_12) Eq_91))
	T_92 (in 0xFA00 : word16)
	T_99 (in bx_62 - 0x0001 : word16)
	T_100 (in 0x0000 : word16)
Eq_116: (fn word16 (byte))
	T_116 (in __inw : ptr32)
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
T_7: (in ax_23 : word16)
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
T_11: (in bx_34 : (memptr (ptr Eq_12) Eq_11))
  Class: Eq_11
  DataType: (memptr (ptr Eq_12) Eq_11)
  OrigDataType: (memptr T_12 (struct (FFFF80E4 T_38 tFFFF80E4) (FFFF8224 T_22 tFFFF8224) (FFFF8225 T_30 tFFFF8225)))
T_12: (in ds : (ptr Eq_12))
  Class: Eq_12
  DataType: (ptr Eq_12)
  OrigDataType: (ptr (segment (15A T_49 t015A) (176 T_60 t0176) (178 T_46 t0178) (17C T_57 t017C) (180 T_18 t0180) (182 T_14 t0182) (184 (arr T_126 1535) a0184)))
T_13: (in 0x0182 : word16)
  Class: Eq_13
  DataType: (memptr (ptr Eq_12) int16)
  OrigDataType: (memptr T_12 (struct (0 T_14 t0000)))
T_14: (in Mem0[ds:0x0182:word16] : word16)
  Class: Eq_14
  DataType: int16
  OrigDataType: int16
T_15: (in 0x013F : word16)
  Class: Eq_15
  DataType: int16
  OrigDataType: int16
T_16: (in ds->w0182 *s 0x013F : int16)
  Class: Eq_16
  DataType: int16
  OrigDataType: int16
T_17: (in 0x0180 : word16)
  Class: Eq_17
  DataType: (memptr (ptr Eq_12) int16)
  OrigDataType: (memptr T_12 (struct (0 T_18 t0000)))
T_18: (in Mem0[ds:0x0180:word16] : word16)
  Class: Eq_18
  DataType: int16
  OrigDataType: word16
T_19: (in ds->w0182 *s 0x013F + ds->w0180 : word16)
  Class: Eq_11
  DataType: (memptr (ptr Eq_12) Eq_11)
  OrigDataType: word16
T_20: (in 0x8224 : word16)
  Class: Eq_20
  DataType: word16
  OrigDataType: word16
T_21: (in bx_34 + 0x8224 : word16)
  Class: Eq_21
  DataType: word16
  OrigDataType: word16
T_22: (in Mem0[ds:bx_34 + 0x8224:byte] : byte)
  Class: Eq_22
  DataType: byte
  OrigDataType: byte
T_23: (in 0x18 : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_24: (in (ds->*bx_34).bFFFF8225 + 0x18 : byte)
  Class: Eq_22
  DataType: byte
  OrigDataType: byte
T_25: (in 0x8224 : word16)
  Class: Eq_25
  DataType: word16
  OrigDataType: word16
T_26: (in bx_34 + 0x8224 : word16)
  Class: Eq_26
  DataType: word16
  OrigDataType: word16
T_27: (in Mem36[ds:bx_34 + 0x8224:byte] : byte)
  Class: Eq_22
  DataType: byte
  OrigDataType: byte
T_28: (in 0x8225 : word16)
  Class: Eq_28
  DataType: word16
  OrigDataType: word16
T_29: (in bx_34 + 0x8225 : word16)
  Class: Eq_29
  DataType: word16
  OrigDataType: word16
T_30: (in Mem36[ds:bx_34 + 0x8225:byte] : byte)
  Class: Eq_30
  DataType: byte
  OrigDataType: byte
T_31: (in 0x10 : byte)
  Class: Eq_31
  DataType: byte
  OrigDataType: byte
T_32: (in (ds->*bx_34).bFFFF8225 + 0x10 : byte)
  Class: Eq_30
  DataType: byte
  OrigDataType: byte
T_33: (in 0x8225 : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_34: (in bx_34 + 0x8225 : word16)
  Class: Eq_34
  DataType: word16
  OrigDataType: word16
T_35: (in Mem38[ds:bx_34 + 0x8225:byte] : byte)
  Class: Eq_30
  DataType: byte
  OrigDataType: byte
T_36: (in 0x80E4 : word16)
  Class: Eq_36
  DataType: word16
  OrigDataType: word16
T_37: (in bx_34 + 0x80E4 : word16)
  Class: Eq_37
  DataType: word16
  OrigDataType: word16
T_38: (in Mem38[ds:bx_34 + 0x80E4:byte] : byte)
  Class: Eq_38
  DataType: byte
  OrigDataType: byte
T_39: (in 0x10 : byte)
  Class: Eq_39
  DataType: byte
  OrigDataType: byte
T_40: (in (ds->*bx_34).bFFFF8225 + 0x10 : byte)
  Class: Eq_38
  DataType: byte
  OrigDataType: byte
T_41: (in 0x80E4 : word16)
  Class: Eq_41
  DataType: word16
  OrigDataType: word16
T_42: (in bx_34 + 0x80E4 : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_43: (in Mem40[ds:bx_34 + 0x80E4:byte] : byte)
  Class: Eq_38
  DataType: byte
  OrigDataType: byte
T_44: (in sin : ptr32)
  Class: Eq_44
  DataType: (ptr Eq_44)
  OrigDataType: (ptr (fn T_47 (T_46)))
T_45: (in 0x0178 : word16)
  Class: Eq_45
  DataType: (memptr (ptr Eq_12) Eq_46)
  OrigDataType: (memptr T_12 (struct (0 T_46 t0000)))
T_46: (in Mem40[ds:0x0178:real32] : real32)
  Class: Eq_46
  DataType: Eq_46
  OrigDataType: real32
T_47: (in sin(ds->t0178) : real64)
  Class: Eq_47
  DataType: Eq_47
  OrigDataType: (union (real16 u0) (real64 u1))
T_48: (in 0x015A : word16)
  Class: Eq_48
  DataType: (memptr (ptr Eq_12) word16)
  OrigDataType: (memptr T_12 (struct (0 T_49 t0000)))
T_49: (in Mem40[ds:0x015A:word16] : word16)
  Class: Eq_49
  DataType: word16
  OrigDataType: word16
T_50: (in (real64) ds->w015A : real64)
  Class: Eq_50
  DataType: Eq_50
  OrigDataType: (union (real16 u0) (real64 u1))
T_51: (in sin(ds->t0178) * (real64) ds->w015A : word16)
  Class: Eq_51
  DataType: real16
  OrigDataType: real16
T_52: (in (int16) (sin(ds->t0178) * (real64) ds->w015A) : int16)
  Class: Eq_18
  DataType: int16
  OrigDataType: int16
T_53: (in 0x0180 : word16)
  Class: Eq_53
  DataType: (memptr (ptr Eq_12) int16)
  OrigDataType: (memptr T_12 (struct (0 T_54 t0000)))
T_54: (in Mem44[ds:0x0180:int16] : int16)
  Class: Eq_18
  DataType: int16
  OrigDataType: int16
T_55: (in cos : ptr32)
  Class: Eq_55
  DataType: (ptr Eq_55)
  OrigDataType: (ptr (fn T_58 (T_57)))
T_56: (in 0x017C : word16)
  Class: Eq_56
  DataType: (memptr (ptr Eq_12) Eq_57)
  OrigDataType: (memptr T_12 (struct (0 T_57 t0000)))
T_57: (in Mem44[ds:0x017C:real32] : real32)
  Class: Eq_57
  DataType: Eq_57
  OrigDataType: real32
T_58: (in cos(ds->t017C) : real64)
  Class: Eq_58
  DataType: Eq_58
  OrigDataType: (union (real16 u0) (real64 u1))
T_59: (in 0x0176 : word16)
  Class: Eq_59
  DataType: (memptr (ptr Eq_12) word16)
  OrigDataType: (memptr T_12 (struct (0 T_60 t0000)))
T_60: (in Mem44[ds:0x0176:word16] : word16)
  Class: Eq_60
  DataType: word16
  OrigDataType: word16
T_61: (in (real64) ds->w0176 : real64)
  Class: Eq_61
  DataType: Eq_61
  OrigDataType: (union (real16 u0) (real64 u1))
T_62: (in cos(ds->t017C) * (real64) ds->w0176 : word16)
  Class: Eq_62
  DataType: real16
  OrigDataType: real16
T_63: (in (int16) (cos(ds->t017C) * (real64) ds->w0176) : int16)
  Class: Eq_14
  DataType: int16
  OrigDataType: int16
T_64: (in 0x0182 : word16)
  Class: Eq_64
  DataType: (memptr (ptr Eq_12) int16)
  OrigDataType: (memptr T_12 (struct (0 T_65 t0000)))
T_65: (in Mem48[ds:0x0182:int16] : int16)
  Class: Eq_14
  DataType: int16
  OrigDataType: int16
T_66: (in 0x0178 : word16)
  Class: Eq_66
  DataType: (memptr (ptr Eq_12) Eq_46)
  OrigDataType: (memptr T_12 (struct (0 T_46 t0000)))
T_67: (in Mem48[ds:0x0178:word16] : word16)
  Class: Eq_46
  DataType: Eq_46
  OrigDataType: word16
T_68: (in 0x0062 : word16)
  Class: Eq_68
  DataType: word16
  OrigDataType: word16
T_69: (in Mem48[ds:0x0178:word16] + 0x0062 : word16)
  Class: Eq_46
  DataType: Eq_46
  OrigDataType: word16
T_70: (in Mem50[ds:0x0178:word16] : word16)
  Class: Eq_46
  DataType: Eq_46
  OrigDataType: word16
T_71: (in 0x017C : word16)
  Class: Eq_71
  DataType: (memptr (ptr Eq_12) Eq_57)
  OrigDataType: (memptr T_12 (struct (0 T_57 t0000)))
T_72: (in Mem50[ds:0x017C:word16] : word16)
  Class: Eq_57
  DataType: Eq_57
  OrigDataType: word16
T_73: (in 0x009E : word16)
  Class: Eq_73
  DataType: word16
  OrigDataType: word16
T_74: (in Mem50[ds:0x017C:word16] + 0x009E : word16)
  Class: Eq_57
  DataType: Eq_57
  OrigDataType: word16
T_75: (in Mem52[ds:0x017C:word16] : word16)
  Class: Eq_57
  DataType: Eq_57
  OrigDataType: word16
T_76: (in cx : word16)
  Class: Eq_76
  DataType: word16
  OrigDataType: word16
T_77: (in 0x0001 : word16)
  Class: Eq_77
  DataType: word16
  OrigDataType: word16
T_78: (in cx - 0x0001 : word16)
  Class: Eq_76
  DataType: word16
  OrigDataType: word16
T_79: (in 0x0000 : word16)
  Class: Eq_76
  DataType: word16
  OrigDataType: word16
T_80: (in cx != 0x0000 : bool)
  Class: Eq_80
  DataType: bool
  OrigDataType: bool
T_81: (in 0x0178 : word16)
  Class: Eq_81
  DataType: (memptr (ptr Eq_12) Eq_46)
  OrigDataType: (memptr T_12 (struct (0 T_46 t0000)))
T_82: (in Mem52[ds:0x0178:word16] : word16)
  Class: Eq_46
  DataType: Eq_46
  OrigDataType: word16
T_83: (in 0x1ACD : word16)
  Class: Eq_83
  DataType: word16
  OrigDataType: word16
T_84: (in ds->t0178 - 0x1ACD : word16)
  Class: Eq_46
  DataType: Eq_46
  OrigDataType: word16
T_85: (in Mem58[ds:0x0178:word16] : word16)
  Class: Eq_46
  DataType: Eq_46
  OrigDataType: word16
T_86: (in 0x017C : word16)
  Class: Eq_86
  DataType: (memptr (ptr Eq_12) Eq_57)
  OrigDataType: (memptr T_12 (struct (0 T_57 t0000)))
T_87: (in Mem58[ds:0x017C:word16] : word16)
  Class: Eq_57
  DataType: Eq_57
  OrigDataType: word16
T_88: (in 0x2B37 : word16)
  Class: Eq_88
  DataType: word16
  OrigDataType: word16
T_89: (in ds->t017C - 0x2B37 : word16)
  Class: Eq_57
  DataType: Eq_57
  OrigDataType: word16
T_90: (in Mem60[ds:0x017C:word16] : word16)
  Class: Eq_57
  DataType: Eq_57
  OrigDataType: word16
T_91: (in bx_62 : (memptr (ptr Eq_12) Eq_91))
  Class: Eq_91
  DataType: (memptr (ptr Eq_12) Eq_91)
  OrigDataType: (memptr T_12 (struct 0001 (0 T_97 t0000) (184 T_93 t0184)))
T_92: (in 0xFA00 : word16)
  Class: Eq_91
  DataType: (memptr (ptr Eq_12) Eq_91)
  OrigDataType: word16
T_93: (in al_67 : byte)
  Class: Eq_93
  DataType: byte
  OrigDataType: byte
T_94: (in 0xA000 : selector)
  Class: Eq_12
  DataType: (ptr Eq_12)
  OrigDataType: (ptr (segment (0 (arr T_125 1535) a0000)))
T_95: (in 0x0000 : word16)
  Class: Eq_95
  DataType: word16
  OrigDataType: word16
T_96: (in bx_62 + 0x0000 : word16)
  Class: Eq_96
  DataType: word16
  OrigDataType: word16
T_97: (in Mem74[0xA000:bx_62 + 0x0000:byte] : byte)
  Class: Eq_93
  DataType: byte
  OrigDataType: byte
T_98: (in 0x0001 : word16)
  Class: Eq_98
  DataType: word16
  OrigDataType: word16
T_99: (in bx_62 - 0x0001 : word16)
  Class: Eq_91
  DataType: (memptr (ptr Eq_12) Eq_91)
  OrigDataType: word16
T_100: (in 0x0000 : word16)
  Class: Eq_91
  DataType: (memptr (ptr Eq_12) Eq_91)
  OrigDataType: word16
T_101: (in bx_62 != Eq_12::a0000 : bool)
  Class: Eq_101
  DataType: bool
  OrigDataType: bool
T_102: (in 0x0001 : word16)
  Class: Eq_102
  DataType: word16
  OrigDataType: word16
T_103: (in ax_23 - 0x0001 : word16)
  Class: Eq_103
  DataType: word16
  OrigDataType: word16
T_104: (in (byte) (ax_23 - 0x0001) : byte)
  Class: Eq_93
  DataType: byte
  OrigDataType: byte
T_105: (in 0x0184 : word16)
  Class: Eq_105
  DataType: word16
  OrigDataType: word16
T_106: (in bx_62 + 0x0184 : word16)
  Class: Eq_106
  DataType: word16
  OrigDataType: word16
T_107: (in Mem87[ds:bx_62 + 0x0184:byte] : byte)
  Class: Eq_93
  DataType: byte
  OrigDataType: byte
T_108: (in ax_23 - 0x0001 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_109: (in 0x0184 : word16)
  Class: Eq_109
  DataType: word16
  OrigDataType: word16
T_110: (in bx_62 + 0x0184 : word16)
  Class: Eq_110
  DataType: word16
  OrigDataType: word16
T_111: (in Mem60[ds:bx_62 + 0x0184:byte] : byte)
  Class: Eq_93
  DataType: byte
  OrigDataType: byte
T_112: (in DPB(ax_23, al_67, 0, 8) : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_113: (in 0x10 : byte)
  Class: Eq_93
  DataType: byte
  OrigDataType: byte
T_114: (in al_67 == 0x10 : bool)
  Class: Eq_114
  DataType: bool
  OrigDataType: bool
T_115: (in ax_78 : word16)
  Class: Eq_115
  DataType: word16
  OrigDataType: word16
T_116: (in __inw : ptr32)
  Class: Eq_116
  DataType: (ptr Eq_116)
  OrigDataType: (ptr (fn T_118 (T_117)))
T_117: (in 0x60 : byte)
  Class: Eq_117
  DataType: byte
  OrigDataType: byte
T_118: (in __inw(0x60) : word16)
  Class: Eq_115
  DataType: word16
  OrigDataType: word16
T_119: (in 0x0001 : word16)
  Class: Eq_119
  DataType: word16
  OrigDataType: word16
T_120: (in ax_78 - 0x0001 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_121: (in 0x0001 : word16)
  Class: Eq_115
  DataType: word16
  OrigDataType: word16
T_122: (in ax_78 != 0x0001 : bool)
  Class: Eq_122
  DataType: bool
  OrigDataType: bool
T_123: (in 0x46 : byte)
  Class: Eq_123
  DataType: byte
  OrigDataType: byte
T_124: (in DPB(cx, 0x46, 0, 8) : word16)
  Class: Eq_76
  DataType: word16
  OrigDataType: word16
T_125:
  Class: Eq_125
  DataType: byte
  OrigDataType: (struct 0001 (0 T_97 t0000))
T_126:
  Class: Eq_126
  DataType: byte
  OrigDataType: (struct 0001 (0 T_107 t0000))
T_127:
  Class: Eq_126
  DataType: byte
  OrigDataType: (struct 0001 (0 T_111 t0000))
*/
typedef Eq_12 Eq_1struct Globals {
	Eq_12 * ptrFFFA0000;	// FFFA0000
} Eq_1;

typedef void (Eq_2)(byte);

typedef struct Eq_11 {
	byte bFFFF80E4;	// FFFF80E4
	byte bFFFF8224;	// FFFF8224
	byte bFFFF8225;	// FFFF8225
} Eq_11;

typedef struct Eq_91;
 Eq_12[1535]Eq_46Eq_57[1535]Eq_91struct Eq_12 {
	struct Eq_91 tFFFFFA00;	// FFFFFA00
	byte a0000[1535];	// 0
	word16 w015A;	// 15A
	word16 w0176;	// 176
	Eq_46 t0178;	// 178
	Eq_57 t017C;	// 17C
	int16 w0180;	// 180
	int16 w0182;	// 182
	byte a0184[1535];	// 184
	Eq_91 tFA00;	// FA00
} Eq_12;

typedef Eq_47 (Eq_44)(Eq_46);

typedef union Eq_46 {
	real32 u0;
	word16 u1;
} Eq_46;

typedef union Eq_47 {
	real16 u0;
	real64 u1;
} Eq_47;

typedef union Eq_50 {
	real16 u0;
	real64 u1;
} Eq_50;

typedef Eq_58 (Eq_55)(Eq_57);

typedef union Eq_57 {
	real32 u0;
	word16 u1;
} Eq_57;

typedef union Eq_58 {
	real16 u0;
	real64 u1;
} Eq_58;

typedef union Eq_61 {
	real16 u0;
	real64 u1;
} Eq_61;

typedef struct Eq_91 Eq_91;

typedef word16 (Eq_116)(byte);

