// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_248/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr (struct "Globals"))
  OrigDataType: (ptr (struct "Globals"))
T_2: (in di_14 : word16)
  Class: Eq_2
  DataType: (memptr T_28 (struct 0002 (0 T_31 t0000)))
  OrigDataType: (memptr T_28 (struct 0002 (0 T_31 t0000)))
T_3: (in 0x0200 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_4: (in cx_15 : word16)
  Class: Eq_4
  DataType: word16
  OrigDataType: word16
T_5: (in cx : word16)
  Class: Eq_5
  DataType: word16
  OrigDataType: word16
T_6: (in 0x10 : byte)
  Class: Eq_6
  DataType: byte
  OrigDataType: byte
T_7: (in DPB(cx, 0x10, 8, 8) : word16)
  Class: Eq_4
  DataType: word16
  OrigDataType: word16
T_8: (in bios_video_set_mode : ptr32)
  Class: Eq_8
  DataType: (ptr (fn T_12 (T_11)))
  OrigDataType: (ptr (fn T_12 (T_11)))
T_9: (in signature of bios_video_set_mode : void)
  Class: Eq_8
  DataType: 
  OrigDataType: 
T_10: (in al : byte)
  Class: Eq_10
  DataType: byte
  OrigDataType: byte
T_11: (in 0x03 : byte)
  Class: Eq_10
  DataType: byte
  OrigDataType: byte
T_12: (in bios_video_set_mode(0x03) : void)
  Class: Eq_12
  DataType: void
  OrigDataType: void
T_13: (in ax_19 : word16)
  Class: Eq_13
  DataType: word16
  OrigDataType: word16
T_14: (in ax : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_15: (in 0x03 : byte)
  Class: Eq_15
  DataType: byte
  OrigDataType: byte
T_16: (in DPB(ax, 0x03, 0, 8) : word16)
  Class: Eq_13
  DataType: word16
  OrigDataType: word16
T_17: (in bp_111 : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_18: (in 0x06D1 : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_19: (in cl_23 : byte)
  Class: Eq_19
  DataType: byte
  OrigDataType: byte
T_20: (in 0xFF : byte)
  Class: Eq_19
  DataType: byte
  OrigDataType: byte
T_21: (in cx_100 : word16)
  Class: Eq_21
  DataType: word16
  OrigDataType: word16
T_22: (in 0xFF : byte)
  Class: Eq_22
  DataType: byte
  OrigDataType: byte
T_23: (in DPB(cx_15, 0xFF, 0, 8) : word16)
  Class: Eq_21
  DataType: word16
  OrigDataType: word16
T_24: (in si_28 : word16)
  Class: Eq_13
  DataType: word16
  OrigDataType: word16
T_25: (in bx : word16)
  Class: Eq_25
  DataType: (ptr (struct (46C T_27 t046C)))
  OrigDataType: (ptr (struct (46C T_27 t046C)))
T_26: (in 0x046C : word16)
  Class: Eq_26
  DataType: (memptr T_25 (struct (0 T_27 t0000)))
  OrigDataType: (memptr T_25 (struct (0 T_27 t0000)))
T_27: (in Mem0[bx:0x046C:word16] : word16)
  Class: Eq_13
  DataType: word16
  OrigDataType: word16
T_28: (in es : selector)
  Class: Eq_28
  DataType: (ptr (segment (200 (arr T_503) a0200)))
  OrigDataType: (ptr (segment (200 (arr T_503) a0200)))
T_29: (in 0x0000 : word16)
  Class: Eq_29
  DataType: word16
  OrigDataType: word16
T_30: (in di_14 + 0x0000 : word16)
  Class: Eq_30
  DataType: word16
  OrigDataType: word16
T_31: (in Mem12[es:di_14 + 0x0000:word16] : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_32: (in 0x0002 : word16)
  Class: Eq_32
  DataType: word16
  OrigDataType: word16
T_33: (in di_14 + 0x0002 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_34: (in 0x0001 : word16)
  Class: Eq_34
  DataType: word16
  OrigDataType: word16
T_35: (in cx_15 - 0x0001 : word16)
  Class: Eq_4
  DataType: word16
  OrigDataType: word16
T_36: (in 0x0000 : word16)
  Class: Eq_4
  DataType: word16
  OrigDataType: word16
T_37: (in cx_15 == 0x0000 : bool)
  Class: Eq_37
  DataType: bool
  OrigDataType: bool
T_38: (in si_46 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_39: (in __rcl : ptr32)
  Class: Eq_39
  DataType: (ptr (fn T_43 (T_41, T_19, T_42)))
  OrigDataType: (ptr (fn T_43 (T_41, T_19, T_42)))
T_40: (in 0x0001 : word16)
  Class: Eq_40
  DataType: word16
  OrigDataType: word16
T_41: (in si_28 + 0x0001 : word16)
  Class: Eq_41
  DataType: word16
  OrigDataType: word16
T_42: (in C : byte)
  Class: Eq_42
  DataType: byte
  OrigDataType: byte
T_43: (in __rcl(si_28 + 0x0001, cl_23, C) : word16)
  Class: Eq_43
  DataType: word16
  OrigDataType: word16
T_44: (in dx : word16)
  Class: Eq_44
  DataType: uint16
  OrigDataType: uint16
T_45: (in __rcl(si_28 + 0x0001, cl_23, C) + dx : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_46: (in dx_ax_51 : word32)
  Class: Eq_46
  DataType: word32
  OrigDataType: word32
T_47: (in 0x0000 : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_48: (in SEQ(0x0000, si_46) : word32)
  Class: Eq_46
  DataType: word32
  OrigDataType: word32
T_49: (in di_59 : word16)
  Class: Eq_49
  DataType: (memptr T_28 (struct (0 T_64 t0000)))
  OrigDataType: (memptr T_28 (struct (0 T_64 t0000)))
T_50: (in 0x06D1 : word16)
  Class: Eq_50
  DataType: word16
  OrigDataType: word16
T_51: (in dx_ax_51 % 0x06D1 : uint16)
  Class: Eq_51
  DataType: uint16
  OrigDataType: uint16
T_52: (in 0x0251 : word16)
  Class: Eq_52
  DataType: word16
  OrigDataType: word16
T_53: (in dx_ax_51 % 0x06D1 + 0x0251 : word16)
  Class: Eq_49
  DataType: word16
  OrigDataType: word16
T_54: (in dx_ax_51 % 0x06D1 : uint16)
  Class: Eq_44
  DataType: uint16
  OrigDataType: uint16
T_55: (in dx_ax_51 % 0x06D1 : uint16)
  Class: Eq_55
  DataType: uint16
  OrigDataType: uint16
T_56: (in SEQ(dx_ax_51 % 0x06D1, si_46) : word32)
  Class: Eq_56
  DataType: uint32
  OrigDataType: uint32
T_57: (in 0x06D1 : word16)
  Class: Eq_57
  DataType: uint16
  OrigDataType: uint16
T_58: (in SEQ(dx_ax_51 % 0x06D1, si_46) /u 0x06D1 : uint16)
  Class: Eq_58
  DataType: uint16
  OrigDataType: uint16
T_59: (in 0x01 : byte)
  Class: Eq_59
  DataType: byte
  OrigDataType: byte
T_60: (in DPB(SEQ(dx_ax_51 % 0x06D1, si_46) /u 0x06D1, 0x01, 0, 8) : word16)
  Class: Eq_13
  DataType: word16
  OrigDataType: word16
T_61: (in cs : selector)
  Class: Eq_28
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_62: (in 0x0000 : word16)
  Class: Eq_62
  DataType: word16
  OrigDataType: word16
T_63: (in di_59 + 0x0000 : word16)
  Class: Eq_63
  DataType: word16
  OrigDataType: word16
T_64: (in Mem0[cs:di_59 + 0x0000:byte] : byte)
  Class: Eq_64
  DataType: byte
  OrigDataType: byte
T_65: (in 0x01 : byte)
  Class: Eq_64
  DataType: byte
  OrigDataType: byte
T_66: (in Mem0[cs:di_59 + 0x0000:byte] - 0x01 : byte)
  Class: Eq_66
  DataType: byte
  OrigDataType: byte
T_67: (in cond(Mem0[cs:di_59 + 0x0000:byte] - 0x01) : byte)
  Class: Eq_42
  DataType: byte
  OrigDataType: byte
T_68: (in 0x0000 : word16)
  Class: Eq_68
  DataType: word16
  OrigDataType: word16
T_69: (in di_59 + 0x0000 : word16)
  Class: Eq_69
  DataType: word16
  OrigDataType: word16
T_70: (in Mem0[cs:di_59 + 0x0000:byte] : byte)
  Class: Eq_64
  DataType: byte
  OrigDataType: byte
T_71: (in Mem0[cs:di_59 + 0x0000:byte] == 0x01 : bool)
  Class: Eq_71
  DataType: bool
  OrigDataType: bool
T_72: (in 0x01 : byte)
  Class: Eq_64
  DataType: byte
  OrigDataType: byte
T_73: (in 0x0000 : word16)
  Class: Eq_73
  DataType: word16
  OrigDataType: word16
T_74: (in di_59 + 0x0000 : word16)
  Class: Eq_74
  DataType: word16
  OrigDataType: word16
T_75: (in Mem67[es:di_59 + 0x0000:byte] : byte)
  Class: Eq_64
  DataType: byte
  OrigDataType: byte
T_76: (in 0x0001 : word16)
  Class: Eq_76
  DataType: word16
  OrigDataType: word16
T_77: (in cx_100 - 0x0001 : word16)
  Class: Eq_21
  DataType: word16
  OrigDataType: word16
T_78: (in (byte) cx_100 : byte)
  Class: Eq_19
  DataType: byte
  OrigDataType: byte
T_79: (in 0x0000 : word16)
  Class: Eq_21
  DataType: word16
  OrigDataType: word16
T_80: (in cx_100 != 0x0000 : bool)
  Class: Eq_80
  DataType: bool
  OrigDataType: bool
T_81: (in di_76 : word16)
  Class: Eq_81
  DataType: (memptr T_96 (struct 0002 (0 T_99 t0000)))
  OrigDataType: (memptr T_96 (struct 0002 (0 T_99 t0000)))
T_82: (in 0x0000 : word16)
  Class: Eq_81
  DataType: word16
  OrigDataType: word16
T_83: (in dx_103 : word16)
  Class: Eq_83
  DataType: word16
  OrigDataType: word16
T_84: (in dx_ax_51 % 0x06D1 : uint16)
  Class: Eq_84
  DataType: uint16
  OrigDataType: uint16
T_85: (in 0x19 : byte)
  Class: Eq_85
  DataType: byte
  OrigDataType: byte
T_86: (in DPB(dx_ax_51 % 0x06D1, 0x19, 0, 8) : word16)
  Class: Eq_83
  DataType: word16
  OrigDataType: word16
T_87: (in 0x0001 : word16)
  Class: Eq_87
  DataType: word16
  OrigDataType: word16
T_88: (in dx_103 - 0x0001 : word16)
  Class: Eq_83
  DataType: word16
  OrigDataType: word16
T_89: (in dl_105 : byte)
  Class: Eq_89
  DataType: byte
  OrigDataType: byte
T_90: (in (byte) dx_103 : byte)
  Class: Eq_89
  DataType: byte
  OrigDataType: byte
T_91: (in dh_106 : byte)
  Class: Eq_91
  DataType: byte
  OrigDataType: byte
T_92: (in SLICE(dx_103, byte, 8) : byte)
  Class: Eq_91
  DataType: byte
  OrigDataType: byte
T_93: (in 0x0000 : word16)
  Class: Eq_83
  DataType: word16
  OrigDataType: word16
T_94: (in dx_103 != 0x0000 : bool)
  Class: Eq_94
  DataType: bool
  OrigDataType: bool
T_95: (in 0x072D : word16)
  Class: Eq_95
  DataType: word16
  OrigDataType: word16
T_96: (in 0xB800 : selector)
  Class: Eq_96
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_97: (in 0x0000 : word16)
  Class: Eq_97
  DataType: word16
  OrigDataType: word16
T_98: (in di_76 + 0x0000 : word16)
  Class: Eq_98
  DataType: word16
  OrigDataType: word16
T_99: (in Mem98[0xB800:di_76 + 0x0000:word16] : word16)
  Class: Eq_95
  DataType: word16
  OrigDataType: word16
T_100: (in 0x0002 : word16)
  Class: Eq_100
  DataType: word16
  OrigDataType: word16
T_101: (in di_76 + 0x0002 : word16)
  Class: Eq_81
  DataType: word16
  OrigDataType: word16
T_102: (in 0x0001 : word16)
  Class: Eq_102
  DataType: word16
  OrigDataType: word16
T_103: (in cx_100 - 0x0001 : word16)
  Class: Eq_21
  DataType: word16
  OrigDataType: word16
T_104: (in 0x0000 : word16)
  Class: Eq_21
  DataType: word16
  OrigDataType: word16
T_105: (in cx_100 == 0x0000 : bool)
  Class: Eq_105
  DataType: bool
  OrigDataType: bool
T_106: (in 0x50 : byte)
  Class: Eq_106
  DataType: byte
  OrigDataType: byte
T_107: (in DPB(cx_100, 0x50, 0, 8) : word16)
  Class: Eq_21
  DataType: word16
  OrigDataType: word16
T_108: (in ah_119 : byte)
  Class: Eq_108
  DataType: byte
  OrigDataType: byte
T_109: (in di_118 : word16)
  Class: Eq_109
  DataType: (memptr T_96 (struct 0001 (0 T_221 t0000)))
  OrigDataType: (memptr T_96 (struct 0001 (0 T_221 t0000)))
T_110: (in si_120 : word16)
  Class: Eq_110
  DataType: (memptr T_61 (struct 0001 (0 T_196 t0000)))
  OrigDataType: (memptr T_61 (struct 0001 (0 T_196 t0000)))
T_111: (in fn0C00_01E8 : ptr32)
  Class: Eq_111
  DataType: (ptr (fn T_118 (T_83, T_116, T_117)))
  OrigDataType: (ptr (fn T_118 (T_83, T_116, T_117)))
T_112: (in signature of fn0C00_01E8 : void)
  Class: Eq_111
  DataType: 
  OrigDataType: 
T_113: (in dx : word16)
  Class: Eq_83
  DataType: word16
  OrigDataType: word16
T_114: (in diOut : ptr16)
  Class: Eq_114
  DataType: ptr16
  OrigDataType: ptr16
T_115: (in ahOut : ptr16)
  Class: Eq_115
  DataType: ptr16
  OrigDataType: ptr16
T_116: (in out di_118 : ptr16)
  Class: Eq_114
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_117: (in out ah_119 : ptr16)
  Class: Eq_115
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_118: (in fn0C00_01E8(dx_103, out di_118, out ah_119) : word16)
  Class: Eq_110
  DataType: word16
  OrigDataType: word16
T_119: (in bios_video_set_cursor_position : ptr32)
  Class: Eq_119
  DataType: (ptr (fn T_125 (T_124, T_91, T_89)))
  OrigDataType: (ptr (fn T_125 (T_124, T_91, T_89)))
T_120: (in signature of bios_video_set_cursor_position : void)
  Class: Eq_119
  DataType: 
  OrigDataType: 
T_121: (in bh : byte)
  Class: Eq_121
  DataType: byte
  OrigDataType: byte
T_122: (in dh : byte)
  Class: Eq_91
  DataType: byte
  OrigDataType: byte
T_123: (in dl : byte)
  Class: Eq_89
  DataType: byte
  OrigDataType: byte
T_124: (in bh : byte)
  Class: Eq_121
  DataType: byte
  OrigDataType: byte
T_125: (in bios_video_set_cursor_position(bh, dh_106, dl_105) : void)
  Class: Eq_125
  DataType: void
  OrigDataType: void
T_126: (in ax_123 : word16)
  Class: Eq_126
  DataType: word16
  OrigDataType: word16
T_127: (in msdos_character_input_without_echo : ptr32)
  Class: Eq_127
  DataType: (ptr (fn T_129 ()))
  OrigDataType: (ptr (fn T_129 ()))
T_128: (in signature of msdos_character_input_without_echo : void)
  Class: Eq_127
  DataType: 
  OrigDataType: 
T_129: (in msdos_character_input_without_echo() : byte)
  Class: Eq_129
  DataType: byte
  OrigDataType: byte
T_130: (in (int16) msdos_character_input_without_echo() : int16)
  Class: Eq_126
  DataType: int16
  OrigDataType: int16
T_131: (in al_124 : byte)
  Class: Eq_131
  DataType: byte
  OrigDataType: byte
T_132: (in (byte) ax_123 : byte)
  Class: Eq_131
  DataType: byte
  OrigDataType: byte
T_133: (in ax_127 : word16)
  Class: Eq_133
  DataType: word16
  OrigDataType: word16
T_134: (in 0x31 : byte)
  Class: Eq_134
  DataType: byte
  OrigDataType: byte
T_135: (in al_124 - 0x31 : byte)
  Class: Eq_135
  DataType: byte
  OrigDataType: byte
T_136: (in DPB(ax_123, al_124 - 0x31, 0, 8) : word16)
  Class: Eq_133
  DataType: word16
  OrigDataType: word16
T_137: (in 0x31 : byte)
  Class: Eq_131
  DataType: byte
  OrigDataType: byte
T_138: (in al_124 != 0x31 : bool)
  Class: Eq_138
  DataType: bool
  OrigDataType: bool
T_139: (in 0x0001 : word16)
  Class: Eq_133
  DataType: word16
  OrigDataType: word16
T_140: (in ax_127 != 0x0001 : bool)
  Class: Eq_140
  DataType: bool
  OrigDataType: bool
T_141: (in 0x0001 : word16)
  Class: Eq_141
  DataType: word16
  OrigDataType: word16
T_142: (in dx_103 - 0x0001 : word16)
  Class: Eq_83
  DataType: word16
  OrigDataType: word16
T_143: (in (byte) dx_103 : byte)
  Class: Eq_89
  DataType: byte
  OrigDataType: byte
T_144: (in SLICE(dx_103, byte, 8) : byte)
  Class: Eq_91
  DataType: byte
  OrigDataType: byte
T_145: (in 0x0002 : word16)
  Class: Eq_133
  DataType: word16
  OrigDataType: word16
T_146: (in ax_127 != 0x0002 : bool)
  Class: Eq_146
  DataType: bool
  OrigDataType: bool
T_147: (in 0x01 : byte)
  Class: Eq_147
  DataType: byte
  OrigDataType: byte
T_148: (in dh_106 + 0x01 : byte)
  Class: Eq_91
  DataType: byte
  OrigDataType: byte
T_149: (in DPB(dx_103, dh_106, 8, 8) : word16)
  Class: Eq_83
  DataType: word16
  OrigDataType: word16
T_150: (in ax_151 : word16)
  Class: Eq_150
  DataType: word16
  OrigDataType: word16
T_151: (in 0x0003 : word16)
  Class: Eq_151
  DataType: word16
  OrigDataType: word16
T_152: (in ax_127 - 0x0003 : word16)
  Class: Eq_150
  DataType: word16
  OrigDataType: word16
T_153: (in 0x0003 : word16)
  Class: Eq_133
  DataType: word16
  OrigDataType: word16
T_154: (in ax_127 != 0x0003 : bool)
  Class: Eq_154
  DataType: bool
  OrigDataType: bool
T_155: (in 0x0001 : word16)
  Class: Eq_155
  DataType: word16
  OrigDataType: word16
T_156: (in dx_103 + 0x0001 : word16)
  Class: Eq_83
  DataType: word16
  OrigDataType: word16
T_157: (in (byte) dx_103 : byte)
  Class: Eq_89
  DataType: byte
  OrigDataType: byte
T_158: (in SLICE(dx_103, byte, 8) : byte)
  Class: Eq_91
  DataType: byte
  OrigDataType: byte
T_159: (in ax_163 : word16)
  Class: Eq_159
  DataType: word16
  OrigDataType: word16
T_160: (in 0x0001 : word16)
  Class: Eq_160
  DataType: word16
  OrigDataType: word16
T_161: (in ax_151 - 0x0001 : word16)
  Class: Eq_159
  DataType: word16
  OrigDataType: word16
T_162: (in 0x0000 : word16)
  Class: Eq_159
  DataType: word16
  OrigDataType: word16
T_163: (in ax_163 != 0x0000 : bool)
  Class: Eq_163
  DataType: bool
  OrigDataType: bool
T_164: (in fn0C00_0181 : ptr32)
  Class: Eq_164
  DataType: (ptr (fn T_181 (T_83, T_17, T_124, T_96, T_61, T_176, T_177, T_178, T_179, T_180)))
  OrigDataType: (ptr (fn T_181 (T_83, T_17, T_124, T_96, T_61, T_176, T_177, T_178, T_179, T_180)))
T_165: (in signature of fn0C00_0181 : void)
  Class: Eq_164
  DataType: 
  OrigDataType: 
T_166: (in dx : word16)
  Class: Eq_83
  DataType: word16
  OrigDataType: word16
T_167: (in bp : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_168: (in bh : byte)
  Class: Eq_121
  DataType: byte
  OrigDataType: byte
T_169: (in es : selector)
  Class: Eq_96
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_170: (in ds : selector)
  Class: Eq_28
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_171: (in bpOut : ptr16)
  Class: Eq_171
  DataType: ptr16
  OrigDataType: ptr16
T_172: (in siOut : ptr16)
  Class: Eq_172
  DataType: ptr16
  OrigDataType: ptr16
T_173: (in diOut : ptr16)
  Class: Eq_173
  DataType: ptr16
  OrigDataType: ptr16
T_174: (in dhOut : ptr16)
  Class: Eq_174
  DataType: ptr16
  OrigDataType: ptr16
T_175: (in bhOut : ptr16)
  Class: Eq_175
  DataType: ptr16
  OrigDataType: ptr16
T_176: (in out bp_111 : ptr16)
  Class: Eq_171
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_177: (in out si_120 : ptr16)
  Class: Eq_172
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_178: (in out di_118 : ptr16)
  Class: Eq_173
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_179: (in out dh_106 : ptr16)
  Class: Eq_174
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_180: (in out bh : ptr16)
  Class: Eq_175
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_181: (in fn0C00_0181(dx_103, bp_111, bh, 0xB800, cs, out bp_111, out si_120, out di_118, out dh_106, out bh) : word16)
  Class: Eq_150
  DataType: word16
  OrigDataType: word16
T_182: (in al_173 : byte)
  Class: Eq_182
  DataType: byte
  OrigDataType: byte
T_183: (in 0x0001 : word16)
  Class: Eq_183
  DataType: word16
  OrigDataType: word16
T_184: (in ax_163 - 0x0001 : word16)
  Class: Eq_184
  DataType: word16
  OrigDataType: word16
T_185: (in (byte) (ax_163 - 0x0001) : byte)
  Class: Eq_182
  DataType: byte
  OrigDataType: byte
T_186: (in 0x0001 : word16)
  Class: Eq_159
  DataType: word16
  OrigDataType: word16
T_187: (in ax_163 != 0x0001 : bool)
  Class: Eq_187
  DataType: bool
  OrigDataType: bool
T_188: (in 0x01 : byte)
  Class: Eq_188
  DataType: byte
  OrigDataType: byte
T_189: (in dh_106 - 0x01 : byte)
  Class: Eq_91
  DataType: byte
  OrigDataType: byte
T_190: (in DPB(dx_103, dh_106, 8, 8) : word16)
  Class: Eq_83
  DataType: word16
  OrigDataType: word16
T_191: (in 0xE5 : byte)
  Class: Eq_182
  DataType: byte
  OrigDataType: byte
T_192: (in al_173 != 0xE5 : bool)
  Class: Eq_192
  DataType: bool
  OrigDataType: bool
T_193: (in al_185 : byte)
  Class: Eq_193
  DataType: int8
  OrigDataType: int8
T_194: (in 0x0000 : word16)
  Class: Eq_194
  DataType: word16
  OrigDataType: word16
T_195: (in si_120 + 0x0000 : word16)
  Class: Eq_195
  DataType: word16
  OrigDataType: word16
T_196: (in Mem67[cs:si_120 + 0x0000:byte] : byte)
  Class: Eq_193
  DataType: byte
  OrigDataType: byte
T_197: (in si_188 : word16)
  Class: Eq_197
  DataType: (memptr T_61 (struct (FFFFFFFF T_206 tFFFFFFFF)))
  OrigDataType: (memptr T_61 (struct (FFFFFFFF T_206 tFFFFFFFF)))
T_198: (in 0x0001 : word16)
  Class: Eq_198
  DataType: word16
  OrigDataType: word16
T_199: (in si_120 + 0x0001 : word16)
  Class: Eq_197
  DataType: word16
  OrigDataType: word16
T_200: (in 0x40 : byte)
  Class: Eq_200
  DataType: byte
  OrigDataType: byte
T_201: (in al_185 & 0x40 : byte)
  Class: Eq_201
  DataType: byte
  OrigDataType: byte
T_202: (in 0x00 : byte)
  Class: Eq_201
  DataType: byte
  OrigDataType: byte
T_203: (in (al_185 & 0x40) != 0x00 : bool)
  Class: Eq_203
  DataType: bool
  OrigDataType: bool
T_204: (in 0x0001 : word16)
  Class: Eq_204
  DataType: word16
  OrigDataType: word16
T_205: (in si_188 - 0x0001 : word16)
  Class: Eq_205
  DataType: word16
  OrigDataType: word16
T_206: (in Mem67[cs:si_188 - 0x0001:byte] : byte)
  Class: Eq_206
  DataType: byte
  OrigDataType: byte
T_207: (in 0x80 : byte)
  Class: Eq_207
  DataType: byte
  OrigDataType: byte
T_208: (in Mem67[cs:si_188 - 0x0001:byte] ^ 0x80 : byte)
  Class: Eq_206
  DataType: byte
  OrigDataType: byte
T_209: (in 0x0001 : word16)
  Class: Eq_209
  DataType: word16
  OrigDataType: word16
T_210: (in si_188 - 0x0001 : word16)
  Class: Eq_210
  DataType: word16
  OrigDataType: word16
T_211: (in Mem193[cs:si_188 - 0x0001:byte] : byte)
  Class: Eq_206
  DataType: byte
  OrigDataType: byte
T_212: (in al_196 : byte)
  Class: Eq_212
  DataType: byte
  OrigDataType: byte
T_213: (in 0x07 : byte)
  Class: Eq_213
  DataType: uint8
  OrigDataType: uint8
T_214: (in al_185 >> 0x07 : word16)
  Class: Eq_214
  DataType: int16
  OrigDataType: int16
T_215: (in 0x0A : byte)
  Class: Eq_215
  DataType: byte
  OrigDataType: byte
T_216: (in al_185 >> 0x07 & 0x0A : byte)
  Class: Eq_212
  DataType: byte
  OrigDataType: byte
T_217: (in 0x23 : byte)
  Class: Eq_217
  DataType: byte
  OrigDataType: byte
T_218: (in al_196 + 0x23 : byte)
  Class: Eq_218
  DataType: byte
  OrigDataType: byte
T_219: (in 0x0000 : word16)
  Class: Eq_219
  DataType: word16
  OrigDataType: word16
T_220: (in di_118 + 0x0000 : word16)
  Class: Eq_220
  DataType: word16
  OrigDataType: word16
T_221: (in Mem201[0xB800:di_118 + 0x0000:byte] : byte)
  Class: Eq_218
  DataType: byte
  OrigDataType: byte
T_222: (in al_196 + 0x23 : byte)
  Class: Eq_182
  DataType: byte
  OrigDataType: byte
T_223: (in msdos_terminate_program20 : ptr32)
  Class: Eq_223
  DataType: (ptr (fn T_225 ()))
  OrigDataType: (ptr (fn T_225 ()))
T_224: (in signature of msdos_terminate_program20 : void)
  Class: Eq_223
  DataType: 
  OrigDataType: 
T_225: (in msdos_terminate_program20() : void)
  Class: Eq_225
  DataType: void
  OrigDataType: void
T_226: (in ax : word16)
  Class: Eq_226
  DataType: word16
  OrigDataType: word16
T_227: (in si : word16)
  Class: Eq_227
  DataType: word16
  OrigDataType: word16
T_228: (in *siOut : word16)
  Class: Eq_227
  DataType: 
  OrigDataType: 
T_229: (in *bhOut : byte)
  Class: Eq_121
  DataType: 
  OrigDataType: 
T_230: (in *bpOut : word16)
  Class: Eq_17
  DataType: 
  OrigDataType: 
T_231: (in dh : byte)
  Class: Eq_231
  DataType: 
  OrigDataType: 
T_232: (in *dhOut : byte)
  Class: Eq_231
  DataType: 
  OrigDataType: 
T_233: (in di : word16)
  Class: Eq_233
  DataType: 
  OrigDataType: 
T_234: (in *diOut : word16)
  Class: Eq_233
  DataType: 
  OrigDataType: 
T_235: (in dl : byte)
  Class: Eq_235
  DataType: 
  OrigDataType: 
T_236: (in 0x50 : byte)
  Class: Eq_235
  DataType: 
  OrigDataType: 
T_237: (in dl >=u 0x50 : bool)
  Class: Eq_237
  DataType: 
  OrigDataType: 
T_238: (in 0x19 : byte)
  Class: Eq_231
  DataType: 
  OrigDataType: 
T_239: (in dh >=u 0x19 : bool)
  Class: Eq_239
  DataType: 
  OrigDataType: 
T_240: (in ah_68 : byte)
  Class: Eq_240
  DataType: 
  OrigDataType: 
T_241: (in di_110 : word16)
  Class: Eq_241
  DataType: 
  OrigDataType: 
T_242: (in si_69 : word16)
  Class: Eq_242
  DataType: 
  OrigDataType: 
T_243: (in fn0C00_01E8 : ptr32)
  Class: Eq_111
  DataType: 
  OrigDataType: 
T_244: (in out di_110 : ptr16)
  Class: Eq_114
  DataType: 
  OrigDataType: 
T_245: (in out ah_68 : ptr16)
  Class: Eq_115
  DataType: 
  OrigDataType: 
T_246: (in fn0C00_01E8(dx, out di_110, out ah_68) : word16)
  Class: Eq_242
  DataType: 
  OrigDataType: 
T_247: (in ax_73 : word16)
  Class: Eq_247
  DataType: 
  OrigDataType: 
T_248: (in 0x0000 : word16)
  Class: Eq_248
  DataType: 
  OrigDataType: 
T_249: (in si_69 + 0x0000 : word16)
  Class: Eq_249
  DataType: 
  OrigDataType: 
T_250: (in Mem0[ds:si_69 + 0x0000:byte] : byte)
  Class: Eq_250
  DataType: 
  OrigDataType: 
T_251: (in DPB(ax, Mem0[ds:si_69 + 0x0000:byte], 0, 8) : word16)
  Class: Eq_247
  DataType: 
  OrigDataType: 
T_252: (in si_74 : word16)
  Class: Eq_252
  DataType: 
  OrigDataType: 
T_253: (in 0x0001 : word16)
  Class: Eq_253
  DataType: 
  OrigDataType: 
T_254: (in si_69 + 0x0001 : word16)
  Class: Eq_254
  DataType: 
  OrigDataType: 
T_255: (in *siOut : word16)
  Class: Eq_254
  DataType: 
  OrigDataType: 
T_256: (in ax_109 : word16)
  Class: Eq_256
  DataType: 
  OrigDataType: 
T_257: (in 0x00FF : word16)
  Class: Eq_257
  DataType: 
  OrigDataType: 
T_258: (in ax_73 & 0x00FF : word16)
  Class: Eq_256
  DataType: 
  OrigDataType: 
T_259: (in ax_73 & 0x00FF : word16)
  Class: Eq_259
  DataType: 
  OrigDataType: 
T_260: (in 0x0000 : word16)
  Class: Eq_259
  DataType: 
  OrigDataType: 
T_261: (in (ax_73 & 0x00FF) != 0x0000 : bool)
  Class: Eq_261
  DataType: 
  OrigDataType: 
T_262: (in ax_111 : word16)
  Class: Eq_262
  DataType: 
  OrigDataType: 
T_263: (in 0x0001 : word16)
  Class: Eq_263
  DataType: 
  OrigDataType: 
T_264: (in ax_109 - 0x0001 : word16)
  Class: Eq_262
  DataType: 
  OrigDataType: 
T_265: (in 0x0000 : word16)
  Class: Eq_262
  DataType: 
  OrigDataType: 
T_266: (in ax_111 != 0x0000 : bool)
  Class: Eq_266
  DataType: 
  OrigDataType: 
T_267: (in 0x0001 : word16)
  Class: Eq_267
  DataType: 
  OrigDataType: 
T_268: (in ax_111 - 0x0001 : word16)
  Class: Eq_226
  DataType: 
  OrigDataType: 
T_269: (in 0x0001 : word16)
  Class: Eq_262
  DataType: 
  OrigDataType: 
T_270: (in ax_111 != 0x0001 : bool)
  Class: Eq_270
  DataType: 
  OrigDataType: 
T_271: (in 0x0000 : word16)
  Class: Eq_271
  DataType: 
  OrigDataType: 
T_272: (in si_69 + 0x0000 : word16)
  Class: Eq_272
  DataType: 
  OrigDataType: 
T_273: (in Mem0[ds:si_69 + 0x0000:byte] : byte)
  Class: Eq_273
  DataType: 
  OrigDataType: 
T_274: (in 0x40 : byte)
  Class: Eq_274
  DataType: 
  OrigDataType: 
T_275: (in Mem0[ds:si_69 + 0x0000:byte] | 0x40 : byte)
  Class: Eq_275
  DataType: 
  OrigDataType: 
T_276: (in 0x0000 : word16)
  Class: Eq_276
  DataType: 
  OrigDataType: 
T_277: (in si_69 + 0x0000 : word16)
  Class: Eq_277
  DataType: 
  OrigDataType: 
T_278: (in Mem132[ds:si_69 + 0x0000:byte] : byte)
  Class: Eq_275
  DataType: 
  OrigDataType: 
T_279: (in al_135 : byte)
  Class: Eq_279
  DataType: 
  OrigDataType: 
T_280: (in 0x0001 : word16)
  Class: Eq_280
  DataType: 
  OrigDataType: 
T_281: (in si_69 - 0x0001 : word16)
  Class: Eq_281
  DataType: 
  OrigDataType: 
T_282: (in Mem132[ds:si_69 - 0x0001:byte] : byte)
  Class: Eq_282
  DataType: 
  OrigDataType: 
T_283: (in si_69 + 0x0001 : word16)
  Class: Eq_283
  DataType: 
  OrigDataType: 
T_284: (in Mem132[ds:si_69 + 0x0001:byte] : byte)
  Class: Eq_284
  DataType: 
  OrigDataType: 
T_285: (in Mem132[ds:si_69 - 0x0001:byte] + Mem132[ds:si_69 + 0x0001:byte] : byte)
  Class: Eq_279
  DataType: 
  OrigDataType: 
T_286: (in ax_136 : word16)
  Class: Eq_286
  DataType: 
  OrigDataType: 
T_287: (in ax_73 & 0x00FF : word16)
  Class: Eq_287
  DataType: 
  OrigDataType: 
T_288: (in DPB(ax_73 & 0x00FF, al_135, 0, 8) : word16)
  Class: Eq_286
  DataType: 
  OrigDataType: 
T_289: (in bx_139 : word16)
  Class: Eq_289
  DataType: 
  OrigDataType: 
T_290: (in bx : word16)
  Class: Eq_290
  DataType: 
  OrigDataType: 
T_291: (in 0x50 : byte)
  Class: Eq_291
  DataType: 
  OrigDataType: 
T_292: (in DPB(bx, 0x50, 0, 8) : word16)
  Class: Eq_289
  DataType: 
  OrigDataType: 
T_293: (in si_69 + 0x0001 : word16)
  Class: Eq_293
  DataType: 
  OrigDataType: 
T_294: (in bx_139 + (si_69 + 0x0001) : word16)
  Class: Eq_294
  DataType: 
  OrigDataType: 
T_295: (in Mem132[ds:bx_139 + (si_69 + 0x0001):byte] : byte)
  Class: Eq_295
  DataType: 
  OrigDataType: 
T_296: (in al_135 + Mem132[ds:bx_139 + (si_69 + 0x0001):byte] : byte)
  Class: Eq_296
  DataType: 
  OrigDataType: 
T_297: (in 0x0001 : word16)
  Class: Eq_297
  DataType: 
  OrigDataType: 
T_298: (in bx_139 - 0x0001 : word16)
  Class: Eq_298
  DataType: 
  OrigDataType: 
T_299: (in si_69 + 0x0001 : word16)
  Class: Eq_299
  DataType: 
  OrigDataType: 
T_300: (in bx_139 - 0x0001 + (si_69 + 0x0001) : word16)
  Class: Eq_300
  DataType: 
  OrigDataType: 
T_301: (in Mem132[ds:bx_139 - 0x0001 + (si_69 + 0x0001):byte] : byte)
  Class: Eq_301
  DataType: 
  OrigDataType: 
T_302: (in al_135 + Mem132[ds:bx_139 + (si_69 + 0x0001):byte] + Mem132[ds:(bx_139 - 0x0001) + (si_69 + 0x0001):byte] : byte)
  Class: Eq_302
  DataType: 
  OrigDataType: 
T_303: (in 0x0002 : word16)
  Class: Eq_303
  DataType: 
  OrigDataType: 
T_304: (in bx_139 - 0x0002 : word16)
  Class: Eq_304
  DataType: 
  OrigDataType: 
T_305: (in si_69 + 0x0001 : word16)
  Class: Eq_305
  DataType: 
  OrigDataType: 
T_306: (in bx_139 - 0x0002 + (si_69 + 0x0001) : word16)
  Class: Eq_306
  DataType: 
  OrigDataType: 
T_307: (in Mem132[ds:bx_139 - 0x0002 + (si_69 + 0x0001):byte] : byte)
  Class: Eq_307
  DataType: 
  OrigDataType: 
T_308: (in al_135 + Mem132[ds:bx_139 + (si_69 + 0x0001):byte] + Mem132[ds:(bx_139 - 0x0001) + (si_69 + 0x0001):byte] + Mem132[ds:(bx_139 - 0x0002) + (si_69 + 0x0001):byte] : byte)
  Class: Eq_279
  DataType: 
  OrigDataType: 
T_309: (in -bx_139 : word16)
  Class: Eq_289
  DataType: 
  OrigDataType: 
T_310: (in ax_255 : word16)
  Class: Eq_286
  DataType: 
  OrigDataType: 
T_311: (in DPB(ax_255, al_135, 0, 8) : word16)
  Class: Eq_286
  DataType: 
  OrigDataType: 
T_312: (in bh_149 : byte)
  Class: Eq_121
  DataType: 
  OrigDataType: 
T_313: (in SLICE(bx_139, byte, 8) : byte)
  Class: Eq_121
  DataType: 
  OrigDataType: 
T_314: (in *bhOut : byte)
  Class: Eq_121
  DataType: 
  OrigDataType: 
T_315: (in 0x0000 : word16)
  Class: Eq_289
  DataType: 
  OrigDataType: 
T_316: (in bx_139 < 0x0000 : bool)
  Class: Eq_316
  DataType: 
  OrigDataType: 
T_317: (in 0x0F : byte)
  Class: Eq_317
  DataType: 
  OrigDataType: 
T_318: (in al_135 & 0x0F : byte)
  Class: Eq_318
  DataType: 
  OrigDataType: 
T_319: (in 0x00 : byte)
  Class: Eq_318
  DataType: 
  OrigDataType: 
T_320: (in (al_135 & 0x0F) != 0x00 : bool)
  Class: Eq_320
  DataType: 
  OrigDataType: 
T_321: (in al_250 : byte)
  Class: Eq_321
  DataType: 
  OrigDataType: 
T_322: (in al_135 & 0x0F : byte)
  Class: Eq_322
  DataType: 
  OrigDataType: 
T_323: (in 0x30 : byte)
  Class: Eq_323
  DataType: 
  OrigDataType: 
T_324: (in (al_135 & 0x0F) + 0x30 : byte)
  Class: Eq_321
  DataType: 
  OrigDataType: 
T_325: (in 0x0000 : word16)
  Class: Eq_325
  DataType: 
  OrigDataType: 
T_326: (in di_110 + 0x0000 : word16)
  Class: Eq_326
  DataType: 
  OrigDataType: 
T_327: (in Mem253[es:di_110 + 0x0000:byte] : byte)
  Class: Eq_321
  DataType: 
  OrigDataType: 
T_328: (in DPB(ax_255, al_250, 0, 8) : word16)
  Class: Eq_256
  DataType: 
  OrigDataType: 
T_329: (in 0x0001 : word16)
  Class: Eq_329
  DataType: 
  OrigDataType: 
T_330: (in di_110 + 0x0001 : word16)
  Class: Eq_330
  DataType: 
  OrigDataType: 
T_331: (in *diOut : word16)
  Class: Eq_330
  DataType: 
  OrigDataType: 
T_332: (in 0x20 : byte)
  Class: Eq_332
  DataType: 
  OrigDataType: 
T_333: (in 0x0000 : word16)
  Class: Eq_333
  DataType: 
  OrigDataType: 
T_334: (in di_110 + 0x0000 : word16)
  Class: Eq_334
  DataType: 
  OrigDataType: 
T_335: (in Mem173[es:di_110 + 0x0000:byte] : byte)
  Class: Eq_332
  DataType: 
  OrigDataType: 
T_336: (in bp_178 : word16)
  Class: Eq_17
  DataType: 
  OrigDataType: 
T_337: (in si_179 : word16)
  Class: Eq_337
  DataType: 
  OrigDataType: 
T_338: (in di_180 : word16)
  Class: Eq_338
  DataType: 
  OrigDataType: 
T_339: (in dh_181 : byte)
  Class: Eq_339
  DataType: 
  OrigDataType: 
T_340: (in bh_182 : byte)
  Class: Eq_121
  DataType: 
  OrigDataType: 
T_341: (in fn0C00_0181 : ptr32)
  Class: Eq_164
  DataType: 
  OrigDataType: 
T_342: (in 0x0001 : word16)
  Class: Eq_342
  DataType: 
  OrigDataType: 
T_343: (in dx - 0x0001 : word16)
  Class: Eq_83
  DataType: 
  OrigDataType: 
T_344: (in out bp_178 : ptr16)
  Class: Eq_171
  DataType: 
  OrigDataType: 
T_345: (in out si_179 : ptr16)
  Class: Eq_172
  DataType: 
  OrigDataType: 
T_346: (in out di_180 : ptr16)
  Class: Eq_173
  DataType: 
  OrigDataType: 
T_347: (in out dh_181 : ptr16)
  Class: Eq_174
  DataType: 
  OrigDataType: 
T_348: (in out bh_182 : ptr16)
  Class: Eq_175
  DataType: 
  OrigDataType: 
T_349: (in fn0C00_0181(dx - 0x0001, bp, bh_149, es, ds, out bp_178, out si_179, out di_180, out dh_181, out bh_182) : word16)
  Class: Eq_349
  DataType: 
  OrigDataType: 
T_350: (in dx_185 : word16)
  Class: Eq_83
  DataType: 
  OrigDataType: 
T_351: (in dx - 0x0001 : word16)
  Class: Eq_351
  DataType: 
  OrigDataType: 
T_352: (in 0x01 : byte)
  Class: Eq_352
  DataType: 
  OrigDataType: 
T_353: (in dh_181 - 0x01 : byte)
  Class: Eq_353
  DataType: 
  OrigDataType: 
T_354: (in DPB(dx - 0x0001, dh_181 - 0x01, 8, 8) : word16)
  Class: Eq_83
  DataType: 
  OrigDataType: 
T_355: (in bp_187 : word16)
  Class: Eq_17
  DataType: 
  OrigDataType: 
T_356: (in si_188 : word16)
  Class: Eq_356
  DataType: 
  OrigDataType: 
T_357: (in di_189 : word16)
  Class: Eq_357
  DataType: 
  OrigDataType: 
T_358: (in dh_190 : byte)
  Class: Eq_358
  DataType: 
  OrigDataType: 
T_359: (in bh_191 : byte)
  Class: Eq_121
  DataType: 
  OrigDataType: 
T_360: (in fn0C00_0181 : ptr32)
  Class: Eq_164
  DataType: 
  OrigDataType: 
T_361: (in out bp_187 : ptr16)
  Class: Eq_171
  DataType: 
  OrigDataType: 
T_362: (in out si_188 : ptr16)
  Class: Eq_172
  DataType: 
  OrigDataType: 
T_363: (in out di_189 : ptr16)
  Class: Eq_173
  DataType: 
  OrigDataType: 
T_364: (in out dh_190 : ptr16)
  Class: Eq_174
  DataType: 
  OrigDataType: 
T_365: (in out bh_191 : ptr16)
  Class: Eq_175
  DataType: 
  OrigDataType: 
T_366: (in fn0C00_0181(dx_185, bp_178, bh_182, es, ds, out bp_187, out si_188, out di_189, out dh_190, out bh_191) : word16)
  Class: Eq_366
  DataType: 
  OrigDataType: 
T_367: (in bp_196 : word16)
  Class: Eq_17
  DataType: 
  OrigDataType: 
T_368: (in si_197 : word16)
  Class: Eq_368
  DataType: 
  OrigDataType: 
T_369: (in di_198 : word16)
  Class: Eq_369
  DataType: 
  OrigDataType: 
T_370: (in dh_199 : byte)
  Class: Eq_370
  DataType: 
  OrigDataType: 
T_371: (in bh_200 : byte)
  Class: Eq_121
  DataType: 
  OrigDataType: 
T_372: (in fn0C00_0181 : ptr32)
  Class: Eq_164
  DataType: 
  OrigDataType: 
T_373: (in 0x0001 : word16)
  Class: Eq_373
  DataType: 
  OrigDataType: 
T_374: (in dx_185 + 0x0001 : word16)
  Class: Eq_83
  DataType: 
  OrigDataType: 
T_375: (in out bp_196 : ptr16)
  Class: Eq_171
  DataType: 
  OrigDataType: 
T_376: (in out si_197 : ptr16)
  Class: Eq_172
  DataType: 
  OrigDataType: 
T_377: (in out di_198 : ptr16)
  Class: Eq_173
  DataType: 
  OrigDataType: 
T_378: (in out dh_199 : ptr16)
  Class: Eq_174
  DataType: 
  OrigDataType: 
T_379: (in out bh_200 : ptr16)
  Class: Eq_175
  DataType: 
  OrigDataType: 
T_380: (in fn0C00_0181(dx_185 + 0x0001, bp_187, bh_191, es, ds, out bp_196, out si_197, out di_198, out dh_199, out bh_200) : word16)
  Class: Eq_380
  DataType: 
  OrigDataType: 
T_381: (in bp_205 : word16)
  Class: Eq_17
  DataType: 
  OrigDataType: 
T_382: (in si_206 : word16)
  Class: Eq_382
  DataType: 
  OrigDataType: 
T_383: (in di_207 : word16)
  Class: Eq_383
  DataType: 
  OrigDataType: 
T_384: (in dh_208 : byte)
  Class: Eq_384
  DataType: 
  OrigDataType: 
T_385: (in bh_209 : byte)
  Class: Eq_121
  DataType: 
  OrigDataType: 
T_386: (in fn0C00_0181 : ptr32)
  Class: Eq_164
  DataType: 
  OrigDataType: 
T_387: (in 0x0002 : word16)
  Class: Eq_387
  DataType: 
  OrigDataType: 
T_388: (in dx_185 + 0x0002 : word16)
  Class: Eq_83
  DataType: 
  OrigDataType: 
T_389: (in out bp_205 : ptr16)
  Class: Eq_171
  DataType: 
  OrigDataType: 
T_390: (in out si_206 : ptr16)
  Class: Eq_172
  DataType: 
  OrigDataType: 
T_391: (in out di_207 : ptr16)
  Class: Eq_173
  DataType: 
  OrigDataType: 
T_392: (in out dh_208 : ptr16)
  Class: Eq_174
  DataType: 
  OrigDataType: 
T_393: (in out bh_209 : ptr16)
  Class: Eq_175
  DataType: 
  OrigDataType: 
T_394: (in fn0C00_0181(dx_185 + 0x0002, bp_196, bh_200, es, ds, out bp_205, out si_206, out di_207, out dh_208, out bh_209) : word16)
  Class: Eq_394
  DataType: 
  OrigDataType: 
T_395: (in dx_212 : word16)
  Class: Eq_83
  DataType: 
  OrigDataType: 
T_396: (in dx_185 + 0x0002 : word16)
  Class: Eq_396
  DataType: 
  OrigDataType: 
T_397: (in 0x01 : byte)
  Class: Eq_397
  DataType: 
  OrigDataType: 
T_398: (in dh_208 + 0x01 : byte)
  Class: Eq_398
  DataType: 
  OrigDataType: 
T_399: (in DPB(dx_185 + 0x0002, dh_208 + 0x01, 8, 8) : word16)
  Class: Eq_83
  DataType: 
  OrigDataType: 
T_400: (in bp_214 : word16)
  Class: Eq_17
  DataType: 
  OrigDataType: 
T_401: (in si_215 : word16)
  Class: Eq_401
  DataType: 
  OrigDataType: 
T_402: (in di_216 : word16)
  Class: Eq_402
  DataType: 
  OrigDataType: 
T_403: (in dh_217 : byte)
  Class: Eq_403
  DataType: 
  OrigDataType: 
T_404: (in bh_218 : byte)
  Class: Eq_121
  DataType: 
  OrigDataType: 
T_405: (in fn0C00_0181 : ptr32)
  Class: Eq_164
  DataType: 
  OrigDataType: 
T_406: (in out bp_214 : ptr16)
  Class: Eq_171
  DataType: 
  OrigDataType: 
T_407: (in out si_215 : ptr16)
  Class: Eq_172
  DataType: 
  OrigDataType: 
T_408: (in out di_216 : ptr16)
  Class: Eq_173
  DataType: 
  OrigDataType: 
T_409: (in out dh_217 : ptr16)
  Class: Eq_174
  DataType: 
  OrigDataType: 
T_410: (in out bh_218 : ptr16)
  Class: Eq_175
  DataType: 
  OrigDataType: 
T_411: (in fn0C00_0181(dx_212, bp_205, bh_209, es, ds, out bp_214, out si_215, out di_216, out dh_217, out bh_218) : word16)
  Class: Eq_411
  DataType: 
  OrigDataType: 
T_412: (in dx_221 : word16)
  Class: Eq_83
  DataType: 
  OrigDataType: 
T_413: (in 0x01 : byte)
  Class: Eq_413
  DataType: 
  OrigDataType: 
T_414: (in dh_217 + 0x01 : byte)
  Class: Eq_414
  DataType: 
  OrigDataType: 
T_415: (in DPB(dx_212, dh_217 + 0x01, 8, 8) : word16)
  Class: Eq_83
  DataType: 
  OrigDataType: 
T_416: (in bp_223 : word16)
  Class: Eq_17
  DataType: 
  OrigDataType: 
T_417: (in si_224 : word16)
  Class: Eq_417
  DataType: 
  OrigDataType: 
T_418: (in di_225 : word16)
  Class: Eq_418
  DataType: 
  OrigDataType: 
T_419: (in dh_226 : byte)
  Class: Eq_419
  DataType: 
  OrigDataType: 
T_420: (in bh_227 : byte)
  Class: Eq_121
  DataType: 
  OrigDataType: 
T_421: (in fn0C00_0181 : ptr32)
  Class: Eq_164
  DataType: 
  OrigDataType: 
T_422: (in out bp_223 : ptr16)
  Class: Eq_171
  DataType: 
  OrigDataType: 
T_423: (in out si_224 : ptr16)
  Class: Eq_172
  DataType: 
  OrigDataType: 
T_424: (in out di_225 : ptr16)
  Class: Eq_173
  DataType: 
  OrigDataType: 
T_425: (in out dh_226 : ptr16)
  Class: Eq_174
  DataType: 
  OrigDataType: 
T_426: (in out bh_227 : ptr16)
  Class: Eq_175
  DataType: 
  OrigDataType: 
T_427: (in fn0C00_0181(dx_221, bp_214, bh_218, es, ds, out bp_223, out si_224, out di_225, out dh_226, out bh_227) : word16)
  Class: Eq_427
  DataType: 
  OrigDataType: 
T_428: (in bp_232 : word16)
  Class: Eq_17
  DataType: 
  OrigDataType: 
T_429: (in si_233 : word16)
  Class: Eq_429
  DataType: 
  OrigDataType: 
T_430: (in di_234 : word16)
  Class: Eq_430
  DataType: 
  OrigDataType: 
T_431: (in dh_235 : byte)
  Class: Eq_431
  DataType: 
  OrigDataType: 
T_432: (in bh_236 : byte)
  Class: Eq_121
  DataType: 
  OrigDataType: 
T_433: (in fn0C00_0181 : ptr32)
  Class: Eq_164
  DataType: 
  OrigDataType: 
T_434: (in 0x0001 : word16)
  Class: Eq_434
  DataType: 
  OrigDataType: 
T_435: (in dx_221 - 0x0001 : word16)
  Class: Eq_83
  DataType: 
  OrigDataType: 
T_436: (in out bp_232 : ptr16)
  Class: Eq_171
  DataType: 
  OrigDataType: 
T_437: (in out si_233 : ptr16)
  Class: Eq_172
  DataType: 
  OrigDataType: 
T_438: (in out di_234 : ptr16)
  Class: Eq_173
  DataType: 
  OrigDataType: 
T_439: (in out dh_235 : ptr16)
  Class: Eq_174
  DataType: 
  OrigDataType: 
T_440: (in out bh_236 : ptr16)
  Class: Eq_175
  DataType: 
  OrigDataType: 
T_441: (in fn0C00_0181(dx_221 - 0x0001, bp_223, bh_227, es, ds, out bp_232, out si_233, out di_234, out dh_235, out bh_236) : word16)
  Class: Eq_441
  DataType: 
  OrigDataType: 
T_442: (in si_243 : word16)
  Class: Eq_442
  DataType: 
  OrigDataType: 
T_443: (in dh_245 : byte)
  Class: Eq_443
  DataType: 
  OrigDataType: 
T_444: (in bh_246 : byte)
  Class: Eq_444
  DataType: 
  OrigDataType: 
T_445: (in fn0C00_0181 : ptr32)
  Class: Eq_164
  DataType: 
  OrigDataType: 
T_446: (in 0x0002 : word16)
  Class: Eq_446
  DataType: 
  OrigDataType: 
T_447: (in dx_221 - 0x0002 : word16)
  Class: Eq_83
  DataType: 
  OrigDataType: 
T_448: (in out bp : ptr16)
  Class: Eq_171
  DataType: 
  OrigDataType: 
T_449: (in out si_243 : ptr16)
  Class: Eq_172
  DataType: 
  OrigDataType: 
T_450: (in out di_110 : ptr16)
  Class: Eq_173
  DataType: 
  OrigDataType: 
T_451: (in out dh_245 : ptr16)
  Class: Eq_174
  DataType: 
  OrigDataType: 
T_452: (in out bh_246 : ptr16)
  Class: Eq_175
  DataType: 
  OrigDataType: 
T_453: (in fn0C00_0181(dx_221 - 0x0002, bp_232, bh_236, es, ds, out bp, out si_243, out di_110, out dh_245, out bh_246) : word16)
  Class: Eq_256
  DataType: 
  OrigDataType: 
T_454: (in bp_169 : word16)
  Class: Eq_454
  DataType: 
  OrigDataType: 
T_455: (in 0x0001 : word16)
  Class: Eq_455
  DataType: 
  OrigDataType: 
T_456: (in bp - 0x0001 : word16)
  Class: Eq_454
  DataType: 
  OrigDataType: 
T_457: (in *bpOut : word16)
  Class: Eq_454
  DataType: 
  OrigDataType: 
T_458: (in 0x0000 : word16)
  Class: Eq_454
  DataType: 
  OrigDataType: 
T_459: (in bp_169 == 0x0000 : bool)
  Class: Eq_459
  DataType: 
  OrigDataType: 
T_460: (in dh_129 : byte)
  Class: Eq_460
  DataType: 
  OrigDataType: 
T_461: (in SLICE(dx, byte, 8) : byte)
  Class: Eq_461
  DataType: 
  OrigDataType: 
T_462: (in *dhOut : byte)
  Class: Eq_461
  DataType: 
  OrigDataType: 
T_463: (in 0x2A : byte)
  Class: Eq_463
  DataType: 
  OrigDataType: 
T_464: (in 0x0000 : word16)
  Class: Eq_464
  DataType: 
  OrigDataType: 
T_465: (in di_110 + 0x0000 : word16)
  Class: Eq_465
  DataType: 
  OrigDataType: 
T_466: (in Mem120[es:di_110 + 0x0000:byte] : byte)
  Class: Eq_463
  DataType: 
  OrigDataType: 
T_467: (in di_122 : word16)
  Class: Eq_467
  DataType: 
  OrigDataType: 
T_468: (in 0x0001 : word16)
  Class: Eq_468
  DataType: 
  OrigDataType: 
T_469: (in di_110 + 0x0001 : word16)
  Class: Eq_467
  DataType: 
  OrigDataType: 
T_470: (in 0x2A : byte)
  Class: Eq_470
  DataType: 
  OrigDataType: 
T_471: (in 0x0000 : word16)
  Class: Eq_471
  DataType: 
  OrigDataType: 
T_472: (in di_122 + 0x0000 : word16)
  Class: Eq_472
  DataType: 
  OrigDataType: 
T_473: (in Mem125[es:di_122 + 0x0000:byte] : byte)
  Class: Eq_470
  DataType: 
  OrigDataType: 
T_474: (in di_126 : word16)
  Class: Eq_474
  DataType: 
  OrigDataType: 
T_475: (in 0x0001 : word16)
  Class: Eq_475
  DataType: 
  OrigDataType: 
T_476: (in di_122 + 0x0001 : word16)
  Class: Eq_476
  DataType: 
  OrigDataType: 
T_477: (in *diOut : word16)
  Class: Eq_476
  DataType: 
  OrigDataType: 
T_478: (in msdos_terminate_program20 : ptr32)
  Class: Eq_223
  DataType: 
  OrigDataType: 
T_479: (in msdos_terminate_program20() : void)
  Class: Eq_479
  DataType: 
  OrigDataType: 
T_480: (in si : word16)
  Class: Eq_480
  DataType: 
  OrigDataType: 
T_481: (in ax_4 : word16)
  Class: Eq_481
  DataType: 
  OrigDataType: 
T_482: (in dh : byte)
  Class: Eq_482
  DataType: 
  OrigDataType: 
T_483: (in (int16) dh : int16)
  Class: Eq_481
  DataType: 
  OrigDataType: 
T_484: (in ax_10 : word16)
  Class: Eq_484
  DataType: 
  OrigDataType: 
T_485: (in 0x0050 : word16)
  Class: Eq_485
  DataType: 
  OrigDataType: 
T_486: (in ax_4 *s 0x0050 : int16)
  Class: Eq_486
  DataType: 
  OrigDataType: 
T_487: (in ax_4 *s 0x0050 + dx : word16)
  Class: Eq_484
  DataType: 
  OrigDataType: 
T_488: (in di_8 : word16)
  Class: Eq_488
  DataType: 
  OrigDataType: 
T_489: (in 0xFF50 : word16)
  Class: Eq_489
  DataType: 
  OrigDataType: 
T_490: (in ax_4 *s 0xFF50 : int16)
  Class: Eq_490
  DataType: 
  OrigDataType: 
T_491: (in ax_4 *s 0xFF50 + dx : word16)
  Class: Eq_491
  DataType: 
  OrigDataType: 
T_492: (in 0x0002 : word16)
  Class: Eq_492
  DataType: 
  OrigDataType: 
T_493: (in (ax_4 *s 0xFF50 + dx) * 0x0002 : word16)
  Class: Eq_493
  DataType: 
  OrigDataType: 
T_494: (in *diOut : word16)
  Class: Eq_493
  DataType: 
  OrigDataType: 
T_495: (in ah_19 : byte)
  Class: Eq_495
  DataType: 
  OrigDataType: 
T_496: (in SLICE(si, byte, 8) : byte)
  Class: Eq_496
  DataType: 
  OrigDataType: 
T_497: (in *ahOut : byte)
  Class: Eq_496
  DataType: 
  OrigDataType: 
T_498: (in SLICE(ax_10, byte, 8) : byte)
  Class: Eq_498
  DataType: 
  OrigDataType: 
T_499: (in SLICE(ax_10, byte, 8) - dh : byte)
  Class: Eq_499
  DataType: 
  OrigDataType: 
T_500: (in DPB(ax_10, SLICE(ax_10, byte, 8) - dh, 8, 8) : word16)
  Class: Eq_500
  DataType: 
  OrigDataType: 
T_501: (in 0x0251 : word16)
  Class: Eq_501
  DataType: 
  OrigDataType: 
T_502: (in DPB(ax_10, SLICE(ax_10, byte, 8) - dh, 8, 8) + 0x0251 : word16)
  Class: Eq_502
  DataType: 
  OrigDataType: 
T_503:
  Class: Eq_503
  DataType: 
  OrigDataType: (struct 0002 (0 T_31 t0000))
*/
