// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_275/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_7: (fn void (word16, byte))
	T_7 (in __outb : ptr32)
Eq_13: (fn void (word16, byte))
	T_13 (in __outb : ptr32)
Eq_17: (fn void (word16, byte))
	T_17 (in __outb : ptr32)
Eq_25: (fn word16 (word16, byte))
	T_25 (in __ror : ptr32)
Eq_30: (fn void (word16, byte))
	T_30 (in __outb : ptr32)
Eq_40: (fn word16 (word16, byte))
	T_40 (in __rol : ptr32)
Eq_44: (fn word16 (word16, byte))
	T_44 (in __ror : ptr32)
Eq_54: (union "Eq_54" (ptr32 u0) (segptr32 u1))
	T_54 (in es_bp_61 : ptr32)
	T_59 (in Mem0[ds:bx + 0x0000:segptr32] : segptr32)
Eq_55: (segment "Eq_55" (0 bcu8 b0000) (1F8 Eq_206 t01F8) (1FC (memptr (ptr Eq_55) bcu8) ptr01FC) (1FE word16 w01FE) (200 int32 dw0200) (204 Eq_220 t0204) (206 uint16 w0206) (208 Eq_208 t0208) (20A word32 dw020A))
	T_55 (in ds : (ptr Eq_55))
	T_132 (in bp_63 << 0x0001 : word16)
	T_138 (in bp_63 << 0x0001 : word16)
	T_154 (in bp_63 << 0x0001 : word16)
Eq_62: (segment "Eq_62" (10 (arr bcu8) a0010))
	T_62 (in es_62 : (ptr Eq_62))
	T_63 (in SLICE(es_bp_61, selector, 16) : selector)
Eq_64: (union "Eq_64" (ui16 u0) ((memptr (ptr Eq_115) byte) u1))
	T_64 (in bp_147 : Eq_64)
	T_66 (in bp_63 << 0x0001 : word16)
Eq_72: (struct "Eq_72" (0 int16 w0000) (2 int16 w0002) (4 word32 dw0004) (8 word16 w0008))
	T_72 (in di_264 : (memptr (ptr Eq_55) Eq_72))
	T_77 (in (si_103 << 0x0004) + ds->ptr01FC : word16)
Eq_79: (fn word64 ())
	T_79 (in __rdtsc : ptr32)
Eq_105: (fn word32 (word32))
	T_105 (in __bswap : ptr32)
Eq_115: (segment "Eq_115" (0 Eq_180 t0000) (204 (arr Eq_293 2) a0204))
	T_115 (in ss : selector)
Eq_168: (fn real64 (Eq_169))
	T_168 (in sin : ptr32)
Eq_169: (union "Eq_169" (real16 u0) (real64 u1))
	T_169 (in rLoc3_182 : Eq_169)
	T_191 (in cos(rLoc3_182) : real64)
	T_207 (in (real64) ds->dw0200 * ds->t01F8 : word16)
Eq_172: (union "Eq_172" (real16 u0) (real64 u1))
	T_172 (in sin(rLoc3_182) + 1 : real64)
Eq_175: (union "Eq_175" (real16 u0) (real64 u1))
	T_175 (in (real64) ds->w01FE : real64)
Eq_176: (union "Eq_176" (real16 u0) (real64 u1))
	T_176 (in (sin(rLoc3_182) + 1) * (real64) ds->w01FE : word16)
Eq_180: (struct "Eq_180" 0001 (0 int16 w0000))
	T_180 (in 0x0000 : word16)
Eq_190: (fn Eq_169 (Eq_169))
	T_190 (in cos : ptr32)
Eq_192: (struct "Eq_192" (4 Eq_200 t0004) (8 int16 w0008))
	T_192 (in di_155 : (memptr (ptr Eq_55) Eq_192))
	T_248 (in (si_144 << 0x0004) + ds->ptr01FC : word16)
Eq_195: (union "Eq_195" (real16 u0) (real64 u1))
	T_195 (in (real64) Mem160[ss:bp_163 + di_155:int16] : real64)
Eq_198: (union "Eq_198" (real16 u0) (real64 u1))
	T_198 (in (real64) Mem160[ds:0x01FC:word16] : real64)
Eq_199: (union "Eq_199" (real16 u0) (real64 u1))
	T_199 (in (real64) Mem160[ss:bp_163 + di_155:int16] * (real64) Mem160[ds:0x01FC:word16] : word16)
Eq_200: (union "Eq_200" (real32 u0) (real64 u1))
	T_200 (in rLoc1_159 : Eq_200)
	T_251 (in Mem142[ds:di_155 + 0x0004:real32] : real32)
	T_259 (in (ds->*di_155).t0004 - (real64) (ds->*di_155).w0008 * ds->t01F8 : real64)
	T_262 (in Mem160[ds:di_155 + 0x0004:real32] : real32)
Eq_204: (union "Eq_204" (real16 u0) (real64 u1))
	T_204 (in (real64) ds->dw0200 : real64)
Eq_206: (union "Eq_206" (real16 u0) (real32 u1))
	T_206 (in Mem160[ds:0x01F8:real32] : real32)
	T_257 (in Mem142[ds:0x01F8:real32] : real32)
Eq_208: (union "Eq_208" (int16 u0) (byte u1))
	T_208 (in (int16) rLoc1_159 : int16)
	T_210 (in Mem201[ds:0x0208:int16] : int16)
	T_229 (in Mem201[ds:0x0208:byte] : byte)
Eq_220: (union "Eq_220" (int16 u0) (cups16 u1))
	T_220 (in dx_244 : Eq_220)
	T_222 (in Mem201[ds:0x0204:word16] : word16)
	T_223 (in 0x003C : word16)
	T_225 (in 0xFEFC : word16)
Eq_233: (union "Eq_233" (ui16 u0) ((ptr (arr Eq_294)) u1))
	T_233 (in bp_63 << 0x0001 : word16)
Eq_255: (union "Eq_255" (real16 u0) (real64 u1))
	T_255 (in (real64) (ds->*di_155).w0008 : real64)
Eq_271: (fn byte (byte))
	T_271 (in __inb : ptr32)
Eq_293: (struct "Eq_293" 0001 (0 int16 w0000))
	T_293
Eq_294: (struct "Eq_294" 0140 (0 byte b0000))
	T_294
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
T_7: (in __outb : ptr32)
  Class: Eq_7
  DataType: (ptr Eq_7)
  OrigDataType: (ptr (fn T_10 (T_8, T_9)))
T_8: (in 0x03C8 : word16)
  Class: Eq_8
  DataType: word16
  OrigDataType: word16
T_9: (in 0x00 : byte)
  Class: Eq_9
  DataType: byte
  OrigDataType: byte
T_10: (in __outb(0x03C8, 0x00) : void)
  Class: Eq_10
  DataType: void
  OrigDataType: void
T_11: (in ax_14 : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_12: (in 0x0000 : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_13: (in __outb : ptr32)
  Class: Eq_13
  DataType: (ptr Eq_13)
  OrigDataType: (ptr (fn T_16 (T_14, T_15)))
T_14: (in 0x03C9 : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_15: (in al_295 : byte)
  Class: Eq_15
  DataType: byte
  OrigDataType: byte
T_16: (in __outb(0x03C9, al_295) : void)
  Class: Eq_16
  DataType: void
  OrigDataType: void
T_17: (in __outb : ptr32)
  Class: Eq_17
  DataType: (ptr Eq_17)
  OrigDataType: (ptr (fn T_19 (T_18, T_15)))
T_18: (in 0x03C9 : word16)
  Class: Eq_18
  DataType: word16
  OrigDataType: word16
T_19: (in __outb(0x03C9, al_295) : void)
  Class: Eq_19
  DataType: void
  OrigDataType: void
T_20: (in al_20 : byte)
  Class: Eq_20
  DataType: byte
  OrigDataType: byte
T_21: (in 0x0F : byte)
  Class: Eq_21
  DataType: byte
  OrigDataType: byte
T_22: (in al_20 & 0x0F : byte)
  Class: Eq_22
  DataType: byte
  OrigDataType: byte
T_23: (in 0x00 : byte)
  Class: Eq_22
  DataType: byte
  OrigDataType: byte
T_24: (in (al_20 & 0x0F) == 0x00 : bool)
  Class: Eq_24
  DataType: bool
  OrigDataType: bool
T_25: (in __ror : ptr32)
  Class: Eq_25
  DataType: (ptr Eq_25)
  OrigDataType: (ptr (fn T_28 (T_26, T_27)))
T_26: (in ax_30 : word16)
  Class: Eq_26
  DataType: word16
  OrigDataType: word16
T_27: (in 0x01 : byte)
  Class: Eq_27
  DataType: byte
  OrigDataType: byte
T_28: (in __ror(ax_30, 0x01) : word16)
  Class: Eq_26
  DataType: word16
  OrigDataType: word16
T_29: (in (byte) ax_30 : byte)
  Class: Eq_15
  DataType: byte
  OrigDataType: byte
T_30: (in __outb : ptr32)
  Class: Eq_30
  DataType: (ptr Eq_30)
  OrigDataType: (ptr (fn T_32 (T_31, T_15)))
T_31: (in 0x03C9 : word16)
  Class: Eq_31
  DataType: word16
  OrigDataType: word16
T_32: (in __outb(0x03C9, al_295) : void)
  Class: Eq_32
  DataType: void
  OrigDataType: void
T_33: (in al_49 : byte)
  Class: Eq_33
  DataType: byte
  OrigDataType: byte
T_34: (in (byte) ax_14 : byte)
  Class: Eq_33
  DataType: byte
  OrigDataType: byte
T_35: (in 0x01 : byte)
  Class: Eq_35
  DataType: byte
  OrigDataType: byte
T_36: (in al_49 + 0x01 : byte)
  Class: Eq_36
  DataType: byte
  OrigDataType: byte
T_37: (in DPB(ax_14, al_49 + 0x01, 0, 8) : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_38: (in 0x01 : byte)
  Class: Eq_33
  DataType: byte
  OrigDataType: byte
T_39: (in al_49 != 0x01 : bool)
  Class: Eq_39
  DataType: bool
  OrigDataType: bool
T_40: (in __rol : ptr32)
  Class: Eq_40
  DataType: (ptr Eq_40)
  OrigDataType: (ptr (fn T_42 (T_26, T_41)))
T_41: (in 0x01 : byte)
  Class: Eq_41
  DataType: byte
  OrigDataType: byte
T_42: (in __rol(ax_30, 0x01) : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_43: (in (byte) __rol(ax_30, 0x01) : byte)
  Class: Eq_15
  DataType: byte
  OrigDataType: byte
T_44: (in __ror : ptr32)
  Class: Eq_44
  DataType: (ptr Eq_44)
  OrigDataType: (ptr (fn T_46 (T_11, T_45)))
T_45: (in 0x02 : byte)
  Class: Eq_45
  DataType: byte
  OrigDataType: byte
T_46: (in __ror(ax_14, 0x02) : word16)
  Class: Eq_26
  DataType: word16
  OrigDataType: word16
T_47: (in 0x0001 : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_48: (in ax_14 + 0x0001 : word16)
  Class: Eq_48
  DataType: word16
  OrigDataType: word16
T_49: (in (byte) (ax_14 + 0x0001) : byte)
  Class: Eq_20
  DataType: byte
  OrigDataType: byte
T_50: (in (byte) ax_30 : byte)
  Class: Eq_15
  DataType: byte
  OrigDataType: byte
T_51: (in al_20 & 0x0F : byte)
  Class: Eq_51
  DataType: byte
  OrigDataType: byte
T_52: (in 0x00 : byte)
  Class: Eq_51
  DataType: byte
  OrigDataType: byte
T_53: (in (al_20 & 0x0F) == 0x00 : bool)
  Class: Eq_53
  DataType: bool
  OrigDataType: bool
T_54: (in es_bp_61 : ptr32)
  Class: Eq_54
  DataType: Eq_54
  OrigDataType: ptr32
T_55: (in ds : (ptr Eq_55))
  Class: Eq_55
  DataType: (ptr Eq_55)
  OrigDataType: (ptr (segment (1F8 T_206 t01F8) (1FC T_67 t01FC) (1FE T_174 t01FE) (200 T_159 t0200) (204 T_222 t0204) (206 T_213 t0206) (208 T_208 t0208) (20A T_83 t020A)))
T_56: (in bx : (memptr (ptr Eq_55) Eq_54))
  Class: Eq_56
  DataType: (memptr (ptr Eq_55) Eq_54)
  OrigDataType: (memptr T_55 (struct (0 T_59 t0000)))
T_57: (in 0x0000 : word16)
  Class: Eq_57
  DataType: word16
  OrigDataType: word16
T_58: (in bx + 0x0000 : word16)
  Class: Eq_58
  DataType: word16
  OrigDataType: word16
T_59: (in Mem0[ds:bx + 0x0000:segptr32] : segptr32)
  Class: Eq_54
  DataType: Eq_54
  OrigDataType: segptr32
T_60: (in bp_63 : word16)
  Class: Eq_60
  DataType: word16
  OrigDataType: word16
T_61: (in (word16) es_bp_61 : word16)
  Class: Eq_60
  DataType: word16
  OrigDataType: word16
T_62: (in es_62 : (ptr Eq_62))
  Class: Eq_62
  DataType: (ptr Eq_62)
  OrigDataType: (ptr (segment (10 (arr T_295) a0010)))
T_63: (in SLICE(es_bp_61, selector, 16) : selector)
  Class: Eq_62
  DataType: (ptr Eq_62)
  OrigDataType: (ptr (segment))
T_64: (in bp_147 : Eq_64)
  Class: Eq_64
  DataType: Eq_64
  OrigDataType: (memptr T_115 (struct (0 T_117 t0000)))
T_65: (in 0x0001 : word16)
  Class: Eq_65
  DataType: word16
  OrigDataType: word16
T_66: (in bp_63 << 0x0001 : word16)
  Class: Eq_64
  DataType: Eq_64
  OrigDataType: ui16
T_67: (in si_103 : (memptr (ptr Eq_55) bcu8))
  Class: Eq_67
  DataType: (memptr (ptr Eq_55) bcu8)
  OrigDataType: (memptr T_132 (struct 0001 (0 T_131 t0000)))
T_68: (in 0x0001 : word16)
  Class: Eq_68
  DataType: word16
  OrigDataType: word16
T_69: (in si_103 - 0x0001 : word16)
  Class: Eq_67
  DataType: (memptr (ptr Eq_55) bcu8)
  OrigDataType: word16
T_70: (in 0x0000 : word16)
  Class: Eq_67
  DataType: (memptr (ptr Eq_55) bcu8)
  OrigDataType: word16
T_71: (in si_103 != &Eq_55::b0000 : bool)
  Class: Eq_71
  DataType: bool
  OrigDataType: bool
T_72: (in di_264 : (memptr (ptr Eq_55) Eq_72))
  Class: Eq_72
  DataType: (memptr (ptr Eq_55) Eq_72)
  OrigDataType: (memptr T_55 (struct (0 T_89 t0000) (2 T_96 t0002) (4 T_100 t0004) (8 T_114 t0008)))
T_73: (in 0x0004 : word16)
  Class: Eq_73
  DataType: word16
  OrigDataType: word16
T_74: (in si_103 << 0x0004 : word16)
  Class: Eq_74
  DataType: ui16
  OrigDataType: ui16
T_75: (in 0x01FC : word16)
  Class: Eq_75
  DataType: (memptr (ptr Eq_55) (memptr (ptr Eq_55) bcu8))
  OrigDataType: (memptr T_55 (struct (0 T_76 t0000)))
T_76: (in Mem0[ds:0x01FC:word16] : word16)
  Class: Eq_67
  DataType: (memptr (ptr Eq_55) bcu8)
  OrigDataType: word16
T_77: (in (si_103 << 0x0004) + ds->ptr01FC : word16)
  Class: Eq_72
  DataType: (memptr (ptr Eq_55) Eq_72)
  OrigDataType: word16
T_78: (in eax_267 : word32)
  Class: Eq_78
  DataType: word32
  OrigDataType: word32
T_79: (in __rdtsc : ptr32)
  Class: Eq_79
  DataType: (ptr Eq_79)
  OrigDataType: (ptr (fn T_80 ()))
T_80: (in __rdtsc() : word64)
  Class: Eq_80
  DataType: word64
  OrigDataType: word64
T_81: (in (word32) __rdtsc() : word32)
  Class: Eq_81
  DataType: word32
  OrigDataType: word32
T_82: (in 0x020A : word16)
  Class: Eq_82
  DataType: (memptr (ptr Eq_55) word32)
  OrigDataType: (memptr T_55 (struct (0 T_83 t0000)))
T_83: (in Mem0[ds:0x020A:word32] : word32)
  Class: Eq_83
  DataType: word32
  OrigDataType: word32
T_84: (in (word32) __rdtsc() ^ ds->dw020A : word32)
  Class: Eq_78
  DataType: word32
  OrigDataType: word32
T_85: (in (byte) eax_267 : byte)
  Class: Eq_85
  DataType: byte
  OrigDataType: byte
T_86: (in (int16) (byte) eax_267 : int16)
  Class: Eq_86
  DataType: int16
  OrigDataType: int16
T_87: (in 0x0000 : word16)
  Class: Eq_87
  DataType: word16
  OrigDataType: word16
T_88: (in di_264 + 0x0000 : word16)
  Class: Eq_88
  DataType: word16
  OrigDataType: word16
T_89: (in Mem273[ds:di_264 + 0x0000:word16] : word16)
  Class: Eq_86
  DataType: int16
  OrigDataType: word16
T_90: (in ax_278 : int16)
  Class: Eq_90
  DataType: int16
  OrigDataType: word16
T_91: (in (word16) eax_267 : word16)
  Class: Eq_91
  DataType: word16
  OrigDataType: word16
T_92: (in SLICE((word16) eax_267, byte, 8) : byte)
  Class: Eq_92
  DataType: byte
  OrigDataType: byte
T_93: (in (int16) SLICE((word16) eax_267, byte, 8) : int16)
  Class: Eq_90
  DataType: int16
  OrigDataType: int16
T_94: (in 0x0002 : word16)
  Class: Eq_94
  DataType: word16
  OrigDataType: word16
T_95: (in di_264 + 0x0002 : word16)
  Class: Eq_95
  DataType: word16
  OrigDataType: word16
T_96: (in Mem280[ds:di_264 + 0x0002:word16] : word16)
  Class: Eq_90
  DataType: int16
  OrigDataType: word16
T_97: (in 0x43800000 : word32)
  Class: Eq_97
  DataType: word32
  OrigDataType: word32
T_98: (in 0x0004 : word16)
  Class: Eq_98
  DataType: word16
  OrigDataType: word16
T_99: (in di_264 + 0x0004 : word16)
  Class: Eq_99
  DataType: word16
  OrigDataType: word16
T_100: (in Mem281[ds:di_264 + 0x0004:word32] : word32)
  Class: Eq_97
  DataType: word32
  OrigDataType: word32
T_101: (in ax_284 : word16)
  Class: Eq_101
  DataType: word16
  OrigDataType: word16
T_102: (in 0x00 : byte)
  Class: Eq_102
  DataType: byte
  OrigDataType: byte
T_103: (in DPB(ax_278, 0x00, 8, 8) : word16)
  Class: Eq_101
  DataType: word16
  OrigDataType: word16
T_104: (in eax_286 : word32)
  Class: Eq_104
  DataType: word32
  OrigDataType: word32
T_105: (in __bswap : ptr32)
  Class: Eq_105
  DataType: (ptr Eq_105)
  OrigDataType: (ptr (fn T_107 (T_106)))
T_106: (in DPB(eax_267, ax_278, 0, 16) : word32)
  Class: Eq_106
  DataType: word32
  OrigDataType: word32
T_107: (in __bswap(DPB(eax_267, ax_278, 0, 16)) : word32)
  Class: Eq_107
  DataType: word32
  OrigDataType: word32
T_108: (in 0x0001 : word16)
  Class: Eq_108
  DataType: word16
  OrigDataType: word16
T_109: (in ax_284 + 0x0001 : word16)
  Class: Eq_109
  DataType: word16
  OrigDataType: word16
T_110: (in DPB(__bswap(DPB(eax_267, ax_278, 0, 16)), ax_284 + 0x0001, 0, 16) : word32)
  Class: Eq_104
  DataType: word32
  OrigDataType: word32
T_111: (in ax_284 + 0x0001 : word16)
  Class: Eq_111
  DataType: word16
  OrigDataType: word16
T_112: (in 0x0008 : word16)
  Class: Eq_112
  DataType: word16
  OrigDataType: word16
T_113: (in di_264 + 0x0008 : word16)
  Class: Eq_113
  DataType: word16
  OrigDataType: word16
T_114: (in Mem287[ds:di_264 + 0x0008:word16] : word16)
  Class: Eq_111
  DataType: word16
  OrigDataType: word16
T_115: (in ss : selector)
  Class: Eq_115
  DataType: (ptr Eq_115)
  OrigDataType: (ptr (segment (204 (arr T_293 2) a0204)))
T_116: (in bp_147 + si_103 : word16)
  Class: Eq_116
  DataType: word16
  OrigDataType: word16
T_117: (in Mem287[ss:bp_147 + si_103:byte] : byte)
  Class: Eq_117
  DataType: byte
  OrigDataType: byte
T_118: (in 0x01 : byte)
  Class: Eq_118
  DataType: byte
  OrigDataType: byte
T_119: (in Mem287[ss:bp_147 + si_103:byte] + 0x01 : byte)
  Class: Eq_117
  DataType: byte
  OrigDataType: byte
T_120: (in bp_147 + si_103 : word16)
  Class: Eq_120
  DataType: word16
  OrigDataType: word16
T_121: (in Mem289[ss:bp_147 + si_103:byte] : byte)
  Class: Eq_117
  DataType: byte
  OrigDataType: byte
T_122: (in 0x020A : word16)
  Class: Eq_122
  DataType: (memptr (ptr Eq_55) word32)
  OrigDataType: (memptr T_55 (struct (0 T_123 t0000)))
T_123: (in Mem289[ds:0x020A:word32] : word32)
  Class: Eq_83
  DataType: word32
  OrigDataType: word32
T_124: (in ds->dw020A + eax_286 : word32)
  Class: Eq_83
  DataType: word32
  OrigDataType: word32
T_125: (in 0x020A : word16)
  Class: Eq_125
  DataType: (memptr (ptr Eq_55) word32)
  OrigDataType: (memptr T_55 (struct (0 T_126 t0000)))
T_126: (in Mem291[ds:0x020A:word32] : word32)
  Class: Eq_83
  DataType: word32
  OrigDataType: word32
T_127: (in bp_147 + si_103 : word16)
  Class: Eq_127
  DataType: word16
  OrigDataType: word16
T_128: (in Mem0[ss:bp_147 + si_103:byte] : byte)
  Class: Eq_117
  DataType: byte
  OrigDataType: byte
T_129: (in cl : byte)
  Class: Eq_117
  DataType: byte
  OrigDataType: byte
T_130: (in Mem0[ss:bp_147 + si_103:byte] != cl : bool)
  Class: Eq_130
  DataType: bool
  OrigDataType: bool
T_131: (in v29_133 : bcu8)
  Class: Eq_131
  DataType: bcu8
  OrigDataType: bcu8
T_132: (in bp_63 << 0x0001 : word16)
  Class: Eq_55
  DataType: (ptr Eq_55)
  OrigDataType: ui16
T_133: (in 0x0000 : word16)
  Class: Eq_133
  DataType: word16
  OrigDataType: word16
T_134: (in si_103 + 0x0000 : word16)
  Class: Eq_134
  DataType: word16
  OrigDataType: word16
T_135: (in Mem0[bp_63 << 0x0001:si_103 + 0x0000:byte] : byte)
  Class: Eq_131
  DataType: bcu8
  OrigDataType: byte
T_136: (in 0x11 : byte)
  Class: Eq_136
  DataType: byte
  OrigDataType: byte
T_137: (in (bp_63 << 0x0001)->*si_103 - 0x11 : byte)
  Class: Eq_131
  DataType: bcu8
  OrigDataType: byte
T_138: (in bp_63 << 0x0001 : word16)
  Class: Eq_55
  DataType: (ptr Eq_55)
  OrigDataType: ui16
T_139: (in 0x0000 : word16)
  Class: Eq_139
  DataType: word16
  OrigDataType: word16
T_140: (in si_103 + 0x0000 : word16)
  Class: Eq_140
  DataType: word16
  OrigDataType: word16
T_141: (in Mem134[bp_63 << 0x0001:si_103 + 0x0000:byte] : byte)
  Class: Eq_131
  DataType: bcu8
  OrigDataType: byte
T_142: (in 0x00 : byte)
  Class: Eq_131
  DataType: bcu8
  OrigDataType: bcu8
T_143: (in v29_133 >=u 0x00 : bool)
  Class: Eq_143
  DataType: bool
  OrigDataType: bool
T_144: (in cx : word16)
  Class: Eq_144
  DataType: word16
  OrigDataType: word16
T_145: (in 0x0001 : word16)
  Class: Eq_145
  DataType: word16
  OrigDataType: word16
T_146: (in cx - 0x0001 : word16)
  Class: Eq_144
  DataType: word16
  OrigDataType: word16
T_147: (in 0x0001 : word16)
  Class: Eq_147
  DataType: word16
  OrigDataType: word16
T_148: (in si_103 + 0x0001 : word16)
  Class: Eq_67
  DataType: (memptr (ptr Eq_55) bcu8)
  OrigDataType: word16
T_149: (in cl_140 : byte)
  Class: Eq_117
  DataType: byte
  OrigDataType: byte
T_150: (in (byte) cx : byte)
  Class: Eq_117
  DataType: byte
  OrigDataType: byte
T_151: (in 0x0000 : word16)
  Class: Eq_144
  DataType: word16
  OrigDataType: word16
T_152: (in cx != 0x0000 : bool)
  Class: Eq_152
  DataType: bool
  OrigDataType: bool
T_153: (in 0x01 : byte)
  Class: Eq_131
  DataType: bcu8
  OrigDataType: byte
T_154: (in bp_63 << 0x0001 : word16)
  Class: Eq_55
  DataType: (ptr Eq_55)
  OrigDataType: ui16
T_155: (in 0x0000 : word16)
  Class: Eq_155
  DataType: word16
  OrigDataType: word16
T_156: (in si_103 + 0x0000 : word16)
  Class: Eq_156
  DataType: word16
  OrigDataType: word16
T_157: (in Mem261[bp_63 << 0x0001:si_103 + 0x0000:byte] : byte)
  Class: Eq_131
  DataType: bcu8
  OrigDataType: byte
T_158: (in 0x0200 : word16)
  Class: Eq_158
  DataType: (memptr (ptr Eq_55) int32)
  OrigDataType: (memptr T_55 (struct (0 T_159 t0000)))
T_159: (in Mem134[ds:0x0200:word32] : word32)
  Class: Eq_159
  DataType: int32
  OrigDataType: word32
T_160: (in 0x00000001 : word32)
  Class: Eq_160
  DataType: word32
  OrigDataType: word32
T_161: (in ds->dw0200 + 0x00000001 : word32)
  Class: Eq_159
  DataType: int32
  OrigDataType: word32
T_162: (in 0x0200 : word16)
  Class: Eq_162
  DataType: (memptr (ptr Eq_55) int32)
  OrigDataType: (memptr T_55 (struct (0 T_163 t0000)))
T_163: (in Mem142[ds:0x0200:word32] : word32)
  Class: Eq_159
  DataType: int32
  OrigDataType: word32
T_164: (in si_144 : (memptr (ptr Eq_55) bcu8))
  Class: Eq_67
  DataType: (memptr (ptr Eq_55) bcu8)
  OrigDataType: (memptr T_55 (struct 0001 (0 T_278 t0000)))
T_165: (in 0x01FC : word16)
  Class: Eq_165
  DataType: (memptr (ptr Eq_55) (memptr (ptr Eq_55) bcu8))
  OrigDataType: (memptr T_55 (struct (0 T_166 t0000)))
T_166: (in Mem142[ds:0x01FC:word16] : word16)
  Class: Eq_67
  DataType: (memptr (ptr Eq_55) bcu8)
  OrigDataType: word16
T_167: (in rLoc2_180 : real64)
  Class: Eq_167
  DataType: real64
  OrigDataType: real64
T_168: (in sin : ptr32)
  Class: Eq_168
  DataType: (ptr Eq_168)
  OrigDataType: (ptr (fn T_170 (T_169)))
T_169: (in rLoc3_182 : Eq_169)
  Class: Eq_169
  DataType: Eq_169
  OrigDataType: real64
T_170: (in sin(rLoc3_182) : real64)
  Class: Eq_170
  DataType: real64
  OrigDataType: real64
T_171: (in 1 : real64)
  Class: Eq_171
  DataType: real64
  OrigDataType: real64
T_172: (in sin(rLoc3_182) + 1 : real64)
  Class: Eq_172
  DataType: Eq_172
  OrigDataType: (union (real16 u0) (real64 u1))
T_173: (in 0x01FE : word16)
  Class: Eq_173
  DataType: (memptr (ptr Eq_55) word16)
  OrigDataType: (memptr T_55 (struct (0 T_174 t0000)))
T_174: (in Mem160[ds:0x01FE:word16] : word16)
  Class: Eq_174
  DataType: word16
  OrigDataType: word16
T_175: (in (real64) ds->w01FE : real64)
  Class: Eq_175
  DataType: Eq_175
  OrigDataType: (union (real16 u0) (real64 u1))
T_176: (in (sin(rLoc3_182) + 1) * (real64) ds->w01FE : word16)
  Class: Eq_176
  DataType: Eq_176
  OrigDataType: (union (real16 u0) (real64 u1))
T_177: (in rLoc2_180 + (sin(rLoc3_182) + 1) * (real64) ds->w01FE : real64)
  Class: Eq_177
  DataType: real64
  OrigDataType: real64
T_178: (in (int16) (rLoc2_180 + (sin(rLoc3_182) + 1) * (real64) ds->w01FE) : int16)
  Class: Eq_178
  DataType: int16
  OrigDataType: int16
T_179: (in bp_163 : (memptr (ptr Eq_115) int16))
  Class: Eq_179
  DataType: (memptr (ptr Eq_115) int16)
  OrigDataType: (memptr T_115 (struct (0 T_194 t0000)))
T_180: (in 0x0000 : word16)
  Class: Eq_180
  DataType: (memptr (ptr Eq_115) Eq_180)
  OrigDataType: (memptr T_115 (struct 0001 (0 T_182 t0000)))
T_181: (in bp_163 + 0x0000 : word16)
  Class: Eq_181
  DataType: word16
  OrigDataType: word16
T_182: (in Mem189[ss:bp_163 + 0x0000:int16] : int16)
  Class: Eq_178
  DataType: int16
  OrigDataType: int16
T_183: (in bp_190 : int16)
  Class: Eq_183
  DataType: int16
  OrigDataType: int16
T_184: (in 0x0001 : word16)
  Class: Eq_184
  DataType: word16
  OrigDataType: word16
T_185: (in bp_163 + 0x0001 : word16)
  Class: Eq_183
  DataType: int16
  OrigDataType: word16
T_186: (in 0x0001 : word16)
  Class: Eq_186
  DataType: word16
  OrigDataType: word16
T_187: (in bp_190 + 0x0001 : word16)
  Class: Eq_179
  DataType: (memptr (ptr Eq_115) int16)
  OrigDataType: word16
T_188: (in C_168 : bool)
  Class: Eq_188
  DataType: bool
  OrigDataType: bool
T_189: (in !C_168 : bool)
  Class: Eq_188
  DataType: bool
  OrigDataType: bool
T_190: (in cos : ptr32)
  Class: Eq_190
  DataType: (ptr Eq_190)
  OrigDataType: (ptr (fn T_191 (T_169)))
T_191: (in cos(rLoc3_182) : real64)
  Class: Eq_169
  DataType: Eq_169
  OrigDataType: real64
T_192: (in di_155 : (memptr (ptr Eq_55) Eq_192))
  Class: Eq_192
  DataType: (memptr (ptr Eq_55) Eq_192)
  OrigDataType: (memptr T_55 (struct (4 T_200 t0004) (8 T_254 t0008)))
T_193: (in bp_163 + di_155 : word16)
  Class: Eq_193
  DataType: word16
  OrigDataType: word16
T_194: (in Mem160[ss:bp_163 + di_155:int16] : int16)
  Class: Eq_194
  DataType: int16
  OrigDataType: int16
T_195: (in (real64) Mem160[ss:bp_163 + di_155:int16] : real64)
  Class: Eq_195
  DataType: Eq_195
  OrigDataType: (union (real16 u0) (real64 u1))
T_196: (in 0x01FC : word16)
  Class: Eq_196
  DataType: (memptr (ptr Eq_55) (memptr (ptr Eq_55) bcu8))
  OrigDataType: (memptr T_55 (struct (0 T_197 t0000)))
T_197: (in Mem160[ds:0x01FC:word16] : word16)
  Class: Eq_67
  DataType: (memptr (ptr Eq_55) bcu8)
  OrigDataType: word16
T_198: (in (real64) Mem160[ds:0x01FC:word16] : real64)
  Class: Eq_198
  DataType: Eq_198
  OrigDataType: (union (real16 u0) (real64 u1))
T_199: (in (real64) Mem160[ss:bp_163 + di_155:int16] * (real64) Mem160[ds:0x01FC:word16] : word16)
  Class: Eq_199
  DataType: Eq_199
  OrigDataType: (union (real16 u0) (real64 u1))
T_200: (in rLoc1_159 : Eq_200)
  Class: Eq_200
  DataType: Eq_200
  OrigDataType: real64
T_201: (in (real64) Mem160[ss:bp_163 + di_155:int16] * (real64) Mem160[ds:0x01FC:word16] / rLoc1_159 : real64)
  Class: Eq_167
  DataType: real64
  OrigDataType: real64
T_202: (in 0x0200 : word16)
  Class: Eq_202
  DataType: (memptr (ptr Eq_55) int32)
  OrigDataType: (memptr T_55 (struct (0 T_203 t0000)))
T_203: (in Mem160[ds:0x0200:int32] : int32)
  Class: Eq_159
  DataType: int32
  OrigDataType: int32
T_204: (in (real64) ds->dw0200 : real64)
  Class: Eq_204
  DataType: Eq_204
  OrigDataType: (union (real16 u0) (real64 u1))
T_205: (in 0x01F8 : word16)
  Class: Eq_205
  DataType: (memptr (ptr Eq_55) Eq_206)
  OrigDataType: (memptr T_55 (struct (0 T_206 t0000)))
T_206: (in Mem160[ds:0x01F8:real32] : real32)
  Class: Eq_206
  DataType: Eq_206
  OrigDataType: (union (real16 u0) (real32 u1))
T_207: (in (real64) ds->dw0200 * ds->t01F8 : word16)
  Class: Eq_169
  DataType: Eq_169
  OrigDataType: real16
T_208: (in (int16) rLoc1_159 : int16)
  Class: Eq_208
  DataType: Eq_208
  OrigDataType: int16
T_209: (in 0x0208 : word16)
  Class: Eq_209
  DataType: (memptr (ptr Eq_55) Eq_208)
  OrigDataType: (memptr T_55 (struct (0 T_210 t0000)))
T_210: (in Mem201[ds:0x0208:int16] : int16)
  Class: Eq_208
  DataType: Eq_208
  OrigDataType: int16
T_211: (in di_202 : uint16)
  Class: Eq_211
  DataType: uint16
  OrigDataType: uint16
T_212: (in 0x0206 : word16)
  Class: Eq_212
  DataType: (memptr (ptr Eq_55) uint16)
  OrigDataType: (memptr T_55 (struct (0 T_213 t0000)))
T_213: (in Mem201[ds:0x0206:word16] : word16)
  Class: Eq_211
  DataType: uint16
  OrigDataType: word16
T_214: (in 0xFDFD : word16)
  Class: Eq_183
  DataType: int16
  OrigDataType: int16
T_215: (in bp_190 < 0xFDFD : bool)
  Class: Eq_215
  DataType: bool
  OrigDataType: bool
T_216: (in bp_147 + si_144 : word16)
  Class: Eq_216
  DataType: word16
  OrigDataType: word16
T_217: (in Mem240[ss:bp_147 + si_144:byte] : byte)
  Class: Eq_117
  DataType: byte
  OrigDataType: byte
T_218: (in 0x00C8 : word16)
  Class: Eq_211
  DataType: uint16
  OrigDataType: cups16
T_219: (in di_202 >=u 0x00C8 : bool)
  Class: Eq_219
  DataType: bool
  OrigDataType: bool
T_220: (in dx_244 : Eq_220)
  Class: Eq_220
  DataType: Eq_220
  OrigDataType: (union (int16 u0) (cups16 u1))
T_221: (in 0x0204 : word16)
  Class: Eq_221
  DataType: (memptr (ptr Eq_55) Eq_220)
  OrigDataType: (memptr T_55 (struct (0 T_222 t0000)))
T_222: (in Mem201[ds:0x0204:word16] : word16)
  Class: Eq_220
  DataType: Eq_220
  OrigDataType: word16
T_223: (in 0x003C : word16)
  Class: Eq_220
  DataType: int16
  OrigDataType: int16
T_224: (in dx_244 < 0x003C : bool)
  Class: Eq_224
  DataType: bool
  OrigDataType: bool
T_225: (in 0xFEFC : word16)
  Class: Eq_220
  DataType: cups16
  OrigDataType: cups16
T_226: (in dx_244 >=u 0xFEFC : bool)
  Class: Eq_226
  DataType: bool
  OrigDataType: bool
T_227: (in 0x00 : byte)
  Class: Eq_227
  DataType: byte
  OrigDataType: byte
T_228: (in 0x0208 : word16)
  Class: Eq_228
  DataType: (memptr (ptr Eq_55) Eq_208)
  OrigDataType: (memptr T_55 (struct (0 T_229 t0000)))
T_229: (in Mem201[ds:0x0208:byte] : byte)
  Class: Eq_208
  DataType: Eq_208
  OrigDataType: byte
T_230: (in 0x00 - ds->t0208 : byte)
  Class: Eq_230
  DataType: byte
  OrigDataType: byte
T_231: (in 0x0F : byte)
  Class: Eq_231
  DataType: byte
  OrigDataType: byte
T_232: (in 0x00 - ds->t0208 | 0x0F : byte)
  Class: Eq_232
  DataType: byte
  OrigDataType: byte
T_233: (in bp_63 << 0x0001 : word16)
  Class: Eq_233
  DataType: Eq_233
  OrigDataType: (union (ui16 u0) ((ptr (struct (0 (arr T_294) a0000))) u1))
T_234: (in 0x003C : word16)
  Class: Eq_234
  DataType: word16
  OrigDataType: word16
T_235: (in dx_244 + 0x003C : word16)
  Class: Eq_235
  DataType: word16
  OrigDataType: word16
T_236: (in SEQ(bp_63 << 0x0001, dx_244 + 0x003C) : ptr32)
  Class: Eq_236
  DataType: ptr32
  OrigDataType: ptr32
T_237: (in 0x0140 : word16)
  Class: Eq_237
  DataType: ui16
  OrigDataType: ui16
T_238: (in di_202 * 0x0140 : word16)
  Class: Eq_238
  DataType: ui16
  OrigDataType: ui16
T_239: (in SEQ(bp_63 << 0x0001, dx_244 + 0x003C)[di_202 * 0x0140] : byte)
  Class: Eq_232
  DataType: byte
  OrigDataType: byte
T_240: (in 0x0001 : word16)
  Class: Eq_240
  DataType: word16
  OrigDataType: word16
T_241: (in si_144 - 0x0001 : word16)
  Class: Eq_67
  DataType: (memptr (ptr Eq_55) bcu8)
  OrigDataType: word16
T_242: (in 0x0000 : word16)
  Class: Eq_67
  DataType: (memptr (ptr Eq_55) bcu8)
  OrigDataType: word16
T_243: (in si_144 != &Eq_55::b0000 : bool)
  Class: Eq_243
  DataType: bool
  OrigDataType: bool
T_244: (in 0x0004 : word16)
  Class: Eq_244
  DataType: word16
  OrigDataType: word16
T_245: (in si_144 << 0x0004 : word16)
  Class: Eq_245
  DataType: ui16
  OrigDataType: ui16
T_246: (in 0x01FC : word16)
  Class: Eq_246
  DataType: (memptr (ptr Eq_55) (memptr (ptr Eq_55) bcu8))
  OrigDataType: (memptr T_55 (struct (0 T_247 t0000)))
T_247: (in Mem142[ds:0x01FC:word16] : word16)
  Class: Eq_67
  DataType: (memptr (ptr Eq_55) bcu8)
  OrigDataType: word16
T_248: (in (si_144 << 0x0004) + ds->ptr01FC : word16)
  Class: Eq_192
  DataType: (memptr (ptr Eq_55) Eq_192)
  OrigDataType: word16
T_249: (in 0x0004 : word16)
  Class: Eq_249
  DataType: word16
  OrigDataType: word16
T_250: (in di_155 + 0x0004 : word16)
  Class: Eq_250
  DataType: word16
  OrigDataType: word16
T_251: (in Mem142[ds:di_155 + 0x0004:real32] : real32)
  Class: Eq_200
  DataType: Eq_200
  OrigDataType: real32
T_252: (in 0x0008 : word16)
  Class: Eq_252
  DataType: word16
  OrigDataType: word16
T_253: (in di_155 + 0x0008 : word16)
  Class: Eq_253
  DataType: word16
  OrigDataType: word16
T_254: (in Mem142[ds:di_155 + 0x0008:int16] : int16)
  Class: Eq_254
  DataType: int16
  OrigDataType: int16
T_255: (in (real64) (ds->*di_155).w0008 : real64)
  Class: Eq_255
  DataType: Eq_255
  OrigDataType: (union (real16 u0) (real64 u1))
T_256: (in 0x01F8 : word16)
  Class: Eq_256
  DataType: (memptr (ptr Eq_55) Eq_206)
  OrigDataType: (memptr T_55 (struct (0 T_257 t0000)))
T_257: (in Mem142[ds:0x01F8:real32] : real32)
  Class: Eq_206
  DataType: Eq_206
  OrigDataType: (union (real16 u0) (real32 u1))
T_258: (in (real64) (ds->*di_155).w0008 * ds->t01F8 : word16)
  Class: Eq_258
  DataType: real16
  OrigDataType: real16
T_259: (in (ds->*di_155).t0004 - (real64) (ds->*di_155).w0008 * ds->t01F8 : real64)
  Class: Eq_200
  DataType: Eq_200
  OrigDataType: real64
T_260: (in 0x0004 : word16)
  Class: Eq_260
  DataType: word16
  OrigDataType: word16
T_261: (in di_155 + 0x0004 : word16)
  Class: Eq_261
  DataType: word16
  OrigDataType: word16
T_262: (in Mem160[ds:di_155 + 0x0004:real32] : real32)
  Class: Eq_200
  DataType: Eq_200
  OrigDataType: real32
T_263: (in 0x0204 : word16)
  Class: Eq_179
  DataType: (memptr (ptr Eq_115) int16)
  OrigDataType: word16
T_264: (in false : bool)
  Class: Eq_188
  DataType: bool
  OrigDataType: bool
T_265: (in 0x0001 : word16)
  Class: Eq_265
  DataType: word16
  OrigDataType: word16
T_266: (in cx - 0x0001 : word16)
  Class: Eq_144
  DataType: word16
  OrigDataType: word16
T_267: (in cx - 0x0001 : word16)
  Class: Eq_267
  DataType: word16
  OrigDataType: word16
T_268: (in (byte) (cx - 0x0001) : byte)
  Class: Eq_117
  DataType: byte
  OrigDataType: byte
T_269: (in di_217 : (memptr (ptr Eq_62) bcu8))
  Class: Eq_269
  DataType: (memptr (ptr Eq_62) bcu8)
  OrigDataType: (memptr T_62 (struct 0001 (0 T_281 t0000)))
T_270: (in 0x0010 : word16)
  Class: Eq_269
  DataType: (memptr (ptr Eq_62) bcu8)
  OrigDataType: word16
T_271: (in __inb : ptr32)
  Class: Eq_271
  DataType: (ptr Eq_271)
  OrigDataType: (ptr (fn T_273 (T_272)))
T_272: (in 0x60 : byte)
  Class: Eq_272
  DataType: byte
  OrigDataType: byte
T_273: (in __inb(0x60) : byte)
  Class: Eq_273
  DataType: byte
  OrigDataType: byte
T_274: (in 0x01 : byte)
  Class: Eq_273
  DataType: byte
  OrigDataType: byte
T_275: (in __inb(0x60) != 0x01 : bool)
  Class: Eq_275
  DataType: bool
  OrigDataType: bool
T_276: (in 0x0000 : word16)
  Class: Eq_276
  DataType: word16
  OrigDataType: word16
T_277: (in si_144 + 0x0000 : word16)
  Class: Eq_277
  DataType: word16
  OrigDataType: word16
T_278: (in Mem201[ds:si_144 + 0x0000:byte] : byte)
  Class: Eq_131
  DataType: bcu8
  OrigDataType: byte
T_279: (in 0x0000 : word16)
  Class: Eq_279
  DataType: word16
  OrigDataType: word16
T_280: (in di_217 + 0x0000 : word16)
  Class: Eq_280
  DataType: word16
  OrigDataType: word16
T_281: (in Mem223[es_62:di_217 + 0x0000:byte] : byte)
  Class: Eq_131
  DataType: bcu8
  OrigDataType: byte
T_282: (in 0x0001 : word16)
  Class: Eq_282
  DataType: word16
  OrigDataType: word16
T_283: (in cx - 0x0001 : word16)
  Class: Eq_144
  DataType: word16
  OrigDataType: word16
T_284: (in 0x0001 : word16)
  Class: Eq_284
  DataType: word16
  OrigDataType: word16
T_285: (in si_144 + 0x0001 : word16)
  Class: Eq_67
  DataType: (memptr (ptr Eq_55) bcu8)
  OrigDataType: word16
T_286: (in 0x0001 : word16)
  Class: Eq_286
  DataType: word16
  OrigDataType: word16
T_287: (in di_217 + 0x0001 : word16)
  Class: Eq_269
  DataType: (memptr (ptr Eq_62) bcu8)
  OrigDataType: word16
T_288: (in (byte) cx : byte)
  Class: Eq_117
  DataType: byte
  OrigDataType: byte
T_289: (in 0x0000 : word16)
  Class: Eq_144
  DataType: word16
  OrigDataType: word16
T_290: (in cx == 0x0000 : bool)
  Class: Eq_290
  DataType: bool
  OrigDataType: bool
T_291: (in 0x01FC : word16)
  Class: Eq_291
  DataType: (memptr (ptr Eq_55) (memptr (ptr Eq_55) bcu8))
  OrigDataType: (memptr T_55 (struct (0 T_292 t0000)))
T_292: (in Mem0[ds:0x01FC:word16] : word16)
  Class: Eq_67
  DataType: (memptr (ptr Eq_55) bcu8)
  OrigDataType: word16
T_293:
  Class: Eq_293
  DataType: Eq_293
  OrigDataType: (struct 0001 (0 T_182 t0000))
T_294:
  Class: Eq_294
  DataType: Eq_294
  OrigDataType: (struct 0140 (0 T_239 t0000))
T_295:
  Class: Eq_295
  DataType: bcu8
  OrigDataType: (struct 0001 (0 T_281 t0000))
*/
typedef struct Globals {
} Eq_1;

typedef void (Eq_2)(byte);

typedef void (Eq_7)(word16, byte);

typedef void (Eq_13)(word16, byte);

typedef void (Eq_17)(word16, byte);

typedef word16 (Eq_25)(word16, byte);

typedef void (Eq_30)(word16, byte);

typedef word16 (Eq_40)(word16, byte);

typedef word16 (Eq_44)(word16, byte);

typedef union Eq_54 {
	ptr32 u0;
	segptr32 u1;
} Eq_54;

typedef Eq_206 Eq_55Eq_220 Eq_55Eq_208 Eq_55struct Eq_55 {
	bcu8 b0000;	// 0
	Eq_206 t01F8;	// 1F8
	bcu8 Eq_55::*ptr01FC;	// 1FC
	word16 w01FE;	// 1FE
	int32 dw0200;	// 200
	Eq_220 t0204;	// 204
	uint16 w0206;	// 206
	Eq_208 t0208;	// 208
	word32 dw020A;	// 20A
} Eq_55;

typedef  Eq_62[]struct Eq_62 {
	bcu8 a0010[];	// 10
} Eq_62;

typedef union Eq_64 {
	ui16 u0;
	byte Eq_115::* u1;
} Eq_64;

typedef struct Eq_72 {
	int16 w0000;	// 0
	int16 w0002;	// 2
	word32 dw0004;	// 4
	word16 w0008;	// 8
} Eq_72;

typedef word64 (Eq_79)();

typedef word32 (Eq_105)(word32);

typedef Eq_180 Eq_115Eq_293 Eq_115[2]struct Eq_115 {
	Eq_180 t0000;	// 0
	Eq_293 a0204[2];	// 204
} Eq_115;

typedef real64 (Eq_168)(Eq_169);

typedef union Eq_169 {
	real16 u0;
	real64 u1;
} Eq_169;

typedef union Eq_172 {
	real16 u0;
	real64 u1;
} Eq_172;

typedef union Eq_175 {
	real16 u0;
	real64 u1;
} Eq_175;

typedef union Eq_176 {
	real16 u0;
	real64 u1;
} Eq_176;

typedef struct Eq_180 {	// size: 1 1
	int16 w0000;	// 0
} Eq_180;

typedef Eq_169 (Eq_190)(Eq_169);

typedef Eq_200 Eq_192struct Eq_192 {
	Eq_200 t0004;	// 4
	int16 w0008;	// 8
} Eq_192;

typedef union Eq_195 {
	real16 u0;
	real64 u1;
} Eq_195;

typedef union Eq_198 {
	real16 u0;
	real64 u1;
} Eq_198;

typedef union Eq_199 {
	real16 u0;
	real64 u1;
} Eq_199;

typedef union Eq_200 {
	real32 u0;
	real64 u1;
} Eq_200;

typedef union Eq_204 {
	real16 u0;
	real64 u1;
} Eq_204;

typedef union Eq_206 {
	real16 u0;
	real32 u1;
} Eq_206;

typedef union Eq_208 {
	int16 u0;
	byte u1;
} Eq_208;

typedef union Eq_220 {
	int16 u0;
	cups16 u1;
} Eq_220;

typedef union Eq_233 {
	ui16 u0;
	Eq_294 (* u1)[];
} Eq_233;

typedef union Eq_255 {
	real16 u0;
	real64 u1;
} Eq_255;

typedef byte (Eq_271)(byte);

typedef struct Eq_293 {	// size: 1 1
	int16 w0000;	// 0
} Eq_293;

typedef struct Eq_294 {	// size: 320 140
	byte b0000;	// 0
} Eq_294;

