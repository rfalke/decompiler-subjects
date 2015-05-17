// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_194/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFB8000 (ptr Eq_7) ptrFFFB8000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_7: (segment "Eq_7" (0 (arr byte) a0000) (7D0 byte b07D0) (7D2 byte b07D2))
	T_7 (in 0xB800 : selector)
Eq_12: (segment "Eq_12" (96 Eq_216 u0096) (17F (arr byte) a017F) (181 (arr byte) a0181) (1D0 (arr byte) a01D0) (21F (arr byte) a021F) (221 (arr byte) a0221))
	T_12 (in cs : selector)
Eq_30: (struct "Eq_30" 0001 (FFFFFFAF byte bFFFFFFAF) (FFFFFFB1 byte bFFFFFFB1) (4F byte b004F) (51 byte b0051))
	T_30 (in si_114 : (memptr (ptr Eq_12) Eq_30))
	T_31 (in 0x01D0 : word16)
	T_80 (in si_114 + 0x0001 : word16)
Eq_74: (struct "Eq_74" (1D0 (arr byte) a01D0))
	T_74 (in cs + 0x0096 : word16)
Eq_93: (struct "Eq_93" (1D0 (arr byte) a01D0))
	T_93 (in cs + 0x0096 : word16)
	T_103 (in cs + 0x0096 : word16)
Eq_129: (struct "Eq_129" (0 byte b0000) (F00 byte b0F00))
	T_129 (in di_152 : (memptr (ptr Eq_7) Eq_129))
	T_130 (in 0x0000 : word16)
	T_143 (in &di_152->b0000 + 0x0001 : word16)
Eq_150: (struct "Eq_150" (0 byte b0000) (9E byte b009E))
	T_150 (in di_169 : (memptr (ptr Eq_7) Eq_150))
	T_151 (in 0x0000 : word16)
	T_161 (in &di_169->b0000 + 0x009F : word16)
Eq_186: (fn byte ((ptr byte)))
	T_186 (in bios_kbd_check_keystroke : ptr32)
	T_187 (in signature of bios_kbd_check_keystroke : void)
Eq_194: (fn byte ((ptr byte)))
	T_194 (in bios_kbd_get_keystroke : ptr32)
	T_195 (in signature of bios_kbd_get_keystroke : void)
Eq_216: (union "Eq_216" (Eq_74 u0) (Eq_93 u1))
	T_216
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
T_5: (in 0x03 : byte)
  Class: Eq_4
  DataType: byte
  OrigDataType: byte
T_6: (in bios_video_set_mode(0x03) : void)
  Class: Eq_6
  DataType: void
  OrigDataType: void
T_7: (in 0xB800 : selector)
  Class: Eq_7
  DataType: (ptr Eq_7)
  OrigDataType: (ptr (segment (0 (arr T_214) a0000) (7D0 T_169 t07D0) (7D2 T_172 t07D2)))
T_8: (in si_54 : (memptr (ptr Eq_7) byte))
  Class: Eq_8
  DataType: (memptr (ptr Eq_7) byte)
  OrigDataType: (memptr T_7 (struct (0 T_11 t0000)))
T_9: (in 0x0000 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_10: (in si_54 + 0x0000 : word16)
  Class: Eq_10
  DataType: word16
  OrigDataType: word16
T_11: (in Mem0[0xB800:si_54 + 0x0000:byte] : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_12: (in cs : selector)
  Class: Eq_12
  DataType: (ptr Eq_12)
  OrigDataType: (ptr (segment (17F (arr T_208) a017F) (181 (arr T_209) a0181) (1D0 (arr T_207) a01D0) (21F (arr T_211) a021F) (221 (arr T_210) a0221)))
T_13: (in di_53 : (memptr (ptr Eq_12) byte))
  Class: Eq_13
  DataType: (memptr (ptr Eq_12) byte)
  OrigDataType: (memptr T_12 (struct 0001 (0 T_16 t0000)))
T_14: (in 0x0000 : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_15: (in di_53 + 0x0000 : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_16: (in Mem63[cs:di_53 + 0x0000:byte] : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_17: (in 0x0001 : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_18: (in di_53 + 0x0001 : word16)
  Class: Eq_13
  DataType: (memptr (ptr Eq_12) byte)
  OrigDataType: word16
T_19: (in 0x0001 : word16)
  Class: Eq_19
  DataType: word16
  OrigDataType: word16
T_20: (in si_54 + 0x0001 : word16)
  Class: Eq_20
  DataType: word16
  OrigDataType: word16
T_21: (in 0x0001 : word16)
  Class: Eq_21
  DataType: word16
  OrigDataType: word16
T_22: (in si_54 + 1 + 0x0001 : word16)
  Class: Eq_8
  DataType: (memptr (ptr Eq_7) byte)
  OrigDataType: word16
T_23: (in cx_57 : word16)
  Class: Eq_23
  DataType: word16
  OrigDataType: word16
T_24: (in 0x0001 : word16)
  Class: Eq_24
  DataType: word16
  OrigDataType: word16
T_25: (in cx_57 - 0x0001 : word16)
  Class: Eq_23
  DataType: word16
  OrigDataType: word16
T_26: (in 0x0000 : word16)
  Class: Eq_23
  DataType: word16
  OrigDataType: word16
T_27: (in cx_57 != 0x0000 : bool)
  Class: Eq_27
  DataType: bool
  OrigDataType: bool
T_28: (in cx_119 : word16)
  Class: Eq_28
  DataType: word16
  OrigDataType: word16
T_29: (in 0x07D0 : word16)
  Class: Eq_28
  DataType: word16
  OrigDataType: word16
T_30: (in si_114 : (memptr (ptr Eq_12) Eq_30))
  Class: Eq_30
  DataType: (memptr (ptr Eq_12) Eq_30)
  OrigDataType: (memptr T_12 (struct 0001 (FFFFFFAF T_43 tFFFFFFAF) (FFFFFFB1 T_47 tFFFFFFB1) (4F T_62 t004F) (51 T_54 t0051)))
T_31: (in 0x01D0 : word16)
  Class: Eq_30
  DataType: (memptr (ptr Eq_12) Eq_30)
  OrigDataType: word16
T_32: (in ax_106 : word16)
  Class: Eq_32
  DataType: word16
  OrigDataType: word16
T_33: (in 0x0096 : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_34: (in cs + 0x0096 : word16)
  Class: Eq_32
  DataType: word16
  OrigDataType: word16
T_35: (in C_112 : byte)
  Class: Eq_35
  DataType: byte
  OrigDataType: byte
T_36: (in cs + 0x0096 : word16)
  Class: Eq_36
  DataType: word16
  OrigDataType: word16
T_37: (in cond(&cs->u0096) : byte)
  Class: Eq_35
  DataType: byte
  OrigDataType: byte
T_38: (in di_115 : (memptr (ptr Eq_74) byte))
  Class: Eq_38
  DataType: (memptr (ptr Eq_74) byte)
  OrigDataType: (memptr T_74 (struct 0001 (0 T_77 t0000)))
T_39: (in 0x01D0 : word16)
  Class: Eq_38
  DataType: (memptr (ptr Eq_74) byte)
  OrigDataType: word16
T_40: (in bx_97 : cups16)
  Class: Eq_40
  DataType: cups16
  OrigDataType: cups16
T_41: (in 0x0051 : word16)
  Class: Eq_41
  DataType: word16
  OrigDataType: word16
T_42: (in si_114 - 0x0051 : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_43: (in Mem63[cs:si_114 - 0x0051:byte] : byte)
  Class: Eq_43
  DataType: byte
  OrigDataType: byte
T_44: (in DPB(ax_106, (cs->*si_114).b0051, 0, 8) : word16)
  Class: Eq_44
  DataType: word16
  OrigDataType: word16
T_45: (in 0x004F : word16)
  Class: Eq_45
  DataType: word16
  OrigDataType: word16
T_46: (in si_114 - 0x004F : word16)
  Class: Eq_46
  DataType: word16
  OrigDataType: word16
T_47: (in Mem63[cs:si_114 - 0x004F:byte] : byte)
  Class: Eq_47
  DataType: byte
  OrigDataType: byte
T_48: (in DPB(ax_106, (cs->*si_114).b004F, 0, 8) : word16)
  Class: Eq_48
  DataType: word16
  OrigDataType: word16
T_49: (in DPB(ax_106, (cs->*si_114).b0051, 0, 8) + DPB(ax_106, (cs->*si_114).b004F, 0, 8) : word16)
  Class: Eq_49
  DataType: word16
  OrigDataType: word16
T_50: (in DPB(ax_106, (cs->*si_114).b0051, 0, 8) + DPB(ax_106, (cs->*si_114).b004F, 0, 8) + C_112 : word16)
  Class: Eq_40
  DataType: cups16
  OrigDataType: word16
T_51: (in bx_102 : cups16)
  Class: Eq_51
  DataType: cups16
  OrigDataType: cups16
T_52: (in 0x0051 : word16)
  Class: Eq_52
  DataType: word16
  OrigDataType: word16
T_53: (in si_114 + 0x0051 : word16)
  Class: Eq_53
  DataType: word16
  OrigDataType: word16
T_54: (in Mem63[cs:si_114 + 0x0051:byte] : byte)
  Class: Eq_54
  DataType: byte
  OrigDataType: byte
T_55: (in DPB(ax_106, (cs->*si_114).b0051, 0, 8) : word16)
  Class: Eq_55
  DataType: word16
  OrigDataType: word16
T_56: (in bx_97 + DPB(ax_106, (cs->*si_114).b0051, 0, 8) : word16)
  Class: Eq_56
  DataType: word16
  OrigDataType: word16
T_57: (in 0x0000 : word16)
  Class: Eq_40
  DataType: cups16
  OrigDataType: cups16
T_58: (in bx_97 <u 0x0000 : bool)
  Class: Eq_58
  DataType: bool
  OrigDataType: bool
T_59: (in bx_97 + DPB(ax_106, (cs->*si_114).b0051, 0, 8) + (bx_97 <u 0x0000) : word16)
  Class: Eq_51
  DataType: cups16
  OrigDataType: word16
T_60: (in 0x004F : word16)
  Class: Eq_60
  DataType: word16
  OrigDataType: word16
T_61: (in si_114 + 0x004F : word16)
  Class: Eq_61
  DataType: word16
  OrigDataType: word16
T_62: (in Mem63[cs:si_114 + 0x004F:byte] : byte)
  Class: Eq_62
  DataType: byte
  OrigDataType: byte
T_63: (in DPB(ax_106, (cs->*si_114).b004F, 0, 8) : word16)
  Class: Eq_32
  DataType: word16
  OrigDataType: word16
T_64: (in bx_109 : uint16)
  Class: Eq_64
  DataType: uint16
  OrigDataType: word16
T_65: (in bx_102 + ax_106 : word16)
  Class: Eq_65
  DataType: word16
  OrigDataType: word16
T_66: (in 0x0000 : word16)
  Class: Eq_51
  DataType: cups16
  OrigDataType: cups16
T_67: (in bx_102 <u 0x0000 : bool)
  Class: Eq_67
  DataType: bool
  OrigDataType: bool
T_68: (in bx_102 + ax_106 + (bx_102 <u 0x0000) : word16)
  Class: Eq_68
  DataType: word16
  OrigDataType: word16
T_69: (in 0x0001 : word16)
  Class: Eq_69
  DataType: word16
  OrigDataType: word16
T_70: (in bx_102 + ax_106 + (bx_102 <u 0x0000) + 0x0001 : word16)
  Class: Eq_70
  DataType: uint16
  OrigDataType: uint16
T_71: (in 0x0002 : word16)
  Class: Eq_71
  DataType: uint16
  OrigDataType: uint16
T_72: (in bx_102 + ax_106 + (bx_102 <u 0x0000) + 0x0001 >>u 0x0002 : word16)
  Class: Eq_64
  DataType: uint16
  OrigDataType: uint16
T_73: (in (byte) bx_109 : byte)
  Class: Eq_73
  DataType: byte
  OrigDataType: byte
T_74: (in cs + 0x0096 : word16)
  Class: Eq_74
  DataType: (ptr Eq_74)
  OrigDataType: (ptr (struct (1D0 (arr T_212) a01D0)))
T_75: (in 0x0000 : word16)
  Class: Eq_75
  DataType: word16
  OrigDataType: word16
T_76: (in di_115 + 0x0000 : word16)
  Class: Eq_76
  DataType: word16
  OrigDataType: word16
T_77: (in Mem113[cs + 0x0096:di_115 + 0x0000:byte] : byte)
  Class: Eq_73
  DataType: byte
  OrigDataType: byte
T_78: (in cond(bx_109) : byte)
  Class: Eq_35
  DataType: byte
  OrigDataType: byte
T_79: (in 0x0001 : word16)
  Class: Eq_79
  DataType: word16
  OrigDataType: word16
T_80: (in si_114 + 0x0001 : word16)
  Class: Eq_30
  DataType: (memptr (ptr Eq_12) Eq_30)
  OrigDataType: word16
T_81: (in 0x0001 : word16)
  Class: Eq_81
  DataType: word16
  OrigDataType: word16
T_82: (in di_115 + 0x0001 : word16)
  Class: Eq_38
  DataType: (memptr (ptr Eq_74) byte)
  OrigDataType: word16
T_83: (in 0x0001 : word16)
  Class: Eq_83
  DataType: word16
  OrigDataType: word16
T_84: (in cx_119 - 0x0001 : word16)
  Class: Eq_28
  DataType: word16
  OrigDataType: word16
T_85: (in 0x0000 : word16)
  Class: Eq_28
  DataType: word16
  OrigDataType: word16
T_86: (in cx_119 != 0x0000 : bool)
  Class: Eq_86
  DataType: bool
  OrigDataType: bool
T_87: (in di_128 : (memptr (ptr Eq_7) byte))
  Class: Eq_87
  DataType: (memptr (ptr Eq_7) byte)
  OrigDataType: (memptr T_7 (struct 0001 (0 T_99 t0000)))
T_88: (in 0x0000 : word16)
  Class: Eq_87
  DataType: (memptr (ptr Eq_7) byte)
  OrigDataType: word16
T_89: (in si_131 : (memptr (ptr Eq_93) byte))
  Class: Eq_89
  DataType: (memptr (ptr Eq_93) byte)
  OrigDataType: (memptr T_93 (struct 0001 (0 T_96 t0000)))
T_90: (in 0x01D0 : word16)
  Class: Eq_89
  DataType: (memptr (ptr Eq_93) byte)
  OrigDataType: word16
T_91: (in cx_132 : word16)
  Class: Eq_91
  DataType: word16
  OrigDataType: word16
T_92: (in 0x07D0 : word16)
  Class: Eq_91
  DataType: word16
  OrigDataType: word16
T_93: (in cs + 0x0096 : word16)
  Class: Eq_93
  DataType: (ptr Eq_93)
  OrigDataType: (ptr (struct (1D0 (arr T_213) a01D0)))
T_94: (in 0x0000 : word16)
  Class: Eq_94
  DataType: word16
  OrigDataType: word16
T_95: (in si_131 + 0x0000 : word16)
  Class: Eq_95
  DataType: word16
  OrigDataType: word16
T_96: (in Mem113[cs + 0x0096:si_131 + 0x0000:byte] : byte)
  Class: Eq_96
  DataType: byte
  OrigDataType: byte
T_97: (in 0x0000 : word16)
  Class: Eq_97
  DataType: word16
  OrigDataType: word16
T_98: (in di_128 + 0x0000 : word16)
  Class: Eq_98
  DataType: word16
  OrigDataType: word16
T_99: (in Mem137[0xB800:di_128 + 0x0000:byte] : byte)
  Class: Eq_96
  DataType: byte
  OrigDataType: byte
T_100: (in 0x0001 : word16)
  Class: Eq_100
  DataType: word16
  OrigDataType: word16
T_101: (in si_131 + 0x0001 : word16)
  Class: Eq_89
  DataType: (memptr (ptr Eq_93) byte)
  OrigDataType: word16
T_102: (in al_140 : byte)
  Class: Eq_96
  DataType: byte
  OrigDataType: byte
T_103: (in cs + 0x0096 : word16)
  Class: Eq_93
  DataType: (ptr Eq_93)
  OrigDataType: (ptr (struct (1D0 (arr T_215) a01D0)))
T_104: (in 0x0000 : word16)
  Class: Eq_104
  DataType: word16
  OrigDataType: word16
T_105: (in si_131 + 0x0000 : word16)
  Class: Eq_105
  DataType: word16
  OrigDataType: word16
T_106: (in Mem137[cs + 0x0096:si_131 + 0x0000:byte] : byte)
  Class: Eq_96
  DataType: byte
  OrigDataType: byte
T_107: (in di_139 : (memptr (ptr Eq_7) byte))
  Class: Eq_107
  DataType: (memptr (ptr Eq_7) byte)
  OrigDataType: (memptr T_7 (struct (0 T_120 t0000)))
T_108: (in 0x0001 : word16)
  Class: Eq_108
  DataType: word16
  OrigDataType: word16
T_109: (in di_128 + 0x0001 : word16)
  Class: Eq_107
  DataType: (memptr (ptr Eq_7) byte)
  OrigDataType: word16
T_110: (in 0x70 : byte)
  Class: Eq_110
  DataType: byte
  OrigDataType: byte
T_111: (in al_140 & 0x70 : byte)
  Class: Eq_111
  DataType: byte
  OrigDataType: byte
T_112: (in al_140 & 0x70 : byte)
  Class: Eq_112
  DataType: uint8
  OrigDataType: uint8
T_113: (in 0x04 : byte)
  Class: Eq_113
  DataType: uint8
  OrigDataType: uint8
T_114: (in (al_140 & 0x70) >>u 0x04 : word16)
  Class: Eq_114
  DataType: uint16
  OrigDataType: uint16
T_115: (in 0x05 : byte)
  Class: Eq_115
  DataType: byte
  OrigDataType: byte
T_116: (in (al_140 & 0x70) >>u 0x04 & 0x05 : byte)
  Class: Eq_116
  DataType: byte
  OrigDataType: byte
T_117: (in al_140 & 0x70 | (al_140 & 0x70) >>u 0x04 & 0x05 : byte)
  Class: Eq_117
  DataType: byte
  OrigDataType: byte
T_118: (in 0x0000 : word16)
  Class: Eq_118
  DataType: word16
  OrigDataType: word16
T_119: (in di_139 + 0x0000 : word16)
  Class: Eq_119
  DataType: word16
  OrigDataType: word16
T_120: (in Mem148[0xB800:di_139 + 0x0000:byte] : byte)
  Class: Eq_117
  DataType: byte
  OrigDataType: byte
T_121: (in 0x0001 : word16)
  Class: Eq_121
  DataType: word16
  OrigDataType: word16
T_122: (in di_139 + 0x0001 : word16)
  Class: Eq_87
  DataType: (memptr (ptr Eq_7) byte)
  OrigDataType: word16
T_123: (in 0x0001 : word16)
  Class: Eq_123
  DataType: word16
  OrigDataType: word16
T_124: (in cx_132 - 0x0001 : word16)
  Class: Eq_91
  DataType: word16
  OrigDataType: word16
T_125: (in 0x0000 : word16)
  Class: Eq_91
  DataType: word16
  OrigDataType: word16
T_126: (in cx_132 != 0x0000 : bool)
  Class: Eq_126
  DataType: bool
  OrigDataType: bool
T_127: (in cx_151 : word16)
  Class: Eq_127
  DataType: word16
  OrigDataType: word16
T_128: (in 0x0050 : word16)
  Class: Eq_127
  DataType: word16
  OrigDataType: word16
T_129: (in di_152 : (memptr (ptr Eq_7) Eq_129))
  Class: Eq_129
  DataType: (memptr (ptr Eq_7) Eq_129)
  OrigDataType: (memptr T_7 (struct (0 T_139 t0000) (F00 T_136 t0F00)))
T_130: (in 0x0000 : word16)
  Class: Eq_129
  DataType: (memptr (ptr Eq_7) Eq_129)
  OrigDataType: word16
T_131: (in al_156 : byte)
  Class: Eq_131
  DataType: byte
  OrigDataType: byte
T_132: (in cx_201 : word16)
  Class: Eq_132
  DataType: word16
  OrigDataType: word16
T_133: (in (byte) cx_201 : byte)
  Class: Eq_131
  DataType: byte
  OrigDataType: byte
T_134: (in 0x0F00 : word16)
  Class: Eq_134
  DataType: word16
  OrigDataType: word16
T_135: (in di_152 + 0x0F00 : word16)
  Class: Eq_135
  DataType: word16
  OrigDataType: word16
T_136: (in Mem162[0xB800:di_152 + 0x0F00:byte] : byte)
  Class: Eq_131
  DataType: byte
  OrigDataType: byte
T_137: (in 0x0000 : word16)
  Class: Eq_137
  DataType: word16
  OrigDataType: word16
T_138: (in di_152 + 0x0000 : word16)
  Class: Eq_138
  DataType: word16
  OrigDataType: word16
T_139: (in Mem163[0xB800:di_152 + 0x0000:byte] : byte)
  Class: Eq_131
  DataType: byte
  OrigDataType: byte
T_140: (in 0x0001 : word16)
  Class: Eq_140
  DataType: word16
  OrigDataType: word16
T_141: (in di_152 + 0x0001 : word16)
  Class: Eq_141
  DataType: word16
  OrigDataType: word16
T_142: (in 0x0001 : word16)
  Class: Eq_142
  DataType: word16
  OrigDataType: word16
T_143: (in &di_152->b0000 + 0x0001 : word16)
  Class: Eq_129
  DataType: (memptr (ptr Eq_7) Eq_129)
  OrigDataType: word16
T_144: (in 0x0001 : word16)
  Class: Eq_144
  DataType: word16
  OrigDataType: word16
T_145: (in cx_151 - 0x0001 : word16)
  Class: Eq_127
  DataType: word16
  OrigDataType: word16
T_146: (in 0x0000 : word16)
  Class: Eq_127
  DataType: word16
  OrigDataType: word16
T_147: (in cx_151 != 0x0000 : bool)
  Class: Eq_147
  DataType: bool
  OrigDataType: bool
T_148: (in cx_168 : word16)
  Class: Eq_148
  DataType: word16
  OrigDataType: word16
T_149: (in 0x0019 : word16)
  Class: Eq_148
  DataType: word16
  OrigDataType: word16
T_150: (in di_169 : (memptr (ptr Eq_7) Eq_150))
  Class: Eq_150
  DataType: (memptr (ptr Eq_7) Eq_150)
  OrigDataType: (memptr T_7 (struct (0 T_157 t0000) (9E T_154 t009E)))
T_151: (in 0x0000 : word16)
  Class: Eq_150
  DataType: (memptr (ptr Eq_7) Eq_150)
  OrigDataType: word16
T_152: (in 0x009E : word16)
  Class: Eq_152
  DataType: word16
  OrigDataType: word16
T_153: (in di_169 + 0x009E : word16)
  Class: Eq_153
  DataType: word16
  OrigDataType: word16
T_154: (in Mem174[0xB800:di_169 + 0x009E:byte] : byte)
  Class: Eq_131
  DataType: byte
  OrigDataType: byte
T_155: (in 0x0000 : word16)
  Class: Eq_155
  DataType: word16
  OrigDataType: word16
T_156: (in di_169 + 0x0000 : word16)
  Class: Eq_156
  DataType: word16
  OrigDataType: word16
T_157: (in Mem175[0xB800:di_169 + 0x0000:byte] : byte)
  Class: Eq_131
  DataType: byte
  OrigDataType: byte
T_158: (in 0x0001 : word16)
  Class: Eq_158
  DataType: word16
  OrigDataType: word16
T_159: (in di_169 + 0x0001 : word16)
  Class: Eq_159
  DataType: word16
  OrigDataType: word16
T_160: (in 0x009F : word16)
  Class: Eq_160
  DataType: word16
  OrigDataType: word16
T_161: (in &di_169->b0000 + 0x009F : word16)
  Class: Eq_150
  DataType: (memptr (ptr Eq_7) Eq_150)
  OrigDataType: word16
T_162: (in 0x0001 : word16)
  Class: Eq_162
  DataType: word16
  OrigDataType: word16
T_163: (in cx_168 - 0x0001 : word16)
  Class: Eq_148
  DataType: word16
  OrigDataType: word16
T_164: (in 0x0000 : word16)
  Class: Eq_148
  DataType: word16
  OrigDataType: word16
T_165: (in cx_168 != 0x0000 : bool)
  Class: Eq_165
  DataType: bool
  OrigDataType: bool
T_166: (in 0x02 : byte)
  Class: Eq_166
  DataType: byte
  OrigDataType: byte
T_167: (in al_156 + 0x02 : byte)
  Class: Eq_167
  DataType: byte
  OrigDataType: byte
T_168: (in 0x07D0 : word16)
  Class: Eq_168
  DataType: (memptr (ptr Eq_7) byte)
  OrigDataType: (memptr T_7 (struct (0 T_169 t0000)))
T_169: (in Mem185[0xB800:0x07D0:byte] : byte)
  Class: Eq_167
  DataType: byte
  OrigDataType: byte
T_170: (in al_156 + 0x02 : byte)
  Class: Eq_170
  DataType: byte
  OrigDataType: byte
T_171: (in 0x07D2 : word16)
  Class: Eq_171
  DataType: (memptr (ptr Eq_7) byte)
  OrigDataType: (memptr T_7 (struct (0 T_172 t0000)))
T_172: (in Mem186[0xB800:0x07D2:byte] : byte)
  Class: Eq_170
  DataType: byte
  OrigDataType: byte
T_173: (in cx_187 : word16)
  Class: Eq_173
  DataType: word16
  OrigDataType: word16
T_174: (in 0x0014 : word16)
  Class: Eq_173
  DataType: word16
  OrigDataType: word16
T_175: (in cx_191 : word16)
  Class: Eq_175
  DataType: word16
  OrigDataType: word16
T_176: (in 0x0001 : word16)
  Class: Eq_176
  DataType: word16
  OrigDataType: word16
T_177: (in cx_191 - 0x0001 : word16)
  Class: Eq_175
  DataType: word16
  OrigDataType: word16
T_178: (in 0x0000 : word16)
  Class: Eq_175
  DataType: word16
  OrigDataType: word16
T_179: (in cx_191 != 0x0000 : bool)
  Class: Eq_179
  DataType: bool
  OrigDataType: bool
T_180: (in 0x0001 : word16)
  Class: Eq_180
  DataType: word16
  OrigDataType: word16
T_181: (in cx_187 - 0x0001 : word16)
  Class: Eq_173
  DataType: word16
  OrigDataType: word16
T_182: (in 0x0000 : word16)
  Class: Eq_173
  DataType: word16
  OrigDataType: word16
T_183: (in cx_187 != 0x0000 : bool)
  Class: Eq_183
  DataType: bool
  OrigDataType: bool
T_184: (in 0xFFFA : word16)
  Class: Eq_175
  DataType: word16
  OrigDataType: word16
T_185: (in al_197 : byte)
  Class: Eq_185
  DataType: byte
  OrigDataType: byte
T_186: (in bios_kbd_check_keystroke : ptr32)
  Class: Eq_186
  DataType: (ptr Eq_186)
  OrigDataType: (ptr (fn T_190 (T_189)))
T_187: (in signature of bios_kbd_check_keystroke : void)
  Class: Eq_186
  DataType: (ptr Eq_186)
  OrigDataType: 
T_188: (in alOut : ptr16)
  Class: Eq_188
  DataType: (ptr byte)
  OrigDataType: ptr16
T_189: (in out al_197 : ptr16)
  Class: Eq_188
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_190: (in bios_kbd_check_keystroke(out al_197) : byte)
  Class: Eq_190
  DataType: byte
  OrigDataType: byte
T_191: (in 0x02 : byte)
  Class: Eq_131
  DataType: byte
  OrigDataType: byte
T_192: (in al_156 != 0x02 : bool)
  Class: Eq_192
  DataType: bool
  OrigDataType: bool
T_193: (in al_208 : byte)
  Class: Eq_193
  DataType: byte
  OrigDataType: byte
T_194: (in bios_kbd_get_keystroke : ptr32)
  Class: Eq_194
  DataType: (ptr Eq_194)
  OrigDataType: (ptr (fn T_198 (T_197)))
T_195: (in signature of bios_kbd_get_keystroke : void)
  Class: Eq_194
  DataType: (ptr Eq_194)
  OrigDataType: 
T_196: (in alOut : ptr16)
  Class: Eq_196
  DataType: (ptr byte)
  OrigDataType: ptr16
T_197: (in out al_208 : ptr16)
  Class: Eq_196
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_198: (in bios_kbd_get_keystroke(out al_208) : byte)
  Class: Eq_198
  DataType: byte
  OrigDataType: byte
T_199: (in 0x0001 : word16)
  Class: Eq_199
  DataType: word16
  OrigDataType: word16
T_200: (in cx_201 - 0x0001 : word16)
  Class: Eq_132
  DataType: word16
  OrigDataType: word16
T_201: (in 0x0000 : word16)
  Class: Eq_132
  DataType: word16
  OrigDataType: word16
T_202: (in cx_201 != 0x0000 : bool)
  Class: Eq_202
  DataType: bool
  OrigDataType: bool
T_203: (in 0x01F4 : word16)
  Class: Eq_132
  DataType: word16
  OrigDataType: word16
T_204: (in 0x01D0 : word16)
  Class: Eq_13
  DataType: (memptr (ptr Eq_12) byte)
  OrigDataType: word16
T_205: (in 0x0000 : word16)
  Class: Eq_8
  DataType: (memptr (ptr Eq_7) byte)
  OrigDataType: word16
T_206: (in 0x07D0 : word16)
  Class: Eq_23
  DataType: word16
  OrigDataType: word16
T_207:
  Class: Eq_207
  DataType: byte
  OrigDataType: (struct 0001 (0 T_16 t0000))
T_208:
  Class: Eq_208
  DataType: byte
  OrigDataType: (struct 0001 (0 T_43 t0000))
T_209:
  Class: Eq_209
  DataType: byte
  OrigDataType: (struct 0001 (0 T_47 t0000))
T_210:
  Class: Eq_210
  DataType: byte
  OrigDataType: (struct 0001 (0 T_54 t0000))
T_211:
  Class: Eq_211
  DataType: byte
  OrigDataType: (struct 0001 (0 T_62 t0000))
T_212:
  Class: Eq_212
  DataType: byte
  OrigDataType: (struct 0001 (0 T_77 t0000))
T_213:
  Class: Eq_213
  DataType: byte
  OrigDataType: (struct 0001 (0 T_96 t0000))
T_214:
  Class: Eq_214
  DataType: byte
  OrigDataType: (struct 0001 (0 T_99 t0000))
T_215:
  Class: Eq_213
  DataType: byte
  OrigDataType: (struct 0001 (0 T_106 t0000))
T_216:
  Class: Eq_216
  DataType: Eq_216
  OrigDataType: 
*/
typedef Eq_7 Eq_1struct Globals {
	Eq_7 * ptrFFFB8000;	// FFFB8000
} Eq_1;

typedef void (Eq_2)(byte);

typedef  Eq_7[]struct Eq_7 {
	byte a0000[];	// 0
	byte b07D0;	// 7D0
	byte b07D2;	// 7D2
} Eq_7;

typedef Eq_216 Eq_12 Eq_12[][][][][]struct Eq_12 {
	Eq_216 u0096;	// 96
	byte a017F[];	// 17F
	byte a0181[];	// 181
	byte a01D0[];	// 1D0
	byte a021F[];	// 21F
	byte a0221[];	// 221
} Eq_12;

typedef struct Eq_30 {	// size: 1 1
	byte bFFFFFFAF;	// FFFFFFAF
	byte bFFFFFFB1;	// FFFFFFB1
	byte b004F;	// 4F
	byte b0051;	// 51
} Eq_30;

typedef  Eq_74[]struct Eq_74 {
	byte a01D0[];	// 1D0
} Eq_74;

typedef  Eq_93[]struct Eq_93 {
	byte a01D0[];	// 1D0
} Eq_93;

typedef struct Eq_129 {
	byte b0000;	// 0
	byte b0F00;	// F00
} Eq_129;

typedef struct Eq_150 {
	byte b0000;	// 0
	byte b009E;	// 9E
} Eq_150;

typedef byte (Eq_186)(byte *);

typedef byte (Eq_194)(byte *);

typedef union Eq_216 {
	Eq_74 u0;
	Eq_93 u1;
} Eq_216;

