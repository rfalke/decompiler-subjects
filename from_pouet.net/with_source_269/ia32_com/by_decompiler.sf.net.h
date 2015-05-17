// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_269/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_139) ptrFFFA0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_6: (fn void (byte))
	T_6 (in __syscall : ptr32)
Eq_9: (fn void (byte))
	T_9 (in bios_video_set_mode : ptr32)
	T_10 (in signature of bios_video_set_mode : void)
	T_165 (in bios_video_set_mode : ptr32)
Eq_15: (segment "Eq_15" (204 (arr byte) a0204))
	T_15 (in es : (ptr Eq_15))
Eq_25: (struct "Eq_25" 0270 (0 word16 w0000) (140 word16 w0140))
	T_25 (in di_39 : (memptr (ptr Eq_34) Eq_25))
	T_27 (in di_39 + 0x0002 : word16)
	T_52 (in di_39 + 0x0270 : word16)
	T_60 (in di_39 - 0x1180 : word16)
	T_163 (in (word16) (ds->w01FE *u 0x0140) + ds->w01FC + 0x0204 : word16)
Eq_28: (union "Eq_28" (uint8 u0) (uint16 u1))
	T_28 (in dl_69 : Eq_28)
	T_30 (in dl_69 >>u 0x01 : word16)
	T_31 (in 0x00 : byte)
	T_58 (in 0x80 : byte)
Eq_34: (segment "Eq_34" (1DE (arr byte 10) a01DE) (1FC word16 w01FC) (1FE uint16 w01FE) (200 word16 w0200) (202 word16 w0202) (203 (arr byte) a0203) (204 (arr byte) a0204))
	T_34 (in ds : (ptr Eq_34))
	T_170 (in ds : selector)
Eq_61: (union "Eq_61" (cups16 u0) ((memptr (ptr Eq_34) byte) u1))
	T_61 (in bx_41 : Eq_61)
	T_63 (in bx_41 + 0x0001 : word16)
	T_64 (in 0xFE2B : word16)
	T_164 (in 0x01DE : word16)
Eq_110: (fn byte (word16))
	T_110 (in __inb : ptr32)
Eq_119: (struct "Eq_119" 0001 (FFFFFFFF byte bFFFFFFFF) (0 byte b0000))
	T_119 (in si_124 : (memptr (ptr Eq_34) Eq_119))
	T_120 (in 0x0204 : word16)
	T_144 (in si_124 + 0x0001 : word16)
Eq_139: (segment "Eq_139" (0 (arr byte) a0000))
	T_139 (in 0xA000 : selector)
Eq_149: (fn byte (byte))
	T_149 (in __inb : ptr32)
Eq_168: (fn void ((ptr Eq_34), word16))
	T_168 (in msdos_display_string : ptr32)
	T_169 (in signature of msdos_display_string : void)
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr Eq_1)
  OrigDataType: (ptr (struct "Globals"))
T_2: (in di_2 : (memptr (ptr Eq_15) byte))
  Class: Eq_2
  DataType: (memptr (ptr Eq_15) byte)
  OrigDataType: (memptr T_15 (struct 0001 (0 T_18 t0000)))
T_3: (in 0x0204 : word16)
  Class: Eq_2
  DataType: (memptr (ptr Eq_15) byte)
  OrigDataType: word16
T_4: (in cx_10 : word16)
  Class: Eq_4
  DataType: word16
  OrigDataType: word16
T_5: (in 0xFA00 : word16)
  Class: Eq_4
  DataType: word16
  OrigDataType: word16
T_6: (in __syscall : ptr32)
  Class: Eq_6
  DataType: (ptr Eq_6)
  OrigDataType: (ptr (fn T_8 (T_7)))
T_7: (in 0x10 : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_8: (in __syscall(0x10) : void)
  Class: Eq_8
  DataType: void
  OrigDataType: void
T_9: (in bios_video_set_mode : ptr32)
  Class: Eq_9
  DataType: (ptr Eq_9)
  OrigDataType: (ptr (fn T_13 (T_12)))
T_10: (in signature of bios_video_set_mode : void)
  Class: Eq_9
  DataType: (ptr Eq_9)
  OrigDataType: 
T_11: (in al : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_12: (in 0x13 : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_13: (in bios_video_set_mode(0x13) : void)
  Class: Eq_13
  DataType: void
  OrigDataType: void
T_14: (in 0x10 : byte)
  Class: Eq_14
  DataType: byte
  OrigDataType: byte
T_15: (in es : (ptr Eq_15))
  Class: Eq_15
  DataType: (ptr Eq_15)
  OrigDataType: (ptr (segment (204 (arr T_174) a0204)))
T_16: (in 0x0000 : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_17: (in di_2 + 0x0000 : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_18: (in Mem7[es:di_2 + 0x0000:byte] : byte)
  Class: Eq_14
  DataType: byte
  OrigDataType: byte
T_19: (in 0x0001 : word16)
  Class: Eq_19
  DataType: word16
  OrigDataType: word16
T_20: (in di_2 + 0x0001 : word16)
  Class: Eq_2
  DataType: (memptr (ptr Eq_15) byte)
  OrigDataType: word16
T_21: (in 0x0001 : word16)
  Class: Eq_21
  DataType: word16
  OrigDataType: word16
T_22: (in cx_10 - 0x0001 : word16)
  Class: Eq_4
  DataType: word16
  OrigDataType: word16
T_23: (in 0x0000 : word16)
  Class: Eq_4
  DataType: word16
  OrigDataType: word16
T_24: (in cx_10 == 0x0000 : bool)
  Class: Eq_24
  DataType: bool
  OrigDataType: bool
T_25: (in di_39 : (memptr (ptr Eq_34) Eq_25))
  Class: Eq_25
  DataType: (memptr (ptr Eq_34) Eq_25)
  OrigDataType: (memptr T_34 (struct 0270 (0 T_37 t0000) (140 T_41 t0140)))
T_26: (in 0x0002 : word16)
  Class: Eq_26
  DataType: word16
  OrigDataType: word16
T_27: (in di_39 + 0x0002 : word16)
  Class: Eq_25
  DataType: (memptr (ptr Eq_34) Eq_25)
  OrigDataType: word16
T_28: (in dl_69 : Eq_28)
  Class: Eq_28
  DataType: Eq_28
  OrigDataType: (union (uint8 u0) (uint16 u1))
T_29: (in 0x01 : byte)
  Class: Eq_29
  DataType: uint8
  OrigDataType: uint8
T_30: (in dl_69 >>u 0x01 : word16)
  Class: Eq_28
  DataType: Eq_28
  OrigDataType: uint16
T_31: (in 0x00 : byte)
  Class: Eq_28
  DataType: uint8
  OrigDataType: byte
T_32: (in dl_69 != 0x00 : bool)
  Class: Eq_32
  DataType: bool
  OrigDataType: bool
T_33: (in 0x1F1F : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_34: (in ds : (ptr Eq_34))
  Class: Eq_34
  DataType: (ptr Eq_34)
  OrigDataType: (ptr (segment (1DE (arr T_175 10) a01DE) (1FC T_74 t01FC) (1FE T_91 t01FE) (200 T_81 t0200) (202 T_101 t0202) (203 (arr T_176) a0203) (204 (arr T_177) a0204)))
T_35: (in 0x0000 : word16)
  Class: Eq_35
  DataType: word16
  OrigDataType: word16
T_36: (in di_39 + 0x0000 : word16)
  Class: Eq_36
  DataType: word16
  OrigDataType: word16
T_37: (in Mem167[ds:di_39 + 0x0000:word16] : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_38: (in 0x1F1F : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_39: (in 0x0140 : word16)
  Class: Eq_39
  DataType: word16
  OrigDataType: word16
T_40: (in di_39 + 0x0140 : word16)
  Class: Eq_40
  DataType: word16
  OrigDataType: word16
T_41: (in Mem168[ds:di_39 + 0x0140:word16] : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_42: (in bp : (memptr (ptr Eq_15) byte))
  Class: Eq_42
  DataType: (memptr (ptr Eq_15) byte)
  OrigDataType: (memptr T_15 (struct (0 T_45 t0000)))
T_43: (in si_58 : word16)
  Class: Eq_43
  DataType: ui16
  OrigDataType: word16
T_44: (in bp + si_58 : word16)
  Class: Eq_44
  DataType: word16
  OrigDataType: word16
T_45: (in Mem0[es:bp + si_58:byte] : byte)
  Class: Eq_45
  DataType: byte
  OrigDataType: byte
T_46: (in bp[si_58] & dl_69 : byte)
  Class: Eq_46
  DataType: byte
  OrigDataType: byte
T_47: (in 0x00 : byte)
  Class: Eq_46
  DataType: byte
  OrigDataType: byte
T_48: (in (bp[si_58] & dl_69) == 0x00 : bool)
  Class: Eq_48
  DataType: bool
  OrigDataType: bool
T_49: (in 0x0001 : word16)
  Class: Eq_49
  DataType: word16
  OrigDataType: word16
T_50: (in si_58 + 0x0001 : word16)
  Class: Eq_43
  DataType: ui16
  OrigDataType: word16
T_51: (in 0x0270 : word16)
  Class: Eq_51
  DataType: word16
  OrigDataType: word16
T_52: (in di_39 + 0x0270 : word16)
  Class: Eq_25
  DataType: (memptr (ptr Eq_34) Eq_25)
  OrigDataType: word16
T_53: (in dh_54 : byte)
  Class: Eq_53
  DataType: byte
  OrigDataType: byte
T_54: (in 0x01 : byte)
  Class: Eq_54
  DataType: byte
  OrigDataType: byte
T_55: (in dh_54 - 0x01 : byte)
  Class: Eq_53
  DataType: byte
  OrigDataType: byte
T_56: (in 0x00 : byte)
  Class: Eq_53
  DataType: byte
  OrigDataType: byte
T_57: (in dh_54 != 0x00 : bool)
  Class: Eq_57
  DataType: bool
  OrigDataType: bool
T_58: (in 0x80 : byte)
  Class: Eq_28
  DataType: uint8
  OrigDataType: byte
T_59: (in 0x1180 : word16)
  Class: Eq_59
  DataType: word16
  OrigDataType: word16
T_60: (in di_39 - 0x1180 : word16)
  Class: Eq_25
  DataType: (memptr (ptr Eq_34) Eq_25)
  OrigDataType: word16
T_61: (in bx_41 : Eq_61)
  Class: Eq_61
  DataType: Eq_61
  OrigDataType: (union (cups16 u0) ((memptr T_34 (struct 0001 (0 T_69 t0000))) u1))
T_62: (in 0x0001 : word16)
  Class: Eq_62
  DataType: word16
  OrigDataType: word16
T_63: (in bx_41 + 0x0001 : word16)
  Class: Eq_61
  DataType: Eq_61
  OrigDataType: word16
T_64: (in 0xFE2B : word16)
  Class: Eq_61
  DataType: cups16
  OrigDataType: cups16
T_65: (in bx_41 <u 0xFE2B : bool)
  Class: Eq_65
  DataType: bool
  OrigDataType: bool
T_66: (in 0x08 : byte)
  Class: Eq_53
  DataType: byte
  OrigDataType: byte
T_67: (in 0x0000 : word16)
  Class: Eq_67
  DataType: word16
  OrigDataType: word16
T_68: (in bx_41 + 0x0000 : word16)
  Class: Eq_68
  DataType: word16
  OrigDataType: word16
T_69: (in Mem0[ds:bx_41 + 0x0000:byte] : byte)
  Class: Eq_69
  DataType: byte
  OrigDataType: byte
T_70: (in (word16) Mem0[ds:bx_41 + 0x0000:byte] : word16)
  Class: Eq_70
  DataType: word16
  OrigDataType: word16
T_71: (in 0x0003 : word16)
  Class: Eq_71
  DataType: word16
  OrigDataType: word16
T_72: (in (word16) Mem0[ds:bx_41 + 0x0000:byte] << 0x0003 : word16)
  Class: Eq_43
  DataType: ui16
  OrigDataType: ui16
T_73: (in 0x01FC : word16)
  Class: Eq_73
  DataType: (memptr (ptr Eq_34) word16)
  OrigDataType: (memptr T_34 (struct (0 T_74 t0000)))
T_74: (in Mem0[ds:0x01FC:word16] : word16)
  Class: Eq_74
  DataType: word16
  OrigDataType: word16
T_75: (in 0x00A0 : word16)
  Class: Eq_74
  DataType: word16
  OrigDataType: word16
T_76: (in ds->w01FC != 0x00A0 : bool)
  Class: Eq_76
  DataType: bool
  OrigDataType: bool
T_77: (in 0x01FC : word16)
  Class: Eq_77
  DataType: (memptr (ptr Eq_34) word16)
  OrigDataType: (memptr T_34 (struct (0 T_78 t0000)))
T_78: (in Mem0[ds:0x01FC:word16] : word16)
  Class: Eq_74
  DataType: word16
  OrigDataType: word16
T_79: (in 0x0000 : word16)
  Class: Eq_74
  DataType: word16
  OrigDataType: word16
T_80: (in ds->w01FC != 0x0000 : bool)
  Class: Eq_80
  DataType: bool
  OrigDataType: bool
T_81: (in 0xFFFF : word16)
  Class: Eq_81
  DataType: word16
  OrigDataType: word16
T_82: (in 0x0200 : word16)
  Class: Eq_82
  DataType: (memptr (ptr Eq_34) word16)
  OrigDataType: (memptr T_34 (struct (0 T_83 t0000)))
T_83: (in Mem163[ds:0x0200:word16] : word16)
  Class: Eq_81
  DataType: word16
  OrigDataType: word16
T_84: (in 0x01FC : word16)
  Class: Eq_84
  DataType: (memptr (ptr Eq_34) word16)
  OrigDataType: (memptr T_34 (struct (0 T_74 t0000)))
T_85: (in Mem0[ds:0x01FC:word16] : word16)
  Class: Eq_74
  DataType: word16
  OrigDataType: word16
T_86: (in 0x0200 : word16)
  Class: Eq_86
  DataType: (memptr (ptr Eq_34) word16)
  OrigDataType: (memptr T_34 (struct (0 T_87 t0000)))
T_87: (in Mem0[ds:0x0200:word16] : word16)
  Class: Eq_81
  DataType: word16
  OrigDataType: word16
T_88: (in ds->w01FC + ds->w0200 : word16)
  Class: Eq_74
  DataType: word16
  OrigDataType: word16
T_89: (in Mem104[ds:0x01FC:word16] : word16)
  Class: Eq_74
  DataType: word16
  OrigDataType: word16
T_90: (in 0x01FE : word16)
  Class: Eq_90
  DataType: (memptr (ptr Eq_34) uint16)
  OrigDataType: (memptr T_34 (struct (0 T_91 t0000)))
T_91: (in Mem104[ds:0x01FE:word16] : word16)
  Class: Eq_91
  DataType: uint16
  OrigDataType: word16
T_92: (in 0x00B8 : word16)
  Class: Eq_91
  DataType: uint16
  OrigDataType: word16
T_93: (in ds->w01FE != 0x00B8 : bool)
  Class: Eq_93
  DataType: bool
  OrigDataType: bool
T_94: (in 0x0001 : word16)
  Class: Eq_81
  DataType: word16
  OrigDataType: word16
T_95: (in 0x0200 : word16)
  Class: Eq_95
  DataType: (memptr (ptr Eq_34) word16)
  OrigDataType: (memptr T_34 (struct (0 T_96 t0000)))
T_96: (in Mem166[ds:0x0200:word16] : word16)
  Class: Eq_81
  DataType: word16
  OrigDataType: word16
T_97: (in 0x01FE : word16)
  Class: Eq_97
  DataType: (memptr (ptr Eq_34) uint16)
  OrigDataType: (memptr T_34 (struct (0 T_98 t0000)))
T_98: (in Mem104[ds:0x01FE:word16] : word16)
  Class: Eq_91
  DataType: uint16
  OrigDataType: word16
T_99: (in 0x0000 : word16)
  Class: Eq_91
  DataType: uint16
  OrigDataType: word16
T_100: (in ds->w01FE != 0x0000 : bool)
  Class: Eq_100
  DataType: bool
  OrigDataType: bool
T_101: (in 0xFFFF : word16)
  Class: Eq_101
  DataType: word16
  OrigDataType: word16
T_102: (in 0x0202 : word16)
  Class: Eq_102
  DataType: (memptr (ptr Eq_34) word16)
  OrigDataType: (memptr T_34 (struct (0 T_103 t0000)))
T_103: (in Mem159[ds:0x0202:word16] : word16)
  Class: Eq_101
  DataType: word16
  OrigDataType: word16
T_104: (in 0x01FE : word16)
  Class: Eq_104
  DataType: (memptr (ptr Eq_34) uint16)
  OrigDataType: (memptr T_34 (struct (0 T_91 t0000)))
T_105: (in Mem104[ds:0x01FE:word16] : word16)
  Class: Eq_91
  DataType: uint16
  OrigDataType: word16
T_106: (in 0x0202 : word16)
  Class: Eq_106
  DataType: (memptr (ptr Eq_34) word16)
  OrigDataType: (memptr T_34 (struct (0 T_107 t0000)))
T_107: (in Mem104[ds:0x0202:word16] : word16)
  Class: Eq_101
  DataType: word16
  OrigDataType: word16
T_108: (in ds->w01FE + ds->w0202 : word16)
  Class: Eq_91
  DataType: uint16
  OrigDataType: word16
T_109: (in Mem110[ds:0x01FE:word16] : word16)
  Class: Eq_91
  DataType: uint16
  OrigDataType: word16
T_110: (in __inb : ptr32)
  Class: Eq_110
  DataType: (ptr Eq_110)
  OrigDataType: (ptr (fn T_112 (T_111)))
T_111: (in 0x03DA : word16)
  Class: Eq_111
  DataType: word16
  OrigDataType: word16
T_112: (in __inb(0x03DA) : byte)
  Class: Eq_112
  DataType: byte
  OrigDataType: byte
T_113: (in 0x08 : byte)
  Class: Eq_113
  DataType: byte
  OrigDataType: byte
T_114: (in __inb(0x03DA) & 0x08 : byte)
  Class: Eq_114
  DataType: byte
  OrigDataType: byte
T_115: (in 0x00 : byte)
  Class: Eq_114
  DataType: byte
  OrigDataType: byte
T_116: (in (__inb(0x03DA) & 0x08) == 0x00 : bool)
  Class: Eq_116
  DataType: bool
  OrigDataType: bool
T_117: (in di_121 : (memptr (ptr Eq_139) byte))
  Class: Eq_117
  DataType: (memptr (ptr Eq_139) byte)
  OrigDataType: (memptr T_139 (struct 0001 (0 T_142 t0000)))
T_118: (in 0x0000 : word16)
  Class: Eq_117
  DataType: (memptr (ptr Eq_139) byte)
  OrigDataType: word16
T_119: (in si_124 : (memptr (ptr Eq_34) Eq_119))
  Class: Eq_119
  DataType: (memptr (ptr Eq_34) Eq_119)
  OrigDataType: (memptr T_34 (struct 0001 (FFFFFFFF T_126 tFFFFFFFF) (0 T_138 t0000)))
T_120: (in 0x0204 : word16)
  Class: Eq_119
  DataType: (memptr (ptr Eq_34) Eq_119)
  OrigDataType: word16
T_121: (in cx_125 : word16)
  Class: Eq_121
  DataType: word16
  OrigDataType: word16
T_122: (in 0xFA00 : word16)
  Class: Eq_121
  DataType: word16
  OrigDataType: word16
T_123: (in al_132 : byte)
  Class: Eq_123
  DataType: byte
  OrigDataType: byte
T_124: (in 0x0001 : word16)
  Class: Eq_124
  DataType: word16
  OrigDataType: word16
T_125: (in si_124 - 0x0001 : word16)
  Class: Eq_125
  DataType: word16
  OrigDataType: word16
T_126: (in Mem144[ds:si_124 - 0x0001:byte] : byte)
  Class: Eq_123
  DataType: byte
  OrigDataType: byte
T_127: (in 0x0001 : word16)
  Class: Eq_127
  DataType: word16
  OrigDataType: word16
T_128: (in cx_125 - 0x0001 : word16)
  Class: Eq_121
  DataType: word16
  OrigDataType: word16
T_129: (in 0x0000 : word16)
  Class: Eq_121
  DataType: word16
  OrigDataType: word16
T_130: (in cx_125 != 0x0000 : bool)
  Class: Eq_130
  DataType: bool
  OrigDataType: bool
T_131: (in 0x01 : byte)
  Class: Eq_131
  DataType: byte
  OrigDataType: byte
T_132: (in al_132 - 0x01 : byte)
  Class: Eq_123
  DataType: byte
  OrigDataType: byte
T_133: (in 0x0001 : word16)
  Class: Eq_101
  DataType: word16
  OrigDataType: word16
T_134: (in 0x0202 : word16)
  Class: Eq_134
  DataType: (memptr (ptr Eq_34) word16)
  OrigDataType: (memptr T_34 (struct (0 T_135 t0000)))
T_135: (in Mem162[ds:0x0202:word16] : word16)
  Class: Eq_101
  DataType: word16
  OrigDataType: word16
T_136: (in 0x0000 : word16)
  Class: Eq_136
  DataType: word16
  OrigDataType: word16
T_137: (in si_124 + 0x0000 : word16)
  Class: Eq_137
  DataType: word16
  OrigDataType: word16
T_138: (in Mem110[ds:si_124 + 0x0000:byte] : byte)
  Class: Eq_123
  DataType: byte
  OrigDataType: byte
T_139: (in 0xA000 : selector)
  Class: Eq_139
  DataType: (ptr Eq_139)
  OrigDataType: (ptr (segment (0 (arr T_178) a0000)))
T_140: (in 0x0000 : word16)
  Class: Eq_140
  DataType: word16
  OrigDataType: word16
T_141: (in di_121 + 0x0000 : word16)
  Class: Eq_141
  DataType: word16
  OrigDataType: word16
T_142: (in Mem136[0xA000:di_121 + 0x0000:byte] : byte)
  Class: Eq_123
  DataType: byte
  OrigDataType: byte
T_143: (in 0x0001 : word16)
  Class: Eq_143
  DataType: word16
  OrigDataType: word16
T_144: (in si_124 + 0x0001 : word16)
  Class: Eq_119
  DataType: (memptr (ptr Eq_34) Eq_119)
  OrigDataType: word16
T_145: (in 0x0001 : word16)
  Class: Eq_145
  DataType: word16
  OrigDataType: word16
T_146: (in di_121 + 0x0001 : word16)
  Class: Eq_117
  DataType: (memptr (ptr Eq_139) byte)
  OrigDataType: word16
T_147: (in 0x10 : byte)
  Class: Eq_123
  DataType: byte
  OrigDataType: byte
T_148: (in al_132 == 0x10 : bool)
  Class: Eq_148
  DataType: bool
  OrigDataType: bool
T_149: (in __inb : ptr32)
  Class: Eq_149
  DataType: (ptr Eq_149)
  OrigDataType: (ptr (fn T_151 (T_150)))
T_150: (in 0x60 : byte)
  Class: Eq_150
  DataType: byte
  OrigDataType: byte
T_151: (in __inb(0x60) : byte)
  Class: Eq_151
  DataType: byte
  OrigDataType: byte
T_152: (in 0x01 : byte)
  Class: Eq_151
  DataType: byte
  OrigDataType: byte
T_153: (in __inb(0x60) != 0x01 : bool)
  Class: Eq_153
  DataType: bool
  OrigDataType: bool
T_154: (in 0x01FE : word16)
  Class: Eq_154
  DataType: (memptr (ptr Eq_34) uint16)
  OrigDataType: (memptr T_34 (struct (0 T_155 t0000)))
T_155: (in Mem0[ds:0x01FE:word16] : word16)
  Class: Eq_91
  DataType: uint16
  OrigDataType: uint16
T_156: (in 0x0140 : word16)
  Class: Eq_156
  DataType: uint16
  OrigDataType: uint16
T_157: (in ds->w01FE *u 0x0140 : uint32)
  Class: Eq_157
  DataType: uint32
  OrigDataType: uint32
T_158: (in (word16) (ds->w01FE *u 0x0140) : word16)
  Class: Eq_158
  DataType: word16
  OrigDataType: word16
T_159: (in 0x01FC : word16)
  Class: Eq_159
  DataType: (memptr (ptr Eq_34) word16)
  OrigDataType: (memptr T_34 (struct (0 T_160 t0000)))
T_160: (in Mem0[ds:0x01FC:word16] : word16)
  Class: Eq_74
  DataType: word16
  OrigDataType: word16
T_161: (in (word16) (ds->w01FE *u 0x0140) + ds->w01FC : word16)
  Class: Eq_161
  DataType: word16
  OrigDataType: word16
T_162: (in 0x0204 : word16)
  Class: Eq_162
  DataType: word16
  OrigDataType: word16
T_163: (in (word16) (ds->w01FE *u 0x0140) + ds->w01FC + 0x0204 : word16)
  Class: Eq_25
  DataType: (memptr (ptr Eq_34) Eq_25)
  OrigDataType: word16
T_164: (in 0x01DE : word16)
  Class: Eq_61
  DataType: cups16
  OrigDataType: word16
T_165: (in bios_video_set_mode : ptr32)
  Class: Eq_9
  DataType: (ptr Eq_9)
  OrigDataType: (ptr (fn T_167 (T_166)))
T_166: (in 0x03 : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_167: (in bios_video_set_mode(0x03) : void)
  Class: Eq_13
  DataType: void
  OrigDataType: void
T_168: (in msdos_display_string : ptr32)
  Class: Eq_168
  DataType: (ptr Eq_168)
  OrigDataType: (ptr (fn T_173 (T_34, T_172)))
T_169: (in signature of msdos_display_string : void)
  Class: Eq_168
  DataType: (ptr Eq_168)
  OrigDataType: 
T_170: (in ds : selector)
  Class: Eq_34
  DataType: (ptr Eq_34)
  OrigDataType: (ptr (segment))
T_171: (in dx : word16)
  Class: Eq_171
  DataType: word16
  OrigDataType: word16
T_172: (in 0x01E7 : word16)
  Class: Eq_171
  DataType: word16
  OrigDataType: word16
T_173: (in msdos_display_string(ds, 0x01E7) : void)
  Class: Eq_173
  DataType: void
  OrigDataType: void
T_174:
  Class: Eq_174
  DataType: byte
  OrigDataType: (struct 0001 (0 T_18 t0000))
T_175:
  Class: Eq_175
  DataType: byte
  OrigDataType: (struct 0001 (0 T_69 t0000))
T_176:
  Class: Eq_176
  DataType: byte
  OrigDataType: (struct 0001 (0 T_126 t0000))
T_177:
  Class: Eq_177
  DataType: byte
  OrigDataType: (struct 0001 (0 T_138 t0000))
T_178:
  Class: Eq_178
  DataType: byte
  OrigDataType: (struct 0001 (0 T_142 t0000))
*/
typedef Eq_139 Eq_1struct Globals {
	Eq_139 * ptrFFFA0000;	// FFFA0000
} Eq_1;

typedef void (Eq_6)(byte);

typedef void (Eq_9)(byte);

typedef  Eq_15[]struct Eq_15 {
	byte a0204[];	// 204
} Eq_15;

typedef struct Eq_25 {	// size: 624 270
	word16 w0000;	// 0
	word16 w0140;	// 140
} Eq_25;

typedef union Eq_28 {
	uint8 u0;
	uint16 u1;
} Eq_28;

typedef  Eq_34[10][][]struct Eq_34 {
	byte a01DE[10];	// 1DE
	word16 w01FC;	// 1FC
	uint16 w01FE;	// 1FE
	word16 w0200;	// 200
	word16 w0202;	// 202
	byte a0203[];	// 203
	byte a0204[];	// 204
} Eq_34;

typedef union Eq_61 {
	cups16 u0;
	byte Eq_34::* u1;
} Eq_61;

typedef byte (Eq_110)(word16);

typedef struct Eq_119 {	// size: 1 1
	byte bFFFFFFFF;	// FFFFFFFF
	byte b0000;	// 0
} Eq_119;

typedef  Eq_139[]struct Eq_139 {
	byte a0000[];	// 0
} Eq_139;

typedef byte (Eq_149)(byte);

typedef void (Eq_168)(Eq_34 *, word16);

