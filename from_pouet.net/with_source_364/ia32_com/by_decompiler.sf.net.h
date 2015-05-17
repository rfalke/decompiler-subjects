// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_364/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr (struct "Globals"))
  OrigDataType: (ptr (struct "Globals"))
T_2: (in bios_video_set_mode : ptr32)
  Class: Eq_2
  DataType: (ptr (fn T_6 (T_5)))
  OrigDataType: (ptr (fn T_6 (T_5)))
T_3: (in signature of bios_video_set_mode : void)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_4: (in al : byte)
  Class: Eq_4
  DataType: byte
  OrigDataType: byte
T_5: (in al : byte)
  Class: Eq_4
  DataType: byte
  OrigDataType: byte
T_6: (in bios_video_set_mode(al) : void)
  Class: Eq_6
  DataType: void
  OrigDataType: void
T_7: (in __syscall : ptr32)
  Class: Eq_7
  DataType: (ptr (fn T_9 (T_8)))
  OrigDataType: (ptr (fn T_9 (T_8)))
T_8: (in 0x10 : byte)
  Class: Eq_8
  DataType: byte
  OrigDataType: byte
T_9: (in __syscall(0x10) : void)
  Class: Eq_9
  DataType: void
  OrigDataType: void
T_10: (in __syscall : ptr32)
  Class: Eq_10
  DataType: (ptr (fn T_12 (T_11)))
  OrigDataType: (ptr (fn T_12 (T_11)))
T_11: (in 0x10 : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_12: (in __syscall(0x10) : void)
  Class: Eq_12
  DataType: void
  OrigDataType: void
T_13: (in ah_5 : byte)
  Class: Eq_13
  DataType: byte
  OrigDataType: byte
T_14: (in bh_6 : byte)
  Class: Eq_14
  DataType: byte
  OrigDataType: byte
T_15: (in bios_video_get_current_video_mode : ptr32)
  Class: Eq_15
  DataType: (ptr (fn T_21 (T_19, T_20)))
  OrigDataType: (ptr (fn T_21 (T_19, T_20)))
T_16: (in signature of bios_video_get_current_video_mode : void)
  Class: Eq_15
  DataType: 
  OrigDataType: 
T_17: (in ahOut : ptr16)
  Class: Eq_17
  DataType: ptr16
  OrigDataType: ptr16
T_18: (in bhOut : ptr16)
  Class: Eq_18
  DataType: ptr16
  OrigDataType: ptr16
T_19: (in out ah_5 : ptr16)
  Class: Eq_17
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_20: (in out bh_6 : ptr16)
  Class: Eq_18
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_21: (in bios_video_get_current_video_mode(out ah_5, out bh_6) : byte)
  Class: Eq_21
  DataType: byte
  OrigDataType: byte
T_22: (in 0x07 : byte)
  Class: Eq_21
  DataType: byte
  OrigDataType: byte
T_23: (in bios_video_get_current_video_mode(out ah_5, out bh_6) == 0x07 : bool)
  Class: Eq_23
  DataType: bool
  OrigDataType: bool
T_24: (in es_bx_12 : word32)
  Class: Eq_24
  DataType: word32
  OrigDataType: word32
T_25: (in msdos_get_interrupt_vector : ptr32)
  Class: Eq_25
  DataType: (ptr (fn T_29 (T_28)))
  OrigDataType: (ptr (fn T_29 (T_28)))
T_26: (in signature of msdos_get_interrupt_vector : void)
  Class: Eq_25
  DataType: 
  OrigDataType: 
T_27: (in al : byte)
  Class: Eq_27
  DataType: byte
  OrigDataType: byte
T_28: (in 0x08 : byte)
  Class: Eq_27
  DataType: byte
  OrigDataType: byte
T_29: (in msdos_get_interrupt_vector(0x08) : word32)
  Class: Eq_24
  DataType: word32
  OrigDataType: word32
T_30: (in (word16) es_bx_12 : word16)
  Class: Eq_30
  DataType: word16
  OrigDataType: word16
T_31: (in ds : selector)
  Class: Eq_31
  DataType: (ptr (segment (13A T_64 t013A) (4AB T_383 t04AB) (501 T_30 t0501) (503 T_36 t0503)))
  OrigDataType: (ptr (segment (13A T_64 t013A) (4AB T_383 t04AB) (501 T_30 t0501) (503 T_36 t0503)))
T_32: (in 0x0501 : word16)
  Class: Eq_32
  DataType: (memptr T_31 (struct (0 T_33 t0000)))
  OrigDataType: (memptr T_31 (struct (0 T_33 t0000)))
T_33: (in Mem16[ds:0x0501:word16] : word16)
  Class: Eq_30
  DataType: word16
  OrigDataType: word16
T_34: (in SLICE(es_bx_12, selector, 16) : selector)
  Class: Eq_34
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_35: (in 0x0503 : word16)
  Class: Eq_35
  DataType: (memptr T_31 (struct (0 T_36 t0000)))
  OrigDataType: (memptr T_31 (struct (0 T_36 t0000)))
T_36: (in Mem18[ds:0x0503:word16] : word16)
  Class: Eq_34
  DataType: word16
  OrigDataType: word16
T_37: (in bl_104 : byte)
  Class: Eq_37
  DataType: byte
  OrigDataType: byte
T_38: (in (byte) es_bx_12 : byte)
  Class: Eq_37
  DataType: byte
  OrigDataType: byte
T_39: (in si_108 : word16)
  Class: Eq_39
  DataType: (memptr T_31 (struct 0001 (0 T_353 t0000)))
  OrigDataType: (memptr T_31 (struct 0001 (0 T_353 t0000)))
T_40: (in fn0C00_033E : ptr32)
  Class: Eq_40
  DataType: (ptr (fn T_47 (T_45, T_46, T_31)))
  OrigDataType: (ptr (fn T_47 (T_45, T_46, T_31)))
T_41: (in signature of fn0C00_033E : void)
  Class: Eq_40
  DataType: 
  OrigDataType: 
T_42: (in dx : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_43: (in al : byte)
  Class: Eq_43
  DataType: byte
  OrigDataType: byte
T_44: (in ds : selector)
  Class: Eq_31
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_45: (in 0x04A6 : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_46: (in 0x08 : byte)
  Class: Eq_43
  DataType: byte
  OrigDataType: byte
T_47: (in fn0C00_033E(0x04A6, 0x08, ds) : word16)
  Class: Eq_39
  DataType: word16
  OrigDataType: word16
T_48: (in bp_21 : word16)
  Class: Eq_48
  DataType: cups16
  OrigDataType: cups16
T_49: (in 0x0000 : word16)
  Class: Eq_48
  DataType: word16
  OrigDataType: word16
T_50: (in cx_22 : word16)
  Class: Eq_50
  DataType: word16
  OrigDataType: word16
T_51: (in 0x1770 : word16)
  Class: Eq_50
  DataType: word16
  OrigDataType: word16
T_52: (in ax_100 : word16)
  Class: Eq_52
  DataType: word16
  OrigDataType: word16
T_53: (in 0x0000 : word16)
  Class: Eq_52
  DataType: word16
  OrigDataType: word16
T_54: (in al_103 : byte)
  Class: Eq_43
  DataType: byte
  OrigDataType: byte
T_55: (in 0x00 : byte)
  Class: Eq_43
  DataType: byte
  OrigDataType: byte
T_56: (in di_109 : word16)
  Class: Eq_56
  DataType: (memptr T_68 (struct 0002 (FFFFFFF1 T_452 tFFFFFFF1) (FFFFFFF5 T_448 tFFFFFFF5) (FFFFFFF7 T_444 tFFFFFFF7) (FFFFFFFB T_440 tFFFFFFFB) (FFFFFFFD T_436 tFFFFFFFD) (0 T_52 t0000)))
  OrigDataType: (memptr T_68 (struct 0002 (FFFFFFF1 T_452 tFFFFFFF1) (FFFFFFF5 T_448 tFFFFFFF5) (FFFFFFF7 T_444 tFFFFFFF7) (FFFFFFFB T_440 tFFFFFFFB) (FFFFFFFD T_436 tFFFFFFFD) (0 T_52 t0000)))
T_57: (in 0x0000 : word16)
  Class: Eq_56
  DataType: word16
  OrigDataType: word16
T_58: (in dx_107 : word16)
  Class: Eq_58
  DataType: word16
  OrigDataType: word16
T_59: (in 0xB000 : word16)
  Class: Eq_58
  DataType: word16
  OrigDataType: word16
T_60: (in dl_106 : byte)
  Class: Eq_60
  DataType: byte
  OrigDataType: byte
T_61: (in 0x00 : byte)
  Class: Eq_60
  DataType: byte
  OrigDataType: byte
T_62: (in 0xB800 : word16)
  Class: Eq_62
  DataType: word16
  OrigDataType: word16
T_63: (in 0x013A : word16)
  Class: Eq_63
  DataType: (memptr T_31 (struct (0 T_64 t0000)))
  OrigDataType: (memptr T_31 (struct (0 T_64 t0000)))
T_64: (in Mem683[ds:0x013A:word16] : word16)
  Class: Eq_62
  DataType: word16
  OrigDataType: word16
T_65: (in 0x0020 : word16)
  Class: Eq_48
  DataType: word16
  OrigDataType: word16
T_66: (in bp_21 != 0x0020 : bool)
  Class: Eq_66
  DataType: bool
  OrigDataType: bool
T_67: (in 0x0000 : word16)
  Class: Eq_52
  DataType: word16
  OrigDataType: word16
T_68: (in 0xB000 : selector)
  Class: Eq_68
  DataType: (ptr (segment (0 (arr T_1044) a0000) (FA0 (arr T_1043) a0FA0)))
  OrigDataType: (ptr (segment (0 (arr T_1044) a0000) (FA0 (arr T_1043) a0FA0)))
T_69: (in 0x0000 : word16)
  Class: Eq_69
  DataType: word16
  OrigDataType: word16
T_70: (in di_109 + 0x0000 : word16)
  Class: Eq_70
  DataType: word16
  OrigDataType: word16
T_71: (in Mem41[0xB000:di_109 + 0x0000:word16] : word16)
  Class: Eq_52
  DataType: word16
  OrigDataType: word16
T_72: (in 0x0002 : word16)
  Class: Eq_72
  DataType: word16
  OrigDataType: word16
T_73: (in di_109 + 0x0002 : word16)
  Class: Eq_56
  DataType: word16
  OrigDataType: word16
T_74: (in 0x0001 : word16)
  Class: Eq_74
  DataType: word16
  OrigDataType: word16
T_75: (in cx_22 - 0x0001 : word16)
  Class: Eq_50
  DataType: word16
  OrigDataType: word16
T_76: (in 0x0000 : word16)
  Class: Eq_50
  DataType: word16
  OrigDataType: word16
T_77: (in cx_22 == 0x0000 : bool)
  Class: Eq_77
  DataType: bool
  OrigDataType: bool
T_78: (in 0x0060 : word16)
  Class: Eq_48
  DataType: word16
  OrigDataType: word16
T_79: (in bp_21 != 0x0060 : bool)
  Class: Eq_79
  DataType: bool
  OrigDataType: bool
T_80: (in 0x08 : byte)
  Class: Eq_80
  DataType: byte
  OrigDataType: byte
T_81: (in dl_106 | 0x08 : byte)
  Class: Eq_60
  DataType: byte
  OrigDataType: byte
T_82: (in 0x05AD : word16)
  Class: Eq_39
  DataType: word16
  OrigDataType: word16
T_83: (in 0x0000 : word16)
  Class: Eq_56
  DataType: word16
  OrigDataType: word16
T_84: (in DPB(dx_107, dl_106, 0, 8) : word16)
  Class: Eq_58
  DataType: word16
  OrigDataType: word16
T_85: (in 0x0080 : word16)
  Class: Eq_48
  DataType: word16
  OrigDataType: word16
T_86: (in bp_21 != 0x0080 : bool)
  Class: Eq_86
  DataType: bool
  OrigDataType: bool
T_87: (in 0x04 : byte)
  Class: Eq_87
  DataType: byte
  OrigDataType: byte
T_88: (in dl_106 | 0x04 : byte)
  Class: Eq_60
  DataType: byte
  OrigDataType: byte
T_89: (in DPB(dx_107, dl_106, 0, 8) : word16)
  Class: Eq_58
  DataType: word16
  OrigDataType: word16
T_90: (in 0x0100 : word16)
  Class: Eq_48
  DataType: word16
  OrigDataType: word16
T_91: (in bp_21 != 0x0100 : bool)
  Class: Eq_91
  DataType: bool
  OrigDataType: bool
T_92: (in fn0C00_0362 : ptr32)
  Class: Eq_92
  DataType: (ptr (fn T_101 (T_99, T_68, T_31, T_100)))
  OrigDataType: (ptr (fn T_101 (T_99, T_68, T_31, T_100)))
T_93: (in signature of fn0C00_0362 : void)
  Class: Eq_92
  DataType: 
  OrigDataType: 
T_94: (in bl : byte)
  Class: Eq_94
  DataType: byte
  OrigDataType: byte
T_95: (in es : selector)
  Class: Eq_68
  DataType: (ptr (segment (1554 (arr T_1048) a1554)))
  OrigDataType: (ptr (segment (1554 (arr T_1048) a1554)))
T_96: (in ds : selector)
  Class: Eq_31
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_97: (in blOut : ptr16)
  Class: Eq_97
  DataType: ptr16
  OrigDataType: ptr16
T_98: (in 0xFE : byte)
  Class: Eq_98
  DataType: byte
  OrigDataType: byte
T_99: (in bl_104 & 0xFE : byte)
  Class: Eq_94
  DataType: byte
  OrigDataType: byte
T_100: (in out bl_104 : ptr16)
  Class: Eq_97
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_101: (in fn0C00_0362(bl_104 & 0xFE, 0xB000, ds, out bl_104) : byte)
  Class: Eq_43
  DataType: byte
  OrigDataType: byte
T_102: (in dl_655 : byte)
  Class: Eq_102
  DataType: byte
  OrigDataType: byte
T_103: (in 0x04 : byte)
  Class: Eq_103
  DataType: byte
  OrigDataType: byte
T_104: (in dl_106 ^ 0x04 : byte)
  Class: Eq_102
  DataType: byte
  OrigDataType: byte
T_105: (in DPB(ax_100, al_103, 0, 8) : word16)
  Class: Eq_52
  DataType: word16
  OrigDataType: word16
T_106: (in 0x05DC : word16)
  Class: Eq_39
  DataType: word16
  OrigDataType: word16
T_107: (in 0x0FA0 : word16)
  Class: Eq_56
  DataType: word16
  OrigDataType: word16
T_108: (in 0x88 : byte)
  Class: Eq_108
  DataType: byte
  OrigDataType: byte
T_109: (in dl_655 | 0x88 : byte)
  Class: Eq_60
  DataType: byte
  OrigDataType: byte
T_110: (in dl_655 | 0x88 : byte)
  Class: Eq_110
  DataType: byte
  OrigDataType: byte
T_111: (in DPB(dx_107, dl_655 | 0x88, 0, 8) : word16)
  Class: Eq_58
  DataType: word16
  OrigDataType: word16
T_112: (in 0x011E : word16)
  Class: Eq_48
  DataType: word16
  OrigDataType: word16
T_113: (in bp_21 != 0x011E : bool)
  Class: Eq_113
  DataType: bool
  OrigDataType: bool
T_114: (in fn0C00_0362 : ptr32)
  Class: Eq_92
  DataType: (ptr (fn T_118 (T_116, T_68, T_31, T_117)))
  OrigDataType: (ptr (fn T_118 (T_116, T_68, T_31, T_117)))
T_115: (in 0x01 : byte)
  Class: Eq_115
  DataType: byte
  OrigDataType: byte
T_116: (in bl_104 | 0x01 : byte)
  Class: Eq_94
  DataType: byte
  OrigDataType: byte
T_117: (in out bl_104 : ptr16)
  Class: Eq_97
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_118: (in fn0C00_0362(bl_104 | 0x01, 0xB000, ds, out bl_104) : byte)
  Class: Eq_43
  DataType: byte
  OrigDataType: byte
T_119: (in 0x08 : byte)
  Class: Eq_119
  DataType: byte
  OrigDataType: byte
T_120: (in dl_106 | 0x08 : byte)
  Class: Eq_60
  DataType: byte
  OrigDataType: byte
T_121: (in DPB(ax_100, al_103, 0, 8) : word16)
  Class: Eq_52
  DataType: word16
  OrigDataType: word16
T_122: (in 0x0625 : word16)
  Class: Eq_39
  DataType: word16
  OrigDataType: word16
T_123: (in 0x0FA0 : word16)
  Class: Eq_56
  DataType: word16
  OrigDataType: word16
T_124: (in DPB(dx_107, dl_106, 0, 8) : word16)
  Class: Eq_58
  DataType: word16
  OrigDataType: word16
T_125: (in 0x0140 : word16)
  Class: Eq_48
  DataType: word16
  OrigDataType: word16
T_126: (in bp_21 != 0x0140 : bool)
  Class: Eq_126
  DataType: bool
  OrigDataType: bool
T_127: (in 0x0644 : word16)
  Class: Eq_39
  DataType: word16
  OrigDataType: word16
T_128: (in 0x0160 : word16)
  Class: Eq_48
  DataType: word16
  OrigDataType: word16
T_129: (in bp_21 != 0x0160 : bool)
  Class: Eq_129
  DataType: bool
  OrigDataType: bool
T_130: (in 0x84 : byte)
  Class: Eq_130
  DataType: byte
  OrigDataType: byte
T_131: (in dl_106 ^ 0x84 : byte)
  Class: Eq_60
  DataType: byte
  OrigDataType: byte
T_132: (in DPB(dx_107, dl_106, 0, 8) : word16)
  Class: Eq_58
  DataType: word16
  OrigDataType: word16
T_133: (in 0x0180 : word16)
  Class: Eq_48
  DataType: word16
  OrigDataType: word16
T_134: (in bp_21 != 0x0180 : bool)
  Class: Eq_134
  DataType: bool
  OrigDataType: bool
T_135: (in dl_604 : byte)
  Class: Eq_135
  DataType: byte
  OrigDataType: byte
T_136: (in 0x04 : byte)
  Class: Eq_136
  DataType: byte
  OrigDataType: byte
T_137: (in dl_106 ^ 0x04 : byte)
  Class: Eq_135
  DataType: byte
  OrigDataType: byte
T_138: (in di_607 : word16)
  Class: Eq_138
  DataType: (memptr T_68 (struct 0002 (0 T_167 t0000)))
  OrigDataType: (memptr T_68 (struct 0002 (0 T_167 t0000)))
T_139: (in 0x0FA0 : word16)
  Class: Eq_138
  DataType: word16
  OrigDataType: word16
T_140: (in cx_608 : word16)
  Class: Eq_140
  DataType: word16
  OrigDataType: word16
T_141: (in 0x07D0 : word16)
  Class: Eq_140
  DataType: word16
  OrigDataType: word16
T_142: (in 0x0000 : word16)
  Class: Eq_52
  DataType: word16
  OrigDataType: word16
T_143: (in fn0C00_0949 : ptr32)
  Class: Eq_143
  DataType: (ptr (fn T_159 (T_153, T_154, T_155, T_68, T_31, T_156, T_157, T_158)))
  OrigDataType: (ptr (fn T_159 (T_153, T_154, T_155, T_68, T_31, T_156, T_157, T_158)))
T_144: (in signature of fn0C00_0949 : void)
  Class: Eq_143
  DataType: 
  OrigDataType: 
T_145: (in cx : word16)
  Class: Eq_145
  DataType: word16
  OrigDataType: word16
T_146: (in si : word16)
  Class: Eq_146
  DataType: word16
  OrigDataType: word16
T_147: (in di : word16)
  Class: Eq_147
  DataType: word16
  OrigDataType: word16
T_148: (in es : selector)
  Class: Eq_68
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_149: (in ds : selector)
  Class: Eq_31
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_150: (in diOut : ptr16)
  Class: Eq_150
  DataType: ptr16
  OrigDataType: ptr16
T_151: (in alOut : ptr16)
  Class: Eq_151
  DataType: ptr16
  OrigDataType: ptr16
T_152: (in blOut : ptr16)
  Class: Eq_152
  DataType: ptr16
  OrigDataType: ptr16
T_153: (in 0x01AD : word16)
  Class: Eq_145
  DataType: word16
  OrigDataType: word16
T_154: (in 0x0BB2 : word16)
  Class: Eq_146
  DataType: word16
  OrigDataType: word16
T_155: (in 0x1180 : word16)
  Class: Eq_147
  DataType: word16
  OrigDataType: word16
T_156: (in out di_109 : ptr16)
  Class: Eq_150
  DataType: (ptr (memptr T_68 (struct 0002 (0 T_71 t0000))))
  OrigDataType: (ptr (memptr T_68 (struct 0002 (0 T_71 t0000))))
T_157: (in out al_103 : ptr16)
  Class: Eq_151
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_158: (in out bl_104 : ptr16)
  Class: Eq_152
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_159: (in fn0C00_0949(0x01AD, 0x0BB2, 0x1180, 0xB000, ds, out di_109, out al_103, out bl_104) : word16)
  Class: Eq_39
  DataType: word16
  OrigDataType: word16
T_160: (in 0x20 : byte)
  Class: Eq_160
  DataType: byte
  OrigDataType: byte
T_161: (in dl_604 | 0x20 : byte)
  Class: Eq_60
  DataType: byte
  OrigDataType: byte
T_162: (in dl_604 | 0x20 : byte)
  Class: Eq_162
  DataType: byte
  OrigDataType: byte
T_163: (in DPB(dx_107, dl_604 | 0x20, 0, 8) : word16)
  Class: Eq_58
  DataType: word16
  OrigDataType: word16
T_164: (in 0x0000 : word16)
  Class: Eq_164
  DataType: word16
  OrigDataType: word16
T_165: (in 0x0000 : word16)
  Class: Eq_165
  DataType: word16
  OrigDataType: word16
T_166: (in di_607 + 0x0000 : word16)
  Class: Eq_166
  DataType: word16
  OrigDataType: word16
T_167: (in Mem618[0xB000:di_607 + 0x0000:word16] : word16)
  Class: Eq_164
  DataType: word16
  OrigDataType: word16
T_168: (in 0x0002 : word16)
  Class: Eq_168
  DataType: word16
  OrigDataType: word16
T_169: (in di_607 + 0x0002 : word16)
  Class: Eq_138
  DataType: word16
  OrigDataType: word16
T_170: (in 0x0001 : word16)
  Class: Eq_170
  DataType: word16
  OrigDataType: word16
T_171: (in cx_608 - 0x0001 : word16)
  Class: Eq_140
  DataType: word16
  OrigDataType: word16
T_172: (in 0x0000 : word16)
  Class: Eq_140
  DataType: word16
  OrigDataType: word16
T_173: (in cx_608 == 0x0000 : bool)
  Class: Eq_173
  DataType: bool
  OrigDataType: bool
T_174: (in 0x01D0 : word16)
  Class: Eq_48
  DataType: word16
  OrigDataType: word16
T_175: (in bp_21 != 0x01D0 : bool)
  Class: Eq_175
  DataType: bool
  OrigDataType: bool
T_176: (in fn0C00_0362 : ptr32)
  Class: Eq_92
  DataType: (ptr (fn T_180 (T_178, T_68, T_31, T_179)))
  OrigDataType: (ptr (fn T_180 (T_178, T_68, T_31, T_179)))
T_177: (in 0xFE : byte)
  Class: Eq_177
  DataType: byte
  OrigDataType: byte
T_178: (in bl_104 & 0xFE : byte)
  Class: Eq_94
  DataType: byte
  OrigDataType: byte
T_179: (in out bl_104 : ptr16)
  Class: Eq_97
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_180: (in fn0C00_0362(bl_104 & 0xFE, 0xB000, ds, out bl_104) : byte)
  Class: Eq_43
  DataType: byte
  OrigDataType: byte
T_181: (in dl_588 : byte)
  Class: Eq_181
  DataType: byte
  OrigDataType: byte
T_182: (in 0x30 : byte)
  Class: Eq_182
  DataType: byte
  OrigDataType: byte
T_183: (in dl_106 ^ 0x30 : byte)
  Class: Eq_181
  DataType: byte
  OrigDataType: byte
T_184: (in DPB(ax_100, al_103, 0, 8) : word16)
  Class: Eq_52
  DataType: word16
  OrigDataType: word16
T_185: (in 0x065C : word16)
  Class: Eq_39
  DataType: word16
  OrigDataType: word16
T_186: (in 0x0FA0 : word16)
  Class: Eq_56
  DataType: word16
  OrigDataType: word16
T_187: (in 0x08 : byte)
  Class: Eq_187
  DataType: byte
  OrigDataType: byte
T_188: (in dl_588 | 0x08 : byte)
  Class: Eq_60
  DataType: byte
  OrigDataType: byte
T_189: (in dl_588 | 0x08 : byte)
  Class: Eq_189
  DataType: byte
  OrigDataType: byte
T_190: (in DPB(dx_107, dl_588 | 0x08, 0, 8) : word16)
  Class: Eq_58
  DataType: word16
  OrigDataType: word16
T_191: (in 0x0200 : word16)
  Class: Eq_48
  DataType: word16
  OrigDataType: word16
T_192: (in bp_21 != 0x0200 : bool)
  Class: Eq_192
  DataType: bool
  OrigDataType: bool
T_193: (in 0x06DE : word16)
  Class: Eq_39
  DataType: word16
  OrigDataType: word16
T_194: (in 0x021E : word16)
  Class: Eq_48
  DataType: word16
  OrigDataType: word16
T_195: (in bp_21 != 0x021E : bool)
  Class: Eq_195
  DataType: bool
  OrigDataType: bool
T_196: (in fn0C00_0362 : ptr32)
  Class: Eq_92
  DataType: (ptr (fn T_200 (T_198, T_68, T_31, T_199)))
  OrigDataType: (ptr (fn T_200 (T_198, T_68, T_31, T_199)))
T_197: (in 0x01 : byte)
  Class: Eq_197
  DataType: byte
  OrigDataType: byte
T_198: (in bl_104 | 0x01 : byte)
  Class: Eq_94
  DataType: byte
  OrigDataType: byte
T_199: (in out bl_104 : ptr16)
  Class: Eq_97
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_200: (in fn0C00_0362(bl_104 | 0x01, 0xB000, ds, out bl_104) : byte)
  Class: Eq_43
  DataType: byte
  OrigDataType: byte
T_201: (in 0x08 : byte)
  Class: Eq_201
  DataType: byte
  OrigDataType: byte
T_202: (in dl_106 | 0x08 : byte)
  Class: Eq_60
  DataType: byte
  OrigDataType: byte
T_203: (in DPB(ax_100, al_103, 0, 8) : word16)
  Class: Eq_52
  DataType: word16
  OrigDataType: word16
T_204: (in 0x0625 : word16)
  Class: Eq_39
  DataType: word16
  OrigDataType: word16
T_205: (in 0x0FA0 : word16)
  Class: Eq_56
  DataType: word16
  OrigDataType: word16
T_206: (in DPB(dx_107, dl_106, 0, 8) : word16)
  Class: Eq_58
  DataType: word16
  OrigDataType: word16
T_207: (in 0x0280 : word16)
  Class: Eq_48
  DataType: word16
  OrigDataType: word16
T_208: (in bp_21 != 0x0280 : bool)
  Class: Eq_208
  DataType: bool
  OrigDataType: bool
T_209: (in 0x06AC : word16)
  Class: Eq_39
  DataType: word16
  OrigDataType: word16
T_210: (in 0x02C0 : word16)
  Class: Eq_48
  DataType: word16
  OrigDataType: word16
T_211: (in bp_21 != 0x02C0 : bool)
  Class: Eq_211
  DataType: bool
  OrigDataType: bool
T_212: (in 0x0020 : word16)
  Class: Eq_52
  DataType: word16
  OrigDataType: word16
T_213: (in di_542 : word16)
  Class: Eq_213
  DataType: (memptr T_68 (struct 0002 (0 T_242 t0000)))
  OrigDataType: (memptr T_68 (struct 0002 (0 T_242 t0000)))
T_214: (in 0x0000 : word16)
  Class: Eq_213
  DataType: word16
  OrigDataType: word16
T_215: (in cx_545 : word16)
  Class: Eq_215
  DataType: word16
  OrigDataType: word16
T_216: (in 0x1770 : word16)
  Class: Eq_215
  DataType: word16
  OrigDataType: word16
T_217: (in di_557 : word16)
  Class: Eq_217
  DataType: word16
  OrigDataType: word16
T_218: (in al_558 : byte)
  Class: Eq_218
  DataType: byte
  OrigDataType: byte
T_219: (in bl_559 : byte)
  Class: Eq_219
  DataType: byte
  OrigDataType: byte
T_220: (in fn0C00_0949 : ptr32)
  Class: Eq_143
  DataType: (ptr (fn T_227 (T_221, T_222, T_223, T_68, T_31, T_224, T_225, T_226)))
  OrigDataType: (ptr (fn T_227 (T_221, T_222, T_223, T_68, T_31, T_224, T_225, T_226)))
T_221: (in 0x00EB : word16)
  Class: Eq_145
  DataType: word16
  OrigDataType: word16
T_222: (in 0x0AC7 : word16)
  Class: Eq_146
  DataType: word16
  OrigDataType: word16
T_223: (in 0x1CC0 : word16)
  Class: Eq_147
  DataType: word16
  OrigDataType: word16
T_224: (in out di_557 : ptr16)
  Class: Eq_150
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_225: (in out al_558 : ptr16)
  Class: Eq_151
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_226: (in out bl_559 : ptr16)
  Class: Eq_152
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_227: (in fn0C00_0949(0x00EB, 0x0AC7, 0x1CC0, 0xB000, ds, out di_557, out al_558, out bl_559) : word16)
  Class: Eq_227
  DataType: word16
  OrigDataType: word16
T_228: (in fn0C00_0949 : ptr32)
  Class: Eq_143
  DataType: (ptr (fn T_235 (T_229, T_230, T_231, T_68, T_31, T_232, T_233, T_234)))
  OrigDataType: (ptr (fn T_235 (T_229, T_230, T_231, T_68, T_31, T_232, T_233, T_234)))
T_229: (in 0x00A1 : word16)
  Class: Eq_145
  DataType: word16
  OrigDataType: word16
T_230: (in 0x0E51 : word16)
  Class: Eq_146
  DataType: word16
  OrigDataType: word16
T_231: (in 0x0FA0 : word16)
  Class: Eq_147
  DataType: word16
  OrigDataType: word16
T_232: (in out di_109 : ptr16)
  Class: Eq_150
  DataType: (ptr (memptr T_68 (struct 0002 (0 T_71 t0000))))
  OrigDataType: (ptr (memptr T_68 (struct 0002 (0 T_71 t0000))))
T_233: (in out al_103 : ptr16)
  Class: Eq_151
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_234: (in out bl_104 : ptr16)
  Class: Eq_152
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_235: (in fn0C00_0949(0x00A1, 0x0E51, 0x0FA0, 0xB000, ds, out di_109, out al_103, out bl_104) : word16)
  Class: Eq_39
  DataType: word16
  OrigDataType: word16
T_236: (in 0x40 : byte)
  Class: Eq_60
  DataType: byte
  OrigDataType: byte
T_237: (in 0x40 : byte)
  Class: Eq_237
  DataType: byte
  OrigDataType: byte
T_238: (in DPB(dx_107, 0x40, 0, 8) : word16)
  Class: Eq_58
  DataType: word16
  OrigDataType: word16
T_239: (in 0x0020 : word16)
  Class: Eq_239
  DataType: word16
  OrigDataType: word16
T_240: (in 0x0000 : word16)
  Class: Eq_240
  DataType: word16
  OrigDataType: word16
T_241: (in di_542 + 0x0000 : word16)
  Class: Eq_241
  DataType: word16
  OrigDataType: word16
T_242: (in Mem550[0xB000:di_542 + 0x0000:word16] : word16)
  Class: Eq_239
  DataType: word16
  OrigDataType: word16
T_243: (in 0x0002 : word16)
  Class: Eq_243
  DataType: word16
  OrigDataType: word16
T_244: (in di_542 + 0x0002 : word16)
  Class: Eq_213
  DataType: word16
  OrigDataType: word16
T_245: (in 0x0001 : word16)
  Class: Eq_245
  DataType: word16
  OrigDataType: word16
T_246: (in cx_545 - 0x0001 : word16)
  Class: Eq_215
  DataType: word16
  OrigDataType: word16
T_247: (in 0x0000 : word16)
  Class: Eq_215
  DataType: word16
  OrigDataType: word16
T_248: (in cx_545 == 0x0000 : bool)
  Class: Eq_248
  DataType: bool
  OrigDataType: bool
T_249: (in 0x0300 : word16)
  Class: Eq_48
  DataType: word16
  OrigDataType: word16
T_250: (in bp_21 != 0x0300 : bool)
  Class: Eq_250
  DataType: bool
  OrigDataType: bool
T_251: (in fn0C00_0362 : ptr32)
  Class: Eq_92
  DataType: (ptr (fn T_255 (T_253, T_68, T_31, T_254)))
  OrigDataType: (ptr (fn T_255 (T_253, T_68, T_31, T_254)))
T_252: (in 0xFE : byte)
  Class: Eq_252
  DataType: byte
  OrigDataType: byte
T_253: (in bl_104 & 0xFE : byte)
  Class: Eq_94
  DataType: byte
  OrigDataType: byte
T_254: (in out bl_104 : ptr16)
  Class: Eq_97
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_255: (in fn0C00_0362(bl_104 & 0xFE, 0xB000, ds, out bl_104) : byte)
  Class: Eq_43
  DataType: byte
  OrigDataType: byte
T_256: (in 0x08 : byte)
  Class: Eq_256
  DataType: byte
  OrigDataType: byte
T_257: (in dl_106 | 0x08 : byte)
  Class: Eq_60
  DataType: byte
  OrigDataType: byte
T_258: (in DPB(ax_100, al_103, 0, 8) : word16)
  Class: Eq_52
  DataType: word16
  OrigDataType: word16
T_259: (in 0x070C : word16)
  Class: Eq_39
  DataType: word16
  OrigDataType: word16
T_260: (in 0x0FA0 : word16)
  Class: Eq_56
  DataType: word16
  OrigDataType: word16
T_261: (in DPB(dx_107, dl_106, 0, 8) : word16)
  Class: Eq_58
  DataType: word16
  OrigDataType: word16
T_262: (in 0x031E : word16)
  Class: Eq_48
  DataType: word16
  OrigDataType: word16
T_263: (in bp_21 != 0x031E : bool)
  Class: Eq_263
  DataType: bool
  OrigDataType: bool
T_264: (in fn0C00_0362 : ptr32)
  Class: Eq_92
  DataType: (ptr (fn T_268 (T_266, T_68, T_31, T_267)))
  OrigDataType: (ptr (fn T_268 (T_266, T_68, T_31, T_267)))
T_265: (in 0x01 : byte)
  Class: Eq_265
  DataType: byte
  OrigDataType: byte
T_266: (in bl_104 | 0x01 : byte)
  Class: Eq_94
  DataType: byte
  OrigDataType: byte
T_267: (in out bl_104 : ptr16)
  Class: Eq_97
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_268: (in fn0C00_0362(bl_104 | 0x01, 0xB000, ds, out bl_104) : byte)
  Class: Eq_43
  DataType: byte
  OrigDataType: byte
T_269: (in 0x08 : byte)
  Class: Eq_269
  DataType: byte
  OrigDataType: byte
T_270: (in dl_106 | 0x08 : byte)
  Class: Eq_60
  DataType: byte
  OrigDataType: byte
T_271: (in DPB(ax_100, al_103, 0, 8) : word16)
  Class: Eq_52
  DataType: word16
  OrigDataType: word16
T_272: (in 0x0625 : word16)
  Class: Eq_39
  DataType: word16
  OrigDataType: word16
T_273: (in 0x0FA0 : word16)
  Class: Eq_56
  DataType: word16
  OrigDataType: word16
T_274: (in DPB(dx_107, dl_106, 0, 8) : word16)
  Class: Eq_58
  DataType: word16
  OrigDataType: word16
T_275: (in 0x0340 : word16)
  Class: Eq_48
  DataType: word16
  OrigDataType: word16
T_276: (in bp_21 != 0x0340 : bool)
  Class: Eq_276
  DataType: bool
  OrigDataType: bool
T_277: (in 0x0739 : word16)
  Class: Eq_39
  DataType: word16
  OrigDataType: word16
T_278: (in 0x0360 : word16)
  Class: Eq_48
  DataType: word16
  OrigDataType: word16
T_279: (in bp_21 != 0x0360 : bool)
  Class: Eq_279
  DataType: bool
  OrigDataType: bool
T_280: (in di_485 : word16)
  Class: Eq_280
  DataType: (memptr T_68 (struct 0002 (0 T_299 t0000)))
  OrigDataType: (memptr T_68 (struct 0002 (0 T_299 t0000)))
T_281: (in 0x0FA0 : word16)
  Class: Eq_280
  DataType: word16
  OrigDataType: word16
T_282: (in cx_486 : word16)
  Class: Eq_282
  DataType: word16
  OrigDataType: word16
T_283: (in 0x07D0 : word16)
  Class: Eq_282
  DataType: word16
  OrigDataType: word16
T_284: (in 0x0000 : word16)
  Class: Eq_52
  DataType: word16
  OrigDataType: word16
T_285: (in fn0C00_0949 : ptr32)
  Class: Eq_143
  DataType: (ptr (fn T_292 (T_286, T_287, T_288, T_68, T_31, T_289, T_290, T_291)))
  OrigDataType: (ptr (fn T_292 (T_286, T_287, T_288, T_68, T_31, T_289, T_290, T_291)))
T_286: (in 0x00F2 : word16)
  Class: Eq_145
  DataType: word16
  OrigDataType: word16
T_287: (in 0x0D5F : word16)
  Class: Eq_146
  DataType: word16
  OrigDataType: word16
T_288: (in 0x1180 : word16)
  Class: Eq_147
  DataType: word16
  OrigDataType: word16
T_289: (in out di_109 : ptr16)
  Class: Eq_150
  DataType: (ptr (memptr T_68 (struct 0002 (0 T_71 t0000))))
  OrigDataType: (ptr (memptr T_68 (struct 0002 (0 T_71 t0000))))
T_290: (in out al_103 : ptr16)
  Class: Eq_151
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_291: (in out bl_104 : ptr16)
  Class: Eq_152
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_292: (in fn0C00_0949(0x00F2, 0x0D5F, 0x1180, 0xB000, ds, out di_109, out al_103, out bl_104) : word16)
  Class: Eq_39
  DataType: word16
  OrigDataType: word16
T_293: (in 0x20 : byte)
  Class: Eq_60
  DataType: byte
  OrigDataType: byte
T_294: (in 0x20 : byte)
  Class: Eq_294
  DataType: byte
  OrigDataType: byte
T_295: (in DPB(dx_107, 0x20, 0, 8) : word16)
  Class: Eq_58
  DataType: word16
  OrigDataType: word16
T_296: (in 0x0000 : word16)
  Class: Eq_296
  DataType: word16
  OrigDataType: word16
T_297: (in 0x0000 : word16)
  Class: Eq_297
  DataType: word16
  OrigDataType: word16
T_298: (in di_485 + 0x0000 : word16)
  Class: Eq_298
  DataType: word16
  OrigDataType: word16
T_299: (in Mem496[0xB000:di_485 + 0x0000:word16] : word16)
  Class: Eq_296
  DataType: word16
  OrigDataType: word16
T_300: (in 0x0002 : word16)
  Class: Eq_300
  DataType: word16
  OrigDataType: word16
T_301: (in di_485 + 0x0002 : word16)
  Class: Eq_280
  DataType: word16
  OrigDataType: word16
T_302: (in 0x0001 : word16)
  Class: Eq_302
  DataType: word16
  OrigDataType: word16
T_303: (in cx_486 - 0x0001 : word16)
  Class: Eq_282
  DataType: word16
  OrigDataType: word16
T_304: (in 0x0000 : word16)
  Class: Eq_282
  DataType: word16
  OrigDataType: word16
T_305: (in cx_486 == 0x0000 : bool)
  Class: Eq_305
  DataType: bool
  OrigDataType: bool
T_306: (in 0x0380 : word16)
  Class: Eq_48
  DataType: word16
  OrigDataType: word16
T_307: (in bp_21 != 0x0380 : bool)
  Class: Eq_307
  DataType: bool
  OrigDataType: bool
T_308: (in 0x11 : byte)
  Class: Eq_60
  DataType: byte
  OrigDataType: byte
T_309: (in 0x11 : byte)
  Class: Eq_309
  DataType: byte
  OrigDataType: byte
T_310: (in DPB(dx_107, 0x11, 0, 8) : word16)
  Class: Eq_58
  DataType: word16
  OrigDataType: word16
T_311: (in 0x0440 : word16)
  Class: Eq_48
  DataType: word16
  OrigDataType: word16
T_312: (in bp_21 != 0x0440 : bool)
  Class: Eq_312
  DataType: bool
  OrigDataType: bool
T_313: (in 0x0A : byte)
  Class: Eq_313
  DataType: byte
  OrigDataType: byte
T_314: (in dl_106 | 0x0A : byte)
  Class: Eq_60
  DataType: byte
  OrigDataType: byte
T_315: (in 0x08C0 : word16)
  Class: Eq_56
  DataType: word16
  OrigDataType: word16
T_316: (in 0x0758 : word16)
  Class: Eq_39
  DataType: word16
  OrigDataType: word16
T_317: (in DPB(dx_107, dl_106, 0, 8) : word16)
  Class: Eq_58
  DataType: word16
  OrigDataType: word16
T_318: (in 0x0480 : word16)
  Class: Eq_48
  DataType: word16
  OrigDataType: word16
T_319: (in bp_21 != 0x0480 : bool)
  Class: Eq_319
  DataType: bool
  OrigDataType: bool
T_320: (in 0x08 : byte)
  Class: Eq_320
  DataType: byte
  OrigDataType: byte
T_321: (in dl_106 | 0x08 : byte)
  Class: Eq_60
  DataType: byte
  OrigDataType: byte
T_322: (in 0x0DC0 : word16)
  Class: Eq_56
  DataType: word16
  OrigDataType: word16
T_323: (in 0x0905 : word16)
  Class: Eq_39
  DataType: word16
  OrigDataType: word16
T_324: (in DPB(dx_107, dl_106, 0, 8) : word16)
  Class: Eq_58
  DataType: word16
  OrigDataType: word16
T_325: (in 0xFF : byte)
  Class: Eq_60
  DataType: byte
  OrigDataType: byte
T_326: (in dl_106 != 0xFF : bool)
  Class: Eq_326
  DataType: bool
  OrigDataType: bool
T_327: (in 0xFF : byte)
  Class: Eq_327
  DataType: byte
  OrigDataType: byte
T_328: (in dl_106 | 0xFF : byte)
  Class: Eq_60
  DataType: byte
  OrigDataType: byte
T_329: (in DPB(dx_107, dl_106, 0, 8) : word16)
  Class: Eq_58
  DataType: word16
  OrigDataType: word16
T_330: (in 0x08 : byte)
  Class: Eq_330
  DataType: byte
  OrigDataType: byte
T_331: (in dl_106 & 0x08 : byte)
  Class: Eq_331
  DataType: byte
  OrigDataType: byte
T_332: (in 0x00 : byte)
  Class: Eq_331
  DataType: byte
  OrigDataType: byte
T_333: (in (dl_106 & 0x08) == 0x00 : bool)
  Class: Eq_333
  DataType: bool
  OrigDataType: bool
T_334: (in ds_dx_280 : ptr32)
  Class: Eq_30
  DataType: ptr32
  OrigDataType: ptr32
T_335: (in 0x0501 : word16)
  Class: Eq_335
  DataType: (memptr T_31 (struct (0 T_336 t0000)))
  OrigDataType: (memptr T_31 (struct (0 T_336 t0000)))
T_336: (in Mem18[ds:0x0501:segptr32] : segptr32)
  Class: Eq_30
  DataType: segptr32
  OrigDataType: segptr32
T_337: (in ds_281 : selector)
  Class: Eq_31
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_338: (in SLICE(ds_dx_280, selector, 16) : selector)
  Class: Eq_31
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_339: (in dx_283 : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_340: (in (word16) ds_dx_280 : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_341: (in 0x20 : byte)
  Class: Eq_341
  DataType: byte
  OrigDataType: byte
T_342: (in dl_106 & 0x20 : byte)
  Class: Eq_342
  DataType: byte
  OrigDataType: byte
T_343: (in 0x00 : byte)
  Class: Eq_342
  DataType: byte
  OrigDataType: byte
T_344: (in (dl_106 & 0x20) == 0x00 : bool)
  Class: Eq_344
  DataType: bool
  OrigDataType: bool
T_345: (in cx_405 : word16)
  Class: Eq_345
  DataType: word16
  OrigDataType: word16
T_346: (in 0x0001 : word16)
  Class: Eq_345
  DataType: word16
  OrigDataType: word16
T_347: (in 0x02 : byte)
  Class: Eq_347
  DataType: byte
  OrigDataType: byte
T_348: (in dl_106 & 0x02 : byte)
  Class: Eq_348
  DataType: byte
  OrigDataType: byte
T_349: (in 0x00 : byte)
  Class: Eq_348
  DataType: byte
  OrigDataType: byte
T_350: (in (dl_106 & 0x02) == 0x00 : bool)
  Class: Eq_350
  DataType: bool
  OrigDataType: bool
T_351: (in 0x0000 : word16)
  Class: Eq_351
  DataType: word16
  OrigDataType: word16
T_352: (in si_108 + 0x0000 : word16)
  Class: Eq_352
  DataType: word16
  OrigDataType: word16
T_353: (in Mem18[ds:si_108 + 0x0000:byte] : byte)
  Class: Eq_43
  DataType: byte
  OrigDataType: byte
T_354: (in ax_420 : word16)
  Class: Eq_354
  DataType: word16
  OrigDataType: word16
T_355: (in DPB(ax_100, al_103, 0, 8) : word16)
  Class: Eq_354
  DataType: word16
  OrigDataType: word16
T_356: (in 0x0001 : word16)
  Class: Eq_356
  DataType: word16
  OrigDataType: word16
T_357: (in si_108 + 0x0001 : word16)
  Class: Eq_39
  DataType: word16
  OrigDataType: word16
T_358: (in 0x00 : byte)
  Class: Eq_43
  DataType: byte
  OrigDataType: byte
T_359: (in al_103 != 0x00 : bool)
  Class: Eq_359
  DataType: bool
  OrigDataType: bool
T_360: (in 0x0003 : word16)
  Class: Eq_345
  DataType: word16
  OrigDataType: word16
T_361: (in 0x0003 : word16)
  Class: Eq_361
  DataType: word16
  OrigDataType: word16
T_362: (in bp_21 & 0x0003 : word16)
  Class: Eq_362
  DataType: word16
  OrigDataType: word16
T_363: (in 0x0000 : word16)
  Class: Eq_362
  DataType: word16
  OrigDataType: word16
T_364: (in (bp_21 & 0x0003) != 0x0000 : bool)
  Class: Eq_364
  DataType: bool
  OrigDataType: bool
T_365: (in 0x0002 : word16)
  Class: Eq_345
  DataType: word16
  OrigDataType: word16
T_366: (in fn0C00_033E : ptr32)
  Class: Eq_40
  DataType: (ptr (fn T_367 (T_339, T_54, T_337)))
  OrigDataType: (ptr (fn T_367 (T_339, T_54, T_337)))
T_367: (in fn0C00_033E(dx_283, al_103, ds_281) : word16)
  Class: Eq_367
  DataType: word16
  OrigDataType: word16
T_368: (in 0x0E : byte)
  Class: Eq_368
  DataType: byte
  OrigDataType: byte
T_369: (in DPB(ax_420, 0x0E, 8, 8) : word16)
  Class: Eq_52
  DataType: word16
  OrigDataType: word16
T_370: (in 0x0000 : word16)
  Class: Eq_370
  DataType: word16
  OrigDataType: word16
T_371: (in di_109 + 0x0000 : word16)
  Class: Eq_371
  DataType: word16
  OrigDataType: word16
T_372: (in Mem432[0xB000:di_109 + 0x0000:word16] : word16)
  Class: Eq_52
  DataType: word16
  OrigDataType: word16
T_373: (in 0x0002 : word16)
  Class: Eq_373
  DataType: word16
  OrigDataType: word16
T_374: (in di_109 + 0x0002 : word16)
  Class: Eq_56
  DataType: word16
  OrigDataType: word16
T_375: (in 0x0001 : word16)
  Class: Eq_375
  DataType: word16
  OrigDataType: word16
T_376: (in cx_405 - 0x0001 : word16)
  Class: Eq_345
  DataType: word16
  OrigDataType: word16
T_377: (in 0x0000 : word16)
  Class: Eq_345
  DataType: word16
  OrigDataType: word16
T_378: (in cx_405 != 0x0000 : bool)
  Class: Eq_378
  DataType: bool
  OrigDataType: bool
T_379: (in 0x08 : byte)
  Class: Eq_379
  DataType: byte
  OrigDataType: byte
T_380: (in dl_106 ^ 0x08 : byte)
  Class: Eq_60
  DataType: byte
  OrigDataType: byte
T_381: (in DPB(dx_107, dl_106, 0, 8) : word16)
  Class: Eq_58
  DataType: word16
  OrigDataType: word16
T_382: (in 0x04AB : word16)
  Class: Eq_382
  DataType: (memptr T_31 (struct (0 T_383 t0000)))
  OrigDataType: (memptr T_31 (struct (0 T_383 t0000)))
T_383: (in Mem18[ds:0x04AB:word16] : word16)
  Class: Eq_48
  DataType: cups16
  OrigDataType: cups16
T_384: (in bp_21 <u Mem18[ds:0x04AB:word16] : bool)
  Class: Eq_384
  DataType: bool
  OrigDataType: bool
T_385: (in ss : selector)
  Class: Eq_385
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_386: (in fp : ptr16)
  Class: Eq_386
  DataType: (union (ptr16 u0) ((memptr T_385 (struct (FFFFFFF8 T_389 tFFFFFFF8))) u1))
  OrigDataType: (union (ptr16 u0) ((memptr T_385 (struct (FFFFFFF8 T_389 tFFFFFFF8))) u1))
T_387: (in 0x0008 : word16)
  Class: Eq_387
  DataType: word16
  OrigDataType: word16
T_388: (in fp - 0x0008 : word16)
  Class: Eq_388
  DataType: word16
  OrigDataType: word16
T_389: (in Mem353[ss:fp - 0x0008:word16] : word16)
  Class: Eq_68
  DataType: word16
  OrigDataType: word16
T_390: (in ax_375 : word16)
  Class: Eq_390
  DataType: uint16
  OrigDataType: uint16
T_391: (in 0x03 : byte)
  Class: Eq_391
  DataType: byte
  OrigDataType: byte
T_392: (in bp_21 << 0x03 : word16)
  Class: Eq_392
  DataType: ui16
  OrigDataType: ui16
T_393: (in (byte) (bp_21 << 0x03) : byte)
  Class: Eq_393
  DataType: byte
  OrigDataType: byte
T_394: (in (int16) (byte) (bp_21 << 0x03) : int16)
  Class: Eq_394
  DataType: int16
  OrigDataType: int16
T_395: (in 0x00 : byte)
  Class: Eq_395
  DataType: byte
  OrigDataType: byte
T_396: (in DPB((int16) (byte) (bp_21 << 0x03), 0x00, 8, 8) : word16)
  Class: Eq_396
  DataType: ui16
  OrigDataType: ui16
T_397: (in 0x0002 : word16)
  Class: Eq_397
  DataType: ui16
  OrigDataType: ui16
T_398: (in DPB((int16) (byte) (bp_21 << 0x03), 0x00, 8, 8) * 0x0002 : word16)
  Class: Eq_398
  DataType: ui16
  OrigDataType: ui16
T_399: (in 0x0002 : word16)
  Class: Eq_399
  DataType: ui16
  OrigDataType: ui16
T_400: (in DPB((int16) (byte) (bp_21 << 0x03), 0x00, 8, 8) * 0x0002 * 0x0002 : word16)
  Class: Eq_400
  DataType: ui16
  OrigDataType: ui16
T_401: (in 0x0003 : word16)
  Class: Eq_401
  DataType: ui16
  OrigDataType: ui16
T_402: (in DPB((int16) (byte) (bp_21 << 0x03), 0x00, 8, 8) * 0x0002 * 0x0002 * 0x0003 : word16)
  Class: Eq_402
  DataType: ui16
  OrigDataType: ui16
T_403: (in 0xFFC0 : word16)
  Class: Eq_403
  DataType: word16
  OrigDataType: word16
T_404: (in DPB((int16) (byte) (bp_21 << 0x03), 0x00, 8, 8) * 0x0002 * 0x0002 * 0x0003 & 0xFFC0 : word16)
  Class: Eq_390
  DataType: word16
  OrigDataType: word16
T_405: (in 0x0002 : word16)
  Class: Eq_405
  DataType: uint16
  OrigDataType: uint16
T_406: (in ax_375 >>u 0x0002 : word16)
  Class: Eq_406
  DataType: uint16
  OrigDataType: uint16
T_407: (in ax_375 + (ax_375 >>u 0x0002) : word16)
  Class: Eq_52
  DataType: word16
  OrigDataType: word16
T_408: (in di_358 : word16)
  Class: Eq_408
  DataType: (memptr T_68 (struct 0002 (0 T_424 t0000)))
  OrigDataType: (memptr T_68 (struct 0002 (0 T_424 t0000)))
T_409: (in 0x0000 : word16)
  Class: Eq_408
  DataType: word16
  OrigDataType: word16
T_410: (in ax_375 >>u 0x0002 : word16)
  Class: Eq_410
  DataType: uint16
  OrigDataType: uint16
T_411: (in (byte) (ax_375 >>u 0x0002) : byte)
  Class: Eq_37
  DataType: byte
  OrigDataType: byte
T_412: (in (byte) ax_100 : byte)
  Class: Eq_43
  DataType: byte
  OrigDataType: byte
T_413: (in si_384 : word16)
  Class: Eq_413
  DataType: (memptr T_68 (struct 0002 (0 T_421 t0000)))
  OrigDataType: (memptr T_68 (struct 0002 (0 T_421 t0000)))
T_414: (in 0x0FA0 : word16)
  Class: Eq_414
  DataType: word16
  OrigDataType: word16
T_415: (in 0x0FA0 - ax_100 : word16)
  Class: Eq_415
  DataType: word16
  OrigDataType: word16
T_416: (in 0x0FA0 - ax_100 - ax_100 : word16)
  Class: Eq_413
  DataType: word16
  OrigDataType: word16
T_417: (in cx_386 : word16)
  Class: Eq_417
  DataType: word16
  OrigDataType: word16
T_418: (in 0x07D0 : word16)
  Class: Eq_417
  DataType: word16
  OrigDataType: word16
T_419: (in 0x0000 : word16)
  Class: Eq_419
  DataType: word16
  OrigDataType: word16
T_420: (in si_384 + 0x0000 : word16)
  Class: Eq_420
  DataType: word16
  OrigDataType: word16
T_421: (in Mem353[0xB000:si_384 + 0x0000:word16] : word16)
  Class: Eq_421
  DataType: word16
  OrigDataType: word16
T_422: (in 0x0000 : word16)
  Class: Eq_422
  DataType: word16
  OrigDataType: word16
T_423: (in di_358 + 0x0000 : word16)
  Class: Eq_423
  DataType: word16
  OrigDataType: word16
T_424: (in Mem393[0xB000:di_358 + 0x0000:word16] : word16)
  Class: Eq_421
  DataType: word16
  OrigDataType: word16
T_425: (in 0x0002 : word16)
  Class: Eq_425
  DataType: word16
  OrigDataType: word16
T_426: (in si_384 + 0x0002 : word16)
  Class: Eq_413
  DataType: word16
  OrigDataType: word16
T_427: (in 0x0002 : word16)
  Class: Eq_427
  DataType: word16
  OrigDataType: word16
T_428: (in di_358 + 0x0002 : word16)
  Class: Eq_408
  DataType: word16
  OrigDataType: word16
T_429: (in 0x0001 : word16)
  Class: Eq_429
  DataType: word16
  OrigDataType: word16
T_430: (in cx_386 - 0x0001 : word16)
  Class: Eq_417
  DataType: word16
  OrigDataType: word16
T_431: (in 0x0000 : word16)
  Class: Eq_417
  DataType: word16
  OrigDataType: word16
T_432: (in cx_386 == 0x0000 : bool)
  Class: Eq_432
  DataType: bool
  OrigDataType: bool
T_433: (in 0x0F : byte)
  Class: Eq_433
  DataType: byte
  OrigDataType: byte
T_434: (in 0x0003 : word16)
  Class: Eq_434
  DataType: word16
  OrigDataType: word16
T_435: (in di_109 - 0x0003 : word16)
  Class: Eq_435
  DataType: word16
  OrigDataType: word16
T_436: (in Mem442[0xB000:di_109 - 0x0003:byte] : byte)
  Class: Eq_433
  DataType: byte
  OrigDataType: byte
T_437: (in 0x07 : byte)
  Class: Eq_437
  DataType: byte
  OrigDataType: byte
T_438: (in 0x0005 : word16)
  Class: Eq_438
  DataType: word16
  OrigDataType: word16
T_439: (in di_109 - 0x0005 : word16)
  Class: Eq_439
  DataType: word16
  OrigDataType: word16
T_440: (in Mem443[0xB000:di_109 - 0x0005:byte] : byte)
  Class: Eq_437
  DataType: byte
  OrigDataType: byte
T_441: (in 0x0E : byte)
  Class: Eq_441
  DataType: byte
  OrigDataType: byte
T_442: (in 0x0009 : word16)
  Class: Eq_442
  DataType: word16
  OrigDataType: word16
T_443: (in di_109 - 0x0009 : word16)
  Class: Eq_443
  DataType: word16
  OrigDataType: word16
T_444: (in Mem444[0xB000:di_109 - 0x0009:byte] : byte)
  Class: Eq_441
  DataType: byte
  OrigDataType: byte
T_445: (in 0x0C : byte)
  Class: Eq_445
  DataType: byte
  OrigDataType: byte
T_446: (in 0x000B : word16)
  Class: Eq_446
  DataType: word16
  OrigDataType: word16
T_447: (in di_109 - 0x000B : word16)
  Class: Eq_447
  DataType: word16
  OrigDataType: word16
T_448: (in Mem445[0xB000:di_109 - 0x000B:byte] : byte)
  Class: Eq_445
  DataType: byte
  OrigDataType: byte
T_449: (in 0x0E : byte)
  Class: Eq_449
  DataType: byte
  OrigDataType: byte
T_450: (in 0x000F : word16)
  Class: Eq_450
  DataType: word16
  OrigDataType: word16
T_451: (in di_109 - 0x000F : word16)
  Class: Eq_451
  DataType: word16
  OrigDataType: word16
T_452: (in Mem446[0xB000:di_109 - 0x000F:byte] : byte)
  Class: Eq_449
  DataType: byte
  OrigDataType: byte
T_453: (in 0x0001 : word16)
  Class: Eq_453
  DataType: word16
  OrigDataType: word16
T_454: (in bp_21 + 0x0001 : word16)
  Class: Eq_48
  DataType: word16
  OrigDataType: word16
T_455: (in 0x0000 : word16)
  Class: Eq_52
  DataType: word16
  OrigDataType: word16
T_456: (in 0x00 : byte)
  Class: Eq_43
  DataType: byte
  OrigDataType: byte
T_457: (in 0x0000 : selector)
  Class: Eq_457
  DataType: (ptr (segment (417 T_459 t0417)))
  OrigDataType: (ptr (segment (417 T_459 t0417)))
T_458: (in 0x0417 : word16)
  Class: Eq_458
  DataType: (memptr T_457 (struct (0 T_459 t0000)))
  OrigDataType: (memptr T_457 (struct (0 T_459 t0000)))
T_459: (in Mem18[0x0000:0x0417:byte] : byte)
  Class: Eq_459
  DataType: byte
  OrigDataType: byte
T_460: (in 0x07 : byte)
  Class: Eq_460
  DataType: byte
  OrigDataType: byte
T_461: (in Mem18[0x0000:0x0417:byte] & 0x07 : byte)
  Class: Eq_461
  DataType: byte
  OrigDataType: byte
T_462: (in 0x00 : byte)
  Class: Eq_461
  DataType: byte
  OrigDataType: byte
T_463: (in (Mem18[0x0000:0x0417:byte] & 0x07) != 0x00 : bool)
  Class: Eq_463
  DataType: bool
  OrigDataType: bool
T_464: (in fn0C00_038D : ptr32)
  Class: Eq_464
  DataType: (ptr (fn T_475 (T_58, T_48, T_68, T_472, T_473, T_474)))
  OrigDataType: (ptr (fn T_475 (T_58, T_48, T_68, T_472, T_473, T_474)))
T_465: (in signature of fn0C00_038D : void)
  Class: Eq_464
  DataType: 
  OrigDataType: 
T_466: (in dx : word16)
  Class: Eq_58
  DataType: word16
  OrigDataType: word16
T_467: (in bp : word16)
  Class: Eq_48
  DataType: word16
  OrigDataType: word16
T_468: (in es : selector)
  Class: Eq_68
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_469: (in diOut : ptr16)
  Class: Eq_469
  DataType: ptr16
  OrigDataType: ptr16
T_470: (in alOut : ptr16)
  Class: Eq_470
  DataType: ptr16
  OrigDataType: ptr16
T_471: (in blOut : ptr16)
  Class: Eq_471
  DataType: ptr16
  OrigDataType: ptr16
T_472: (in out di_109 : ptr16)
  Class: Eq_469
  DataType: (ptr (memptr T_68 (struct 0002 (FFFFFFF1 T_452 tFFFFFFF1) (FFFFFFF5 T_448 tFFFFFFF5) (FFFFFFF7 T_444 tFFFFFFF7) (FFFFFFFB T_440 tFFFFFFFB) (FFFFFFFD T_436 tFFFFFFFD) (0 T_52 t0000))))
  OrigDataType: (ptr (memptr T_68 (struct 0002 (FFFFFFF1 T_452 tFFFFFFF1) (FFFFFFF5 T_448 tFFFFFFF5) (FFFFFFF7 T_444 tFFFFFFF7) (FFFFFFFB T_440 tFFFFFFFB) (FFFFFFFD T_436 tFFFFFFFD) (0 T_52 t0000))))
T_473: (in out al_103 : ptr16)
  Class: Eq_470
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_474: (in out bl_104 : ptr16)
  Class: Eq_471
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_475: (in fn0C00_038D(dx_107, bp_21, 0xB000, out di_109, out al_103, out bl_104) : word16)
  Class: Eq_58
  DataType: word16
  OrigDataType: word16
T_476: (in (byte) dx_107 : byte)
  Class: Eq_60
  DataType: byte
  OrigDataType: byte
T_477: (in si : word16)
  Class: Eq_477
  DataType: word16
  OrigDataType: word16
T_478: (in __cli : ptr32)
  Class: Eq_478
  DataType: (ptr (fn T_479 ()))
  OrigDataType: (ptr (fn T_479 ()))
T_479: (in __cli() : void)
  Class: Eq_479
  DataType: void
  OrigDataType: void
T_480: (in msdos_set_interrupt_vector : ptr32)
  Class: Eq_480
  DataType: (ptr (fn T_485 (T_43, T_484)))
  OrigDataType: (ptr (fn T_485 (T_43, T_484)))
T_481: (in signature of msdos_set_interrupt_vector : void)
  Class: Eq_480
  DataType: 
  OrigDataType: 
T_482: (in al : byte)
  Class: Eq_43
  DataType: byte
  OrigDataType: byte
T_483: (in ds_dx : word32)
  Class: Eq_483
  DataType: word32
  OrigDataType: word32
T_484: (in ds_dx : word32)
  Class: Eq_483
  DataType: word32
  OrigDataType: word32
T_485: (in msdos_set_interrupt_vector(al, ds_dx) : void)
  Class: Eq_485
  DataType: void
  OrigDataType: void
T_486: (in ax_12 : word16)
  Class: Eq_486
  DataType: word16
  OrigDataType: word16
T_487: (in 0x00F4 : word16)
  Class: Eq_486
  DataType: word16
  OrigDataType: word16
T_488: (in al_13 : byte)
  Class: Eq_488
  DataType: byte
  OrigDataType: byte
T_489: (in 0xF4 : byte)
  Class: Eq_488
  DataType: byte
  OrigDataType: byte
T_490: (in ah_14 : byte)
  Class: Eq_490
  DataType: byte
  OrigDataType: byte
T_491: (in 0x00 : byte)
  Class: Eq_490
  DataType: byte
  OrigDataType: byte
T_492: (in ax_11 : word16)
  Class: Eq_492
  DataType: word16
  OrigDataType: word16
T_493: (in fn0C00_0505 : ptr32)
  Class: Eq_493
  DataType: (ptr (fn T_497 (T_488, T_490)))
  OrigDataType: (ptr (fn T_497 (T_488, T_490)))
T_494: (in signature of fn0C00_0505 : void)
  Class: Eq_493
  DataType: 
  OrigDataType: 
T_495: (in al : byte)
  Class: Eq_488
  DataType: byte
  OrigDataType: byte
T_496: (in ah : byte)
  Class: Eq_490
  DataType: byte
  OrigDataType: byte
T_497: (in fn0C00_0505(al_13, ah_14) : byte)
  Class: Eq_497
  DataType: byte
  OrigDataType: byte
T_498: (in DPB(ax_12, fn0C00_0505(al_13, ah_14), 0, 8) : word16)
  Class: Eq_492
  DataType: word16
  OrigDataType: word16
T_499: (in 0x0001 : word16)
  Class: Eq_499
  DataType: word16
  OrigDataType: word16
T_500: (in ax_11 - 0x0001 : word16)
  Class: Eq_486
  DataType: word16
  OrigDataType: word16
T_501: (in ax_11 - 0x0001 : word16)
  Class: Eq_501
  DataType: word16
  OrigDataType: word16
T_502: (in (byte) (ax_11 - 0x0001) : byte)
  Class: Eq_488
  DataType: byte
  OrigDataType: byte
T_503: (in ax_11 - 0x0001 : word16)
  Class: Eq_503
  DataType: word16
  OrigDataType: word16
T_504: (in SLICE(ax_11 - 0x0001, byte, 8) : byte)
  Class: Eq_490
  DataType: byte
  OrigDataType: byte
T_505: (in 0x0001 : word16)
  Class: Eq_492
  DataType: word16
  OrigDataType: word16
T_506: (in ax_11 != 0x0001 : bool)
  Class: Eq_506
  DataType: bool
  OrigDataType: bool
T_507: (in si_17 : word16)
  Class: Eq_507
  DataType: (memptr T_526 (struct 0001 (0 T_529 t0000)))
  OrigDataType: (memptr T_526 (struct 0001 (0 T_529 t0000)))
T_508: (in 0x08FD : word16)
  Class: Eq_507
  DataType: word16
  OrigDataType: word16
T_509: (in ax_33 : word16)
  Class: Eq_509
  DataType: word16
  OrigDataType: word16
T_510: (in fn0C00_0505 : ptr32)
  Class: Eq_493
  DataType: (ptr (fn T_512 (T_488, T_511)))
  OrigDataType: (ptr (fn T_512 (T_488, T_511)))
T_511: (in ah_25 : byte)
  Class: Eq_490
  DataType: byte
  OrigDataType: byte
T_512: (in fn0C00_0505(al_13, ah_25) : byte)
  Class: Eq_512
  DataType: byte
  OrigDataType: byte
T_513: (in DPB(ax_12, fn0C00_0505(al_13, ah_25), 0, 8) : word16)
  Class: Eq_509
  DataType: word16
  OrigDataType: word16
T_514: (in 0x0001 : word16)
  Class: Eq_514
  DataType: word16
  OrigDataType: word16
T_515: (in ax_33 + 0x0001 : word16)
  Class: Eq_486
  DataType: word16
  OrigDataType: word16
T_516: (in ax_33 + 0x0001 : word16)
  Class: Eq_516
  DataType: word16
  OrigDataType: word16
T_517: (in (byte) (ax_33 + 0x0001) : byte)
  Class: Eq_488
  DataType: byte
  OrigDataType: byte
T_518: (in ax_33 + 0x0001 : word16)
  Class: Eq_518
  DataType: word16
  OrigDataType: word16
T_519: (in SLICE(ax_33 + 0x0001, byte, 8) : byte)
  Class: Eq_490
  DataType: byte
  OrigDataType: byte
T_520: (in 0x1F : byte)
  Class: Eq_520
  DataType: byte
  OrigDataType: byte
T_521: (in al_13 & 0x1F : byte)
  Class: Eq_521
  DataType: byte
  OrigDataType: byte
T_522: (in 0x00 : byte)
  Class: Eq_521
  DataType: byte
  OrigDataType: byte
T_523: (in (al_13 & 0x1F) != 0x00 : bool)
  Class: Eq_523
  DataType: bool
  OrigDataType: bool
T_524: (in 0x00 : byte)
  Class: Eq_488
  DataType: byte
  OrigDataType: byte
T_525: (in al_13 != 0x00 : bool)
  Class: Eq_525
  DataType: bool
  OrigDataType: bool
T_526: (in 0x0C00 : selector)
  Class: Eq_526
  DataType: (ptr (segment (8FD (arr T_1047) a08FD)))
  OrigDataType: (ptr (segment (8FD (arr T_1047) a08FD)))
T_527: (in 0x0000 : word16)
  Class: Eq_527
  DataType: word16
  OrigDataType: word16
T_528: (in si_17 + 0x0000 : word16)
  Class: Eq_528
  DataType: word16
  OrigDataType: word16
T_529: (in Mem0[0x0C00:si_17 + 0x0000:byte] : byte)
  Class: Eq_490
  DataType: byte
  OrigDataType: byte
T_530: (in DPB(ax_12, ah_25, 8, 8) : word16)
  Class: Eq_486
  DataType: word16
  OrigDataType: word16
T_531: (in 0x0001 : word16)
  Class: Eq_531
  DataType: word16
  OrigDataType: word16
T_532: (in si_17 + 0x0001 : word16)
  Class: Eq_507
  DataType: word16
  OrigDataType: word16
T_533: (in al : byte)
  Class: Eq_533
  DataType: byte
  OrigDataType: byte
T_534: (in di_11 : word16)
  Class: Eq_534
  DataType: (memptr T_95 (struct 0002 (0 T_550 t0000)))
  OrigDataType: (memptr T_95 (struct 0002 (0 T_550 t0000)))
T_535: (in 0x1554 : word16)
  Class: Eq_534
  DataType: word16
  OrigDataType: word16
T_536: (in cx_12 : word16)
  Class: Eq_536
  DataType: word16
  OrigDataType: word16
T_537: (in 0x00A0 : word16)
  Class: Eq_536
  DataType: word16
  OrigDataType: word16
T_538: (in cx_21 : word16)
  Class: Eq_145
  DataType: word16
  OrigDataType: word16
T_539: (in si_19 : word16)
  Class: Eq_146
  DataType: word16
  OrigDataType: word16
T_540: (in di_13 : word16)
  Class: Eq_147
  DataType: word16
  OrigDataType: word16
T_541: (in 0x0000 : word16)
  Class: Eq_541
  DataType: word16
  OrigDataType: word16
T_542: (in di_11 + 0x0000 : word16)
  Class: Eq_147
  DataType: word16
  OrigDataType: word16
T_543: (in 0x01 : byte)
  Class: Eq_543
  DataType: byte
  OrigDataType: byte
T_544: (in bl & 0x01 : byte)
  Class: Eq_544
  DataType: byte
  OrigDataType: byte
T_545: (in 0x00 : byte)
  Class: Eq_544
  DataType: byte
  OrigDataType: byte
T_546: (in (bl & 0x01) != 0x00 : bool)
  Class: Eq_546
  DataType: bool
  OrigDataType: bool
T_547: (in 0x0000 : word16)
  Class: Eq_547
  DataType: word16
  OrigDataType: word16
T_548: (in 0x0000 : word16)
  Class: Eq_548
  DataType: word16
  OrigDataType: word16
T_549: (in di_11 + 0x0000 : word16)
  Class: Eq_549
  DataType: word16
  OrigDataType: word16
T_550: (in Mem9[es:di_11 + 0x0000:word16] : word16)
  Class: Eq_547
  DataType: word16
  OrigDataType: word16
T_551: (in 0x0002 : word16)
  Class: Eq_551
  DataType: word16
  OrigDataType: word16
T_552: (in di_11 + 0x0002 : word16)
  Class: Eq_534
  DataType: word16
  OrigDataType: word16
T_553: (in 0x0001 : word16)
  Class: Eq_553
  DataType: word16
  OrigDataType: word16
T_554: (in cx_12 - 0x0001 : word16)
  Class: Eq_536
  DataType: word16
  OrigDataType: word16
T_555: (in 0x0000 : word16)
  Class: Eq_536
  DataType: word16
  OrigDataType: word16
T_556: (in cx_12 == 0x0000 : bool)
  Class: Eq_556
  DataType: bool
  OrigDataType: bool
T_557: (in 0x09FA : word16)
  Class: Eq_146
  DataType: word16
  OrigDataType: word16
T_558: (in 0x00CD : word16)
  Class: Eq_145
  DataType: word16
  OrigDataType: word16
T_559: (in 0x0046 : word16)
  Class: Eq_559
  DataType: word16
  OrigDataType: word16
T_560: (in di_13 + 0x0046 : word16)
  Class: Eq_147
  DataType: word16
  OrigDataType: word16
T_561: (in 0x099B : word16)
  Class: Eq_146
  DataType: word16
  OrigDataType: word16
T_562: (in 0x005F : word16)
  Class: Eq_145
  DataType: word16
  OrigDataType: word16
T_563: (in di_23 : word16)
  Class: Eq_563
  DataType: word16
  OrigDataType: word16
T_564: (in al_24 : byte)
  Class: Eq_564
  DataType: byte
  OrigDataType: byte
T_565: (in bl_25 : byte)
  Class: Eq_565
  DataType: byte
  OrigDataType: byte
T_566: (in fn0C00_0949 : ptr32)
  Class: Eq_143
  DataType: (ptr (fn T_570 (T_538, T_539, T_540, T_95, T_96, T_567, T_568, T_569)))
  OrigDataType: (ptr (fn T_570 (T_538, T_539, T_540, T_95, T_96, T_567, T_568, T_569)))
T_567: (in out di_23 : ptr16)
  Class: Eq_150
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_568: (in out al_24 : ptr16)
  Class: Eq_151
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_569: (in out bl_25 : ptr16)
  Class: Eq_152
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_570: (in fn0C00_0949(cx_21, si_19, di_13, es, ds, out di_23, out al_24, out bl_25) : word16)
  Class: Eq_570
  DataType: word16
  OrigDataType: word16
T_571: (in al : byte)
  Class: Eq_571
  DataType: byte
  OrigDataType: byte
T_572: (in *alOut : byte)
  Class: Eq_571
  DataType: 
  OrigDataType: 
T_573: (in di : word16)
  Class: Eq_573
  DataType: 
  OrigDataType: 
T_574: (in *diOut : word16)
  Class: Eq_573
  DataType: 
  OrigDataType: 
T_575: (in bl : byte)
  Class: Eq_575
  DataType: 
  OrigDataType: 
T_576: (in *blOut : byte)
  Class: Eq_575
  DataType: 
  OrigDataType: 
T_577: (in dl : byte)
  Class: Eq_577
  DataType: 
  OrigDataType: 
T_578: (in 0x04 : byte)
  Class: Eq_578
  DataType: 
  OrigDataType: 
T_579: (in dl & 0x04 : byte)
  Class: Eq_579
  DataType: 
  OrigDataType: 
T_580: (in 0x00 : byte)
  Class: Eq_579
  DataType: 
  OrigDataType: 
T_581: (in (dl & 0x04) == 0x00 : bool)
  Class: Eq_581
  DataType: 
  OrigDataType: 
T_582: (in 0x40 : byte)
  Class: Eq_582
  DataType: 
  OrigDataType: 
T_583: (in dl & 0x40 : byte)
  Class: Eq_583
  DataType: 
  OrigDataType: 
T_584: (in 0x00 : byte)
  Class: Eq_583
  DataType: 
  OrigDataType: 
T_585: (in (dl & 0x40) == 0x00 : bool)
  Class: Eq_585
  DataType: 
  OrigDataType: 
T_586: (in 0x0000 : word16)
  Class: Eq_586
  DataType: 
  OrigDataType: 
T_587: (in *diOut : word16)
  Class: Eq_586
  DataType: 
  OrigDataType: 
T_588: (in cx_444 : word16)
  Class: Eq_588
  DataType: 
  OrigDataType: 
T_589: (in 0x07D0 : word16)
  Class: Eq_588
  DataType: 
  OrigDataType: 
T_590: (in ax_446 : word16)
  Class: Eq_590
  DataType: 
  OrigDataType: 
T_591: (in 0x00B1 : word16)
  Class: Eq_590
  DataType: 
  OrigDataType: 
T_592: (in al_449 : byte)
  Class: Eq_592
  DataType: 
  OrigDataType: 
T_593: (in 0xB1 : byte)
  Class: Eq_593
  DataType: 
  OrigDataType: 
T_594: (in *alOut : byte)
  Class: Eq_593
  DataType: 
  OrigDataType: 
T_595: (in 0x0001 : word16)
  Class: Eq_595
  DataType: 
  OrigDataType: 
T_596: (in bp & 0x0001 : word16)
  Class: Eq_596
  DataType: 
  OrigDataType: 
T_597: (in 0x0000 : word16)
  Class: Eq_596
  DataType: 
  OrigDataType: 
T_598: (in (bp & 0x0001) != 0x0000 : bool)
  Class: Eq_598
  DataType: 
  OrigDataType: 
T_599: (in 0x0000 : word16)
  Class: Eq_588
  DataType: 
  OrigDataType: 
T_600: (in cx_444 == 0x0000 : bool)
  Class: Eq_600
  DataType: 
  OrigDataType: 
T_601: (in 0x00B1 : word16)
  Class: Eq_601
  DataType: 
  OrigDataType: 
T_602: (in 0x00 : byte)
  Class: Eq_602
  DataType: 
  OrigDataType: 
T_603: (in ~0x00 : byte)
  Class: Eq_603
  DataType: 
  OrigDataType: 
T_604: (in DPB(0x00B1, ~0x00, 8, 8) : word16)
  Class: Eq_590
  DataType: 
  OrigDataType: 
T_605: (in 0x80 : byte)
  Class: Eq_605
  DataType: 
  OrigDataType: 
T_606: (in dl & 0x80 : byte)
  Class: Eq_606
  DataType: 
  OrigDataType: 
T_607: (in 0x00 : byte)
  Class: Eq_606
  DataType: 
  OrigDataType: 
T_608: (in (dl & 0x80) == 0x00 : bool)
  Class: Eq_608
  DataType: 
  OrigDataType: 
T_609: (in dx_ax_358 : word32)
  Class: Eq_609
  DataType: 
  OrigDataType: 
T_610: (in SEQ(dx, bp) : word32)
  Class: Eq_609
  DataType: 
  OrigDataType: 
T_611: (in bx_367 : word16)
  Class: Eq_611
  DataType: 
  OrigDataType: 
T_612: (in bx : word16)
  Class: Eq_612
  DataType: 
  OrigDataType: 
T_613: (in 0x00 : byte)
  Class: Eq_613
  DataType: 
  OrigDataType: 
T_614: (in DPB(bx, 0x00, 8, 8) : word16)
  Class: Eq_611
  DataType: 
  OrigDataType: 
T_615: (in di_355 : word16)
  Class: Eq_615
  DataType: 
  OrigDataType: 
T_616: (in 0x0000 : word16)
  Class: Eq_615
  DataType: 
  OrigDataType: 
T_617: (in si_356 : word16)
  Class: Eq_617
  DataType: 
  OrigDataType: 
T_618: (in 0x0FA0 : word16)
  Class: Eq_617
  DataType: 
  OrigDataType: 
T_619: (in 0x50 : byte)
  Class: Eq_619
  DataType: 
  OrigDataType: 
T_620: (in dx_ax_358 % 0x50 : uint16)
  Class: Eq_620
  DataType: 
  OrigDataType: 
T_621: (in (byte) (dx_ax_358 % 0x50) : byte)
  Class: Eq_577
  DataType: 
  OrigDataType: 
T_622: (in bl_372 : byte)
  Class: Eq_622
  DataType: 
  OrigDataType: 
T_623: (in 0x0002 : word16)
  Class: Eq_623
  DataType: 
  OrigDataType: 
T_624: (in bx_367 * 0x0002 : word16)
  Class: Eq_624
  DataType: 
  OrigDataType: 
T_625: (in (byte) (bx_367 * 0x0002) : byte)
  Class: Eq_625
  DataType: 
  OrigDataType: 
T_626: (in *blOut : byte)
  Class: Eq_625
  DataType: 
  OrigDataType: 
T_627: (in dh_375 : byte)
  Class: Eq_627
  DataType: 
  OrigDataType: 
T_628: (in 0x19 : byte)
  Class: Eq_627
  DataType: 
  OrigDataType: 
T_629: (in dx_ax_358 % 0x50 : uint16)
  Class: Eq_629
  DataType: 
  OrigDataType: 
T_630: (in 0x19 : byte)
  Class: Eq_630
  DataType: 
  OrigDataType: 
T_631: (in DPB(dx_ax_358 % 0x50, 0x19, 8, 8) : word16)
  Class: Eq_58
  DataType: 
  OrigDataType: 
T_632: (in ax_398 : word16)
  Class: Eq_632
  DataType: 
  OrigDataType: 
T_633: (in 0x0000 : word16)
  Class: Eq_633
  DataType: 
  OrigDataType: 
T_634: (in di_355 + 0x0000 : word16)
  Class: Eq_634
  DataType: 
  OrigDataType: 
T_635: (in Mem413[es:di_355 + 0x0000:word16] : word16)
  Class: Eq_632
  DataType: 
  OrigDataType: 
T_636: (in 0x0002 : word16)
  Class: Eq_636
  DataType: 
  OrigDataType: 
T_637: (in di_355 + 0x0002 : word16)
  Class: Eq_615
  DataType: 
  OrigDataType: 
T_638: (in cx_390 : word16)
  Class: Eq_611
  DataType: 
  OrigDataType: 
T_639: (in 0x0001 : word16)
  Class: Eq_639
  DataType: 
  OrigDataType: 
T_640: (in cx_390 - 0x0001 : word16)
  Class: Eq_611
  DataType: 
  OrigDataType: 
T_641: (in 0x0000 : word16)
  Class: Eq_611
  DataType: 
  OrigDataType: 
T_642: (in cx_390 != 0x0000 : bool)
  Class: Eq_642
  DataType: 
  OrigDataType: 
T_643: (in ah_400 : byte)
  Class: Eq_643
  DataType: 
  OrigDataType: 
T_644: (in 0xF0 : byte)
  Class: Eq_644
  DataType: 
  OrigDataType: 
T_645: (in ah_400 & 0xF0 : byte)
  Class: Eq_645
  DataType: 
  OrigDataType: 
T_646: (in 0x00 : byte)
  Class: Eq_645
  DataType: 
  OrigDataType: 
T_647: (in (ah_400 & 0xF0) != 0x00 : bool)
  Class: Eq_647
  DataType: 
  OrigDataType: 
T_648: (in cx_390 <u bx_367 : bool)
  Class: Eq_648
  DataType: 
  OrigDataType: 
T_649: (in bx_367 * 0x0002 : word16)
  Class: Eq_649
  DataType: 
  OrigDataType: 
T_650: (in 0x0EFE : word16)
  Class: Eq_650
  DataType: 
  OrigDataType: 
T_651: (in bx_367 * 0x0002 + 0x0EFE : word16)
  Class: Eq_651
  DataType: 
  OrigDataType: 
T_652: (in bx_367 * 0x0002 + 0x0EFE + si_356 : word16)
  Class: Eq_652
  DataType: 
  OrigDataType: 
T_653: (in Mem0[es:bx_367 * 0x0002 + 0x0EFE + si_356:word16] : word16)
  Class: Eq_632
  DataType: 
  OrigDataType: 
T_654: (in al_442 : byte)
  Class: Eq_654
  DataType: 
  OrigDataType: 
T_655: (in (byte) ax_398 : byte)
  Class: Eq_655
  DataType: 
  OrigDataType: 
T_656: (in *alOut : byte)
  Class: Eq_655
  DataType: 
  OrigDataType: 
T_657: (in bx_367 * 0x0002 : word16)
  Class: Eq_657
  DataType: 
  OrigDataType: 
T_658: (in 0x0F9E : word16)
  Class: Eq_658
  DataType: 
  OrigDataType: 
T_659: (in bx_367 * 0x0002 + 0x0F9E : word16)
  Class: Eq_659
  DataType: 
  OrigDataType: 
T_660: (in bx_367 * 0x0002 + 0x0F9E + si_356 : word16)
  Class: Eq_660
  DataType: 
  OrigDataType: 
T_661: (in Mem0[es:bx_367 * 0x0002 + 0x0F9E + si_356:word16] : word16)
  Class: Eq_632
  DataType: 
  OrigDataType: 
T_662: (in al_438 : byte)
  Class: Eq_662
  DataType: 
  OrigDataType: 
T_663: (in (byte) ax_398 : byte)
  Class: Eq_663
  DataType: 
  OrigDataType: 
T_664: (in *alOut : byte)
  Class: Eq_663
  DataType: 
  OrigDataType: 
T_665: (in 0x10 : byte)
  Class: Eq_665
  DataType: 
  OrigDataType: 
T_666: (in dl & 0x10 : byte)
  Class: Eq_666
  DataType: 
  OrigDataType: 
T_667: (in 0x00 : byte)
  Class: Eq_666
  DataType: 
  OrigDataType: 
T_668: (in (dl & 0x10) == 0x00 : bool)
  Class: Eq_668
  DataType: 
  OrigDataType: 
T_669: (in si_254 : word16)
  Class: Eq_669
  DataType: 
  OrigDataType: 
T_670: (in 0x0FA0 : word16)
  Class: Eq_669
  DataType: 
  OrigDataType: 
T_671: (in di_255 : word16)
  Class: Eq_671
  DataType: 
  OrigDataType: 
T_672: (in 0x0000 : word16)
  Class: Eq_671
  DataType: 
  OrigDataType: 
T_673: (in dh_256 : byte)
  Class: Eq_673
  DataType: 
  OrigDataType: 
T_674: (in 0x19 : byte)
  Class: Eq_673
  DataType: 
  OrigDataType: 
T_675: (in 0x19 : byte)
  Class: Eq_675
  DataType: 
  OrigDataType: 
T_676: (in DPB(dx, 0x19, 8, 8) : word16)
  Class: Eq_58
  DataType: 
  OrigDataType: 
T_677: (in bx_259 : word16)
  Class: Eq_677
  DataType: 
  OrigDataType: 
T_678: (in 0x0000 : word16)
  Class: Eq_677
  DataType: 
  OrigDataType: 
T_679: (in bh_260 : byte)
  Class: Eq_679
  DataType: 
  OrigDataType: 
T_680: (in 0x00 : byte)
  Class: Eq_679
  DataType: 
  OrigDataType: 
T_681: (in bl_315 : byte)
  Class: Eq_681
  DataType: 
  OrigDataType: 
T_682: (in bh_260 + dh_256 : byte)
  Class: Eq_682
  DataType: 
  OrigDataType: 
T_683: (in cl_310 : byte)
  Class: Eq_683
  DataType: 
  OrigDataType: 
T_684: (in bh_260 + dh_256 + cl_310 : byte)
  Class: Eq_684
  DataType: 
  OrigDataType: 
T_685: (in ~(bh_260 + dh_256 + cl_310) : byte)
  Class: Eq_681
  DataType: 
  OrigDataType: 
T_686: (in di_309 : word16)
  Class: Eq_671
  DataType: 
  OrigDataType: 
T_687: (in si_311 : word16)
  Class: Eq_669
  DataType: 
  OrigDataType: 
T_688: (in fn0C00_0EF2 : ptr32)
  Class: Eq_688
  DataType: 
  OrigDataType: 
T_689: (in signature of fn0C00_0EF2 : void)
  Class: Eq_688
  DataType: 
  OrigDataType: 
T_690: (in cx : word16)
  Class: Eq_690
  DataType: 
  OrigDataType: 
T_691: (in si : word16)
  Class: Eq_669
  DataType: 
  OrigDataType: 
T_692: (in di : word16)
  Class: Eq_671
  DataType: 
  OrigDataType: 
T_693: (in bl : byte)
  Class: Eq_693
  DataType: 
  OrigDataType: 
T_694: (in es : selector)
  Class: Eq_68
  DataType: 
  OrigDataType: 
T_695: (in ds : selector)
  Class: Eq_68
  DataType: 
  OrigDataType: 
T_696: (in diOut : ptr16)
  Class: Eq_696
  DataType: 
  OrigDataType: 
T_697: (in clOut : ptr16)
  Class: Eq_697
  DataType: 
  OrigDataType: 
T_698: (in ax_290 : word16)
  Class: Eq_690
  DataType: 
  OrigDataType: 
T_699: (in bl_298 : byte)
  Class: Eq_699
  DataType: 
  OrigDataType: 
T_700: (in 0x19 : byte)
  Class: Eq_700
  DataType: 
  OrigDataType: 
T_701: (in bl_298 & 0x19 : byte)
  Class: Eq_693
  DataType: 
  OrigDataType: 
T_702: (in out di_309 : ptr16)
  Class: Eq_696
  DataType: 
  OrigDataType: 
T_703: (in out cl_310 : ptr16)
  Class: Eq_697
  DataType: 
  OrigDataType: 
T_704: (in fn0C00_0EF2(ax_290, si_254, di_255, bl_298 & 0x19, es, es, out di_309, out cl_310) : word16)
  Class: Eq_669
  DataType: 
  OrigDataType: 
T_705: (in 0x19 : byte)
  Class: Eq_705
  DataType: 
  OrigDataType: 
T_706: (in bl_315 & 0x19 : byte)
  Class: Eq_706
  DataType: 
  OrigDataType: 
T_707: (in DPB(bx_259, bl_315 & 0x19, 0, 8) : word16)
  Class: Eq_707
  DataType: 
  OrigDataType: 
T_708: (in DPB(bx_259, bl_315 & 0x19, 0, 8) + dx : word16)
  Class: Eq_708
  DataType: 
  OrigDataType: 
T_709: (in DPB(bx_259, bl_315 & 0x19, 0, 8) + dx + dx : word16)
  Class: Eq_677
  DataType: 
  OrigDataType: 
T_710: (in 0x01 : byte)
  Class: Eq_710
  DataType: 
  OrigDataType: 
T_711: (in dh_256 - 0x01 : byte)
  Class: Eq_673
  DataType: 
  OrigDataType: 
T_712: (in cl_323 : byte)
  Class: Eq_712
  DataType: 
  OrigDataType: 
T_713: (in fn0C00_0EF2 : ptr32)
  Class: Eq_688
  DataType: 
  OrigDataType: 
T_714: (in 0x0050 : word16)
  Class: Eq_714
  DataType: 
  OrigDataType: 
T_715: (in 0x0050 - ax_290 : word16)
  Class: Eq_690
  DataType: 
  OrigDataType: 
T_716: (in bl_315 & 0x19 : byte)
  Class: Eq_693
  DataType: 
  OrigDataType: 
T_717: (in out di_255 : ptr16)
  Class: Eq_696
  DataType: 
  OrigDataType: 
T_718: (in out cl_323 : ptr16)
  Class: Eq_697
  DataType: 
  OrigDataType: 
T_719: (in fn0C00_0EF2(0x0050 - ax_290, si_311, di_309, bl_315 & 0x19, es, es, out di_255, out cl_323) : word16)
  Class: Eq_669
  DataType: 
  OrigDataType: 
T_720: (in bl_327 : byte)
  Class: Eq_720
  DataType: 
  OrigDataType: 
T_721: (in (byte) bx_259 : byte)
  Class: Eq_721
  DataType: 
  OrigDataType: 
T_722: (in *blOut : byte)
  Class: Eq_721
  DataType: 
  OrigDataType: 
T_723: (in SLICE(bx_259, byte, 8) : byte)
  Class: Eq_679
  DataType: 
  OrigDataType: 
T_724: (in DPB(dx, dh_256, 8, 8) : word16)
  Class: Eq_58
  DataType: 
  OrigDataType: 
T_725: (in 0x00 : byte)
  Class: Eq_673
  DataType: 
  OrigDataType: 
T_726: (in dh_256 != 0x00 : bool)
  Class: Eq_726
  DataType: 
  OrigDataType: 
T_727: (in 0x0050 : word16)
  Class: Eq_690
  DataType: 
  OrigDataType: 
T_728: (in al_344 : byte)
  Class: Eq_728
  DataType: 
  OrigDataType: 
T_729: (in 0x50 : byte)
  Class: Eq_729
  DataType: 
  OrigDataType: 
T_730: (in *alOut : byte)
  Class: Eq_729
  DataType: 
  OrigDataType: 
T_731: (in di_124 : word16)
  Class: Eq_731
  DataType: 
  OrigDataType: 
T_732: (in 0x0000 : word16)
  Class: Eq_731
  DataType: 
  OrigDataType: 
T_733: (in si_125 : word16)
  Class: Eq_733
  DataType: 
  OrigDataType: 
T_734: (in 0x0FA0 : word16)
  Class: Eq_733
  DataType: 
  OrigDataType: 
T_735: (in cx_126 : word16)
  Class: Eq_735
  DataType: 
  OrigDataType: 
T_736: (in 0x07D0 : word16)
  Class: Eq_735
  DataType: 
  OrigDataType: 
T_737: (in 0x01 : byte)
  Class: Eq_737
  DataType: 
  OrigDataType: 
T_738: (in dl & 0x01 : byte)
  Class: Eq_738
  DataType: 
  OrigDataType: 
T_739: (in 0x00 : byte)
  Class: Eq_738
  DataType: 
  OrigDataType: 
T_740: (in (dl & 0x01) != 0x00 : bool)
  Class: Eq_740
  DataType: 
  OrigDataType: 
T_741: (in di_182 : word16)
  Class: Eq_741
  DataType: 
  OrigDataType: 
T_742: (in 0x0001 : word16)
  Class: Eq_741
  DataType: 
  OrigDataType: 
T_743: (in dx_183 : word16)
  Class: Eq_743
  DataType: 
  OrigDataType: 
T_744: (in 0x004E : word16)
  Class: Eq_743
  DataType: 
  OrigDataType: 
T_745: (in dl_184 : byte)
  Class: Eq_745
  DataType: 
  OrigDataType: 
T_746: (in 0x4E : byte)
  Class: Eq_745
  DataType: 
  OrigDataType: 
T_747: (in 0x0002 : word16)
  Class: Eq_747
  DataType: 
  OrigDataType: 
T_748: (in si_125 + 0x0002 : word16)
  Class: Eq_733
  DataType: 
  OrigDataType: 
T_749: (in ax_160 : word16)
  Class: Eq_749
  DataType: 
  OrigDataType: 
T_750: (in 0x0000 : word16)
  Class: Eq_750
  DataType: 
  OrigDataType: 
T_751: (in si_125 + 0x0000 : word16)
  Class: Eq_751
  DataType: 
  OrigDataType: 
T_752: (in Mem0[es:si_125 + 0x0000:word16] : word16)
  Class: Eq_749
  DataType: 
  OrigDataType: 
T_753: (in bl_168 : byte)
  Class: Eq_753
  DataType: 
  OrigDataType: 
T_754: (in bp + si_125 : word16)
  Class: Eq_754
  DataType: 
  OrigDataType: 
T_755: (in bp + si_125 | cx_126 : word16)
  Class: Eq_755
  DataType: 
  OrigDataType: 
T_756: (in (bp + si_125 | cx_126) + bp : word16)
  Class: Eq_756
  DataType: 
  OrigDataType: 
T_757: (in 0x0002 : word16)
  Class: Eq_757
  DataType: 
  OrigDataType: 
T_758: (in ((bp + si_125 | cx_126) + bp) * 0x0002 : word16)
  Class: Eq_758
  DataType: 
  OrigDataType: 
T_759: (in (byte) (((bp + si_125 | cx_126) + bp) * 0x0002) : byte)
  Class: Eq_753
  DataType: 
  OrigDataType: 
T_760: (in SLICE(ax_160, byte, 8) : byte)
  Class: Eq_760
  DataType: 
  OrigDataType: 
T_761: (in 0x1B : byte)
  Class: Eq_761
  DataType: 
  OrigDataType: 
T_762: (in bl_168 & 0x1B : byte)
  Class: Eq_762
  DataType: 
  OrigDataType: 
T_763: (in SLICE(ax_160, byte, 8) | bl_168 & 0x1B : byte)
  Class: Eq_763
  DataType: 
  OrigDataType: 
T_764: (in DPB(ax_160, SLICE(ax_160, byte, 8) | bl_168 & 0x1B, 8, 8) : word16)
  Class: Eq_764
  DataType: 
  OrigDataType: 
T_765: (in 0x0000 : word16)
  Class: Eq_765
  DataType: 
  OrigDataType: 
T_766: (in di_124 + 0x0000 : word16)
  Class: Eq_766
  DataType: 
  OrigDataType: 
T_767: (in Mem176[es:di_124 + 0x0000:word16] : word16)
  Class: Eq_764
  DataType: 
  OrigDataType: 
T_768: (in al_162 : byte)
  Class: Eq_768
  DataType: 
  OrigDataType: 
T_769: (in (byte) ax_160 : byte)
  Class: Eq_769
  DataType: 
  OrigDataType: 
T_770: (in *alOut : byte)
  Class: Eq_769
  DataType: 
  OrigDataType: 
T_771: (in bl_169 : byte)
  Class: Eq_771
  DataType: 
  OrigDataType: 
T_772: (in bl_168 & 0x1B : byte)
  Class: Eq_772
  DataType: 
  OrigDataType: 
T_773: (in *blOut : byte)
  Class: Eq_772
  DataType: 
  OrigDataType: 
T_774: (in 0x0002 : word16)
  Class: Eq_774
  DataType: 
  OrigDataType: 
T_775: (in di_124 + 0x0002 : word16)
  Class: Eq_731
  DataType: 
  OrigDataType: 
T_776: (in 0x0001 : word16)
  Class: Eq_776
  DataType: 
  OrigDataType: 
T_777: (in cx_126 - 0x0001 : word16)
  Class: Eq_735
  DataType: 
  OrigDataType: 
T_778: (in 0x0000 : word16)
  Class: Eq_735
  DataType: 
  OrigDataType: 
T_779: (in cx_126 != 0x0000 : bool)
  Class: Eq_779
  DataType: 
  OrigDataType: 
T_780: (in di_149 : word16)
  Class: Eq_780
  DataType: 
  OrigDataType: 
T_781: (in *diOut : word16)
  Class: Eq_573
  DataType: 
  OrigDataType: 
T_782: (in ax_272 : word16)
  Class: Eq_782
  DataType: 
  OrigDataType: 
T_783: (in 0x0002 : word16)
  Class: Eq_783
  DataType: 
  OrigDataType: 
T_784: (in bp * 0x0002 : word16)
  Class: Eq_782
  DataType: 
  OrigDataType: 
T_785: (in ax_289 : word16)
  Class: Eq_785
  DataType: 
  OrigDataType: 
T_786: (in 0x0002 : word16)
  Class: Eq_786
  DataType: 
  OrigDataType: 
T_787: (in ax_272 * 0x0002 : word16)
  Class: Eq_787
  DataType: 
  OrigDataType: 
T_788: (in ax_272 * 0x0002 : word16)
  Class: Eq_788
  DataType: 
  OrigDataType: 
T_789: (in (byte) (ax_272 * 0x0002) : byte)
  Class: Eq_789
  DataType: 
  OrigDataType: 
T_790: (in (byte) (ax_272 * 0x0002) + dh_256 : byte)
  Class: Eq_790
  DataType: 
  OrigDataType: 
T_791: (in (byte) (ax_272 * 0x0002) + dh_256 + bh_260 : byte)
  Class: Eq_791
  DataType: 
  OrigDataType: 
T_792: (in DPB(ax_272 * 0x0002, (byte) (ax_272 * 0x0002) + dh_256 + bh_260, 0, 8) : word16)
  Class: Eq_792
  DataType: 
  OrigDataType: 
T_793: (in 0x0002 : word16)
  Class: Eq_793
  DataType: 
  OrigDataType: 
T_794: (in DPB(ax_272 * 0x0002, (byte) (ax_272 * 0x0002) + dh_256 + bh_260, 0, 8) * 0x0002 : word16)
  Class: Eq_794
  DataType: 
  OrigDataType: 
T_795: (in 0x0002 : word16)
  Class: Eq_795
  DataType: 
  OrigDataType: 
T_796: (in DPB(ax_272 * 0x0002, (byte) (ax_272 * 0x0002) + dh_256 + bh_260, 0, 8) * 0x0002 * 0x0002 : word16)
  Class: Eq_796
  DataType: 
  OrigDataType: 
T_797: (in (byte) (DPB(ax_272 * 0x0002, (byte) (ax_272 * 0x0002) + dh_256 + bh_260, 0, 8) * 0x0002 * 0x0002) : byte)
  Class: Eq_797
  DataType: 
  OrigDataType: 
T_798: (in (int16) (byte) (DPB(ax_272 * 0x0002, (byte) (ax_272 * 0x0002) + dh_256 + bh_260, 0, 8) * 0x0002 * 0x0002) : int16)
  Class: Eq_798
  DataType: 
  OrigDataType: 
T_799: (in 0x00 : byte)
  Class: Eq_799
  DataType: 
  OrigDataType: 
T_800: (in DPB((int16) (byte) (DPB(ax_272 * 0x0002, (byte) (ax_272 * 0x0002) + dh_256 + bh_260, 0, 8) * 0x0002 * 0x0002), 0x00, 8, 8) : word16)
  Class: Eq_785
  DataType: 
  OrigDataType: 
T_801: (in 0x0008 : word16)
  Class: Eq_801
  DataType: 
  OrigDataType: 
T_802: (in ax_289 + 0x0008 : word16)
  Class: Eq_690
  DataType: 
  OrigDataType: 
T_803: (in al_293 : byte)
  Class: Eq_803
  DataType: 
  OrigDataType: 
T_804: (in ax_289 + 0x0008 : word16)
  Class: Eq_804
  DataType: 
  OrigDataType: 
T_805: (in (byte) (ax_289 + 0x0008) : byte)
  Class: Eq_805
  DataType: 
  OrigDataType: 
T_806: (in *alOut : byte)
  Class: Eq_805
  DataType: 
  OrigDataType: 
T_807: (in bh_260 + dh_256 : byte)
  Class: Eq_807
  DataType: 
  OrigDataType: 
T_808: (in (byte) bp : byte)
  Class: Eq_808
  DataType: 
  OrigDataType: 
T_809: (in bh_260 + dh_256 + (byte) bp : byte)
  Class: Eq_699
  DataType: 
  OrigDataType: 
T_810: (in 0xFFB8 : word16)
  Class: Eq_785
  DataType: 
  OrigDataType: 
T_811: (in ax_289 <u 0xFFB8 : bool)
  Class: Eq_811
  DataType: 
  OrigDataType: 
T_812: (in *diOut : word16)
  Class: Eq_573
  DataType: 
  OrigDataType: 
T_813: (in ax_212 : word16)
  Class: Eq_813
  DataType: 
  OrigDataType: 
T_814: (in ax_197 : word16)
  Class: Eq_813
  DataType: 
  OrigDataType: 
T_815: (in bx_202 : word16)
  Class: Eq_743
  DataType: 
  OrigDataType: 
T_816: (in ax_197 + bx_202 : word16)
  Class: Eq_816
  DataType: 
  OrigDataType: 
T_817: (in ax_197 + bx_202 + bp : word16)
  Class: Eq_813
  DataType: 
  OrigDataType: 
T_818: (in SLICE(ax_212, byte, 8) : byte)
  Class: Eq_818
  DataType: 
  OrigDataType: 
T_819: (in 0x19 : byte)
  Class: Eq_819
  DataType: 
  OrigDataType: 
T_820: (in SLICE(ax_212, byte, 8) & 0x19 : byte)
  Class: Eq_820
  DataType: 
  OrigDataType: 
T_821: (in 0x0F : byte)
  Class: Eq_821
  DataType: 
  OrigDataType: 
T_822: (in SLICE(ax_212, byte, 8) & 0x19 ^ 0x0F : byte)
  Class: Eq_822
  DataType: 
  OrigDataType: 
T_823: (in 0x0000 : word16)
  Class: Eq_823
  DataType: 
  OrigDataType: 
T_824: (in di_182 + 0x0000 : word16)
  Class: Eq_824
  DataType: 
  OrigDataType: 
T_825: (in Mem223[es:di_182 + 0x0000:byte] : byte)
  Class: Eq_822
  DataType: 
  OrigDataType: 
T_826: (in bx_202 + dx_183 : word16)
  Class: Eq_743
  DataType: 
  OrigDataType: 
T_827: (in bl_215 : byte)
  Class: Eq_827
  DataType: 
  OrigDataType: 
T_828: (in (byte) bx_202 : byte)
  Class: Eq_828
  DataType: 
  OrigDataType: 
T_829: (in *blOut : byte)
  Class: Eq_828
  DataType: 
  OrigDataType: 
T_830: (in al_228 : byte)
  Class: Eq_830
  DataType: 
  OrigDataType: 
T_831: (in (byte) ax_212 : byte)
  Class: Eq_831
  DataType: 
  OrigDataType: 
T_832: (in *alOut : byte)
  Class: Eq_831
  DataType: 
  OrigDataType: 
T_833: (in 0x0001 : word16)
  Class: Eq_833
  DataType: 
  OrigDataType: 
T_834: (in di_182 + 0x0001 : word16)
  Class: Eq_834
  DataType: 
  OrigDataType: 
T_835: (in 0x0001 : word16)
  Class: Eq_835
  DataType: 
  OrigDataType: 
T_836: (in di_182 + 0x0001 + 0x0001 : word16)
  Class: Eq_741
  DataType: 
  OrigDataType: 
T_837: (in 0x0001 : word16)
  Class: Eq_837
  DataType: 
  OrigDataType: 
T_838: (in cx_126 - 0x0001 : word16)
  Class: Eq_735
  DataType: 
  OrigDataType: 
T_839: (in 0x0000 : word16)
  Class: Eq_735
  DataType: 
  OrigDataType: 
T_840: (in cx_126 != 0x0000 : bool)
  Class: Eq_840
  DataType: 
  OrigDataType: 
T_841: (in 0x03 : byte)
  Class: Eq_841
  DataType: 
  OrigDataType: 
T_842: (in dl_184 - 0x03 : byte)
  Class: Eq_745
  DataType: 
  OrigDataType: 
T_843: (in DPB(dx_183, dl_184, 0, 8) : word16)
  Class: Eq_743
  DataType: 
  OrigDataType: 
T_844: (in 0x00 : byte)
  Class: Eq_745
  DataType: 
  OrigDataType: 
T_845: (in dl_184 != 0x00 : bool)
  Class: Eq_845
  DataType: 
  OrigDataType: 
T_846: (in 0x0002 : word16)
  Class: Eq_846
  DataType: 
  OrigDataType: 
T_847: (in bp * 0x0002 : word16)
  Class: Eq_813
  DataType: 
  OrigDataType: 
T_848: (in 0x50 : byte)
  Class: Eq_848
  DataType: 
  OrigDataType: 
T_849: (in DPB(cx_126, 0x50, 0, 8) : word16)
  Class: Eq_735
  DataType: 
  OrigDataType: 
T_850: (in 0x0000 : word16)
  Class: Eq_850
  DataType: 
  OrigDataType: 
T_851: (in si_356 + 0x0000 : word16)
  Class: Eq_851
  DataType: 
  OrigDataType: 
T_852: (in Mem0[es:si_356 + 0x0000:word16] : word16)
  Class: Eq_632
  DataType: 
  OrigDataType: 
T_853: (in SLICE(ax_398, byte, 8) : byte)
  Class: Eq_643
  DataType: 
  OrigDataType: 
T_854: (in al_401 : byte)
  Class: Eq_854
  DataType: 
  OrigDataType: 
T_855: (in (byte) ax_398 : byte)
  Class: Eq_854
  DataType: 
  OrigDataType: 
T_856: (in *alOut : byte)
  Class: Eq_854
  DataType: 
  OrigDataType: 
T_857: (in 0x0002 : word16)
  Class: Eq_857
  DataType: 
  OrigDataType: 
T_858: (in si_356 + 0x0002 : word16)
  Class: Eq_617
  DataType: 
  OrigDataType: 
T_859: (in 0x20 : byte)
  Class: Eq_854
  DataType: 
  OrigDataType: 
T_860: (in al_401 != 0x20 : bool)
  Class: Eq_860
  DataType: 
  OrigDataType: 
T_861: (in 0x01 : byte)
  Class: Eq_861
  DataType: 
  OrigDataType: 
T_862: (in dh_375 - 0x01 : byte)
  Class: Eq_627
  DataType: 
  OrigDataType: 
T_863: (in DPB(dx, dh_375, 8, 8) : word16)
  Class: Eq_58
  DataType: 
  OrigDataType: 
T_864: (in 0x00 : byte)
  Class: Eq_627
  DataType: 
  OrigDataType: 
T_865: (in dh_375 != 0x00 : bool)
  Class: Eq_865
  DataType: 
  OrigDataType: 
T_866: (in 0x0050 : word16)
  Class: Eq_611
  DataType: 
  OrigDataType: 
T_867: (in *diOut : word16)
  Class: Eq_573
  DataType: 
  OrigDataType: 
T_868: (in 0x0000 : word16)
  Class: Eq_868
  DataType: 
  OrigDataType: 
T_869: (in di + 0x0000 : word16)
  Class: Eq_869
  DataType: 
  OrigDataType: 
T_870: (in Mem459[es:di + 0x0000:word16] : word16)
  Class: Eq_590
  DataType: 
  OrigDataType: 
T_871: (in 0x0002 : word16)
  Class: Eq_871
  DataType: 
  OrigDataType: 
T_872: (in di + 0x0002 : word16)
  Class: Eq_872
  DataType: 
  OrigDataType: 
T_873: (in *diOut : word16)
  Class: Eq_872
  DataType: 
  OrigDataType: 
T_874: (in 0x0001 : word16)
  Class: Eq_874
  DataType: 
  OrigDataType: 
T_875: (in cx_444 - 0x0001 : word16)
  Class: Eq_588
  DataType: 
  OrigDataType: 
T_876: (in __outb : ptr32)
  Class: Eq_876
  DataType: 
  OrigDataType: 
T_877: (in 0x0388 : word16)
  Class: Eq_877
  DataType: 
  OrigDataType: 
T_878: (in __outb(0x0388, al) : void)
  Class: Eq_878
  DataType: 
  OrigDataType: 
T_879: (in cx_13 : word16)
  Class: Eq_879
  DataType: 
  OrigDataType: 
T_880: (in 0x0006 : word16)
  Class: Eq_879
  DataType: 
  OrigDataType: 
T_881: (in __inb : ptr32)
  Class: Eq_881
  DataType: 
  OrigDataType: 
T_882: (in 0x0388 : word16)
  Class: Eq_882
  DataType: 
  OrigDataType: 
T_883: (in __inb(0x0388) : byte)
  Class: Eq_883
  DataType: 
  OrigDataType: 
T_884: (in 0x0001 : word16)
  Class: Eq_884
  DataType: 
  OrigDataType: 
T_885: (in cx_13 - 0x0001 : word16)
  Class: Eq_879
  DataType: 
  OrigDataType: 
T_886: (in 0x0000 : word16)
  Class: Eq_879
  DataType: 
  OrigDataType: 
T_887: (in cx_13 != 0x0000 : bool)
  Class: Eq_887
  DataType: 
  OrigDataType: 
T_888: (in __outb : ptr32)
  Class: Eq_888
  DataType: 
  OrigDataType: 
T_889: (in 0x0389 : word16)
  Class: Eq_889
  DataType: 
  OrigDataType: 
T_890: (in __outb(0x0389, ah) : void)
  Class: Eq_890
  DataType: 
  OrigDataType: 
T_891: (in cx_27 : word16)
  Class: Eq_891
  DataType: 
  OrigDataType: 
T_892: (in 0x23 : byte)
  Class: Eq_892
  DataType: 
  OrigDataType: 
T_893: (in DPB(cx_13, 0x23, 0, 8) : word16)
  Class: Eq_891
  DataType: 
  OrigDataType: 
T_894: (in __inb : ptr32)
  Class: Eq_894
  DataType: 
  OrigDataType: 
T_895: (in 0x0388 : word16)
  Class: Eq_895
  DataType: 
  OrigDataType: 
T_896: (in __inb(0x0388) : byte)
  Class: Eq_896
  DataType: 
  OrigDataType: 
T_897: (in 0x0001 : word16)
  Class: Eq_897
  DataType: 
  OrigDataType: 
T_898: (in cx_27 - 0x0001 : word16)
  Class: Eq_891
  DataType: 
  OrigDataType: 
T_899: (in 0x0000 : word16)
  Class: Eq_891
  DataType: 
  OrigDataType: 
T_900: (in cx_27 != 0x0000 : bool)
  Class: Eq_900
  DataType: 
  OrigDataType: 
T_901: (in ax : word16)
  Class: Eq_901
  DataType: 
  OrigDataType: 
T_902: (in (byte) ax : byte)
  Class: Eq_902
  DataType: 
  OrigDataType: 
T_903: (in *diOut : word16)
  Class: Eq_147
  DataType: 
  OrigDataType: 
T_904: (in bl : byte)
  Class: Eq_904
  DataType: 
  OrigDataType: 
T_905: (in *blOut : byte)
  Class: Eq_904
  DataType: 
  OrigDataType: 
T_906: (in dx_136 : word16)
  Class: Eq_147
  DataType: 
  OrigDataType: 
T_907: (in ax_101 : word16)
  Class: Eq_907
  DataType: 
  OrigDataType: 
T_908: (in 0x0000 : word16)
  Class: Eq_907
  DataType: 
  OrigDataType: 
T_909: (in ah_22 : byte)
  Class: Eq_909
  DataType: 
  OrigDataType: 
T_910: (in 0x00 : byte)
  Class: Eq_909
  DataType: 
  OrigDataType: 
T_911: (in al_32 : byte)
  Class: Eq_911
  DataType: 
  OrigDataType: 
T_912: (in 0x10 : byte)
  Class: Eq_911
  DataType: 
  OrigDataType: 
T_913: (in al_32 >=u 0x10 : bool)
  Class: Eq_913
  DataType: 
  OrigDataType: 
T_914: (in 0x0000 : word16)
  Class: Eq_914
  DataType: 
  OrigDataType: 
T_915: (in di + 0x0000 : word16)
  Class: Eq_915
  DataType: 
  OrigDataType: 
T_916: (in Mem68[es:di + 0x0000:word16] : word16)
  Class: Eq_907
  DataType: 
  OrigDataType: 
T_917: (in 0x0002 : word16)
  Class: Eq_917
  DataType: 
  OrigDataType: 
T_918: (in di + 0x0002 : word16)
  Class: Eq_918
  DataType: 
  OrigDataType: 
T_919: (in *diOut : word16)
  Class: Eq_918
  DataType: 
  OrigDataType: 
T_920: (in 0x0000 : word16)
  Class: Eq_920
  DataType: 
  OrigDataType: 
T_921: (in si + 0x0000 : word16)
  Class: Eq_921
  DataType: 
  OrigDataType: 
T_922: (in Mem0[ds:si + 0x0000:byte] : byte)
  Class: Eq_911
  DataType: 
  OrigDataType: 
T_923: (in *alOut : byte)
  Class: Eq_911
  DataType: 
  OrigDataType: 
T_924: (in DPB(ax_101, al_32, 0, 8) : word16)
  Class: Eq_907
  DataType: 
  OrigDataType: 
T_925: (in 0x0001 : word16)
  Class: Eq_925
  DataType: 
  OrigDataType: 
T_926: (in si + 0x0001 : word16)
  Class: Eq_146
  DataType: 
  OrigDataType: 
T_927: (in 0x20 : byte)
  Class: Eq_911
  DataType: 
  OrigDataType: 
T_928: (in al_32 <u 0x20 : bool)
  Class: Eq_928
  DataType: 
  OrigDataType: 
T_929: (in 0x18 : byte)
  Class: Eq_911
  DataType: 
  OrigDataType: 
T_930: (in al_32 == 0x18 : bool)
  Class: Eq_930
  DataType: 
  OrigDataType: 
T_931: (in 0xF0 : byte)
  Class: Eq_931
  DataType: 
  OrigDataType: 
T_932: (in ah_22 & 0xF0 : byte)
  Class: Eq_932
  DataType: 
  OrigDataType: 
T_933: (in ah_22 & 0xF0 | al_32 : byte)
  Class: Eq_909
  DataType: 
  OrigDataType: 
T_934: (in DPB(ax_101, ah_22, 8, 8) : word16)
  Class: Eq_907
  DataType: 
  OrigDataType: 
T_935: (in 0x0001 : word16)
  Class: Eq_935
  DataType: 
  OrigDataType: 
T_936: (in cx - 0x0001 : word16)
  Class: Eq_145
  DataType: 
  OrigDataType: 
T_937: (in 0x0000 : word16)
  Class: Eq_145
  DataType: 
  OrigDataType: 
T_938: (in cx != 0x0000 : bool)
  Class: Eq_938
  DataType: 
  OrigDataType: 
T_939: (in 0x00A0 : word16)
  Class: Eq_939
  DataType: 
  OrigDataType: 
T_940: (in dx_136 + 0x00A0 : word16)
  Class: Eq_147
  DataType: 
  OrigDataType: 
T_941: (in *diOut : word16)
  Class: Eq_147
  DataType: 
  OrigDataType: 
T_942: (in al_32 >=u 0x18 : bool)
  Class: Eq_942
  DataType: 
  OrigDataType: 
T_943: (in bx_103 : word16)
  Class: Eq_145
  DataType: 
  OrigDataType: 
T_944: (in bl_95 : byte)
  Class: Eq_944
  DataType: 
  OrigDataType: 
T_945: (in (byte) cx : byte)
  Class: Eq_945
  DataType: 
  OrigDataType: 
T_946: (in *blOut : byte)
  Class: Eq_945
  DataType: 
  OrigDataType: 
T_947: (in 0x0001 : word16)
  Class: Eq_947
  DataType: 
  OrigDataType: 
T_948: (in si + 0x0001 : word16)
  Class: Eq_146
  DataType: 
  OrigDataType: 
T_949: (in cx_99 : word16)
  Class: Eq_949
  DataType: 
  OrigDataType: 
T_950: (in 0x0000 : word16)
  Class: Eq_950
  DataType: 
  OrigDataType: 
T_951: (in si + 0x0000 : word16)
  Class: Eq_951
  DataType: 
  OrigDataType: 
T_952: (in Mem0[ds:si + 0x0000:byte] : byte)
  Class: Eq_952
  DataType: 
  OrigDataType: 
T_953: (in DPB(cx, Mem0[ds:si + 0x0000:byte], 0, 8) : word16)
  Class: Eq_949
  DataType: 
  OrigDataType: 
T_954: (in al_100 : byte)
  Class: Eq_954
  DataType: 
  OrigDataType: 
T_955: (in 0x20 : byte)
  Class: Eq_955
  DataType: 
  OrigDataType: 
T_956: (in *alOut : byte)
  Class: Eq_955
  DataType: 
  OrigDataType: 
T_957: (in 0x20 : byte)
  Class: Eq_957
  DataType: 
  OrigDataType: 
T_958: (in DPB(ax_101, 0x20, 0, 8) : word16)
  Class: Eq_907
  DataType: 
  OrigDataType: 
T_959: (in 0x19 : byte)
  Class: Eq_911
  DataType: 
  OrigDataType: 
T_960: (in al_32 == 0x19 : bool)
  Class: Eq_960
  DataType: 
  OrigDataType: 
T_961: (in al_86 : byte)
  Class: Eq_961
  DataType: 
  OrigDataType: 
T_962: (in 0x10 : byte)
  Class: Eq_962
  DataType: 
  OrigDataType: 
T_963: (in al_32 - 0x10 : byte)
  Class: Eq_963
  DataType: 
  OrigDataType: 
T_964: (in 0x02 : byte)
  Class: Eq_964
  DataType: 
  OrigDataType: 
T_965: (in (al_32 - 0x10) * 0x02 : byte)
  Class: Eq_965
  DataType: 
  OrigDataType: 
T_966: (in 0x02 : byte)
  Class: Eq_966
  DataType: 
  OrigDataType: 
T_967: (in (al_32 - 0x10) * 0x02 * 0x02 : byte)
  Class: Eq_967
  DataType: 
  OrigDataType: 
T_968: (in 0x02 : byte)
  Class: Eq_968
  DataType: 
  OrigDataType: 
T_969: (in (al_32 - 0x10) * 0x02 * 0x02 * 0x02 : byte)
  Class: Eq_961
  DataType: 
  OrigDataType: 
T_970: (in 0x8F : byte)
  Class: Eq_970
  DataType: 
  OrigDataType: 
T_971: (in ah_22 & 0x8F : byte)
  Class: Eq_971
  DataType: 
  OrigDataType: 
T_972: (in 0x02 : byte)
  Class: Eq_972
  DataType: 
  OrigDataType: 
T_973: (in al_86 * 0x02 : byte)
  Class: Eq_973
  DataType: 
  OrigDataType: 
T_974: (in ah_22 & 0x8F | al_86 * 0x02 : byte)
  Class: Eq_909
  DataType: 
  OrigDataType: 
T_975: (in al_87 : byte)
  Class: Eq_975
  DataType: 
  OrigDataType: 
T_976: (in al_86 * 0x02 : byte)
  Class: Eq_976
  DataType: 
  OrigDataType: 
T_977: (in *alOut : byte)
  Class: Eq_976
  DataType: 
  OrigDataType: 
T_978: (in DPB(ax_101, ah_22, 8, 8) : word16)
  Class: Eq_907
  DataType: 
  OrigDataType: 
T_979: (in cx_110 : word16)
  Class: Eq_979
  DataType: 
  OrigDataType: 
T_980: (in 0x00 : byte)
  Class: Eq_980
  DataType: 
  OrigDataType: 
T_981: (in DPB(cx_99, 0x00, 8, 8) : word16)
  Class: Eq_981
  DataType: 
  OrigDataType: 
T_982: (in 0x0001 : word16)
  Class: Eq_982
  DataType: 
  OrigDataType: 
T_983: (in DPB(cx_99, 0x00, 8, 8) + 0x0001 : word16)
  Class: Eq_979
  DataType: 
  OrigDataType: 
T_984: (in al_130 : byte)
  Class: Eq_984
  DataType: 
  OrigDataType: 
T_985: (in si + 0x0001 : word16)
  Class: Eq_985
  DataType: 
  OrigDataType: 
T_986: (in Mem0[ds:si + 0x0001:byte] : byte)
  Class: Eq_984
  DataType: 
  OrigDataType: 
T_987: (in *alOut : byte)
  Class: Eq_984
  DataType: 
  OrigDataType: 
T_988: (in 0x0001 : word16)
  Class: Eq_988
  DataType: 
  OrigDataType: 
T_989: (in cx - 0x0001 : word16)
  Class: Eq_145
  DataType: 
  OrigDataType: 
T_990: (in DPB(ax_101, al_130, 0, 8) : word16)
  Class: Eq_907
  DataType: 
  OrigDataType: 
T_991: (in 0x0002 : word16)
  Class: Eq_991
  DataType: 
  OrigDataType: 
T_992: (in si + 0x0002 : word16)
  Class: Eq_146
  DataType: 
  OrigDataType: 
T_993: (in bl_134 : byte)
  Class: Eq_993
  DataType: 
  OrigDataType: 
T_994: (in (byte) bx_103 : byte)
  Class: Eq_994
  DataType: 
  OrigDataType: 
T_995: (in *blOut : byte)
  Class: Eq_994
  DataType: 
  OrigDataType: 
T_996: (in cx_124 : word16)
  Class: Eq_996
  DataType: 
  OrigDataType: 
T_997: (in 0x0001 : word16)
  Class: Eq_997
  DataType: 
  OrigDataType: 
T_998: (in bx_103 - 0x0001 : word16)
  Class: Eq_996
  DataType: 
  OrigDataType: 
T_999: (in 0x0001 : word16)
  Class: Eq_999
  DataType: 
  OrigDataType: 
T_1000: (in cx_124 - 0x0001 : word16)
  Class: Eq_145
  DataType: 
  OrigDataType: 
T_1001: (in 0x0000 : word16)
  Class: Eq_996
  DataType: 
  OrigDataType: 
T_1002: (in cx_124 != 0x0000 : bool)
  Class: Eq_1002
  DataType: 
  OrigDataType: 
T_1003: (in 0x0001 : word16)
  Class: Eq_996
  DataType: 
  OrigDataType: 
T_1004: (in cx_124 != 0x0001 : bool)
  Class: Eq_1004
  DataType: 
  OrigDataType: 
T_1005: (in cx_124 != 0x0000 && cx_124 != 0x0001 : bool)
  Class: Eq_1005
  DataType: 
  OrigDataType: 
T_1006: (in 0x0000 : word16)
  Class: Eq_1006
  DataType: 
  OrigDataType: 
T_1007: (in di + 0x0000 : word16)
  Class: Eq_1007
  DataType: 
  OrigDataType: 
T_1008: (in Mem118[es:di + 0x0000:word16] : word16)
  Class: Eq_907
  DataType: 
  OrigDataType: 
T_1009: (in 0x0002 : word16)
  Class: Eq_1009
  DataType: 
  OrigDataType: 
T_1010: (in di + 0x0002 : word16)
  Class: Eq_1010
  DataType: 
  OrigDataType: 
T_1011: (in *diOut : word16)
  Class: Eq_1010
  DataType: 
  OrigDataType: 
T_1012: (in 0x0001 : word16)
  Class: Eq_1012
  DataType: 
  OrigDataType: 
T_1013: (in cx_110 - 0x0001 : word16)
  Class: Eq_979
  DataType: 
  OrigDataType: 
T_1014: (in 0x0000 : word16)
  Class: Eq_979
  DataType: 
  OrigDataType: 
T_1015: (in cx_110 == 0x0000 : bool)
  Class: Eq_1015
  DataType: 
  OrigDataType: 
T_1016: (in *diOut : word16)
  Class: Eq_671
  DataType: 
  OrigDataType: 
T_1017: (in cl : byte)
  Class: Eq_1017
  DataType: 
  OrigDataType: 
T_1018: (in *clOut : byte)
  Class: Eq_1017
  DataType: 
  OrigDataType: 
T_1019: (in 0x0000 : word16)
  Class: Eq_690
  DataType: 
  OrigDataType: 
T_1020: (in cx == 0x0000 : bool)
  Class: Eq_1020
  DataType: 
  OrigDataType: 
T_1021: (in ax_36 : word16)
  Class: Eq_1021
  DataType: 
  OrigDataType: 
T_1022: (in 0x0000 : word16)
  Class: Eq_1022
  DataType: 
  OrigDataType: 
T_1023: (in si + 0x0000 : word16)
  Class: Eq_1023
  DataType: 
  OrigDataType: 
T_1024: (in Mem0[ds:si + 0x0000:word16] : word16)
  Class: Eq_1021
  DataType: 
  OrigDataType: 
T_1025: (in SLICE(ax_36, byte, 8) : byte)
  Class: Eq_1025
  DataType: 
  OrigDataType: 
T_1026: (in SLICE(ax_36, byte, 8) | bl : byte)
  Class: Eq_1026
  DataType: 
  OrigDataType: 
T_1027: (in DPB(ax_36, SLICE(ax_36, byte, 8) | bl, 8, 8) : word16)
  Class: Eq_1027
  DataType: 
  OrigDataType: 
T_1028: (in 0x0000 : word16)
  Class: Eq_1028
  DataType: 
  OrigDataType: 
T_1029: (in di + 0x0000 : word16)
  Class: Eq_1029
  DataType: 
  OrigDataType: 
T_1030: (in Mem44[es:di + 0x0000:word16] : word16)
  Class: Eq_1027
  DataType: 
  OrigDataType: 
T_1031: (in 0x0001 : word16)
  Class: Eq_1031
  DataType: 
  OrigDataType: 
T_1032: (in cx - 0x0001 : word16)
  Class: Eq_690
  DataType: 
  OrigDataType: 
T_1033: (in 0x0002 : word16)
  Class: Eq_1033
  DataType: 
  OrigDataType: 
T_1034: (in si + 0x0002 : word16)
  Class: Eq_669
  DataType: 
  OrigDataType: 
T_1035: (in 0x0002 : word16)
  Class: Eq_1035
  DataType: 
  OrigDataType: 
T_1036: (in di + 0x0002 : word16)
  Class: Eq_671
  DataType: 
  OrigDataType: 
T_1037: (in *diOut : word16)
  Class: Eq_671
  DataType: 
  OrigDataType: 
T_1038: (in cl_48 : byte)
  Class: Eq_1038
  DataType: 
  OrigDataType: 
T_1039: (in (byte) cx : byte)
  Class: Eq_1039
  DataType: 
  OrigDataType: 
T_1040: (in *clOut : byte)
  Class: Eq_1039
  DataType: 
  OrigDataType: 
T_1041: (in 0x0000 : word16)
  Class: Eq_690
  DataType: 
  OrigDataType: 
T_1042: (in cx != 0x0000 : bool)
  Class: Eq_1042
  DataType: 
  OrigDataType: 
T_1043:
  Class: Eq_1043
  DataType: 
  OrigDataType: (struct 0002 (0 T_167 t0000))
T_1044:
  Class: Eq_1044
  DataType: 
  OrigDataType: (struct 0002 (0 T_242 t0000))
T_1045:
  Class: Eq_1043
  DataType: 
  OrigDataType: (struct 0002 (0 T_299 t0000))
T_1046:
  Class: Eq_1044
  DataType: 
  OrigDataType: (struct 0002 (0 T_424 t0000))
T_1047:
  Class: Eq_1047
  DataType: 
  OrigDataType: (struct 0001 (0 T_529 t0000))
T_1048:
  Class: Eq_1048
  DataType: 
  OrigDataType: (struct 0002 (0 T_550 t0000))
*/
