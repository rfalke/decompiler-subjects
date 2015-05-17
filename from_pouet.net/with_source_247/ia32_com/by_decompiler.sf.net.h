// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_247/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_264) ptrFFFA0000) (FFFF0000 (ptr Eq_83) ptrFFFF0000) (C000 (ptr Eq_154) ptrC000) (50000 (ptr Eq_90) ptr50000) (60000 (ptr Eq_142) ptr60000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_7: (fn byte (word16))
	T_7 (in __inb : ptr32)
Eq_14: (segment "Eq_14" (1FC (memptr (ptr Eq_14) byte) ptr01FC) (202 word32 dw0202) (206 byte b0206))
	T_14 (in ds : (ptr Eq_14))
	T_72 (in 0x5000 : word16)
	T_243 (in 0xA000 : word16)
	T_246 (in Mem197[ss:fp - 0x0002:word16] : word16)
Eq_55: (struct "Eq_55" 0001 (0 word16 w0000))
	T_55 (in si_237 : (memptr (ptr Eq_83) Eq_55))
	T_63 (in ((word16) (ds->*ds->ptr01FC) << 0x0003) + 0xFA6E : word16)
	T_104 (in si_237 + 0x0001 : word16)
Eq_65: (segment "Eq_65")
	T_65 (in ss : selector)
Eq_66: (union "Eq_66" ((memptr (ptr Eq_65) Eq_281) u0) (Eq_283 u1))
	T_66 (in fp : ptr16)
Eq_70: (struct "Eq_70" 0002 (0 (memptr (ptr Eq_142) ui8) ptr0000) (150 (memptr (ptr Eq_142) ui8) ptr0150))
	T_70 (in di_233 : (memptr (ptr Eq_90) Eq_70))
	T_71 (in 0x0140 : word16)
	T_98 (in di_233 + 0x0002 : word16)
	T_106 (in di_233 + 0x0290 : word16)
Eq_82: (fn bool (word16, word16))
	T_82 (in __bt : ptr32)
Eq_83: (segment "Eq_83")
	T_83 (in 0xF000 : selector)
Eq_90: (segment "Eq_90" (FFFFFFFF (arr byte) aFFFFFFFF) (0 (arr byte) a0000) (140 Eq_70 t0140) (FFFF byte bFFFF))
	T_90 (in 0x5000 : selector)
Eq_142: (segment "Eq_142" (0 (arr Eq_278) a0000))
	T_142 (in 0x6000 : selector)
	T_242 (in Mem193[ss:fp - 0x0002:word16] : word16)
Eq_152: (fn Eq_159 (real16))
	T_152 (in cos : ptr32)
Eq_153: (union "Eq_153" (real16 u0) (real64 u1))
	T_153 (in rLoc2 : real64)
	T_182 (in 1 : real64)
Eq_154: (segment "Eq_154" (1FE word16 w01FE) (200 int16 w0200))
	T_154 (in 0x0C00 : selector)
Eq_157: (union "Eq_157" (real16 u0) (real64 u1))
	T_157 (in (real64) 0x0C00->w01FE : real64)
Eq_159: (union "Eq_159" (real16 u0) (real64 u1))
	T_159 (in cos(rLoc2 / (real64) 0x0C00->w01FE) : real64)
Eq_162: (union "Eq_162" (real16 u0) (real64 u1))
	T_162 (in (real64) 0x0C00->w01FE : real64)
Eq_176: (union "Eq_176" (byte u0) (word16 u1))
	T_176 (in Mem142[0x5000:si_114 + 0x0000:byte] : byte)
	T_179 (in Mem146[0x6000:di_144 + 0x0000:byte] : byte)
	T_206 (in Mem146[0x5000:si_114 + 0x0000:word16] : word16)
	T_209 (in Mem146[0x5000:si_114 + 0x0000:word16] + (dx_169 + 0x0001) : word16)
	T_212 (in Mem173[0x5000:si_114 + 0x0000:word16] : word16)
	T_215 (in Mem173[0x5000:si_114 + 0x0000:word16] : word16)
Eq_229: (fn word16 (word16, byte))
	T_229 (in __rol : ptr32)
Eq_252: (segment "Eq_252")
	T_252 (in cs : selector)
	T_255 (in Mem221[ss:fp - 0x0002:word16] : word16)
Eq_256: (fn byte (byte))
	T_256 (in __inb : ptr32)
Eq_264: (segment "Eq_264" (0 (arr word16) a0000))
	T_264 (in 0xA000 : selector)
Eq_278: (union "Eq_278" (byte u0) (word16 u1))
	T_278
	T_279
Eq_281: (struct "Eq_281" (FFFFFFFE (ptr Eq_252) ptrFFFFFFFE))
	T_281
Eq_282: (struct "Eq_282" (FFFFFFFE (ptr Eq_14) ptrFFFFFFFE))
	T_282
Eq_283: (union "Eq_283" (ptr16 u0) ((memptr (ptr Eq_65) Eq_282) u1))
	T_283
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
T_7: (in __inb : ptr32)
  Class: Eq_7
  DataType: (ptr Eq_7)
  OrigDataType: (ptr (fn T_9 (T_8)))
T_8: (in 0x03DA : word16)
  Class: Eq_8
  DataType: word16
  OrigDataType: word16
T_9: (in __inb(0x03DA) : byte)
  Class: Eq_9
  DataType: byte
  OrigDataType: byte
T_10: (in 0x08 : byte)
  Class: Eq_10
  DataType: byte
  OrigDataType: byte
T_11: (in __inb(0x03DA) & 0x08 : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_12: (in 0x00 : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_13: (in (__inb(0x03DA) & 0x08) == 0x00 : bool)
  Class: Eq_13
  DataType: bool
  OrigDataType: bool
T_14: (in ds : (ptr Eq_14))
  Class: Eq_14
  DataType: (ptr Eq_14)
  OrigDataType: (ptr (segment (1FC T_46 t01FC) (202 T_34 t0202) (206 T_16 t0206)))
T_15: (in 0x0206 : word16)
  Class: Eq_15
  DataType: (memptr (ptr Eq_14) byte)
  OrigDataType: (memptr T_14 (struct (0 T_16 t0000)))
T_16: (in Mem0[ds:0x0206:byte] : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_17: (in 0x01 : byte)
  Class: Eq_17
  DataType: byte
  OrigDataType: byte
T_18: (in ds->b0206 + 0x01 : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_19: (in 0x0206 : word16)
  Class: Eq_19
  DataType: (memptr (ptr Eq_14) byte)
  OrigDataType: (memptr T_14 (struct (0 T_20 t0000)))
T_20: (in Mem53[ds:0x0206:byte] : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_21: (in 0x0206 : word16)
  Class: Eq_21
  DataType: (memptr (ptr Eq_14) byte)
  OrigDataType: (memptr T_14 (struct (0 T_22 t0000)))
T_22: (in Mem53[ds:0x0206:byte] : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_23: (in 0x0F : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_24: (in ds->b0206 & 0x0F : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_25: (in 0x0206 : word16)
  Class: Eq_25
  DataType: (memptr (ptr Eq_14) byte)
  OrigDataType: (memptr T_14 (struct (0 T_26 t0000)))
T_26: (in Mem55[ds:0x0206:byte] : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_27: (in bx_166 : word16)
  Class: Eq_27
  DataType: word16
  OrigDataType: word16
T_28: (in 0x0206 : word16)
  Class: Eq_27
  DataType: word16
  OrigDataType: word16
T_29: (in 0x0206 : word16)
  Class: Eq_29
  DataType: (memptr (ptr Eq_14) byte)
  OrigDataType: (memptr T_14 (struct (0 T_30 t0000)))
T_30: (in Mem55[ds:0x0206:byte] : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_31: (in 0x00 : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_32: (in ds->b0206 != 0x00 : bool)
  Class: Eq_32
  DataType: bool
  OrigDataType: bool
T_33: (in 0x0202 : word16)
  Class: Eq_33
  DataType: (memptr (ptr Eq_14) word32)
  OrigDataType: (memptr T_14 (struct (0 T_34 t0000)))
T_34: (in Mem55[ds:0x0202:word32] : word32)
  Class: Eq_34
  DataType: word32
  OrigDataType: word32
T_35: (in 0x00000001 : word32)
  Class: Eq_35
  DataType: word32
  OrigDataType: word32
T_36: (in ds->dw0202 - 0x00000001 : word32)
  Class: Eq_34
  DataType: word32
  OrigDataType: word32
T_37: (in 0x0202 : word16)
  Class: Eq_37
  DataType: (memptr (ptr Eq_14) word32)
  OrigDataType: (memptr T_14 (struct (0 T_38 t0000)))
T_38: (in Mem68[ds:0x0202:word32] : word32)
  Class: Eq_34
  DataType: word32
  OrigDataType: word32
T_39: (in si_73 : (memptr (ptr Eq_90) byte))
  Class: Eq_39
  DataType: (memptr (ptr Eq_90) byte)
  OrigDataType: (memptr T_90 (struct 0001 (0 T_123 t0000)))
T_40: (in 0x0000 : word16)
  Class: Eq_39
  DataType: (memptr (ptr Eq_90) byte)
  OrigDataType: word16
T_41: (in di_76 : (memptr (ptr Eq_90) byte))
  Class: Eq_41
  DataType: (memptr (ptr Eq_90) byte)
  OrigDataType: (memptr T_90 (struct 0001 (0 T_126 t0000)))
T_42: (in 0xFFFF : word16)
  Class: Eq_41
  DataType: (memptr (ptr Eq_90) byte)
  OrigDataType: word16
T_43: (in cx_77 : word16)
  Class: Eq_43
  DataType: word16
  OrigDataType: word16
T_44: (in 0x1500 : word16)
  Class: Eq_43
  DataType: word16
  OrigDataType: word16
T_45: (in 0x01FC : word16)
  Class: Eq_45
  DataType: (memptr (ptr Eq_14) (memptr (ptr Eq_14) byte))
  OrigDataType: (memptr T_14 (struct (0 T_46 t0000)))
T_46: (in Mem55[ds:0x01FC:word16] : word16)
  Class: Eq_46
  DataType: (memptr (ptr Eq_14) byte)
  OrigDataType: word16
T_47: (in 0x0001 : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_48: (in Mem55[ds:0x01FC:word16] + 0x0001 : word16)
  Class: Eq_46
  DataType: (memptr (ptr Eq_14) byte)
  OrigDataType: word16
T_49: (in 0x01FC : word16)
  Class: Eq_49
  DataType: (memptr (ptr Eq_14) (memptr (ptr Eq_14) byte))
  OrigDataType: (memptr T_14 (struct (0 T_50 t0000)))
T_50: (in Mem230[ds:0x01FC:word16] : word16)
  Class: Eq_46
  DataType: (memptr (ptr Eq_14) byte)
  OrigDataType: word16
T_51: (in 0x01FC : word16)
  Class: Eq_51
  DataType: (memptr (ptr Eq_14) (memptr (ptr Eq_14) byte))
  OrigDataType: (memptr T_14 (struct (0 T_52 t0000)))
T_52: (in Mem230[ds:0x01FC:word16] : word16)
  Class: Eq_46
  DataType: (memptr (ptr Eq_14) byte)
  OrigDataType: word16
T_53: (in 0x01FC : word16)
  Class: Eq_46
  DataType: (memptr (ptr Eq_14) byte)
  OrigDataType: word16
T_54: (in ds->ptr01FC != &Eq_14::ptr01FC : bool)
  Class: Eq_54
  DataType: bool
  OrigDataType: bool
T_55: (in si_237 : (memptr (ptr Eq_83) Eq_55))
  Class: Eq_55
  DataType: (memptr (ptr Eq_83) Eq_55)
  OrigDataType: (memptr T_83 (struct 0001 (0 T_86 t0000)))
T_56: (in 0x01FC : word16)
  Class: Eq_56
  DataType: (memptr (ptr Eq_14) (memptr (ptr Eq_14) byte))
  OrigDataType: (memptr T_14 (struct (0 T_57 t0000)))
T_57: (in Mem230[ds:0x01FC:word16] : word16)
  Class: Eq_46
  DataType: (memptr (ptr Eq_14) byte)
  OrigDataType: (memptr T_14 (struct (0 T_58 t0000)))
T_58: (in Mem230[ds:Mem230[ds:0x01FC:word16]:byte] : byte)
  Class: Eq_58
  DataType: byte
  OrigDataType: byte
T_59: (in (word16) (ds->*ds->ptr01FC) : word16)
  Class: Eq_59
  DataType: word16
  OrigDataType: word16
T_60: (in 0x0003 : word16)
  Class: Eq_60
  DataType: word16
  OrigDataType: word16
T_61: (in (word16) (ds->*ds->ptr01FC) << 0x0003 : word16)
  Class: Eq_61
  DataType: ui16
  OrigDataType: ui16
T_62: (in 0xFA6E : word16)
  Class: Eq_62
  DataType: word16
  OrigDataType: word16
T_63: (in ((word16) (ds->*ds->ptr01FC) << 0x0003) + 0xFA6E : word16)
  Class: Eq_55
  DataType: (memptr (ptr Eq_83) Eq_55)
  OrigDataType: word16
T_64: (in 0xF000 : word16)
  Class: Eq_64
  DataType: word16
  OrigDataType: word16
T_65: (in ss : selector)
  Class: Eq_65
  DataType: (ptr Eq_65)
  OrigDataType: (ptr (segment))
T_66: (in fp : ptr16)
  Class: Eq_66
  DataType: Eq_66
  OrigDataType: (union ((union (ptr16 u0) ((memptr T_65 (struct (FFFFFFFE T_116 tFFFFFFFE))) u1)) u0) ((union (ptr16 u0) ((memptr T_65 (struct (FFFFFFFE T_69 tFFFFFFFE))) u1)) u1) ((union (ptr16 u0) ((memptr T_65 (struct (FFFFFFFE T_242 tFFFFFFFE))) u1)) u2) ((union (ptr16 u0) ((memptr T_65 (struct (FFFFFFFE T_246 tFFFFFFFE))) u1)) u3) ((memptr T_65 (struct (FFFFFFFE T_255 tFFFFFFFE))) u4))
T_67: (in 0x0002 : word16)
  Class: Eq_67
  DataType: word16
  OrigDataType: word16
T_68: (in fp - 0x0002 : word16)
  Class: Eq_68
  DataType: word16
  OrigDataType: word16
T_69: (in Mem240[ss:fp - 0x0002:word16] : word16)
  Class: Eq_64
  DataType: word16
  OrigDataType: word16
T_70: (in di_233 : (memptr (ptr Eq_90) Eq_70))
  Class: Eq_70
  DataType: (memptr (ptr Eq_90) Eq_70)
  OrigDataType: (memptr T_90 (struct 0002 (0 T_96 t0000) (150 T_93 t0150)))
T_71: (in 0x0140 : word16)
  Class: Eq_70
  DataType: (memptr (ptr Eq_90) Eq_70)
  OrigDataType: word16
T_72: (in 0x5000 : word16)
  Class: Eq_14
  DataType: (ptr Eq_14)
  OrigDataType: word16
T_73: (in dx_243 : word16)
  Class: Eq_73
  DataType: word16
  OrigDataType: word16
T_74: (in 0x0008 : word16)
  Class: Eq_73
  DataType: word16
  OrigDataType: word16
T_75: (in 0x01FC : word16)
  Class: Eq_75
  DataType: (memptr (ptr Eq_14) (memptr (ptr Eq_14) byte))
  OrigDataType: (memptr T_14 (struct (0 T_76 t0000)))
T_76: (in Mem230[ds:0x01FC:word16] : word16)
  Class: Eq_46
  DataType: (memptr (ptr Eq_14) byte)
  OrigDataType: word16
T_77: (in 0x001C : word16)
  Class: Eq_77
  DataType: word16
  OrigDataType: word16
T_78: (in ds->ptr01FC - 0x001C : word16)
  Class: Eq_46
  DataType: (memptr (ptr Eq_14) byte)
  OrigDataType: word16
T_79: (in 0x01FC : word16)
  Class: Eq_79
  DataType: (memptr (ptr Eq_14) (memptr (ptr Eq_14) byte))
  OrigDataType: (memptr T_14 (struct (0 T_80 t0000)))
T_80: (in Mem281[ds:0x01FC:word16] : word16)
  Class: Eq_46
  DataType: (memptr (ptr Eq_14) byte)
  OrigDataType: word16
T_81: (in ax : word16)
  Class: Eq_81
  DataType: (memptr (ptr Eq_142) ui8)
  OrigDataType: (memptr T_142 (struct (0 T_225 t0000)))
T_82: (in __bt : ptr32)
  Class: Eq_82
  DataType: (ptr Eq_82)
  OrigDataType: (ptr (fn T_88 (T_86, T_87)))
T_83: (in 0xF000 : selector)
  Class: Eq_83
  DataType: (ptr Eq_83)
  OrigDataType: (ptr (segment))
T_84: (in 0x0000 : word16)
  Class: Eq_84
  DataType: word16
  OrigDataType: word16
T_85: (in si_237 + 0x0000 : word16)
  Class: Eq_85
  DataType: word16
  OrigDataType: word16
T_86: (in Mem240[0xF000:si_237 + 0x0000:word16] : word16)
  Class: Eq_86
  DataType: word16
  OrigDataType: word16
T_87: (in cx : word16)
  Class: Eq_87
  DataType: word16
  OrigDataType: word16
T_88: (in __bt((0xF000->*si_237).w0000, cx) : bool)
  Class: Eq_88
  DataType: bool
  OrigDataType: bool
T_89: (in DPB(ax, __bt((0xF000->*si_237).w0000, cx), 8, 8) : word16)
  Class: Eq_81
  DataType: (memptr (ptr Eq_142) ui8)
  OrigDataType: word16
T_90: (in 0x5000 : selector)
  Class: Eq_90
  DataType: (ptr Eq_90)
  OrigDataType: (ptr (segment (FFFFFFFF (arr T_277) aFFFFFFFF) (0 (arr T_276) a0000)))
T_91: (in 0x0150 : word16)
  Class: Eq_91
  DataType: word16
  OrigDataType: word16
T_92: (in di_233 + 0x0150 : word16)
  Class: Eq_92
  DataType: word16
  OrigDataType: word16
T_93: (in Mem267[0x5000:di_233 + 0x0150:word16] : word16)
  Class: Eq_81
  DataType: (memptr (ptr Eq_142) ui8)
  OrigDataType: word16
T_94: (in 0x0000 : word16)
  Class: Eq_94
  DataType: word16
  OrigDataType: word16
T_95: (in di_233 + 0x0000 : word16)
  Class: Eq_95
  DataType: word16
  OrigDataType: word16
T_96: (in Mem268[0x5000:di_233 + 0x0000:word16] : word16)
  Class: Eq_81
  DataType: (memptr (ptr Eq_142) ui8)
  OrigDataType: word16
T_97: (in 0x0002 : word16)
  Class: Eq_97
  DataType: word16
  OrigDataType: word16
T_98: (in di_233 + 0x0002 : word16)
  Class: Eq_70
  DataType: (memptr (ptr Eq_90) Eq_70)
  OrigDataType: word16
T_99: (in 0x0001 : word16)
  Class: Eq_99
  DataType: word16
  OrigDataType: word16
T_100: (in cx - 0x0001 : word16)
  Class: Eq_87
  DataType: word16
  OrigDataType: word16
T_101: (in 0x0000 : word16)
  Class: Eq_87
  DataType: word16
  OrigDataType: word16
T_102: (in cx != 0x0000 : bool)
  Class: Eq_102
  DataType: bool
  OrigDataType: bool
T_103: (in 0x0001 : word16)
  Class: Eq_103
  DataType: word16
  OrigDataType: word16
T_104: (in si_237 + 0x0001 : word16)
  Class: Eq_55
  DataType: (memptr (ptr Eq_83) Eq_55)
  OrigDataType: word16
T_105: (in 0x0290 : word16)
  Class: Eq_105
  DataType: word16
  OrigDataType: word16
T_106: (in di_233 + 0x0290 : word16)
  Class: Eq_70
  DataType: (memptr (ptr Eq_90) Eq_70)
  OrigDataType: word16
T_107: (in 0x0001 : word16)
  Class: Eq_107
  DataType: word16
  OrigDataType: word16
T_108: (in dx_243 - 0x0001 : word16)
  Class: Eq_73
  DataType: word16
  OrigDataType: word16
T_109: (in 0x0000 : word16)
  Class: Eq_73
  DataType: word16
  OrigDataType: word16
T_110: (in dx_243 != 0x0000 : bool)
  Class: Eq_110
  DataType: bool
  OrigDataType: bool
T_111: (in 0x08 : byte)
  Class: Eq_111
  DataType: byte
  OrigDataType: byte
T_112: (in DPB(cx, 0x08, 0, 8) : word16)
  Class: Eq_87
  DataType: word16
  OrigDataType: word16
T_113: (in 0x6000 : word16)
  Class: Eq_113
  DataType: word16
  OrigDataType: word16
T_114: (in 0x0002 : word16)
  Class: Eq_114
  DataType: word16
  OrigDataType: word16
T_115: (in fp - 0x0002 : word16)
  Class: Eq_115
  DataType: word16
  OrigDataType: word16
T_116: (in Mem93[ss:fp - 0x0002:word16] : word16)
  Class: Eq_113
  DataType: word16
  OrigDataType: word16
T_117: (in di_105 : (memptr (ptr Eq_142) byte))
  Class: Eq_117
  DataType: (memptr (ptr Eq_142) byte)
  OrigDataType: (memptr T_142 (struct 0001 (0 T_145 t0000)))
T_118: (in 0x0000 : word16)
  Class: Eq_117
  DataType: (memptr (ptr Eq_142) byte)
  OrigDataType: word16
T_119: (in cx_102 : word16)
  Class: Eq_119
  DataType: word16
  OrigDataType: word16
T_120: (in 0xFA00 : word16)
  Class: Eq_119
  DataType: word16
  OrigDataType: word16
T_121: (in 0x0000 : word16)
  Class: Eq_121
  DataType: word16
  OrigDataType: word16
T_122: (in si_73 + 0x0000 : word16)
  Class: Eq_122
  DataType: word16
  OrigDataType: word16
T_123: (in Mem68[0x5000:si_73 + 0x0000:byte] : byte)
  Class: Eq_123
  DataType: byte
  OrigDataType: byte
T_124: (in 0x0000 : word16)
  Class: Eq_124
  DataType: word16
  OrigDataType: word16
T_125: (in di_76 + 0x0000 : word16)
  Class: Eq_125
  DataType: word16
  OrigDataType: word16
T_126: (in Mem86[0x5000:di_76 + 0x0000:byte] : byte)
  Class: Eq_123
  DataType: byte
  OrigDataType: byte
T_127: (in 0x0001 : word16)
  Class: Eq_127
  DataType: word16
  OrigDataType: word16
T_128: (in si_73 + 0x0001 : word16)
  Class: Eq_39
  DataType: (memptr (ptr Eq_90) byte)
  OrigDataType: word16
T_129: (in 0x0001 : word16)
  Class: Eq_129
  DataType: word16
  OrigDataType: word16
T_130: (in di_76 + 0x0001 : word16)
  Class: Eq_41
  DataType: (memptr (ptr Eq_90) byte)
  OrigDataType: word16
T_131: (in 0x0001 : word16)
  Class: Eq_131
  DataType: word16
  OrigDataType: word16
T_132: (in cx_77 - 0x0001 : word16)
  Class: Eq_43
  DataType: word16
  OrigDataType: word16
T_133: (in 0x0000 : word16)
  Class: Eq_43
  DataType: word16
  OrigDataType: word16
T_134: (in cx_77 == 0x0000 : bool)
  Class: Eq_134
  DataType: bool
  OrigDataType: bool
T_135: (in si_114 : (memptr (ptr Eq_90) Eq_176))
  Class: Eq_135
  DataType: (memptr (ptr Eq_90) Eq_176)
  OrigDataType: (memptr T_90 (struct 0002 (0 T_176 t0000)))
T_136: (in 0x0000 : word16)
  Class: Eq_135
  DataType: (memptr (ptr Eq_90) Eq_176)
  OrigDataType: word16
T_137: (in di_117 : word16)
  Class: Eq_137
  DataType: word16
  OrigDataType: word16
T_138: (in 0x7440 : word16)
  Class: Eq_137
  DataType: word16
  OrigDataType: word16
T_139: (in dx_118 : word16)
  Class: Eq_139
  DataType: word16
  OrigDataType: word16
T_140: (in 0x0010 : word16)
  Class: Eq_139
  DataType: word16
  OrigDataType: word16
T_141: (in 0x00 : byte)
  Class: Eq_141
  DataType: byte
  OrigDataType: byte
T_142: (in 0x6000 : selector)
  Class: Eq_142
  DataType: (ptr Eq_142)
  OrigDataType: (ptr (segment (0 (arr T_278) a0000)))
T_143: (in 0x0000 : word16)
  Class: Eq_143
  DataType: word16
  OrigDataType: word16
T_144: (in di_105 + 0x0000 : word16)
  Class: Eq_144
  DataType: word16
  OrigDataType: word16
T_145: (in Mem109[0x6000:di_105 + 0x0000:byte] : byte)
  Class: Eq_141
  DataType: byte
  OrigDataType: byte
T_146: (in 0x0001 : word16)
  Class: Eq_146
  DataType: word16
  OrigDataType: word16
T_147: (in di_105 + 0x0001 : word16)
  Class: Eq_117
  DataType: (memptr (ptr Eq_142) byte)
  OrigDataType: word16
T_148: (in 0x0001 : word16)
  Class: Eq_148
  DataType: word16
  OrigDataType: word16
T_149: (in cx_102 - 0x0001 : word16)
  Class: Eq_119
  DataType: word16
  OrigDataType: word16
T_150: (in 0x0000 : word16)
  Class: Eq_119
  DataType: word16
  OrigDataType: word16
T_151: (in cx_102 == 0x0000 : bool)
  Class: Eq_151
  DataType: bool
  OrigDataType: bool
T_152: (in cos : ptr32)
  Class: Eq_152
  DataType: (ptr Eq_152)
  OrigDataType: (ptr (fn T_159 (T_158)))
T_153: (in rLoc2 : real64)
  Class: Eq_153
  DataType: Eq_153
  OrigDataType: (union (real16 u0) (real64 u1))
T_154: (in 0x0C00 : selector)
  Class: Eq_154
  DataType: (ptr Eq_154)
  OrigDataType: (ptr (segment (1FE T_156 t01FE) (200 T_164 t0200)))
T_155: (in 0x01FE : word16)
  Class: Eq_155
  DataType: (memptr (ptr Eq_154) word16)
  OrigDataType: (memptr T_154 (struct (0 T_156 t0000)))
T_156: (in Mem93[0x0C00:0x01FE:word16] : word16)
  Class: Eq_156
  DataType: word16
  OrigDataType: word16
T_157: (in (real64) 0x0C00->w01FE : real64)
  Class: Eq_157
  DataType: Eq_157
  OrigDataType: (union (real16 u0) (real64 u1))
T_158: (in rLoc2 / (real64) 0x0C00->w01FE : word16)
  Class: Eq_158
  DataType: real16
  OrigDataType: real16
T_159: (in cos(rLoc2 / (real64) 0x0C00->w01FE) : real64)
  Class: Eq_159
  DataType: Eq_159
  OrigDataType: (union (real16 u0) (real64 u1))
T_160: (in 0x01FE : word16)
  Class: Eq_160
  DataType: (memptr (ptr Eq_154) word16)
  OrigDataType: (memptr T_154 (struct (0 T_161 t0000)))
T_161: (in Mem93[0x0C00:0x01FE:word16] : word16)
  Class: Eq_156
  DataType: word16
  OrigDataType: word16
T_162: (in (real64) 0x0C00->w01FE : real64)
  Class: Eq_162
  DataType: Eq_162
  OrigDataType: (union (real16 u0) (real64 u1))
T_163: (in cos(rLoc2 / (real64) 0x0C00->w01FE) * (real64) 0x0C00->w01FE : word16)
  Class: Eq_163
  DataType: real16
  OrigDataType: real16
T_164: (in (int16) (cos(rLoc2 / (real64) 0x0C00->w01FE) * (real64) 0x0C00->w01FE) : int16)
  Class: Eq_164
  DataType: int16
  OrigDataType: int16
T_165: (in 0x0200 : word16)
  Class: Eq_165
  DataType: (memptr (ptr Eq_154) int16)
  OrigDataType: (memptr T_154 (struct (0 T_166 t0000)))
T_166: (in Mem142[0x0C00:0x0200:int16] : int16)
  Class: Eq_164
  DataType: int16
  OrigDataType: int16
T_167: (in ax_143 : int16)
  Class: Eq_167
  DataType: int16
  OrigDataType: word16
T_168: (in 0x0200 : word16)
  Class: Eq_168
  DataType: (memptr (ptr Eq_154) int16)
  OrigDataType: (memptr T_154 (struct (0 T_169 t0000)))
T_169: (in Mem142[0x0C00:0x0200:word16] : word16)
  Class: Eq_164
  DataType: int16
  OrigDataType: int16
T_170: (in 0x0140 : word16)
  Class: Eq_170
  DataType: int16
  OrigDataType: int16
T_171: (in 0x0C00->w0200 *s 0x0140 : int16)
  Class: Eq_167
  DataType: int16
  OrigDataType: int16
T_172: (in di_144 : (memptr (ptr Eq_142) Eq_176))
  Class: Eq_172
  DataType: (memptr (ptr Eq_142) Eq_176)
  OrigDataType: (memptr T_142 (struct (0 T_179 t0000)))
T_173: (in di_117 + ax_143 : word16)
  Class: Eq_172
  DataType: (memptr (ptr Eq_142) Eq_176)
  OrigDataType: word16
T_174: (in 0x0000 : word16)
  Class: Eq_174
  DataType: word16
  OrigDataType: word16
T_175: (in si_114 + 0x0000 : word16)
  Class: Eq_175
  DataType: word16
  OrigDataType: word16
T_176: (in Mem142[0x5000:si_114 + 0x0000:byte] : byte)
  Class: Eq_176
  DataType: Eq_176
  OrigDataType: byte
T_177: (in 0x0000 : word16)
  Class: Eq_177
  DataType: word16
  OrigDataType: word16
T_178: (in di_144 + 0x0000 : word16)
  Class: Eq_178
  DataType: word16
  OrigDataType: word16
T_179: (in Mem146[0x6000:di_144 + 0x0000:byte] : byte)
  Class: Eq_176
  DataType: Eq_176
  OrigDataType: byte
T_180: (in 0x0001 : word16)
  Class: Eq_180
  DataType: word16
  OrigDataType: word16
T_181: (in si_114 + 0x0001 : word16)
  Class: Eq_135
  DataType: (memptr (ptr Eq_90) Eq_176)
  OrigDataType: word16
T_182: (in 1 : real64)
  Class: Eq_153
  DataType: real64
  OrigDataType: real64
T_183: (in 0x0001 : word16)
  Class: Eq_183
  DataType: word16
  OrigDataType: word16
T_184: (in di_144 + 0x0001 : word16)
  Class: Eq_184
  DataType: word16
  OrigDataType: word16
T_185: (in di_144 + 0x0001 - ax_143 : word16)
  Class: Eq_137
  DataType: word16
  OrigDataType: word16
T_186: (in cx_129 : word16)
  Class: Eq_186
  DataType: word16
  OrigDataType: word16
T_187: (in 0x0001 : word16)
  Class: Eq_187
  DataType: word16
  OrigDataType: word16
T_188: (in cx_129 - 0x0001 : word16)
  Class: Eq_186
  DataType: word16
  OrigDataType: word16
T_189: (in 0x0000 : word16)
  Class: Eq_186
  DataType: word16
  OrigDataType: word16
T_190: (in cx_129 != 0x0000 : bool)
  Class: Eq_190
  DataType: bool
  OrigDataType: bool
T_191: (in 0x0010 : word16)
  Class: Eq_191
  DataType: word16
  OrigDataType: word16
T_192: (in si_114 + 0x0010 : word16)
  Class: Eq_135
  DataType: (memptr (ptr Eq_90) Eq_176)
  OrigDataType: word16
T_193: (in 0x0001 : word16)
  Class: Eq_193
  DataType: word16
  OrigDataType: word16
T_194: (in dx_118 - 0x0001 : word16)
  Class: Eq_139
  DataType: word16
  OrigDataType: word16
T_195: (in 0x0000 : word16)
  Class: Eq_139
  DataType: word16
  OrigDataType: word16
T_196: (in dx_118 != 0x0000 : bool)
  Class: Eq_196
  DataType: bool
  OrigDataType: bool
T_197: (in 0x0140 : word16)
  Class: Eq_186
  DataType: word16
  OrigDataType: word16
T_198: (in cx_164 : word16)
  Class: Eq_198
  DataType: word16
  OrigDataType: word16
T_199: (in 0xC8 : byte)
  Class: Eq_199
  DataType: byte
  OrigDataType: byte
T_200: (in DPB(cx_129, 0xC8, 0, 8) : word16)
  Class: Eq_198
  DataType: word16
  OrigDataType: word16
T_201: (in dx_169 : word16)
  Class: Eq_201
  DataType: word16
  OrigDataType: word16
T_202: (in 0x0003 : word16)
  Class: Eq_202
  DataType: word16
  OrigDataType: word16
T_203: (in dx_118 & 0x0003 : word16)
  Class: Eq_201
  DataType: word16
  OrigDataType: word16
T_204: (in 0x0000 : word16)
  Class: Eq_204
  DataType: word16
  OrigDataType: word16
T_205: (in si_114 + 0x0000 : word16)
  Class: Eq_205
  DataType: word16
  OrigDataType: word16
T_206: (in Mem146[0x5000:si_114 + 0x0000:word16] : word16)
  Class: Eq_176
  DataType: Eq_176
  OrigDataType: word16
T_207: (in 0x0001 : word16)
  Class: Eq_207
  DataType: word16
  OrigDataType: word16
T_208: (in dx_169 + 0x0001 : word16)
  Class: Eq_208
  DataType: word16
  OrigDataType: word16
T_209: (in Mem146[0x5000:si_114 + 0x0000:word16] + (dx_169 + 0x0001) : word16)
  Class: Eq_176
  DataType: Eq_176
  OrigDataType: word16
T_210: (in 0x0000 : word16)
  Class: Eq_210
  DataType: word16
  OrigDataType: word16
T_211: (in si_114 + 0x0000 : word16)
  Class: Eq_211
  DataType: word16
  OrigDataType: word16
T_212: (in Mem173[0x5000:si_114 + 0x0000:word16] : word16)
  Class: Eq_176
  DataType: Eq_176
  OrigDataType: word16
T_213: (in 0x0000 : word16)
  Class: Eq_213
  DataType: word16
  OrigDataType: word16
T_214: (in si_114 + 0x0000 : word16)
  Class: Eq_214
  DataType: word16
  OrigDataType: word16
T_215: (in Mem173[0x5000:si_114 + 0x0000:word16] : word16)
  Class: Eq_176
  DataType: Eq_176
  OrigDataType: word16
T_216: (in Mem173[0x5000:si_114 + 0x0000:word16] + bx_166 : word16)
  Class: Eq_81
  DataType: (memptr (ptr Eq_142) ui8)
  OrigDataType: word16
T_217: (in dx_169 + 0x0001 : word16)
  Class: Eq_217
  DataType: word16
  OrigDataType: word16
T_218: (in (byte) (dx_169 + 0x0001) : byte)
  Class: Eq_218
  DataType: byte
  OrigDataType: byte
T_219: (in 0x0A : byte)
  Class: Eq_219
  DataType: byte
  OrigDataType: byte
T_220: (in (byte) (dx_169 + 0x0001) + 0x0A : byte)
  Class: Eq_220
  DataType: ui8
  OrigDataType: ui8
T_221: (in 0x02 : byte)
  Class: Eq_221
  DataType: ui8
  OrigDataType: ui8
T_222: (in ((byte) (dx_169 + 0x0001) + 0x0A) * 0x02 : byte)
  Class: Eq_222
  DataType: ui8
  OrigDataType: ui8
T_223: (in 0x0000 : word16)
  Class: Eq_223
  DataType: word16
  OrigDataType: word16
T_224: (in ax + 0x0000 : word16)
  Class: Eq_224
  DataType: word16
  OrigDataType: word16
T_225: (in Mem181[0x6000:ax + 0x0000:byte] : byte)
  Class: Eq_222
  DataType: ui8
  OrigDataType: byte
T_226: (in dx_169 + 0x0001 : word16)
  Class: Eq_139
  DataType: word16
  OrigDataType: word16
T_227: (in 0x0002 : word16)
  Class: Eq_227
  DataType: word16
  OrigDataType: word16
T_228: (in si_114 + 0x0002 : word16)
  Class: Eq_135
  DataType: (memptr (ptr Eq_90) Eq_176)
  OrigDataType: word16
T_229: (in __rol : ptr32)
  Class: Eq_229
  DataType: (ptr Eq_229)
  OrigDataType: (ptr (fn T_235 (T_233, T_234)))
T_230: (in 0x0001 : word16)
  Class: Eq_230
  DataType: word16
  OrigDataType: word16
T_231: (in bx_166 + 0x0001 : word16)
  Class: Eq_231
  DataType: word16
  OrigDataType: word16
T_232: (in 0x0001 : word16)
  Class: Eq_232
  DataType: word16
  OrigDataType: word16
T_233: (in bx_166 + 0x0001 + 0x0001 : word16)
  Class: Eq_233
  DataType: word16
  OrigDataType: word16
T_234: (in 0x02 : byte)
  Class: Eq_234
  DataType: byte
  OrigDataType: byte
T_235: (in __rol(bx_166 + 0x0001 + 0x0001, 0x02) : word16)
  Class: Eq_27
  DataType: word16
  OrigDataType: word16
T_236: (in 0x0001 : word16)
  Class: Eq_236
  DataType: word16
  OrigDataType: word16
T_237: (in cx_164 - 0x0001 : word16)
  Class: Eq_198
  DataType: word16
  OrigDataType: word16
T_238: (in 0x0000 : word16)
  Class: Eq_198
  DataType: word16
  OrigDataType: word16
T_239: (in cx_164 != 0x0000 : bool)
  Class: Eq_239
  DataType: bool
  OrigDataType: bool
T_240: (in 0x0002 : word16)
  Class: Eq_240
  DataType: word16
  OrigDataType: word16
T_241: (in fp - 0x0002 : word16)
  Class: Eq_241
  DataType: word16
  OrigDataType: word16
T_242: (in Mem193[ss:fp - 0x0002:word16] : word16)
  Class: Eq_142
  DataType: (ptr Eq_142)
  OrigDataType: word16
T_243: (in 0xA000 : word16)
  Class: Eq_14
  DataType: (ptr Eq_14)
  OrigDataType: word16
T_244: (in 0x0002 : word16)
  Class: Eq_244
  DataType: word16
  OrigDataType: word16
T_245: (in fp - 0x0002 : word16)
  Class: Eq_245
  DataType: word16
  OrigDataType: word16
T_246: (in Mem197[ss:fp - 0x0002:word16] : word16)
  Class: Eq_14
  DataType: (ptr Eq_14)
  OrigDataType: word16
T_247: (in si_200 : (memptr (ptr Eq_142) word16))
  Class: Eq_247
  DataType: (memptr (ptr Eq_142) word16)
  OrigDataType: (memptr T_142 (struct 0002 (0 T_263 t0000)))
T_248: (in 0x0000 : word16)
  Class: Eq_247
  DataType: (memptr (ptr Eq_142) word16)
  OrigDataType: word16
T_249: (in di_201 : (memptr (ptr Eq_264) word16))
  Class: Eq_249
  DataType: (memptr (ptr Eq_264) word16)
  OrigDataType: (memptr T_264 (struct 0002 (0 T_267 t0000)))
T_250: (in 0x0000 : word16)
  Class: Eq_249
  DataType: (memptr (ptr Eq_264) word16)
  OrigDataType: word16
T_251: (in 0x7D00 : word16)
  Class: Eq_87
  DataType: word16
  OrigDataType: word16
T_252: (in cs : selector)
  Class: Eq_252
  DataType: (ptr Eq_252)
  OrigDataType: (ptr (segment))
T_253: (in 0x0002 : word16)
  Class: Eq_253
  DataType: word16
  OrigDataType: word16
T_254: (in fp - 0x0002 : word16)
  Class: Eq_254
  DataType: word16
  OrigDataType: word16
T_255: (in Mem221[ss:fp - 0x0002:word16] : word16)
  Class: Eq_252
  DataType: (ptr Eq_252)
  OrigDataType: word16
T_256: (in __inb : ptr32)
  Class: Eq_256
  DataType: (ptr Eq_256)
  OrigDataType: (ptr (fn T_258 (T_257)))
T_257: (in 0x60 : byte)
  Class: Eq_257
  DataType: byte
  OrigDataType: byte
T_258: (in __inb(0x60) : byte)
  Class: Eq_258
  DataType: byte
  OrigDataType: byte
T_259: (in 0x01 : byte)
  Class: Eq_258
  DataType: byte
  OrigDataType: byte
T_260: (in __inb(0x60) != 0x01 : bool)
  Class: Eq_260
  DataType: bool
  OrigDataType: bool
T_261: (in 0x0000 : word16)
  Class: Eq_261
  DataType: word16
  OrigDataType: word16
T_262: (in si_200 + 0x0000 : word16)
  Class: Eq_262
  DataType: word16
  OrigDataType: word16
T_263: (in Mem197[0x6000:si_200 + 0x0000:word16] : word16)
  Class: Eq_263
  DataType: word16
  OrigDataType: word16
T_264: (in 0xA000 : selector)
  Class: Eq_264
  DataType: (ptr Eq_264)
  OrigDataType: (ptr (segment (0 (arr T_280) a0000)))
T_265: (in 0x0000 : word16)
  Class: Eq_265
  DataType: word16
  OrigDataType: word16
T_266: (in di_201 + 0x0000 : word16)
  Class: Eq_266
  DataType: word16
  OrigDataType: word16
T_267: (in Mem213[0xA000:di_201 + 0x0000:word16] : word16)
  Class: Eq_263
  DataType: word16
  OrigDataType: word16
T_268: (in 0x0002 : word16)
  Class: Eq_268
  DataType: word16
  OrigDataType: word16
T_269: (in si_200 + 0x0002 : word16)
  Class: Eq_247
  DataType: (memptr (ptr Eq_142) word16)
  OrigDataType: word16
T_270: (in 0x0002 : word16)
  Class: Eq_270
  DataType: word16
  OrigDataType: word16
T_271: (in di_201 + 0x0002 : word16)
  Class: Eq_249
  DataType: (memptr (ptr Eq_264) word16)
  OrigDataType: word16
T_272: (in 0x0001 : word16)
  Class: Eq_272
  DataType: word16
  OrigDataType: word16
T_273: (in cx - 0x0001 : word16)
  Class: Eq_87
  DataType: word16
  OrigDataType: word16
T_274: (in 0x0000 : word16)
  Class: Eq_87
  DataType: word16
  OrigDataType: word16
T_275: (in cx == 0x0000 : bool)
  Class: Eq_275
  DataType: bool
  OrigDataType: bool
T_276:
  Class: Eq_276
  DataType: byte
  OrigDataType: (struct 0001 (0 T_123 t0000))
T_277:
  Class: Eq_277
  DataType: byte
  OrigDataType: (struct 0001 (0 T_126 t0000))
T_278:
  Class: Eq_278
  DataType: Eq_278
  OrigDataType: (struct 0001 (0 T_145 t0000))
T_279:
  Class: Eq_278
  DataType: Eq_278
  OrigDataType: (struct 0002 (0 word16 w0000))
T_280:
  Class: Eq_280
  DataType: word16
  OrigDataType: (struct 0002 (0 T_267 t0000))
T_281:
  Class: Eq_281
  DataType: Eq_281
  OrigDataType: 
T_282:
  Class: Eq_282
  DataType: Eq_282
  OrigDataType: 
T_283:
  Class: Eq_283
  DataType: Eq_283
  OrigDataType: 
*/
typedef Eq_264 Eq_1Eq_83 Eq_1Eq_154 Eq_1Eq_90 Eq_1Eq_142 Eq_1struct Globals {
	Eq_264 * ptrFFFA0000;	// FFFA0000
	Eq_83 * ptrFFFF0000;	// FFFF0000
	Eq_154 * ptrC000;	// C000
	Eq_90 * ptr50000;	// 50000
	Eq_142 * ptr60000;	// 60000
} Eq_1;

typedef void (Eq_2)(byte);

typedef byte (Eq_7)(word16);

typedef struct Eq_14 {
	byte Eq_14::*ptr01FC;	// 1FC
	word32 dw0202;	// 202
	byte b0206;	// 206
} Eq_14;

typedef struct Eq_55 {	// size: 1 1
	word16 w0000;	// 0
} Eq_55;

typedef struct Eq_65 {
} Eq_65;

typedef union Eq_66 {
	Eq_281 Eq_65::* u0;
	Eq_283 u1;
} Eq_66;

typedef struct Eq_70 {	// size: 2 2
	ui8 Eq_142::*ptr0000;	// 0
	ui8 Eq_142::*ptr0150;	// 150
} Eq_70;

typedef bool (Eq_82)(word16, word16);

typedef struct Eq_83 {
} Eq_83;

typedef  Eq_90[][]Eq_70struct Eq_90 {
	byte aFFFFFFFF[];	// FFFFFFFF
	byte a0000[];	// 0
	Eq_70 t0140;	// 140
	byte bFFFF;	// FFFF
} Eq_90;

typedef Eq_278 Eq_142[]struct Eq_142 {
	Eq_278 a0000[];	// 0
} Eq_142;

typedef Eq_159 (Eq_152)(real16);

typedef union Eq_153 {
	real16 u0;
	real64 u1;
} Eq_153;

typedef struct Eq_154 {
	word16 w01FE;	// 1FE
	int16 w0200;	// 200
} Eq_154;

typedef union Eq_157 {
	real16 u0;
	real64 u1;
} Eq_157;

typedef union Eq_159 {
	real16 u0;
	real64 u1;
} Eq_159;

typedef union Eq_162 {
	real16 u0;
	real64 u1;
} Eq_162;

typedef union Eq_176 {
	byte u0;
	word16 u1;
} Eq_176;

typedef word16 (Eq_229)(word16, byte);

typedef struct Eq_252 {
} Eq_252;

typedef byte (Eq_256)(byte);

typedef  Eq_264[]struct Eq_264 {
	word16 a0000[];	// 0
} Eq_264;

typedef union Eq_278 {
	byte u0;
	word16 u1;
} Eq_278;

typedef Eq_252 Eq_281struct Eq_281 {
	Eq_252 * ptrFFFFFFFE;	// FFFFFFFE
} Eq_281;

typedef Eq_14 Eq_282struct Eq_282 {
	Eq_14 * ptrFFFFFFFE;	// FFFFFFFE
} Eq_282;

typedef union Eq_283 {
	ptr16 u0;
	Eq_282 Eq_65::* u1;
} Eq_283;

