// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_207/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: 
  OrigDataType: 
T_2: (in bios_video_set_mode : ptr32)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_3: (in signature of bios_video_set_mode : void)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_4: (in al : byte)
  Class: Eq_4
  DataType: 
  OrigDataType: 
T_5: (in 0x13 : byte)
  Class: Eq_4
  DataType: 
  OrigDataType: 
T_6: (in bios_video_set_mode(0x13) : void)
  Class: Eq_6
  DataType: 
  OrigDataType: 
T_7: (in dx_5 : word16)
  Class: Eq_7
  DataType: 
  OrigDataType: 
T_8: (in dx : word16)
  Class: Eq_8
  DataType: 
  OrigDataType: 
T_9: (in dh : byte)
  Class: Eq_9
  DataType: 
  OrigDataType: 
T_10: (in 0x10 : byte)
  Class: Eq_10
  DataType: 
  OrigDataType: 
T_11: (in dh + 0x10 : byte)
  Class: Eq_11
  DataType: 
  OrigDataType: 
T_12: (in DPB(dx, dh + 0x10, 8, 8) : word16)
  Class: Eq_7
  DataType: 
  OrigDataType: 
T_13: (in dx_8 : word16)
  Class: Eq_13
  DataType: 
  OrigDataType: 
T_14: (in 0x20 : byte)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_15: (in dh + 0x20 : byte)
  Class: Eq_15
  DataType: 
  OrigDataType: 
T_16: (in DPB(dx, dh + 0x20, 8, 8) : word16)
  Class: Eq_13
  DataType: 
  OrigDataType: 
T_17: (in wLoc02_15 : word16)
  Class: Eq_17
  DataType: 
  OrigDataType: 
T_18: (in ax : word16)
  Class: Eq_18
  DataType: 
  OrigDataType: 
T_19: (in 0x13 : byte)
  Class: Eq_19
  DataType: 
  OrigDataType: 
T_20: (in DPB(ax, 0x13, 0, 8) : word16)
  Class: Eq_17
  DataType: 
  OrigDataType: 
T_21: (in wLoc04_18 : word16)
  Class: Eq_21
  DataType: 
  OrigDataType: 
T_22: (in cx : word16)
  Class: Eq_21
  DataType: 
  OrigDataType: 
T_23: (in wLoc08_23 : word16)
  Class: Eq_23
  DataType: 
  OrigDataType: 
T_24: (in bx : word16)
  Class: Eq_23
  DataType: 
  OrigDataType: 
T_25: (in wLoc0E_31 : word16)
  Class: Eq_25
  DataType: 
  OrigDataType: 
T_26: (in si : word16)
  Class: Eq_25
  DataType: 
  OrigDataType: 
T_27: (in wLoc10_34 : word16)
  Class: Eq_27
  DataType: 
  OrigDataType: 
T_28: (in di : word16)
  Class: Eq_27
  DataType: 
  OrigDataType: 
T_29: (in ax_100 : word16)
  Class: Eq_29
  DataType: 
  OrigDataType: 
T_30: (in ax_101 : word16)
  Class: Eq_30
  DataType: 
  OrigDataType: 
T_31: (in 0x0041 : word16)
  Class: Eq_31
  DataType: 
  OrigDataType: 
T_32: (in ax_101 *s 0x0041 : int16)
  Class: Eq_29
  DataType: 
  OrigDataType: 
T_33: (in 0x0001 : word16)
  Class: Eq_33
  DataType: 
  OrigDataType: 
T_34: (in ax_100 + 0x0001 : word16)
  Class: Eq_34
  DataType: 
  OrigDataType: 
T_35: (in ds : selector)
  Class: Eq_35
  DataType: 
  OrigDataType: 
T_36: (in wLoc0E_237 : word16)
  Class: Eq_36
  DataType: 
  OrigDataType: 
T_37: (in 0x0000 : word16)
  Class: Eq_37
  DataType: 
  OrigDataType: 
T_38: (in wLoc0E_237 + 0x0000 : word16)
  Class: Eq_38
  DataType: 
  OrigDataType: 
T_39: (in Mem105[ds:wLoc0E_237 + 0x0000:word16] : word16)
  Class: Eq_34
  DataType: 
  OrigDataType: 
T_40: (in 0x0000 : word16)
  Class: Eq_40
  DataType: 
  OrigDataType: 
T_41: (in wLoc0E_237 + 0x0000 : word16)
  Class: Eq_41
  DataType: 
  OrigDataType: 
T_42: (in Mem105[ds:wLoc0E_237 + 0x0000:int16] : int16)
  Class: Eq_42
  DataType: 
  OrigDataType: 
T_43: (in (real64) Mem105[ds:wLoc0E_237 + 0x0000:int16] : real64)
  Class: Eq_43
  DataType: 
  OrigDataType: 
T_44: (in 0x01F0 : word16)
  Class: Eq_44
  DataType: 
  OrigDataType: 
T_45: (in Mem105[ds:0x01F0:word16] : word16)
  Class: Eq_45
  DataType: 
  OrigDataType: 
T_46: (in (real64) Mem105[ds:0x01F0:word16] : real64)
  Class: Eq_46
  DataType: 
  OrigDataType: 
T_47: (in (real64) Mem105[ds:wLoc0E_237 + 0x0000:int16] * (real64) Mem105[ds:0x01F0:word16] : word16)
  Class: Eq_47
  DataType: 
  OrigDataType: 
T_48: (in bx_110 : word16)
  Class: Eq_48
  DataType: 
  OrigDataType: 
T_49: (in 0x0000 : word16)
  Class: Eq_49
  DataType: 
  OrigDataType: 
T_50: (in bx_110 + 0x0000 : word16)
  Class: Eq_50
  DataType: 
  OrigDataType: 
T_51: (in Mem109[dx_5:bx_110 + 0x0000:real32] : real32)
  Class: Eq_47
  DataType: 
  OrigDataType: 
T_52: (in 0x0004 : word16)
  Class: Eq_52
  DataType: 
  OrigDataType: 
T_53: (in bx_110 + 0x0004 : word16)
  Class: Eq_48
  DataType: 
  OrigDataType: 
T_54: (in ax_100 + 0x0001 : word16)
  Class: Eq_30
  DataType: 
  OrigDataType: 
T_55: (in bh_111 : byte)
  Class: Eq_55
  DataType: 
  OrigDataType: 
T_56: (in SLICE(bx_110, byte, 8) : byte)
  Class: Eq_55
  DataType: 
  OrigDataType: 
T_57: (in 0x0000 : word16)
  Class: Eq_48
  DataType: 
  OrigDataType: 
T_58: (in bx_110 != 0x0000 : bool)
  Class: Eq_58
  DataType: 
  OrigDataType: 
T_59: (in cx_115 : word16)
  Class: Eq_59
  DataType: 
  OrigDataType: 
T_60: (in 0x0001 : word16)
  Class: Eq_60
  DataType: 
  OrigDataType: 
T_61: (in wLoc04_18 + 0x0001 : word16)
  Class: Eq_59
  DataType: 
  OrigDataType: 
T_62: (in cl_116 : byte)
  Class: Eq_62
  DataType: 
  OrigDataType: 
T_63: (in (byte) cx_115 : byte)
  Class: Eq_62
  DataType: 
  OrigDataType: 
T_64: (in 0x0200 : word16)
  Class: Eq_64
  DataType: 
  OrigDataType: 
T_65: (in bx_110 - 0x0200 : word16)
  Class: Eq_65
  DataType: 
  OrigDataType: 
T_66: (in Mem109[dx_5:bx_110 - 0x0200:real32] : real32)
  Class: Eq_66
  DataType: 
  OrigDataType: 
T_67: (in 0x0200 : word16)
  Class: Eq_67
  DataType: 
  OrigDataType: 
T_68: (in bx_110 + 0x0200 : word16)
  Class: Eq_68
  DataType: 
  OrigDataType: 
T_69: (in Mem109[dx_5:bx_110 + 0x0200:real32] : real32)
  Class: Eq_69
  DataType: 
  OrigDataType: 
T_70: (in Mem109[dx_5:bx_110 - 0x0200:real32] + Mem109[dx_5:bx_110 + 0x0200:real32] : word16)
  Class: Eq_70
  DataType: 
  OrigDataType: 
T_71: (in 0x0004 : word16)
  Class: Eq_71
  DataType: 
  OrigDataType: 
T_72: (in bx_110 - 0x0004 : word16)
  Class: Eq_72
  DataType: 
  OrigDataType: 
T_73: (in Mem109[dx_5:bx_110 - 0x0004:real32] : real32)
  Class: Eq_73
  DataType: 
  OrigDataType: 
T_74: (in Mem109[dx_5:bx_110 - 0x0200:real32] + Mem109[dx_5:bx_110 + 0x0200:real32] + Mem109[dx_5:bx_110 - 0x0004:real32] : word16)
  Class: Eq_74
  DataType: 
  OrigDataType: 
T_75: (in 0x0004 : word16)
  Class: Eq_75
  DataType: 
  OrigDataType: 
T_76: (in bx_110 + 0x0004 : word16)
  Class: Eq_76
  DataType: 
  OrigDataType: 
T_77: (in Mem109[dx_5:bx_110 + 0x0004:real32] : real32)
  Class: Eq_77
  DataType: 
  OrigDataType: 
T_78: (in Mem109[dx_5:bx_110 - 0x0200:real32] + Mem109[dx_5:bx_110 + 0x0200:real32] + Mem109[dx_5:bx_110 - 0x0004:real32] + Mem109[dx_5:bx_110 + 0x0004:real32] : word16)
  Class: Eq_78
  DataType: 
  OrigDataType: 
T_79: (in 0x01EE : word16)
  Class: Eq_79
  DataType: 
  OrigDataType: 
T_80: (in Mem109[ds:0x01EE:word16] : word16)
  Class: Eq_80
  DataType: 
  OrigDataType: 
T_81: (in (real64) Mem109[ds:0x01EE:word16] : real64)
  Class: Eq_81
  DataType: 
  OrigDataType: 
T_82: (in (Mem109[dx_5:bx_110 - 0x0200:real32] + Mem109[dx_5:bx_110 + 0x0200:real32] + Mem109[dx_5:bx_110 - 0x0004:real32] + Mem109[dx_5:bx_110 + 0x0004:real32]) / (real64) Mem109[ds:0x01EE:word16] : word16)
  Class: Eq_82
  DataType: 
  OrigDataType: 
T_83: (in 0x0000 : word16)
  Class: Eq_83
  DataType: 
  OrigDataType: 
T_84: (in bx_110 + 0x0000 : word16)
  Class: Eq_84
  DataType: 
  OrigDataType: 
T_85: (in Mem131[dx_5:bx_110 + 0x0000:real32] : real32)
  Class: Eq_82
  DataType: 
  OrigDataType: 
T_86: (in 0x0040 : word16)
  Class: Eq_86
  DataType: 
  OrigDataType: 
T_87: (in bx_110 *s 0x0040 : int16)
  Class: Eq_87
  DataType: 
  OrigDataType: 
T_88: (in 0x0000 : word16)
  Class: Eq_88
  DataType: 
  OrigDataType: 
T_89: (in bx_110 + 0x0000 : word16)
  Class: Eq_89
  DataType: 
  OrigDataType: 
T_90: (in Mem133[dx_8:bx_110 + 0x0000:word16] : word16)
  Class: Eq_87
  DataType: 
  OrigDataType: 
T_91: (in (word16) bh_111 : word16)
  Class: Eq_91
  DataType: 
  OrigDataType: 
T_92: (in 0x0007 : word16)
  Class: Eq_92
  DataType: 
  OrigDataType: 
T_93: (in (word16) bh_111 << 0x0007 : word16)
  Class: Eq_93
  DataType: 
  OrigDataType: 
T_94: (in 0x0002 : word16)
  Class: Eq_94
  DataType: 
  OrigDataType: 
T_95: (in bx_110 + 0x0002 : word16)
  Class: Eq_95
  DataType: 
  OrigDataType: 
T_96: (in Mem136[dx_8:bx_110 + 0x0002:word16] : word16)
  Class: Eq_93
  DataType: 
  OrigDataType: 
T_97: (in 0x0004 : word16)
  Class: Eq_97
  DataType: 
  OrigDataType: 
T_98: (in bx_110 + 0x0004 : word16)
  Class: Eq_48
  DataType: 
  OrigDataType: 
T_99: (in SLICE(bx_110, byte, 8) : byte)
  Class: Eq_55
  DataType: 
  OrigDataType: 
T_100: (in 0x0000 : word16)
  Class: Eq_48
  DataType: 
  OrigDataType: 
T_101: (in bx_110 != 0x0000 : bool)
  Class: Eq_101
  DataType: 
  OrigDataType: 
T_102: (in al_144 : byte)
  Class: Eq_102
  DataType: 
  OrigDataType: 
T_103: (in 0x02 : byte)
  Class: Eq_103
  DataType: 
  OrigDataType: 
T_104: (in cl_116 >>u 0x02 : word16)
  Class: Eq_102
  DataType: 
  OrigDataType: 
T_105: (in __outb : ptr32)
  Class: Eq_105
  DataType: 
  OrigDataType: 
T_106: (in 0x03C9 : word16)
  Class: Eq_106
  DataType: 
  OrigDataType: 
T_107: (in __outb(0x03C9, al_144) : void)
  Class: Eq_107
  DataType: 
  OrigDataType: 
T_108: (in __outb : ptr32)
  Class: Eq_108
  DataType: 
  OrigDataType: 
T_109: (in 0x03C9 : word16)
  Class: Eq_109
  DataType: 
  OrigDataType: 
T_110: (in __outb(0x03C9, al_144) : void)
  Class: Eq_110
  DataType: 
  OrigDataType: 
T_111: (in __outb : ptr32)
  Class: Eq_111
  DataType: 
  OrigDataType: 
T_112: (in 0x03C9 : word16)
  Class: Eq_112
  DataType: 
  OrigDataType: 
T_113: (in __outb(0x03C9, al_144) : void)
  Class: Eq_113
  DataType: 
  OrigDataType: 
T_114: (in 0x0001 : word16)
  Class: Eq_114
  DataType: 
  OrigDataType: 
T_115: (in cx_115 - 0x0001 : word16)
  Class: Eq_59
  DataType: 
  OrigDataType: 
T_116: (in (byte) cx_115 : byte)
  Class: Eq_62
  DataType: 
  OrigDataType: 
T_117: (in 0x0000 : word16)
  Class: Eq_59
  DataType: 
  OrigDataType: 
T_118: (in cx_115 != 0x0000 : bool)
  Class: Eq_118
  DataType: 
  OrigDataType: 
T_119: (in 0xA000 : word16)
  Class: Eq_119
  DataType: 
  OrigDataType: 
T_120: (in ss : selector)
  Class: Eq_120
  DataType: 
  OrigDataType: 
T_121: (in fp : ptr16)
  Class: Eq_121
  DataType: 
  OrigDataType: 
T_122: (in 0x0012 : word16)
  Class: Eq_122
  DataType: 
  OrigDataType: 
T_123: (in fp - 0x0012 : word16)
  Class: Eq_123
  DataType: 
  OrigDataType: 
T_124: (in Mem150[ss:fp - 0x0012:word16] : word16)
  Class: Eq_119
  DataType: 
  OrigDataType: 
T_125: (in cx_183 : word16)
  Class: Eq_125
  DataType: 
  OrigDataType: 
T_126: (in 0x0000 : word16)
  Class: Eq_126
  DataType: 
  OrigDataType: 
T_127: (in wLoc0E_237 + 0x0000 : word16)
  Class: Eq_127
  DataType: 
  OrigDataType: 
T_128: (in Mem192[ds:wLoc0E_237 + 0x0000:word16] : word16)
  Class: Eq_125
  DataType: 
  OrigDataType: 
T_129: (in rLoc1_194 : real64)
  Class: Eq_129
  DataType: 
  OrigDataType: 
T_130: (in 0x0000 : word16)
  Class: Eq_130
  DataType: 
  OrigDataType: 
T_131: (in wLoc0E_237 + 0x0000 : word16)
  Class: Eq_131
  DataType: 
  OrigDataType: 
T_132: (in Mem192[ds:wLoc0E_237 + 0x0000:word16] : word16)
  Class: Eq_132
  DataType: 
  OrigDataType: 
T_133: (in (real64) Mem192[ds:wLoc0E_237 + 0x0000:word16] : real64)
  Class: Eq_133
  DataType: 
  OrigDataType: 
T_134: (in 3 : real64)
  Class: Eq_134
  DataType: 
  OrigDataType: 
T_135: (in (real64) Mem192[ds:wLoc0E_237 + 0x0000:word16] * 3 : word16)
  Class: Eq_135
  DataType: 
  OrigDataType: 
T_136: (in 0x01F4 : word16)
  Class: Eq_136
  DataType: 
  OrigDataType: 
T_137: (in Mem192[ds:0x01F4:word16] : word16)
  Class: Eq_137
  DataType: 
  OrigDataType: 
T_138: (in (real64) Mem192[ds:0x01F4:word16] : real64)
  Class: Eq_138
  DataType: 
  OrigDataType: 
T_139: (in (real64) Mem192[ds:wLoc0E_237 + 0x0000:word16] * 3 / (real64) Mem192[ds:0x01F4:word16] : word16)
  Class: Eq_129
  DataType: 
  OrigDataType: 
T_140: (in rLoc2_196 : real64)
  Class: Eq_140
  DataType: 
  OrigDataType: 
T_141: (in sin : ptr32)
  Class: Eq_141
  DataType: 
  OrigDataType: 
T_142: (in rLoc2 : real64)
  Class: Eq_142
  DataType: 
  OrigDataType: 
T_143: (in sin(rLoc2) : real64)
  Class: Eq_140
  DataType: 
  OrigDataType: 
T_144: (in sin : ptr32)
  Class: Eq_144
  DataType: 
  OrigDataType: 
T_145: (in 0x01F4 : word16)
  Class: Eq_145
  DataType: 
  OrigDataType: 
T_146: (in Mem192[ds:0x01F4:word16] : word16)
  Class: Eq_146
  DataType: 
  OrigDataType: 
T_147: (in (real64) Mem192[ds:0x01F4:word16] : real64)
  Class: Eq_147
  DataType: 
  OrigDataType: 
T_148: (in rLoc1_194 / (real64) Mem192[ds:0x01F4:word16] : word16)
  Class: Eq_148
  DataType: 
  OrigDataType: 
T_149: (in sin(rLoc1_194 / (real64) Mem192[ds:0x01F4:word16]) : real64)
  Class: Eq_142
  DataType: 
  OrigDataType: 
T_150: (in rLoc2_196 * rLoc2 : real64)
  Class: Eq_150
  DataType: 
  OrigDataType: 
T_151: (in 0x01F2 : word16)
  Class: Eq_151
  DataType: 
  OrigDataType: 
T_152: (in Mem192[ds:0x01F2:word16] : word16)
  Class: Eq_152
  DataType: 
  OrigDataType: 
T_153: (in (real64) Mem192[ds:0x01F2:word16] : real64)
  Class: Eq_153
  DataType: 
  OrigDataType: 
T_154: (in rLoc2_196 * rLoc2 * (real64) Mem192[ds:0x01F2:word16] : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_155: (in (int16) (rLoc2_196 * rLoc2 * (real64) Mem192[ds:0x01F2:word16]) : int16)
  Class: Eq_155
  DataType: 
  OrigDataType: 
T_156: (in 0x0000 : word16)
  Class: Eq_156
  DataType: 
  OrigDataType: 
T_157: (in wLoc0E_237 + 0x0000 : word16)
  Class: Eq_157
  DataType: 
  OrigDataType: 
T_158: (in Mem204[ds:wLoc0E_237 + 0x0000:int16] : int16)
  Class: Eq_155
  DataType: 
  OrigDataType: 
T_159: (in 0x0000 : word16)
  Class: Eq_159
  DataType: 
  OrigDataType: 
T_160: (in wLoc0E_237 + 0x0000 : word16)
  Class: Eq_160
  DataType: 
  OrigDataType: 
T_161: (in Mem204[ds:wLoc0E_237 + 0x0000:byte] : byte)
  Class: Eq_161
  DataType: 
  OrigDataType: 
T_162: (in 0x80 : byte)
  Class: Eq_162
  DataType: 
  OrigDataType: 
T_163: (in Mem204[ds:wLoc0E_237 + 0x0000:byte] + 0x80 : byte)
  Class: Eq_163
  DataType: 
  OrigDataType: 
T_164: (in 0xA000 : selector)
  Class: Eq_164
  DataType: 
  OrigDataType: 
T_165: (in di_158 : word16)
  Class: Eq_165
  DataType: 
  OrigDataType: 
T_166: (in 0x0000 : word16)
  Class: Eq_166
  DataType: 
  OrigDataType: 
T_167: (in di_158 + 0x0000 : word16)
  Class: Eq_167
  DataType: 
  OrigDataType: 
T_168: (in Mem207[0xA000:di_158 + 0x0000:byte] : byte)
  Class: Eq_163
  DataType: 
  OrigDataType: 
T_169: (in 0x0001 : word16)
  Class: Eq_169
  DataType: 
  OrigDataType: 
T_170: (in di_158 + 0x0001 : word16)
  Class: Eq_165
  DataType: 
  OrigDataType: 
T_171: (in 0x0000 : word16)
  Class: Eq_165
  DataType: 
  OrigDataType: 
T_172: (in di_158 != 0x0000 : bool)
  Class: Eq_172
  DataType: 
  OrigDataType: 
T_173: (in dx_ax_164 : word32)
  Class: Eq_173
  DataType: 
  OrigDataType: 
T_174: (in 0x0140 : word16)
  Class: Eq_174
  DataType: 
  OrigDataType: 
T_175: (in dx_ax_164 % 0x0140 : uint16)
  Class: Eq_175
  DataType: 
  OrigDataType: 
T_176: (in 0x0080 : word16)
  Class: Eq_175
  DataType: 
  OrigDataType: 
T_177: (in dx_ax_164 % 0x0140 >= 0x0080 : bool)
  Class: Eq_177
  DataType: 
  OrigDataType: 
T_178: (in rLoc1_224 : real64)
  Class: Eq_178
  DataType: 
  OrigDataType: 
*/
