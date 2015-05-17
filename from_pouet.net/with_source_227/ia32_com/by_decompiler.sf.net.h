// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_227/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr (struct "Globals")))
Eq_3: (fn void (byte))
	T_3 (in bios_video_set_mode : ptr32)
	T_4 (in signature of bios_video_set_mode : void)
Eq_9: (segment)
	T_9 (in cs : selector)
Eq_11: (union (uint8 u0) (uint16 u1))
	T_11 (in al_18 : byte)
	T_12 (in (byte) cs : byte)
	T_47 (in (byte) ax_41 : byte)
	T_54 (in Mem46[ax_8:di + 0x0000:byte] : byte)
	T_111 (in al_70 >>u 0x01 : word16)
Eq_17: (segment (0 (arr Eq_183) a0000))
	T_17 (in ax_11 : word16)
	T_20 (in DPB(cs, ah_6 + 0x20, 8, 8) : selector)
Eq_21: (struct 0001 (0 Eq_94 t0000))
	T_21 (in cx_13 : word16)
	T_22 (in 0x0000 : word16)
	T_58 (in cx_13 - 0x0001 + 0x007E : word16)
	T_64 (in 0x0000 : word16)
	T_110 (in cx_13 - 0x0001 : word16)
	T_115 (in 0xFF82 : word16)
Eq_25: (fn void (word16, bcu8))
	T_25 (in __outb : ptr32)
Eq_41: (fn void (word16, bcu8))
	T_41 (in __outb : ptr32)
Eq_48: (fn void (word16, Eq_11))
	T_48 (in __outb : ptr32)
Eq_51: (struct 0001 (0 Eq_11 t0000))
	T_51 (in di : word16)
	T_62 (in di + 0x0001 : word16)
Eq_70: (fn void (word16, Eq_11))
	T_70 (in __outb : ptr32)
Eq_81: (fn int8 (int8, bcu8, byte))
	T_81 (in __rcl : ptr32)
Eq_83: (union (bcu8 u0) (word16 u1))
	T_83 (in al_67 : byte)
	T_90 (in al_18 + (dh_25 >> 0x03) + (dh_25 >> 0x03 <u 0x00) : word16)
	T_96 (in 0x00 : byte)
Eq_87: (union (int16 u0) (bcu8 u1) (cups16 u2))
	T_87 (in dh_25 >> 0x03 : word16)
	T_88 (in 0x00 : byte)
Eq_91: (union (uint8 u0) (word16 u1))
	T_91 (in al_70 : byte)
	T_98 (in al_67 + Mem46[ax_8:cx_13 + 0x0000:byte] + (al_67 <u 0x00) : word16)
Eq_94: (union (uint16 u0) (byte u1))
	T_94 (in Mem46[ax_8:cx_13 + 0x0000:byte] : byte)
	T_100 (in al_70 >>u 0x01 : word16)
	T_103 (in Mem76[ax_8:cx_13 + 0x0000:byte] : byte)
Eq_104: (union (uint16 u0) (byte u1))
	T_104 (in al_70 >>u 0x01 : word16)
	T_108 (in Mem79[ax_8:DPB(cx_13, ~SLICE(cx_13, byte, 8), 8, 8):byte] : byte)
Eq_107: (struct (0 Eq_104 t0000))
	T_107 (in DPB(cx_13, ~SLICE(cx_13, byte, 8), 8, 8) : word16)
Eq_117: (struct 0001 (0 Eq_156 t0000))
	T_117 (in bx_126 : word16)
	T_118 (in 0x0000 : word16)
	T_172 (in bx_126 + 0x0001 : word16)
Eq_119: (union (int16 u0) (byte u1))
	T_119 (in bh_127 : byte)
	T_120 (in 0x00 : byte)
	T_121 (in bl_128 : byte)
	T_122 (in 0x00 : byte)
	T_132 (in Mem103[ds:0x03C9:int16] : int16)
	T_139 (in Mem109[ds:0x03C9:byte] : byte)
	T_141 (in 0x0012 : word16)
	T_143 (in Mem113[ds:0x03C9:word16] : word16)
	T_147 (in Mem113[ds:0x03C9:word16] : word16)
	T_151 (in Mem113[ds:0x03C9:word16] : word16)
	T_175 (in SLICE(bx_126, byte, 8) : byte)
	T_176 (in (byte) bx_126 : byte)
	T_182 (in Mem103[ds:0x03C9:byte] : byte)
Eq_129: (fn real64 (real16))
	T_129 (in sin : ptr32)
Eq_130: (segment (1FB Eq_135 t01FB) (3C9 Eq_119 t03C9))
	T_130 (in ds : selector)
Eq_131: (struct (0 Eq_119 t0000))
	T_131 (in 0x03C9 : word16)
Eq_133: (union (real16 u0) (real64 u1))
	T_133 (in (real64) Mem103[ds:0x03C9:int16] : real64)
Eq_134: (struct (0 Eq_135 t0000))
	T_134 (in 0x01FB : word16)
Eq_135: (union (real16 u0) (real32 u1))
	T_135 (in Mem103[ds:0x01FB:real32] : real32)
Eq_138: (struct (0 Eq_119 t0000))
	T_138 (in 0x03C9 : word16)
Eq_142: (struct (0 Eq_119 t0000))
	T_142 (in 0x03C9 : word16)
Eq_144: (union (real16 u0) (real64 u1))
	T_144 (in rArg0_115 : real64)
	T_153 (in rArg0 * rLoc1_108 * (real64) Mem113[ds:0x03C9:word16] + (real64) Mem113[ds:0x03C9:word16] : word16)
Eq_145: (union (real16 u0) (real64 u1))
	T_145 (in rArg0 * rLoc1_108 : real64)
Eq_146: (struct (0 Eq_119 t0000))
	T_146 (in 0x03C9 : word16)
Eq_148: (union (real16 u0) (real64 u1))
	T_148 (in (real64) Mem113[ds:0x03C9:word16] : real64)
Eq_150: (struct (0 Eq_119 t0000))
	T_150 (in 0x03C9 : word16)
Eq_152: (union (real16 u0) (real64 u1))
	T_152 (in (real64) Mem113[ds:0x03C9:word16] : real64)
Eq_156: (union (int16 u0) (byte u1))
	T_156 (in (int16) (rArg0_115 - 3) : int16)
	T_159 (in Mem118[ax_11:bx_126 + 0x0000:int16] : int16)
	T_160 (in v25_122 : byte)
	T_163 (in Mem118[ax_11:bx_126 + 0x0000:byte] : byte)
	T_167 (in Mem118[ax_11:bx_126 + 0x0000:byte] + ((bl_128 & bh_127) & 0x08) : byte)
	T_170 (in Mem123[ax_11:bx_126 + 0x0000:byte] : byte)
Eq_181: (struct (0 Eq_119 t0000))
	T_181 (in 0x03C9 : word16)
Eq_183: (struct 0001 (0 Eq_156 t0000))
	T_183
	T_184
	T_185
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr Eq_1)
  OrigDataType: (ptr (struct "Globals"))
T_2: (in rArg0 : real64)
  Class: Eq_2
  DataType: real64
  OrigDataType: real64
T_3: (in bios_video_set_mode : ptr32)
  Class: Eq_3
  DataType: (ptr Eq_3)
  OrigDataType: (ptr (fn T_7 (T_6)))
T_4: (in signature of bios_video_set_mode : void)
  Class: Eq_3
  DataType: (ptr Eq_3)
  OrigDataType: 
T_5: (in al : byte)
  Class: Eq_5
  DataType: byte
  OrigDataType: byte
T_6: (in 0x13 : byte)
  Class: Eq_5
  DataType: byte
  OrigDataType: byte
T_7: (in bios_video_set_mode(0x13) : void)
  Class: Eq_7
  DataType: void
  OrigDataType: void
T_8: (in ah_6 : byte)
  Class: Eq_8
  DataType: byte
  OrigDataType: byte
T_9: (in cs : selector)
  Class: Eq_9
  DataType: (ptr Eq_9)
  OrigDataType: (ptr (segment))
T_10: (in SLICE(cs, byte, 8) : byte)
  Class: Eq_8
  DataType: byte
  OrigDataType: byte
T_11: (in al_18 : byte)
  Class: Eq_11
  DataType: Eq_11
  OrigDataType: (union (uint8 u0) (uint16 u1))
T_12: (in (byte) cs : byte)
  Class: Eq_11
  DataType: Eq_11
  OrigDataType: byte
T_13: (in ax_8 : word16)
  Class: Eq_13
  DataType: word16
  OrigDataType: word16
T_14: (in 0x10 : byte)
  Class: Eq_14
  DataType: byte
  OrigDataType: byte
T_15: (in ah_6 + 0x10 : byte)
  Class: Eq_15
  DataType: byte
  OrigDataType: byte
T_16: (in DPB(cs, ah_6 + 0x10, 8, 8) : word16)
  Class: Eq_13
  DataType: word16
  OrigDataType: word16
T_17: (in ax_11 : word16)
  Class: Eq_17
  DataType: (ptr Eq_17)
  OrigDataType: (ptr (struct (0 (arr T_183) a0000)))
T_18: (in 0x20 : byte)
  Class: Eq_18
  DataType: byte
  OrigDataType: byte
T_19: (in ah_6 + 0x20 : byte)
  Class: Eq_19
  DataType: byte
  OrigDataType: byte
T_20: (in DPB(cs, ah_6 + 0x20, 8, 8) : selector)
  Class: Eq_17
  DataType: (ptr Eq_17)
  OrigDataType: (ptr (segment))
T_21: (in cx_13 : word16)
  Class: Eq_21
  DataType: (memptr word16 Eq_21)
  OrigDataType: (memptr T_13 (struct 0001 (0 T_94 t0000)))
T_22: (in 0x0000 : word16)
  Class: Eq_21
  DataType: (memptr word16 Eq_21)
  OrigDataType: word16
T_23: (in cl_14 : byte)
  Class: Eq_23
  DataType: bcu8
  OrigDataType: bcu8
T_24: (in 0x00 : byte)
  Class: Eq_23
  DataType: bcu8
  OrigDataType: byte
T_25: (in __outb : ptr32)
  Class: Eq_25
  DataType: (ptr Eq_25)
  OrigDataType: (ptr (fn T_28 (T_26, T_27)))
T_26: (in 0x03C9 : word16)
  Class: Eq_26
  DataType: word16
  OrigDataType: word16
T_27: (in al_142 : byte)
  Class: Eq_27
  DataType: bcu8
  OrigDataType: bcu8
T_28: (in __outb(0x03C9, al_142) : void)
  Class: Eq_28
  DataType: void
  OrigDataType: void
T_29: (in al_139 : byte)
  Class: Eq_23
  DataType: bcu8
  OrigDataType: byte
T_30: (in ax_138 : word16)
  Class: Eq_30
  DataType: uint16
  OrigDataType: uint16
T_31: (in ax_143 : word16)
  Class: Eq_31
  DataType: uint16
  OrigDataType: word16
T_32: (in DPB(ax_143, cl_14, 0, 8) : word16)
  Class: Eq_30
  DataType: uint16
  OrigDataType: word16
T_33: (in 0x40 : byte)
  Class: Eq_23
  DataType: bcu8
  OrigDataType: bcu8
T_34: (in cl_14 <u 0x40 : bool)
  Class: Eq_34
  DataType: bool
  OrigDataType: bool
T_35: (in 0x3F : byte)
  Class: Eq_27
  DataType: bcu8
  OrigDataType: byte
T_36: (in ax_26 : word16)
  Class: Eq_36
  DataType: uint16
  OrigDataType: uint16
T_37: (in 0x0005 : word16)
  Class: Eq_37
  DataType: uint16
  OrigDataType: uint16
T_38: (in ax_26 >>u 0x0005 : word16)
  Class: Eq_38
  DataType: uint16
  OrigDataType: uint16
T_39: (in 0x3F : byte)
  Class: Eq_39
  DataType: byte
  OrigDataType: byte
T_40: (in DPB(ax_26 >>u 0x0005, 0x3F, 0, 8) : word16)
  Class: Eq_31
  DataType: uint16
  OrigDataType: word16
T_41: (in __outb : ptr32)
  Class: Eq_41
  DataType: (ptr Eq_41)
  OrigDataType: (ptr (fn T_43 (T_42, T_29)))
T_42: (in 0x03C9 : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_43: (in __outb(0x03C9, al_139) : void)
  Class: Eq_43
  DataType: void
  OrigDataType: void
T_44: (in ax_41 : word16)
  Class: Eq_44
  DataType: uint16
  OrigDataType: word16
T_45: (in 0x0001 : word16)
  Class: Eq_45
  DataType: uint16
  OrigDataType: uint16
T_46: (in ax_138 >>u 0x0001 : word16)
  Class: Eq_44
  DataType: uint16
  OrigDataType: uint16
T_47: (in (byte) ax_41 : byte)
  Class: Eq_11
  DataType: Eq_11
  OrigDataType: byte
T_48: (in __outb : ptr32)
  Class: Eq_48
  DataType: (ptr Eq_48)
  OrigDataType: (ptr (fn T_50 (T_49, T_11)))
T_49: (in 0x03C9 : word16)
  Class: Eq_49
  DataType: word16
  OrigDataType: word16
T_50: (in __outb(0x03C9, al_18) : void)
  Class: Eq_50
  DataType: void
  OrigDataType: void
T_51: (in di : word16)
  Class: Eq_51
  DataType: (memptr word16 Eq_51)
  OrigDataType: (memptr T_13 (struct 0001 (0 T_54 t0000)))
T_52: (in 0x0000 : word16)
  Class: Eq_52
  DataType: word16
  OrigDataType: word16
T_53: (in di + 0x0000 : word16)
  Class: Eq_53
  DataType: word16
  OrigDataType: word16
T_54: (in Mem46[ax_8:di + 0x0000:byte] : byte)
  Class: Eq_11
  DataType: Eq_11
  OrigDataType: byte
T_55: (in 0x0001 : word16)
  Class: Eq_55
  DataType: word16
  OrigDataType: word16
T_56: (in cx_13 - 0x0001 : word16)
  Class: Eq_56
  DataType: word16
  OrigDataType: word16
T_57: (in 0x007E : word16)
  Class: Eq_57
  DataType: word16
  OrigDataType: word16
T_58: (in cx_13 - 0x0001 + 0x007E : word16)
  Class: Eq_21
  DataType: (memptr word16 Eq_21)
  OrigDataType: word16
T_59: (in C_45 : byte)
  Class: Eq_59
  DataType: byte
  OrigDataType: byte
T_60: (in cond(ax_41) : byte)
  Class: Eq_59
  DataType: byte
  OrigDataType: byte
T_61: (in 0x0001 : word16)
  Class: Eq_61
  DataType: word16
  OrigDataType: word16
T_62: (in di + 0x0001 : word16)
  Class: Eq_51
  DataType: (memptr word16 Eq_51)
  OrigDataType: word16
T_63: (in (byte) cx_13 : byte)
  Class: Eq_23
  DataType: bcu8
  OrigDataType: byte
T_64: (in 0x0000 : word16)
  Class: Eq_21
  DataType: (memptr word16 Eq_21)
  OrigDataType: word16
T_65: (in cx_13 != 0x0000 : bool)
  Class: Eq_65
  DataType: bool
  OrigDataType: bool
T_66: (in 0x0001 : word16)
  Class: Eq_66
  DataType: word16
  OrigDataType: word16
T_67: (in ax_138 - 0x0001 : word16)
  Class: Eq_30
  DataType: uint16
  OrigDataType: word16
T_68: (in ax_138 - 0x0001 : word16)
  Class: Eq_68
  DataType: word16
  OrigDataType: word16
T_69: (in (byte) (ax_138 - 0x0001) : byte)
  Class: Eq_23
  DataType: bcu8
  OrigDataType: byte
T_70: (in __outb : ptr32)
  Class: Eq_70
  DataType: (ptr Eq_70)
  OrigDataType: (ptr (fn T_72 (T_71, T_11)))
T_71: (in 0x03C8 : word16)
  Class: Eq_71
  DataType: word16
  OrigDataType: word16
T_72: (in __outb(0x03C8, al_18) : void)
  Class: Eq_72
  DataType: void
  OrigDataType: void
T_73: (in al_18 *u al_18 : uint16)
  Class: Eq_36
  DataType: uint16
  OrigDataType: uint16
T_74: (in dh_25 : byte)
  Class: Eq_74
  DataType: int8
  OrigDataType: int8
T_75: (in 0x03 : byte)
  Class: Eq_74
  DataType: int8
  OrigDataType: byte
T_76: (in ax_26 >>u 0x0005 : word16)
  Class: Eq_31
  DataType: uint16
  OrigDataType: uint16
T_77: (in ax_26 >>u 0x0005 : word16)
  Class: Eq_77
  DataType: uint16
  OrigDataType: uint16
T_78: (in (byte) (ax_26 >>u 0x0005) : byte)
  Class: Eq_27
  DataType: bcu8
  OrigDataType: byte
T_79: (in 0x40 : byte)
  Class: Eq_27
  DataType: bcu8
  OrigDataType: bcu8
T_80: (in al_142 <u 0x40 : bool)
  Class: Eq_80
  DataType: bool
  OrigDataType: bool
T_81: (in __rcl : ptr32)
  Class: Eq_81
  DataType: (ptr Eq_81)
  OrigDataType: (ptr (fn T_82 (T_74, T_23, T_59)))
T_82: (in __rcl(dh_25, cl_14, C_45) : byte)
  Class: Eq_74
  DataType: int8
  OrigDataType: byte
T_83: (in al_67 : byte)
  Class: Eq_83
  DataType: Eq_83
  OrigDataType: bcu8
T_84: (in 0x03 : byte)
  Class: Eq_84
  DataType: uint8
  OrigDataType: uint8
T_85: (in dh_25 >> 0x03 : word16)
  Class: Eq_85
  DataType: int16
  OrigDataType: int16
T_86: (in al_18 + (dh_25 >> 0x03) : word16)
  Class: Eq_86
  DataType: word16
  OrigDataType: word16
T_87: (in dh_25 >> 0x03 : word16)
  Class: Eq_87
  DataType: Eq_87
  OrigDataType: (union (int16 u0) (cups16 u1))
T_88: (in 0x00 : byte)
  Class: Eq_87
  DataType: Eq_87
  OrigDataType: bcu8
T_89: (in dh_25 >> 0x03 <u 0x00 : bool)
  Class: Eq_89
  DataType: bool
  OrigDataType: bool
T_90: (in al_18 + (dh_25 >> 0x03) + (dh_25 >> 0x03 <u 0x00) : word16)
  Class: Eq_83
  DataType: Eq_83
  OrigDataType: word16
T_91: (in al_70 : byte)
  Class: Eq_91
  DataType: Eq_91
  OrigDataType: uint8
T_92: (in 0x0000 : word16)
  Class: Eq_92
  DataType: word16
  OrigDataType: word16
T_93: (in cx_13 + 0x0000 : word16)
  Class: Eq_93
  DataType: word16
  OrigDataType: word16
T_94: (in Mem46[ax_8:cx_13 + 0x0000:byte] : byte)
  Class: Eq_94
  DataType: Eq_94
  OrigDataType: byte
T_95: (in al_67 + Mem46[ax_8:cx_13 + 0x0000:byte] : word16)
  Class: Eq_95
  DataType: word16
  OrigDataType: word16
T_96: (in 0x00 : byte)
  Class: Eq_83
  DataType: Eq_83
  OrigDataType: bcu8
T_97: (in al_67 <u 0x00 : bool)
  Class: Eq_97
  DataType: bool
  OrigDataType: bool
T_98: (in al_67 + Mem46[ax_8:cx_13 + 0x0000:byte] + (al_67 <u 0x00) : word16)
  Class: Eq_91
  DataType: Eq_91
  OrigDataType: word16
T_99: (in 0x01 : byte)
  Class: Eq_99
  DataType: uint8
  OrigDataType: uint8
T_100: (in al_70 >>u 0x01 : word16)
  Class: Eq_94
  DataType: Eq_94
  OrigDataType: uint16
T_101: (in 0x0000 : word16)
  Class: Eq_101
  DataType: word16
  OrigDataType: word16
T_102: (in cx_13 + 0x0000 : word16)
  Class: Eq_102
  DataType: word16
  OrigDataType: word16
T_103: (in Mem76[ax_8:cx_13 + 0x0000:byte] : byte)
  Class: Eq_94
  DataType: Eq_94
  OrigDataType: byte
T_104: (in al_70 >>u 0x01 : word16)
  Class: Eq_104
  DataType: Eq_104
  OrigDataType: uint16
T_105: (in SLICE(cx_13, byte, 8) : byte)
  Class: Eq_105
  DataType: byte
  OrigDataType: byte
T_106: (in ~SLICE(cx_13, byte, 8) : byte)
  Class: Eq_106
  DataType: byte
  OrigDataType: byte
T_107: (in DPB(cx_13, ~SLICE(cx_13, byte, 8), 8, 8) : word16)
  Class: Eq_107
  DataType: (memptr word16 Eq_107)
  OrigDataType: (memptr T_13 (struct (0 T_108 t0000)))
T_108: (in Mem79[ax_8:DPB(cx_13, ~SLICE(cx_13, byte, 8), 8, 8):byte] : byte)
  Class: Eq_104
  DataType: Eq_104
  OrigDataType: byte
T_109: (in 0x0001 : word16)
  Class: Eq_109
  DataType: word16
  OrigDataType: word16
T_110: (in cx_13 - 0x0001 : word16)
  Class: Eq_21
  DataType: (memptr word16 Eq_21)
  OrigDataType: word16
T_111: (in al_70 >>u 0x01 : word16)
  Class: Eq_11
  DataType: Eq_11
  OrigDataType: uint16
T_112: (in al_70 >>u 0x01 : word16)
  Class: Eq_112
  DataType: uint16
  OrigDataType: uint16
T_113: (in cond(al_70 >>u 0x01) : byte)
  Class: Eq_59
  DataType: byte
  OrigDataType: byte
T_114: (in (byte) cx_13 : byte)
  Class: Eq_23
  DataType: bcu8
  OrigDataType: byte
T_115: (in 0xFF82 : word16)
  Class: Eq_21
  DataType: (memptr word16 Eq_21)
  OrigDataType: word16
T_116: (in cx_13 != 0xFF82 : bool)
  Class: Eq_116
  DataType: bool
  OrigDataType: bool
T_117: (in bx_126 : word16)
  Class: Eq_117
  DataType: (memptr (ptr Eq_17) Eq_117)
  OrigDataType: (memptr T_17 (struct 0001 (0 T_156 t0000)))
T_118: (in 0x0000 : word16)
  Class: Eq_117
  DataType: (memptr (ptr Eq_17) Eq_117)
  OrigDataType: word16
T_119: (in bh_127 : byte)
  Class: Eq_119
  DataType: Eq_119
  OrigDataType: byte
T_120: (in 0x00 : byte)
  Class: Eq_119
  DataType: Eq_119
  OrigDataType: byte
T_121: (in bl_128 : byte)
  Class: Eq_119
  DataType: Eq_119
  OrigDataType: byte
T_122: (in 0x00 : byte)
  Class: Eq_119
  DataType: Eq_119
  OrigDataType: byte
T_123: (in C_105 : byte)
  Class: Eq_123
  DataType: bool
  OrigDataType: bool
T_124: (in false : bool)
  Class: Eq_123
  DataType: bool
  OrigDataType: bool
T_125: (in cx_101 : word16)
  Class: Eq_125
  DataType: word16
  OrigDataType: word16
T_126: (in 0x0001 : word16)
  Class: Eq_126
  DataType: word16
  OrigDataType: word16
T_127: (in cx_13 - 0x0001 : word16)
  Class: Eq_125
  DataType: word16
  OrigDataType: word16
T_128: (in rLoc1_108 : real64)
  Class: Eq_128
  DataType: real64
  OrigDataType: real64
T_129: (in sin : ptr32)
  Class: Eq_129
  DataType: (ptr Eq_129)
  OrigDataType: (ptr (fn T_137 (T_136)))
T_130: (in ds : selector)
  Class: Eq_130
  DataType: (ptr Eq_130)
  OrigDataType: (ptr (segment (1FB T_135 t01FB) (3C9 T_119 t03C9)))
T_131: (in 0x03C9 : word16)
  Class: Eq_131
  DataType: (memptr (ptr Eq_130) Eq_131)
  OrigDataType: (memptr T_130 (struct (0 T_132 t0000)))
T_132: (in Mem103[ds:0x03C9:int16] : int16)
  Class: Eq_119
  DataType: Eq_119
  OrigDataType: int16
T_133: (in (real64) Mem103[ds:0x03C9:int16] : real64)
  Class: Eq_133
  DataType: Eq_133
  OrigDataType: (union (real16 u0) (real64 u1))
T_134: (in 0x01FB : word16)
  Class: Eq_134
  DataType: (memptr (ptr Eq_130) Eq_134)
  OrigDataType: (memptr T_130 (struct (0 T_135 t0000)))
T_135: (in Mem103[ds:0x01FB:real32] : real32)
  Class: Eq_135
  DataType: Eq_135
  OrigDataType: (union (real16 u0) (real32 u1))
T_136: (in (real64) Mem103[ds:0x03C9:int16] * Mem103[ds:0x01FB:real32] : word16)
  Class: Eq_136
  DataType: real16
  OrigDataType: real16
T_137: (in sin((real64) Mem103[ds:0x03C9:int16] * Mem103[ds:0x01FB:real32]) : real64)
  Class: Eq_128
  DataType: real64
  OrigDataType: real64
T_138: (in 0x03C9 : word16)
  Class: Eq_138
  DataType: (memptr (ptr Eq_130) Eq_138)
  OrigDataType: (memptr T_130 (struct (0 T_139 t0000)))
T_139: (in Mem109[ds:0x03C9:byte] : byte)
  Class: Eq_119
  DataType: Eq_119
  OrigDataType: byte
T_140: (in !C_105 : bool)
  Class: Eq_123
  DataType: bool
  OrigDataType: bool
T_141: (in 0x0012 : word16)
  Class: Eq_119
  DataType: Eq_119
  OrigDataType: word16
T_142: (in 0x03C9 : word16)
  Class: Eq_142
  DataType: (memptr (ptr Eq_130) Eq_142)
  OrigDataType: (memptr T_130 (struct (0 T_143 t0000)))
T_143: (in Mem113[ds:0x03C9:word16] : word16)
  Class: Eq_119
  DataType: Eq_119
  OrigDataType: word16
T_144: (in rArg0_115 : real64)
  Class: Eq_144
  DataType: Eq_144
  OrigDataType: real64
T_145: (in rArg0 * rLoc1_108 : real64)
  Class: Eq_145
  DataType: Eq_145
  OrigDataType: (union (real16 u0) (real64 u1))
T_146: (in 0x03C9 : word16)
  Class: Eq_146
  DataType: (memptr (ptr Eq_130) Eq_146)
  OrigDataType: (memptr T_130 (struct (0 T_147 t0000)))
T_147: (in Mem113[ds:0x03C9:word16] : word16)
  Class: Eq_119
  DataType: Eq_119
  OrigDataType: word16
T_148: (in (real64) Mem113[ds:0x03C9:word16] : real64)
  Class: Eq_148
  DataType: Eq_148
  OrigDataType: (union (real16 u0) (real64 u1))
T_149: (in rArg0 * rLoc1_108 * (real64) Mem113[ds:0x03C9:word16] : word16)
  Class: Eq_149
  DataType: real16
  OrigDataType: real16
T_150: (in 0x03C9 : word16)
  Class: Eq_150
  DataType: (memptr (ptr Eq_130) Eq_150)
  OrigDataType: (memptr T_130 (struct (0 T_151 t0000)))
T_151: (in Mem113[ds:0x03C9:word16] : word16)
  Class: Eq_119
  DataType: Eq_119
  OrigDataType: word16
T_152: (in (real64) Mem113[ds:0x03C9:word16] : real64)
  Class: Eq_152
  DataType: Eq_152
  OrigDataType: (union (real16 u0) (real64 u1))
T_153: (in rArg0 * rLoc1_108 * (real64) Mem113[ds:0x03C9:word16] + (real64) Mem113[ds:0x03C9:word16] : word16)
  Class: Eq_144
  DataType: Eq_144
  OrigDataType: real16
T_154: (in 3 : real64)
  Class: Eq_154
  DataType: real64
  OrigDataType: real64
T_155: (in rArg0_115 - 3 : real64)
  Class: Eq_155
  DataType: real64
  OrigDataType: real64
T_156: (in (int16) (rArg0_115 - 3) : int16)
  Class: Eq_156
  DataType: Eq_156
  OrigDataType: int16
T_157: (in 0x0000 : word16)
  Class: Eq_157
  DataType: word16
  OrigDataType: word16
T_158: (in bx_126 + 0x0000 : word16)
  Class: Eq_158
  DataType: word16
  OrigDataType: word16
T_159: (in Mem118[ax_11:bx_126 + 0x0000:int16] : int16)
  Class: Eq_156
  DataType: Eq_156
  OrigDataType: int16
T_160: (in v25_122 : byte)
  Class: Eq_156
  DataType: Eq_156
  OrigDataType: byte
T_161: (in 0x0000 : word16)
  Class: Eq_161
  DataType: word16
  OrigDataType: word16
T_162: (in bx_126 + 0x0000 : word16)
  Class: Eq_162
  DataType: word16
  OrigDataType: word16
T_163: (in Mem118[ax_11:bx_126 + 0x0000:byte] : byte)
  Class: Eq_156
  DataType: Eq_156
  OrigDataType: byte
T_164: (in bl_128 & bh_127 : byte)
  Class: Eq_164
  DataType: byte
  OrigDataType: byte
T_165: (in 0x08 : byte)
  Class: Eq_165
  DataType: byte
  OrigDataType: byte
T_166: (in bl_128 & bh_127 & 0x08 : byte)
  Class: Eq_166
  DataType: byte
  OrigDataType: byte
T_167: (in Mem118[ax_11:bx_126 + 0x0000:byte] + ((bl_128 & bh_127) & 0x08) : byte)
  Class: Eq_156
  DataType: Eq_156
  OrigDataType: byte
T_168: (in 0x0000 : word16)
  Class: Eq_168
  DataType: word16
  OrigDataType: word16
T_169: (in bx_126 + 0x0000 : word16)
  Class: Eq_169
  DataType: word16
  OrigDataType: word16
T_170: (in Mem123[ax_11:bx_126 + 0x0000:byte] : byte)
  Class: Eq_156
  DataType: Eq_156
  OrigDataType: byte
T_171: (in 0x0001 : word16)
  Class: Eq_171
  DataType: word16
  OrigDataType: word16
T_172: (in bx_126 + 0x0001 : word16)
  Class: Eq_117
  DataType: (memptr (ptr Eq_17) Eq_117)
  OrigDataType: word16
T_173: (in rArg0_115 - 3 : real64)
  Class: Eq_2
  DataType: real64
  OrigDataType: real64
T_174: (in cond(v25_122) : byte)
  Class: Eq_123
  DataType: bool
  OrigDataType: byte
T_175: (in SLICE(bx_126, byte, 8) : byte)
  Class: Eq_119
  DataType: Eq_119
  OrigDataType: byte
T_176: (in (byte) bx_126 : byte)
  Class: Eq_119
  DataType: Eq_119
  OrigDataType: byte
T_177: (in 0x0001 : word16)
  Class: Eq_177
  DataType: word16
  OrigDataType: word16
T_178: (in cx_101 - 0x0001 : word16)
  Class: Eq_125
  DataType: word16
  OrigDataType: word16
T_179: (in 0x0000 : word16)
  Class: Eq_125
  DataType: word16
  OrigDataType: word16
T_180: (in cx_101 != 0x0000 : bool)
  Class: Eq_180
  DataType: bool
  OrigDataType: bool
T_181: (in 0x03C9 : word16)
  Class: Eq_181
  DataType: (memptr (ptr Eq_130) Eq_181)
  OrigDataType: (memptr T_130 (struct (0 T_182 t0000)))
T_182: (in Mem103[ds:0x03C9:byte] : byte)
  Class: Eq_119
  DataType: Eq_119
  OrigDataType: byte
T_183:
  Class: Eq_183
  DataType: Eq_183
  OrigDataType: (struct 0001 (0 T_159 t0000))
T_184:
  Class: Eq_183
  DataType: Eq_183
  OrigDataType: (struct 0001 (0 T_163 t0000))
T_185:
  Class: Eq_183
  DataType: Eq_183
  OrigDataType: (struct 0001 (0 T_170 t0000))
*/
typedef struct Globals {
} Eq_1;

typedef void (Eq_3)(byte);

typedef struct  {
} Eq_9;

typedef union  {
	uint8 u0;
	uint16 u1;
} Eq_11;

typedef  Eq_17[]struct  {
	 a0000[];	// 0
} Eq_17;

typedef  Eq_21struct  {	// size: 1 1
	 t0000;	// 0
} Eq_21;

typedef void (Eq_25)(word16, bcu8);

typedef void (Eq_41)(word16, bcu8);

typedef void (Eq_48)(word16, );

typedef  Eq_51struct  {	// size: 1 1
	 t0000;	// 0
} Eq_51;

typedef void (Eq_70)(word16, );

typedef int8 (Eq_81)(int8, bcu8, byte);

typedef union  {
	bcu8 u0;
	word16 u1;
} Eq_83;

typedef union  {
	int16 u0;
	bcu8 u1;
	cups16 u2;
} Eq_87;

typedef union  {
	uint8 u0;
	word16 u1;
} Eq_91;

typedef union  {
	uint16 u0;
	byte u1;
} Eq_94;

typedef union  {
	uint16 u0;
	byte u1;
} Eq_104;

typedef  Eq_107struct  {
	 t0000;	// 0
} Eq_107;

typedef  Eq_117struct  {	// size: 1 1
	 t0000;	// 0
} Eq_117;

typedef union  {
	int16 u0;
	byte u1;
} Eq_119;

typedef real64 (Eq_129)(real16);

typedef  Eq_130 Eq_130struct  {
	 t01FB;	// 1FB
	 t03C9;	// 3C9
} Eq_130;

typedef  Eq_131struct  {
	 t0000;	// 0
} Eq_131;

typedef union  {
	real16 u0;
	real64 u1;
} Eq_133;

typedef  Eq_134struct  {
	 t0000;	// 0
} Eq_134;

typedef union  {
	real16 u0;
	real32 u1;
} Eq_135;

typedef  Eq_138struct  {
	 t0000;	// 0
} Eq_138;

typedef  Eq_142struct  {
	 t0000;	// 0
} Eq_142;

typedef union  {
	real16 u0;
	real64 u1;
} Eq_144;

typedef union  {
	real16 u0;
	real64 u1;
} Eq_145;

typedef  Eq_146struct  {
	 t0000;	// 0
} Eq_146;

typedef union  {
	real16 u0;
	real64 u1;
} Eq_148;

typedef  Eq_150struct  {
	 t0000;	// 0
} Eq_150;

typedef union  {
	real16 u0;
	real64 u1;
} Eq_152;

typedef union  {
	int16 u0;
	byte u1;
} Eq_156;

typedef  Eq_181struct  {
	 t0000;	// 0
} Eq_181;

typedef  Eq_183struct  {	// size: 1 1
	 t0000;	// 0
} Eq_183;

