// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_286/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_121) ptrFFFA0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
	T_394 (in bios_video_set_mode : ptr32)
Eq_7: (fn void (word16, byte))
	T_7 (in __outb : ptr32)
Eq_21: (fn void (word16, uint16))
	T_21 (in __outb : ptr32)
Eq_28: (fn void (word16, byte))
	T_28 (in __outb : ptr32)
Eq_32: (fn void (word16, byte))
	T_32 (in __outb : ptr32)
Eq_51: (fn void (word16, byte))
	T_51 (in __outb : ptr32)
Eq_58: (fn void (word16, byte))
	T_58 (in __outb : ptr32)
Eq_64: (fn void (word16, byte))
	T_64 (in __outb : ptr32)
Eq_80: (fn void (word16, byte))
	T_80 (in __outb : ptr32)
Eq_84: (fn void (word16, byte))
	T_84 (in __outb : ptr32)
Eq_93: (fn void (word16, byte))
	T_93 (in __outb : ptr32)
Eq_111: (fn byte ((ptr byte), (ptr byte), (ptr byte)))
	T_111 (in msdos_get_system_time : ptr32)
	T_112 (in signature of msdos_get_system_time : void)
Eq_121: (segment "Eq_121" (FFFFA000 (struct "Eq_256" 0001 (0 Eq_146 t0000)) tFFFFA000) (0 (arr uint16) a0000) (1FF byte b01FF) (200 (arr Eq_402) a0200) (7FA0 (arr Eq_146) a7FA0) (8040 word16 w8040) (A000 Eq_256 tA000))
	T_121 (in ds : (ptr Eq_121))
	T_148 (in 0xA000 : selector)
	T_165 (in Mem154[ss:fp - 0x0004:word16] : word16)
Eq_124: (segment "Eq_124" (200 (arr uint16) a0200))
	T_124 (in es : (ptr Eq_124))
Eq_139: (struct "Eq_139" 0001 (0 Eq_146 t0000))
	T_139 (in si_111 : (memptr (ptr Eq_121) Eq_139))
	T_141 (in si_111 - 0x00A0 : word16)
	T_154 (in si_111 + 0x0001 : word16)
	T_172 (in Mem163[ss:fp - 0x0004:word16] : word16)
	T_177 (in di_158 : (memptr (ptr Eq_121) Eq_139))
	T_178 (in 0x0200 : word16)
	T_191 (in di_158 + 0x0001 : word16)
	T_258 (in si_231 : (memptr (ptr Eq_121) Eq_139))
	T_274 (in si_231 + 0x0001 : word16)
Eq_142: (union "Eq_142" (uint16 u0) ((memptr (ptr Eq_121) Eq_405) u1))
	T_142 (in 0x0140 : word16)
	T_143 (in bx : word16)
	T_158 (in bx - 0x0001 : word16)
	T_159 (in 0x0000 : word16)
	T_218 (in DPB(bx, (ds->*si_164).b009F, 0, 8) : word16)
	T_346 (in dx_316 : Eq_142)
	T_349 (in SEQ(0x0000, ax_307) % bx_315 : uint16)
	T_372 (in DPB(bx, 0xA0, 0, 8) : word16)
Eq_146: (union "Eq_146" (byte u0) (word16 u1))
	T_146 (in Mem95[ds:si_111 + 0x0000:byte] : byte)
	T_186 (in al_198 : Eq_146)
	T_189 (in Mem210[0xA000:di_158 + 0x0000:byte] : byte)
	T_203 (in (byte) ((ax_195 >>u 0x0002) - 0x0001) : byte)
	T_212 (in (byte) ((ax_195 >>u 0x0002) - 0x0002) : byte)
	T_236 (in (byte) (ax_195 >>u 0x0002) : byte)
	T_269 (in Mem210[ds:si_231 + 0x0000:byte] : byte)
	T_272 (in Mem239[0xA000:di_229 + 0x0000:byte] : byte)
	T_294 (in Mem248[ds:si_249 + 0x0000:word16] : word16)
	T_297 (in Mem256[0xA000:di_229 + 0x0000:word16] : word16)
	T_384 (in 0x0000 : word16)
	T_387 (in Mem342[0xA000:di_229 + 0x0000:word16] : word16)
Eq_161: (segment "Eq_161")
	T_161 (in ss : selector)
Eq_162: (union "Eq_162" ((memptr (ptr Eq_161) Eq_406) u0) (Eq_408 u1))
	T_162 (in fp : ptr16)
Eq_179: (struct "Eq_179" 0001 (FFFFFFFE byte bFFFFFFFE) (0 byte b0000) (9F byte b009F))
	T_179 (in si_164 : (memptr (ptr Eq_121) Eq_179))
	T_181 (in si_111 + 0x00A0 : word16)
	T_214 (in si_164 + 0x0001 : word16)
Eq_240: (fn byte (word16))
	T_240 (in __inb : ptr32)
Eq_248: (fn byte (word16))
	T_248 (in __inb : ptr32)
Eq_256: (struct "Eq_256" 0001 (0 Eq_146 t0000))
	T_256 (in di_229 : (memptr (ptr Eq_121) Eq_256))
	T_257 (in 0xA000 : word16)
	T_276 (in di_229 + 0x0001 : word16)
	T_301 (in di_229 + 0x0002 : word16)
	T_389 (in di_229 + 0x0002 : word16)
Eq_282: (fn byte ((ptr byte)))
	T_282 (in bios_kbd_check_keystroke : ptr32)
	T_283 (in signature of bios_kbd_check_keystroke : void)
Eq_312: (fn byte (byte, byte, bool))
	T_312 (in __rcr : ptr32)
Eq_318: (fn byte (byte, byte, bool))
	T_318 (in __rcr : ptr32)
Eq_326: (fn byte (byte, byte, bool))
	T_326 (in __rcr : ptr32)
Eq_397: (fn void ())
	T_397 (in msdos_terminate_program20 : ptr32)
	T_398 (in signature of msdos_terminate_program20 : void)
Eq_402: (struct "Eq_402" 0001 (0 Eq_146 t0000))
	T_402
	T_403
Eq_405: (struct "Eq_405" (7FA0 byte b7FA0))
	T_405
Eq_406: (struct "Eq_406" (FFFFFFFE word16 wFFFFFFFE))
	T_406
Eq_407: (struct "Eq_407" (FFFFFFFC (memptr (ptr Eq_121) Eq_139) ptrFFFFFFFC))
	T_407
Eq_408: (union "Eq_408" (ptr16 u0) ((memptr (ptr Eq_161) Eq_407) u1))
	T_408
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
T_11: (in ax_108 : uint16)
  Class: Eq_11
  DataType: uint16
  OrigDataType: uint16
T_12: (in ax : word16)
  Class: Eq_12
  DataType: word16
  OrigDataType: word16
T_13: (in 0x00 : byte)
  Class: Eq_13
  DataType: byte
  OrigDataType: byte
T_14: (in DPB(ax, 0x00, 0, 8) : word16)
  Class: Eq_11
  DataType: uint16
  OrigDataType: word16
T_15: (in cl_12 : byte)
  Class: Eq_15
  DataType: byte
  OrigDataType: byte
T_16: (in 0x40 : byte)
  Class: Eq_15
  DataType: byte
  OrigDataType: byte
T_17: (in cx_14 : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_18: (in cx : word16)
  Class: Eq_18
  DataType: word16
  OrigDataType: word16
T_19: (in 0x40 : byte)
  Class: Eq_19
  DataType: byte
  OrigDataType: byte
T_20: (in DPB(cx, 0x40, 0, 8) : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_21: (in __outb : ptr32)
  Class: Eq_21
  DataType: (ptr Eq_21)
  OrigDataType: (ptr (fn T_27 (T_22, T_26)))
T_22: (in 0x03C9 : word16)
  Class: Eq_22
  DataType: word16
  OrigDataType: word16
T_23: (in 0x40 : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_24: (in 0x40 - cl_12 : byte)
  Class: Eq_24
  DataType: uint8
  OrigDataType: uint8
T_25: (in 0x01 : byte)
  Class: Eq_25
  DataType: uint8
  OrigDataType: uint8
T_26: (in 0x40 - cl_12 >>u 0x01 : word16)
  Class: Eq_26
  DataType: uint16
  OrigDataType: uint16
T_27: (in __outb(0x03C9, 0x40 - cl_12 >>u 0x01) : void)
  Class: Eq_27
  DataType: void
  OrigDataType: void
T_28: (in __outb : ptr32)
  Class: Eq_28
  DataType: (ptr Eq_28)
  OrigDataType: (ptr (fn T_31 (T_29, T_30)))
T_29: (in 0x03C9 : word16)
  Class: Eq_29
  DataType: word16
  OrigDataType: word16
T_30: (in 0x00 : byte)
  Class: Eq_30
  DataType: byte
  OrigDataType: byte
T_31: (in __outb(0x03C9, 0x00) : void)
  Class: Eq_31
  DataType: void
  OrigDataType: void
T_32: (in __outb : ptr32)
  Class: Eq_32
  DataType: (ptr Eq_32)
  OrigDataType: (ptr (fn T_35 (T_33, T_34)))
T_33: (in 0x03C9 : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_34: (in 0x00 : byte)
  Class: Eq_34
  DataType: byte
  OrigDataType: byte
T_35: (in __outb(0x03C9, 0x00) : void)
  Class: Eq_35
  DataType: void
  OrigDataType: void
T_36: (in 0x0001 : word16)
  Class: Eq_36
  DataType: word16
  OrigDataType: word16
T_37: (in cx_14 - 0x0001 : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_38: (in 0x00 : byte)
  Class: Eq_38
  DataType: byte
  OrigDataType: byte
T_39: (in DPB(ax_108, 0x00, 0, 8) : word16)
  Class: Eq_11
  DataType: uint16
  OrigDataType: word16
T_40: (in (byte) cx_14 : byte)
  Class: Eq_15
  DataType: byte
  OrigDataType: byte
T_41: (in 0x0000 : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_42: (in cx_14 != 0x0000 : bool)
  Class: Eq_42
  DataType: bool
  OrigDataType: bool
T_43: (in cl_31 : byte)
  Class: Eq_43
  DataType: byte
  OrigDataType: byte
T_44: (in 0x40 : byte)
  Class: Eq_43
  DataType: byte
  OrigDataType: byte
T_45: (in cx_32 : word16)
  Class: Eq_45
  DataType: word16
  OrigDataType: word16
T_46: (in 0x40 : byte)
  Class: Eq_46
  DataType: byte
  OrigDataType: byte
T_47: (in DPB(cx_14, 0x40, 0, 8) : word16)
  Class: Eq_45
  DataType: word16
  OrigDataType: word16
T_48: (in al_38 : uint8)
  Class: Eq_48
  DataType: uint8
  OrigDataType: uint8
T_49: (in 0x40 : byte)
  Class: Eq_49
  DataType: byte
  OrigDataType: byte
T_50: (in 0x40 - cl_31 : byte)
  Class: Eq_48
  DataType: uint8
  OrigDataType: byte
T_51: (in __outb : ptr32)
  Class: Eq_51
  DataType: (ptr Eq_51)
  OrigDataType: (ptr (fn T_57 (T_52, T_56)))
T_52: (in 0x03C9 : word16)
  Class: Eq_52
  DataType: word16
  OrigDataType: word16
T_53: (in 0x01 : byte)
  Class: Eq_53
  DataType: uint8
  OrigDataType: uint8
T_54: (in al_38 >>u 0x01 : word16)
  Class: Eq_54
  DataType: uint16
  OrigDataType: uint16
T_55: (in 0x1F : byte)
  Class: Eq_55
  DataType: byte
  OrigDataType: byte
T_56: (in (al_38 >>u 0x01) + 0x1F : byte)
  Class: Eq_56
  DataType: byte
  OrigDataType: byte
T_57: (in __outb(0x03C9, (al_38 >>u 0x01) + 0x1F) : void)
  Class: Eq_57
  DataType: void
  OrigDataType: void
T_58: (in __outb : ptr32)
  Class: Eq_58
  DataType: (ptr Eq_58)
  OrigDataType: (ptr (fn T_63 (T_59, T_62)))
T_59: (in 0x03C9 : word16)
  Class: Eq_59
  DataType: word16
  OrigDataType: word16
T_60: (in al_38 >>u 0x01 : word16)
  Class: Eq_60
  DataType: uint16
  OrigDataType: uint16
T_61: (in DPB(ax_108, al_38 >>u 0x01, 0, 8) : word16)
  Class: Eq_61
  DataType: word16
  OrigDataType: word16
T_62: (in (byte) DPB(ax_108, al_38 >>u 0x01, 0, 8) : byte)
  Class: Eq_62
  DataType: byte
  OrigDataType: byte
T_63: (in __outb(0x03C9, (byte) DPB(ax_108, al_38 >>u 0x01, 0, 8)) : void)
  Class: Eq_63
  DataType: void
  OrigDataType: void
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
T_69: (in cx_32 - 0x0001 : word16)
  Class: Eq_45
  DataType: word16
  OrigDataType: word16
T_70: (in 0x00 : byte)
  Class: Eq_70
  DataType: byte
  OrigDataType: byte
T_71: (in DPB(ax_108, 0x00, 0, 8) : word16)
  Class: Eq_11
  DataType: uint16
  OrigDataType: word16
T_72: (in (byte) cx_32 : byte)
  Class: Eq_43
  DataType: byte
  OrigDataType: byte
T_73: (in 0x0000 : word16)
  Class: Eq_45
  DataType: word16
  OrigDataType: word16
T_74: (in cx_32 != 0x0000 : bool)
  Class: Eq_74
  DataType: bool
  OrigDataType: bool
T_75: (in cl_57 : byte)
  Class: Eq_75
  DataType: byte
  OrigDataType: byte
T_76: (in 0x40 : byte)
  Class: Eq_75
  DataType: byte
  OrigDataType: byte
T_77: (in cx_58 : word16)
  Class: Eq_77
  DataType: word16
  OrigDataType: word16
T_78: (in 0x40 : byte)
  Class: Eq_78
  DataType: byte
  OrigDataType: byte
T_79: (in DPB(cx_32, 0x40, 0, 8) : word16)
  Class: Eq_77
  DataType: word16
  OrigDataType: word16
T_80: (in __outb : ptr32)
  Class: Eq_80
  DataType: (ptr Eq_80)
  OrigDataType: (ptr (fn T_83 (T_81, T_82)))
T_81: (in 0x03C9 : word16)
  Class: Eq_81
  DataType: word16
  OrigDataType: word16
T_82: (in 0x3F : byte)
  Class: Eq_82
  DataType: byte
  OrigDataType: byte
T_83: (in __outb(0x03C9, 0x3F) : void)
  Class: Eq_83
  DataType: void
  OrigDataType: void
T_84: (in __outb : ptr32)
  Class: Eq_84
  DataType: (ptr Eq_84)
  OrigDataType: (ptr (fn T_92 (T_85, T_91)))
T_85: (in 0x03C9 : word16)
  Class: Eq_85
  DataType: word16
  OrigDataType: word16
T_86: (in 0x3F : byte)
  Class: Eq_86
  DataType: byte
  OrigDataType: byte
T_87: (in 0x3F - cl_57 : byte)
  Class: Eq_87
  DataType: uint8
  OrigDataType: uint8
T_88: (in 0x01 : byte)
  Class: Eq_88
  DataType: uint8
  OrigDataType: uint8
T_89: (in 0x3F - cl_57 >>u 0x01 : word16)
  Class: Eq_89
  DataType: uint16
  OrigDataType: uint16
T_90: (in 0x1F : byte)
  Class: Eq_90
  DataType: byte
  OrigDataType: byte
T_91: (in (0x3F - cl_57 >>u 0x01) + 0x1F : byte)
  Class: Eq_91
  DataType: byte
  OrigDataType: byte
T_92: (in __outb(0x03C9, (0x3F - cl_57 >>u 0x01) + 0x1F) : void)
  Class: Eq_92
  DataType: void
  OrigDataType: void
T_93: (in __outb : ptr32)
  Class: Eq_93
  DataType: (ptr Eq_93)
  OrigDataType: (ptr (fn T_96 (T_94, T_95)))
T_94: (in 0x03C9 : word16)
  Class: Eq_94
  DataType: word16
  OrigDataType: word16
T_95: (in 0x00 : byte)
  Class: Eq_95
  DataType: byte
  OrigDataType: byte
T_96: (in __outb(0x03C9, 0x00) : void)
  Class: Eq_96
  DataType: void
  OrigDataType: void
T_97: (in 0x0001 : word16)
  Class: Eq_97
  DataType: word16
  OrigDataType: word16
T_98: (in cx_58 - 0x0001 : word16)
  Class: Eq_77
  DataType: word16
  OrigDataType: word16
T_99: (in 0x00 : byte)
  Class: Eq_99
  DataType: byte
  OrigDataType: byte
T_100: (in DPB(ax_108, 0x00, 0, 8) : word16)
  Class: Eq_11
  DataType: uint16
  OrigDataType: word16
T_101: (in (byte) cx_58 : byte)
  Class: Eq_75
  DataType: byte
  OrigDataType: byte
T_102: (in 0x0000 : word16)
  Class: Eq_77
  DataType: word16
  OrigDataType: word16
T_103: (in cx_58 != 0x0000 : bool)
  Class: Eq_103
  DataType: bool
  OrigDataType: bool
T_104: (in di_76 : (memptr (ptr Eq_124) uint16))
  Class: Eq_104
  DataType: (memptr (ptr Eq_124) uint16)
  OrigDataType: (memptr T_124 (struct 0002 (0 T_127 t0000)))
T_105: (in 0x0200 : word16)
  Class: Eq_104
  DataType: (memptr (ptr Eq_124) uint16)
  OrigDataType: word16
T_106: (in cx_77 : word16)
  Class: Eq_106
  DataType: word16
  OrigDataType: word16
T_107: (in 0x3F20 : word16)
  Class: Eq_106
  DataType: word16
  OrigDataType: word16
T_108: (in ch_91 : byte)
  Class: Eq_108
  DataType: byte
  OrigDataType: byte
T_109: (in dh_92 : byte)
  Class: Eq_109
  DataType: byte
  OrigDataType: byte
T_110: (in dl_93 : byte)
  Class: Eq_110
  DataType: byte
  OrigDataType: byte
T_111: (in msdos_get_system_time : ptr32)
  Class: Eq_111
  DataType: (ptr Eq_111)
  OrigDataType: (ptr (fn T_119 (T_116, T_117, T_118)))
T_112: (in signature of msdos_get_system_time : void)
  Class: Eq_111
  DataType: (ptr Eq_111)
  OrigDataType: 
T_113: (in chOut : ptr16)
  Class: Eq_113
  DataType: (ptr byte)
  OrigDataType: ptr16
T_114: (in dhOut : ptr16)
  Class: Eq_114
  DataType: (ptr byte)
  OrigDataType: ptr16
T_115: (in dlOut : ptr16)
  Class: Eq_115
  DataType: (ptr byte)
  OrigDataType: ptr16
T_116: (in out ch_91 : ptr16)
  Class: Eq_113
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_117: (in out dh_92 : ptr16)
  Class: Eq_114
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_118: (in out dl_93 : ptr16)
  Class: Eq_115
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_119: (in msdos_get_system_time(out ch_91, out dh_92, out dl_93) : byte)
  Class: Eq_119
  DataType: byte
  OrigDataType: byte
T_120: (in 0x03C9 : word16)
  Class: Eq_120
  DataType: word16
  OrigDataType: word16
T_121: (in ds : (ptr Eq_121))
  Class: Eq_121
  DataType: (ptr Eq_121)
  OrigDataType: (ptr (segment (1FF T_375 t01FF) (200 (arr T_403) a0200) (7FA0 (arr T_404) a7FA0) (8040 T_120 t8040)))
T_122: (in 0x8040 : word16)
  Class: Eq_122
  DataType: (memptr (ptr Eq_121) word16)
  OrigDataType: (memptr T_121 (struct (0 T_123 t0000)))
T_123: (in Mem95[ds:0x8040:word16] : word16)
  Class: Eq_120
  DataType: word16
  OrigDataType: word16
T_124: (in es : (ptr Eq_124))
  Class: Eq_124
  DataType: (ptr Eq_124)
  OrigDataType: (ptr (segment (200 (arr T_400) a0200)))
T_125: (in 0x0000 : word16)
  Class: Eq_125
  DataType: word16
  OrigDataType: word16
T_126: (in di_76 + 0x0000 : word16)
  Class: Eq_126
  DataType: word16
  OrigDataType: word16
T_127: (in Mem84[es:di_76 + 0x0000:word16] : word16)
  Class: Eq_11
  DataType: uint16
  OrigDataType: word16
T_128: (in 0x0002 : word16)
  Class: Eq_128
  DataType: word16
  OrigDataType: word16
T_129: (in di_76 + 0x0002 : word16)
  Class: Eq_104
  DataType: (memptr (ptr Eq_124) uint16)
  OrigDataType: word16
T_130: (in 0x0001 : word16)
  Class: Eq_130
  DataType: word16
  OrigDataType: word16
T_131: (in cx_77 - 0x0001 : word16)
  Class: Eq_106
  DataType: word16
  OrigDataType: word16
T_132: (in 0x0000 : word16)
  Class: Eq_106
  DataType: word16
  OrigDataType: word16
T_133: (in cx_77 == 0x0000 : bool)
  Class: Eq_133
  DataType: bool
  OrigDataType: bool
T_134: (in cx_114 : word16)
  Class: Eq_134
  DataType: word16
  OrigDataType: word16
T_135: (in 0x0001 : word16)
  Class: Eq_135
  DataType: word16
  OrigDataType: word16
T_136: (in cx_114 - 0x0001 : word16)
  Class: Eq_134
  DataType: word16
  OrigDataType: word16
T_137: (in 0x0000 : word16)
  Class: Eq_134
  DataType: word16
  OrigDataType: word16
T_138: (in cx_114 != 0x0000 : bool)
  Class: Eq_138
  DataType: bool
  OrigDataType: bool
T_139: (in si_111 : (memptr (ptr Eq_121) Eq_139))
  Class: Eq_139
  DataType: (memptr (ptr Eq_121) Eq_139)
  OrigDataType: (memptr T_121 (struct 0001 (0 T_146 t0000)))
T_140: (in 0x00A0 : word16)
  Class: Eq_140
  DataType: word16
  OrigDataType: word16
T_141: (in si_111 - 0x00A0 : word16)
  Class: Eq_139
  DataType: (memptr (ptr Eq_121) Eq_139)
  OrigDataType: word16
T_142: (in 0x0140 : word16)
  Class: Eq_142
  DataType: uint16
  OrigDataType: word16
T_143: (in bx : word16)
  Class: Eq_142
  DataType: Eq_142
  OrigDataType: (memptr T_121 (struct (7FA0 T_363 t7FA0)))
T_144: (in 0x0000 : word16)
  Class: Eq_144
  DataType: word16
  OrigDataType: word16
T_145: (in si_111 + 0x0000 : word16)
  Class: Eq_145
  DataType: word16
  OrigDataType: word16
T_146: (in Mem95[ds:si_111 + 0x0000:byte] : byte)
  Class: Eq_146
  DataType: Eq_146
  OrigDataType: byte
T_147: (in DPB(ax_108, (ds->*si_111).t0000, 8, 8) : word16)
  Class: Eq_11
  DataType: uint16
  OrigDataType: word16
T_148: (in 0xA000 : selector)
  Class: Eq_121
  DataType: (ptr Eq_121)
  OrigDataType: (ptr (segment (0 (arr T_401) a0000) (200 (arr T_402) a0200)))
T_149: (in di_121 : (memptr (ptr Eq_121) uint16))
  Class: Eq_149
  DataType: (memptr (ptr Eq_121) uint16)
  OrigDataType: (memptr T_148 (struct 0002 (0 T_152 t0000)))
T_150: (in 0x0000 : word16)
  Class: Eq_150
  DataType: word16
  OrigDataType: word16
T_151: (in di_121 + 0x0000 : word16)
  Class: Eq_151
  DataType: word16
  OrigDataType: word16
T_152: (in Mem138[0xA000:di_121 + 0x0000:word16] : word16)
  Class: Eq_11
  DataType: uint16
  OrigDataType: word16
T_153: (in 0x0001 : word16)
  Class: Eq_153
  DataType: word16
  OrigDataType: word16
T_154: (in si_111 + 0x0001 : word16)
  Class: Eq_139
  DataType: (memptr (ptr Eq_121) Eq_139)
  OrigDataType: word16
T_155: (in 0x0002 : word16)
  Class: Eq_155
  DataType: word16
  OrigDataType: word16
T_156: (in di_121 + 0x0002 : word16)
  Class: Eq_149
  DataType: (memptr (ptr Eq_121) uint16)
  OrigDataType: word16
T_157: (in 0x0001 : word16)
  Class: Eq_157
  DataType: word16
  OrigDataType: word16
T_158: (in bx - 0x0001 : word16)
  Class: Eq_142
  DataType: Eq_142
  OrigDataType: word16
T_159: (in 0x0000 : word16)
  Class: Eq_142
  DataType: uint16
  OrigDataType: word16
T_160: (in bx != 0x0000 : bool)
  Class: Eq_160
  DataType: bool
  OrigDataType: bool
T_161: (in ss : selector)
  Class: Eq_161
  DataType: (ptr Eq_161)
  OrigDataType: (ptr (segment))
T_162: (in fp : ptr16)
  Class: Eq_162
  DataType: Eq_162
  OrigDataType: (union ((union (ptr16 u0) ((memptr T_161 (struct (FFFFFFFE T_169 tFFFFFFFE))) u1)) u0) ((union (ptr16 u0) ((memptr T_161 (struct (FFFFFFFA T_176 tFFFFFFFA))) u1)) u1) ((union (ptr16 u0) ((memptr T_161 (struct (FFFFFFFC T_165 tFFFFFFFC))) u1)) u2) ((union (ptr16 u0) ((memptr T_161 (struct (FFFFFFFC T_172 tFFFFFFFC))) u1)) u3) ((memptr T_161 (struct (FFFFFFFE T_264 tFFFFFFFE))) u4))
T_163: (in 0x0004 : word16)
  Class: Eq_163
  DataType: word16
  OrigDataType: word16
T_164: (in fp - 0x0004 : word16)
  Class: Eq_164
  DataType: word16
  OrigDataType: word16
T_165: (in Mem154[ss:fp - 0x0004:word16] : word16)
  Class: Eq_121
  DataType: (ptr Eq_121)
  OrigDataType: word16
T_166: (in 0x0200 : word16)
  Class: Eq_166
  DataType: word16
  OrigDataType: word16
T_167: (in 0x0002 : word16)
  Class: Eq_167
  DataType: word16
  OrigDataType: word16
T_168: (in fp - 0x0002 : word16)
  Class: Eq_168
  DataType: word16
  OrigDataType: word16
T_169: (in Mem161[ss:fp - 0x0002:word16] : word16)
  Class: Eq_166
  DataType: word16
  OrigDataType: word16
T_170: (in 0x0004 : word16)
  Class: Eq_170
  DataType: word16
  OrigDataType: word16
T_171: (in fp - 0x0004 : word16)
  Class: Eq_171
  DataType: word16
  OrigDataType: word16
T_172: (in Mem163[ss:fp - 0x0004:word16] : word16)
  Class: Eq_139
  DataType: (memptr (ptr Eq_121) Eq_139)
  OrigDataType: word16
T_173: (in 0x3E80 : word16)
  Class: Eq_173
  DataType: word16
  OrigDataType: word16
T_174: (in 0x0006 : word16)
  Class: Eq_174
  DataType: word16
  OrigDataType: word16
T_175: (in fp - 0x0006 : word16)
  Class: Eq_175
  DataType: word16
  OrigDataType: word16
T_176: (in Mem169[ss:fp - 0x0006:word16] : word16)
  Class: Eq_173
  DataType: word16
  OrigDataType: word16
T_177: (in di_158 : (memptr (ptr Eq_121) Eq_139))
  Class: Eq_139
  DataType: (memptr (ptr Eq_121) Eq_139)
  OrigDataType: (memptr T_148 (struct 0001 (0 T_189 t0000)))
T_178: (in 0x0200 : word16)
  Class: Eq_139
  DataType: (memptr (ptr Eq_121) Eq_139)
  OrigDataType: word16
T_179: (in si_164 : (memptr (ptr Eq_121) Eq_179))
  Class: Eq_179
  DataType: (memptr (ptr Eq_121) Eq_179)
  OrigDataType: (memptr T_121 (struct 0001 (FFFFFFFE T_230 tFFFFFFFE) (0 T_221 t0000) (9F T_217 t009F)))
T_180: (in 0x00A0 : word16)
  Class: Eq_180
  DataType: word16
  OrigDataType: word16
T_181: (in si_111 + 0x00A0 : word16)
  Class: Eq_179
  DataType: (memptr (ptr Eq_121) Eq_179)
  OrigDataType: word16
T_182: (in cx_165 : word16)
  Class: Eq_182
  DataType: word16
  OrigDataType: word16
T_183: (in 0x3E80 : word16)
  Class: Eq_182
  DataType: word16
  OrigDataType: word16
T_184: (in ax_170 : uint16)
  Class: Eq_184
  DataType: uint16
  OrigDataType: uint16
T_185: (in 0x0000 : word16)
  Class: Eq_184
  DataType: uint16
  OrigDataType: word16
T_186: (in al_198 : Eq_146)
  Class: Eq_146
  DataType: Eq_146
  OrigDataType: byte
T_187: (in 0x0000 : word16)
  Class: Eq_187
  DataType: word16
  OrigDataType: word16
T_188: (in di_158 + 0x0000 : word16)
  Class: Eq_188
  DataType: word16
  OrigDataType: word16
T_189: (in Mem210[0xA000:di_158 + 0x0000:byte] : byte)
  Class: Eq_146
  DataType: Eq_146
  OrigDataType: byte
T_190: (in 0x0001 : word16)
  Class: Eq_190
  DataType: word16
  OrigDataType: word16
T_191: (in di_158 + 0x0001 : word16)
  Class: Eq_139
  DataType: (memptr (ptr Eq_121) Eq_139)
  OrigDataType: word16
T_192: (in 0x0001 : word16)
  Class: Eq_192
  DataType: word16
  OrigDataType: word16
T_193: (in cx_165 - 0x0001 : word16)
  Class: Eq_182
  DataType: word16
  OrigDataType: word16
T_194: (in 0x0000 : word16)
  Class: Eq_182
  DataType: word16
  OrigDataType: word16
T_195: (in cx_165 != 0x0000 : bool)
  Class: Eq_195
  DataType: bool
  OrigDataType: bool
T_196: (in ax_195 : uint16)
  Class: Eq_196
  DataType: uint16
  OrigDataType: uint16
T_197: (in 0x0002 : word16)
  Class: Eq_197
  DataType: uint16
  OrigDataType: uint16
T_198: (in ax_195 >>u 0x0002 : word16)
  Class: Eq_198
  DataType: uint16
  OrigDataType: uint16
T_199: (in 0x0001 : word16)
  Class: Eq_199
  DataType: word16
  OrigDataType: word16
T_200: (in (ax_195 >>u 0x0002) - 0x0001 : word16)
  Class: Eq_184
  DataType: uint16
  OrigDataType: word16
T_201: (in ax_195 >>u 0x0002 : word16)
  Class: Eq_201
  DataType: uint16
  OrigDataType: uint16
T_202: (in (ax_195 >>u 0x0002) - 0x0001 : word16)
  Class: Eq_202
  DataType: word16
  OrigDataType: word16
T_203: (in (byte) ((ax_195 >>u 0x0002) - 0x0001) : byte)
  Class: Eq_146
  DataType: Eq_146
  OrigDataType: byte
T_204: (in ax_195 >>u 0x0002 : word16)
  Class: Eq_204
  DataType: uint16
  OrigDataType: uint16
T_205: (in 0x0001 : word16)
  Class: Eq_204
  DataType: uint16
  OrigDataType: word16
T_206: (in ax_195 >>u 0x0002 == 0x0001 : bool)
  Class: Eq_206
  DataType: bool
  OrigDataType: bool
T_207: (in ax_195 >>u 0x0002 : word16)
  Class: Eq_207
  DataType: uint16
  OrigDataType: uint16
T_208: (in 0x0002 : word16)
  Class: Eq_208
  DataType: word16
  OrigDataType: word16
T_209: (in (ax_195 >>u 0x0002) - 0x0002 : word16)
  Class: Eq_184
  DataType: uint16
  OrigDataType: word16
T_210: (in ax_195 >>u 0x0002 : word16)
  Class: Eq_210
  DataType: uint16
  OrigDataType: uint16
T_211: (in (ax_195 >>u 0x0002) - 0x0002 : word16)
  Class: Eq_211
  DataType: word16
  OrigDataType: word16
T_212: (in (byte) ((ax_195 >>u 0x0002) - 0x0002) : byte)
  Class: Eq_146
  DataType: Eq_146
  OrigDataType: byte
T_213: (in 0x0001 : word16)
  Class: Eq_213
  DataType: word16
  OrigDataType: word16
T_214: (in si_164 + 0x0001 : word16)
  Class: Eq_179
  DataType: (memptr (ptr Eq_121) Eq_179)
  OrigDataType: word16
T_215: (in 0x009F : word16)
  Class: Eq_215
  DataType: word16
  OrigDataType: word16
T_216: (in si_164 + 0x009F : word16)
  Class: Eq_216
  DataType: word16
  OrigDataType: word16
T_217: (in Mem169[ds:si_164 + 0x009F:byte] : byte)
  Class: Eq_217
  DataType: byte
  OrigDataType: byte
T_218: (in DPB(bx, (ds->*si_164).b009F, 0, 8) : word16)
  Class: Eq_142
  DataType: Eq_142
  OrigDataType: word16
T_219: (in 0x0000 : word16)
  Class: Eq_219
  DataType: word16
  OrigDataType: word16
T_220: (in si_164 + 0x0000 : word16)
  Class: Eq_220
  DataType: word16
  OrigDataType: word16
T_221: (in Mem169[ds:si_164 + 0x0000:byte] : byte)
  Class: Eq_221
  DataType: byte
  OrigDataType: byte
T_222: (in DPB(ax_170, (ds->*si_164).b0000, 0, 8) : word16)
  Class: Eq_222
  DataType: word16
  OrigDataType: word16
T_223: (in 0x0000 : word16)
  Class: Eq_223
  DataType: word16
  OrigDataType: word16
T_224: (in si_164 + 0x0000 : word16)
  Class: Eq_224
  DataType: word16
  OrigDataType: word16
T_225: (in Mem169[ds:si_164 + 0x0000:byte] : byte)
  Class: Eq_221
  DataType: byte
  OrigDataType: byte
T_226: (in DPB(bx, (ds->*si_164).b0000, 0, 8) : word16)
  Class: Eq_226
  DataType: word16
  OrigDataType: word16
T_227: (in DPB(ax_170, (ds->*si_164).b0000, 0, 8) + DPB(bx, (ds->*si_164).b0000, 0, 8) : word16)
  Class: Eq_227
  DataType: word16
  OrigDataType: word16
T_228: (in 0x0002 : word16)
  Class: Eq_228
  DataType: word16
  OrigDataType: word16
T_229: (in si_164 - 0x0002 : word16)
  Class: Eq_229
  DataType: word16
  OrigDataType: word16
T_230: (in Mem169[ds:si_164 - 0x0002:byte] : byte)
  Class: Eq_230
  DataType: byte
  OrigDataType: byte
T_231: (in DPB(bx, (ds->*si_164).b0000, 0, 8) : word16)
  Class: Eq_231
  DataType: word16
  OrigDataType: word16
T_232: (in DPB(ax_170, (ds->*si_164).b0000, 0, 8) + DPB(bx, (ds->*si_164).b0000, 0, 8) + DPB(bx, (ds->*si_164).b0000, 0, 8) : word16)
  Class: Eq_232
  DataType: word16
  OrigDataType: word16
T_233: (in DPB(ax_170, (ds->*si_164).b0000, 0, 8) + DPB(bx, (ds->*si_164).b0000, 0, 8) + DPB(bx, (ds->*si_164).b0000, 0, 8) + bx : word16)
  Class: Eq_196
  DataType: uint16
  OrigDataType: word16
T_234: (in ax_195 >>u 0x0002 : word16)
  Class: Eq_184
  DataType: uint16
  OrigDataType: uint16
T_235: (in ax_195 >>u 0x0002 : word16)
  Class: Eq_235
  DataType: uint16
  OrigDataType: uint16
T_236: (in (byte) (ax_195 >>u 0x0002) : byte)
  Class: Eq_146
  DataType: Eq_146
  OrigDataType: byte
T_237: (in ax_195 >>u 0x0002 : word16)
  Class: Eq_237
  DataType: uint16
  OrigDataType: uint16
T_238: (in 0x0000 : word16)
  Class: Eq_237
  DataType: uint16
  OrigDataType: word16
T_239: (in ax_195 >>u 0x0002 == 0x0000 : bool)
  Class: Eq_239
  DataType: bool
  OrigDataType: bool
T_240: (in __inb : ptr32)
  Class: Eq_240
  DataType: (ptr Eq_240)
  OrigDataType: (ptr (fn T_242 (T_241)))
T_241: (in 0x03DA : word16)
  Class: Eq_241
  DataType: word16
  OrigDataType: word16
T_242: (in __inb(0x03DA) : byte)
  Class: Eq_242
  DataType: byte
  OrigDataType: byte
T_243: (in 0x08 : byte)
  Class: Eq_243
  DataType: byte
  OrigDataType: byte
T_244: (in __inb(0x03DA) & 0x08 : byte)
  Class: Eq_244
  DataType: byte
  OrigDataType: byte
T_245: (in 0x00 : byte)
  Class: Eq_244
  DataType: byte
  OrigDataType: byte
T_246: (in (__inb(0x03DA) & 0x08) == 0x00 : bool)
  Class: Eq_246
  DataType: bool
  OrigDataType: bool
T_247: (in al_220 : byte)
  Class: Eq_247
  DataType: byte
  OrigDataType: byte
T_248: (in __inb : ptr32)
  Class: Eq_248
  DataType: (ptr Eq_248)
  OrigDataType: (ptr (fn T_250 (T_249)))
T_249: (in 0x03DA : word16)
  Class: Eq_249
  DataType: word16
  OrigDataType: word16
T_250: (in __inb(0x03DA) : byte)
  Class: Eq_247
  DataType: byte
  OrigDataType: byte
T_251: (in 0x08 : byte)
  Class: Eq_251
  DataType: byte
  OrigDataType: byte
T_252: (in al_220 & 0x08 : byte)
  Class: Eq_252
  DataType: byte
  OrigDataType: byte
T_253: (in 0x00 : byte)
  Class: Eq_252
  DataType: byte
  OrigDataType: byte
T_254: (in (al_220 & 0x08) != 0x00 : bool)
  Class: Eq_254
  DataType: bool
  OrigDataType: bool
T_255: (in cx_225 : word16)
  Class: Eq_182
  DataType: word16
  OrigDataType: word16
T_256: (in di_229 : (memptr (ptr Eq_121) Eq_256))
  Class: Eq_256
  DataType: (memptr (ptr Eq_121) Eq_256)
  OrigDataType: (memptr T_148 (struct 0001 (0 T_269 t0000)))
T_257: (in 0xA000 : word16)
  Class: Eq_256
  DataType: (memptr (ptr Eq_121) Eq_256)
  OrigDataType: word16
T_258: (in si_231 : (memptr (ptr Eq_121) Eq_139))
  Class: Eq_139
  DataType: (memptr (ptr Eq_121) Eq_139)
  OrigDataType: (memptr T_121 (struct 0001 (0 T_269 t0000)))
T_259: (in cx_246 : word16)
  Class: Eq_259
  DataType: word16
  OrigDataType: word16
T_260: (in 0x50 : byte)
  Class: Eq_260
  DataType: byte
  OrigDataType: byte
T_261: (in DPB(cx_225, 0x50, 0, 8) : word16)
  Class: Eq_259
  DataType: word16
  OrigDataType: word16
T_262: (in 0x0002 : word16)
  Class: Eq_262
  DataType: word16
  OrigDataType: word16
T_263: (in fp - 0x0002 : word16)
  Class: Eq_263
  DataType: word16
  OrigDataType: word16
T_264: (in Mem248[ss:fp - 0x0002:word16] : word16)
  Class: Eq_259
  DataType: word16
  OrigDataType: word16
T_265: (in si_249 : (memptr (ptr Eq_121) Eq_146))
  Class: Eq_265
  DataType: (memptr (ptr Eq_121) Eq_146)
  OrigDataType: (memptr T_121 (struct 0002 (0 T_294 t0000)))
T_266: (in 0x7FA0 : word16)
  Class: Eq_265
  DataType: (memptr (ptr Eq_121) Eq_146)
  OrigDataType: word16
T_267: (in 0x0000 : word16)
  Class: Eq_267
  DataType: word16
  OrigDataType: word16
T_268: (in si_231 + 0x0000 : word16)
  Class: Eq_268
  DataType: word16
  OrigDataType: word16
T_269: (in Mem210[ds:si_231 + 0x0000:byte] : byte)
  Class: Eq_146
  DataType: Eq_146
  OrigDataType: byte
T_270: (in 0x0000 : word16)
  Class: Eq_270
  DataType: word16
  OrigDataType: word16
T_271: (in di_229 + 0x0000 : word16)
  Class: Eq_271
  DataType: word16
  OrigDataType: word16
T_272: (in Mem239[0xA000:di_229 + 0x0000:byte] : byte)
  Class: Eq_146
  DataType: Eq_146
  OrigDataType: byte
T_273: (in 0x0001 : word16)
  Class: Eq_273
  DataType: word16
  OrigDataType: word16
T_274: (in si_231 + 0x0001 : word16)
  Class: Eq_139
  DataType: (memptr (ptr Eq_121) Eq_139)
  OrigDataType: word16
T_275: (in 0x0001 : word16)
  Class: Eq_275
  DataType: word16
  OrigDataType: word16
T_276: (in di_229 + 0x0001 : word16)
  Class: Eq_256
  DataType: (memptr (ptr Eq_121) Eq_256)
  OrigDataType: word16
T_277: (in 0x0001 : word16)
  Class: Eq_277
  DataType: word16
  OrigDataType: word16
T_278: (in cx_225 - 0x0001 : word16)
  Class: Eq_182
  DataType: word16
  OrigDataType: word16
T_279: (in 0x0000 : word16)
  Class: Eq_182
  DataType: word16
  OrigDataType: word16
T_280: (in cx_225 == 0x0000 : bool)
  Class: Eq_280
  DataType: bool
  OrigDataType: bool
T_281: (in al_266 : byte)
  Class: Eq_281
  DataType: byte
  OrigDataType: byte
T_282: (in bios_kbd_check_keystroke : ptr32)
  Class: Eq_282
  DataType: (ptr Eq_282)
  OrigDataType: (ptr (fn T_286 (T_285)))
T_283: (in signature of bios_kbd_check_keystroke : void)
  Class: Eq_282
  DataType: (ptr Eq_282)
  OrigDataType: 
T_284: (in alOut : ptr16)
  Class: Eq_284
  DataType: (ptr byte)
  OrigDataType: ptr16
T_285: (in out al_266 : ptr16)
  Class: Eq_284
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_286: (in bios_kbd_check_keystroke(out al_266) : byte)
  Class: Eq_286
  DataType: byte
  OrigDataType: byte
T_287: (in cx_262 : word16)
  Class: Eq_287
  DataType: word16
  OrigDataType: word16
T_288: (in 0x0200 : word16)
  Class: Eq_287
  DataType: word16
  OrigDataType: word16
T_289: (in al_220 & 0x08 : byte)
  Class: Eq_289
  DataType: byte
  OrigDataType: byte
T_290: (in 0x00 : byte)
  Class: Eq_289
  DataType: byte
  OrigDataType: byte
T_291: (in (al_220 & 0x08) != 0x00 : bool)
  Class: Eq_291
  DataType: bool
  OrigDataType: bool
T_292: (in 0x0000 : word16)
  Class: Eq_292
  DataType: word16
  OrigDataType: word16
T_293: (in si_249 + 0x0000 : word16)
  Class: Eq_293
  DataType: word16
  OrigDataType: word16
T_294: (in Mem248[ds:si_249 + 0x0000:word16] : word16)
  Class: Eq_146
  DataType: Eq_146
  OrigDataType: word16
T_295: (in 0x0000 : word16)
  Class: Eq_295
  DataType: word16
  OrigDataType: word16
T_296: (in di_229 + 0x0000 : word16)
  Class: Eq_296
  DataType: word16
  OrigDataType: word16
T_297: (in Mem256[0xA000:di_229 + 0x0000:word16] : word16)
  Class: Eq_146
  DataType: Eq_146
  OrigDataType: word16
T_298: (in 0x0002 : word16)
  Class: Eq_298
  DataType: word16
  OrigDataType: word16
T_299: (in si_249 + 0x0002 : word16)
  Class: Eq_265
  DataType: (memptr (ptr Eq_121) Eq_146)
  OrigDataType: word16
T_300: (in 0x0002 : word16)
  Class: Eq_300
  DataType: word16
  OrigDataType: word16
T_301: (in di_229 + 0x0002 : word16)
  Class: Eq_256
  DataType: (memptr (ptr Eq_121) Eq_256)
  OrigDataType: word16
T_302: (in 0x0001 : word16)
  Class: Eq_302
  DataType: word16
  OrigDataType: word16
T_303: (in cx_246 - 0x0001 : word16)
  Class: Eq_259
  DataType: word16
  OrigDataType: word16
T_304: (in 0x0000 : word16)
  Class: Eq_259
  DataType: word16
  OrigDataType: word16
T_305: (in cx_246 == 0x0000 : bool)
  Class: Eq_305
  DataType: bool
  OrigDataType: bool
T_306: (in 0x0000 : word16)
  Class: Eq_11
  DataType: uint16
  OrigDataType: word16
T_307: (in ax_286 : word16)
  Class: Eq_120
  DataType: word16
  OrigDataType: word16
T_308: (in 0x8040 : word16)
  Class: Eq_308
  DataType: (memptr (ptr Eq_121) word16)
  OrigDataType: (memptr T_121 (struct (0 T_309 t0000)))
T_309: (in Mem248[ds:0x8040:word16] : word16)
  Class: Eq_120
  DataType: word16
  OrigDataType: word16
T_310: (in ah_288 : byte)
  Class: Eq_310
  DataType: byte
  OrigDataType: byte
T_311: (in SLICE(ax_286, byte, 8) : byte)
  Class: Eq_310
  DataType: byte
  OrigDataType: byte
T_312: (in __rcr : ptr32)
  Class: Eq_312
  DataType: (ptr Eq_312)
  OrigDataType: (ptr (fn T_315 (T_310, T_313, T_314)))
T_313: (in 0x01 : byte)
  Class: Eq_313
  DataType: byte
  OrigDataType: byte
T_314: (in false : bool)
  Class: Eq_314
  DataType: bool
  OrigDataType: bool
T_315: (in __rcr(ah_288, 0x01, false) : byte)
  Class: Eq_315
  DataType: byte
  OrigDataType: byte
T_316: (in al_287 : byte)
  Class: Eq_316
  DataType: byte
  OrigDataType: byte
T_317: (in (byte) ax_286 : byte)
  Class: Eq_316
  DataType: byte
  OrigDataType: byte
T_318: (in __rcr : ptr32)
  Class: Eq_318
  DataType: (ptr Eq_318)
  OrigDataType: (ptr (fn T_324 (T_316, T_319, T_323)))
T_319: (in 0x01 : byte)
  Class: Eq_319
  DataType: byte
  OrigDataType: byte
T_320: (in 0x02 : byte)
  Class: Eq_320
  DataType: byte
  OrigDataType: byte
T_321: (in ah_288 & 0x02 : byte)
  Class: Eq_321
  DataType: byte
  OrigDataType: byte
T_322: (in 0x00 : byte)
  Class: Eq_321
  DataType: byte
  OrigDataType: byte
T_323: (in (ah_288 & 0x02) != 0x00 : bool)
  Class: Eq_323
  DataType: bool
  OrigDataType: bool
T_324: (in __rcr(al_287, 0x01, (ah_288 & 0x02) != 0x00) : byte)
  Class: Eq_324
  DataType: byte
  OrigDataType: byte
T_325: (in ax_304 : word16)
  Class: Eq_325
  DataType: word16
  OrigDataType: word16
T_326: (in __rcr : ptr32)
  Class: Eq_326
  DataType: (ptr Eq_326)
  OrigDataType: (ptr (fn T_333 (T_327, T_328, T_332)))
T_327: (in 0x00 : byte)
  Class: Eq_327
  DataType: byte
  OrigDataType: byte
T_328: (in 0x01 : byte)
  Class: Eq_328
  DataType: byte
  OrigDataType: byte
T_329: (in 0x02 : byte)
  Class: Eq_329
  DataType: byte
  OrigDataType: byte
T_330: (in al_287 & 0x02 : byte)
  Class: Eq_330
  DataType: byte
  OrigDataType: byte
T_331: (in 0x00 : byte)
  Class: Eq_330
  DataType: byte
  OrigDataType: byte
T_332: (in (al_287 & 0x02) != 0x00 : bool)
  Class: Eq_332
  DataType: bool
  OrigDataType: bool
T_333: (in __rcr(0x00, 0x01, (al_287 & 0x02) != 0x00) : byte)
  Class: Eq_333
  DataType: byte
  OrigDataType: byte
T_334: (in DPB(ax_286, __rcr(0x00, 0x01, (al_287 & 0x02) != 0x00), 0, 8) : word16)
  Class: Eq_334
  DataType: word16
  OrigDataType: word16
T_335: (in DPB(ax_286, __rcr(0x00, 0x01, (al_287 & 0x02) != 0x00), 0, 8) + ax_286 : word16)
  Class: Eq_325
  DataType: word16
  OrigDataType: word16
T_336: (in ax_307 : word16)
  Class: Eq_120
  DataType: word16
  OrigDataType: word16
T_337: (in SLICE(ax_304, byte, 8) : byte)
  Class: Eq_337
  DataType: byte
  OrigDataType: byte
T_338: (in 0x63 : byte)
  Class: Eq_338
  DataType: byte
  OrigDataType: byte
T_339: (in SLICE(ax_304, byte, 8) + 0x63 : byte)
  Class: Eq_339
  DataType: byte
  OrigDataType: byte
T_340: (in DPB(ax_304, SLICE(ax_304, byte, 8) + 0x63, 8, 8) : word16)
  Class: Eq_120
  DataType: word16
  OrigDataType: word16
T_341: (in 0x8040 : word16)
  Class: Eq_341
  DataType: (memptr (ptr Eq_121) word16)
  OrigDataType: (memptr T_121 (struct (0 T_342 t0000)))
T_342: (in Mem311[ds:0x8040:word16] : word16)
  Class: Eq_120
  DataType: word16
  OrigDataType: word16
T_343: (in bx_315 : uint16)
  Class: Eq_343
  DataType: uint16
  OrigDataType: uint16
T_344: (in 0xA0 : byte)
  Class: Eq_344
  DataType: byte
  OrigDataType: byte
T_345: (in DPB(bx, 0xA0, 0, 8) : word16)
  Class: Eq_343
  DataType: uint16
  OrigDataType: word16
T_346: (in dx_316 : Eq_142)
  Class: Eq_142
  DataType: Eq_142
  OrigDataType: (memptr T_121 (struct (7FA0 T_363 t7FA0)))
T_347: (in 0x0000 : word16)
  Class: Eq_347
  DataType: word16
  OrigDataType: word16
T_348: (in SEQ(0x0000, ax_307) : word32)
  Class: Eq_348
  DataType: word32
  OrigDataType: word32
T_349: (in SEQ(0x0000, ax_307) % bx_315 : uint16)
  Class: Eq_142
  DataType: Eq_142
  OrigDataType: uint16
T_350: (in ax_318 : uint16)
  Class: Eq_350
  DataType: uint16
  OrigDataType: word16
T_351: (in SEQ(dx_316, ax_307) : word32)
  Class: Eq_351
  DataType: uint32
  OrigDataType: uint32
T_352: (in SEQ(dx_316, ax_307) /u bx_315 : uint16)
  Class: Eq_350
  DataType: uint16
  OrigDataType: uint16
T_353: (in ax_324 : uint16)
  Class: Eq_353
  DataType: uint16
  OrigDataType: uint16
T_354: (in (byte) ax_318 : byte)
  Class: Eq_354
  DataType: byte
  OrigDataType: byte
T_355: (in SLICE(ax_318, byte, 8) : byte)
  Class: Eq_355
  DataType: byte
  OrigDataType: byte
T_356: (in (byte) ax_318 | SLICE(ax_318, byte, 8) : byte)
  Class: Eq_356
  DataType: byte
  OrigDataType: byte
T_357: (in DPB(ax_318, (byte) ax_318 | SLICE(ax_318, byte, 8), 0, 8) : word16)
  Class: Eq_353
  DataType: uint16
  OrigDataType: word16
T_358: (in 0x0001 : word16)
  Class: Eq_358
  DataType: uint16
  OrigDataType: uint16
T_359: (in ax_324 >>u 0x0001 : word16)
  Class: Eq_359
  DataType: uint16
  OrigDataType: uint16
T_360: (in (byte) (ax_324 >>u 0x0001) : byte)
  Class: Eq_360
  DataType: byte
  OrigDataType: byte
T_361: (in 0x7FA0 : word16)
  Class: Eq_361
  DataType: word16
  OrigDataType: word16
T_362: (in dx_316 + 0x7FA0 : word16)
  Class: Eq_362
  DataType: word16
  OrigDataType: word16
T_363: (in Mem328[ds:dx_316 + 0x7FA0:byte] : byte)
  Class: Eq_360
  DataType: byte
  OrigDataType: byte
T_364: (in ax_324 >>u 0x0001 : word16)
  Class: Eq_11
  DataType: uint16
  OrigDataType: uint16
T_365: (in 0x0001 : word16)
  Class: Eq_365
  DataType: word16
  OrigDataType: word16
T_366: (in cx_262 - 0x0001 : word16)
  Class: Eq_287
  DataType: word16
  OrigDataType: word16
T_367: (in 0x0000 : word16)
  Class: Eq_287
  DataType: word16
  OrigDataType: word16
T_368: (in cx_262 != 0x0000 : bool)
  Class: Eq_368
  DataType: bool
  OrigDataType: bool
T_369: (in 0x7D00 : word16)
  Class: Eq_134
  DataType: word16
  OrigDataType: word16
T_370: (in 0x0000 : word16)
  Class: Eq_149
  DataType: (memptr (ptr Eq_121) uint16)
  OrigDataType: word16
T_371: (in 0xA0 : byte)
  Class: Eq_371
  DataType: byte
  OrigDataType: byte
T_372: (in DPB(bx, 0xA0, 0, 8) : word16)
  Class: Eq_142
  DataType: Eq_142
  OrigDataType: word16
T_373: (in cx_348 : word16)
  Class: Eq_373
  DataType: word16
  OrigDataType: word16
T_374: (in 0x01FF : word16)
  Class: Eq_374
  DataType: (memptr (ptr Eq_121) byte)
  OrigDataType: (memptr T_121 (struct (0 T_375 t0000)))
T_375: (in Mem248[ds:0x01FF:byte] : byte)
  Class: Eq_375
  DataType: byte
  OrigDataType: byte
T_376: (in DPB(cx_262, ds->b01FF, 0, 8) : word16)
  Class: Eq_373
  DataType: word16
  OrigDataType: word16
T_377: (in 0x01FF : word16)
  Class: Eq_377
  DataType: (memptr (ptr Eq_121) byte)
  OrigDataType: (memptr T_121 (struct (0 T_375 t0000)))
T_378: (in Mem248[ds:0x01FF:byte] : byte)
  Class: Eq_375
  DataType: byte
  OrigDataType: byte
T_379: (in 0x01 : byte)
  Class: Eq_379
  DataType: byte
  OrigDataType: byte
T_380: (in ds->b01FF - 0x01 : byte)
  Class: Eq_375
  DataType: byte
  OrigDataType: byte
T_381: (in Mem350[ds:0x01FF:byte] : byte)
  Class: Eq_375
  DataType: byte
  OrigDataType: byte
T_382: (in 0x0001 : word16)
  Class: Eq_373
  DataType: word16
  OrigDataType: word16
T_383: (in cx_348 != 0x0001 : bool)
  Class: Eq_383
  DataType: bool
  OrigDataType: bool
T_384: (in 0x0000 : word16)
  Class: Eq_146
  DataType: word16
  OrigDataType: word16
T_385: (in 0x0000 : word16)
  Class: Eq_385
  DataType: word16
  OrigDataType: word16
T_386: (in di_229 + 0x0000 : word16)
  Class: Eq_386
  DataType: word16
  OrigDataType: word16
T_387: (in Mem342[0xA000:di_229 + 0x0000:word16] : word16)
  Class: Eq_146
  DataType: Eq_146
  OrigDataType: word16
T_388: (in 0x0002 : word16)
  Class: Eq_388
  DataType: word16
  OrigDataType: word16
T_389: (in di_229 + 0x0002 : word16)
  Class: Eq_256
  DataType: (memptr (ptr Eq_121) Eq_256)
  OrigDataType: word16
T_390: (in 0x0001 : word16)
  Class: Eq_390
  DataType: word16
  OrigDataType: word16
T_391: (in cx_262 - 0x0001 : word16)
  Class: Eq_287
  DataType: word16
  OrigDataType: word16
T_392: (in 0x0000 : word16)
  Class: Eq_287
  DataType: word16
  OrigDataType: word16
T_393: (in cx_262 == 0x0000 : bool)
  Class: Eq_393
  DataType: bool
  OrigDataType: bool
T_394: (in bios_video_set_mode : ptr32)
  Class: Eq_2
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (fn T_396 (T_395)))
T_395: (in 0x03 : byte)
  Class: Eq_4
  DataType: byte
  OrigDataType: byte
T_396: (in bios_video_set_mode(0x03) : void)
  Class: Eq_6
  DataType: void
  OrigDataType: void
T_397: (in msdos_terminate_program20 : ptr32)
  Class: Eq_397
  DataType: (ptr Eq_397)
  OrigDataType: (ptr (fn T_399 ()))
T_398: (in signature of msdos_terminate_program20 : void)
  Class: Eq_397
  DataType: (ptr Eq_397)
  OrigDataType: 
T_399: (in msdos_terminate_program20() : void)
  Class: Eq_399
  DataType: void
  OrigDataType: void
T_400:
  Class: Eq_400
  DataType: uint16
  OrigDataType: (struct 0002 (0 T_127 t0000))
T_401:
  Class: Eq_401
  DataType: uint16
  OrigDataType: (struct 0002 (0 T_152 t0000))
T_402:
  Class: Eq_402
  DataType: Eq_402
  OrigDataType: (struct 0001 (0 T_189 t0000))
T_403:
  Class: Eq_402
  DataType: Eq_402
  OrigDataType: (struct 0001 (0 T_269 t0000))
T_404:
  Class: Eq_404
  DataType: Eq_146
  OrigDataType: (struct 0002 (0 T_294 t0000))
T_405:
  Class: Eq_405
  DataType: Eq_405
  OrigDataType: 
T_406:
  Class: Eq_406
  DataType: Eq_406
  OrigDataType: 
T_407:
  Class: Eq_407
  DataType: Eq_407
  OrigDataType: 
T_408:
  Class: Eq_408
  DataType: Eq_408
  OrigDataType: 
*/
typedef Eq_121 Eq_1struct Globals {
	Eq_121 * ptrFFFA0000;	// FFFA0000
} Eq_1;

typedef void (Eq_2)(byte);

typedef void (Eq_7)(word16, byte);

typedef void (Eq_21)(word16, uint16);

typedef void (Eq_28)(word16, byte);

typedef void (Eq_32)(word16, byte);

typedef void (Eq_51)(word16, byte);

typedef void (Eq_58)(word16, byte);

typedef void (Eq_64)(word16, byte);

typedef void (Eq_80)(word16, byte);

typedef void (Eq_84)(word16, byte);

typedef void (Eq_93)(word16, byte);

typedef byte (Eq_111)(byte *, byte *, byte *);

typedef struct Eq_256;
 Eq_121[]Eq_402[]Eq_146[]Eq_256struct Eq_121 {
	struct Eq_256 tFFFFA000;	// FFFFA000
	uint16 a0000[];	// 0
	byte b01FF;	// 1FF
	Eq_402 a0200[];	// 200
	Eq_146 a7FA0[];	// 7FA0
	word16 w8040;	// 8040
	Eq_256 tA000;	// A000
} Eq_121;

typedef  Eq_124[]struct Eq_124 {
	uint16 a0200[];	// 200
} Eq_124;

typedef Eq_146 Eq_139struct Eq_139 {	// size: 1 1
	Eq_146 t0000;	// 0
} Eq_139;

typedef union Eq_142 {
	uint16 u0;
	Eq_405 Eq_121::* u1;
} Eq_142;

typedef union Eq_146 {
	byte u0;
	word16 u1;
} Eq_146;

typedef struct Eq_161 {
} Eq_161;

typedef union Eq_162 {
	Eq_406 Eq_161::* u0;
	Eq_408 u1;
} Eq_162;

typedef struct Eq_179 {	// size: 1 1
	byte bFFFFFFFE;	// FFFFFFFE
	byte b0000;	// 0
	byte b009F;	// 9F
} Eq_179;

typedef byte (Eq_240)(word16);

typedef byte (Eq_248)(word16);

typedef struct Eq_256 Eq_256;

typedef byte (Eq_282)(byte *);

typedef byte (Eq_312)(byte, byte, bool);

typedef byte (Eq_318)(byte, byte, bool);

typedef byte (Eq_326)(byte, byte, bool);

typedef void (Eq_397)();

typedef Eq_146 Eq_402struct Eq_402 {	// size: 1 1
	Eq_146 t0000;	// 0
} Eq_402;

typedef struct Eq_405 {
	byte b7FA0;	// 7FA0
} Eq_405;

typedef struct Eq_406 {
	word16 wFFFFFFFE;	// FFFFFFFE
} Eq_406;

typedef Eq_139struct Eq_407 {
	Eq_139 Eq_121::*ptrFFFFFFFC;	// FFFFFFFC
} Eq_407;

typedef union Eq_408 {
	ptr16 u0;
	Eq_407 Eq_161::* u1;
} Eq_408;

