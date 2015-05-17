// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_196/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_30) ptrFFFA0000) (C000 (ptr Eq_68) ptrC000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in __syscall : ptr32)
Eq_9: (fn void (word16, byte))
	T_9 (in __outb : ptr32)
Eq_12: (fn void (word16, byte))
	T_12 (in __outb : ptr32)
Eq_15: (fn void (word16, byte))
	T_15 (in __outb : ptr32)
Eq_26: (fn void (byte))
	T_26 (in __syscall : ptr32)
Eq_30: (segment "Eq_30" (FFFFFFFF byte bFFFFFFFF) (0 byte b0000) (FFFF byte bFFFF))
	T_30 (in 0xA000 : selector)
Eq_61: (segment "Eq_61")
	T_61 (in es : (ptr Eq_61))
Eq_68: (segment "Eq_68" (400 word16 w0400))
	T_68 (in 0x0C00 : selector)
Eq_87: (union "Eq_87" (int16 u0) (uint16 u1))
	T_87 (in ax_208 : Eq_87)
	T_92 (in Mem0[ds:0x0200:word16] : word16)
	T_99 (in ((word16) (ds->w0116 *s ds->t0200) >>u 0x0001) + ds->w0204 : word16)
	T_107 (in Mem211[ds:0x0200:word16] : word16)
Eq_88: (segment "Eq_88" (116 int16 w0116) (200 Eq_87 t0200) (204 word16 w0204))
	T_88 (in ds : (ptr Eq_88))
Eq_117: (fn void (byte))
	T_117 (in __syscall : ptr32)
Eq_150: (fn byte (byte))
	T_150 (in __inb : ptr32)
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr Eq_1)
  OrigDataType: (ptr (struct "Globals"))
T_2: (in __syscall : ptr32)
  Class: Eq_2
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (fn T_4 (T_3)))
T_3: (in 0x10 : byte)
  Class: Eq_3
  DataType: byte
  OrigDataType: byte
T_4: (in __syscall(0x10) : void)
  Class: Eq_4
  DataType: void
  OrigDataType: void
T_5: (in ax_11 : word16)
  Class: Eq_5
  DataType: word16
  OrigDataType: word16
T_6: (in 0x4F02 : word16)
  Class: Eq_5
  DataType: word16
  OrigDataType: word16
T_7: (in al_10 : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_8: (in 0x02 : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_9: (in __outb : ptr32)
  Class: Eq_9
  DataType: (ptr Eq_9)
  OrigDataType: (ptr (fn T_11 (T_10, T_7)))
T_10: (in 0x03C9 : word16)
  Class: Eq_10
  DataType: word16
  OrigDataType: word16
T_11: (in __outb(0x03C9, al_10) : void)
  Class: Eq_11
  DataType: void
  OrigDataType: void
T_12: (in __outb : ptr32)
  Class: Eq_12
  DataType: (ptr Eq_12)
  OrigDataType: (ptr (fn T_14 (T_13, T_7)))
T_13: (in 0x03C9 : word16)
  Class: Eq_13
  DataType: word16
  OrigDataType: word16
T_14: (in __outb(0x03C9, al_10) : void)
  Class: Eq_14
  DataType: void
  OrigDataType: void
T_15: (in __outb : ptr32)
  Class: Eq_15
  DataType: (ptr Eq_15)
  OrigDataType: (ptr (fn T_17 (T_16, T_7)))
T_16: (in 0x03C9 : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_17: (in __outb(0x03C9, al_10) : void)
  Class: Eq_17
  DataType: void
  OrigDataType: void
T_18: (in 0x0001 : word16)
  Class: Eq_18
  DataType: word16
  OrigDataType: word16
T_19: (in ax_11 + 0x0001 : word16)
  Class: Eq_5
  DataType: word16
  OrigDataType: word16
T_20: (in (byte) ax_11 : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_21: (in cx : word16)
  Class: Eq_21
  DataType: word16
  OrigDataType: word16
T_22: (in 0x0001 : word16)
  Class: Eq_22
  DataType: word16
  OrigDataType: word16
T_23: (in cx - 0x0001 : word16)
  Class: Eq_21
  DataType: word16
  OrigDataType: word16
T_24: (in 0x0000 : word16)
  Class: Eq_21
  DataType: word16
  OrigDataType: word16
T_25: (in cx != 0x0000 : bool)
  Class: Eq_25
  DataType: bool
  OrigDataType: bool
T_26: (in __syscall : ptr32)
  Class: Eq_26
  DataType: (ptr Eq_26)
  OrigDataType: (ptr (fn T_28 (T_27)))
T_27: (in 0x10 : byte)
  Class: Eq_27
  DataType: byte
  OrigDataType: byte
T_28: (in __syscall(0x10) : void)
  Class: Eq_28
  DataType: void
  OrigDataType: void
T_29: (in al_115 : byte)
  Class: Eq_29
  DataType: byte
  OrigDataType: byte
T_30: (in 0xA000 : selector)
  Class: Eq_30
  DataType: (ptr Eq_30)
  OrigDataType: (ptr (segment))
T_31: (in di_118 : (memptr (ptr Eq_30) byte))
  Class: Eq_31
  DataType: (memptr (ptr Eq_30) byte)
  OrigDataType: (memptr T_30 (struct 0001 (0 T_34 t0000)))
T_32: (in 0x0000 : word16)
  Class: Eq_32
  DataType: word16
  OrigDataType: word16
T_33: (in di_118 + 0x0000 : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_34: (in Mem116[0xA000:di_118 + 0x0000:byte] : byte)
  Class: Eq_29
  DataType: byte
  OrigDataType: byte
T_35: (in di_117 : (memptr (ptr Eq_30) byte))
  Class: Eq_31
  DataType: (memptr (ptr Eq_30) byte)
  OrigDataType: word16
T_36: (in 0x0001 : word16)
  Class: Eq_36
  DataType: word16
  OrigDataType: word16
T_37: (in di_118 + 0x0001 : word16)
  Class: Eq_31
  DataType: (memptr (ptr Eq_30) byte)
  OrigDataType: word16
T_38: (in 0x0000 : word16)
  Class: Eq_31
  DataType: (memptr (ptr Eq_30) byte)
  OrigDataType: word16
T_39: (in di_117 != &Eq_30::b0000 : bool)
  Class: Eq_39
  DataType: bool
  OrigDataType: bool
T_40: (in bx_112 : uint16)
  Class: Eq_40
  DataType: uint16
  OrigDataType: uint16
T_41: (in 0x017C : word16)
  Class: Eq_40
  DataType: uint16
  OrigDataType: cups16
T_42: (in bx_112 >=u 0x017C : bool)
  Class: Eq_42
  DataType: bool
  OrigDataType: bool
T_43: (in cx_110 : uint16)
  Class: Eq_43
  DataType: uint16
  OrigDataType: uint16
T_44: (in 0x0032 : word16)
  Class: Eq_43
  DataType: uint16
  OrigDataType: cups16
T_45: (in cx_110 <u 0x0032 : bool)
  Class: Eq_45
  DataType: bool
  OrigDataType: bool
T_46: (in 0x01F4 : word16)
  Class: Eq_43
  DataType: uint16
  OrigDataType: cups16
T_47: (in cx_110 >=u 0x01F4 : bool)
  Class: Eq_47
  DataType: bool
  OrigDataType: bool
T_48: (in 0x0003 : word16)
  Class: Eq_48
  DataType: uint16
  OrigDataType: uint16
T_49: (in bx_112 >>u 0x0003 : word16)
  Class: Eq_49
  DataType: uint16
  OrigDataType: uint16
T_50: (in (byte) (bx_112 >>u 0x0003) : byte)
  Class: Eq_29
  DataType: byte
  OrigDataType: byte
T_51: (in 0x0050 : word16)
  Class: Eq_40
  DataType: uint16
  OrigDataType: cups16
T_52: (in bx_112 <u 0x0050 : bool)
  Class: Eq_52
  DataType: bool
  OrigDataType: bool
T_53: (in 0x0168 : word16)
  Class: Eq_40
  DataType: uint16
  OrigDataType: cups16
T_54: (in bx_112 >=u 0x0168 : bool)
  Class: Eq_54
  DataType: bool
  OrigDataType: bool
T_55: (in 0x003C : word16)
  Class: Eq_43
  DataType: uint16
  OrigDataType: cups16
T_56: (in cx_110 <u 0x003C : bool)
  Class: Eq_56
  DataType: bool
  OrigDataType: bool
T_57: (in 0x01EA : word16)
  Class: Eq_43
  DataType: uint16
  OrigDataType: cups16
T_58: (in cx_110 >=u 0x01EA : bool)
  Class: Eq_58
  DataType: bool
  OrigDataType: bool
T_59: (in bl_199 : byte)
  Class: Eq_59
  DataType: byte
  OrigDataType: byte
T_60: (in 0x00 : byte)
  Class: Eq_59
  DataType: byte
  OrigDataType: byte
T_61: (in es : (ptr Eq_61))
  Class: Eq_61
  DataType: (ptr Eq_61)
  OrigDataType: (ptr (segment))
T_62: (in 0x0002 : word16)
  Class: Eq_62
  DataType: uint16
  OrigDataType: uint16
T_63: (in bx_112 >>u 0x0002 : word16)
  Class: Eq_63
  DataType: uint16
  OrigDataType: uint16
T_64: (in 0x0007 : word16)
  Class: Eq_64
  DataType: word16
  OrigDataType: word16
T_65: (in bx_112 >>u 0x0002 & 0x0007 : word16)
  Class: Eq_65
  DataType: word16
  OrigDataType: word16
T_66: (in bp : word16)
  Class: Eq_66
  DataType: word16
  OrigDataType: word16
T_67: (in (bx_112 >>u 0x0002 & 0x0007) + bp : word16)
  Class: Eq_67
  DataType: (memptr (ptr Eq_61) byte)
  OrigDataType: (memptr T_61 (struct (0 T_76 t0000)))
T_68: (in 0x0C00 : selector)
  Class: Eq_68
  DataType: (ptr Eq_68)
  OrigDataType: (ptr (segment (400 T_70 t0400)))
T_69: (in 0x0400 : word16)
  Class: Eq_69
  DataType: (memptr (ptr Eq_68) word16)
  OrigDataType: (memptr T_68 (struct (0 T_70 t0000)))
T_70: (in Mem0[0x0C00:0x0400:word16] : word16)
  Class: Eq_70
  DataType: word16
  OrigDataType: word16
T_71: (in bx_112 ^ 0x0C00->w0400 : word16)
  Class: Eq_71
  DataType: word16
  OrigDataType: word16
T_72: (in bx_112 ^ 0x0C00->w0400 ^ cx_110 : word16)
  Class: Eq_72
  DataType: word16
  OrigDataType: word16
T_73: (in 0x03C0 : word16)
  Class: Eq_73
  DataType: word16
  OrigDataType: word16
T_74: (in (bx_112 ^ 0x0C00->w0400 ^ cx_110) & 0x03C0 : word16)
  Class: Eq_74
  DataType: word16
  OrigDataType: word16
T_75: (in (bx_112 >>u 0x0002 & 0x0007) + bp + (((bx_112 ^ Mem0[0x0C00:0x0400:word16]) ^ cx_110) & 0x03C0) : word16)
  Class: Eq_75
  DataType: word16
  OrigDataType: word16
T_76: (in Mem0[es:(bx_112 >>u 0x0002 & 0x0007) + bp + (((bx_112 ^ Mem0[0x0C00:0x0400:word16]) ^ cx_110) & 0x03C0):byte] : byte)
  Class: Eq_76
  DataType: byte
  OrigDataType: byte
T_77: (in 0x01 : byte)
  Class: Eq_77
  DataType: byte
  OrigDataType: byte
T_78: (in 0x0001 : word16)
  Class: Eq_78
  DataType: uint16
  OrigDataType: uint16
T_79: (in cx_110 >>u 0x0001 : word16)
  Class: Eq_79
  DataType: uint16
  OrigDataType: uint16
T_80: (in (byte) (cx_110 >>u 0x0001) : byte)
  Class: Eq_80
  DataType: byte
  OrigDataType: byte
T_81: (in 0x07 : byte)
  Class: Eq_81
  DataType: byte
  OrigDataType: byte
T_82: (in (byte) (cx_110 >>u 0x0001) & 0x07 : byte)
  Class: Eq_82
  DataType: byte
  OrigDataType: byte
T_83: (in 0x01 << ((byte) (cx_110 >>u 0x0001) & 0x07) : word16)
  Class: Eq_83
  DataType: ui16
  OrigDataType: ui16
T_84: (in ((bx_112 >>u 0x0002 & 0x0007) + bp)[(bx_112 ^ 0x0C00->w0400 ^ cx_110) & 0x03C0] & 0x01 << ((byte) (cx_110 >>u 0x0001) & 0x07) : byte)
  Class: Eq_84
  DataType: byte
  OrigDataType: byte
T_85: (in 0x00 : byte)
  Class: Eq_84
  DataType: byte
  OrigDataType: byte
T_86: (in (((bx_112 >>u 0x0002 & 0x0007) + bp)[(bx_112 ^ 0x0C00->w0400 ^ cx_110) & 0x03C0] & 0x01 << ((byte) (cx_110 >>u 0x0001) & 0x07)) == 0x00 : bool)
  Class: Eq_86
  DataType: bool
  OrigDataType: bool
T_87: (in ax_208 : Eq_87)
  Class: Eq_87
  DataType: Eq_87
  OrigDataType: uint16
T_88: (in ds : (ptr Eq_88))
  Class: Eq_88
  DataType: (ptr Eq_88)
  OrigDataType: (ptr (segment (116 T_90 t0116) (200 T_87 t0200) (204 T_98 t0204)))
T_89: (in 0x0116 : word16)
  Class: Eq_89
  DataType: (memptr (ptr Eq_88) int16)
  OrigDataType: (memptr T_88 (struct (0 T_90 t0000)))
T_90: (in Mem0[ds:0x0116:word16] : word16)
  Class: Eq_90
  DataType: int16
  OrigDataType: int16
T_91: (in 0x0200 : word16)
  Class: Eq_91
  DataType: (memptr (ptr Eq_88) Eq_87)
  OrigDataType: (memptr T_88 (struct (0 T_92 t0000)))
T_92: (in Mem0[ds:0x0200:word16] : word16)
  Class: Eq_87
  DataType: Eq_87
  OrigDataType: int16
T_93: (in ds->w0116 *s ds->t0200 : int32)
  Class: Eq_93
  DataType: int32
  OrigDataType: int32
T_94: (in (word16) (ds->w0116 *s ds->t0200) : word16)
  Class: Eq_94
  DataType: uint16
  OrigDataType: uint16
T_95: (in 0x0001 : word16)
  Class: Eq_95
  DataType: uint16
  OrigDataType: uint16
T_96: (in (word16) (ds->w0116 *s ds->t0200) >>u 0x0001 : word16)
  Class: Eq_96
  DataType: uint16
  OrigDataType: uint16
T_97: (in 0x0204 : word16)
  Class: Eq_97
  DataType: (memptr (ptr Eq_88) word16)
  OrigDataType: (memptr T_88 (struct (0 T_98 t0000)))
T_98: (in Mem0[ds:0x0204:word16] : word16)
  Class: Eq_98
  DataType: word16
  OrigDataType: word16
T_99: (in ((word16) (ds->w0116 *s ds->t0200) >>u 0x0001) + ds->w0204 : word16)
  Class: Eq_87
  DataType: Eq_87
  OrigDataType: word16
T_100: (in 0x0204 : word16)
  Class: Eq_100
  DataType: (memptr (ptr Eq_88) word16)
  OrigDataType: (memptr T_88 (struct (0 T_101 t0000)))
T_101: (in Mem0[ds:0x0204:word16] : word16)
  Class: Eq_98
  DataType: word16
  OrigDataType: word16
T_102: (in 0x0001 : word16)
  Class: Eq_102
  DataType: word16
  OrigDataType: word16
T_103: (in ds->w0204 - 0x0001 : word16)
  Class: Eq_98
  DataType: word16
  OrigDataType: word16
T_104: (in 0x0204 : word16)
  Class: Eq_104
  DataType: (memptr (ptr Eq_88) word16)
  OrigDataType: (memptr T_88 (struct (0 T_105 t0000)))
T_105: (in Mem210[ds:0x0204:word16] : word16)
  Class: Eq_98
  DataType: word16
  OrigDataType: word16
T_106: (in 0x0200 : word16)
  Class: Eq_106
  DataType: (memptr (ptr Eq_88) Eq_87)
  OrigDataType: (memptr T_88 (struct (0 T_107 t0000)))
T_107: (in Mem211[ds:0x0200:word16] : word16)
  Class: Eq_87
  DataType: Eq_87
  OrigDataType: word16
T_108: (in 0x000C : word16)
  Class: Eq_108
  DataType: uint16
  OrigDataType: uint16
T_109: (in ax_208 >>u 0x000C : word16)
  Class: Eq_109
  DataType: uint16
  OrigDataType: uint16
T_110: (in (byte) (ax_208 >>u 0x000C) : byte)
  Class: Eq_110
  DataType: byte
  OrigDataType: byte
T_111: (in (byte) (ax_208 >>u 0x000C) + bl_199 : byte)
  Class: Eq_29
  DataType: byte
  OrigDataType: byte
T_112: (in 0x10 : byte)
  Class: Eq_59
  DataType: byte
  OrigDataType: byte
T_113: (in 0x0001 : word16)
  Class: Eq_113
  DataType: word16
  OrigDataType: word16
T_114: (in cx_110 - 0x0001 : word16)
  Class: Eq_43
  DataType: uint16
  OrigDataType: word16
T_115: (in 0x0000 : word16)
  Class: Eq_43
  DataType: uint16
  OrigDataType: word16
T_116: (in cx_110 != 0x0000 : bool)
  Class: Eq_116
  DataType: bool
  OrigDataType: bool
T_117: (in __syscall : ptr32)
  Class: Eq_117
  DataType: (ptr Eq_117)
  OrigDataType: (ptr (fn T_119 (T_118)))
T_118: (in 0x10 : byte)
  Class: Eq_118
  DataType: byte
  OrigDataType: byte
T_119: (in __syscall(0x10) : void)
  Class: Eq_119
  DataType: void
  OrigDataType: void
T_120: (in bx_84 : word16)
  Class: Eq_120
  DataType: word16
  OrigDataType: word16
T_121: (in 0x00F0 : word16)
  Class: Eq_121
  DataType: word16
  OrigDataType: word16
T_122: (in bx_112 - 0x00F0 : word16)
  Class: Eq_120
  DataType: word16
  OrigDataType: word16
T_123: (in bx_87 : int16)
  Class: Eq_123
  DataType: int16
  OrigDataType: int16
T_124: (in (byte) bx_84 : byte)
  Class: Eq_124
  DataType: byte
  OrigDataType: byte
T_125: (in 0x01 : byte)
  Class: Eq_125
  DataType: byte
  OrigDataType: byte
T_126: (in (byte) bx_84 | 0x01 : byte)
  Class: Eq_126
  DataType: byte
  OrigDataType: byte
T_127: (in DPB(bx_84, (byte) bx_84 | 0x01, 0, 8) : word16)
  Class: Eq_123
  DataType: int16
  OrigDataType: word16
T_128: (in 63 : int32)
  Class: Eq_128
  DataType: int32
  OrigDataType: int32
T_129: (in 63 % bx_87 : int16)
  Class: Eq_129
  DataType: int16
  OrigDataType: int16
T_130: (in 0x003F : word16)
  Class: Eq_130
  DataType: word16
  OrigDataType: word16
T_131: (in SEQ(63 % bx_87, 0x003F) : int32)
  Class: Eq_131
  DataType: int32
  OrigDataType: int32
T_132: (in SEQ(63 % bx_87, 0x003F) / bx_87 : int16)
  Class: Eq_132
  DataType: int16
  OrigDataType: int16
T_133: (in (byte) (SEQ(63 % bx_87, 0x003F) / bx_87) : byte)
  Class: Eq_133
  DataType: byte
  OrigDataType: byte
T_134: (in 0x3F : byte)
  Class: Eq_134
  DataType: byte
  OrigDataType: byte
T_135: (in (byte) (SEQ(63 % bx_87, 0x003F) / bx_87) & 0x3F : byte)
  Class: Eq_135
  DataType: byte
  OrigDataType: byte
T_136: (in 0x3F : byte)
  Class: Eq_136
  DataType: byte
  OrigDataType: byte
T_137: (in (byte) (SEQ(63 % bx_87, 0x003F) / bx_87) & 0x3F ^ 0x3F : byte)
  Class: Eq_29
  DataType: byte
  OrigDataType: byte
T_138: (in 0x003C : word16)
  Class: Eq_40
  DataType: uint16
  OrigDataType: cups16
T_139: (in bx_112 <u 0x003C : bool)
  Class: Eq_139
  DataType: bool
  OrigDataType: bool
T_140: (in 0x0001 : word16)
  Class: Eq_140
  DataType: word16
  OrigDataType: word16
T_141: (in bx_112 - 0x0001 : word16)
  Class: Eq_40
  DataType: uint16
  OrigDataType: word16
T_142: (in 0x0000 : word16)
  Class: Eq_40
  DataType: uint16
  OrigDataType: word16
T_143: (in bx_112 != 0x0000 : bool)
  Class: Eq_143
  DataType: bool
  OrigDataType: bool
T_144: (in 0x0280 : word16)
  Class: Eq_43
  DataType: uint16
  OrigDataType: word16
T_145: (in 0x0400 : word16)
  Class: Eq_145
  DataType: (memptr (ptr Eq_68) word16)
  OrigDataType: (memptr T_68 (struct (0 T_70 t0000)))
T_146: (in Mem116[0x0C00:0x0400:word16] : word16)
  Class: Eq_70
  DataType: word16
  OrigDataType: word16
T_147: (in 0x0001 : word16)
  Class: Eq_147
  DataType: word16
  OrigDataType: word16
T_148: (in 0x0C00->w0400 + 0x0001 : word16)
  Class: Eq_70
  DataType: word16
  OrigDataType: word16
T_149: (in Mem141[0x0C00:0x0400:word16] : word16)
  Class: Eq_70
  DataType: word16
  OrigDataType: word16
T_150: (in __inb : ptr32)
  Class: Eq_150
  DataType: (ptr Eq_150)
  OrigDataType: (ptr (fn T_152 (T_151)))
T_151: (in 0x60 : byte)
  Class: Eq_151
  DataType: byte
  OrigDataType: byte
T_152: (in __inb(0x60) : byte)
  Class: Eq_152
  DataType: byte
  OrigDataType: byte
T_153: (in 0x01 : byte)
  Class: Eq_152
  DataType: byte
  OrigDataType: byte
T_154: (in __inb(0x60) != 0x01 : bool)
  Class: Eq_154
  DataType: bool
  OrigDataType: bool
T_155: (in 0xFFFF : word16)
  Class: Eq_31
  DataType: (memptr (ptr Eq_30) byte)
  OrigDataType: word16
T_156: (in 0x01E0 : word16)
  Class: Eq_40
  DataType: uint16
  OrigDataType: word16
*/
typedef Eq_30 Eq_1Eq_68 Eq_1struct Globals {
	Eq_30 * ptrFFFA0000;	// FFFA0000
	Eq_68 * ptrC000;	// C000
} Eq_1;

typedef void (Eq_2)(byte);

typedef void (Eq_9)(word16, byte);

typedef void (Eq_12)(word16, byte);

typedef void (Eq_15)(word16, byte);

typedef void (Eq_26)(byte);

typedef struct Eq_30 {
	byte bFFFFFFFF;	// FFFFFFFF
	byte b0000;	// 0
	byte bFFFF;	// FFFF
} Eq_30;

typedef struct Eq_61 {
} Eq_61;

typedef struct Eq_68 {
	word16 w0400;	// 400
} Eq_68;

typedef union Eq_87 {
	int16 u0;
	uint16 u1;
} Eq_87;

typedef Eq_87 Eq_88struct Eq_88 {
	int16 w0116;	// 116
	Eq_87 t0200;	// 200
	word16 w0204;	// 204
} Eq_88;

typedef void (Eq_117)(byte);

typedef byte (Eq_150)(byte);

