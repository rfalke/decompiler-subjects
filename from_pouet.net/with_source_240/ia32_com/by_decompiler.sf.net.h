// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_240/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_74) ptrFFFA0000) (400 (ptr Eq_49) ptr0400))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_17: (segment "Eq_17" (1FF int8 b01FF))
	T_17 (in ds : (ptr Eq_17))
Eq_49: (segment "Eq_49" (6C byte b006C))
	T_49 (in 0x0040 : selector)
Eq_62: (struct "Eq_62" (1EF byte b01EF))
	T_62 (in bx_79 & 0x003F : word16)
Eq_74: (segment "Eq_74" (FFFFA8C0 byte bFFFFA8C0) (FFFFAA00 byte bFFFFAA00) (FFFFF8C0 byte bFFFFF8C0) (0 (arr byte 320) a0000) (13F byte b013F) (A8C0 byte bA8C0) (AA00 byte bAA00) (F8C0 byte bF8C0))
	T_74 (in 0xA000 : selector)
Eq_142: (struct "Eq_142" 0001 (FFFFFFFD byte bFFFFFFFD) (FFFFFFFE byte bFFFFFFFE) (0 byte b0000))
	T_142 (in si_170 : (memptr (ptr Eq_74) Eq_142))
	T_164 (in si_170 + 0x0001 : word16)
	T_178 (in si_321 : (memptr (ptr Eq_74) Eq_142))
	T_180 (in si_321 + 0x0001 : word16)
	T_215 (in di_152 - 0x0140 : word16)
Eq_194: (struct "Eq_194" 0001 (0 byte b0000) (2 byte b0002) (3 byte b0003))
	T_194 (in si_312 : (memptr (ptr Eq_74) Eq_194))
	T_196 (in si_170 + 0x0136 : word16)
	T_197 (in si_322 : (memptr (ptr Eq_74) Eq_194))
	T_199 (in si_322 - 0x0001 : word16)
Eq_233: (fn bcu8 (byte))
	T_233 (in __inb : ptr32)
Eq_270: (fn byte (byte))
	T_270 (in __inb : ptr32)
Eq_282: (fn byte (byte))
	T_282 (in __inb : ptr32)
Eq_291: (fn byte ((ptr byte)))
	T_291 (in bios_kbd_get_keystroke : ptr32)
	T_292 (in signature of bios_kbd_get_keystroke : void)
Eq_299: (fn byte ((ptr byte), (ptr byte), (ptr byte)))
	T_299 (in bios_video_get_EGA_info : ptr32)
	T_300 (in signature of bios_video_get_EGA_info : void)
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
T_7: (in si_11 : (memptr (ptr Eq_17) int8))
  Class: Eq_7
  DataType: (memptr (ptr Eq_17) int8)
  OrigDataType: (memptr T_17 (struct 0001 (0 T_20 t0000)))
T_8: (in 0x01FF : word16)
  Class: Eq_7
  DataType: (memptr (ptr Eq_17) int8)
  OrigDataType: word16
T_9: (in bx_10 : (memptr (ptr Eq_17) int8))
  Class: Eq_9
  DataType: (memptr (ptr Eq_17) int8)
  OrigDataType: (memptr T_17 (struct 0001 (0 T_20 t0000)))
T_10: (in 0x01FF : word16)
  Class: Eq_9
  DataType: (memptr (ptr Eq_17) int8)
  OrigDataType: word16
T_11: (in cx_12 : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_12: (in cx : word16)
  Class: Eq_12
  DataType: word16
  OrigDataType: word16
T_13: (in 0x10 : byte)
  Class: Eq_13
  DataType: byte
  OrigDataType: byte
T_14: (in DPB(cx, 0x10, 0, 8) : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_15: (in 0x0001 : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_16: (in si_11 - 0x0001 : word16)
  Class: Eq_7
  DataType: (memptr (ptr Eq_17) int8)
  OrigDataType: word16
T_17: (in ds : (ptr Eq_17))
  Class: Eq_17
  DataType: (ptr Eq_17)
  OrigDataType: (ptr (segment))
T_18: (in 0x0000 : word16)
  Class: Eq_18
  DataType: word16
  OrigDataType: word16
T_19: (in si_11 + 0x0000 : word16)
  Class: Eq_19
  DataType: word16
  OrigDataType: word16
T_20: (in Mem0[ds:si_11 + 0x0000:byte] : byte)
  Class: Eq_20
  DataType: int8
  OrigDataType: byte
T_21: (in 0x0000 : word16)
  Class: Eq_21
  DataType: word16
  OrigDataType: word16
T_22: (in bx_10 + 0x0000 : word16)
  Class: Eq_22
  DataType: word16
  OrigDataType: word16
T_23: (in Mem17[ds:bx_10 + 0x0000:byte] : byte)
  Class: Eq_20
  DataType: int8
  OrigDataType: byte
T_24: (in 0x0001 : word16)
  Class: Eq_24
  DataType: word16
  OrigDataType: word16
T_25: (in bx_10 + 0x0001 : word16)
  Class: Eq_9
  DataType: (memptr (ptr Eq_17) int8)
  OrigDataType: word16
T_26: (in 0x0001 : word16)
  Class: Eq_26
  DataType: word16
  OrigDataType: word16
T_27: (in cx_12 - 0x0001 : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_28: (in 0x0000 : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_29: (in cx_12 != 0x0000 : bool)
  Class: Eq_29
  DataType: bool
  OrigDataType: bool
T_30: (in cx_247 : word16)
  Class: Eq_30
  DataType: word16
  OrigDataType: word16
T_31: (in 0x20 : byte)
  Class: Eq_31
  DataType: byte
  OrigDataType: byte
T_32: (in DPB(cx_12, 0x20, 0, 8) : word16)
  Class: Eq_30
  DataType: word16
  OrigDataType: word16
T_33: (in 0x0000 : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_34: (in si_11 + 0x0000 : word16)
  Class: Eq_34
  DataType: word16
  OrigDataType: word16
T_35: (in Mem17[ds:si_11 + 0x0000:byte] : byte)
  Class: Eq_20
  DataType: int8
  OrigDataType: int8
T_36: (in -(ds->*si_11) : byte)
  Class: Eq_20
  DataType: int8
  OrigDataType: int8
T_37: (in 0x0000 : word16)
  Class: Eq_37
  DataType: word16
  OrigDataType: word16
T_38: (in bx_10 + 0x0000 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_39: (in Mem34[ds:bx_10 + 0x0000:byte] : byte)
  Class: Eq_20
  DataType: int8
  OrigDataType: byte
T_40: (in 0x0001 : word16)
  Class: Eq_40
  DataType: word16
  OrigDataType: word16
T_41: (in si_11 + 0x0001 : word16)
  Class: Eq_7
  DataType: (memptr (ptr Eq_17) int8)
  OrigDataType: word16
T_42: (in 0x0001 : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_43: (in bx_10 + 0x0001 : word16)
  Class: Eq_9
  DataType: (memptr (ptr Eq_17) int8)
  OrigDataType: word16
T_44: (in 0x0001 : word16)
  Class: Eq_44
  DataType: word16
  OrigDataType: word16
T_45: (in cx_247 - 0x0001 : word16)
  Class: Eq_30
  DataType: word16
  OrigDataType: word16
T_46: (in 0x0000 : word16)
  Class: Eq_30
  DataType: word16
  OrigDataType: word16
T_47: (in cx_247 != 0x0000 : bool)
  Class: Eq_47
  DataType: bool
  OrigDataType: bool
T_48: (in ah_75 : byte)
  Class: Eq_48
  DataType: byte
  OrigDataType: byte
T_49: (in 0x0040 : selector)
  Class: Eq_49
  DataType: (ptr Eq_49)
  OrigDataType: (ptr (segment (6C T_48 t006C)))
T_50: (in 0x006C : word16)
  Class: Eq_50
  DataType: (memptr (ptr Eq_49) byte)
  OrigDataType: (memptr T_49 (struct (0 T_51 t0000)))
T_51: (in Mem34[0x0040:0x006C:byte] : byte)
  Class: Eq_48
  DataType: byte
  OrigDataType: byte
T_52: (in ah_75 == 0x0040->b006C : bool)
  Class: Eq_52
  DataType: bool
  OrigDataType: bool
T_53: (in bx_79 : word16)
  Class: Eq_53
  DataType: word16
  OrigDataType: word16
T_54: (in 0x0001 : word16)
  Class: Eq_54
  DataType: word16
  OrigDataType: word16
T_55: (in bx_10 + 0x0001 : word16)
  Class: Eq_53
  DataType: word16
  OrigDataType: word16
T_56: (in bl_81 : byte)
  Class: Eq_56
  DataType: byte
  OrigDataType: byte
T_57: (in 0x003F : word16)
  Class: Eq_57
  DataType: word16
  OrigDataType: word16
T_58: (in bx_79 & 0x003F : word16)
  Class: Eq_58
  DataType: word16
  OrigDataType: word16
T_59: (in (byte) (bx_79 & 0x003F) : byte)
  Class: Eq_56
  DataType: byte
  OrigDataType: byte
T_60: (in cx_86 : word16)
  Class: Eq_60
  DataType: word16
  OrigDataType: word16
T_61: (in 0x80 : byte)
  Class: Eq_61
  DataType: byte
  OrigDataType: byte
T_62: (in bx_79 & 0x003F : word16)
  Class: Eq_62
  DataType: (memptr (ptr Eq_17) Eq_62)
  OrigDataType: (memptr T_17 (struct (1EF T_65 t01EF)))
T_63: (in 0x01EF : word16)
  Class: Eq_63
  DataType: word16
  OrigDataType: word16
T_64: (in (bx_79 & 0x003F) + 0x01EF : word16)
  Class: Eq_64
  DataType: word16
  OrigDataType: word16
T_65: (in Mem34[ds:(bx_79 & 0x003F) + 0x01EF:byte] : byte)
  Class: Eq_65
  DataType: byte
  OrigDataType: byte
T_66: (in 0x80 - (ds->*(bx_79 & 0x003F)).b01EF : byte)
  Class: Eq_66
  DataType: byte
  OrigDataType: byte
T_67: (in DPB(cx_247, 0x80 - (ds->*(bx_79 & 0x003F)).b01EF, 0, 8) : word16)
  Class: Eq_60
  DataType: word16
  OrigDataType: word16
T_68: (in di_102 : (memptr (ptr Eq_74) byte))
  Class: Eq_68
  DataType: (memptr (ptr Eq_74) byte)
  OrigDataType: (memptr T_74 (struct 0001 (0 T_73 t0000)))
T_69: (in 0xAA00 : word16)
  Class: Eq_68
  DataType: (memptr (ptr Eq_74) byte)
  OrigDataType: word16
T_70: (in cx_101 : word16)
  Class: Eq_70
  DataType: word16
  OrigDataType: word16
T_71: (in 0x0F : byte)
  Class: Eq_71
  DataType: byte
  OrigDataType: byte
T_72: (in DPB(cx_86, 0x0F, 0, 8) : word16)
  Class: Eq_70
  DataType: word16
  OrigDataType: word16
T_73: (in 0x1D : byte)
  Class: Eq_73
  DataType: byte
  OrigDataType: byte
T_74: (in 0xA000 : selector)
  Class: Eq_74
  DataType: (ptr Eq_74)
  OrigDataType: (ptr (segment (0 (arr T_308 320) a0000)))
T_75: (in 0x0000 : word16)
  Class: Eq_75
  DataType: word16
  OrigDataType: word16
T_76: (in di_102 + 0x0000 : word16)
  Class: Eq_76
  DataType: word16
  OrigDataType: word16
T_77: (in Mem94[0xA000:di_102 + 0x0000:byte] : byte)
  Class: Eq_73
  DataType: byte
  OrigDataType: byte
T_78: (in 0x0001 : word16)
  Class: Eq_78
  DataType: word16
  OrigDataType: word16
T_79: (in di_102 + 0x0001 : word16)
  Class: Eq_68
  DataType: (memptr (ptr Eq_74) byte)
  OrigDataType: word16
T_80: (in 0x0001 : word16)
  Class: Eq_80
  DataType: word16
  OrigDataType: word16
T_81: (in cx_86 - 0x0001 : word16)
  Class: Eq_60
  DataType: word16
  OrigDataType: word16
T_82: (in 0x0000 : word16)
  Class: Eq_60
  DataType: word16
  OrigDataType: word16
T_83: (in cx_86 == 0x0000 : bool)
  Class: Eq_83
  DataType: bool
  OrigDataType: bool
T_84: (in al_113 : byte)
  Class: Eq_73
  DataType: byte
  OrigDataType: byte
T_85: (in 0x04 : byte)
  Class: Eq_85
  DataType: byte
  OrigDataType: byte
T_86: (in bl_81 & 0x04 : byte)
  Class: Eq_86
  DataType: byte
  OrigDataType: byte
T_87: (in 0x16 : byte)
  Class: Eq_87
  DataType: byte
  OrigDataType: byte
T_88: (in (bl_81 & 0x04) + 0x16 : byte)
  Class: Eq_73
  DataType: byte
  OrigDataType: byte
T_89: (in 0x0000 : word16)
  Class: Eq_89
  DataType: word16
  OrigDataType: word16
T_90: (in di_102 + 0x0000 : word16)
  Class: Eq_90
  DataType: word16
  OrigDataType: word16
T_91: (in Mem115[0xA000:di_102 + 0x0000:byte] : byte)
  Class: Eq_73
  DataType: byte
  OrigDataType: byte
T_92: (in di_116 : (memptr (ptr Eq_74) byte))
  Class: Eq_92
  DataType: (memptr (ptr Eq_74) byte)
  OrigDataType: (memptr T_74 (struct (0 T_97 t0000)))
T_93: (in 0x0001 : word16)
  Class: Eq_93
  DataType: word16
  OrigDataType: word16
T_94: (in di_102 + 0x0001 : word16)
  Class: Eq_92
  DataType: (memptr (ptr Eq_74) byte)
  OrigDataType: word16
T_95: (in 0x0000 : word16)
  Class: Eq_95
  DataType: word16
  OrigDataType: word16
T_96: (in di_116 + 0x0000 : word16)
  Class: Eq_96
  DataType: word16
  OrigDataType: word16
T_97: (in Mem117[0xA000:di_116 + 0x0000:byte] : byte)
  Class: Eq_73
  DataType: byte
  OrigDataType: byte
T_98: (in di_118 : (memptr (ptr Eq_74) byte))
  Class: Eq_98
  DataType: (memptr (ptr Eq_74) byte)
  OrigDataType: (memptr T_74 (struct 0001 (0 T_117 t0000)))
T_99: (in 0x0001 : word16)
  Class: Eq_99
  DataType: word16
  OrigDataType: word16
T_100: (in di_116 + 0x0001 : word16)
  Class: Eq_98
  DataType: (memptr (ptr Eq_74) byte)
  OrigDataType: word16
T_101: (in cx_121 : word16)
  Class: Eq_101
  DataType: word16
  OrigDataType: word16
T_102: (in 0x0F : byte)
  Class: Eq_102
  DataType: byte
  OrigDataType: byte
T_103: (in DPB(cx_101, 0x0F, 0, 8) : word16)
  Class: Eq_101
  DataType: word16
  OrigDataType: word16
T_104: (in 0x16 : byte)
  Class: Eq_73
  DataType: byte
  OrigDataType: byte
T_105: (in 0x0000 : word16)
  Class: Eq_105
  DataType: word16
  OrigDataType: word16
T_106: (in di_102 + 0x0000 : word16)
  Class: Eq_106
  DataType: word16
  OrigDataType: word16
T_107: (in Mem106[0xA000:di_102 + 0x0000:byte] : byte)
  Class: Eq_73
  DataType: byte
  OrigDataType: byte
T_108: (in 0x0001 : word16)
  Class: Eq_108
  DataType: word16
  OrigDataType: word16
T_109: (in di_102 + 0x0001 : word16)
  Class: Eq_68
  DataType: (memptr (ptr Eq_74) byte)
  OrigDataType: word16
T_110: (in 0x0001 : word16)
  Class: Eq_110
  DataType: word16
  OrigDataType: word16
T_111: (in cx_101 - 0x0001 : word16)
  Class: Eq_70
  DataType: word16
  OrigDataType: word16
T_112: (in 0x0000 : word16)
  Class: Eq_70
  DataType: word16
  OrigDataType: word16
T_113: (in cx_101 == 0x0000 : bool)
  Class: Eq_113
  DataType: bool
  OrigDataType: bool
T_114: (in cx_132 : word16)
  Class: Eq_114
  DataType: word16
  OrigDataType: word16
T_115: (in 0xAB40 : word16)
  Class: Eq_115
  DataType: word16
  OrigDataType: word16
T_116: (in 0xAB40 - di_118 : word16)
  Class: Eq_114
  DataType: word16
  OrigDataType: word16
T_117: (in 0x16 : byte)
  Class: Eq_117
  DataType: byte
  OrigDataType: byte
T_118: (in 0x0000 : word16)
  Class: Eq_118
  DataType: word16
  OrigDataType: word16
T_119: (in di_118 + 0x0000 : word16)
  Class: Eq_119
  DataType: word16
  OrigDataType: word16
T_120: (in Mem126[0xA000:di_118 + 0x0000:byte] : byte)
  Class: Eq_117
  DataType: byte
  OrigDataType: byte
T_121: (in 0x0001 : word16)
  Class: Eq_121
  DataType: word16
  OrigDataType: word16
T_122: (in di_118 + 0x0001 : word16)
  Class: Eq_98
  DataType: (memptr (ptr Eq_74) byte)
  OrigDataType: word16
T_123: (in 0x0001 : word16)
  Class: Eq_123
  DataType: word16
  OrigDataType: word16
T_124: (in cx_121 - 0x0001 : word16)
  Class: Eq_101
  DataType: word16
  OrigDataType: word16
T_125: (in 0x0000 : word16)
  Class: Eq_101
  DataType: word16
  OrigDataType: word16
T_126: (in cx_121 == 0x0000 : bool)
  Class: Eq_126
  DataType: bool
  OrigDataType: bool
T_127: (in di_152 : (memptr (ptr Eq_74) byte))
  Class: Eq_127
  DataType: (memptr (ptr Eq_74) byte)
  OrigDataType: word16
T_128: (in 0xF8C0 : word16)
  Class: Eq_127
  DataType: (memptr (ptr Eq_74) byte)
  OrigDataType: word16
T_129: (in cx_154 : word16)
  Class: Eq_129
  DataType: word16
  OrigDataType: word16
T_130: (in 0x3F : byte)
  Class: Eq_130
  DataType: byte
  OrigDataType: byte
T_131: (in DPB(cx_132, 0x3F, 0, 8) : word16)
  Class: Eq_129
  DataType: word16
  OrigDataType: word16
T_132: (in 0x1D : byte)
  Class: Eq_117
  DataType: byte
  OrigDataType: byte
T_133: (in 0x0000 : word16)
  Class: Eq_133
  DataType: word16
  OrigDataType: word16
T_134: (in di_118 + 0x0000 : word16)
  Class: Eq_134
  DataType: word16
  OrigDataType: word16
T_135: (in Mem141[0xA000:di_118 + 0x0000:byte] : byte)
  Class: Eq_117
  DataType: byte
  OrigDataType: byte
T_136: (in 0x0001 : word16)
  Class: Eq_136
  DataType: word16
  OrigDataType: word16
T_137: (in di_118 + 0x0001 : word16)
  Class: Eq_98
  DataType: (memptr (ptr Eq_74) byte)
  OrigDataType: word16
T_138: (in 0x0001 : word16)
  Class: Eq_138
  DataType: word16
  OrigDataType: word16
T_139: (in cx_132 - 0x0001 : word16)
  Class: Eq_114
  DataType: word16
  OrigDataType: word16
T_140: (in 0x0000 : word16)
  Class: Eq_114
  DataType: word16
  OrigDataType: word16
T_141: (in cx_132 == 0x0000 : bool)
  Class: Eq_141
  DataType: bool
  OrigDataType: bool
T_142: (in si_170 : (memptr (ptr Eq_74) Eq_142))
  Class: Eq_142
  DataType: (memptr (ptr Eq_74) Eq_142)
  OrigDataType: (memptr T_74 (struct 0001 (FFFFFFFD T_189 tFFFFFFFD) (FFFFFFFE T_193 tFFFFFFFE) (0 T_145 t0000)))
T_143: (in 0x0000 : word16)
  Class: Eq_143
  DataType: word16
  OrigDataType: word16
T_144: (in si_170 + 0x0000 : word16)
  Class: Eq_144
  DataType: word16
  OrigDataType: word16
T_145: (in Mem117[0xA000:si_170 + 0x0000:byte] : byte)
  Class: Eq_145
  DataType: byte
  OrigDataType: byte
T_146: (in 0x00 : byte)
  Class: Eq_146
  DataType: byte
  OrigDataType: byte
T_147: (in (0xA000->*si_170).b0000 | 0x00 : byte)
  Class: Eq_145
  DataType: byte
  OrigDataType: byte
T_148: (in 0x0000 : word16)
  Class: Eq_148
  DataType: word16
  OrigDataType: word16
T_149: (in si_170 + 0x0000 : word16)
  Class: Eq_149
  DataType: word16
  OrigDataType: word16
T_150: (in Mem185[0xA000:si_170 + 0x0000:byte] : byte)
  Class: Eq_145
  DataType: byte
  OrigDataType: byte
T_151: (in 0x0000 : word16)
  Class: Eq_151
  DataType: word16
  OrigDataType: word16
T_152: (in si_170 + 0x0000 : word16)
  Class: Eq_152
  DataType: word16
  OrigDataType: word16
T_153: (in Mem185[0xA000:si_170 + 0x0000:byte] : byte)
  Class: Eq_145
  DataType: byte
  OrigDataType: byte
T_154: (in 0x00 : byte)
  Class: Eq_145
  DataType: byte
  OrigDataType: byte
T_155: (in (0xA000->*si_170).b0000 == 0x00 : bool)
  Class: Eq_155
  DataType: bool
  OrigDataType: bool
T_156: (in 0x0000 : word16)
  Class: Eq_156
  DataType: word16
  OrigDataType: word16
T_157: (in si_170 + 0x0000 : word16)
  Class: Eq_157
  DataType: word16
  OrigDataType: word16
T_158: (in Mem117[0xA000:si_170 + 0x0000:byte] : byte)
  Class: Eq_145
  DataType: byte
  OrigDataType: byte
T_159: (in di_173 : (memptr (ptr Eq_74) byte))
  Class: Eq_127
  DataType: (memptr (ptr Eq_74) byte)
  OrigDataType: (memptr T_74 (struct 0001 (0 T_162 t0000)))
T_160: (in 0x0000 : word16)
  Class: Eq_160
  DataType: word16
  OrigDataType: word16
T_161: (in di_173 + 0x0000 : word16)
  Class: Eq_161
  DataType: word16
  OrigDataType: word16
T_162: (in Mem178[0xA000:di_173 + 0x0000:byte] : byte)
  Class: Eq_145
  DataType: byte
  OrigDataType: byte
T_163: (in 0x0001 : word16)
  Class: Eq_163
  DataType: word16
  OrigDataType: word16
T_164: (in si_170 + 0x0001 : word16)
  Class: Eq_142
  DataType: (memptr (ptr Eq_74) Eq_142)
  OrigDataType: word16
T_165: (in 0x0001 : word16)
  Class: Eq_165
  DataType: word16
  OrigDataType: word16
T_166: (in di_173 + 0x0001 : word16)
  Class: Eq_127
  DataType: (memptr (ptr Eq_74) byte)
  OrigDataType: word16
T_167: (in cx_167 : word16)
  Class: Eq_167
  DataType: word16
  OrigDataType: word16
T_168: (in 0x0001 : word16)
  Class: Eq_168
  DataType: word16
  OrigDataType: word16
T_169: (in cx_167 - 0x0001 : word16)
  Class: Eq_167
  DataType: word16
  OrigDataType: word16
T_170: (in 0x0000 : word16)
  Class: Eq_167
  DataType: word16
  OrigDataType: word16
T_171: (in cx_167 == 0x0000 : bool)
  Class: Eq_171
  DataType: bool
  OrigDataType: bool
T_172: (in 0x0140 : word16)
  Class: Eq_172
  DataType: word16
  OrigDataType: word16
T_173: (in di_152 - 0x0140 : word16)
  Class: Eq_127
  DataType: (memptr (ptr Eq_74) byte)
  OrigDataType: word16
T_174: (in 0x0001 : word16)
  Class: Eq_174
  DataType: word16
  OrigDataType: word16
T_175: (in cx_154 - 0x0001 : word16)
  Class: Eq_129
  DataType: word16
  OrigDataType: word16
T_176: (in 0x0000 : word16)
  Class: Eq_129
  DataType: word16
  OrigDataType: word16
T_177: (in cx_154 != 0x0000 : bool)
  Class: Eq_177
  DataType: bool
  OrigDataType: bool
T_178: (in si_321 : (memptr (ptr Eq_74) Eq_142))
  Class: Eq_142
  DataType: (memptr (ptr Eq_74) Eq_142)
  OrigDataType: (memptr T_74 (struct (0 T_184 t0000)))
T_179: (in 0x0001 : word16)
  Class: Eq_179
  DataType: word16
  OrigDataType: word16
T_180: (in si_321 + 0x0001 : word16)
  Class: Eq_142
  DataType: (memptr (ptr Eq_74) Eq_142)
  OrigDataType: word16
T_181: (in 0x16 : byte)
  Class: Eq_145
  DataType: byte
  OrigDataType: byte
T_182: (in 0x0000 : word16)
  Class: Eq_182
  DataType: word16
  OrigDataType: word16
T_183: (in si_321 + 0x0000 : word16)
  Class: Eq_183
  DataType: word16
  OrigDataType: word16
T_184: (in Mem185[0xA000:si_321 + 0x0000:byte] : byte)
  Class: Eq_145
  DataType: byte
  OrigDataType: byte
T_185: (in 0x16 != (0xA000->*si_321).b0000 : bool)
  Class: Eq_185
  DataType: bool
  OrigDataType: bool
T_186: (in 0x16 : byte)
  Class: Eq_186
  DataType: byte
  OrigDataType: byte
T_187: (in 0x0003 : word16)
  Class: Eq_187
  DataType: word16
  OrigDataType: word16
T_188: (in si_170 - 0x0003 : word16)
  Class: Eq_188
  DataType: word16
  OrigDataType: word16
T_189: (in Mem310[0xA000:si_170 - 0x0003:byte] : byte)
  Class: Eq_186
  DataType: byte
  OrigDataType: byte
T_190: (in 0x16 : byte)
  Class: Eq_190
  DataType: byte
  OrigDataType: byte
T_191: (in 0x0002 : word16)
  Class: Eq_191
  DataType: word16
  OrigDataType: word16
T_192: (in si_170 - 0x0002 : word16)
  Class: Eq_192
  DataType: word16
  OrigDataType: word16
T_193: (in Mem311[0xA000:si_170 - 0x0002:byte] : byte)
  Class: Eq_190
  DataType: byte
  OrigDataType: byte
T_194: (in si_312 : (memptr (ptr Eq_74) Eq_194))
  Class: Eq_194
  DataType: (memptr (ptr Eq_74) Eq_194)
  OrigDataType: (memptr T_74 (struct 0001 (2 T_208 t0002) (3 T_212 t0003)))
T_195: (in 0x0136 : word16)
  Class: Eq_195
  DataType: word16
  OrigDataType: word16
T_196: (in si_170 + 0x0136 : word16)
  Class: Eq_194
  DataType: (memptr (ptr Eq_74) Eq_194)
  OrigDataType: word16
T_197: (in si_322 : (memptr (ptr Eq_74) Eq_194))
  Class: Eq_194
  DataType: (memptr (ptr Eq_74) Eq_194)
  OrigDataType: (memptr T_74 (struct (0 T_203 t0000)))
T_198: (in 0x0001 : word16)
  Class: Eq_198
  DataType: word16
  OrigDataType: word16
T_199: (in si_322 - 0x0001 : word16)
  Class: Eq_194
  DataType: (memptr (ptr Eq_74) Eq_194)
  OrigDataType: word16
T_200: (in 0x16 : byte)
  Class: Eq_200
  DataType: byte
  OrigDataType: byte
T_201: (in 0x0000 : word16)
  Class: Eq_201
  DataType: word16
  OrigDataType: word16
T_202: (in si_322 + 0x0000 : word16)
  Class: Eq_202
  DataType: word16
  OrigDataType: word16
T_203: (in Mem311[0xA000:si_322 + 0x0000:byte] : byte)
  Class: Eq_200
  DataType: byte
  OrigDataType: byte
T_204: (in 0x16 != (0xA000->*si_322).b0000 : bool)
  Class: Eq_204
  DataType: bool
  OrigDataType: bool
T_205: (in 0x16 : byte)
  Class: Eq_205
  DataType: byte
  OrigDataType: byte
T_206: (in 0x0002 : word16)
  Class: Eq_206
  DataType: word16
  OrigDataType: word16
T_207: (in si_312 + 0x0002 : word16)
  Class: Eq_207
  DataType: word16
  OrigDataType: word16
T_208: (in Mem319[0xA000:si_312 + 0x0002:byte] : byte)
  Class: Eq_205
  DataType: byte
  OrigDataType: byte
T_209: (in 0x16 : byte)
  Class: Eq_209
  DataType: byte
  OrigDataType: byte
T_210: (in 0x0003 : word16)
  Class: Eq_210
  DataType: word16
  OrigDataType: word16
T_211: (in si_312 + 0x0003 : word16)
  Class: Eq_211
  DataType: word16
  OrigDataType: word16
T_212: (in Mem320[0xA000:si_312 + 0x0003:byte] : byte)
  Class: Eq_209
  DataType: byte
  OrigDataType: byte
T_213: (in 0x0140 : word16)
  Class: Eq_167
  DataType: word16
  OrigDataType: word16
T_214: (in 0x0140 : word16)
  Class: Eq_214
  DataType: word16
  OrigDataType: word16
T_215: (in di_152 - 0x0140 : word16)
  Class: Eq_142
  DataType: (memptr (ptr Eq_74) Eq_142)
  OrigDataType: word16
T_216: (in bx_209 : (memptr (ptr Eq_74) byte))
  Class: Eq_216
  DataType: (memptr (ptr Eq_74) byte)
  OrigDataType: (memptr T_74 (struct 0001 (0 T_221 t0000)))
T_217: (in 0x013F : word16)
  Class: Eq_216
  DataType: (memptr (ptr Eq_74) byte)
  OrigDataType: word16
T_218: (in ah_218 : byte)
  Class: Eq_218
  DataType: byte
  OrigDataType: byte
T_219: (in 0x0000 : word16)
  Class: Eq_219
  DataType: word16
  OrigDataType: word16
T_220: (in bx_209 + 0x0000 : word16)
  Class: Eq_220
  DataType: word16
  OrigDataType: word16
T_221: (in Mem226[0xA000:bx_209 + 0x0000:byte] : byte)
  Class: Eq_218
  DataType: byte
  OrigDataType: byte
T_222: (in 0x0001 : word16)
  Class: Eq_222
  DataType: word16
  OrigDataType: word16
T_223: (in bx_209 - 0x0001 : word16)
  Class: Eq_216
  DataType: (memptr (ptr Eq_74) byte)
  OrigDataType: word16
T_224: (in 0x0000 : word16)
  Class: Eq_216
  DataType: (memptr (ptr Eq_74) byte)
  OrigDataType: word16
T_225: (in bx_209 != Eq_74::a0000 : bool)
  Class: Eq_225
  DataType: bool
  OrigDataType: bool
T_226: (in al_219 : bcu8)
  Class: Eq_226
  DataType: bcu8
  OrigDataType: bcu8
T_227: (in 0x0F : byte)
  Class: Eq_227
  DataType: byte
  OrigDataType: byte
T_228: (in al_219 & 0x0F : byte)
  Class: Eq_228
  DataType: byte
  OrigDataType: byte
T_229: (in 0x10 : byte)
  Class: Eq_229
  DataType: byte
  OrigDataType: byte
T_230: (in al_219 & 0x0F | 0x10 : byte)
  Class: Eq_218
  DataType: byte
  OrigDataType: byte
T_231: (in ax_213 : word16)
  Class: Eq_231
  DataType: word16
  OrigDataType: word16
T_232: (in DPB(ax_213, ah_218, 8, 8) : word16)
  Class: Eq_231
  DataType: word16
  OrigDataType: word16
T_233: (in __inb : ptr32)
  Class: Eq_233
  DataType: (ptr Eq_233)
  OrigDataType: (ptr (fn T_235 (T_234)))
T_234: (in 0x40 : byte)
  Class: Eq_234
  DataType: byte
  OrigDataType: byte
T_235: (in __inb(0x40) : byte)
  Class: Eq_226
  DataType: bcu8
  OrigDataType: byte
T_236: (in 0x00 : byte)
  Class: Eq_218
  DataType: byte
  OrigDataType: byte
T_237: (in DPB(ax_213, al_219, 0, 8) : word16)
  Class: Eq_231
  DataType: word16
  OrigDataType: word16
T_238: (in 0xF8 : byte)
  Class: Eq_226
  DataType: bcu8
  OrigDataType: bcu8
T_239: (in al_219 <u 0xF8 : bool)
  Class: Eq_239
  DataType: bool
  OrigDataType: bool
T_240: (in bx_79 & 0x003F : word16)
  Class: Eq_9
  DataType: (memptr (ptr Eq_17) int8)
  OrigDataType: word16
T_241: (in 0x00 : byte)
  Class: Eq_241
  DataType: byte
  OrigDataType: byte
T_242: (in DPB(ax_213, 0x00, 8, 8) : word16)
  Class: Eq_242
  DataType: word16
  OrigDataType: word16
T_243: (in ax : word16)
  Class: Eq_242
  DataType: word16
  OrigDataType: word16
T_244: (in 0x87 : byte)
  Class: Eq_244
  DataType: byte
  OrigDataType: byte
T_245: (in DPB(cx_154, 0x87, 0, 8) : word16)
  Class: Eq_30
  DataType: word16
  OrigDataType: word16
T_246: (in di_248 : (memptr (ptr Eq_74) byte))
  Class: Eq_246
  DataType: (memptr (ptr Eq_74) byte)
  OrigDataType: (memptr T_74 (struct 0001 (0 T_260 t0000)))
T_247: (in 0xA8C0 : word16)
  Class: Eq_246
  DataType: (memptr (ptr Eq_74) byte)
  OrigDataType: word16
T_248: (in 0x0280 : word16)
  Class: Eq_248
  DataType: word16
  OrigDataType: word16
T_249: (in di_248 - 0x0280 : word16)
  Class: Eq_246
  DataType: (memptr (ptr Eq_74) byte)
  OrigDataType: word16
T_250: (in 0x0001 : word16)
  Class: Eq_250
  DataType: word16
  OrigDataType: word16
T_251: (in cx_247 - 0x0001 : word16)
  Class: Eq_30
  DataType: word16
  OrigDataType: word16
T_252: (in 0x0000 : word16)
  Class: Eq_30
  DataType: word16
  OrigDataType: word16
T_253: (in cx_247 != 0x0000 : bool)
  Class: Eq_253
  DataType: bool
  OrigDataType: bool
T_254: (in si_263 : (memptr (ptr Eq_74) byte))
  Class: Eq_254
  DataType: (memptr (ptr Eq_74) byte)
  OrigDataType: (memptr T_74 (struct 0001 (0 T_257 t0000)))
T_255: (in 0x0000 : word16)
  Class: Eq_255
  DataType: word16
  OrigDataType: word16
T_256: (in si_263 + 0x0000 : word16)
  Class: Eq_256
  DataType: word16
  OrigDataType: word16
T_257: (in Mem226[0xA000:si_263 + 0x0000:byte] : byte)
  Class: Eq_257
  DataType: byte
  OrigDataType: byte
T_258: (in 0x0000 : word16)
  Class: Eq_258
  DataType: word16
  OrigDataType: word16
T_259: (in di_248 + 0x0000 : word16)
  Class: Eq_259
  DataType: word16
  OrigDataType: word16
T_260: (in Mem271[0xA000:di_248 + 0x0000:byte] : byte)
  Class: Eq_257
  DataType: byte
  OrigDataType: byte
T_261: (in 0x0001 : word16)
  Class: Eq_261
  DataType: word16
  OrigDataType: word16
T_262: (in si_263 + 0x0001 : word16)
  Class: Eq_254
  DataType: (memptr (ptr Eq_74) byte)
  OrigDataType: word16
T_263: (in 0x0001 : word16)
  Class: Eq_263
  DataType: word16
  OrigDataType: word16
T_264: (in di_248 + 0x0001 : word16)
  Class: Eq_246
  DataType: (memptr (ptr Eq_74) byte)
  OrigDataType: word16
T_265: (in cx_255 : word16)
  Class: Eq_265
  DataType: word16
  OrigDataType: word16
T_266: (in 0x0001 : word16)
  Class: Eq_266
  DataType: word16
  OrigDataType: word16
T_267: (in cx_255 - 0x0001 : word16)
  Class: Eq_265
  DataType: word16
  OrigDataType: word16
T_268: (in 0x0000 : word16)
  Class: Eq_265
  DataType: word16
  OrigDataType: word16
T_269: (in cx_255 == 0x0000 : bool)
  Class: Eq_269
  DataType: bool
  OrigDataType: bool
T_270: (in __inb : ptr32)
  Class: Eq_270
  DataType: (ptr Eq_270)
  OrigDataType: (ptr (fn T_272 (T_271)))
T_271: (in 0x40 : byte)
  Class: Eq_271
  DataType: byte
  OrigDataType: byte
T_272: (in __inb(0x40) : byte)
  Class: Eq_272
  DataType: byte
  OrigDataType: byte
T_273: (in 0x03 : byte)
  Class: Eq_273
  DataType: byte
  OrigDataType: byte
T_274: (in __inb(0x40) & 0x03 : byte)
  Class: Eq_274
  DataType: byte
  OrigDataType: byte
T_275: (in DPB(ax, __inb(0x40) & 0x03, 0, 8) : word16)
  Class: Eq_242
  DataType: word16
  OrigDataType: word16
T_276: (in 0x0140 : word16)
  Class: Eq_265
  DataType: word16
  OrigDataType: word16
T_277: (in 0x0140 : word16)
  Class: Eq_277
  DataType: word16
  OrigDataType: word16
T_278: (in di_248 - 0x0140 : word16)
  Class: Eq_278
  DataType: word16
  OrigDataType: word16
T_279: (in 0x0001 : word16)
  Class: Eq_279
  DataType: word16
  OrigDataType: word16
T_280: (in di_248 - 0x0140 - 0x0001 : word16)
  Class: Eq_280
  DataType: word16
  OrigDataType: word16
T_281: (in di_248 - 0x0140 - 0x0001 + ax : word16)
  Class: Eq_254
  DataType: (memptr (ptr Eq_74) byte)
  OrigDataType: word16
T_282: (in __inb : ptr32)
  Class: Eq_282
  DataType: (ptr Eq_282)
  OrigDataType: (ptr (fn T_284 (T_283)))
T_283: (in 0x60 : byte)
  Class: Eq_283
  DataType: byte
  OrigDataType: byte
T_284: (in __inb(0x60) : byte)
  Class: Eq_284
  DataType: byte
  OrigDataType: byte
T_285: (in 0x01 : byte)
  Class: Eq_284
  DataType: byte
  OrigDataType: byte
T_286: (in __inb(0x60) != 0x01 : bool)
  Class: Eq_286
  DataType: bool
  OrigDataType: bool
T_287: (in 0x006C : word16)
  Class: Eq_287
  DataType: (memptr (ptr Eq_49) byte)
  OrigDataType: (memptr T_49 (struct (0 T_288 t0000)))
T_288: (in Mem34[0x0040:0x006C:byte] : byte)
  Class: Eq_48
  DataType: byte
  OrigDataType: byte
T_289: (in DPB(ax, ah_75, 8, 8) : word16)
  Class: Eq_231
  DataType: word16
  OrigDataType: word16
T_290: (in al_290 : byte)
  Class: Eq_290
  DataType: byte
  OrigDataType: byte
T_291: (in bios_kbd_get_keystroke : ptr32)
  Class: Eq_291
  DataType: (ptr Eq_291)
  OrigDataType: (ptr (fn T_295 (T_294)))
T_292: (in signature of bios_kbd_get_keystroke : void)
  Class: Eq_291
  DataType: (ptr Eq_291)
  OrigDataType: 
T_293: (in alOut : ptr16)
  Class: Eq_293
  DataType: (ptr byte)
  OrigDataType: ptr16
T_294: (in out al_290 : ptr16)
  Class: Eq_293
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_295: (in bios_kbd_get_keystroke(out al_290) : byte)
  Class: Eq_295
  DataType: byte
  OrigDataType: byte
T_296: (in bl_294 : byte)
  Class: Eq_296
  DataType: byte
  OrigDataType: byte
T_297: (in ch_295 : byte)
  Class: Eq_297
  DataType: byte
  OrigDataType: byte
T_298: (in cl_296 : byte)
  Class: Eq_298
  DataType: byte
  OrigDataType: byte
T_299: (in bios_video_get_EGA_info : ptr32)
  Class: Eq_299
  DataType: (ptr Eq_299)
  OrigDataType: (ptr (fn T_307 (T_304, T_305, T_306)))
T_300: (in signature of bios_video_get_EGA_info : void)
  Class: Eq_299
  DataType: (ptr Eq_299)
  OrigDataType: 
T_301: (in blOut : ptr16)
  Class: Eq_301
  DataType: (ptr byte)
  OrigDataType: ptr16
T_302: (in chOut : ptr16)
  Class: Eq_302
  DataType: (ptr byte)
  OrigDataType: ptr16
T_303: (in clOut : ptr16)
  Class: Eq_303
  DataType: (ptr byte)
  OrigDataType: ptr16
T_304: (in out bl_294 : ptr16)
  Class: Eq_301
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_305: (in out ch_295 : ptr16)
  Class: Eq_302
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_306: (in out cl_296 : ptr16)
  Class: Eq_303
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_307: (in bios_video_get_EGA_info(out bl_294, out ch_295, out cl_296) : byte)
  Class: Eq_307
  DataType: byte
  OrigDataType: byte
T_308:
  Class: Eq_308
  DataType: byte
  OrigDataType: (struct 0001 (0 T_221 t0000))
*/
typedef Eq_74 Eq_1Eq_49 Eq_1struct Globals {
	Eq_74 * ptrFFFA0000;	// FFFA0000
	Eq_49 * ptr0400;	// 400
} Eq_1;

typedef void (Eq_2)(byte);

typedef struct Eq_17 {
	int8 b01FF;	// 1FF
} Eq_17;

typedef struct Eq_49 {
	byte b006C;	// 6C
} Eq_49;

typedef struct Eq_62 {
	byte b01EF;	// 1EF
} Eq_62;

typedef  Eq_74[320]struct Eq_74 {
	byte bFFFFA8C0;	// FFFFA8C0
	byte bFFFFAA00;	// FFFFAA00
	byte bFFFFF8C0;	// FFFFF8C0
	byte a0000[320];	// 0
	byte b013F;	// 13F
	byte bA8C0;	// A8C0
	byte bAA00;	// AA00
	byte bF8C0;	// F8C0
} Eq_74;

typedef struct Eq_142 {	// size: 1 1
	byte bFFFFFFFD;	// FFFFFFFD
	byte bFFFFFFFE;	// FFFFFFFE
	byte b0000;	// 0
} Eq_142;

typedef struct Eq_194 {	// size: 1 1
	byte b0000;	// 0
	byte b0002;	// 2
	byte b0003;	// 3
} Eq_194;

typedef bcu8 (Eq_233)(byte);

typedef byte (Eq_270)(byte);

typedef byte (Eq_282)(byte);

typedef byte (Eq_291)(byte *);

typedef byte (Eq_299)(byte *, byte *, byte *);

