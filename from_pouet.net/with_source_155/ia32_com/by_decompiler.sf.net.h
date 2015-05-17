// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_155/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_99) ptrFFFA0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_15: (fn Eq_17 (Eq_16))
	T_15 (in sin : ptr32)
Eq_16: (union (real16 u0) (real64 u1))
	T_16 (in rLoc2 : real64)
	T_22 (in sin(rLoc2) * (real64) Mem0[ds:0x0143:word16] : word16)
Eq_17: (union (real16 u0) (real64 u1))
	T_17 (in sin(rLoc2) : real64)
Eq_18: (segment (143 word16 w0143))
	T_18 (in ds : selector)
Eq_19: (struct (0 word16 w0000))
	T_19 (in 0x0143 : word16)
Eq_21: (union (real16 u0) (real64 u1))
	T_21 (in (real64) Mem0[ds:0x0143:word16] : real64)
Eq_23: (union (int16 u0) (byte u1) ((memptr (ptr Eq_18) (struct 0002 (0 word16 w0000))) u2))
	T_23 (in (int16) rLoc2 : int16)
	T_27 (in Mem25[dx_8:bx + 0x0000:int16] : int16)
	T_28 (in si : word16)
	T_31 (in Mem28[dx:bx + 0x0000:word16] : word16)
	T_52 (in Mem28[dx:bx + ax_59:byte] : byte)
	T_58 (in Mem28[dx:bx + ax_59:byte] - ch_39 - (bh_32 *s bh_32 + ax_68 <u 0x0383) : word16)
	T_60 (in Mem78[dx:bx + ax_59:byte] : byte)
	T_77 (in si + 0x0002 : word16)
	T_110 (in Mem217[ss:sp_184 - 0x000C:word16] : word16)
	T_111 (in si_125 : word16)
	T_165 (in Mem197[ss:sp_184 - 0x000C:word16] : word16)
	T_177 (in Mem217[ss:sp_184 + 0x0004:word16] : word16)
	T_229 (in Mem156[ss:sp_143 - 0x000C:word16] : word16)
	T_243 (in Mem217[ss:sp_184 + 0x0014:word16] : word16)
	T_282 (in Mem122[ss:sp_108 - 0x000C:word16] : word16)
	T_290 (in Mem124[dx_8:bx + 0x0000:word16] : word16)
Eq_24: (struct 0001 (0 Eq_23 t0000) (60 word16 w0060))
	T_24 (in bx : word16)
	T_36 (in bx_29 + 0x0001 : word16)
	T_62 (in bx + 0x0001 : word16)
	T_66 (in 0x0000 : word16)
	T_118 (in Mem217[ss:sp_184 - 0x0006:word16] : word16)
	T_152 (in bx_179 : word16)
	T_153 (in bx + bp_126 : word16)
	T_156 (in Mem191[ss:sp_184 - 0x0006:word16] : word16)
	T_195 (in Mem217[ss:sp_184 + 0x000A:word16] - si_125 : word16)
	T_219 (in Mem150[ss:sp_143 - 0x0006:word16] : word16)
	T_254 (in bx_277 + 0x0002 : word16)
	T_272 (in Mem116[ss:sp_108 - 0x0006:word16] : word16)
Eq_78: (struct (0 byte b0000))
	T_78 (in di_131 : word16)
	T_79 (in wArg00 : word16)
	T_131 (in Mem217[ss:sp_184 - 0x000E:word16] : word16)
	T_133 (in Mem217[ss:sp_184 - 0x000E:word16] + 0x0001 : word16)
	T_167 (in Mem199[ss:sp_184 - 0x000E:word16] : word16)
	T_191 (in Mem217[ss:sp_184 + 0x0002:word16] + ax_105 : word16)
	T_232 (in Mem158[ss:sp_143 - 0x000E:word16] : word16)
	T_240 (in Mem217[ss:sp_184 + 0x0012:word16] : word16)
	T_285 (in Mem124[ss:sp_108 - 0x000E:word16] : word16)
Eq_85: (union (ui16 u0) ((memptr word16 (struct (0 bcu8 b0000))) u1))
	T_85 (in bx_201 : word16)
	T_87 (in bx_201 * 0x0002 : word16)
	T_169 (in DPB(bx_179, SLICE(dx_181, byte, 8), 0, 8) : word16)
Eq_91: (struct (FFFFFFF2 (memptr (ptr Eq_99) Eq_78) ptrFFFFFFF2) (FFFFFFF4 Eq_23 tFFFFFFF4) (FFFFFFF6 word16 wFFFFFFF6) (FFFFFFF8 word16 wFFFFFFF8) (FFFFFFFA (memptr word16 Eq_24) ptrFFFFFFFA) (FFFFFFFC word16 wFFFFFFFC) (FFFFFFFE word16 wFFFFFFFE) (0 word16 w0000) (2 word16 w0002) (4 Eq_23 t0004) (6 word16 w0006) (A word16 w000A) (C word16 w000C) (E word16 w000E) (10 word16 w0010) (12 (memptr (ptr Eq_99) Eq_78) ptr0012) (14 Eq_23 t0014) (16 int16 w0016) (1A word16 w001A) (1C word16 w001C) (1E word16 w001E))
	T_91 (in sp_184 : word16)
	T_140 (in sp_157 - 0x0002 : word16)
Eq_99: (segment)
	T_99 (in 0xA000 : selector)
Eq_104: (segment)
	T_104 (in ss : selector)
Eq_205: (struct (FFFFFFF2 (memptr (ptr Eq_99) Eq_78) ptrFFFFFFF2) (FFFFFFF4 Eq_23 tFFFFFFF4) (FFFFFFF6 word16 wFFFFFFF6) (FFFFFFF8 word16 wFFFFFFF8) (FFFFFFFA (memptr word16 Eq_24) ptrFFFFFFFA) (FFFFFFFC word16 wFFFFFFFC) (FFFFFFFE word16 wFFFFFFFE) (0 word16 w0000))
	T_205 (in sp_143 : word16)
	T_207 (in sp_123 - 0x0002 : word16)
Eq_257: (struct (FFFFFFF2 (memptr (ptr Eq_99) Eq_78) ptrFFFFFFF2) (FFFFFFF4 Eq_23 tFFFFFFF4) (FFFFFFF6 int16 wFFFFFFF6) (FFFFFFF8 word16 wFFFFFFF8) (FFFFFFFA (memptr word16 Eq_24) ptrFFFFFFFA) (FFFFFFFC word16 wFFFFFFFC) (FFFFFFFE word16 wFFFFFFFE) (0 word16 w0000))
	T_257 (in sp_108 : word16)
	T_259 (in sp_103 - 0x0002 : word16)
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
  OrigDataType: (ptr (segment (143 T_20 t0143)))
T_19: (in 0x0143 : word16)
  Class: Eq_19
  DataType: (memptr (ptr Eq_18) Eq_19)
  OrigDataType: (memptr T_18 (struct (0 T_20 t0000)))
T_20: (in Mem0[ds:0x0143:word16] : word16)
  Class: Eq_20
  DataType: word16
  OrigDataType: word16
T_21: (in (real64) Mem0[ds:0x0143:word16] : real64)
  Class: Eq_21
  DataType: Eq_21
  OrigDataType: (union (real16 u0) (real64 u1))
T_22: (in sin(rLoc2) * (real64) Mem0[ds:0x0143:word16] : word16)
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
  OrigDataType: (memptr T_11 (struct 0001 (0 T_23 t0000) (60 T_293 t0060)))
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
T_45: (in cx_282 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_46: (in ch_39 : byte)
  Class: Eq_46
  DataType: byte
  OrigDataType: byte
T_47: (in SLICE(ax_4, byte, 8) : byte)
  Class: Eq_46
  DataType: byte
  OrigDataType: byte
T_48: (in ax_68 : word16)
  Class: Eq_48
  DataType: int16
  OrigDataType: word16
T_49: (in bl_31 *s bl_31 : int16)
  Class: Eq_48
  DataType: int16
  OrigDataType: int16
T_50: (in ax_59 : word16)
  Class: Eq_50
  DataType: word16
  OrigDataType: word16
T_51: (in bx + ax_59 : word16)
  Class: Eq_51
  DataType: word16
  OrigDataType: word16
T_52: (in Mem28[dx:bx + ax_59:byte] : byte)
  Class: Eq_23
  DataType: Eq_23
  OrigDataType: byte
T_53: (in Mem28[dx:bx + ax_59:byte] - ch_39 : word16)
  Class: Eq_53
  DataType: word16
  OrigDataType: word16
T_54: (in bh_32 *s bh_32 : int16)
  Class: Eq_54
  DataType: int16
  OrigDataType: int16
T_55: (in bh_32 *s bh_32 + ax_68 : word16)
  Class: Eq_55
  DataType: cups16
  OrigDataType: cups16
T_56: (in 0x0383 : word16)
  Class: Eq_55
  DataType: cups16
  OrigDataType: cups16
T_57: (in bh_32 *s bh_32 + ax_68 <u 0x0383 : bool)
  Class: Eq_57
  DataType: bool
  OrigDataType: bool
T_58: (in Mem28[dx:bx + ax_59:byte] - ch_39 - (bh_32 *s bh_32 + ax_68 <u 0x0383) : word16)
  Class: Eq_23
  DataType: Eq_23
  OrigDataType: word16
T_59: (in bx + ax_59 : word16)
  Class: Eq_59
  DataType: word16
  OrigDataType: word16
T_60: (in Mem78[dx:bx + ax_59:byte] : byte)
  Class: Eq_23
  DataType: Eq_23
  OrigDataType: byte
T_61: (in 0x0001 : word16)
  Class: Eq_61
  DataType: word16
  OrigDataType: word16
T_62: (in bx + 0x0001 : word16)
  Class: Eq_24
  DataType: (memptr word16 Eq_24)
  OrigDataType: word16
T_63: (in bp_274 : word16)
  Class: Eq_48
  DataType: int16
  OrigDataType: word16
T_64: (in (byte) bx : byte)
  Class: Eq_37
  DataType: int8
  OrigDataType: byte
T_65: (in SLICE(bx, byte, 8) : byte)
  Class: Eq_40
  DataType: int8
  OrigDataType: byte
T_66: (in 0x0000 : word16)
  Class: Eq_24
  DataType: (memptr word16 Eq_24)
  OrigDataType: word16
T_67: (in bx != 0x0000 : bool)
  Class: Eq_67
  DataType: bool
  OrigDataType: bool
T_68: (in 0x0001 : word16)
  Class: Eq_68
  DataType: word16
  OrigDataType: word16
T_69: (in cx_282 - 0x0001 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_70: (in SLICE(cx_282, byte, 8) : byte)
  Class: Eq_46
  DataType: byte
  OrigDataType: byte
T_71: (in 0x0000 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_72: (in cx_282 != 0x0000 : bool)
  Class: Eq_72
  DataType: bool
  OrigDataType: bool
T_73: (in 0x0000 : word16)
  Class: Eq_73
  DataType: word16
  OrigDataType: word16
T_74: (in si + 0x0000 : word16)
  Class: Eq_74
  DataType: word16
  OrigDataType: word16
T_75: (in Mem28[ds:si + 0x0000:word16] : word16)
  Class: Eq_50
  DataType: word16
  OrigDataType: word16
T_76: (in 0x0002 : word16)
  Class: Eq_76
  DataType: word16
  OrigDataType: word16
T_77: (in si + 0x0002 : word16)
  Class: Eq_23
  DataType: Eq_23
  OrigDataType: word16
T_78: (in di_131 : word16)
  Class: Eq_78
  DataType: (memptr (ptr Eq_99) Eq_78)
  OrigDataType: (memptr T_99 (struct (0 T_102 t0000)))
T_79: (in wArg00 : word16)
  Class: Eq_78
  DataType: (memptr (ptr Eq_99) Eq_78)
  OrigDataType: word16
T_80: (in sp_103 : word16)
  Class: Eq_80
  DataType: word16
  OrigDataType: word16
T_81: (in fp : ptr16)
  Class: Eq_81
  DataType: ptr16
  OrigDataType: ptr16
T_82: (in 0x0002 : word16)
  Class: Eq_82
  DataType: word16
  OrigDataType: word16
T_83: (in fp + 0x0002 : word16)
  Class: Eq_80
  DataType: word16
  OrigDataType: word16
T_84: (in dx_134 : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_85: (in bx_201 : word16)
  Class: Eq_85
  DataType: Eq_85
  OrigDataType: (union (ui16 u0) ((memptr T_12 (struct (0 T_95 t0000))) u1))
T_86: (in 0x0002 : word16)
  Class: Eq_86
  DataType: ui16
  OrigDataType: ui16
T_87: (in bx_201 * 0x0002 : word16)
  Class: Eq_85
  DataType: Eq_85
  OrigDataType: ui16
T_88: (in al_203 : byte)
  Class: Eq_88
  DataType: bcu8
  OrigDataType: bcu8
T_89: (in 0x03 : byte)
  Class: Eq_89
  DataType: byte
  OrigDataType: byte
T_90: (in al_203 - 0x03 : byte)
  Class: Eq_88
  DataType: bcu8
  OrigDataType: byte
T_91: (in sp_184 : word16)
  Class: Eq_91
  DataType: (memptr (ptr Eq_104) Eq_91)
  OrigDataType: (memptr T_104 (struct (FFFFFFF2 T_78 tFFFFFFF2) (FFFFFFF4 T_110 tFFFFFFF4) (FFFFFFF6 T_114 tFFFFFFF6) (FFFFFFF8 T_160 tFFFFFFF8) (FFFFFFFA T_24 tFFFFFFFA) (FFFFFFFC T_11 tFFFFFFFC) (FFFFFFFE T_103 tFFFFFFFE) (0 T_124 t0000) (2 T_190 t0002) (4 T_177 t0004) (6 T_180 t0006) (A T_194 t000A) (C T_198 t000C) (E T_184 t000E) (10 T_173 t0010) (12 T_240 t0012) (14 T_243 t0014) (16 T_246 t0016) (1A T_237 t001A) (1C T_249 t001C) (1E T_252 t001E)))
T_92: (in 0x000E : word16)
  Class: Eq_92
  DataType: word16
  OrigDataType: word16
T_93: (in sp_184 - 0x000E : word16)
  Class: Eq_93
  DataType: word16
  OrigDataType: word16
T_94: (in bx_201 + (sp_184 - 0x000E) : word16)
  Class: Eq_94
  DataType: word16
  OrigDataType: word16
T_95: (in Mem199[dx:bx_201 + (sp_184 - 0x000E):byte] : byte)
  Class: Eq_88
  DataType: bcu8
  OrigDataType: bcu8
T_96: (in Mem199[dx:bx_201 + (sp_184 - 0x000E):byte] <u al_203 : bool)
  Class: Eq_96
  DataType: bool
  OrigDataType: bool
T_97: (in 0x10 : byte)
  Class: Eq_97
  DataType: byte
  OrigDataType: byte
T_98: (in al_203 + 0x10 : byte)
  Class: Eq_98
  DataType: byte
  OrigDataType: byte
T_99: (in 0xA000 : selector)
  Class: Eq_99
  DataType: (ptr Eq_99)
  OrigDataType: (ptr (segment))
T_100: (in 0x0000 : word16)
  Class: Eq_100
  DataType: word16
  OrigDataType: word16
T_101: (in di_131 + 0x0000 : word16)
  Class: Eq_101
  DataType: word16
  OrigDataType: word16
T_102: (in Mem217[0xA000:di_131 + 0x0000:byte] : byte)
  Class: Eq_98
  DataType: byte
  OrigDataType: byte
T_103: (in cx_232 : word16)
  Class: Eq_103
  DataType: word16
  OrigDataType: word16
T_104: (in ss : selector)
  Class: Eq_104
  DataType: (ptr Eq_104)
  OrigDataType: (ptr (segment))
T_105: (in 0x0002 : word16)
  Class: Eq_105
  DataType: word16
  OrigDataType: word16
T_106: (in sp_184 - 0x0002 : word16)
  Class: Eq_106
  DataType: word16
  OrigDataType: word16
T_107: (in Mem217[ss:sp_184 - 0x0002:word16] : word16)
  Class: Eq_103
  DataType: word16
  OrigDataType: word16
T_108: (in 0x000C : word16)
  Class: Eq_108
  DataType: word16
  OrigDataType: word16
T_109: (in sp_184 - 0x000C : word16)
  Class: Eq_109
  DataType: word16
  OrigDataType: word16
T_110: (in Mem217[ss:sp_184 - 0x000C:word16] : word16)
  Class: Eq_23
  DataType: Eq_23
  OrigDataType: word16
T_111: (in si_125 : word16)
  Class: Eq_23
  DataType: Eq_23
  OrigDataType: word16
T_112: (in 0x000A : word16)
  Class: Eq_112
  DataType: word16
  OrigDataType: word16
T_113: (in sp_184 - 0x000A : word16)
  Class: Eq_113
  DataType: word16
  OrigDataType: word16
T_114: (in Mem217[ss:sp_184 - 0x000A:word16] : word16)
  Class: Eq_114
  DataType: word16
  OrigDataType: word16
T_115: (in bp_126 : word16)
  Class: Eq_114
  DataType: word16
  OrigDataType: word16
T_116: (in 0x0006 : word16)
  Class: Eq_116
  DataType: word16
  OrigDataType: word16
T_117: (in sp_184 - 0x0006 : word16)
  Class: Eq_117
  DataType: word16
  OrigDataType: word16
T_118: (in Mem217[ss:sp_184 - 0x0006:word16] : word16)
  Class: Eq_24
  DataType: (memptr word16 Eq_24)
  OrigDataType: word16
T_119: (in 0x0004 : word16)
  Class: Eq_119
  DataType: word16
  OrigDataType: word16
T_120: (in sp_184 - 0x0004 : word16)
  Class: Eq_120
  DataType: word16
  OrigDataType: word16
T_121: (in Mem217[ss:sp_184 - 0x0004:word16] : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_122: (in 0x0000 : word16)
  Class: Eq_122
  DataType: word16
  OrigDataType: word16
T_123: (in sp_184 + 0x0000 : word16)
  Class: Eq_123
  DataType: word16
  OrigDataType: word16
T_124: (in Mem217[ss:sp_184 + 0x0000:word16] : word16)
  Class: Eq_124
  DataType: word16
  OrigDataType: word16
T_125: (in ax_160 : word16)
  Class: Eq_124
  DataType: word16
  OrigDataType: word16
T_126: (in 0x0002 : word16)
  Class: Eq_126
  DataType: word16
  OrigDataType: word16
T_127: (in sp_184 + 0x0002 : word16)
  Class: Eq_127
  DataType: word16
  OrigDataType: word16
T_128: (in sp_157 : word16)
  Class: Eq_127
  DataType: word16
  OrigDataType: word16
T_129: (in 0x000E : word16)
  Class: Eq_129
  DataType: word16
  OrigDataType: word16
T_130: (in sp_184 - 0x000E : word16)
  Class: Eq_130
  DataType: word16
  OrigDataType: word16
T_131: (in Mem217[ss:sp_184 - 0x000E:word16] : word16)
  Class: Eq_78
  DataType: (memptr (ptr Eq_99) Eq_78)
  OrigDataType: word16
T_132: (in 0x0001 : word16)
  Class: Eq_132
  DataType: word16
  OrigDataType: word16
T_133: (in Mem217[ss:sp_184 - 0x000E:word16] + 0x0001 : word16)
  Class: Eq_78
  DataType: (memptr (ptr Eq_99) Eq_78)
  OrigDataType: word16
T_134: (in 0x0001 : word16)
  Class: Eq_134
  DataType: word16
  OrigDataType: word16
T_135: (in cx_232 - 0x0001 : word16)
  Class: Eq_103
  DataType: word16
  OrigDataType: word16
T_136: (in cx_163 : word16)
  Class: Eq_103
  DataType: word16
  OrigDataType: word16
T_137: (in 0x0001 : word16)
  Class: Eq_103
  DataType: word16
  OrigDataType: word16
T_138: (in cx_232 != 0x0001 : bool)
  Class: Eq_138
  DataType: bool
  OrigDataType: bool
T_139: (in 0x0002 : word16)
  Class: Eq_139
  DataType: word16
  OrigDataType: word16
T_140: (in sp_157 - 0x0002 : word16)
  Class: Eq_91
  DataType: (memptr (ptr Eq_104) Eq_91)
  OrigDataType: word16
T_141: (in 0x0000 : word16)
  Class: Eq_141
  DataType: word16
  OrigDataType: word16
T_142: (in sp_184 + 0x0000 : word16)
  Class: Eq_142
  DataType: word16
  OrigDataType: word16
T_143: (in Mem185[ss:sp_184 + 0x0000:word16] : word16)
  Class: Eq_124
  DataType: word16
  OrigDataType: word16
T_144: (in 0x0002 : word16)
  Class: Eq_144
  DataType: word16
  OrigDataType: word16
T_145: (in sp_184 - 0x0002 : word16)
  Class: Eq_145
  DataType: word16
  OrigDataType: word16
T_146: (in Mem187[ss:sp_184 - 0x0002:word16] : word16)
  Class: Eq_103
  DataType: word16
  OrigDataType: word16
T_147: (in dx_181 : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_148: (in dx_134 + si_125 : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_149: (in 0x0004 : word16)
  Class: Eq_149
  DataType: word16
  OrigDataType: word16
T_150: (in sp_184 - 0x0004 : word16)
  Class: Eq_150
  DataType: word16
  OrigDataType: word16
T_151: (in Mem189[ss:sp_184 - 0x0004:word16] : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_152: (in bx_179 : word16)
  Class: Eq_24
  DataType: (memptr word16 Eq_24)
  OrigDataType: word16
T_153: (in bx + bp_126 : word16)
  Class: Eq_24
  DataType: (memptr word16 Eq_24)
  OrigDataType: word16
T_154: (in 0x0006 : word16)
  Class: Eq_154
  DataType: word16
  OrigDataType: word16
T_155: (in sp_184 - 0x0006 : word16)
  Class: Eq_155
  DataType: word16
  OrigDataType: word16
T_156: (in Mem191[ss:sp_184 - 0x0006:word16] : word16)
  Class: Eq_24
  DataType: (memptr word16 Eq_24)
  OrigDataType: word16
T_157: (in 0x0008 : word16)
  Class: Eq_157
  DataType: word16
  OrigDataType: word16
T_158: (in sp_184 - 0x0008 : word16)
  Class: Eq_158
  DataType: word16
  OrigDataType: word16
T_159: (in sp_184 - 0x0008 : word16)
  Class: Eq_159
  DataType: word16
  OrigDataType: word16
T_160: (in Mem193[ss:sp_184 - 0x0008:word16] : word16)
  Class: Eq_158
  DataType: word16
  OrigDataType: word16
T_161: (in 0x000A : word16)
  Class: Eq_161
  DataType: word16
  OrigDataType: word16
T_162: (in sp_184 - 0x000A : word16)
  Class: Eq_162
  DataType: word16
  OrigDataType: word16
T_163: (in Mem195[ss:sp_184 - 0x000A:word16] : word16)
  Class: Eq_114
  DataType: word16
  OrigDataType: word16
T_164: (in sp_184 - 0x000C : word16)
  Class: Eq_164
  DataType: word16
  OrigDataType: word16
T_165: (in Mem197[ss:sp_184 - 0x000C:word16] : word16)
  Class: Eq_23
  DataType: Eq_23
  OrigDataType: word16
T_166: (in sp_184 - 0x000E : word16)
  Class: Eq_166
  DataType: word16
  OrigDataType: word16
T_167: (in Mem199[ss:sp_184 - 0x000E:word16] : word16)
  Class: Eq_78
  DataType: (memptr (ptr Eq_99) Eq_78)
  OrigDataType: word16
T_168: (in SLICE(dx_181, byte, 8) : byte)
  Class: Eq_168
  DataType: byte
  OrigDataType: byte
T_169: (in DPB(bx_179, SLICE(dx_181, byte, 8), 0, 8) : word16)
  Class: Eq_85
  DataType: Eq_85
  OrigDataType: word16
T_170: (in 0x12 : byte)
  Class: Eq_88
  DataType: bcu8
  OrigDataType: byte
T_171: (in 0x0010 : word16)
  Class: Eq_171
  DataType: word16
  OrigDataType: word16
T_172: (in sp_184 + 0x0010 : word16)
  Class: Eq_172
  DataType: word16
  OrigDataType: word16
T_173: (in Mem217[ss:sp_184 + 0x0010:word16] : word16)
  Class: Eq_103
  DataType: word16
  OrigDataType: word16
T_174: (in ax_105 : word16)
  Class: Eq_103
  DataType: word16
  OrigDataType: word16
T_175: (in 0x0004 : word16)
  Class: Eq_175
  DataType: word16
  OrigDataType: word16
T_176: (in sp_184 + 0x0004 : word16)
  Class: Eq_176
  DataType: word16
  OrigDataType: word16
T_177: (in Mem217[ss:sp_184 + 0x0004:word16] : word16)
  Class: Eq_23
  DataType: Eq_23
  OrigDataType: word16
T_178: (in 0x0006 : word16)
  Class: Eq_178
  DataType: word16
  OrigDataType: word16
T_179: (in sp_184 + 0x0006 : word16)
  Class: Eq_179
  DataType: word16
  OrigDataType: word16
T_180: (in Mem217[ss:sp_184 + 0x0006:word16] : word16)
  Class: Eq_114
  DataType: word16
  OrigDataType: word16
T_181: (in cx_254 : word16)
  Class: Eq_181
  DataType: word16
  OrigDataType: word16
T_182: (in 0x000E : word16)
  Class: Eq_182
  DataType: word16
  OrigDataType: word16
T_183: (in sp_184 + 0x000E : word16)
  Class: Eq_183
  DataType: word16
  OrigDataType: word16
T_184: (in Mem217[ss:sp_184 + 0x000E:word16] : word16)
  Class: Eq_181
  DataType: word16
  OrigDataType: word16
T_185: (in 0x0012 : word16)
  Class: Eq_185
  DataType: word16
  OrigDataType: word16
T_186: (in sp_184 + 0x0012 : word16)
  Class: Eq_186
  DataType: word16
  OrigDataType: word16
T_187: (in sp_123 : word16)
  Class: Eq_186
  DataType: word16
  OrigDataType: word16
T_188: (in 0x0002 : word16)
  Class: Eq_188
  DataType: word16
  OrigDataType: word16
T_189: (in sp_184 + 0x0002 : word16)
  Class: Eq_189
  DataType: word16
  OrigDataType: word16
T_190: (in Mem217[ss:sp_184 + 0x0002:word16] : word16)
  Class: Eq_190
  DataType: word16
  OrigDataType: word16
T_191: (in Mem217[ss:sp_184 + 0x0002:word16] + ax_105 : word16)
  Class: Eq_78
  DataType: (memptr (ptr Eq_99) Eq_78)
  OrigDataType: word16
T_192: (in 0x000A : word16)
  Class: Eq_192
  DataType: word16
  OrigDataType: word16
T_193: (in sp_184 + 0x000A : word16)
  Class: Eq_193
  DataType: word16
  OrigDataType: word16
T_194: (in Mem217[ss:sp_184 + 0x000A:word16] : word16)
  Class: Eq_194
  DataType: word16
  OrigDataType: word16
T_195: (in Mem217[ss:sp_184 + 0x000A:word16] - si_125 : word16)
  Class: Eq_24
  DataType: (memptr word16 Eq_24)
  OrigDataType: word16
T_196: (in 0x000C : word16)
  Class: Eq_196
  DataType: word16
  OrigDataType: word16
T_197: (in sp_184 + 0x000C : word16)
  Class: Eq_197
  DataType: word16
  OrigDataType: word16
T_198: (in Mem217[ss:sp_184 + 0x000C:word16] : word16)
  Class: Eq_198
  DataType: word16
  OrigDataType: word16
T_199: (in Mem217[ss:sp_184 + 0x000C:word16] + bp_126 : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_200: (in 0x0001 : word16)
  Class: Eq_200
  DataType: word16
  OrigDataType: word16
T_201: (in cx_254 - 0x0001 : word16)
  Class: Eq_124
  DataType: word16
  OrigDataType: word16
T_202: (in cx_128 : word16)
  Class: Eq_124
  DataType: word16
  OrigDataType: word16
T_203: (in 0x0001 : word16)
  Class: Eq_181
  DataType: word16
  OrigDataType: word16
T_204: (in cx_254 != 0x0001 : bool)
  Class: Eq_204
  DataType: bool
  OrigDataType: bool
T_205: (in sp_143 : word16)
  Class: Eq_205
  DataType: (memptr (ptr Eq_104) Eq_205)
  OrigDataType: (memptr T_104 (struct (FFFFFFF2 T_232 tFFFFFFF2) (FFFFFFF4 T_229 tFFFFFFF4) (FFFFFFF6 T_226 tFFFFFFF6) (FFFFFFF8 T_223 tFFFFFFF8) (FFFFFFFA T_219 tFFFFFFFA) (FFFFFFFC T_216 tFFFFFFFC) (FFFFFFFE T_213 tFFFFFFFE) (0 T_210 t0000)))
T_206: (in 0x0002 : word16)
  Class: Eq_206
  DataType: word16
  OrigDataType: word16
T_207: (in sp_123 - 0x0002 : word16)
  Class: Eq_205
  DataType: (memptr (ptr Eq_104) Eq_205)
  OrigDataType: word16
T_208: (in 0x0000 : word16)
  Class: Eq_208
  DataType: word16
  OrigDataType: word16
T_209: (in sp_143 + 0x0000 : word16)
  Class: Eq_209
  DataType: word16
  OrigDataType: word16
T_210: (in Mem144[ss:sp_143 + 0x0000:word16] : word16)
  Class: Eq_103
  DataType: word16
  OrigDataType: word16
T_211: (in 0x0002 : word16)
  Class: Eq_211
  DataType: word16
  OrigDataType: word16
T_212: (in sp_143 - 0x0002 : word16)
  Class: Eq_212
  DataType: word16
  OrigDataType: word16
T_213: (in Mem146[ss:sp_143 - 0x0002:word16] : word16)
  Class: Eq_124
  DataType: word16
  OrigDataType: word16
T_214: (in 0x0004 : word16)
  Class: Eq_214
  DataType: word16
  OrigDataType: word16
T_215: (in sp_143 - 0x0004 : word16)
  Class: Eq_215
  DataType: word16
  OrigDataType: word16
T_216: (in Mem148[ss:sp_143 - 0x0004:word16] : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_217: (in 0x0006 : word16)
  Class: Eq_217
  DataType: word16
  OrigDataType: word16
T_218: (in sp_143 - 0x0006 : word16)
  Class: Eq_218
  DataType: word16
  OrigDataType: word16
T_219: (in Mem150[ss:sp_143 - 0x0006:word16] : word16)
  Class: Eq_24
  DataType: (memptr word16 Eq_24)
  OrigDataType: word16
T_220: (in 0x0008 : word16)
  Class: Eq_220
  DataType: word16
  OrigDataType: word16
T_221: (in sp_143 - 0x0008 : word16)
  Class: Eq_221
  DataType: word16
  OrigDataType: word16
T_222: (in sp_143 - 0x0008 : word16)
  Class: Eq_222
  DataType: word16
  OrigDataType: word16
T_223: (in Mem152[ss:sp_143 - 0x0008:word16] : word16)
  Class: Eq_221
  DataType: word16
  OrigDataType: word16
T_224: (in 0x000A : word16)
  Class: Eq_224
  DataType: word16
  OrigDataType: word16
T_225: (in sp_143 - 0x000A : word16)
  Class: Eq_225
  DataType: word16
  OrigDataType: word16
T_226: (in Mem154[ss:sp_143 - 0x000A:word16] : word16)
  Class: Eq_114
  DataType: word16
  OrigDataType: word16
T_227: (in 0x000C : word16)
  Class: Eq_227
  DataType: word16
  OrigDataType: word16
T_228: (in sp_143 - 0x000C : word16)
  Class: Eq_228
  DataType: word16
  OrigDataType: word16
T_229: (in Mem156[ss:sp_143 - 0x000C:word16] : word16)
  Class: Eq_23
  DataType: Eq_23
  OrigDataType: word16
T_230: (in 0x000E : word16)
  Class: Eq_230
  DataType: word16
  OrigDataType: word16
T_231: (in sp_143 - 0x000E : word16)
  Class: Eq_231
  DataType: word16
  OrigDataType: word16
T_232: (in Mem158[ss:sp_143 - 0x000E:word16] : word16)
  Class: Eq_78
  DataType: (memptr (ptr Eq_99) Eq_78)
  OrigDataType: word16
T_233: (in sp_143 - 0x000E : word16)
  Class: Eq_127
  DataType: word16
  OrigDataType: word16
T_234: (in bx_277 : word16)
  Class: Eq_234
  DataType: word16
  OrigDataType: word16
T_235: (in 0x001A : word16)
  Class: Eq_235
  DataType: word16
  OrigDataType: word16
T_236: (in sp_184 + 0x001A : word16)
  Class: Eq_236
  DataType: word16
  OrigDataType: word16
T_237: (in Mem217[ss:sp_184 + 0x001A:word16] : word16)
  Class: Eq_234
  DataType: word16
  OrigDataType: word16
T_238: (in 0x0012 : word16)
  Class: Eq_238
  DataType: word16
  OrigDataType: word16
T_239: (in sp_184 + 0x0012 : word16)
  Class: Eq_239
  DataType: word16
  OrigDataType: word16
T_240: (in Mem217[ss:sp_184 + 0x0012:word16] : word16)
  Class: Eq_78
  DataType: (memptr (ptr Eq_99) Eq_78)
  OrigDataType: word16
T_241: (in 0x0014 : word16)
  Class: Eq_241
  DataType: word16
  OrigDataType: word16
T_242: (in sp_184 + 0x0014 : word16)
  Class: Eq_242
  DataType: word16
  OrigDataType: word16
T_243: (in Mem217[ss:sp_184 + 0x0014:word16] : word16)
  Class: Eq_23
  DataType: Eq_23
  OrigDataType: word16
T_244: (in 0x0016 : word16)
  Class: Eq_244
  DataType: word16
  OrigDataType: word16
T_245: (in sp_184 + 0x0016 : word16)
  Class: Eq_245
  DataType: word16
  OrigDataType: word16
T_246: (in Mem217[ss:sp_184 + 0x0016:word16] : word16)
  Class: Eq_48
  DataType: int16
  OrigDataType: word16
T_247: (in 0x001C : word16)
  Class: Eq_247
  DataType: word16
  OrigDataType: word16
T_248: (in sp_184 + 0x001C : word16)
  Class: Eq_248
  DataType: word16
  OrigDataType: word16
T_249: (in Mem217[ss:sp_184 + 0x001C:word16] : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_250: (in 0x001E : word16)
  Class: Eq_250
  DataType: word16
  OrigDataType: word16
T_251: (in sp_184 + 0x001E : word16)
  Class: Eq_251
  DataType: word16
  OrigDataType: word16
T_252: (in Mem217[ss:sp_184 + 0x001E:word16] : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_253: (in 0x0002 : word16)
  Class: Eq_253
  DataType: word16
  OrigDataType: word16
T_254: (in bx_277 + 0x0002 : word16)
  Class: Eq_24
  DataType: (memptr word16 Eq_24)
  OrigDataType: word16
T_255: (in 0x0422 : word16)
  Class: Eq_255
  DataType: word16
  OrigDataType: word16
T_256: (in sp_184 + 0x0422 : word16)
  Class: Eq_80
  DataType: word16
  OrigDataType: word16
T_257: (in sp_108 : word16)
  Class: Eq_257
  DataType: (memptr (ptr Eq_104) Eq_257)
  OrigDataType: (memptr T_104 (struct (FFFFFFF2 T_285 tFFFFFFF2) (FFFFFFF4 T_282 tFFFFFFF4) (FFFFFFF6 T_279 tFFFFFFF6) (FFFFFFF8 T_276 tFFFFFFF8) (FFFFFFFA T_272 tFFFFFFFA) (FFFFFFFC T_269 tFFFFFFFC) (FFFFFFFE T_266 tFFFFFFFE) (0 T_263 t0000)))
T_258: (in 0x0002 : word16)
  Class: Eq_258
  DataType: word16
  OrigDataType: word16
T_259: (in sp_103 - 0x0002 : word16)
  Class: Eq_257
  DataType: (memptr (ptr Eq_104) Eq_257)
  OrigDataType: word16
T_260: (in 0x0140 : word16)
  Class: Eq_260
  DataType: word16
  OrigDataType: word16
T_261: (in 0x0000 : word16)
  Class: Eq_261
  DataType: word16
  OrigDataType: word16
T_262: (in sp_108 + 0x0000 : word16)
  Class: Eq_262
  DataType: word16
  OrigDataType: word16
T_263: (in Mem109[ss:sp_108 + 0x0000:word16] : word16)
  Class: Eq_260
  DataType: word16
  OrigDataType: word16
T_264: (in 0x0002 : word16)
  Class: Eq_264
  DataType: word16
  OrigDataType: word16
T_265: (in sp_108 - 0x0002 : word16)
  Class: Eq_265
  DataType: word16
  OrigDataType: word16
T_266: (in Mem112[ss:sp_108 - 0x0002:word16] : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_267: (in 0x0004 : word16)
  Class: Eq_267
  DataType: word16
  OrigDataType: word16
T_268: (in sp_108 - 0x0004 : word16)
  Class: Eq_268
  DataType: word16
  OrigDataType: word16
T_269: (in Mem114[ss:sp_108 - 0x0004:word16] : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_270: (in 0x0006 : word16)
  Class: Eq_270
  DataType: word16
  OrigDataType: word16
T_271: (in sp_108 - 0x0006 : word16)
  Class: Eq_271
  DataType: word16
  OrigDataType: word16
T_272: (in Mem116[ss:sp_108 - 0x0006:word16] : word16)
  Class: Eq_24
  DataType: (memptr word16 Eq_24)
  OrigDataType: word16
T_273: (in 0x0008 : word16)
  Class: Eq_273
  DataType: word16
  OrigDataType: word16
T_274: (in sp_108 - 0x0008 : word16)
  Class: Eq_274
  DataType: word16
  OrigDataType: word16
T_275: (in sp_108 - 0x0008 : word16)
  Class: Eq_275
  DataType: word16
  OrigDataType: word16
T_276: (in Mem118[ss:sp_108 - 0x0008:word16] : word16)
  Class: Eq_274
  DataType: word16
  OrigDataType: word16
T_277: (in 0x000A : word16)
  Class: Eq_277
  DataType: word16
  OrigDataType: word16
T_278: (in sp_108 - 0x000A : word16)
  Class: Eq_278
  DataType: word16
  OrigDataType: word16
T_279: (in Mem120[ss:sp_108 - 0x000A:word16] : word16)
  Class: Eq_48
  DataType: int16
  OrigDataType: word16
T_280: (in 0x000C : word16)
  Class: Eq_280
  DataType: word16
  OrigDataType: word16
T_281: (in sp_108 - 0x000C : word16)
  Class: Eq_281
  DataType: word16
  OrigDataType: word16
T_282: (in Mem122[ss:sp_108 - 0x000C:word16] : word16)
  Class: Eq_23
  DataType: Eq_23
  OrigDataType: word16
T_283: (in 0x000E : word16)
  Class: Eq_283
  DataType: word16
  OrigDataType: word16
T_284: (in sp_108 - 0x000E : word16)
  Class: Eq_284
  DataType: word16
  OrigDataType: word16
T_285: (in Mem124[ss:sp_108 - 0x000E:word16] : word16)
  Class: Eq_78
  DataType: (memptr (ptr Eq_99) Eq_78)
  OrigDataType: word16
T_286: (in 0x0140 : word16)
  Class: Eq_103
  DataType: word16
  OrigDataType: word16
T_287: (in sp_108 - 0x000E : word16)
  Class: Eq_186
  DataType: word16
  OrigDataType: word16
T_288: (in 0x0000 : word16)
  Class: Eq_288
  DataType: word16
  OrigDataType: word16
T_289: (in bx + 0x0000 : word16)
  Class: Eq_289
  DataType: word16
  OrigDataType: word16
T_290: (in Mem124[dx_8:bx + 0x0000:word16] : word16)
  Class: Eq_23
  DataType: Eq_23
  OrigDataType: word16
T_291: (in 0x0060 : word16)
  Class: Eq_291
  DataType: word16
  OrigDataType: word16
T_292: (in bx + 0x0060 : word16)
  Class: Eq_292
  DataType: word16
  OrigDataType: word16
T_293: (in Mem124[dx_8:bx + 0x0060:word16] : word16)
  Class: Eq_114
  DataType: word16
  OrigDataType: word16
T_294: (in 0xC8 : byte)
  Class: Eq_294
  DataType: byte
  OrigDataType: byte
T_295: (in DPB(cx_282, 0xC8, 0, 8) : word16)
  Class: Eq_124
  DataType: word16
  OrigDataType: word16
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
	word16 w0143;	// 143
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
	word16 w0060;	// 60
} Eq_24;

typedef struct  {
	byte b0000;	// 0
} Eq_78;

typedef union  {
	ui16 u0;
	struct <anonymous> word16::* u1;
} Eq_85;

typedef  Eq_91 Eq_91 Eq_91struct  {
	 Eq_99::*ptrFFFFFFF2;	// FFFFFFF2
	 tFFFFFFF4;	// FFFFFFF4
	word16 wFFFFFFF6;	// FFFFFFF6
	word16 wFFFFFFF8;	// FFFFFFF8
	 word16::*ptrFFFFFFFA;	// FFFFFFFA
	word16 wFFFFFFFC;	// FFFFFFFC
	word16 wFFFFFFFE;	// FFFFFFFE
	word16 w0000;	// 0
	word16 w0002;	// 2
	 t0004;	// 4
	word16 w0006;	// 6
	word16 w000A;	// A
	word16 w000C;	// C
	word16 w000E;	// E
	word16 w0010;	// 10
	 Eq_99::*ptr0012;	// 12
	 t0014;	// 14
	int16 w0016;	// 16
	word16 w001A;	// 1A
	word16 w001C;	// 1C
	word16 w001E;	// 1E
} Eq_91;

typedef struct  {
} Eq_99;

typedef struct  {
} Eq_104;

typedef  Eq_205struct  {
	 Eq_99::*ptrFFFFFFF2;	// FFFFFFF2
	 tFFFFFFF4;	// FFFFFFF4
	word16 wFFFFFFF6;	// FFFFFFF6
	word16 wFFFFFFF8;	// FFFFFFF8
	 word16::*ptrFFFFFFFA;	// FFFFFFFA
	word16 wFFFFFFFC;	// FFFFFFFC
	word16 wFFFFFFFE;	// FFFFFFFE
	word16 w0000;	// 0
} Eq_205;

typedef  Eq_257struct  {
	 Eq_99::*ptrFFFFFFF2;	// FFFFFFF2
	 tFFFFFFF4;	// FFFFFFF4
	int16 wFFFFFFF6;	// FFFFFFF6
	word16 wFFFFFFF8;	// FFFFFFF8
	 word16::*ptrFFFFFFFA;	// FFFFFFFA
	word16 wFFFFFFFC;	// FFFFFFFC
	word16 wFFFFFFFE;	// FFFFFFFE
	word16 w0000;	// 0
} Eq_257;

