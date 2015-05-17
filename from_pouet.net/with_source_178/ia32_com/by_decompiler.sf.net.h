// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_178/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_104) ptrFFFA0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
	T_160 (in bios_video_set_mode : ptr32)
Eq_15: (fn Eq_17 (Eq_16))
	T_15 (in sin : ptr32)
Eq_16: (union (real16 u0) (real64 u1))
	T_16 (in rLoc2 : real64)
	T_22 (in sin(rLoc2) * (real64) Mem0[ds:0x015D:word16] : word16)
Eq_17: (union (real16 u0) (real64 u1))
	T_17 (in sin(rLoc2) : real64)
Eq_18: (segment (15D word16 w015D) (15E byte b015E))
	T_18 (in ds : selector)
Eq_19: (struct (0 word16 w0000))
	T_19 (in 0x015D : word16)
Eq_21: (union (real16 u0) (real64 u1))
	T_21 (in (real64) Mem0[ds:0x015D:word16] : real64)
Eq_23: (union (int16 u0) (byte u1) ((memptr (ptr Eq_18) (struct 0002 (0 word16 w0000))) u2))
	T_23 (in (int16) rLoc2 : int16)
	T_27 (in Mem25[dx_8:bx + 0x0000:int16] : int16)
	T_28 (in si : word16)
	T_31 (in Mem28[dx:bx + 0x0000:word16] : word16)
	T_50 (in Mem28[dx:bx + ax_60:byte] : byte)
	T_57 (in Mem28[dx:bx + ax_60:byte] - ch_40 - (bh_32 *s bh_32 + bl_31 *s bl_31 <u 0x0383) : word16)
	T_59 (in Mem79[dx:bx + ax_60:byte] : byte)
	T_76 (in si + 0x0002 : word16)
	T_77 (in si_132 : word16)
	T_80 (in Mem79[dx_8:bx + 0x0000:word16] : word16)
	T_120 (in si_202 : word16)
Eq_24: (struct 0001 (0 Eq_23 t0000) (2000 word16 w2000))
	T_24 (in bx : word16)
	T_36 (in bx_29 + 0x0001 : word16)
	T_61 (in bx + 0x0001 : word16)
	T_64 (in 0x0000 : word16)
	T_91 (in bx_174 : word16)
	T_109 (in bx_210 : word16)
	T_110 (in bx_208 : word16)
	T_123 (in bx_208 + bp_203 : word16)
	T_129 (in bx_174 - si_132 : word16)
	T_157 (in DPB(bx, SLICE(bx, byte, 8) + 0x01, 8, 8) : word16)
Eq_85: (struct 0001 (0 byte b0000))
	T_85 (in di_151 : word16)
	T_86 (in 0x0000 : word16)
	T_105 (in di_201 : word16)
	T_114 (in di_201 + 0x0001 : word16)
	T_128 (in di_151 + 0x0140 : word16)
Eq_92: (union (ui16 u0) ((memptr word16 (struct (100 bcu8 b0100))) u1))
	T_92 (in bx_232 : word16)
	T_94 (in bx_232 * 0x0002 : word16)
	T_125 (in DPB(bx_210, SLICE(dx_212, byte, 8), 0, 8) : word16)
Eq_104: (segment)
	T_104 (in 0xA000 : selector)
Eq_136: (segment)
	T_136 (in ss : selector)
Eq_137: (union (ptr16 u0) ((memptr (ptr Eq_136) (struct (FFFFFFEE word16 wFFFFFFEE))) u1))
	T_137 (in fp : ptr16)
Eq_143: (struct (0 byte b0000))
	T_143 (in 0x015E : word16)
Eq_149: (fn byte ((ptr byte)))
	T_149 (in bios_kbd_check_keystroke : ptr32)
	T_150 (in signature of bios_kbd_check_keystroke : void)
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
T_11: (in dx_8 : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_12: (in dx : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_13: (in 0x80 : byte)
  Class: Eq_13
  DataType: byte
  OrigDataType: byte
T_14: (in DPB(dx, 0x80, 8, 8) : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_15: (in sin : ptr32)
  Class: Eq_15
  DataType: (ptr Eq_15)
  OrigDataType: (ptr (fn T_17 (T_16)))
T_16: (in rLoc2 : real64)
  Class: Eq_16
  DataType: Eq_16
  OrigDataType: (union (real16 u0) (real64 u1))
T_17: (in sin(rLoc2) : real64)
  Class: Eq_17
  DataType: Eq_17
  OrigDataType: (union (real16 u0) (real64 u1))
T_18: (in ds : selector)
  Class: Eq_18
  DataType: (ptr Eq_18)
  OrigDataType: (ptr (segment (15D T_20 t015D) (15E T_142 t015E)))
T_19: (in 0x015D : word16)
  Class: Eq_19
  DataType: (memptr (ptr Eq_18) Eq_19)
  OrigDataType: (memptr T_18 (struct (0 T_20 t0000)))
T_20: (in Mem0[ds:0x015D:word16] : word16)
  Class: Eq_20
  DataType: word16
  OrigDataType: word16
T_21: (in (real64) Mem0[ds:0x015D:word16] : real64)
  Class: Eq_21
  DataType: Eq_21
  OrigDataType: (union (real16 u0) (real64 u1))
T_22: (in sin(rLoc2) * (real64) Mem0[ds:0x015D:word16] : word16)
  Class: Eq_16
  DataType: Eq_16
  OrigDataType: real16
T_23: (in (int16) rLoc2 : int16)
  Class: Eq_23
  DataType: Eq_23
  OrigDataType: int16
T_24: (in bx : word16)
  Class: Eq_24
  DataType: (memptr word16 Eq_24)
  OrigDataType: (memptr T_11 (struct 0001 (0 T_23 t0000) (2000 T_84 t2000)))
T_25: (in 0x0000 : word16)
  Class: Eq_25
  DataType: word16
  OrigDataType: word16
T_26: (in bx + 0x0000 : word16)
  Class: Eq_26
  DataType: word16
  OrigDataType: word16
T_27: (in Mem25[dx_8:bx + 0x0000:int16] : int16)
  Class: Eq_23
  DataType: Eq_23
  OrigDataType: int16
T_28: (in si : word16)
  Class: Eq_23
  DataType: Eq_23
  OrigDataType: (memptr T_18 (struct 0002 (0 word16 w0000)))
T_29: (in 0x0000 : word16)
  Class: Eq_29
  DataType: word16
  OrigDataType: word16
T_30: (in bx + 0x0000 : word16)
  Class: Eq_30
  DataType: word16
  OrigDataType: word16
T_31: (in Mem28[dx:bx + 0x0000:word16] : word16)
  Class: Eq_23
  DataType: Eq_23
  OrigDataType: word16
T_32: (in bx_29 : word16)
  Class: Eq_32
  DataType: word16
  OrigDataType: word16
T_33: (in 0x0001 : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_34: (in bx + 0x0001 : word16)
  Class: Eq_32
  DataType: word16
  OrigDataType: word16
T_35: (in 0x0001 : word16)
  Class: Eq_35
  DataType: word16
  OrigDataType: word16
T_36: (in bx_29 + 0x0001 : word16)
  Class: Eq_24
  DataType: (memptr word16 Eq_24)
  OrigDataType: word16
T_37: (in bl_31 : byte)
  Class: Eq_37
  DataType: int8
  OrigDataType: int8
T_38: (in bx_29 + 0x0001 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_39: (in (byte) (bx_29 + 0x0001) : byte)
  Class: Eq_37
  DataType: int8
  OrigDataType: byte
T_40: (in bh_32 : byte)
  Class: Eq_40
  DataType: int8
  OrigDataType: int8
T_41: (in bx_29 + 0x0001 : word16)
  Class: Eq_41
  DataType: word16
  OrigDataType: word16
T_42: (in SLICE(bx_29 + 0x0001, byte, 8) : byte)
  Class: Eq_40
  DataType: int8
  OrigDataType: byte
T_43: (in 0x0001 : word16)
  Class: Eq_32
  DataType: word16
  OrigDataType: word16
T_44: (in bx_29 != 0x0001 : bool)
  Class: Eq_44
  DataType: bool
  OrigDataType: bool
T_45: (in cx_124 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_46: (in ch_40 : byte)
  Class: Eq_46
  DataType: byte
  OrigDataType: byte
T_47: (in SLICE(ax_4, byte, 8) : byte)
  Class: Eq_46
  DataType: byte
  OrigDataType: byte
T_48: (in ax_60 : word16)
  Class: Eq_48
  DataType: word16
  OrigDataType: word16
T_49: (in bx + ax_60 : word16)
  Class: Eq_49
  DataType: word16
  OrigDataType: word16
T_50: (in Mem28[dx:bx + ax_60:byte] : byte)
  Class: Eq_23
  DataType: Eq_23
  OrigDataType: byte
T_51: (in Mem28[dx:bx + ax_60:byte] - ch_40 : word16)
  Class: Eq_51
  DataType: word16
  OrigDataType: word16
T_52: (in bh_32 *s bh_32 : int16)
  Class: Eq_52
  DataType: int16
  OrigDataType: int16
T_53: (in bl_31 *s bl_31 : int16)
  Class: Eq_53
  DataType: int16
  OrigDataType: int16
T_54: (in bh_32 *s bh_32 + bl_31 *s bl_31 : word16)
  Class: Eq_54
  DataType: cups16
  OrigDataType: cups16
T_55: (in 0x0383 : word16)
  Class: Eq_54
  DataType: cups16
  OrigDataType: cups16
T_56: (in bh_32 *s bh_32 + bl_31 *s bl_31 <u 0x0383 : bool)
  Class: Eq_56
  DataType: bool
  OrigDataType: bool
T_57: (in Mem28[dx:bx + ax_60:byte] - ch_40 - (bh_32 *s bh_32 + bl_31 *s bl_31 <u 0x0383) : word16)
  Class: Eq_23
  DataType: Eq_23
  OrigDataType: word16
T_58: (in bx + ax_60 : word16)
  Class: Eq_58
  DataType: word16
  OrigDataType: word16
T_59: (in Mem79[dx:bx + ax_60:byte] : byte)
  Class: Eq_23
  DataType: Eq_23
  OrigDataType: byte
T_60: (in 0x0001 : word16)
  Class: Eq_60
  DataType: word16
  OrigDataType: word16
T_61: (in bx + 0x0001 : word16)
  Class: Eq_24
  DataType: (memptr word16 Eq_24)
  OrigDataType: word16
T_62: (in (byte) bx : byte)
  Class: Eq_37
  DataType: int8
  OrigDataType: byte
T_63: (in SLICE(bx, byte, 8) : byte)
  Class: Eq_40
  DataType: int8
  OrigDataType: byte
T_64: (in 0x0000 : word16)
  Class: Eq_24
  DataType: (memptr word16 Eq_24)
  OrigDataType: word16
T_65: (in bx != 0x0000 : bool)
  Class: Eq_65
  DataType: bool
  OrigDataType: bool
T_66: (in 0x0001 : word16)
  Class: Eq_66
  DataType: word16
  OrigDataType: word16
T_67: (in cx_124 - 0x0001 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_68: (in SLICE(cx_124, byte, 8) : byte)
  Class: Eq_46
  DataType: byte
  OrigDataType: byte
T_69: (in dx_122 : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_70: (in 0x0000 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_71: (in cx_124 != 0x0000 : bool)
  Class: Eq_71
  DataType: bool
  OrigDataType: bool
T_72: (in 0x0000 : word16)
  Class: Eq_72
  DataType: word16
  OrigDataType: word16
T_73: (in si + 0x0000 : word16)
  Class: Eq_73
  DataType: word16
  OrigDataType: word16
T_74: (in Mem28[ds:si + 0x0000:word16] : word16)
  Class: Eq_48
  DataType: word16
  OrigDataType: word16
T_75: (in 0x0002 : word16)
  Class: Eq_75
  DataType: word16
  OrigDataType: word16
T_76: (in si + 0x0002 : word16)
  Class: Eq_23
  DataType: Eq_23
  OrigDataType: word16
T_77: (in si_132 : word16)
  Class: Eq_23
  DataType: Eq_23
  OrigDataType: word16
T_78: (in 0x0000 : word16)
  Class: Eq_78
  DataType: word16
  OrigDataType: word16
T_79: (in bx + 0x0000 : word16)
  Class: Eq_79
  DataType: word16
  OrigDataType: word16
T_80: (in Mem79[dx_8:bx + 0x0000:word16] : word16)
  Class: Eq_23
  DataType: Eq_23
  OrigDataType: word16
T_81: (in bp_133 : word16)
  Class: Eq_81
  DataType: word16
  OrigDataType: word16
T_82: (in 0x2000 : word16)
  Class: Eq_82
  DataType: word16
  OrigDataType: word16
T_83: (in bx + 0x2000 : word16)
  Class: Eq_83
  DataType: word16
  OrigDataType: word16
T_84: (in Mem79[dx_8:bx + 0x2000:word16] : word16)
  Class: Eq_81
  DataType: word16
  OrigDataType: word16
T_85: (in di_151 : word16)
  Class: Eq_85
  DataType: (memptr (ptr Eq_104) Eq_85)
  OrigDataType: word16
T_86: (in 0x0000 : word16)
  Class: Eq_85
  DataType: (memptr (ptr Eq_104) Eq_85)
  OrigDataType: word16
T_87: (in cx_155 : word16)
  Class: Eq_87
  DataType: word16
  OrigDataType: word16
T_88: (in 0xC8 : byte)
  Class: Eq_88
  DataType: byte
  OrigDataType: byte
T_89: (in DPB(cx_124, 0xC8, 0, 8) : word16)
  Class: Eq_87
  DataType: word16
  OrigDataType: word16
T_90: (in dx_170 : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_91: (in bx_174 : word16)
  Class: Eq_24
  DataType: (memptr word16 Eq_24)
  OrigDataType: (memptr T_11 (struct 0001 (0 T_23 t0000) (2000 T_84 t2000)))
T_92: (in bx_232 : word16)
  Class: Eq_92
  DataType: Eq_92
  OrigDataType: (union (ui16 u0) ((memptr T_12 (struct (100 T_100 t0100))) u1))
T_93: (in 0x0002 : word16)
  Class: Eq_93
  DataType: ui16
  OrigDataType: ui16
T_94: (in bx_232 * 0x0002 : word16)
  Class: Eq_92
  DataType: Eq_92
  OrigDataType: ui16
T_95: (in al_234 : byte)
  Class: Eq_95
  DataType: bcu8
  OrigDataType: bcu8
T_96: (in 0x03 : byte)
  Class: Eq_96
  DataType: byte
  OrigDataType: byte
T_97: (in al_234 - 0x03 : byte)
  Class: Eq_95
  DataType: bcu8
  OrigDataType: byte
T_98: (in 0x0100 : word16)
  Class: Eq_98
  DataType: word16
  OrigDataType: word16
T_99: (in bx_232 + 0x0100 : word16)
  Class: Eq_99
  DataType: word16
  OrigDataType: word16
T_100: (in Mem178[dx:bx_232 + 0x0100:byte] : byte)
  Class: Eq_95
  DataType: bcu8
  OrigDataType: bcu8
T_101: (in Mem178[dx:bx_232 + 0x0100:byte] <u al_234 : bool)
  Class: Eq_101
  DataType: bool
  OrigDataType: bool
T_102: (in 0x10 : byte)
  Class: Eq_102
  DataType: byte
  OrigDataType: byte
T_103: (in al_234 + 0x10 : byte)
  Class: Eq_103
  DataType: byte
  OrigDataType: byte
T_104: (in 0xA000 : selector)
  Class: Eq_104
  DataType: (ptr Eq_104)
  OrigDataType: (ptr (segment))
T_105: (in di_201 : word16)
  Class: Eq_85
  DataType: (memptr (ptr Eq_104) Eq_85)
  OrigDataType: (memptr T_104 (struct 0001 (0 T_108 t0000)))
T_106: (in 0x0000 : word16)
  Class: Eq_106
  DataType: word16
  OrigDataType: word16
T_107: (in di_201 + 0x0000 : word16)
  Class: Eq_107
  DataType: word16
  OrigDataType: word16
T_108: (in Mem248[0xA000:di_201 + 0x0000:byte] : byte)
  Class: Eq_103
  DataType: byte
  OrigDataType: byte
T_109: (in bx_210 : word16)
  Class: Eq_24
  DataType: (memptr word16 Eq_24)
  OrigDataType: word16
T_110: (in bx_208 : word16)
  Class: Eq_24
  DataType: (memptr word16 Eq_24)
  OrigDataType: (memptr T_11 (struct 0001 (0 T_23 t0000) (2000 T_84 t2000)))
T_111: (in dx_212 : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_112: (in dx_204 : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_113: (in 0x0001 : word16)
  Class: Eq_113
  DataType: word16
  OrigDataType: word16
T_114: (in di_201 + 0x0001 : word16)
  Class: Eq_85
  DataType: (memptr (ptr Eq_104) Eq_85)
  OrigDataType: word16
T_115: (in cx_196 : word16)
  Class: Eq_115
  DataType: word16
  OrigDataType: word16
T_116: (in 0x0001 : word16)
  Class: Eq_116
  DataType: word16
  OrigDataType: word16
T_117: (in cx_196 - 0x0001 : word16)
  Class: Eq_115
  DataType: word16
  OrigDataType: word16
T_118: (in 0x0000 : word16)
  Class: Eq_115
  DataType: word16
  OrigDataType: word16
T_119: (in cx_196 != 0x0000 : bool)
  Class: Eq_119
  DataType: bool
  OrigDataType: bool
T_120: (in si_202 : word16)
  Class: Eq_23
  DataType: Eq_23
  OrigDataType: word16
T_121: (in bp_203 : word16)
  Class: Eq_81
  DataType: word16
  OrigDataType: word16
T_122: (in dx_204 + si_202 : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_123: (in bx_208 + bp_203 : word16)
  Class: Eq_24
  DataType: (memptr word16 Eq_24)
  OrigDataType: word16
T_124: (in SLICE(dx_212, byte, 8) : byte)
  Class: Eq_124
  DataType: byte
  OrigDataType: byte
T_125: (in DPB(bx_210, SLICE(dx_212, byte, 8), 0, 8) : word16)
  Class: Eq_92
  DataType: Eq_92
  OrigDataType: word16
T_126: (in 0x12 : byte)
  Class: Eq_95
  DataType: bcu8
  OrigDataType: byte
T_127: (in 0x0140 : word16)
  Class: Eq_127
  DataType: word16
  OrigDataType: word16
T_128: (in di_151 + 0x0140 : word16)
  Class: Eq_85
  DataType: (memptr (ptr Eq_104) Eq_85)
  OrigDataType: word16
T_129: (in bx_174 - si_132 : word16)
  Class: Eq_24
  DataType: (memptr word16 Eq_24)
  OrigDataType: word16
T_130: (in dx_170 + bp_133 : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_131: (in 0x0001 : word16)
  Class: Eq_131
  DataType: word16
  OrigDataType: word16
T_132: (in cx_155 - 0x0001 : word16)
  Class: Eq_87
  DataType: word16
  OrigDataType: word16
T_133: (in 0x0000 : word16)
  Class: Eq_87
  DataType: word16
  OrigDataType: word16
T_134: (in cx_155 != 0x0000 : bool)
  Class: Eq_134
  DataType: bool
  OrigDataType: bool
T_135: (in 0x0140 : word16)
  Class: Eq_135
  DataType: word16
  OrigDataType: word16
T_136: (in ss : selector)
  Class: Eq_136
  DataType: (ptr Eq_136)
  OrigDataType: (ptr (segment))
T_137: (in fp : ptr16)
  Class: Eq_137
  DataType: Eq_137
  OrigDataType: (union (ptr16 u0) ((memptr T_136 (struct (FFFFFFEE T_140 tFFFFFFEE))) u1))
T_138: (in 0x0012 : word16)
  Class: Eq_138
  DataType: word16
  OrigDataType: word16
T_139: (in fp - 0x0012 : word16)
  Class: Eq_139
  DataType: word16
  OrigDataType: word16
T_140: (in Mem178[ss:fp - 0x0012:word16] : word16)
  Class: Eq_135
  DataType: word16
  OrigDataType: word16
T_141: (in 0x0140 : word16)
  Class: Eq_115
  DataType: word16
  OrigDataType: word16
T_142: (in v32_320 : byte)
  Class: Eq_142
  DataType: byte
  OrigDataType: byte
T_143: (in 0x015E : word16)
  Class: Eq_143
  DataType: (memptr (ptr Eq_18) Eq_143)
  OrigDataType: (memptr T_18 (struct (0 T_142 t0000)))
T_144: (in Mem248[ds:0x015E:byte] : byte)
  Class: Eq_142
  DataType: byte
  OrigDataType: byte
T_145: (in 0x04 : byte)
  Class: Eq_145
  DataType: byte
  OrigDataType: byte
T_146: (in Mem248[ds:0x015E:byte] + 0x04 : byte)
  Class: Eq_142
  DataType: byte
  OrigDataType: byte
T_147: (in Mem321[ds:0x015E:byte] : byte)
  Class: Eq_142
  DataType: byte
  OrigDataType: byte
T_148: (in al_324 : byte)
  Class: Eq_148
  DataType: byte
  OrigDataType: byte
T_149: (in bios_kbd_check_keystroke : ptr32)
  Class: Eq_149
  DataType: (ptr Eq_149)
  OrigDataType: (ptr (fn T_153 (T_152)))
T_150: (in signature of bios_kbd_check_keystroke : void)
  Class: Eq_149
  DataType: (ptr Eq_149)
  OrigDataType: 
T_151: (in alOut : ptr16)
  Class: Eq_151
  DataType: (ptr byte)
  OrigDataType: ptr16
T_152: (in out al_324 : ptr16)
  Class: Eq_151
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_153: (in bios_kbd_check_keystroke(out al_324) : byte)
  Class: Eq_153
  DataType: byte
  OrigDataType: byte
T_154: (in SLICE(bx, byte, 8) : byte)
  Class: Eq_154
  DataType: byte
  OrigDataType: byte
T_155: (in 0x01 : byte)
  Class: Eq_155
  DataType: byte
  OrigDataType: byte
T_156: (in SLICE(bx, byte, 8) + 0x01 : byte)
  Class: Eq_156
  DataType: byte
  OrigDataType: byte
T_157: (in DPB(bx, SLICE(bx, byte, 8) + 0x01, 8, 8) : word16)
  Class: Eq_24
  DataType: (memptr word16 Eq_24)
  OrigDataType: word16
T_158: (in 0x00 : byte)
  Class: Eq_142
  DataType: byte
  OrigDataType: byte
T_159: (in v32_320 == 0x00 : bool)
  Class: Eq_159
  DataType: bool
  OrigDataType: bool
T_160: (in bios_video_set_mode : ptr32)
  Class: Eq_2
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (fn T_162 (T_161)))
T_161: (in 0x03 : byte)
  Class: Eq_4
  DataType: byte
  OrigDataType: byte
T_162: (in bios_video_set_mode(0x03) : void)
  Class: Eq_6
  DataType: void
  OrigDataType: void
*/
typedef  Eq_1struct Globals {
	 * ptrFFFA0000;	// FFFA0000
} Eq_1;

typedef void (Eq_2)(byte);

typedef  (Eq_15)();

typedef union  {
	real16 u0;
	real64 u1;
} Eq_16;

typedef union  {
	real16 u0;
	real64 u1;
} Eq_17;

typedef struct  {
	word16 w015D;	// 15D
	byte b015E;	// 15E
} Eq_18;

typedef struct  {
	word16 w0000;	// 0
} Eq_19;

typedef union  {
	real16 u0;
	real64 u1;
} Eq_21;

typedef union  {
	int16 u0;
	byte u1;
	struct <anonymous> Eq_18::* u2;
} Eq_23;

typedef  Eq_24struct  {	// size: 1 1
	 t0000;	// 0
	word16 w2000;	// 2000
} Eq_24;

typedef struct  {	// size: 1 1
	byte b0000;	// 0
} Eq_85;

typedef union  {
	ui16 u0;
	struct <anonymous> word16::* u1;
} Eq_92;

typedef struct  {
} Eq_104;

typedef struct  {
} Eq_136;

typedef union  {
	ptr16 u0;
	struct <anonymous> Eq_136::* u1;
} Eq_137;

typedef struct  {
	byte b0000;	// 0
} Eq_143;

typedef byte (Eq_149)(byte *);

