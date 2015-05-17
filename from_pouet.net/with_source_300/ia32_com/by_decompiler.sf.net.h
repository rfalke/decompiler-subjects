// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_300/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFF80000 (ptr Eq_25) ptrFFF80000) (FFF90000 (ptr Eq_25) ptrFFF90000) (FFFB8000 (ptr Eq_25) ptrFFFB8000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_load_ROM_8x8_dbl_dot_patterns : ptr32)
	T_3 (in signature of bios_video_load_ROM_8x8_dbl_dot_patterns : void)
Eq_7: (fn void (byte))
	T_7 (in __syscall : ptr32)
Eq_14: (union "Eq_14" (cups16 u0) ((memptr (ptr Eq_25) Eq_236) u1))
	T_14 (in di_35 : Eq_14)
	T_15 (in 0x1FE0 : word16)
	T_33 (in di_80 + 0x0001 : word16)
	T_219 (in 0x0000 : word16)
Eq_25: (segment "Eq_25" (FFFFFF60 (arr byte 8318) aFFFFFF60) (FFFFFFFE (arr byte 8318) aFFFFFFFE) (0 (arr byte 8318) a0000) (2 (arr byte 8318) a0002) (A0 (arr byte 8318) a00A0) (FA0 (arr word16 2000) a0FA0) (FA2 (arr Eq_231 2000) a0FA2))
	T_25 (in 0x9000 : selector)
	T_123 (in 0x8000 : selector)
	T_196 (in 0xB800 : selector)
Eq_40: (fn byte (byte))
	T_40 (in __inb : ptr32)
Eq_44: (union "Eq_44" (bcu8 u0) (word16 u1))
	T_44 (in al_48 : byte)
	T_52 (in Mem0[0x9000:di_35 + 0x0000:byte] + Mem0[0x9000:di_35 + 0x0002:byte] + C_38 : word16)
	T_54 (in 0x00 : byte)
Eq_53: (union "Eq_53" (bcu8 u0) (word16 u1))
	T_53 (in ah_51 : Eq_53)
	T_56 (in ah_14 + (al_48 <u 0x00) : word16)
	T_62 (in 0x00 : byte)
Eq_57: (union "Eq_57" (bcu8 u0) (word16 u1))
	T_57 (in al_54 : byte)
	T_64 (in al_48 + Mem0[0x9000:di_35 + 0x00A0:byte] + (ah_51 <u 0x00) : word16)
	T_66 (in 0x00 : byte)
Eq_65: (union "Eq_65" (bcu8 u0) (word16 u1))
	T_65 (in ah_57 : Eq_65)
	T_68 (in ah_51 + (al_54 <u 0x00) : word16)
	T_73 (in 0x00 : byte)
Eq_75: (union "Eq_75" (bcu8 u0) (cups16 u1))
	T_75 (in al_54 + Mem0[0x9000:di_35 - 0x0002:byte] + (ah_57 <u 0x00) : word16)
	T_76 (in 0x00 : byte)
Eq_92: (fn byte (word16))
	T_92 (in __inb : ptr32)
Eq_101: (union "Eq_101" (int16 u0) ((memptr (ptr Eq_25) Eq_237) u1))
	T_101 (in di_122 : Eq_101)
	T_102 (in 0x0FA0 : word16)
	T_138 (in di_119 - 0x0002 : word16)
Eq_117: (segment "Eq_117" (1E7 (arr word16) a01E7))
	T_117 (in ds : (ptr Eq_117))
Eq_127: (union "Eq_127" (int16 u0) ((memptr (ptr Eq_25) Eq_238) u1))
	T_127 (in di_117 : Eq_127)
	T_128 (in -di_122 : word16)
Eq_141: (union "Eq_141" (int16 u0) ((memptr (ptr Eq_25) Eq_239) u1))
	T_141 (in di_125 : Eq_141)
	T_142 (in 0x0000 : word16)
	T_153 (in di_125 + 0x00A0 : word16)
	T_176 (in -di_190 : word16)
	T_183 (in di_125 - 0x1FDE : word16)
Eq_143: (struct "Eq_143" 003B (0 word16 w0000))
	T_143 (in si_126 : (memptr (ptr Eq_25) Eq_143))
	T_144 (in 0x0000 : word16)
	T_157 (in si_148 + 0x0001 : word16)
	T_185 (in si_148 + 0x003B : word16)
Eq_169: (union "Eq_169" (int16 u0) ((memptr (ptr Eq_25) Eq_240) u1))
	T_169 (in di_190 : Eq_169)
	T_170 (in -di_125 : word16)
Eq_205: (segment "Eq_205")
	T_205 (in ss : selector)
Eq_206: (union "Eq_206" (ptr16 u0) ((memptr (ptr Eq_205) Eq_241) u1))
	T_206 (in fp : ptr16)
Eq_211: (fn byte ((ptr byte)))
	T_211 (in bios_kbd_check_keystroke : ptr32)
	T_212 (in signature of bios_kbd_check_keystroke : void)
Eq_221: (fn void (byte))
	T_221 (in bios_video_set_mode : ptr32)
	T_222 (in signature of bios_video_set_mode : void)
Eq_231: (struct "Eq_231" 0002 (0 byte b0000))
	T_231
Eq_236: (struct "Eq_236" 0001 (FFFFFF60 byte bFFFFFF60) (FFFFFFFE byte bFFFFFFFE) (0 byte b0000) (2 byte b0002) (A0 byte b00A0))
	T_236
Eq_237: (struct "Eq_237" 0002 (F9E word16 w0F9E) (FA0 byte b0FA0))
	T_237
Eq_238: (struct "Eq_238" (FA0 word16 w0FA0))
	T_238
Eq_239: (struct "Eq_239" 1FDE (0 word16 w0000) (1 byte b0001))
	T_239
Eq_240: (struct "Eq_240" (1F3E word16 w1F3E))
	T_240
Eq_241: (struct "Eq_241" (FFFFFFFE word16 wFFFFFFFE))
	T_241
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr Eq_1)
  OrigDataType: (ptr (struct "Globals"))
T_2: (in bios_video_load_ROM_8x8_dbl_dot_patterns : ptr32)
  Class: Eq_2
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (fn T_6 (T_5)))
T_3: (in signature of bios_video_load_ROM_8x8_dbl_dot_patterns : void)
  Class: Eq_2
  DataType: (ptr Eq_2)
  OrigDataType: 
T_4: (in bl : byte)
  Class: Eq_4
  DataType: byte
  OrigDataType: byte
T_5: (in bl : byte)
  Class: Eq_4
  DataType: byte
  OrigDataType: byte
T_6: (in bios_video_load_ROM_8x8_dbl_dot_patterns(bl) : void)
  Class: Eq_6
  DataType: void
  OrigDataType: void
T_7: (in __syscall : ptr32)
  Class: Eq_7
  DataType: (ptr Eq_7)
  OrigDataType: (ptr (fn T_9 (T_8)))
T_8: (in 0x10 : byte)
  Class: Eq_8
  DataType: byte
  OrigDataType: byte
T_9: (in __syscall(0x10) : void)
  Class: Eq_9
  DataType: void
  OrigDataType: void
T_10: (in ax_108 : uint16)
  Class: Eq_10
  DataType: uint16
  OrigDataType: uint16
T_11: (in 0x1003 : word16)
  Class: Eq_10
  DataType: uint16
  OrigDataType: word16
T_12: (in ah_14 : byte)
  Class: Eq_12
  DataType: byte
  OrigDataType: byte
T_13: (in 0x10 : byte)
  Class: Eq_12
  DataType: byte
  OrigDataType: byte
T_14: (in di_35 : Eq_14)
  Class: Eq_14
  DataType: Eq_14
  OrigDataType: (union (cups16 u0) ((memptr T_25 (struct 0001 (FFFFFF60 T_28 tFFFFFF60) (FFFFFFFE T_71 tFFFFFFFE) (0 T_47 t0000) (2 T_50 t0002) (A0 T_60 t00A0))) u1))
T_15: (in 0x1FE0 : word16)
  Class: Eq_14
  DataType: cups16
  OrigDataType: cups16
T_16: (in di_35 <u 0x1FE0 : bool)
  Class: Eq_16
  DataType: bool
  OrigDataType: bool
T_17: (in al_197 : byte)
  Class: Eq_17
  DataType: byte
  OrigDataType: byte
T_18: (in 0x07 : byte)
  Class: Eq_18
  DataType: byte
  OrigDataType: byte
T_19: (in al_197 - 0x07 : byte)
  Class: Eq_17
  DataType: byte
  OrigDataType: byte
T_20: (in ax_64 : word16)
  Class: Eq_20
  DataType: uint16
  OrigDataType: uint16
T_21: (in 0x0002 : word16)
  Class: Eq_21
  DataType: uint16
  OrigDataType: uint16
T_22: (in ax_64 >>u 0x0002 : word16)
  Class: Eq_22
  DataType: uint16
  OrigDataType: uint16
T_23: (in al_197 - 0x07 : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_24: (in DPB(ax_64 >>u 0x0002, al_197 - 0x07, 0, 8) : word16)
  Class: Eq_10
  DataType: uint16
  OrigDataType: word16
T_25: (in 0x9000 : selector)
  Class: Eq_25
  DataType: (ptr Eq_25)
  OrigDataType: (ptr (segment (FFFFFF60 (arr T_226 8318) aFFFFFF60) (FFFFFFFE (arr T_230 8318) aFFFFFFFE) (0 (arr T_227 8318) a0000) (2 (arr T_228 8318) a0002) (A0 (arr T_229 8318) a00A0) (FA2 (arr T_231 2000) a0FA2)))
T_26: (in 0x00A0 : word16)
  Class: Eq_26
  DataType: word16
  OrigDataType: word16
T_27: (in di_35 - 0x00A0 : word16)
  Class: Eq_27
  DataType: word16
  OrigDataType: word16
T_28: (in Mem79[0x9000:di_35 - 0x00A0:byte] : byte)
  Class: Eq_17
  DataType: byte
  OrigDataType: byte
T_29: (in di_80 : word16)
  Class: Eq_29
  DataType: cups16
  OrigDataType: cups16
T_30: (in 0x0001 : word16)
  Class: Eq_30
  DataType: word16
  OrigDataType: word16
T_31: (in di_35 + 0x0001 : word16)
  Class: Eq_29
  DataType: cups16
  OrigDataType: word16
T_32: (in 0x0001 : word16)
  Class: Eq_32
  DataType: word16
  OrigDataType: word16
T_33: (in di_80 + 0x0001 : word16)
  Class: Eq_14
  DataType: Eq_14
  OrigDataType: word16
T_34: (in 0x207F : word16)
  Class: Eq_34
  DataType: word16
  OrigDataType: word16
T_35: (in di_80 - 0x207F : word16)
  Class: Eq_35
  DataType: word16
  OrigDataType: word16
T_36: (in cond(di_80 - 0x207F) : byte)
  Class: Eq_36
  DataType: bool
  OrigDataType: byte
T_37: (in C_38 : bool)
  Class: Eq_36
  DataType: bool
  OrigDataType: byte
T_38: (in 0xDF81 : word16)
  Class: Eq_29
  DataType: cups16
  OrigDataType: cups16
T_39: (in di_80 <u 0xDF81 : bool)
  Class: Eq_39
  DataType: bool
  OrigDataType: bool
T_40: (in __inb : ptr32)
  Class: Eq_40
  DataType: (ptr Eq_40)
  OrigDataType: (ptr (fn T_42 (T_41)))
T_41: (in 0x40 : byte)
  Class: Eq_41
  DataType: byte
  OrigDataType: byte
T_42: (in __inb(0x40) : byte)
  Class: Eq_17
  DataType: byte
  OrigDataType: byte
T_43: (in DPB(ax_108, al_197, 0, 8) : word16)
  Class: Eq_10
  DataType: uint16
  OrigDataType: word16
T_44: (in al_48 : byte)
  Class: Eq_44
  DataType: Eq_44
  OrigDataType: bcu8
T_45: (in 0x0000 : word16)
  Class: Eq_45
  DataType: word16
  OrigDataType: word16
T_46: (in di_35 + 0x0000 : word16)
  Class: Eq_46
  DataType: word16
  OrigDataType: word16
T_47: (in Mem0[0x9000:di_35 + 0x0000:byte] : byte)
  Class: Eq_47
  DataType: byte
  OrigDataType: byte
T_48: (in 0x0002 : word16)
  Class: Eq_48
  DataType: word16
  OrigDataType: word16
T_49: (in di_35 + 0x0002 : word16)
  Class: Eq_49
  DataType: word16
  OrigDataType: word16
T_50: (in Mem0[0x9000:di_35 + 0x0002:byte] : byte)
  Class: Eq_50
  DataType: byte
  OrigDataType: byte
T_51: (in Mem0[0x9000:di_35 + 0x0000:byte] + Mem0[0x9000:di_35 + 0x0002:byte] : word16)
  Class: Eq_51
  DataType: word16
  OrigDataType: word16
T_52: (in Mem0[0x9000:di_35 + 0x0000:byte] + Mem0[0x9000:di_35 + 0x0002:byte] + C_38 : word16)
  Class: Eq_44
  DataType: Eq_44
  OrigDataType: word16
T_53: (in ah_51 : Eq_53)
  Class: Eq_53
  DataType: Eq_53
  OrigDataType: bcu8
T_54: (in 0x00 : byte)
  Class: Eq_44
  DataType: bcu8
  OrigDataType: bcu8
T_55: (in al_48 <u 0x00 : bool)
  Class: Eq_55
  DataType: bool
  OrigDataType: bool
T_56: (in ah_14 + (al_48 <u 0x00) : word16)
  Class: Eq_53
  DataType: Eq_53
  OrigDataType: word16
T_57: (in al_54 : byte)
  Class: Eq_57
  DataType: Eq_57
  OrigDataType: bcu8
T_58: (in 0x00A0 : word16)
  Class: Eq_58
  DataType: word16
  OrigDataType: word16
T_59: (in di_35 + 0x00A0 : word16)
  Class: Eq_59
  DataType: word16
  OrigDataType: word16
T_60: (in Mem0[0x9000:di_35 + 0x00A0:byte] : byte)
  Class: Eq_60
  DataType: byte
  OrigDataType: byte
T_61: (in al_48 + Mem0[0x9000:di_35 + 0x00A0:byte] : word16)
  Class: Eq_61
  DataType: word16
  OrigDataType: word16
T_62: (in 0x00 : byte)
  Class: Eq_53
  DataType: Eq_53
  OrigDataType: bcu8
T_63: (in ah_51 <u 0x00 : bool)
  Class: Eq_63
  DataType: bool
  OrigDataType: bool
T_64: (in al_48 + Mem0[0x9000:di_35 + 0x00A0:byte] + (ah_51 <u 0x00) : word16)
  Class: Eq_57
  DataType: Eq_57
  OrigDataType: word16
T_65: (in ah_57 : Eq_65)
  Class: Eq_65
  DataType: Eq_65
  OrigDataType: bcu8
T_66: (in 0x00 : byte)
  Class: Eq_57
  DataType: bcu8
  OrigDataType: bcu8
T_67: (in al_54 <u 0x00 : bool)
  Class: Eq_67
  DataType: bool
  OrigDataType: bool
T_68: (in ah_51 + (al_54 <u 0x00) : word16)
  Class: Eq_65
  DataType: Eq_65
  OrigDataType: word16
T_69: (in 0x0002 : word16)
  Class: Eq_69
  DataType: word16
  OrigDataType: word16
T_70: (in di_35 - 0x0002 : word16)
  Class: Eq_70
  DataType: word16
  OrigDataType: word16
T_71: (in Mem0[0x9000:di_35 - 0x0002:byte] : byte)
  Class: Eq_71
  DataType: byte
  OrigDataType: byte
T_72: (in al_54 + Mem0[0x9000:di_35 - 0x0002:byte] : word16)
  Class: Eq_72
  DataType: word16
  OrigDataType: word16
T_73: (in 0x00 : byte)
  Class: Eq_65
  DataType: Eq_65
  OrigDataType: bcu8
T_74: (in ah_57 <u 0x00 : bool)
  Class: Eq_74
  DataType: bool
  OrigDataType: bool
T_75: (in al_54 + Mem0[0x9000:di_35 - 0x0002:byte] + (ah_57 <u 0x00) : word16)
  Class: Eq_75
  DataType: Eq_75
  OrigDataType: cups16
T_76: (in 0x00 : byte)
  Class: Eq_75
  DataType: Eq_75
  OrigDataType: bcu8
T_77: (in al_54 + Mem0[0x9000:di_35 - 0x0002:byte] + (ah_57 <u 0x00) <u 0x00 : bool)
  Class: Eq_77
  DataType: bool
  OrigDataType: bool
T_78: (in ah_57 + ((al_54 + Mem0[0x9000:di_35 - 0x0002:byte]) + (ah_57 <u 0x00) <u 0x00) : word16)
  Class: Eq_78
  DataType: word16
  OrigDataType: word16
T_79: (in DPB(ax_108, ah_57 + ((al_54 + Mem0[0x9000:di_35 - 0x0002:byte]) + (ah_57 <u 0x00) <u 0x00), 8, 8) : word16)
  Class: Eq_20
  DataType: uint16
  OrigDataType: word16
T_80: (in ax_64 >>u 0x0002 : word16)
  Class: Eq_10
  DataType: uint16
  OrigDataType: uint16
T_81: (in ax_64 >>u 0x0002 : word16)
  Class: Eq_81
  DataType: uint16
  OrigDataType: uint16
T_82: (in (byte) (ax_64 >>u 0x0002) : byte)
  Class: Eq_17
  DataType: byte
  OrigDataType: byte
T_83: (in ax_64 >>u 0x0002 : word16)
  Class: Eq_83
  DataType: uint16
  OrigDataType: uint16
T_84: (in SLICE(ax_64 >>u 0x0002, byte, 8) : byte)
  Class: Eq_12
  DataType: byte
  OrigDataType: byte
T_85: (in ax_64 >>u 0x0002 : word16)
  Class: Eq_85
  DataType: uint16
  OrigDataType: uint16
T_86: (in 0x0007 : word16)
  Class: Eq_85
  DataType: uint16
  OrigDataType: cups16
T_87: (in ax_64 >>u 0x0002 <u 0x0007 : bool)
  Class: Eq_87
  DataType: bool
  OrigDataType: bool
T_88: (in dx_ax_109 : word32)
  Class: Eq_88
  DataType: word32
  OrigDataType: word32
T_89: (in 0x03DA : word16)
  Class: Eq_89
  DataType: word16
  OrigDataType: word16
T_90: (in SEQ(0x03DA, ax_108) : word32)
  Class: Eq_88
  DataType: word32
  OrigDataType: word32
T_91: (in al_90 : byte)
  Class: Eq_91
  DataType: byte
  OrigDataType: byte
T_92: (in __inb : ptr32)
  Class: Eq_92
  DataType: (ptr Eq_92)
  OrigDataType: (ptr (fn T_94 (T_93)))
T_93: (in 0x03DA : word16)
  Class: Eq_93
  DataType: word16
  OrigDataType: word16
T_94: (in __inb(0x03DA) : byte)
  Class: Eq_91
  DataType: byte
  OrigDataType: byte
T_95: (in DPB(ax_108, al_90, 0, 8) : word16)
  Class: Eq_10
  DataType: uint16
  OrigDataType: word16
T_96: (in DPB(dx_ax_109, al_90, 0, 8) : word32)
  Class: Eq_88
  DataType: word32
  OrigDataType: word32
T_97: (in 0x08 : byte)
  Class: Eq_97
  DataType: byte
  OrigDataType: byte
T_98: (in al_90 & 0x08 : byte)
  Class: Eq_98
  DataType: byte
  OrigDataType: byte
T_99: (in 0x00 : byte)
  Class: Eq_98
  DataType: byte
  OrigDataType: byte
T_100: (in (al_90 & 0x08) == 0x00 : bool)
  Class: Eq_100
  DataType: bool
  OrigDataType: bool
T_101: (in di_122 : Eq_101)
  Class: Eq_101
  DataType: Eq_101
  OrigDataType: (union (int16 u0) ((memptr T_25 (struct 0002 (F9E T_126 t0F9E) (FA0 T_106 t0FA0))) u1))
T_102: (in 0x0FA0 : word16)
  Class: Eq_101
  DataType: int16
  OrigDataType: word16
T_103: (in al_100 : byte)
  Class: Eq_103
  DataType: byte
  OrigDataType: byte
T_104: (in 0x0FA0 : word16)
  Class: Eq_104
  DataType: word16
  OrigDataType: word16
T_105: (in di_122 + 0x0FA0 : word16)
  Class: Eq_105
  DataType: word16
  OrigDataType: word16
T_106: (in Mem79[0x9000:di_122 + 0x0FA0:byte] : byte)
  Class: Eq_103
  DataType: byte
  OrigDataType: byte
T_107: (in dx_ax_105 : uint32)
  Class: Eq_107
  DataType: uint32
  OrigDataType: uint32
T_108: (in DPB(dx_ax_109, al_100, 0, 8) : word32)
  Class: Eq_108
  DataType: word32
  OrigDataType: word32
T_109: (in 0x0F : byte)
  Class: Eq_109
  DataType: byte
  OrigDataType: byte
T_110: (in DPB(dx_ax_109, al_100, 0, 8) % 0x0F : uint16)
  Class: Eq_110
  DataType: uint16
  OrigDataType: uint16
T_111: (in SEQ(DPB(dx_ax_109, al_100, 0, 8) % 0x0F, ax_108) : word32)
  Class: Eq_107
  DataType: uint32
  OrigDataType: word32
T_112: (in 0x0F : byte)
  Class: Eq_112
  DataType: uint8
  OrigDataType: uint8
T_113: (in dx_ax_105 /u 0x0F : uint16)
  Class: Eq_113
  DataType: uint16
  OrigDataType: uint16
T_114: (in 0x00 : byte)
  Class: Eq_114
  DataType: byte
  OrigDataType: byte
T_115: (in DPB(dx_ax_105 /u 0x0F, 0x00, 8, 8) : word16)
  Class: Eq_10
  DataType: uint16
  OrigDataType: word16
T_116: (in cx_113 : word16)
  Class: Eq_116
  DataType: word16
  OrigDataType: word16
T_117: (in ds : (ptr Eq_117))
  Class: Eq_117
  DataType: (ptr Eq_117)
  OrigDataType: (ptr (segment (1E7 (arr T_232) a01E7)))
T_118: (in 0x01E7 : word16)
  Class: Eq_118
  DataType: word16
  OrigDataType: word16
T_119: (in SEQ(ds, 0x01E7) : ptr32)
  Class: Eq_119
  DataType: ptr32
  OrigDataType: ptr32
T_120: (in 0x0002 : word16)
  Class: Eq_120
  DataType: ui16
  OrigDataType: ui16
T_121: (in ax_108 * 0x0002 : word16)
  Class: Eq_121
  DataType: ui16
  OrigDataType: ui16
T_122: (in SEQ(ds, 0x01E7)[ax_108 * 0x0002] : word16)
  Class: Eq_116
  DataType: word16
  OrigDataType: word16
T_123: (in 0x8000 : selector)
  Class: Eq_25
  DataType: (ptr Eq_25)
  OrigDataType: (ptr (segment (0 (arr T_234 1) a0000) (FA0 (arr T_233 2000) a0FA0)))
T_124: (in 0x0F9E : word16)
  Class: Eq_124
  DataType: word16
  OrigDataType: word16
T_125: (in di_122 + 0x0F9E : word16)
  Class: Eq_125
  DataType: word16
  OrigDataType: word16
T_126: (in Mem114[0x8000:di_122 + 0x0F9E:word16] : word16)
  Class: Eq_116
  DataType: word16
  OrigDataType: word16
T_127: (in di_117 : Eq_127)
  Class: Eq_127
  DataType: Eq_127
  OrigDataType: (union (int16 u0) ((memptr T_123 (struct (FA0 T_132 t0FA0))) u1))
T_128: (in -di_122 : word16)
  Class: Eq_127
  DataType: Eq_127
  OrigDataType: int16
T_129: (in DPB(cx_113, al_100, 0, 8) : word16)
  Class: Eq_129
  DataType: word16
  OrigDataType: word16
T_130: (in 0x0FA0 : word16)
  Class: Eq_130
  DataType: word16
  OrigDataType: word16
T_131: (in di_117 + 0x0FA0 : word16)
  Class: Eq_131
  DataType: word16
  OrigDataType: word16
T_132: (in Mem118[0x8000:di_117 + 0x0FA0:word16] : word16)
  Class: Eq_129
  DataType: word16
  OrigDataType: word16
T_133: (in di_119 : int16)
  Class: Eq_133
  DataType: int16
  OrigDataType: word16
T_134: (in -di_117 : word16)
  Class: Eq_133
  DataType: int16
  OrigDataType: int16
T_135: (in 0x00 : byte)
  Class: Eq_135
  DataType: byte
  OrigDataType: byte
T_136: (in DPB(dx_ax_105, 0x00, 8, 8) : word32)
  Class: Eq_88
  DataType: word32
  OrigDataType: word32
T_137: (in 0x0002 : word16)
  Class: Eq_137
  DataType: word16
  OrigDataType: word16
T_138: (in di_119 - 0x0002 : word16)
  Class: Eq_101
  DataType: Eq_101
  OrigDataType: word16
T_139: (in 0x0002 : word16)
  Class: Eq_133
  DataType: int16
  OrigDataType: word16
T_140: (in di_119 != 0x0002 : bool)
  Class: Eq_140
  DataType: bool
  OrigDataType: bool
T_141: (in di_125 : Eq_141)
  Class: Eq_141
  DataType: Eq_141
  OrigDataType: (union (int16 u0) ((memptr T_123 (struct 1FDE (0 T_168 t0000) (1 T_179 t0001))) u1))
T_142: (in 0x0000 : word16)
  Class: Eq_141
  DataType: int16
  OrigDataType: word16
T_143: (in si_126 : (memptr (ptr Eq_25) Eq_143))
  Class: Eq_143
  DataType: (memptr (ptr Eq_25) Eq_143)
  OrigDataType: (memptr T_123 (struct 003B (0 T_163 t0000)))
T_144: (in 0x0000 : word16)
  Class: Eq_143
  DataType: (memptr (ptr Eq_25) Eq_143)
  OrigDataType: word16
T_145: (in bl_128 : bcu8)
  Class: Eq_145
  DataType: bcu8
  OrigDataType: bcu8
T_146: (in 0x00 : byte)
  Class: Eq_145
  DataType: bcu8
  OrigDataType: byte
T_147: (in bh_129 : byte)
  Class: Eq_147
  DataType: byte
  OrigDataType: byte
T_148: (in 0x00 : byte)
  Class: Eq_147
  DataType: byte
  OrigDataType: byte
T_149: (in si_148 : word16)
  Class: Eq_149
  DataType: word16
  OrigDataType: word16
T_150: (in 0x0001 : word16)
  Class: Eq_150
  DataType: word16
  OrigDataType: word16
T_151: (in si_126 + 0x0001 : word16)
  Class: Eq_149
  DataType: word16
  OrigDataType: word16
T_152: (in 0x00A0 : word16)
  Class: Eq_152
  DataType: word16
  OrigDataType: word16
T_153: (in di_125 + 0x00A0 : word16)
  Class: Eq_141
  DataType: Eq_141
  OrigDataType: word16
T_154: (in 0x01 : byte)
  Class: Eq_154
  DataType: byte
  OrigDataType: byte
T_155: (in bl_128 + 0x01 : byte)
  Class: Eq_145
  DataType: bcu8
  OrigDataType: byte
T_156: (in 0x0001 : word16)
  Class: Eq_156
  DataType: word16
  OrigDataType: word16
T_157: (in si_148 + 0x0001 : word16)
  Class: Eq_143
  DataType: (memptr (ptr Eq_25) Eq_143)
  OrigDataType: word16
T_158: (in 0x33 : byte)
  Class: Eq_145
  DataType: bcu8
  OrigDataType: bcu8
T_159: (in bl_128 <u 0x33 : bool)
  Class: Eq_159
  DataType: bool
  OrigDataType: bool
T_160: (in cx_186 : word16)
  Class: Eq_160
  DataType: word16
  OrigDataType: word16
T_161: (in 0x0000 : word16)
  Class: Eq_161
  DataType: word16
  OrigDataType: word16
T_162: (in si_126 + 0x0000 : word16)
  Class: Eq_162
  DataType: word16
  OrigDataType: word16
T_163: (in Mem118[0x8000:si_126 + 0x0000:word16] : word16)
  Class: Eq_160
  DataType: word16
  OrigDataType: word16
T_164: (in 0x01 : byte)
  Class: Eq_164
  DataType: byte
  OrigDataType: byte
T_165: (in DPB(cx_186, 0x01, 0, 8) : word16)
  Class: Eq_165
  DataType: word16
  OrigDataType: word16
T_166: (in 0x0000 : word16)
  Class: Eq_166
  DataType: word16
  OrigDataType: word16
T_167: (in di_125 + 0x0000 : word16)
  Class: Eq_167
  DataType: word16
  OrigDataType: word16
T_168: (in Mem189[0x8000:di_125 + 0x0000:word16] : word16)
  Class: Eq_165
  DataType: word16
  OrigDataType: word16
T_169: (in di_190 : Eq_169)
  Class: Eq_169
  DataType: Eq_169
  OrigDataType: (union (int16 u0) ((memptr T_123 (struct (1F3E T_175 t1F3E))) u1))
T_170: (in -di_125 : word16)
  Class: Eq_169
  DataType: Eq_169
  OrigDataType: int16
T_171: (in 0x02 : byte)
  Class: Eq_171
  DataType: byte
  OrigDataType: byte
T_172: (in DPB(cx_186, 0x02, 0, 8) : word16)
  Class: Eq_172
  DataType: word16
  OrigDataType: word16
T_173: (in 0x1F3E : word16)
  Class: Eq_173
  DataType: word16
  OrigDataType: word16
T_174: (in di_190 + 0x1F3E : word16)
  Class: Eq_174
  DataType: word16
  OrigDataType: word16
T_175: (in Mem193[0x8000:di_190 + 0x1F3E:word16] : word16)
  Class: Eq_172
  DataType: word16
  OrigDataType: word16
T_176: (in -di_190 : word16)
  Class: Eq_141
  DataType: Eq_141
  OrigDataType: int16
T_177: (in 0x0001 : word16)
  Class: Eq_177
  DataType: word16
  OrigDataType: word16
T_178: (in di_125 + 0x0001 : word16)
  Class: Eq_178
  DataType: word16
  OrigDataType: word16
T_179: (in Mem118[0x8000:di_125 + 0x0001:byte] : byte)
  Class: Eq_179
  DataType: byte
  OrigDataType: byte
T_180: (in 0x00 : byte)
  Class: Eq_179
  DataType: byte
  OrigDataType: byte
T_181: (in Mem118[0x8000:di_125 + 0x0001:byte] != 0x00 : bool)
  Class: Eq_181
  DataType: bool
  OrigDataType: bool
T_182: (in 0x1FDE : word16)
  Class: Eq_182
  DataType: word16
  OrigDataType: word16
T_183: (in di_125 - 0x1FDE : word16)
  Class: Eq_141
  DataType: Eq_141
  OrigDataType: word16
T_184: (in 0x003B : word16)
  Class: Eq_184
  DataType: word16
  OrigDataType: word16
T_185: (in si_148 + 0x003B : word16)
  Class: Eq_143
  DataType: (memptr (ptr Eq_25) Eq_143)
  OrigDataType: word16
T_186: (in 0x00 : byte)
  Class: Eq_145
  DataType: bcu8
  OrigDataType: byte
T_187: (in 0x01 : byte)
  Class: Eq_187
  DataType: byte
  OrigDataType: byte
T_188: (in bh_129 + 0x01 : byte)
  Class: Eq_147
  DataType: byte
  OrigDataType: byte
T_189: (in 0x19 : byte)
  Class: Eq_147
  DataType: byte
  OrigDataType: byte
T_190: (in bh_129 != 0x19 : bool)
  Class: Eq_190
  DataType: bool
  OrigDataType: bool
T_191: (in di_166 : (memptr (ptr Eq_25) byte))
  Class: Eq_191
  DataType: (memptr (ptr Eq_25) byte)
  OrigDataType: (memptr T_25 (struct 0001 (0 T_195 t0000)))
T_192: (in 0x0000 : word16)
  Class: Eq_191
  DataType: (memptr (ptr Eq_25) byte)
  OrigDataType: word16
T_193: (in 0x0000 : word16)
  Class: Eq_193
  DataType: word16
  OrigDataType: word16
T_194: (in di_166 + 0x0000 : word16)
  Class: Eq_194
  DataType: word16
  OrigDataType: word16
T_195: (in Mem118[0x8000:di_166 + 0x0000:byte] : byte)
  Class: Eq_47
  DataType: byte
  OrigDataType: byte
T_196: (in 0xB800 : selector)
  Class: Eq_25
  DataType: (ptr Eq_25)
  OrigDataType: (ptr (segment (0 (arr T_235 1) a0000)))
T_197: (in 0x0000 : word16)
  Class: Eq_197
  DataType: word16
  OrigDataType: word16
T_198: (in di_166 + 0x0000 : word16)
  Class: Eq_198
  DataType: word16
  OrigDataType: word16
T_199: (in Mem171[0xB800:di_166 + 0x0000:byte] : byte)
  Class: Eq_47
  DataType: byte
  OrigDataType: byte
T_200: (in 0x0001 : word16)
  Class: Eq_200
  DataType: word16
  OrigDataType: word16
T_201: (in di_166 + 0x0001 : word16)
  Class: Eq_191
  DataType: (memptr (ptr Eq_25) byte)
  OrigDataType: word16
T_202: (in 0x0000 : word16)
  Class: Eq_191
  DataType: (memptr (ptr Eq_25) byte)
  OrigDataType: word16
T_203: (in di_166 != Eq_25::a0000 : bool)
  Class: Eq_203
  DataType: bool
  OrigDataType: bool
T_204: (in 0x9000 : word16)
  Class: Eq_204
  DataType: word16
  OrigDataType: word16
T_205: (in ss : selector)
  Class: Eq_205
  DataType: (ptr Eq_205)
  OrigDataType: (ptr (segment))
T_206: (in fp : ptr16)
  Class: Eq_206
  DataType: Eq_206
  OrigDataType: (union (ptr16 u0) ((memptr T_205 (struct (FFFFFFFE T_209 tFFFFFFFE))) u1))
T_207: (in 0x0002 : word16)
  Class: Eq_207
  DataType: word16
  OrigDataType: word16
T_208: (in fp - 0x0002 : word16)
  Class: Eq_208
  DataType: word16
  OrigDataType: word16
T_209: (in Mem177[ss:fp - 0x0002:word16] : word16)
  Class: Eq_204
  DataType: word16
  OrigDataType: word16
T_210: (in al_181 : byte)
  Class: Eq_210
  DataType: byte
  OrigDataType: byte
T_211: (in bios_kbd_check_keystroke : ptr32)
  Class: Eq_211
  DataType: (ptr Eq_211)
  OrigDataType: (ptr (fn T_215 (T_214)))
T_212: (in signature of bios_kbd_check_keystroke : void)
  Class: Eq_211
  DataType: (ptr Eq_211)
  OrigDataType: 
T_213: (in alOut : ptr16)
  Class: Eq_213
  DataType: (ptr byte)
  OrigDataType: ptr16
T_214: (in out al_181 : ptr16)
  Class: Eq_213
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_215: (in bios_kbd_check_keystroke(out al_181) : byte)
  Class: Eq_12
  DataType: byte
  OrigDataType: byte
T_216: (in DPB(ax_108, ah_14, 8, 8) : word16)
  Class: Eq_10
  DataType: uint16
  OrigDataType: word16
T_217: (in 0x0000 : word16)
  Class: Eq_191
  DataType: (memptr (ptr Eq_25) byte)
  OrigDataType: word16
T_218: (in di_166 == Eq_25::a0000 : bool)
  Class: Eq_218
  DataType: bool
  OrigDataType: bool
T_219: (in 0x0000 : word16)
  Class: Eq_14
  DataType: cups16
  OrigDataType: word16
T_220: (in false : bool)
  Class: Eq_36
  DataType: bool
  OrigDataType: bool
T_221: (in bios_video_set_mode : ptr32)
  Class: Eq_221
  DataType: (ptr Eq_221)
  OrigDataType: (ptr (fn T_225 (T_224)))
T_222: (in signature of bios_video_set_mode : void)
  Class: Eq_221
  DataType: (ptr Eq_221)
  OrigDataType: 
T_223: (in al : byte)
  Class: Eq_223
  DataType: byte
  OrigDataType: byte
T_224: (in 0x03 : byte)
  Class: Eq_223
  DataType: byte
  OrigDataType: byte
T_225: (in bios_video_set_mode(0x03) : void)
  Class: Eq_225
  DataType: void
  OrigDataType: void
T_226:
  Class: Eq_226
  DataType: byte
  OrigDataType: (struct 0001 (0 T_28 t0000))
T_227:
  Class: Eq_227
  DataType: byte
  OrigDataType: (struct 0001 (0 T_47 t0000))
T_228:
  Class: Eq_228
  DataType: byte
  OrigDataType: (struct 0001 (0 T_50 t0000))
T_229:
  Class: Eq_229
  DataType: byte
  OrigDataType: (struct 0001 (0 T_60 t0000))
T_230:
  Class: Eq_230
  DataType: byte
  OrigDataType: (struct 0001 (0 T_71 t0000))
T_231:
  Class: Eq_231
  DataType: Eq_231
  OrigDataType: (struct 0002 (0 T_106 t0000))
T_232:
  Class: Eq_232
  DataType: word16
  OrigDataType: (struct 0002 (0 T_122 t0000))
T_233:
  Class: Eq_233
  DataType: word16
  OrigDataType: (struct 0002 (0 T_126 t0000))
T_234:
  Class: Eq_227
  DataType: byte
  OrigDataType: (struct 0001 (0 T_195 t0000))
T_235:
  Class: Eq_227
  DataType: byte
  OrigDataType: (struct 0001 (0 T_199 t0000))
T_236:
  Class: Eq_236
  DataType: Eq_236
  OrigDataType: 
T_237:
  Class: Eq_237
  DataType: Eq_237
  OrigDataType: 
T_238:
  Class: Eq_238
  DataType: Eq_238
  OrigDataType: 
T_239:
  Class: Eq_239
  DataType: Eq_239
  OrigDataType: 
T_240:
  Class: Eq_240
  DataType: Eq_240
  OrigDataType: 
T_241:
  Class: Eq_241
  DataType: Eq_241
  OrigDataType: 
*/
typedef Eq_25 Eq_1Eq_25 Eq_1Eq_25 Eq_1struct Globals {
	Eq_25 * ptrFFF80000;	// FFF80000
	Eq_25 * ptrFFF90000;	// FFF90000
	Eq_25 * ptrFFFB8000;	// FFFB8000
} Eq_1;

typedef void (Eq_2)(byte);

typedef void (Eq_7)(byte);

typedef union Eq_14 {
	cups16 u0;
	Eq_236 Eq_25::* u1;
} Eq_14;

typedef  Eq_25[8318][8318][8318][8318][8318][2000]Eq_231[2000]struct Eq_25 {
	byte aFFFFFF60[8318];	// FFFFFF60
	byte aFFFFFFFE[8318];	// FFFFFFFE
	byte a0000[8318];	// 0
	byte a0002[8318];	// 2
	byte a00A0[8318];	// A0
	word16 a0FA0[2000];	// FA0
	Eq_231 a0FA2[2000];	// FA2
} Eq_25;

typedef byte (Eq_40)(byte);

typedef union Eq_44 {
	bcu8 u0;
	word16 u1;
} Eq_44;

typedef union Eq_53 {
	bcu8 u0;
	word16 u1;
} Eq_53;

typedef union Eq_57 {
	bcu8 u0;
	word16 u1;
} Eq_57;

typedef union Eq_65 {
	bcu8 u0;
	word16 u1;
} Eq_65;

typedef union Eq_75 {
	bcu8 u0;
	cups16 u1;
} Eq_75;

typedef byte (Eq_92)(word16);

typedef union Eq_101 {
	int16 u0;
	Eq_237 Eq_25::* u1;
} Eq_101;

typedef  Eq_117[]struct Eq_117 {
	word16 a01E7[];	// 1E7
} Eq_117;

typedef union Eq_127 {
	int16 u0;
	Eq_238 Eq_25::* u1;
} Eq_127;

typedef union Eq_141 {
	int16 u0;
	Eq_239 Eq_25::* u1;
} Eq_141;

typedef struct Eq_143 {	// size: 59 3B
	word16 w0000;	// 0
} Eq_143;

typedef union Eq_169 {
	int16 u0;
	Eq_240 Eq_25::* u1;
} Eq_169;

typedef struct Eq_205 {
} Eq_205;

typedef union Eq_206 {
	ptr16 u0;
	Eq_241 Eq_205::* u1;
} Eq_206;

typedef byte (Eq_211)(byte *);

typedef void (Eq_221)(byte);

typedef struct Eq_231 {	// size: 2 2
	byte b0000;	// 0
} Eq_231;

typedef struct Eq_236 {	// size: 1 1
	byte bFFFFFF60;	// FFFFFF60
	byte bFFFFFFFE;	// FFFFFFFE
	byte b0000;	// 0
	byte b0002;	// 2
	byte b00A0;	// A0
} Eq_236;

typedef struct Eq_237 {	// size: 2 2
	word16 w0F9E;	// F9E
	byte b0FA0;	// FA0
} Eq_237;

typedef struct Eq_238 {
	word16 w0FA0;	// FA0
} Eq_238;

typedef struct Eq_239 {	// size: 8158 1FDE
	word16 w0000;	// 0
	byte b0001;	// 1
} Eq_239;

typedef struct Eq_240 {
	word16 w1F3E;	// 1F3E
} Eq_240;

typedef struct Eq_241 {
	word16 wFFFFFFFE;	// FFFFFFFE
} Eq_241;

