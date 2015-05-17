// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_220/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFF80000 (ptr Eq_28) ptrFFF80000) (FFF90000 (ptr Eq_28) ptrFFF90000) (FFFB8000 (ptr Eq_28) ptrFFFB8000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_load_ROM_8x8_dbl_dot_patterns : ptr32)
	T_3 (in signature of bios_video_load_ROM_8x8_dbl_dot_patterns : void)
Eq_7: (fn void (byte))
	T_7 (in __syscall : ptr32)
Eq_14: (union "Eq_14" (cups16 u0) ((memptr (ptr Eq_28) Eq_226) u1))
	T_14 (in di_35 : Eq_14)
	T_15 (in 0x1FE0 : word16)
	T_36 (in di_81 + 0x0001 : word16)
	T_211 (in 0x0000 : word16)
Eq_28: (segment "Eq_28" (FFFFFF60 (arr byte 8318) aFFFFFF60) (FFFFFFFE (arr byte 8318) aFFFFFFFE) (0 (arr byte 8318) a0000) (2 (arr byte 8318) a0002) (A0 (arr byte 8318) a00A0))
	T_28 (in 0x9000 : selector)
	T_118 (in 0x8000 : selector)
	T_188 (in 0xB800 : selector)
Eq_43: (fn byte (byte))
	T_43 (in __inb : ptr32)
Eq_48: (union "Eq_48" (bcu8 u0) (word16 u1))
	T_48 (in al_49 : byte)
	T_56 (in Mem0[0x9000:di_35 + 0x0000:byte] + Mem0[0x9000:di_35 + 0x0002:byte] + C_38 : word16)
	T_58 (in 0x00 : byte)
Eq_57: (union "Eq_57" (bcu8 u0) (word16 u1))
	T_57 (in ah_52 : Eq_57)
	T_60 (in ah_14 + (al_49 <u 0x00) : word16)
	T_66 (in 0x00 : byte)
Eq_61: (union "Eq_61" (bcu8 u0) (word16 u1))
	T_61 (in al_55 : byte)
	T_68 (in al_49 + Mem0[0x9000:di_35 + 0x00A0:byte] + (ah_52 <u 0x00) : word16)
	T_70 (in 0x00 : byte)
Eq_69: (union "Eq_69" (bcu8 u0) (word16 u1))
	T_69 (in ah_58 : Eq_69)
	T_72 (in ah_52 + (al_55 <u 0x00) : word16)
	T_77 (in 0x00 : byte)
Eq_79: (union "Eq_79" (bcu8 u0) (cups16 u1))
	T_79 (in al_55 + Mem0[0x9000:di_35 - 0x0002:byte] + (ah_58 <u 0x00) : word16)
	T_80 (in 0x00 : byte)
Eq_95: (union "Eq_95" (int16 u0) ((memptr (ptr Eq_28) Eq_227) u1))
	T_95 (in di_114 : Eq_95)
	T_96 (in 0x0FA0 : word16)
	T_134 (in di_111 - 0x0002 : word16)
	T_147 (in di_114 + 0x00A0 : word16)
	T_168 (in -di_184 : word16)
	T_175 (in di_114 - 0x1FDE : word16)
Eq_112: (segment "Eq_112" (1DB (arr word16) a01DB))
	T_112 (in ds : (ptr Eq_112))
Eq_122: (union "Eq_122" (int16 u0) ((memptr (ptr Eq_28) Eq_228) u1))
	T_122 (in di_109 : Eq_122)
	T_123 (in -di_114 : word16)
Eq_137: (struct "Eq_137" 003B (0 word16 w0000))
	T_137 (in si_117 : (memptr (ptr Eq_28) Eq_137))
	T_138 (in 0x0000 : word16)
	T_151 (in si_139 + 0x0001 : word16)
	T_177 (in si_139 + 0x003B : word16)
Eq_163: (union "Eq_163" (int16 u0) ((memptr (ptr Eq_28) Eq_229) u1))
	T_163 (in di_184 : Eq_163)
	T_164 (in -di_114 : word16)
Eq_197: (segment "Eq_197")
	T_197 (in ss : selector)
Eq_198: (union "Eq_198" (ptr16 u0) ((memptr (ptr Eq_197) Eq_230) u1))
	T_198 (in fp : ptr16)
Eq_203: (fn byte ((ptr byte)))
	T_203 (in bios_kbd_check_keystroke : ptr32)
	T_204 (in signature of bios_kbd_check_keystroke : void)
Eq_213: (fn void (byte))
	T_213 (in bios_video_set_mode : ptr32)
	T_214 (in signature of bios_video_set_mode : void)
Eq_226: (struct "Eq_226" 0001 (FFFFFF60 byte bFFFFFF60) (FFFFFFFE byte bFFFFFFFE) (0 byte b0000) (2 byte b0002) (A0 byte b00A0))
	T_226
Eq_227: (struct "Eq_227" 0002 (0 word16 w0000) (1 byte b0001) (F9E word16 w0F9E) (FA0 byte b0FA0))
	T_227
Eq_228: (struct "Eq_228" (FA0 word16 w0FA0))
	T_228
Eq_229: (struct "Eq_229" (1F3E word16 w1F3E))
	T_229
Eq_230: (struct "Eq_230" (FFFFFFFE word16 wFFFFFFFE))
	T_230
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
T_10: (in ax_100 : uint16)
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
  OrigDataType: (union (cups16 u0) ((memptr T_28 (struct 0001 (FFFFFF60 T_31 tFFFFFF60) (FFFFFFFE T_75 tFFFFFFFE) (0 T_51 t0000) (2 T_54 t0002) (A0 T_64 t00A0))) u1))
T_15: (in 0x1FE0 : word16)
  Class: Eq_14
  DataType: cups16
  OrigDataType: cups16
T_16: (in di_35 <u 0x1FE0 : bool)
  Class: Eq_16
  DataType: bool
  OrigDataType: bool
T_17: (in al_189 : byte)
  Class: Eq_17
  DataType: byte
  OrigDataType: byte
T_18: (in 0x07 : byte)
  Class: Eq_18
  DataType: byte
  OrigDataType: byte
T_19: (in al_189 - 0x07 : byte)
  Class: Eq_17
  DataType: byte
  OrigDataType: byte
T_20: (in ax_65 : word16)
  Class: Eq_20
  DataType: uint16
  OrigDataType: uint16
T_21: (in 0x0002 : word16)
  Class: Eq_21
  DataType: uint16
  OrigDataType: uint16
T_22: (in ax_65 >>u 0x0002 : word16)
  Class: Eq_22
  DataType: uint16
  OrigDataType: uint16
T_23: (in al_189 - 0x07 : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_24: (in DPB(ax_65 >>u 0x0002, al_189 - 0x07, 0, 8) : word16)
  Class: Eq_10
  DataType: uint16
  OrigDataType: word16
T_25: (in dx_ax_101 : word32)
  Class: Eq_25
  DataType: word32
  OrigDataType: word32
T_26: (in al_189 - 0x07 : byte)
  Class: Eq_26
  DataType: byte
  OrigDataType: byte
T_27: (in DPB(dx_ax_101, al_189 - 0x07, 0, 8) : word32)
  Class: Eq_25
  DataType: word32
  OrigDataType: word32
T_28: (in 0x9000 : selector)
  Class: Eq_28
  DataType: (ptr Eq_28)
  OrigDataType: (ptr (segment (FFFFFF60 (arr T_218 8318) aFFFFFF60) (FFFFFFFE (arr T_222 8318) aFFFFFFFE) (0 (arr T_219 8318) a0000) (2 (arr T_220 8318) a0002) (A0 (arr T_221 8318) a00A0)))
T_29: (in 0x00A0 : word16)
  Class: Eq_29
  DataType: word16
  OrigDataType: word16
T_30: (in di_35 - 0x00A0 : word16)
  Class: Eq_30
  DataType: word16
  OrigDataType: word16
T_31: (in Mem80[0x9000:di_35 - 0x00A0:byte] : byte)
  Class: Eq_17
  DataType: byte
  OrigDataType: byte
T_32: (in di_81 : word16)
  Class: Eq_32
  DataType: cups16
  OrigDataType: cups16
T_33: (in 0x0001 : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_34: (in di_35 + 0x0001 : word16)
  Class: Eq_32
  DataType: cups16
  OrigDataType: word16
T_35: (in 0x0001 : word16)
  Class: Eq_35
  DataType: word16
  OrigDataType: word16
T_36: (in di_81 + 0x0001 : word16)
  Class: Eq_14
  DataType: Eq_14
  OrigDataType: word16
T_37: (in 0x207F : word16)
  Class: Eq_37
  DataType: word16
  OrigDataType: word16
T_38: (in di_81 - 0x207F : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_39: (in cond(di_81 - 0x207F) : byte)
  Class: Eq_39
  DataType: bool
  OrigDataType: byte
T_40: (in C_38 : bool)
  Class: Eq_39
  DataType: bool
  OrigDataType: byte
T_41: (in 0xDF81 : word16)
  Class: Eq_32
  DataType: cups16
  OrigDataType: cups16
T_42: (in di_81 <u 0xDF81 : bool)
  Class: Eq_42
  DataType: bool
  OrigDataType: bool
T_43: (in __inb : ptr32)
  Class: Eq_43
  DataType: (ptr Eq_43)
  OrigDataType: (ptr (fn T_45 (T_44)))
T_44: (in 0x40 : byte)
  Class: Eq_44
  DataType: byte
  OrigDataType: byte
T_45: (in __inb(0x40) : byte)
  Class: Eq_17
  DataType: byte
  OrigDataType: byte
T_46: (in DPB(ax_100, al_189, 0, 8) : word16)
  Class: Eq_10
  DataType: uint16
  OrigDataType: word16
T_47: (in DPB(dx_ax_101, al_189, 0, 8) : word32)
  Class: Eq_25
  DataType: word32
  OrigDataType: word32
T_48: (in al_49 : byte)
  Class: Eq_48
  DataType: Eq_48
  OrigDataType: bcu8
T_49: (in 0x0000 : word16)
  Class: Eq_49
  DataType: word16
  OrigDataType: word16
T_50: (in di_35 + 0x0000 : word16)
  Class: Eq_50
  DataType: word16
  OrigDataType: word16
T_51: (in Mem0[0x9000:di_35 + 0x0000:byte] : byte)
  Class: Eq_51
  DataType: byte
  OrigDataType: byte
T_52: (in 0x0002 : word16)
  Class: Eq_52
  DataType: word16
  OrigDataType: word16
T_53: (in di_35 + 0x0002 : word16)
  Class: Eq_53
  DataType: word16
  OrigDataType: word16
T_54: (in Mem0[0x9000:di_35 + 0x0002:byte] : byte)
  Class: Eq_54
  DataType: byte
  OrigDataType: byte
T_55: (in Mem0[0x9000:di_35 + 0x0000:byte] + Mem0[0x9000:di_35 + 0x0002:byte] : word16)
  Class: Eq_55
  DataType: word16
  OrigDataType: word16
T_56: (in Mem0[0x9000:di_35 + 0x0000:byte] + Mem0[0x9000:di_35 + 0x0002:byte] + C_38 : word16)
  Class: Eq_48
  DataType: Eq_48
  OrigDataType: word16
T_57: (in ah_52 : Eq_57)
  Class: Eq_57
  DataType: Eq_57
  OrigDataType: bcu8
T_58: (in 0x00 : byte)
  Class: Eq_48
  DataType: bcu8
  OrigDataType: bcu8
T_59: (in al_49 <u 0x00 : bool)
  Class: Eq_59
  DataType: bool
  OrigDataType: bool
T_60: (in ah_14 + (al_49 <u 0x00) : word16)
  Class: Eq_57
  DataType: Eq_57
  OrigDataType: word16
T_61: (in al_55 : byte)
  Class: Eq_61
  DataType: Eq_61
  OrigDataType: bcu8
T_62: (in 0x00A0 : word16)
  Class: Eq_62
  DataType: word16
  OrigDataType: word16
T_63: (in di_35 + 0x00A0 : word16)
  Class: Eq_63
  DataType: word16
  OrigDataType: word16
T_64: (in Mem0[0x9000:di_35 + 0x00A0:byte] : byte)
  Class: Eq_64
  DataType: byte
  OrigDataType: byte
T_65: (in al_49 + Mem0[0x9000:di_35 + 0x00A0:byte] : word16)
  Class: Eq_65
  DataType: word16
  OrigDataType: word16
T_66: (in 0x00 : byte)
  Class: Eq_57
  DataType: Eq_57
  OrigDataType: bcu8
T_67: (in ah_52 <u 0x00 : bool)
  Class: Eq_67
  DataType: bool
  OrigDataType: bool
T_68: (in al_49 + Mem0[0x9000:di_35 + 0x00A0:byte] + (ah_52 <u 0x00) : word16)
  Class: Eq_61
  DataType: Eq_61
  OrigDataType: word16
T_69: (in ah_58 : Eq_69)
  Class: Eq_69
  DataType: Eq_69
  OrigDataType: bcu8
T_70: (in 0x00 : byte)
  Class: Eq_61
  DataType: bcu8
  OrigDataType: bcu8
T_71: (in al_55 <u 0x00 : bool)
  Class: Eq_71
  DataType: bool
  OrigDataType: bool
T_72: (in ah_52 + (al_55 <u 0x00) : word16)
  Class: Eq_69
  DataType: Eq_69
  OrigDataType: word16
T_73: (in 0x0002 : word16)
  Class: Eq_73
  DataType: word16
  OrigDataType: word16
T_74: (in di_35 - 0x0002 : word16)
  Class: Eq_74
  DataType: word16
  OrigDataType: word16
T_75: (in Mem0[0x9000:di_35 - 0x0002:byte] : byte)
  Class: Eq_75
  DataType: byte
  OrigDataType: byte
T_76: (in al_55 + Mem0[0x9000:di_35 - 0x0002:byte] : word16)
  Class: Eq_76
  DataType: word16
  OrigDataType: word16
T_77: (in 0x00 : byte)
  Class: Eq_69
  DataType: Eq_69
  OrigDataType: bcu8
T_78: (in ah_58 <u 0x00 : bool)
  Class: Eq_78
  DataType: bool
  OrigDataType: bool
T_79: (in al_55 + Mem0[0x9000:di_35 - 0x0002:byte] + (ah_58 <u 0x00) : word16)
  Class: Eq_79
  DataType: Eq_79
  OrigDataType: cups16
T_80: (in 0x00 : byte)
  Class: Eq_79
  DataType: Eq_79
  OrigDataType: bcu8
T_81: (in al_55 + Mem0[0x9000:di_35 - 0x0002:byte] + (ah_58 <u 0x00) <u 0x00 : bool)
  Class: Eq_81
  DataType: bool
  OrigDataType: bool
T_82: (in ah_58 + ((al_55 + Mem0[0x9000:di_35 - 0x0002:byte]) + (ah_58 <u 0x00) <u 0x00) : word16)
  Class: Eq_82
  DataType: word16
  OrigDataType: word16
T_83: (in DPB(ax_100, ah_58 + ((al_55 + Mem0[0x9000:di_35 - 0x0002:byte]) + (ah_58 <u 0x00) <u 0x00), 8, 8) : word16)
  Class: Eq_20
  DataType: uint16
  OrigDataType: word16
T_84: (in ax_65 >>u 0x0002 : word16)
  Class: Eq_10
  DataType: uint16
  OrigDataType: uint16
T_85: (in dx : uint16)
  Class: Eq_85
  DataType: uint16
  OrigDataType: uint16
T_86: (in ax_65 >>u 0x0002 : word16)
  Class: Eq_86
  DataType: uint16
  OrigDataType: uint16
T_87: (in SEQ(dx, ax_65 >>u 0x0002) : word32)
  Class: Eq_25
  DataType: word32
  OrigDataType: word32
T_88: (in ax_65 >>u 0x0002 : word16)
  Class: Eq_88
  DataType: uint16
  OrigDataType: uint16
T_89: (in (byte) (ax_65 >>u 0x0002) : byte)
  Class: Eq_17
  DataType: byte
  OrigDataType: byte
T_90: (in ax_65 >>u 0x0002 : word16)
  Class: Eq_90
  DataType: uint16
  OrigDataType: uint16
T_91: (in SLICE(ax_65 >>u 0x0002, byte, 8) : byte)
  Class: Eq_12
  DataType: byte
  OrigDataType: byte
T_92: (in ax_65 >>u 0x0002 : word16)
  Class: Eq_92
  DataType: uint16
  OrigDataType: uint16
T_93: (in 0x0007 : word16)
  Class: Eq_92
  DataType: uint16
  OrigDataType: cups16
T_94: (in ax_65 >>u 0x0002 <=u 0x0007 : bool)
  Class: Eq_94
  DataType: bool
  OrigDataType: bool
T_95: (in di_114 : Eq_95)
  Class: Eq_95
  DataType: Eq_95
  OrigDataType: (union (int16 u0) ((memptr T_28 (struct 0002 (F9E T_121 t0F9E) (FA0 T_100 t0FA0))) u1) ((memptr T_118 (struct 0002 (0 T_162 t0000) (1 T_171 t0001))) u2))
T_96: (in 0x0FA0 : word16)
  Class: Eq_95
  DataType: int16
  OrigDataType: word16
T_97: (in al_92 : byte)
  Class: Eq_97
  DataType: byte
  OrigDataType: byte
T_98: (in 0x0FA0 : word16)
  Class: Eq_98
  DataType: word16
  OrigDataType: word16
T_99: (in di_114 + 0x0FA0 : word16)
  Class: Eq_99
  DataType: word16
  OrigDataType: word16
T_100: (in Mem80[0x9000:di_114 + 0x0FA0:byte] : byte)
  Class: Eq_97
  DataType: byte
  OrigDataType: byte
T_101: (in dx_ax_93 : word32)
  Class: Eq_101
  DataType: word32
  OrigDataType: word32
T_102: (in DPB(dx_ax_101, al_92, 0, 8) : word32)
  Class: Eq_101
  DataType: word32
  OrigDataType: word32
T_103: (in dx_ax_97 : uint32)
  Class: Eq_103
  DataType: uint32
  OrigDataType: uint32
T_104: (in 0x0F : byte)
  Class: Eq_104
  DataType: byte
  OrigDataType: byte
T_105: (in dx_ax_93 % 0x0F : uint16)
  Class: Eq_105
  DataType: uint16
  OrigDataType: uint16
T_106: (in SEQ(dx_ax_93 % 0x0F, ax_100) : word32)
  Class: Eq_103
  DataType: uint32
  OrigDataType: word32
T_107: (in 0x0F : byte)
  Class: Eq_107
  DataType: uint8
  OrigDataType: uint8
T_108: (in dx_ax_97 /u 0x0F : uint16)
  Class: Eq_108
  DataType: uint16
  OrigDataType: uint16
T_109: (in 0x00 : byte)
  Class: Eq_109
  DataType: byte
  OrigDataType: byte
T_110: (in DPB(dx_ax_97 /u 0x0F, 0x00, 8, 8) : word16)
  Class: Eq_10
  DataType: uint16
  OrigDataType: word16
T_111: (in cx_105 : word16)
  Class: Eq_111
  DataType: word16
  OrigDataType: word16
T_112: (in ds : (ptr Eq_112))
  Class: Eq_112
  DataType: (ptr Eq_112)
  OrigDataType: (ptr (segment (1DB (arr T_223) a01DB)))
T_113: (in 0x01DB : word16)
  Class: Eq_113
  DataType: word16
  OrigDataType: word16
T_114: (in SEQ(ds, 0x01DB) : ptr32)
  Class: Eq_114
  DataType: ptr32
  OrigDataType: ptr32
T_115: (in 0x0002 : word16)
  Class: Eq_115
  DataType: ui16
  OrigDataType: ui16
T_116: (in ax_100 * 0x0002 : word16)
  Class: Eq_116
  DataType: ui16
  OrigDataType: ui16
T_117: (in SEQ(ds, 0x01DB)[ax_100 * 0x0002] : word16)
  Class: Eq_111
  DataType: word16
  OrigDataType: word16
T_118: (in 0x8000 : selector)
  Class: Eq_28
  DataType: (ptr Eq_28)
  OrigDataType: (ptr (segment (0 (arr T_224 1) a0000)))
T_119: (in 0x0F9E : word16)
  Class: Eq_119
  DataType: word16
  OrigDataType: word16
T_120: (in di_114 + 0x0F9E : word16)
  Class: Eq_120
  DataType: word16
  OrigDataType: word16
T_121: (in Mem106[0x8000:di_114 + 0x0F9E:word16] : word16)
  Class: Eq_111
  DataType: word16
  OrigDataType: word16
T_122: (in di_109 : Eq_122)
  Class: Eq_122
  DataType: Eq_122
  OrigDataType: (union (int16 u0) ((memptr T_118 (struct (FA0 T_127 t0FA0))) u1))
T_123: (in -di_114 : word16)
  Class: Eq_122
  DataType: Eq_122
  OrigDataType: int16
T_124: (in DPB(cx_105, al_92, 0, 8) : word16)
  Class: Eq_124
  DataType: word16
  OrigDataType: word16
T_125: (in 0x0FA0 : word16)
  Class: Eq_125
  DataType: word16
  OrigDataType: word16
T_126: (in di_109 + 0x0FA0 : word16)
  Class: Eq_126
  DataType: word16
  OrigDataType: word16
T_127: (in Mem110[0x8000:di_109 + 0x0FA0:word16] : word16)
  Class: Eq_124
  DataType: word16
  OrigDataType: word16
T_128: (in di_111 : int16)
  Class: Eq_128
  DataType: int16
  OrigDataType: word16
T_129: (in -di_109 : word16)
  Class: Eq_128
  DataType: int16
  OrigDataType: int16
T_130: (in dx_ax_93 % 0x0F : uint16)
  Class: Eq_85
  DataType: uint16
  OrigDataType: uint16
T_131: (in 0x00 : byte)
  Class: Eq_131
  DataType: byte
  OrigDataType: byte
T_132: (in DPB(dx_ax_97, 0x00, 8, 8) : word32)
  Class: Eq_25
  DataType: word32
  OrigDataType: word32
T_133: (in 0x0002 : word16)
  Class: Eq_133
  DataType: word16
  OrigDataType: word16
T_134: (in di_111 - 0x0002 : word16)
  Class: Eq_95
  DataType: Eq_95
  OrigDataType: word16
T_135: (in 0x0002 : word16)
  Class: Eq_128
  DataType: int16
  OrigDataType: word16
T_136: (in di_111 != 0x0002 : bool)
  Class: Eq_136
  DataType: bool
  OrigDataType: bool
T_137: (in si_117 : (memptr (ptr Eq_28) Eq_137))
  Class: Eq_137
  DataType: (memptr (ptr Eq_28) Eq_137)
  OrigDataType: (memptr T_118 (struct 003B (0 T_157 t0000)))
T_138: (in 0x0000 : word16)
  Class: Eq_137
  DataType: (memptr (ptr Eq_28) Eq_137)
  OrigDataType: word16
T_139: (in bl_119 : bcu8)
  Class: Eq_139
  DataType: bcu8
  OrigDataType: bcu8
T_140: (in 0x00 : byte)
  Class: Eq_139
  DataType: bcu8
  OrigDataType: byte
T_141: (in bh_120 : byte)
  Class: Eq_141
  DataType: byte
  OrigDataType: byte
T_142: (in 0x00 : byte)
  Class: Eq_141
  DataType: byte
  OrigDataType: byte
T_143: (in si_139 : word16)
  Class: Eq_143
  DataType: word16
  OrigDataType: word16
T_144: (in 0x0001 : word16)
  Class: Eq_144
  DataType: word16
  OrigDataType: word16
T_145: (in si_117 + 0x0001 : word16)
  Class: Eq_143
  DataType: word16
  OrigDataType: word16
T_146: (in 0x00A0 : word16)
  Class: Eq_146
  DataType: word16
  OrigDataType: word16
T_147: (in di_114 + 0x00A0 : word16)
  Class: Eq_95
  DataType: Eq_95
  OrigDataType: word16
T_148: (in 0x01 : byte)
  Class: Eq_148
  DataType: byte
  OrigDataType: byte
T_149: (in bl_119 + 0x01 : byte)
  Class: Eq_139
  DataType: bcu8
  OrigDataType: byte
T_150: (in 0x0001 : word16)
  Class: Eq_150
  DataType: word16
  OrigDataType: word16
T_151: (in si_139 + 0x0001 : word16)
  Class: Eq_137
  DataType: (memptr (ptr Eq_28) Eq_137)
  OrigDataType: word16
T_152: (in 0x33 : byte)
  Class: Eq_139
  DataType: bcu8
  OrigDataType: bcu8
T_153: (in bl_119 <u 0x33 : bool)
  Class: Eq_153
  DataType: bool
  OrigDataType: bool
T_154: (in cx_182 : word16)
  Class: Eq_154
  DataType: word16
  OrigDataType: word16
T_155: (in 0x0000 : word16)
  Class: Eq_155
  DataType: word16
  OrigDataType: word16
T_156: (in si_117 + 0x0000 : word16)
  Class: Eq_156
  DataType: word16
  OrigDataType: word16
T_157: (in Mem110[0x8000:si_117 + 0x0000:word16] : word16)
  Class: Eq_157
  DataType: word16
  OrigDataType: word16
T_158: (in 0x01 : byte)
  Class: Eq_158
  DataType: byte
  OrigDataType: byte
T_159: (in DPB((0x8000->*si_117).w0000, 0x01, 0, 8) : word16)
  Class: Eq_154
  DataType: word16
  OrigDataType: word16
T_160: (in 0x0000 : word16)
  Class: Eq_160
  DataType: word16
  OrigDataType: word16
T_161: (in di_114 + 0x0000 : word16)
  Class: Eq_161
  DataType: word16
  OrigDataType: word16
T_162: (in Mem183[0x8000:di_114 + 0x0000:word16] : word16)
  Class: Eq_154
  DataType: word16
  OrigDataType: word16
T_163: (in di_184 : Eq_163)
  Class: Eq_163
  DataType: Eq_163
  OrigDataType: (union (int16 u0) ((memptr T_118 (struct (1F3E T_167 t1F3E))) u1))
T_164: (in -di_114 : word16)
  Class: Eq_163
  DataType: Eq_163
  OrigDataType: int16
T_165: (in 0x1F3E : word16)
  Class: Eq_165
  DataType: word16
  OrigDataType: word16
T_166: (in di_184 + 0x1F3E : word16)
  Class: Eq_166
  DataType: word16
  OrigDataType: word16
T_167: (in Mem185[0x8000:di_184 + 0x1F3E:word16] : word16)
  Class: Eq_154
  DataType: word16
  OrigDataType: word16
T_168: (in -di_184 : word16)
  Class: Eq_95
  DataType: Eq_95
  OrigDataType: int16
T_169: (in 0x0001 : word16)
  Class: Eq_169
  DataType: word16
  OrigDataType: word16
T_170: (in di_114 + 0x0001 : word16)
  Class: Eq_170
  DataType: word16
  OrigDataType: word16
T_171: (in Mem110[0x8000:di_114 + 0x0001:byte] : byte)
  Class: Eq_171
  DataType: byte
  OrigDataType: byte
T_172: (in 0x00 : byte)
  Class: Eq_171
  DataType: byte
  OrigDataType: byte
T_173: (in Mem110[0x8000:di_114 + 0x0001:byte] != 0x00 : bool)
  Class: Eq_173
  DataType: bool
  OrigDataType: bool
T_174: (in 0x1FDE : word16)
  Class: Eq_174
  DataType: word16
  OrigDataType: word16
T_175: (in di_114 - 0x1FDE : word16)
  Class: Eq_95
  DataType: Eq_95
  OrigDataType: word16
T_176: (in 0x003B : word16)
  Class: Eq_176
  DataType: word16
  OrigDataType: word16
T_177: (in si_139 + 0x003B : word16)
  Class: Eq_137
  DataType: (memptr (ptr Eq_28) Eq_137)
  OrigDataType: word16
T_178: (in 0x00 : byte)
  Class: Eq_139
  DataType: bcu8
  OrigDataType: byte
T_179: (in 0x01 : byte)
  Class: Eq_179
  DataType: byte
  OrigDataType: byte
T_180: (in bh_120 + 0x01 : byte)
  Class: Eq_141
  DataType: byte
  OrigDataType: byte
T_181: (in 0x19 : byte)
  Class: Eq_141
  DataType: byte
  OrigDataType: byte
T_182: (in bh_120 != 0x19 : bool)
  Class: Eq_182
  DataType: bool
  OrigDataType: bool
T_183: (in di_157 : (memptr (ptr Eq_28) byte))
  Class: Eq_183
  DataType: (memptr (ptr Eq_28) byte)
  OrigDataType: (memptr T_28 (struct 0001 (0 T_187 t0000)))
T_184: (in 0x0000 : word16)
  Class: Eq_183
  DataType: (memptr (ptr Eq_28) byte)
  OrigDataType: word16
T_185: (in 0x0000 : word16)
  Class: Eq_185
  DataType: word16
  OrigDataType: word16
T_186: (in di_157 + 0x0000 : word16)
  Class: Eq_186
  DataType: word16
  OrigDataType: word16
T_187: (in Mem110[0x8000:di_157 + 0x0000:byte] : byte)
  Class: Eq_51
  DataType: byte
  OrigDataType: byte
T_188: (in 0xB800 : selector)
  Class: Eq_28
  DataType: (ptr Eq_28)
  OrigDataType: (ptr (segment (0 (arr T_225 1) a0000)))
T_189: (in 0x0000 : word16)
  Class: Eq_189
  DataType: word16
  OrigDataType: word16
T_190: (in di_157 + 0x0000 : word16)
  Class: Eq_190
  DataType: word16
  OrigDataType: word16
T_191: (in Mem164[0xB800:di_157 + 0x0000:byte] : byte)
  Class: Eq_51
  DataType: byte
  OrigDataType: byte
T_192: (in 0x0001 : word16)
  Class: Eq_192
  DataType: word16
  OrigDataType: word16
T_193: (in di_157 + 0x0001 : word16)
  Class: Eq_183
  DataType: (memptr (ptr Eq_28) byte)
  OrigDataType: word16
T_194: (in 0x0000 : word16)
  Class: Eq_183
  DataType: (memptr (ptr Eq_28) byte)
  OrigDataType: word16
T_195: (in di_157 != Eq_28::a0000 : bool)
  Class: Eq_195
  DataType: bool
  OrigDataType: bool
T_196: (in 0x9000 : word16)
  Class: Eq_196
  DataType: word16
  OrigDataType: word16
T_197: (in ss : selector)
  Class: Eq_197
  DataType: (ptr Eq_197)
  OrigDataType: (ptr (segment))
T_198: (in fp : ptr16)
  Class: Eq_198
  DataType: Eq_198
  OrigDataType: (union (ptr16 u0) ((memptr T_197 (struct (FFFFFFFE T_201 tFFFFFFFE))) u1))
T_199: (in 0x0002 : word16)
  Class: Eq_199
  DataType: word16
  OrigDataType: word16
T_200: (in fp - 0x0002 : word16)
  Class: Eq_200
  DataType: word16
  OrigDataType: word16
T_201: (in Mem171[ss:fp - 0x0002:word16] : word16)
  Class: Eq_196
  DataType: word16
  OrigDataType: word16
T_202: (in al_175 : byte)
  Class: Eq_202
  DataType: byte
  OrigDataType: byte
T_203: (in bios_kbd_check_keystroke : ptr32)
  Class: Eq_203
  DataType: (ptr Eq_203)
  OrigDataType: (ptr (fn T_207 (T_206)))
T_204: (in signature of bios_kbd_check_keystroke : void)
  Class: Eq_203
  DataType: (ptr Eq_203)
  OrigDataType: 
T_205: (in alOut : ptr16)
  Class: Eq_205
  DataType: (ptr byte)
  OrigDataType: ptr16
T_206: (in out al_175 : ptr16)
  Class: Eq_205
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_207: (in bios_kbd_check_keystroke(out al_175) : byte)
  Class: Eq_12
  DataType: byte
  OrigDataType: byte
T_208: (in DPB(ax_100, ah_14, 8, 8) : word16)
  Class: Eq_10
  DataType: uint16
  OrigDataType: word16
T_209: (in 0x0000 : word16)
  Class: Eq_183
  DataType: (memptr (ptr Eq_28) byte)
  OrigDataType: word16
T_210: (in di_157 == Eq_28::a0000 : bool)
  Class: Eq_210
  DataType: bool
  OrigDataType: bool
T_211: (in 0x0000 : word16)
  Class: Eq_14
  DataType: cups16
  OrigDataType: word16
T_212: (in false : bool)
  Class: Eq_39
  DataType: bool
  OrigDataType: bool
T_213: (in bios_video_set_mode : ptr32)
  Class: Eq_213
  DataType: (ptr Eq_213)
  OrigDataType: (ptr (fn T_217 (T_216)))
T_214: (in signature of bios_video_set_mode : void)
  Class: Eq_213
  DataType: (ptr Eq_213)
  OrigDataType: 
T_215: (in al : byte)
  Class: Eq_215
  DataType: byte
  OrigDataType: byte
T_216: (in 0x03 : byte)
  Class: Eq_215
  DataType: byte
  OrigDataType: byte
T_217: (in bios_video_set_mode(0x03) : void)
  Class: Eq_217
  DataType: void
  OrigDataType: void
T_218:
  Class: Eq_218
  DataType: byte
  OrigDataType: (struct 0001 (0 T_31 t0000))
T_219:
  Class: Eq_219
  DataType: byte
  OrigDataType: (struct 0001 (0 T_51 t0000))
T_220:
  Class: Eq_220
  DataType: byte
  OrigDataType: (struct 0001 (0 T_54 t0000))
T_221:
  Class: Eq_221
  DataType: byte
  OrigDataType: (struct 0001 (0 T_64 t0000))
T_222:
  Class: Eq_222
  DataType: byte
  OrigDataType: (struct 0001 (0 T_75 t0000))
T_223:
  Class: Eq_223
  DataType: word16
  OrigDataType: (struct 0002 (0 T_117 t0000))
T_224:
  Class: Eq_219
  DataType: byte
  OrigDataType: (struct 0001 (0 T_187 t0000))
T_225:
  Class: Eq_219
  DataType: byte
  OrigDataType: (struct 0001 (0 T_191 t0000))
T_226:
  Class: Eq_226
  DataType: Eq_226
  OrigDataType: 
T_227:
  Class: Eq_227
  DataType: Eq_227
  OrigDataType: 
T_228:
  Class: Eq_228
  DataType: Eq_228
  OrigDataType: 
T_229:
  Class: Eq_229
  DataType: Eq_229
  OrigDataType: 
T_230:
  Class: Eq_230
  DataType: Eq_230
  OrigDataType: 
*/
typedef Eq_28 Eq_1Eq_28 Eq_1Eq_28 Eq_1struct Globals {
	Eq_28 * ptrFFF80000;	// FFF80000
	Eq_28 * ptrFFF90000;	// FFF90000
	Eq_28 * ptrFFFB8000;	// FFFB8000
} Eq_1;

typedef void (Eq_2)(byte);

typedef void (Eq_7)(byte);

typedef union Eq_14 {
	cups16 u0;
	Eq_226 Eq_28::* u1;
} Eq_14;

typedef  Eq_28[8318][8318][8318][8318][8318]struct Eq_28 {
	byte aFFFFFF60[8318];	// FFFFFF60
	byte aFFFFFFFE[8318];	// FFFFFFFE
	byte a0000[8318];	// 0
	byte a0002[8318];	// 2
	byte a00A0[8318];	// A0
} Eq_28;

typedef byte (Eq_43)(byte);

typedef union Eq_48 {
	bcu8 u0;
	word16 u1;
} Eq_48;

typedef union Eq_57 {
	bcu8 u0;
	word16 u1;
} Eq_57;

typedef union Eq_61 {
	bcu8 u0;
	word16 u1;
} Eq_61;

typedef union Eq_69 {
	bcu8 u0;
	word16 u1;
} Eq_69;

typedef union Eq_79 {
	bcu8 u0;
	cups16 u1;
} Eq_79;

typedef union Eq_95 {
	int16 u0;
	Eq_227 Eq_28::* u1;
} Eq_95;

typedef  Eq_112[]struct Eq_112 {
	word16 a01DB[];	// 1DB
} Eq_112;

typedef union Eq_122 {
	int16 u0;
	Eq_228 Eq_28::* u1;
} Eq_122;

typedef struct Eq_137 {	// size: 59 3B
	word16 w0000;	// 0
} Eq_137;

typedef union Eq_163 {
	int16 u0;
	Eq_229 Eq_28::* u1;
} Eq_163;

typedef struct Eq_197 {
} Eq_197;

typedef union Eq_198 {
	ptr16 u0;
	Eq_230 Eq_197::* u1;
} Eq_198;

typedef byte (Eq_203)(byte *);

typedef void (Eq_213)(byte);

typedef struct Eq_226 {	// size: 1 1
	byte bFFFFFF60;	// FFFFFF60
	byte bFFFFFFFE;	// FFFFFFFE
	byte b0000;	// 0
	byte b0002;	// 2
	byte b00A0;	// A0
} Eq_226;

typedef struct Eq_227 {	// size: 2 2
	word16 w0000;	// 0
	byte b0001;	// 1
	word16 w0F9E;	// F9E
	byte b0FA0;	// FA0
} Eq_227;

typedef struct Eq_228 {
	word16 w0FA0;	// FA0
} Eq_228;

typedef struct Eq_229 {
	word16 w1F3E;	// 1F3E
} Eq_229;

typedef struct Eq_230 {
	word16 wFFFFFFFE;	// FFFFFFFE
} Eq_230;

