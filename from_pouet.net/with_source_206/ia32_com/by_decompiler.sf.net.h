// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_206/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (union ((union (ptr16 u0) ((memptr Eq_4 (struct (0 Eq_4 t0000))) u1)) u0) (word16 u1) ((union (ptr16 u0) ((memptr Eq_4 (struct (0 word16 w0000))) u1)) u2))
	T_2 (in fp : ptr16)
	T_3 (in sp : word16)
	T_15 (in fp - 0x0002 : word16)
	T_24 (in fp - 0x0002 : word16)
	T_26 (in 0x00C8 : word16)
	T_92 (in 0x00C4 : word16)
	T_97 (in 0x00C6 : word16)
	T_167 (in sp - 0x0002 : word16)
	T_177 (in sp + 0x0002 : word16)
	T_264 (in sp + 0x0002 : word16)
	T_288 (in 0x00C6 : word16)
	T_292 (in 0x00C4 : word16)
	T_297 (in 0x00C6 : word16)
	T_302 (in 0x00C4 : word16)
	T_308 (in 0x00C6 : word16)
Eq_4: (union ((ptr (segment (B5 Eq_28 t00B5) (B6 Eq_28 t00B6) (B7 Eq_28 t00B7) (C4 Eq_4 t00C4) (C6 word16 w00C6) (1F5 Eq_28 t01F5) (1F7 Eq_28 t01F7) (335 Eq_28 t0335) (336 Eq_28 t0336) (337 Eq_28 t0337) (7DA0 byte b7DA0))) u0) ((memptr Eq_4 (struct (0 Eq_8 t0000))) u1))
	T_4 (in ds : selector)
	T_5 (in bx : word16)
	T_10 (in SLICE(es_bx, selector, 16) : selector)
	T_11 (in es : selector)
	T_16 (in cs : selector)
	T_17 (in wLoc02 : word16)
	T_18 (in ax : word16)
	T_20 (in ax + 0x1F90 : word16)
	T_25 (in ss : selector)
	T_27 (in 0x0013 : word16)
	T_94 (in Mem0[ss:0x00C4:word16] : word16)
	T_96 (in Mem0[ss:0x00C4:selector] : selector)
	T_117 (in DPB(ax, al, 0, 8) : word16)
	T_120 (in DPB(ax, al, 0, 8) : word16)
	T_122 (in bx + ax + C : word16)
	T_126 (in DPB(ax, al, 0, 8) : word16)
	T_128 (in bx + ax + C : word16)
	T_132 (in DPB(ax, al, 0, 8) : word16)
	T_134 (in bx + ax + C : word16)
	T_138 (in DPB(ax, al, 0, 8) : word16)
	T_140 (in bx + ax + C : word16)
	T_144 (in DPB(ax, al, 0, 8) : word16)
	T_146 (in bx + ax + C : word16)
	T_150 (in DPB(ax, al, 0, 8) : word16)
	T_152 (in bx + ax + C : word16)
	T_156 (in DPB(ax, al, 0, 8) : word16)
	T_158 (in bx + ax + C : word16)
	T_160 (in bx + 0x0004 : word16)
	T_162 (in bx >>u 0x0003 : word16)
	T_164 (in bx + 0x0002 : word16)
	T_174 (in Mem0[ss:sp + 0x0000:selector] : selector)
	T_202 (in DPB(ax, al, 0, 8) : word16)
	T_258 (in DPB(ax, ah, 8, 8) : word16)
	T_270 (in 0x0000 : word16)
	T_282 (in 0x4C00 : word16)
	T_294 (in Mem0[ss:0x00C4:word16] : word16)
	T_296 (in Mem0[ss:0x00C4:word16] : word16)
	T_299 (in ax + 0x0FF0 : word16)
	T_303 (in 0xA000 : word16)
	T_305 (in Mem0[ss:0x00C4:word16] : word16)
	T_307 (in Mem0[ss:0x00C4:selector] : selector)
Eq_8: (union (ptr32 u0) (segptr32 u1))
	T_8 (in Mem0[ds:bx + 0x0000:segptr32] : segptr32)
	T_9 (in es_bx : ptr32)
	T_175 (in SEQ(es, bx) : ptr32)
	T_301 (in SEQ(es, bx) : ptr32)
Eq_12: (fn void ())
	T_12 (in __cli : ptr32)
Eq_28: (union (uint8 u0) (uint16 u1) (word32 u2))
	T_28 (in (byte) ax : byte)
	T_29 (in al : byte)
	T_32 (in al : byte)
	T_34 (in 0xFF : byte)
	T_40 (in (byte) cx : byte)
	T_41 (in cl : byte)
	T_48 (in 0x00 : byte)
	T_54 (in al >>u 0x03 : word16)
	T_58 (in 0x00 : byte)
	T_70 (in (byte) cx : byte)
	T_77 (in Mem0[ds:si + 0x0000:word32] : word32)
	T_78 (in v19 : word32)
	T_82 (in Mem0[es:di + 0x0000:word32] : word32)
	T_89 (in (byte) cx : byte)
	T_101 (in bl : byte)
	T_104 (in Mem0[ds:si + 0x0000:byte] : byte)
	T_116 (in Mem0[es:0x00B6:byte] : byte)
	T_119 (in Mem0[es:0x01F5:byte] : byte)
	T_125 (in Mem0[es:0x01F7:byte] : byte)
	T_131 (in Mem0[es:0x0336:byte] : byte)
	T_137 (in Mem0[es:0x00B5:byte] : byte)
	T_143 (in Mem0[es:0x00B7:byte] : byte)
	T_149 (in Mem0[es:0x0335:byte] : byte)
	T_155 (in Mem0[es:0x0337:byte] : byte)
	T_183 (in (byte) cx : byte)
	T_187 (in Mem0[ds:si + 0x0000:word32] : word32)
	T_188 (in v21 : word32)
	T_191 (in Mem0[es:di + 0x0000:word32] : word32)
	T_198 (in (byte) cx : byte)
	T_201 (in 0x00 : byte)
	T_204 (in (byte) cx : byte)
	T_211 (in Mem0[es:di - 0x0740:byte] : byte)
	T_214 (in Mem0[es:di + 0xF780:byte] : byte)
	T_217 (in Mem0[es:di + 0x0000:byte] : byte)
	T_222 (in (byte) cx : byte)
	T_226 (in (byte) cx : byte)
	T_233 (in Mem0[es:di + 0x013F:byte] : byte)
	T_236 (in Mem0[es:di + 0x0000:byte] : byte)
	T_245 (in (byte) cx : byte)
	T_248 (in 0xC8 : byte)
	T_267 (in (byte) cx : byte)
	T_271 (in (byte) ax : byte)
	T_315 (in (byte) cx : byte)
Eq_30: (fn void (Eq_28))
	T_30 (in bios_video_set_mode : ptr32)
	T_31 (in signature of bios_video_set_mode : void)
	T_280 (in bios_video_set_mode : ptr32)
Eq_36: (struct (0 byte b0000))
	T_36 (in 0x7DA0 : word16)
Eq_44: (fn void (word16, Eq_28))
	T_44 (in __outb : ptr32)
Eq_49: (fn void (word16, byte))
	T_49 (in __outb : ptr32)
Eq_55: (fn void (word16, Eq_28))
	T_55 (in __outb : ptr32)
Eq_64: (fn void (word16, byte))
	T_64 (in __outb : ptr32)
Eq_74: (struct (0 Eq_28 t0000))
	T_74 (in si : word16)
	T_84 (in si + 0x0004 : word16)
	T_99 (in 0x01F6 : word16)
	T_106 (in si + 0x0001 : word16)
	T_184 (in 0x01F6 : word16)
	T_193 (in si + 0x0004 : word16)
	T_309 (in 0x0000 : word16)
Eq_79: (struct (FFFFF780 Eq_28 tFFFFF780) (FFFFF8C0 Eq_28 tFFFFF8C0) (0 Eq_28 t0000) (13F Eq_28 t013F))
	T_79 (in di : word16)
	T_86 (in di + 0x0004 : word16)
	T_100 (in 0x01F6 : word16)
	T_108 (in di + 0x0001 : word16)
	T_178 (in 0x0000 : word16)
	T_195 (in di + 0x0004 : word16)
	T_205 (in 0x0000 : word16)
	T_219 (in di + 0x0001 : word16)
	T_227 (in 0x0000 : word16)
	T_238 (in di + 0x0001 : word16)
	T_240 (in di + 0x013F : word16)
	T_313 (in 0x01F6 : word16)
Eq_93: (struct (0 Eq_4 t0000))
	T_93 (in 0x00C4 : word16)
Eq_95: (struct (0 Eq_4 t0000))
	T_95 (in 0x00C4 : word16)
Eq_115: (struct (0 Eq_28 t0000))
	T_115 (in 0x00B6 : word16)
Eq_118: (struct (0 Eq_28 t0000))
	T_118 (in 0x01F5 : word16)
Eq_124: (struct (0 Eq_28 t0000))
	T_124 (in 0x01F7 : word16)
Eq_130: (struct (0 Eq_28 t0000))
	T_130 (in 0x0336 : word16)
Eq_136: (struct (0 Eq_28 t0000))
	T_136 (in 0x00B5 : word16)
Eq_142: (struct (0 Eq_28 t0000))
	T_142 (in 0x00B7 : word16)
Eq_148: (struct (0 Eq_28 t0000))
	T_148 (in 0x0335 : word16)
Eq_154: (struct (0 Eq_28 t0000))
	T_154 (in 0x0337 : word16)
Eq_250: (struct (0 byte b0000))
	T_250 (in 0x7DA0 : word16)
Eq_252: (fn byte ((ptr Eq_254)))
	T_252 (in bios_kbd_check_keystroke : ptr32)
	T_253 (in signature of bios_kbd_check_keystroke : void)
Eq_254: (union (uint8 u0) (uint16 u1) (word32 u2))
	T_254 (in alOut : ptr16)
	T_255 (in out al : ptr16)
Eq_275: (fn byte ((ptr Eq_277)))
	T_275 (in bios_kbd_get_keystroke : ptr32)
	T_276 (in signature of bios_kbd_get_keystroke : void)
Eq_277: (union (uint8 u0) (uint16 u1) (word32 u2))
	T_277 (in alOut : ptr16)
	T_278 (in out al : ptr16)
Eq_283: (fn void (byte))
	T_283 (in msdos_terminate : ptr32)
	T_284 (in signature of msdos_terminate : void)
Eq_290: (struct (0 word16 w0000))
	T_290 (in 0x00C6 : word16)
Eq_293: (struct (0 Eq_4 t0000))
	T_293 (in 0x00C4 : word16)
Eq_295: (struct (0 Eq_4 t0000))
	T_295 (in 0x00C4 : word16)
Eq_304: (struct (0 Eq_4 t0000))
	T_304 (in 0x00C4 : word16)
Eq_306: (struct (0 Eq_4 t0000))
	T_306 (in 0x00C4 : word16)
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr Eq_1)
  OrigDataType: (ptr (struct "Globals"))
T_2: (in fp : ptr16)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: ptr16
T_3: (in sp : word16)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: (union ((union (ptr16 u0) ((memptr Eq_4 (struct (0 Eq_4 t0000))) u1)) u0) (word16 u1) ((union (ptr16 u0) ((memptr Eq_4 (struct (0 word16 w0000))) u1)) u2))
T_4: (in ds : selector)
  Class: Eq_4
  DataType: Eq_4
  OrigDataType: (ptr (segment))
T_5: (in bx : word16)
  Class: Eq_4
  DataType: Eq_4
  OrigDataType: (union ((ptr (segment (B5 Eq_28 t00B5) (B6 Eq_28 t00B6) (B7 Eq_28 t00B7) (C4 Eq_4 t00C4) (C6 word16 w00C6) (1F5 Eq_28 t01F5) (1F7 Eq_28 t01F7) (335 Eq_28 t0335) (336 Eq_28 t0336) (337 Eq_28 t0337) (7DA0 byte b7DA0))) u0) ((memptr Eq_4 (struct (0 Eq_8 t0000))) u1))
T_6: (in 0x0000 : word16)
  Class: Eq_6
  DataType: word16
  OrigDataType: word16
T_7: (in bx + 0x0000 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_8: (in Mem0[ds:bx + 0x0000:segptr32] : segptr32)
  Class: Eq_8
  DataType: Eq_8
  OrigDataType: segptr32
T_9: (in es_bx : ptr32)
  Class: Eq_8
  DataType: Eq_8
  OrigDataType: (union (ptr32 u0) (segptr32 u1))
T_10: (in SLICE(es_bx, selector, 16) : selector)
  Class: Eq_4
  DataType: Eq_4
  OrigDataType: (ptr (segment))
T_11: (in es : selector)
  Class: Eq_4
  DataType: Eq_4
  OrigDataType: (ptr (segment (B5 T_137 t00B5) (B6 T_116 t00B6) (B7 T_143 t00B7) (1F5 T_119 t01F5) (1F7 T_125 t01F7) (335 T_149 t0335) (336 T_131 t0336) (337 T_155 t0337) (7DA0 T_35 t7DA0)))
T_12: (in __cli : ptr32)
  Class: Eq_12
  DataType: (ptr Eq_12)
  OrigDataType: (ptr (fn T_13 ()))
T_13: (in __cli() : void)
  Class: Eq_13
  DataType: void
  OrigDataType: void
T_14: (in 0x0002 : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_15: (in fp - 0x0002 : word16)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word16
T_16: (in cs : selector)
  Class: Eq_4
  DataType: Eq_4
  OrigDataType: (ptr (segment))
T_17: (in wLoc02 : word16)
  Class: Eq_4
  DataType: Eq_4
  OrigDataType: (ptr (segment))
T_18: (in ax : word16)
  Class: Eq_4
  DataType: Eq_4
  OrigDataType: (ptr (segment))
T_19: (in 0x1F90 : word16)
  Class: Eq_19
  DataType: word16
  OrigDataType: word16
T_20: (in ax + 0x1F90 : word16)
  Class: Eq_4
  DataType: Eq_4
  OrigDataType: word16
T_21: (in cond(ax) : byte)
  Class: Eq_21
  DataType: bool
  OrigDataType: byte
T_22: (in SCZO : byte)
  Class: Eq_21
  DataType: bool
  OrigDataType: byte
T_23: (in 0x0002 : word16)
  Class: Eq_23
  DataType: word16
  OrigDataType: word16
T_24: (in fp - 0x0002 : word16)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word16
T_25: (in ss : selector)
  Class: Eq_4
  DataType: Eq_4
  OrigDataType: (ptr (segment (C4 T_4 t00C4) (C6 T_291 t00C6)))
T_26: (in 0x00C8 : word16)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word16
T_27: (in 0x0013 : word16)
  Class: Eq_4
  DataType: Eq_4
  OrigDataType: word16
T_28: (in (byte) ax : byte)
  Class: Eq_28
  DataType: Eq_28
  OrigDataType: byte
T_29: (in al : byte)
  Class: Eq_28
  DataType: Eq_28
  OrigDataType: (union (uint8 u0) (uint16 u1) (word32 u2))
T_30: (in bios_video_set_mode : ptr32)
  Class: Eq_30
  DataType: (ptr Eq_30)
  OrigDataType: (ptr (fn T_33 (T_29)))
T_31: (in signature of bios_video_set_mode : void)
  Class: Eq_30
  DataType: (ptr Eq_30)
  OrigDataType: 
T_32: (in al : byte)
  Class: Eq_28
  DataType: Eq_28
  OrigDataType: byte
T_33: (in bios_video_set_mode(al) : void)
  Class: Eq_33
  DataType: void
  OrigDataType: void
T_34: (in 0xFF : byte)
  Class: Eq_28
  DataType: Eq_28
  OrigDataType: byte
T_35: (in 0xFF : byte)
  Class: Eq_35
  DataType: byte
  OrigDataType: byte
T_36: (in 0x7DA0 : word16)
  Class: Eq_36
  DataType: (memptr Eq_4 Eq_36)
  OrigDataType: (memptr T_11 (struct (0 T_37 t0000)))
T_37: (in Mem0[es:0x7DA0:byte] : byte)
  Class: Eq_35
  DataType: byte
  OrigDataType: byte
T_38: (in 0x00FF : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_39: (in cx : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_40: (in (byte) cx : byte)
  Class: Eq_28
  DataType: Eq_28
  OrigDataType: byte
T_41: (in cl : byte)
  Class: Eq_28
  DataType: Eq_28
  OrigDataType: byte
T_42: (in 0x03C8 : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_43: (in dx : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_44: (in __outb : ptr32)
  Class: Eq_44
  DataType: (ptr Eq_44)
  OrigDataType: (ptr (fn T_46 (T_45, T_29)))
T_45: (in 0x03C8 : word16)
  Class: Eq_45
  DataType: word16
  OrigDataType: word16
T_46: (in __outb(0x03C8, al) : void)
  Class: Eq_46
  DataType: void
  OrigDataType: void
T_47: (in 0x03C9 : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_48: (in 0x00 : byte)
  Class: Eq_28
  DataType: Eq_28
  OrigDataType: byte
T_49: (in __outb : ptr32)
  Class: Eq_49
  DataType: (ptr Eq_49)
  OrigDataType: (ptr (fn T_52 (T_50, T_51)))
T_50: (in 0x03C9 : word16)
  Class: Eq_50
  DataType: word16
  OrigDataType: word16
T_51: (in 0x00 : byte)
  Class: Eq_51
  DataType: byte
  OrigDataType: byte
T_52: (in __outb(0x03C9, 0x00) : void)
  Class: Eq_52
  DataType: void
  OrigDataType: void
T_53: (in 0x03 : byte)
  Class: Eq_53
  DataType: uint8
  OrigDataType: uint8
T_54: (in al >>u 0x03 : word16)
  Class: Eq_28
  DataType: Eq_28
  OrigDataType: uint16
T_55: (in __outb : ptr32)
  Class: Eq_55
  DataType: (ptr Eq_55)
  OrigDataType: (ptr (fn T_57 (T_56, T_29)))
T_56: (in 0x03C9 : word16)
  Class: Eq_56
  DataType: word16
  OrigDataType: word16
T_57: (in __outb(0x03C9, al) : void)
  Class: Eq_57
  DataType: void
  OrigDataType: void
T_58: (in 0x00 : byte)
  Class: Eq_28
  DataType: Eq_28
  OrigDataType: byte
T_59: (in 0x00 : byte)
  Class: Eq_59
  DataType: byte
  OrigDataType: byte
T_60: (in cond(0x00) : byte)
  Class: Eq_21
  DataType: bool
  OrigDataType: byte
T_61: (in SZO : byte)
  Class: Eq_21
  DataType: bool
  OrigDataType: byte
T_62: (in false : bool)
  Class: Eq_21
  DataType: bool
  OrigDataType: bool
T_63: (in C : byte)
  Class: Eq_21
  DataType: bool
  OrigDataType: bool
T_64: (in __outb : ptr32)
  Class: Eq_64
  DataType: (ptr Eq_64)
  OrigDataType: (ptr (fn T_67 (T_65, T_66)))
T_65: (in 0x03C9 : word16)
  Class: Eq_65
  DataType: word16
  OrigDataType: word16
T_66: (in 0x00 : byte)
  Class: Eq_66
  DataType: byte
  OrigDataType: byte
T_67: (in __outb(0x03C9, 0x00) : void)
  Class: Eq_67
  DataType: void
  OrigDataType: void
T_68: (in 0x0001 : word16)
  Class: Eq_68
  DataType: word16
  OrigDataType: word16
T_69: (in cx - 0x0001 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_70: (in (byte) cx : byte)
  Class: Eq_28
  DataType: Eq_28
  OrigDataType: byte
T_71: (in 0x0000 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_72: (in cx != 0x0000 : bool)
  Class: Eq_72
  DataType: bool
  OrigDataType: bool
T_73: (in 0x0100 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_74: (in si : word16)
  Class: Eq_74
  DataType: (memptr Eq_4 Eq_74)
  OrigDataType: (memptr T_4 (struct (0 T_77 t0000)))
T_75: (in 0x0000 : word16)
  Class: Eq_75
  DataType: word16
  OrigDataType: word16
T_76: (in si + 0x0000 : word16)
  Class: Eq_76
  DataType: word16
  OrigDataType: word16
T_77: (in Mem0[ds:si + 0x0000:word32] : word32)
  Class: Eq_28
  DataType: Eq_28
  OrigDataType: word32
T_78: (in v19 : word32)
  Class: Eq_28
  DataType: Eq_28
  OrigDataType: word32
T_79: (in di : word16)
  Class: Eq_79
  DataType: (memptr Eq_4 Eq_79)
  OrigDataType: (memptr T_11 (struct (FFFFF780 T_214 tFFFFF780) (FFFFF8C0 T_211 tFFFFF8C0) (0 T_28 t0000) (13F T_233 t013F)))
T_80: (in 0x0000 : word16)
  Class: Eq_80
  DataType: word16
  OrigDataType: word16
T_81: (in di + 0x0000 : word16)
  Class: Eq_81
  DataType: word16
  OrigDataType: word16
T_82: (in Mem0[es:di + 0x0000:word32] : word32)
  Class: Eq_28
  DataType: Eq_28
  OrigDataType: word32
T_83: (in 0x0004 : word16)
  Class: Eq_83
  DataType: word16
  OrigDataType: word16
T_84: (in si + 0x0004 : word16)
  Class: Eq_74
  DataType: (memptr Eq_4 Eq_74)
  OrigDataType: word16
T_85: (in 0x0004 : word16)
  Class: Eq_85
  DataType: word16
  OrigDataType: word16
T_86: (in di + 0x0004 : word16)
  Class: Eq_79
  DataType: (memptr Eq_4 Eq_79)
  OrigDataType: word16
T_87: (in 0x0001 : word16)
  Class: Eq_87
  DataType: word16
  OrigDataType: word16
T_88: (in cx - 0x0001 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_89: (in (byte) cx : byte)
  Class: Eq_28
  DataType: Eq_28
  OrigDataType: byte
T_90: (in 0x0000 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_91: (in cx != 0x0000 : bool)
  Class: Eq_91
  DataType: bool
  OrigDataType: bool
T_92: (in 0x00C4 : word16)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word16
T_93: (in 0x00C4 : word16)
  Class: Eq_93
  DataType: (memptr Eq_4 Eq_93)
  OrigDataType: (memptr T_25 (struct (0 T_94 t0000)))
T_94: (in Mem0[ss:0x00C4:word16] : word16)
  Class: Eq_4
  DataType: Eq_4
  OrigDataType: word16
T_95: (in 0x00C4 : word16)
  Class: Eq_95
  DataType: (memptr Eq_4 Eq_95)
  OrigDataType: (memptr T_25 (struct (0 T_96 t0000)))
T_96: (in Mem0[ss:0x00C4:selector] : selector)
  Class: Eq_4
  DataType: Eq_4
  OrigDataType: (ptr (segment))
T_97: (in 0x00C6 : word16)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word16
T_98: (in 0xFA00 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_99: (in 0x01F6 : word16)
  Class: Eq_74
  DataType: (memptr Eq_4 Eq_74)
  OrigDataType: word16
T_100: (in 0x01F6 : word16)
  Class: Eq_79
  DataType: (memptr Eq_4 Eq_79)
  OrigDataType: word16
T_101: (in bl : byte)
  Class: Eq_28
  DataType: Eq_28
  OrigDataType: byte
T_102: (in 0x0000 : word16)
  Class: Eq_102
  DataType: word16
  OrigDataType: word16
T_103: (in si + 0x0000 : word16)
  Class: Eq_103
  DataType: word16
  OrigDataType: word16
T_104: (in Mem0[ds:si + 0x0000:byte] : byte)
  Class: Eq_28
  DataType: Eq_28
  OrigDataType: byte
T_105: (in 0x0001 : word16)
  Class: Eq_105
  DataType: word16
  OrigDataType: word16
T_106: (in si + 0x0001 : word16)
  Class: Eq_74
  DataType: (memptr Eq_4 Eq_74)
  OrigDataType: word16
T_107: (in 0x0001 : word16)
  Class: Eq_107
  DataType: word16
  OrigDataType: word16
T_108: (in di + 0x0001 : word16)
  Class: Eq_79
  DataType: (memptr Eq_4 Eq_79)
  OrigDataType: word16
T_109: (in cond(di) : byte)
  Class: Eq_21
  DataType: bool
  OrigDataType: byte
T_110: (in 0x0001 : word16)
  Class: Eq_110
  DataType: word16
  OrigDataType: word16
T_111: (in cx - 0x0001 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_112: (in 0x0000 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_113: (in cx != 0x0000 : bool)
  Class: Eq_113
  DataType: bool
  OrigDataType: bool
T_114: (in false : bool)
  Class: Eq_21
  DataType: bool
  OrigDataType: bool
T_115: (in 0x00B6 : word16)
  Class: Eq_115
  DataType: (memptr Eq_4 Eq_115)
  OrigDataType: (memptr T_11 (struct (0 T_116 t0000)))
T_116: (in Mem0[es:0x00B6:byte] : byte)
  Class: Eq_28
  DataType: Eq_28
  OrigDataType: byte
T_117: (in DPB(ax, al, 0, 8) : word16)
  Class: Eq_4
  DataType: Eq_4
  OrigDataType: word16
T_118: (in 0x01F5 : word16)
  Class: Eq_118
  DataType: (memptr Eq_4 Eq_118)
  OrigDataType: (memptr T_11 (struct (0 T_119 t0000)))
T_119: (in Mem0[es:0x01F5:byte] : byte)
  Class: Eq_28
  DataType: Eq_28
  OrigDataType: byte
T_120: (in DPB(ax, al, 0, 8) : word16)
  Class: Eq_4
  DataType: Eq_4
  OrigDataType: word16
T_121: (in bx + ax : word16)
  Class: Eq_121
  DataType: word16
  OrigDataType: word16
T_122: (in bx + ax + C : word16)
  Class: Eq_4
  DataType: Eq_4
  OrigDataType: word16
T_123: (in cond(bx) : byte)
  Class: Eq_21
  DataType: bool
  OrigDataType: byte
T_124: (in 0x01F7 : word16)
  Class: Eq_124
  DataType: (memptr Eq_4 Eq_124)
  OrigDataType: (memptr T_11 (struct (0 T_125 t0000)))
T_125: (in Mem0[es:0x01F7:byte] : byte)
  Class: Eq_28
  DataType: Eq_28
  OrigDataType: byte
T_126: (in DPB(ax, al, 0, 8) : word16)
  Class: Eq_4
  DataType: Eq_4
  OrigDataType: word16
T_127: (in bx + ax : word16)
  Class: Eq_127
  DataType: word16
  OrigDataType: word16
T_128: (in bx + ax + C : word16)
  Class: Eq_4
  DataType: Eq_4
  OrigDataType: word16
T_129: (in cond(bx) : byte)
  Class: Eq_21
  DataType: bool
  OrigDataType: byte
T_130: (in 0x0336 : word16)
  Class: Eq_130
  DataType: (memptr Eq_4 Eq_130)
  OrigDataType: (memptr T_11 (struct (0 T_131 t0000)))
T_131: (in Mem0[es:0x0336:byte] : byte)
  Class: Eq_28
  DataType: Eq_28
  OrigDataType: byte
T_132: (in DPB(ax, al, 0, 8) : word16)
  Class: Eq_4
  DataType: Eq_4
  OrigDataType: word16
T_133: (in bx + ax : word16)
  Class: Eq_133
  DataType: word16
  OrigDataType: word16
T_134: (in bx + ax + C : word16)
  Class: Eq_4
  DataType: Eq_4
  OrigDataType: word16
T_135: (in cond(bx) : byte)
  Class: Eq_21
  DataType: bool
  OrigDataType: byte
T_136: (in 0x00B5 : word16)
  Class: Eq_136
  DataType: (memptr Eq_4 Eq_136)
  OrigDataType: (memptr T_11 (struct (0 T_137 t0000)))
T_137: (in Mem0[es:0x00B5:byte] : byte)
  Class: Eq_28
  DataType: Eq_28
  OrigDataType: byte
T_138: (in DPB(ax, al, 0, 8) : word16)
  Class: Eq_4
  DataType: Eq_4
  OrigDataType: word16
T_139: (in bx + ax : word16)
  Class: Eq_139
  DataType: word16
  OrigDataType: word16
T_140: (in bx + ax + C : word16)
  Class: Eq_4
  DataType: Eq_4
  OrigDataType: word16
T_141: (in cond(bx) : byte)
  Class: Eq_21
  DataType: bool
  OrigDataType: byte
T_142: (in 0x00B7 : word16)
  Class: Eq_142
  DataType: (memptr Eq_4 Eq_142)
  OrigDataType: (memptr T_11 (struct (0 T_143 t0000)))
T_143: (in Mem0[es:0x00B7:byte] : byte)
  Class: Eq_28
  DataType: Eq_28
  OrigDataType: byte
T_144: (in DPB(ax, al, 0, 8) : word16)
  Class: Eq_4
  DataType: Eq_4
  OrigDataType: word16
T_145: (in bx + ax : word16)
  Class: Eq_145
  DataType: word16
  OrigDataType: word16
T_146: (in bx + ax + C : word16)
  Class: Eq_4
  DataType: Eq_4
  OrigDataType: word16
T_147: (in cond(bx) : byte)
  Class: Eq_21
  DataType: bool
  OrigDataType: byte
T_148: (in 0x0335 : word16)
  Class: Eq_148
  DataType: (memptr Eq_4 Eq_148)
  OrigDataType: (memptr T_11 (struct (0 T_149 t0000)))
T_149: (in Mem0[es:0x0335:byte] : byte)
  Class: Eq_28
  DataType: Eq_28
  OrigDataType: byte
T_150: (in DPB(ax, al, 0, 8) : word16)
  Class: Eq_4
  DataType: Eq_4
  OrigDataType: word16
T_151: (in bx + ax : word16)
  Class: Eq_151
  DataType: word16
  OrigDataType: word16
T_152: (in bx + ax + C : word16)
  Class: Eq_4
  DataType: Eq_4
  OrigDataType: word16
T_153: (in cond(bx) : byte)
  Class: Eq_21
  DataType: bool
  OrigDataType: byte
T_154: (in 0x0337 : word16)
  Class: Eq_154
  DataType: (memptr Eq_4 Eq_154)
  OrigDataType: (memptr T_11 (struct (0 T_155 t0000)))
T_155: (in Mem0[es:0x0337:byte] : byte)
  Class: Eq_28
  DataType: Eq_28
  OrigDataType: byte
T_156: (in DPB(ax, al, 0, 8) : word16)
  Class: Eq_4
  DataType: Eq_4
  OrigDataType: word16
T_157: (in bx + ax : word16)
  Class: Eq_157
  DataType: word16
  OrigDataType: word16
T_158: (in bx + ax + C : word16)
  Class: Eq_4
  DataType: Eq_4
  OrigDataType: word16
T_159: (in 0x0004 : word16)
  Class: Eq_159
  DataType: word16
  OrigDataType: word16
T_160: (in bx + 0x0004 : word16)
  Class: Eq_4
  DataType: Eq_4
  OrigDataType: word16
T_161: (in 0x0003 : word16)
  Class: Eq_161
  DataType: uint16
  OrigDataType: uint16
T_162: (in bx >>u 0x0003 : word16)
  Class: Eq_4
  DataType: Eq_4
  OrigDataType: uint16
T_163: (in 0x0002 : word16)
  Class: Eq_163
  DataType: word16
  OrigDataType: word16
T_164: (in bx + 0x0002 : word16)
  Class: Eq_4
  DataType: Eq_4
  OrigDataType: word16
T_165: (in cond(bx) : byte)
  Class: Eq_21
  DataType: bool
  OrigDataType: byte
T_166: (in 0x0002 : word16)
  Class: Eq_166
  DataType: word16
  OrigDataType: word16
T_167: (in sp - 0x0002 : word16)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word16
T_168: (in 0xA000 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_169: (in 0x0000 : word16)
  Class: Eq_169
  DataType: word16
  OrigDataType: word16
T_170: (in sp + 0x0000 : word16)
  Class: Eq_170
  DataType: word16
  OrigDataType: word16
T_171: (in Mem0[ss:sp + 0x0000:word16] : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_172: (in 0x0000 : word16)
  Class: Eq_172
  DataType: word16
  OrigDataType: word16
T_173: (in sp + 0x0000 : word16)
  Class: Eq_173
  DataType: word16
  OrigDataType: word16
T_174: (in Mem0[ss:sp + 0x0000:selector] : selector)
  Class: Eq_4
  DataType: Eq_4
  OrigDataType: (ptr (segment))
T_175: (in SEQ(es, bx) : ptr32)
  Class: Eq_8
  DataType: Eq_8
  OrigDataType: ptr32
T_176: (in 0x0002 : word16)
  Class: Eq_176
  DataType: word16
  OrigDataType: word16
T_177: (in sp + 0x0002 : word16)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word16
T_178: (in 0x0000 : word16)
  Class: Eq_79
  DataType: (memptr Eq_4 Eq_79)
  OrigDataType: word16
T_179: (in 0x0000 : word16)
  Class: Eq_179
  DataType: word16
  OrigDataType: word16
T_180: (in cond(0x0000) : byte)
  Class: Eq_21
  DataType: bool
  OrigDataType: byte
T_181: (in false : bool)
  Class: Eq_21
  DataType: bool
  OrigDataType: bool
T_182: (in 0x3E80 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_183: (in (byte) cx : byte)
  Class: Eq_28
  DataType: Eq_28
  OrigDataType: byte
T_184: (in 0x01F6 : word16)
  Class: Eq_74
  DataType: (memptr Eq_4 Eq_74)
  OrigDataType: word16
T_185: (in 0x0000 : word16)
  Class: Eq_185
  DataType: word16
  OrigDataType: word16
T_186: (in si + 0x0000 : word16)
  Class: Eq_186
  DataType: word16
  OrigDataType: word16
T_187: (in Mem0[ds:si + 0x0000:word32] : word32)
  Class: Eq_28
  DataType: Eq_28
  OrigDataType: word32
T_188: (in v21 : word32)
  Class: Eq_28
  DataType: Eq_28
  OrigDataType: word32
T_189: (in 0x0000 : word16)
  Class: Eq_189
  DataType: word16
  OrigDataType: word16
T_190: (in di + 0x0000 : word16)
  Class: Eq_190
  DataType: word16
  OrigDataType: word16
T_191: (in Mem0[es:di + 0x0000:word32] : word32)
  Class: Eq_28
  DataType: Eq_28
  OrigDataType: word32
T_192: (in 0x0004 : word16)
  Class: Eq_192
  DataType: word16
  OrigDataType: word16
T_193: (in si + 0x0004 : word16)
  Class: Eq_74
  DataType: (memptr Eq_4 Eq_74)
  OrigDataType: word16
T_194: (in 0x0004 : word16)
  Class: Eq_194
  DataType: word16
  OrigDataType: word16
T_195: (in di + 0x0004 : word16)
  Class: Eq_79
  DataType: (memptr Eq_4 Eq_79)
  OrigDataType: word16
T_196: (in 0x0001 : word16)
  Class: Eq_196
  DataType: word16
  OrigDataType: word16
T_197: (in cx - 0x0001 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_198: (in (byte) cx : byte)
  Class: Eq_28
  DataType: Eq_28
  OrigDataType: byte
T_199: (in 0x0000 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_200: (in cx != 0x0000 : bool)
  Class: Eq_200
  DataType: bool
  OrigDataType: bool
T_201: (in 0x00 : byte)
  Class: Eq_28
  DataType: Eq_28
  OrigDataType: byte
T_202: (in DPB(ax, al, 0, 8) : word16)
  Class: Eq_4
  DataType: Eq_4
  OrigDataType: word16
T_203: (in 0x0140 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_204: (in (byte) cx : byte)
  Class: Eq_28
  DataType: Eq_28
  OrigDataType: byte
T_205: (in 0x0000 : word16)
  Class: Eq_79
  DataType: (memptr Eq_4 Eq_79)
  OrigDataType: word16
T_206: (in 0x0000 : word16)
  Class: Eq_206
  DataType: word16
  OrigDataType: word16
T_207: (in cond(0x0000) : byte)
  Class: Eq_21
  DataType: bool
  OrigDataType: byte
T_208: (in false : bool)
  Class: Eq_21
  DataType: bool
  OrigDataType: bool
T_209: (in 0x0740 : word16)
  Class: Eq_209
  DataType: word16
  OrigDataType: word16
T_210: (in di - 0x0740 : word16)
  Class: Eq_210
  DataType: word16
  OrigDataType: word16
T_211: (in Mem0[es:di - 0x0740:byte] : byte)
  Class: Eq_28
  DataType: Eq_28
  OrigDataType: byte
T_212: (in 0xF780 : word16)
  Class: Eq_212
  DataType: word16
  OrigDataType: word16
T_213: (in di + 0xF780 : word16)
  Class: Eq_213
  DataType: word16
  OrigDataType: word16
T_214: (in Mem0[es:di + 0xF780:byte] : byte)
  Class: Eq_28
  DataType: Eq_28
  OrigDataType: byte
T_215: (in 0x0000 : word16)
  Class: Eq_215
  DataType: word16
  OrigDataType: word16
T_216: (in di + 0x0000 : word16)
  Class: Eq_216
  DataType: word16
  OrigDataType: word16
T_217: (in Mem0[es:di + 0x0000:byte] : byte)
  Class: Eq_28
  DataType: Eq_28
  OrigDataType: byte
T_218: (in 0x0001 : word16)
  Class: Eq_218
  DataType: word16
  OrigDataType: word16
T_219: (in di + 0x0001 : word16)
  Class: Eq_79
  DataType: (memptr Eq_4 Eq_79)
  OrigDataType: word16
T_220: (in 0x0001 : word16)
  Class: Eq_220
  DataType: word16
  OrigDataType: word16
T_221: (in cx - 0x0001 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_222: (in (byte) cx : byte)
  Class: Eq_28
  DataType: Eq_28
  OrigDataType: byte
T_223: (in 0x0000 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_224: (in cx != 0x0000 : bool)
  Class: Eq_224
  DataType: bool
  OrigDataType: bool
T_225: (in 0x00C8 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_226: (in (byte) cx : byte)
  Class: Eq_28
  DataType: Eq_28
  OrigDataType: byte
T_227: (in 0x0000 : word16)
  Class: Eq_79
  DataType: (memptr Eq_4 Eq_79)
  OrigDataType: word16
T_228: (in 0x0000 : word16)
  Class: Eq_228
  DataType: word16
  OrigDataType: word16
T_229: (in cond(0x0000) : byte)
  Class: Eq_21
  DataType: bool
  OrigDataType: byte
T_230: (in false : bool)
  Class: Eq_21
  DataType: bool
  OrigDataType: bool
T_231: (in 0x013F : word16)
  Class: Eq_231
  DataType: word16
  OrigDataType: word16
T_232: (in di + 0x013F : word16)
  Class: Eq_232
  DataType: word16
  OrigDataType: word16
T_233: (in Mem0[es:di + 0x013F:byte] : byte)
  Class: Eq_28
  DataType: Eq_28
  OrigDataType: byte
T_234: (in 0x0000 : word16)
  Class: Eq_234
  DataType: word16
  OrigDataType: word16
T_235: (in di + 0x0000 : word16)
  Class: Eq_235
  DataType: word16
  OrigDataType: word16
T_236: (in Mem0[es:di + 0x0000:byte] : byte)
  Class: Eq_28
  DataType: Eq_28
  OrigDataType: byte
T_237: (in 0x0001 : word16)
  Class: Eq_237
  DataType: word16
  OrigDataType: word16
T_238: (in di + 0x0001 : word16)
  Class: Eq_79
  DataType: (memptr Eq_4 Eq_79)
  OrigDataType: word16
T_239: (in 0x013F : word16)
  Class: Eq_239
  DataType: word16
  OrigDataType: word16
T_240: (in di + 0x013F : word16)
  Class: Eq_79
  DataType: (memptr Eq_4 Eq_79)
  OrigDataType: word16
T_241: (in cond(di) : byte)
  Class: Eq_21
  DataType: bool
  OrigDataType: byte
T_242: (in Z : byte)
  Class: Eq_21
  DataType: bool
  OrigDataType: byte
T_243: (in 0x0001 : word16)
  Class: Eq_243
  DataType: word16
  OrigDataType: word16
T_244: (in cx - 0x0001 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_245: (in (byte) cx : byte)
  Class: Eq_28
  DataType: Eq_28
  OrigDataType: byte
T_246: (in 0x0000 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_247: (in cx != 0x0000 : bool)
  Class: Eq_247
  DataType: bool
  OrigDataType: bool
T_248: (in 0xC8 : byte)
  Class: Eq_28
  DataType: Eq_28
  OrigDataType: byte
T_249: (in 0xC8 : byte)
  Class: Eq_35
  DataType: byte
  OrigDataType: byte
T_250: (in 0x7DA0 : word16)
  Class: Eq_250
  DataType: (memptr Eq_4 Eq_250)
  OrigDataType: (memptr T_11 (struct (0 T_251 t0000)))
T_251: (in Mem0[es:0x7DA0:byte] : byte)
  Class: Eq_35
  DataType: byte
  OrigDataType: byte
T_252: (in bios_kbd_check_keystroke : ptr32)
  Class: Eq_252
  DataType: (ptr Eq_252)
  OrigDataType: (ptr (fn T_256 (T_255)))
T_253: (in signature of bios_kbd_check_keystroke : void)
  Class: Eq_252
  DataType: (ptr Eq_252)
  OrigDataType: 
T_254: (in alOut : ptr16)
  Class: Eq_254
  DataType: (ptr Eq_254)
  OrigDataType: ptr16
T_255: (in out al : ptr16)
  Class: Eq_254
  DataType: (ptr Eq_254)
  OrigDataType: (ptr (union (uint8 u0) (uint16 u1) (word32 u2)))
T_256: (in bios_kbd_check_keystroke(out al) : byte)
  Class: Eq_256
  DataType: byte
  OrigDataType: byte
T_257: (in ah : byte)
  Class: Eq_256
  DataType: byte
  OrigDataType: byte
T_258: (in DPB(ax, ah, 8, 8) : word16)
  Class: Eq_4
  DataType: Eq_4
  OrigDataType: word16
T_259: (in Test(EQ,Z) : bool)
  Class: Eq_259
  DataType: bool
  OrigDataType: bool
T_260: (in 0x0000 : word16)
  Class: Eq_260
  DataType: word16
  OrigDataType: word16
T_261: (in sp + 0x0000 : word16)
  Class: Eq_261
  DataType: word16
  OrigDataType: word16
T_262: (in Mem0[ss:sp + 0x0000:word16] : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_263: (in 0x0002 : word16)
  Class: Eq_263
  DataType: word16
  OrigDataType: word16
T_264: (in sp + 0x0002 : word16)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word16
T_265: (in 0x0001 : word16)
  Class: Eq_265
  DataType: word16
  OrigDataType: word16
T_266: (in cx - 0x0001 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_267: (in (byte) cx : byte)
  Class: Eq_28
  DataType: Eq_28
  OrigDataType: byte
T_268: (in 0x0000 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_269: (in cx != 0x0000 : bool)
  Class: Eq_269
  DataType: bool
  OrigDataType: bool
T_270: (in 0x0000 : word16)
  Class: Eq_4
  DataType: Eq_4
  OrigDataType: word16
T_271: (in (byte) ax : byte)
  Class: Eq_28
  DataType: Eq_28
  OrigDataType: byte
T_272: (in 0x0000 : word16)
  Class: Eq_272
  DataType: word16
  OrigDataType: word16
T_273: (in cond(0x0000) : byte)
  Class: Eq_21
  DataType: bool
  OrigDataType: byte
T_274: (in false : bool)
  Class: Eq_21
  DataType: bool
  OrigDataType: bool
T_275: (in bios_kbd_get_keystroke : ptr32)
  Class: Eq_275
  DataType: (ptr Eq_275)
  OrigDataType: (ptr (fn T_279 (T_278)))
T_276: (in signature of bios_kbd_get_keystroke : void)
  Class: Eq_275
  DataType: (ptr Eq_275)
  OrigDataType: 
T_277: (in alOut : ptr16)
  Class: Eq_277
  DataType: (ptr Eq_277)
  OrigDataType: ptr16
T_278: (in out al : ptr16)
  Class: Eq_277
  DataType: (ptr Eq_277)
  OrigDataType: (ptr (union (uint8 u0) (uint16 u1) (word32 u2)))
T_279: (in bios_kbd_get_keystroke(out al) : byte)
  Class: Eq_256
  DataType: byte
  OrigDataType: byte
T_280: (in bios_video_set_mode : ptr32)
  Class: Eq_30
  DataType: (ptr Eq_30)
  OrigDataType: (ptr (fn T_281 (T_29)))
T_281: (in bios_video_set_mode(al) : void)
  Class: Eq_33
  DataType: void
  OrigDataType: void
T_282: (in 0x4C00 : word16)
  Class: Eq_4
  DataType: Eq_4
  OrigDataType: word16
T_283: (in msdos_terminate : ptr32)
  Class: Eq_283
  DataType: (ptr Eq_283)
  OrigDataType: (ptr (fn T_287 (T_286)))
T_284: (in signature of msdos_terminate : void)
  Class: Eq_283
  DataType: (ptr Eq_283)
  OrigDataType: 
T_285: (in al : byte)
  Class: Eq_285
  DataType: byte
  OrigDataType: byte
T_286: (in 0x00 : byte)
  Class: Eq_285
  DataType: byte
  OrigDataType: byte
T_287: (in msdos_terminate(0x00) : void)
  Class: Eq_287
  DataType: void
  OrigDataType: void
T_288: (in 0x00C6 : word16)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word16
T_289: (in 0x0100 : word16)
  Class: Eq_289
  DataType: word16
  OrigDataType: word16
T_290: (in 0x00C6 : word16)
  Class: Eq_290
  DataType: (memptr Eq_4 Eq_290)
  OrigDataType: (memptr T_25 (struct (0 T_291 t0000)))
T_291: (in Mem0[ss:0x00C6:word16] : word16)
  Class: Eq_289
  DataType: word16
  OrigDataType: word16
T_292: (in 0x00C4 : word16)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word16
T_293: (in 0x00C4 : word16)
  Class: Eq_293
  DataType: (memptr Eq_4 Eq_293)
  OrigDataType: (memptr T_25 (struct (0 T_294 t0000)))
T_294: (in Mem0[ss:0x00C4:word16] : word16)
  Class: Eq_4
  DataType: Eq_4
  OrigDataType: word16
T_295: (in 0x00C4 : word16)
  Class: Eq_295
  DataType: (memptr Eq_4 Eq_295)
  OrigDataType: (memptr T_25 (struct (0 T_296 t0000)))
T_296: (in Mem0[ss:0x00C4:word16] : word16)
  Class: Eq_4
  DataType: Eq_4
  OrigDataType: word16
T_297: (in 0x00C6 : word16)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word16
T_298: (in 0x0FF0 : word16)
  Class: Eq_298
  DataType: word16
  OrigDataType: word16
T_299: (in ax + 0x0FF0 : word16)
  Class: Eq_4
  DataType: Eq_4
  OrigDataType: word16
T_300: (in SLICE(ax, byte, 8) : byte)
  Class: Eq_256
  DataType: byte
  OrigDataType: byte
T_301: (in SEQ(es, bx) : ptr32)
  Class: Eq_8
  DataType: Eq_8
  OrigDataType: ptr32
T_302: (in 0x00C4 : word16)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word16
T_303: (in 0xA000 : word16)
  Class: Eq_4
  DataType: Eq_4
  OrigDataType: word16
T_304: (in 0x00C4 : word16)
  Class: Eq_304
  DataType: (memptr Eq_4 Eq_304)
  OrigDataType: (memptr T_25 (struct (0 T_305 t0000)))
T_305: (in Mem0[ss:0x00C4:word16] : word16)
  Class: Eq_4
  DataType: Eq_4
  OrigDataType: word16
T_306: (in 0x00C4 : word16)
  Class: Eq_306
  DataType: (memptr Eq_4 Eq_306)
  OrigDataType: (memptr T_25 (struct (0 T_307 t0000)))
T_307: (in Mem0[ss:0x00C4:selector] : selector)
  Class: Eq_4
  DataType: Eq_4
  OrigDataType: (ptr (segment))
T_308: (in 0x00C6 : word16)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word16
T_309: (in 0x0000 : word16)
  Class: Eq_74
  DataType: (memptr Eq_4 Eq_74)
  OrigDataType: word16
T_310: (in 0x0000 : word16)
  Class: Eq_310
  DataType: word16
  OrigDataType: word16
T_311: (in cond(0x0000) : byte)
  Class: Eq_21
  DataType: bool
  OrigDataType: byte
T_312: (in false : bool)
  Class: Eq_21
  DataType: bool
  OrigDataType: bool
T_313: (in 0x01F6 : word16)
  Class: Eq_79
  DataType: (memptr Eq_4 Eq_79)
  OrigDataType: word16
T_314: (in 0x3E80 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_315: (in (byte) cx : byte)
  Class: Eq_28
  DataType: Eq_28
  OrigDataType: byte
*/
typedef struct Globals {
} Eq_1;

typedef union  {
	union <anonymous> u0;
	word16 u1;
	union <anonymous> u2;
} Eq_2;

typedef union  {
	struct <anonymous>* u0;
	struct <anonymous> Eq_4::* u1;
} Eq_4;

typedef union  {
	ptr32 u0;
	segptr32 u1;
} Eq_8;

typedef void (Eq_12)();

typedef union  {
	uint8 u0;
	uint16 u1;
	word32 u2;
} Eq_28;

typedef void (Eq_30)();

typedef struct  {
	byte b0000;	// 0
} Eq_36;

typedef void (Eq_44)(word16, );

typedef void (Eq_49)(word16, byte);

typedef void (Eq_55)(word16, );

typedef void (Eq_64)(word16, byte);

typedef  Eq_74struct  {
	 t0000;	// 0
} Eq_74;

typedef  Eq_79 Eq_79 Eq_79 Eq_79struct  {
	 tFFFFF780;	// FFFFF780
	 tFFFFF8C0;	// FFFFF8C0
	 t0000;	// 0
	 t013F;	// 13F
} Eq_79;

typedef  Eq_93struct  {
	 t0000;	// 0
} Eq_93;

typedef  Eq_95struct  {
	 t0000;	// 0
} Eq_95;

typedef  Eq_115struct  {
	 t0000;	// 0
} Eq_115;

typedef  Eq_118struct  {
	 t0000;	// 0
} Eq_118;

typedef  Eq_124struct  {
	 t0000;	// 0
} Eq_124;

typedef  Eq_130struct  {
	 t0000;	// 0
} Eq_130;

typedef  Eq_136struct  {
	 t0000;	// 0
} Eq_136;

typedef  Eq_142struct  {
	 t0000;	// 0
} Eq_142;

typedef  Eq_148struct  {
	 t0000;	// 0
} Eq_148;

typedef  Eq_154struct  {
	 t0000;	// 0
} Eq_154;

typedef struct  {
	byte b0000;	// 0
} Eq_250;

typedef byte (Eq_252)( *);

typedef union  {
	uint8 u0;
	uint16 u1;
	word32 u2;
} Eq_254;

typedef byte (Eq_275)( *);

typedef union  {
	uint8 u0;
	uint16 u1;
	word32 u2;
} Eq_277;

typedef void (Eq_283)(byte);

typedef struct  {
	word16 w0000;	// 0
} Eq_290;

typedef  Eq_293struct  {
	 t0000;	// 0
} Eq_293;

typedef  Eq_295struct  {
	 t0000;	// 0
} Eq_295;

typedef  Eq_304struct  {
	 t0000;	// 0
} Eq_304;

typedef  Eq_306struct  {
	 t0000;	// 0
} Eq_306;

