// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_296/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFF90000 (ptr Eq_17) ptrFFF90000) (FFFA00A0 (ptr Eq_17) ptrFFFA00A0))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_9: (fn byte (word16))
	T_9 (in __inb : ptr32)
Eq_17: (segment "Eq_17" (0 byte b0000) (18 byte b0018))
	T_17 (in 0x9000 : selector)
	T_25 (in 0xA00A : selector)
Eq_37: (fn bool ((memptr (ptr Eq_17) byte), byte))
	T_37 (in __bt : ptr32)
Eq_61: (union "Eq_61" (int8 u0) (uint16 u1))
	T_61 (in (al_146 >>u 0x02) - 0x03 : byte)
	T_62 (in al_147 : Eq_61)
	T_86 (in 0x01 : byte)
	T_88 (in 0x01 : byte)
	T_90 (in 0x02 : byte)
	T_193 (in al_146 >>u 0x02 : word16)
Eq_63: (segment "Eq_63" (3D8 int16 w03D8) (3DA int16 w03DA) (3DC int16 w03DC) (3DE int16 w03DE))
	T_63 (in ds : (ptr Eq_63))
Eq_82: (fn bool ((memptr (ptr Eq_17) byte), byte))
	T_82 (in __bt : ptr32)
Eq_99: (fn real64 (real64))
	T_99 (in cos : ptr32)
Eq_102: (fn real64 (real64))
	T_102 (in sin : ptr32)
Eq_128: (struct "Eq_128" 0001 (7D00 byte b7D00) (7E40 byte b7E40))
	T_128 (in bx_223 : (memptr (ptr Eq_17) Eq_128))
	T_135 (in ds->w03DC *s 0x0140 + ds->w03DA : word16)
	T_176 (in bx_223 + 0x0001 : word16)
Eq_151: (union "Eq_151" (uint16 u0) (bcu8 u1))
	T_151 (in (al_225 & 0x01) >>u 0x01 : word16)
	T_152 (in 0x00 : byte)
Eq_194: (union "Eq_194" (int8 u0) (int16 u1) (uint16 u2))
	T_194 (in al_146 >>u 0x02 : word16)
	T_195 (in 0x03 : byte)
Eq_216: (fn byte ((ptr byte)))
	T_216 (in bios_kbd_check_keystroke : ptr32)
	T_217 (in signature of bios_kbd_check_keystroke : void)
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
T_7: (in ah_253 : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_8: (in 0x00 : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_9: (in __inb : ptr32)
  Class: Eq_9
  DataType: (ptr Eq_9)
  OrigDataType: (ptr (fn T_11 (T_10)))
T_10: (in 0x03DA : word16)
  Class: Eq_10
  DataType: word16
  OrigDataType: word16
T_11: (in __inb(0x03DA) : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_12: (in 0x08 : byte)
  Class: Eq_12
  DataType: byte
  OrigDataType: byte
T_13: (in __inb(0x03DA) & 0x08 : byte)
  Class: Eq_13
  DataType: byte
  OrigDataType: byte
T_14: (in 0x00 : byte)
  Class: Eq_13
  DataType: byte
  OrigDataType: byte
T_15: (in (__inb(0x03DA) & 0x08) == 0x00 : bool)
  Class: Eq_15
  DataType: bool
  OrigDataType: bool
T_16: (in al_65 : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_17: (in 0x9000 : selector)
  Class: Eq_17
  DataType: (ptr Eq_17)
  OrigDataType: (ptr (segment))
T_18: (in di : (memptr (ptr Eq_17) byte))
  Class: Eq_18
  DataType: (memptr (ptr Eq_17) byte)
  OrigDataType: (memptr T_17 (struct 0001 (0 T_7 t0000)))
T_19: (in 0x0000 : word16)
  Class: Eq_19
  DataType: word16
  OrigDataType: word16
T_20: (in di + 0x0000 : word16)
  Class: Eq_20
  DataType: word16
  OrigDataType: word16
T_21: (in Mem0[0x9000:di + 0x0000:byte] : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_22: (in 0x0000 : word16)
  Class: Eq_22
  DataType: word16
  OrigDataType: word16
T_23: (in di + 0x0000 : word16)
  Class: Eq_23
  DataType: word16
  OrigDataType: word16
T_24: (in Mem67[0x9000:di + 0x0000:byte] : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_25: (in 0xA00A : selector)
  Class: Eq_17
  DataType: (ptr Eq_17)
  OrigDataType: (ptr (segment))
T_26: (in 0x0000 : word16)
  Class: Eq_26
  DataType: word16
  OrigDataType: word16
T_27: (in di + 0x0000 : word16)
  Class: Eq_27
  DataType: word16
  OrigDataType: word16
T_28: (in Mem68[0xA00A:di + 0x0000:byte] : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_29: (in 0x0001 : word16)
  Class: Eq_29
  DataType: word16
  OrigDataType: word16
T_30: (in di + 0x0001 : word16)
  Class: Eq_18
  DataType: (memptr (ptr Eq_17) byte)
  OrigDataType: word16
T_31: (in cx : word16)
  Class: Eq_31
  DataType: word16
  OrigDataType: word16
T_32: (in 0x0001 : word16)
  Class: Eq_32
  DataType: word16
  OrigDataType: word16
T_33: (in cx - 0x0001 : word16)
  Class: Eq_31
  DataType: word16
  OrigDataType: word16
T_34: (in 0x0000 : word16)
  Class: Eq_31
  DataType: word16
  OrigDataType: word16
T_35: (in cx != 0x0000 : bool)
  Class: Eq_35
  DataType: bool
  OrigDataType: bool
T_36: (in 0x0000 : word16)
  Class: Eq_18
  DataType: (memptr (ptr Eq_17) byte)
  OrigDataType: word16
T_37: (in __bt : ptr32)
  Class: Eq_37
  DataType: (ptr Eq_37)
  OrigDataType: (ptr (fn T_39 (T_18, T_38)))
T_38: (in 0x01 : byte)
  Class: Eq_38
  DataType: byte
  OrigDataType: byte
T_39: (in __bt(di, 0x01) : bool)
  Class: Eq_39
  DataType: bool
  OrigDataType: bool
T_40: (in cx_135 : int16)
  Class: Eq_40
  DataType: int16
  OrigDataType: int16
T_41: (in 0x0005 : word16)
  Class: Eq_41
  DataType: uint16
  OrigDataType: uint16
T_42: (in cx_135 >> 0x0005 : word16)
  Class: Eq_42
  DataType: int16
  OrigDataType: int16
T_43: (in -(cx_135 >> 0x0005) : word16)
  Class: Eq_43
  DataType: int16
  OrigDataType: int16
T_44: (in cx_136 : int16)
  Class: Eq_43
  DataType: int16
  OrigDataType: int16
T_45: (in bx_139 : int16)
  Class: Eq_45
  DataType: int16
  OrigDataType: int16
T_46: (in 0x0005 : word16)
  Class: Eq_46
  DataType: uint16
  OrigDataType: uint16
T_47: (in bx_139 >> 0x0005 : word16)
  Class: Eq_47
  DataType: int16
  OrigDataType: int16
T_48: (in -(bx_139 >> 0x0005) : word16)
  Class: Eq_48
  DataType: int16
  OrigDataType: int16
T_49: (in bx_140 : int16)
  Class: Eq_48
  DataType: int16
  OrigDataType: int16
T_50: (in dx_142 : int16)
  Class: Eq_50
  DataType: int16
  OrigDataType: int16
T_51: (in 0x0005 : word16)
  Class: Eq_51
  DataType: uint16
  OrigDataType: uint16
T_52: (in dx_142 >> 0x0005 : word16)
  Class: Eq_52
  DataType: int16
  OrigDataType: int16
T_53: (in 0x0024 : word16)
  Class: Eq_53
  DataType: word16
  OrigDataType: word16
T_54: (in (dx_142 >> 0x0005) + 0x0024 : word16)
  Class: Eq_54
  DataType: int16
  OrigDataType: int16
T_55: (in -((dx_142 >> 0x0005) + 0x0024) : word16)
  Class: Eq_55
  DataType: int16
  OrigDataType: int16
T_56: (in dx_144 : int16)
  Class: Eq_55
  DataType: int16
  OrigDataType: int16
T_57: (in al_146 : uint8)
  Class: Eq_57
  DataType: uint8
  OrigDataType: uint8
T_58: (in 0x02 : byte)
  Class: Eq_58
  DataType: uint8
  OrigDataType: uint8
T_59: (in al_146 >>u 0x02 : word16)
  Class: Eq_59
  DataType: uint16
  OrigDataType: uint16
T_60: (in 0x03 : byte)
  Class: Eq_60
  DataType: byte
  OrigDataType: byte
T_61: (in (al_146 >>u 0x02) - 0x03 : byte)
  Class: Eq_61
  DataType: Eq_61
  OrigDataType: byte
T_62: (in al_147 : Eq_61)
  Class: Eq_61
  DataType: Eq_61
  OrigDataType: int8
T_63: (in ds : (ptr Eq_63))
  Class: Eq_63
  DataType: (ptr Eq_63)
  OrigDataType: (ptr (segment (3D8 T_96 t03D8) (3DA T_43 t03DA) (3DC T_48 t03DC) (3DE T_55 t03DE)))
T_64: (in 0x03DA : word16)
  Class: Eq_64
  DataType: (memptr (ptr Eq_63) int16)
  OrigDataType: (memptr T_63 (struct (0 T_65 t0000)))
T_65: (in Mem161[ds:0x03DA:word16] : word16)
  Class: Eq_43
  DataType: int16
  OrigDataType: word16
T_66: (in 0x03DC : word16)
  Class: Eq_66
  DataType: (memptr (ptr Eq_63) int16)
  OrigDataType: (memptr T_63 (struct (0 T_67 t0000)))
T_67: (in Mem163[ds:0x03DC:word16] : word16)
  Class: Eq_48
  DataType: int16
  OrigDataType: word16
T_68: (in 0x03DE : word16)
  Class: Eq_68
  DataType: (memptr (ptr Eq_63) int16)
  OrigDataType: (memptr T_63 (struct (0 T_69 t0000)))
T_69: (in Mem164[ds:0x03DE:word16] : word16)
  Class: Eq_55
  DataType: int16
  OrigDataType: word16
T_70: (in rLoc1_165 : real64)
  Class: Eq_70
  DataType: real64
  OrigDataType: real64
T_71: (in 0x03DE : word16)
  Class: Eq_71
  DataType: (memptr (ptr Eq_63) int16)
  OrigDataType: (memptr T_63 (struct (0 T_72 t0000)))
T_72: (in Mem164[ds:0x03DE:int16] : int16)
  Class: Eq_55
  DataType: int16
  OrigDataType: int16
T_73: (in (real64) ds->w03DE : real64)
  Class: Eq_70
  DataType: real64
  OrigDataType: real64
T_74: (in rLoc2_166 : real64)
  Class: Eq_70
  DataType: real64
  OrigDataType: real64
T_75: (in 0x03DC : word16)
  Class: Eq_75
  DataType: (memptr (ptr Eq_63) int16)
  OrigDataType: (memptr T_63 (struct (0 T_76 t0000)))
T_76: (in Mem164[ds:0x03DC:int16] : int16)
  Class: Eq_48
  DataType: int16
  OrigDataType: int16
T_77: (in (real64) ds->w03DC : real64)
  Class: Eq_70
  DataType: real64
  OrigDataType: real64
T_78: (in rLoc3_167 : real64)
  Class: Eq_70
  DataType: real64
  OrigDataType: real64
T_79: (in 0x03DA : word16)
  Class: Eq_79
  DataType: (memptr (ptr Eq_63) int16)
  OrigDataType: (memptr T_63 (struct (0 T_80 t0000)))
T_80: (in Mem164[ds:0x03DA:int16] : int16)
  Class: Eq_43
  DataType: int16
  OrigDataType: int16
T_81: (in (real64) ds->w03DA : real64)
  Class: Eq_70
  DataType: real64
  OrigDataType: real64
T_82: (in __bt : ptr32)
  Class: Eq_82
  DataType: (ptr Eq_82)
  OrigDataType: (ptr (fn T_84 (T_18, T_83)))
T_83: (in 0x00 : byte)
  Class: Eq_83
  DataType: byte
  OrigDataType: byte
T_84: (in __bt(di, 0x00) : bool)
  Class: Eq_84
  DataType: bool
  OrigDataType: bool
T_85: (in -bx_140 : word16)
  Class: Eq_48
  DataType: int16
  OrigDataType: int16
T_86: (in 0x01 : byte)
  Class: Eq_61
  DataType: int8
  OrigDataType: byte
T_87: (in al_147 == 0x01 : bool)
  Class: Eq_87
  DataType: bool
  OrigDataType: bool
T_88: (in 0x01 : byte)
  Class: Eq_61
  DataType: int8
  OrigDataType: int8
T_89: (in al_147 < 0x01 : bool)
  Class: Eq_89
  DataType: bool
  OrigDataType: bool
T_90: (in 0x02 : byte)
  Class: Eq_61
  DataType: int8
  OrigDataType: byte
T_91: (in al_147 != 0x02 : bool)
  Class: Eq_91
  DataType: bool
  OrigDataType: bool
T_92: (in al_183 : byte)
  Class: Eq_92
  DataType: byte
  OrigDataType: byte
T_93: (in 0x03 : byte)
  Class: Eq_92
  DataType: byte
  OrigDataType: byte
T_94: (in rLoc4_190 : real64)
  Class: Eq_94
  DataType: real64
  OrigDataType: real64
T_95: (in 0x03D8 : word16)
  Class: Eq_95
  DataType: (memptr (ptr Eq_63) int16)
  OrigDataType: (memptr T_63 (struct (0 T_96 t0000)))
T_96: (in Mem164[ds:0x03D8:int16] : int16)
  Class: Eq_96
  DataType: int16
  OrigDataType: int16
T_97: (in (real64) ds->w03D8 : real64)
  Class: Eq_94
  DataType: real64
  OrigDataType: real64
T_98: (in rLoc4_192 : real64)
  Class: Eq_98
  DataType: real64
  OrigDataType: real64
T_99: (in cos : ptr32)
  Class: Eq_99
  DataType: (ptr Eq_99)
  OrigDataType: (ptr (fn T_100 (T_94)))
T_100: (in cos(rLoc4_190) : real64)
  Class: Eq_98
  DataType: real64
  OrigDataType: real64
T_101: (in rLoc5_193 : real64)
  Class: Eq_101
  DataType: real64
  OrigDataType: real64
T_102: (in sin : ptr32)
  Class: Eq_102
  DataType: (ptr Eq_102)
  OrigDataType: (ptr (fn T_103 (T_94)))
T_103: (in sin(rLoc4_190) : real64)
  Class: Eq_101
  DataType: real64
  OrigDataType: real64
T_104: (in rLoc3_207 : real64)
  Class: Eq_70
  DataType: real64
  OrigDataType: real64
T_105: (in rLoc5_193 * rLoc2_166 : real64)
  Class: Eq_105
  DataType: real64
  OrigDataType: real64
T_106: (in rLoc4_192 * rLoc3_167 : real64)
  Class: Eq_106
  DataType: real64
  OrigDataType: real64
T_107: (in rLoc5_193 * rLoc2_166 + rLoc4_192 * rLoc3_167 : real64)
  Class: Eq_70
  DataType: real64
  OrigDataType: real64
T_108: (in rLoc6_198 : real64)
  Class: Eq_70
  DataType: real64
  OrigDataType: real64
T_109: (in rLoc4_192 * rLoc5_193 : real64)
  Class: Eq_109
  DataType: real64
  OrigDataType: real64
T_110: (in rLoc3_167 * rLoc4_192 : real64)
  Class: Eq_110
  DataType: real64
  OrigDataType: real64
T_111: (in rLoc4_192 * rLoc5_193 - rLoc3_167 * rLoc4_192 : real64)
  Class: Eq_70
  DataType: real64
  OrigDataType: real64
T_112: (in rLoc1_304 : real64)
  Class: Eq_70
  DataType: real64
  OrigDataType: real64
T_113: (in 0x01 : byte)
  Class: Eq_113
  DataType: byte
  OrigDataType: byte
T_114: (in al_183 - 0x01 : byte)
  Class: Eq_92
  DataType: byte
  OrigDataType: byte
T_115: (in 0x00 : byte)
  Class: Eq_92
  DataType: byte
  OrigDataType: byte
T_116: (in al_183 != 0x00 : bool)
  Class: Eq_116
  DataType: bool
  OrigDataType: bool
T_117: (in (int16) rLoc6_198 : int16)
  Class: Eq_55
  DataType: int16
  OrigDataType: int16
T_118: (in 0x03DE : word16)
  Class: Eq_118
  DataType: (memptr (ptr Eq_63) int16)
  OrigDataType: (memptr T_63 (struct (0 T_119 t0000)))
T_119: (in Mem218[ds:0x03DE:int16] : int16)
  Class: Eq_55
  DataType: int16
  OrigDataType: int16
T_120: (in (int16) rLoc1_304 : int16)
  Class: Eq_48
  DataType: int16
  OrigDataType: int16
T_121: (in 0x03DC : word16)
  Class: Eq_121
  DataType: (memptr (ptr Eq_63) int16)
  OrigDataType: (memptr T_63 (struct (0 T_122 t0000)))
T_122: (in Mem219[ds:0x03DC:int16] : int16)
  Class: Eq_48
  DataType: int16
  OrigDataType: int16
T_123: (in (int16) rLoc3_207 : int16)
  Class: Eq_43
  DataType: int16
  OrigDataType: int16
T_124: (in 0x03DA : word16)
  Class: Eq_124
  DataType: (memptr (ptr Eq_63) int16)
  OrigDataType: (memptr T_63 (struct (0 T_125 t0000)))
T_125: (in Mem220[ds:0x03DA:int16] : int16)
  Class: Eq_43
  DataType: int16
  OrigDataType: int16
T_126: (in al_225 : byte)
  Class: Eq_126
  DataType: byte
  OrigDataType: byte
T_127: (in (byte) di : byte)
  Class: Eq_126
  DataType: byte
  OrigDataType: byte
T_128: (in bx_223 : (memptr (ptr Eq_17) Eq_128))
  Class: Eq_128
  DataType: (memptr (ptr Eq_17) Eq_128)
  OrigDataType: (memptr T_17 (struct 0001 (7D00 T_163 t7D00) (7E40 T_170 t7E40)))
T_129: (in 0x03DC : word16)
  Class: Eq_129
  DataType: (memptr (ptr Eq_63) int16)
  OrigDataType: (memptr T_63 (struct (0 T_130 t0000)))
T_130: (in Mem220[ds:0x03DC:word16] : word16)
  Class: Eq_48
  DataType: int16
  OrigDataType: int16
T_131: (in 0x0140 : word16)
  Class: Eq_131
  DataType: int16
  OrigDataType: int16
T_132: (in ds->w03DC *s 0x0140 : int16)
  Class: Eq_132
  DataType: int16
  OrigDataType: int16
T_133: (in 0x03DA : word16)
  Class: Eq_133
  DataType: (memptr (ptr Eq_63) int16)
  OrigDataType: (memptr T_63 (struct (0 T_134 t0000)))
T_134: (in Mem220[ds:0x03DA:word16] : word16)
  Class: Eq_43
  DataType: int16
  OrigDataType: word16
T_135: (in ds->w03DC *s 0x0140 + ds->w03DA : word16)
  Class: Eq_128
  DataType: (memptr (ptr Eq_17) Eq_128)
  OrigDataType: word16
T_136: (in al_226 : byte)
  Class: Eq_136
  DataType: byte
  OrigDataType: byte
T_137: (in 0x01 : byte)
  Class: Eq_137
  DataType: byte
  OrigDataType: byte
T_138: (in al_225 & 0x01 : byte)
  Class: Eq_136
  DataType: byte
  OrigDataType: byte
T_139: (in 0x03DE : word16)
  Class: Eq_139
  DataType: (memptr (ptr Eq_63) int16)
  OrigDataType: (memptr T_63 (struct (0 T_140 t0000)))
T_140: (in Mem220[ds:0x03DE:word16] : word16)
  Class: Eq_55
  DataType: int16
  OrigDataType: int16
T_141: (in al_225 & 0x01 : byte)
  Class: Eq_141
  DataType: byte
  OrigDataType: byte
T_142: (in DPB(di, al_225 & 0x01, 0, 8) : word16)
  Class: Eq_55
  DataType: int16
  OrigDataType: int16
T_143: (in ds->w03DE > DPB(di, al_225 & 0x01, 0, 8) : bool)
  Class: Eq_143
  DataType: bool
  OrigDataType: bool
T_144: (in al_258 : byte)
  Class: Eq_144
  DataType: byte
  OrigDataType: byte
T_145: (in 0x40 : byte)
  Class: Eq_145
  DataType: byte
  OrigDataType: byte
T_146: (in al_226 + 0x40 : byte)
  Class: Eq_144
  DataType: byte
  OrigDataType: byte
T_147: (in cx_261 : word16)
  Class: Eq_147
  DataType: word16
  OrigDataType: word16
T_148: (in 0x0002 : word16)
  Class: Eq_147
  DataType: word16
  OrigDataType: word16
T_149: (in al_225 & 0x01 : byte)
  Class: Eq_149
  DataType: uint8
  OrigDataType: uint8
T_150: (in 0x01 : byte)
  Class: Eq_150
  DataType: uint8
  OrigDataType: uint8
T_151: (in (al_225 & 0x01) >>u 0x01 : word16)
  Class: Eq_151
  DataType: Eq_151
  OrigDataType: uint16
T_152: (in 0x00 : byte)
  Class: Eq_151
  DataType: bcu8
  OrigDataType: bcu8
T_153: (in (al_225 & 0x01) >>u 0x01 <u 0x00 : bool)
  Class: Eq_153
  DataType: bool
  OrigDataType: bool
T_154: (in cx_303 : word16)
  Class: Eq_31
  DataType: word16
  OrigDataType: word16
T_155: (in bp_119 : int16)
  Class: Eq_155
  DataType: int16
  OrigDataType: int16
T_156: (in 0x0001 : word16)
  Class: Eq_156
  DataType: word16
  OrigDataType: word16
T_157: (in bp_119 - 0x0001 : word16)
  Class: Eq_155
  DataType: int16
  OrigDataType: word16
T_158: (in 0x0000 : word16)
  Class: Eq_155
  DataType: int16
  OrigDataType: word16
T_159: (in bp_119 != 0x0000 : bool)
  Class: Eq_159
  DataType: bool
  OrigDataType: bool
T_160: (in 0x02 : byte)
  Class: Eq_136
  DataType: byte
  OrigDataType: byte
T_161: (in 0x7D00 : word16)
  Class: Eq_161
  DataType: word16
  OrigDataType: word16
T_162: (in bx_223 + 0x7D00 : word16)
  Class: Eq_162
  DataType: word16
  OrigDataType: word16
T_163: (in Mem220[0x9000:bx_223 + 0x7D00:byte] : byte)
  Class: Eq_163
  DataType: byte
  OrigDataType: byte
T_164: (in (0x9000->*bx_223).b7D00 | al_258 : byte)
  Class: Eq_163
  DataType: byte
  OrigDataType: byte
T_165: (in 0x7D00 : word16)
  Class: Eq_165
  DataType: word16
  OrigDataType: word16
T_166: (in bx_223 + 0x7D00 : word16)
  Class: Eq_166
  DataType: word16
  OrigDataType: word16
T_167: (in Mem266[0x9000:bx_223 + 0x7D00:byte] : byte)
  Class: Eq_163
  DataType: byte
  OrigDataType: byte
T_168: (in 0x7E40 : word16)
  Class: Eq_168
  DataType: word16
  OrigDataType: word16
T_169: (in bx_223 + 0x7E40 : word16)
  Class: Eq_169
  DataType: word16
  OrigDataType: word16
T_170: (in Mem266[0x9000:bx_223 + 0x7E40:byte] : byte)
  Class: Eq_170
  DataType: byte
  OrigDataType: byte
T_171: (in (0x9000->*bx_223).b7E40 | al_258 : byte)
  Class: Eq_170
  DataType: byte
  OrigDataType: byte
T_172: (in 0x7E40 : word16)
  Class: Eq_172
  DataType: word16
  OrigDataType: word16
T_173: (in bx_223 + 0x7E40 : word16)
  Class: Eq_173
  DataType: word16
  OrigDataType: word16
T_174: (in Mem269[0x9000:bx_223 + 0x7E40:byte] : byte)
  Class: Eq_170
  DataType: byte
  OrigDataType: byte
T_175: (in 0x0001 : word16)
  Class: Eq_175
  DataType: word16
  OrigDataType: word16
T_176: (in bx_223 + 0x0001 : word16)
  Class: Eq_128
  DataType: (memptr (ptr Eq_17) Eq_128)
  OrigDataType: word16
T_177: (in 0x0001 : word16)
  Class: Eq_177
  DataType: word16
  OrigDataType: word16
T_178: (in cx_261 - 0x0001 : word16)
  Class: Eq_147
  DataType: word16
  OrigDataType: word16
T_179: (in 0x0000 : word16)
  Class: Eq_147
  DataType: word16
  OrigDataType: word16
T_180: (in cx_261 != 0x0000 : bool)
  Class: Eq_180
  DataType: bool
  OrigDataType: bool
T_181: (in 0x0018 : word16)
  Class: Eq_181
  DataType: word16
  OrigDataType: word16
T_182: (in cx_303 - 0x0018 : word16)
  Class: Eq_182
  DataType: int16
  OrigDataType: int16
T_183: (in (cx_303 - 0x0018) *s bp_119 : int16)
  Class: Eq_40
  DataType: int16
  OrigDataType: int16
T_184: (in 0x0018 : word16)
  Class: Eq_184
  DataType: int16
  OrigDataType: int16
T_185: (in bp_119 *s 0x0018 : int16)
  Class: Eq_45
  DataType: int16
  OrigDataType: int16
T_186: (in 0xFFF4 : word16)
  Class: Eq_186
  DataType: int16
  OrigDataType: int16
T_187: (in bp_119 *s 0xFFF4 : int16)
  Class: Eq_50
  DataType: int16
  OrigDataType: int16
T_188: (in (byte) di : byte)
  Class: Eq_57
  DataType: uint8
  OrigDataType: byte
T_189: (in cx_135 >> 0x0005 : word16)
  Class: Eq_43
  DataType: int16
  OrigDataType: int16
T_190: (in bx_139 >> 0x0005 : word16)
  Class: Eq_48
  DataType: int16
  OrigDataType: int16
T_191: (in dx_142 >> 0x0005 : word16)
  Class: Eq_191
  DataType: int16
  OrigDataType: int16
T_192: (in (dx_142 >> 0x0005) + 0x0024 : word16)
  Class: Eq_55
  DataType: int16
  OrigDataType: word16
T_193: (in al_146 >>u 0x02 : word16)
  Class: Eq_61
  DataType: Eq_61
  OrigDataType: uint16
T_194: (in al_146 >>u 0x02 : word16)
  Class: Eq_194
  DataType: Eq_194
  OrigDataType: (union (int16 u0) (uint16 u1))
T_195: (in 0x03 : byte)
  Class: Eq_194
  DataType: int8
  OrigDataType: int8
T_196: (in al_146 >>u 0x02 < 0x03 : bool)
  Class: Eq_196
  DataType: bool
  OrigDataType: bool
T_197: (in 0x0001 : word16)
  Class: Eq_197
  DataType: word16
  OrigDataType: word16
T_198: (in cx_303 - 0x0001 : word16)
  Class: Eq_31
  DataType: word16
  OrigDataType: word16
T_199: (in 0x0000 : word16)
  Class: Eq_31
  DataType: word16
  OrigDataType: word16
T_200: (in cx != 0x0000 : bool)
  Class: Eq_200
  DataType: bool
  OrigDataType: bool
T_201: (in 0x0020 : word16)
  Class: Eq_155
  DataType: int16
  OrigDataType: word16
T_202: (in 0x0001 : word16)
  Class: Eq_202
  DataType: word16
  OrigDataType: word16
T_203: (in di + 0x0001 : word16)
  Class: Eq_18
  DataType: (memptr (ptr Eq_17) byte)
  OrigDataType: word16
T_204: (in 0x0018 : word16)
  Class: Eq_18
  DataType: (memptr (ptr Eq_17) byte)
  OrigDataType: word16
T_205: (in di != &Eq_17::b0018 : bool)
  Class: Eq_205
  DataType: bool
  OrigDataType: bool
T_206: (in 0x30 : byte)
  Class: Eq_206
  DataType: byte
  OrigDataType: byte
T_207: (in DPB(cx, 0x30, 0, 8) : word16)
  Class: Eq_31
  DataType: word16
  OrigDataType: word16
T_208: (in v40_248 : int16)
  Class: Eq_96
  DataType: int16
  OrigDataType: word16
T_209: (in 0x03D8 : word16)
  Class: Eq_209
  DataType: (memptr (ptr Eq_63) int16)
  OrigDataType: (memptr T_63 (struct (0 T_210 t0000)))
T_210: (in Mem220[ds:0x03D8:word16] : word16)
  Class: Eq_96
  DataType: int16
  OrigDataType: word16
T_211: (in 0x00DC : word16)
  Class: Eq_211
  DataType: word16
  OrigDataType: word16
T_212: (in ds->w03D8 + 0x00DC : word16)
  Class: Eq_96
  DataType: int16
  OrigDataType: word16
T_213: (in 0x03D8 : word16)
  Class: Eq_213
  DataType: (memptr (ptr Eq_63) int16)
  OrigDataType: (memptr T_63 (struct (0 T_214 t0000)))
T_214: (in Mem249[ds:0x03D8:word16] : word16)
  Class: Eq_96
  DataType: int16
  OrigDataType: word16
T_215: (in al_252 : byte)
  Class: Eq_215
  DataType: byte
  OrigDataType: byte
T_216: (in bios_kbd_check_keystroke : ptr32)
  Class: Eq_216
  DataType: (ptr Eq_216)
  OrigDataType: (ptr (fn T_220 (T_219)))
T_217: (in signature of bios_kbd_check_keystroke : void)
  Class: Eq_216
  DataType: (ptr Eq_216)
  OrigDataType: 
T_218: (in alOut : ptr16)
  Class: Eq_218
  DataType: (ptr byte)
  OrigDataType: ptr16
T_219: (in out al_252 : ptr16)
  Class: Eq_218
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_220: (in bios_kbd_check_keystroke(out al_252) : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_221: (in 0x0000 : word16)
  Class: Eq_96
  DataType: int16
  OrigDataType: word16
T_222: (in v40_248 == 0x0000 : bool)
  Class: Eq_222
  DataType: bool
  OrigDataType: bool
*/
typedef Eq_17 Eq_1Eq_17 Eq_1struct Globals {
	Eq_17 * ptrFFF90000;	// FFF90000
	Eq_17 * ptrFFFA00A0;	// FFFA00A0
} Eq_1;

typedef void (Eq_2)(byte);

typedef byte (Eq_9)(word16);

typedef struct Eq_17 {
	byte b0000;	// 0
	byte b0018;	// 18
} Eq_17;

typedef bool (Eq_37)(byte Eq_17::*, byte);

typedef union Eq_61 {
	int8 u0;
	uint16 u1;
} Eq_61;

typedef struct Eq_63 {
	int16 w03D8;	// 3D8
	int16 w03DA;	// 3DA
	int16 w03DC;	// 3DC
	int16 w03DE;	// 3DE
} Eq_63;

typedef bool (Eq_82)(byte Eq_17::*, byte);

typedef real64 (Eq_99)(real64);

typedef real64 (Eq_102)(real64);

typedef struct Eq_128 {	// size: 1 1
	byte b7D00;	// 7D00
	byte b7E40;	// 7E40
} Eq_128;

typedef union Eq_151 {
	uint16 u0;
	bcu8 u1;
} Eq_151;

typedef union Eq_194 {
	int8 u0;
	int16 u1;
	uint16 u2;
} Eq_194;

typedef byte (Eq_216)(byte *);

