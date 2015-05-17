// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_189/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFF80000 (ptr Eq_17) ptrFFF80000) (FFF90000 (ptr Eq_91) ptrFFF90000) (FFFA0000 (ptr Eq_173) ptrFFFA0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_9: (struct "Eq_9" 0001 (0 Eq_16 t0000))
	T_9 (in di : (memptr (ptr Eq_17) Eq_9))
	T_24 (in di + 0x0001 : word16)
Eq_16: (union "Eq_16" (ui16 u0) (byte u1))
	T_16 (in (((byte) di ^ SLICE(di, byte, 8)) & 0x3F) << 0x02 : word16)
	T_20 (in Mem24[0x8000:di + 0x0000:byte] : byte)
Eq_17: (segment "Eq_17" (0 uint8 b0000))
	T_17 (in 0x8000 : selector)
Eq_31: (fn void (word16, byte))
	T_31 (in __outb : ptr32)
Eq_39: (fn void (word16, byte))
	T_39 (in __outb : ptr32)
Eq_43: (union "Eq_43" (uint8 u0) (uint16 u1))
	T_43 (in al_39 : Eq_43)
	T_45 (in bl_34 >>u 0x01 : word16)
Eq_46: (fn void (word16, Eq_43))
	T_46 (in __outb : ptr32)
Eq_49: (fn void (word16, uint16))
	T_49 (in __outb : ptr32)
Eq_67: (fn void (word16, byte))
	T_67 (in __outb : ptr32)
Eq_70: (fn void (word16, byte))
	T_70 (in __outb : ptr32)
Eq_73: (fn void (word16, byte))
	T_73 (in __outb : ptr32)
Eq_80: (segment "Eq_80")
	T_80 (in ss : selector)
Eq_81: (union "Eq_81" ((memptr (ptr Eq_80) Eq_217) u0) (Eq_219 u1))
	T_81 (in fp : ptr16)
Eq_89: (union "Eq_89" (uint16 u0) ((memptr (ptr Eq_91) Eq_220) u1))
	T_89 (in di_105 : Eq_89)
	T_90 (in 0x0000 : word16)
	T_101 (in di_105 + 0x0001 : word16)
	T_102 (in 0x0000 : word16)
	T_105 (in di_105 + 0x0004 : word16)
	T_112 (in di_156 : Eq_89)
	T_114 (in di_156 >>u 0x0001 : word16)
	T_172 (in wLoc04_150 : Eq_89)
Eq_91: (segment "Eq_91")
	T_91 (in 0x9000 : selector)
Eq_106: (struct "Eq_106" 0001 (0 Eq_152 t0000))
	T_106 (in si_106 : (memptr (ptr Eq_173) Eq_106))
	T_107 (in 0x0000 : word16)
	T_171 (in wLoc02_148 : (memptr (ptr Eq_173) Eq_106))
	T_181 (in wLoc02_148 + 0x0001 : word16)
Eq_152: (union "Eq_152" (uint16 u0) (byte u1))
	T_152 (in al_190 : Eq_152)
	T_153 (in (byte) bp_152 : byte)
	T_168 (in al_258 >>u 0x02 : word16)
	T_176 (in Mem219[0xA000:wLoc02_148 + 0x0000:byte] : byte)
	T_185 (in 0xFF : byte)
Eq_173: (segment "Eq_173" (0 Eq_106 t0000))
	T_173 (in 0xA000 : selector)
Eq_198: (fn byte (word16))
	T_198 (in __inb : ptr32)
Eq_208: (fn byte (byte))
	T_208 (in __inb : ptr32)
Eq_214: (fn void (byte))
	T_214 (in __syscall : ptr32)
Eq_217: (struct "Eq_217" (FFFFFFFE word16 wFFFFFFFE))
	T_217
Eq_218: (struct "Eq_218" (FFFFFFFE word16 wFFFFFFFE))
	T_218
Eq_219: (union "Eq_219" (ptr16 u0) ((memptr (ptr Eq_80) Eq_218) u1))
	T_219
Eq_220: (struct "Eq_220" 0001 (0 byte b0000) (40 byte b0040))
	T_220
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
T_7: (in cx_16 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_8: (in ax : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_9: (in di : (memptr (ptr Eq_17) Eq_9))
  Class: Eq_9
  DataType: (memptr (ptr Eq_17) Eq_9)
  OrigDataType: (memptr T_17 (struct 0001 (0 T_20 t0000)))
T_10: (in (byte) di : byte)
  Class: Eq_10
  DataType: byte
  OrigDataType: byte
T_11: (in SLICE(di, byte, 8) : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_12: (in (byte) di ^ SLICE(di, byte, 8) : byte)
  Class: Eq_12
  DataType: byte
  OrigDataType: byte
T_13: (in 0x3F : byte)
  Class: Eq_13
  DataType: byte
  OrigDataType: byte
T_14: (in ((byte) di ^ SLICE(di, byte, 8)) & 0x3F : byte)
  Class: Eq_14
  DataType: byte
  OrigDataType: byte
T_15: (in 0x02 : byte)
  Class: Eq_15
  DataType: byte
  OrigDataType: byte
T_16: (in (((byte) di ^ SLICE(di, byte, 8)) & 0x3F) << 0x02 : word16)
  Class: Eq_16
  DataType: Eq_16
  OrigDataType: ui16
T_17: (in 0x8000 : selector)
  Class: Eq_17
  DataType: (ptr Eq_17)
  OrigDataType: (ptr (segment))
T_18: (in 0x0000 : word16)
  Class: Eq_18
  DataType: word16
  OrigDataType: word16
T_19: (in di + 0x0000 : word16)
  Class: Eq_19
  DataType: word16
  OrigDataType: word16
T_20: (in Mem24[0x8000:di + 0x0000:byte] : byte)
  Class: Eq_16
  DataType: Eq_16
  OrigDataType: byte
T_21: (in 0x0001 : word16)
  Class: Eq_21
  DataType: word16
  OrigDataType: word16
T_22: (in cx_16 - 0x0001 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_23: (in 0x0001 : word16)
  Class: Eq_23
  DataType: word16
  OrigDataType: word16
T_24: (in di + 0x0001 : word16)
  Class: Eq_9
  DataType: (memptr (ptr Eq_17) Eq_9)
  OrigDataType: word16
T_25: (in cl_27 : byte)
  Class: Eq_25
  DataType: byte
  OrigDataType: byte
T_26: (in (byte) cx_16 : byte)
  Class: Eq_25
  DataType: byte
  OrigDataType: byte
T_27: (in ch_28 : byte)
  Class: Eq_27
  DataType: byte
  OrigDataType: byte
T_28: (in SLICE(cx_16, byte, 8) : byte)
  Class: Eq_27
  DataType: byte
  OrigDataType: byte
T_29: (in 0x0000 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_30: (in cx_16 != 0x0000 : bool)
  Class: Eq_30
  DataType: bool
  OrigDataType: bool
T_31: (in __outb : ptr32)
  Class: Eq_31
  DataType: (ptr Eq_31)
  OrigDataType: (ptr (fn T_34 (T_32, T_33)))
T_32: (in 0x03C8 : word16)
  Class: Eq_32
  DataType: word16
  OrigDataType: word16
T_33: (in 0x40 : byte)
  Class: Eq_33
  DataType: byte
  OrigDataType: byte
T_34: (in __outb(0x03C8, 0x40) : void)
  Class: Eq_34
  DataType: void
  OrigDataType: void
T_35: (in bx_33 : word16)
  Class: Eq_35
  DataType: word16
  OrigDataType: word16
T_36: (in 0x0040 : word16)
  Class: Eq_35
  DataType: word16
  OrigDataType: word16
T_37: (in bl_34 : uint8)
  Class: Eq_37
  DataType: uint8
  OrigDataType: uint8
T_38: (in 0x40 : byte)
  Class: Eq_37
  DataType: uint8
  OrigDataType: byte
T_39: (in __outb : ptr32)
  Class: Eq_39
  DataType: (ptr Eq_39)
  OrigDataType: (ptr (fn T_42 (T_40, T_41)))
T_40: (in 0x03C9 : word16)
  Class: Eq_40
  DataType: word16
  OrigDataType: word16
T_41: (in 0x00 : byte)
  Class: Eq_41
  DataType: byte
  OrigDataType: byte
T_42: (in __outb(0x03C9, 0x00) : void)
  Class: Eq_42
  DataType: void
  OrigDataType: void
T_43: (in al_39 : Eq_43)
  Class: Eq_43
  DataType: Eq_43
  OrigDataType: uint8
T_44: (in 0x01 : byte)
  Class: Eq_44
  DataType: uint8
  OrigDataType: uint8
T_45: (in bl_34 >>u 0x01 : word16)
  Class: Eq_43
  DataType: Eq_43
  OrigDataType: uint16
T_46: (in __outb : ptr32)
  Class: Eq_46
  DataType: (ptr Eq_46)
  OrigDataType: (ptr (fn T_48 (T_47, T_43)))
T_47: (in 0x03C9 : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_48: (in __outb(0x03C9, al_39) : void)
  Class: Eq_48
  DataType: void
  OrigDataType: void
T_49: (in __outb : ptr32)
  Class: Eq_49
  DataType: (ptr Eq_49)
  OrigDataType: (ptr (fn T_53 (T_50, T_52)))
T_50: (in 0x03C9 : word16)
  Class: Eq_50
  DataType: word16
  OrigDataType: word16
T_51: (in 0x01 : byte)
  Class: Eq_51
  DataType: uint8
  OrigDataType: uint8
T_52: (in al_39 >>u 0x01 : word16)
  Class: Eq_52
  DataType: uint16
  OrigDataType: uint16
T_53: (in __outb(0x03C9, al_39 >>u 0x01) : void)
  Class: Eq_53
  DataType: void
  OrigDataType: void
T_54: (in 0x01 : byte)
  Class: Eq_54
  DataType: byte
  OrigDataType: byte
T_55: (in bl_34 + 0x01 : byte)
  Class: Eq_37
  DataType: uint8
  OrigDataType: byte
T_56: (in bx_271 : word16)
  Class: Eq_35
  DataType: word16
  OrigDataType: word16
T_57: (in DPB(bx_271, bl_34, 0, 8) : word16)
  Class: Eq_35
  DataType: word16
  OrigDataType: word16
T_58: (in 0x00 : byte)
  Class: Eq_37
  DataType: uint8
  OrigDataType: byte
T_59: (in bl_34 != 0x00 : bool)
  Class: Eq_59
  DataType: bool
  OrigDataType: bool
T_60: (in bl_46 : byte)
  Class: Eq_60
  DataType: byte
  OrigDataType: byte
T_61: (in 0x40 : byte)
  Class: Eq_60
  DataType: byte
  OrigDataType: byte
T_62: (in bx_110 : word16)
  Class: Eq_62
  DataType: word16
  OrigDataType: word16
T_63: (in 0x40 : byte)
  Class: Eq_63
  DataType: byte
  OrigDataType: byte
T_64: (in DPB(bx_271, 0x40, 0, 8) : word16)
  Class: Eq_62
  DataType: word16
  OrigDataType: word16
T_65: (in 0x01 : byte)
  Class: Eq_65
  DataType: byte
  OrigDataType: byte
T_66: (in bl_46 - 0x01 : byte)
  Class: Eq_60
  DataType: byte
  OrigDataType: byte
T_67: (in __outb : ptr32)
  Class: Eq_67
  DataType: (ptr Eq_67)
  OrigDataType: (ptr (fn T_69 (T_68, T_25)))
T_68: (in 0x03C9 : word16)
  Class: Eq_68
  DataType: word16
  OrigDataType: word16
T_69: (in __outb(0x03C9, cl_27) : void)
  Class: Eq_69
  DataType: void
  OrigDataType: void
T_70: (in __outb : ptr32)
  Class: Eq_70
  DataType: (ptr Eq_70)
  OrigDataType: (ptr (fn T_72 (T_71, T_25)))
T_71: (in 0x03C9 : word16)
  Class: Eq_71
  DataType: word16
  OrigDataType: word16
T_72: (in __outb(0x03C9, cl_27) : void)
  Class: Eq_72
  DataType: void
  OrigDataType: void
T_73: (in __outb : ptr32)
  Class: Eq_73
  DataType: (ptr Eq_73)
  OrigDataType: (ptr (fn T_75 (T_74, T_60)))
T_74: (in 0x03C9 : word16)
  Class: Eq_74
  DataType: word16
  OrigDataType: word16
T_75: (in __outb(0x03C9, bl_46) : void)
  Class: Eq_75
  DataType: void
  OrigDataType: void
T_76: (in DPB(bx_110, bl_46, 0, 8) : word16)
  Class: Eq_62
  DataType: word16
  OrigDataType: word16
T_77: (in 0x00 : byte)
  Class: Eq_60
  DataType: byte
  OrigDataType: byte
T_78: (in bl_46 != 0x00 : bool)
  Class: Eq_78
  DataType: bool
  OrigDataType: bool
T_79: (in 0x9000 : word16)
  Class: Eq_79
  DataType: word16
  OrigDataType: word16
T_80: (in ss : selector)
  Class: Eq_80
  DataType: (ptr Eq_80)
  OrigDataType: (ptr (segment))
T_81: (in fp : ptr16)
  Class: Eq_81
  DataType: Eq_81
  OrigDataType: (union ((union (ptr16 u0) ((memptr T_80 (struct (FFFFFFFE T_88 tFFFFFFFE))) u1)) u0) ((memptr T_80 (struct (FFFFFFFE T_84 tFFFFFFFE))) u1))
T_82: (in 0x0002 : word16)
  Class: Eq_82
  DataType: word16
  OrigDataType: word16
T_83: (in fp - 0x0002 : word16)
  Class: Eq_83
  DataType: word16
  OrigDataType: word16
T_84: (in Mem60[ss:fp - 0x0002:word16] : word16)
  Class: Eq_79
  DataType: word16
  OrigDataType: word16
T_85: (in 0xA000 : word16)
  Class: Eq_85
  DataType: word16
  OrigDataType: word16
T_86: (in 0x0002 : word16)
  Class: Eq_86
  DataType: word16
  OrigDataType: word16
T_87: (in fp - 0x0002 : word16)
  Class: Eq_87
  DataType: word16
  OrigDataType: word16
T_88: (in Mem65[ss:fp - 0x0002:word16] : word16)
  Class: Eq_85
  DataType: word16
  OrigDataType: word16
T_89: (in di_105 : Eq_89)
  Class: Eq_89
  DataType: Eq_89
  OrigDataType: (memptr T_91 (struct 0001 (0 T_94 t0000)))
T_90: (in 0x0000 : word16)
  Class: Eq_89
  DataType: uint16
  OrigDataType: word16
T_91: (in 0x9000 : selector)
  Class: Eq_91
  DataType: (ptr Eq_91)
  OrigDataType: (ptr (segment))
T_92: (in 0x0000 : word16)
  Class: Eq_92
  DataType: word16
  OrigDataType: word16
T_93: (in di_105 + 0x0000 : word16)
  Class: Eq_93
  DataType: word16
  OrigDataType: word16
T_94: (in Mem73[0x9000:di_105 + 0x0000:byte] : byte)
  Class: Eq_27
  DataType: byte
  OrigDataType: byte
T_95: (in si : word16)
  Class: Eq_95
  DataType: word16
  OrigDataType: word16
T_96: (in cx_16 + si : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_97: (in SLICE(cx_16, byte, 8) : byte)
  Class: Eq_27
  DataType: byte
  OrigDataType: byte
T_98: (in 0x03C9 : word16)
  Class: Eq_98
  DataType: word16
  OrigDataType: word16
T_99: (in si - 0x03C9 : word16)
  Class: Eq_95
  DataType: word16
  OrigDataType: word16
T_100: (in 0x0001 : word16)
  Class: Eq_100
  DataType: word16
  OrigDataType: word16
T_101: (in di_105 + 0x0001 : word16)
  Class: Eq_89
  DataType: Eq_89
  OrigDataType: word16
T_102: (in 0x0000 : word16)
  Class: Eq_89
  DataType: uint16
  OrigDataType: word16
T_103: (in di_105 != 0x0000 : bool)
  Class: Eq_103
  DataType: bool
  OrigDataType: bool
T_104: (in 0x0004 : word16)
  Class: Eq_104
  DataType: word16
  OrigDataType: word16
T_105: (in di_105 + 0x0004 : word16)
  Class: Eq_89
  DataType: Eq_89
  OrigDataType: word16
T_106: (in si_106 : (memptr (ptr Eq_173) Eq_106))
  Class: Eq_106
  DataType: (memptr (ptr Eq_173) Eq_106)
  OrigDataType: word16
T_107: (in 0x0000 : word16)
  Class: Eq_106
  DataType: (memptr (ptr Eq_173) Eq_106)
  OrigDataType: word16
T_108: (in bl_109 : byte)
  Class: Eq_108
  DataType: byte
  OrigDataType: byte
T_109: (in 0xC8 : byte)
  Class: Eq_108
  DataType: byte
  OrigDataType: byte
T_110: (in 0xC8 : byte)
  Class: Eq_110
  DataType: byte
  OrigDataType: byte
T_111: (in DPB(bx_110, 0xC8, 0, 8) : word16)
  Class: Eq_62
  DataType: word16
  OrigDataType: word16
T_112: (in di_156 : Eq_89)
  Class: Eq_89
  DataType: Eq_89
  OrigDataType: (union (uint16 u0) ((memptr (ptr Eq_91) (struct "Eq_220" 0001 (0 byte b0000) (40 byte b0040))) u1))
T_113: (in 0x0001 : word16)
  Class: Eq_113
  DataType: uint16
  OrigDataType: uint16
T_114: (in di_156 >>u 0x0001 : word16)
  Class: Eq_89
  DataType: Eq_89
  OrigDataType: uint16
T_115: (in al_160 : byte)
  Class: Eq_115
  DataType: int8
  OrigDataType: int8
T_116: (in 0x64 : byte)
  Class: Eq_116
  DataType: byte
  OrigDataType: byte
T_117: (in bl_109 - 0x64 : byte)
  Class: Eq_117
  DataType: byte
  OrigDataType: byte
T_118: (in 0x0000 : word16)
  Class: Eq_118
  DataType: word16
  OrigDataType: word16
T_119: (in di_156 + 0x0000 : word16)
  Class: Eq_119
  DataType: word16
  OrigDataType: word16
T_120: (in Mem73[0x9000:di_156 + 0x0000:byte] : byte)
  Class: Eq_27
  DataType: byte
  OrigDataType: byte
T_121: (in bl_109 - 0x64 - Mem73[0x9000:di_156 + 0x0000:byte] : byte)
  Class: Eq_115
  DataType: int8
  OrigDataType: byte
T_122: (in al_166 : byte)
  Class: Eq_122
  DataType: int8
  OrigDataType: int8
T_123: (in cl_131 : byte)
  Class: Eq_123
  DataType: byte
  OrigDataType: byte
T_124: (in 0xA0 : byte)
  Class: Eq_124
  DataType: byte
  OrigDataType: byte
T_125: (in cl_131 - 0xA0 : byte)
  Class: Eq_125
  DataType: byte
  OrigDataType: byte
T_126: (in 0x0040 : word16)
  Class: Eq_126
  DataType: word16
  OrigDataType: word16
T_127: (in di_156 + 0x0040 : word16)
  Class: Eq_127
  DataType: word16
  OrigDataType: word16
T_128: (in Mem73[0x9000:di_156 + 0x0040:byte] : byte)
  Class: Eq_128
  DataType: byte
  OrigDataType: byte
T_129: (in cl_131 - 0xA0 - Mem73[0x9000:di_156 + 0x0040:byte] : byte)
  Class: Eq_122
  DataType: int8
  OrigDataType: byte
T_130: (in ax_168 : word16)
  Class: Eq_130
  DataType: word16
  OrigDataType: word16
T_131: (in al_166 *s al_166 : int16)
  Class: Eq_131
  DataType: int16
  OrigDataType: int16
T_132: (in al_160 *s al_160 : int16)
  Class: Eq_132
  DataType: int16
  OrigDataType: int16
T_133: (in al_166 *s al_166 + al_160 *s al_160 : word16)
  Class: Eq_130
  DataType: word16
  OrigDataType: word16
T_134: (in ax_173 : int16)
  Class: Eq_134
  DataType: int16
  OrigDataType: int16
T_135: (in (byte) ax_168 : byte)
  Class: Eq_135
  DataType: byte
  OrigDataType: byte
T_136: (in 0x03 : byte)
  Class: Eq_136
  DataType: byte
  OrigDataType: byte
T_137: (in (byte) ax_168 | 0x03 : byte)
  Class: Eq_137
  DataType: byte
  OrigDataType: byte
T_138: (in DPB(ax_168, (byte) ax_168 | 0x03, 0, 8) : word16)
  Class: Eq_134
  DataType: int16
  OrigDataType: word16
T_139: (in bp_152 : (memptr (ptr Eq_17) uint8))
  Class: Eq_139
  DataType: (memptr (ptr Eq_17) uint8)
  OrigDataType: (memptr T_17 (struct (0 T_166 t0000)))
T_140: (in 0xFFFFFFFF : uip32)
  Class: Eq_140
  DataType: uip32
  OrigDataType: uip32
T_141: (in 0xFFFFFFFF % ax_173 : int16)
  Class: Eq_141
  DataType: int16
  OrigDataType: int16
T_142: (in 0xFFFF : word16)
  Class: Eq_142
  DataType: word16
  OrigDataType: word16
T_143: (in SEQ(0xFFFFFFFF % ax_173, 0xFFFF) : word32)
  Class: Eq_143
  DataType: int32
  OrigDataType: int32
T_144: (in SEQ(0xFFFFFFFF % ax_173, 0xFFFF) / ax_173 : int16)
  Class: Eq_144
  DataType: int16
  OrigDataType: int16
T_145: (in bp_152 + SEQ(0xFFFFFFFF % ax_173, 0xFFFF) / ax_173 : word16)
  Class: Eq_139
  DataType: (memptr (ptr Eq_17) uint8)
  OrigDataType: word16
T_146: (in si_151 : word16)
  Class: Eq_146
  DataType: word16
  OrigDataType: word16
T_147: (in 0x0001 : word16)
  Class: Eq_147
  DataType: word16
  OrigDataType: word16
T_148: (in si_151 - 0x0001 : word16)
  Class: Eq_146
  DataType: word16
  OrigDataType: word16
T_149: (in 0x0000 : word16)
  Class: Eq_146
  DataType: word16
  OrigDataType: word16
T_150: (in si_151 != 0x0000 : bool)
  Class: Eq_150
  DataType: bool
  OrigDataType: bool
T_151: (in ax_188 : (memptr (ptr Eq_17) uint8))
  Class: Eq_139
  DataType: (memptr (ptr Eq_17) uint8)
  OrigDataType: word16
T_152: (in al_190 : Eq_152)
  Class: Eq_152
  DataType: Eq_152
  OrigDataType: (union (uint16 u0) (byte u1))
T_153: (in (byte) bp_152 : byte)
  Class: Eq_152
  DataType: Eq_152
  OrigDataType: byte
T_154: (in ah_191 : byte)
  Class: Eq_154
  DataType: byte
  OrigDataType: byte
T_155: (in SLICE(bp_152, byte, 8) : byte)
  Class: Eq_154
  DataType: byte
  OrigDataType: byte
T_156: (in 0x80 : byte)
  Class: Eq_156
  DataType: byte
  OrigDataType: byte
T_157: (in al_190 & 0x80 : byte)
  Class: Eq_157
  DataType: byte
  OrigDataType: byte
T_158: (in 0x00 : byte)
  Class: Eq_157
  DataType: byte
  OrigDataType: byte
T_159: (in (al_190 & 0x80) != 0x00 : bool)
  Class: Eq_159
  DataType: bool
  OrigDataType: bool
T_160: (in ax_207 : word16)
  Class: Eq_160
  DataType: word16
  OrigDataType: word16
T_161: (in DPB(ax_188, ah_191, 8, 8) : word16)
  Class: Eq_160
  DataType: word16
  OrigDataType: word16
T_162: (in 0x00 : byte)
  Class: Eq_154
  DataType: byte
  OrigDataType: byte
T_163: (in ah_191 == 0x00 : bool)
  Class: Eq_163
  DataType: bool
  OrigDataType: bool
T_164: (in al_258 : byte)
  Class: Eq_164
  DataType: uint8
  OrigDataType: uint8
T_165: (in bp_152 + si_106 : word16)
  Class: Eq_165
  DataType: word16
  OrigDataType: word16
T_166: (in Mem73[0x8000:bp_152 + si_106:byte] : byte)
  Class: Eq_164
  DataType: uint8
  OrigDataType: byte
T_167: (in 0x02 : byte)
  Class: Eq_167
  DataType: uint8
  OrigDataType: uint8
T_168: (in al_258 >>u 0x02 : word16)
  Class: Eq_152
  DataType: Eq_152
  OrigDataType: uint16
T_169: (in al_258 >>u 0x02 : word16)
  Class: Eq_169
  DataType: uint16
  OrigDataType: uint16
T_170: (in DPB(bp_152, al_258 >>u 0x02, 0, 8) : word16)
  Class: Eq_139
  DataType: (memptr (ptr Eq_17) uint8)
  OrigDataType: word16
T_171: (in wLoc02_148 : (memptr (ptr Eq_173) Eq_106))
  Class: Eq_106
  DataType: (memptr (ptr Eq_173) Eq_106)
  OrigDataType: (memptr T_173 (struct 0001 (0 T_176 t0000)))
T_172: (in wLoc04_150 : Eq_89)
  Class: Eq_89
  DataType: Eq_89
  OrigDataType: (memptr T_91 (struct 0001 (0 T_94 t0000)))
T_173: (in 0xA000 : selector)
  Class: Eq_173
  DataType: (ptr Eq_173)
  OrigDataType: (ptr (segment))
T_174: (in 0x0000 : word16)
  Class: Eq_174
  DataType: word16
  OrigDataType: word16
T_175: (in wLoc02_148 + 0x0000 : word16)
  Class: Eq_175
  DataType: word16
  OrigDataType: word16
T_176: (in Mem219[0xA000:wLoc02_148 + 0x0000:byte] : byte)
  Class: Eq_152
  DataType: Eq_152
  OrigDataType: byte
T_177: (in cx_130 : word16)
  Class: Eq_177
  DataType: word16
  OrigDataType: word16
T_178: (in 0x0001 : word16)
  Class: Eq_178
  DataType: word16
  OrigDataType: word16
T_179: (in cx_130 - 0x0001 : word16)
  Class: Eq_177
  DataType: word16
  OrigDataType: word16
T_180: (in 0x0001 : word16)
  Class: Eq_180
  DataType: word16
  OrigDataType: word16
T_181: (in wLoc02_148 + 0x0001 : word16)
  Class: Eq_106
  DataType: (memptr (ptr Eq_173) Eq_106)
  OrigDataType: word16
T_182: (in (byte) cx_130 : byte)
  Class: Eq_123
  DataType: byte
  OrigDataType: byte
T_183: (in 0x0000 : word16)
  Class: Eq_177
  DataType: word16
  OrigDataType: word16
T_184: (in cx_130 != 0x0000 : bool)
  Class: Eq_184
  DataType: bool
  OrigDataType: bool
T_185: (in 0xFF : byte)
  Class: Eq_152
  DataType: byte
  OrigDataType: byte
T_186: (in 0xFF : byte)
  Class: Eq_186
  DataType: byte
  OrigDataType: byte
T_187: (in DPB(ax_207, 0xFF, 0, 8) : word16)
  Class: Eq_160
  DataType: word16
  OrigDataType: word16
T_188: (in 0x0003 : word16)
  Class: Eq_146
  DataType: word16
  OrigDataType: word16
T_189: (in 0x0000 : word16)
  Class: Eq_139
  DataType: (memptr (ptr Eq_17) uint8)
  OrigDataType: word16
T_190: (in 0x0001 : word16)
  Class: Eq_190
  DataType: word16
  OrigDataType: word16
T_191: (in bx_110 - 0x0001 : word16)
  Class: Eq_62
  DataType: word16
  OrigDataType: word16
T_192: (in (byte) bx_110 : byte)
  Class: Eq_108
  DataType: byte
  OrigDataType: byte
T_193: (in 0x0000 : word16)
  Class: Eq_62
  DataType: word16
  OrigDataType: word16
T_194: (in bx_110 != 0x0000 : bool)
  Class: Eq_194
  DataType: bool
  OrigDataType: bool
T_195: (in 0x0140 : word16)
  Class: Eq_177
  DataType: word16
  OrigDataType: word16
T_196: (in 0x40 : byte)
  Class: Eq_123
  DataType: byte
  OrigDataType: byte
T_197: (in al_234 : byte)
  Class: Eq_197
  DataType: byte
  OrigDataType: byte
T_198: (in __inb : ptr32)
  Class: Eq_198
  DataType: (ptr Eq_198)
  OrigDataType: (ptr (fn T_200 (T_199)))
T_199: (in 0x03DA : word16)
  Class: Eq_199
  DataType: word16
  OrigDataType: word16
T_200: (in __inb(0x03DA) : byte)
  Class: Eq_197
  DataType: byte
  OrigDataType: byte
T_201: (in ax_272 : word16)
  Class: Eq_160
  DataType: word16
  OrigDataType: word16
T_202: (in 0x08 : byte)
  Class: Eq_202
  DataType: byte
  OrigDataType: byte
T_203: (in al_234 & 0x08 : byte)
  Class: Eq_203
  DataType: byte
  OrigDataType: byte
T_204: (in DPB(ax_272, al_234 & 0x08, 0, 8) : word16)
  Class: Eq_160
  DataType: word16
  OrigDataType: word16
T_205: (in al_234 & 0x08 : byte)
  Class: Eq_205
  DataType: byte
  OrigDataType: byte
T_206: (in 0x00 : byte)
  Class: Eq_205
  DataType: byte
  OrigDataType: byte
T_207: (in (al_234 & 0x08) == 0x00 : bool)
  Class: Eq_207
  DataType: bool
  OrigDataType: bool
T_208: (in __inb : ptr32)
  Class: Eq_208
  DataType: (ptr Eq_208)
  OrigDataType: (ptr (fn T_210 (T_209)))
T_209: (in 0x60 : byte)
  Class: Eq_209
  DataType: byte
  OrigDataType: byte
T_210: (in __inb(0x60) : byte)
  Class: Eq_210
  DataType: byte
  OrigDataType: byte
T_211: (in DPB(ax_272, __inb(0x60), 0, 8) : word16)
  Class: Eq_211
  DataType: word16
  OrigDataType: word16
T_212: (in 0x0001 : word16)
  Class: Eq_211
  DataType: word16
  OrigDataType: word16
T_213: (in DPB(ax_272, __inb(0x60), 0, 8) != 0x0001 : bool)
  Class: Eq_213
  DataType: bool
  OrigDataType: bool
T_214: (in __syscall : ptr32)
  Class: Eq_214
  DataType: (ptr Eq_214)
  OrigDataType: (ptr (fn T_216 (T_215)))
T_215: (in 0x10 : byte)
  Class: Eq_215
  DataType: byte
  OrigDataType: byte
T_216: (in __syscall(0x10) : void)
  Class: Eq_216
  DataType: void
  OrigDataType: void
T_217:
  Class: Eq_217
  DataType: Eq_217
  OrigDataType: 
T_218:
  Class: Eq_218
  DataType: Eq_218
  OrigDataType: 
T_219:
  Class: Eq_219
  DataType: Eq_219
  OrigDataType: 
T_220:
  Class: Eq_220
  DataType: Eq_220
  OrigDataType: 
*/
typedef Eq_17 Eq_1Eq_91 Eq_1Eq_173 Eq_1struct Globals {
	Eq_17 * ptrFFF80000;	// FFF80000
	Eq_91 * ptrFFF90000;	// FFF90000
	Eq_173 * ptrFFFA0000;	// FFFA0000
} Eq_1;

typedef void (Eq_2)(byte);

typedef Eq_16 Eq_9struct Eq_9 {	// size: 1 1
	Eq_16 t0000;	// 0
} Eq_9;

typedef union Eq_16 {
	ui16 u0;
	byte u1;
} Eq_16;

typedef struct Eq_17 {
	uint8 b0000;	// 0
} Eq_17;

typedef void (Eq_31)(word16, byte);

typedef void (Eq_39)(word16, byte);

typedef union Eq_43 {
	uint8 u0;
	uint16 u1;
} Eq_43;

typedef void (Eq_46)(word16, Eq_43);

typedef void (Eq_49)(word16, uint16);

typedef void (Eq_67)(word16, byte);

typedef void (Eq_70)(word16, byte);

typedef void (Eq_73)(word16, byte);

typedef struct Eq_80 {
} Eq_80;

typedef union Eq_81 {
	Eq_217 Eq_80::* u0;
	Eq_219 u1;
} Eq_81;

typedef union Eq_89 {
	uint16 u0;
	Eq_220 Eq_91::* u1;
} Eq_89;

typedef struct Eq_91 {
} Eq_91;

typedef Eq_152 Eq_106struct Eq_106 {	// size: 1 1
	Eq_152 t0000;	// 0
} Eq_106;

typedef union Eq_152 {
	uint16 u0;
	byte u1;
} Eq_152;

typedef Eq_106 Eq_173struct Eq_173 {
	Eq_106 t0000;	// 0
} Eq_173;

typedef byte (Eq_198)(word16);

typedef byte (Eq_208)(byte);

typedef void (Eq_214)(byte);

typedef struct Eq_217 {
	word16 wFFFFFFFE;	// FFFFFFFE
} Eq_217;

typedef struct Eq_218 {
	word16 wFFFFFFFE;	// FFFFFFFE
} Eq_218;

typedef union Eq_219 {
	ptr16 u0;
	Eq_218 Eq_80::* u1;
} Eq_219;

typedef struct Eq_220 {	// size: 1 1
	byte b0000;	// 0
	byte b0040;	// 40
} Eq_220;

