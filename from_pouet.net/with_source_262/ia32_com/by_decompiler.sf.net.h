// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_262/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFF80000 (ptr Eq_19) ptrFFF80000) (FFFA0000 (ptr Eq_178) ptrFFFA0000) (60000 (ptr Eq_43) ptr60000) (70000 (ptr Eq_19) ptr70000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_7: (struct "Eq_7" 0001 (0 Eq_18 t0000))
	T_7 (in bx_19 : (memptr (ptr Eq_19) Eq_7))
	T_8 (in 0x0040 : word16)
	T_48 (in bx_19 + 0x0001 : word16)
	T_49 (in 0xFFC0 : word16)
Eq_18: (union "Eq_18" (ui16 u0) (byte u1))
	T_18 (in (((byte) ax_25 & SLICE(ax_25, byte, 8)) <u 0xE0) << 0x07 : word16)
	T_22 (in Mem33[0x7000:bx_19 + 0x0000:byte] : byte)
Eq_19: (segment "Eq_19" (FFFFFFC0 (struct "Eq_7" 0001 (0 Eq_18 t0000)) tFFFFFFC0) (40 (arr Eq_244 1) a0040) (FFC0 Eq_7 tFFC0))
	T_19 (in 0x7000 : selector)
	T_56 (in 0x8000 : selector)
Eq_23: (union "Eq_23" (ui16 u0) ((memptr (ptr Eq_43) int16) u1))
	T_23 (in ax_41 : Eq_23)
	T_25 (in bx_19 << 0x0001 : word16)
Eq_43: (segment "Eq_43" (81 (arr Eq_245 512) a0081) (280 Eq_54 t0280))
	T_43 (in 0x6000 : selector)
Eq_51: (union "Eq_51" (uint16 u0) ((memptr (ptr Eq_43) word16) u1))
	T_51 (in si : Eq_51)
	T_53 (in si + 0x0002 : word16)
Eq_54: (struct "Eq_54" 0001 (0 word16 w0000))
	T_54 (in di_151 : (memptr (ptr Eq_43) Eq_54))
	T_55 (in 0x0280 : word16)
	T_108 (in di_150 - 0x0001 : word16)
Eq_60: (union "Eq_60" (uint8 u0) (uint16 u1))
	T_60 (in Mem51[0x8000:bx_125 + 0x0000:byte] : byte)
	T_62 (in Mem51[0x8000:bx_125 + 0x0000:byte] + al_127 : byte)
	T_65 (in Mem138[0x8000:bx_125 + 0x0000:byte] : byte)
	T_68 (in Mem138[0x8000:bx_125 + 0x0000:byte] : byte)
	T_70 (in Mem138[0x8000:bx_125 + 0x0000:byte] >>u 0x01 : word16)
	T_73 (in Mem140[0x8000:bx_125 + 0x0000:byte] : byte)
	T_91 (in SLICE(cx_108, byte, 8) : byte)
	T_92 (in ch_110 : Eq_60)
	T_102 (in Mem51[0x7000:bx_125 + 0x0000:byte] : byte)
	T_128 (in 0x00 : byte)
Eq_155: (struct "Eq_155" (FFFFFFFD byte bFFFFFFFD) (0 byte b0000))
	T_155 (in ax_204 : (memptr (ptr Eq_19) Eq_155))
	T_196 (in DPB(si >>u 0x0001, dh_172, 8, 8) : word16)
Eq_178: (segment "Eq_178" (FFFFFFBF byte bFFFFFFBF) (181 byte b0181) (FFBF byte bFFBF))
	T_178 (in 0xA000 : selector)
Eq_239: (fn byte (byte))
	T_239 (in __inb : ptr32)
Eq_244: (struct "Eq_244" 0001 (0 Eq_18 t0000))
	T_244
Eq_245: (struct "Eq_245" 0001 (0 word16 w0000))
	T_245
	T_246
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
T_7: (in bx_19 : (memptr (ptr Eq_19) Eq_7))
  Class: Eq_7
  DataType: (memptr (ptr Eq_19) Eq_7)
  OrigDataType: (memptr T_19 (struct 0001 (0 T_22 t0000)))
T_8: (in 0x0040 : word16)
  Class: Eq_7
  DataType: (memptr (ptr Eq_19) Eq_7)
  OrigDataType: word16
T_9: (in ax_25 : ui16)
  Class: Eq_9
  DataType: ui16
  OrigDataType: word16
T_10: (in 0x0002 : word16)
  Class: Eq_10
  DataType: word16
  OrigDataType: word16
T_11: (in bx_19 << 0x0002 : word16)
  Class: Eq_9
  DataType: ui16
  OrigDataType: ui16
T_12: (in (byte) ax_25 : byte)
  Class: Eq_12
  DataType: byte
  OrigDataType: byte
T_13: (in SLICE(ax_25, byte, 8) : byte)
  Class: Eq_13
  DataType: byte
  OrigDataType: byte
T_14: (in (byte) ax_25 & SLICE(ax_25, byte, 8) : byte)
  Class: Eq_14
  DataType: bcu8
  OrigDataType: bcu8
T_15: (in 0xE0 : byte)
  Class: Eq_14
  DataType: bcu8
  OrigDataType: bcu8
T_16: (in ((byte) ax_25 & SLICE(ax_25, byte, 8)) <u 0xE0 : bool)
  Class: Eq_16
  DataType: bool
  OrigDataType: bool
T_17: (in 0x07 : byte)
  Class: Eq_17
  DataType: byte
  OrigDataType: byte
T_18: (in (((byte) ax_25 & SLICE(ax_25, byte, 8)) <u 0xE0) << 0x07 : word16)
  Class: Eq_18
  DataType: Eq_18
  OrigDataType: ui16
T_19: (in 0x7000 : selector)
  Class: Eq_19
  DataType: (ptr Eq_19)
  OrigDataType: (ptr (segment (40 (arr T_244 1) a0040)))
T_20: (in 0x0000 : word16)
  Class: Eq_20
  DataType: word16
  OrigDataType: word16
T_21: (in bx_19 + 0x0000 : word16)
  Class: Eq_21
  DataType: word16
  OrigDataType: word16
T_22: (in Mem33[0x7000:bx_19 + 0x0000:byte] : byte)
  Class: Eq_18
  DataType: Eq_18
  OrigDataType: byte
T_23: (in ax_41 : Eq_23)
  Class: Eq_23
  DataType: Eq_23
  OrigDataType: (memptr T_43 (struct (0 T_46 t0000)))
T_24: (in 0x0001 : word16)
  Class: Eq_24
  DataType: word16
  OrigDataType: word16
T_25: (in bx_19 << 0x0001 : word16)
  Class: Eq_23
  DataType: Eq_23
  OrigDataType: ui16
T_26: (in al_42 : int8)
  Class: Eq_26
  DataType: int8
  OrigDataType: int8
T_27: (in (byte) ax_41 : byte)
  Class: Eq_26
  DataType: int8
  OrigDataType: byte
T_28: (in ax_44 : int16)
  Class: Eq_28
  DataType: int16
  OrigDataType: word16
T_29: (in al_42 *s al_42 : int16)
  Class: Eq_28
  DataType: int16
  OrigDataType: int16
T_30: (in SLICE(ax_44, byte, 8) : byte)
  Class: Eq_30
  DataType: byte
  OrigDataType: byte
T_31: (in 0x40 : byte)
  Class: Eq_31
  DataType: byte
  OrigDataType: byte
T_32: (in SLICE(ax_44, byte, 8) - 0x40 : byte)
  Class: Eq_32
  DataType: byte
  OrigDataType: byte
T_33: (in DPB(ax_44, SLICE(ax_44, byte, 8) - 0x40, 8, 8) : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_34: (in 0x0000 : word16)
  Class: Eq_34
  DataType: word16
  OrigDataType: word16
T_35: (in bx_19 + 0x0000 : word16)
  Class: Eq_35
  DataType: word16
  OrigDataType: word16
T_36: (in (byte) &bx_19->t0000 : byte)
  Class: Eq_36
  DataType: byte
  OrigDataType: byte
T_37: (in (int16) (byte) &bx_19->t0000 : int16)
  Class: Eq_37
  DataType: int16
  OrigDataType: int16
T_38: (in (int32) (int16) (byte) &bx_19->t0000 : int32)
  Class: Eq_38
  DataType: int32
  OrigDataType: int32
T_39: (in SLICE((int32) (int16) (byte) &bx_19->t0000, word16, 16) : word16)
  Class: Eq_39
  DataType: word16
  OrigDataType: word16
T_40: (in DPB(ax_44, SLICE(ax_44, byte, 8) - 0x40, 8, 8) ^ SLICE((int32) ((int16) ((byte) (&bx_19->t0000))), word16, 16) : word16)
  Class: Eq_40
  DataType: int16
  OrigDataType: int16
T_41: (in 0x0006 : word16)
  Class: Eq_41
  DataType: uint16
  OrigDataType: uint16
T_42: (in (DPB(ax_44, SLICE(ax_44, byte, 8) - 0x40, 8, 8) ^ SLICE((int32) ((int16) ((byte) (&bx_19->t0000))), word16, 16)) >> 0x0006 : word16)
  Class: Eq_42
  DataType: int16
  OrigDataType: int16
T_43: (in 0x6000 : selector)
  Class: Eq_43
  DataType: (ptr Eq_43)
  OrigDataType: (ptr (segment (81 (arr T_245 512) a0081)))
T_44: (in 0x0000 : word16)
  Class: Eq_44
  DataType: word16
  OrigDataType: word16
T_45: (in ax_41 + 0x0000 : word16)
  Class: Eq_45
  DataType: word16
  OrigDataType: word16
T_46: (in Mem51[0x6000:ax_41 + 0x0000:word16] : word16)
  Class: Eq_42
  DataType: int16
  OrigDataType: word16
T_47: (in 0x0001 : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_48: (in bx_19 + 0x0001 : word16)
  Class: Eq_7
  DataType: (memptr (ptr Eq_19) Eq_7)
  OrigDataType: word16
T_49: (in 0xFFC0 : word16)
  Class: Eq_7
  DataType: (memptr (ptr Eq_19) Eq_7)
  OrigDataType: word16
T_50: (in bx_19 != &Eq_19::tFFFFFFC0 : bool)
  Class: Eq_50
  DataType: bool
  OrigDataType: bool
T_51: (in si : Eq_51)
  Class: Eq_51
  DataType: Eq_51
  OrigDataType: (union (uint16 u0) ((memptr T_43 (struct 0002 (0 T_117 t0000))) u1))
T_52: (in 0x0002 : word16)
  Class: Eq_52
  DataType: word16
  OrigDataType: word16
T_53: (in si + 0x0002 : word16)
  Class: Eq_51
  DataType: Eq_51
  OrigDataType: word16
T_54: (in di_151 : (memptr (ptr Eq_43) Eq_54))
  Class: Eq_54
  DataType: (memptr (ptr Eq_43) Eq_54)
  OrigDataType: (memptr T_43 (struct 0001 (0 T_77 t0000)))
T_55: (in 0x0280 : word16)
  Class: Eq_54
  DataType: (memptr (ptr Eq_43) Eq_54)
  OrigDataType: word16
T_56: (in 0x8000 : selector)
  Class: Eq_19
  DataType: (ptr Eq_19)
  OrigDataType: (ptr (segment))
T_57: (in bx_125 : (memptr (ptr Eq_19) Eq_60))
  Class: Eq_57
  DataType: (memptr (ptr Eq_19) Eq_60)
  OrigDataType: (memptr T_19 (struct (0 T_60 t0000)))
T_58: (in 0x0000 : word16)
  Class: Eq_58
  DataType: word16
  OrigDataType: word16
T_59: (in bx_125 + 0x0000 : word16)
  Class: Eq_59
  DataType: word16
  OrigDataType: word16
T_60: (in Mem51[0x8000:bx_125 + 0x0000:byte] : byte)
  Class: Eq_60
  DataType: Eq_60
  OrigDataType: byte
T_61: (in al_127 : byte)
  Class: Eq_61
  DataType: byte
  OrigDataType: byte
T_62: (in Mem51[0x8000:bx_125 + 0x0000:byte] + al_127 : byte)
  Class: Eq_60
  DataType: Eq_60
  OrigDataType: byte
T_63: (in 0x0000 : word16)
  Class: Eq_63
  DataType: word16
  OrigDataType: word16
T_64: (in bx_125 + 0x0000 : word16)
  Class: Eq_64
  DataType: word16
  OrigDataType: word16
T_65: (in Mem138[0x8000:bx_125 + 0x0000:byte] : byte)
  Class: Eq_60
  DataType: Eq_60
  OrigDataType: byte
T_66: (in 0x0000 : word16)
  Class: Eq_66
  DataType: word16
  OrigDataType: word16
T_67: (in bx_125 + 0x0000 : word16)
  Class: Eq_67
  DataType: word16
  OrigDataType: word16
T_68: (in Mem138[0x8000:bx_125 + 0x0000:byte] : byte)
  Class: Eq_60
  DataType: Eq_60
  OrigDataType: uint8
T_69: (in 0x01 : byte)
  Class: Eq_69
  DataType: uint8
  OrigDataType: uint8
T_70: (in Mem138[0x8000:bx_125 + 0x0000:byte] >>u 0x01 : word16)
  Class: Eq_60
  DataType: Eq_60
  OrigDataType: uint16
T_71: (in 0x0000 : word16)
  Class: Eq_71
  DataType: word16
  OrigDataType: word16
T_72: (in bx_125 + 0x0000 : word16)
  Class: Eq_72
  DataType: word16
  OrigDataType: word16
T_73: (in Mem140[0x8000:bx_125 + 0x0000:byte] : byte)
  Class: Eq_60
  DataType: Eq_60
  OrigDataType: byte
T_74: (in dx_103 : word16)
  Class: Eq_74
  DataType: word16
  OrigDataType: word16
T_75: (in 0x0000 : word16)
  Class: Eq_75
  DataType: word16
  OrigDataType: word16
T_76: (in di_151 + 0x0000 : word16)
  Class: Eq_76
  DataType: word16
  OrigDataType: word16
T_77: (in Mem140[0x6000:di_151 + 0x0000:word16] : word16)
  Class: Eq_77
  DataType: word16
  OrigDataType: word16
T_78: (in dx_103 + (0x6000->*di_151).w0000 : word16)
  Class: Eq_74
  DataType: word16
  OrigDataType: word16
T_79: (in cx_108 : word16)
  Class: Eq_79
  DataType: word16
  OrigDataType: word16
T_80: (in 0x0001 : word16)
  Class: Eq_80
  DataType: word16
  OrigDataType: word16
T_81: (in cx_108 - 0x0001 : word16)
  Class: Eq_79
  DataType: word16
  OrigDataType: word16
T_82: (in SLICE(dx_103, byte, 8) : byte)
  Class: Eq_82
  DataType: byte
  OrigDataType: byte
T_83: (in dh_102 : byte)
  Class: Eq_82
  DataType: byte
  OrigDataType: byte
T_84: (in bp_121 : word16)
  Class: Eq_84
  DataType: ui16
  OrigDataType: word16
T_85: (in 0x0000 : word16)
  Class: Eq_85
  DataType: word16
  OrigDataType: word16
T_86: (in di_151 + 0x0000 : word16)
  Class: Eq_86
  DataType: word16
  OrigDataType: word16
T_87: (in Mem140[0x6000:di_151 + 0x0000:word16] : word16)
  Class: Eq_77
  DataType: word16
  OrigDataType: word16
T_88: (in bp_121 + (0x6000->*di_151).w0000 : word16)
  Class: Eq_84
  DataType: ui16
  OrigDataType: word16
T_89: (in (byte) cx_108 : byte)
  Class: Eq_89
  DataType: byte
  OrigDataType: byte
T_90: (in cl_109 : byte)
  Class: Eq_89
  DataType: byte
  OrigDataType: byte
T_91: (in SLICE(cx_108, byte, 8) : byte)
  Class: Eq_60
  DataType: Eq_60
  OrigDataType: byte
T_92: (in ch_110 : Eq_60)
  Class: Eq_60
  DataType: Eq_60
  OrigDataType: byte
T_93: (in 0x0000 : word16)
  Class: Eq_79
  DataType: word16
  OrigDataType: word16
T_94: (in cx_108 != 0x0000 : bool)
  Class: Eq_94
  DataType: bool
  OrigDataType: bool
T_95: (in 0x00 : byte)
  Class: Eq_61
  DataType: byte
  OrigDataType: byte
T_96: (in 0x00 : byte)
  Class: Eq_96
  DataType: byte
  OrigDataType: byte
T_97: (in ah_105 : byte)
  Class: Eq_96
  DataType: byte
  OrigDataType: byte
T_98: (in DPB(bp_121, dh_102, 0, 8) : word16)
  Class: Eq_57
  DataType: (memptr (ptr Eq_19) Eq_60)
  OrigDataType: word16
T_99: (in cl_109 & ah_105 : byte)
  Class: Eq_61
  DataType: byte
  OrigDataType: byte
T_100: (in 0x0000 : word16)
  Class: Eq_100
  DataType: word16
  OrigDataType: word16
T_101: (in bx_125 + 0x0000 : word16)
  Class: Eq_101
  DataType: word16
  OrigDataType: word16
T_102: (in Mem51[0x7000:bx_125 + 0x0000:byte] : byte)
  Class: Eq_60
  DataType: Eq_60
  OrigDataType: byte
T_103: (in Mem51[0x7000:bx_125 + 0x0000:byte] != ch_110 : bool)
  Class: Eq_103
  DataType: bool
  OrigDataType: bool
T_104: (in di_150 : word16)
  Class: Eq_104
  DataType: word16
  OrigDataType: word16
T_105: (in 0x0001 : word16)
  Class: Eq_105
  DataType: word16
  OrigDataType: word16
T_106: (in di_151 - 0x0001 : word16)
  Class: Eq_104
  DataType: word16
  OrigDataType: word16
T_107: (in 0x0001 : word16)
  Class: Eq_107
  DataType: word16
  OrigDataType: word16
T_108: (in di_150 - 0x0001 : word16)
  Class: Eq_54
  DataType: (memptr (ptr Eq_43) Eq_54)
  OrigDataType: word16
T_109: (in 0xFF81 : word16)
  Class: Eq_104
  DataType: word16
  OrigDataType: word16
T_110: (in di_150 != 0xFF81 : bool)
  Class: Eq_110
  DataType: bool
  OrigDataType: bool
T_111: (in dh_100 : byte)
  Class: Eq_111
  DataType: byte
  OrigDataType: byte
T_112: (in 0x0007 : word16)
  Class: Eq_112
  DataType: word16
  OrigDataType: word16
T_113: (in si << 0x0007 : word16)
  Class: Eq_113
  DataType: ui16
  OrigDataType: ui16
T_114: (in SLICE(si << 0x0007, byte, 8) : byte)
  Class: Eq_111
  DataType: byte
  OrigDataType: byte
T_115: (in 0x0000 : word16)
  Class: Eq_115
  DataType: word16
  OrigDataType: word16
T_116: (in si + 0x0000 : word16)
  Class: Eq_116
  DataType: word16
  OrigDataType: word16
T_117: (in Mem51[0x6000:si + 0x0000:word16] : word16)
  Class: Eq_117
  DataType: word16
  OrigDataType: word16
T_118: (in 0x0006 : word16)
  Class: Eq_118
  DataType: word16
  OrigDataType: word16
T_119: (in Mem51[0x6000:si + 0x0000:word16] << 0x0006 : word16)
  Class: Eq_84
  DataType: ui16
  OrigDataType: ui16
T_120: (in 0x59 : byte)
  Class: Eq_120
  DataType: byte
  OrigDataType: byte
T_121: (in dh_100 + 0x59 : byte)
  Class: Eq_82
  DataType: byte
  OrigDataType: byte
T_122: (in si << 0x0007 : word16)
  Class: Eq_122
  DataType: ui16
  OrigDataType: ui16
T_123: (in dh_100 + 0x59 : byte)
  Class: Eq_123
  DataType: byte
  OrigDataType: byte
T_124: (in DPB(si << 0x0007, dh_100 + 0x59, 8, 8) : word16)
  Class: Eq_74
  DataType: word16
  OrigDataType: word16
T_125: (in 0xFF : byte)
  Class: Eq_96
  DataType: byte
  OrigDataType: byte
T_126: (in 0x0080 : word16)
  Class: Eq_79
  DataType: word16
  OrigDataType: word16
T_127: (in 0x80 : byte)
  Class: Eq_89
  DataType: byte
  OrigDataType: byte
T_128: (in 0x00 : byte)
  Class: Eq_60
  DataType: uint8
  OrigDataType: byte
T_129: (in bp_154 : (memptr (ptr Eq_178) byte))
  Class: Eq_129
  DataType: (memptr (ptr Eq_178) byte)
  OrigDataType: (memptr T_178 (struct (0 T_180 t0000)))
T_130: (in 0x0181 : word16)
  Class: Eq_129
  DataType: (memptr (ptr Eq_178) byte)
  OrigDataType: word16
T_131: (in dx_234 : word16)
  Class: Eq_131
  DataType: word16
  OrigDataType: word16
T_132: (in dx_173 : word16)
  Class: Eq_132
  DataType: word16
  OrigDataType: word16
T_133: (in dx_173 + bp_154 : word16)
  Class: Eq_133
  DataType: word16
  OrigDataType: word16
T_134: (in dx_173 + bp_154 + bp_154 : word16)
  Class: Eq_131
  DataType: word16
  OrigDataType: word16
T_135: (in 0x0140 : word16)
  Class: Eq_135
  DataType: word16
  OrigDataType: word16
T_136: (in dx_234 - 0x0140 : word16)
  Class: Eq_132
  DataType: word16
  OrigDataType: word16
T_137: (in dx_234 - 0x0140 : word16)
  Class: Eq_137
  DataType: word16
  OrigDataType: word16
T_138: (in SLICE(dx_234 - 0x0140, byte, 8) : byte)
  Class: Eq_138
  DataType: byte
  OrigDataType: byte
T_139: (in dh_172 : byte)
  Class: Eq_138
  DataType: byte
  OrigDataType: byte
T_140: (in ch_194 : bcu8)
  Class: Eq_140
  DataType: bcu8
  OrigDataType: bcu8
T_141: (in 0x01 : byte)
  Class: Eq_140
  DataType: bcu8
  OrigDataType: bcu8
T_142: (in ch_194 <u 0x01 : bool)
  Class: Eq_142
  DataType: bool
  OrigDataType: bool
T_143: (in al_216 : bcu8)
  Class: Eq_143
  DataType: bcu8
  OrigDataType: bcu8
T_144: (in bl_175 : bcu8)
  Class: Eq_143
  DataType: bcu8
  OrigDataType: bcu8
T_145: (in al_216 >=u bl_175 : bool)
  Class: Eq_145
  DataType: bool
  OrigDataType: bool
T_146: (in ax_214 : int16)
  Class: Eq_146
  DataType: int16
  OrigDataType: int16
T_147: (in 0x0064 : word16)
  Class: Eq_147
  DataType: word16
  OrigDataType: word16
T_148: (in ax_214 + 0x0064 : word16)
  Class: Eq_148
  DataType: word16
  OrigDataType: word16
T_149: (in (byte) (ax_214 + 0x0064) : byte)
  Class: Eq_143
  DataType: bcu8
  OrigDataType: byte
T_150: (in ax_260 : int16)
  Class: Eq_150
  DataType: int16
  OrigDataType: word16
T_151: (in ah_218 : byte)
  Class: Eq_151
  DataType: byte
  OrigDataType: byte
T_152: (in al_216 ^ ah_218 : byte)
  Class: Eq_152
  DataType: uint8
  OrigDataType: uint8
T_153: (in 0x02 : byte)
  Class: Eq_153
  DataType: uint8
  OrigDataType: uint8
T_154: (in (al_216 ^ ah_218) >>u 0x02 : word16)
  Class: Eq_154
  DataType: uint16
  OrigDataType: uint16
T_155: (in ax_204 : (memptr (ptr Eq_19) Eq_155))
  Class: Eq_155
  DataType: (memptr (ptr Eq_19) Eq_155)
  OrigDataType: (memptr T_19 (struct (FFFFFFFD T_158 tFFFFFFFD) (0 T_203 t0000)))
T_156: (in 0x0003 : word16)
  Class: Eq_156
  DataType: word16
  OrigDataType: word16
T_157: (in ax_204 - 0x0003 : word16)
  Class: Eq_157
  DataType: word16
  OrigDataType: word16
T_158: (in Mem140[0x8000:ax_204 - 0x0003:byte] : byte)
  Class: Eq_158
  DataType: byte
  OrigDataType: byte
T_159: (in ((al_216 ^ ah_218) >>u 0x02) + (0x8000->*ax_204).b0000 : byte)
  Class: Eq_159
  DataType: byte
  OrigDataType: byte
T_160: (in 0x40 : byte)
  Class: Eq_160
  DataType: byte
  OrigDataType: byte
T_161: (in ((al_216 ^ ah_218) >>u 0x02) + (0x8000->*ax_204).b0000 - 0x40 : byte)
  Class: Eq_161
  DataType: byte
  OrigDataType: byte
T_162: (in (int16) (((al_216 ^ ah_218) >>u 0x02) + (0x8000->*ax_204).b0000 - 0x40) : int16)
  Class: Eq_150
  DataType: int16
  OrigDataType: int16
T_163: (in dl_253 : byte)
  Class: Eq_163
  DataType: byte
  OrigDataType: byte
T_164: (in bl_175 - bl_175 : byte)
  Class: Eq_163
  DataType: byte
  OrigDataType: byte
T_165: (in di_255 : int16)
  Class: Eq_165
  DataType: int16
  OrigDataType: word16
T_166: (in ax_214 + 0x0064 : word16)
  Class: Eq_166
  DataType: int16
  OrigDataType: int16
T_167: (in 0x0140 : word16)
  Class: Eq_167
  DataType: int16
  OrigDataType: int16
T_168: (in (ax_214 + 0x0064) *s 0x0140 : int16)
  Class: Eq_165
  DataType: int16
  OrigDataType: int16
T_169: (in al_266 : byte)
  Class: Eq_169
  DataType: byte
  OrigDataType: byte
T_170: (in (byte) ax_260 : byte)
  Class: Eq_170
  DataType: byte
  OrigDataType: byte
T_171: (in SLICE(ax_260, byte, 8) : byte)
  Class: Eq_171
  DataType: byte
  OrigDataType: byte
T_172: (in ~SLICE(ax_260, byte, 8) : byte)
  Class: Eq_172
  DataType: byte
  OrigDataType: byte
T_173: (in (byte) ax_260 & ~SLICE(ax_260, byte, 8) : byte)
  Class: Eq_173
  DataType: uint8
  OrigDataType: uint8
T_174: (in 0x03 : byte)
  Class: Eq_174
  DataType: uint8
  OrigDataType: uint8
T_175: (in ((byte) ax_260 & ~SLICE(ax_260, byte, 8)) >>u 0x03 : word16)
  Class: Eq_175
  DataType: uint16
  OrigDataType: uint16
T_176: (in 0x10 : byte)
  Class: Eq_176
  DataType: byte
  OrigDataType: byte
T_177: (in (((byte) ax_260 & ~SLICE(ax_260, byte, 8)) >>u 0x03) + 0x10 : byte)
  Class: Eq_169
  DataType: byte
  OrigDataType: byte
T_178: (in 0xA000 : selector)
  Class: Eq_178
  DataType: (ptr Eq_178)
  OrigDataType: (ptr (segment))
T_179: (in bp_154 + di_255 : word16)
  Class: Eq_179
  DataType: word16
  OrigDataType: word16
T_180: (in Mem274[0xA000:bp_154 + di_255:byte] : byte)
  Class: Eq_169
  DataType: byte
  OrigDataType: byte
T_181: (in di_275 : word16)
  Class: Eq_181
  DataType: word16
  OrigDataType: word16
T_182: (in ~di_255 : word16)
  Class: Eq_181
  DataType: word16
  OrigDataType: word16
T_183: (in 0x0000 : word16)
  Class: Eq_183
  DataType: word16
  OrigDataType: word16
T_184: (in bp_154 + 0x0000 : word16)
  Class: Eq_184
  DataType: (memptr (ptr Eq_178) byte)
  OrigDataType: (memptr T_178 (struct (0 T_186 t0000)))
T_185: (in bp_154 + 0x0000 + di_275 : word16)
  Class: Eq_185
  DataType: word16
  OrigDataType: word16
T_186: (in Mem276[0xA000:bp_154 + 0x0000 + di_275:byte] : byte)
  Class: Eq_169
  DataType: byte
  OrigDataType: byte
T_187: (in ~di_275 : word16)
  Class: Eq_187
  DataType: word16
  OrigDataType: word16
T_188: (in 0x0140 : word16)
  Class: Eq_188
  DataType: word16
  OrigDataType: word16
T_189: (in ~di_275 + 0x0140 : word16)
  Class: Eq_165
  DataType: int16
  OrigDataType: word16
T_190: (in 0x01 : byte)
  Class: Eq_190
  DataType: byte
  OrigDataType: byte
T_191: (in dl_253 - 0x01 : byte)
  Class: Eq_163
  DataType: byte
  OrigDataType: byte
T_192: (in 0x00 : byte)
  Class: Eq_163
  DataType: byte
  OrigDataType: byte
T_193: (in dl_253 != 0x00 : bool)
  Class: Eq_193
  DataType: bool
  OrigDataType: bool
T_194: (in 0x0001 : word16)
  Class: Eq_194
  DataType: uint16
  OrigDataType: uint16
T_195: (in si >>u 0x0001 : word16)
  Class: Eq_195
  DataType: uint16
  OrigDataType: uint16
T_196: (in DPB(si >>u 0x0001, dh_172, 8, 8) : word16)
  Class: Eq_155
  DataType: (memptr (ptr Eq_19) Eq_155)
  OrigDataType: word16
T_197: (in cx_177 : int16)
  Class: Eq_197
  DataType: int16
  OrigDataType: int16
T_198: (in 0x0001 : word16)
  Class: Eq_198
  DataType: word16
  OrigDataType: word16
T_199: (in cx_177 + 0x0001 : word16)
  Class: Eq_197
  DataType: int16
  OrigDataType: word16
T_200: (in ax_209 : int16)
  Class: Eq_200
  DataType: int16
  OrigDataType: word16
T_201: (in 0x0000 : word16)
  Class: Eq_201
  DataType: word16
  OrigDataType: word16
T_202: (in ax_204 + 0x0000 : word16)
  Class: Eq_202
  DataType: word16
  OrigDataType: word16
T_203: (in Mem140[0x7000:ax_204 + 0x0000:byte] : byte)
  Class: Eq_203
  DataType: byte
  OrigDataType: byte
T_204: (in (int16) (0x7000->*ax_204).b0000 : int16)
  Class: Eq_204
  DataType: int16
  OrigDataType: int16
T_205: (in -(int16) (0x7000->*ax_204).b0000 : word16)
  Class: Eq_200
  DataType: int16
  OrigDataType: int16
T_206: (in 0x0005 : word16)
  Class: Eq_206
  DataType: word16
  OrigDataType: word16
T_207: (in ax_209 << 0x0005 : word16)
  Class: Eq_207
  DataType: ui16
  OrigDataType: ui16
T_208: (in (int32) (ax_209 << 0x0005) : int32)
  Class: Eq_208
  DataType: int32
  OrigDataType: int32
T_209: (in (int32) (ax_209 << 0x0005) % cx_177 : int16)
  Class: Eq_209
  DataType: int16
  OrigDataType: int16
T_210: (in ax_209 << 0x0005 : word16)
  Class: Eq_210
  DataType: ui16
  OrigDataType: ui16
T_211: (in SEQ((int32) (ax_209 << 0x0005) % cx_177, ax_209 << 0x0005) : int32)
  Class: Eq_211
  DataType: int32
  OrigDataType: int32
T_212: (in SEQ((int32) (ax_209 << 0x0005) % cx_177, ax_209 << 0x0005) / cx_177 : int16)
  Class: Eq_146
  DataType: int16
  OrigDataType: int16
T_213: (in SLICE(cx_177, byte, 8) : byte)
  Class: Eq_140
  DataType: bcu8
  OrigDataType: byte
T_214: (in ax_214 + 0x0064 : word16)
  Class: Eq_214
  DataType: word16
  OrigDataType: word16
T_215: (in (byte) (ax_214 + 0x0064) : byte)
  Class: Eq_143
  DataType: bcu8
  OrigDataType: byte
T_216: (in ax_214 + 0x0064 : word16)
  Class: Eq_216
  DataType: word16
  OrigDataType: word16
T_217: (in SLICE(ax_214 + 0x0064, byte, 8) : byte)
  Class: Eq_151
  DataType: byte
  OrigDataType: byte
T_218: (in 0xFF9D : word16)
  Class: Eq_146
  DataType: int16
  OrigDataType: int16
T_219: (in ax_214 > 0xFF9D : bool)
  Class: Eq_219
  DataType: bool
  OrigDataType: bool
T_220: (in 0x0001 : word16)
  Class: Eq_220
  DataType: word16
  OrigDataType: word16
T_221: (in bp_154 - 0x0001 : word16)
  Class: Eq_129
  DataType: (memptr (ptr Eq_178) byte)
  OrigDataType: word16
T_222: (in 0xFFBF : word16)
  Class: Eq_129
  DataType: (memptr (ptr Eq_178) byte)
  OrigDataType: word16
T_223: (in bp_154 != &Eq_178::bFFFFFFBF : bool)
  Class: Eq_223
  DataType: bool
  OrigDataType: bool
T_224: (in dx_168 : word16)
  Class: Eq_117
  DataType: word16
  OrigDataType: word16
T_225: (in 0x0000 : word16)
  Class: Eq_225
  DataType: word16
  OrigDataType: word16
T_226: (in si + 0x0000 : word16)
  Class: Eq_226
  DataType: word16
  OrigDataType: word16
T_227: (in Mem140[0x6000:si + 0x0000:word16] : word16)
  Class: Eq_117
  DataType: word16
  OrigDataType: word16
T_228: (in dh_170 : byte)
  Class: Eq_228
  DataType: byte
  OrigDataType: byte
T_229: (in 0x0005 : word16)
  Class: Eq_229
  DataType: word16
  OrigDataType: word16
T_230: (in dx_168 << 0x0005 : word16)
  Class: Eq_230
  DataType: ui16
  OrigDataType: ui16
T_231: (in SLICE(dx_168 << 0x0005, byte, 8) : byte)
  Class: Eq_228
  DataType: byte
  OrigDataType: byte
T_232: (in 0x10 : byte)
  Class: Eq_232
  DataType: byte
  OrigDataType: byte
T_233: (in dh_170 + 0x10 : byte)
  Class: Eq_138
  DataType: byte
  OrigDataType: byte
T_234: (in dx_168 << 0x0005 : word16)
  Class: Eq_234
  DataType: ui16
  OrigDataType: ui16
T_235: (in dh_170 + 0x10 : byte)
  Class: Eq_235
  DataType: byte
  OrigDataType: byte
T_236: (in DPB(dx_168 << 0x0005, dh_170 + 0x10, 8, 8) : word16)
  Class: Eq_132
  DataType: word16
  OrigDataType: word16
T_237: (in 0xC7 : byte)
  Class: Eq_143
  DataType: bcu8
  OrigDataType: byte
T_238: (in 0x0000 : word16)
  Class: Eq_197
  DataType: int16
  OrigDataType: word16
T_239: (in __inb : ptr32)
  Class: Eq_239
  DataType: (ptr Eq_239)
  OrigDataType: (ptr (fn T_241 (T_240)))
T_240: (in 0x60 : byte)
  Class: Eq_240
  DataType: byte
  OrigDataType: byte
T_241: (in __inb(0x60) : byte)
  Class: Eq_241
  DataType: byte
  OrigDataType: byte
T_242: (in 0x01 : byte)
  Class: Eq_241
  DataType: byte
  OrigDataType: byte
T_243: (in __inb(0x60) != 0x01 : bool)
  Class: Eq_243
  DataType: bool
  OrigDataType: bool
T_244:
  Class: Eq_244
  DataType: Eq_244
  OrigDataType: (struct 0001 (0 T_22 t0000))
T_245:
  Class: Eq_245
  DataType: Eq_245
  OrigDataType: (struct 0001 (0 T_77 t0000))
T_246:
  Class: Eq_245
  DataType: Eq_245
  OrigDataType: (struct 0001 (0 T_87 t0000))
*/
typedef Eq_19 Eq_1Eq_178 Eq_1Eq_43 Eq_1Eq_19 Eq_1struct Globals {
	Eq_19 * ptrFFF80000;	// FFF80000
	Eq_178 * ptrFFFA0000;	// FFFA0000
	Eq_43 * ptr60000;	// 60000
	Eq_19 * ptr70000;	// 70000
} Eq_1;

typedef void (Eq_2)(byte);

typedef Eq_18 Eq_7struct Eq_7 {	// size: 1 1
	Eq_18 t0000;	// 0
} Eq_7;

typedef union Eq_18 {
	ui16 u0;
	byte u1;
} Eq_18;

typedef Eq_244 Eq_19[1]Eq_7struct Eq_19 {
	struct Eq_7 tFFFFFFC0;	// FFFFFFC0
	Eq_244 a0040[1];	// 40
	Eq_7 tFFC0;	// FFC0
} Eq_19;

typedef union Eq_23 {
	ui16 u0;
	int16 Eq_43::* u1;
} Eq_23;

typedef Eq_245 Eq_43[512]Eq_54struct Eq_43 {
	Eq_245 a0081[512];	// 81
	Eq_54 t0280;	// 280
} Eq_43;

typedef union Eq_51 {
	uint16 u0;
	word16 Eq_43::* u1;
} Eq_51;

typedef struct Eq_54 {	// size: 1 1
	word16 w0000;	// 0
} Eq_54;

typedef union Eq_60 {
	uint8 u0;
	uint16 u1;
} Eq_60;

typedef struct Eq_155 {
	byte bFFFFFFFD;	// FFFFFFFD
	byte b0000;	// 0
} Eq_155;

typedef struct Eq_178 {
	byte bFFFFFFBF;	// FFFFFFBF
	byte b0181;	// 181
	byte bFFBF;	// FFBF
} Eq_178;

typedef byte (Eq_239)(byte);

typedef Eq_18 Eq_244struct Eq_244 {	// size: 1 1
	Eq_18 t0000;	// 0
} Eq_244;

typedef struct Eq_245 {	// size: 1 1
	word16 w0000;	// 0
} Eq_245;

