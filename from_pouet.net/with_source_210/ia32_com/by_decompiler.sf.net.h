// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_210/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_109) ptrFFFA0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_13: (segment "Eq_13" (200 int16 w0200))
	T_13 (in ss : selector)
Eq_16: (fn Eq_24 (real16))
	T_16 (in sin : ptr32)
Eq_19: (union "Eq_19" (real16 u0) (real64 u1))
	T_19 (in (real64) ss->w0200 : real64)
Eq_20: (segment "Eq_20" (FFFFF000 (arr int16) aFFFFF000) (1EE Eq_22 t01EE) (1F2 Eq_26 t01F2) (1F6 int16 w01F6) (300 ui16 w0300) (301 byte b0301) (302 Eq_76 t0302) (304 Eq_76 t0304))
	T_20 (in ds : (ptr Eq_20))
Eq_22: (union "Eq_22" (real16 u0) (real32 u1))
	T_22 (in Mem11[ds:0x01EE:real32] : real32)
Eq_24: (union "Eq_24" (real16 u0) (real64 u1))
	T_24 (in sin((real64) ss->w0200 * ds->t01EE) : real64)
Eq_26: (union "Eq_26" (real16 u0) (real32 u1))
	T_26 (in Mem11[ds:0x01F2:real32] : real32)
Eq_40: (fn void (word16, byte))
	T_40 (in __outb : ptr32)
Eq_52: (fn void (word16, bcu8))
	T_52 (in __outb : ptr32)
Eq_64: (fn void (word16, uint16))
	T_64 (in __outb : ptr32)
Eq_69: (fn void (word16, byte))
	T_69 (in __outb : ptr32)
Eq_76: (union "Eq_76" (byte u0) (word16 u1))
	T_76 (in ax_84 : Eq_76)
	T_78 (in Mem18[ds:0x0304:word16] : word16)
	T_80 (in Mem85[ds:0x0302:word16] : word16)
	T_156 (in Mem172[ds:0x0302:byte] : byte)
	T_158 (in Mem172[ds:0x0302:byte] + 0x01 : byte)
	T_159 (in Mem193[ds:0x0302:byte] : byte)
	T_182 (in Mem88[ds:0x0302:byte] : byte)
	T_197 (in Mem88[ds:0x0304:byte] : byte)
	T_226 (in Mem196[ds:0x0304:word16] : word16)
	T_228 (in Mem196[ds:0x0304:word16] + 0x0001 : word16)
	T_229 (in Mem203[ds:0x0304:word16] : word16)
Eq_85: (fn word16 (word16))
	T_85 (in __inw : ptr32)
Eq_93: (fn word16 (word16))
	T_93 (in __inw : ptr32)
Eq_101: (struct "Eq_101" 0001 (0 Eq_105 t0000))
	T_101 (in di_103 : (memptr (ptr Eq_109) Eq_101))
	T_102 (in 0x0000 : word16)
	T_114 (in di_103 + 0x0001 : word16)
	T_129 (in di_103 + 0x0001 : word16)
	T_175 (in di_103 + 0x0001 : word16)
Eq_105: (union "Eq_105" (ui16 u0) (byte u1))
	T_105 (in cl_107 : Eq_105)
	T_106 (in 0xC8 : byte)
	T_112 (in Mem148[0xA000:di_103 + 0x0000:byte] : byte)
	T_124 (in (al_163 ^ 0x07) << 0x03 : word16)
	T_127 (in Mem172[0xA000:di_103 + 0x0000:byte] : byte)
	T_152 (in al_183 : Eq_105)
	T_154 (in (byte) ax_136 : byte)
	T_168 (in (byte) cx_106 : byte)
	T_173 (in Mem188[0xA000:di_103 + 0x0000:byte] : byte)
Eq_109: (segment "Eq_109" (0 Eq_101 t0000))
	T_109 (in 0xA000 : selector)
Eq_234: (fn byte (byte))
	T_234 (in __inb : ptr32)
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
T_7: (in bx_20 : (memptr (ptr Eq_20) int16))
  Class: Eq_7
  DataType: (memptr (ptr Eq_20) int16)
  OrigDataType: (memptr T_20 (struct (0 T_31 t0000)))
T_8: (in bx : word16)
  Class: Eq_8
  DataType: word16
  OrigDataType: word16
T_9: (in 0xF0 : byte)
  Class: Eq_9
  DataType: byte
  OrigDataType: byte
T_10: (in DPB(bx, 0xF0, 8, 8) : word16)
  Class: Eq_7
  DataType: (memptr (ptr Eq_20) int16)
  OrigDataType: word16
T_11: (in cx_10 : int16)
  Class: Eq_11
  DataType: int16
  OrigDataType: word16
T_12: (in 0x0100 : word16)
  Class: Eq_11
  DataType: int16
  OrigDataType: word16
T_13: (in ss : selector)
  Class: Eq_13
  DataType: (ptr Eq_13)
  OrigDataType: (ptr (segment (200 T_11 t0200)))
T_14: (in 0x0200 : word16)
  Class: Eq_14
  DataType: (memptr (ptr Eq_13) int16)
  OrigDataType: (memptr T_13 (struct (0 T_15 t0000)))
T_15: (in Mem11[ss:0x0200:word16] : word16)
  Class: Eq_11
  DataType: int16
  OrigDataType: word16
T_16: (in sin : ptr32)
  Class: Eq_16
  DataType: (ptr Eq_16)
  OrigDataType: (ptr (fn T_24 (T_23)))
T_17: (in 0x0200 : word16)
  Class: Eq_17
  DataType: (memptr (ptr Eq_13) int16)
  OrigDataType: (memptr T_13 (struct (0 T_18 t0000)))
T_18: (in Mem11[ss:0x0200:int16] : int16)
  Class: Eq_11
  DataType: int16
  OrigDataType: int16
T_19: (in (real64) ss->w0200 : real64)
  Class: Eq_19
  DataType: Eq_19
  OrigDataType: (union (real16 u0) (real64 u1))
T_20: (in ds : (ptr Eq_20))
  Class: Eq_20
  DataType: (ptr Eq_20)
  OrigDataType: (ptr (segment (FFFFF000 (arr T_239) aFFFFF000) (1EE T_22 t01EE) (1F2 T_26 t01F2) (1F6 T_163 t01F6) (300 T_82 t0300) (301 T_188 t0301) (302 T_76 t0302) (304 T_76 t0304)))
T_21: (in 0x01EE : word16)
  Class: Eq_21
  DataType: (memptr (ptr Eq_20) Eq_22)
  OrigDataType: (memptr T_20 (struct (0 T_22 t0000)))
T_22: (in Mem11[ds:0x01EE:real32] : real32)
  Class: Eq_22
  DataType: Eq_22
  OrigDataType: (union (real16 u0) (real32 u1))
T_23: (in (real64) ss->w0200 * ds->t01EE : word16)
  Class: Eq_23
  DataType: real16
  OrigDataType: real16
T_24: (in sin((real64) ss->w0200 * ds->t01EE) : real64)
  Class: Eq_24
  DataType: Eq_24
  OrigDataType: (union (real16 u0) (real64 u1))
T_25: (in 0x01F2 : word16)
  Class: Eq_25
  DataType: (memptr (ptr Eq_20) Eq_26)
  OrigDataType: (memptr T_20 (struct (0 T_26 t0000)))
T_26: (in Mem11[ds:0x01F2:real32] : real32)
  Class: Eq_26
  DataType: Eq_26
  OrigDataType: (union (real16 u0) (real32 u1))
T_27: (in sin((real64) ss->w0200 * ds->t01EE) * ds->t01F2 : word16)
  Class: Eq_27
  DataType: real16
  OrigDataType: real16
T_28: (in (int16) (sin((real64) ss->w0200 * ds->t01EE) * ds->t01F2) : int16)
  Class: Eq_28
  DataType: int16
  OrigDataType: int16
T_29: (in 0x0000 : word16)
  Class: Eq_29
  DataType: word16
  OrigDataType: word16
T_30: (in bx_20 + 0x0000 : word16)
  Class: Eq_30
  DataType: word16
  OrigDataType: word16
T_31: (in Mem18[ds:bx_20 + 0x0000:int16] : int16)
  Class: Eq_28
  DataType: int16
  OrigDataType: int16
T_32: (in 0x0001 : word16)
  Class: Eq_32
  DataType: word16
  OrigDataType: word16
T_33: (in bx_20 + 0x0001 : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_34: (in 0x0001 : word16)
  Class: Eq_34
  DataType: word16
  OrigDataType: word16
T_35: (in PTRADD(bx_20,1) + 0x0001 : word16)
  Class: Eq_7
  DataType: (memptr (ptr Eq_20) int16)
  OrigDataType: word16
T_36: (in 0x0001 : word16)
  Class: Eq_36
  DataType: word16
  OrigDataType: word16
T_37: (in cx_10 - 0x0001 : word16)
  Class: Eq_11
  DataType: int16
  OrigDataType: word16
T_38: (in 0x0000 : word16)
  Class: Eq_11
  DataType: int16
  OrigDataType: word16
T_39: (in cx_10 != 0x0000 : bool)
  Class: Eq_39
  DataType: bool
  OrigDataType: bool
T_40: (in __outb : ptr32)
  Class: Eq_40
  DataType: (ptr Eq_40)
  OrigDataType: (ptr (fn T_43 (T_41, T_42)))
T_41: (in 0x03C8 : word16)
  Class: Eq_41
  DataType: word16
  OrigDataType: word16
T_42: (in 0x00 : byte)
  Class: Eq_42
  DataType: byte
  OrigDataType: byte
T_43: (in __outb(0x03C8, 0x00) : void)
  Class: Eq_43
  DataType: void
  OrigDataType: void
T_44: (in ah_28 : byte)
  Class: Eq_44
  DataType: byte
  OrigDataType: byte
T_45: (in 0x00 : byte)
  Class: Eq_44
  DataType: byte
  OrigDataType: byte
T_46: (in bx_29 : word16)
  Class: Eq_46
  DataType: word16
  OrigDataType: word16
T_47: (in 0x0000 : word16)
  Class: Eq_46
  DataType: word16
  OrigDataType: word16
T_48: (in bl_31 : uint8)
  Class: Eq_48
  DataType: uint8
  OrigDataType: uint8
T_49: (in 0x00 : byte)
  Class: Eq_48
  DataType: uint8
  OrigDataType: byte
T_50: (in cx_35 : word16)
  Class: Eq_50
  DataType: word16
  OrigDataType: word16
T_51: (in 0x0100 : word16)
  Class: Eq_50
  DataType: word16
  OrigDataType: word16
T_52: (in __outb : ptr32)
  Class: Eq_52
  DataType: (ptr Eq_52)
  OrigDataType: (ptr (fn T_55 (T_53, T_54)))
T_53: (in 0x03C9 : word16)
  Class: Eq_53
  DataType: word16
  OrigDataType: word16
T_54: (in al_215 : bcu8)
  Class: Eq_54
  DataType: bcu8
  OrigDataType: bcu8
T_55: (in __outb(0x03C9, al_215) : void)
  Class: Eq_55
  DataType: void
  OrigDataType: void
T_56: (in 0x0001 : word16)
  Class: Eq_56
  DataType: word16
  OrigDataType: word16
T_57: (in bx_29 + 0x0001 : word16)
  Class: Eq_46
  DataType: word16
  OrigDataType: word16
T_58: (in (byte) bx_29 : byte)
  Class: Eq_48
  DataType: uint8
  OrigDataType: byte
T_59: (in 0x0001 : word16)
  Class: Eq_59
  DataType: word16
  OrigDataType: word16
T_60: (in cx_35 - 0x0001 : word16)
  Class: Eq_50
  DataType: word16
  OrigDataType: word16
T_61: (in 0x0000 : word16)
  Class: Eq_50
  DataType: word16
  OrigDataType: word16
T_62: (in cx_35 != 0x0000 : bool)
  Class: Eq_62
  DataType: bool
  OrigDataType: bool
T_63: (in 0x3F : byte)
  Class: Eq_54
  DataType: bcu8
  OrigDataType: byte
T_64: (in __outb : ptr32)
  Class: Eq_64
  DataType: (ptr Eq_64)
  OrigDataType: (ptr (fn T_68 (T_65, T_67)))
T_65: (in 0x03C9 : word16)
  Class: Eq_65
  DataType: word16
  OrigDataType: word16
T_66: (in 0x02 : byte)
  Class: Eq_66
  DataType: uint8
  OrigDataType: uint8
T_67: (in bl_31 >>u 0x02 : word16)
  Class: Eq_67
  DataType: uint16
  OrigDataType: uint16
T_68: (in __outb(0x03C9, bl_31 >>u 0x02) : void)
  Class: Eq_68
  DataType: void
  OrigDataType: void
T_69: (in __outb : ptr32)
  Class: Eq_69
  DataType: (ptr Eq_69)
  OrigDataType: (ptr (fn T_71 (T_70, T_44)))
T_70: (in 0x03C9 : word16)
  Class: Eq_70
  DataType: word16
  OrigDataType: word16
T_71: (in __outb(0x03C9, ah_28) : void)
  Class: Eq_71
  DataType: void
  OrigDataType: void
T_72: (in (byte) bx_29 : byte)
  Class: Eq_54
  DataType: bcu8
  OrigDataType: byte
T_73: (in SLICE(bx_29, byte, 8) : byte)
  Class: Eq_44
  DataType: byte
  OrigDataType: byte
T_74: (in 0x3F : byte)
  Class: Eq_54
  DataType: bcu8
  OrigDataType: bcu8
T_75: (in al_215 <=u 0x3F : bool)
  Class: Eq_75
  DataType: bool
  OrigDataType: bool
T_76: (in ax_84 : Eq_76)
  Class: Eq_76
  DataType: Eq_76
  OrigDataType: word16
T_77: (in 0x0304 : word16)
  Class: Eq_77
  DataType: (memptr (ptr Eq_20) Eq_76)
  OrigDataType: (memptr T_20 (struct (0 T_78 t0000)))
T_78: (in Mem18[ds:0x0304:word16] : word16)
  Class: Eq_76
  DataType: Eq_76
  OrigDataType: word16
T_79: (in 0x0302 : word16)
  Class: Eq_79
  DataType: (memptr (ptr Eq_20) Eq_76)
  OrigDataType: (memptr T_20 (struct (0 T_80 t0000)))
T_80: (in Mem85[ds:0x0302:word16] : word16)
  Class: Eq_76
  DataType: Eq_76
  OrigDataType: word16
T_81: (in 0x0008 : word16)
  Class: Eq_81
  DataType: word16
  OrigDataType: word16
T_82: (in ax_84 << 0x0008 : word16)
  Class: Eq_82
  DataType: ui16
  OrigDataType: ui16
T_83: (in 0x0300 : word16)
  Class: Eq_83
  DataType: (memptr (ptr Eq_20) ui16)
  OrigDataType: (memptr T_20 (struct (0 T_84 t0000)))
T_84: (in Mem88[ds:0x0300:word16] : word16)
  Class: Eq_82
  DataType: ui16
  OrigDataType: word16
T_85: (in __inw : ptr32)
  Class: Eq_85
  DataType: (ptr Eq_85)
  OrigDataType: (ptr (fn T_87 (T_86)))
T_86: (in 0x03DA : word16)
  Class: Eq_86
  DataType: word16
  OrigDataType: word16
T_87: (in __inw(0x03DA) : word16)
  Class: Eq_87
  DataType: word16
  OrigDataType: word16
T_88: (in (byte) __inw(0x03DA) : byte)
  Class: Eq_88
  DataType: byte
  OrigDataType: byte
T_89: (in 0x08 : byte)
  Class: Eq_89
  DataType: byte
  OrigDataType: byte
T_90: (in (byte) __inw(0x03DA) & 0x08 : byte)
  Class: Eq_90
  DataType: byte
  OrigDataType: byte
T_91: (in 0x00 : byte)
  Class: Eq_90
  DataType: byte
  OrigDataType: byte
T_92: (in ((byte) __inw(0x03DA) & 0x08) != 0x00 : bool)
  Class: Eq_92
  DataType: bool
  OrigDataType: bool
T_93: (in __inw : ptr32)
  Class: Eq_93
  DataType: (ptr Eq_93)
  OrigDataType: (ptr (fn T_95 (T_94)))
T_94: (in 0x03DA : word16)
  Class: Eq_94
  DataType: word16
  OrigDataType: word16
T_95: (in __inw(0x03DA) : word16)
  Class: Eq_95
  DataType: word16
  OrigDataType: word16
T_96: (in (byte) __inw(0x03DA) : byte)
  Class: Eq_96
  DataType: byte
  OrigDataType: byte
T_97: (in 0x08 : byte)
  Class: Eq_97
  DataType: byte
  OrigDataType: byte
T_98: (in (byte) __inw(0x03DA) & 0x08 : byte)
  Class: Eq_98
  DataType: byte
  OrigDataType: byte
T_99: (in 0x00 : byte)
  Class: Eq_98
  DataType: byte
  OrigDataType: byte
T_100: (in ((byte) __inw(0x03DA) & 0x08) == 0x00 : bool)
  Class: Eq_100
  DataType: bool
  OrigDataType: bool
T_101: (in di_103 : (memptr (ptr Eq_109) Eq_101))
  Class: Eq_101
  DataType: (memptr (ptr Eq_109) Eq_101)
  OrigDataType: (memptr T_109 (struct 0001 (0 T_105 t0000)))
T_102: (in 0x0000 : word16)
  Class: Eq_101
  DataType: (memptr (ptr Eq_109) Eq_101)
  OrigDataType: word16
T_103: (in cx_106 : word16)
  Class: Eq_103
  DataType: word16
  OrigDataType: word16
T_104: (in 0x00C8 : word16)
  Class: Eq_103
  DataType: word16
  OrigDataType: word16
T_105: (in cl_107 : Eq_105)
  Class: Eq_105
  DataType: Eq_105
  OrigDataType: byte
T_106: (in 0xC8 : byte)
  Class: Eq_105
  DataType: byte
  OrigDataType: byte
T_107: (in cx_152 : word16)
  Class: Eq_107
  DataType: word16
  OrigDataType: word16
T_108: (in 0x0040 : word16)
  Class: Eq_107
  DataType: word16
  OrigDataType: word16
T_109: (in 0xA000 : selector)
  Class: Eq_109
  DataType: (ptr Eq_109)
  OrigDataType: (ptr (segment))
T_110: (in 0x0000 : word16)
  Class: Eq_110
  DataType: word16
  OrigDataType: word16
T_111: (in di_103 + 0x0000 : word16)
  Class: Eq_111
  DataType: word16
  OrigDataType: word16
T_112: (in Mem148[0xA000:di_103 + 0x0000:byte] : byte)
  Class: Eq_105
  DataType: Eq_105
  OrigDataType: byte
T_113: (in 0x0001 : word16)
  Class: Eq_113
  DataType: word16
  OrigDataType: word16
T_114: (in di_103 + 0x0001 : word16)
  Class: Eq_101
  DataType: (memptr (ptr Eq_109) Eq_101)
  OrigDataType: word16
T_115: (in cx_140 : word16)
  Class: Eq_115
  DataType: word16
  OrigDataType: word16
T_116: (in 0x0001 : word16)
  Class: Eq_116
  DataType: word16
  OrigDataType: word16
T_117: (in cx_140 - 0x0001 : word16)
  Class: Eq_115
  DataType: word16
  OrigDataType: word16
T_118: (in 0x0000 : word16)
  Class: Eq_115
  DataType: word16
  OrigDataType: word16
T_119: (in cx_140 == 0x0000 : bool)
  Class: Eq_119
  DataType: bool
  OrigDataType: bool
T_120: (in al_163 : byte)
  Class: Eq_120
  DataType: byte
  OrigDataType: byte
T_121: (in 0x07 : byte)
  Class: Eq_121
  DataType: byte
  OrigDataType: byte
T_122: (in al_163 ^ 0x07 : byte)
  Class: Eq_122
  DataType: byte
  OrigDataType: byte
T_123: (in 0x03 : byte)
  Class: Eq_123
  DataType: byte
  OrigDataType: byte
T_124: (in (al_163 ^ 0x07) << 0x03 : word16)
  Class: Eq_105
  DataType: Eq_105
  OrigDataType: ui16
T_125: (in 0x0000 : word16)
  Class: Eq_125
  DataType: word16
  OrigDataType: word16
T_126: (in di_103 + 0x0000 : word16)
  Class: Eq_126
  DataType: word16
  OrigDataType: word16
T_127: (in Mem172[0xA000:di_103 + 0x0000:byte] : byte)
  Class: Eq_105
  DataType: Eq_105
  OrigDataType: byte
T_128: (in 0x0001 : word16)
  Class: Eq_128
  DataType: word16
  OrigDataType: word16
T_129: (in di_103 + 0x0001 : word16)
  Class: Eq_101
  DataType: (memptr (ptr Eq_109) Eq_101)
  OrigDataType: word16
T_130: (in bp_132 : int16)
  Class: Eq_130
  DataType: int16
  OrigDataType: int16
T_131: (in 0x0055 : word16)
  Class: Eq_131
  DataType: word16
  OrigDataType: word16
T_132: (in bp_132 + 0x0055 : word16)
  Class: Eq_130
  DataType: int16
  OrigDataType: word16
T_133: (in 0x0001 : word16)
  Class: Eq_133
  DataType: word16
  OrigDataType: word16
T_134: (in cx_152 - 0x0001 : word16)
  Class: Eq_107
  DataType: word16
  OrigDataType: word16
T_135: (in 0x0000 : word16)
  Class: Eq_107
  DataType: word16
  OrigDataType: word16
T_136: (in cx_152 != 0x0000 : bool)
  Class: Eq_136
  DataType: bool
  OrigDataType: bool
T_137: (in 0x07 : byte)
  Class: Eq_137
  DataType: byte
  OrigDataType: byte
T_138: (in al_162 : int8)
  Class: Eq_138
  DataType: int8
  OrigDataType: int8
T_139: (in 0x07 - al_162 : byte)
  Class: Eq_120
  DataType: byte
  OrigDataType: byte
T_140: (in 0x0008 : word16)
  Class: Eq_140
  DataType: uint16
  OrigDataType: uint16
T_141: (in bp_132 >> 0x0008 : word16)
  Class: Eq_141
  DataType: int16
  OrigDataType: int16
T_142: (in 0x000F : word16)
  Class: Eq_142
  DataType: word16
  OrigDataType: word16
T_143: (in bp_132 >> 0x0008 & 0x000F : word16)
  Class: Eq_143
  DataType: word16
  OrigDataType: word16
T_144: (in (byte) (bp_132 >> 0x0008 & 0x000F) : byte)
  Class: Eq_138
  DataType: int8
  OrigDataType: byte
T_145: (in al_162 - 0x07 : byte)
  Class: Eq_120
  DataType: byte
  OrigDataType: byte
T_146: (in 0x07 : byte)
  Class: Eq_138
  DataType: int8
  OrigDataType: int8
T_147: (in al_162 >= 0x07 : bool)
  Class: Eq_147
  DataType: bool
  OrigDataType: bool
T_148: (in cx_180 : word16)
  Class: Eq_148
  DataType: word16
  OrigDataType: word16
T_149: (in dx_143 : word16)
  Class: Eq_149
  DataType: word16
  OrigDataType: word16
T_150: (in 0x0040 : word16)
  Class: Eq_150
  DataType: word16
  OrigDataType: word16
T_151: (in dx_143 - 0x0040 : word16)
  Class: Eq_148
  DataType: word16
  OrigDataType: word16
T_152: (in al_183 : Eq_105)
  Class: Eq_105
  DataType: Eq_105
  OrigDataType: byte
T_153: (in ax_136 : word16)
  Class: Eq_153
  DataType: word16
  OrigDataType: word16
T_154: (in (byte) ax_136 : byte)
  Class: Eq_105
  DataType: Eq_105
  OrigDataType: byte
T_155: (in 0x0302 : word16)
  Class: Eq_155
  DataType: (memptr (ptr Eq_20) Eq_76)
  OrigDataType: (memptr T_20 (struct (0 T_76 t0000)))
T_156: (in Mem172[ds:0x0302:byte] : byte)
  Class: Eq_76
  DataType: Eq_76
  OrigDataType: byte
T_157: (in 0x01 : byte)
  Class: Eq_157
  DataType: byte
  OrigDataType: byte
T_158: (in Mem172[ds:0x0302:byte] + 0x01 : byte)
  Class: Eq_76
  DataType: Eq_76
  OrigDataType: byte
T_159: (in Mem193[ds:0x0302:byte] : byte)
  Class: Eq_76
  DataType: Eq_76
  OrigDataType: byte
T_160: (in 0x0300 : word16)
  Class: Eq_160
  DataType: (memptr (ptr Eq_20) ui16)
  OrigDataType: (memptr T_20 (struct (0 T_82 t0000)))
T_161: (in Mem193[ds:0x0300:word16] : word16)
  Class: Eq_82
  DataType: ui16
  OrigDataType: word16
T_162: (in 0x01F6 : word16)
  Class: Eq_162
  DataType: (memptr (ptr Eq_20) int16)
  OrigDataType: (memptr T_20 (struct (0 T_163 t0000)))
T_163: (in Mem193[ds:0x01F6:word16] : word16)
  Class: Eq_163
  DataType: int16
  OrigDataType: word16
T_164: (in ds->w0300 + ds->w01F6 : word16)
  Class: Eq_82
  DataType: ui16
  OrigDataType: word16
T_165: (in Mem196[ds:0x0300:word16] : word16)
  Class: Eq_82
  DataType: ui16
  OrigDataType: word16
T_166: (in 0x0001 : word16)
  Class: Eq_166
  DataType: word16
  OrigDataType: word16
T_167: (in cx_106 - 0x0001 : word16)
  Class: Eq_103
  DataType: word16
  OrigDataType: word16
T_168: (in (byte) cx_106 : byte)
  Class: Eq_105
  DataType: Eq_105
  OrigDataType: byte
T_169: (in 0x0000 : word16)
  Class: Eq_103
  DataType: word16
  OrigDataType: word16
T_170: (in cx_106 != 0x0000 : bool)
  Class: Eq_170
  DataType: bool
  OrigDataType: bool
T_171: (in 0x0000 : word16)
  Class: Eq_171
  DataType: word16
  OrigDataType: word16
T_172: (in di_103 + 0x0000 : word16)
  Class: Eq_172
  DataType: word16
  OrigDataType: word16
T_173: (in Mem188[0xA000:di_103 + 0x0000:byte] : byte)
  Class: Eq_105
  DataType: Eq_105
  OrigDataType: byte
T_174: (in 0x0001 : word16)
  Class: Eq_174
  DataType: word16
  OrigDataType: word16
T_175: (in di_103 + 0x0001 : word16)
  Class: Eq_101
  DataType: (memptr (ptr Eq_109) Eq_101)
  OrigDataType: word16
T_176: (in 0x0001 : word16)
  Class: Eq_176
  DataType: word16
  OrigDataType: word16
T_177: (in cx_180 - 0x0001 : word16)
  Class: Eq_148
  DataType: word16
  OrigDataType: word16
T_178: (in 0x0000 : word16)
  Class: Eq_148
  DataType: word16
  OrigDataType: word16
T_179: (in cx_180 == 0x0000 : bool)
  Class: Eq_179
  DataType: bool
  OrigDataType: bool
T_180: (in bx_118 : word16)
  Class: Eq_180
  DataType: word16
  OrigDataType: word16
T_181: (in 0x0302 : word16)
  Class: Eq_181
  DataType: (memptr (ptr Eq_20) Eq_76)
  OrigDataType: (memptr T_20 (struct (0 T_182 t0000)))
T_182: (in Mem88[ds:0x0302:byte] : byte)
  Class: Eq_76
  DataType: Eq_76
  OrigDataType: byte
T_183: (in (word16) ds->t0302 : word16)
  Class: Eq_180
  DataType: word16
  OrigDataType: word16
T_184: (in ax_117 : int16)
  Class: Eq_184
  DataType: int16
  OrigDataType: int16
T_185: (in 0xF000 : word16)
  Class: Eq_185
  DataType: word16
  OrigDataType: word16
T_186: (in SEQ(ds, 0xF000) : ptr32)
  Class: Eq_186
  DataType: ptr32
  OrigDataType: ptr32
T_187: (in 0x0301 : word16)
  Class: Eq_187
  DataType: (memptr (ptr Eq_20) byte)
  OrigDataType: (memptr T_20 (struct (0 T_188 t0000)))
T_188: (in Mem88[ds:0x0301:byte] : byte)
  Class: Eq_188
  DataType: byte
  OrigDataType: byte
T_189: (in (word16) ds->b0301 : word16)
  Class: Eq_189
  DataType: ui16
  OrigDataType: ui16
T_190: (in 0x0002 : word16)
  Class: Eq_190
  DataType: ui16
  OrigDataType: ui16
T_191: (in (word16) ds->b0301 * 0x0002 : word16)
  Class: Eq_191
  DataType: ui16
  OrigDataType: ui16
T_192: (in SEQ(ds, 0xF000)[(word16) ds->b0301 * 0x0002] : word16)
  Class: Eq_184
  DataType: int16
  OrigDataType: word16
T_193: (in bp_127 : word16)
  Class: Eq_193
  DataType: word16
  OrigDataType: word16
T_194: (in 0xF000 : word16)
  Class: Eq_194
  DataType: word16
  OrigDataType: word16
T_195: (in SEQ(ds, 0xF000) : ptr32)
  Class: Eq_195
  DataType: ptr32
  OrigDataType: ptr32
T_196: (in 0x0304 : word16)
  Class: Eq_196
  DataType: (memptr (ptr Eq_20) Eq_76)
  OrigDataType: (memptr T_20 (struct (0 T_197 t0000)))
T_197: (in Mem88[ds:0x0304:byte] : byte)
  Class: Eq_76
  DataType: Eq_76
  OrigDataType: byte
T_198: (in (word16) ds->t0304 : word16)
  Class: Eq_198
  DataType: ui16
  OrigDataType: ui16
T_199: (in 0x0002 : word16)
  Class: Eq_199
  DataType: ui16
  OrigDataType: ui16
T_200: (in (word16) ds->t0304 * 0x0002 : word16)
  Class: Eq_200
  DataType: ui16
  OrigDataType: ui16
T_201: (in SEQ(ds, 0xF000)[(word16) ds->t0304 * 0x0002] : word16)
  Class: Eq_184
  DataType: int16
  OrigDataType: word16
T_202: (in 0xF000 : word16)
  Class: Eq_202
  DataType: word16
  OrigDataType: word16
T_203: (in SEQ(ds, 0xF000) : ptr32)
  Class: Eq_203
  DataType: ptr32
  OrigDataType: ptr32
T_204: (in (byte) bx_118 : byte)
  Class: Eq_204
  DataType: byte
  OrigDataType: byte
T_205: (in 0x40 : byte)
  Class: Eq_205
  DataType: byte
  OrigDataType: byte
T_206: (in (byte) bx_118 + 0x40 : byte)
  Class: Eq_206
  DataType: byte
  OrigDataType: byte
T_207: (in DPB(bx_118, (byte) bx_118 + 0x40, 0, 8) : word16)
  Class: Eq_207
  DataType: ui16
  OrigDataType: ui16
T_208: (in 0x0002 : word16)
  Class: Eq_208
  DataType: ui16
  OrigDataType: ui16
T_209: (in DPB(bx_118, (byte) bx_118 + 0x40, 0, 8) * 0x0002 : word16)
  Class: Eq_209
  DataType: ui16
  OrigDataType: ui16
T_210: (in SEQ(ds, 0xF000)[DPB(bx_118, (byte) bx_118 + 0x40, 0, 8) * 0x0002] : word16)
  Class: Eq_184
  DataType: int16
  OrigDataType: word16
T_211: (in (&ds->t0304)[(word16) ds->t0304 * 0x0002 / 0x0004] + (&ds->t0304)[(DPB(bx_118, (byte) bx_118 + 0x40, 0, 8) * 0x0002) / 0x0004] : word16)
  Class: Eq_193
  DataType: word16
  OrigDataType: word16
T_212: (in 0x0005 : word16)
  Class: Eq_212
  DataType: uint16
  OrigDataType: uint16
T_213: (in ax_117 >> 0x0005 : word16)
  Class: Eq_213
  DataType: int16
  OrigDataType: int16
T_214: (in 0x0080 : word16)
  Class: Eq_214
  DataType: word16
  OrigDataType: word16
T_215: (in (ax_117 >> 0x0005) + 0x0080 : word16)
  Class: Eq_115
  DataType: word16
  OrigDataType: word16
T_216: (in 0x0001 : word16)
  Class: Eq_216
  DataType: word16
  OrigDataType: word16
T_217: (in bp_127 << 0x0001 : word16)
  Class: Eq_217
  DataType: ui16
  OrigDataType: ui16
T_218: (in bp_127 + (bp_127 << 0x0001) : word16)
  Class: Eq_218
  DataType: word16
  OrigDataType: word16
T_219: (in 0x0002 : word16)
  Class: Eq_219
  DataType: word16
  OrigDataType: word16
T_220: (in bp_127 << 0x0002 : word16)
  Class: Eq_220
  DataType: ui16
  OrigDataType: ui16
T_221: (in bp_127 + (bp_127 << 0x0001) + (bp_127 << 0x0002) : word16)
  Class: Eq_130
  DataType: int16
  OrigDataType: word16
T_222: (in DPB(ax_117, cl_107, 0, 8) : word16)
  Class: Eq_153
  DataType: word16
  OrigDataType: word16
T_223: (in 0x0140 : word16)
  Class: Eq_223
  DataType: word16
  OrigDataType: word16
T_224: (in 0x0140 - cx_140 : word16)
  Class: Eq_149
  DataType: word16
  OrigDataType: word16
T_225: (in 0x0304 : word16)
  Class: Eq_225
  DataType: (memptr (ptr Eq_20) Eq_76)
  OrigDataType: (memptr T_20 (struct (0 T_76 t0000)))
T_226: (in Mem196[ds:0x0304:word16] : word16)
  Class: Eq_76
  DataType: Eq_76
  OrigDataType: word16
T_227: (in 0x0001 : word16)
  Class: Eq_227
  DataType: word16
  OrigDataType: word16
T_228: (in Mem196[ds:0x0304:word16] + 0x0001 : word16)
  Class: Eq_76
  DataType: Eq_76
  OrigDataType: word16
T_229: (in Mem203[ds:0x0304:word16] : word16)
  Class: Eq_76
  DataType: Eq_76
  OrigDataType: word16
T_230: (in 0x0001 : word16)
  Class: Eq_230
  DataType: uint16
  OrigDataType: uint16
T_231: (in bp_132 >> 0x0001 : word16)
  Class: Eq_163
  DataType: int16
  OrigDataType: int16
T_232: (in 0x01F6 : word16)
  Class: Eq_232
  DataType: (memptr (ptr Eq_20) int16)
  OrigDataType: (memptr T_20 (struct (0 T_233 t0000)))
T_233: (in Mem206[ds:0x01F6:word16] : word16)
  Class: Eq_163
  DataType: int16
  OrigDataType: word16
T_234: (in __inb : ptr32)
  Class: Eq_234
  DataType: (ptr Eq_234)
  OrigDataType: (ptr (fn T_236 (T_235)))
T_235: (in 0x60 : byte)
  Class: Eq_235
  DataType: byte
  OrigDataType: byte
T_236: (in __inb(0x60) : byte)
  Class: Eq_236
  DataType: byte
  OrigDataType: byte
T_237: (in 0x01 : byte)
  Class: Eq_236
  DataType: byte
  OrigDataType: byte
T_238: (in __inb(0x60) != 0x01 : bool)
  Class: Eq_238
  DataType: bool
  OrigDataType: bool
T_239:
  Class: Eq_239
  DataType: int16
  OrigDataType: (struct 0002 (0 T_192 t0000))
T_240:
  Class: Eq_239
  DataType: int16
  OrigDataType: (struct 0002 (0 T_201 t0000))
T_241:
  Class: Eq_239
  DataType: int16
  OrigDataType: (struct 0002 (0 T_210 t0000))
*/
typedef Eq_109 Eq_1struct Globals {
	Eq_109 * ptrFFFA0000;	// FFFA0000
} Eq_1;

typedef void (Eq_2)(byte);

typedef struct Eq_13 {
	int16 w0200;	// 200
} Eq_13;

typedef Eq_24 (Eq_16)(real16);

typedef union Eq_19 {
	real16 u0;
	real64 u1;
} Eq_19;

typedef  Eq_20[]Eq_22Eq_26Eq_76Eq_76struct Eq_20 {
	int16 aFFFFF000[];	// FFFFF000
	Eq_22 t01EE;	// 1EE
	Eq_26 t01F2;	// 1F2
	int16 w01F6;	// 1F6
	ui16 w0300;	// 300
	byte b0301;	// 301
	Eq_76 t0302;	// 302
	Eq_76 t0304;	// 304
} Eq_20;

typedef union Eq_22 {
	real16 u0;
	real32 u1;
} Eq_22;

typedef union Eq_24 {
	real16 u0;
	real64 u1;
} Eq_24;

typedef union Eq_26 {
	real16 u0;
	real32 u1;
} Eq_26;

typedef void (Eq_40)(word16, byte);

typedef void (Eq_52)(word16, bcu8);

typedef void (Eq_64)(word16, uint16);

typedef void (Eq_69)(word16, byte);

typedef union Eq_76 {
	byte u0;
	word16 u1;
} Eq_76;

typedef word16 (Eq_85)(word16);

typedef word16 (Eq_93)(word16);

typedef Eq_105 Eq_101struct Eq_101 {	// size: 1 1
	Eq_105 t0000;	// 0
} Eq_101;

typedef union Eq_105 {
	ui16 u0;
	byte u1;
} Eq_105;

typedef Eq_101 Eq_109struct Eq_109 {
	Eq_101 t0000;	// 0
} Eq_109;

typedef byte (Eq_234)(byte);

