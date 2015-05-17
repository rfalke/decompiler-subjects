// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_160/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
	T_160 (in bios_video_set_mode : ptr32)
Eq_13: (union "Eq_13" (uint16 u0) (byte u1))
	T_13 (in al_19 : Eq_13)
	T_16 (in bl >>u 0x02 : word16)
Eq_17: (fn void (word16, Eq_13))
	T_17 (in __outb : ptr32)
Eq_20: (fn void (word16, Eq_13))
	T_20 (in __outb : ptr32)
Eq_23: (fn void (word16, Eq_13))
	T_23 (in __outb : ptr32)
Eq_37: (struct "Eq_37" 0001 (FFFFFEBE byte bFFFFFEBE) (FFFFFFFE byte bFFFFFFFE) (0 byte b0000) (13E byte b013E))
	T_37 (in si_40 : (memptr ui16 Eq_37))
	T_38 (in di : (memptr ui16 Eq_37))
	T_40 (in si_40 + 0x0001 : word16)
	T_88 (in di + 0x0001 : word16)
	T_129 (in di + 0x0001 : word16)
	T_155 (in di + 0x0001 : word16)
Eq_94: (struct "Eq_94" 0001 (FFFFFEC0 byte bFFFFFEC0) (FFFFFFFF byte bFFFFFFFF) (0 byte b0000) (1 byte b0001) (140 byte b0140))
	T_94 (in si_104 : (memptr ui16 Eq_94))
	T_96 (in di + 0x0001 : word16)
	T_153 (in si_104 + 0x0001 : word16)
Eq_137: (fn byte (byte))
	T_137 (in __inb : ptr32)
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
T_7: (in ax_4 : ui16)
  Class: Eq_7
  DataType: ui16
  OrigDataType: ui16
T_8: (in ax : word16)
  Class: Eq_8
  DataType: word16
  OrigDataType: word16
T_9: (in 0xA0 : byte)
  Class: Eq_9
  DataType: byte
  OrigDataType: byte
T_10: (in DPB(ax, 0xA0, 8, 8) : word16)
  Class: Eq_7
  DataType: ui16
  OrigDataType: word16
T_11: (in ax_114 : uint16)
  Class: Eq_11
  DataType: uint16
  OrigDataType: uint16
T_12: (in 0x0013 : word16)
  Class: Eq_11
  DataType: uint16
  OrigDataType: word16
T_13: (in al_19 : Eq_13)
  Class: Eq_13
  DataType: Eq_13
  OrigDataType: byte
T_14: (in bl : byte)
  Class: Eq_14
  DataType: uint8
  OrigDataType: uint8
T_15: (in 0x02 : byte)
  Class: Eq_15
  DataType: uint8
  OrigDataType: uint8
T_16: (in bl >>u 0x02 : word16)
  Class: Eq_13
  DataType: Eq_13
  OrigDataType: uint16
T_17: (in __outb : ptr32)
  Class: Eq_17
  DataType: (ptr Eq_17)
  OrigDataType: (ptr (fn T_19 (T_18, T_13)))
T_18: (in 0x03C9 : word16)
  Class: Eq_18
  DataType: word16
  OrigDataType: word16
T_19: (in __outb(0x03C9, al_19) : void)
  Class: Eq_19
  DataType: void
  OrigDataType: void
T_20: (in __outb : ptr32)
  Class: Eq_20
  DataType: (ptr Eq_20)
  OrigDataType: (ptr (fn T_22 (T_21, T_13)))
T_21: (in 0x03C9 : word16)
  Class: Eq_21
  DataType: word16
  OrigDataType: word16
T_22: (in __outb(0x03C9, al_19) : void)
  Class: Eq_22
  DataType: void
  OrigDataType: void
T_23: (in __outb : ptr32)
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: (ptr (fn T_25 (T_24, T_13)))
T_24: (in 0x03C9 : word16)
  Class: Eq_24
  DataType: word16
  OrigDataType: word16
T_25: (in __outb(0x03C9, al_19) : void)
  Class: Eq_25
  DataType: void
  OrigDataType: void
T_26: (in bx : word16)
  Class: Eq_26
  DataType: word16
  OrigDataType: word16
T_27: (in 0x0001 : word16)
  Class: Eq_27
  DataType: word16
  OrigDataType: word16
T_28: (in bx + 0x0001 : word16)
  Class: Eq_26
  DataType: word16
  OrigDataType: word16
T_29: (in DPB(ax_114, al_19, 0, 8) : word16)
  Class: Eq_11
  DataType: uint16
  OrigDataType: word16
T_30: (in (byte) bx : byte)
  Class: Eq_14
  DataType: uint8
  OrigDataType: byte
T_31: (in 0x0000 : word16)
  Class: Eq_26
  DataType: word16
  OrigDataType: word16
T_32: (in bx != 0x0000 : bool)
  Class: Eq_32
  DataType: bool
  OrigDataType: bool
T_33: (in bx_35 : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_34: (in 0x0000 : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_35: (in dx_39 : word16)
  Class: Eq_35
  DataType: word16
  OrigDataType: word16
T_36: (in 0x0003 : word16)
  Class: Eq_35
  DataType: word16
  OrigDataType: word16
T_37: (in si_40 : (memptr ui16 Eq_37))
  Class: Eq_37
  DataType: (memptr ui16 Eq_37)
  OrigDataType: (memptr T_43 (struct 0001 (FFFFFEBE T_51 tFFFFFEBE) (FFFFFFFE T_46 tFFFFFFFE) (13E T_57 t013E)))
T_38: (in di : (memptr ui16 Eq_37))
  Class: Eq_37
  DataType: (memptr ui16 Eq_37)
  OrigDataType: (memptr T_7 (struct 0001 (0 T_69 t0000)))
T_39: (in 0x0001 : word16)
  Class: Eq_39
  DataType: word16
  OrigDataType: word16
T_40: (in si_40 + 0x0001 : word16)
  Class: Eq_37
  DataType: (memptr ui16 Eq_37)
  OrigDataType: word16
T_41: (in ax_118 : uint16)
  Class: Eq_11
  DataType: uint16
  OrigDataType: word16
T_42: (in 0x0002 : word16)
  Class: Eq_42
  DataType: ui16
  OrigDataType: ui16
T_43: (in ax_4 * 0x0002 : word16)
  Class: Eq_7
  DataType: ui16
  OrigDataType: ui16
T_44: (in 0x0002 : word16)
  Class: Eq_44
  DataType: word16
  OrigDataType: word16
T_45: (in si_40 - 0x0002 : word16)
  Class: Eq_45
  DataType: word16
  OrigDataType: word16
T_46: (in Mem0[ax_4 * 0x0002:si_40 - 0x0002:byte] : byte)
  Class: Eq_46
  DataType: byte
  OrigDataType: byte
T_47: (in DPB(ax_118, ((ax_4 * 0x0002)->*si_40).b0000, 0, 8) : word16)
  Class: Eq_11
  DataType: uint16
  OrigDataType: word16
T_48: (in ax_4 * 0x0002 : word16)
  Class: Eq_7
  DataType: ui16
  OrigDataType: ui16
T_49: (in 0x0142 : word16)
  Class: Eq_49
  DataType: word16
  OrigDataType: word16
T_50: (in si_40 - 0x0142 : word16)
  Class: Eq_50
  DataType: word16
  OrigDataType: word16
T_51: (in Mem0[ax_4 * 0x0002:si_40 - 0x0142:byte] : byte)
  Class: Eq_51
  DataType: byte
  OrigDataType: byte
T_52: (in DPB(ax_118, ((ax_4 * 0x0002)->*si_40).b013E, 0, 8) : word16)
  Class: Eq_52
  DataType: word16
  OrigDataType: word16
T_53: (in bx_35 + DPB(ax_118, ((ax_4 * 0x0002)->*si_40).b013E, 0, 8) : word16)
  Class: Eq_53
  DataType: word16
  OrigDataType: word16
T_54: (in ax_4 * 0x0002 : word16)
  Class: Eq_7
  DataType: ui16
  OrigDataType: ui16
T_55: (in 0x013E : word16)
  Class: Eq_55
  DataType: word16
  OrigDataType: word16
T_56: (in si_40 + 0x013E : word16)
  Class: Eq_56
  DataType: word16
  OrigDataType: word16
T_57: (in Mem0[ax_4 * 0x0002:si_40 + 0x013E:byte] : byte)
  Class: Eq_57
  DataType: byte
  OrigDataType: byte
T_58: (in DPB(ax_118, ((ax_4 * 0x0002)->*si_40).b013E, 0, 8) : word16)
  Class: Eq_58
  DataType: word16
  OrigDataType: word16
T_59: (in bx_35 + DPB(ax_118, ((ax_4 * 0x0002)->*si_40).b013E, 0, 8) + DPB(ax_118, ((ax_4 * 0x0002)->*si_40).b013E, 0, 8) : word16)
  Class: Eq_59
  DataType: word16
  OrigDataType: word16
T_60: (in bx_35 + DPB(ax_118, ((ax_4 * 0x0002)->*si_40).b013E, 0, 8) + DPB(ax_118, ((ax_4 * 0x0002)->*si_40).b013E, 0, 8) + ax_114 : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_61: (in 0x0001 : word16)
  Class: Eq_61
  DataType: word16
  OrigDataType: word16
T_62: (in dx_39 - 0x0001 : word16)
  Class: Eq_35
  DataType: word16
  OrigDataType: word16
T_63: (in 0x0000 : word16)
  Class: Eq_35
  DataType: word16
  OrigDataType: word16
T_64: (in dx_39 != 0x0000 : bool)
  Class: Eq_64
  DataType: bool
  OrigDataType: bool
T_65: (in ax_62 : word16)
  Class: Eq_65
  DataType: word16
  OrigDataType: word16
T_66: (in ax_4 * 0x0002 : word16)
  Class: Eq_7
  DataType: ui16
  OrigDataType: ui16
T_67: (in 0x0000 : word16)
  Class: Eq_67
  DataType: word16
  OrigDataType: word16
T_68: (in di + 0x0000 : word16)
  Class: Eq_68
  DataType: word16
  OrigDataType: word16
T_69: (in Mem0[ax_4 * 0x0002:di + 0x0000:byte] : byte)
  Class: Eq_69
  DataType: byte
  OrigDataType: byte
T_70: (in DPB(ax_118, ((ax_4 * 0x0002)->*di).b0000, 0, 8) : word16)
  Class: Eq_65
  DataType: word16
  OrigDataType: word16
T_71: (in bx_65 : uint16)
  Class: Eq_71
  DataType: uint16
  OrigDataType: uint16
T_72: (in bx_35 - ax_62 : word16)
  Class: Eq_72
  DataType: word16
  OrigDataType: word16
T_73: (in 0x0002 : word16)
  Class: Eq_73
  DataType: word16
  OrigDataType: word16
T_74: (in ax_62 << 0x0002 : word16)
  Class: Eq_74
  DataType: ui16
  OrigDataType: ui16
T_75: (in bx_35 - ax_62 - (ax_62 << 0x0002) : word16)
  Class: Eq_71
  DataType: uint16
  OrigDataType: word16
T_76: (in 0x0002 : word16)
  Class: Eq_76
  DataType: uint16
  OrigDataType: uint16
T_77: (in bx_65 >>u 0x0002 : word16)
  Class: Eq_77
  DataType: uint16
  OrigDataType: uint16
T_78: (in 0x000A : word16)
  Class: Eq_78
  DataType: uint16
  OrigDataType: uint16
T_79: (in bx_65 >>u 0x000A : word16)
  Class: Eq_79
  DataType: uint16
  OrigDataType: uint16
T_80: (in (bx_65 >>u 0x0002) - (bx_65 >>u 0x000A) : word16)
  Class: Eq_80
  DataType: word16
  OrigDataType: word16
T_81: (in (byte) ((bx_65 >>u 0x0002) - (bx_65 >>u 0x000A)) : byte)
  Class: Eq_69
  DataType: byte
  OrigDataType: byte
T_82: (in ax_4 * 0x0002 : word16)
  Class: Eq_7
  DataType: ui16
  OrigDataType: ui16
T_83: (in 0x0000 : word16)
  Class: Eq_83
  DataType: word16
  OrigDataType: word16
T_84: (in di + 0x0000 : word16)
  Class: Eq_84
  DataType: word16
  OrigDataType: word16
T_85: (in Mem73[ax_4 * 0x0002:di + 0x0000:byte] : byte)
  Class: Eq_69
  DataType: byte
  OrigDataType: byte
T_86: (in bx_65 >>u 0x000A : word16)
  Class: Eq_11
  DataType: uint16
  OrigDataType: uint16
T_87: (in 0x0001 : word16)
  Class: Eq_87
  DataType: word16
  OrigDataType: word16
T_88: (in di + 0x0001 : word16)
  Class: Eq_37
  DataType: (memptr ui16 Eq_37)
  OrigDataType: word16
T_89: (in cx : word16)
  Class: Eq_89
  DataType: word16
  OrigDataType: word16
T_90: (in 0x0001 : word16)
  Class: Eq_90
  DataType: word16
  OrigDataType: word16
T_91: (in cx - 0x0001 : word16)
  Class: Eq_89
  DataType: word16
  OrigDataType: word16
T_92: (in 0x0000 : word16)
  Class: Eq_89
  DataType: word16
  OrigDataType: word16
T_93: (in cx != 0x0000 : bool)
  Class: Eq_93
  DataType: bool
  OrigDataType: bool
T_94: (in si_104 : (memptr ui16 Eq_94))
  Class: Eq_94
  DataType: (memptr ui16 Eq_94)
  OrigDataType: (memptr T_98 (struct 0001 (FFFFFEC0 T_106 tFFFFFEC0) (FFFFFFFF T_111 tFFFFFFFF) (0 T_148 t0000) (1 T_117 t0001) (140 T_101 t0140)))
T_95: (in 0x0001 : word16)
  Class: Eq_95
  DataType: word16
  OrigDataType: word16
T_96: (in di + 0x0001 : word16)
  Class: Eq_94
  DataType: (memptr ui16 Eq_94)
  OrigDataType: word16
T_97: (in ax_119 : uint16)
  Class: Eq_11
  DataType: uint16
  OrigDataType: word16
T_98: (in ax_4 * 0x0002 : word16)
  Class: Eq_98
  DataType: ui16
  OrigDataType: ui16
T_99: (in 0x0140 : word16)
  Class: Eq_99
  DataType: word16
  OrigDataType: word16
T_100: (in si_104 + 0x0140 : word16)
  Class: Eq_100
  DataType: word16
  OrigDataType: word16
T_101: (in Mem73[ax_4 * 0x0002:si_104 + 0x0140:byte] : byte)
  Class: Eq_101
  DataType: byte
  OrigDataType: byte
T_102: (in DPB(ax_119, ((ax_4 * 0x0002)->*si_104).b0140, 0, 8) : word16)
  Class: Eq_11
  DataType: uint16
  OrigDataType: word16
T_103: (in ax_4 * 0x0002 : word16)
  Class: Eq_98
  DataType: ui16
  OrigDataType: ui16
T_104: (in 0x0140 : word16)
  Class: Eq_104
  DataType: word16
  OrigDataType: word16
T_105: (in si_104 - 0x0140 : word16)
  Class: Eq_105
  DataType: word16
  OrigDataType: word16
T_106: (in Mem73[ax_4 * 0x0002:si_104 - 0x0140:byte] : byte)
  Class: Eq_106
  DataType: byte
  OrigDataType: byte
T_107: (in DPB(ax_119, ((ax_4 * 0x0002)->*si_104).b0140, 0, 8) : word16)
  Class: Eq_107
  DataType: word16
  OrigDataType: word16
T_108: (in ax_4 * 0x0002 : word16)
  Class: Eq_98
  DataType: ui16
  OrigDataType: ui16
T_109: (in 0x0001 : word16)
  Class: Eq_109
  DataType: word16
  OrigDataType: word16
T_110: (in si_104 - 0x0001 : word16)
  Class: Eq_110
  DataType: word16
  OrigDataType: word16
T_111: (in Mem73[ax_4 * 0x0002:si_104 - 0x0001:byte] : byte)
  Class: Eq_111
  DataType: byte
  OrigDataType: byte
T_112: (in DPB(ax_119, ((ax_4 * 0x0002)->*si_104).b0001, 0, 8) : word16)
  Class: Eq_112
  DataType: word16
  OrigDataType: word16
T_113: (in DPB(ax_119, ((ax_4 * 0x0002)->*si_104).b0140, 0, 8) + DPB(ax_119, ((ax_4 * 0x0002)->*si_104).b0001, 0, 8) : word16)
  Class: Eq_113
  DataType: word16
  OrigDataType: word16
T_114: (in ax_4 * 0x0002 : word16)
  Class: Eq_98
  DataType: ui16
  OrigDataType: ui16
T_115: (in 0x0001 : word16)
  Class: Eq_115
  DataType: word16
  OrigDataType: word16
T_116: (in si_104 + 0x0001 : word16)
  Class: Eq_116
  DataType: word16
  OrigDataType: word16
T_117: (in Mem73[ax_4 * 0x0002:si_104 + 0x0001:byte] : byte)
  Class: Eq_117
  DataType: byte
  OrigDataType: byte
T_118: (in DPB(ax_119, ((ax_4 * 0x0002)->*si_104).b0001, 0, 8) : word16)
  Class: Eq_118
  DataType: word16
  OrigDataType: word16
T_119: (in DPB(ax_119, ((ax_4 * 0x0002)->*si_104).b0140, 0, 8) + DPB(ax_119, ((ax_4 * 0x0002)->*si_104).b0001, 0, 8) + DPB(ax_119, ((ax_4 * 0x0002)->*si_104).b0001, 0, 8) : word16)
  Class: Eq_119
  DataType: word16
  OrigDataType: word16
T_120: (in DPB(ax_119, ((ax_4 * 0x0002)->*si_104).b0140, 0, 8) + DPB(ax_119, ((ax_4 * 0x0002)->*si_104).b0001, 0, 8) + DPB(ax_119, ((ax_4 * 0x0002)->*si_104).b0001, 0, 8) + ax_114 : word16)
  Class: Eq_120
  DataType: uint16
  OrigDataType: uint16
T_121: (in 0x0002 : word16)
  Class: Eq_121
  DataType: uint16
  OrigDataType: uint16
T_122: (in DPB(ax_119, ((ax_4 * 0x0002)->*si_104).b0140, 0, 8) + DPB(ax_119, ((ax_4 * 0x0002)->*si_104).b0001, 0, 8) + DPB(ax_119, ((ax_4 * 0x0002)->*si_104).b0001, 0, 8) + ax_114 >>u 0x0002 : word16)
  Class: Eq_122
  DataType: uint16
  OrigDataType: uint16
T_123: (in (byte) (DPB(ax_119, ((ax_4 * 0x0002)->*si_104).b0140, 0, 8) + DPB(ax_119, ((ax_4 * 0x0002)->*si_104).b0001, 0, 8) + DPB(ax_119, ((ax_4 * 0x0002)->*si_104).b0001, 0, 8) + ax_114 >>u 0x0002) : byte)
  Class: Eq_69
  DataType: byte
  OrigDataType: byte
T_124: (in ax_4 * 0x0002 : word16)
  Class: Eq_7
  DataType: ui16
  OrigDataType: ui16
T_125: (in 0x0000 : word16)
  Class: Eq_125
  DataType: word16
  OrigDataType: word16
T_126: (in di + 0x0000 : word16)
  Class: Eq_126
  DataType: word16
  OrigDataType: word16
T_127: (in Mem98[ax_4 * 0x0002:di + 0x0000:byte] : byte)
  Class: Eq_69
  DataType: byte
  OrigDataType: byte
T_128: (in 0x0001 : word16)
  Class: Eq_128
  DataType: word16
  OrigDataType: word16
T_129: (in di + 0x0001 : word16)
  Class: Eq_37
  DataType: (memptr ui16 Eq_37)
  OrigDataType: word16
T_130: (in 0x0001 : word16)
  Class: Eq_130
  DataType: word16
  OrigDataType: word16
T_131: (in cx - 0x0001 : word16)
  Class: Eq_89
  DataType: word16
  OrigDataType: word16
T_132: (in 0x0000 : word16)
  Class: Eq_89
  DataType: word16
  OrigDataType: word16
T_133: (in cx != 0x0000 : bool)
  Class: Eq_133
  DataType: bool
  OrigDataType: bool
T_134: (in 0x0001 : word16)
  Class: Eq_134
  DataType: word16
  OrigDataType: word16
T_135: (in cx - 0x0001 : word16)
  Class: Eq_89
  DataType: word16
  OrigDataType: word16
T_136: (in al_112 : byte)
  Class: Eq_136
  DataType: byte
  OrigDataType: byte
T_137: (in __inb : ptr32)
  Class: Eq_137
  DataType: (ptr Eq_137)
  OrigDataType: (ptr (fn T_139 (T_138)))
T_138: (in 0x60 : byte)
  Class: Eq_138
  DataType: byte
  OrigDataType: byte
T_139: (in __inb(0x60) : byte)
  Class: Eq_136
  DataType: byte
  OrigDataType: byte
T_140: (in 0x01 : byte)
  Class: Eq_140
  DataType: byte
  OrigDataType: byte
T_141: (in al_112 - 0x01 : byte)
  Class: Eq_141
  DataType: byte
  OrigDataType: byte
T_142: (in DPB(ax_119, al_112 - 0x01, 0, 8) : word16)
  Class: Eq_11
  DataType: uint16
  OrigDataType: word16
T_143: (in 0x01 : byte)
  Class: Eq_136
  DataType: byte
  OrigDataType: byte
T_144: (in al_112 != 0x01 : bool)
  Class: Eq_144
  DataType: bool
  OrigDataType: bool
T_145: (in ax_4 * 0x0002 : word16)
  Class: Eq_98
  DataType: ui16
  OrigDataType: ui16
T_146: (in 0x0000 : word16)
  Class: Eq_146
  DataType: word16
  OrigDataType: word16
T_147: (in si_104 + 0x0000 : word16)
  Class: Eq_147
  DataType: word16
  OrigDataType: word16
T_148: (in Mem98[ax_4 * 0x0002:si_104 + 0x0000:byte] : byte)
  Class: Eq_69
  DataType: byte
  OrigDataType: byte
T_149: (in 0x0000 : word16)
  Class: Eq_149
  DataType: word16
  OrigDataType: word16
T_150: (in di + 0x0000 : word16)
  Class: Eq_150
  DataType: word16
  OrigDataType: word16
T_151: (in Mem108[ax_4:di + 0x0000:byte] : byte)
  Class: Eq_69
  DataType: byte
  OrigDataType: byte
T_152: (in 0x0001 : word16)
  Class: Eq_152
  DataType: word16
  OrigDataType: word16
T_153: (in si_104 + 0x0001 : word16)
  Class: Eq_94
  DataType: (memptr ui16 Eq_94)
  OrigDataType: word16
T_154: (in 0x0001 : word16)
  Class: Eq_154
  DataType: word16
  OrigDataType: word16
T_155: (in di + 0x0001 : word16)
  Class: Eq_37
  DataType: (memptr ui16 Eq_37)
  OrigDataType: word16
T_156: (in 0x0001 : word16)
  Class: Eq_156
  DataType: word16
  OrigDataType: word16
T_157: (in cx - 0x0001 : word16)
  Class: Eq_89
  DataType: word16
  OrigDataType: word16
T_158: (in 0x0000 : word16)
  Class: Eq_89
  DataType: word16
  OrigDataType: word16
T_159: (in cx == 0x0000 : bool)
  Class: Eq_159
  DataType: bool
  OrigDataType: bool
T_160: (in bios_video_set_mode : ptr32)
  Class: Eq_2
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (fn T_162 (T_161)))
T_161: (in 0x03 : byte)
  Class: Eq_4
  DataType: byte
  OrigDataType: byte
T_162: (in bios_video_set_mode(0x03) : void)
  Class: Eq_6
  DataType: void
  OrigDataType: void
*/
typedef struct Globals {
} Eq_1;

typedef void (Eq_2)(byte);

typedef union Eq_13 {
	uint16 u0;
	byte u1;
} Eq_13;

typedef void (Eq_17)(word16, Eq_13);

typedef void (Eq_20)(word16, Eq_13);

typedef void (Eq_23)(word16, Eq_13);

typedef struct Eq_37 {	// size: 1 1
	byte bFFFFFEBE;	// FFFFFEBE
	byte bFFFFFFFE;	// FFFFFFFE
	byte b0000;	// 0
	byte b013E;	// 13E
} Eq_37;

typedef struct Eq_94 {	// size: 1 1
	byte bFFFFFEC0;	// FFFFFEC0
	byte bFFFFFFFF;	// FFFFFFFF
	byte b0000;	// 0
	byte b0001;	// 1
	byte b0140;	// 140
} Eq_94;

typedef byte (Eq_137)(byte);

