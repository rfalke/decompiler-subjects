// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_308/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_315) ptrFFFA0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_5: (segment "Eq_5" (0 (arr Eq_343 1) a0000))
	T_5 (in dx : word16)
	T_6 (in DPB(dx, dh, 8, 8) : word16)
	T_156 (in psegArg00 : selector)
Eq_8: (fn void (byte))
	T_8 (in bios_video_set_mode : ptr32)
	T_9 (in signature of bios_video_set_mode : void)
Eq_13: (fn void ((ptr Eq_15), word16))
	T_13 (in msdos_display_string : ptr32)
	T_14 (in signature of msdos_display_string : void)
Eq_15: (segment "Eq_15" (236 word16 w0236) (237 word16 w0237) (238 word16 w0238) (384 (arr word16) a0384) (402 (arr Eq_337) a0402))
	T_15 (in ds : selector)
	T_17 (in ds : (ptr Eq_15))
Eq_20: (segment "Eq_20" (88E (arr byte) a088E))
	T_20 (in es_25 : (ptr Eq_20))
	T_21 (in psegArg02 : selector)
Eq_22: (fn void (word16, byte))
	T_22 (in __outb : ptr32)
Eq_30: (fn void (word16, uint16))
	T_30 (in __outb : ptr32)
Eq_35: (fn void (word16, uint16))
	T_35 (in __outb : ptr32)
Eq_39: (fn void (word16, byte))
	T_39 (in __outb : ptr32)
Eq_53: (segment "Eq_53" (0 (arr Eq_335) a0000))
	T_53 (in ds_53 : (ptr Eq_53))
	T_58 (in SLICE(ds->*bx, selector, 16) : selector)
Eq_81: (struct "Eq_81" 0001 (0 int16 w0000))
	T_81 (in di_125 : (memptr (ptr Eq_15) Eq_81))
	T_99 (in di_125 + 0x0001 : word16)
	T_197 (in 0x0402 : word16)
Eq_100: (fn Eq_102 (Eq_101, real64))
	T_100 (in atan : ptr32)
Eq_101: (union "Eq_101" (real16 u0) (real64 u1))
	T_101 (in rArg0 : Eq_101)
	T_106 (in atan(rArg0, rLoc1_145) * (real64) ds->w0236 : word16)
Eq_102: (union "Eq_102" (real16 u0) (real64 u1))
	T_102 (in atan(rArg0, rLoc1_145) : real64)
Eq_105: (union "Eq_105" (real16 u0) (real64 u1))
	T_105 (in (real64) ds->w0236 : real64)
Eq_126: (union "Eq_126" (uint16 u0) (byte u1))
	T_126 (in cl_159 : Eq_126)
	T_127 (in 0x00 : byte)
	T_145 (in ah_157 >>u 0x01 : word16)
	T_160 (in Mem192[psegArg00:bx_105 + 0x0000:byte] : byte)
	T_162 (in dh_171 + 0x80 : byte)
	T_165 (in Mem195[dx:bx_105 + 0x0000:byte] : byte)
	T_193 (in (byte) (cx - 0x0001) : byte)
	T_196 (in (byte) cx : byte)
Eq_157: (struct "Eq_157" 0001 (0 Eq_126 t0000))
	T_157 (in bx_105 : (memptr (ptr Eq_5) Eq_157))
	T_167 (in bx_105 + 0x0001 : word16)
	T_171 (in 0x0000 : word16)
	T_332 (in 0x0000 : word16)
Eq_185: (fn byte (bcu8, byte))
	T_185 (in __ror : ptr32)
Eq_295: (segment "Eq_295")
	T_295 (in ss : selector)
Eq_296: (union "Eq_296" (ptr16 u0) ((memptr (ptr Eq_295) word16) u1))
	T_296 (in fp : ptr16)
Eq_306: (fn byte (byte))
	T_306 (in __inb : ptr32)
Eq_315: (segment "Eq_315" (0 (arr word16) a0000))
	T_315 (in 0xA000 : selector)
Eq_335: (struct "Eq_335" 0040 (0 byte b0000))
	T_335
Eq_337: (struct "Eq_337" 0001 (0 int16 w0000))
	T_337
	T_338
	T_339
	T_340
	T_341
	T_342
Eq_343: (struct "Eq_343" 0001 (0 Eq_126 t0000))
	T_343
	T_344
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr Eq_1)
  OrigDataType: (ptr (struct "Globals"))
T_2: (in dh : byte)
  Class: Eq_2
  DataType: byte
  OrigDataType: byte
T_3: (in 0x10 : byte)
  Class: Eq_3
  DataType: byte
  OrigDataType: byte
T_4: (in dh + 0x10 : byte)
  Class: Eq_2
  DataType: byte
  OrigDataType: byte
T_5: (in dx : word16)
  Class: Eq_5
  DataType: (ptr Eq_5)
  OrigDataType: (ptr (struct (0 (arr T_344 1) a0000)))
T_6: (in DPB(dx, dh, 8, 8) : word16)
  Class: Eq_5
  DataType: (ptr Eq_5)
  OrigDataType: word16
T_7: (in P : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_8: (in bios_video_set_mode : ptr32)
  Class: Eq_8
  DataType: (ptr Eq_8)
  OrigDataType: (ptr (fn T_12 (T_11)))
T_9: (in signature of bios_video_set_mode : void)
  Class: Eq_8
  DataType: (ptr Eq_8)
  OrigDataType: 
T_10: (in al : byte)
  Class: Eq_10
  DataType: byte
  OrigDataType: byte
T_11: (in 0x13 : byte)
  Class: Eq_10
  DataType: byte
  OrigDataType: byte
T_12: (in bios_video_set_mode(0x13) : void)
  Class: Eq_12
  DataType: void
  OrigDataType: void
T_13: (in msdos_display_string : ptr32)
  Class: Eq_13
  DataType: (ptr Eq_13)
  OrigDataType: (ptr (fn T_19 (T_17, T_18)))
T_14: (in signature of msdos_display_string : void)
  Class: Eq_13
  DataType: (ptr Eq_13)
  OrigDataType: 
T_15: (in ds : selector)
  Class: Eq_15
  DataType: (ptr Eq_15)
  OrigDataType: (ptr (segment))
T_16: (in dx : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_17: (in ds : (ptr Eq_15))
  Class: Eq_15
  DataType: (ptr Eq_15)
  OrigDataType: (ptr (segment (236 word16 w0236) (237 T_120 t0237) (238 T_255 t0238) (384 (arr T_345) a0384) (402 (arr T_337) a0402)))
T_18: (in 0x023A : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_19: (in msdos_display_string(ds, 0x023A) : void)
  Class: Eq_19
  DataType: void
  OrigDataType: void
T_20: (in es_25 : (ptr Eq_20))
  Class: Eq_20
  DataType: (ptr Eq_20)
  OrigDataType: (ptr (segment))
T_21: (in psegArg02 : selector)
  Class: Eq_20
  DataType: (ptr Eq_20)
  OrigDataType: (ptr (segment (88E (arr byte) a088E)))
T_22: (in __outb : ptr32)
  Class: Eq_22
  DataType: (ptr Eq_22)
  OrigDataType: (ptr (fn T_25 (T_23, T_24)))
T_23: (in 0x03C8 : word16)
  Class: Eq_23
  DataType: word16
  OrigDataType: word16
T_24: (in cl : byte)
  Class: Eq_24
  DataType: byte
  OrigDataType: byte
T_25: (in __outb(0x03C8, cl) : void)
  Class: Eq_25
  DataType: void
  OrigDataType: void
T_26: (in ax_38 : int16)
  Class: Eq_26
  DataType: int16
  OrigDataType: word16
T_27: (in (int16) cl : int16)
  Class: Eq_26
  DataType: int16
  OrigDataType: int16
T_28: (in al_39 : uint8)
  Class: Eq_28
  DataType: uint8
  OrigDataType: uint8
T_29: (in (byte) ax_38 : byte)
  Class: Eq_28
  DataType: uint8
  OrigDataType: byte
T_30: (in __outb : ptr32)
  Class: Eq_30
  DataType: (ptr Eq_30)
  OrigDataType: (ptr (fn T_34 (T_31, T_33)))
T_31: (in 0x03C9 : word16)
  Class: Eq_31
  DataType: word16
  OrigDataType: word16
T_32: (in 0x01 : byte)
  Class: Eq_32
  DataType: uint8
  OrigDataType: uint8
T_33: (in al_39 >>u 0x01 : word16)
  Class: Eq_33
  DataType: uint16
  OrigDataType: uint16
T_34: (in __outb(0x03C9, al_39 >>u 0x01) : void)
  Class: Eq_34
  DataType: void
  OrigDataType: void
T_35: (in __outb : ptr32)
  Class: Eq_35
  DataType: (ptr Eq_35)
  OrigDataType: (ptr (fn T_38 (T_36, T_37)))
T_36: (in 0x03C9 : word16)
  Class: Eq_36
  DataType: word16
  OrigDataType: word16
T_37: (in al_39 >>u 0x01 : word16)
  Class: Eq_37
  DataType: uint16
  OrigDataType: uint16
T_38: (in __outb(0x03C9, al_39 >>u 0x01) : void)
  Class: Eq_38
  DataType: void
  OrigDataType: void
T_39: (in __outb : ptr32)
  Class: Eq_39
  DataType: (ptr Eq_39)
  OrigDataType: (ptr (fn T_44 (T_40, T_43)))
T_40: (in 0x03C9 : word16)
  Class: Eq_40
  DataType: word16
  OrigDataType: word16
T_41: (in al_39 >>u 0x01 : word16)
  Class: Eq_41
  DataType: uint16
  OrigDataType: uint16
T_42: (in SLICE(ax_38, byte, 8) : byte)
  Class: Eq_42
  DataType: byte
  OrigDataType: byte
T_43: (in al_39 >>u 0x01 & SLICE(ax_38, byte, 8) : byte)
  Class: Eq_43
  DataType: byte
  OrigDataType: byte
T_44: (in __outb(0x03C9, al_39 >>u 0x01 & SLICE(ax_38, byte, 8)) : void)
  Class: Eq_44
  DataType: void
  OrigDataType: void
T_45: (in cx : word16)
  Class: Eq_45
  DataType: word16
  OrigDataType: word16
T_46: (in 0x0001 : word16)
  Class: Eq_46
  DataType: word16
  OrigDataType: word16
T_47: (in cx - 0x0001 : word16)
  Class: Eq_45
  DataType: word16
  OrigDataType: word16
T_48: (in (byte) cx : byte)
  Class: Eq_24
  DataType: byte
  OrigDataType: byte
T_49: (in ch_47 : byte)
  Class: Eq_49
  DataType: byte
  OrigDataType: byte
T_50: (in SLICE(cx, byte, 8) : byte)
  Class: Eq_49
  DataType: byte
  OrigDataType: byte
T_51: (in 0x0000 : word16)
  Class: Eq_45
  DataType: word16
  OrigDataType: word16
T_52: (in cx != 0x0000 : bool)
  Class: Eq_52
  DataType: bool
  OrigDataType: bool
T_53: (in ds_53 : (ptr Eq_53))
  Class: Eq_53
  DataType: (ptr Eq_53)
  OrigDataType: (ptr (segment (0 (arr T_335) a0000)))
T_54: (in bx : (memptr (ptr Eq_15) segptr32))
  Class: Eq_54
  DataType: (memptr (ptr Eq_15) segptr32)
  OrigDataType: (memptr T_17 (struct (0 T_57 t0000)))
T_55: (in 0x0000 : word16)
  Class: Eq_55
  DataType: word16
  OrigDataType: word16
T_56: (in bx + 0x0000 : word16)
  Class: Eq_56
  DataType: word16
  OrigDataType: word16
T_57: (in Mem0[ds:bx + 0x0000:segptr32] : segptr32)
  Class: Eq_57
  DataType: segptr32
  OrigDataType: segptr32
T_58: (in SLICE(ds->*bx, selector, 16) : selector)
  Class: Eq_53
  DataType: (ptr Eq_53)
  OrigDataType: (ptr (segment))
T_59: (in di_54 : (memptr (ptr Eq_20) byte))
  Class: Eq_59
  DataType: (memptr (ptr Eq_20) byte)
  OrigDataType: (memptr T_21 (struct 0001 (0 T_68 t0000)))
T_60: (in 0x088E : word16)
  Class: Eq_59
  DataType: (memptr (ptr Eq_20) byte)
  OrigDataType: word16
T_61: (in SEQ(ds_53, cx) : ptr32)
  Class: Eq_61
  DataType: ptr32
  OrigDataType: ptr32
T_62: (in (word16) ch_47 : word16)
  Class: Eq_62
  DataType: ui16
  OrigDataType: ui16
T_63: (in 0x0040 : word16)
  Class: Eq_63
  DataType: ui16
  OrigDataType: ui16
T_64: (in (word16) ch_47 * 0x0040 : word16)
  Class: Eq_64
  DataType: ui16
  OrigDataType: ui16
T_65: (in SEQ(ds_53, cx)[(word16) ch_47 * 0x0040] : byte)
  Class: Eq_65
  DataType: byte
  OrigDataType: byte
T_66: (in 0x0000 : word16)
  Class: Eq_66
  DataType: word16
  OrigDataType: word16
T_67: (in di_54 + 0x0000 : word16)
  Class: Eq_67
  DataType: word16
  OrigDataType: word16
T_68: (in Mem63[psegArg02:di_54 + 0x0000:byte] : byte)
  Class: Eq_65
  DataType: byte
  OrigDataType: byte
T_69: (in 0x0001 : word16)
  Class: Eq_69
  DataType: word16
  OrigDataType: word16
T_70: (in cx - 0x0001 : word16)
  Class: Eq_45
  DataType: word16
  OrigDataType: word16
T_71: (in 0x0001 : word16)
  Class: Eq_71
  DataType: word16
  OrigDataType: word16
T_72: (in di_54 + 0x0001 : word16)
  Class: Eq_59
  DataType: (memptr (ptr Eq_20) byte)
  OrigDataType: word16
T_73: (in SLICE(cx, byte, 8) : byte)
  Class: Eq_49
  DataType: byte
  OrigDataType: byte
T_74: (in 0x0000 : word16)
  Class: Eq_45
  DataType: word16
  OrigDataType: word16
T_75: (in cx != 0x0000 : bool)
  Class: Eq_75
  DataType: bool
  OrigDataType: bool
T_76: (in ax_137 : int16)
  Class: Eq_76
  DataType: int16
  OrigDataType: word16
T_77: (in al_126 : byte)
  Class: Eq_77
  DataType: byte
  OrigDataType: byte
T_78: (in 0x80 : byte)
  Class: Eq_78
  DataType: byte
  OrigDataType: byte
T_79: (in al_126 - 0x80 : byte)
  Class: Eq_79
  DataType: byte
  OrigDataType: byte
T_80: (in (int16) (al_126 - 0x80) : int16)
  Class: Eq_76
  DataType: int16
  OrigDataType: int16
T_81: (in di_125 : (memptr (ptr Eq_15) Eq_81))
  Class: Eq_81
  DataType: (memptr (ptr Eq_15) Eq_81)
  OrigDataType: (memptr T_17 (struct 0001 (0 T_76 t0000)))
T_82: (in 0x0000 : word16)
  Class: Eq_82
  DataType: word16
  OrigDataType: word16
T_83: (in di_125 + 0x0000 : word16)
  Class: Eq_83
  DataType: word16
  OrigDataType: word16
T_84: (in Mem139[ds:di_125 + 0x0000:word16] : word16)
  Class: Eq_76
  DataType: int16
  OrigDataType: word16
T_85: (in al_138 : int8)
  Class: Eq_85
  DataType: int8
  OrigDataType: int8
T_86: (in (byte) ax_137 : byte)
  Class: Eq_85
  DataType: int8
  OrigDataType: byte
T_87: (in dx_128 : int16)
  Class: Eq_76
  DataType: int16
  OrigDataType: word16
T_88: (in al_138 *s al_138 : int16)
  Class: Eq_88
  DataType: int16
  OrigDataType: int16
T_89: (in dx_128 - al_138 *s al_138 : word16)
  Class: Eq_76
  DataType: int16
  OrigDataType: word16
T_90: (in dh_142 : bcu8)
  Class: Eq_90
  DataType: bcu8
  OrigDataType: bcu8
T_91: (in SLICE(dx_128, byte, 8) : byte)
  Class: Eq_90
  DataType: bcu8
  OrigDataType: byte
T_92: (in rLoc1_145 : real64)
  Class: Eq_92
  DataType: real64
  OrigDataType: real64
T_93: (in 0x0000 : word16)
  Class: Eq_93
  DataType: word16
  OrigDataType: word16
T_94: (in di_125 + 0x0000 : word16)
  Class: Eq_94
  DataType: word16
  OrigDataType: word16
T_95: (in Mem139[ds:di_125 + 0x0000:int16] : int16)
  Class: Eq_76
  DataType: int16
  OrigDataType: int16
T_96: (in (real64) (ds->*di_125).w0000 : real64)
  Class: Eq_92
  DataType: real64
  OrigDataType: real64
T_97: (in bh_107 : byte)
  Class: Eq_77
  DataType: byte
  OrigDataType: byte
T_98: (in 0x0001 : word16)
  Class: Eq_98
  DataType: word16
  OrigDataType: word16
T_99: (in di_125 + 0x0001 : word16)
  Class: Eq_81
  DataType: (memptr (ptr Eq_15) Eq_81)
  OrigDataType: word16
T_100: (in atan : ptr32)
  Class: Eq_100
  DataType: (ptr Eq_100)
  OrigDataType: (ptr (fn T_102 (T_101, T_92)))
T_101: (in rArg0 : Eq_101)
  Class: Eq_101
  DataType: Eq_101
  OrigDataType: (union (real16 u0) (real64 u1))
T_102: (in atan(rArg0, rLoc1_145) : real64)
  Class: Eq_102
  DataType: Eq_102
  OrigDataType: (union (real16 u0) (real64 u1))
T_103: (in 0x0236 : word16)
  Class: Eq_103
  DataType: (memptr (ptr Eq_15) word16)
  OrigDataType: (memptr T_17 (struct (0 T_104 t0000)))
T_104: (in Mem139[ds:0x0236:word16] : word16)
  Class: Eq_104
  DataType: word16
  OrigDataType: word16
T_105: (in (real64) ds->w0236 : real64)
  Class: Eq_105
  DataType: Eq_105
  OrigDataType: (union (real16 u0) (real64 u1))
T_106: (in atan(rArg0, rLoc1_145) * (real64) ds->w0236 : word16)
  Class: Eq_101
  DataType: Eq_101
  OrigDataType: real16
T_107: (in (int16) rArg0 : int16)
  Class: Eq_76
  DataType: int16
  OrigDataType: int16
T_108: (in 0x0000 : word16)
  Class: Eq_108
  DataType: word16
  OrigDataType: word16
T_109: (in di_125 + 0x0000 : word16)
  Class: Eq_109
  DataType: word16
  OrigDataType: word16
T_110: (in Mem153[ds:di_125 + 0x0000:int16] : int16)
  Class: Eq_76
  DataType: int16
  OrigDataType: int16
T_111: (in ax_154 : int16)
  Class: Eq_76
  DataType: int16
  OrigDataType: word16
T_112: (in 0x0000 : word16)
  Class: Eq_112
  DataType: word16
  OrigDataType: word16
T_113: (in di_125 + 0x0000 : word16)
  Class: Eq_113
  DataType: word16
  OrigDataType: word16
T_114: (in Mem153[ds:di_125 + 0x0000:word16] : word16)
  Class: Eq_76
  DataType: int16
  OrigDataType: word16
T_115: (in 0x0000 : word16)
  Class: Eq_115
  DataType: word16
  OrigDataType: word16
T_116: (in di_125 + 0x0000 : word16)
  Class: Eq_116
  DataType: word16
  OrigDataType: word16
T_117: (in Mem155[ds:di_125 + 0x0000:word16] : word16)
  Class: Eq_76
  DataType: int16
  OrigDataType: word16
T_118: (in ax_156 : word16)
  Class: Eq_118
  DataType: word16
  OrigDataType: word16
T_119: (in 0x0237 : word16)
  Class: Eq_119
  DataType: (memptr (ptr Eq_15) word16)
  OrigDataType: (memptr T_17 (struct (0 T_120 t0000)))
T_120: (in Mem155[ds:0x0237:word16] : word16)
  Class: Eq_120
  DataType: word16
  OrigDataType: word16
T_121: (in ax_154 + ds->w0237 : word16)
  Class: Eq_118
  DataType: word16
  OrigDataType: word16
T_122: (in ax_162 : word16)
  Class: Eq_122
  DataType: word16
  OrigDataType: word16
T_123: (in DPB(ax_156, dh_142, 0, 8) : word16)
  Class: Eq_122
  DataType: word16
  OrigDataType: word16
T_124: (in ah_157 : uint8)
  Class: Eq_124
  DataType: uint8
  OrigDataType: uint8
T_125: (in SLICE(ax_156, byte, 8) : byte)
  Class: Eq_124
  DataType: uint8
  OrigDataType: byte
T_126: (in cl_159 : Eq_126)
  Class: Eq_126
  DataType: Eq_126
  OrigDataType: (union (uint16 u0) (byte u1))
T_127: (in 0x00 : byte)
  Class: Eq_126
  DataType: byte
  OrigDataType: byte
T_128: (in 0x00 : byte)
  Class: Eq_128
  DataType: byte
  OrigDataType: byte
T_129: (in DPB(cx, 0x00, 0, 8) : word16)
  Class: Eq_45
  DataType: word16
  OrigDataType: word16
T_130: (in dh_171 : byte)
  Class: Eq_130
  DataType: byte
  OrigDataType: byte
T_131: (in 0x0707 : word16)
  Class: Eq_131
  DataType: word16
  OrigDataType: word16
T_132: (in ax_162 & 0x0707 : word16)
  Class: Eq_132
  DataType: word16
  OrigDataType: word16
T_133: (in (byte) (ax_162 & 0x0707) : byte)
  Class: Eq_133
  DataType: byte
  OrigDataType: byte
T_134: (in ax_162 & 0x0707 : word16)
  Class: Eq_134
  DataType: word16
  OrigDataType: word16
T_135: (in SLICE(ax_162 & 0x0707, byte, 8) : byte)
  Class: Eq_135
  DataType: byte
  OrigDataType: byte
T_136: (in (byte) (ax_162 & 0x0707) + SLICE(ax_162 & 0x0707, byte, 8) : byte)
  Class: Eq_136
  DataType: byte
  OrigDataType: byte
T_137: (in (byte) (ax_162 & 0x0707) + SLICE(ax_162 & 0x0707, byte, 8) + dh_142 : byte)
  Class: Eq_130
  DataType: byte
  OrigDataType: byte
T_138: (in 0xEC : byte)
  Class: Eq_90
  DataType: bcu8
  OrigDataType: bcu8
T_139: (in dh_142 >u 0xEC : bool)
  Class: Eq_139
  DataType: bool
  OrigDataType: bool
T_140: (in 0xE6 : byte)
  Class: Eq_90
  DataType: bcu8
  OrigDataType: bcu8
T_141: (in dh_142 >u 0xE6 : bool)
  Class: Eq_141
  DataType: bool
  OrigDataType: bool
T_142: (in 0xEB : byte)
  Class: Eq_90
  DataType: bcu8
  OrigDataType: bcu8
T_143: (in dh_142 <u 0xEB : bool)
  Class: Eq_143
  DataType: bool
  OrigDataType: bool
T_144: (in 0x01 : byte)
  Class: Eq_144
  DataType: uint8
  OrigDataType: uint8
T_145: (in ah_157 >>u 0x01 : word16)
  Class: Eq_126
  DataType: Eq_126
  OrigDataType: uint16
T_146: (in ah_157 >>u 0x01 : word16)
  Class: Eq_146
  DataType: uint16
  OrigDataType: uint16
T_147: (in DPB(cx, ah_157 >>u 0x01, 0, 8) : word16)
  Class: Eq_45
  DataType: word16
  OrigDataType: word16
T_148: (in 0x0000 : word16)
  Class: Eq_148
  DataType: word16
  OrigDataType: word16
T_149: (in di_125 + 0x0000 : word16)
  Class: Eq_149
  DataType: word16
  OrigDataType: word16
T_150: (in Mem155[ds:di_125 + 0x0000:word16] : word16)
  Class: Eq_76
  DataType: int16
  OrigDataType: word16
T_151: (in 0x0005 : word16)
  Class: Eq_151
  DataType: word16
  OrigDataType: word16
T_152: (in (ds->*di_125).w0000 << 0x0005 : word16)
  Class: Eq_152
  DataType: ui16
  OrigDataType: ui16
T_153: (in SLICE((ds->*di_125).w0000 << 0x0005, byte, 8) : byte)
  Class: Eq_153
  DataType: byte
  OrigDataType: byte
T_154: (in 0x60 : byte)
  Class: Eq_154
  DataType: byte
  OrigDataType: byte
T_155: (in SLICE((ds->*di_125).w0000 << 0x0005, byte, 8) + 0x60 : byte)
  Class: Eq_130
  DataType: byte
  OrigDataType: byte
T_156: (in psegArg00 : selector)
  Class: Eq_5
  DataType: (ptr Eq_5)
  OrigDataType: (ptr (segment (0 (arr T_343 1) a0000)))
T_157: (in bx_105 : (memptr (ptr Eq_5) Eq_157))
  Class: Eq_157
  DataType: (memptr (ptr Eq_5) Eq_157)
  OrigDataType: (memptr T_5 (struct 0001 (0 T_126 t0000)))
T_158: (in 0x0000 : word16)
  Class: Eq_158
  DataType: word16
  OrigDataType: word16
T_159: (in bx_105 + 0x0000 : word16)
  Class: Eq_159
  DataType: word16
  OrigDataType: word16
T_160: (in Mem192[psegArg00:bx_105 + 0x0000:byte] : byte)
  Class: Eq_126
  DataType: Eq_126
  OrigDataType: byte
T_161: (in 0x80 : byte)
  Class: Eq_161
  DataType: byte
  OrigDataType: byte
T_162: (in dh_171 + 0x80 : byte)
  Class: Eq_126
  DataType: Eq_126
  OrigDataType: byte
T_163: (in 0x0000 : word16)
  Class: Eq_163
  DataType: word16
  OrigDataType: word16
T_164: (in bx_105 + 0x0000 : word16)
  Class: Eq_164
  DataType: word16
  OrigDataType: word16
T_165: (in Mem195[dx:bx_105 + 0x0000:byte] : byte)
  Class: Eq_126
  DataType: Eq_126
  OrigDataType: byte
T_166: (in 0x0001 : word16)
  Class: Eq_166
  DataType: word16
  OrigDataType: word16
T_167: (in bx_105 + 0x0001 : word16)
  Class: Eq_157
  DataType: (memptr (ptr Eq_5) Eq_157)
  OrigDataType: word16
T_168: (in (byte) bx_105 : byte)
  Class: Eq_77
  DataType: byte
  OrigDataType: byte
T_169: (in bl_106 : byte)
  Class: Eq_77
  DataType: byte
  OrigDataType: byte
T_170: (in SLICE(bx_105, byte, 8) : byte)
  Class: Eq_77
  DataType: byte
  OrigDataType: byte
T_171: (in 0x0000 : word16)
  Class: Eq_157
  DataType: (memptr (ptr Eq_5) Eq_157)
  OrigDataType: word16
T_172: (in bx_105 != Eq_5::a0000 : bool)
  Class: Eq_172
  DataType: bool
  OrigDataType: bool
T_173: (in 0x1F : byte)
  Class: Eq_173
  DataType: byte
  OrigDataType: byte
T_174: (in ah_157 & 0x1F : byte)
  Class: Eq_174
  DataType: byte
  OrigDataType: byte
T_175: (in DPB(cx, ah_157 & 0x1F, 8, 8) : word16)
  Class: Eq_45
  DataType: word16
  OrigDataType: word16
T_176: (in ah_157 & 0x1F : byte)
  Class: Eq_176
  DataType: bcu8
  OrigDataType: bcu8
T_177: (in 0x03 : byte)
  Class: Eq_176
  DataType: bcu8
  OrigDataType: bcu8
T_178: (in (ah_157 & 0x1F) >u 0x03 : bool)
  Class: Eq_178
  DataType: bool
  OrigDataType: bool
T_179: (in 0xB2 : byte)
  Class: Eq_90
  DataType: bcu8
  OrigDataType: bcu8
T_180: (in dh_142 >u 0xB2 : bool)
  Class: Eq_180
  DataType: bool
  OrigDataType: bool
T_181: (in 0xE5 : byte)
  Class: Eq_90
  DataType: bcu8
  OrigDataType: bcu8
T_182: (in dh_142 <u 0xE5 : bool)
  Class: Eq_182
  DataType: bool
  OrigDataType: bool
T_183: (in 0x14 : byte)
  Class: Eq_183
  DataType: byte
  OrigDataType: byte
T_184: (in dh_171 - 0x14 : byte)
  Class: Eq_130
  DataType: byte
  OrigDataType: byte
T_185: (in __ror : ptr32)
  Class: Eq_185
  DataType: (ptr Eq_185)
  OrigDataType: (ptr (fn T_187 (T_90, T_186)))
T_186: (in 0x03 : byte)
  Class: Eq_186
  DataType: byte
  OrigDataType: byte
T_187: (in __ror(dh_142, 0x03) : byte)
  Class: Eq_187
  DataType: byte
  OrigDataType: byte
T_188: (in 0x1E : byte)
  Class: Eq_188
  DataType: byte
  OrigDataType: byte
T_189: (in __ror(dh_142, 0x03) + 0x1E : byte)
  Class: Eq_130
  DataType: byte
  OrigDataType: byte
T_190: (in 0x0001 : word16)
  Class: Eq_190
  DataType: word16
  OrigDataType: word16
T_191: (in cx - 0x0001 : word16)
  Class: Eq_45
  DataType: word16
  OrigDataType: word16
T_192: (in cx - 0x0001 : word16)
  Class: Eq_192
  DataType: word16
  OrigDataType: word16
T_193: (in (byte) (cx - 0x0001) : byte)
  Class: Eq_126
  DataType: Eq_126
  OrigDataType: byte
T_194: (in 0x0001 : word16)
  Class: Eq_194
  DataType: word16
  OrigDataType: word16
T_195: (in cx - 0x0001 : word16)
  Class: Eq_45
  DataType: word16
  OrigDataType: word16
T_196: (in (byte) cx : byte)
  Class: Eq_126
  DataType: Eq_126
  OrigDataType: byte
T_197: (in 0x0402 : word16)
  Class: Eq_81
  DataType: (memptr (ptr Eq_15) Eq_81)
  OrigDataType: word16
T_198: (in 0xF200 : word16)
  Class: Eq_76
  DataType: int16
  OrigDataType: word16
T_199: (in di_201 : (memptr (ptr Eq_15) int8))
  Class: Eq_199
  DataType: (memptr (ptr Eq_15) int8)
  OrigDataType: (memptr T_17 (struct 0001 (0 T_206 t0000)))
T_200: (in 0x0384 : word16)
  Class: Eq_199
  DataType: (memptr (ptr Eq_15) int8)
  OrigDataType: word16
T_201: (in si_202 : word16)
  Class: Eq_201
  DataType: word16
  OrigDataType: word16
T_202: (in 0x0064 : word16)
  Class: Eq_201
  DataType: word16
  OrigDataType: word16
T_203: (in al_286 : int8)
  Class: Eq_203
  DataType: int8
  OrigDataType: byte
T_204: (in 0x0000 : word16)
  Class: Eq_204
  DataType: word16
  OrigDataType: word16
T_205: (in di_201 + 0x0000 : word16)
  Class: Eq_205
  DataType: word16
  OrigDataType: word16
T_206: (in Mem306[ds:di_201 + 0x0000:byte] : byte)
  Class: Eq_203
  DataType: int8
  OrigDataType: byte
T_207: (in 0x0001 : word16)
  Class: Eq_207
  DataType: word16
  OrigDataType: word16
T_208: (in di_201 + 0x0001 : word16)
  Class: Eq_199
  DataType: (memptr (ptr Eq_15) int8)
  OrigDataType: word16
T_209: (in bp_228 : word16)
  Class: Eq_209
  DataType: word16
  OrigDataType: word16
T_210: (in 0x0001 : word16)
  Class: Eq_210
  DataType: word16
  OrigDataType: word16
T_211: (in bp_228 + 0x0001 : word16)
  Class: Eq_209
  DataType: word16
  OrigDataType: word16
T_212: (in 0x00A0 : word16)
  Class: Eq_209
  DataType: word16
  OrigDataType: word16
T_213: (in bp_228 != 0x00A0 : bool)
  Class: Eq_213
  DataType: bool
  OrigDataType: bool
T_214: (in ah_285 : int8)
  Class: Eq_203
  DataType: int8
  OrigDataType: int8
T_215: (in 0x00 : byte)
  Class: Eq_203
  DataType: int8
  OrigDataType: byte
T_216: (in ah_285 == 0x00 : bool)
  Class: Eq_216
  DataType: bool
  OrigDataType: bool
T_217: (in dh_279 : uint8)
  Class: Eq_217
  DataType: uint8
  OrigDataType: uint8
T_218: (in 0x46 : byte)
  Class: Eq_217
  DataType: uint8
  OrigDataType: bcu8
T_219: (in dh_279 <=u 0x46 : bool)
  Class: Eq_219
  DataType: bool
  OrigDataType: bool
T_220: (in bx_284 : (memptr (ptr Eq_5) int8))
  Class: Eq_220
  DataType: (memptr (ptr Eq_5) int8)
  OrigDataType: (memptr T_5 (struct (0 T_203 t0000)))
T_221: (in 0x01 : byte)
  Class: Eq_221
  DataType: uint8
  OrigDataType: uint8
T_222: (in dh_279 >>u 0x01 : word16)
  Class: Eq_222
  DataType: uint16
  OrigDataType: uint16
T_223: (in DPB(bx_284, dh_279 >>u 0x01, 8, 8) : word16)
  Class: Eq_223
  DataType: (memptr (ptr Eq_20) byte)
  OrigDataType: (memptr T_20 (struct (0 T_224 t0000)))
T_224: (in Mem195[es_25:DPB(bx_284, dh_279 >>u 0x01, 8, 8):byte] : byte)
  Class: Eq_224
  DataType: byte
  OrigDataType: byte
T_225: (in 0xFF : byte)
  Class: Eq_225
  DataType: byte
  OrigDataType: byte
T_226: (in Mem195[es_25:DPB(bx_284, dh_279 >>u 0x01, 8, 8):byte] & 0xFF : byte)
  Class: Eq_226
  DataType: byte
  OrigDataType: byte
T_227: (in 0x00 : byte)
  Class: Eq_226
  DataType: byte
  OrigDataType: byte
T_228: (in (Mem195[es_25:DPB(bx_284, dh_279 >>u 0x01, 8, 8):byte] & 0xFF) == 0x00 : bool)
  Class: Eq_228
  DataType: bool
  OrigDataType: bool
T_229: (in 0x80 : byte)
  Class: Eq_229
  DataType: byte
  OrigDataType: byte
T_230: (in al_286 + 0x80 : byte)
  Class: Eq_203
  DataType: int8
  OrigDataType: byte
T_231: (in ax_263 : word16)
  Class: Eq_231
  DataType: word16
  OrigDataType: word16
T_232: (in al_286 + 0x80 : byte)
  Class: Eq_232
  DataType: byte
  OrigDataType: byte
T_233: (in DPB(ax_263, al_286 + 0x80, 0, 8) : word16)
  Class: Eq_231
  DataType: word16
  OrigDataType: word16
T_234: (in cx_241 : word16)
  Class: Eq_234
  DataType: word16
  OrigDataType: word16
T_235: (in cx_241 + bp_228 : word16)
  Class: Eq_234
  DataType: word16
  OrigDataType: word16
T_236: (in di_268 : word16)
  Class: Eq_231
  DataType: word16
  OrigDataType: word16
T_237: (in 0x0096 : word16)
  Class: Eq_237
  DataType: word16
  OrigDataType: word16
T_238: (in di_268 - 0x0096 : word16)
  Class: Eq_231
  DataType: word16
  OrigDataType: word16
T_239: (in SLICE(cx_241, byte, 8) : byte)
  Class: Eq_239
  DataType: byte
  OrigDataType: byte
T_240: (in DPB(di_268, SLICE(cx_241, byte, 8), 0, 8) : word16)
  Class: Eq_220
  DataType: (memptr (ptr Eq_5) int8)
  OrigDataType: word16
T_241: (in dx_265 : word16)
  Class: Eq_241
  DataType: word16
  OrigDataType: word16
T_242: (in dx_265 + si_202 : word16)
  Class: Eq_241
  DataType: word16
  OrigDataType: word16
T_243: (in 0x0000 : word16)
  Class: Eq_243
  DataType: word16
  OrigDataType: word16
T_244: (in bx_284 + 0x0000 : word16)
  Class: Eq_244
  DataType: word16
  OrigDataType: word16
T_245: (in Mem195[dx:bx_284 + 0x0000:byte] : byte)
  Class: Eq_203
  DataType: int8
  OrigDataType: byte
T_246: (in SLICE(dx_265, byte, 8) : byte)
  Class: Eq_217
  DataType: uint8
  OrigDataType: byte
T_247: (in 0x0000 : word16)
  Class: Eq_247
  DataType: word16
  OrigDataType: word16
T_248: (in bx_284 + 0x0000 : word16)
  Class: Eq_248
  DataType: word16
  OrigDataType: word16
T_249: (in Mem195[psegArg00:bx_284 + 0x0000:byte] : byte)
  Class: Eq_203
  DataType: int8
  OrigDataType: byte
T_250: (in DPB(ax_263, al_286, 0, 8) : word16)
  Class: Eq_231
  DataType: word16
  OrigDataType: word16
T_251: (in 0x00 : byte)
  Class: Eq_203
  DataType: int8
  OrigDataType: int8
T_252: (in ah_285 < 0x00 : bool)
  Class: Eq_252
  DataType: bool
  OrigDataType: bool
T_253: (in dx_ax_248 : int32)
  Class: Eq_253
  DataType: int32
  OrigDataType: int32
T_254: (in 0x0238 : word16)
  Class: Eq_254
  DataType: (memptr (ptr Eq_15) word16)
  OrigDataType: (memptr T_17 (struct (0 T_255 t0000)))
T_255: (in Mem195[ds:0x0238:word16] : word16)
  Class: Eq_255
  DataType: word16
  OrigDataType: word16
T_256: (in 0x0001 : word16)
  Class: Eq_256
  DataType: word16
  OrigDataType: word16
T_257: (in ds->w0238 << 0x0001 : word16)
  Class: Eq_257
  DataType: ui16
  OrigDataType: ui16
T_258: (in (byte) (ds->w0238 << 0x0001) : byte)
  Class: Eq_258
  DataType: byte
  OrigDataType: byte
T_259: (in (int16) (byte) (ds->w0238 << 0x0001) : int16)
  Class: Eq_259
  DataType: int16
  OrigDataType: int16
T_260: (in (int32) (int16) (byte) (ds->w0238 << 0x0001) : int32)
  Class: Eq_253
  DataType: int32
  OrigDataType: int32
T_261: (in al_252 : int8)
  Class: Eq_261
  DataType: int8
  OrigDataType: int8
T_262: (in (byte) dx_ax_248 : byte)
  Class: Eq_262
  DataType: byte
  OrigDataType: byte
T_263: (in 0x7F : byte)
  Class: Eq_263
  DataType: byte
  OrigDataType: byte
T_264: (in (byte) dx_ax_248 & 0x7F : byte)
  Class: Eq_264
  DataType: byte
  OrigDataType: byte
T_265: (in 0x40 : byte)
  Class: Eq_265
  DataType: byte
  OrigDataType: byte
T_266: (in ((byte) dx_ax_248 & 0x7F) - 0x40 : byte)
  Class: Eq_261
  DataType: int8
  OrigDataType: byte
T_267: (in ax_253 : int16)
  Class: Eq_267
  DataType: int16
  OrigDataType: word16
T_268: (in al_252 *s al_252 : int16)
  Class: Eq_267
  DataType: int16
  OrigDataType: int16
T_269: (in ax_256 : ui16)
  Class: Eq_269
  DataType: ui16
  OrigDataType: ui16
T_270: (in SLICE(ax_253, byte, 8) : byte)
  Class: Eq_270
  DataType: byte
  OrigDataType: byte
T_271: (in 0x10 : byte)
  Class: Eq_271
  DataType: byte
  OrigDataType: byte
T_272: (in SLICE(ax_253, byte, 8) - 0x10 : byte)
  Class: Eq_272
  DataType: byte
  OrigDataType: byte
T_273: (in DPB(ax_253, SLICE(ax_253, byte, 8) - 0x10, 8, 8) : word16)
  Class: Eq_269
  DataType: ui16
  OrigDataType: word16
T_274: (in dx_257 : word16)
  Class: Eq_274
  DataType: word16
  OrigDataType: word16
T_275: (in SLICE(dx_ax_248, word16, 16) : word16)
  Class: Eq_275
  DataType: word16
  OrigDataType: word16
T_276: (in SLICE(dx_ax_248, word16, 16) ^ ax_256 : word16)
  Class: Eq_274
  DataType: word16
  OrigDataType: word16
T_277: (in 0x0002 : word16)
  Class: Eq_277
  DataType: ui16
  OrigDataType: ui16
T_278: (in ax_256 * 0x0002 : word16)
  Class: Eq_278
  DataType: ui16
  OrigDataType: ui16
T_279: (in ax_256 * 0x0002 : word16)
  Class: Eq_279
  DataType: ui16
  OrigDataType: ui16
T_280: (in SLICE(ax_256 * 0x0002, byte, 8) : byte)
  Class: Eq_280
  DataType: byte
  OrigDataType: byte
T_281: (in 0x01 : byte)
  Class: Eq_281
  DataType: byte
  OrigDataType: byte
T_282: (in SLICE(ax_256 * 0x0002, byte, 8) - 0x01 : byte)
  Class: Eq_282
  DataType: byte
  OrigDataType: byte
T_283: (in DPB(ax_256 * 0x0002, SLICE(ax_256 * 0x0002, byte, 8) - 0x01, 8, 8) : word16)
  Class: Eq_231
  DataType: word16
  OrigDataType: word16
T_284: (in 0x7F40 : word16)
  Class: Eq_234
  DataType: word16
  OrigDataType: word16
T_285: (in SLICE(dx_257, byte, 8) : byte)
  Class: Eq_285
  DataType: byte
  OrigDataType: byte
T_286: (in 0x20 : byte)
  Class: Eq_286
  DataType: byte
  OrigDataType: byte
T_287: (in SLICE(dx_257, byte, 8) + 0x20 : byte)
  Class: Eq_287
  DataType: byte
  OrigDataType: byte
T_288: (in DPB(dx_257, SLICE(dx_257, byte, 8) + 0x20, 8, 8) : word16)
  Class: Eq_241
  DataType: word16
  OrigDataType: word16
T_289: (in 0x0001 : word16)
  Class: Eq_289
  DataType: word16
  OrigDataType: word16
T_290: (in si_202 - 0x0001 : word16)
  Class: Eq_201
  DataType: word16
  OrigDataType: word16
T_291: (in 0xFF9C : word16)
  Class: Eq_201
  DataType: word16
  OrigDataType: word16
T_292: (in si_202 != 0xFF9C : bool)
  Class: Eq_292
  DataType: bool
  OrigDataType: bool
T_293: (in 0xFF60 : word16)
  Class: Eq_209
  DataType: word16
  OrigDataType: word16
T_294: (in 0xA000 : word16)
  Class: Eq_294
  DataType: word16
  OrigDataType: word16
T_295: (in ss : selector)
  Class: Eq_295
  DataType: (ptr Eq_295)
  OrigDataType: (ptr (segment))
T_296: (in fp : ptr16)
  Class: Eq_296
  DataType: Eq_296
  OrigDataType: (union (ptr16 u0) ((memptr T_295 (struct (0 T_299 t0000))) u1))
T_297: (in 0x0000 : word16)
  Class: Eq_297
  DataType: word16
  OrigDataType: word16
T_298: (in fp + 0x0000 : word16)
  Class: Eq_298
  DataType: word16
  OrigDataType: word16
T_299: (in Mem318[ss:fp + 0x0000:word16] : word16)
  Class: Eq_294
  DataType: word16
  OrigDataType: word16
T_300: (in di_322 : (memptr (ptr Eq_315) word16))
  Class: Eq_300
  DataType: (memptr (ptr Eq_315) word16)
  OrigDataType: (memptr T_315 (struct 0002 (0 T_318 t0000)))
T_301: (in 0x0000 : word16)
  Class: Eq_300
  DataType: (memptr (ptr Eq_315) word16)
  OrigDataType: word16
T_302: (in si_323 : (memptr (ptr Eq_15) word16))
  Class: Eq_302
  DataType: (memptr (ptr Eq_15) word16)
  OrigDataType: (memptr T_17 (struct 0002 (0 T_314 t0000)))
T_303: (in 0x0384 : word16)
  Class: Eq_302
  DataType: (memptr (ptr Eq_15) word16)
  OrigDataType: word16
T_304: (in 0x7D : byte)
  Class: Eq_304
  DataType: byte
  OrigDataType: byte
T_305: (in DPB(cx_241, 0x7D, 8, 8) : word16)
  Class: Eq_45
  DataType: word16
  OrigDataType: word16
T_306: (in __inb : ptr32)
  Class: Eq_306
  DataType: (ptr Eq_306)
  OrigDataType: (ptr (fn T_308 (T_307)))
T_307: (in 0x60 : byte)
  Class: Eq_307
  DataType: byte
  OrigDataType: byte
T_308: (in __inb(0x60) : byte)
  Class: Eq_308
  DataType: byte
  OrigDataType: byte
T_309: (in DPB(ax_263, __inb(0x60), 0, 8) : word16)
  Class: Eq_309
  DataType: word16
  OrigDataType: word16
T_310: (in 0x0001 : word16)
  Class: Eq_309
  DataType: word16
  OrigDataType: word16
T_311: (in DPB(ax_263, __inb(0x60), 0, 8) != 0x0001 : bool)
  Class: Eq_311
  DataType: bool
  OrigDataType: bool
T_312: (in 0x0000 : word16)
  Class: Eq_312
  DataType: word16
  OrigDataType: word16
T_313: (in si_323 + 0x0000 : word16)
  Class: Eq_313
  DataType: word16
  OrigDataType: word16
T_314: (in Mem318[ds:si_323 + 0x0000:word16] : word16)
  Class: Eq_314
  DataType: word16
  OrigDataType: word16
T_315: (in 0xA000 : selector)
  Class: Eq_315
  DataType: (ptr Eq_315)
  OrigDataType: (ptr (segment (0 (arr T_346) a0000)))
T_316: (in 0x0000 : word16)
  Class: Eq_316
  DataType: word16
  OrigDataType: word16
T_317: (in di_322 + 0x0000 : word16)
  Class: Eq_317
  DataType: word16
  OrigDataType: word16
T_318: (in Mem334[0xA000:di_322 + 0x0000:word16] : word16)
  Class: Eq_314
  DataType: word16
  OrigDataType: word16
T_319: (in 0x0002 : word16)
  Class: Eq_319
  DataType: word16
  OrigDataType: word16
T_320: (in si_323 + 0x0002 : word16)
  Class: Eq_302
  DataType: (memptr (ptr Eq_15) word16)
  OrigDataType: word16
T_321: (in 0x0002 : word16)
  Class: Eq_321
  DataType: word16
  OrigDataType: word16
T_322: (in di_322 + 0x0002 : word16)
  Class: Eq_300
  DataType: (memptr (ptr Eq_315) word16)
  OrigDataType: word16
T_323: (in 0x0001 : word16)
  Class: Eq_323
  DataType: word16
  OrigDataType: word16
T_324: (in cx - 0x0001 : word16)
  Class: Eq_45
  DataType: word16
  OrigDataType: word16
T_325: (in 0x0000 : word16)
  Class: Eq_45
  DataType: word16
  OrigDataType: word16
T_326: (in cx == 0x0000 : bool)
  Class: Eq_326
  DataType: bool
  OrigDataType: bool
T_327: (in 0x0238 : word16)
  Class: Eq_327
  DataType: (memptr (ptr Eq_15) word16)
  OrigDataType: (memptr T_17 (struct (0 T_255 t0000)))
T_328: (in Mem63[ds:0x0238:word16] : word16)
  Class: Eq_255
  DataType: word16
  OrigDataType: word16
T_329: (in 0x0001 : word16)
  Class: Eq_329
  DataType: word16
  OrigDataType: word16
T_330: (in ds->w0238 - 0x0001 : word16)
  Class: Eq_255
  DataType: word16
  OrigDataType: word16
T_331: (in Mem104[ds:0x0238:word16] : word16)
  Class: Eq_255
  DataType: word16
  OrigDataType: word16
T_332: (in 0x0000 : word16)
  Class: Eq_157
  DataType: (memptr (ptr Eq_5) Eq_157)
  OrigDataType: word16
T_333: (in 0x00 : byte)
  Class: Eq_77
  DataType: byte
  OrigDataType: byte
T_334: (in 0x00 : byte)
  Class: Eq_77
  DataType: byte
  OrigDataType: byte
T_335:
  Class: Eq_335
  DataType: Eq_335
  OrigDataType: (struct 0040 (0 T_65 t0000))
T_336:
  Class: Eq_336
  DataType: byte
  OrigDataType: (struct 0001 (0 T_68 t0000))
T_337:
  Class: Eq_337
  DataType: Eq_337
  OrigDataType: (struct 0001 (0 T_84 t0000))
T_338:
  Class: Eq_337
  DataType: Eq_337
  OrigDataType: (struct 0001 (0 T_95 t0000))
T_339:
  Class: Eq_337
  DataType: Eq_337
  OrigDataType: (struct 0001 (0 T_110 t0000))
T_340:
  Class: Eq_337
  DataType: Eq_337
  OrigDataType: (struct 0001 (0 T_114 t0000))
T_341:
  Class: Eq_337
  DataType: Eq_337
  OrigDataType: (struct 0001 (0 T_117 t0000))
T_342:
  Class: Eq_337
  DataType: Eq_337
  OrigDataType: (struct 0001 (0 T_150 t0000))
T_343:
  Class: Eq_343
  DataType: Eq_343
  OrigDataType: (struct 0001 (0 T_160 t0000))
T_344:
  Class: Eq_343
  DataType: Eq_343
  OrigDataType: (struct 0001 (0 T_165 t0000))
T_345:
  Class: Eq_345
  DataType: word16
  OrigDataType: (struct 0002 (0 T_314 t0000))
T_346:
  Class: Eq_346
  DataType: word16
  OrigDataType: (struct 0002 (0 T_318 t0000))
*/
typedef Eq_315 Eq_1struct Globals {
	Eq_315 * ptrFFFA0000;	// FFFA0000
} Eq_1;

typedef Eq_343 Eq_5[1]struct Eq_5 {
	Eq_343 a0000[1];	// 0
} Eq_5;

typedef void (Eq_8)(byte);

typedef void (Eq_13)(Eq_15 *, word16);

typedef  Eq_15[]Eq_337[]struct Eq_15 {
	word16 w0236;	// 236
	word16 w0237;	// 237
	word16 w0238;	// 238
	word16 a0384[];	// 384
	Eq_337 a0402[];	// 402
} Eq_15;

typedef  Eq_20[]struct Eq_20 {
	byte a088E[];	// 88E
} Eq_20;

typedef void (Eq_22)(word16, byte);

typedef void (Eq_30)(word16, uint16);

typedef void (Eq_35)(word16, uint16);

typedef void (Eq_39)(word16, byte);

typedef Eq_335 Eq_53[]struct Eq_53 {
	Eq_335 a0000[];	// 0
} Eq_53;

typedef struct Eq_81 {	// size: 1 1
	int16 w0000;	// 0
} Eq_81;

typedef Eq_102 (Eq_100)(Eq_101, real64);

typedef union Eq_101 {
	real16 u0;
	real64 u1;
} Eq_101;

typedef union Eq_102 {
	real16 u0;
	real64 u1;
} Eq_102;

typedef union Eq_105 {
	real16 u0;
	real64 u1;
} Eq_105;

typedef union Eq_126 {
	uint16 u0;
	byte u1;
} Eq_126;

typedef Eq_126 Eq_157struct Eq_157 {	// size: 1 1
	Eq_126 t0000;	// 0
} Eq_157;

typedef byte (Eq_185)(bcu8, byte);

typedef struct Eq_295 {
} Eq_295;

typedef union Eq_296 {
	ptr16 u0;
	word16 Eq_295::* u1;
} Eq_296;

typedef byte (Eq_306)(byte);

typedef  Eq_315[]struct Eq_315 {
	word16 a0000[];	// 0
} Eq_315;

typedef struct Eq_335 {	// size: 64 40
	byte b0000;	// 0
} Eq_335;

typedef struct Eq_337 {	// size: 1 1
	int16 w0000;	// 0
} Eq_337;

typedef Eq_126 Eq_343struct Eq_343 {	// size: 1 1
	Eq_126 t0000;	// 0
} Eq_343;

