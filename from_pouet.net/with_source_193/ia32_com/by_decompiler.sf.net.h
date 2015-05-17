// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_193/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFB8000 (ptr Eq_7) ptrFFFB8000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_7: (segment "Eq_7" (0 byte b0000) (7CE byte b07CE) (7D0 byte b07D0))
	T_7 (in 0xB800 : selector)
Eq_12: (segment "Eq_12" (96 Eq_231 u0096) (17D (arr byte) a017D) (17E (arr byte) a017E) (17F (arr byte) a017F) (1CD (arr byte) a01CD) (1CE (arr byte) a01CE) (1CF (arr byte) a01CF) (21D (arr byte) a021D) (21E (arr byte) a021E) (21F (arr byte) a021F))
	T_12 (in cs : selector)
Eq_30: (struct "Eq_30" 0001 (FFFFFFAF byte bFFFFFFAF) (FFFFFFB0 byte bFFFFFFB0) (FFFFFFB1 byte bFFFFFFB1) (FFFFFFFF byte bFFFFFFFF) (1 byte b0001) (4F byte b004F) (50 byte b0050) (51 byte b0051))
	T_30 (in si_130 : (memptr (ptr Eq_12) Eq_30))
	T_31 (in 0x01CE : word16)
	T_110 (in si_130 + 0x0001 : word16)
Eq_105: (struct "Eq_105" (1CE (arr byte) a01CE))
	T_105 (in cs + 0x0096 : word16)
Eq_123: (struct "Eq_123" (1CE (arr byte) a01CE))
	T_123 (in cs + 0x0096 : word16)
Eq_142: (struct "Eq_142" (0 byte b0000) (F00 byte b0F00))
	T_142 (in di_158 : (memptr (ptr Eq_7) Eq_142))
	T_143 (in 0x0000 : word16)
	T_156 (in &di_158->b0000 + 0x0001 : word16)
Eq_163: (struct "Eq_163" (0 byte b0000) (9E byte b009E))
	T_163 (in di_175 : (memptr (ptr Eq_7) Eq_163))
	T_164 (in 0x0000 : word16)
	T_174 (in &di_175->b0000 + 0x009F : word16)
Eq_199: (fn byte ((ptr byte)))
	T_199 (in bios_kbd_check_keystroke : ptr32)
	T_200 (in signature of bios_kbd_check_keystroke : void)
Eq_207: (fn byte ((ptr byte)))
	T_207 (in bios_kbd_get_keystroke : ptr32)
	T_208 (in signature of bios_kbd_get_keystroke : void)
Eq_231: (union "Eq_231" (Eq_105 u0) (Eq_123 u1))
	T_231
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
  OrigDataType: (ptr (segment (7CE T_182 t07CE) (7D0 T_185 t07D0)))
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
  OrigDataType: (ptr (segment (17D (arr T_221) a017D) (17E (arr T_225) a017E) (17F (arr T_222) a017F) (1CD (arr T_226) a01CD) (1CE (arr T_220) a01CE) (1CF (arr T_227) a01CF) (21D (arr T_224) a021D) (21E (arr T_228) a021E) (21F (arr T_223) a021F)))
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
T_28: (in cx_133 : word16)
  Class: Eq_28
  DataType: word16
  OrigDataType: word16
T_29: (in 0x07D0 : word16)
  Class: Eq_28
  DataType: word16
  OrigDataType: word16
T_30: (in si_130 : (memptr (ptr Eq_12) Eq_30))
  Class: Eq_30
  DataType: (memptr (ptr Eq_12) Eq_30)
  OrigDataType: (memptr T_12 (struct 0001 (FFFFFFAF T_40 tFFFFFFAF) (FFFFFFB0 T_67 tFFFFFFB0) (FFFFFFB1 T_44 tFFFFFFB1) (FFFFFFFF T_75 tFFFFFFFF) (1 T_84 t0001) (4F T_59 t004F) (50 T_92 t0050) (51 T_50 t0051)))
T_31: (in 0x01CE : word16)
  Class: Eq_30
  DataType: (memptr (ptr Eq_12) Eq_30)
  OrigDataType: word16
T_32: (in ax_122 : word16)
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
T_35: (in di_131 : (memptr (ptr Eq_105) byte))
  Class: Eq_35
  DataType: (memptr (ptr Eq_105) byte)
  OrigDataType: (memptr T_105 (struct 0001 (0 T_108 t0000)))
T_36: (in 0x01CE : word16)
  Class: Eq_35
  DataType: (memptr (ptr Eq_105) byte)
  OrigDataType: word16
T_37: (in bx_94 : cups16)
  Class: Eq_37
  DataType: cups16
  OrigDataType: cups16
T_38: (in 0x0051 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_39: (in si_130 - 0x0051 : word16)
  Class: Eq_39
  DataType: word16
  OrigDataType: word16
T_40: (in Mem63[cs:si_130 - 0x0051:byte] : byte)
  Class: Eq_40
  DataType: byte
  OrigDataType: byte
T_41: (in DPB(ax_122, (cs->*si_130).b0051, 0, 8) : word16)
  Class: Eq_41
  DataType: word16
  OrigDataType: word16
T_42: (in 0x004F : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_43: (in si_130 - 0x004F : word16)
  Class: Eq_43
  DataType: word16
  OrigDataType: word16
T_44: (in Mem63[cs:si_130 - 0x004F:byte] : byte)
  Class: Eq_44
  DataType: byte
  OrigDataType: byte
T_45: (in DPB(ax_122, (cs->*si_130).b004F, 0, 8) : word16)
  Class: Eq_45
  DataType: word16
  OrigDataType: word16
T_46: (in DPB(ax_122, (cs->*si_130).b0051, 0, 8) + DPB(ax_122, (cs->*si_130).b004F, 0, 8) : word16)
  Class: Eq_37
  DataType: cups16
  OrigDataType: word16
T_47: (in bx_99 : cups16)
  Class: Eq_47
  DataType: cups16
  OrigDataType: cups16
T_48: (in 0x0051 : word16)
  Class: Eq_48
  DataType: word16
  OrigDataType: word16
T_49: (in si_130 + 0x0051 : word16)
  Class: Eq_49
  DataType: word16
  OrigDataType: word16
T_50: (in Mem63[cs:si_130 + 0x0051:byte] : byte)
  Class: Eq_50
  DataType: byte
  OrigDataType: byte
T_51: (in DPB(ax_122, (cs->*si_130).b0051, 0, 8) : word16)
  Class: Eq_51
  DataType: word16
  OrigDataType: word16
T_52: (in bx_94 + DPB(ax_122, (cs->*si_130).b0051, 0, 8) : word16)
  Class: Eq_52
  DataType: word16
  OrigDataType: word16
T_53: (in 0x0000 : word16)
  Class: Eq_37
  DataType: cups16
  OrigDataType: cups16
T_54: (in bx_94 <u 0x0000 : bool)
  Class: Eq_54
  DataType: bool
  OrigDataType: bool
T_55: (in bx_94 + DPB(ax_122, (cs->*si_130).b0051, 0, 8) + (bx_94 <u 0x0000) : word16)
  Class: Eq_47
  DataType: cups16
  OrigDataType: word16
T_56: (in bx_108 : cups16)
  Class: Eq_56
  DataType: cups16
  OrigDataType: cups16
T_57: (in 0x004F : word16)
  Class: Eq_57
  DataType: word16
  OrigDataType: word16
T_58: (in si_130 + 0x004F : word16)
  Class: Eq_58
  DataType: word16
  OrigDataType: word16
T_59: (in Mem63[cs:si_130 + 0x004F:byte] : byte)
  Class: Eq_59
  DataType: byte
  OrigDataType: byte
T_60: (in DPB(ax_122, (cs->*si_130).b004F, 0, 8) : word16)
  Class: Eq_60
  DataType: word16
  OrigDataType: word16
T_61: (in bx_99 + DPB(ax_122, (cs->*si_130).b004F, 0, 8) : word16)
  Class: Eq_61
  DataType: word16
  OrigDataType: word16
T_62: (in 0x0000 : word16)
  Class: Eq_47
  DataType: cups16
  OrigDataType: cups16
T_63: (in bx_99 <u 0x0000 : bool)
  Class: Eq_63
  DataType: bool
  OrigDataType: bool
T_64: (in bx_99 + DPB(ax_122, (cs->*si_130).b004F, 0, 8) + (bx_99 <u 0x0000) : word16)
  Class: Eq_64
  DataType: word16
  OrigDataType: word16
T_65: (in 0x0050 : word16)
  Class: Eq_65
  DataType: word16
  OrigDataType: word16
T_66: (in si_130 - 0x0050 : word16)
  Class: Eq_66
  DataType: word16
  OrigDataType: word16
T_67: (in Mem63[cs:si_130 - 0x0050:byte] : byte)
  Class: Eq_67
  DataType: byte
  OrigDataType: byte
T_68: (in DPB(ax_122, (cs->*si_130).b0050, 0, 8) : word16)
  Class: Eq_68
  DataType: word16
  OrigDataType: word16
T_69: (in bx_99 + DPB(ax_122, (cs->*si_130).b004F, 0, 8) + (bx_99 <u 0x0000) + DPB(ax_122, (cs->*si_130).b0050, 0, 8) : word16)
  Class: Eq_69
  DataType: word16
  OrigDataType: word16
T_70: (in true : bool)
  Class: Eq_70
  DataType: bool
  OrigDataType: bool
T_71: (in bx_99 + DPB(ax_122, (cs->*si_130).b004F, 0, 8) + (bx_99 <u 0x0000) + DPB(ax_122, (cs->*si_130).b0050, 0, 8) + true : word16)
  Class: Eq_56
  DataType: cups16
  OrigDataType: word16
T_72: (in bx_113 : cups16)
  Class: Eq_72
  DataType: cups16
  OrigDataType: cups16
T_73: (in 0x0001 : word16)
  Class: Eq_73
  DataType: word16
  OrigDataType: word16
T_74: (in si_130 - 0x0001 : word16)
  Class: Eq_74
  DataType: word16
  OrigDataType: word16
T_75: (in Mem63[cs:si_130 - 0x0001:byte] : byte)
  Class: Eq_75
  DataType: byte
  OrigDataType: byte
T_76: (in DPB(ax_122, (cs->*si_130).b0001, 0, 8) : word16)
  Class: Eq_76
  DataType: word16
  OrigDataType: word16
T_77: (in bx_108 + DPB(ax_122, (cs->*si_130).b0001, 0, 8) : word16)
  Class: Eq_77
  DataType: word16
  OrigDataType: word16
T_78: (in 0x0000 : word16)
  Class: Eq_56
  DataType: cups16
  OrigDataType: cups16
T_79: (in bx_108 <u 0x0000 : bool)
  Class: Eq_79
  DataType: bool
  OrigDataType: bool
T_80: (in bx_108 + DPB(ax_122, (cs->*si_130).b0001, 0, 8) + (bx_108 <u 0x0000) : word16)
  Class: Eq_72
  DataType: cups16
  OrigDataType: word16
T_81: (in bx_118 : cups16)
  Class: Eq_81
  DataType: cups16
  OrigDataType: cups16
T_82: (in 0x0001 : word16)
  Class: Eq_82
  DataType: word16
  OrigDataType: word16
T_83: (in si_130 + 0x0001 : word16)
  Class: Eq_83
  DataType: word16
  OrigDataType: word16
T_84: (in Mem63[cs:si_130 + 0x0001:byte] : byte)
  Class: Eq_84
  DataType: byte
  OrigDataType: byte
T_85: (in DPB(ax_122, (cs->*si_130).b0001, 0, 8) : word16)
  Class: Eq_85
  DataType: word16
  OrigDataType: word16
T_86: (in bx_113 + DPB(ax_122, (cs->*si_130).b0001, 0, 8) : word16)
  Class: Eq_86
  DataType: word16
  OrigDataType: word16
T_87: (in 0x0000 : word16)
  Class: Eq_72
  DataType: cups16
  OrigDataType: cups16
T_88: (in bx_113 <u 0x0000 : bool)
  Class: Eq_88
  DataType: bool
  OrigDataType: bool
T_89: (in bx_113 + DPB(ax_122, (cs->*si_130).b0001, 0, 8) + (bx_113 <u 0x0000) : word16)
  Class: Eq_81
  DataType: cups16
  OrigDataType: word16
T_90: (in 0x0050 : word16)
  Class: Eq_90
  DataType: word16
  OrigDataType: word16
T_91: (in si_130 + 0x0050 : word16)
  Class: Eq_91
  DataType: word16
  OrigDataType: word16
T_92: (in Mem63[cs:si_130 + 0x0050:byte] : byte)
  Class: Eq_92
  DataType: byte
  OrigDataType: byte
T_93: (in DPB(ax_122, (cs->*si_130).b0050, 0, 8) : word16)
  Class: Eq_32
  DataType: word16
  OrigDataType: word16
T_94: (in bx_118 + ax_122 : word16)
  Class: Eq_94
  DataType: word16
  OrigDataType: word16
T_95: (in 0x0000 : word16)
  Class: Eq_81
  DataType: cups16
  OrigDataType: cups16
T_96: (in bx_118 <u 0x0000 : bool)
  Class: Eq_96
  DataType: bool
  OrigDataType: bool
T_97: (in bx_118 + ax_122 + (bx_118 <u 0x0000) : word16)
  Class: Eq_97
  DataType: word16
  OrigDataType: word16
T_98: (in 0x0004 : word16)
  Class: Eq_98
  DataType: word16
  OrigDataType: word16
T_99: (in bx_118 + ax_122 + (bx_118 <u 0x0000) + 0x0004 : word16)
  Class: Eq_99
  DataType: uint16
  OrigDataType: uint16
T_100: (in 0x0003 : word16)
  Class: Eq_100
  DataType: uint16
  OrigDataType: uint16
T_101: (in bx_118 + ax_122 + (bx_118 <u 0x0000) + 0x0004 >>u 0x0003 : word16)
  Class: Eq_101
  DataType: uint16
  OrigDataType: uint16
T_102: (in 0x003F : word16)
  Class: Eq_102
  DataType: word16
  OrigDataType: word16
T_103: (in bx_118 + ax_122 + (bx_118 <u 0x0000) + 0x0004 >>u 0x0003 & 0x003F : word16)
  Class: Eq_103
  DataType: word16
  OrigDataType: word16
T_104: (in (byte) (bx_118 + ax_122 + (bx_118 <u 0x0000) + 0x0004 >>u 0x0003 & 0x003F) : byte)
  Class: Eq_104
  DataType: byte
  OrigDataType: byte
T_105: (in cs + 0x0096 : word16)
  Class: Eq_105
  DataType: (ptr Eq_105)
  OrigDataType: (ptr (struct (1CE (arr T_229) a01CE)))
T_106: (in 0x0000 : word16)
  Class: Eq_106
  DataType: word16
  OrigDataType: word16
T_107: (in di_131 + 0x0000 : word16)
  Class: Eq_107
  DataType: word16
  OrigDataType: word16
T_108: (in Mem129[cs + 0x0096:di_131 + 0x0000:byte] : byte)
  Class: Eq_104
  DataType: byte
  OrigDataType: byte
T_109: (in 0x0001 : word16)
  Class: Eq_109
  DataType: word16
  OrigDataType: word16
T_110: (in si_130 + 0x0001 : word16)
  Class: Eq_30
  DataType: (memptr (ptr Eq_12) Eq_30)
  OrigDataType: word16
T_111: (in 0x0001 : word16)
  Class: Eq_111
  DataType: word16
  OrigDataType: word16
T_112: (in di_131 + 0x0001 : word16)
  Class: Eq_35
  DataType: (memptr (ptr Eq_105) byte)
  OrigDataType: word16
T_113: (in 0x0001 : word16)
  Class: Eq_113
  DataType: word16
  OrigDataType: word16
T_114: (in cx_133 - 0x0001 : word16)
  Class: Eq_28
  DataType: word16
  OrigDataType: word16
T_115: (in 0x0000 : word16)
  Class: Eq_28
  DataType: word16
  OrigDataType: word16
T_116: (in cx_133 != 0x0000 : bool)
  Class: Eq_116
  DataType: bool
  OrigDataType: bool
T_117: (in di_142 : (memptr (ptr Eq_7) byte))
  Class: Eq_117
  DataType: (memptr (ptr Eq_7) byte)
  OrigDataType: (memptr T_7 (struct (0 T_129 t0000)))
T_118: (in 0x0000 : word16)
  Class: Eq_117
  DataType: (memptr (ptr Eq_7) byte)
  OrigDataType: word16
T_119: (in si_145 : (memptr (ptr Eq_123) byte))
  Class: Eq_119
  DataType: (memptr (ptr Eq_123) byte)
  OrigDataType: (memptr T_123 (struct 0001 (0 T_126 t0000)))
T_120: (in 0x01CE : word16)
  Class: Eq_119
  DataType: (memptr (ptr Eq_123) byte)
  OrigDataType: word16
T_121: (in cx_146 : word16)
  Class: Eq_121
  DataType: word16
  OrigDataType: word16
T_122: (in 0x07D0 : word16)
  Class: Eq_121
  DataType: word16
  OrigDataType: word16
T_123: (in cs + 0x0096 : word16)
  Class: Eq_123
  DataType: (ptr Eq_123)
  OrigDataType: (ptr (struct (1CE (arr T_230) a01CE)))
T_124: (in 0x0000 : word16)
  Class: Eq_124
  DataType: word16
  OrigDataType: word16
T_125: (in si_145 + 0x0000 : word16)
  Class: Eq_125
  DataType: word16
  OrigDataType: word16
T_126: (in Mem129[cs + 0x0096:si_145 + 0x0000:byte] : byte)
  Class: Eq_126
  DataType: byte
  OrigDataType: byte
T_127: (in 0x0000 : word16)
  Class: Eq_127
  DataType: word16
  OrigDataType: word16
T_128: (in di_142 + 0x0000 : word16)
  Class: Eq_128
  DataType: word16
  OrigDataType: word16
T_129: (in Mem151[0xB800:di_142 + 0x0000:byte] : byte)
  Class: Eq_126
  DataType: byte
  OrigDataType: byte
T_130: (in 0x0001 : word16)
  Class: Eq_130
  DataType: word16
  OrigDataType: word16
T_131: (in si_145 + 0x0001 : word16)
  Class: Eq_119
  DataType: (memptr (ptr Eq_123) byte)
  OrigDataType: word16
T_132: (in 0x0001 : word16)
  Class: Eq_132
  DataType: word16
  OrigDataType: word16
T_133: (in di_142 + 0x0001 : word16)
  Class: Eq_133
  DataType: word16
  OrigDataType: word16
T_134: (in 0x0001 : word16)
  Class: Eq_134
  DataType: word16
  OrigDataType: word16
T_135: (in di_142 + 1 + 0x0001 : word16)
  Class: Eq_117
  DataType: (memptr (ptr Eq_7) byte)
  OrigDataType: word16
T_136: (in 0x0001 : word16)
  Class: Eq_136
  DataType: word16
  OrigDataType: word16
T_137: (in cx_146 - 0x0001 : word16)
  Class: Eq_121
  DataType: word16
  OrigDataType: word16
T_138: (in 0x0000 : word16)
  Class: Eq_121
  DataType: word16
  OrigDataType: word16
T_139: (in cx_146 != 0x0000 : bool)
  Class: Eq_139
  DataType: bool
  OrigDataType: bool
T_140: (in cx_157 : word16)
  Class: Eq_140
  DataType: word16
  OrigDataType: word16
T_141: (in 0x0050 : word16)
  Class: Eq_140
  DataType: word16
  OrigDataType: word16
T_142: (in di_158 : (memptr (ptr Eq_7) Eq_142))
  Class: Eq_142
  DataType: (memptr (ptr Eq_7) Eq_142)
  OrigDataType: (memptr T_7 (struct (0 T_152 t0000) (F00 T_149 t0F00)))
T_143: (in 0x0000 : word16)
  Class: Eq_142
  DataType: (memptr (ptr Eq_7) Eq_142)
  OrigDataType: word16
T_144: (in al_162 : byte)
  Class: Eq_144
  DataType: byte
  OrigDataType: byte
T_145: (in cx_207 : word16)
  Class: Eq_145
  DataType: word16
  OrigDataType: word16
T_146: (in (byte) cx_207 : byte)
  Class: Eq_144
  DataType: byte
  OrigDataType: byte
T_147: (in 0x0F00 : word16)
  Class: Eq_147
  DataType: word16
  OrigDataType: word16
T_148: (in di_158 + 0x0F00 : word16)
  Class: Eq_148
  DataType: word16
  OrigDataType: word16
T_149: (in Mem168[0xB800:di_158 + 0x0F00:byte] : byte)
  Class: Eq_144
  DataType: byte
  OrigDataType: byte
T_150: (in 0x0000 : word16)
  Class: Eq_150
  DataType: word16
  OrigDataType: word16
T_151: (in di_158 + 0x0000 : word16)
  Class: Eq_151
  DataType: word16
  OrigDataType: word16
T_152: (in Mem169[0xB800:di_158 + 0x0000:byte] : byte)
  Class: Eq_144
  DataType: byte
  OrigDataType: byte
T_153: (in 0x0001 : word16)
  Class: Eq_153
  DataType: word16
  OrigDataType: word16
T_154: (in di_158 + 0x0001 : word16)
  Class: Eq_154
  DataType: word16
  OrigDataType: word16
T_155: (in 0x0001 : word16)
  Class: Eq_155
  DataType: word16
  OrigDataType: word16
T_156: (in &di_158->b0000 + 0x0001 : word16)
  Class: Eq_142
  DataType: (memptr (ptr Eq_7) Eq_142)
  OrigDataType: word16
T_157: (in 0x0001 : word16)
  Class: Eq_157
  DataType: word16
  OrigDataType: word16
T_158: (in cx_157 - 0x0001 : word16)
  Class: Eq_140
  DataType: word16
  OrigDataType: word16
T_159: (in 0x0000 : word16)
  Class: Eq_140
  DataType: word16
  OrigDataType: word16
T_160: (in cx_157 != 0x0000 : bool)
  Class: Eq_160
  DataType: bool
  OrigDataType: bool
T_161: (in cx_174 : word16)
  Class: Eq_161
  DataType: word16
  OrigDataType: word16
T_162: (in 0x0019 : word16)
  Class: Eq_161
  DataType: word16
  OrigDataType: word16
T_163: (in di_175 : (memptr (ptr Eq_7) Eq_163))
  Class: Eq_163
  DataType: (memptr (ptr Eq_7) Eq_163)
  OrigDataType: (memptr T_7 (struct (0 T_170 t0000) (9E T_167 t009E)))
T_164: (in 0x0000 : word16)
  Class: Eq_163
  DataType: (memptr (ptr Eq_7) Eq_163)
  OrigDataType: word16
T_165: (in 0x009E : word16)
  Class: Eq_165
  DataType: word16
  OrigDataType: word16
T_166: (in di_175 + 0x009E : word16)
  Class: Eq_166
  DataType: word16
  OrigDataType: word16
T_167: (in Mem180[0xB800:di_175 + 0x009E:byte] : byte)
  Class: Eq_144
  DataType: byte
  OrigDataType: byte
T_168: (in 0x0000 : word16)
  Class: Eq_168
  DataType: word16
  OrigDataType: word16
T_169: (in di_175 + 0x0000 : word16)
  Class: Eq_169
  DataType: word16
  OrigDataType: word16
T_170: (in Mem181[0xB800:di_175 + 0x0000:byte] : byte)
  Class: Eq_144
  DataType: byte
  OrigDataType: byte
T_171: (in 0x0001 : word16)
  Class: Eq_171
  DataType: word16
  OrigDataType: word16
T_172: (in di_175 + 0x0001 : word16)
  Class: Eq_172
  DataType: word16
  OrigDataType: word16
T_173: (in 0x009F : word16)
  Class: Eq_173
  DataType: word16
  OrigDataType: word16
T_174: (in &di_175->b0000 + 0x009F : word16)
  Class: Eq_163
  DataType: (memptr (ptr Eq_7) Eq_163)
  OrigDataType: word16
T_175: (in 0x0001 : word16)
  Class: Eq_175
  DataType: word16
  OrigDataType: word16
T_176: (in cx_174 - 0x0001 : word16)
  Class: Eq_161
  DataType: word16
  OrigDataType: word16
T_177: (in 0x0000 : word16)
  Class: Eq_161
  DataType: word16
  OrigDataType: word16
T_178: (in cx_174 != 0x0000 : bool)
  Class: Eq_178
  DataType: bool
  OrigDataType: bool
T_179: (in 0x02 : byte)
  Class: Eq_179
  DataType: byte
  OrigDataType: byte
T_180: (in al_162 + 0x02 : byte)
  Class: Eq_180
  DataType: byte
  OrigDataType: byte
T_181: (in 0x07CE : word16)
  Class: Eq_181
  DataType: (memptr (ptr Eq_7) byte)
  OrigDataType: (memptr T_7 (struct (0 T_182 t0000)))
T_182: (in Mem191[0xB800:0x07CE:byte] : byte)
  Class: Eq_180
  DataType: byte
  OrigDataType: byte
T_183: (in al_162 + 0x02 : byte)
  Class: Eq_183
  DataType: byte
  OrigDataType: byte
T_184: (in 0x07D0 : word16)
  Class: Eq_184
  DataType: (memptr (ptr Eq_7) byte)
  OrigDataType: (memptr T_7 (struct (0 T_185 t0000)))
T_185: (in Mem192[0xB800:0x07D0:byte] : byte)
  Class: Eq_183
  DataType: byte
  OrigDataType: byte
T_186: (in cx_193 : word16)
  Class: Eq_186
  DataType: word16
  OrigDataType: word16
T_187: (in 0x00C8 : word16)
  Class: Eq_186
  DataType: word16
  OrigDataType: word16
T_188: (in cx_197 : word16)
  Class: Eq_188
  DataType: word16
  OrigDataType: word16
T_189: (in 0x0001 : word16)
  Class: Eq_189
  DataType: word16
  OrigDataType: word16
T_190: (in cx_197 - 0x0001 : word16)
  Class: Eq_188
  DataType: word16
  OrigDataType: word16
T_191: (in 0x0000 : word16)
  Class: Eq_188
  DataType: word16
  OrigDataType: word16
T_192: (in cx_197 != 0x0000 : bool)
  Class: Eq_192
  DataType: bool
  OrigDataType: bool
T_193: (in 0x0001 : word16)
  Class: Eq_193
  DataType: word16
  OrigDataType: word16
T_194: (in cx_193 - 0x0001 : word16)
  Class: Eq_186
  DataType: word16
  OrigDataType: word16
T_195: (in 0x0000 : word16)
  Class: Eq_186
  DataType: word16
  OrigDataType: word16
T_196: (in cx_193 != 0x0000 : bool)
  Class: Eq_196
  DataType: bool
  OrigDataType: bool
T_197: (in 0xFFFA : word16)
  Class: Eq_188
  DataType: word16
  OrigDataType: word16
T_198: (in al_203 : byte)
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
T_202: (in out al_203 : ptr16)
  Class: Eq_201
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_203: (in bios_kbd_check_keystroke(out al_203) : byte)
  Class: Eq_203
  DataType: byte
  OrigDataType: byte
T_204: (in 0x02 : byte)
  Class: Eq_144
  DataType: byte
  OrigDataType: byte
T_205: (in al_162 != 0x02 : bool)
  Class: Eq_205
  DataType: bool
  OrigDataType: bool
T_206: (in al_214 : byte)
  Class: Eq_206
  DataType: byte
  OrigDataType: byte
T_207: (in bios_kbd_get_keystroke : ptr32)
  Class: Eq_207
  DataType: (ptr Eq_207)
  OrigDataType: (ptr (fn T_211 (T_210)))
T_208: (in signature of bios_kbd_get_keystroke : void)
  Class: Eq_207
  DataType: (ptr Eq_207)
  OrigDataType: 
T_209: (in alOut : ptr16)
  Class: Eq_209
  DataType: (ptr byte)
  OrigDataType: ptr16
T_210: (in out al_214 : ptr16)
  Class: Eq_209
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_211: (in bios_kbd_get_keystroke(out al_214) : byte)
  Class: Eq_211
  DataType: byte
  OrigDataType: byte
T_212: (in 0x0001 : word16)
  Class: Eq_212
  DataType: word16
  OrigDataType: word16
T_213: (in cx_207 - 0x0001 : word16)
  Class: Eq_145
  DataType: word16
  OrigDataType: word16
T_214: (in 0x0000 : word16)
  Class: Eq_145
  DataType: word16
  OrigDataType: word16
T_215: (in cx_207 != 0x0000 : bool)
  Class: Eq_215
  DataType: bool
  OrigDataType: bool
T_216: (in 0x01F4 : word16)
  Class: Eq_145
  DataType: word16
  OrigDataType: word16
T_217: (in 0x01CE : word16)
  Class: Eq_13
  DataType: (memptr (ptr Eq_12) byte)
  OrigDataType: word16
T_218: (in 0x0000 : word16)
  Class: Eq_8
  DataType: (memptr (ptr Eq_7) byte)
  OrigDataType: word16
T_219: (in 0x07D0 : word16)
  Class: Eq_23
  DataType: word16
  OrigDataType: word16
T_220:
  Class: Eq_220
  DataType: byte
  OrigDataType: (struct 0001 (0 T_16 t0000))
T_221:
  Class: Eq_221
  DataType: byte
  OrigDataType: (struct 0001 (0 T_40 t0000))
T_222:
  Class: Eq_222
  DataType: byte
  OrigDataType: (struct 0001 (0 T_44 t0000))
T_223:
  Class: Eq_223
  DataType: byte
  OrigDataType: (struct 0001 (0 T_50 t0000))
T_224:
  Class: Eq_224
  DataType: byte
  OrigDataType: (struct 0001 (0 T_59 t0000))
T_225:
  Class: Eq_225
  DataType: byte
  OrigDataType: (struct 0001 (0 T_67 t0000))
T_226:
  Class: Eq_226
  DataType: byte
  OrigDataType: (struct 0001 (0 T_75 t0000))
T_227:
  Class: Eq_227
  DataType: byte
  OrigDataType: (struct 0001 (0 T_84 t0000))
T_228:
  Class: Eq_228
  DataType: byte
  OrigDataType: (struct 0001 (0 T_92 t0000))
T_229:
  Class: Eq_229
  DataType: byte
  OrigDataType: (struct 0001 (0 T_108 t0000))
T_230:
  Class: Eq_230
  DataType: byte
  OrigDataType: (struct 0001 (0 T_126 t0000))
T_231:
  Class: Eq_231
  DataType: Eq_231
  OrigDataType: 
*/
typedef Eq_7 Eq_1struct Globals {
	Eq_7 * ptrFFFB8000;	// FFFB8000
} Eq_1;

typedef void (Eq_2)(byte);

typedef struct Eq_7 {
	byte b0000;	// 0
	byte b07CE;	// 7CE
	byte b07D0;	// 7D0
} Eq_7;

typedef Eq_231 Eq_12 Eq_12[][][][][][][][][]struct Eq_12 {
	Eq_231 u0096;	// 96
	byte a017D[];	// 17D
	byte a017E[];	// 17E
	byte a017F[];	// 17F
	byte a01CD[];	// 1CD
	byte a01CE[];	// 1CE
	byte a01CF[];	// 1CF
	byte a021D[];	// 21D
	byte a021E[];	// 21E
	byte a021F[];	// 21F
} Eq_12;

typedef struct Eq_30 {	// size: 1 1
	byte bFFFFFFAF;	// FFFFFFAF
	byte bFFFFFFB0;	// FFFFFFB0
	byte bFFFFFFB1;	// FFFFFFB1
	byte bFFFFFFFF;	// FFFFFFFF
	byte b0001;	// 1
	byte b004F;	// 4F
	byte b0050;	// 50
	byte b0051;	// 51
} Eq_30;

typedef  Eq_105[]struct Eq_105 {
	byte a01CE[];	// 1CE
} Eq_105;

typedef  Eq_123[]struct Eq_123 {
	byte a01CE[];	// 1CE
} Eq_123;

typedef struct Eq_142 {
	byte b0000;	// 0
	byte b0F00;	// F00
} Eq_142;

typedef struct Eq_163 {
	byte b0000;	// 0
	byte b009E;	// 9E
} Eq_163;

typedef byte (Eq_199)(byte *);

typedef byte (Eq_207)(byte *);

typedef union Eq_231 {
	Eq_105 u0;
	Eq_123 u1;
} Eq_231;

