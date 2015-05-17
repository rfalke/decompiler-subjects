// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_274/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_88) ptrFFFA0000))
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
Eq_20: (segment "Eq_20" (FFFFF000 (arr int16) aFFFFF000) (1F6 Eq_22 t01F6) (1FA Eq_26 t01FA) (1FE uint16 w01FE) (300 uint16 w0300) (302 Eq_71 t0302) (304 Eq_71 t0304))
	T_20 (in ds : (ptr Eq_20))
Eq_22: (union "Eq_22" (real16 u0) (real32 u1))
	T_22 (in Mem11[ds:0x01F6:real32] : real32)
Eq_24: (union "Eq_24" (real16 u0) (real64 u1))
	T_24 (in sin((real64) ss->w0200 * ds->t01F6) : real64)
Eq_26: (union "Eq_26" (real16 u0) (real32 u1))
	T_26 (in Mem11[ds:0x01FA:real32] : real32)
Eq_38: (fn void (word16, byte))
	T_38 (in __outb : ptr32)
Eq_46: (fn void (word16, bcu8))
	T_46 (in __outb : ptr32)
Eq_50: (fn void (word16, byte))
	T_50 (in __outb : ptr32)
Eq_54: (fn void (word16, uint16))
	T_54 (in __outb : ptr32)
Eq_71: (union "Eq_71" (byte u0) (word16 u1))
	T_71 (in ax_76 : Eq_71)
	T_73 (in Mem18[ds:0x0304:word16] : word16)
	T_75 (in Mem77[ds:0x0302:word16] : word16)
	T_135 (in Mem153[ds:0x0302:byte] : byte)
	T_137 (in Mem153[ds:0x0302:byte] + 0x01 : byte)
	T_138 (in Mem174[ds:0x0302:byte] : byte)
	T_173 (in Mem79[ds:0x0304:word16] : word16)
	T_182 (in Mem79[ds:0x0302:word16] : word16)
	T_205 (in Mem177[ds:0x0304:word16] : word16)
	T_207 (in Mem177[ds:0x0304:word16] + 0x0001 : word16)
	T_208 (in Mem184[ds:0x0304:word16] : word16)
	T_212 (in Mem184[ds:0x0304:word16] : word16)
Eq_80: (struct "Eq_80" 0001 (0 Eq_84 t0000))
	T_80 (in di_126 : (memptr (ptr Eq_88) Eq_80))
	T_81 (in 0x0000 : word16)
	T_93 (in di_126 + 0x0001 : word16)
	T_108 (in di_126 + 0x0001 : word16)
	T_154 (in di_126 + 0x0001 : word16)
Eq_84: (union "Eq_84" (ui16 u0) (byte u1))
	T_84 (in cl_182 : Eq_84)
	T_85 (in 0xC8 : byte)
	T_91 (in Mem129[0xA000:di_126 + 0x0000:byte] : byte)
	T_103 (in (al_144 ^ 0x07) << 0x03 : word16)
	T_106 (in Mem153[0xA000:di_126 + 0x0000:byte] : byte)
	T_131 (in al_164 : Eq_84)
	T_133 (in (byte) ax_117 : byte)
	T_147 (in (byte) cx_181 : byte)
	T_152 (in Mem169[0xA000:di_126 + 0x0000:byte] : byte)
Eq_88: (segment "Eq_88" (0 Eq_80 t0000))
	T_88 (in 0xA000 : selector)
Eq_225: (fn byte (byte))
	T_225 (in __inb : ptr32)
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
T_7: (in bx_19 : (memptr (ptr Eq_20) int16))
  Class: Eq_7
  DataType: (memptr (ptr Eq_20) int16)
  OrigDataType: (memptr T_20 (struct 0002 (0 T_31 t0000)))
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
  OrigDataType: (ptr (segment (FFFFF000 (arr T_230) aFFFFF000) (1F6 T_22 t01F6) (1FA T_26 t01FA) (1FE T_142 t01FE) (300 T_77 t0300) (302 T_71 t0302) (304 T_71 t0304)))
T_21: (in 0x01F6 : word16)
  Class: Eq_21
  DataType: (memptr (ptr Eq_20) Eq_22)
  OrigDataType: (memptr T_20 (struct (0 T_22 t0000)))
T_22: (in Mem11[ds:0x01F6:real32] : real32)
  Class: Eq_22
  DataType: Eq_22
  OrigDataType: (union (real16 u0) (real32 u1))
T_23: (in (real64) ss->w0200 * ds->t01F6 : word16)
  Class: Eq_23
  DataType: real16
  OrigDataType: real16
T_24: (in sin((real64) ss->w0200 * ds->t01F6) : real64)
  Class: Eq_24
  DataType: Eq_24
  OrigDataType: (union (real16 u0) (real64 u1))
T_25: (in 0x01FA : word16)
  Class: Eq_25
  DataType: (memptr (ptr Eq_20) Eq_26)
  OrigDataType: (memptr T_20 (struct (0 T_26 t0000)))
T_26: (in Mem11[ds:0x01FA:real32] : real32)
  Class: Eq_26
  DataType: Eq_26
  OrigDataType: (union (real16 u0) (real32 u1))
T_27: (in sin((real64) ss->w0200 * ds->t01F6) * ds->t01FA : word16)
  Class: Eq_27
  DataType: real16
  OrigDataType: real16
T_28: (in (int16) (sin((real64) ss->w0200 * ds->t01F6) * ds->t01FA) : int16)
  Class: Eq_28
  DataType: int16
  OrigDataType: int16
T_29: (in 0x0000 : word16)
  Class: Eq_29
  DataType: word16
  OrigDataType: word16
T_30: (in bx_19 + 0x0000 : word16)
  Class: Eq_30
  DataType: word16
  OrigDataType: word16
T_31: (in Mem18[ds:bx_19 + 0x0000:int16] : int16)
  Class: Eq_28
  DataType: int16
  OrigDataType: int16
T_32: (in 0x0002 : word16)
  Class: Eq_32
  DataType: word16
  OrigDataType: word16
T_33: (in bx_19 + 0x0002 : word16)
  Class: Eq_7
  DataType: (memptr (ptr Eq_20) int16)
  OrigDataType: word16
T_34: (in 0x0001 : word16)
  Class: Eq_34
  DataType: word16
  OrigDataType: word16
T_35: (in cx_10 - 0x0001 : word16)
  Class: Eq_11
  DataType: int16
  OrigDataType: word16
T_36: (in 0x0000 : word16)
  Class: Eq_11
  DataType: int16
  OrigDataType: word16
T_37: (in cx_10 != 0x0000 : bool)
  Class: Eq_37
  DataType: bool
  OrigDataType: bool
T_38: (in __outb : ptr32)
  Class: Eq_38
  DataType: (ptr Eq_38)
  OrigDataType: (ptr (fn T_41 (T_39, T_40)))
T_39: (in 0x03C8 : word16)
  Class: Eq_39
  DataType: word16
  OrigDataType: word16
T_40: (in 0x00 : byte)
  Class: Eq_40
  DataType: byte
  OrigDataType: byte
T_41: (in __outb(0x03C8, 0x00) : void)
  Class: Eq_41
  DataType: void
  OrigDataType: void
T_42: (in bx_27 : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_43: (in 0x0000 : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_44: (in cx_33 : word16)
  Class: Eq_44
  DataType: word16
  OrigDataType: word16
T_45: (in 0x0100 : word16)
  Class: Eq_44
  DataType: word16
  OrigDataType: word16
T_46: (in __outb : ptr32)
  Class: Eq_46
  DataType: (ptr Eq_46)
  OrigDataType: (ptr (fn T_49 (T_47, T_48)))
T_47: (in 0x03C9 : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_48: (in al_203 : bcu8)
  Class: Eq_48
  DataType: bcu8
  OrigDataType: bcu8
T_49: (in __outb(0x03C9, al_203) : void)
  Class: Eq_49
  DataType: void
  OrigDataType: void
T_50: (in __outb : ptr32)
  Class: Eq_50
  DataType: (ptr Eq_50)
  OrigDataType: (ptr (fn T_53 (T_51, T_52)))
T_51: (in 0x03C9 : word16)
  Class: Eq_51
  DataType: word16
  OrigDataType: word16
T_52: (in ah_43 : byte)
  Class: Eq_52
  DataType: byte
  OrigDataType: byte
T_53: (in __outb(0x03C9, ah_43) : void)
  Class: Eq_53
  DataType: void
  OrigDataType: void
T_54: (in __outb : ptr32)
  Class: Eq_54
  DataType: (ptr Eq_54)
  OrigDataType: (ptr (fn T_59 (T_55, T_58)))
T_55: (in 0x03C9 : word16)
  Class: Eq_55
  DataType: word16
  OrigDataType: word16
T_56: (in (byte) bx_27 : byte)
  Class: Eq_56
  DataType: uint8
  OrigDataType: uint8
T_57: (in 0x02 : byte)
  Class: Eq_57
  DataType: uint8
  OrigDataType: uint8
T_58: (in (byte) bx_27 >>u 0x02 : word16)
  Class: Eq_58
  DataType: uint16
  OrigDataType: uint16
T_59: (in __outb(0x03C9, (byte) bx_27 >>u 0x02) : void)
  Class: Eq_59
  DataType: void
  OrigDataType: void
T_60: (in 0x0001 : word16)
  Class: Eq_60
  DataType: word16
  OrigDataType: word16
T_61: (in bx_27 + 0x0001 : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_62: (in 0x0001 : word16)
  Class: Eq_62
  DataType: word16
  OrigDataType: word16
T_63: (in cx_33 - 0x0001 : word16)
  Class: Eq_44
  DataType: word16
  OrigDataType: word16
T_64: (in 0x0000 : word16)
  Class: Eq_44
  DataType: word16
  OrigDataType: word16
T_65: (in cx_33 != 0x0000 : bool)
  Class: Eq_65
  DataType: bool
  OrigDataType: bool
T_66: (in 0x3F : byte)
  Class: Eq_48
  DataType: bcu8
  OrigDataType: byte
T_67: (in (byte) bx_27 : byte)
  Class: Eq_48
  DataType: bcu8
  OrigDataType: byte
T_68: (in SLICE(bx_27, byte, 8) : byte)
  Class: Eq_52
  DataType: byte
  OrigDataType: byte
T_69: (in 0x3F : byte)
  Class: Eq_48
  DataType: bcu8
  OrigDataType: bcu8
T_70: (in al_203 <=u 0x3F : bool)
  Class: Eq_70
  DataType: bool
  OrigDataType: bool
T_71: (in ax_76 : Eq_71)
  Class: Eq_71
  DataType: Eq_71
  OrigDataType: word16
T_72: (in 0x0304 : word16)
  Class: Eq_72
  DataType: (memptr (ptr Eq_20) Eq_71)
  OrigDataType: (memptr T_20 (struct (0 T_73 t0000)))
T_73: (in Mem18[ds:0x0304:word16] : word16)
  Class: Eq_71
  DataType: Eq_71
  OrigDataType: word16
T_74: (in 0x0302 : word16)
  Class: Eq_74
  DataType: (memptr (ptr Eq_20) Eq_71)
  OrigDataType: (memptr T_20 (struct (0 T_75 t0000)))
T_75: (in Mem77[ds:0x0302:word16] : word16)
  Class: Eq_71
  DataType: Eq_71
  OrigDataType: word16
T_76: (in 0x0008 : word16)
  Class: Eq_76
  DataType: word16
  OrigDataType: word16
T_77: (in ax_76 << 0x0008 : word16)
  Class: Eq_77
  DataType: uint16
  OrigDataType: ui16
T_78: (in 0x0300 : word16)
  Class: Eq_78
  DataType: (memptr (ptr Eq_20) uint16)
  OrigDataType: (memptr T_20 (struct (0 T_79 t0000)))
T_79: (in Mem79[ds:0x0300:word16] : word16)
  Class: Eq_77
  DataType: uint16
  OrigDataType: word16
T_80: (in di_126 : (memptr (ptr Eq_88) Eq_80))
  Class: Eq_80
  DataType: (memptr (ptr Eq_88) Eq_80)
  OrigDataType: (memptr T_88 (struct 0001 (0 T_84 t0000)))
T_81: (in 0x0000 : word16)
  Class: Eq_80
  DataType: (memptr (ptr Eq_88) Eq_80)
  OrigDataType: word16
T_82: (in cx_181 : word16)
  Class: Eq_82
  DataType: word16
  OrigDataType: word16
T_83: (in 0x00C8 : word16)
  Class: Eq_82
  DataType: word16
  OrigDataType: word16
T_84: (in cl_182 : Eq_84)
  Class: Eq_84
  DataType: Eq_84
  OrigDataType: byte
T_85: (in 0xC8 : byte)
  Class: Eq_84
  DataType: byte
  OrigDataType: byte
T_86: (in cx_133 : word16)
  Class: Eq_86
  DataType: word16
  OrigDataType: word16
T_87: (in 0x0040 : word16)
  Class: Eq_86
  DataType: word16
  OrigDataType: word16
T_88: (in 0xA000 : selector)
  Class: Eq_88
  DataType: (ptr Eq_88)
  OrigDataType: (ptr (segment))
T_89: (in 0x0000 : word16)
  Class: Eq_89
  DataType: word16
  OrigDataType: word16
T_90: (in di_126 + 0x0000 : word16)
  Class: Eq_90
  DataType: word16
  OrigDataType: word16
T_91: (in Mem129[0xA000:di_126 + 0x0000:byte] : byte)
  Class: Eq_84
  DataType: Eq_84
  OrigDataType: byte
T_92: (in 0x0001 : word16)
  Class: Eq_92
  DataType: word16
  OrigDataType: word16
T_93: (in di_126 + 0x0001 : word16)
  Class: Eq_80
  DataType: (memptr (ptr Eq_88) Eq_80)
  OrigDataType: word16
T_94: (in cx_121 : word16)
  Class: Eq_94
  DataType: word16
  OrigDataType: word16
T_95: (in 0x0001 : word16)
  Class: Eq_95
  DataType: word16
  OrigDataType: word16
T_96: (in cx_121 - 0x0001 : word16)
  Class: Eq_94
  DataType: word16
  OrigDataType: word16
T_97: (in 0x0000 : word16)
  Class: Eq_94
  DataType: word16
  OrigDataType: word16
T_98: (in cx_121 == 0x0000 : bool)
  Class: Eq_98
  DataType: bool
  OrigDataType: bool
T_99: (in al_144 : byte)
  Class: Eq_99
  DataType: byte
  OrigDataType: byte
T_100: (in 0x07 : byte)
  Class: Eq_100
  DataType: byte
  OrigDataType: byte
T_101: (in al_144 ^ 0x07 : byte)
  Class: Eq_101
  DataType: byte
  OrigDataType: byte
T_102: (in 0x03 : byte)
  Class: Eq_102
  DataType: byte
  OrigDataType: byte
T_103: (in (al_144 ^ 0x07) << 0x03 : word16)
  Class: Eq_84
  DataType: Eq_84
  OrigDataType: ui16
T_104: (in 0x0000 : word16)
  Class: Eq_104
  DataType: word16
  OrigDataType: word16
T_105: (in di_126 + 0x0000 : word16)
  Class: Eq_105
  DataType: word16
  OrigDataType: word16
T_106: (in Mem153[0xA000:di_126 + 0x0000:byte] : byte)
  Class: Eq_84
  DataType: Eq_84
  OrigDataType: byte
T_107: (in 0x0001 : word16)
  Class: Eq_107
  DataType: word16
  OrigDataType: word16
T_108: (in di_126 + 0x0001 : word16)
  Class: Eq_80
  DataType: (memptr (ptr Eq_88) Eq_80)
  OrigDataType: word16
T_109: (in bp_113 : int16)
  Class: Eq_109
  DataType: int16
  OrigDataType: int16
T_110: (in 0x0055 : word16)
  Class: Eq_110
  DataType: word16
  OrigDataType: word16
T_111: (in bp_113 + 0x0055 : word16)
  Class: Eq_109
  DataType: int16
  OrigDataType: word16
T_112: (in 0x0001 : word16)
  Class: Eq_112
  DataType: word16
  OrigDataType: word16
T_113: (in cx_133 - 0x0001 : word16)
  Class: Eq_86
  DataType: word16
  OrigDataType: word16
T_114: (in 0x0000 : word16)
  Class: Eq_86
  DataType: word16
  OrigDataType: word16
T_115: (in cx_133 != 0x0000 : bool)
  Class: Eq_115
  DataType: bool
  OrigDataType: bool
T_116: (in 0x07 : byte)
  Class: Eq_116
  DataType: byte
  OrigDataType: byte
T_117: (in al_143 : int8)
  Class: Eq_117
  DataType: int8
  OrigDataType: int8
T_118: (in 0x07 - al_143 : byte)
  Class: Eq_99
  DataType: byte
  OrigDataType: byte
T_119: (in 0x0008 : word16)
  Class: Eq_119
  DataType: uint16
  OrigDataType: uint16
T_120: (in bp_113 >> 0x0008 : word16)
  Class: Eq_120
  DataType: int16
  OrigDataType: int16
T_121: (in 0x000F : word16)
  Class: Eq_121
  DataType: word16
  OrigDataType: word16
T_122: (in bp_113 >> 0x0008 & 0x000F : word16)
  Class: Eq_122
  DataType: word16
  OrigDataType: word16
T_123: (in (byte) (bp_113 >> 0x0008 & 0x000F) : byte)
  Class: Eq_117
  DataType: int8
  OrigDataType: byte
T_124: (in al_143 - 0x07 : byte)
  Class: Eq_99
  DataType: byte
  OrigDataType: byte
T_125: (in 0x07 : byte)
  Class: Eq_117
  DataType: int8
  OrigDataType: int8
T_126: (in al_143 >= 0x07 : bool)
  Class: Eq_126
  DataType: bool
  OrigDataType: bool
T_127: (in cx_161 : word16)
  Class: Eq_127
  DataType: word16
  OrigDataType: word16
T_128: (in dx_124 : word16)
  Class: Eq_128
  DataType: word16
  OrigDataType: word16
T_129: (in 0x0040 : word16)
  Class: Eq_129
  DataType: word16
  OrigDataType: word16
T_130: (in dx_124 - 0x0040 : word16)
  Class: Eq_127
  DataType: word16
  OrigDataType: word16
T_131: (in al_164 : Eq_84)
  Class: Eq_84
  DataType: Eq_84
  OrigDataType: byte
T_132: (in ax_117 : word16)
  Class: Eq_132
  DataType: word16
  OrigDataType: word16
T_133: (in (byte) ax_117 : byte)
  Class: Eq_84
  DataType: Eq_84
  OrigDataType: byte
T_134: (in 0x0302 : word16)
  Class: Eq_134
  DataType: (memptr (ptr Eq_20) Eq_71)
  OrigDataType: (memptr T_20 (struct (0 T_71 t0000)))
T_135: (in Mem153[ds:0x0302:byte] : byte)
  Class: Eq_71
  DataType: Eq_71
  OrigDataType: byte
T_136: (in 0x01 : byte)
  Class: Eq_136
  DataType: byte
  OrigDataType: byte
T_137: (in Mem153[ds:0x0302:byte] + 0x01 : byte)
  Class: Eq_71
  DataType: Eq_71
  OrigDataType: byte
T_138: (in Mem174[ds:0x0302:byte] : byte)
  Class: Eq_71
  DataType: Eq_71
  OrigDataType: byte
T_139: (in 0x0300 : word16)
  Class: Eq_139
  DataType: (memptr (ptr Eq_20) uint16)
  OrigDataType: (memptr T_20 (struct (0 T_77 t0000)))
T_140: (in Mem174[ds:0x0300:word16] : word16)
  Class: Eq_77
  DataType: uint16
  OrigDataType: word16
T_141: (in 0x01FE : word16)
  Class: Eq_141
  DataType: (memptr (ptr Eq_20) uint16)
  OrigDataType: (memptr T_20 (struct (0 T_142 t0000)))
T_142: (in Mem174[ds:0x01FE:word16] : word16)
  Class: Eq_142
  DataType: uint16
  OrigDataType: word16
T_143: (in ds->w0300 + ds->w01FE : word16)
  Class: Eq_77
  DataType: uint16
  OrigDataType: word16
T_144: (in Mem177[ds:0x0300:word16] : word16)
  Class: Eq_77
  DataType: uint16
  OrigDataType: word16
T_145: (in 0x0001 : word16)
  Class: Eq_145
  DataType: word16
  OrigDataType: word16
T_146: (in cx_181 - 0x0001 : word16)
  Class: Eq_82
  DataType: word16
  OrigDataType: word16
T_147: (in (byte) cx_181 : byte)
  Class: Eq_84
  DataType: Eq_84
  OrigDataType: byte
T_148: (in 0x0000 : word16)
  Class: Eq_82
  DataType: word16
  OrigDataType: word16
T_149: (in cx_181 != 0x0000 : bool)
  Class: Eq_149
  DataType: bool
  OrigDataType: bool
T_150: (in 0x0000 : word16)
  Class: Eq_150
  DataType: word16
  OrigDataType: word16
T_151: (in di_126 + 0x0000 : word16)
  Class: Eq_151
  DataType: word16
  OrigDataType: word16
T_152: (in Mem169[0xA000:di_126 + 0x0000:byte] : byte)
  Class: Eq_84
  DataType: Eq_84
  OrigDataType: byte
T_153: (in 0x0001 : word16)
  Class: Eq_153
  DataType: word16
  OrigDataType: word16
T_154: (in di_126 + 0x0001 : word16)
  Class: Eq_80
  DataType: (memptr (ptr Eq_88) Eq_80)
  OrigDataType: word16
T_155: (in 0x0001 : word16)
  Class: Eq_155
  DataType: word16
  OrigDataType: word16
T_156: (in cx_161 - 0x0001 : word16)
  Class: Eq_127
  DataType: word16
  OrigDataType: word16
T_157: (in 0x0000 : word16)
  Class: Eq_127
  DataType: word16
  OrigDataType: word16
T_158: (in cx_161 == 0x0000 : bool)
  Class: Eq_158
  DataType: bool
  OrigDataType: bool
T_159: (in ax_96 : int16)
  Class: Eq_159
  DataType: int16
  OrigDataType: int16
T_160: (in 0xF000 : word16)
  Class: Eq_160
  DataType: word16
  OrigDataType: word16
T_161: (in SEQ(ds, 0xF000) : ptr32)
  Class: Eq_161
  DataType: ptr32
  OrigDataType: ptr32
T_162: (in 0x0300 : word16)
  Class: Eq_162
  DataType: (memptr (ptr Eq_20) uint16)
  OrigDataType: (memptr T_20 (struct (0 T_163 t0000)))
T_163: (in Mem79[ds:0x0300:word16] : word16)
  Class: Eq_77
  DataType: uint16
  OrigDataType: uint16
T_164: (in 0x0008 : word16)
  Class: Eq_164
  DataType: uint16
  OrigDataType: uint16
T_165: (in ds->w0300 >>u 0x0008 : word16)
  Class: Eq_165
  DataType: uint16
  OrigDataType: uint16
T_166: (in 0x0002 : word16)
  Class: Eq_166
  DataType: ui16
  OrigDataType: ui16
T_167: (in (ds->w0300 >>u 0x0008) * 0x0002 : word16)
  Class: Eq_167
  DataType: ui16
  OrigDataType: ui16
T_168: (in SEQ(ds, 0xF000)[(Mem79[ds:0x0300:word16] >>u 0x0008) * 0x0002] : word16)
  Class: Eq_159
  DataType: int16
  OrigDataType: word16
T_169: (in bp_108 : word16)
  Class: Eq_169
  DataType: word16
  OrigDataType: word16
T_170: (in 0xF000 : word16)
  Class: Eq_170
  DataType: word16
  OrigDataType: word16
T_171: (in SEQ(ds, 0xF000) : ptr32)
  Class: Eq_171
  DataType: ptr32
  OrigDataType: ptr32
T_172: (in 0x0304 : word16)
  Class: Eq_172
  DataType: (memptr (ptr Eq_20) Eq_71)
  OrigDataType: (memptr T_20 (struct (0 T_173 t0000)))
T_173: (in Mem79[ds:0x0304:word16] : word16)
  Class: Eq_71
  DataType: Eq_71
  OrigDataType: word16
T_174: (in 0x00 : byte)
  Class: Eq_174
  DataType: byte
  OrigDataType: byte
T_175: (in DPB(ds->t0304, 0x00, 8, 8) : word16)
  Class: Eq_175
  DataType: ui16
  OrigDataType: ui16
T_176: (in 0x0002 : word16)
  Class: Eq_176
  DataType: ui16
  OrigDataType: ui16
T_177: (in DPB(ds->t0304, 0x00, 8, 8) * 0x0002 : word16)
  Class: Eq_177
  DataType: ui16
  OrigDataType: ui16
T_178: (in SEQ(ds, 0xF000)[DPB(ds->t0304, 0x00, 8, 8) * 0x0002] : word16)
  Class: Eq_159
  DataType: int16
  OrigDataType: word16
T_179: (in 0xF000 : word16)
  Class: Eq_179
  DataType: word16
  OrigDataType: word16
T_180: (in SEQ(ds, 0xF000) : ptr32)
  Class: Eq_180
  DataType: ptr32
  OrigDataType: ptr32
T_181: (in 0x0302 : word16)
  Class: Eq_181
  DataType: (memptr (ptr Eq_20) Eq_71)
  OrigDataType: (memptr T_20 (struct (0 T_182 t0000)))
T_182: (in Mem79[ds:0x0302:word16] : word16)
  Class: Eq_71
  DataType: Eq_71
  OrigDataType: word16
T_183: (in 0x0040 : word16)
  Class: Eq_183
  DataType: word16
  OrigDataType: word16
T_184: (in Mem79[ds:0x0302:word16] + 0x0040 : word16)
  Class: Eq_184
  DataType: word16
  OrigDataType: word16
T_185: (in 0x00 : byte)
  Class: Eq_185
  DataType: byte
  OrigDataType: byte
T_186: (in DPB(Mem79[ds:0x0302:word16].u1, 0x00, 8, 8) : word16)
  Class: Eq_186
  DataType: ui16
  OrigDataType: ui16
T_187: (in 0x0002 : word16)
  Class: Eq_187
  DataType: ui16
  OrigDataType: ui16
T_188: (in DPB(Mem79[ds:0x0302:word16].u1, 0x00, 8, 8) * 0x0002 : word16)
  Class: Eq_188
  DataType: ui16
  OrigDataType: ui16
T_189: (in SEQ(ds, 0xF000)[DPB(Mem79[ds:0x0302:word16].u1, 0x00, 8, 8) * 0x0002] : word16)
  Class: Eq_159
  DataType: int16
  OrigDataType: word16
T_190: (in (&ds->t0304)[DPB(ds->t0304, 0x00, 8, 8) * 0x0002 / 0x0004] + (&ds->t0304)[(DPB(Mem79[ds:0x0302:word16].u1, 0x00, 8, 8) * 0x0002) / 0x0004] : word16)
  Class: Eq_169
  DataType: word16
  OrigDataType: word16
T_191: (in 0x0005 : word16)
  Class: Eq_191
  DataType: uint16
  OrigDataType: uint16
T_192: (in ax_96 >> 0x0005 : word16)
  Class: Eq_192
  DataType: int16
  OrigDataType: int16
T_193: (in 0x0080 : word16)
  Class: Eq_193
  DataType: word16
  OrigDataType: word16
T_194: (in (ax_96 >> 0x0005) + 0x0080 : word16)
  Class: Eq_94
  DataType: word16
  OrigDataType: word16
T_195: (in 0x0001 : word16)
  Class: Eq_195
  DataType: word16
  OrigDataType: word16
T_196: (in bp_108 << 0x0001 : word16)
  Class: Eq_196
  DataType: ui16
  OrigDataType: ui16
T_197: (in bp_108 + (bp_108 << 0x0001) : word16)
  Class: Eq_197
  DataType: word16
  OrigDataType: word16
T_198: (in 0x0002 : word16)
  Class: Eq_198
  DataType: word16
  OrigDataType: word16
T_199: (in bp_108 << 0x0002 : word16)
  Class: Eq_199
  DataType: ui16
  OrigDataType: ui16
T_200: (in bp_108 + (bp_108 << 0x0001) + (bp_108 << 0x0002) : word16)
  Class: Eq_109
  DataType: int16
  OrigDataType: word16
T_201: (in DPB(ax_96, cl_182, 0, 8) : word16)
  Class: Eq_132
  DataType: word16
  OrigDataType: word16
T_202: (in 0x0140 : word16)
  Class: Eq_202
  DataType: word16
  OrigDataType: word16
T_203: (in 0x0140 - cx_121 : word16)
  Class: Eq_128
  DataType: word16
  OrigDataType: word16
T_204: (in 0x0304 : word16)
  Class: Eq_204
  DataType: (memptr (ptr Eq_20) Eq_71)
  OrigDataType: (memptr T_20 (struct (0 T_71 t0000)))
T_205: (in Mem177[ds:0x0304:word16] : word16)
  Class: Eq_71
  DataType: Eq_71
  OrigDataType: word16
T_206: (in 0x0001 : word16)
  Class: Eq_206
  DataType: word16
  OrigDataType: word16
T_207: (in Mem177[ds:0x0304:word16] + 0x0001 : word16)
  Class: Eq_71
  DataType: Eq_71
  OrigDataType: word16
T_208: (in Mem184[ds:0x0304:word16] : word16)
  Class: Eq_71
  DataType: Eq_71
  OrigDataType: word16
T_209: (in 0xF000 : word16)
  Class: Eq_209
  DataType: word16
  OrigDataType: word16
T_210: (in SEQ(ds, 0xF000) : ptr32)
  Class: Eq_210
  DataType: ptr32
  OrigDataType: ptr32
T_211: (in 0x0304 : word16)
  Class: Eq_211
  DataType: (memptr (ptr Eq_20) Eq_71)
  OrigDataType: (memptr T_20 (struct (0 T_212 t0000)))
T_212: (in Mem184[ds:0x0304:word16] : word16)
  Class: Eq_71
  DataType: Eq_71
  OrigDataType: word16
T_213: (in 0x00 : byte)
  Class: Eq_213
  DataType: byte
  OrigDataType: byte
T_214: (in DPB(ds->t0304, 0x00, 8, 8) : word16)
  Class: Eq_214
  DataType: ui16
  OrigDataType: ui16
T_215: (in 0x0002 : word16)
  Class: Eq_215
  DataType: ui16
  OrigDataType: ui16
T_216: (in DPB(ds->t0304, 0x00, 8, 8) * 0x0002 : word16)
  Class: Eq_216
  DataType: ui16
  OrigDataType: ui16
T_217: (in SEQ(ds, 0xF000)[DPB(ds->t0304, 0x00, 8, 8) * 0x0002] : word16)
  Class: Eq_159
  DataType: int16
  OrigDataType: word16
T_218: (in 0x0160 : word16)
  Class: Eq_218
  DataType: word16
  OrigDataType: word16
T_219: (in (&ds->t0304)[DPB(ds->t0304, 0x00, 8, 8) * 0x0002 / 0x0004] + 0x0160 : word16)
  Class: Eq_219
  DataType: word16
  OrigDataType: word16
T_220: (in (&ds->t0304)[DPB(ds->t0304, 0x00, 8, 8) * 0x0002 / 0x0004] + 0x0160 + bp_113 : word16)
  Class: Eq_220
  DataType: uint16
  OrigDataType: uint16
T_221: (in 0x0001 : word16)
  Class: Eq_221
  DataType: uint16
  OrigDataType: uint16
T_222: (in (&ds->t0304)[DPB(ds->t0304, 0x00, 8, 8) * 0x0002 / 0x0004] + 0x0160 + bp_113 >>u 0x0001 : word16)
  Class: Eq_142
  DataType: uint16
  OrigDataType: uint16
T_223: (in 0x01FE : word16)
  Class: Eq_223
  DataType: (memptr (ptr Eq_20) uint16)
  OrigDataType: (memptr T_20 (struct (0 T_224 t0000)))
T_224: (in Mem194[ds:0x01FE:word16] : word16)
  Class: Eq_142
  DataType: uint16
  OrigDataType: word16
T_225: (in __inb : ptr32)
  Class: Eq_225
  DataType: (ptr Eq_225)
  OrigDataType: (ptr (fn T_227 (T_226)))
T_226: (in 0x60 : byte)
  Class: Eq_226
  DataType: byte
  OrigDataType: byte
T_227: (in __inb(0x60) : byte)
  Class: Eq_227
  DataType: byte
  OrigDataType: byte
T_228: (in 0x01 : byte)
  Class: Eq_227
  DataType: byte
  OrigDataType: byte
T_229: (in __inb(0x60) != 0x01 : bool)
  Class: Eq_229
  DataType: bool
  OrigDataType: bool
T_230:
  Class: Eq_230
  DataType: int16
  OrigDataType: (struct 0002 (0 T_168 t0000))
T_231:
  Class: Eq_230
  DataType: int16
  OrigDataType: (struct 0002 (0 T_178 t0000))
T_232:
  Class: Eq_230
  DataType: int16
  OrigDataType: (struct 0002 (0 T_189 t0000))
T_233:
  Class: Eq_230
  DataType: int16
  OrigDataType: (struct 0002 (0 T_217 t0000))
*/
typedef Eq_88 Eq_1struct Globals {
	Eq_88 * ptrFFFA0000;	// FFFA0000
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

typedef  Eq_20[]Eq_22Eq_26Eq_71Eq_71struct Eq_20 {
	int16 aFFFFF000[];	// FFFFF000
	Eq_22 t01F6;	// 1F6
	Eq_26 t01FA;	// 1FA
	uint16 w01FE;	// 1FE
	uint16 w0300;	// 300
	Eq_71 t0302;	// 302
	Eq_71 t0304;	// 304
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

typedef void (Eq_38)(word16, byte);

typedef void (Eq_46)(word16, bcu8);

typedef void (Eq_50)(word16, byte);

typedef void (Eq_54)(word16, uint16);

typedef union Eq_71 {
	byte u0;
	word16 u1;
} Eq_71;

typedef Eq_84 Eq_80struct Eq_80 {	// size: 1 1
	Eq_84 t0000;	// 0
} Eq_80;

typedef union Eq_84 {
	ui16 u0;
	byte u1;
} Eq_84;

typedef Eq_80 Eq_88struct Eq_88 {
	Eq_80 t0000;	// 0
} Eq_88;

typedef byte (Eq_225)(byte);

