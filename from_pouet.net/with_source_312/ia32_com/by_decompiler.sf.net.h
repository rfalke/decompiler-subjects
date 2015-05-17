// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_312/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr (struct "Globals"))
  OrigDataType: (ptr (struct "Globals"))
T_2: (in di_13 : word16)
  Class: Eq_2
  DataType: (memptr T_13 (struct 0001 (0 T_16 t0000)))
  OrigDataType: (memptr T_13 (struct 0001 (0 T_16 t0000)))
T_3: (in 0x02CB : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_4: (in si_17 : word16)
  Class: Eq_4
  DataType: (memptr T_55 (struct 0001 (0 T_58 t0000)))
  OrigDataType: (memptr T_55 (struct 0001 (0 T_58 t0000)))
T_5: (in 0x02AE : word16)
  Class: Eq_4
  DataType: word16
  OrigDataType: word16
T_6: (in di_18 : word16)
  Class: Eq_6
  DataType: (memptr T_13 (struct 0001 (0 T_33 t0000)))
  OrigDataType: (memptr T_13 (struct 0001 (0 T_33 t0000)))
T_7: (in 0x02E2 : word16)
  Class: Eq_6
  DataType: word16
  OrigDataType: word16
T_8: (in cx_20 : word16)
  Class: Eq_8
  DataType: word16
  OrigDataType: word16
T_9: (in cx : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_10: (in 0x20 : byte)
  Class: Eq_10
  DataType: byte
  OrigDataType: byte
T_11: (in DPB(cx, 0x20, 0, 8) : word16)
  Class: Eq_8
  DataType: word16
  OrigDataType: word16
T_12: (in al : byte)
  Class: Eq_12
  DataType: byte
  OrigDataType: byte
T_13: (in es : selector)
  Class: Eq_13
  DataType: (ptr (segment (2CB (arr T_483) a02CB)))
  OrigDataType: (ptr (segment (2CB (arr T_483) a02CB)))
T_14: (in 0x0000 : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_15: (in di_13 + 0x0000 : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_16: (in Mem11[es:di_13 + 0x0000:byte] : byte)
  Class: Eq_12
  DataType: byte
  OrigDataType: byte
T_17: (in 0x0001 : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_18: (in di_13 + 0x0001 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_19: (in 0x0001 : word16)
  Class: Eq_19
  DataType: word16
  OrigDataType: word16
T_20: (in cx - 0x0001 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_21: (in 0x0000 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_22: (in cx == 0x0000 : bool)
  Class: Eq_22
  DataType: bool
  OrigDataType: bool
T_23: (in bx_64 : word16)
  Class: Eq_23
  DataType: word16
  OrigDataType: word16
T_24: (in bx : word16)
  Class: Eq_24
  DataType: ui16
  OrigDataType: ui16
T_25: (in 0x00 : byte)
  Class: Eq_25
  DataType: byte
  OrigDataType: byte
T_26: (in DPB(bx, 0x00, 8, 8) : word16)
  Class: Eq_23
  DataType: word16
  OrigDataType: word16
T_27: (in 0x0002 : word16)
  Class: Eq_27
  DataType: word16
  OrigDataType: word16
T_28: (in bx_64 << 0x0002 : word16)
  Class: Eq_28
  DataType: ui16
  OrigDataType: ui16
T_29: (in SLICE(bx_64 << 0x0002, byte, 8) : byte)
  Class: Eq_29
  DataType: byte
  OrigDataType: byte
T_30: (in al + SLICE(bx_64 << 0x0002, byte, 8) : byte)
  Class: Eq_12
  DataType: byte
  OrigDataType: byte
T_31: (in 0x0000 : word16)
  Class: Eq_31
  DataType: word16
  OrigDataType: word16
T_32: (in di_18 + 0x0000 : word16)
  Class: Eq_32
  DataType: word16
  OrigDataType: word16
T_33: (in Mem75[es:di_18 + 0x0000:byte] : byte)
  Class: Eq_12
  DataType: byte
  OrigDataType: byte
T_34: (in ch_51 : byte)
  Class: Eq_34
  DataType: byte
  OrigDataType: byte
T_35: (in 0x01 : byte)
  Class: Eq_35
  DataType: byte
  OrigDataType: byte
T_36: (in ch_51 - 0x01 : byte)
  Class: Eq_34
  DataType: byte
  OrigDataType: byte
T_37: (in bx_64 << 0x0002 : word16)
  Class: Eq_24
  DataType: ui16
  OrigDataType: ui16
T_38: (in ebx_525 : word32)
  Class: Eq_38
  DataType: word32
  OrigDataType: word32
T_39: (in bx_64 << 0x0002 : word16)
  Class: Eq_39
  DataType: ui16
  OrigDataType: ui16
T_40: (in DPB(ebx_525, bx_64 << 0x0002, 0, 16) : word32)
  Class: Eq_38
  DataType: word32
  OrigDataType: word32
T_41: (in ebx : word32)
  Class: Eq_38
  DataType: word32
  OrigDataType: word32
T_42: (in eax : word32)
  Class: Eq_42
  DataType: word32
  OrigDataType: word32
T_43: (in DPB(eax, al, 0, 8) : word32)
  Class: Eq_42
  DataType: word32
  OrigDataType: word32
T_44: (in 0x0001 : word16)
  Class: Eq_44
  DataType: word16
  OrigDataType: word16
T_45: (in di_18 + 0x0001 : word16)
  Class: Eq_6
  DataType: word16
  OrigDataType: word16
T_46: (in cx_52 : word16)
  Class: Eq_46
  DataType: word16
  OrigDataType: word16
T_47: (in DPB(cx_52, ch_51, 8, 8) : word16)
  Class: Eq_46
  DataType: word16
  OrigDataType: word16
T_48: (in 0x00 : byte)
  Class: Eq_34
  DataType: byte
  OrigDataType: byte
T_49: (in ch_51 != 0x00 : bool)
  Class: Eq_49
  DataType: bool
  OrigDataType: bool
T_50: (in 0x0001 : word16)
  Class: Eq_50
  DataType: word16
  OrigDataType: word16
T_51: (in cx_52 - 0x0001 : word16)
  Class: Eq_8
  DataType: word16
  OrigDataType: word16
T_52: (in 0x0001 : word16)
  Class: Eq_46
  DataType: word16
  OrigDataType: word16
T_53: (in cx_52 != 0x0001 : bool)
  Class: Eq_53
  DataType: bool
  OrigDataType: bool
T_54: (in bl_46 : byte)
  Class: Eq_54
  DataType: byte
  OrigDataType: byte
T_55: (in ds : selector)
  Class: Eq_55
  DataType: (ptr (segment (2AE (arr T_484) a02AE) (2CE T_232 t02CE) (2D0 T_236 t02D0) (2D2 T_240 t02D2) (2D4 T_250 t02D4) (2D6 T_254 t02D6) (2D8 T_258 t02D8) (2DD T_287 t02DD)))
  OrigDataType: (ptr (segment (2AE (arr T_484) a02AE) (2CE T_232 t02CE) (2D0 T_236 t02D0) (2D2 T_240 t02D2) (2D4 T_250 t02D4) (2D6 T_254 t02D6) (2D8 T_258 t02D8) (2DD T_287 t02DD)))
T_56: (in 0x0000 : word16)
  Class: Eq_56
  DataType: word16
  OrigDataType: word16
T_57: (in si_17 + 0x0000 : word16)
  Class: Eq_57
  DataType: word16
  OrigDataType: word16
T_58: (in Mem0[ds:si_17 + 0x0000:byte] : byte)
  Class: Eq_54
  DataType: byte
  OrigDataType: byte
T_59: (in DPB(bx, bl_46, 0, 8) : word16)
  Class: Eq_24
  DataType: word16
  OrigDataType: word16
T_60: (in DPB(ebx, bl_46, 0, 8) : word32)
  Class: Eq_38
  DataType: word32
  OrigDataType: word32
T_61: (in 0x0001 : word16)
  Class: Eq_61
  DataType: word16
  OrigDataType: word16
T_62: (in si_17 + 0x0001 : word16)
  Class: Eq_4
  DataType: word16
  OrigDataType: word16
T_63: (in 0x04 : byte)
  Class: Eq_34
  DataType: byte
  OrigDataType: byte
T_64: (in 0x04 : byte)
  Class: Eq_64
  DataType: byte
  OrigDataType: byte
T_65: (in DPB(cx_20, 0x04, 8, 8) : word16)
  Class: Eq_46
  DataType: word16
  OrigDataType: word16
T_66: (in si_84 : word16)
  Class: Eq_66
  DataType: (memptr T_55 (struct 0001 (0 T_77 t0000)))
  OrigDataType: (memptr T_55 (struct 0001 (0 T_77 t0000)))
T_67: (in 0x0360 : word16)
  Class: Eq_66
  DataType: word16
  OrigDataType: word16
T_68: (in di_111 : word16)
  Class: Eq_68
  DataType: (memptr T_13 (struct 0001 (0 T_74 t0000)))
  OrigDataType: (memptr T_13 (struct 0001 (0 T_74 t0000)))
T_69: (in 0x0361 : word16)
  Class: Eq_68
  DataType: word16
  OrigDataType: word16
T_70: (in cx_100 : word16)
  Class: Eq_70
  DataType: word16
  OrigDataType: word16
T_71: (in cx_52 - 0x0001 : word16)
  Class: Eq_71
  DataType: word16
  OrigDataType: word16
T_72: (in 0x80 : byte)
  Class: Eq_72
  DataType: byte
  OrigDataType: byte
T_73: (in DPB(cx_52 - 0x0001, 0x80, 0, 8) : word16)
  Class: Eq_70
  DataType: word16
  OrigDataType: word16
T_74: (in al_93 : byte)
  Class: Eq_74
  DataType: byte
  OrigDataType: byte
T_75: (in 0x0000 : word16)
  Class: Eq_75
  DataType: word16
  OrigDataType: word16
T_76: (in si_84 + 0x0000 : word16)
  Class: Eq_76
  DataType: word16
  OrigDataType: word16
T_77: (in Mem75[ds:si_84 + 0x0000:byte] : byte)
  Class: Eq_74
  DataType: byte
  OrigDataType: byte
T_78: (in 0x0000 : word16)
  Class: Eq_78
  DataType: word16
  OrigDataType: word16
T_79: (in di_111 + 0x0000 : word16)
  Class: Eq_79
  DataType: word16
  OrigDataType: word16
T_80: (in Mem98[es:di_111 + 0x0000:byte] : byte)
  Class: Eq_74
  DataType: byte
  OrigDataType: byte
T_81: (in 0x0001 : word16)
  Class: Eq_81
  DataType: word16
  OrigDataType: word16
T_82: (in cx_100 - 0x0001 : word16)
  Class: Eq_70
  DataType: word16
  OrigDataType: word16
T_83: (in DPB(eax, al_93, 0, 8) : word32)
  Class: Eq_42
  DataType: word32
  OrigDataType: word32
T_84: (in 0x0001 : word16)
  Class: Eq_84
  DataType: word16
  OrigDataType: word16
T_85: (in si_84 - 0x0001 : word16)
  Class: Eq_66
  DataType: word16
  OrigDataType: word16
T_86: (in 0x0001 : word16)
  Class: Eq_86
  DataType: word16
  OrigDataType: word16
T_87: (in di_111 + 0x0001 : word16)
  Class: Eq_68
  DataType: word16
  OrigDataType: word16
T_88: (in ch_102 : byte)
  Class: Eq_88
  DataType: byte
  OrigDataType: byte
T_89: (in SLICE(cx_100, byte, 8) : byte)
  Class: Eq_88
  DataType: byte
  OrigDataType: byte
T_90: (in 0x0000 : word16)
  Class: Eq_70
  DataType: word16
  OrigDataType: word16
T_91: (in cx_100 != 0x0000 : bool)
  Class: Eq_91
  DataType: bool
  OrigDataType: bool
T_92: (in si_103 : word16)
  Class: Eq_92
  DataType: (memptr T_55 (struct 0001 (0 T_102 t0000)))
  OrigDataType: (memptr T_55 (struct 0001 (0 T_102 t0000)))
T_93: (in 0x0001 : word16)
  Class: Eq_93
  DataType: word16
  OrigDataType: word16
T_94: (in si_84 + 0x0001 : word16)
  Class: Eq_92
  DataType: word16
  OrigDataType: word16
T_95: (in cx_105 : word16)
  Class: Eq_95
  DataType: word16
  OrigDataType: word16
T_96: (in 0x01 : byte)
  Class: Eq_96
  DataType: byte
  OrigDataType: byte
T_97: (in ch_102 + 0x01 : byte)
  Class: Eq_97
  DataType: byte
  OrigDataType: byte
T_98: (in DPB(cx_100, ch_102 + 0x01, 8, 8) : word16)
  Class: Eq_95
  DataType: word16
  OrigDataType: word16
T_99: (in al_115 : byte)
  Class: Eq_74
  DataType: byte
  OrigDataType: byte
T_100: (in 0x0000 : word16)
  Class: Eq_100
  DataType: word16
  OrigDataType: word16
T_101: (in si_103 + 0x0000 : word16)
  Class: Eq_101
  DataType: word16
  OrigDataType: word16
T_102: (in Mem98[ds:si_103 + 0x0000:byte] : byte)
  Class: Eq_102
  DataType: int8
  OrigDataType: int8
T_103: (in -Mem98[ds:si_103 + 0x0000:byte] : byte)
  Class: Eq_74
  DataType: int8
  OrigDataType: int8
T_104: (in 0x0000 : word16)
  Class: Eq_104
  DataType: word16
  OrigDataType: word16
T_105: (in di_111 + 0x0000 : word16)
  Class: Eq_105
  DataType: word16
  OrigDataType: word16
T_106: (in Mem120[es:di_111 + 0x0000:byte] : byte)
  Class: Eq_74
  DataType: byte
  OrigDataType: byte
T_107: (in 0x0001 : word16)
  Class: Eq_107
  DataType: word16
  OrigDataType: word16
T_108: (in si_103 + 0x0001 : word16)
  Class: Eq_92
  DataType: word16
  OrigDataType: word16
T_109: (in DPB(eax, al_115, 0, 8) : word32)
  Class: Eq_42
  DataType: word32
  OrigDataType: word32
T_110: (in 0x0001 : word16)
  Class: Eq_110
  DataType: word16
  OrigDataType: word16
T_111: (in di_111 + 0x0001 : word16)
  Class: Eq_68
  DataType: word16
  OrigDataType: word16
T_112: (in 0x0001 : word16)
  Class: Eq_112
  DataType: word16
  OrigDataType: word16
T_113: (in cx_105 - 0x0001 : word16)
  Class: Eq_95
  DataType: word16
  OrigDataType: word16
T_114: (in 0x0000 : word16)
  Class: Eq_95
  DataType: word16
  OrigDataType: word16
T_115: (in cx_105 != 0x0000 : bool)
  Class: Eq_115
  DataType: bool
  OrigDataType: bool
T_116: (in bios_video_set_mode : ptr32)
  Class: Eq_116
  DataType: (ptr (fn T_120 (T_119)))
  OrigDataType: (ptr (fn T_120 (T_119)))
T_117: (in signature of bios_video_set_mode : void)
  Class: Eq_116
  DataType: 
  OrigDataType: 
T_118: (in al : byte)
  Class: Eq_118
  DataType: byte
  OrigDataType: byte
T_119: (in 0x13 : byte)
  Class: Eq_118
  DataType: byte
  OrigDataType: byte
T_120: (in bios_video_set_mode(0x13) : void)
  Class: Eq_120
  DataType: void
  OrigDataType: void
T_121: (in ax_125 : word16)
  Class: Eq_121
  DataType: word16
  OrigDataType: word16
T_122: (in 0x0013 : word16)
  Class: Eq_121
  DataType: word16
  OrigDataType: word16
T_123: (in eax_127 : word32)
  Class: Eq_123
  DataType: word32
  OrigDataType: word32
T_124: (in 0x0013 : word16)
  Class: Eq_124
  DataType: word16
  OrigDataType: word16
T_125: (in DPB(eax, 0x0013, 0, 16) : word32)
  Class: Eq_123
  DataType: word32
  OrigDataType: word32
T_126: (in cl_129 : byte)
  Class: Eq_126
  DataType: byte
  OrigDataType: byte
T_127: (in 0x3F : byte)
  Class: Eq_126
  DataType: byte
  OrigDataType: byte
T_128: (in cx_130 : word16)
  Class: Eq_128
  DataType: word16
  OrigDataType: word16
T_129: (in 0x3F : byte)
  Class: Eq_129
  DataType: byte
  OrigDataType: byte
T_130: (in DPB(cx_105, 0x3F, 0, 8) : word16)
  Class: Eq_128
  DataType: word16
  OrigDataType: word16
T_131: (in __outb : ptr32)
  Class: Eq_131
  DataType: (ptr (fn T_133 (T_132, T_126)))
  OrigDataType: (ptr (fn T_133 (T_132, T_126)))
T_132: (in 0x03C8 : word16)
  Class: Eq_132
  DataType: word16
  OrigDataType: word16
T_133: (in __outb(0x03C8, cl_129) : void)
  Class: Eq_133
  DataType: void
  OrigDataType: void
T_134: (in __outb : ptr32)
  Class: Eq_134
  DataType: (ptr (fn T_137 (T_135, T_136)))
  OrigDataType: (ptr (fn T_137 (T_135, T_136)))
T_135: (in 0x03C9 : word16)
  Class: Eq_135
  DataType: word16
  OrigDataType: word16
T_136: (in 0x00 : byte)
  Class: Eq_136
  DataType: byte
  OrigDataType: byte
T_137: (in __outb(0x03C9, 0x00) : void)
  Class: Eq_137
  DataType: void
  OrigDataType: void
T_138: (in __outb : ptr32)
  Class: Eq_138
  DataType: (ptr (fn T_140 (T_139, T_126)))
  OrigDataType: (ptr (fn T_140 (T_139, T_126)))
T_139: (in 0x03C9 : word16)
  Class: Eq_139
  DataType: word16
  OrigDataType: word16
T_140: (in __outb(0x03C9, cl_129) : void)
  Class: Eq_140
  DataType: void
  OrigDataType: void
T_141: (in __outb : ptr32)
  Class: Eq_141
  DataType: (ptr (fn T_144 (T_142, T_143)))
  OrigDataType: (ptr (fn T_144 (T_142, T_143)))
T_142: (in 0x03C9 : word16)
  Class: Eq_142
  DataType: word16
  OrigDataType: word16
T_143: (in 0x00 : byte)
  Class: Eq_143
  DataType: byte
  OrigDataType: byte
T_144: (in __outb(0x03C9, 0x00) : void)
  Class: Eq_144
  DataType: void
  OrigDataType: void
T_145: (in 0x0001 : word16)
  Class: Eq_145
  DataType: word16
  OrigDataType: word16
T_146: (in cx_130 - 0x0001 : word16)
  Class: Eq_128
  DataType: word16
  OrigDataType: word16
T_147: (in 0x00 : byte)
  Class: Eq_147
  DataType: byte
  OrigDataType: byte
T_148: (in DPB(ax_125, 0x00, 0, 8) : word16)
  Class: Eq_121
  DataType: word16
  OrigDataType: word16
T_149: (in eax_526 : word32)
  Class: Eq_123
  DataType: word32
  OrigDataType: word32
T_150: (in 0x00 : byte)
  Class: Eq_150
  DataType: byte
  OrigDataType: byte
T_151: (in DPB(eax_526, 0x00, 0, 8) : word32)
  Class: Eq_123
  DataType: word32
  OrigDataType: word32
T_152: (in (byte) cx_130 : byte)
  Class: Eq_126
  DataType: byte
  OrigDataType: byte
T_153: (in 0x0000 : word16)
  Class: Eq_128
  DataType: word16
  OrigDataType: word16
T_154: (in cx_130 != 0x0000 : bool)
  Class: Eq_154
  DataType: bool
  OrigDataType: bool
T_155: (in bx_153 : word16)
  Class: Eq_155
  DataType: word16
  OrigDataType: word16
T_156: (in msdos_resize_memory_block : ptr32)
  Class: Eq_156
  DataType: (ptr (fn T_163 (T_13, T_161, T_162)))
  OrigDataType: (ptr (fn T_163 (T_13, T_161, T_162)))
T_157: (in signature of msdos_resize_memory_block : void)
  Class: Eq_156
  DataType: 
  OrigDataType: 
T_158: (in es : selector)
  Class: Eq_13
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_159: (in bx : word16)
  Class: Eq_159
  DataType: word16
  OrigDataType: word16
T_160: (in bxOut : ptr16)
  Class: Eq_160
  DataType: ptr16
  OrigDataType: ptr16
T_161: (in 0x1000 : word16)
  Class: Eq_159
  DataType: word16
  OrigDataType: word16
T_162: (in out bx_153 : ptr16)
  Class: Eq_160
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_163: (in msdos_resize_memory_block(es, 0x1000, out bx_153) : byte)
  Class: Eq_163
  DataType: byte
  OrigDataType: byte
T_164: (in msdos_allocate_memory_block : ptr32)
  Class: Eq_164
  DataType: (ptr (fn T_168 (T_167)))
  OrigDataType: (ptr (fn T_168 (T_167)))
T_165: (in signature of msdos_allocate_memory_block : void)
  Class: Eq_164
  DataType: 
  OrigDataType: 
T_166: (in bx : word16)
  Class: Eq_166
  DataType: word16
  OrigDataType: word16
T_167: (in 0x1000 : word16)
  Class: Eq_166
  DataType: word16
  OrigDataType: word16
T_168: (in msdos_allocate_memory_block(0x1000) : byte)
  Class: Eq_168
  DataType: byte
  OrigDataType: byte
T_169: (in ax_156 : word16)
  Class: Eq_169
  DataType: (ptr (struct (0 (arr T_485) a0000)))
  OrigDataType: (ptr (struct (0 (arr T_485) a0000)))
T_170: (in 0x48 : byte)
  Class: Eq_170
  DataType: byte
  OrigDataType: byte
T_171: (in DPB(ax_125, 0x48, 8, 8) : word16)
  Class: Eq_169
  DataType: word16
  OrigDataType: word16
T_172: (in cx_165 : word16)
  Class: Eq_172
  DataType: word16
  OrigDataType: word16
T_173: (in 0xFA : byte)
  Class: Eq_173
  DataType: byte
  OrigDataType: byte
T_174: (in DPB(cx_130, 0xFA, 8, 8) : word16)
  Class: Eq_172
  DataType: word16
  OrigDataType: word16
T_175: (in al_166 : byte)
  Class: Eq_118
  DataType: byte
  OrigDataType: byte
T_176: (in 0x00 : byte)
  Class: Eq_118
  DataType: byte
  OrigDataType: byte
T_177: (in ax_167 : word16)
  Class: Eq_177
  DataType: word16
  OrigDataType: word16
T_178: (in 0x00 : byte)
  Class: Eq_178
  DataType: byte
  OrigDataType: byte
T_179: (in DPB(ax_156, 0x00, 0, 8) : word16)
  Class: Eq_177
  DataType: word16
  OrigDataType: word16
T_180: (in eax_169 : word32)
  Class: Eq_180
  DataType: word32
  OrigDataType: word32
T_181: (in 0x00 : byte)
  Class: Eq_181
  DataType: byte
  OrigDataType: byte
T_182: (in DPB(eax_526, 0x00, 0, 8) : word32)
  Class: Eq_180
  DataType: word32
  OrigDataType: word32
T_183: (in di_171 : word16)
  Class: Eq_183
  DataType: (memptr T_169 (struct 0001 (0 T_200 t0000)))
  OrigDataType: (memptr T_169 (struct 0001 (0 T_200 t0000)))
T_184: (in 0x0000 : word16)
  Class: Eq_183
  DataType: word16
  OrigDataType: word16
T_185: (in ax_184 : word16)
  Class: Eq_185
  DataType: (ptr (struct (0 (arr T_486) a0000)))
  OrigDataType: (ptr (struct (0 (arr T_486) a0000)))
T_186: (in 0x48 : byte)
  Class: Eq_186
  DataType: byte
  OrigDataType: byte
T_187: (in DPB(ax_167, 0x48, 8, 8) : word16)
  Class: Eq_185
  DataType: word16
  OrigDataType: word16
T_188: (in eax_186 : word32)
  Class: Eq_188
  DataType: word32
  OrigDataType: word32
T_189: (in 0x48 : byte)
  Class: Eq_189
  DataType: byte
  OrigDataType: byte
T_190: (in DPB(eax_169, 0x48, 8, 8) : word32)
  Class: Eq_188
  DataType: word32
  OrigDataType: word32
T_191: (in ebx_191 : word32)
  Class: Eq_191
  DataType: word32
  OrigDataType: word32
T_192: (in 0x1000 : word16)
  Class: Eq_192
  DataType: word16
  OrigDataType: word16
T_193: (in DPB(ebx_525, 0x1000, 0, 16) : word32)
  Class: Eq_191
  DataType: word32
  OrigDataType: word32
T_194: (in msdos_allocate_memory_block : ptr32)
  Class: Eq_164
  DataType: (ptr (fn T_196 (T_195)))
  OrigDataType: (ptr (fn T_196 (T_195)))
T_195: (in 0x1000 : word16)
  Class: Eq_166
  DataType: word16
  OrigDataType: word16
T_196: (in msdos_allocate_memory_block(0x1000) : byte)
  Class: Eq_196
  DataType: byte
  OrigDataType: byte
T_197: (in 0x00 : byte)
  Class: Eq_197
  DataType: byte
  OrigDataType: byte
T_198: (in 0x0000 : word16)
  Class: Eq_198
  DataType: word16
  OrigDataType: word16
T_199: (in di_171 + 0x0000 : word16)
  Class: Eq_199
  DataType: word16
  OrigDataType: word16
T_200: (in Mem178[ax_156:di_171 + 0x0000:byte] : byte)
  Class: Eq_197
  DataType: byte
  OrigDataType: byte
T_201: (in 0x0001 : word16)
  Class: Eq_201
  DataType: word16
  OrigDataType: word16
T_202: (in di_171 + 0x0001 : word16)
  Class: Eq_183
  DataType: word16
  OrigDataType: word16
T_203: (in 0x0001 : word16)
  Class: Eq_203
  DataType: word16
  OrigDataType: word16
T_204: (in cx_165 - 0x0001 : word16)
  Class: Eq_172
  DataType: word16
  OrigDataType: word16
T_205: (in 0x0000 : word16)
  Class: Eq_172
  DataType: word16
  OrigDataType: word16
T_206: (in cx_165 == 0x0000 : bool)
  Class: Eq_206
  DataType: bool
  OrigDataType: bool
T_207: (in bios_video_set_mode : ptr32)
  Class: Eq_116
  DataType: (ptr (fn T_208 (T_175)))
  OrigDataType: (ptr (fn T_208 (T_175)))
T_208: (in bios_video_set_mode(al_166) : void)
  Class: Eq_208
  DataType: void
  OrigDataType: void
T_209: (in bios_video_set_mode : ptr32)
  Class: Eq_116
  DataType: (ptr (fn T_211 (T_210)))
  OrigDataType: (ptr (fn T_211 (T_210)))
T_210: (in 0x03 : byte)
  Class: Eq_118
  DataType: byte
  OrigDataType: byte
T_211: (in bios_video_set_mode(0x03) : void)
  Class: Eq_211
  DataType: void
  OrigDataType: void
T_212: (in cx_227 : word16)
  Class: Eq_212
  DataType: word16
  OrigDataType: word16
T_213: (in 0xFA : byte)
  Class: Eq_213
  DataType: byte
  OrigDataType: byte
T_214: (in DPB(cx_165, 0xFA, 8, 8) : word16)
  Class: Eq_212
  DataType: word16
  OrigDataType: word16
T_215: (in eax_231 : word32)
  Class: Eq_215
  DataType: word32
  OrigDataType: word32
T_216: (in 0x00 : byte)
  Class: Eq_216
  DataType: byte
  OrigDataType: byte
T_217: (in DPB(eax_186, 0x00, 0, 8) : word32)
  Class: Eq_215
  DataType: word32
  OrigDataType: word32
T_218: (in di_233 : word16)
  Class: Eq_218
  DataType: (memptr T_185 (struct 0001 (0 T_225 t0000)))
  OrigDataType: (memptr T_185 (struct 0001 (0 T_225 t0000)))
T_219: (in 0x0000 : word16)
  Class: Eq_218
  DataType: word16
  OrigDataType: word16
T_220: (in bp_271 : word16)
  Class: Eq_220
  DataType: word16
  OrigDataType: word16
T_221: (in 0x07D0 : word16)
  Class: Eq_220
  DataType: word16
  OrigDataType: word16
T_222: (in 0x00 : byte)
  Class: Eq_222
  DataType: byte
  OrigDataType: byte
T_223: (in 0x0000 : word16)
  Class: Eq_223
  DataType: word16
  OrigDataType: word16
T_224: (in di_233 + 0x0000 : word16)
  Class: Eq_224
  DataType: word16
  OrigDataType: word16
T_225: (in Mem240[ax_184:di_233 + 0x0000:byte] : byte)
  Class: Eq_222
  DataType: byte
  OrigDataType: byte
T_226: (in 0x0001 : word16)
  Class: Eq_226
  DataType: word16
  OrigDataType: word16
T_227: (in di_233 + 0x0001 : word16)
  Class: Eq_218
  DataType: word16
  OrigDataType: word16
T_228: (in 0x0001 : word16)
  Class: Eq_228
  DataType: word16
  OrigDataType: word16
T_229: (in cx_227 - 0x0001 : word16)
  Class: Eq_212
  DataType: word16
  OrigDataType: word16
T_230: (in 0x0000 : word16)
  Class: Eq_212
  DataType: word16
  OrigDataType: word16
T_231: (in cx_227 == 0x0000 : bool)
  Class: Eq_231
  DataType: bool
  OrigDataType: bool
T_232: (in dx_285 : word16)
  Class: Eq_232
  DataType: cups16
  OrigDataType: cups16
T_233: (in 0x02CE : word16)
  Class: Eq_233
  DataType: (memptr T_55 (struct (0 T_234 t0000)))
  OrigDataType: (memptr T_55 (struct (0 T_234 t0000)))
T_234: (in Mem120[ds:0x02CE:word16] : word16)
  Class: Eq_232
  DataType: word16
  OrigDataType: word16
T_235: (in 0x02D0 : word16)
  Class: Eq_235
  DataType: (memptr T_55 (struct (0 T_236 t0000)))
  OrigDataType: (memptr T_55 (struct (0 T_236 t0000)))
T_236: (in Mem120[ds:0x02D0:word16] : word16)
  Class: Eq_236
  DataType: word16
  OrigDataType: word16
T_237: (in Mem120[ds:0x02CE:word16] + Mem120[ds:0x02D0:word16] : word16)
  Class: Eq_232
  DataType: word16
  OrigDataType: word16
T_238: (in ax_290 : word16)
  Class: Eq_238
  DataType: word16
  OrigDataType: word16
T_239: (in 0x02D2 : word16)
  Class: Eq_239
  DataType: (memptr T_55 (struct (0 T_240 t0000)))
  OrigDataType: (memptr T_55 (struct (0 T_240 t0000)))
T_240: (in Mem120[ds:0x02D2:word16] : word16)
  Class: Eq_240
  DataType: word16
  OrigDataType: word16
T_241: (in 0x0000 : word16)
  Class: Eq_232
  DataType: cups16
  OrigDataType: cups16
T_242: (in dx_285 <u 0x0000 : bool)
  Class: Eq_242
  DataType: bool
  OrigDataType: bool
T_243: (in Mem120[ds:0x02D2:word16] + (dx_285 <u 0x0000) : word16)
  Class: Eq_238
  DataType: word16
  OrigDataType: word16
T_244: (in 0x02CE : word16)
  Class: Eq_244
  DataType: (memptr T_55 (struct (0 T_245 t0000)))
  OrigDataType: (memptr T_55 (struct (0 T_245 t0000)))
T_245: (in Mem291[ds:0x02CE:word16] : word16)
  Class: Eq_232
  DataType: word16
  OrigDataType: word16
T_246: (in 0x01FF : word16)
  Class: Eq_246
  DataType: word16
  OrigDataType: word16
T_247: (in ax_290 & 0x01FF : word16)
  Class: Eq_240
  DataType: word16
  OrigDataType: word16
T_248: (in 0x02D2 : word16)
  Class: Eq_248
  DataType: (memptr T_55 (struct (0 T_249 t0000)))
  OrigDataType: (memptr T_55 (struct (0 T_249 t0000)))
T_249: (in Mem293[ds:0x02D2:word16] : word16)
  Class: Eq_240
  DataType: word16
  OrigDataType: word16
T_250: (in dx_300 : word16)
  Class: Eq_250
  DataType: cups16
  OrigDataType: cups16
T_251: (in 0x02D4 : word16)
  Class: Eq_251
  DataType: (memptr T_55 (struct (0 T_252 t0000)))
  OrigDataType: (memptr T_55 (struct (0 T_252 t0000)))
T_252: (in Mem293[ds:0x02D4:word16] : word16)
  Class: Eq_250
  DataType: word16
  OrigDataType: word16
T_253: (in 0x02D6 : word16)
  Class: Eq_253
  DataType: (memptr T_55 (struct (0 T_254 t0000)))
  OrigDataType: (memptr T_55 (struct (0 T_254 t0000)))
T_254: (in Mem293[ds:0x02D6:word16] : word16)
  Class: Eq_254
  DataType: word16
  OrigDataType: word16
T_255: (in Mem293[ds:0x02D4:word16] + Mem293[ds:0x02D6:word16] : word16)
  Class: Eq_250
  DataType: word16
  OrigDataType: word16
T_256: (in ax_304 : word16)
  Class: Eq_256
  DataType: word16
  OrigDataType: word16
T_257: (in 0x02D8 : word16)
  Class: Eq_257
  DataType: (memptr T_55 (struct (0 T_258 t0000)))
  OrigDataType: (memptr T_55 (struct (0 T_258 t0000)))
T_258: (in Mem293[ds:0x02D8:word16] : word16)
  Class: Eq_258
  DataType: word16
  OrigDataType: word16
T_259: (in 0x0000 : word16)
  Class: Eq_250
  DataType: cups16
  OrigDataType: cups16
T_260: (in dx_300 <u 0x0000 : bool)
  Class: Eq_260
  DataType: bool
  OrigDataType: bool
T_261: (in Mem293[ds:0x02D8:word16] + (dx_300 <u 0x0000) : word16)
  Class: Eq_256
  DataType: word16
  OrigDataType: word16
T_262: (in 0x02D4 : word16)
  Class: Eq_262
  DataType: (memptr T_55 (struct (0 T_263 t0000)))
  OrigDataType: (memptr T_55 (struct (0 T_263 t0000)))
T_263: (in Mem305[ds:0x02D4:word16] : word16)
  Class: Eq_250
  DataType: word16
  OrigDataType: word16
T_264: (in 0x01FF : word16)
  Class: Eq_264
  DataType: word16
  OrigDataType: word16
T_265: (in ax_304 & 0x01FF : word16)
  Class: Eq_258
  DataType: word16
  OrigDataType: word16
T_266: (in 0x02D8 : word16)
  Class: Eq_266
  DataType: (memptr T_55 (struct (0 T_267 t0000)))
  OrigDataType: (memptr T_55 (struct (0 T_267 t0000)))
T_267: (in Mem307[ds:0x02D8:word16] : word16)
  Class: Eq_258
  DataType: word16
  OrigDataType: word16
T_268: (in 0x0000 : word16)
  Class: Eq_268
  DataType: word16
  OrigDataType: word16
T_269: (in DPB(ebx_191, 0x0000, 0, 16) : word32)
  Class: Eq_191
  DataType: word32
  OrigDataType: word32
T_270: (in eax_315 : word32)
  Class: Eq_270
  DataType: word32
  OrigDataType: word32
T_271: (in fn0C00_0288 : ptr32)
  Class: Eq_271
  DataType: (ptr (fn T_283 (T_282, T_191, T_55)))
  OrigDataType: (ptr (fn T_283 (T_282, T_191, T_55)))
T_272: (in signature of fn0C00_0288 : void)
  Class: Eq_271
  DataType: 
  OrigDataType: 
T_273: (in eax : word32)
  Class: Eq_273
  DataType: word32
  OrigDataType: word32
T_274: (in ebx : word32)
  Class: Eq_191
  DataType: word32
  OrigDataType: word32
T_275: (in ds : selector)
  Class: Eq_55
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_276: (in ax_304 & 0x01FF : word16)
  Class: Eq_276
  DataType: (memptr T_55 (struct (2E1 T_279 t02E1)))
  OrigDataType: (memptr T_55 (struct (2E1 T_279 t02E1)))
T_277: (in 0x02E1 : word16)
  Class: Eq_277
  DataType: word16
  OrigDataType: word16
T_278: (in (ax_304 & 0x01FF) + 0x02E1 : word16)
  Class: Eq_278
  DataType: word16
  OrigDataType: word16
T_279: (in Mem307[ds:(ax_304 & 0x01FF) + 0x02E1:byte] : byte)
  Class: Eq_279
  DataType: byte
  OrigDataType: byte
T_280: (in 0x80 : byte)
  Class: Eq_280
  DataType: byte
  OrigDataType: byte
T_281: (in Mem307[ds:(ax_304 & 0x01FF) + 0x02E1:byte] + 0x80 : byte)
  Class: Eq_281
  DataType: byte
  OrigDataType: byte
T_282: (in DPB(eax_231, Mem307[ds:(ax_304 & 0x01FF) + 0x02E1:byte] + 0x80, 0, 8) : word32)
  Class: Eq_273
  DataType: word32
  OrigDataType: word32
T_283: (in fn0C00_0288(DPB(eax_231, Mem307[ds:(ax_304 & 0x01FF) + 0x02E1:byte] + 0x80, 0, 8), ebx_191, ds) : word32)
  Class: Eq_270
  DataType: word32
  OrigDataType: word32
T_284: (in di_318 : word16)
  Class: Eq_284
  DataType: (memptr T_185 (struct (140 T_303 t0140) (280 T_307 t0280)))
  OrigDataType: (memptr T_185 (struct (140 T_303 t0140) (280 T_307 t0280)))
T_285: (in (word16) eax_315 : word16)
  Class: Eq_285
  DataType: word16
  OrigDataType: word16
T_286: (in 0x02DD : word16)
  Class: Eq_286
  DataType: (memptr T_55 (struct (0 T_287 t0000)))
  OrigDataType: (memptr T_55 (struct (0 T_287 t0000)))
T_287: (in Mem307[ds:0x02DD:word16] : word16)
  Class: Eq_287
  DataType: word16
  OrigDataType: word16
T_288: (in (word16) eax_315 + Mem307[ds:0x02DD:word16] : word16)
  Class: Eq_284
  DataType: word16
  OrigDataType: word16
T_289: (in fn0C00_0288 : ptr32)
  Class: Eq_271
  DataType: (ptr (fn T_297 (T_296, T_191, T_55)))
  OrigDataType: (ptr (fn T_297 (T_296, T_191, T_55)))
T_290: (in ax_290 & 0x01FF : word16)
  Class: Eq_290
  DataType: (memptr T_55 (struct (2E1 T_293 t02E1)))
  OrigDataType: (memptr T_55 (struct (2E1 T_293 t02E1)))
T_291: (in 0x02E1 : word16)
  Class: Eq_291
  DataType: word16
  OrigDataType: word16
T_292: (in (ax_290 & 0x01FF) + 0x02E1 : word16)
  Class: Eq_292
  DataType: word16
  OrigDataType: word16
T_293: (in Mem307[ds:(ax_290 & 0x01FF) + 0x02E1:byte] : byte)
  Class: Eq_293
  DataType: byte
  OrigDataType: byte
T_294: (in 0x80 : byte)
  Class: Eq_294
  DataType: byte
  OrigDataType: byte
T_295: (in Mem307[ds:(ax_290 & 0x01FF) + 0x02E1:byte] + 0x80 : byte)
  Class: Eq_295
  DataType: byte
  OrigDataType: byte
T_296: (in DPB(eax_315, Mem307[ds:(ax_290 & 0x01FF) + 0x02E1:byte] + 0x80, 0, 8) : word32)
  Class: Eq_273
  DataType: word32
  OrigDataType: word32
T_297: (in fn0C00_0288(DPB(eax_315, Mem307[ds:(ax_290 & 0x01FF) + 0x02E1:byte] + 0x80, 0, 8), ebx_191, ds) : word32)
  Class: Eq_297
  DataType: word32
  OrigDataType: word32
T_298: (in 0x1F3F : word16)
  Class: Eq_298
  DataType: word16
  OrigDataType: word16
T_299: (in DPB(fn0C00_0288(DPB(eax_315, Mem307[ds:(ax_290 & 0x01FF) + 0x02E1:byte] + 0x80, 0, 8), ebx_191, ds), 0x1F3F, 0, 16) : word32)
  Class: Eq_215
  DataType: word32
  OrigDataType: word32
T_300: (in 0x1F3F : word16)
  Class: Eq_300
  DataType: word16
  OrigDataType: word16
T_301: (in 0x0140 : word16)
  Class: Eq_301
  DataType: word16
  OrigDataType: word16
T_302: (in di_318 + 0x0140 : word16)
  Class: Eq_302
  DataType: word16
  OrigDataType: word16
T_303: (in Mem340[ax_184:di_318 + 0x0140:word16] : word16)
  Class: Eq_300
  DataType: word16
  OrigDataType: word16
T_304: (in 0x1F3F : word16)
  Class: Eq_304
  DataType: word16
  OrigDataType: word16
T_305: (in 0x0280 : word16)
  Class: Eq_305
  DataType: word16
  OrigDataType: word16
T_306: (in di_318 + 0x0280 : word16)
  Class: Eq_306
  DataType: word16
  OrigDataType: word16
T_307: (in Mem344[ax_184:di_318 + 0x0280:word16] : word16)
  Class: Eq_304
  DataType: word16
  OrigDataType: word16
T_308: (in 0x0001 : word16)
  Class: Eq_308
  DataType: word16
  OrigDataType: word16
T_309: (in bp_271 - 0x0001 : word16)
  Class: Eq_220
  DataType: word16
  OrigDataType: word16
T_310: (in 0x0000 : word16)
  Class: Eq_220
  DataType: word16
  OrigDataType: word16
T_311: (in bp_271 != 0x0000 : bool)
  Class: Eq_311
  DataType: bool
  OrigDataType: bool
T_312: (in di_349 : word16)
  Class: Eq_312
  DataType: cups16
  OrigDataType: cups16
T_313: (in 0xFA00 : word16)
  Class: Eq_312
  DataType: word16
  OrigDataType: word16
T_314: (in al_368 : byte)
  Class: Eq_314
  DataType: byte
  OrigDataType: byte
T_315: (in 0x0000 : word16)
  Class: Eq_315
  DataType: (memptr T_185 (struct 0001 (0 T_317 t0000)))
  OrigDataType: (memptr T_185 (struct 0001 (0 T_317 t0000)))
T_316: (in di_349 + 0x0000 : word16)
  Class: Eq_316
  DataType: word16
  OrigDataType: word16
T_317: (in Mem381[ax_184:di_349 + 0x0000:byte] : byte)
  Class: Eq_314
  DataType: byte
  OrigDataType: byte
T_318: (in 0x0001 : word16)
  Class: Eq_318
  DataType: word16
  OrigDataType: word16
T_319: (in di_349 - 0x0001 : word16)
  Class: Eq_312
  DataType: word16
  OrigDataType: word16
T_320: (in 0x0144 : word16)
  Class: Eq_312
  DataType: cups16
  OrigDataType: cups16
T_321: (in di_349 >=u 0x0144 : bool)
  Class: Eq_321
  DataType: bool
  OrigDataType: bool
T_322: (in 0x00 : byte)
  Class: Eq_314
  DataType: byte
  OrigDataType: byte
T_323: (in 0x00 : byte)
  Class: Eq_323
  DataType: byte
  OrigDataType: byte
T_324: (in DPB(eax_231, 0x00, 0, 8) : word32)
  Class: Eq_215
  DataType: word32
  OrigDataType: word32
T_325: (in bx_357 : word16)
  Class: Eq_325
  DataType: word16
  OrigDataType: word16
T_326: (in 0x0000 : word16)
  Class: Eq_326
  DataType: (memptr T_185 (struct 0001 (0 T_328 t0000)))
  OrigDataType: (memptr T_185 (struct 0001 (0 T_328 t0000)))
T_327: (in di_349 + 0x0000 : word16)
  Class: Eq_327
  DataType: word16
  OrigDataType: word16
T_328: (in Mem344[ax_184:di_349 + 0x0000:word16] : word16)
  Class: Eq_325
  DataType: word16
  OrigDataType: word16
T_329: (in ax_361 : word16)
  Class: Eq_329
  DataType: word16
  OrigDataType: word16
T_330: (in 0x0141 : word16)
  Class: Eq_330
  DataType: word16
  OrigDataType: word16
T_331: (in di_349 - 0x0141 : word16)
  Class: Eq_331
  DataType: word16
  OrigDataType: word16
T_332: (in Mem344[ax_184:di_349 - 0x0141:word16] : word16)
  Class: Eq_332
  DataType: word16
  OrigDataType: word16
T_333: (in Mem344[ax_184:di_349 - 0x0141:word16] + bx_357 : word16)
  Class: Eq_329
  DataType: 
  OrigDataType: 
T_334: (in al_367 : byte)
  Class: Eq_334
  DataType: 
  OrigDataType: 
T_335: (in (byte) ax_361 : byte)
  Class: Eq_335
  DataType: 
  OrigDataType: 
T_336: (in SLICE(ax_361, byte, 8) : byte)
  Class: Eq_336
  DataType: 
  OrigDataType: 
T_337: (in (byte) ax_361 + SLICE(ax_361, byte, 8) : byte)
  Class: Eq_337
  DataType: 
  OrigDataType: 
T_338: (in 0x02 : byte)
  Class: Eq_338
  DataType: 
  OrigDataType: 
T_339: (in (byte) ax_361 + SLICE(ax_361, byte, 8) >>u 0x02 : word16)
  Class: Eq_339
  DataType: 
  OrigDataType: 
T_340: (in 0x01 : byte)
  Class: Eq_340
  DataType: 
  OrigDataType: 
T_341: (in ((byte) ax_361 + SLICE(ax_361, byte, 8) >>u 0x02) - 0x01 : byte)
  Class: Eq_334
  DataType: 
  OrigDataType: 
T_342: (in DPB(ebx_191, bx_357, 0, 16) : word32)
  Class: Eq_191
  DataType: 
  OrigDataType: 
T_343: (in 0x01 : byte)
  Class: Eq_343
  DataType: 
  OrigDataType: 
T_344: (in al_367 - 0x01 : byte)
  Class: Eq_314
  DataType: 
  OrigDataType: 
T_345: (in al_367 - 0x01 : byte)
  Class: Eq_345
  DataType: 
  OrigDataType: 
T_346: (in DPB(eax_231, al_367 - 0x01, 0, 8) : word32)
  Class: Eq_215
  DataType: 
  OrigDataType: 
T_347: (in 0x01 : byte)
  Class: Eq_334
  DataType: 
  OrigDataType: 
T_348: (in al_367 >= 0x01 : bool)
  Class: Eq_348
  DataType: 
  OrigDataType: 
T_349: (in eax_388 : word32)
  Class: Eq_349
  DataType: 
  OrigDataType: 
T_350: (in 0x00 : byte)
  Class: Eq_350
  DataType: 
  OrigDataType: 
T_351: (in DPB(eax_231, 0x00, 0, 8) : word32)
  Class: Eq_349
  DataType: 
  OrigDataType: 
T_352: (in 0x00 : byte)
  Class: Eq_352
  DataType: 
  OrigDataType: 
T_353: (in 0x0000 : word16)
  Class: Eq_353
  DataType: 
  OrigDataType: 
T_354: (in di_349 + 0x0000 : word16)
  Class: Eq_354
  DataType: 
  OrigDataType: 
T_355: (in Mem393[ax_184:di_349 + 0x0000:byte] : byte)
  Class: Eq_352
  DataType: 
  OrigDataType: 
T_356: (in 0x0001 : word16)
  Class: Eq_356
  DataType: 
  OrigDataType: 
T_357: (in di_349 - 0x0001 : word16)
  Class: Eq_312
  DataType: 
  OrigDataType: 
T_358: (in 0x0000 : word16)
  Class: Eq_312
  DataType: 
  OrigDataType: 
T_359: (in di_349 >= 0x0000 : bool)
  Class: Eq_359
  DataType: 
  OrigDataType: 
T_360: (in di_405 : word16)
  Class: Eq_360
  DataType: 
  OrigDataType: 
T_361: (in 0x0001 : word16)
  Class: Eq_361
  DataType: 
  OrigDataType: 
T_362: (in di_349 + 0x0001 : word16)
  Class: Eq_360
  DataType: 
  OrigDataType: 
T_363: (in si_406 : word16)
  Class: Eq_363
  DataType: 
  OrigDataType: 
T_364: (in 0x0000 : word16)
  Class: Eq_363
  DataType: 
  OrigDataType: 
T_365: (in cx_409 : word16)
  Class: Eq_365
  DataType: 
  OrigDataType: 
T_366: (in 0x3E80 : word16)
  Class: Eq_365
  DataType: 
  OrigDataType: 
T_367: (in ax_430 : word16)
  Class: Eq_367
  DataType: 
  OrigDataType: 
T_368: (in cs : selector)
  Class: Eq_55
  DataType: 
  OrigDataType: 
T_369: (in 0x02DA : word16)
  Class: Eq_369
  DataType: 
  OrigDataType: 
T_370: (in Mem393[cs:0x02DA:word16] : word16)
  Class: Eq_367
  DataType: 
  OrigDataType: 
T_371: (in eax_434 : word32)
  Class: Eq_371
  DataType: 
  OrigDataType: 
T_372: (in DPB(eax_388, ax_430, 0, 16) : word32)
  Class: Eq_371
  DataType: 
  OrigDataType: 
T_373: (in 0x0000 : word16)
  Class: Eq_367
  DataType: 
  OrigDataType: 
T_374: (in ax_430 != 0x0000 : bool)
  Class: Eq_374
  DataType: 
  OrigDataType: 
T_375: (in 0x0000 : word16)
  Class: Eq_375
  DataType: 
  OrigDataType: 
T_376: (in si_406 + 0x0000 : word16)
  Class: Eq_376
  DataType: 
  OrigDataType: 
T_377: (in Mem393[ax_184:si_406 + 0x0000:word32] : word32)
  Class: Eq_377
  DataType: 
  OrigDataType: 
T_378: (in 0xA000 : selector)
  Class: Eq_378
  DataType: 
  OrigDataType: 
T_379: (in 0x0000 : word16)
  Class: Eq_379
  DataType: 
  OrigDataType: 
T_380: (in di_405 + 0x0000 : word16)
  Class: Eq_380
  DataType: 
  OrigDataType: 
T_381: (in Mem418[0xA000:di_405 + 0x0000:word32] : word32)
  Class: Eq_377
  DataType: 
  OrigDataType: 
T_382: (in 0x0004 : word16)
  Class: Eq_382
  DataType: 
  OrigDataType: 
T_383: (in si_406 + 0x0004 : word16)
  Class: Eq_363
  DataType: 
  OrigDataType: 
T_384: (in 0x0004 : word16)
  Class: Eq_384
  DataType: 
  OrigDataType: 
T_385: (in di_405 + 0x0004 : word16)
  Class: Eq_360
  DataType: 
  OrigDataType: 
T_386: (in 0x0001 : word16)
  Class: Eq_386
  DataType: 
  OrigDataType: 
T_387: (in cx_409 - 0x0001 : word16)
  Class: Eq_365
  DataType: 
  OrigDataType: 
T_388: (in 0x0000 : word16)
  Class: Eq_365
  DataType: 
  OrigDataType: 
T_389: (in cx_409 == 0x0000 : bool)
  Class: Eq_389
  DataType: 
  OrigDataType: 
T_390: (in ax_443 : word16)
  Class: Eq_390
  DataType: 
  OrigDataType: 
T_391: (in 0x02DA : word16)
  Class: Eq_391
  DataType: 
  OrigDataType: 
T_392: (in Mem393[cs:0x02DA:word16] : word16)
  Class: Eq_390
  DataType: 
  OrigDataType: 
T_393: (in ax_444 : word16)
  Class: Eq_393
  DataType: 
  OrigDataType: 
T_394: (in 0x0001 : word16)
  Class: Eq_394
  DataType: 
  OrigDataType: 
T_395: (in ax_443 + 0x0001 : word16)
  Class: Eq_393
  DataType: 
  OrigDataType: 
T_396: (in eax_447 : word32)
  Class: Eq_396
  DataType: 
  OrigDataType: 
T_397: (in ax_443 + 0x0001 : word16)
  Class: Eq_397
  DataType: 
  OrigDataType: 
T_398: (in DPB(eax_434, ax_443 + 0x0001, 0, 16) : word32)
  Class: Eq_396
  DataType: 
  OrigDataType: 
T_399: (in 0xFE71 : word16)
  Class: Eq_390
  DataType: 
  OrigDataType: 
T_400: (in ax_443 <u 0xFE71 : bool)
  Class: Eq_400
  DataType: 
  OrigDataType: 
T_401: (in 0x7DA0 : word16)
  Class: Eq_401
  DataType: 
  OrigDataType: 
T_402: (in 0x02DD : word16)
  Class: Eq_402
  DataType: 
  OrigDataType: 
T_403: (in Mem498[cs:0x02DD:word16] : word16)
  Class: Eq_401
  DataType: 
  OrigDataType: 
T_404: (in 0x02DF : word16)
  Class: Eq_404
  DataType: 
  OrigDataType: 
T_405: (in Mem498[cs:0x02DF:byte] : byte)
  Class: Eq_405
  DataType: 
  OrigDataType: 
T_406: (in 0x02 : byte)
  Class: Eq_406
  DataType: 
  OrigDataType: 
T_407: (in Mem498[cs:0x02DF:byte] + 0x02 : byte)
  Class: Eq_407
  DataType: 
  OrigDataType: 
T_408: (in Mem500[cs:0x02DF:byte] : byte)
  Class: Eq_407
  DataType: 
  OrigDataType: 
T_409: (in ax_503 : word16)
  Class: Eq_409
  DataType: 
  OrigDataType: 
T_410: (in 0x02DF : word16)
  Class: Eq_410
  DataType: 
  OrigDataType: 
T_411: (in Mem500[cs:0x02DF:word16] : word16)
  Class: Eq_411
  DataType: 
  OrigDataType: 
T_412: (in 0x0297 : word16)
  Class: Eq_412
  DataType: 
  OrigDataType: 
T_413: (in Mem500[cs:0x02DF:word16] + 0x0297 : word16)
  Class: Eq_413
  DataType: 
  OrigDataType: 
T_414: (in Mem500[cs:Mem500[cs:0x02DF:word16] + 0x0297:word16] : word16)
  Class: Eq_409
  DataType: 
  OrigDataType: 
T_415: (in al_504 : byte)
  Class: Eq_118
  DataType: 
  OrigDataType: 
T_416: (in (byte) ax_503 : byte)
  Class: Eq_118
  DataType: 
  OrigDataType: 
T_417: (in ah_505 : byte)
  Class: Eq_417
  DataType: 
  OrigDataType: 
T_418: (in SLICE(ax_503, byte, 8) : byte)
  Class: Eq_417
  DataType: 
  OrigDataType: 
T_419: (in DPB(eax_434, al_504, 0, 8) : word32)
  Class: Eq_371
  DataType: 
  OrigDataType: 
T_420: (in 0x00 : byte)
  Class: Eq_118
  DataType: 
  OrigDataType: 
T_421: (in al_504 == 0x00 : bool)
  Class: Eq_421
  DataType: 
  OrigDataType: 
T_422: (in 0x02D1 : word16)
  Class: Eq_422
  DataType: 
  OrigDataType: 
T_423: (in Mem515[cs:0x02D1:byte] : byte)
  Class: Eq_118
  DataType: 
  OrigDataType: 
T_424: (in 0x02D7 : word16)
  Class: Eq_424
  DataType: 
  OrigDataType: 
T_425: (in Mem516[cs:0x02D7:byte] : byte)
  Class: Eq_417
  DataType: 
  OrigDataType: 
T_426: (in 0x20 : byte)
  Class: Eq_426
  DataType: 
  OrigDataType: 
T_427: (in 0x02D6 : word16)
  Class: Eq_427
  DataType: 
  OrigDataType: 
T_428: (in Mem517[cs:0x02D6:byte] : byte)
  Class: Eq_426
  DataType: 
  OrigDataType: 
T_429: (in 0x02DA : word16)
  Class: Eq_429
  DataType: 
  OrigDataType: 
T_430: (in Mem457[cs:0x02DA:word16] : word16)
  Class: Eq_393
  DataType: 
  OrigDataType: 
T_431: (in al_460 : byte)
  Class: Eq_431
  DataType: 
  OrigDataType: 
T_432: (in 0x02DC : word16)
  Class: Eq_432
  DataType: 
  OrigDataType: 
T_433: (in Mem457[cs:0x02DC:byte] : byte)
  Class: Eq_433
  DataType: 
  OrigDataType: 
T_434: (in 0x01 : byte)
  Class: Eq_434
  DataType: 
  OrigDataType: 
T_435: (in Mem457[cs:0x02DC:byte] + 0x01 : byte)
  Class: Eq_435
  DataType: 
  OrigDataType: 
T_436: (in 0x03 : byte)
  Class: Eq_436
  DataType: 
  OrigDataType: 
T_437: (in Mem457[cs:0x02DC:byte] + 0x01 & 0x03 : byte)
  Class: Eq_431
  DataType: 
  OrigDataType: 
T_438: (in eax_463 : word32)
  Class: Eq_438
  DataType: 
  OrigDataType: 
T_439: (in DPB(eax_447, al_460, 0, 8) : word32)
  Class: Eq_438
  DataType: 
  OrigDataType: 
T_440: (in 0x00 : byte)
  Class: Eq_431
  DataType: 
  OrigDataType: 
T_441: (in al_460 != 0x00 : bool)
  Class: Eq_441
  DataType: 
  OrigDataType: 
T_442: (in 0x0000 : word16)
  Class: Eq_393
  DataType: 
  OrigDataType: 
T_443: (in 0x0000 : word16)
  Class: Eq_443
  DataType: 
  OrigDataType: 
T_444: (in DPB(eax_434, 0x0000, 0, 16) : word32)
  Class: Eq_396
  DataType: 
  OrigDataType: 
T_445: (in 0x02DC : word16)
  Class: Eq_445
  DataType: 
  OrigDataType: 
T_446: (in Mem469[cs:0x02DC:byte] : byte)
  Class: Eq_431
  DataType: 
  OrigDataType: 
T_447: (in 0x02DD : word16)
  Class: Eq_447
  DataType: 
  OrigDataType: 
T_448: (in Mem457[cs:0x02DD:word16] : word16)
  Class: Eq_448
  DataType: 
  OrigDataType: 
T_449: (in 0x0141 : word16)
  Class: Eq_449
  DataType: 
  OrigDataType: 
T_450: (in Mem457[cs:0x02DD:word16] - 0x0141 : word16)
  Class: Eq_450
  DataType: 
  OrigDataType: 
T_451: (in Mem488[cs:0x02DD:word16] : word16)
  Class: Eq_450
  DataType: 
  OrigDataType: 
T_452: (in al_473 : byte)
  Class: Eq_452
  DataType: 
  OrigDataType: 
T_453: (in __inb : ptr32)
  Class: Eq_453
  DataType: 
  OrigDataType: 
T_454: (in 0x03DA : word16)
  Class: Eq_454
  DataType: 
  OrigDataType: 
T_455: (in __inb(0x03DA) : byte)
  Class: Eq_452
  DataType: 
  OrigDataType: 
T_456: (in eax_527 : word32)
  Class: Eq_438
  DataType: 
  OrigDataType: 
T_457: (in DPB(eax_527, al_473, 0, 8) : word32)
  Class: Eq_438
  DataType: 
  OrigDataType: 
T_458: (in 0x08 : byte)
  Class: Eq_458
  DataType: 
  OrigDataType: 
T_459: (in al_473 & 0x08 : byte)
  Class: Eq_459
  DataType: 
  OrigDataType: 
T_460: (in 0x00 : byte)
  Class: Eq_459
  DataType: 
  OrigDataType: 
T_461: (in (al_473 & 0x08) == 0x00 : bool)
  Class: Eq_461
  DataType: 
  OrigDataType: 
T_462: (in al_479 : byte)
  Class: Eq_462
  DataType: 
  OrigDataType: 
T_463: (in __inb : ptr32)
  Class: Eq_463
  DataType: 
  OrigDataType: 
T_464: (in 0x60 : byte)
  Class: Eq_464
  DataType: 
  OrigDataType: 
T_465: (in __inb(0x60) : byte)
  Class: Eq_462
  DataType: 
  OrigDataType: 
T_466: (in 0x01 : byte)
  Class: Eq_466
  DataType: 
  OrigDataType: 
T_467: (in al_479 - 0x01 : byte)
  Class: Eq_118
  DataType: 
  OrigDataType: 
T_468: (in al_479 - 0x01 : byte)
  Class: Eq_468
  DataType: 
  OrigDataType: 
T_469: (in DPB(eax_527, al_479 - 0x01, 0, 8) : word32)
  Class: Eq_215
  DataType: 
  OrigDataType: 
T_470: (in 0x01 : byte)
  Class: Eq_462
  DataType: 
  OrigDataType: 
T_471: (in al_479 != 0x01 : bool)
  Class: Eq_471
  DataType: 
  OrigDataType: 
T_472: (in al : byte)
  Class: Eq_472
  DataType: 
  OrigDataType: 
T_473: (in DPB(ebx, al, 0, 8) : word32)
  Class: Eq_473
  DataType: 
  OrigDataType: 
T_474: (in 0x02DA : word16)
  Class: Eq_474
  DataType: 
  OrigDataType: 
T_475: (in Mem0[ds:0x02DA:word16] : word16)
  Class: Eq_475
  DataType: 
  OrigDataType: 
T_476: (in DPB(eax, Mem0[ds:0x02DA:word16], 0, 16) : word32)
  Class: Eq_476
  DataType: 
  OrigDataType: 
T_477: (in 0x00000008 : word32)
  Class: Eq_477
  DataType: 
  OrigDataType: 
T_478: (in DPB(eax, Mem0[ds:0x02DA:word16], 0, 16) << 0x00000008 : word32)
  Class: Eq_478
  DataType: 
  OrigDataType: 
T_479: (in DPB(ebx, al, 0, 8) *u (DPB(eax, Mem0[ds:0x02DA:word16], 0, 16) << 0x00000008) : uint64)
  Class: Eq_479
  DataType: 
  OrigDataType: 
T_480: (in (word32) (DPB(ebx, al, 0, 8) *u (DPB(eax, Mem0[ds:0x02DA:word16], 0, 16) << 0x00000008)) : word32)
  Class: Eq_480
  DataType: 
  OrigDataType: 
T_481: (in 0x00000011 : word32)
  Class: Eq_481
  DataType: 
  OrigDataType: 
T_482: (in (word32) (DPB(ebx, al, 0, 8) *u (DPB(eax, Mem0[ds:0x02DA:word16], 0, 16) << 0x00000008)) >>u 0x00000011 : word32)
  Class: Eq_482
  DataType: 
  OrigDataType: 
T_483:
  Class: Eq_483
  DataType: 
  OrigDataType: (struct 0001 (0 T_16 t0000))
T_484:
  Class: Eq_484
  DataType: 
  OrigDataType: (struct 0001 (0 T_58 t0000))
T_485:
  Class: Eq_485
  DataType: 
  OrigDataType: (struct 0001 (0 T_200 t0000))
T_486:
  Class: Eq_486
  DataType: 
  OrigDataType: (struct 0001 (0 T_225 t0000))
*/
