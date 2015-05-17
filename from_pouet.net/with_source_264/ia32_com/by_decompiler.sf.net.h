// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_264/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_196) ptrFFFA0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_3: (fn void (byte))
	T_3 (in bios_video_set_mode : ptr32)
	T_4 (in signature of bios_video_set_mode : void)
Eq_13: (fn void (word16, uint16))
	T_13 (in __outb : ptr32)
Eq_18: (fn void (word16, uint8))
	T_18 (in __outb : ptr32)
Eq_23: (fn void (word16, ui16))
	T_23 (in __outb : ptr32)
Eq_33: (union "Eq_33" (real16 u0) (real64 u1))
	T_33 (in rLoc1_16 : Eq_33)
	T_34 (in 0 : real64)
	T_187 (in rLoc1_16 + (real64) ds->w01D3 : word16)
Eq_40: (segment "Eq_40" (1D3 word16 w01D3) (200 (arr bcu8) a0200) (33F (arr byte) a033F) (340 (arr byte) a0340) (341 (arr byte) a0341) (480 (arr byte) a0480))
	T_40 (in es : (ptr Eq_40))
	T_52 (in ds : (ptr Eq_40))
Eq_103: (struct "Eq_103" (2B0 bcu8 b02B0))
	T_103 (in di_209 : (memptr (ptr Eq_40) Eq_103))
	T_119 (in ((int16) fn0C00_01D5(fn0C00_01D5((real64) dx_109, rLoc3_200, rLoc2_199), rLoc3_200, rLoc2_199) + 0x0064) *s 0x0140 + (int16) rLoc3_200 : word16)
Eq_104: (fn real64 (real64, real64, real64))
	T_104 (in fn0C00_01D5 : ptr32)
	T_105 (in signature of fn0C00_01D5 : void)
	T_109 (in fn0C00_01D5 : ptr32)
Eq_134: (struct "Eq_134" 0001 (FFFFFEC0 bcu8 bFFFFFEC0) (FFFFFFFF byte bFFFFFFFF) (0 byte b0000) (1 byte b0001) (140 byte b0140))
	T_134 (in di_141 : (memptr (ptr Eq_40) Eq_134))
	T_135 (in 0x0340 : word16)
	T_173 (in di_141 + 0x0001 : word16)
Eq_186: (union "Eq_186" (real16 u0) (real64 u1))
	T_186 (in (real64) ds->w01D3 : real64)
Eq_188: (fn word16 (byte))
	T_188 (in __inw : ptr32)
Eq_196: (segment "Eq_196" (0 (arr bcu8) a0000))
	T_196 (in 0xA000 : selector)
Eq_212: (fn real64 (real64))
	T_212 (in sin : ptr32)
Eq_215: (fn real64 (real64))
	T_215 (in cos : ptr32)
Eq_220: (fn real64 (real64))
	T_220 (in sin : ptr32)
Eq_223: (fn real64 (real64))
	T_223 (in cos : ptr32)
Eq_228: (fn real64 (real64))
	T_228 (in cos : ptr32)
Eq_229: (fn real64 (real64))
	T_229 (in sin : ptr32)
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr Eq_1)
  OrigDataType: (ptr (struct "Globals"))
T_2: (in rLoc1 : real64)
  Class: Eq_2
  DataType: real64
  OrigDataType: real64
T_3: (in bios_video_set_mode : ptr32)
  Class: Eq_3
  DataType: (ptr Eq_3)
  OrigDataType: (ptr (fn T_7 (T_6)))
T_4: (in signature of bios_video_set_mode : void)
  Class: Eq_3
  DataType: (ptr Eq_3)
  OrigDataType: 
T_5: (in al : byte)
  Class: Eq_5
  DataType: byte
  OrigDataType: byte
T_6: (in 0x13 : byte)
  Class: Eq_5
  DataType: byte
  OrigDataType: byte
T_7: (in bios_video_set_mode(0x13) : void)
  Class: Eq_7
  DataType: void
  OrigDataType: void
T_8: (in cx_14 : int16)
  Class: Eq_8
  DataType: int16
  OrigDataType: int16
T_9: (in 0x0100 : word16)
  Class: Eq_8
  DataType: int16
  OrigDataType: word16
T_10: (in al_9 : uint8)
  Class: Eq_10
  DataType: uint8
  OrigDataType: uint8
T_11: (in -cx_14 : word16)
  Class: Eq_11
  DataType: int16
  OrigDataType: int16
T_12: (in (byte) -cx_14 : byte)
  Class: Eq_10
  DataType: uint8
  OrigDataType: byte
T_13: (in __outb : ptr32)
  Class: Eq_13
  DataType: (ptr Eq_13)
  OrigDataType: (ptr (fn T_17 (T_14, T_16)))
T_14: (in 0x03C9 : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_15: (in 0x03 : byte)
  Class: Eq_15
  DataType: uint8
  OrigDataType: uint8
T_16: (in al_9 >>u 0x03 : word16)
  Class: Eq_16
  DataType: uint16
  OrigDataType: uint16
T_17: (in __outb(0x03C9, al_9 >>u 0x03) : void)
  Class: Eq_17
  DataType: void
  OrigDataType: void
T_18: (in __outb : ptr32)
  Class: Eq_18
  DataType: (ptr Eq_18)
  OrigDataType: (ptr (fn T_22 (T_19, T_21)))
T_19: (in 0x03C9 : word16)
  Class: Eq_19
  DataType: word16
  OrigDataType: word16
T_20: (in 0x04 : byte)
  Class: Eq_20
  DataType: uint8
  OrigDataType: uint8
T_21: (in al_9 >>u 0x04 : byte)
  Class: Eq_21
  DataType: uint8
  OrigDataType: uint8
T_22: (in __outb(0x03C9, al_9 >>u 0x04) : void)
  Class: Eq_22
  DataType: void
  OrigDataType: void
T_23: (in __outb : ptr32)
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: (ptr (fn T_28 (T_24, T_27)))
T_24: (in 0x03C9 : word16)
  Class: Eq_24
  DataType: word16
  OrigDataType: word16
T_25: (in al_9 >>u 0x04 : byte)
  Class: Eq_25
  DataType: uint8
  OrigDataType: uint8
T_26: (in 0x02 : byte)
  Class: Eq_26
  DataType: byte
  OrigDataType: byte
T_27: (in al_9 >>u 0x04 << 0x02 : word16)
  Class: Eq_27
  DataType: ui16
  OrigDataType: ui16
T_28: (in __outb(0x03C9, al_9 >>u 0x04 << 0x02) : void)
  Class: Eq_28
  DataType: void
  OrigDataType: void
T_29: (in 0x0001 : word16)
  Class: Eq_29
  DataType: word16
  OrigDataType: word16
T_30: (in cx_14 - 0x0001 : word16)
  Class: Eq_8
  DataType: int16
  OrigDataType: word16
T_31: (in 0x0000 : word16)
  Class: Eq_8
  DataType: int16
  OrigDataType: word16
T_32: (in cx_14 != 0x0000 : bool)
  Class: Eq_32
  DataType: bool
  OrigDataType: bool
T_33: (in rLoc1_16 : Eq_33)
  Class: Eq_33
  DataType: Eq_33
  OrigDataType: (union (real16 u0) (real64 u1))
T_34: (in 0 : real64)
  Class: Eq_33
  DataType: real64
  OrigDataType: real64
T_35: (in 0x00 : byte)
  Class: Eq_35
  DataType: bcu8
  OrigDataType: byte
T_36: (in al_224 : bcu8)
  Class: Eq_35
  DataType: bcu8
  OrigDataType: byte
T_37: (in al_68 : bcu8)
  Class: Eq_35
  DataType: bcu8
  OrigDataType: bcu8
T_38: (in 0x08 : byte)
  Class: Eq_38
  DataType: byte
  OrigDataType: byte
T_39: (in al_68 - 0x08 : byte)
  Class: Eq_35
  DataType: bcu8
  OrigDataType: byte
T_40: (in es : (ptr Eq_40))
  Class: Eq_40
  DataType: (ptr Eq_40)
  OrigDataType: (ptr (segment (200 (arr T_236) a0200) (340 (arr T_242) a0340)))
T_41: (in di_58 : (memptr (ptr Eq_40) bcu8))
  Class: Eq_41
  DataType: (memptr (ptr Eq_40) bcu8)
  OrigDataType: (memptr T_40 (struct 0001 (0 T_35 t0000)))
T_42: (in 0x0000 : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_43: (in di_58 + 0x0000 : word16)
  Class: Eq_43
  DataType: word16
  OrigDataType: word16
T_44: (in Mem81[es:di_58 + 0x0000:byte] : byte)
  Class: Eq_35
  DataType: bcu8
  OrigDataType: byte
T_45: (in 0x0001 : word16)
  Class: Eq_45
  DataType: word16
  OrigDataType: word16
T_46: (in di_58 + 0x0001 : word16)
  Class: Eq_41
  DataType: (memptr (ptr Eq_40) bcu8)
  OrigDataType: word16
T_47: (in cx_139 : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_48: (in 0x0001 : word16)
  Class: Eq_48
  DataType: word16
  OrigDataType: word16
T_49: (in cx_139 - 0x0001 : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_50: (in 0x0000 : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_51: (in cx_139 != 0x0000 : bool)
  Class: Eq_51
  DataType: bool
  OrigDataType: bool
T_52: (in ds : (ptr Eq_40))
  Class: Eq_40
  DataType: (ptr Eq_40)
  OrigDataType: (ptr (segment (1D3 T_185 t01D3) (200 (arr T_237) a0200) (33F (arr T_239) a033F) (341 (arr byte) a0341) (480 (arr T_241) a0480)))
T_53: (in 0x0000 : word16)
  Class: Eq_53
  DataType: word16
  OrigDataType: word16
T_54: (in di_58 + 0x0000 : word16)
  Class: Eq_54
  DataType: word16
  OrigDataType: word16
T_55: (in Mem0[ds:di_58 + 0x0000:byte] : byte)
  Class: Eq_35
  DataType: bcu8
  OrigDataType: byte
T_56: (in 0x08 : byte)
  Class: Eq_35
  DataType: bcu8
  OrigDataType: bcu8
T_57: (in al_68 <=u 0x08 : bool)
  Class: Eq_57
  DataType: bool
  OrigDataType: bool
T_58: (in dx_ax_95 : word32)
  Class: Eq_58
  DataType: word32
  OrigDataType: word32
T_59: (in 0x0000 : word16)
  Class: Eq_59
  DataType: word16
  OrigDataType: word16
T_60: (in SEQ(0x0000, cx_139) : word32)
  Class: Eq_58
  DataType: word32
  OrigDataType: word32
T_61: (in dx_ax_98 : uint32)
  Class: Eq_61
  DataType: uint32
  OrigDataType: uint32
T_62: (in 0x0028 : word16)
  Class: Eq_62
  DataType: word16
  OrigDataType: word16
T_63: (in dx_ax_95 % 0x0028 : uint16)
  Class: Eq_63
  DataType: uint16
  OrigDataType: uint16
T_64: (in SEQ(dx_ax_95 % 0x0028, cx_139) : word32)
  Class: Eq_61
  DataType: uint32
  OrigDataType: word32
T_65: (in dx_ax_104 : word32)
  Class: Eq_65
  DataType: word32
  OrigDataType: word32
T_66: (in 0x0000 : word16)
  Class: Eq_66
  DataType: word16
  OrigDataType: word16
T_67: (in 0x0028 : word16)
  Class: Eq_67
  DataType: uint16
  OrigDataType: uint16
T_68: (in dx_ax_98 /u 0x0028 : uint16)
  Class: Eq_68
  DataType: uint16
  OrigDataType: uint16
T_69: (in SEQ(0x0000, dx_ax_98 /u 0x0028) : word32)
  Class: Eq_65
  DataType: word32
  OrigDataType: word32
T_70: (in dx_109 : int16)
  Class: Eq_70
  DataType: int16
  OrigDataType: int16
T_71: (in 0x0028 : word16)
  Class: Eq_71
  DataType: word16
  OrigDataType: word16
T_72: (in dx_ax_104 % 0x0028 : uint16)
  Class: Eq_72
  DataType: uint16
  OrigDataType: uint16
T_73: (in 0x0014 : word16)
  Class: Eq_73
  DataType: word16
  OrigDataType: word16
T_74: (in dx_ax_104 % 0x0028 - 0x0014 : word16)
  Class: Eq_70
  DataType: int16
  OrigDataType: word16
T_75: (in ax_108 : int16)
  Class: Eq_75
  DataType: int16
  OrigDataType: int16
T_76: (in dx_ax_104 % 0x0028 : uint16)
  Class: Eq_76
  DataType: uint16
  OrigDataType: uint16
T_77: (in dx_ax_98 /u 0x0028 : uint16)
  Class: Eq_77
  DataType: uint16
  OrigDataType: uint16
T_78: (in SEQ(dx_ax_104 % 0x0028, dx_ax_98 /u 0x0028) : word32)
  Class: Eq_78
  DataType: uint32
  OrigDataType: uint32
T_79: (in 0x0028 : word16)
  Class: Eq_79
  DataType: uint16
  OrigDataType: uint16
T_80: (in SEQ(dx_ax_104 % 0x0028, dx_ax_98 /u 0x0028) /u 0x0028 : uint16)
  Class: Eq_80
  DataType: uint16
  OrigDataType: uint16
T_81: (in 0x0014 : word16)
  Class: Eq_81
  DataType: word16
  OrigDataType: word16
T_82: (in SEQ(dx_ax_104 % 0x0028, dx_ax_98 /u 0x0028) /u 0x0028 - 0x0014 : word16)
  Class: Eq_75
  DataType: int16
  OrigDataType: word16
T_83: (in dx_100 : int16)
  Class: Eq_83
  DataType: int16
  OrigDataType: int16
T_84: (in dx_ax_95 % 0x0028 : uint16)
  Class: Eq_84
  DataType: uint16
  OrigDataType: uint16
T_85: (in 0x0014 : word16)
  Class: Eq_85
  DataType: word16
  OrigDataType: word16
T_86: (in dx_ax_95 % 0x0028 - 0x0014 : word16)
  Class: Eq_83
  DataType: int16
  OrigDataType: word16
T_87: (in ax_120 : uint16)
  Class: Eq_87
  DataType: uint16
  OrigDataType: uint16
T_88: (in dx_100 *s dx_100 : int16)
  Class: Eq_88
  DataType: int16
  OrigDataType: int16
T_89: (in dx_109 *s dx_109 : int16)
  Class: Eq_89
  DataType: int16
  OrigDataType: int16
T_90: (in ax_108 *s ax_108 : int16)
  Class: Eq_90
  DataType: int16
  OrigDataType: int16
T_91: (in dx_109 *s dx_109 + ax_108 *s ax_108 : word16)
  Class: Eq_91
  DataType: word16
  OrigDataType: word16
T_92: (in dx_100 *s dx_100 + (dx_109 *s dx_109 + ax_108 *s ax_108) : word16)
  Class: Eq_87
  DataType: uint16
  OrigDataType: word16
T_93: (in 0x0085 : word16)
  Class: Eq_87
  DataType: uint16
  OrigDataType: cups16
T_94: (in ax_120 <u 0x0085 : bool)
  Class: Eq_94
  DataType: bool
  OrigDataType: bool
T_95: (in rLoc2_199 : real64)
  Class: Eq_95
  DataType: real64
  OrigDataType: real64
T_96: (in (real64) dx_100 : real64)
  Class: Eq_95
  DataType: real64
  OrigDataType: real64
T_97: (in rLoc3_200 : real64)
  Class: Eq_97
  DataType: real64
  OrigDataType: real64
T_98: (in (real64) ax_108 : real64)
  Class: Eq_97
  DataType: real64
  OrigDataType: real64
T_99: (in 0x80 : byte)
  Class: Eq_99
  DataType: byte
  OrigDataType: byte
T_100: (in DPB(ax_120, 0x80, 0, 8) : word16)
  Class: Eq_100
  DataType: word16
  OrigDataType: word16
T_101: (in (int16) rLoc2_199 : int16)
  Class: Eq_101
  DataType: int16
  OrigDataType: int16
T_102: (in DPB(ax_120, 0x80, 0, 8) + (int16) rLoc2_199 : word16)
  Class: Eq_87
  DataType: uint16
  OrigDataType: word16
T_103: (in di_209 : (memptr (ptr Eq_40) Eq_103))
  Class: Eq_103
  DataType: (memptr (ptr Eq_40) Eq_103)
  OrigDataType: (memptr T_40 (struct (2B0 T_120 t02B0)))
T_104: (in fn0C00_01D5 : ptr32)
  Class: Eq_104
  DataType: (ptr Eq_104)
  OrigDataType: (ptr (fn T_112 (T_111, T_97, T_95)))
T_105: (in signature of fn0C00_01D5 : void)
  Class: Eq_104
  DataType: (ptr Eq_104)
  OrigDataType: 
T_106: (in rArg0 : real64)
  Class: Eq_106
  DataType: real64
  OrigDataType: real64
T_107: (in rArg1 : real64)
  Class: Eq_97
  DataType: real64
  OrigDataType: real64
T_108: (in rArg2 : real64)
  Class: Eq_95
  DataType: real64
  OrigDataType: real64
T_109: (in fn0C00_01D5 : ptr32)
  Class: Eq_104
  DataType: (ptr Eq_104)
  OrigDataType: (ptr (fn T_111 (T_110, T_97, T_95)))
T_110: (in (real64) dx_109 : real64)
  Class: Eq_106
  DataType: real64
  OrigDataType: real64
T_111: (in fn0C00_01D5((real64) dx_109, rLoc3_200, rLoc2_199) : real64)
  Class: Eq_106
  DataType: real64
  OrigDataType: real64
T_112: (in fn0C00_01D5(fn0C00_01D5((real64) dx_109, rLoc3_200, rLoc2_199), rLoc3_200, rLoc2_199) : real64)
  Class: Eq_106
  DataType: real64
  OrigDataType: real64
T_113: (in (int16) fn0C00_01D5(fn0C00_01D5((real64) dx_109, rLoc3_200, rLoc2_199), rLoc3_200, rLoc2_199) : int16)
  Class: Eq_113
  DataType: int16
  OrigDataType: int16
T_114: (in 0x0064 : word16)
  Class: Eq_114
  DataType: word16
  OrigDataType: word16
T_115: (in (int16) fn0C00_01D5(fn0C00_01D5((real64) dx_109, rLoc3_200, rLoc2_199), rLoc3_200, rLoc2_199) + 0x0064 : word16)
  Class: Eq_115
  DataType: int16
  OrigDataType: int16
T_116: (in 0x0140 : word16)
  Class: Eq_116
  DataType: int16
  OrigDataType: int16
T_117: (in ((int16) fn0C00_01D5(fn0C00_01D5((real64) dx_109, rLoc3_200, rLoc2_199), rLoc3_200, rLoc2_199) + 0x0064) *s 0x0140 : int16)
  Class: Eq_117
  DataType: int16
  OrigDataType: int16
T_118: (in (int16) rLoc3_200 : int16)
  Class: Eq_118
  DataType: int16
  OrigDataType: int16
T_119: (in ((int16) fn0C00_01D5(fn0C00_01D5((real64) dx_109, rLoc3_200, rLoc2_199), rLoc3_200, rLoc2_199) + 0x0064) *s 0x0140 + (int16) rLoc3_200 : word16)
  Class: Eq_103
  DataType: (memptr (ptr Eq_40) Eq_103)
  OrigDataType: word16
T_120: (in al_216 : bcu8)
  Class: Eq_120
  DataType: bcu8
  OrigDataType: bcu8
T_121: (in (byte) ax_120 : byte)
  Class: Eq_120
  DataType: bcu8
  OrigDataType: byte
T_122: (in 0x02B0 : word16)
  Class: Eq_122
  DataType: word16
  OrigDataType: word16
T_123: (in di_209 + 0x02B0 : word16)
  Class: Eq_123
  DataType: word16
  OrigDataType: word16
T_124: (in Mem81[ds:di_209 + 0x02B0:byte] : byte)
  Class: Eq_120
  DataType: bcu8
  OrigDataType: bcu8
T_125: (in al_216 <=u (ds->*di_209).b02B0 : bool)
  Class: Eq_125
  DataType: bool
  OrigDataType: bool
T_126: (in 0x0280 : word16)
  Class: Eq_87
  DataType: uint16
  OrigDataType: cups16
T_127: (in ax_120 <u 0x0280 : bool)
  Class: Eq_127
  DataType: bool
  OrigDataType: bool
T_128: (in 0x0001 : word16)
  Class: Eq_128
  DataType: word16
  OrigDataType: word16
T_129: (in cx_139 - 0x0001 : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_130: (in 0x0000 : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_131: (in cx_139 != 0x0000 : bool)
  Class: Eq_131
  DataType: bool
  OrigDataType: bool
T_132: (in di_209 + 0x02B0 : word16)
  Class: Eq_132
  DataType: word16
  OrigDataType: word16
T_133: (in Mem220[es:di_209 + 0x02B0:byte] : byte)
  Class: Eq_120
  DataType: bcu8
  OrigDataType: byte
T_134: (in di_141 : (memptr (ptr Eq_40) Eq_134))
  Class: Eq_134
  DataType: (memptr (ptr Eq_40) Eq_134)
  OrigDataType: (memptr T_40 (struct 0001 (FFFFFEC0 T_141 tFFFFFEC0) (FFFFFFFF T_144 tFFFFFFFF) (0 T_170 t0000) (1 T_149 t0001) (140 T_159 t0140)))
T_135: (in 0x0340 : word16)
  Class: Eq_134
  DataType: (memptr (ptr Eq_40) Eq_134)
  OrigDataType: word16
T_136: (in cx_142 : word16)
  Class: Eq_136
  DataType: word16
  OrigDataType: word16
T_137: (in 0xF8C0 : word16)
  Class: Eq_136
  DataType: word16
  OrigDataType: word16
T_138: (in al_149 : bcu8)
  Class: Eq_138
  DataType: bcu8
  OrigDataType: bcu8
T_139: (in 0x0140 : word16)
  Class: Eq_139
  DataType: word16
  OrigDataType: word16
T_140: (in di_141 - 0x0140 : word16)
  Class: Eq_140
  DataType: word16
  OrigDataType: word16
T_141: (in Mem81[ds:di_141 - 0x0140:byte] : byte)
  Class: Eq_35
  DataType: bcu8
  OrigDataType: byte
T_142: (in 0x0001 : word16)
  Class: Eq_142
  DataType: word16
  OrigDataType: word16
T_143: (in di_141 - 0x0001 : word16)
  Class: Eq_143
  DataType: word16
  OrigDataType: word16
T_144: (in Mem81[ds:di_141 - 0x0001:byte] : byte)
  Class: Eq_144
  DataType: byte
  OrigDataType: byte
T_145: (in (ds->*di_141).b0140 + (ds->*di_141).b0001 : byte)
  Class: Eq_138
  DataType: bcu8
  OrigDataType: byte
T_146: (in al_153 : bcu8)
  Class: Eq_146
  DataType: bcu8
  OrigDataType: bcu8
T_147: (in 0x0001 : word16)
  Class: Eq_147
  DataType: word16
  OrigDataType: word16
T_148: (in di_141 + 0x0001 : word16)
  Class: Eq_148
  DataType: word16
  OrigDataType: word16
T_149: (in Mem81[ds:di_141 + 0x0001:byte] : byte)
  Class: Eq_149
  DataType: byte
  OrigDataType: byte
T_150: (in al_149 + (ds->*di_141).b0001 : byte)
  Class: Eq_146
  DataType: bcu8
  OrigDataType: byte
T_151: (in ax_161 : uint16)
  Class: Eq_151
  DataType: uint16
  OrigDataType: uint16
T_152: (in 0x00 : byte)
  Class: Eq_138
  DataType: bcu8
  OrigDataType: bcu8
T_153: (in al_149 <u 0x00 : bool)
  Class: Eq_153
  DataType: bool
  OrigDataType: bool
T_154: (in 0x00 : byte)
  Class: Eq_146
  DataType: bcu8
  OrigDataType: bcu8
T_155: (in al_153 <u 0x00 : bool)
  Class: Eq_155
  DataType: bool
  OrigDataType: bool
T_156: (in (al_149 <u 0x00) + (al_153 <u 0x00) : word16)
  Class: Eq_156
  DataType: word16
  OrigDataType: word16
T_157: (in 0x0140 : word16)
  Class: Eq_157
  DataType: word16
  OrigDataType: word16
T_158: (in di_141 + 0x0140 : word16)
  Class: Eq_158
  DataType: word16
  OrigDataType: word16
T_159: (in Mem81[ds:di_141 + 0x0140:byte] : byte)
  Class: Eq_159
  DataType: byte
  OrigDataType: byte
T_160: (in al_153 + (ds->*di_141).b0140 : byte)
  Class: Eq_160
  DataType: bcu8
  OrigDataType: bcu8
T_161: (in 0x00 : byte)
  Class: Eq_160
  DataType: bcu8
  OrigDataType: bcu8
T_162: (in al_153 + (ds->*di_141).b0140 <u 0x00 : bool)
  Class: Eq_162
  DataType: bool
  OrigDataType: bool
T_163: (in (al_149 <u 0x00) + (al_153 <u 0x00) + (al_153 + (ds->*di_141).b0140 <u 0x00) : word16)
  Class: Eq_163
  DataType: word16
  OrigDataType: word16
T_164: (in DPB(ax_120, (al_149 <u 0x00) + (al_153 <u 0x00) + (al_153 + (ds->*di_141).b0140 <u 0x00), 8, 8) : word16)
  Class: Eq_151
  DataType: uint16
  OrigDataType: word16
T_165: (in 0x0002 : word16)
  Class: Eq_165
  DataType: uint16
  OrigDataType: uint16
T_166: (in ax_161 >>u 0x0002 : word16)
  Class: Eq_166
  DataType: uint16
  OrigDataType: uint16
T_167: (in (byte) (ax_161 >>u 0x0002) : byte)
  Class: Eq_167
  DataType: byte
  OrigDataType: byte
T_168: (in 0x0000 : word16)
  Class: Eq_168
  DataType: word16
  OrigDataType: word16
T_169: (in di_141 + 0x0000 : word16)
  Class: Eq_169
  DataType: word16
  OrigDataType: word16
T_170: (in Mem165[es:di_141 + 0x0000:byte] : byte)
  Class: Eq_167
  DataType: byte
  OrigDataType: byte
T_171: (in ax_161 >>u 0x0002 : word16)
  Class: Eq_87
  DataType: uint16
  OrigDataType: uint16
T_172: (in 0x0001 : word16)
  Class: Eq_172
  DataType: word16
  OrigDataType: word16
T_173: (in di_141 + 0x0001 : word16)
  Class: Eq_134
  DataType: (memptr (ptr Eq_40) Eq_134)
  OrigDataType: word16
T_174: (in 0x0001 : word16)
  Class: Eq_174
  DataType: word16
  OrigDataType: word16
T_175: (in cx_142 - 0x0001 : word16)
  Class: Eq_136
  DataType: word16
  OrigDataType: word16
T_176: (in 0x0000 : word16)
  Class: Eq_136
  DataType: word16
  OrigDataType: word16
T_177: (in cx_142 != 0x0000 : bool)
  Class: Eq_177
  DataType: bool
  OrigDataType: bool
T_178: (in si_171 : (memptr (ptr Eq_40) bcu8))
  Class: Eq_178
  DataType: (memptr (ptr Eq_40) bcu8)
  OrigDataType: (memptr T_52 (struct 0001 (0 T_195 t0000)))
T_179: (in 0x0200 : word16)
  Class: Eq_178
  DataType: (memptr (ptr Eq_40) bcu8)
  OrigDataType: word16
T_180: (in di_172 : (memptr (ptr Eq_196) bcu8))
  Class: Eq_180
  DataType: (memptr (ptr Eq_196) bcu8)
  OrigDataType: (memptr T_196 (struct 0001 (0 T_199 t0000)))
T_181: (in 0x0000 : word16)
  Class: Eq_180
  DataType: (memptr (ptr Eq_196) bcu8)
  OrigDataType: word16
T_182: (in 0x0001 : word16)
  Class: Eq_182
  DataType: word16
  OrigDataType: word16
T_183: (in cx_142 - 0x0001 : word16)
  Class: Eq_8
  DataType: int16
  OrigDataType: word16
T_184: (in 0x01D3 : word16)
  Class: Eq_184
  DataType: (memptr (ptr Eq_40) word16)
  OrigDataType: (memptr T_52 (struct (0 T_185 t0000)))
T_185: (in Mem165[ds:0x01D3:word16] : word16)
  Class: Eq_185
  DataType: word16
  OrigDataType: word16
T_186: (in (real64) ds->w01D3 : real64)
  Class: Eq_186
  DataType: Eq_186
  OrigDataType: (union (real16 u0) (real64 u1))
T_187: (in rLoc1_16 + (real64) ds->w01D3 : word16)
  Class: Eq_33
  DataType: Eq_33
  OrigDataType: real16
T_188: (in __inw : ptr32)
  Class: Eq_188
  DataType: (ptr Eq_188)
  OrigDataType: (ptr (fn T_190 (T_189)))
T_189: (in 0x60 : byte)
  Class: Eq_189
  DataType: byte
  OrigDataType: byte
T_190: (in __inw(0x60) : word16)
  Class: Eq_190
  DataType: word16
  OrigDataType: word16
T_191: (in 0x0001 : word16)
  Class: Eq_190
  DataType: word16
  OrigDataType: word16
T_192: (in __inw(0x60) != 0x0001 : bool)
  Class: Eq_192
  DataType: bool
  OrigDataType: bool
T_193: (in 0x0000 : word16)
  Class: Eq_193
  DataType: word16
  OrigDataType: word16
T_194: (in si_171 + 0x0000 : word16)
  Class: Eq_194
  DataType: word16
  OrigDataType: word16
T_195: (in Mem165[ds:si_171 + 0x0000:byte] : byte)
  Class: Eq_35
  DataType: bcu8
  OrigDataType: byte
T_196: (in 0xA000 : selector)
  Class: Eq_196
  DataType: (ptr Eq_196)
  OrigDataType: (ptr (segment (0 (arr T_244) a0000)))
T_197: (in 0x0000 : word16)
  Class: Eq_197
  DataType: word16
  OrigDataType: word16
T_198: (in di_172 + 0x0000 : word16)
  Class: Eq_198
  DataType: word16
  OrigDataType: word16
T_199: (in Mem186[0xA000:di_172 + 0x0000:byte] : byte)
  Class: Eq_35
  DataType: bcu8
  OrigDataType: byte
T_200: (in 0x0001 : word16)
  Class: Eq_200
  DataType: word16
  OrigDataType: word16
T_201: (in si_171 + 0x0001 : word16)
  Class: Eq_178
  DataType: (memptr (ptr Eq_40) bcu8)
  OrigDataType: word16
T_202: (in 0x0001 : word16)
  Class: Eq_202
  DataType: word16
  OrigDataType: word16
T_203: (in di_172 + 0x0001 : word16)
  Class: Eq_180
  DataType: (memptr (ptr Eq_196) bcu8)
  OrigDataType: word16
T_204: (in 0x0001 : word16)
  Class: Eq_204
  DataType: word16
  OrigDataType: word16
T_205: (in cx_14 - 0x0001 : word16)
  Class: Eq_8
  DataType: int16
  OrigDataType: word16
T_206: (in 0x0000 : word16)
  Class: Eq_8
  DataType: int16
  OrigDataType: word16
T_207: (in cx_14 == 0x0000 : bool)
  Class: Eq_207
  DataType: bool
  OrigDataType: bool
T_208: (in 0xFA : byte)
  Class: Eq_208
  DataType: byte
  OrigDataType: byte
T_209: (in DPB(cx_14, 0xFA, 8, 8) : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_210: (in 0x0200 : word16)
  Class: Eq_41
  DataType: (memptr (ptr Eq_40) bcu8)
  OrigDataType: word16
T_211: (in rLoc1_14 : real64)
  Class: Eq_211
  DataType: real64
  OrigDataType: real64
T_212: (in sin : ptr32)
  Class: Eq_212
  DataType: (ptr Eq_212)
  OrigDataType: (ptr (fn T_213 (T_108)))
T_213: (in sin(rArg2) : real64)
  Class: Eq_213
  DataType: real64
  OrigDataType: real64
T_214: (in sin(rArg2) * rArg0 : real64)
  Class: Eq_214
  DataType: real64
  OrigDataType: real64
T_215: (in cos : ptr32)
  Class: Eq_215
  DataType: (ptr Eq_215)
  OrigDataType: (ptr (fn T_216 (T_108)))
T_216: (in cos(rArg2) : real64)
  Class: Eq_216
  DataType: real64
  OrigDataType: real64
T_217: (in cos(rArg2) * rArg1 : real64)
  Class: Eq_217
  DataType: real64
  OrigDataType: real64
T_218: (in sin(rArg2) * rArg0 + cos(rArg2) * rArg1 : real64)
  Class: Eq_211
  DataType: real64
  OrigDataType: real64
T_219: (in rArg1_24 : real64)
  Class: Eq_219
  DataType: real64
  OrigDataType: real64
T_220: (in sin : ptr32)
  Class: Eq_220
  DataType: (ptr Eq_220)
  OrigDataType: (ptr (fn T_221 (T_108)))
T_221: (in sin(rArg2) : real64)
  Class: Eq_221
  DataType: real64
  OrigDataType: real64
T_222: (in rArg1 * sin(rArg2) : real64)
  Class: Eq_222
  DataType: real64
  OrigDataType: real64
T_223: (in cos : ptr32)
  Class: Eq_223
  DataType: (ptr Eq_223)
  OrigDataType: (ptr (fn T_224 (T_108)))
T_224: (in cos(rArg2) : real64)
  Class: Eq_224
  DataType: real64
  OrigDataType: real64
T_225: (in rArg0 * cos(rArg2) : real64)
  Class: Eq_225
  DataType: real64
  OrigDataType: real64
T_226: (in rArg1 * sin(rArg2) - rArg0 * cos(rArg2) : real64)
  Class: Eq_219
  DataType: real64
  OrigDataType: real64
T_227: (in rLoc1_30 : real64)
  Class: Eq_227
  DataType: real64
  OrigDataType: real64
T_228: (in cos : ptr32)
  Class: Eq_228
  DataType: (ptr Eq_228)
  OrigDataType: (ptr (fn T_231 (T_230)))
T_229: (in sin : ptr32)
  Class: Eq_229
  DataType: (ptr Eq_229)
  OrigDataType: (ptr (fn T_230 (T_211)))
T_230: (in sin(rLoc1_14) : real64)
  Class: Eq_230
  DataType: real64
  OrigDataType: real64
T_231: (in cos(sin(rLoc1_14)) : real64)
  Class: Eq_227
  DataType: real64
  OrigDataType: real64
T_232: (in rLoc1_30 + rLoc1_30 : real64)
  Class: Eq_232
  DataType: real64
  OrigDataType: real64
T_233: (in (rLoc1_30 + rLoc1_30) * rLoc1_14 : real64)
  Class: Eq_233
  DataType: real64
  OrigDataType: real64
T_234: (in (rLoc1_30 + rLoc1_30) * rLoc1_14 * rArg1_24 : real64)
  Class: Eq_234
  DataType: real64
  OrigDataType: real64
T_235: (in rArg2 * (((rLoc1_30 + rLoc1_30) * rLoc1_14) * rArg1_24) : real64)
  Class: Eq_235
  DataType: real64
  OrigDataType: real64
T_236:
  Class: Eq_236
  DataType: bcu8
  OrigDataType: (struct 0001 (0 T_44 t0000))
T_237:
  Class: Eq_236
  DataType: bcu8
  OrigDataType: (struct 0001 (0 T_55 t0000))
T_238:
  Class: Eq_236
  DataType: bcu8
  OrigDataType: (struct 0001 (0 T_141 t0000))
T_239:
  Class: Eq_239
  DataType: byte
  OrigDataType: (struct 0001 (0 T_144 t0000))
T_240:
  Class: Eq_240
  DataType: byte
  OrigDataType: (struct 0001 (0 T_149 t0000))
T_241:
  Class: Eq_241
  DataType: byte
  OrigDataType: (struct 0001 (0 T_159 t0000))
T_242:
  Class: Eq_242
  DataType: byte
  OrigDataType: (struct 0001 (0 T_170 t0000))
T_243:
  Class: Eq_236
  DataType: bcu8
  OrigDataType: (struct 0001 (0 T_195 t0000))
T_244:
  Class: Eq_244
  DataType: bcu8
  OrigDataType: (struct 0001 (0 T_199 t0000))
*/
typedef Eq_196 Eq_1struct Globals {
	Eq_196 * ptrFFFA0000;	// FFFA0000
} Eq_1;

typedef void (Eq_3)(byte);

typedef void (Eq_13)(word16, uint16);

typedef void (Eq_18)(word16, uint8);

typedef void (Eq_23)(word16, ui16);

typedef union Eq_33 {
	real16 u0;
	real64 u1;
} Eq_33;

typedef  Eq_40[][][][][]struct Eq_40 {
	word16 w01D3;	// 1D3
	bcu8 a0200[];	// 200
	byte a033F[];	// 33F
	byte a0340[];	// 340
	byte a0341[];	// 341
	byte a0480[];	// 480
} Eq_40;

typedef struct Eq_103 {
	bcu8 b02B0;	// 2B0
} Eq_103;

typedef real64 (Eq_104)(real64, real64, real64);

typedef struct Eq_134 {	// size: 1 1
	bcu8 bFFFFFEC0;	// FFFFFEC0
	byte bFFFFFFFF;	// FFFFFFFF
	byte b0000;	// 0
	byte b0001;	// 1
	byte b0140;	// 140
} Eq_134;

typedef union Eq_186 {
	real16 u0;
	real64 u1;
} Eq_186;

typedef word16 (Eq_188)(byte);

typedef  Eq_196[]struct Eq_196 {
	bcu8 a0000[];	// 0
} Eq_196;

typedef real64 (Eq_212)(real64);

typedef real64 (Eq_215)(real64);

typedef real64 (Eq_220)(real64);

typedef real64 (Eq_223)(real64);

typedef real64 (Eq_228)(real64);

typedef real64 (Eq_229)(real64);

