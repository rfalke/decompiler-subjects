// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_294/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_181) ptrFFFA0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_8: (segment)
	T_8 (in cs : selector)
Eq_13: (segment)
	T_13 (in ax_15 : word16)
	T_15 (in DPB(cs, 0x16, 8, 8) : selector)
	T_45 (in DPB(ax_15, 0x00, 0, 8) : word16)
	T_51 (in __rol(ax_15 + cx_16, cl_17) : word16)
Eq_16: (struct 0001 (0 Eq_65 t0000))
	T_16 (in cx_16 : word16)
	T_17 (in 0x0000 : word16)
	T_41 (in cx_16 - 0x0001 + 0x00FF : word16)
	T_47 (in 0x0000 : word16)
	T_81 (in cx_16 - 0x0001 : word16)
	T_84 (in 0xFF01 : word16)
Eq_20: (fn void (word16, byte))
	T_20 (in __outb : ptr32)
Eq_23: (union (ui16 u0) (byte u1))
	T_23 (in al_26 : byte)
	T_25 (in cl_17 << 0x01 : word16)
Eq_26: (fn void (word16, Eq_23))
	T_26 (in __outb : ptr32)
Eq_29: (fn void (word16, ui16))
	T_29 (in __outb : ptr32)
Eq_34: (fn void (word16, byte))
	T_34 (in __outb : ptr32)
Eq_42: (union (uint16 u0) (byte u1))
	T_42 (in dl_25 : byte)
	T_43 (in 0xC9 : byte)
	T_82 (in dl_54 >>u 0x01 : word16)
Eq_49: (fn (ptr Eq_13) (word16, byte))
	T_49 (in __rol : ptr32)
Eq_54: (union (bcu8 u0) (word16 u1))
	T_54 (in dl_50 : byte)
	T_61 (in dl_25 + (al_44 >> 0x05) + (al_44 >> 0x05 <u 0x00) : word16)
	T_67 (in 0x00 : byte)
Eq_58: (union (int16 u0) (bcu8 u1) (cups16 u2))
	T_58 (in al_44 >> 0x05 : word16)
	T_59 (in 0x00 : byte)
Eq_62: (union (uint8 u0) (word16 u1))
	T_62 (in dl_54 : byte)
	T_69 (in dl_50 + Mem0[ax_11:cx_16 + 0x0000:byte] + (dl_50 <u 0x00) : word16)
Eq_65: (union (uint16 u0) (byte u1))
	T_65 (in Mem0[ax_11:cx_16 + 0x0000:byte] : byte)
	T_71 (in dl_54 >>u 0x01 : word16)
	T_74 (in Mem58[ax_11:cx_16 + 0x0000:byte] : byte)
Eq_75: (union (uint16 u0) (byte u1))
	T_75 (in dl_54 >>u 0x01 : word16)
	T_79 (in Mem61[ax_11:DPB(cx_16, ~SLICE(cx_16, byte, 8), 8, 8):byte] : byte)
Eq_78: (struct (0 Eq_75 t0000))
	T_78 (in DPB(cx_16, ~SLICE(cx_16, byte, 8), 8, 8) : word16)
Eq_96: (struct (0 byte b0000))
	T_96 (in DPB(bp_106 + 0x0000, (byte) (dx_125 + 0x0000), 8, 8) : word16)
Eq_98: (segment (304 (arr Eq_222) a0304))
	T_98 (in ds : selector)
	T_118 (in Mem131[ss:fp - 0x0004:word16] : word16)
Eq_99: (union ((struct 0001 (0 byte b0000)) u0) ((struct 0002 (0 word16 w0000)) u1))
	T_99 (in di_105 : word16)
	T_104 (in di_105 + 0x0001 : word16)
	T_165 (in si_174 : word16)
	T_166 (in 0x0304 : word16)
	T_186 (in si_174 + 0x0002 : word16)
Eq_114: (segment)
	T_114 (in ss : selector)
Eq_115: (union ((memptr (ptr Eq_114) (struct (FFFFFFFC (ptr Eq_98) ptrFFFFFFFC))) u0) ((union (ptr16 u0) ((memptr (ptr Eq_114) (struct (FFFFFFFC word16 wFFFFFFFC))) u1)) u1))
	T_115 (in fp : ptr16)
Eq_119: (fn void (byte, byte, int8, word16, byte, byte, segptr32))
	T_119 (in bios_video_write_string : ptr32)
	T_120 (in signature of bios_video_write_string : void)
	T_193 (in bios_video_write_string : ptr32)
Eq_145: (struct 0001 (0 byte b0000))
	T_145 (in di_150 : word16)
	T_146 (in 0x41B6 : word16)
	T_152 (in di_150 + 0x0001 : word16)
	T_159 (in di_150 + 0x00C1 : word16)
Eq_167: (struct 0002 (0 word16 w0000))
	T_167 (in di_176 : word16)
	T_168 (in 0x0A00 : word16)
	T_188 (in di_176 + 0x0002 : word16)
Eq_172: (fn byte (byte))
	T_172 (in __inb : ptr32)
Eq_181: (segment (A00 (arr Eq_223) a0A00))
	T_181 (in 0xA000 : selector)
Eq_202: (fn byte ((ptr byte), (ptr byte), (ptr byte)))
	T_202 (in msdos_get_system_time : ptr32)
	T_203 (in signature of msdos_get_system_time : void)
Eq_222: (struct 0002 (0 word16 w0000))
	T_222
Eq_223: (struct 0002 (0 word16 w0000))
	T_223
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
T_7: (in ax_11 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_8: (in cs : selector)
  Class: Eq_8
  DataType: (ptr Eq_8)
  OrigDataType: (ptr (segment))
T_9: (in SLICE(cs, byte, 8) : byte)
  Class: Eq_9
  DataType: byte
  OrigDataType: byte
T_10: (in 0x10 : byte)
  Class: Eq_10
  DataType: byte
  OrigDataType: byte
T_11: (in SLICE(cs, byte, 8) + 0x10 : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_12: (in DPB(cs, SLICE(cs, byte, 8) + 0x10, 8, 8) : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_13: (in ax_15 : word16)
  Class: Eq_13
  DataType: (ptr Eq_13)
  OrigDataType: word16
T_14: (in 0x16 : byte)
  Class: Eq_14
  DataType: byte
  OrigDataType: byte
T_15: (in DPB(cs, 0x16, 8, 8) : selector)
  Class: Eq_13
  DataType: (ptr Eq_13)
  OrigDataType: (ptr (segment))
T_16: (in cx_16 : word16)
  Class: Eq_16
  DataType: (memptr word16 Eq_16)
  OrigDataType: (memptr T_7 (struct 0001 (0 T_65 t0000)))
T_17: (in 0x0000 : word16)
  Class: Eq_16
  DataType: (memptr word16 Eq_16)
  OrigDataType: word16
T_18: (in cl_17 : byte)
  Class: Eq_18
  DataType: byte
  OrigDataType: byte
T_19: (in 0x00 : byte)
  Class: Eq_18
  DataType: byte
  OrigDataType: byte
T_20: (in __outb : ptr32)
  Class: Eq_20
  DataType: (ptr Eq_20)
  OrigDataType: (ptr (fn T_22 (T_21, T_18)))
T_21: (in 0x03C8 : word16)
  Class: Eq_21
  DataType: word16
  OrigDataType: word16
T_22: (in __outb(0x03C8, cl_17) : void)
  Class: Eq_22
  DataType: void
  OrigDataType: void
T_23: (in al_26 : byte)
  Class: Eq_23
  DataType: Eq_23
  OrigDataType: byte
T_24: (in 0x01 : byte)
  Class: Eq_24
  DataType: byte
  OrigDataType: byte
T_25: (in cl_17 << 0x01 : word16)
  Class: Eq_23
  DataType: Eq_23
  OrigDataType: ui16
T_26: (in __outb : ptr32)
  Class: Eq_26
  DataType: (ptr Eq_26)
  OrigDataType: (ptr (fn T_28 (T_27, T_23)))
T_27: (in 0x03C9 : word16)
  Class: Eq_27
  DataType: word16
  OrigDataType: word16
T_28: (in __outb(0x03C9, al_26) : void)
  Class: Eq_28
  DataType: void
  OrigDataType: void
T_29: (in __outb : ptr32)
  Class: Eq_29
  DataType: (ptr Eq_29)
  OrigDataType: (ptr (fn T_33 (T_30, T_32)))
T_30: (in 0x03C9 : word16)
  Class: Eq_30
  DataType: word16
  OrigDataType: word16
T_31: (in 0x01 : byte)
  Class: Eq_31
  DataType: byte
  OrigDataType: byte
T_32: (in al_26 << 0x01 : word16)
  Class: Eq_32
  DataType: ui16
  OrigDataType: ui16
T_33: (in __outb(0x03C9, al_26 << 0x01) : void)
  Class: Eq_33
  DataType: void
  OrigDataType: void
T_34: (in __outb : ptr32)
  Class: Eq_34
  DataType: (ptr Eq_34)
  OrigDataType: (ptr (fn T_37 (T_35, T_36)))
T_35: (in 0x03C9 : word16)
  Class: Eq_35
  DataType: word16
  OrigDataType: word16
T_36: (in 0x00 : byte)
  Class: Eq_36
  DataType: byte
  OrigDataType: byte
T_37: (in __outb(0x03C9, 0x00) : void)
  Class: Eq_37
  DataType: void
  OrigDataType: void
T_38: (in 0x0001 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_39: (in cx_16 - 0x0001 : word16)
  Class: Eq_39
  DataType: word16
  OrigDataType: word16
T_40: (in 0x00FF : word16)
  Class: Eq_40
  DataType: word16
  OrigDataType: word16
T_41: (in cx_16 - 0x0001 + 0x00FF : word16)
  Class: Eq_16
  DataType: (memptr word16 Eq_16)
  OrigDataType: word16
T_42: (in dl_25 : byte)
  Class: Eq_42
  DataType: Eq_42
  OrigDataType: (union (uint16 u0) (byte u1))
T_43: (in 0xC9 : byte)
  Class: Eq_42
  DataType: Eq_42
  OrigDataType: byte
T_44: (in 0x00 : byte)
  Class: Eq_44
  DataType: byte
  OrigDataType: byte
T_45: (in DPB(ax_15, 0x00, 0, 8) : word16)
  Class: Eq_13
  DataType: (ptr Eq_13)
  OrigDataType: word16
T_46: (in (byte) cx_16 : byte)
  Class: Eq_18
  DataType: byte
  OrigDataType: byte
T_47: (in 0x0000 : word16)
  Class: Eq_16
  DataType: (memptr word16 Eq_16)
  OrigDataType: word16
T_48: (in cx_16 != 0x0000 : bool)
  Class: Eq_48
  DataType: bool
  OrigDataType: bool
T_49: (in __rol : ptr32)
  Class: Eq_49
  DataType: (ptr Eq_49)
  OrigDataType: (ptr (fn T_51 (T_50, T_18)))
T_50: (in ax_15 + cx_16 : word16)
  Class: Eq_50
  DataType: word16
  OrigDataType: word16
T_51: (in __rol(ax_15 + cx_16, cl_17) : word16)
  Class: Eq_13
  DataType: (ptr Eq_13)
  OrigDataType: word16
T_52: (in al_44 : byte)
  Class: Eq_52
  DataType: int8
  OrigDataType: int8
T_53: (in (byte) ax_15 : byte)
  Class: Eq_52
  DataType: int8
  OrigDataType: byte
T_54: (in dl_50 : byte)
  Class: Eq_54
  DataType: Eq_54
  OrigDataType: bcu8
T_55: (in 0x05 : byte)
  Class: Eq_55
  DataType: uint8
  OrigDataType: uint8
T_56: (in al_44 >> 0x05 : word16)
  Class: Eq_56
  DataType: int16
  OrigDataType: int16
T_57: (in dl_25 + (al_44 >> 0x05) : word16)
  Class: Eq_57
  DataType: word16
  OrigDataType: word16
T_58: (in al_44 >> 0x05 : word16)
  Class: Eq_58
  DataType: Eq_58
  OrigDataType: (union (int16 u0) (cups16 u1))
T_59: (in 0x00 : byte)
  Class: Eq_58
  DataType: Eq_58
  OrigDataType: bcu8
T_60: (in al_44 >> 0x05 <u 0x00 : bool)
  Class: Eq_60
  DataType: bool
  OrigDataType: bool
T_61: (in dl_25 + (al_44 >> 0x05) + (al_44 >> 0x05 <u 0x00) : word16)
  Class: Eq_54
  DataType: Eq_54
  OrigDataType: word16
T_62: (in dl_54 : byte)
  Class: Eq_62
  DataType: Eq_62
  OrigDataType: uint8
T_63: (in 0x0000 : word16)
  Class: Eq_63
  DataType: word16
  OrigDataType: word16
T_64: (in cx_16 + 0x0000 : word16)
  Class: Eq_64
  DataType: word16
  OrigDataType: word16
T_65: (in Mem0[ax_11:cx_16 + 0x0000:byte] : byte)
  Class: Eq_65
  DataType: Eq_65
  OrigDataType: byte
T_66: (in dl_50 + Mem0[ax_11:cx_16 + 0x0000:byte] : word16)
  Class: Eq_66
  DataType: word16
  OrigDataType: word16
T_67: (in 0x00 : byte)
  Class: Eq_54
  DataType: Eq_54
  OrigDataType: bcu8
T_68: (in dl_50 <u 0x00 : bool)
  Class: Eq_68
  DataType: bool
  OrigDataType: bool
T_69: (in dl_50 + Mem0[ax_11:cx_16 + 0x0000:byte] + (dl_50 <u 0x00) : word16)
  Class: Eq_62
  DataType: Eq_62
  OrigDataType: word16
T_70: (in 0x01 : byte)
  Class: Eq_70
  DataType: uint8
  OrigDataType: uint8
T_71: (in dl_54 >>u 0x01 : word16)
  Class: Eq_65
  DataType: Eq_65
  OrigDataType: uint16
T_72: (in 0x0000 : word16)
  Class: Eq_72
  DataType: word16
  OrigDataType: word16
T_73: (in cx_16 + 0x0000 : word16)
  Class: Eq_73
  DataType: word16
  OrigDataType: word16
T_74: (in Mem58[ax_11:cx_16 + 0x0000:byte] : byte)
  Class: Eq_65
  DataType: Eq_65
  OrigDataType: byte
T_75: (in dl_54 >>u 0x01 : word16)
  Class: Eq_75
  DataType: Eq_75
  OrigDataType: uint16
T_76: (in SLICE(cx_16, byte, 8) : byte)
  Class: Eq_76
  DataType: byte
  OrigDataType: byte
T_77: (in ~SLICE(cx_16, byte, 8) : byte)
  Class: Eq_77
  DataType: byte
  OrigDataType: byte
T_78: (in DPB(cx_16, ~SLICE(cx_16, byte, 8), 8, 8) : word16)
  Class: Eq_78
  DataType: (memptr word16 Eq_78)
  OrigDataType: (memptr T_7 (struct (0 T_79 t0000)))
T_79: (in Mem61[ax_11:DPB(cx_16, ~SLICE(cx_16, byte, 8), 8, 8):byte] : byte)
  Class: Eq_75
  DataType: Eq_75
  OrigDataType: byte
T_80: (in 0x0001 : word16)
  Class: Eq_80
  DataType: word16
  OrigDataType: word16
T_81: (in cx_16 - 0x0001 : word16)
  Class: Eq_16
  DataType: (memptr word16 Eq_16)
  OrigDataType: word16
T_82: (in dl_54 >>u 0x01 : word16)
  Class: Eq_42
  DataType: Eq_42
  OrigDataType: uint16
T_83: (in (byte) cx_16 : byte)
  Class: Eq_18
  DataType: byte
  OrigDataType: byte
T_84: (in 0xFF01 : word16)
  Class: Eq_16
  DataType: (memptr word16 Eq_16)
  OrigDataType: word16
T_85: (in cx_16 != 0xFF01 : bool)
  Class: Eq_85
  DataType: bool
  OrigDataType: bool
T_86: (in cx_207 : word16)
  Class: Eq_86
  DataType: word16
  OrigDataType: word16
T_87: (in 0x10 : byte)
  Class: Eq_87
  DataType: byte
  OrigDataType: byte
T_88: (in DPB(cx_16, 0x10, 8, 8) : word16)
  Class: Eq_86
  DataType: word16
  OrigDataType: word16
T_89: (in bp_106 : word16)
  Class: Eq_89
  DataType: word16
  OrigDataType: word16
T_90: (in 0x0000 : word16)
  Class: Eq_90
  DataType: word16
  OrigDataType: word16
T_91: (in bp_106 + 0x0000 : word16)
  Class: Eq_91
  DataType: word16
  OrigDataType: word16
T_92: (in dx_125 : word16)
  Class: Eq_92
  DataType: word16
  OrigDataType: word16
T_93: (in 0x0000 : word16)
  Class: Eq_93
  DataType: word16
  OrigDataType: word16
T_94: (in dx_125 + 0x0000 : word16)
  Class: Eq_94
  DataType: word16
  OrigDataType: word16
T_95: (in (byte) (dx_125 + 0x0000) : byte)
  Class: Eq_95
  DataType: byte
  OrigDataType: byte
T_96: (in DPB(bp_106 + 0x0000, (byte) (dx_125 + 0x0000), 8, 8) : word16)
  Class: Eq_96
  DataType: (memptr word16 Eq_96)
  OrigDataType: (memptr T_7 (struct (0 T_97 t0000)))
T_97: (in Mem61[ax_11:DPB(bp_106 + 0x0000, (byte) (dx_125 + 0x0000), 8, 8):byte] : byte)
  Class: Eq_97
  DataType: byte
  OrigDataType: byte
T_98: (in ds : selector)
  Class: Eq_98
  DataType: (ptr Eq_98)
  OrigDataType: (ptr (segment (304 (arr T_222) a0304)))
T_99: (in di_105 : word16)
  Class: Eq_99
  DataType: (memptr (ptr Eq_98) Eq_99)
  OrigDataType: (memptr T_98 (struct 0001 (0 T_102 t0000)))
T_100: (in 0x0000 : word16)
  Class: Eq_100
  DataType: word16
  OrigDataType: word16
T_101: (in di_105 + 0x0000 : word16)
  Class: Eq_101
  DataType: word16
  OrigDataType: word16
T_102: (in Mem118[ds:di_105 + 0x0000:byte] : byte)
  Class: Eq_97
  DataType: byte
  OrigDataType: byte
T_103: (in 0x0001 : word16)
  Class: Eq_103
  DataType: word16
  OrigDataType: word16
T_104: (in di_105 + 0x0001 : word16)
  Class: Eq_99
  DataType: (memptr (ptr Eq_98) Eq_99)
  OrigDataType: word16
T_105: (in 0x0001 : word16)
  Class: Eq_105
  DataType: word16
  OrigDataType: word16
T_106: (in bp_106 + 0x0001 : word16)
  Class: Eq_89
  DataType: word16
  OrigDataType: word16
T_107: (in 0x0000 : word16)
  Class: Eq_89
  DataType: word16
  OrigDataType: word16
T_108: (in bp_106 != 0x0000 : bool)
  Class: Eq_108
  DataType: bool
  OrigDataType: bool
T_109: (in 0x0001 : word16)
  Class: Eq_109
  DataType: word16
  OrigDataType: word16
T_110: (in dx_125 + 0x0001 : word16)
  Class: Eq_92
  DataType: word16
  OrigDataType: word16
T_111: (in 0x0000 : word16)
  Class: Eq_92
  DataType: word16
  OrigDataType: word16
T_112: (in dx_125 != 0x0000 : bool)
  Class: Eq_112
  DataType: bool
  OrigDataType: bool
T_113: (in 0x0000 : word16)
  Class: Eq_89
  DataType: word16
  OrigDataType: word16
T_114: (in ss : selector)
  Class: Eq_114
  DataType: (ptr Eq_114)
  OrigDataType: (ptr (segment))
T_115: (in fp : ptr16)
  Class: Eq_115
  DataType: Eq_115
  OrigDataType: (union ((union (ptr16 u0) ((memptr T_114 (struct (FFFFFFFC T_140 tFFFFFFFC))) u1)) u0) ((memptr T_114 (struct (FFFFFFFC T_118 tFFFFFFFC))) u1))
T_116: (in 0x0004 : word16)
  Class: Eq_116
  DataType: word16
  OrigDataType: word16
T_117: (in fp - 0x0004 : word16)
  Class: Eq_117
  DataType: word16
  OrigDataType: word16
T_118: (in Mem131[ss:fp - 0x0004:word16] : word16)
  Class: Eq_98
  DataType: (ptr Eq_98)
  OrigDataType: word16
T_119: (in bios_video_write_string : ptr32)
  Class: Eq_119
  DataType: (ptr Eq_119)
  OrigDataType: (ptr (fn T_136 (T_128, T_129, T_130, T_132, T_133, T_134, T_135)))
T_120: (in signature of bios_video_write_string : void)
  Class: Eq_119
  DataType: (ptr Eq_119)
  OrigDataType: 
T_121: (in al : byte)
  Class: Eq_121
  DataType: byte
  OrigDataType: byte
T_122: (in bh : byte)
  Class: Eq_122
  DataType: byte
  OrigDataType: byte
T_123: (in bl : byte)
  Class: Eq_123
  DataType: int8
  OrigDataType: byte
T_124: (in cx : word16)
  Class: Eq_124
  DataType: word16
  OrigDataType: word16
T_125: (in dh : byte)
  Class: Eq_125
  DataType: byte
  OrigDataType: byte
T_126: (in dl : byte)
  Class: Eq_126
  DataType: byte
  OrigDataType: byte
T_127: (in es_bp : word32)
  Class: Eq_127
  DataType: segptr32
  OrigDataType: word32
T_128: (in 0x00 : byte)
  Class: Eq_121
  DataType: byte
  OrigDataType: byte
T_129: (in 0x00 : byte)
  Class: Eq_122
  DataType: byte
  OrigDataType: byte
T_130: (in 0x0A : byte)
  Class: Eq_123
  DataType: int8
  OrigDataType: byte
T_131: (in 0x28 : byte)
  Class: Eq_131
  DataType: byte
  OrigDataType: byte
T_132: (in DPB(cx_207, 0x28, 0, 8) : word16)
  Class: Eq_124
  DataType: word16
  OrigDataType: word16
T_133: (in 0x00 : byte)
  Class: Eq_125
  DataType: byte
  OrigDataType: byte
T_134: (in 0x00 : byte)
  Class: Eq_126
  DataType: byte
  OrigDataType: byte
T_135: (in A000:01C6 : segptr32)
  Class: Eq_127
  DataType: segptr32
  OrigDataType: segptr32
T_136: (in bios_video_write_string(0x00, 0x00, 0x0A, DPB(cx_207, 0x28, 0, 8), 0x00, 0x00, A000:01C6) : void)
  Class: Eq_136
  DataType: void
  OrigDataType: void
T_137: (in 0xA000 : word16)
  Class: Eq_137
  DataType: word16
  OrigDataType: word16
T_138: (in 0x0004 : word16)
  Class: Eq_138
  DataType: word16
  OrigDataType: word16
T_139: (in fp - 0x0004 : word16)
  Class: Eq_139
  DataType: word16
  OrigDataType: word16
T_140: (in Mem143[ss:fp - 0x0004:word16] : word16)
  Class: Eq_137
  DataType: word16
  OrigDataType: word16
T_141: (in es_bp_145 : word32)
  Class: Eq_127
  DataType: segptr32
  OrigDataType: word32
T_142: (in A000:01C6 : segptr32)
  Class: Eq_127
  DataType: segptr32
  OrigDataType: segptr32
T_143: (in cx_147 : word16)
  Class: Eq_143
  DataType: word16
  OrigDataType: word16
T_144: (in 0x0040 : word16)
  Class: Eq_143
  DataType: word16
  OrigDataType: word16
T_145: (in di_150 : word16)
  Class: Eq_145
  DataType: (memptr (ptr Eq_98) Eq_145)
  OrigDataType: (memptr T_98 (struct 0001 (0 T_150 t0000)))
T_146: (in 0x41B6 : word16)
  Class: Eq_145
  DataType: (memptr (ptr Eq_98) Eq_145)
  OrigDataType: word16
T_147: (in 0x10 : byte)
  Class: Eq_147
  DataType: byte
  OrigDataType: byte
T_148: (in 0x0000 : word16)
  Class: Eq_148
  DataType: word16
  OrigDataType: word16
T_149: (in di_150 + 0x0000 : word16)
  Class: Eq_149
  DataType: word16
  OrigDataType: word16
T_150: (in Mem163[ds:di_150 + 0x0000:byte] : byte)
  Class: Eq_147
  DataType: byte
  OrigDataType: byte
T_151: (in 0x0001 : word16)
  Class: Eq_151
  DataType: word16
  OrigDataType: word16
T_152: (in di_150 + 0x0001 : word16)
  Class: Eq_145
  DataType: (memptr (ptr Eq_98) Eq_145)
  OrigDataType: word16
T_153: (in bl_158 : byte)
  Class: Eq_123
  DataType: int8
  OrigDataType: int8
T_154: (in 0x01 : byte)
  Class: Eq_154
  DataType: byte
  OrigDataType: byte
T_155: (in bl_158 - 0x01 : byte)
  Class: Eq_123
  DataType: int8
  OrigDataType: byte
T_156: (in 0x00 : byte)
  Class: Eq_123
  DataType: int8
  OrigDataType: int8
T_157: (in bl_158 > 0x00 : bool)
  Class: Eq_157
  DataType: bool
  OrigDataType: bool
T_158: (in 0x00C1 : word16)
  Class: Eq_158
  DataType: word16
  OrigDataType: word16
T_159: (in di_150 + 0x00C1 : word16)
  Class: Eq_145
  DataType: (memptr (ptr Eq_98) Eq_145)
  OrigDataType: word16
T_160: (in 0x0001 : word16)
  Class: Eq_160
  DataType: word16
  OrigDataType: word16
T_161: (in cx_147 - 0x0001 : word16)
  Class: Eq_143
  DataType: word16
  OrigDataType: word16
T_162: (in 0x0000 : word16)
  Class: Eq_143
  DataType: word16
  OrigDataType: word16
T_163: (in cx_147 != 0x0000 : bool)
  Class: Eq_163
  DataType: bool
  OrigDataType: bool
T_164: (in 0x7F : byte)
  Class: Eq_123
  DataType: int8
  OrigDataType: byte
T_165: (in si_174 : word16)
  Class: Eq_99
  DataType: (memptr (ptr Eq_98) Eq_99)
  OrigDataType: (memptr T_98 (struct 0002 (0 T_180 t0000)))
T_166: (in 0x0304 : word16)
  Class: Eq_99
  DataType: (memptr (ptr Eq_98) Eq_99)
  OrigDataType: word16
T_167: (in di_176 : word16)
  Class: Eq_167
  DataType: (memptr (ptr Eq_181) Eq_167)
  OrigDataType: (memptr T_181 (struct 0002 (0 T_184 t0000)))
T_168: (in 0x0A00 : word16)
  Class: Eq_167
  DataType: (memptr (ptr Eq_181) Eq_167)
  OrigDataType: word16
T_169: (in cx_178 : word16)
  Class: Eq_124
  DataType: word16
  OrigDataType: word16
T_170: (in 0x78 : byte)
  Class: Eq_170
  DataType: byte
  OrigDataType: byte
T_171: (in DPB(cx_147, 0x78, 8, 8) : word16)
  Class: Eq_124
  DataType: word16
  OrigDataType: word16
T_172: (in __inb : ptr32)
  Class: Eq_172
  DataType: (ptr Eq_172)
  OrigDataType: (ptr (fn T_174 (T_173)))
T_173: (in 0x60 : byte)
  Class: Eq_173
  DataType: byte
  OrigDataType: byte
T_174: (in __inb(0x60) : byte)
  Class: Eq_174
  DataType: byte
  OrigDataType: byte
T_175: (in (int16) __inb(0x60) : int16)
  Class: Eq_175
  DataType: int16
  OrigDataType: int16
T_176: (in 0x0001 : word16)
  Class: Eq_175
  DataType: int16
  OrigDataType: word16
T_177: (in (int16) __inb(0x60) == 0x0001 : bool)
  Class: Eq_177
  DataType: bool
  OrigDataType: bool
T_178: (in 0x0000 : word16)
  Class: Eq_178
  DataType: word16
  OrigDataType: word16
T_179: (in si_174 + 0x0000 : word16)
  Class: Eq_179
  DataType: word16
  OrigDataType: word16
T_180: (in Mem163[ds:si_174 + 0x0000:word16] : word16)
  Class: Eq_180
  DataType: word16
  OrigDataType: word16
T_181: (in 0xA000 : selector)
  Class: Eq_181
  DataType: (ptr Eq_181)
  OrigDataType: (ptr (segment (A00 (arr T_223) a0A00)))
T_182: (in 0x0000 : word16)
  Class: Eq_182
  DataType: word16
  OrigDataType: word16
T_183: (in di_176 + 0x0000 : word16)
  Class: Eq_183
  DataType: word16
  OrigDataType: word16
T_184: (in Mem185[0xA000:di_176 + 0x0000:word16] : word16)
  Class: Eq_180
  DataType: word16
  OrigDataType: word16
T_185: (in 0x0002 : word16)
  Class: Eq_185
  DataType: word16
  OrigDataType: word16
T_186: (in si_174 + 0x0002 : word16)
  Class: Eq_99
  DataType: (memptr (ptr Eq_98) Eq_99)
  OrigDataType: word16
T_187: (in 0x0002 : word16)
  Class: Eq_187
  DataType: word16
  OrigDataType: word16
T_188: (in di_176 + 0x0002 : word16)
  Class: Eq_167
  DataType: (memptr (ptr Eq_181) Eq_167)
  OrigDataType: word16
T_189: (in 0x0001 : word16)
  Class: Eq_189
  DataType: word16
  OrigDataType: word16
T_190: (in cx_178 - 0x0001 : word16)
  Class: Eq_124
  DataType: word16
  OrigDataType: word16
T_191: (in 0x0000 : word16)
  Class: Eq_124
  DataType: word16
  OrigDataType: word16
T_192: (in cx_178 == 0x0000 : bool)
  Class: Eq_192
  DataType: bool
  OrigDataType: bool
T_193: (in bios_video_write_string : ptr32)
  Class: Eq_119
  DataType: (ptr Eq_119)
  OrigDataType: (ptr (fn T_198 (T_194, T_195, T_153, T_169, T_196, T_197, T_141)))
T_194: (in 0x03 : byte)
  Class: Eq_121
  DataType: byte
  OrigDataType: byte
T_195: (in 0x00 : byte)
  Class: Eq_122
  DataType: byte
  OrigDataType: byte
T_196: (in 0x00 : byte)
  Class: Eq_125
  DataType: byte
  OrigDataType: byte
T_197: (in 0x00 : byte)
  Class: Eq_126
  DataType: byte
  OrigDataType: byte
T_198: (in bios_video_write_string(0x03, 0x00, bl_158, cx_178, 0x00, 0x00, es_bp_145) : void)
  Class: Eq_136
  DataType: void
  OrigDataType: void
T_199: (in ch_197 : byte)
  Class: Eq_199
  DataType: byte
  OrigDataType: byte
T_200: (in dh_198 : byte)
  Class: Eq_200
  DataType: uint8
  OrigDataType: uint8
T_201: (in dl_199 : byte)
  Class: Eq_201
  DataType: byte
  OrigDataType: byte
T_202: (in msdos_get_system_time : ptr32)
  Class: Eq_202
  DataType: (ptr Eq_202)
  OrigDataType: (ptr (fn T_210 (T_207, T_208, T_209)))
T_203: (in signature of msdos_get_system_time : void)
  Class: Eq_202
  DataType: (ptr Eq_202)
  OrigDataType: 
T_204: (in chOut : ptr16)
  Class: Eq_204
  DataType: (ptr byte)
  OrigDataType: ptr16
T_205: (in dhOut : ptr16)
  Class: Eq_205
  DataType: (ptr byte)
  OrigDataType: ptr16
T_206: (in dlOut : ptr16)
  Class: Eq_206
  DataType: (ptr byte)
  OrigDataType: ptr16
T_207: (in out ch_197 : ptr16)
  Class: Eq_204
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_208: (in out dh_198 : ptr16)
  Class: Eq_205
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_209: (in out dl_199 : ptr16)
  Class: Eq_206
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_210: (in msdos_get_system_time(out ch_197, out dh_198, out dl_199) : byte)
  Class: Eq_210
  DataType: byte
  OrigDataType: byte
T_211: (in 0x02 : byte)
  Class: Eq_211
  DataType: uint8
  OrigDataType: uint8
T_212: (in dh_198 >>u 0x02 : word16)
  Class: Eq_212
  DataType: uint16
  OrigDataType: uint16
T_213: (in 0x02 : byte)
  Class: Eq_213
  DataType: byte
  OrigDataType: byte
T_214: (in dh_198 >>u 0x02 & 0x02 : byte)
  Class: Eq_214
  DataType: byte
  OrigDataType: byte
T_215: (in 0x00 : byte)
  Class: Eq_214
  DataType: byte
  OrigDataType: byte
T_216: (in (dh_198 >>u 0x02 & 0x02) != 0x00 : bool)
  Class: Eq_216
  DataType: bool
  OrigDataType: bool
T_217: (in 0x00 : byte)
  Class: Eq_217
  DataType: byte
  OrigDataType: byte
T_218: (in DPB(cx_178, 0x00, 8, 8) : word16)
  Class: Eq_86
  DataType: word16
  OrigDataType: word16
T_219: (in 0x10 : byte)
  Class: Eq_219
  DataType: byte
  OrigDataType: byte
T_220: (in DPB(cx_178, 0x10, 8, 8) : word16)
  Class: Eq_86
  DataType: word16
  OrigDataType: word16
T_221: (in 0x0000 : word16)
  Class: Eq_92
  DataType: word16
  OrigDataType: word16
T_222:
  Class: Eq_222
  DataType: Eq_222
  OrigDataType: (struct 0002 (0 T_180 t0000))
T_223:
  Class: Eq_223
  DataType: Eq_223
  OrigDataType: (struct 0002 (0 T_184 t0000))
*/
typedef  Eq_1struct Globals {
	 * ptrFFFA0000;	// FFFA0000
} Eq_1;

typedef void (Eq_2)(byte);

typedef struct  {
} Eq_8;

typedef struct  {
} Eq_13;

typedef  Eq_16struct  {	// size: 1 1
	 t0000;	// 0
} Eq_16;

typedef void (Eq_20)(word16, byte);

typedef union  {
	ui16 u0;
	byte u1;
} Eq_23;

typedef void (Eq_26)(word16, );

typedef void (Eq_29)(word16, ui16);

typedef void (Eq_34)(word16, byte);

typedef union  {
	uint16 u0;
	byte u1;
} Eq_42;

typedef  * (Eq_49)(word16, byte);

typedef union  {
	bcu8 u0;
	word16 u1;
} Eq_54;

typedef union  {
	int16 u0;
	bcu8 u1;
	cups16 u2;
} Eq_58;

typedef union  {
	uint8 u0;
	word16 u1;
} Eq_62;

typedef union  {
	uint16 u0;
	byte u1;
} Eq_65;

typedef union  {
	uint16 u0;
	byte u1;
} Eq_75;

typedef  Eq_78struct  {
	 t0000;	// 0
} Eq_78;

typedef struct  {
	byte b0000;	// 0
} Eq_96;

typedef  Eq_98[]struct  {
	 a0304[];	// 304
} Eq_98;

typedef union  {
	struct <anonymous> u0;
	struct <anonymous> u1;
} Eq_99;

typedef struct  {
} Eq_114;

typedef union  {
	struct <anonymous> Eq_114::* u0;
	union <anonymous> u1;
} Eq_115;

typedef void (Eq_119)(byte, byte, int8, word16, byte, byte, segptr32);

typedef struct  {	// size: 1 1
	byte b0000;	// 0
} Eq_145;

typedef struct  {	// size: 2 2
	word16 w0000;	// 0
} Eq_167;

typedef byte (Eq_172)(byte);

typedef  Eq_181[]struct  {
	 a0A00[];	// A00
} Eq_181;

typedef byte (Eq_202)(byte *, byte *, byte *);

typedef struct  {	// size: 2 2
	word16 w0000;	// 0
} Eq_222;

typedef struct  {	// size: 2 2
	word16 w0000;	// 0
} Eq_223;

