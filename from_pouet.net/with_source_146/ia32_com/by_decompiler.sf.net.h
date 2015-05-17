// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_146/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_12) ptrFFFA0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
	T_178 (in bios_video_set_mode : ptr32)
Eq_12: (segment "Eq_12" (0 (arr word32) a0000))
	T_12 (in 0xA000 : selector)
	T_59 (in es : selector)
Eq_13: (struct "Eq_13" 0002 (0 byte b0000))
	T_13 (in 0x0000 : word16)
Eq_55: (fn void (word16, word16, (ptr Eq_12), word16))
	T_55 (in bios_video_set_block_of_DAC_registers : ptr32)
	T_56 (in signature of bios_video_set_block_of_DAC_registers : void)
Eq_65: (fn word16 (byte))
	T_65 (in __inw : ptr32)
Eq_68: (fn word16 (word16, word16))
	T_68 (in __xadd : ptr32)
Eq_69: (segment "Eq_69" (100 word16 w0100) (17C Eq_78 t017C) (2BC (arr word32) a02BC))
	T_69 (in ds : (ptr Eq_69))
Eq_74: (union "Eq_74" (bcu8 u0) (word16 u1))
	T_74 (in al_102 : Eq_74)
	T_75 (in (byte) ax_101 : byte)
	T_76 (in ax_106 : Eq_74)
	T_77 (in DPB(ax_101, al_102, 8, 8) : word16)
	T_81 (in Mem108[ds:di_111 + 0x0000:word16] : word16)
	T_87 (in Mem110[ds:di_109 + 0x0000:word16] : word16)
	T_99 (in Mem141[ds:di_111 + 0x0000:byte] : byte)
	T_121 (in al_102 + Mem110[ds:di_111 - 0x0140:byte] + (ds->*di_111).b0140 + (ds->*di_111).b013F + (ds->*di_111).b013F : byte)
	T_125 (in DPB(ax_131 - 0x0001, al_102, 0, 8) : word16)
	T_128 (in Mem110[ds:di_111 + 0x0000:byte] : byte)
	T_141 (in ax_131 - 0x0001 : word16)
	T_143 (in (byte) (ax_131 - 0x0001) : byte)
	T_144 (in 0x10 : byte)
Eq_78: (struct "Eq_78" 0001 (FFFFFEC0 byte bFFFFFEC0) (FFFFFEC1 byte bFFFFFEC1) (0 Eq_74 t0000) (1 byte b0001) (13F byte b013F) (140 byte b0140))
	T_78 (in di_111 : (memptr (ptr Eq_69) Eq_78))
	T_89 (in di_109 + 0x0002 : word16)
	T_101 (in di_111 + 0x0001 : word16)
	T_177 (in 0x017C : word16)
Eq_153: (fn byte ((ptr byte)))
	T_153 (in bios_kbd_check_keystroke : ptr32)
	T_154 (in signature of bios_kbd_check_keystroke : void)
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
T_7: (in di_20 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_8: (in di : word16)
  Class: Eq_8
  DataType: word16
  OrigDataType: word16
T_9: (in 0x0001 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_10: (in di - 0x0001 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_11: (in al_24 : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_12: (in 0xA000 : selector)
  Class: Eq_12
  DataType: (ptr Eq_12)
  OrigDataType: (ptr (segment (0 (arr T_182) a0000)))
T_13: (in 0x0000 : word16)
  Class: Eq_13
  DataType: (memptr (ptr Eq_12) Eq_13)
  OrigDataType: (memptr T_12 (struct 0002 (0 T_15 t0000)))
T_14: (in di_20 + 0x0000 : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_15: (in Mem37[0xA000:di_20 + 0x0000:byte] : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_16: (in ax_23 : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_17: (in 0x0001 : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_18: (in ax_23 + 0x0001 : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_19: (in di_38 : int16)
  Class: Eq_19
  DataType: int16
  OrigDataType: int16
T_20: (in 0x0001 : word16)
  Class: Eq_20
  DataType: word16
  OrigDataType: word16
T_21: (in di_20 + 0x0001 : word16)
  Class: Eq_19
  DataType: int16
  OrigDataType: word16
T_22: (in (byte) ax_23 : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_23: (in 0x0002 : word16)
  Class: Eq_23
  DataType: word16
  OrigDataType: word16
T_24: (in di_38 + 0x0002 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_25: (in cx_31 : word16)
  Class: Eq_25
  DataType: word16
  OrigDataType: word16
T_26: (in 0x0001 : word16)
  Class: Eq_26
  DataType: word16
  OrigDataType: word16
T_27: (in cx_31 - 0x0001 : word16)
  Class: Eq_25
  DataType: word16
  OrigDataType: word16
T_28: (in 0x0000 : word16)
  Class: Eq_25
  DataType: word16
  OrigDataType: word16
T_29: (in cx_31 != 0x0000 : bool)
  Class: Eq_29
  DataType: bool
  OrigDataType: bool
T_30: (in 0xC0 : byte)
  Class: Eq_30
  DataType: byte
  OrigDataType: byte
T_31: (in DPB(cx_31, 0xC0, 0, 8) : word16)
  Class: Eq_31
  DataType: word16
  OrigDataType: word16
T_32: (in cx : word16)
  Class: Eq_31
  DataType: word16
  OrigDataType: word16
T_33: (in 0x0000 : word16)
  Class: Eq_33
  DataType: (memptr (ptr Eq_12) word16)
  OrigDataType: (memptr T_12 (struct 0002 (0 T_35 t0000)))
T_34: (in di_20 + 0x0000 : word16)
  Class: Eq_34
  DataType: word16
  OrigDataType: word16
T_35: (in Mem56[0xA000:di_20 + 0x0000:word16] : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_36: (in 0x0002 : word16)
  Class: Eq_36
  DataType: word16
  OrigDataType: word16
T_37: (in di_20 + 0x0002 : word16)
  Class: Eq_37
  DataType: word16
  OrigDataType: word16
T_38: (in 0x0001 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_39: (in di_20 + 0x0002 + 0x0001 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_40: (in 0x0001 : word16)
  Class: Eq_40
  DataType: word16
  OrigDataType: word16
T_41: (in cx - 0x0001 : word16)
  Class: Eq_31
  DataType: word16
  OrigDataType: word16
T_42: (in 0x0000 : word16)
  Class: Eq_31
  DataType: word16
  OrigDataType: word16
T_43: (in cx != 0x0000 : bool)
  Class: Eq_43
  DataType: bool
  OrigDataType: bool
T_44: (in 0x0003 : word16)
  Class: Eq_44
  DataType: word16
  OrigDataType: word16
T_45: (in di_38 + 0x0003 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_46: (in 0x0003 : word16)
  Class: Eq_19
  DataType: int16
  OrigDataType: int16
T_47: (in di_38 >= 0x0003 : bool)
  Class: Eq_47
  DataType: bool
  OrigDataType: bool
T_48: (in 0x0000 : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_49: (in 0x00 : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_50: (in 0x3F : byte)
  Class: Eq_50
  DataType: byte
  OrigDataType: byte
T_51: (in DPB(cx, 0x3F, 0, 8) : word16)
  Class: Eq_25
  DataType: word16
  OrigDataType: word16
T_52: (in cx_156 : word16)
  Class: Eq_52
  DataType: word16
  OrigDataType: word16
T_53: (in 0xFF : byte)
  Class: Eq_53
  DataType: byte
  OrigDataType: byte
T_54: (in DPB(cx, 0xFF, 0, 8) : word16)
  Class: Eq_52
  DataType: word16
  OrigDataType: word16
T_55: (in bios_video_set_block_of_DAC_registers : ptr32)
  Class: Eq_55
  DataType: (ptr Eq_55)
  OrigDataType: (ptr (fn T_63 (T_61, T_52, T_12, T_62)))
T_56: (in signature of bios_video_set_block_of_DAC_registers : void)
  Class: Eq_55
  DataType: (ptr Eq_55)
  OrigDataType: 
T_57: (in bx : word16)
  Class: Eq_57
  DataType: word16
  OrigDataType: word16
T_58: (in cx : word16)
  Class: Eq_52
  DataType: word16
  OrigDataType: word16
T_59: (in es : selector)
  Class: Eq_12
  DataType: (ptr Eq_12)
  OrigDataType: (ptr (segment))
T_60: (in dx : word16)
  Class: Eq_60
  DataType: word16
  OrigDataType: word16
T_61: (in bx : word16)
  Class: Eq_57
  DataType: word16
  OrigDataType: word16
T_62: (in 0x0000 : word16)
  Class: Eq_60
  DataType: word16
  OrigDataType: word16
T_63: (in bios_video_set_block_of_DAC_registers(bx, cx_156, 0xA000, 0x0000) : void)
  Class: Eq_63
  DataType: void
  OrigDataType: void
T_64: (in ax_101 : word16)
  Class: Eq_64
  DataType: word16
  OrigDataType: word16
T_65: (in __inw : ptr32)
  Class: Eq_65
  DataType: (ptr Eq_65)
  OrigDataType: (ptr (fn T_67 (T_66)))
T_66: (in 0x40 : byte)
  Class: Eq_66
  DataType: byte
  OrigDataType: byte
T_67: (in __inw(0x40) : word16)
  Class: Eq_64
  DataType: word16
  OrigDataType: word16
T_68: (in __xadd : ptr32)
  Class: Eq_68
  DataType: (ptr Eq_68)
  OrigDataType: (ptr (fn T_72 (T_71, T_64)))
T_69: (in ds : (ptr Eq_69))
  Class: Eq_69
  DataType: (ptr Eq_69)
  OrigDataType: (ptr (segment (100 T_71 t0100) (2BC (arr T_181) a02BC)))
T_70: (in 0x0100 : word16)
  Class: Eq_70
  DataType: (memptr (ptr Eq_69) word16)
  OrigDataType: (memptr T_69 (struct (0 T_71 t0000)))
T_71: (in Mem56[ds:0x0100:word16] : word16)
  Class: Eq_71
  DataType: word16
  OrigDataType: word16
T_72: (in __xadd(ds->w0100, ax_101) : word16)
  Class: Eq_71
  DataType: word16
  OrigDataType: word16
T_73: (in Mem103[ds:0x0100:word16] : word16)
  Class: Eq_71
  DataType: word16
  OrigDataType: word16
T_74: (in al_102 : Eq_74)
  Class: Eq_74
  DataType: Eq_74
  OrigDataType: bcu8
T_75: (in (byte) ax_101 : byte)
  Class: Eq_74
  DataType: Eq_74
  OrigDataType: byte
T_76: (in ax_106 : Eq_74)
  Class: Eq_74
  DataType: Eq_74
  OrigDataType: word16
T_77: (in DPB(ax_101, al_102, 8, 8) : word16)
  Class: Eq_74
  DataType: Eq_74
  OrigDataType: word16
T_78: (in di_111 : (memptr (ptr Eq_69) Eq_78))
  Class: Eq_78
  DataType: (memptr (ptr Eq_69) Eq_78)
  OrigDataType: (memptr T_69 (struct 0001 (FFFFFEC0 T_108 tFFFFFEC0) (FFFFFEC1 T_116 tFFFFFEC1) (0 T_74 t0000) (1 T_132 t0001) (13F T_120 t013F) (140 T_112 t0140)))
T_79: (in 0x0000 : word16)
  Class: Eq_79
  DataType: word16
  OrigDataType: word16
T_80: (in di_111 + 0x0000 : word16)
  Class: Eq_80
  DataType: word16
  OrigDataType: word16
T_81: (in Mem108[ds:di_111 + 0x0000:word16] : word16)
  Class: Eq_74
  DataType: Eq_74
  OrigDataType: word16
T_82: (in di_109 : (memptr (ptr Eq_69) Eq_74))
  Class: Eq_82
  DataType: (memptr (ptr Eq_69) Eq_74)
  OrigDataType: (memptr T_69 (struct (0 T_87 t0000)))
T_83: (in 0x0002 : word16)
  Class: Eq_83
  DataType: word16
  OrigDataType: word16
T_84: (in di_111 + 0x0002 : word16)
  Class: Eq_82
  DataType: (memptr (ptr Eq_69) Eq_74)
  OrigDataType: word16
T_85: (in 0x0000 : word16)
  Class: Eq_85
  DataType: word16
  OrigDataType: word16
T_86: (in di_109 + 0x0000 : word16)
  Class: Eq_86
  DataType: word16
  OrigDataType: word16
T_87: (in Mem110[ds:di_109 + 0x0000:word16] : word16)
  Class: Eq_74
  DataType: Eq_74
  OrigDataType: word16
T_88: (in 0x0002 : word16)
  Class: Eq_88
  DataType: word16
  OrigDataType: word16
T_89: (in di_109 + 0x0002 : word16)
  Class: Eq_78
  DataType: (memptr (ptr Eq_69) Eq_78)
  OrigDataType: word16
T_90: (in cx_100 : word16)
  Class: Eq_90
  DataType: word16
  OrigDataType: word16
T_91: (in 0x0001 : word16)
  Class: Eq_91
  DataType: word16
  OrigDataType: word16
T_92: (in cx_100 - 0x0001 : word16)
  Class: Eq_90
  DataType: word16
  OrigDataType: word16
T_93: (in 0x0000 : word16)
  Class: Eq_90
  DataType: word16
  OrigDataType: word16
T_94: (in cx_100 != 0x0000 : bool)
  Class: Eq_94
  DataType: bool
  OrigDataType: bool
T_95: (in cx_117 : word16)
  Class: Eq_95
  DataType: word16
  OrigDataType: word16
T_96: (in 0xFA00 : word16)
  Class: Eq_95
  DataType: word16
  OrigDataType: word16
T_97: (in 0x0000 : word16)
  Class: Eq_97
  DataType: word16
  OrigDataType: word16
T_98: (in di_111 + 0x0000 : word16)
  Class: Eq_98
  DataType: word16
  OrigDataType: word16
T_99: (in Mem141[ds:di_111 + 0x0000:byte] : byte)
  Class: Eq_74
  DataType: Eq_74
  OrigDataType: byte
T_100: (in 0x0001 : word16)
  Class: Eq_100
  DataType: word16
  OrigDataType: word16
T_101: (in di_111 + 0x0001 : word16)
  Class: Eq_78
  DataType: (memptr (ptr Eq_69) Eq_78)
  OrigDataType: word16
T_102: (in 0x0001 : word16)
  Class: Eq_102
  DataType: word16
  OrigDataType: word16
T_103: (in cx_117 - 0x0001 : word16)
  Class: Eq_95
  DataType: word16
  OrigDataType: word16
T_104: (in 0x0000 : word16)
  Class: Eq_95
  DataType: word16
  OrigDataType: word16
T_105: (in cx_117 != 0x0000 : bool)
  Class: Eq_105
  DataType: bool
  OrigDataType: bool
T_106: (in 0x0140 : word16)
  Class: Eq_106
  DataType: word16
  OrigDataType: word16
T_107: (in di_111 - 0x0140 : word16)
  Class: Eq_107
  DataType: word16
  OrigDataType: word16
T_108: (in Mem110[ds:di_111 - 0x0140:byte] : byte)
  Class: Eq_108
  DataType: byte
  OrigDataType: byte
T_109: (in al_102 + Mem110[ds:di_111 - 0x0140:byte] : byte)
  Class: Eq_109
  DataType: byte
  OrigDataType: byte
T_110: (in 0x0140 : word16)
  Class: Eq_110
  DataType: word16
  OrigDataType: word16
T_111: (in di_111 + 0x0140 : word16)
  Class: Eq_111
  DataType: word16
  OrigDataType: word16
T_112: (in Mem110[ds:di_111 + 0x0140:byte] : byte)
  Class: Eq_112
  DataType: byte
  OrigDataType: byte
T_113: (in al_102 + Mem110[ds:di_111 - 0x0140:byte] + (ds->*di_111).b0140 : byte)
  Class: Eq_113
  DataType: byte
  OrigDataType: byte
T_114: (in 0x013F : word16)
  Class: Eq_114
  DataType: word16
  OrigDataType: word16
T_115: (in di_111 - 0x013F : word16)
  Class: Eq_115
  DataType: word16
  OrigDataType: word16
T_116: (in Mem110[ds:di_111 - 0x013F:byte] : byte)
  Class: Eq_116
  DataType: byte
  OrigDataType: byte
T_117: (in al_102 + Mem110[ds:di_111 - 0x0140:byte] + (ds->*di_111).b0140 + (ds->*di_111).b013F : byte)
  Class: Eq_117
  DataType: byte
  OrigDataType: byte
T_118: (in 0x013F : word16)
  Class: Eq_118
  DataType: word16
  OrigDataType: word16
T_119: (in di_111 + 0x013F : word16)
  Class: Eq_119
  DataType: word16
  OrigDataType: word16
T_120: (in Mem110[ds:di_111 + 0x013F:byte] : byte)
  Class: Eq_120
  DataType: byte
  OrigDataType: byte
T_121: (in al_102 + Mem110[ds:di_111 - 0x0140:byte] + (ds->*di_111).b0140 + (ds->*di_111).b013F + (ds->*di_111).b013F : byte)
  Class: Eq_74
  DataType: Eq_74
  OrigDataType: byte
T_122: (in ax_131 : word16)
  Class: Eq_122
  DataType: word16
  OrigDataType: word16
T_123: (in 0x0001 : word16)
  Class: Eq_123
  DataType: word16
  OrigDataType: word16
T_124: (in ax_131 - 0x0001 : word16)
  Class: Eq_124
  DataType: word16
  OrigDataType: word16
T_125: (in DPB(ax_131 - 0x0001, al_102, 0, 8) : word16)
  Class: Eq_74
  DataType: Eq_74
  OrigDataType: word16
T_126: (in 0x0000 : word16)
  Class: Eq_126
  DataType: word16
  OrigDataType: word16
T_127: (in di_111 + 0x0000 : word16)
  Class: Eq_127
  DataType: word16
  OrigDataType: word16
T_128: (in Mem110[ds:di_111 + 0x0000:byte] : byte)
  Class: Eq_74
  DataType: Eq_74
  OrigDataType: byte
T_129: (in al_102 + Mem110[ds:di_111 + 0x0000:byte] : byte)
  Class: Eq_129
  DataType: byte
  OrigDataType: byte
T_130: (in 0x0001 : word16)
  Class: Eq_130
  DataType: word16
  OrigDataType: word16
T_131: (in di_111 + 0x0001 : word16)
  Class: Eq_131
  DataType: word16
  OrigDataType: word16
T_132: (in Mem110[ds:di_111 + 0x0001:byte] : byte)
  Class: Eq_132
  DataType: byte
  OrigDataType: byte
T_133: (in al_102 + Mem110[ds:di_111 + 0x0000:byte] + Mem110[ds:di_111 + 0x0001:byte] : byte)
  Class: Eq_133
  DataType: byte
  OrigDataType: byte
T_134: (in 0x0140 : word16)
  Class: Eq_134
  DataType: word16
  OrigDataType: word16
T_135: (in di_111 - 0x0140 : word16)
  Class: Eq_135
  DataType: word16
  OrigDataType: word16
T_136: (in Mem110[ds:di_111 - 0x0140:byte] : byte)
  Class: Eq_108
  DataType: byte
  OrigDataType: byte
T_137: (in al_102 + Mem110[ds:di_111 + 0x0000:byte] + Mem110[ds:di_111 + 0x0001:byte] + Mem110[ds:di_111 - 0x0140:byte] : byte)
  Class: Eq_137
  DataType: uint8
  OrigDataType: uint8
T_138: (in 0x02 : byte)
  Class: Eq_138
  DataType: uint8
  OrigDataType: uint8
T_139: (in al_102 + Mem110[ds:di_111 + 0x0000:byte] + Mem110[ds:di_111 + 0x0001:byte] + Mem110[ds:di_111 - 0x0140:byte] >>u 0x02 : word16)
  Class: Eq_139
  DataType: uint16
  OrigDataType: uint16
T_140: (in DPB(ax_106, al_102 + Mem110[ds:di_111 + 0x0000:byte] + Mem110[ds:di_111 + 0x0001:byte] + Mem110[ds:di_111 - 0x0140:byte] >>u 0x02, 0, 8) : word16)
  Class: Eq_122
  DataType: word16
  OrigDataType: word16
T_141: (in ax_131 - 0x0001 : word16)
  Class: Eq_74
  DataType: Eq_74
  OrigDataType: word16
T_142: (in ax_131 - 0x0001 : word16)
  Class: Eq_142
  DataType: word16
  OrigDataType: word16
T_143: (in (byte) (ax_131 - 0x0001) : byte)
  Class: Eq_74
  DataType: Eq_74
  OrigDataType: byte
T_144: (in 0x10 : byte)
  Class: Eq_74
  DataType: bcu8
  OrigDataType: bcu8
T_145: (in al_102 >u 0x10 : bool)
  Class: Eq_145
  DataType: bool
  OrigDataType: bool
T_146: (in di_147 : (memptr (ptr Eq_12) word32))
  Class: Eq_146
  DataType: (memptr (ptr Eq_12) word32)
  OrigDataType: (memptr T_12 (struct 0004 (0 T_166 t0000)))
T_147: (in 0x0000 : word16)
  Class: Eq_146
  DataType: (memptr (ptr Eq_12) word32)
  OrigDataType: word16
T_148: (in si_154 : (memptr (ptr Eq_69) word32))
  Class: Eq_148
  DataType: (memptr (ptr Eq_69) word32)
  OrigDataType: (memptr T_69 (struct 0004 (0 T_163 t0000)))
T_149: (in 0x02BC : word16)
  Class: Eq_148
  DataType: (memptr (ptr Eq_69) word32)
  OrigDataType: word16
T_150: (in 0x3C : byte)
  Class: Eq_150
  DataType: byte
  OrigDataType: byte
T_151: (in DPB(cx_117, 0x3C, 8, 8) : word16)
  Class: Eq_52
  DataType: word16
  OrigDataType: word16
T_152: (in al_169 : byte)
  Class: Eq_152
  DataType: byte
  OrigDataType: byte
T_153: (in bios_kbd_check_keystroke : ptr32)
  Class: Eq_153
  DataType: (ptr Eq_153)
  OrigDataType: (ptr (fn T_157 (T_156)))
T_154: (in signature of bios_kbd_check_keystroke : void)
  Class: Eq_153
  DataType: (ptr Eq_153)
  OrigDataType: 
T_155: (in alOut : ptr16)
  Class: Eq_155
  DataType: (ptr byte)
  OrigDataType: ptr16
T_156: (in out al_169 : ptr16)
  Class: Eq_155
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_157: (in bios_kbd_check_keystroke(out al_169) : byte)
  Class: Eq_157
  DataType: byte
  OrigDataType: byte
T_158: (in 0x0000 : word16)
  Class: Eq_158
  DataType: word16
  OrigDataType: word16
T_159: (in 0x0000 : word16)
  Class: Eq_158
  DataType: word16
  OrigDataType: word16
T_160: (in 0x0000 == 0x0000 : bool)
  Class: Eq_160
  DataType: bool
  OrigDataType: bool
T_161: (in 0x0000 : word16)
  Class: Eq_161
  DataType: word16
  OrigDataType: word16
T_162: (in si_154 + 0x0000 : word16)
  Class: Eq_162
  DataType: word16
  OrigDataType: word16
T_163: (in Mem141[ds:si_154 + 0x0000:word32] : word32)
  Class: Eq_163
  DataType: word32
  OrigDataType: word32
T_164: (in 0x0000 : word16)
  Class: Eq_164
  DataType: word16
  OrigDataType: word16
T_165: (in di_147 + 0x0000 : word16)
  Class: Eq_165
  DataType: word16
  OrigDataType: word16
T_166: (in Mem163[0xA000:di_147 + 0x0000:word32] : word32)
  Class: Eq_163
  DataType: word32
  OrigDataType: word32
T_167: (in 0x0004 : word16)
  Class: Eq_167
  DataType: word16
  OrigDataType: word16
T_168: (in si_154 + 0x0004 : word16)
  Class: Eq_148
  DataType: (memptr (ptr Eq_69) word32)
  OrigDataType: word16
T_169: (in 0x0004 : word16)
  Class: Eq_169
  DataType: word16
  OrigDataType: word16
T_170: (in di_147 + 0x0004 : word16)
  Class: Eq_146
  DataType: (memptr (ptr Eq_12) word32)
  OrigDataType: word16
T_171: (in 0x0001 : word16)
  Class: Eq_171
  DataType: word16
  OrigDataType: word16
T_172: (in cx_156 - 0x0001 : word16)
  Class: Eq_52
  DataType: word16
  OrigDataType: word16
T_173: (in 0x0000 : word16)
  Class: Eq_52
  DataType: word16
  OrigDataType: word16
T_174: (in cx_156 == 0x0000 : bool)
  Class: Eq_174
  DataType: bool
  OrigDataType: bool
T_175: (in 0x0001 : word16)
  Class: Eq_175
  DataType: word16
  OrigDataType: word16
T_176: (in cx_156 + 0x0001 : word16)
  Class: Eq_90
  DataType: word16
  OrigDataType: word16
T_177: (in 0x017C : word16)
  Class: Eq_78
  DataType: (memptr (ptr Eq_69) Eq_78)
  OrigDataType: word16
T_178: (in bios_video_set_mode : ptr32)
  Class: Eq_2
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (fn T_180 (T_179)))
T_179: (in 0x03 : byte)
  Class: Eq_4
  DataType: byte
  OrigDataType: byte
T_180: (in bios_video_set_mode(0x03) : void)
  Class: Eq_6
  DataType: void
  OrigDataType: void
T_181:
  Class: Eq_181
  DataType: word32
  OrigDataType: (struct 0004 (0 T_163 t0000))
T_182:
  Class: Eq_182
  DataType: word32
  OrigDataType: (struct 0004 (0 T_166 t0000))
*/
typedef Eq_12 Eq_1struct Globals {
	Eq_12 * ptrFFFA0000;	// FFFA0000
} Eq_1;

typedef void (Eq_2)(byte);

typedef  Eq_12[]struct Eq_12 {
	word32 a0000[];	// 0
} Eq_12;

typedef struct Eq_13 {	// size: 2 2
	byte b0000;	// 0
} Eq_13;

typedef void (Eq_55)(word16, word16, Eq_12 *, word16);

typedef word16 (Eq_65)(byte);

typedef word16 (Eq_68)(word16, word16);

typedef Eq_78 Eq_69 Eq_69[]struct Eq_69 {
	word16 w0100;	// 100
	Eq_78 t017C;	// 17C
	word32 a02BC[];	// 2BC
} Eq_69;

typedef union Eq_74 {
	bcu8 u0;
	word16 u1;
} Eq_74;

typedef Eq_74 Eq_78struct Eq_78 {	// size: 1 1
	byte bFFFFFEC0;	// FFFFFEC0
	byte bFFFFFEC1;	// FFFFFEC1
	Eq_74 t0000;	// 0
	byte b0001;	// 1
	byte b013F;	// 13F
	byte b0140;	// 140
} Eq_78;

typedef byte (Eq_153)(byte *);

