// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_208/ia32_com/subject.exe
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
Eq_14: (union "Eq_14" (cups16 u0) ((memptr (ptr Eq_28) Eq_222) u1))
	T_14 (in di_33 : Eq_14)
	T_15 (in 0x1FE0 : word16)
	T_36 (in di_79 + 0x0001 : word16)
	T_207 (in 0x0000 : word16)
Eq_28: (segment "Eq_28" (FFFFFF60 (arr byte 8318) aFFFFFF60) (FFFFFFFE (arr byte 8318) aFFFFFFFE) (0 (arr byte 8318) a0000) (2 (arr byte 8318) a0002) (A0 (arr byte 8318) a00A0))
	T_28 (in 0x9000 : selector)
	T_117 (in 0x8000 : selector)
	T_184 (in 0xB800 : selector)
Eq_43: (fn byte (byte))
	T_43 (in __inb : ptr32)
Eq_48: (union "Eq_48" (bcu8 u0) (word16 u1))
	T_48 (in al_47 : byte)
	T_56 (in Mem0[0x9000:di_33 + 0x0000:byte] + Mem0[0x9000:di_33 + 0x0002:byte] + C_36 : word16)
	T_58 (in 0x00 : byte)
Eq_57: (union "Eq_57" (bcu8 u0) (word16 u1))
	T_57 (in ah_50 : Eq_57)
	T_60 (in ah_14 + (al_47 <u 0x00) : word16)
	T_66 (in 0x00 : byte)
Eq_61: (union "Eq_61" (bcu8 u0) (word16 u1))
	T_61 (in al_53 : byte)
	T_68 (in al_47 + Mem0[0x9000:di_33 + 0x00A0:byte] + (ah_50 <u 0x00) : word16)
	T_70 (in 0x00 : byte)
Eq_69: (union "Eq_69" (bcu8 u0) (word16 u1))
	T_69 (in ah_56 : Eq_69)
	T_72 (in ah_50 + (al_53 <u 0x00) : word16)
	T_77 (in 0x00 : byte)
Eq_79: (union "Eq_79" (bcu8 u0) (cups16 u1))
	T_79 (in al_53 + Mem0[0x9000:di_33 - 0x0002:byte] + (ah_56 <u 0x00) : word16)
	T_80 (in 0x00 : byte)
Eq_95: (union "Eq_95" (int16 u0) ((memptr (ptr Eq_28) Eq_223) u1))
	T_95 (in di_109 : Eq_95)
	T_96 (in 0x0FA0 : word16)
	T_132 (in di_106 - 0x0002 : word16)
	T_145 (in di_109 + 0x00A0 : word16)
	T_164 (in -di_175 : word16)
	T_171 (in di_109 - 0x1FDE : word16)
Eq_111: (segment "Eq_111" (1D5 (arr word16) a01D5))
	T_111 (in ds : (ptr Eq_111))
Eq_121: (union "Eq_121" (int16 u0) ((memptr (ptr Eq_28) Eq_224) u1))
	T_121 (in di_104 : Eq_121)
	T_122 (in -di_109 : word16)
Eq_135: (struct "Eq_135" 003B (0 word16 w0000))
	T_135 (in si_112 : (memptr (ptr Eq_28) Eq_135))
	T_136 (in 0x0000 : word16)
	T_149 (in si_132 + 0x0001 : word16)
	T_173 (in si_132 + 0x003B : word16)
Eq_159: (union "Eq_159" (int16 u0) ((memptr (ptr Eq_28) Eq_225) u1))
	T_159 (in di_175 : Eq_159)
	T_160 (in -di_109 : word16)
Eq_193: (segment "Eq_193")
	T_193 (in ss : selector)
Eq_194: (union "Eq_194" (ptr16 u0) ((memptr (ptr Eq_193) Eq_226) u1))
	T_194 (in fp : ptr16)
Eq_199: (fn byte ((ptr byte)))
	T_199 (in bios_kbd_check_keystroke : ptr32)
	T_200 (in signature of bios_kbd_check_keystroke : void)
Eq_209: (fn void (byte))
	T_209 (in bios_video_set_mode : ptr32)
	T_210 (in signature of bios_video_set_mode : void)
Eq_222: (struct "Eq_222" 0001 (FFFFFF60 byte bFFFFFF60) (FFFFFFFE byte bFFFFFFFE) (0 byte b0000) (2 byte b0002) (A0 byte b00A0))
	T_222
Eq_223: (struct "Eq_223" 0002 (0 word16 w0000) (1 byte b0001) (F9E word16 w0F9E) (FA0 byte b0FA0))
	T_223
Eq_224: (struct "Eq_224" (FA0 word16 w0FA0))
	T_224
Eq_225: (struct "Eq_225" (1F3E word16 w1F3E))
	T_225
Eq_226: (struct "Eq_226" (FFFFFFFE word16 wFFFFFFFE))
	T_226
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
T_10: (in ax_11 : uint16)
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
T_14: (in di_33 : Eq_14)
  Class: Eq_14
  DataType: Eq_14
  OrigDataType: (union (cups16 u0) ((memptr T_28 (struct 0001 (FFFFFF60 T_31 tFFFFFF60) (FFFFFFFE T_75 tFFFFFFFE) (0 T_51 t0000) (2 T_54 t0002) (A0 T_64 t00A0))) u1))
T_15: (in 0x1FE0 : word16)
  Class: Eq_14
  DataType: cups16
  OrigDataType: cups16
T_16: (in di_33 <u 0x1FE0 : bool)
  Class: Eq_16
  DataType: bool
  OrigDataType: bool
T_17: (in al_180 : byte)
  Class: Eq_17
  DataType: byte
  OrigDataType: byte
T_18: (in 0x07 : byte)
  Class: Eq_18
  DataType: byte
  OrigDataType: byte
T_19: (in al_180 - 0x07 : byte)
  Class: Eq_17
  DataType: byte
  OrigDataType: byte
T_20: (in ax_63 : word16)
  Class: Eq_20
  DataType: uint16
  OrigDataType: uint16
T_21: (in 0x0002 : word16)
  Class: Eq_21
  DataType: uint16
  OrigDataType: uint16
T_22: (in ax_63 >>u 0x0002 : word16)
  Class: Eq_22
  DataType: uint16
  OrigDataType: uint16
T_23: (in al_180 - 0x07 : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_24: (in DPB(ax_63 >>u 0x0002, al_180 - 0x07, 0, 8) : word16)
  Class: Eq_10
  DataType: uint16
  OrigDataType: word16
T_25: (in dx_ax_182 : word32)
  Class: Eq_25
  DataType: word32
  OrigDataType: word32
T_26: (in al_180 - 0x07 : byte)
  Class: Eq_26
  DataType: byte
  OrigDataType: byte
T_27: (in DPB(dx_ax_182, al_180 - 0x07, 0, 8) : word32)
  Class: Eq_25
  DataType: word32
  OrigDataType: word32
T_28: (in 0x9000 : selector)
  Class: Eq_28
  DataType: (ptr Eq_28)
  OrigDataType: (ptr (segment (FFFFFF60 (arr T_214 8318) aFFFFFF60) (FFFFFFFE (arr T_218 8318) aFFFFFFFE) (0 (arr T_215 8318) a0000) (2 (arr T_216 8318) a0002) (A0 (arr T_217 8318) a00A0)))
T_29: (in 0x00A0 : word16)
  Class: Eq_29
  DataType: word16
  OrigDataType: word16
T_30: (in di_33 - 0x00A0 : word16)
  Class: Eq_30
  DataType: word16
  OrigDataType: word16
T_31: (in Mem78[0x9000:di_33 - 0x00A0:byte] : byte)
  Class: Eq_17
  DataType: byte
  OrigDataType: byte
T_32: (in di_79 : word16)
  Class: Eq_32
  DataType: cups16
  OrigDataType: cups16
T_33: (in 0x0001 : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_34: (in di_33 + 0x0001 : word16)
  Class: Eq_32
  DataType: cups16
  OrigDataType: word16
T_35: (in 0x0001 : word16)
  Class: Eq_35
  DataType: word16
  OrigDataType: word16
T_36: (in di_79 + 0x0001 : word16)
  Class: Eq_14
  DataType: Eq_14
  OrigDataType: word16
T_37: (in 0x207F : word16)
  Class: Eq_37
  DataType: word16
  OrigDataType: word16
T_38: (in di_79 - 0x207F : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_39: (in cond(di_79 - 0x207F) : byte)
  Class: Eq_39
  DataType: bool
  OrigDataType: byte
T_40: (in C_36 : bool)
  Class: Eq_39
  DataType: bool
  OrigDataType: byte
T_41: (in 0xDF81 : word16)
  Class: Eq_32
  DataType: cups16
  OrigDataType: cups16
T_42: (in di_79 <u 0xDF81 : bool)
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
T_46: (in DPB(ax_11, al_180, 0, 8) : word16)
  Class: Eq_10
  DataType: uint16
  OrigDataType: word16
T_47: (in DPB(dx_ax_182, al_180, 0, 8) : word32)
  Class: Eq_25
  DataType: word32
  OrigDataType: word32
T_48: (in al_47 : byte)
  Class: Eq_48
  DataType: Eq_48
  OrigDataType: bcu8
T_49: (in 0x0000 : word16)
  Class: Eq_49
  DataType: word16
  OrigDataType: word16
T_50: (in di_33 + 0x0000 : word16)
  Class: Eq_50
  DataType: word16
  OrigDataType: word16
T_51: (in Mem0[0x9000:di_33 + 0x0000:byte] : byte)
  Class: Eq_51
  DataType: byte
  OrigDataType: byte
T_52: (in 0x0002 : word16)
  Class: Eq_52
  DataType: word16
  OrigDataType: word16
T_53: (in di_33 + 0x0002 : word16)
  Class: Eq_53
  DataType: word16
  OrigDataType: word16
T_54: (in Mem0[0x9000:di_33 + 0x0002:byte] : byte)
  Class: Eq_54
  DataType: byte
  OrigDataType: byte
T_55: (in Mem0[0x9000:di_33 + 0x0000:byte] + Mem0[0x9000:di_33 + 0x0002:byte] : word16)
  Class: Eq_55
  DataType: word16
  OrigDataType: word16
T_56: (in Mem0[0x9000:di_33 + 0x0000:byte] + Mem0[0x9000:di_33 + 0x0002:byte] + C_36 : word16)
  Class: Eq_48
  DataType: Eq_48
  OrigDataType: word16
T_57: (in ah_50 : Eq_57)
  Class: Eq_57
  DataType: Eq_57
  OrigDataType: bcu8
T_58: (in 0x00 : byte)
  Class: Eq_48
  DataType: bcu8
  OrigDataType: bcu8
T_59: (in al_47 <u 0x00 : bool)
  Class: Eq_59
  DataType: bool
  OrigDataType: bool
T_60: (in ah_14 + (al_47 <u 0x00) : word16)
  Class: Eq_57
  DataType: Eq_57
  OrigDataType: word16
T_61: (in al_53 : byte)
  Class: Eq_61
  DataType: Eq_61
  OrigDataType: bcu8
T_62: (in 0x00A0 : word16)
  Class: Eq_62
  DataType: word16
  OrigDataType: word16
T_63: (in di_33 + 0x00A0 : word16)
  Class: Eq_63
  DataType: word16
  OrigDataType: word16
T_64: (in Mem0[0x9000:di_33 + 0x00A0:byte] : byte)
  Class: Eq_64
  DataType: byte
  OrigDataType: byte
T_65: (in al_47 + Mem0[0x9000:di_33 + 0x00A0:byte] : word16)
  Class: Eq_65
  DataType: word16
  OrigDataType: word16
T_66: (in 0x00 : byte)
  Class: Eq_57
  DataType: Eq_57
  OrigDataType: bcu8
T_67: (in ah_50 <u 0x00 : bool)
  Class: Eq_67
  DataType: bool
  OrigDataType: bool
T_68: (in al_47 + Mem0[0x9000:di_33 + 0x00A0:byte] + (ah_50 <u 0x00) : word16)
  Class: Eq_61
  DataType: Eq_61
  OrigDataType: word16
T_69: (in ah_56 : Eq_69)
  Class: Eq_69
  DataType: Eq_69
  OrigDataType: bcu8
T_70: (in 0x00 : byte)
  Class: Eq_61
  DataType: bcu8
  OrigDataType: bcu8
T_71: (in al_53 <u 0x00 : bool)
  Class: Eq_71
  DataType: bool
  OrigDataType: bool
T_72: (in ah_50 + (al_53 <u 0x00) : word16)
  Class: Eq_69
  DataType: Eq_69
  OrigDataType: word16
T_73: (in 0x0002 : word16)
  Class: Eq_73
  DataType: word16
  OrigDataType: word16
T_74: (in di_33 - 0x0002 : word16)
  Class: Eq_74
  DataType: word16
  OrigDataType: word16
T_75: (in Mem0[0x9000:di_33 - 0x0002:byte] : byte)
  Class: Eq_75
  DataType: byte
  OrigDataType: byte
T_76: (in al_53 + Mem0[0x9000:di_33 - 0x0002:byte] : word16)
  Class: Eq_76
  DataType: word16
  OrigDataType: word16
T_77: (in 0x00 : byte)
  Class: Eq_69
  DataType: Eq_69
  OrigDataType: bcu8
T_78: (in ah_56 <u 0x00 : bool)
  Class: Eq_78
  DataType: bool
  OrigDataType: bool
T_79: (in al_53 + Mem0[0x9000:di_33 - 0x0002:byte] + (ah_56 <u 0x00) : word16)
  Class: Eq_79
  DataType: Eq_79
  OrigDataType: cups16
T_80: (in 0x00 : byte)
  Class: Eq_79
  DataType: Eq_79
  OrigDataType: bcu8
T_81: (in al_53 + Mem0[0x9000:di_33 - 0x0002:byte] + (ah_56 <u 0x00) <u 0x00 : bool)
  Class: Eq_81
  DataType: bool
  OrigDataType: bool
T_82: (in ah_56 + ((al_53 + Mem0[0x9000:di_33 - 0x0002:byte]) + (ah_56 <u 0x00) <u 0x00) : word16)
  Class: Eq_82
  DataType: word16
  OrigDataType: word16
T_83: (in DPB(ax_11, ah_56 + ((al_53 + Mem0[0x9000:di_33 - 0x0002:byte]) + (ah_56 <u 0x00) <u 0x00), 8, 8) : word16)
  Class: Eq_20
  DataType: uint16
  OrigDataType: word16
T_84: (in ax_63 >>u 0x0002 : word16)
  Class: Eq_10
  DataType: uint16
  OrigDataType: uint16
T_85: (in dx : uint16)
  Class: Eq_85
  DataType: uint16
  OrigDataType: uint16
T_86: (in ax_63 >>u 0x0002 : word16)
  Class: Eq_86
  DataType: uint16
  OrigDataType: uint16
T_87: (in SEQ(dx, ax_63 >>u 0x0002) : word32)
  Class: Eq_25
  DataType: word32
  OrigDataType: word32
T_88: (in ax_63 >>u 0x0002 : word16)
  Class: Eq_88
  DataType: uint16
  OrigDataType: uint16
T_89: (in (byte) (ax_63 >>u 0x0002) : byte)
  Class: Eq_17
  DataType: byte
  OrigDataType: byte
T_90: (in ax_63 >>u 0x0002 : word16)
  Class: Eq_90
  DataType: uint16
  OrigDataType: uint16
T_91: (in SLICE(ax_63 >>u 0x0002, byte, 8) : byte)
  Class: Eq_12
  DataType: byte
  OrigDataType: byte
T_92: (in ax_63 >>u 0x0002 : word16)
  Class: Eq_92
  DataType: uint16
  OrigDataType: uint16
T_93: (in 0x0007 : word16)
  Class: Eq_92
  DataType: uint16
  OrigDataType: cups16
T_94: (in ax_63 >>u 0x0002 <=u 0x0007 : bool)
  Class: Eq_94
  DataType: bool
  OrigDataType: bool
T_95: (in di_109 : Eq_95)
  Class: Eq_95
  DataType: Eq_95
  OrigDataType: (union (int16 u0) ((memptr T_28 (struct 0002 (F9E T_120 t0F9E) (FA0 T_100 t0FA0))) u1) ((memptr T_117 (struct 0002 (0 T_158 t0000) (1 T_167 t0001))) u2))
T_96: (in 0x0FA0 : word16)
  Class: Eq_95
  DataType: int16
  OrigDataType: word16
T_97: (in dx_ax_91 : word32)
  Class: Eq_97
  DataType: word32
  OrigDataType: word32
T_98: (in 0x0FA0 : word16)
  Class: Eq_98
  DataType: word16
  OrigDataType: word16
T_99: (in di_109 + 0x0FA0 : word16)
  Class: Eq_99
  DataType: word16
  OrigDataType: word16
T_100: (in Mem78[0x9000:di_109 + 0x0FA0:byte] : byte)
  Class: Eq_100
  DataType: byte
  OrigDataType: byte
T_101: (in DPB(dx_ax_182, Mem78[0x9000:di_109 + 0x0FA0:byte], 0, 8) : word32)
  Class: Eq_97
  DataType: word32
  OrigDataType: word32
T_102: (in dx_ax_94 : uint32)
  Class: Eq_102
  DataType: uint32
  OrigDataType: uint32
T_103: (in 0x0F : byte)
  Class: Eq_103
  DataType: byte
  OrigDataType: byte
T_104: (in dx_ax_91 % 0x0F : uint16)
  Class: Eq_104
  DataType: uint16
  OrigDataType: uint16
T_105: (in SEQ(dx_ax_91 % 0x0F, ax_11) : word32)
  Class: Eq_102
  DataType: uint32
  OrigDataType: word32
T_106: (in 0x0F : byte)
  Class: Eq_106
  DataType: uint8
  OrigDataType: uint8
T_107: (in dx_ax_94 /u 0x0F : uint16)
  Class: Eq_107
  DataType: uint16
  OrigDataType: uint16
T_108: (in 0x00 : byte)
  Class: Eq_108
  DataType: byte
  OrigDataType: byte
T_109: (in DPB(dx_ax_94 /u 0x0F, 0x00, 8, 8) : word16)
  Class: Eq_10
  DataType: uint16
  OrigDataType: word16
T_110: (in cx_102 : word16)
  Class: Eq_110
  DataType: word16
  OrigDataType: word16
T_111: (in ds : (ptr Eq_111))
  Class: Eq_111
  DataType: (ptr Eq_111)
  OrigDataType: (ptr (segment (1D5 (arr T_219) a01D5)))
T_112: (in 0x01D5 : word16)
  Class: Eq_112
  DataType: word16
  OrigDataType: word16
T_113: (in SEQ(ds, 0x01D5) : ptr32)
  Class: Eq_113
  DataType: ptr32
  OrigDataType: ptr32
T_114: (in 0x0002 : word16)
  Class: Eq_114
  DataType: ui16
  OrigDataType: ui16
T_115: (in ax_11 * 0x0002 : word16)
  Class: Eq_115
  DataType: ui16
  OrigDataType: ui16
T_116: (in SEQ(ds, 0x01D5)[ax_11 * 0x0002] : word16)
  Class: Eq_110
  DataType: word16
  OrigDataType: word16
T_117: (in 0x8000 : selector)
  Class: Eq_28
  DataType: (ptr Eq_28)
  OrigDataType: (ptr (segment (0 (arr T_220 1) a0000)))
T_118: (in 0x0F9E : word16)
  Class: Eq_118
  DataType: word16
  OrigDataType: word16
T_119: (in di_109 + 0x0F9E : word16)
  Class: Eq_119
  DataType: word16
  OrigDataType: word16
T_120: (in Mem103[0x8000:di_109 + 0x0F9E:word16] : word16)
  Class: Eq_110
  DataType: word16
  OrigDataType: word16
T_121: (in di_104 : Eq_121)
  Class: Eq_121
  DataType: Eq_121
  OrigDataType: (union (int16 u0) ((memptr T_117 (struct (FA0 T_125 t0FA0))) u1))
T_122: (in -di_109 : word16)
  Class: Eq_121
  DataType: Eq_121
  OrigDataType: int16
T_123: (in 0x0FA0 : word16)
  Class: Eq_123
  DataType: word16
  OrigDataType: word16
T_124: (in di_104 + 0x0FA0 : word16)
  Class: Eq_124
  DataType: word16
  OrigDataType: word16
T_125: (in Mem105[0x8000:di_104 + 0x0FA0:word16] : word16)
  Class: Eq_110
  DataType: word16
  OrigDataType: word16
T_126: (in di_106 : int16)
  Class: Eq_126
  DataType: int16
  OrigDataType: word16
T_127: (in -di_104 : word16)
  Class: Eq_126
  DataType: int16
  OrigDataType: int16
T_128: (in dx_ax_91 % 0x0F : uint16)
  Class: Eq_85
  DataType: uint16
  OrigDataType: uint16
T_129: (in 0x00 : byte)
  Class: Eq_129
  DataType: byte
  OrigDataType: byte
T_130: (in DPB(dx_ax_94, 0x00, 8, 8) : word32)
  Class: Eq_25
  DataType: word32
  OrigDataType: word32
T_131: (in 0x0002 : word16)
  Class: Eq_131
  DataType: word16
  OrigDataType: word16
T_132: (in di_106 - 0x0002 : word16)
  Class: Eq_95
  DataType: Eq_95
  OrigDataType: word16
T_133: (in 0x0002 : word16)
  Class: Eq_126
  DataType: int16
  OrigDataType: word16
T_134: (in di_106 != 0x0002 : bool)
  Class: Eq_134
  DataType: bool
  OrigDataType: bool
T_135: (in si_112 : (memptr (ptr Eq_28) Eq_135))
  Class: Eq_135
  DataType: (memptr (ptr Eq_28) Eq_135)
  OrigDataType: (memptr T_117 (struct 003B (0 T_155 t0000)))
T_136: (in 0x0000 : word16)
  Class: Eq_135
  DataType: (memptr (ptr Eq_28) Eq_135)
  OrigDataType: word16
T_137: (in bl_114 : bcu8)
  Class: Eq_137
  DataType: bcu8
  OrigDataType: bcu8
T_138: (in 0x00 : byte)
  Class: Eq_137
  DataType: bcu8
  OrigDataType: byte
T_139: (in bh_115 : byte)
  Class: Eq_139
  DataType: byte
  OrigDataType: byte
T_140: (in 0x00 : byte)
  Class: Eq_139
  DataType: byte
  OrigDataType: byte
T_141: (in si_132 : word16)
  Class: Eq_141
  DataType: word16
  OrigDataType: word16
T_142: (in 0x0001 : word16)
  Class: Eq_142
  DataType: word16
  OrigDataType: word16
T_143: (in si_112 + 0x0001 : word16)
  Class: Eq_141
  DataType: word16
  OrigDataType: word16
T_144: (in 0x00A0 : word16)
  Class: Eq_144
  DataType: word16
  OrigDataType: word16
T_145: (in di_109 + 0x00A0 : word16)
  Class: Eq_95
  DataType: Eq_95
  OrigDataType: word16
T_146: (in 0x01 : byte)
  Class: Eq_146
  DataType: byte
  OrigDataType: byte
T_147: (in bl_114 + 0x01 : byte)
  Class: Eq_137
  DataType: bcu8
  OrigDataType: byte
T_148: (in 0x0001 : word16)
  Class: Eq_148
  DataType: word16
  OrigDataType: word16
T_149: (in si_132 + 0x0001 : word16)
  Class: Eq_135
  DataType: (memptr (ptr Eq_28) Eq_135)
  OrigDataType: word16
T_150: (in 0x33 : byte)
  Class: Eq_137
  DataType: bcu8
  OrigDataType: bcu8
T_151: (in bl_114 <u 0x33 : bool)
  Class: Eq_151
  DataType: bool
  OrigDataType: bool
T_152: (in cx_173 : word16)
  Class: Eq_152
  DataType: word16
  OrigDataType: word16
T_153: (in 0x0000 : word16)
  Class: Eq_153
  DataType: word16
  OrigDataType: word16
T_154: (in si_112 + 0x0000 : word16)
  Class: Eq_154
  DataType: word16
  OrigDataType: word16
T_155: (in Mem105[0x8000:si_112 + 0x0000:word16] : word16)
  Class: Eq_152
  DataType: word16
  OrigDataType: word16
T_156: (in 0x0000 : word16)
  Class: Eq_156
  DataType: word16
  OrigDataType: word16
T_157: (in di_109 + 0x0000 : word16)
  Class: Eq_157
  DataType: word16
  OrigDataType: word16
T_158: (in Mem174[0x8000:di_109 + 0x0000:word16] : word16)
  Class: Eq_152
  DataType: word16
  OrigDataType: word16
T_159: (in di_175 : Eq_159)
  Class: Eq_159
  DataType: Eq_159
  OrigDataType: (union (int16 u0) ((memptr T_117 (struct (1F3E T_163 t1F3E))) u1))
T_160: (in -di_109 : word16)
  Class: Eq_159
  DataType: Eq_159
  OrigDataType: int16
T_161: (in 0x1F3E : word16)
  Class: Eq_161
  DataType: word16
  OrigDataType: word16
T_162: (in di_175 + 0x1F3E : word16)
  Class: Eq_162
  DataType: word16
  OrigDataType: word16
T_163: (in Mem176[0x8000:di_175 + 0x1F3E:word16] : word16)
  Class: Eq_152
  DataType: word16
  OrigDataType: word16
T_164: (in -di_175 : word16)
  Class: Eq_95
  DataType: Eq_95
  OrigDataType: int16
T_165: (in 0x0001 : word16)
  Class: Eq_165
  DataType: word16
  OrigDataType: word16
T_166: (in di_109 + 0x0001 : word16)
  Class: Eq_166
  DataType: word16
  OrigDataType: word16
T_167: (in Mem105[0x8000:di_109 + 0x0001:byte] : byte)
  Class: Eq_167
  DataType: byte
  OrigDataType: byte
T_168: (in 0x00 : byte)
  Class: Eq_167
  DataType: byte
  OrigDataType: byte
T_169: (in Mem105[0x8000:di_109 + 0x0001:byte] != 0x00 : bool)
  Class: Eq_169
  DataType: bool
  OrigDataType: bool
T_170: (in 0x1FDE : word16)
  Class: Eq_170
  DataType: word16
  OrigDataType: word16
T_171: (in di_109 - 0x1FDE : word16)
  Class: Eq_95
  DataType: Eq_95
  OrigDataType: word16
T_172: (in 0x003B : word16)
  Class: Eq_172
  DataType: word16
  OrigDataType: word16
T_173: (in si_132 + 0x003B : word16)
  Class: Eq_135
  DataType: (memptr (ptr Eq_28) Eq_135)
  OrigDataType: word16
T_174: (in 0x00 : byte)
  Class: Eq_137
  DataType: bcu8
  OrigDataType: byte
T_175: (in 0x01 : byte)
  Class: Eq_175
  DataType: byte
  OrigDataType: byte
T_176: (in bh_115 + 0x01 : byte)
  Class: Eq_139
  DataType: byte
  OrigDataType: byte
T_177: (in 0x19 : byte)
  Class: Eq_139
  DataType: byte
  OrigDataType: byte
T_178: (in bh_115 != 0x19 : bool)
  Class: Eq_178
  DataType: bool
  OrigDataType: bool
T_179: (in di_150 : (memptr (ptr Eq_28) byte))
  Class: Eq_179
  DataType: (memptr (ptr Eq_28) byte)
  OrigDataType: (memptr T_28 (struct 0001 (0 T_183 t0000)))
T_180: (in 0x0000 : word16)
  Class: Eq_179
  DataType: (memptr (ptr Eq_28) byte)
  OrigDataType: word16
T_181: (in 0x0000 : word16)
  Class: Eq_181
  DataType: word16
  OrigDataType: word16
T_182: (in di_150 + 0x0000 : word16)
  Class: Eq_182
  DataType: word16
  OrigDataType: word16
T_183: (in Mem105[0x8000:di_150 + 0x0000:byte] : byte)
  Class: Eq_51
  DataType: byte
  OrigDataType: byte
T_184: (in 0xB800 : selector)
  Class: Eq_28
  DataType: (ptr Eq_28)
  OrigDataType: (ptr (segment (0 (arr T_221 1) a0000)))
T_185: (in 0x0000 : word16)
  Class: Eq_185
  DataType: word16
  OrigDataType: word16
T_186: (in di_150 + 0x0000 : word16)
  Class: Eq_186
  DataType: word16
  OrigDataType: word16
T_187: (in Mem157[0xB800:di_150 + 0x0000:byte] : byte)
  Class: Eq_51
  DataType: byte
  OrigDataType: byte
T_188: (in 0x0001 : word16)
  Class: Eq_188
  DataType: word16
  OrigDataType: word16
T_189: (in di_150 + 0x0001 : word16)
  Class: Eq_179
  DataType: (memptr (ptr Eq_28) byte)
  OrigDataType: word16
T_190: (in 0x0000 : word16)
  Class: Eq_179
  DataType: (memptr (ptr Eq_28) byte)
  OrigDataType: word16
T_191: (in di_150 != Eq_28::a0000 : bool)
  Class: Eq_191
  DataType: bool
  OrigDataType: bool
T_192: (in 0x9000 : word16)
  Class: Eq_192
  DataType: word16
  OrigDataType: word16
T_193: (in ss : selector)
  Class: Eq_193
  DataType: (ptr Eq_193)
  OrigDataType: (ptr (segment))
T_194: (in fp : ptr16)
  Class: Eq_194
  DataType: Eq_194
  OrigDataType: (union (ptr16 u0) ((memptr T_193 (struct (FFFFFFFE T_197 tFFFFFFFE))) u1))
T_195: (in 0x0002 : word16)
  Class: Eq_195
  DataType: word16
  OrigDataType: word16
T_196: (in fp - 0x0002 : word16)
  Class: Eq_196
  DataType: word16
  OrigDataType: word16
T_197: (in Mem164[ss:fp - 0x0002:word16] : word16)
  Class: Eq_192
  DataType: word16
  OrigDataType: word16
T_198: (in al_168 : byte)
  Class: Eq_198
  DataType: byte
  OrigDataType: byte
T_199: (in bios_kbd_check_keystroke : ptr32)
  Class: Eq_199
  DataType: (ptr Eq_199)
  OrigDataType: (ptr (fn T_203 (T_202)))
T_200: (in signature of bios_kbd_check_keystroke : void)
  Class: Eq_199
  DataType: (ptr Eq_199)
  OrigDataType: 
T_201: (in alOut : ptr16)
  Class: Eq_201
  DataType: (ptr byte)
  OrigDataType: ptr16
T_202: (in out al_168 : ptr16)
  Class: Eq_201
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_203: (in bios_kbd_check_keystroke(out al_168) : byte)
  Class: Eq_12
  DataType: byte
  OrigDataType: byte
T_204: (in DPB(ax_11, ah_14, 8, 8) : word16)
  Class: Eq_10
  DataType: uint16
  OrigDataType: word16
T_205: (in 0x0000 : word16)
  Class: Eq_179
  DataType: (memptr (ptr Eq_28) byte)
  OrigDataType: word16
T_206: (in di_150 == Eq_28::a0000 : bool)
  Class: Eq_206
  DataType: bool
  OrigDataType: bool
T_207: (in 0x0000 : word16)
  Class: Eq_14
  DataType: cups16
  OrigDataType: word16
T_208: (in false : bool)
  Class: Eq_39
  DataType: bool
  OrigDataType: bool
T_209: (in bios_video_set_mode : ptr32)
  Class: Eq_209
  DataType: (ptr Eq_209)
  OrigDataType: (ptr (fn T_213 (T_212)))
T_210: (in signature of bios_video_set_mode : void)
  Class: Eq_209
  DataType: (ptr Eq_209)
  OrigDataType: 
T_211: (in al : byte)
  Class: Eq_211
  DataType: byte
  OrigDataType: byte
T_212: (in 0x03 : byte)
  Class: Eq_211
  DataType: byte
  OrigDataType: byte
T_213: (in bios_video_set_mode(0x03) : void)
  Class: Eq_213
  DataType: void
  OrigDataType: void
T_214:
  Class: Eq_214
  DataType: byte
  OrigDataType: (struct 0001 (0 T_31 t0000))
T_215:
  Class: Eq_215
  DataType: byte
  OrigDataType: (struct 0001 (0 T_51 t0000))
T_216:
  Class: Eq_216
  DataType: byte
  OrigDataType: (struct 0001 (0 T_54 t0000))
T_217:
  Class: Eq_217
  DataType: byte
  OrigDataType: (struct 0001 (0 T_64 t0000))
T_218:
  Class: Eq_218
  DataType: byte
  OrigDataType: (struct 0001 (0 T_75 t0000))
T_219:
  Class: Eq_219
  DataType: word16
  OrigDataType: (struct 0002 (0 T_116 t0000))
T_220:
  Class: Eq_215
  DataType: byte
  OrigDataType: (struct 0001 (0 T_183 t0000))
T_221:
  Class: Eq_215
  DataType: byte
  OrigDataType: (struct 0001 (0 T_187 t0000))
T_222:
  Class: Eq_222
  DataType: Eq_222
  OrigDataType: 
T_223:
  Class: Eq_223
  DataType: Eq_223
  OrigDataType: 
T_224:
  Class: Eq_224
  DataType: Eq_224
  OrigDataType: 
T_225:
  Class: Eq_225
  DataType: Eq_225
  OrigDataType: 
T_226:
  Class: Eq_226
  DataType: Eq_226
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
	Eq_222 Eq_28::* u1;
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
	Eq_223 Eq_28::* u1;
} Eq_95;

typedef  Eq_111[]struct Eq_111 {
	word16 a01D5[];	// 1D5
} Eq_111;

typedef union Eq_121 {
	int16 u0;
	Eq_224 Eq_28::* u1;
} Eq_121;

typedef struct Eq_135 {	// size: 59 3B
	word16 w0000;	// 0
} Eq_135;

typedef union Eq_159 {
	int16 u0;
	Eq_225 Eq_28::* u1;
} Eq_159;

typedef struct Eq_193 {
} Eq_193;

typedef union Eq_194 {
	ptr16 u0;
	Eq_226 Eq_193::* u1;
} Eq_194;

typedef byte (Eq_199)(byte *);

typedef void (Eq_209)(byte);

typedef struct Eq_222 {	// size: 1 1
	byte bFFFFFF60;	// FFFFFF60
	byte bFFFFFFFE;	// FFFFFFFE
	byte b0000;	// 0
	byte b0002;	// 2
	byte b00A0;	// A0
} Eq_222;

typedef struct Eq_223 {	// size: 2 2
	word16 w0000;	// 0
	byte b0001;	// 1
	word16 w0F9E;	// F9E
	byte b0FA0;	// FA0
} Eq_223;

typedef struct Eq_224 {
	word16 w0FA0;	// FA0
} Eq_224;

typedef struct Eq_225 {
	word16 w1F3E;	// 1F3E
} Eq_225;

typedef struct Eq_226 {
	word16 wFFFFFFFE;	// FFFFFFFE
} Eq_226;

