// subject.h
// Generated on TIMESTAMP by decompiling from_dcc/benchmul/ia32_mz_from_dcc_long/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr (struct "Globals"))
  OrigDataType: (ptr (struct "Globals"))
T_2: (in fp : ptr16)
  Class: Eq_2
  DataType: ptr16
  OrigDataType: ptr16
T_3: (in sp : word16)
  Class: Eq_2
  DataType: (union (uint16 u0) ((memptr T_28 (struct (0 T_2 t0000))) u1) ((memptr T_31 (struct (0 T_309 t0000))) u2) ((union (ptr16 u0) ((memptr T_31 (struct (0 T_98 t0000) (2 T_63 t0002))) u1)) u3))
  OrigDataType: (union (uint16 u0) ((memptr T_28 (struct (0 T_2 t0000))) u1) ((memptr T_31 (struct (0 T_309 t0000))) u2) ((union (ptr16 u0) ((memptr T_31 (struct (0 T_98 t0000) (2 T_63 t0002))) u1)) u3))
T_4: (in 0x09DC : word16)
  Class: Eq_4
  DataType: word16
  OrigDataType: word16
T_5: (in dx : word16)
  Class: Eq_4
  DataType: (ptr (segment (8A T_47 t008A) (8C T_35 t008C) (8E T_143 t008E) (90 T_33 t0090) (92 T_30 t0092) (96 T_38 t0096) (AC T_37 t00AC)))
  OrigDataType: (ptr (segment (8A T_47 t008A) (8C T_35 t008C) (8E T_143 t008E) (90 T_33 t0090) (92 T_30 t0092) (96 T_38 t0096) (AC T_37 t00AC)))
T_6: (in 0x09DC : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_7: (in 0x0800 : selector)
  Class: Eq_7
  DataType: (ptr (segment (1F8 T_2 t01F8)))
  OrigDataType: (ptr (segment (1F8 T_2 t01F8)))
T_8: (in 0x01F8 : word16)
  Class: Eq_8
  DataType: (memptr T_7 (struct (0 T_9 t0000)))
  OrigDataType: (memptr T_7 (struct (0 T_9 t0000)))
T_9: (in Mem0[0x0800:0x01F8:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_10: (in 0x30 : byte)
  Class: Eq_10
  DataType: byte
  OrigDataType: byte
T_11: (in ah : byte)
  Class: Eq_10
  DataType: byte
  OrigDataType: byte
T_12: (in msdos_get_dos_version : ptr32)
  Class: Eq_12
  DataType: (ptr (fn T_16 (T_15)))
  OrigDataType: (ptr (fn T_16 (T_15)))
T_13: (in signature of msdos_get_dos_version : void)
  Class: Eq_12
  DataType: 
  OrigDataType: 
T_14: (in ahOut : ptr16)
  Class: Eq_14
  DataType: ptr16
  OrigDataType: ptr16
T_15: (in out ah : ptr16)
  Class: Eq_14
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_16: (in msdos_get_dos_version(out ah) : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_17: (in al : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_18: (in ax : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_19: (in DPB(ax, al, 0, 8) : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_20: (in ds : selector)
  Class: Eq_2
  DataType: (ptr (segment (2 T_22 t0002) (2C T_25 t002C) (84 T_286 t0084) (86 T_279 t0086) (88 T_272 t0088) (98 T_263 t0098) (9A T_265 t009A) (5DC T_240 t05DC) (5E0 T_267 t05E0)))
  OrigDataType: (ptr (segment (2 T_22 t0002) (2C T_25 t002C) (84 T_286 t0084) (86 T_279 t0086) (88 T_272 t0088) (98 T_263 t0098) (9A T_265 t009A) (5DC T_240 t05DC) (5E0 T_267 t05E0)))
T_21: (in 0x0002 : word16)
  Class: Eq_21
  DataType: (memptr T_20 (struct (0 T_22 t0000)))
  OrigDataType: (memptr T_20 (struct (0 T_22 t0000)))
T_22: (in Mem0[ds:0x0002:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_23: (in bp : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_24: (in 0x002C : word16)
  Class: Eq_24
  DataType: (memptr T_20 (struct (0 T_25 t0000)))
  OrigDataType: (memptr T_20 (struct (0 T_25 t0000)))
T_25: (in Mem0[ds:0x002C:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_26: (in bx : word16)
  Class: Eq_2
  DataType: (union (uint16 u0) ((memptr T_28 (struct (0 T_2 t0000))) u1) ((memptr T_31 (struct (0 T_309 t0000))) u2) ((union (ptr16 u0) ((memptr T_31 (struct (0 T_98 t0000) (2 T_63 t0002))) u1)) u3))
  OrigDataType: (union (uint16 u0) ((memptr T_28 (struct (0 T_2 t0000))) u1) ((memptr T_31 (struct (0 T_309 t0000))) u2) ((union (ptr16 u0) ((memptr T_31 (struct (0 T_98 t0000) (2 T_63 t0002))) u1)) u3))
T_27: (in 0x09DC : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_28: (in 0x09DC : selector)
  Class: Eq_4
  DataType: (ptr (segment (8A T_47 t008A) (8C T_35 t008C) (8E T_143 t008E) (90 T_2 t0090) (92 T_30 t0092) (96 T_38 t0096) (A4 T_200 t00A4) (A8 T_202 t00A8) (AC T_37 t00AC) (23C T_164 t023C) (23E T_2 t023E)))
  OrigDataType: (ptr (segment (8A T_47 t008A) (8C T_35 t008C) (8E T_143 t008E) (90 T_2 t0090) (92 T_30 t0092) (96 T_38 t0096) (A4 T_200 t00A4) (A8 T_202 t00A8) (AC T_37 t00AC) (23C T_164 t023C) (23E T_2 t023E)))
T_29: (in 0x0092 : word16)
  Class: Eq_29
  DataType: (memptr T_28 (struct (0 T_30 t0000)))
  OrigDataType: (memptr T_28 (struct (0 T_30 t0000)))
T_30: (in Mem0[0x09DC:0x0092:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_31: (in es : selector)
  Class: Eq_2
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_32: (in 0x0090 : word16)
  Class: Eq_32
  DataType: (memptr T_28 (struct (0 T_33 t0000)))
  OrigDataType: (memptr T_28 (struct (0 T_33 t0000)))
T_33: (in Mem0[0x09DC:0x0090:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_34: (in 0x008C : word16)
  Class: Eq_34
  DataType: (memptr T_28 (struct (0 T_35 t0000)))
  OrigDataType: (memptr T_28 (struct (0 T_35 t0000)))
T_35: (in Mem0[0x09DC:0x008C:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_36: (in 0x00AC : word16)
  Class: Eq_36
  DataType: (memptr T_28 (struct (0 T_37 t0000)))
  OrigDataType: (memptr T_28 (struct (0 T_37 t0000)))
T_37: (in Mem0[0x09DC:0x00AC:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_38: (in 0xFFFF : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_39: (in 0x0096 : word16)
  Class: Eq_39
  DataType: (memptr T_28 (struct (0 T_40 t0000)))
  OrigDataType: (memptr T_28 (struct (0 T_40 t0000)))
T_40: (in Mem0[0x09DC:0x0096:word16] : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_41: (in fn0800_0162 : ptr32)
  Class: Eq_41
  DataType: (ptr (fn T_45 (T_17, T_20)))
  OrigDataType: (ptr (fn T_45 (T_17, T_20)))
T_42: (in signature of fn0800_0162 : void)
  Class: Eq_41
  DataType: 
  OrigDataType: 
T_43: (in al : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_44: (in ds : selector)
  Class: Eq_2
  DataType: (ptr (segment (74 T_383 t0074) (76 T_386 t0076) (78 T_392 t0078) (7A T_395 t007A) (7C T_401 t007C) (7E T_404 t007E) (80 T_410 t0080) (82 T_413 t0082)))
  OrigDataType: (ptr (segment (74 T_383 t0074) (76 T_386 t0076) (78 T_392 t0078) (7A T_395 t007A) (7C T_401 t007C) (7E T_404 t007E) (80 T_410 t0080) (82 T_413 t0082)))
T_45: (in fn0800_0162(al, ds) : void)
  Class: Eq_45
  DataType: void
  OrigDataType: void
T_46: (in 0x008A : word16)
  Class: Eq_46
  DataType: (memptr T_28 (struct (0 T_47 t0000)))
  OrigDataType: (memptr T_28 (struct (0 T_47 t0000)))
T_47: (in Mem0[0x09DC:0x008A:segptr32] : segptr32)
  Class: Eq_47
  DataType: segptr32
  OrigDataType: segptr32
T_48: (in es_di : ptr32)
  Class: Eq_47
  DataType: (union (ptr32 u0) (segptr32 u1))
  OrigDataType: (union (ptr32 u0) (segptr32 u1))
T_49: (in SLICE(es_di, selector, 16) : selector)
  Class: Eq_2
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_50: (in (word16) es_di : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_51: (in di : word16)
  Class: Eq_2
  DataType: (union (uint16 u0) ((memptr T_28 (struct (0 T_2 t0000))) u1) ((memptr T_31 (struct (0 T_309 t0000))) u2) ((union (ptr16 u0) ((memptr T_31 (struct (0 T_98 t0000) (2 T_63 t0002))) u1)) u3))
  OrigDataType: (union (uint16 u0) ((memptr T_28 (struct (0 T_2 t0000))) u1) ((memptr T_31 (struct (0 T_309 t0000))) u2) ((union (ptr16 u0) ((memptr T_31 (struct (0 T_98 t0000) (2 T_63 t0002))) u1)) u3))
T_52: (in (byte) ax : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_53: (in 0x7FFF : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_54: (in cx : word16)
  Class: Eq_47
  DataType: int16
  OrigDataType: int16
T_55: (in SLICE(cx, byte, 8) : byte)
  Class: Eq_55
  DataType: byte
  OrigDataType: byte
T_56: (in ch : byte)
  Class: Eq_55
  DataType: byte
  OrigDataType: byte
T_57: (in (byte) cx : byte)
  Class: Eq_57
  DataType: byte
  OrigDataType: byte
T_58: (in cl : byte)
  Class: Eq_57
  DataType: byte
  OrigDataType: byte
T_59: (in 0x0000 : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_60: (in cx == 0x0000 : bool)
  Class: Eq_60
  DataType: bool
  OrigDataType: bool
T_61: (in 0x0002 : word16)
  Class: Eq_61
  DataType: word16
  OrigDataType: word16
T_62: (in di + 0x0002 : word16)
  Class: Eq_62
  DataType: word16
  OrigDataType: word16
T_63: (in Mem0[es:di + 0x0002:word16] : word16)
  Class: Eq_4
  DataType: word16
  OrigDataType: word16
T_64: (in (byte) dx : byte)
  Class: Eq_64
  DataType: byte
  OrigDataType: byte
T_65: (in dl : byte)
  Class: Eq_64
  DataType: byte
  OrigDataType: byte
T_66: (in SLICE(dx, byte, 8) : byte)
  Class: Eq_66
  DataType: byte
  OrigDataType: byte
T_67: (in dh : byte)
  Class: Eq_66
  DataType: byte
  OrigDataType: byte
T_68: (in 0x3D : byte)
  Class: Eq_68
  DataType: byte
  OrigDataType: byte
T_69: (in dl - 0x3D : byte)
  Class: Eq_69
  DataType: byte
  OrigDataType: byte
T_70: (in cond(dl - 0x3D) : byte)
  Class: Eq_70
  DataType: byte
  OrigDataType: byte
T_71: (in SCZO : byte)
  Class: Eq_70
  DataType: byte
  OrigDataType: byte
T_72: (in Z : byte)
  Class: Eq_70
  DataType: byte
  OrigDataType: byte
T_73: (in Test(NE,Z) : bool)
  Class: Eq_73
  DataType: bool
  OrigDataType: bool
T_74: (in 0xDF : byte)
  Class: Eq_74
  DataType: byte
  OrigDataType: byte
T_75: (in dh & 0xDF : byte)
  Class: Eq_66
  DataType: byte
  OrigDataType: byte
T_76: (in 0x0096 : word16)
  Class: Eq_76
  DataType: (memptr T_28 (struct (0 T_38 t0000)))
  OrigDataType: (memptr T_28 (struct (0 T_38 t0000)))
T_77: (in Mem0[0x09DC:0x0096:word16] : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_78: (in 0x0001 : word16)
  Class: Eq_78
  DataType: word16
  OrigDataType: word16
T_79: (in Mem0[0x09DC:0x0096:word16] + 0x0001 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_80: (in v20 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_81: (in Mem0[0x09DC:0x0096:word16] : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_82: (in 0x59 : byte)
  Class: Eq_82
  DataType: byte
  OrigDataType: byte
T_83: (in dh - 0x59 : byte)
  Class: Eq_83
  DataType: byte
  OrigDataType: byte
T_84: (in cond(dh - 0x59) : byte)
  Class: Eq_70
  DataType: byte
  OrigDataType: byte
T_85: (in Test(NE,Z) : bool)
  Class: Eq_85
  DataType: bool
  OrigDataType: bool
T_86: (in 0x0096 : word16)
  Class: Eq_86
  DataType: (memptr T_28 (struct (0 T_38 t0000)))
  OrigDataType: (memptr T_28 (struct (0 T_38 t0000)))
T_87: (in Mem0[0x09DC:0x0096:word16] : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_88: (in 0x0001 : word16)
  Class: Eq_88
  DataType: word16
  OrigDataType: word16
T_89: (in Mem0[0x09DC:0x0096:word16] + 0x0001 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_90: (in v21 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_91: (in Mem0[0x09DC:0x0096:word16] : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_92: (in cond(v21) : byte)
  Class: Eq_92
  DataType: byte
  OrigDataType: byte
T_93: (in SZO : byte)
  Class: Eq_92
  DataType: byte
  OrigDataType: byte
T_94: (in 0x0000 : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_95: (in cx == 0x0000 : bool)
  Class: Eq_95
  DataType: bool
  OrigDataType: bool
T_96: (in 0x0000 : word16)
  Class: Eq_96
  DataType: word16
  OrigDataType: word16
T_97: (in di + 0x0000 : word16)
  Class: Eq_97
  DataType: word16
  OrigDataType: word16
T_98: (in Mem0[es:di + 0x0000:byte] : byte)
  Class: Eq_98
  DataType: byte
  OrigDataType: byte
T_99: (in al - Mem0[es:di + 0x0000:byte] : byte)
  Class: Eq_99
  DataType: byte
  OrigDataType: byte
T_100: (in cond(al - Mem0[es:di + 0x0000:byte]) : byte)
  Class: Eq_70
  DataType: byte
  OrigDataType: byte
T_101: (in 0x0001 : word16)
  Class: Eq_101
  DataType: word16
  OrigDataType: word16
T_102: (in di + 0x0001 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_103: (in SEQ(es, di) : ptr32)
  Class: Eq_47
  DataType: ptr32
  OrigDataType: ptr32
T_104: (in 0x0001 : word16)
  Class: Eq_104
  DataType: word16
  OrigDataType: word16
T_105: (in cx - 0x0001 : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_106: (in SLICE(cx, byte, 8) : byte)
  Class: Eq_55
  DataType: byte
  OrigDataType: byte
T_107: (in (byte) cx : byte)
  Class: Eq_57
  DataType: byte
  OrigDataType: byte
T_108: (in Test(NE,Z) : bool)
  Class: Eq_108
  DataType: bool
  OrigDataType: bool
T_109: (in fn0800_01E2 : ptr32)
  Class: Eq_109
  DataType: (ptr (fn T_113 (T_112)))
  OrigDataType: (ptr (fn T_113 (T_112)))
T_110: (in signature of fn0800_01E2 : void)
  Class: Eq_109
  DataType: 
  OrigDataType: 
T_111: (in si : word16)
  Class: Eq_111
  DataType: word16
  OrigDataType: word16
T_112: (in si : word16)
  Class: Eq_111
  DataType: word16
  OrigDataType: word16
T_113: (in fn0800_01E2(si) : void)
  Class: Eq_113
  DataType: void
  OrigDataType: void
T_114: (in 0x0001 : word16)
  Class: Eq_114
  DataType: word16
  OrigDataType: word16
T_115: (in bx + 0x0001 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_116: (in 0x0000 : word16)
  Class: Eq_116
  DataType: word16
  OrigDataType: word16
T_117: (in di + 0x0000 : word16)
  Class: Eq_117
  DataType: word16
  OrigDataType: word16
T_118: (in Mem0[es:di + 0x0000:byte] : byte)
  Class: Eq_98
  DataType: byte
  OrigDataType: byte
T_119: (in Mem0[es:di + 0x0000:byte] - al : byte)
  Class: Eq_119
  DataType: byte
  OrigDataType: byte
T_120: (in cond(Mem0[es:di + 0x0000:byte] - al) : byte)
  Class: Eq_70
  DataType: byte
  OrigDataType: byte
T_121: (in Test(NE,Z) : bool)
  Class: Eq_121
  DataType: bool
  OrigDataType: bool
T_122: (in 0x0000 : word16)
  Class: Eq_122
  DataType: word16
  OrigDataType: word16
T_123: (in di + 0x0000 : word16)
  Class: Eq_123
  DataType: word16
  OrigDataType: word16
T_124: (in Mem0[es:di + 0x0000:word16] : word16)
  Class: Eq_98
  DataType: word16
  OrigDataType: word16
T_125: (in 0x3738 : word16)
  Class: Eq_125
  DataType: word16
  OrigDataType: word16
T_126: (in Mem0[es:di + 0x0000:word16] - 0x3738 : word16)
  Class: Eq_126
  DataType: word16
  OrigDataType: word16
T_127: (in cond(Mem0[es:di + 0x0000:word16] - 0x3738) : byte)
  Class: Eq_70
  DataType: byte
  OrigDataType: byte
T_128: (in Test(NE,Z) : bool)
  Class: Eq_128
  DataType: bool
  OrigDataType: bool
T_129: (in 0x80 : byte)
  Class: Eq_129
  DataType: byte
  OrigDataType: byte
T_130: (in ch | 0x80 : byte)
  Class: Eq_55
  DataType: byte
  OrigDataType: byte
T_131: (in DPB(cx, ch, 8, 8) : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_132: (in -cx : word16)
  Class: Eq_47
  DataType: int16
  OrigDataType: int16
T_133: (in 0x008A : word16)
  Class: Eq_133
  DataType: (memptr T_28 (struct (0 T_134 t0000)))
  OrigDataType: (memptr T_28 (struct (0 T_134 t0000)))
T_134: (in Mem0[0x09DC:0x008A:word16] : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_135: (in 0x0001 : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_136: (in (byte) cx : byte)
  Class: Eq_57
  DataType: byte
  OrigDataType: byte
T_137: (in bx << cl : word16)
  Class: Eq_2
  DataType: ui16
  OrigDataType: ui16
T_138: (in 0x0008 : word16)
  Class: Eq_138
  DataType: word16
  OrigDataType: word16
T_139: (in bx + 0x0008 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_140: (in 0xFFF8 : word16)
  Class: Eq_140
  DataType: word16
  OrigDataType: word16
T_141: (in bx & 0xFFF8 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_142: (in 0x008E : word16)
  Class: Eq_142
  DataType: (memptr T_28 (struct (0 T_143 t0000)))
  OrigDataType: (memptr T_28 (struct (0 T_143 t0000)))
T_143: (in Mem0[0x09DC:0x008E:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_144: (in bp - 0x09DC : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_145: (in 0x023E : word16)
  Class: Eq_145
  DataType: (memptr T_28 (struct (0 T_146 t0000)))
  OrigDataType: (memptr T_28 (struct (0 T_146 t0000)))
T_146: (in Mem0[0x09DC:0x023E:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_147: (in SEQ(es, di) : ptr32)
  Class: Eq_47
  DataType: ptr32
  OrigDataType: ptr32
T_148: (in 0x0200 : word16)
  Class: Eq_148
  DataType: word16
  OrigDataType: word16
T_149: (in di - 0x0200 : word16)
  Class: Eq_149
  DataType: word16
  OrigDataType: word16
T_150: (in cond(di - 0x0200) : byte)
  Class: Eq_70
  DataType: byte
  OrigDataType: byte
T_151: (in C : byte)
  Class: Eq_70
  DataType: byte
  OrigDataType: byte
T_152: (in Test(UGE,C) : bool)
  Class: Eq_152
  DataType: bool
  OrigDataType: bool
T_153: (in 0x0630 : word16)
  Class: Eq_153
  DataType: word16
  OrigDataType: word16
T_154: (in di + 0x0630 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_155: (in SEQ(es, di) : ptr32)
  Class: Eq_47
  DataType: ptr32
  OrigDataType: ptr32
T_156: (in cond(di) : byte)
  Class: Eq_70
  DataType: byte
  OrigDataType: byte
T_157: (in Test(ULT,C) : bool)
  Class: Eq_157
  DataType: bool
  OrigDataType: bool
T_158: (in 0x0200 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_159: (in SEQ(es, di) : ptr32)
  Class: Eq_47
  DataType: ptr32
  OrigDataType: ptr32
T_160: (in 0x0200 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_161: (in 0x023E : word16)
  Class: Eq_161
  DataType: (memptr T_28 (struct (0 T_162 t0000)))
  OrigDataType: (memptr T_28 (struct (0 T_162 t0000)))
T_162: (in Mem0[0x09DC:0x023E:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_163: (in 0x023C : word16)
  Class: Eq_163
  DataType: (memptr T_28 (struct (0 T_164 t0000)))
  OrigDataType: (memptr T_28 (struct (0 T_164 t0000)))
T_164: (in Mem0[0x09DC:0x023C:word16] : word16)
  Class: Eq_164
  DataType: word16
  OrigDataType: word16
T_165: (in di + Mem0[0x09DC:0x023C:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_166: (in SEQ(es, di) : ptr32)
  Class: Eq_47
  DataType: ptr32
  OrigDataType: ptr32
T_167: (in cond(di) : byte)
  Class: Eq_70
  DataType: byte
  OrigDataType: byte
T_168: (in Test(ULT,C) : bool)
  Class: Eq_168
  DataType: bool
  OrigDataType: bool
T_169: (in 0x04 : byte)
  Class: Eq_57
  DataType: byte
  OrigDataType: byte
T_170: (in 0x04 : byte)
  Class: Eq_170
  DataType: uint8
  OrigDataType: uint8
T_171: (in di >>u 0x04 : word16)
  Class: Eq_2
  DataType: uint16
  OrigDataType: uint16
T_172: (in 0x0001 : word16)
  Class: Eq_172
  DataType: word16
  OrigDataType: word16
T_173: (in di + 0x0001 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_174: (in SEQ(es, di) : ptr32)
  Class: Eq_47
  DataType: ptr32
  OrigDataType: ptr32
T_175: (in bp - di : word16)
  Class: Eq_175
  DataType: word16
  OrigDataType: word16
T_176: (in cond(bp - di) : byte)
  Class: Eq_70
  DataType: byte
  OrigDataType: byte
T_177: (in Test(ULT,C) : bool)
  Class: Eq_177
  DataType: bool
  OrigDataType: bool
T_178: (in 0x023E : word16)
  Class: Eq_178
  DataType: (memptr T_28 (struct (0 T_179 t0000)))
  OrigDataType: (memptr T_28 (struct (0 T_179 t0000)))
T_179: (in Mem0[0x09DC:0x023E:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_180: (in 0x0000 : word16)
  Class: Eq_180
  DataType: word16
  OrigDataType: word16
T_181: (in Mem0[0x09DC:0x023E:word16] - 0x0000 : word16)
  Class: Eq_181
  DataType: word16
  OrigDataType: word16
T_182: (in cond(Mem0[0x09DC:0x023E:word16] - 0x0000) : byte)
  Class: Eq_70
  DataType: byte
  OrigDataType: byte
T_183: (in Test(EQ,Z) : bool)
  Class: Eq_183
  DataType: bool
  OrigDataType: bool
T_184: (in 0x1000 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_185: (in SEQ(es, di) : ptr32)
  Class: Eq_47
  DataType: ptr32
  OrigDataType: ptr32
T_186: (in 0x1000 : word16)
  Class: Eq_186
  DataType: word16
  OrigDataType: word16
T_187: (in bp - 0x1000 : word16)
  Class: Eq_187
  DataType: word16
  OrigDataType: word16
T_188: (in cond(bp - 0x1000) : byte)
  Class: Eq_70
  DataType: byte
  OrigDataType: byte
T_189: (in CZ : byte)
  Class: Eq_70
  DataType: byte
  OrigDataType: byte
T_190: (in Test(UGT,CZ) : bool)
  Class: Eq_190
  DataType: bool
  OrigDataType: bool
T_191: (in 0x023C : word16)
  Class: Eq_191
  DataType: (memptr T_28 (struct (0 T_192 t0000)))
  OrigDataType: (memptr T_28 (struct (0 T_192 t0000)))
T_192: (in Mem0[0x09DC:0x023C:word16] : word16)
  Class: Eq_164
  DataType: word16
  OrigDataType: word16
T_193: (in 0x0000 : word16)
  Class: Eq_193
  DataType: word16
  OrigDataType: word16
T_194: (in Mem0[0x09DC:0x023C:word16] - 0x0000 : word16)
  Class: Eq_194
  DataType: word16
  OrigDataType: word16
T_195: (in cond(Mem0[0x09DC:0x023C:word16] - 0x0000) : byte)
  Class: Eq_70
  DataType: byte
  OrigDataType: byte
T_196: (in Test(NE,Z) : bool)
  Class: Eq_196
  DataType: bool
  OrigDataType: bool
T_197: (in 0x09DC : word16)
  Class: Eq_197
  DataType: word16
  OrigDataType: word16
T_198: (in bx + 0x09DC : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_199: (in 0x00A4 : word16)
  Class: Eq_199
  DataType: (memptr T_28 (struct (0 T_200 t0000)))
  OrigDataType: (memptr T_28 (struct (0 T_200 t0000)))
T_200: (in Mem0[0x09DC:0x00A4:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_201: (in 0x00A8 : word16)
  Class: Eq_201
  DataType: (memptr T_28 (struct (0 T_202 t0000)))
  OrigDataType: (memptr T_28 (struct (0 T_202 t0000)))
T_202: (in Mem0[0x09DC:0x00A8:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_203: (in 0x0090 : word16)
  Class: Eq_203
  DataType: (memptr T_28 (struct (0 T_204 t0000)))
  OrigDataType: (memptr T_28 (struct (0 T_204 t0000)))
T_204: (in Mem0[0x09DC:0x0090:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_205: (in bx - ax : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_206: (in 0x4A : byte)
  Class: Eq_10
  DataType: byte
  OrigDataType: byte
T_207: (in 0x0002 : word16)
  Class: Eq_207
  DataType: word16
  OrigDataType: word16
T_208: (in fp - 0x0002 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_209: (in wLoc02 : word16)
  Class: Eq_2
  DataType: (union (uint16 u0) ((memptr T_28 (struct (0 T_2 t0000))) u1) ((memptr T_31 (struct (0 T_309 t0000))) u2) ((union (ptr16 u0) ((memptr T_31 (struct (0 T_98 t0000) (2 T_63 t0002))) u1)) u3))
  OrigDataType: (union (uint16 u0) ((memptr T_28 (struct (0 T_2 t0000))) u1) ((memptr T_31 (struct (0 T_309 t0000))) u2) ((union (ptr16 u0) ((memptr T_31 (struct (0 T_98 t0000) (2 T_63 t0002))) u1)) u3))
T_210: (in msdos_resize_memory_block : ptr32)
  Class: Eq_210
  DataType: (ptr (fn T_216 (T_31, T_26, T_215)))
  OrigDataType: (ptr (fn T_216 (T_31, T_26, T_215)))
T_211: (in signature of msdos_resize_memory_block : void)
  Class: Eq_210
  DataType: 
  OrigDataType: 
T_212: (in es : selector)
  Class: Eq_2
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_213: (in bx : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_214: (in bxOut : ptr16)
  Class: Eq_214
  DataType: ptr16
  OrigDataType: ptr16
T_215: (in out bx : ptr16)
  Class: Eq_214
  DataType: (ptr (union (uint16 u0) ((memptr T_28 (struct (0 T_2 t0000))) u1) ((memptr T_31 (struct (0 T_309 t0000))) u2) ((union (ptr16 u0) ((memptr T_31 (struct (0 T_98 t0000) (2 T_63 t0002))) u1)) u3)))
  OrigDataType: (ptr (union (uint16 u0) ((memptr T_28 (struct (0 T_2 t0000))) u1) ((memptr T_31 (struct (0 T_309 t0000))) u2) ((union (ptr16 u0) ((memptr T_31 (struct (0 T_98 t0000) (2 T_63 t0002))) u1)) u3)))
T_216: (in msdos_resize_memory_block(es, bx, out bx) : byte)
  Class: Eq_70
  DataType: byte
  OrigDataType: byte
T_217: (in 0x04 : byte)
  Class: Eq_217
  DataType: byte
  OrigDataType: byte
T_218: (in di << 0x04 : word16)
  Class: Eq_2
  DataType: ui16
  OrigDataType: ui16
T_219: (in __cli : ptr32)
  Class: Eq_219
  DataType: (ptr (fn T_220 ()))
  OrigDataType: (ptr (fn T_220 ()))
T_220: (in __cli() : void)
  Class: Eq_220
  DataType: void
  OrigDataType: void
T_221: (in 0x09DC : word16)
  Class: Eq_221
  DataType: word16
  OrigDataType: word16
T_222: (in ss : selector)
  Class: Eq_221
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_223: (in 0x0000 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_224: (in (byte) ax : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_225: (in 0x01F8 : word16)
  Class: Eq_225
  DataType: (memptr T_7 (struct (0 T_226 t0000)))
  OrigDataType: (memptr T_7 (struct (0 T_226 t0000)))
T_226: (in Mem0[0x0800:0x01F8:selector] : selector)
  Class: Eq_2
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_227: (in 0x05EA : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_228: (in SEQ(es, di) : ptr32)
  Class: Eq_47
  DataType: ptr32
  OrigDataType: ptr32
T_229: (in 0x0630 : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_230: (in 0x0046 : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_231: (in SLICE(cx, byte, 8) : byte)
  Class: Eq_55
  DataType: byte
  OrigDataType: byte
T_232: (in (byte) cx : byte)
  Class: Eq_57
  DataType: byte
  OrigDataType: byte
T_233: (in 0x0046 : word16)
  Class: Eq_233
  DataType: word16
  OrigDataType: word16
T_234: (in cond(0x0046) : byte)
  Class: Eq_70
  DataType: byte
  OrigDataType: byte
T_235: (in SEQ(es, di) : ptr32)
  Class: Eq_47
  DataType: ptr32
  OrigDataType: ptr32
T_236: (in 0x0002 : word16)
  Class: Eq_236
  DataType: word16
  OrigDataType: word16
T_237: (in sp - 0x0002 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_238: (in cs : selector)
  Class: Eq_238
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_239: (in 0x05DC : word16)
  Class: Eq_239
  DataType: (memptr T_20 (struct (0 T_240 t0000)))
  OrigDataType: (memptr T_20 (struct (0 T_240 t0000)))
T_240: (in Mem0[ds:0x05DC:word16] : word16)
  Class: Eq_240
  DataType: word16
  OrigDataType: word16
T_241: (in SEQ(cs, Mem0[ds:0x05DC:word16]) : ptr32)
  Class: Eq_241
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_242: (in fn0800_0346 : ptr32)
  Class: Eq_242
  DataType: (ptr (fn T_248 (T_20, T_209, T_247)))
  OrigDataType: (ptr (fn T_248 (T_20, T_209, T_247)))
T_243: (in signature of fn0800_0346 : void)
  Class: Eq_242
  DataType: 
  OrigDataType: 
T_244: (in ds : selector)
  Class: Eq_2
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_245: (in wArg00 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_246: (in dsOut : ptr16)
  Class: Eq_246
  DataType: ptr16
  OrigDataType: ptr16
T_247: (in out ds : ptr16)
  Class: Eq_246
  DataType: (ptr (ptr (segment (2 T_22 t0002) (2C T_25 t002C) (5DC T_240 t05DC))))
  OrigDataType: (ptr (ptr (segment (2 T_22 t0002) (2C T_25 t002C) (5DC T_240 t05DC))))
T_248: (in fn0800_0346(ds, wLoc02, out ds) : word16)
  Class: Eq_111
  DataType: word16
  OrigDataType: word16
T_249: (in fn0800_0431 : ptr32)
  Class: Eq_249
  DataType: (ptr (fn T_253 (T_112, T_20)))
  OrigDataType: (ptr (fn T_253 (T_112, T_20)))
T_250: (in signature of fn0800_0431 : void)
  Class: Eq_249
  DataType: 
  OrigDataType: 
T_251: (in si : word16)
  Class: Eq_111
  DataType: word16
  OrigDataType: word16
T_252: (in ds : selector)
  Class: Eq_2
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_253: (in fn0800_0431(si, ds) : word16)
  Class: Eq_111
  DataType: word16
  OrigDataType: word16
T_254: (in 0x0002 : word16)
  Class: Eq_254
  DataType: word16
  OrigDataType: word16
T_255: (in sp + 0x0002 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_256: (in 0x00 : byte)
  Class: Eq_10
  DataType: byte
  OrigDataType: byte
T_257: (in bios_get_system_time : ptr32)
  Class: Eq_257
  DataType: (ptr (fn T_261 (T_260)))
  OrigDataType: (ptr (fn T_261 (T_260)))
T_258: (in signature of bios_get_system_time : void)
  Class: Eq_257
  DataType: 
  OrigDataType: 
T_259: (in dxOut : ptr16)
  Class: Eq_259
  DataType: ptr16
  OrigDataType: ptr16
T_260: (in out dx : ptr16)
  Class: Eq_259
  DataType: (ptr (ptr (segment (8A T_47 t008A) (8C T_35 t008C) (8E T_143 t008E) (90 T_33 t0090) (92 T_30 t0092) (96 T_38 t0096) (AC T_37 t00AC))))
  OrigDataType: (ptr (ptr (segment (8A T_47 t008A) (8C T_35 t008C) (8E T_143 t008E) (90 T_33 t0090) (92 T_30 t0092) (96 T_38 t0096) (AC T_37 t00AC))))
T_261: (in bios_get_system_time(out dx) : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_262: (in 0x0098 : word16)
  Class: Eq_262
  DataType: (memptr T_20 (struct (0 T_263 t0000)))
  OrigDataType: (memptr T_20 (struct (0 T_263 t0000)))
T_263: (in Mem0[ds:0x0098:word16] : word16)
  Class: Eq_4
  DataType: word16
  OrigDataType: word16
T_264: (in 0x009A : word16)
  Class: Eq_264
  DataType: (memptr T_20 (struct (0 T_265 t0000)))
  OrigDataType: (memptr T_20 (struct (0 T_265 t0000)))
T_265: (in Mem0[ds:0x009A:word16] : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_266: (in 0x05E0 : word16)
  Class: Eq_266
  DataType: (memptr T_20 (struct (0 T_267 t0000)))
  OrigDataType: (memptr T_20 (struct (0 T_267 t0000)))
T_267: (in Mem0[ds:0x05E0:word16] : word16)
  Class: Eq_267
  DataType: word16
  OrigDataType: word16
T_268: (in SEQ(cs, Mem0[ds:0x05E0:word16]) : ptr32)
  Class: Eq_268
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_269: (in 0x0002 : word16)
  Class: Eq_269
  DataType: word16
  OrigDataType: word16
T_270: (in sp - 0x0002 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_271: (in 0x0088 : word16)
  Class: Eq_271
  DataType: (memptr T_20 (struct (0 T_272 t0000)))
  OrigDataType: (memptr T_20 (struct (0 T_272 t0000)))
T_272: (in Mem0[ds:0x0088:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_273: (in 0x0000 : word16)
  Class: Eq_273
  DataType: word16
  OrigDataType: word16
T_274: (in sp + 0x0000 : word16)
  Class: Eq_274
  DataType: word16
  OrigDataType: word16
T_275: (in Mem0[0x09DC:sp + 0x0000:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_276: (in 0x0002 : word16)
  Class: Eq_276
  DataType: word16
  OrigDataType: word16
T_277: (in sp - 0x0002 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_278: (in 0x0086 : word16)
  Class: Eq_278
  DataType: (memptr T_20 (struct (0 T_279 t0000)))
  OrigDataType: (memptr T_20 (struct (0 T_279 t0000)))
T_279: (in Mem0[ds:0x0086:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_280: (in 0x0000 : word16)
  Class: Eq_280
  DataType: word16
  OrigDataType: word16
T_281: (in sp + 0x0000 : word16)
  Class: Eq_281
  DataType: word16
  OrigDataType: word16
T_282: (in Mem0[0x09DC:sp + 0x0000:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_283: (in 0x0002 : word16)
  Class: Eq_283
  DataType: word16
  OrigDataType: word16
T_284: (in sp - 0x0002 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_285: (in 0x0084 : word16)
  Class: Eq_285
  DataType: (memptr T_20 (struct (0 T_286 t0000)))
  OrigDataType: (memptr T_20 (struct (0 T_286 t0000)))
T_286: (in Mem0[ds:0x0084:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_287: (in 0x0000 : word16)
  Class: Eq_287
  DataType: word16
  OrigDataType: word16
T_288: (in sp + 0x0000 : word16)
  Class: Eq_288
  DataType: word16
  OrigDataType: word16
T_289: (in Mem0[0x09DC:sp + 0x0000:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_290: (in fn0800_01FA : ptr32)
  Class: Eq_290
  DataType: (ptr (fn T_294 (T_112, T_20)))
  OrigDataType: (ptr (fn T_294 (T_112, T_20)))
T_291: (in signature of fn0800_01FA : void)
  Class: Eq_290
  DataType: 
  OrigDataType: 
T_292: (in si : word16)
  Class: Eq_111
  DataType: word16
  OrigDataType: word16
T_293: (in ds : selector)
  Class: Eq_2
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_294: (in fn0800_01FA(si, ds) : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_295: (in (byte) ax : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_296: (in 0x0002 : word16)
  Class: Eq_296
  DataType: word16
  OrigDataType: word16
T_297: (in sp - 0x0002 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_298: (in 0x0000 : word16)
  Class: Eq_298
  DataType: word16
  OrigDataType: word16
T_299: (in sp + 0x0000 : word16)
  Class: Eq_299
  DataType: word16
  OrigDataType: word16
T_300: (in Mem0[0x09DC:sp + 0x0000:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_301: (in fn0800_0311 : ptr32)
  Class: Eq_301
  DataType: (ptr (fn T_306 (T_20, T_305)))
  OrigDataType: (ptr (fn T_306 (T_20, T_305)))
T_302: (in signature of fn0800_0311 : void)
  Class: Eq_301
  DataType: 
  OrigDataType: 
T_303: (in ds : selector)
  Class: Eq_2
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_304: (in wArg02 : word16)
  Class: Eq_304
  DataType: word16
  OrigDataType: word16
T_305: (in wArg00 : word16)
  Class: Eq_304
  DataType: word16
  OrigDataType: word16
T_306: (in fn0800_0311(ds, wArg00) : void)
  Class: Eq_306
  DataType: void
  OrigDataType: void
T_307: (in 0x0000 : word16)
  Class: Eq_307
  DataType: word16
  OrigDataType: word16
T_308: (in di + 0x0000 : word16)
  Class: Eq_308
  DataType: word16
  OrigDataType: word16
T_309: (in Mem0[es:di + 0x0000:byte] : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_310: (in 0x0001 : word16)
  Class: Eq_310
  DataType: word16
  OrigDataType: word16
T_311: (in di + 0x0001 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_312: (in SEQ(es, di) : ptr32)
  Class: Eq_47
  DataType: ptr32
  OrigDataType: ptr32
T_313: (in 0x0001 : word16)
  Class: Eq_313
  DataType: word16
  OrigDataType: word16
T_314: (in cx - 0x0001 : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_315: (in SLICE(cx, byte, 8) : byte)
  Class: Eq_55
  DataType: byte
  OrigDataType: byte
T_316: (in (byte) cx : byte)
  Class: Eq_57
  DataType: byte
  OrigDataType: byte
T_317: (in 0x0000 : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_318: (in cx == 0x0000 : bool)
  Class: Eq_318
  DataType: bool
  OrigDataType: bool
T_319: (in fn0800_0121 : ptr32)
  Class: Eq_319
  DataType: (ptr (fn T_324 (T_17, T_323)))
  OrigDataType: (ptr (fn T_324 (T_17, T_323)))
T_320: (in signature of fn0800_0121 : void)
  Class: Eq_319
  DataType: 
  OrigDataType: 
T_321: (in al : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_322: (in bArg00 : byte)
  Class: Eq_322
  DataType: byte
  OrigDataType: byte
T_323: (in bArg00 : byte)
  Class: Eq_322
  DataType: byte
  OrigDataType: byte
T_324: (in fn0800_0121(al, bArg00) : void)
  Class: Eq_324
  DataType: void
  OrigDataType: void
T_325: (in ds_3 : selector)
  Class: Eq_2
  DataType: (ptr (segment (0 (arr T_1636) a0000) (5DE T_335 t05DE)))
  OrigDataType: (ptr (segment (0 (arr T_1636) a0000) (5DE T_335 t05DE)))
T_326: (in 0x01F8 : word16)
  Class: Eq_326
  DataType: (memptr T_7 (struct (0 T_327 t0000)))
  OrigDataType: (memptr T_7 (struct (0 T_327 t0000)))
T_327: (in Mem0[0x0800:0x01F8:selector] : selector)
  Class: Eq_2
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_328: (in fn0800_01A5 : ptr32)
  Class: Eq_328
  DataType: (ptr (fn T_332 (T_321, T_325)))
  OrigDataType: (ptr (fn T_332 (T_321, T_325)))
T_329: (in signature of fn0800_01A5 : void)
  Class: Eq_328
  DataType: 
  OrigDataType: 
T_330: (in al : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_331: (in ds : selector)
  Class: Eq_2
  DataType: (ptr (segment (74 T_425 t0074) (78 T_429 t0078) (7C T_433 t007C) (80 T_438 t0080)))
  OrigDataType: (ptr (segment (74 T_425 t0074) (78 T_429 t0078) (7C T_433 t007C) (80 T_438 t0080)))
T_332: (in fn0800_01A5(al, ds_3) : void)
  Class: Eq_332
  DataType: void
  OrigDataType: void
T_333: (in cs : selector)
  Class: Eq_333
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_334: (in 0x05DE : word16)
  Class: Eq_334
  DataType: (memptr T_325 (struct (0 T_335 t0000)))
  OrigDataType: (memptr T_325 (struct (0 T_335 t0000)))
T_335: (in Mem0[ds_3:0x05DE:word16] : word16)
  Class: Eq_335
  DataType: word16
  OrigDataType: word16
T_336: (in SEQ(cs, Mem0[ds_3:0x05DE:word16]) : ptr32)
  Class: Eq_336
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_337: (in ax_20 : word16)
  Class: Eq_337
  DataType: word16
  OrigDataType: word16
T_338: (in 0x0000 : word16)
  Class: Eq_337
  DataType: word16
  OrigDataType: word16
T_339: (in al_21 : byte)
  Class: Eq_339
  DataType: bcu8
  OrigDataType: bcu8
T_340: (in 0x00 : byte)
  Class: Eq_339
  DataType: byte
  OrigDataType: byte
T_341: (in ah_22 : byte)
  Class: Eq_341
  DataType: (union (byte u0) (word16 u1))
  OrigDataType: (union (byte u0) (word16 u1))
T_342: (in 0x00 : byte)
  Class: Eq_341
  DataType: byte
  OrigDataType: byte
T_343: (in si_25 : word16)
  Class: Eq_343
  DataType: (memptr T_325 (struct 0001 (0 T_349 t0000)))
  OrigDataType: (memptr T_325 (struct 0001 (0 T_349 t0000)))
T_344: (in 0x0000 : word16)
  Class: Eq_343
  DataType: word16
  OrigDataType: word16
T_345: (in cx_26 : word16)
  Class: Eq_345
  DataType: word16
  OrigDataType: word16
T_346: (in 0x002F : word16)
  Class: Eq_345
  DataType: word16
  OrigDataType: word16
T_347: (in 0x0000 : word16)
  Class: Eq_347
  DataType: word16
  OrigDataType: word16
T_348: (in si_25 + 0x0000 : word16)
  Class: Eq_348
  DataType: word16
  OrigDataType: word16
T_349: (in Mem0[ds_3:si_25 + 0x0000:byte] : byte)
  Class: Eq_349
  DataType: byte
  OrigDataType: byte
T_350: (in al_21 + Mem0[ds_3:si_25 + 0x0000:byte] : byte)
  Class: Eq_339
  DataType: byte
  OrigDataType: byte
T_351: (in 0x00 : byte)
  Class: Eq_339
  DataType: bcu8
  OrigDataType: bcu8
T_352: (in al_21 <u 0x00 : bool)
  Class: Eq_352
  DataType: bool
  OrigDataType: bool
T_353: (in ah_22 + (al_21 <u 0x00) : word16)
  Class: Eq_341
  DataType: word16
  OrigDataType: word16
T_354: (in DPB(ax_20, ah_22, 8, 8) : word16)
  Class: Eq_337
  DataType: word16
  OrigDataType: word16
T_355: (in 0x0001 : word16)
  Class: Eq_355
  DataType: word16
  OrigDataType: word16
T_356: (in si_25 + 0x0001 : word16)
  Class: Eq_343
  DataType: word16
  OrigDataType: word16
T_357: (in 0x0001 : word16)
  Class: Eq_357
  DataType: word16
  OrigDataType: word16
T_358: (in cx_26 - 0x0001 : word16)
  Class: Eq_345
  DataType: word16
  OrigDataType: word16
T_359: (in 0x0000 : word16)
  Class: Eq_345
  DataType: word16
  OrigDataType: word16
T_360: (in cx_26 != 0x0000 : bool)
  Class: Eq_360
  DataType: bool
  OrigDataType: bool
T_361: (in 0x0D37 : word16)
  Class: Eq_337
  DataType: word16
  OrigDataType: word16
T_362: (in ax_20 == 0x0D37 : bool)
  Class: Eq_362
  DataType: bool
  OrigDataType: bool
T_363: (in msdos_terminate : ptr32)
  Class: Eq_363
  DataType: (ptr (fn T_367 (T_366)))
  OrigDataType: (ptr (fn T_367 (T_366)))
T_364: (in signature of msdos_terminate : void)
  Class: Eq_363
  DataType: 
  OrigDataType: 
T_365: (in al : byte)
  Class: Eq_365
  DataType: byte
  OrigDataType: byte
T_366: (in bArg00 : byte)
  Class: Eq_365
  DataType: byte
  OrigDataType: byte
T_367: (in msdos_terminate(bArg00) : void)
  Class: Eq_367
  DataType: void
  OrigDataType: void
T_368: (in fn0800_01DA : ptr32)
  Class: Eq_368
  DataType: (ptr (fn T_375 (T_373, T_374, T_325)))
  OrigDataType: (ptr (fn T_375 (T_373, T_374, T_325)))
T_369: (in signature of fn0800_01DA : void)
  Class: Eq_368
  DataType: 
  OrigDataType: 
T_370: (in cx : word16)
  Class: Eq_370
  DataType: word16
  OrigDataType: word16
T_371: (in dx : word16)
  Class: Eq_371
  DataType: word16
  OrigDataType: word16
T_372: (in ds : selector)
  Class: Eq_2
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_373: (in 0x0019 : word16)
  Class: Eq_370
  DataType: word16
  OrigDataType: word16
T_374: (in 0x002F : word16)
  Class: Eq_371
  DataType: word16
  OrigDataType: word16
T_375: (in fn0800_01DA(0x0019, 0x002F, ds_3) : word16)
  Class: Eq_375
  DataType: word16
  OrigDataType: word16
T_376: (in es_bx_6 : word32)
  Class: Eq_376
  DataType: word32
  OrigDataType: word32
T_377: (in msdos_get_interrupt_vector : ptr32)
  Class: Eq_377
  DataType: (ptr (fn T_380 (T_43)))
  OrigDataType: (ptr (fn T_380 (T_43)))
T_378: (in signature of msdos_get_interrupt_vector : void)
  Class: Eq_377
  DataType: 
  OrigDataType: 
T_379: (in al : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_380: (in msdos_get_interrupt_vector(al) : word32)
  Class: Eq_376
  DataType: word32
  OrigDataType: word32
T_381: (in (word16) es_bx_6 : word16)
  Class: Eq_381
  DataType: word16
  OrigDataType: word16
T_382: (in 0x0074 : word16)
  Class: Eq_382
  DataType: (memptr T_44 (struct (0 T_383 t0000)))
  OrigDataType: (memptr T_44 (struct (0 T_383 t0000)))
T_383: (in Mem9[ds:0x0074:word16] : word16)
  Class: Eq_381
  DataType: word16
  OrigDataType: word16
T_384: (in SLICE(es_bx_6, selector, 16) : selector)
  Class: Eq_384
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_385: (in 0x0076 : word16)
  Class: Eq_385
  DataType: (memptr T_44 (struct (0 T_386 t0000)))
  OrigDataType: (memptr T_44 (struct (0 T_386 t0000)))
T_386: (in Mem10[ds:0x0076:word16] : word16)
  Class: Eq_384
  DataType: word16
  OrigDataType: word16
T_387: (in es_bx_11 : word32)
  Class: Eq_387
  DataType: word32
  OrigDataType: word32
T_388: (in msdos_get_interrupt_vector : ptr32)
  Class: Eq_377
  DataType: (ptr (fn T_389 (T_43)))
  OrigDataType: (ptr (fn T_389 (T_43)))
T_389: (in msdos_get_interrupt_vector(al) : word32)
  Class: Eq_387
  DataType: word32
  OrigDataType: word32
T_390: (in (word16) es_bx_11 : word16)
  Class: Eq_390
  DataType: word16
  OrigDataType: word16
T_391: (in 0x0078 : word16)
  Class: Eq_391
  DataType: (memptr T_44 (struct (0 T_392 t0000)))
  OrigDataType: (memptr T_44 (struct (0 T_392 t0000)))
T_392: (in Mem14[ds:0x0078:word16] : word16)
  Class: Eq_390
  DataType: word16
  OrigDataType: word16
T_393: (in SLICE(es_bx_11, selector, 16) : selector)
  Class: Eq_393
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_394: (in 0x007A : word16)
  Class: Eq_394
  DataType: (memptr T_44 (struct (0 T_395 t0000)))
  OrigDataType: (memptr T_44 (struct (0 T_395 t0000)))
T_395: (in Mem15[ds:0x007A:word16] : word16)
  Class: Eq_393
  DataType: word16
  OrigDataType: word16
T_396: (in es_bx_16 : word32)
  Class: Eq_396
  DataType: word32
  OrigDataType: word32
T_397: (in msdos_get_interrupt_vector : ptr32)
  Class: Eq_377
  DataType: (ptr (fn T_398 (T_43)))
  OrigDataType: (ptr (fn T_398 (T_43)))
T_398: (in msdos_get_interrupt_vector(al) : word32)
  Class: Eq_396
  DataType: word32
  OrigDataType: word32
T_399: (in (word16) es_bx_16 : word16)
  Class: Eq_399
  DataType: word16
  OrigDataType: word16
T_400: (in 0x007C : word16)
  Class: Eq_400
  DataType: (memptr T_44 (struct (0 T_401 t0000)))
  OrigDataType: (memptr T_44 (struct (0 T_401 t0000)))
T_401: (in Mem19[ds:0x007C:word16] : word16)
  Class: Eq_399
  DataType: word16
  OrigDataType: word16
T_402: (in SLICE(es_bx_16, selector, 16) : selector)
  Class: Eq_402
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_403: (in 0x007E : word16)
  Class: Eq_403
  DataType: (memptr T_44 (struct (0 T_404 t0000)))
  OrigDataType: (memptr T_44 (struct (0 T_404 t0000)))
T_404: (in Mem20[ds:0x007E:word16] : word16)
  Class: Eq_402
  DataType: word16
  OrigDataType: word16
T_405: (in es_bx_21 : word32)
  Class: Eq_405
  DataType: word32
  OrigDataType: word32
T_406: (in msdos_get_interrupt_vector : ptr32)
  Class: Eq_377
  DataType: (ptr (fn T_407 (T_43)))
  OrigDataType: (ptr (fn T_407 (T_43)))
T_407: (in msdos_get_interrupt_vector(al) : word32)
  Class: Eq_405
  DataType: word32
  OrigDataType: word32
T_408: (in (word16) es_bx_21 : word16)
  Class: Eq_408
  DataType: word16
  OrigDataType: word16
T_409: (in 0x0080 : word16)
  Class: Eq_409
  DataType: (memptr T_44 (struct (0 T_410 t0000)))
  OrigDataType: (memptr T_44 (struct (0 T_410 t0000)))
T_410: (in Mem24[ds:0x0080:word16] : word16)
  Class: Eq_408
  DataType: word16
  OrigDataType: word16
T_411: (in SLICE(es_bx_21, selector, 16) : selector)
  Class: Eq_411
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_412: (in 0x0082 : word16)
  Class: Eq_412
  DataType: (memptr T_44 (struct (0 T_413 t0000)))
  OrigDataType: (memptr T_44 (struct (0 T_413 t0000)))
T_413: (in Mem25[ds:0x0082:word16] : word16)
  Class: Eq_411
  DataType: word16
  OrigDataType: word16
T_414: (in msdos_set_interrupt_vector : ptr32)
  Class: Eq_414
  DataType: (ptr (fn T_422 (T_418, T_421)))
  OrigDataType: (ptr (fn T_422 (T_418, T_421)))
T_415: (in signature of msdos_set_interrupt_vector : void)
  Class: Eq_414
  DataType: 
  OrigDataType: 
T_416: (in al : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_417: (in ds_dx : word32)
  Class: Eq_417
  DataType: word32
  OrigDataType: word32
T_418: (in 0x00 : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_419: (in cs : selector)
  Class: Eq_419
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_420: (in 0x0158 : word16)
  Class: Eq_420
  DataType: word16
  OrigDataType: word16
T_421: (in SEQ(cs, 0x0158) : word32)
  Class: Eq_417
  DataType: word32
  OrigDataType: word32
T_422: (in msdos_set_interrupt_vector(0x00, SEQ(cs, 0x0158)) : void)
  Class: Eq_422
  DataType: void
  OrigDataType: void
T_423: (in msdos_set_interrupt_vector : ptr32)
  Class: Eq_414
  DataType: (ptr (fn T_426 (T_330, T_425)))
  OrigDataType: (ptr (fn T_426 (T_330, T_425)))
T_424: (in 0x0074 : word16)
  Class: Eq_424
  DataType: (memptr T_331 (struct (0 T_425 t0000)))
  OrigDataType: (memptr T_331 (struct (0 T_425 t0000)))
T_425: (in Mem0[ds:0x0074:segptr32] : segptr32)
  Class: Eq_417
  DataType: segptr32
  OrigDataType: segptr32
T_426: (in msdos_set_interrupt_vector(al, Mem0[ds:0x0074:segptr32]) : void)
  Class: Eq_426
  DataType: void
  OrigDataType: void
T_427: (in msdos_set_interrupt_vector : ptr32)
  Class: Eq_414
  DataType: (ptr (fn T_430 (T_330, T_429)))
  OrigDataType: (ptr (fn T_430 (T_330, T_429)))
T_428: (in 0x0078 : word16)
  Class: Eq_428
  DataType: (memptr T_331 (struct (0 T_429 t0000)))
  OrigDataType: (memptr T_331 (struct (0 T_429 t0000)))
T_429: (in Mem0[ds:0x0078:segptr32] : segptr32)
  Class: Eq_417
  DataType: segptr32
  OrigDataType: segptr32
T_430: (in msdos_set_interrupt_vector(al, Mem0[ds:0x0078:segptr32]) : void)
  Class: Eq_430
  DataType: void
  OrigDataType: void
T_431: (in msdos_set_interrupt_vector : ptr32)
  Class: Eq_414
  DataType: (ptr (fn T_434 (T_330, T_433)))
  OrigDataType: (ptr (fn T_434 (T_330, T_433)))
T_432: (in 0x007C : word16)
  Class: Eq_432
  DataType: (memptr T_331 (struct (0 T_433 t0000)))
  OrigDataType: (memptr T_331 (struct (0 T_433 t0000)))
T_433: (in Mem0[ds:0x007C:segptr32] : segptr32)
  Class: Eq_417
  DataType: segptr32
  OrigDataType: segptr32
T_434: (in msdos_set_interrupt_vector(al, Mem0[ds:0x007C:segptr32]) : void)
  Class: Eq_434
  DataType: void
  OrigDataType: void
T_435: (in msdos_set_interrupt_vector : ptr32)
  Class: Eq_414
  DataType: (ptr (fn T_439 (T_436, T_438)))
  OrigDataType: (ptr (fn T_439 (T_436, T_438)))
T_436: (in 0x06 : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_437: (in 0x0080 : word16)
  Class: Eq_437
  DataType: (memptr T_331 (struct (0 T_438 t0000)))
  OrigDataType: (memptr T_331 (struct (0 T_438 t0000)))
T_438: (in Mem0[ds:0x0080:segptr32] : segptr32)
  Class: Eq_417
  DataType: segptr32
  OrigDataType: segptr32
T_439: (in msdos_set_interrupt_vector(0x06, Mem0[ds:0x0080:segptr32]) : void)
  Class: Eq_439
  DataType: void
  OrigDataType: void
T_440: (in bx : word16)
  Class: Eq_440
  DataType: word16
  OrigDataType: word16
T_441: (in ax_8 : word16)
  Class: Eq_441
  DataType: word16
  OrigDataType: word16
T_442: (in msdos_write_file : ptr32)
  Class: Eq_442
  DataType: (ptr (fn T_451 (T_448, T_370, T_449, T_450)))
  OrigDataType: (ptr (fn T_451 (T_448, T_370, T_449, T_450)))
T_443: (in signature of msdos_write_file : void)
  Class: Eq_442
  DataType: 
  OrigDataType: 
T_444: (in bx : word16)
  Class: Eq_444
  DataType: word16
  OrigDataType: word16
T_445: (in cx : word16)
  Class: Eq_370
  DataType: word16
  OrigDataType: word16
T_446: (in ds_dx : word32)
  Class: Eq_446
  DataType: word32
  OrigDataType: word32
T_447: (in axOut : ptr16)
  Class: Eq_447
  DataType: ptr16
  OrigDataType: ptr16
T_448: (in 0x0002 : word16)
  Class: Eq_444
  DataType: word16
  OrigDataType: word16
T_449: (in ds_dx : word32)
  Class: Eq_446
  DataType: word32
  OrigDataType: word32
T_450: (in out ax_8 : ptr16)
  Class: Eq_447
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_451: (in msdos_write_file(0x0002, cx, ds_dx, out ax_8) : bool)
  Class: Eq_451
  DataType: bool
  OrigDataType: bool
T_452: (in 0x0002 : word16)
  Class: Eq_452
  DataType: word16
  OrigDataType: word16
T_453: (in ds_3 : selector)
  Class: Eq_2
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_454: (in 0x01F8 : word16)
  Class: Eq_454
  DataType: (memptr T_7 (struct (0 T_455 t0000)))
  OrigDataType: (memptr T_7 (struct (0 T_455 t0000)))
T_455: (in Mem0[0x0800:0x01F8:selector] : selector)
  Class: Eq_2
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_456: (in bx_4 : word16)
  Class: Eq_456
  DataType: (memptr T_453 (struct (0 T_466 t0000)))
  OrigDataType: (memptr T_453 (struct (0 T_466 t0000)))
T_457: (in fn0800_01DA : ptr32)
  Class: Eq_368
  DataType: (ptr (fn T_460 (T_458, T_459, T_453)))
  OrigDataType: (ptr (fn T_460 (T_458, T_459, T_453)))
T_458: (in 0x001E : word16)
  Class: Eq_370
  DataType: word16
  OrigDataType: word16
T_459: (in 0x0056 : word16)
  Class: Eq_371
  DataType: word16
  OrigDataType: word16
T_460: (in fn0800_01DA(0x001E, 0x0056, ds_3) : word16)
  Class: Eq_456
  DataType: word16
  OrigDataType: word16
T_461: (in fn0800_0121 : ptr32)
  Class: Eq_319
  DataType: (ptr (fn T_464 (T_462, T_463)))
  OrigDataType: (ptr (fn T_464 (T_462, T_463)))
T_462: (in 0x03 : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_463: (in bLoc04 : byte)
  Class: Eq_322
  DataType: byte
  OrigDataType: byte
T_464: (in fn0800_0121(0x03, bLoc04) : void)
  Class: Eq_464
  DataType: void
  OrigDataType: void
T_465: (in bx_4 + si : word16)
  Class: Eq_465
  DataType: word16
  OrigDataType: word16
T_466: (in Mem0[ds_3:bx_4 + si:byte] : byte)
  Class: Eq_466
  DataType: byte
  OrigDataType: byte
T_467: (in 0x03 : byte)
  Class: Eq_467
  DataType: byte
  OrigDataType: byte
T_468: (in Mem0[ds_3:bx_4 + si:byte] + 0x03 : byte)
  Class: Eq_466
  DataType: byte
  OrigDataType: byte
T_469: (in bx_4 + si : word16)
  Class: Eq_469
  DataType: word16
  OrigDataType: word16
T_470: (in Mem13[ds_3:bx_4 + si:byte] : byte)
  Class: Eq_466
  DataType: byte
  OrigDataType: byte
T_471: (in bx_25 : word16)
  Class: Eq_471
  DataType: word16
  OrigDataType: word16
T_472: (in di_26 : word16)
  Class: Eq_471
  DataType: word16
  OrigDataType: word16
T_473: (in fn0800_0E5B : ptr32)
  Class: Eq_473
  DataType: (ptr (fn T_482 (T_453, T_479, T_480, T_481)))
  OrigDataType: (ptr (fn T_482 (T_453, T_479, T_480, T_481)))
T_474: (in signature of fn0800_0E5B : void)
  Class: Eq_473
  DataType: 
  OrigDataType: 
T_475: (in ds : selector)
  Class: Eq_2
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_476: (in wArg02 : word16)
  Class: Eq_476
  DataType: word16
  OrigDataType: word16
T_477: (in bxOut : ptr16)
  Class: Eq_477
  DataType: ptr16
  OrigDataType: ptr16
T_478: (in diOut : ptr16)
  Class: Eq_478
  DataType: ptr16
  OrigDataType: ptr16
T_479: (in 0x0194 : word16)
  Class: Eq_476
  DataType: word16
  OrigDataType: word16
T_480: (in out bx_25 : ptr16)
  Class: Eq_477
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_481: (in out di_26 : ptr16)
  Class: Eq_478
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_482: (in fn0800_0E5B(ds_3, 0x0194, out bx_25, out di_26) : word16)
  Class: Eq_482
  DataType: word16
  OrigDataType: word16
T_483: (in fn0800_16E4 : ptr32)
  Class: Eq_483
  DataType: (ptr (fn T_490 (T_471, T_472, T_453, T_489)))
  OrigDataType: (ptr (fn T_490 (T_471, T_472, T_453, T_489)))
T_484: (in signature of fn0800_16E4 : void)
  Class: Eq_483
  DataType: 
  OrigDataType: 
T_485: (in bx : word16)
  Class: Eq_471
  DataType: word16
  OrigDataType: word16
T_486: (in di : word16)
  Class: Eq_471
  DataType: word16
  OrigDataType: word16
T_487: (in ds : selector)
  Class: Eq_2
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_488: (in wArg02 : word16)
  Class: Eq_488
  DataType: word16
  OrigDataType: word16
T_489: (in 0x01B0 : word16)
  Class: Eq_488
  DataType: word16
  OrigDataType: word16
T_490: (in fn0800_16E4(bx_25, di_26, ds_3, 0x01B0) : word16)
  Class: Eq_490
  DataType: word16
  OrigDataType: word16
T_491: (in bx_50 : word16)
  Class: Eq_471
  DataType: word16
  OrigDataType: word16
T_492: (in di_51 : word16)
  Class: Eq_471
  DataType: word16
  OrigDataType: word16
T_493: (in fn0800_0E5B : ptr32)
  Class: Eq_473
  DataType: (ptr (fn T_497 (T_453, T_494, T_495, T_496)))
  OrigDataType: (ptr (fn T_497 (T_453, T_494, T_495, T_496)))
T_494: (in 0x01B4 : word16)
  Class: Eq_476
  DataType: word16
  OrigDataType: word16
T_495: (in out bx_50 : ptr16)
  Class: Eq_477
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_496: (in out di_51 : ptr16)
  Class: Eq_478
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_497: (in fn0800_0E5B(ds_3, 0x01B4, out bx_50, out di_51) : word16)
  Class: Eq_497
  DataType: word16
  OrigDataType: word16
T_498: (in fn0800_16E4 : ptr32)
  Class: Eq_483
  DataType: (ptr (fn T_503 (T_501, T_492, T_453, T_502)))
  OrigDataType: (ptr (fn T_503 (T_501, T_492, T_453, T_502)))
T_499: (in fn0800_16E4 : ptr32)
  Class: Eq_483
  DataType: (ptr (fn T_501 (T_491, T_492, T_453, T_500)))
  OrigDataType: (ptr (fn T_501 (T_491, T_492, T_453, T_500)))
T_500: (in 0x01CE : word16)
  Class: Eq_488
  DataType: word16
  OrigDataType: word16
T_501: (in fn0800_16E4(bx_50, di_51, ds_3, 0x01CE) : word16)
  Class: Eq_471
  DataType: word16
  OrigDataType: word16
T_502: (in 0x01D1 : word16)
  Class: Eq_488
  DataType: word16
  OrigDataType: word16
T_503: (in fn0800_16E4(fn0800_16E4(bx_50, di_51, ds_3, 0x01CE), di_51, ds_3, 0x01D1) : word16)
  Class: Eq_503
  DataType: word16
  OrigDataType: word16
T_504: (in si_80 : word16)
  Class: Eq_504
  DataType: word16
  OrigDataType: word16
T_505: (in fn0800_02B2 : ptr32)
  Class: Eq_505
  DataType: (ptr (fn T_516 (T_513, T_453, T_514, T_515)))
  OrigDataType: (ptr (fn T_516 (T_513, T_453, T_514, T_515)))
T_506: (in signature of fn0800_02B2 : void)
  Class: Eq_505
  DataType: 
  OrigDataType: 
T_507: (in bp : word16)
  Class: Eq_507
  DataType: (memptr T_550 (struct (FFFFFFF8 T_557 tFFFFFFF8) (FFFFFFFA T_553 tFFFFFFFA) (FFFFFFFE T_549 tFFFFFFFE)))
  OrigDataType: (memptr T_550 (struct (FFFFFFF8 T_557 tFFFFFFF8) (FFFFFFFA T_553 tFFFFFFFA) (FFFFFFFE T_549 tFFFFFFFE)))
T_508: (in ds : selector)
  Class: Eq_2
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_509: (in wArg00 : word16)
  Class: Eq_111
  DataType: word16
  OrigDataType: word16
T_510: (in siOut : ptr16)
  Class: Eq_510
  DataType: ptr16
  OrigDataType: ptr16
T_511: (in fp : ptr16)
  Class: Eq_511
  DataType: ptr16
  OrigDataType: ptr16
T_512: (in 0x0004 : word16)
  Class: Eq_512
  DataType: word16
  OrigDataType: word16
T_513: (in fp - 0x0004 : word16)
  Class: Eq_507
  DataType: word16
  OrigDataType: word16
T_514: (in wArg00 : word16)
  Class: Eq_111
  DataType: word16
  OrigDataType: word16
T_515: (in out si_80 : ptr16)
  Class: Eq_510
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_516: (in fn0800_02B2(fp - 0x0004, ds_3, wArg00, out si_80) : word16)
  Class: Eq_516
  DataType: word16
  OrigDataType: word16
T_517: (in ax : word16)
  Class: Eq_517
  DataType: word16
  OrigDataType: word16
T_518: (in bx_15 : word16)
  Class: Eq_471
  DataType: word16
  OrigDataType: word16
T_519: (in di_16 : word16)
  Class: Eq_471
  DataType: word16
  OrigDataType: word16
T_520: (in fn0800_0E5B : ptr32)
  Class: Eq_473
  DataType: (ptr (fn T_524 (T_293, T_521, T_522, T_523)))
  OrigDataType: (ptr (fn T_524 (T_293, T_521, T_522, T_523)))
T_521: (in 0x0194 : word16)
  Class: Eq_476
  DataType: word16
  OrigDataType: word16
T_522: (in out bx_15 : ptr16)
  Class: Eq_477
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_523: (in out di_16 : ptr16)
  Class: Eq_478
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_524: (in fn0800_0E5B(ds, 0x0194, out bx_15, out di_16) : word16)
  Class: Eq_524
  DataType: word16
  OrigDataType: word16
T_525: (in fn0800_16E4 : ptr32)
  Class: Eq_483
  DataType: (ptr (fn T_527 (T_518, T_519, T_293, T_526)))
  OrigDataType: (ptr (fn T_527 (T_518, T_519, T_293, T_526)))
T_526: (in 0x01B0 : word16)
  Class: Eq_488
  DataType: word16
  OrigDataType: word16
T_527: (in fn0800_16E4(bx_15, di_16, ds, 0x01B0) : word16)
  Class: Eq_527
  DataType: word16
  OrigDataType: word16
T_528: (in bx_40 : word16)
  Class: Eq_471
  DataType: word16
  OrigDataType: word16
T_529: (in di_41 : word16)
  Class: Eq_471
  DataType: word16
  OrigDataType: word16
T_530: (in fn0800_0E5B : ptr32)
  Class: Eq_473
  DataType: (ptr (fn T_534 (T_293, T_531, T_532, T_533)))
  OrigDataType: (ptr (fn T_534 (T_293, T_531, T_532, T_533)))
T_531: (in 0x01B4 : word16)
  Class: Eq_476
  DataType: word16
  OrigDataType: word16
T_532: (in out bx_40 : ptr16)
  Class: Eq_477
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_533: (in out di_41 : ptr16)
  Class: Eq_478
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_534: (in fn0800_0E5B(ds, 0x01B4, out bx_40, out di_41) : word16)
  Class: Eq_534
  DataType: word16
  OrigDataType: word16
T_535: (in fn0800_16E4 : ptr32)
  Class: Eq_483
  DataType: (ptr (fn T_540 (T_538, T_529, T_293, T_539)))
  OrigDataType: (ptr (fn T_540 (T_538, T_529, T_293, T_539)))
T_536: (in fn0800_16E4 : ptr32)
  Class: Eq_483
  DataType: (ptr (fn T_538 (T_528, T_529, T_293, T_537)))
  OrigDataType: (ptr (fn T_538 (T_528, T_529, T_293, T_537)))
T_537: (in 0x01CE : word16)
  Class: Eq_488
  DataType: word16
  OrigDataType: word16
T_538: (in fn0800_16E4(bx_40, di_41, ds, 0x01CE) : word16)
  Class: Eq_471
  DataType: word16
  OrigDataType: word16
T_539: (in 0x01D1 : word16)
  Class: Eq_488
  DataType: word16
  OrigDataType: word16
T_540: (in fn0800_16E4(fn0800_16E4(bx_40, di_41, ds, 0x01CE), di_41, ds, 0x01D1) : word16)
  Class: Eq_540
  DataType: word16
  OrigDataType: word16
T_541: (in si_69 : word16)
  Class: Eq_541
  DataType: word16
  OrigDataType: word16
T_542: (in fn0800_02B2 : ptr32)
  Class: Eq_505
  DataType: (ptr (fn T_547 (T_545, T_293, T_292, T_546)))
  OrigDataType: (ptr (fn T_547 (T_545, T_293, T_292, T_546)))
T_543: (in fp : ptr16)
  Class: Eq_543
  DataType: ptr16
  OrigDataType: ptr16
T_544: (in 0x0002 : word16)
  Class: Eq_544
  DataType: word16
  OrigDataType: word16
T_545: (in fp - 0x0002 : word16)
  Class: Eq_507
  DataType: word16
  OrigDataType: word16
T_546: (in out si_69 : ptr16)
  Class: Eq_510
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_547: (in fn0800_02B2(fp - 0x0002, ds, si, out si_69) : word16)
  Class: Eq_547
  DataType: word16
  OrigDataType: word16
T_548: (in ax : word16)
  Class: Eq_548
  DataType: word16
  OrigDataType: word16
T_549: (in dx_5 : word16)
  Class: Eq_549
  DataType: int16
  OrigDataType: int16
T_550: (in ss : selector)
  Class: Eq_550
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_551: (in 0x0006 : word16)
  Class: Eq_551
  DataType: word16
  OrigDataType: word16
T_552: (in bp - 0x0006 : word16)
  Class: Eq_552
  DataType: word16
  OrigDataType: word16
T_553: (in Mem0[ss:bp - 0x0006:word16] : word16)
  Class: Eq_549
  DataType: word16
  OrigDataType: word16
T_554: (in ax_6 : word16)
  Class: Eq_554
  DataType: word16
  OrigDataType: word16
T_555: (in 0x0008 : word16)
  Class: Eq_555
  DataType: word16
  OrigDataType: word16
T_556: (in bp - 0x0008 : word16)
  Class: Eq_556
  DataType: word16
  OrigDataType: word16
T_557: (in Mem0[ss:bp - 0x0008:word16] : word16)
  Class: Eq_554
  DataType: word16
  OrigDataType: word16
T_558: (in 0x0002 : word16)
  Class: Eq_558
  DataType: word16
  OrigDataType: word16
T_559: (in bp - 0x0002 : word16)
  Class: Eq_559
  DataType: word16
  OrigDataType: word16
T_560: (in Mem0[ss:bp - 0x0002:word16] : word16)
  Class: Eq_549
  DataType: int16
  OrigDataType: int16
T_561: (in dx_5 < Mem0[ss:bp - 0x0002:word16] : bool)
  Class: Eq_561
  DataType: bool
  OrigDataType: bool
T_562: (in si_15 : word16)
  Class: Eq_562
  DataType: word16
  OrigDataType: word16
T_563: (in 0x0001 : word16)
  Class: Eq_562
  DataType: word16
  OrigDataType: word16
T_564: (in bp - 0x0002 : word16)
  Class: Eq_564
  DataType: word16
  OrigDataType: word16
T_565: (in Mem0[ss:bp - 0x0002:word16] : word16)
  Class: Eq_549
  DataType: int16
  OrigDataType: int16
T_566: (in dx_5 > Mem0[ss:bp - 0x0002:word16] : bool)
  Class: Eq_566
  DataType: bool
  OrigDataType: bool
T_567: (in si_103 : word16)
  Class: Eq_567
  DataType: word16
  OrigDataType: word16
T_568: (in wArg00 : word16)
  Class: Eq_568
  DataType: word16
  OrigDataType: word16
T_569: (in *siOut : word16)
  Class: Eq_568
  DataType: 
  OrigDataType: 
T_570: (in bx_94 : word16)
  Class: Eq_570
  DataType: 
  OrigDataType: 
T_571: (in di_95 : word16)
  Class: Eq_571
  DataType: 
  OrigDataType: 
T_572: (in fn0800_0E5B : ptr32)
  Class: Eq_473
  DataType: 
  OrigDataType: 
T_573: (in 0x01D4 : word16)
  Class: Eq_476
  DataType: 
  OrigDataType: 
T_574: (in out bx_94 : ptr16)
  Class: Eq_477
  DataType: 
  OrigDataType: 
T_575: (in out di_95 : ptr16)
  Class: Eq_478
  DataType: 
  OrigDataType: 
T_576: (in fn0800_0E5B(ds, 0x01D4, out bx_94, out di_95) : word16)
  Class: Eq_576
  DataType: 
  OrigDataType: 
T_577: (in 0x0004 : word16)
  Class: Eq_577
  DataType: 
  OrigDataType: 
T_578: (in bp - 0x0004 : word16)
  Class: Eq_578
  DataType: 
  OrigDataType: 
T_579: (in Mem0[ss:bp - 0x0004:word16] : word16)
  Class: Eq_554
  DataType: 
  OrigDataType: 
T_580: (in ax_6 <=u Mem0[ss:bp - 0x0004:word16] : bool)
  Class: Eq_580
  DataType: 
  OrigDataType: 
T_581: (in 0x0028 : word16)
  Class: Eq_562
  DataType: 
  OrigDataType: 
T_582: (in si_15 <= 0x0028 : bool)
  Class: Eq_582
  DataType: 
  OrigDataType: 
T_583: (in 0x000C : word16)
  Class: Eq_583
  DataType: 
  OrigDataType: 
T_584: (in bp - 0x000C : word16)
  Class: Eq_584
  DataType: 
  OrigDataType: 
T_585: (in Mem0[ss:bp - 0x000C:word16] : word16)
  Class: Eq_585
  DataType: 
  OrigDataType: 
T_586: (in 0x000C : word16)
  Class: Eq_586
  DataType: 
  OrigDataType: 
T_587: (in bp - 0x000C : word16)
  Class: Eq_587
  DataType: 
  OrigDataType: 
T_588: (in Mem0[ss:bp - 0x000C:word16] : word16)
  Class: Eq_588
  DataType: 
  OrigDataType: 
T_589: (in 0x000C : word16)
  Class: Eq_589
  DataType: 
  OrigDataType: 
T_590: (in bp - 0x000C : word16)
  Class: Eq_590
  DataType: 
  OrigDataType: 
T_591: (in Mem0[ss:bp - 0x000C:word16] : word16)
  Class: Eq_591
  DataType: 
  OrigDataType: 
T_592: (in 0x000C : word16)
  Class: Eq_592
  DataType: 
  OrigDataType: 
T_593: (in bp - 0x000C : word16)
  Class: Eq_593
  DataType: 
  OrigDataType: 
T_594: (in Mem0[ss:bp - 0x000C:word16] : word16)
  Class: Eq_594
  DataType: 
  OrigDataType: 
T_595: (in 0x000C : word16)
  Class: Eq_595
  DataType: 
  OrigDataType: 
T_596: (in bp - 0x000C : word16)
  Class: Eq_596
  DataType: 
  OrigDataType: 
T_597: (in Mem0[ss:bp - 0x000C:word16] : word16)
  Class: Eq_597
  DataType: 
  OrigDataType: 
T_598: (in 0x000C : word16)
  Class: Eq_598
  DataType: 
  OrigDataType: 
T_599: (in bp - 0x000C : word16)
  Class: Eq_599
  DataType: 
  OrigDataType: 
T_600: (in Mem0[ss:bp - 0x000C:word16] : word16)
  Class: Eq_600
  DataType: 
  OrigDataType: 
T_601: (in 0x000C : word16)
  Class: Eq_601
  DataType: 
  OrigDataType: 
T_602: (in bp - 0x000C : word16)
  Class: Eq_602
  DataType: 
  OrigDataType: 
T_603: (in Mem0[ss:bp - 0x000C:word16] : word16)
  Class: Eq_603
  DataType: 
  OrigDataType: 
T_604: (in 0x000C : word16)
  Class: Eq_604
  DataType: 
  OrigDataType: 
T_605: (in bp - 0x000C : word16)
  Class: Eq_605
  DataType: 
  OrigDataType: 
T_606: (in Mem0[ss:bp - 0x000C:word16] : word16)
  Class: Eq_606
  DataType: 
  OrigDataType: 
T_607: (in 0x000C : word16)
  Class: Eq_607
  DataType: 
  OrigDataType: 
T_608: (in bp - 0x000C : word16)
  Class: Eq_608
  DataType: 
  OrigDataType: 
T_609: (in Mem0[ss:bp - 0x000C:word16] : word16)
  Class: Eq_609
  DataType: 
  OrigDataType: 
T_610: (in 0x000C : word16)
  Class: Eq_610
  DataType: 
  OrigDataType: 
T_611: (in bp - 0x000C : word16)
  Class: Eq_611
  DataType: 
  OrigDataType: 
T_612: (in Mem0[ss:bp - 0x000C:word16] : word16)
  Class: Eq_612
  DataType: 
  OrigDataType: 
T_613: (in 0x000C : word16)
  Class: Eq_613
  DataType: 
  OrigDataType: 
T_614: (in bp - 0x000C : word16)
  Class: Eq_614
  DataType: 
  OrigDataType: 
T_615: (in Mem0[ss:bp - 0x000C:word16] : word16)
  Class: Eq_615
  DataType: 
  OrigDataType: 
T_616: (in 0x000C : word16)
  Class: Eq_616
  DataType: 
  OrigDataType: 
T_617: (in bp - 0x000C : word16)
  Class: Eq_617
  DataType: 
  OrigDataType: 
T_618: (in Mem0[ss:bp - 0x000C:word16] : word16)
  Class: Eq_618
  DataType: 
  OrigDataType: 
T_619: (in 0x000C : word16)
  Class: Eq_619
  DataType: 
  OrigDataType: 
T_620: (in bp - 0x000C : word16)
  Class: Eq_620
  DataType: 
  OrigDataType: 
T_621: (in Mem0[ss:bp - 0x000C:word16] : word16)
  Class: Eq_621
  DataType: 
  OrigDataType: 
T_622: (in 0x000C : word16)
  Class: Eq_622
  DataType: 
  OrigDataType: 
T_623: (in bp - 0x000C : word16)
  Class: Eq_623
  DataType: 
  OrigDataType: 
T_624: (in Mem0[ss:bp - 0x000C:word16] : word16)
  Class: Eq_624
  DataType: 
  OrigDataType: 
T_625: (in 0x000C : word16)
  Class: Eq_625
  DataType: 
  OrigDataType: 
T_626: (in bp - 0x000C : word16)
  Class: Eq_626
  DataType: 
  OrigDataType: 
T_627: (in Mem0[ss:bp - 0x000C:word16] : word16)
  Class: Eq_627
  DataType: 
  OrigDataType: 
T_628: (in 0x000C : word16)
  Class: Eq_628
  DataType: 
  OrigDataType: 
T_629: (in bp - 0x000C : word16)
  Class: Eq_629
  DataType: 
  OrigDataType: 
T_630: (in Mem0[ss:bp - 0x000C:word16] : word16)
  Class: Eq_630
  DataType: 
  OrigDataType: 
T_631: (in 0x000C : word16)
  Class: Eq_631
  DataType: 
  OrigDataType: 
T_632: (in bp - 0x000C : word16)
  Class: Eq_632
  DataType: 
  OrigDataType: 
T_633: (in Mem0[ss:bp - 0x000C:word16] : word16)
  Class: Eq_633
  DataType: 
  OrigDataType: 
T_634: (in 0x000C : word16)
  Class: Eq_634
  DataType: 
  OrigDataType: 
T_635: (in bp - 0x000C : word16)
  Class: Eq_635
  DataType: 
  OrigDataType: 
T_636: (in Mem0[ss:bp - 0x000C:word16] : word16)
  Class: Eq_636
  DataType: 
  OrigDataType: 
T_637: (in 0x000C : word16)
  Class: Eq_637
  DataType: 
  OrigDataType: 
T_638: (in bp - 0x000C : word16)
  Class: Eq_638
  DataType: 
  OrigDataType: 
T_639: (in Mem0[ss:bp - 0x000C:word16] : word16)
  Class: Eq_639
  DataType: 
  OrigDataType: 
T_640: (in 0x000C : word16)
  Class: Eq_640
  DataType: 
  OrigDataType: 
T_641: (in bp - 0x000C : word16)
  Class: Eq_641
  DataType: 
  OrigDataType: 
T_642: (in Mem0[ss:bp - 0x000C:word16] : word16)
  Class: Eq_642
  DataType: 
  OrigDataType: 
T_643: (in 0x000C : word16)
  Class: Eq_643
  DataType: 
  OrigDataType: 
T_644: (in bp - 0x000C : word16)
  Class: Eq_644
  DataType: 
  OrigDataType: 
T_645: (in Mem0[ss:bp - 0x000C:word16] : word16)
  Class: Eq_645
  DataType: 
  OrigDataType: 
T_646: (in 0x000C : word16)
  Class: Eq_646
  DataType: 
  OrigDataType: 
T_647: (in bp - 0x000C : word16)
  Class: Eq_647
  DataType: 
  OrigDataType: 
T_648: (in Mem0[ss:bp - 0x000C:word16] : word16)
  Class: Eq_648
  DataType: 
  OrigDataType: 
T_649: (in 0x000C : word16)
  Class: Eq_649
  DataType: 
  OrigDataType: 
T_650: (in bp - 0x000C : word16)
  Class: Eq_650
  DataType: 
  OrigDataType: 
T_651: (in Mem0[ss:bp - 0x000C:word16] : word16)
  Class: Eq_651
  DataType: 
  OrigDataType: 
T_652: (in 0x000C : word16)
  Class: Eq_652
  DataType: 
  OrigDataType: 
T_653: (in bp - 0x000C : word16)
  Class: Eq_653
  DataType: 
  OrigDataType: 
T_654: (in Mem0[ss:bp - 0x000C:word16] : word16)
  Class: Eq_654
  DataType: 
  OrigDataType: 
T_655: (in 0x000C : word16)
  Class: Eq_655
  DataType: 
  OrigDataType: 
T_656: (in bp - 0x000C : word16)
  Class: Eq_656
  DataType: 
  OrigDataType: 
T_657: (in Mem0[ss:bp - 0x000C:word16] : word16)
  Class: Eq_657
  DataType: 
  OrigDataType: 
T_658: (in Mem0[ss:bp - 0x000C:word16] *u Mem0[ss:bp - 0x000C:word16] : uint32)
  Class: Eq_658
  DataType: 
  OrigDataType: 
T_659: (in (word16) (Mem0[ss:bp - 0x000C:word16] *u Mem0[ss:bp - 0x000C:word16]) : word16)
  Class: Eq_659
  DataType: 
  OrigDataType: 
T_660: (in Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u Mem0[ss:bp - 0x000C:word16]) : uint32)
  Class: Eq_660
  DataType: 
  OrigDataType: 
T_661: (in (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u Mem0[ss:bp - 0x000C:word16])) : word16)
  Class: Eq_661
  DataType: 
  OrigDataType: 
T_662: (in Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u Mem0[ss:bp - 0x000C:word16])) : uint32)
  Class: Eq_662
  DataType: 
  OrigDataType: 
T_663: (in (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u Mem0[ss:bp - 0x000C:word16]))) : word16)
  Class: Eq_663
  DataType: 
  OrigDataType: 
T_664: (in Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u Mem0[ss:bp - 0x000C:word16]))) : uint32)
  Class: Eq_664
  DataType: 
  OrigDataType: 
T_665: (in (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u Mem0[ss:bp - 0x000C:word16])))) : word16)
  Class: Eq_665
  DataType: 
  OrigDataType: 
T_666: (in Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u Mem0[ss:bp - 0x000C:word16])))) : uint32)
  Class: Eq_666
  DataType: 
  OrigDataType: 
T_667: (in (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u Mem0[ss:bp - 0x000C:word16]))))) : word16)
  Class: Eq_667
  DataType: 
  OrigDataType: 
T_668: (in Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u Mem0[ss:bp - 0x000C:word16]))))) : uint32)
  Class: Eq_668
  DataType: 
  OrigDataType: 
T_669: (in (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u Mem0[ss:bp - 0x000C:word16])))))) : word16)
  Class: Eq_669
  DataType: 
  OrigDataType: 
T_670: (in Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u Mem0[ss:bp - 0x000C:word16])))))) : uint32)
  Class: Eq_670
  DataType: 
  OrigDataType: 
T_671: (in (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u Mem0[ss:bp - 0x000C:word16]))))))) : word16)
  Class: Eq_671
  DataType: 
  OrigDataType: 
T_672: (in Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u Mem0[ss:bp - 0x000C:word16]))))))) : uint32)
  Class: Eq_672
  DataType: 
  OrigDataType: 
T_673: (in (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u Mem0[ss:bp - 0x000C:word16])))))))) : word16)
  Class: Eq_673
  DataType: 
  OrigDataType: 
T_674: (in Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u Mem0[ss:bp - 0x000C:word16])))))))) : uint32)
  Class: Eq_674
  DataType: 
  OrigDataType: 
T_675: (in (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u Mem0[ss:bp - 0x000C:word16]))))))))) : word16)
  Class: Eq_675
  DataType: 
  OrigDataType: 
T_676: (in Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u Mem0[ss:bp - 0x000C:word16]))))))))) : uint32)
  Class: Eq_676
  DataType: 
  OrigDataType: 
T_677: (in (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u Mem0[ss:bp - 0x000C:word16])))))))))) : word16)
  Class: Eq_677
  DataType: 
  OrigDataType: 
T_678: (in Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u Mem0[ss:bp - 0x000C:word16])))))))))) : uint32)
  Class: Eq_678
  DataType: 
  OrigDataType: 
T_679: (in (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u Mem0[ss:bp - 0x000C:word16]))))))))))) : word16)
  Class: Eq_679
  DataType: 
  OrigDataType: 
T_680: (in Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u Mem0[ss:bp - 0x000C:word16]))))))))))) : uint32)
  Class: Eq_680
  DataType: 
  OrigDataType: 
T_681: (in (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u Mem0[ss:bp - 0x000C:word16])))))))))))) : word16)
  Class: Eq_681
  DataType: 
  OrigDataType: 
T_682: (in Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u Mem0[ss:bp - 0x000C:word16])))))))))))) : uint32)
  Class: Eq_682
  DataType: 
  OrigDataType: 
T_683: (in (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u Mem0[ss:bp - 0x000C:word16]))))))))))))) : word16)
  Class: Eq_683
  DataType: 
  OrigDataType: 
T_684: (in Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u Mem0[ss:bp - 0x000C:word16]))))))))))))) : uint32)
  Class: Eq_684
  DataType: 
  OrigDataType: 
T_685: (in (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u Mem0[ss:bp - 0x000C:word16])))))))))))))) : word16)
  Class: Eq_685
  DataType: 
  OrigDataType: 
T_686: (in Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u Mem0[ss:bp - 0x000C:word16])))))))))))))) : uint32)
  Class: Eq_686
  DataType: 
  OrigDataType: 
T_687: (in (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u Mem0[ss:bp - 0x000C:word16]))))))))))))))) : word16)
  Class: Eq_687
  DataType: 
  OrigDataType: 
T_688: (in Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u Mem0[ss:bp - 0x000C:word16]))))))))))))))) : uint32)
  Class: Eq_688
  DataType: 
  OrigDataType: 
T_689: (in (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u Mem0[ss:bp - 0x000C:word16])))))))))))))))) : word16)
  Class: Eq_689
  DataType: 
  OrigDataType: 
T_690: (in Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u Mem0[ss:bp - 0x000C:word16])))))))))))))))) : uint32)
  Class: Eq_690
  DataType: 
  OrigDataType: 
T_691: (in (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u Mem0[ss:bp - 0x000C:word16]))))))))))))))))) : word16)
  Class: Eq_691
  DataType: 
  OrigDataType: 
T_692: (in Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u Mem0[ss:bp - 0x000C:word16]))))))))))))))))) : uint32)
  Class: Eq_692
  DataType: 
  OrigDataType: 
T_693: (in (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u Mem0[ss:bp - 0x000C:word16])))))))))))))))))) : word16)
  Class: Eq_693
  DataType: 
  OrigDataType: 
T_694: (in Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u Mem0[ss:bp - 0x000C:word16])))))))))))))))))) : uint32)
  Class: Eq_694
  DataType: 
  OrigDataType: 
T_695: (in (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u Mem0[ss:bp - 0x000C:word16]))))))))))))))))))) : word16)
  Class: Eq_695
  DataType: 
  OrigDataType: 
T_696: (in Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u Mem0[ss:bp - 0x000C:word16]))))))))))))))))))) : uint32)
  Class: Eq_696
  DataType: 
  OrigDataType: 
T_697: (in (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u Mem0[ss:bp - 0x000C:word16])))))))))))))))))))) : word16)
  Class: Eq_697
  DataType: 
  OrigDataType: 
T_698: (in Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u Mem0[ss:bp - 0x000C:word16])))))))))))))))))))) : uint32)
  Class: Eq_698
  DataType: 
  OrigDataType: 
T_699: (in (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u Mem0[ss:bp - 0x000C:word16]))))))))))))))))))))) : word16)
  Class: Eq_699
  DataType: 
  OrigDataType: 
T_700: (in Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u Mem0[ss:bp - 0x000C:word16]))))))))))))))))))))) : uint32)
  Class: Eq_700
  DataType: 
  OrigDataType: 
T_701: (in (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u Mem0[ss:bp - 0x000C:word16])))))))))))))))))))))) : word16)
  Class: Eq_701
  DataType: 
  OrigDataType: 
T_702: (in Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u Mem0[ss:bp - 0x000C:word16])))))))))))))))))))))) : uint32)
  Class: Eq_702
  DataType: 
  OrigDataType: 
T_703: (in (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u Mem0[ss:bp - 0x000C:word16]))))))))))))))))))))))) : word16)
  Class: Eq_703
  DataType: 
  OrigDataType: 
T_704: (in Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u Mem0[ss:bp - 0x000C:word16]))))))))))))))))))))))) : uint32)
  Class: Eq_704
  DataType: 
  OrigDataType: 
T_705: (in (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u Mem0[ss:bp - 0x000C:word16])))))))))))))))))))))))) : word16)
  Class: Eq_705
  DataType: 
  OrigDataType: 
T_706: (in 0x0003 : word16)
  Class: Eq_706
  DataType: 
  OrigDataType: 
T_707: (in (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u Mem0[ss:bp - 0x000C:word16])))))))))))))))))))))))) *u 0x0003 : uint32)
  Class: Eq_707
  DataType: 
  OrigDataType: 
T_708: (in (word16) ((word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u (word16) (Mem0[ss:bp - 0x000C:word16] *u Mem0[ss:bp - 0x000C:word16])))))))))))))))))))))))) *u 0x0003) : word16)
  Class: Eq_708
  DataType: 
  OrigDataType: 
T_709: (in 0x000C : word16)
  Class: Eq_709
  DataType: 
  OrigDataType: 
T_710: (in bp - 0x000C : word16)
  Class: Eq_710
  DataType: 
  OrigDataType: 
T_711: (in Mem82[ss:bp - 0x000C:word16] : word16)
  Class: Eq_708
  DataType: 
  OrigDataType: 
T_712: (in 0x0001 : word16)
  Class: Eq_712
  DataType: 
  OrigDataType: 
T_713: (in si_15 + 0x0001 : word16)
  Class: Eq_562
  DataType: 
  OrigDataType: 
T_714: (in v13_22 : word16)
  Class: Eq_714
  DataType: 
  OrigDataType: 
T_715: (in 0x0008 : word16)
  Class: Eq_715
  DataType: 
  OrigDataType: 
T_716: (in bp - 0x0008 : word16)
  Class: Eq_716
  DataType: 
  OrigDataType: 
T_717: (in Mem0[ss:bp - 0x0008:word16] : word16)
  Class: Eq_717
  DataType: 
  OrigDataType: 
T_718: (in 0x0001 : word16)
  Class: Eq_718
  DataType: 
  OrigDataType: 
T_719: (in Mem0[ss:bp - 0x0008:word16] + 0x0001 : word16)
  Class: Eq_714
  DataType: 
  OrigDataType: 
T_720: (in 0x0008 : word16)
  Class: Eq_720
  DataType: 
  OrigDataType: 
T_721: (in bp - 0x0008 : word16)
  Class: Eq_721
  DataType: 
  OrigDataType: 
T_722: (in Mem23[ss:bp - 0x0008:word16] : word16)
  Class: Eq_714
  DataType: 
  OrigDataType: 
T_723: (in 0x0006 : word16)
  Class: Eq_723
  DataType: 
  OrigDataType: 
T_724: (in bp - 0x0006 : word16)
  Class: Eq_724
  DataType: 
  OrigDataType: 
T_725: (in Mem23[ss:bp - 0x0006:word16] : word16)
  Class: Eq_725
  DataType: 
  OrigDataType: 
T_726: (in 0x0000 : word16)
  Class: Eq_714
  DataType: 
  OrigDataType: 
T_727: (in v13_22 <u 0x0000 : bool)
  Class: Eq_727
  DataType: 
  OrigDataType: 
T_728: (in Mem23[ss:bp - 0x0006:word16] + (v13_22 <u 0x0000) : word16)
  Class: Eq_728
  DataType: 
  OrigDataType: 
T_729: (in 0x0006 : word16)
  Class: Eq_729
  DataType: 
  OrigDataType: 
T_730: (in bp - 0x0006 : word16)
  Class: Eq_730
  DataType: 
  OrigDataType: 
T_731: (in Mem27[ss:bp - 0x0006:word16] : word16)
  Class: Eq_728
  DataType: 
  OrigDataType: 
T_732: (in ax_21 : word16)
  Class: Eq_732
  DataType: 
  OrigDataType: 
T_733: (in 0x0240 : word16)
  Class: Eq_733
  DataType: 
  OrigDataType: 
T_734: (in Mem0[ds:0x0240:word16] : word16)
  Class: Eq_732
  DataType: 
  OrigDataType: 
T_735: (in v7_22 : word16)
  Class: Eq_735
  DataType: 
  OrigDataType: 
T_736: (in 0x0240 : word16)
  Class: Eq_736
  DataType: 
  OrigDataType: 
T_737: (in Mem0[ds:0x0240:word16] : word16)
  Class: Eq_737
  DataType: 
  OrigDataType: 
T_738: (in 0x0001 : word16)
  Class: Eq_738
  DataType: 
  OrigDataType: 
T_739: (in Mem0[ds:0x0240:word16] - 0x0001 : word16)
  Class: Eq_735
  DataType: 
  OrigDataType: 
T_740: (in Mem23[ds:0x0240:word16] : word16)
  Class: Eq_735
  DataType: 
  OrigDataType: 
T_741: (in al_25 : byte)
  Class: Eq_16
  DataType: 
  OrigDataType: 
T_742: (in (byte) ax_21 : byte)
  Class: Eq_16
  DataType: 
  OrigDataType: 
T_743: (in 0x0000 : word16)
  Class: Eq_732
  DataType: 
  OrigDataType: 
T_744: (in ax_21 != 0x0000 : bool)
  Class: Eq_744
  DataType: 
  OrigDataType: 
T_745: (in cs : selector)
  Class: Eq_745
  DataType: 
  OrigDataType: 
T_746: (in 0x05EA : word16)
  Class: Eq_746
  DataType: 
  OrigDataType: 
T_747: (in SEQ(ds, 0x05EA) : ptr32)
  Class: Eq_747
  DataType: 
  OrigDataType: 
T_748: (in 0x0240 : word16)
  Class: Eq_748
  DataType: 
  OrigDataType: 
T_749: (in Mem23[ds:0x0240:word16] : word16)
  Class: Eq_749
  DataType: 
  OrigDataType: 
T_750: (in 0x0002 : word16)
  Class: Eq_750
  DataType: 
  OrigDataType: 
T_751: (in Mem23[ds:0x0240:word16] * 0x0002 : word16)
  Class: Eq_751
  DataType: 
  OrigDataType: 
T_752: (in SEQ(ds, 0x05EA)[Mem23[ds:0x0240:word16] * 0x0002] : word16)
  Class: Eq_752
  DataType: 
  OrigDataType: 
T_753: (in SEQ(cs, SEQ(ds, 0x05EA)[Mem23[ds:0x0240:word16] * 0x0002]) : ptr32)
  Class: Eq_753
  DataType: 
  OrigDataType: 
T_754: (in 0x0236 : word16)
  Class: Eq_754
  DataType: 
  OrigDataType: 
T_755: (in Mem23[ds:0x0236:word16] : word16)
  Class: Eq_755
  DataType: 
  OrigDataType: 
T_756: (in SEQ(cs, Mem23[ds:0x0236:word16]) : ptr32)
  Class: Eq_756
  DataType: 
  OrigDataType: 
T_757: (in 0x0238 : word16)
  Class: Eq_757
  DataType: 
  OrigDataType: 
T_758: (in Mem23[ds:0x0238:word16] : word16)
  Class: Eq_758
  DataType: 
  OrigDataType: 
T_759: (in SEQ(cs, Mem23[ds:0x0238:word16]) : ptr32)
  Class: Eq_759
  DataType: 
  OrigDataType: 
T_760: (in 0x023A : word16)
  Class: Eq_760
  DataType: 
  OrigDataType: 
T_761: (in Mem23[ds:0x023A:word16] : word16)
  Class: Eq_761
  DataType: 
  OrigDataType: 
T_762: (in SEQ(cs, Mem23[ds:0x023A:word16]) : ptr32)
  Class: Eq_762
  DataType: 
  OrigDataType: 
T_763: (in fn0800_0121 : ptr32)
  Class: Eq_319
  DataType: 
  OrigDataType: 
T_764: (in bLoc06 : byte)
  Class: Eq_322
  DataType: 
  OrigDataType: 
T_765: (in fn0800_0121(al_25, bLoc06) : void)
  Class: Eq_765
  DataType: 
  OrigDataType: 
T_766: (in si : word16)
  Class: Eq_766
  DataType: 
  OrigDataType: 
T_767: (in *dsOut : selector)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_768: (in es_231 : selector)
  Class: Eq_768
  DataType: 
  OrigDataType: 
T_769: (in wArg00 : word16)
  Class: Eq_769
  DataType: 
  OrigDataType: 
T_770: (in 0x0340 : word16)
  Class: Eq_770
  DataType: 
  OrigDataType: 
T_771: (in Mem3[0x0800:0x0340:word16] : word16)
  Class: Eq_769
  DataType: 
  OrigDataType: 
T_772: (in 0x0342 : word16)
  Class: Eq_772
  DataType: 
  OrigDataType: 
T_773: (in Mem6[0x0800:0x0342:word16] : word16)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_774: (in si_23 : word16)
  Class: Eq_774
  DataType: 
  OrigDataType: 
T_775: (in 0x008A : word16)
  Class: Eq_775
  DataType: 
  OrigDataType: 
T_776: (in Mem6[ds:0x008A:word16] : word16)
  Class: Eq_774
  DataType: 
  OrigDataType: 
T_777: (in es_8 : selector)
  Class: Eq_768
  DataType: 
  OrigDataType: 
T_778: (in 0x0090 : word16)
  Class: Eq_778
  DataType: 
  OrigDataType: 
T_779: (in Mem6[ds:0x0090:selector] : selector)
  Class: Eq_768
  DataType: 
  OrigDataType: 
T_780: (in ax_13 : word16)
  Class: Eq_780
  DataType: 
  OrigDataType: 
T_781: (in ax : word16)
  Class: Eq_781
  DataType: 
  OrigDataType: 
T_782: (in 0x0080 : word16)
  Class: Eq_782
  DataType: 
  OrigDataType: 
T_783: (in Mem6[ds:0x0080:byte] : byte)
  Class: Eq_783
  DataType: 
  OrigDataType: 
T_784: (in DPB(ax, Mem6[ds:0x0080:byte], 0, 8) : word16)
  Class: Eq_780
  DataType: 
  OrigDataType: 
T_785: (in si_103 : word16)
  Class: Eq_111
  DataType: 
  OrigDataType: 
T_786: (in 0x0002 : word16)
  Class: Eq_786
  DataType: 
  OrigDataType: 
T_787: (in si_23 + 0x0002 : word16)
  Class: Eq_111
  DataType: 
  OrigDataType: 
T_788: (in cx_25 : word16)
  Class: Eq_788
  DataType: 
  OrigDataType: 
T_789: (in 0x0001 : word16)
  Class: Eq_788
  DataType: 
  OrigDataType: 
T_790: (in 0x0092 : word16)
  Class: Eq_790
  DataType: 
  OrigDataType: 
T_791: (in Mem6[ds:0x0092:byte] : byte)
  Class: Eq_791
  DataType: 
  OrigDataType: 
T_792: (in 0x03 : byte)
  Class: Eq_791
  DataType: 
  OrigDataType: 
T_793: (in Mem6[ds:0x0092:byte] <u 0x03 : bool)
  Class: Eq_793
  DataType: 
  OrigDataType: 
T_794: (in di_83 : word16)
  Class: Eq_111
  DataType: 
  OrigDataType: 
T_795: (in fp : ptr16)
  Class: Eq_795
  DataType: 
  OrigDataType: 
T_796: (in 0x0002 : word16)
  Class: Eq_796
  DataType: 
  OrigDataType: 
T_797: (in ax_13 + 0x0002 : word16)
  Class: Eq_797
  DataType: 
  OrigDataType: 
T_798: (in ax_13 + 0x0002 + cx_25 : word16)
  Class: Eq_798
  DataType: 
  OrigDataType: 
T_799: (in 0xFFFE : word16)
  Class: Eq_799
  DataType: 
  OrigDataType: 
T_800: (in ax_13 + 0x0002 + cx_25 & 0xFFFE : word16)
  Class: Eq_800
  DataType: 
  OrigDataType: 
T_801: (in ax_13 + 0x0002 + cx_25 & 0xFFFE & 0xFFFE : word16)
  Class: Eq_801
  DataType: 
  OrigDataType: 
T_802: (in fp - (((ax_13 + 0x0002) + cx_25 & 0xFFFE) & 0xFFFE) : word16)
  Class: Eq_802
  DataType: 
  OrigDataType: 
T_803: (in 0x0001 : word16)
  Class: Eq_803
  DataType: 
  OrigDataType: 
T_804: (in fp - (((ax_13 + 0x0002) + cx_25 & 0xFFFE) & 0xFFFE) + 0x0001 : word16)
  Class: Eq_111
  DataType: 
  OrigDataType: 
T_805: (in 0x0000 : word16)
  Class: Eq_111
  DataType: 
  OrigDataType: 
T_806: (in di_83 <u 0x0000 : bool)
  Class: Eq_806
  DataType: 
  OrigDataType: 
T_807: (in 0x008C : word16)
  Class: Eq_807
  DataType: 
  OrigDataType: 
T_808: (in Mem6[ds:0x008C:selector] : selector)
  Class: Eq_768
  DataType: 
  OrigDataType: 
T_809: (in di_232 : word16)
  Class: Eq_809
  DataType: 
  OrigDataType: 
T_810: (in si_23 + 0x0002 : word16)
  Class: Eq_809
  DataType: 
  OrigDataType: 
T_811: (in cl_233 : byte)
  Class: Eq_811
  DataType: 
  OrigDataType: 
T_812: (in 0x7F : byte)
  Class: Eq_811
  DataType: 
  OrigDataType: 
T_813: (in cx_234 : word16)
  Class: Eq_813
  DataType: 
  OrigDataType: 
T_814: (in 0x007F : word16)
  Class: Eq_813
  DataType: 
  OrigDataType: 
T_815: (in 0x0000 : word16)
  Class: Eq_813
  DataType: 
  OrigDataType: 
T_816: (in cx_234 == 0x0000 : bool)
  Class: Eq_816
  DataType: 
  OrigDataType: 
T_817: (in 0x0001 : word16)
  Class: Eq_817
  DataType: 
  OrigDataType: 
T_818: (in cx_234 - 0x0001 : word16)
  Class: Eq_813
  DataType: 
  OrigDataType: 
T_819: (in di_260 : word16)
  Class: Eq_809
  DataType: 
  OrigDataType: 
T_820: (in 0x0001 : word16)
  Class: Eq_820
  DataType: 
  OrigDataType: 
T_821: (in di_260 + 0x0001 : word16)
  Class: Eq_809
  DataType: 
  OrigDataType: 
T_822: (in (byte) cx_234 : byte)
  Class: Eq_811
  DataType: 
  OrigDataType: 
T_823: (in 0x00 : byte)
  Class: Eq_823
  DataType: 
  OrigDataType: 
T_824: (in 0x0000 : word16)
  Class: Eq_824
  DataType: 
  OrigDataType: 
T_825: (in di_260 + 0x0000 : word16)
  Class: Eq_825
  DataType: 
  OrigDataType: 
T_826: (in Mem6[es_231:di_260 + 0x0000:byte] : byte)
  Class: Eq_823
  DataType: 
  OrigDataType: 
T_827: (in 0x00 != Mem6[es_231:di_260 + 0x0000:byte] : bool)
  Class: Eq_827
  DataType: 
  OrigDataType: 
T_828: (in 0x0000 : word16)
  Class: Eq_813
  DataType: 
  OrigDataType: 
T_829: (in cx_234 == 0x0000 : bool)
  Class: Eq_829
  DataType: 
  OrigDataType: 
T_830: (in 0x7F : byte)
  Class: Eq_830
  DataType: 
  OrigDataType: 
T_831: (in cl_233 ^ 0x7F : byte)
  Class: Eq_831
  DataType: 
  OrigDataType: 
T_832: (in DPB(cx_234, cl_233 ^ 0x7F, 0, 8) : word16)
  Class: Eq_788
  DataType: 
  OrigDataType: 
T_833: (in ss : selector)
  Class: Eq_833
  DataType: 
  OrigDataType: 
T_834: (in 0x0002 : word16)
  Class: Eq_834
  DataType: 
  OrigDataType: 
T_835: (in di_83 - 0x0002 : word16)
  Class: Eq_835
  DataType: 
  OrigDataType: 
T_836: (in Mem93[ss:di_83 - 0x0002:word16] : word16)
  Class: Eq_788
  DataType: 
  OrigDataType: 
T_837: (in cx_105 : word16)
  Class: Eq_837
  DataType: 
  OrigDataType: 
T_838: (in 0x0001 : word16)
  Class: Eq_838
  DataType: 
  OrigDataType: 
T_839: (in cx_25 - 0x0001 : word16)
  Class: Eq_839
  DataType: 
  OrigDataType: 
T_840: (in 0x0001 : word16)
  Class: Eq_840
  DataType: 
  OrigDataType: 
T_841: (in cx_25 - 0x0001 + 0x0001 : word16)
  Class: Eq_837
  DataType: 
  OrigDataType: 
T_842: (in di_104 : word16)
  Class: Eq_111
  DataType: 
  OrigDataType: 
T_843: (in 0x00 : byte)
  Class: Eq_843
  DataType: 
  OrigDataType: 
T_844: (in 0x0000 : word16)
  Class: Eq_844
  DataType: 
  OrigDataType: 
T_845: (in di_104 + 0x0000 : word16)
  Class: Eq_845
  DataType: 
  OrigDataType: 
T_846: (in Mem109[ss:di_104 + 0x0000:byte] : byte)
  Class: Eq_843
  DataType: 
  OrigDataType: 
T_847: (in di_110 : word16)
  Class: Eq_847
  DataType: 
  OrigDataType: 
T_848: (in 0x0000 : word16)
  Class: Eq_848
  DataType: 
  OrigDataType: 
T_849: (in di_104 + 0x0000 : word16)
  Class: Eq_847
  DataType: 
  OrigDataType: 
T_850: (in si_113 : word16)
  Class: Eq_850
  DataType: 
  OrigDataType: 
T_851: (in 0x0081 : word16)
  Class: Eq_850
  DataType: 
  OrigDataType: 
T_852: (in cx_115 : word16)
  Class: Eq_852
  DataType: 
  OrigDataType: 
T_853: (in 0x0001 : word16)
  Class: Eq_853
  DataType: 
  OrigDataType: 
T_854: (in ax_13 + 0x0001 : word16)
  Class: Eq_852
  DataType: 
  OrigDataType: 
T_855: (in ax_118 : word16)
  Class: Eq_837
  DataType: 
  OrigDataType: 
T_856: (in al_120 : byte)
  Class: Eq_856
  DataType: 
  OrigDataType: 
T_857: (in (byte) cx_105 : byte)
  Class: Eq_856
  DataType: 
  OrigDataType: 
T_858: (in dx_121 : word16)
  Class: Eq_837
  DataType: 
  OrigDataType: 
T_859: (in bx_122 : word16)
  Class: Eq_859
  DataType: 
  OrigDataType: 
T_860: (in 0x0000 : word16)
  Class: Eq_860
  DataType: 
  OrigDataType: 
T_861: (in cx_105 + 0x0000 : word16)
  Class: Eq_859
  DataType: 
  OrigDataType: 
T_862: (in 0x0000 : word16)
  Class: Eq_862
  DataType: 
  OrigDataType: 
T_863: (in si_103 + 0x0000 : word16)
  Class: Eq_863
  DataType: 
  OrigDataType: 
T_864: (in Mem93[es_231:si_103 + 0x0000:byte] : byte)
  Class: Eq_864
  DataType: 
  OrigDataType: 
T_865: (in 0x0000 : word16)
  Class: Eq_865
  DataType: 
  OrigDataType: 
T_866: (in di_104 + 0x0000 : word16)
  Class: Eq_866
  DataType: 
  OrigDataType: 
T_867: (in Mem102[ss:di_104 + 0x0000:byte] : byte)
  Class: Eq_864
  DataType: 
  OrigDataType: 
T_868: (in 0x0001 : word16)
  Class: Eq_868
  DataType: 
  OrigDataType: 
T_869: (in si_103 + 0x0001 : word16)
  Class: Eq_111
  DataType: 
  OrigDataType: 
T_870: (in 0x0001 : word16)
  Class: Eq_870
  DataType: 
  OrigDataType: 
T_871: (in di_104 + 0x0001 : word16)
  Class: Eq_111
  DataType: 
  OrigDataType: 
T_872: (in 0x0001 : word16)
  Class: Eq_872
  DataType: 
  OrigDataType: 
T_873: (in cx_105 - 0x0001 : word16)
  Class: Eq_837
  DataType: 
  OrigDataType: 
T_874: (in 0xFFFF : word16)
  Class: Eq_837
  DataType: 
  OrigDataType: 
T_875: (in cx_105 == 0xFFFF : bool)
  Class: Eq_875
  DataType: 
  OrigDataType: 
T_876: (in 0x20 : byte)
  Class: Eq_856
  DataType: 
  OrigDataType: 
T_877: (in al_120 == 0x20 : bool)
  Class: Eq_877
  DataType: 
  OrigDataType: 
T_878: (in C_138 : byte)
  Class: Eq_878
  DataType: 
  OrigDataType: 
T_879: (in cx_187 : word16)
  Class: Eq_879
  DataType: 
  OrigDataType: 
T_880: (in di_83 - 0x0002 : word16)
  Class: Eq_880
  DataType: 
  OrigDataType: 
T_881: (in Mem109[ss:di_83 - 0x0002:word16] : word16)
  Class: Eq_881
  DataType: 
  OrigDataType: 
T_882: (in Mem109[ss:di_83 - 0x0002:word16] + dx_121 : word16)
  Class: Eq_879
  DataType: 
  OrigDataType: 
T_883: (in ds_189 : selector)
  Class: Eq_883
  DataType: 
  OrigDataType: 
T_884: (in 0x0342 : word16)
  Class: Eq_884
  DataType: 
  OrigDataType: 
T_885: (in Mem109[0x0800:0x0342:selector] : selector)
  Class: Eq_883
  DataType: 
  OrigDataType: 
T_886: (in *dsOut : selector)
  Class: Eq_883
  DataType: 
  OrigDataType: 
T_887: (in 0x0084 : word16)
  Class: Eq_887
  DataType: 
  OrigDataType: 
T_888: (in Mem190[ds_189:0x0084:word16] : word16)
  Class: Eq_859
  DataType: 
  OrigDataType: 
T_889: (in bp_195 : word16)
  Class: Eq_889
  DataType: 
  OrigDataType: 
T_890: (in 0x0001 : word16)
  Class: Eq_890
  DataType: 
  OrigDataType: 
T_891: (in bx_122 + 0x0001 : word16)
  Class: Eq_891
  DataType: 
  OrigDataType: 
T_892: (in 0x0002 : word16)
  Class: Eq_892
  DataType: 
  OrigDataType: 
T_893: (in (bx_122 + 0x0001) * 0x0002 : word16)
  Class: Eq_893
  DataType: 
  OrigDataType: 
T_894: (in di_83 - (bx_122 + 0x0001) * 0x0002 : word16)
  Class: Eq_889
  DataType: 
  OrigDataType: 
T_895: (in 0x0000 : word16)
  Class: Eq_889
  DataType: 
  OrigDataType: 
T_896: (in bp_195 <u 0x0000 : bool)
  Class: Eq_896
  DataType: 
  OrigDataType: 
T_897: (in CZ_180 : byte)
  Class: Eq_878
  DataType: 
  OrigDataType: 
T_898: (in fn0800_03CF : ptr32)
  Class: Eq_898
  DataType: 
  OrigDataType: 
T_899: (in signature of fn0800_03CF : void)
  Class: Eq_898
  DataType: 
  OrigDataType: 
T_900: (in ax : word16)
  Class: Eq_837
  DataType: 
  OrigDataType: 
T_901: (in cx : word16)
  Class: Eq_852
  DataType: 
  OrigDataType: 
T_902: (in dx : word16)
  Class: Eq_837
  DataType: 
  OrigDataType: 
T_903: (in bx : word16)
  Class: Eq_859
  DataType: 
  OrigDataType: 
T_904: (in si : word16)
  Class: Eq_850
  DataType: 
  OrigDataType: 
T_905: (in di : word16)
  Class: Eq_847
  DataType: 
  OrigDataType: 
T_906: (in es : selector)
  Class: Eq_833
  DataType: 
  OrigDataType: 
T_907: (in ds : selector)
  Class: Eq_768
  DataType: 
  OrigDataType: 
T_908: (in axOut : ptr16)
  Class: Eq_908
  DataType: 
  OrigDataType: 
T_909: (in cxOut : ptr16)
  Class: Eq_909
  DataType: 
  OrigDataType: 
T_910: (in dxOut : ptr16)
  Class: Eq_910
  DataType: 
  OrigDataType: 
T_911: (in bxOut : ptr16)
  Class: Eq_911
  DataType: 
  OrigDataType: 
T_912: (in siOut : ptr16)
  Class: Eq_912
  DataType: 
  OrigDataType: 
T_913: (in diOut : ptr16)
  Class: Eq_913
  DataType: 
  OrigDataType: 
T_914: (in out ax_118 : ptr16)
  Class: Eq_908
  DataType: 
  OrigDataType: 
T_915: (in out cx_115 : ptr16)
  Class: Eq_909
  DataType: 
  OrigDataType: 
T_916: (in out dx_121 : ptr16)
  Class: Eq_910
  DataType: 
  OrigDataType: 
T_917: (in out bx_122 : ptr16)
  Class: Eq_911
  DataType: 
  OrigDataType: 
T_918: (in out si_113 : ptr16)
  Class: Eq_912
  DataType: 
  OrigDataType: 
T_919: (in out di_110 : ptr16)
  Class: Eq_913
  DataType: 
  OrigDataType: 
T_920: (in fn0800_03CF(ax_118, cx_115, dx_121, bx_122, si_113, di_110, ss, es_8, out ax_118, out cx_115, out dx_121, out bx_122, out si_113, out di_110) : byte)
  Class: Eq_878
  DataType: 
  OrigDataType: 
T_921: (in 0x00 : byte)
  Class: Eq_856
  DataType: 
  OrigDataType: 
T_922: (in 0x00 : byte)
  Class: Eq_922
  DataType: 
  OrigDataType: 
T_923: (in DPB(ax_118, 0x00, 0, 8) : word16)
  Class: Eq_837
  DataType: 
  OrigDataType: 
T_924: (in 0x0D : byte)
  Class: Eq_856
  DataType: 
  OrigDataType: 
T_925: (in al_120 == 0x0D : bool)
  Class: Eq_925
  DataType: 
  OrigDataType: 
T_926: (in 0x09 : byte)
  Class: Eq_856
  DataType: 
  OrigDataType: 
T_927: (in al_120 != 0x09 : bool)
  Class: Eq_927
  DataType: 
  OrigDataType: 
T_928: (in CZ_137 : byte)
  Class: Eq_878
  DataType: 
  OrigDataType: 
T_929: (in fn0800_03CF : ptr32)
  Class: Eq_898
  DataType: 
  OrigDataType: 
T_930: (in out ax_118 : ptr16)
  Class: Eq_908
  DataType: 
  OrigDataType: 
T_931: (in out cx_115 : ptr16)
  Class: Eq_909
  DataType: 
  OrigDataType: 
T_932: (in out dx_121 : ptr16)
  Class: Eq_910
  DataType: 
  OrigDataType: 
T_933: (in out bx_122 : ptr16)
  Class: Eq_911
  DataType: 
  OrigDataType: 
T_934: (in out si_113 : ptr16)
  Class: Eq_912
  DataType: 
  OrigDataType: 
T_935: (in out di_110 : ptr16)
  Class: Eq_913
  DataType: 
  OrigDataType: 
T_936: (in fn0800_03CF(ax_118, cx_115, dx_121, bx_122, si_113, di_110, ss, es_8, out ax_118, out cx_115, out dx_121, out bx_122, out si_113, out di_110) : byte)
  Class: Eq_878
  DataType: 
  OrigDataType: 
T_937: (in fn0800_01E2 : ptr32)
  Class: Eq_109
  DataType: 
  OrigDataType: 
T_938: (in fn0800_01E2(si_103) : void)
  Class: Eq_938
  DataType: 
  OrigDataType: 
T_939: (in 0x0086 : word16)
  Class: Eq_939
  DataType: 
  OrigDataType: 
T_940: (in Mem199[ds_189:0x0086:word16] : word16)
  Class: Eq_889
  DataType: 
  OrigDataType: 
T_941: (in 0x0000 : word16)
  Class: Eq_941
  DataType: 
  OrigDataType: 
T_942: (in 0x0000 : word16)
  Class: Eq_942
  DataType: 
  OrigDataType: 
T_943: (in bp_195 + 0x0000 : word16)
  Class: Eq_943
  DataType: 
  OrigDataType: 
T_944: (in Mem214[ss:bp_195 + 0x0000:word16] : word16)
  Class: Eq_941
  DataType: 
  OrigDataType: 
T_945: (in 0x0340 : word16)
  Class: Eq_945
  DataType: 
  OrigDataType: 
T_946: (in Mem214[0x0800:0x0340:word16] : word16)
  Class: Eq_946
  DataType: 
  OrigDataType: 
T_947: (in 0x0000 : word16)
  Class: Eq_947
  DataType: 
  OrigDataType: 
T_948: (in bp_195 + 0x0000 : word16)
  Class: Eq_948
  DataType: 
  OrigDataType: 
T_949: (in Mem216[ss:bp_195 + 0x0000:word16] : word16)
  Class: Eq_111
  DataType: 
  OrigDataType: 
T_950: (in 0x0002 : word16)
  Class: Eq_950
  DataType: 
  OrigDataType: 
T_951: (in bp_195 + 0x0002 : word16)
  Class: Eq_889
  DataType: 
  OrigDataType: 
T_952: (in al_221 : byte)
  Class: Eq_952
  DataType: 
  OrigDataType: 
T_953: (in 0x0000 : word16)
  Class: Eq_953
  DataType: 
  OrigDataType: 
T_954: (in si_103 + 0x0000 : word16)
  Class: Eq_954
  DataType: 
  OrigDataType: 
T_955: (in Mem216[ds_189:si_103 + 0x0000:byte] : byte)
  Class: Eq_952
  DataType: 
  OrigDataType: 
T_956: (in 0x0001 : word16)
  Class: Eq_956
  DataType: 
  OrigDataType: 
T_957: (in si_103 + 0x0001 : word16)
  Class: Eq_111
  DataType: 
  OrigDataType: 
T_958: (in 0x0001 : word16)
  Class: Eq_958
  DataType: 
  OrigDataType: 
T_959: (in cx_187 - 0x0001 : word16)
  Class: Eq_879
  DataType: 
  OrigDataType: 
T_960: (in 0x00 : byte)
  Class: Eq_952
  DataType: 
  OrigDataType: 
T_961: (in al_221 != 0x00 : bool)
  Class: Eq_961
  DataType: 
  OrigDataType: 
T_962: (in 0x0000 : word16)
  Class: Eq_879
  DataType: 
  OrigDataType: 
T_963: (in cx_187 != 0x0000 : bool)
  Class: Eq_963
  DataType: 
  OrigDataType: 
T_964: (in al_221 != 0x00 && cx_187 != 0x0000 : bool)
  Class: Eq_964
  DataType: 
  OrigDataType: 
T_965: (in 0x00 : byte)
  Class: Eq_952
  DataType: 
  OrigDataType: 
T_966: (in al_221 == 0x00 : bool)
  Class: Eq_966
  DataType: 
  OrigDataType: 
T_967: (in 0x0000 : word16)
  Class: Eq_879
  DataType: 
  OrigDataType: 
T_968: (in cx_187 == 0x0000 : bool)
  Class: Eq_968
  DataType: 
  OrigDataType: 
T_969: (in CZ : byte)
  Class: Eq_969
  DataType: 
  OrigDataType: 
T_970: (in *dxOut : word16)
  Class: Eq_837
  DataType: 
  OrigDataType: 
T_971: (in *diOut : word16)
  Class: Eq_847
  DataType: 
  OrigDataType: 
T_972: (in *bxOut : word16)
  Class: Eq_859
  DataType: 
  OrigDataType: 
T_973: (in *cxOut : word16)
  Class: Eq_852
  DataType: 
  OrigDataType: 
T_974: (in *siOut : word16)
  Class: Eq_850
  DataType: 
  OrigDataType: 
T_975: (in ax_15 : word16)
  Class: Eq_837
  DataType: 
  OrigDataType: 
T_976: (in al_4 : byte)
  Class: Eq_976
  DataType: 
  OrigDataType: 
T_977: (in (byte) ax : byte)
  Class: Eq_976
  DataType: 
  OrigDataType: 
T_978: (in 0x0000 : word16)
  Class: Eq_837
  DataType: 
  OrigDataType: 
T_979: (in ax == 0x0000 : bool)
  Class: Eq_979
  DataType: 
  OrigDataType: 
T_980: (in ax_21 : word16)
  Class: Eq_980
  DataType: 
  OrigDataType: 
T_981: (in 0x00 : byte)
  Class: Eq_981
  DataType: 
  OrigDataType: 
T_982: (in DPB(ax_15, 0x00, 0, 8) : word16)
  Class: Eq_982
  DataType: 
  OrigDataType: 
T_983: (in *axOut : word16)
  Class: Eq_982
  DataType: 
  OrigDataType: 
T_984: (in CZ_26 : byte)
  Class: Eq_984
  DataType: 
  OrigDataType: 
T_985: (in true : bool)
  Class: Eq_984
  DataType: 
  OrigDataType: 
T_986: (in 0x0000 : word16)
  Class: Eq_852
  DataType: 
  OrigDataType: 
T_987: (in cx == 0x0000 : bool)
  Class: Eq_987
  DataType: 
  OrigDataType: 
T_988: (in 0x0000 : word16)
  Class: Eq_988
  DataType: 
  OrigDataType: 
T_989: (in di + 0x0000 : word16)
  Class: Eq_989
  DataType: 
  OrigDataType: 
T_990: (in Mem78[es:di + 0x0000:byte] : byte)
  Class: Eq_976
  DataType: 
  OrigDataType: 
T_991: (in dx_77 : word16)
  Class: Eq_991
  DataType: 
  OrigDataType: 
T_992: (in 0x0001 : word16)
  Class: Eq_992
  DataType: 
  OrigDataType: 
T_993: (in dx + 0x0001 : word16)
  Class: Eq_993
  DataType: 
  OrigDataType: 
T_994: (in *dxOut : word16)
  Class: Eq_993
  DataType: 
  OrigDataType: 
T_995: (in di_80 : word16)
  Class: Eq_995
  DataType: 
  OrigDataType: 
T_996: (in 0x0001 : word16)
  Class: Eq_996
  DataType: 
  OrigDataType: 
T_997: (in di + 0x0001 : word16)
  Class: Eq_997
  DataType: 
  OrigDataType: 
T_998: (in *diOut : word16)
  Class: Eq_997
  DataType: 
  OrigDataType: 
T_999: (in DPB(ax, al_4, 0, 8) : word16)
  Class: Eq_837
  DataType: 
  OrigDataType: 
T_1000: (in 0x00 : byte)
  Class: Eq_976
  DataType: 
  OrigDataType: 
T_1001: (in al_4 != 0x00 : bool)
  Class: Eq_1001
  DataType: 
  OrigDataType: 
T_1002: (in bx_86 : word16)
  Class: Eq_1002
  DataType: 
  OrigDataType: 
T_1003: (in 0x0001 : word16)
  Class: Eq_1003
  DataType: 
  OrigDataType: 
T_1004: (in bx + 0x0001 : word16)
  Class: Eq_1004
  DataType: 
  OrigDataType: 
T_1005: (in *bxOut : word16)
  Class: Eq_1004
  DataType: 
  OrigDataType: 
T_1006: (in al_46 : byte)
  Class: Eq_1006
  DataType: 
  OrigDataType: 
T_1007: (in 0x0000 : word16)
  Class: Eq_1007
  DataType: 
  OrigDataType: 
T_1008: (in si + 0x0000 : word16)
  Class: Eq_1008
  DataType: 
  OrigDataType: 
T_1009: (in Mem0[ds:si + 0x0000:byte] : byte)
  Class: Eq_1006
  DataType: 
  OrigDataType: 
T_1010: (in si_47 : word16)
  Class: Eq_1010
  DataType: 
  OrigDataType: 
T_1011: (in 0x0001 : word16)
  Class: Eq_1011
  DataType: 
  OrigDataType: 
T_1012: (in si + 0x0001 : word16)
  Class: Eq_1010
  DataType: 
  OrigDataType: 
T_1013: (in *siOut : word16)
  Class: Eq_1010
  DataType: 
  OrigDataType: 
T_1014: (in cx_48 : word16)
  Class: Eq_1014
  DataType: 
  OrigDataType: 
T_1015: (in 0x0001 : word16)
  Class: Eq_1015
  DataType: 
  OrigDataType: 
T_1016: (in cx - 0x0001 : word16)
  Class: Eq_1014
  DataType: 
  OrigDataType: 
T_1017: (in *cxOut : word16)
  Class: Eq_1014
  DataType: 
  OrigDataType: 
T_1018: (in ax_50 : word16)
  Class: Eq_1018
  DataType: 
  OrigDataType: 
T_1019: (in 0x22 : byte)
  Class: Eq_1019
  DataType: 
  OrigDataType: 
T_1020: (in al_46 - 0x22 : byte)
  Class: Eq_1020
  DataType: 
  OrigDataType: 
T_1021: (in DPB(ax_15, al_46 - 0x22, 0, 8) : word16)
  Class: Eq_1021
  DataType: 
  OrigDataType: 
T_1022: (in *axOut : word16)
  Class: Eq_1021
  DataType: 
  OrigDataType: 
T_1023: (in al_46 - 0x22 : byte)
  Class: Eq_1023
  DataType: 
  OrigDataType: 
T_1024: (in cond(al_46 - 0x22) : byte)
  Class: Eq_984
  DataType: 
  OrigDataType: 
T_1025: (in 0x22 : byte)
  Class: Eq_1006
  DataType: 
  OrigDataType: 
T_1026: (in al_46 == 0x22 : bool)
  Class: Eq_1026
  DataType: 
  OrigDataType: 
T_1027: (in ax_57 : word16)
  Class: Eq_1027
  DataType: 
  OrigDataType: 
T_1028: (in DPB(ax_15, al_46, 0, 8) : word16)
  Class: Eq_1028
  DataType: 
  OrigDataType: 
T_1029: (in *axOut : word16)
  Class: Eq_1028
  DataType: 
  OrigDataType: 
T_1030: (in 0x5C : byte)
  Class: Eq_1006
  DataType: 
  OrigDataType: 
T_1031: (in al_46 != 0x5C : bool)
  Class: Eq_1031
  DataType: 
  OrigDataType: 
T_1032: (in si_64 : word16)
  Class: Eq_1032
  DataType: 
  OrigDataType: 
T_1033: (in *siOut : word16)
  Class: Eq_1010
  DataType: 
  OrigDataType: 
T_1034: (in false : bool)
  Class: Eq_984
  DataType: 
  OrigDataType: 
T_1035: (in si + 0x0001 : word16)
  Class: Eq_1035
  DataType: 
  OrigDataType: 
T_1036: (in Mem0[ds:si + 0x0001:byte] : byte)
  Class: Eq_1036
  DataType: 
  OrigDataType: 
T_1037: (in 0x22 : byte)
  Class: Eq_1036
  DataType: 
  OrigDataType: 
T_1038: (in Mem0[ds:si + 0x0001:byte] != 0x22 : bool)
  Class: Eq_1038
  DataType: 
  OrigDataType: 
T_1039: (in ax_73 : word16)
  Class: Eq_1039
  DataType: 
  OrigDataType: 
T_1040: (in si + 0x0001 : word16)
  Class: Eq_1040
  DataType: 
  OrigDataType: 
T_1041: (in Mem0[ds:si + 0x0001:byte] : byte)
  Class: Eq_1041
  DataType: 
  OrigDataType: 
T_1042: (in DPB(ax_15, Mem0[ds:si + 0x0001:byte], 0, 8) : word16)
  Class: Eq_1042
  DataType: 
  OrigDataType: 
T_1043: (in *axOut : word16)
  Class: Eq_1042
  DataType: 
  OrigDataType: 
T_1044: (in 0x0002 : word16)
  Class: Eq_1044
  DataType: 
  OrigDataType: 
T_1045: (in si + 0x0002 : word16)
  Class: Eq_1010
  DataType: 
  OrigDataType: 
T_1046: (in cx_75 : word16)
  Class: Eq_1046
  DataType: 
  OrigDataType: 
T_1047: (in 0x0002 : word16)
  Class: Eq_1047
  DataType: 
  OrigDataType: 
T_1048: (in cx - 0x0002 : word16)
  Class: Eq_1048
  DataType: 
  OrigDataType: 
T_1049: (in *cxOut : word16)
  Class: Eq_1048
  DataType: 
  OrigDataType: 
T_1050: (in cx_4 : word16)
  Class: Eq_1050
  DataType: 
  OrigDataType: 
T_1051: (in 0x008A : word16)
  Class: Eq_1051
  DataType: 
  OrigDataType: 
T_1052: (in Mem0[ds:0x008A:word16] : word16)
  Class: Eq_1050
  DataType: 
  OrigDataType: 
T_1053: (in ax_7 : word16)
  Class: Eq_1053
  DataType: 
  OrigDataType: 
T_1054: (in fn0800_0580 : ptr32)
  Class: Eq_1054
  DataType: 
  OrigDataType: 
T_1055: (in signature of fn0800_0580 : void)
  Class: Eq_1054
  DataType: 
  OrigDataType: 
T_1056: (in ds : selector)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_1057: (in wArg02 : word16)
  Class: Eq_1050
  DataType: 
  OrigDataType: 
T_1058: (in fn0800_0580(ds, cx_4) : word16)
  Class: Eq_1053
  DataType: 
  OrigDataType: 
T_1059: (in cx_65 : word16)
  Class: Eq_1050
  DataType: 
  OrigDataType: 
T_1060: (in di_10 : word16)
  Class: Eq_1053
  DataType: 
  OrigDataType: 
T_1061: (in 0x0000 : word16)
  Class: Eq_1053
  DataType: 
  OrigDataType: 
T_1062: (in ax_7 == 0x0000 : bool)
  Class: Eq_1062
  DataType: 
  OrigDataType: 
T_1063: (in ds_58 : selector)
  Class: Eq_1063
  DataType: 
  OrigDataType: 
T_1064: (in 0x008C : word16)
  Class: Eq_1064
  DataType: 
  OrigDataType: 
T_1065: (in Mem0[ds:0x008C:selector] : selector)
  Class: Eq_1063
  DataType: 
  OrigDataType: 
T_1066: (in 0x0000 : word16)
  Class: Eq_111
  DataType: 
  OrigDataType: 
T_1067: (in ax_78 : word16)
  Class: Eq_1067
  DataType: 
  OrigDataType: 
T_1068: (in fn0800_0580 : ptr32)
  Class: Eq_1054
  DataType: 
  OrigDataType: 
T_1069: (in 0x008E : word16)
  Class: Eq_1069
  DataType: 
  OrigDataType: 
T_1070: (in Mem0[ds:0x008E:word16] : word16)
  Class: Eq_1050
  DataType: 
  OrigDataType: 
T_1071: (in fn0800_0580(ds, Mem0[ds:0x008E:word16]) : word16)
  Class: Eq_1067
  DataType: 
  OrigDataType: 
T_1072: (in 0x0088 : word16)
  Class: Eq_1072
  DataType: 
  OrigDataType: 
T_1073: (in Mem83[ds:0x0088:word16] : word16)
  Class: Eq_1067
  DataType: 
  OrigDataType: 
T_1074: (in di_102 : word16)
  Class: Eq_1053
  DataType: 
  OrigDataType: 
T_1075: (in bx_80 : word16)
  Class: Eq_1067
  DataType: 
  OrigDataType: 
T_1076: (in 0x0000 : word16)
  Class: Eq_1067
  DataType: 
  OrigDataType: 
T_1077: (in ax_78 != 0x0000 : bool)
  Class: Eq_1077
  DataType: 
  OrigDataType: 
T_1078: (in 0x0000 : word16)
  Class: Eq_1078
  DataType: 
  OrigDataType: 
T_1079: (in si + 0x0000 : word16)
  Class: Eq_1079
  DataType: 
  OrigDataType: 
T_1080: (in Mem0[ds_58:si + 0x0000:byte] : byte)
  Class: Eq_1080
  DataType: 
  OrigDataType: 
T_1081: (in 0x0000 : word16)
  Class: Eq_1081
  DataType: 
  OrigDataType: 
T_1082: (in di_10 + 0x0000 : word16)
  Class: Eq_1082
  DataType: 
  OrigDataType: 
T_1083: (in Mem67[ds:di_10 + 0x0000:byte] : byte)
  Class: Eq_1080
  DataType: 
  OrigDataType: 
T_1084: (in 0x0001 : word16)
  Class: Eq_1084
  DataType: 
  OrigDataType: 
T_1085: (in si + 0x0001 : word16)
  Class: Eq_111
  DataType: 
  OrigDataType: 
T_1086: (in 0x0001 : word16)
  Class: Eq_1086
  DataType: 
  OrigDataType: 
T_1087: (in di_10 + 0x0001 : word16)
  Class: Eq_1053
  DataType: 
  OrigDataType: 
T_1088: (in 0x0001 : word16)
  Class: Eq_1088
  DataType: 
  OrigDataType: 
T_1089: (in cx_65 - 0x0001 : word16)
  Class: Eq_1050
  DataType: 
  OrigDataType: 
T_1090: (in 0x0000 : word16)
  Class: Eq_1050
  DataType: 
  OrigDataType: 
T_1091: (in cx_65 == 0x0000 : bool)
  Class: Eq_1091
  DataType: 
  OrigDataType: 
T_1092: (in fn0800_01E2 : ptr32)
  Class: Eq_109
  DataType: 
  OrigDataType: 
T_1093: (in fn0800_01E2(si) : void)
  Class: Eq_1093
  DataType: 
  OrigDataType: 
T_1094: (in cx_103 : word16)
  Class: Eq_1094
  DataType: 
  OrigDataType: 
T_1095: (in 0xFFFF : word16)
  Class: Eq_1094
  DataType: 
  OrigDataType: 
T_1096: (in 0x0000 : word16)
  Class: Eq_1096
  DataType: 
  OrigDataType: 
T_1097: (in di_102 + 0x0000 : word16)
  Class: Eq_1097
  DataType: 
  OrigDataType: 
T_1098: (in Mem97[ds:di_102 + 0x0000:byte] : byte)
  Class: Eq_1098
  DataType: 
  OrigDataType: 
T_1099: (in 0x00 : byte)
  Class: Eq_1098
  DataType: 
  OrigDataType: 
T_1100: (in Mem97[ds:di_102 + 0x0000:byte] != 0x00 : bool)
  Class: Eq_1100
  DataType: 
  OrigDataType: 
T_1101: (in 0x0001 : word16)
  Class: Eq_1101
  DataType: 
  OrigDataType: 
T_1102: (in di_102 + 0x0001 : word16)
  Class: Eq_1053
  DataType: 
  OrigDataType: 
T_1103: (in 0x0001 : word16)
  Class: Eq_1103
  DataType: 
  OrigDataType: 
T_1104: (in cx_103 - 0x0001 : word16)
  Class: Eq_1094
  DataType: 
  OrigDataType: 
T_1105: (in 0x00 : byte)
  Class: Eq_1105
  DataType: 
  OrigDataType: 
T_1106: (in 0x0000 : word16)
  Class: Eq_1106
  DataType: 
  OrigDataType: 
T_1107: (in di_102 + 0x0000 : word16)
  Class: Eq_1107
  DataType: 
  OrigDataType: 
T_1108: (in Mem97[ds:di_102 + 0x0000:byte] : byte)
  Class: Eq_1105
  DataType: 
  OrigDataType: 
T_1109: (in 0x00 != Mem97[ds:di_102 + 0x0000:byte] : bool)
  Class: Eq_1109
  DataType: 
  OrigDataType: 
T_1110: (in 0x0000 : word16)
  Class: Eq_1094
  DataType: 
  OrigDataType: 
T_1111: (in cx_103 == 0x0000 : bool)
  Class: Eq_1111
  DataType: 
  OrigDataType: 
T_1112: (in 0x0000 : word16)
  Class: Eq_1112
  DataType: 
  OrigDataType: 
T_1113: (in bx_80 + 0x0000 : word16)
  Class: Eq_1113
  DataType: 
  OrigDataType: 
T_1114: (in Mem97[ds:bx_80 + 0x0000:word16] : word16)
  Class: Eq_1053
  DataType: 
  OrigDataType: 
T_1115: (in 0x0002 : word16)
  Class: Eq_1115
  DataType: 
  OrigDataType: 
T_1116: (in bx_80 + 0x0002 : word16)
  Class: Eq_1067
  DataType: 
  OrigDataType: 
T_1117: (in 0x0000 : word16)
  Class: Eq_1117
  DataType: 
  OrigDataType: 
T_1118: (in 0x0000 : word16)
  Class: Eq_1118
  DataType: 
  OrigDataType: 
T_1119: (in bx_80 + 0x0000 : word16)
  Class: Eq_1119
  DataType: 
  OrigDataType: 
T_1120: (in Mem108[ds:bx_80 + 0x0000:word16] : word16)
  Class: Eq_1117
  DataType: 
  OrigDataType: 
T_1121: (in ax_16 : word16)
  Class: Eq_1121
  DataType: 
  OrigDataType: 
T_1122: (in ds : selector)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_1123: (in wArg02 : word16)
  Class: Eq_1121
  DataType: 
  OrigDataType: 
T_1124: (in 0x0006 : word16)
  Class: Eq_1124
  DataType: 
  OrigDataType: 
T_1125: (in wArg02 + 0x0006 : word16)
  Class: Eq_1125
  DataType: 
  OrigDataType: 
T_1126: (in Mem0[ds:wArg02 + 0x0006:word16] : word16)
  Class: Eq_1121
  DataType: 
  OrigDataType: 
T_1127: (in 0x062C : word16)
  Class: Eq_1127
  DataType: 
  OrigDataType: 
T_1128: (in Mem17[ds:0x062C:word16] : word16)
  Class: Eq_1121
  DataType: 
  OrigDataType: 
T_1129: (in ax_16 != wArg02 : bool)
  Class: Eq_1129
  DataType: 
  OrigDataType: 
T_1130: (in si_30 : word16)
  Class: Eq_1130
  DataType: 
  OrigDataType: 
T_1131: (in 0x0004 : word16)
  Class: Eq_1131
  DataType: 
  OrigDataType: 
T_1132: (in wArg02 + 0x0004 : word16)
  Class: Eq_1132
  DataType: 
  OrigDataType: 
T_1133: (in Mem17[ds:wArg02 + 0x0004:word16] : word16)
  Class: Eq_1130
  DataType: 
  OrigDataType: 
T_1134: (in 0x062C : word16)
  Class: Eq_1134
  DataType: 
  OrigDataType: 
T_1135: (in Mem17[ds:0x062C:word16] : word16)
  Class: Eq_1135
  DataType: 
  OrigDataType: 
T_1136: (in 0x0004 : word16)
  Class: Eq_1136
  DataType: 
  OrigDataType: 
T_1137: (in Mem17[ds:0x062C:word16] + 0x0004 : word16)
  Class: Eq_1137
  DataType: 
  OrigDataType: 
T_1138: (in Mem32[ds:Mem17[ds:0x062C:word16] + 0x0004:word16] : word16)
  Class: Eq_1130
  DataType: 
  OrigDataType: 
T_1139: (in 0x062C : word16)
  Class: Eq_1139
  DataType: 
  OrigDataType: 
T_1140: (in Mem32[ds:0x062C:word16] : word16)
  Class: Eq_1140
  DataType: 
  OrigDataType: 
T_1141: (in 0x0006 : word16)
  Class: Eq_1141
  DataType: 
  OrigDataType: 
T_1142: (in si_30 + 0x0006 : word16)
  Class: Eq_1142
  DataType: 
  OrigDataType: 
T_1143: (in Mem34[ds:si_30 + 0x0006:word16] : word16)
  Class: Eq_1140
  DataType: 
  OrigDataType: 
T_1144: (in 0x0000 : word16)
  Class: Eq_1144
  DataType: 
  OrigDataType: 
T_1145: (in 0x062C : word16)
  Class: Eq_1145
  DataType: 
  OrigDataType: 
T_1146: (in Mem28[ds:0x062C:word16] : word16)
  Class: Eq_1144
  DataType: 
  OrigDataType: 
T_1147: (in ax : word16)
  Class: Eq_1147
  DataType: 
  OrigDataType: 
T_1148: (in ds : selector)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_1149: (in wArg02 : word16)
  Class: Eq_1149
  DataType: 
  OrigDataType: 
T_1150: (in 0x0000 : word16)
  Class: Eq_1150
  DataType: 
  OrigDataType: 
T_1151: (in wArg02 + 0x0000 : word16)
  Class: Eq_1151
  DataType: 
  OrigDataType: 
T_1152: (in Mem0[ds:wArg02 + 0x0000:word16] : word16)
  Class: Eq_1152
  DataType: 
  OrigDataType: 
T_1153: (in wArg04 : word16)
  Class: Eq_1153
  DataType: 
  OrigDataType: 
T_1154: (in Mem0[ds:wArg02 + 0x0000:word16] - wArg04 : word16)
  Class: Eq_1154
  DataType: 
  OrigDataType: 
T_1155: (in 0x0000 : word16)
  Class: Eq_1155
  DataType: 
  OrigDataType: 
T_1156: (in wArg02 + 0x0000 : word16)
  Class: Eq_1156
  DataType: 
  OrigDataType: 
T_1157: (in Mem19[ds:wArg02 + 0x0000:word16] : word16)
  Class: Eq_1154
  DataType: 
  OrigDataType: 
T_1158: (in si_21 : word16)
  Class: Eq_1158
  DataType: 
  OrigDataType: 
T_1159: (in 0x0000 : word16)
  Class: Eq_1159
  DataType: 
  OrigDataType: 
T_1160: (in wArg02 + 0x0000 : word16)
  Class: Eq_1160
  DataType: 
  OrigDataType: 
T_1161: (in Mem19[ds:wArg02 + 0x0000:word16] : word16)
  Class: Eq_1161
  DataType: 
  OrigDataType: 
T_1162: (in Mem19[ds:wArg02 + 0x0000:word16] + wArg02 : word16)
  Class: Eq_1158
  DataType: 
  OrigDataType: 
T_1163: (in 0x0001 : word16)
  Class: Eq_1163
  DataType: 
  OrigDataType: 
T_1164: (in wArg04 + 0x0001 : word16)
  Class: Eq_1164
  DataType: 
  OrigDataType: 
T_1165: (in 0x0000 : word16)
  Class: Eq_1165
  DataType: 
  OrigDataType: 
T_1166: (in si_21 + 0x0000 : word16)
  Class: Eq_1166
  DataType: 
  OrigDataType: 
T_1167: (in Mem24[ds:si_21 + 0x0000:word16] : word16)
  Class: Eq_1164
  DataType: 
  OrigDataType: 
T_1168: (in 0x0002 : word16)
  Class: Eq_1168
  DataType: 
  OrigDataType: 
T_1169: (in si_21 + 0x0002 : word16)
  Class: Eq_1169
  DataType: 
  OrigDataType: 
T_1170: (in Mem25[ds:si_21 + 0x0002:word16] : word16)
  Class: Eq_1149
  DataType: 
  OrigDataType: 
T_1171: (in 0x062A : word16)
  Class: Eq_1171
  DataType: 
  OrigDataType: 
T_1172: (in Mem25[ds:0x062A:word16] : word16)
  Class: Eq_1149
  DataType: 
  OrigDataType: 
T_1173: (in Mem25[ds:0x062A:word16] != wArg02 : bool)
  Class: Eq_1173
  DataType: 
  OrigDataType: 
T_1174: (in si_21 + wArg04 : word16)
  Class: Eq_1174
  DataType: 
  OrigDataType: 
T_1175: (in 0x0002 : word16)
  Class: Eq_1175
  DataType: 
  OrigDataType: 
T_1176: (in si_21 + wArg04 + 0x0002 : word16)
  Class: Eq_1176
  DataType: 
  OrigDataType: 
T_1177: (in Mem43[ds:si_21 + wArg04 + 0x0002:word16] : word16)
  Class: Eq_1158
  DataType: 
  OrigDataType: 
T_1178: (in 0x062A : word16)
  Class: Eq_1178
  DataType: 
  OrigDataType: 
T_1179: (in Mem39[ds:0x062A:word16] : word16)
  Class: Eq_1158
  DataType: 
  OrigDataType: 
T_1180: (in 0x0004 : word16)
  Class: Eq_1180
  DataType: 
  OrigDataType: 
T_1181: (in si_21 + 0x0004 : word16)
  Class: Eq_1181
  DataType: 
  OrigDataType: 
T_1182: (in ax : word16)
  Class: Eq_1182
  DataType: 
  OrigDataType: 
T_1183: (in ax_30 : word16)
  Class: Eq_1183
  DataType: 
  OrigDataType: 
T_1184: (in ax_21 : word16)
  Class: Eq_1184
  DataType: 
  OrigDataType: 
T_1185: (in fn0800_0617 : ptr32)
  Class: Eq_1185
  DataType: 
  OrigDataType: 
T_1186: (in signature of fn0800_0617 : void)
  Class: Eq_1185
  DataType: 
  OrigDataType: 
T_1187: (in ds : selector)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_1188: (in wArg02 : word16)
  Class: Eq_1188
  DataType: 
  OrigDataType: 
T_1189: (in wArg04 : word16)
  Class: Eq_1189
  DataType: 
  OrigDataType: 
T_1190: (in ds : selector)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_1191: (in wArg02 : word16)
  Class: Eq_1191
  DataType: 
  OrigDataType: 
T_1192: (in 0xFFFF : word16)
  Class: Eq_1192
  DataType: 
  OrigDataType: 
T_1193: (in wArg02 & 0xFFFF : word16)
  Class: Eq_1188
  DataType: 
  OrigDataType: 
T_1194: (in 0x0000 : word16)
  Class: Eq_1189
  DataType: 
  OrigDataType: 
T_1195: (in fn0800_0617(ds, wArg02 & 0xFFFF, 0x0000) : word16)
  Class: Eq_1184
  DataType: 
  OrigDataType: 
T_1196: (in 0xFFFF : word16)
  Class: Eq_1184
  DataType: 
  OrigDataType: 
T_1197: (in ax_21 != 0xFFFF : bool)
  Class: Eq_1197
  DataType: 
  OrigDataType: 
T_1198: (in 0x062A : word16)
  Class: Eq_1198
  DataType: 
  OrigDataType: 
T_1199: (in Mem0[ds:0x062A:word16] : word16)
  Class: Eq_1199
  DataType: 
  OrigDataType: 
T_1200: (in 0x0002 : word16)
  Class: Eq_1200
  DataType: 
  OrigDataType: 
T_1201: (in ax_21 + 0x0002 : word16)
  Class: Eq_1201
  DataType: 
  OrigDataType: 
T_1202: (in Mem42[ds:ax_21 + 0x0002:word16] : word16)
  Class: Eq_1199
  DataType: 
  OrigDataType: 
T_1203: (in 0x0001 : word16)
  Class: Eq_1203
  DataType: 
  OrigDataType: 
T_1204: (in wArg02 + 0x0001 : word16)
  Class: Eq_1204
  DataType: 
  OrigDataType: 
T_1205: (in 0x0000 : word16)
  Class: Eq_1205
  DataType: 
  OrigDataType: 
T_1206: (in ax_21 + 0x0000 : word16)
  Class: Eq_1206
  DataType: 
  OrigDataType: 
T_1207: (in Mem45[ds:ax_21 + 0x0000:word16] : word16)
  Class: Eq_1204
  DataType: 
  OrigDataType: 
T_1208: (in 0x062A : word16)
  Class: Eq_1208
  DataType: 
  OrigDataType: 
T_1209: (in Mem46[ds:0x062A:word16] : word16)
  Class: Eq_1184
  DataType: 
  OrigDataType: 
T_1210: (in 0x062A : word16)
  Class: Eq_1210
  DataType: 
  OrigDataType: 
T_1211: (in Mem46[ds:0x062A:word16] : word16)
  Class: Eq_1211
  DataType: 
  OrigDataType: 
T_1212: (in 0x0004 : word16)
  Class: Eq_1212
  DataType: 
  OrigDataType: 
T_1213: (in Mem46[ds:0x062A:word16] + 0x0004 : word16)
  Class: Eq_1183
  DataType: 
  OrigDataType: 
T_1214: (in 0x0000 : word16)
  Class: Eq_1183
  DataType: 
  OrigDataType: 
T_1215: (in ax : word16)
  Class: Eq_1215
  DataType: 
  OrigDataType: 
T_1216: (in ax_30 : word16)
  Class: Eq_1216
  DataType: 
  OrigDataType: 
T_1217: (in ax_21 : word16)
  Class: Eq_1217
  DataType: 
  OrigDataType: 
T_1218: (in fn0800_0617 : ptr32)
  Class: Eq_1185
  DataType: 
  OrigDataType: 
T_1219: (in ds : selector)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_1220: (in wArg02 : word16)
  Class: Eq_1220
  DataType: 
  OrigDataType: 
T_1221: (in 0xFFFF : word16)
  Class: Eq_1221
  DataType: 
  OrigDataType: 
T_1222: (in wArg02 & 0xFFFF : word16)
  Class: Eq_1188
  DataType: 
  OrigDataType: 
T_1223: (in 0x0000 : word16)
  Class: Eq_1189
  DataType: 
  OrigDataType: 
T_1224: (in fn0800_0617(ds, wArg02 & 0xFFFF, 0x0000) : word16)
  Class: Eq_1217
  DataType: 
  OrigDataType: 
T_1225: (in 0xFFFF : word16)
  Class: Eq_1217
  DataType: 
  OrigDataType: 
T_1226: (in ax_21 != 0xFFFF : bool)
  Class: Eq_1226
  DataType: 
  OrigDataType: 
T_1227: (in 0x062E : word16)
  Class: Eq_1227
  DataType: 
  OrigDataType: 
T_1228: (in Mem40[ds:0x062E:word16] : word16)
  Class: Eq_1217
  DataType: 
  OrigDataType: 
T_1229: (in 0x062A : word16)
  Class: Eq_1229
  DataType: 
  OrigDataType: 
T_1230: (in Mem41[ds:0x062A:word16] : word16)
  Class: Eq_1217
  DataType: 
  OrigDataType: 
T_1231: (in 0x0001 : word16)
  Class: Eq_1231
  DataType: 
  OrigDataType: 
T_1232: (in wArg02 + 0x0001 : word16)
  Class: Eq_1232
  DataType: 
  OrigDataType: 
T_1233: (in 0x0000 : word16)
  Class: Eq_1233
  DataType: 
  OrigDataType: 
T_1234: (in ax_21 + 0x0000 : word16)
  Class: Eq_1234
  DataType: 
  OrigDataType: 
T_1235: (in Mem44[ds:ax_21 + 0x0000:word16] : word16)
  Class: Eq_1232
  DataType: 
  OrigDataType: 
T_1236: (in 0x0004 : word16)
  Class: Eq_1236
  DataType: 
  OrigDataType: 
T_1237: (in ax_21 + 0x0004 : word16)
  Class: Eq_1216
  DataType: 
  OrigDataType: 
T_1238: (in 0x0000 : word16)
  Class: Eq_1216
  DataType: 
  OrigDataType: 
T_1239: (in ax : word16)
  Class: Eq_1239
  DataType: 
  OrigDataType: 
T_1240: (in ax_107 : word16)
  Class: Eq_1240
  DataType: 
  OrigDataType: 
T_1241: (in wArg02 : word16)
  Class: Eq_1241
  DataType: 
  OrigDataType: 
T_1242: (in 0x0000 : word16)
  Class: Eq_1241
  DataType: 
  OrigDataType: 
T_1243: (in wArg02 == 0x0000 : bool)
  Class: Eq_1243
  DataType: 
  OrigDataType: 
T_1244: (in 0x0000 : word16)
  Class: Eq_1240
  DataType: 
  OrigDataType: 
T_1245: (in 0xFFF4 : word16)
  Class: Eq_1241
  DataType: 
  OrigDataType: 
T_1246: (in wArg02 <=u 0xFFF4 : bool)
  Class: Eq_1246
  DataType: 
  OrigDataType: 
T_1247: (in ax_49 : word16)
  Class: Eq_1247
  DataType: 
  OrigDataType: 
T_1248: (in 0x000B : word16)
  Class: Eq_1248
  DataType: 
  OrigDataType: 
T_1249: (in wArg02 + 0x000B : word16)
  Class: Eq_1249
  DataType: 
  OrigDataType: 
T_1250: (in 0xFFF8 : word16)
  Class: Eq_1250
  DataType: 
  OrigDataType: 
T_1251: (in wArg02 + 0x000B & 0xFFF8 : word16)
  Class: Eq_1247
  DataType: 
  OrigDataType: 
T_1252: (in 0x062E : word16)
  Class: Eq_1252
  DataType: 
  OrigDataType: 
T_1253: (in Mem0[ds:0x062E:word16] : word16)
  Class: Eq_1253
  DataType: 
  OrigDataType: 
T_1254: (in 0x0000 : word16)
  Class: Eq_1253
  DataType: 
  OrigDataType: 
T_1255: (in Mem0[ds:0x062E:word16] != 0x0000 : bool)
  Class: Eq_1255
  DataType: 
  OrigDataType: 
T_1256: (in si_109 : word16)
  Class: Eq_1256
  DataType: 
  OrigDataType: 
T_1257: (in 0x062C : word16)
  Class: Eq_1257
  DataType: 
  OrigDataType: 
T_1258: (in Mem0[ds:0x062C:word16] : word16)
  Class: Eq_1256
  DataType: 
  OrigDataType: 
T_1259: (in 0x0000 : word16)
  Class: Eq_1256
  DataType: 
  OrigDataType: 
T_1260: (in si_109 == 0x0000 : bool)
  Class: Eq_1260
  DataType: 
  OrigDataType: 
T_1261: (in fn0800_0546 : ptr32)
  Class: Eq_1261
  DataType: 
  OrigDataType: 
T_1262: (in signature of fn0800_0546 : void)
  Class: Eq_1261
  DataType: 
  OrigDataType: 
T_1263: (in wArg02 : word16)
  Class: Eq_1247
  DataType: 
  OrigDataType: 
T_1264: (in fn0800_0546(ds, ax_49) : word16)
  Class: Eq_1240
  DataType: 
  OrigDataType: 
T_1265: (in fn0800_0509 : ptr32)
  Class: Eq_1265
  DataType: 
  OrigDataType: 
T_1266: (in signature of fn0800_0509 : void)
  Class: Eq_1265
  DataType: 
  OrigDataType: 
T_1267: (in wArg02 : word16)
  Class: Eq_1247
  DataType: 
  OrigDataType: 
T_1268: (in fn0800_0509(ds, ax_49) : word16)
  Class: Eq_1268
  DataType: 
  OrigDataType: 
T_1269: (in fn0800_0509 : ptr32)
  Class: Eq_1265
  DataType: 
  OrigDataType: 
T_1270: (in fn0800_0509(ds, ax_49) : word16)
  Class: Eq_1240
  DataType: 
  OrigDataType: 
T_1271: (in 0x0000 : word16)
  Class: Eq_1271
  DataType: 
  OrigDataType: 
T_1272: (in si_109 + 0x0000 : word16)
  Class: Eq_1272
  DataType: 
  OrigDataType: 
T_1273: (in Mem0[ds:si_109 + 0x0000:word16] : word16)
  Class: Eq_1273
  DataType: 
  OrigDataType: 
T_1274: (in 0x0028 : word16)
  Class: Eq_1274
  DataType: 
  OrigDataType: 
T_1275: (in ax_49 + 0x0028 : word16)
  Class: Eq_1273
  DataType: 
  OrigDataType: 
T_1276: (in Mem0[ds:si_109 + 0x0000:word16] <u ax_49 + 0x0028 : bool)
  Class: Eq_1276
  DataType: 
  OrigDataType: 
T_1277: (in 0x0000 : word16)
  Class: Eq_1277
  DataType: 
  OrigDataType: 
T_1278: (in si_109 + 0x0000 : word16)
  Class: Eq_1278
  DataType: 
  OrigDataType: 
T_1279: (in Mem0[ds:si_109 + 0x0000:word16] : word16)
  Class: Eq_1247
  DataType: 
  OrigDataType: 
T_1280: (in Mem0[ds:si_109 + 0x0000:word16] <u ax_49 : bool)
  Class: Eq_1280
  DataType: 
  OrigDataType: 
T_1281: (in fn0800_04CF : ptr32)
  Class: Eq_1281
  DataType: 
  OrigDataType: 
T_1282: (in signature of fn0800_04CF : void)
  Class: Eq_1281
  DataType: 
  OrigDataType: 
T_1283: (in wArg02 : word16)
  Class: Eq_1256
  DataType: 
  OrigDataType: 
T_1284: (in wArg04 : word16)
  Class: Eq_1247
  DataType: 
  OrigDataType: 
T_1285: (in fn0800_04CF(ds, si_109, ax_49) : word16)
  Class: Eq_1240
  DataType: 
  OrigDataType: 
T_1286: (in 0x0006 : word16)
  Class: Eq_1286
  DataType: 
  OrigDataType: 
T_1287: (in si_109 + 0x0006 : word16)
  Class: Eq_1287
  DataType: 
  OrigDataType: 
T_1288: (in Mem0[ds:si_109 + 0x0006:word16] : word16)
  Class: Eq_1256
  DataType: 
  OrigDataType: 
T_1289: (in 0x062C : word16)
  Class: Eq_1289
  DataType: 
  OrigDataType: 
T_1290: (in Mem0[ds:0x062C:word16] : word16)
  Class: Eq_1256
  DataType: 
  OrigDataType: 
T_1291: (in si_109 != Mem0[ds:0x062C:word16] : bool)
  Class: Eq_1291
  DataType: 
  OrigDataType: 
T_1292: (in fn0800_04A1 : ptr32)
  Class: Eq_1292
  DataType: 
  OrigDataType: 
T_1293: (in signature of fn0800_04A1 : void)
  Class: Eq_1292
  DataType: 
  OrigDataType: 
T_1294: (in wArg02 : word16)
  Class: Eq_1256
  DataType: 
  OrigDataType: 
T_1295: (in fn0800_04A1(ds, si_109) : void)
  Class: Eq_1295
  DataType: 
  OrigDataType: 
T_1296: (in 0x0000 : word16)
  Class: Eq_1296
  DataType: 
  OrigDataType: 
T_1297: (in si_109 + 0x0000 : word16)
  Class: Eq_1297
  DataType: 
  OrigDataType: 
T_1298: (in Mem0[ds:si_109 + 0x0000:word16] : word16)
  Class: Eq_1298
  DataType: 
  OrigDataType: 
T_1299: (in 0x0001 : word16)
  Class: Eq_1299
  DataType: 
  OrigDataType: 
T_1300: (in Mem0[ds:si_109 + 0x0000:word16] + 0x0001 : word16)
  Class: Eq_1300
  DataType: 
  OrigDataType: 
T_1301: (in 0x0000 : word16)
  Class: Eq_1301
  DataType: 
  OrigDataType: 
T_1302: (in si_109 + 0x0000 : word16)
  Class: Eq_1302
  DataType: 
  OrigDataType: 
T_1303: (in Mem105[ds:si_109 + 0x0000:word16] : word16)
  Class: Eq_1300
  DataType: 
  OrigDataType: 
T_1304: (in 0x0004 : word16)
  Class: Eq_1304
  DataType: 
  OrigDataType: 
T_1305: (in si_109 + 0x0004 : word16)
  Class: Eq_1240
  DataType: 
  OrigDataType: 
T_1306: (in ax : word16)
  Class: Eq_1306
  DataType: 
  OrigDataType: 
T_1307: (in ax_31 : word16)
  Class: Eq_1307
  DataType: 
  OrigDataType: 
T_1308: (in ax_12 : word16)
  Class: Eq_1308
  DataType: 
  OrigDataType: 
T_1309: (in wArg02 : word16)
  Class: Eq_1309
  DataType: 
  OrigDataType: 
T_1310: (in 0x009E : word16)
  Class: Eq_1310
  DataType: 
  OrigDataType: 
T_1311: (in Mem0[ds:0x009E:word16] : word16)
  Class: Eq_1311
  DataType: 
  OrigDataType: 
T_1312: (in wArg02 + Mem0[ds:0x009E:word16] : word16)
  Class: Eq_1308
  DataType: 
  OrigDataType: 
T_1313: (in dx_cx_18 : ui32)
  Class: Eq_1313
  DataType: 
  OrigDataType: 
T_1314: (in wArg04 : word16)
  Class: Eq_1314
  DataType: 
  OrigDataType: 
T_1315: (in 0x0000 : word16)
  Class: Eq_1308
  DataType: 
  OrigDataType: 
T_1316: (in ax_12 <u 0x0000 : bool)
  Class: Eq_1316
  DataType: 
  OrigDataType: 
T_1317: (in wArg04 + (ax_12 <u 0x0000) : word16)
  Class: Eq_1317
  DataType: 
  OrigDataType: 
T_1318: (in 0x0100 : word16)
  Class: Eq_1318
  DataType: 
  OrigDataType: 
T_1319: (in ax_12 + 0x0100 : word16)
  Class: Eq_1319
  DataType: 
  OrigDataType: 
T_1320: (in SEQ(wArg04 + (ax_12 <u 0x0000), ax_12 + 0x0100) : ui32)
  Class: Eq_1313
  DataType: 
  OrigDataType: 
T_1321: (in cx_22 : word16)
  Class: Eq_1321
  DataType: 
  OrigDataType: 
T_1322: (in 0x00000100 : ui32)
  Class: Eq_1322
  DataType: 
  OrigDataType: 
T_1323: (in dx_cx_18 + 0x00000100 : ui32)
  Class: Eq_1323
  DataType: 
  OrigDataType: 
T_1324: (in (word16) (dx_cx_18 + 0x00000100) : word16)
  Class: Eq_1321
  DataType: 
  OrigDataType: 
T_1325: (in dx_cx_18 + 0x00000100 : ui32)
  Class: Eq_1325
  DataType: 
  OrigDataType: 
T_1326: (in SLICE(dx_cx_18 + 0x00000100, word16, 16) : word16)
  Class: Eq_1326
  DataType: 
  OrigDataType: 
T_1327: (in SEQ(SLICE(dx_cx_18 + 0x00000100, word16, 16), cx_22) : ui32)
  Class: Eq_1327
  DataType: 
  OrigDataType: 
T_1328: (in 0x00000000 : ui32)
  Class: Eq_1327
  DataType: 
  OrigDataType: 
T_1329: (in SEQ(SLICE(dx_cx_18 + 0x00000100, word16, 16), cx_22) != 0x00000000 : bool)
  Class: Eq_1329
  DataType: 
  OrigDataType: 
T_1330: (in 0x0008 : word16)
  Class: Eq_1330
  DataType: 
  OrigDataType: 
T_1331: (in 0x0094 : word16)
  Class: Eq_1331
  DataType: 
  OrigDataType: 
T_1332: (in Mem37[ds:0x0094:word16] : word16)
  Class: Eq_1330
  DataType: 
  OrigDataType: 
T_1333: (in 0xFFFF : word16)
  Class: Eq_1307
  DataType: 
  OrigDataType: 
T_1334: (in fp : ptr16)
  Class: Eq_1334
  DataType: 
  OrigDataType: 
T_1335: (in 0x0002 : word16)
  Class: Eq_1335
  DataType: 
  OrigDataType: 
T_1336: (in fp - 0x0002 : word16)
  Class: Eq_1321
  DataType: 
  OrigDataType: 
T_1337: (in cx_22 >=u fp - 0x0002 : bool)
  Class: Eq_1337
  DataType: 
  OrigDataType: 
T_1338: (in v13_42 : word16)
  Class: Eq_1307
  DataType: 
  OrigDataType: 
T_1339: (in 0x009E : word16)
  Class: Eq_1339
  DataType: 
  OrigDataType: 
T_1340: (in Mem0[ds:0x009E:word16] : word16)
  Class: Eq_1307
  DataType: 
  OrigDataType: 
T_1341: (in Mem43[ds:0x009E:word16] : word16)
  Class: Eq_1308
  DataType: 
  OrigDataType: 
T_1342: (in ax : word16)
  Class: Eq_1342
  DataType: 
  OrigDataType: 
T_1343: (in bx_19 : word16)
  Class: Eq_1343
  DataType: 
  OrigDataType: 
T_1344: (in di_20 : word16)
  Class: Eq_1344
  DataType: 
  OrigDataType: 
T_1345: (in ax_21 : word16)
  Class: Eq_1345
  DataType: 
  OrigDataType: 
T_1346: (in fn0800_1083 : ptr32)
  Class: Eq_1346
  DataType: 
  OrigDataType: 
T_1347: (in signature of fn0800_1083 : void)
  Class: Eq_1346
  DataType: 
  OrigDataType: 
T_1348: (in ds : selector)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_1349: (in wArg04 : word16)
  Class: Eq_1349
  DataType: 
  OrigDataType: 
T_1350: (in bxOut : ptr16)
  Class: Eq_1350
  DataType: 
  OrigDataType: 
T_1351: (in diOut : ptr16)
  Class: Eq_1351
  DataType: 
  OrigDataType: 
T_1352: (in wArg02 : word16)
  Class: Eq_1349
  DataType: 
  OrigDataType: 
T_1353: (in out bx_19 : ptr16)
  Class: Eq_1350
  DataType: 
  OrigDataType: 
T_1354: (in out di_20 : ptr16)
  Class: Eq_1351
  DataType: 
  OrigDataType: 
T_1355: (in fn0800_1083(ds, wArg02, out bx_19, out di_20) : word16)
  Class: Eq_1345
  DataType: 
  OrigDataType: 
T_1356: (in ax : word16)
  Class: Eq_1356
  DataType: 
  OrigDataType: 
T_1357: (in bx : word16)
  Class: Eq_1357
  DataType: 
  OrigDataType: 
T_1358: (in *bxOut : word16)
  Class: Eq_1357
  DataType: 
  OrigDataType: 
T_1359: (in bLoc57_114 : byte)
  Class: Eq_1359
  DataType: 
  OrigDataType: 
T_1360: (in 0x50 : byte)
  Class: Eq_1359
  DataType: 
  OrigDataType: 
T_1361: (in sp_157 : word16)
  Class: Eq_1361
  DataType: 
  OrigDataType: 
T_1362: (in fp : ptr16)
  Class: Eq_1362
  DataType: 
  OrigDataType: 
T_1363: (in 0x00A0 : word16)
  Class: Eq_1363
  DataType: 
  OrigDataType: 
T_1364: (in fp - 0x00A0 : word16)
  Class: Eq_1361
  DataType: 
  OrigDataType: 
T_1365: (in di_112 : word16)
  Class: Eq_1365
  DataType: 
  OrigDataType: 
T_1366: (in 0x0056 : word16)
  Class: Eq_1366
  DataType: 
  OrigDataType: 
T_1367: (in fp - 0x0056 : word16)
  Class: Eq_1365
  DataType: 
  OrigDataType: 
T_1368: (in si_110 : word16)
  Class: Eq_1368
  DataType: 
  OrigDataType: 
T_1369: (in wArg04 : word16)
  Class: Eq_1368
  DataType: 
  OrigDataType: 
T_1370: (in al_40 : byte)
  Class: Eq_1370
  DataType: 
  OrigDataType: 
T_1371: (in 0x25 : byte)
  Class: Eq_1370
  DataType: 
  OrigDataType: 
T_1372: (in al_40 == 0x25 : bool)
  Class: Eq_1372
  DataType: 
  OrigDataType: 
T_1373: (in 0x0000 : word16)
  Class: Eq_1373
  DataType: 
  OrigDataType: 
T_1374: (in si_110 + 0x0000 : word16)
  Class: Eq_1374
  DataType: 
  OrigDataType: 
T_1375: (in Mem0[ds:si_110 + 0x0000:byte] : byte)
  Class: Eq_1370
  DataType: 
  OrigDataType: 
T_1376: (in al_109 : byte)
  Class: Eq_1370
  DataType: 
  OrigDataType: 
T_1377: (in DPB(ax, al_109, 0, 8) : word16)
  Class: Eq_1356
  DataType: 
  OrigDataType: 
T_1378: (in 0x0001 : word16)
  Class: Eq_1378
  DataType: 
  OrigDataType: 
T_1379: (in si_110 + 0x0001 : word16)
  Class: Eq_1368
  DataType: 
  OrigDataType: 
T_1380: (in 0x25 : byte)
  Class: Eq_1370
  DataType: 
  OrigDataType: 
T_1381: (in al_109 == 0x25 : bool)
  Class: Eq_1381
  DataType: 
  OrigDataType: 
T_1382: (in 0x0000 : word16)
  Class: Eq_1382
  DataType: 
  OrigDataType: 
T_1383: (in di_112 + 0x0000 : word16)
  Class: Eq_1383
  DataType: 
  OrigDataType: 
T_1384: (in Mem111[ds:di_112 + 0x0000:byte] : byte)
  Class: Eq_1370
  DataType: 
  OrigDataType: 
T_1385: (in v15_113 : byte)
  Class: Eq_1359
  DataType: 
  OrigDataType: 
T_1386: (in 0x01 : byte)
  Class: Eq_1386
  DataType: 
  OrigDataType: 
T_1387: (in bLoc57_114 - 0x01 : byte)
  Class: Eq_1359
  DataType: 
  OrigDataType: 
T_1388: (in 0x0001 : word16)
  Class: Eq_1388
  DataType: 
  OrigDataType: 
T_1389: (in di_112 + 0x0001 : word16)
  Class: Eq_1365
  DataType: 
  OrigDataType: 
T_1390: (in 0x00 : byte)
  Class: Eq_1359
  DataType: 
  OrigDataType: 
T_1391: (in v15_113 > 0x00 : bool)
  Class: Eq_1391
  DataType: 
  OrigDataType: 
T_1392: (in 0x0000 : word16)
  Class: Eq_1392
  DataType: 
  OrigDataType: 
T_1393: (in si_110 + 0x0000 : word16)
  Class: Eq_1393
  DataType: 
  OrigDataType: 
T_1394: (in Mem0[ds:si_110 + 0x0000:byte] : byte)
  Class: Eq_1370
  DataType: 
  OrigDataType: 
T_1395: (in 0x0001 : word16)
  Class: Eq_1395
  DataType: 
  OrigDataType: 
T_1396: (in si_110 + 0x0001 : word16)
  Class: Eq_1368
  DataType: 
  OrigDataType: 
T_1397: (in DPB(ax, al_40, 0, 8) : word16)
  Class: Eq_1356
  DataType: 
  OrigDataType: 
T_1398: (in 0x00 : byte)
  Class: Eq_1370
  DataType: 
  OrigDataType: 
T_1399: (in al_40 == 0x00 : bool)
  Class: Eq_1399
  DataType: 
  OrigDataType: 
T_1400: (in bx_117 : word16)
  Class: Eq_1400
  DataType: 
  OrigDataType: 
T_1401: (in fn0800_10B1 : ptr32)
  Class: Eq_1401
  DataType: 
  OrigDataType: 
T_1402: (in signature of fn0800_10B1 : void)
  Class: Eq_1401
  DataType: 
  OrigDataType: 
T_1403: (in bp : word16)
  Class: Eq_1403
  DataType: 
  OrigDataType: 
T_1404: (in di : word16)
  Class: Eq_1365
  DataType: 
  OrigDataType: 
T_1405: (in diOut : ptr16)
  Class: Eq_1405
  DataType: 
  OrigDataType: 
T_1406: (in 0x0002 : word16)
  Class: Eq_1406
  DataType: 
  OrigDataType: 
T_1407: (in fp - 0x0002 : word16)
  Class: Eq_1403
  DataType: 
  OrigDataType: 
T_1408: (in out di_112 : ptr16)
  Class: Eq_1405
  DataType: 
  OrigDataType: 
T_1409: (in fn0800_10B1(fp - 0x0002, di_112, out di_112) : word16)
  Class: Eq_1409
  DataType: 
  OrigDataType: 
T_1410: (in *bxOut : word16)
  Class: Eq_1409
  DataType: 
  OrigDataType: 
T_1411: (in 0x50 : byte)
  Class: Eq_1359
  DataType: 
  OrigDataType: 
T_1412: (in bLoc57_114 >= 0x50 : bool)
  Class: Eq_1412
  DataType: 
  OrigDataType: 
T_1413: (in 0x50 : byte)
  Class: Eq_1359
  DataType: 
  OrigDataType: 
T_1414: (in bLoc57_114 >= 0x50 : bool)
  Class: Eq_1414
  DataType: 
  OrigDataType: 
T_1415: (in ax_81 : word16)
  Class: Eq_1415
  DataType: 
  OrigDataType: 
T_1416: (in sp_78 : word16)
  Class: Eq_1416
  DataType: 
  OrigDataType: 
T_1417: (in 0x0002 : word16)
  Class: Eq_1417
  DataType: 
  OrigDataType: 
T_1418: (in sp_157 + 0x0002 : word16)
  Class: Eq_1416
  DataType: 
  OrigDataType: 
T_1419: (in 0x0000 : word16)
  Class: Eq_1419
  DataType: 
  OrigDataType: 
T_1420: (in 0x0000 : word16)
  Class: Eq_1419
  DataType: 
  OrigDataType: 
T_1421: (in 0x0000 == 0x0000 : bool)
  Class: Eq_1421
  DataType: 
  OrigDataType: 
T_1422: (in di_98 : word16)
  Class: Eq_1365
  DataType: 
  OrigDataType: 
T_1423: (in fn0800_10B1 : ptr32)
  Class: Eq_1401
  DataType: 
  OrigDataType: 
T_1424: (in fp - 0x0002 : word16)
  Class: Eq_1403
  DataType: 
  OrigDataType: 
T_1425: (in out di_98 : ptr16)
  Class: Eq_1405
  DataType: 
  OrigDataType: 
T_1426: (in fn0800_10B1(fp - 0x0002, di_112, out di_98) : word16)
  Class: Eq_1426
  DataType: 
  OrigDataType: 
T_1427: (in di_100 : word16)
  Class: Eq_1427
  DataType: 
  OrigDataType: 
T_1428: (in bx_101 : word16)
  Class: Eq_1428
  DataType: 
  OrigDataType: 
T_1429: (in fn0800_10B1 : ptr32)
  Class: Eq_1401
  DataType: 
  OrigDataType: 
T_1430: (in fp - 0x0002 : word16)
  Class: Eq_1403
  DataType: 
  OrigDataType: 
T_1431: (in out di_100 : ptr16)
  Class: Eq_1405
  DataType: 
  OrigDataType: 
T_1432: (in fn0800_10B1(fp - 0x0002, di_98, out di_100) : word16)
  Class: Eq_1432
  DataType: 
  OrigDataType: 
T_1433: (in *bxOut : word16)
  Class: Eq_1432
  DataType: 
  OrigDataType: 
T_1434: (in ax_136 : word16)
  Class: Eq_1434
  DataType: 
  OrigDataType: 
T_1435: (in 0x00 : byte)
  Class: Eq_1435
  DataType: 
  OrigDataType: 
T_1436: (in DPB(ax, 0x00, 8, 8) : word16)
  Class: Eq_1434
  DataType: 
  OrigDataType: 
T_1437: (in bl_139 : byte)
  Class: Eq_1437
  DataType: 
  OrigDataType: 
T_1438: (in (byte) ax_136 : byte)
  Class: Eq_1437
  DataType: 
  OrigDataType: 
T_1439: (in bx_141 : word16)
  Class: Eq_1439
  DataType: 
  OrigDataType: 
T_1440: (in 0x20 : byte)
  Class: Eq_1440
  DataType: 
  OrigDataType: 
T_1441: (in bl_139 - 0x20 : byte)
  Class: Eq_1441
  DataType: 
  OrigDataType: 
T_1442: (in DPB(ax_136, bl_139 - 0x20, 0, 8) : word16)
  Class: Eq_1439
  DataType: 
  OrigDataType: 
T_1443: (in 0x80 : byte)
  Class: Eq_1437
  DataType: 
  OrigDataType: 
T_1444: (in bl_139 >=u 0x80 : bool)
  Class: Eq_1444
  DataType: 
  OrigDataType: 
T_1445: (in 0x0000 : word16)
  Class: Eq_1415
  DataType: 
  OrigDataType: 
T_1446: (in 0xFFFF : word16)
  Class: Eq_1415
  DataType: 
  OrigDataType: 
T_1447: (in di_84 : word16)
  Class: Eq_1447
  DataType: 
  OrigDataType: 
T_1448: (in ss : selector)
  Class: Eq_1448
  DataType: 
  OrigDataType: 
T_1449: (in 0x0000 : word16)
  Class: Eq_1449
  DataType: 
  OrigDataType: 
T_1450: (in sp_78 + 0x0000 : word16)
  Class: Eq_1450
  DataType: 
  OrigDataType: 
T_1451: (in Mem0[ss:sp_78 + 0x0000:word16] : word16)
  Class: Eq_1451
  DataType: 
  OrigDataType: 
T_1452: (in *diOut : word16)
  Class: Eq_1451
  DataType: 
  OrigDataType: 
T_1453: (in 0x04FB : word16)
  Class: Eq_1453
  DataType: 
  OrigDataType: 
T_1454: (in bx_141 + 0x04FB : word16)
  Class: Eq_1454
  DataType: 
  OrigDataType: 
T_1455: (in Mem0[ds:bx_141 + 0x04FB:byte] : byte)
  Class: Eq_1455
  DataType: 
  OrigDataType: 
T_1456: (in DPB(ax_136, Mem0[ds:bx_141 + 0x04FB:byte], 0, 8) : word16)
  Class: Eq_1456
  DataType: 
  OrigDataType: 
T_1457: (in 0x0017 : word16)
  Class: Eq_1456
  DataType: 
  OrigDataType: 
T_1458: (in DPB(ax_136, Mem0[ds:bx_141 + 0x04FB:byte], 0, 8) <=u 0x0017 : bool)
  Class: Eq_1458
  DataType: 
  OrigDataType: 
T_1459: (in si_150 : word16)
  Class: Eq_1368
  DataType: 
  OrigDataType: 
T_1460: (in al_152 : byte)
  Class: Eq_1460
  DataType: 
  OrigDataType: 
T_1461: (in 0x25 : byte)
  Class: Eq_1460
  DataType: 
  OrigDataType: 
T_1462: (in bx_160 : word16)
  Class: Eq_1462
  DataType: 
  OrigDataType: 
T_1463: (in fn0800_10A9 : ptr32)
  Class: Eq_1463
  DataType: 
  OrigDataType: 
T_1464: (in signature of fn0800_10A9 : void)
  Class: Eq_1463
  DataType: 
  OrigDataType: 
T_1465: (in bp : word16)
  Class: Eq_1403
  DataType: 
  OrigDataType: 
T_1466: (in di : word16)
  Class: Eq_1365
  DataType: 
  OrigDataType: 
T_1467: (in al : byte)
  Class: Eq_1460
  DataType: 
  OrigDataType: 
T_1468: (in ds : selector)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_1469: (in diOut : ptr16)
  Class: Eq_1469
  DataType: 
  OrigDataType: 
T_1470: (in fp - 0x0002 : word16)
  Class: Eq_1403
  DataType: 
  OrigDataType: 
T_1471: (in out di_112 : ptr16)
  Class: Eq_1469
  DataType: 
  OrigDataType: 
T_1472: (in fn0800_10A9(fp - 0x0002, di_112, al_152, ds, out di_112) : word16)
  Class: Eq_1472
  DataType: 
  OrigDataType: 
T_1473: (in *bxOut : word16)
  Class: Eq_1472
  DataType: 
  OrigDataType: 
T_1474: (in al_163 : byte)
  Class: Eq_1460
  DataType: 
  OrigDataType: 
T_1475: (in 0x0000 : word16)
  Class: Eq_1475
  DataType: 
  OrigDataType: 
T_1476: (in si_150 + 0x0000 : word16)
  Class: Eq_1476
  DataType: 
  OrigDataType: 
T_1477: (in Mem0[ds:si_150 + 0x0000:byte] : byte)
  Class: Eq_1460
  DataType: 
  OrigDataType: 
T_1478: (in 0xFFFE : word16)
  Class: Eq_1478
  DataType: 
  OrigDataType: 
T_1479: (in sp_157 + 0xFFFE : word16)
  Class: Eq_1361
  DataType: 
  OrigDataType: 
T_1480: (in 0x0001 : word16)
  Class: Eq_1480
  DataType: 
  OrigDataType: 
T_1481: (in si_150 + 0x0001 : word16)
  Class: Eq_1368
  DataType: 
  OrigDataType: 
T_1482: (in 0x00 : byte)
  Class: Eq_1460
  DataType: 
  OrigDataType: 
T_1483: (in al_163 != 0x00 : bool)
  Class: Eq_1483
  DataType: 
  OrigDataType: 
T_1484: (in bx : word16)
  Class: Eq_1484
  DataType: 
  OrigDataType: 
T_1485: (in 0x0000 : word16)
  Class: Eq_1485
  DataType: 
  OrigDataType: 
T_1486: (in di + 0x0000 : word16)
  Class: Eq_1486
  DataType: 
  OrigDataType: 
T_1487: (in Mem3[ds:di + 0x0000:byte] : byte)
  Class: Eq_1460
  DataType: 
  OrigDataType: 
T_1488: (in v9_9 : byte)
  Class: Eq_1488
  DataType: 
  OrigDataType: 
T_1489: (in ss : selector)
  Class: Eq_1489
  DataType: 
  OrigDataType: 
T_1490: (in 0x0055 : word16)
  Class: Eq_1490
  DataType: 
  OrigDataType: 
T_1491: (in bp - 0x0055 : word16)
  Class: Eq_1491
  DataType: 
  OrigDataType: 
T_1492: (in Mem3[ss:bp - 0x0055:byte] : byte)
  Class: Eq_1492
  DataType: 
  OrigDataType: 
T_1493: (in 0x01 : byte)
  Class: Eq_1493
  DataType: 
  OrigDataType: 
T_1494: (in Mem3[ss:bp - 0x0055:byte] - 0x01 : byte)
  Class: Eq_1488
  DataType: 
  OrigDataType: 
T_1495: (in 0x0055 : word16)
  Class: Eq_1495
  DataType: 
  OrigDataType: 
T_1496: (in bp - 0x0055 : word16)
  Class: Eq_1496
  DataType: 
  OrigDataType: 
T_1497: (in Mem10[ss:bp - 0x0055:byte] : byte)
  Class: Eq_1488
  DataType: 
  OrigDataType: 
T_1498: (in di_6 : word16)
  Class: Eq_1498
  DataType: 
  OrigDataType: 
T_1499: (in 0x0001 : word16)
  Class: Eq_1499
  DataType: 
  OrigDataType: 
T_1500: (in di + 0x0001 : word16)
  Class: Eq_1500
  DataType: 
  OrigDataType: 
T_1501: (in *diOut : word16)
  Class: Eq_1500
  DataType: 
  OrigDataType: 
T_1502: (in 0x00 : byte)
  Class: Eq_1488
  DataType: 
  OrigDataType: 
T_1503: (in v9_9 <= 0x00 : bool)
  Class: Eq_1503
  DataType: 
  OrigDataType: 
T_1504: (in di_15 : word16)
  Class: Eq_1365
  DataType: 
  OrigDataType: 
T_1505: (in fn0800_10B1 : ptr32)
  Class: Eq_1401
  DataType: 
  OrigDataType: 
T_1506: (in di + 0x0001 : word16)
  Class: Eq_1365
  DataType: 
  OrigDataType: 
T_1507: (in out di_15 : ptr16)
  Class: Eq_1405
  DataType: 
  OrigDataType: 
T_1508: (in fn0800_10B1(bp, di + 0x0001, out di_15) : word16)
  Class: Eq_1508
  DataType: 
  OrigDataType: 
T_1509: (in di_17 : word16)
  Class: Eq_1509
  DataType: 
  OrigDataType: 
T_1510: (in fn0800_10B1 : ptr32)
  Class: Eq_1401
  DataType: 
  OrigDataType: 
T_1511: (in out di_17 : ptr16)
  Class: Eq_1405
  DataType: 
  OrigDataType: 
T_1512: (in fn0800_10B1(bp, di_15, out di_17) : word16)
  Class: Eq_1512
  DataType: 
  OrigDataType: 
T_1513: (in bx : word16)
  Class: Eq_1513
  DataType: 
  OrigDataType: 
T_1514: (in di_17 : word16)
  Class: Eq_1514
  DataType: 
  OrigDataType: 
T_1515: (in 0x0054 : word16)
  Class: Eq_1515
  DataType: 
  OrigDataType: 
T_1516: (in bp - 0x0054 : word16)
  Class: Eq_1516
  DataType: 
  OrigDataType: 
T_1517: (in di - (bp - 0x0054) : word16)
  Class: Eq_1514
  DataType: 
  OrigDataType: 
T_1518: (in cs : selector)
  Class: Eq_1518
  DataType: 
  OrigDataType: 
T_1519: (in ss : selector)
  Class: Eq_1519
  DataType: 
  OrigDataType: 
T_1520: (in 0x000A : word16)
  Class: Eq_1520
  DataType: 
  OrigDataType: 
T_1521: (in bp + 0x000A : word16)
  Class: Eq_1521
  DataType: 
  OrigDataType: 
T_1522: (in Mem0[ss:bp + 0x000A:word16] : word16)
  Class: Eq_1522
  DataType: 
  OrigDataType: 
T_1523: (in SEQ(cs, Mem0[ss:bp + 0x000A:word16]) : ptr32)
  Class: Eq_1523
  DataType: 
  OrigDataType: 
T_1524: (in 0x0054 : word16)
  Class: Eq_1403
  DataType: 
  OrigDataType: 
T_1525: (in bp != 0x0054 : bool)
  Class: Eq_1525
  DataType: 
  OrigDataType: 
T_1526: (in 0x50 : byte)
  Class: Eq_1526
  DataType: 
  OrigDataType: 
T_1527: (in 0x0055 : word16)
  Class: Eq_1527
  DataType: 
  OrigDataType: 
T_1528: (in bp - 0x0055 : word16)
  Class: Eq_1528
  DataType: 
  OrigDataType: 
T_1529: (in Mem37[ss:bp - 0x0055:byte] : byte)
  Class: Eq_1526
  DataType: 
  OrigDataType: 
T_1530: (in 0x0058 : word16)
  Class: Eq_1530
  DataType: 
  OrigDataType: 
T_1531: (in bp - 0x0058 : word16)
  Class: Eq_1531
  DataType: 
  OrigDataType: 
T_1532: (in Mem37[ss:bp - 0x0058:word16] : word16)
  Class: Eq_1532
  DataType: 
  OrigDataType: 
T_1533: (in Mem37[ss:bp - 0x0058:word16] + di_17 : word16)
  Class: Eq_1533
  DataType: 
  OrigDataType: 
T_1534: (in 0x0058 : word16)
  Class: Eq_1534
  DataType: 
  OrigDataType: 
T_1535: (in bp - 0x0058 : word16)
  Class: Eq_1535
  DataType: 
  OrigDataType: 
T_1536: (in Mem39[ss:bp - 0x0058:word16] : word16)
  Class: Eq_1533
  DataType: 
  OrigDataType: 
T_1537: (in di_41 : word16)
  Class: Eq_1537
  DataType: 
  OrigDataType: 
T_1538: (in 0x0054 : word16)
  Class: Eq_1538
  DataType: 
  OrigDataType: 
T_1539: (in bp - 0x0054 : word16)
  Class: Eq_1539
  DataType: 
  OrigDataType: 
T_1540: (in *diOut : word16)
  Class: Eq_1539
  DataType: 
  OrigDataType: 
T_1541: (in 0x0001 : word16)
  Class: Eq_1541
  DataType: 
  OrigDataType: 
T_1542: (in 0x0002 : word16)
  Class: Eq_1542
  DataType: 
  OrigDataType: 
T_1543: (in bp - 0x0002 : word16)
  Class: Eq_1543
  DataType: 
  OrigDataType: 
T_1544: (in Mem51[ss:bp - 0x0002:word16] : word16)
  Class: Eq_1541
  DataType: 
  OrigDataType: 
T_1545: (in es : selector)
  Class: Eq_1545
  DataType: 
  OrigDataType: 
T_1546: (in bx_24 : word16)
  Class: Eq_1546
  DataType: 
  OrigDataType: 
T_1547: (in fn0800_1703 : ptr32)
  Class: Eq_1547
  DataType: 
  OrigDataType: 
T_1548: (in signature of fn0800_1703 : void)
  Class: Eq_1547
  DataType: 
  OrigDataType: 
T_1549: (in bx : word16)
  Class: Eq_471
  DataType: 
  OrigDataType: 
T_1550: (in di : word16)
  Class: Eq_471
  DataType: 
  OrigDataType: 
T_1551: (in ds : selector)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_1552: (in wArg06 : word16)
  Class: Eq_1552
  DataType: 
  OrigDataType: 
T_1553: (in wArg08 : word16)
  Class: Eq_1553
  DataType: 
  OrigDataType: 
T_1554: (in 0x0344 : word16)
  Class: Eq_1552
  DataType: 
  OrigDataType: 
T_1555: (in wArg02 : word16)
  Class: Eq_1553
  DataType: 
  OrigDataType: 
T_1556: (in fn0800_1703(bx, di, ds, 0x0344, wArg02) : word16)
  Class: Eq_1546
  DataType: 
  OrigDataType: 
T_1557: (in bp_204 : word16)
  Class: Eq_1557
  DataType: 
  OrigDataType: 
T_1558: (in fp : ptr16)
  Class: Eq_1558
  DataType: 
  OrigDataType: 
T_1559: (in 0x0002 : word16)
  Class: Eq_1559
  DataType: 
  OrigDataType: 
T_1560: (in fp - 0x0002 : word16)
  Class: Eq_1557
  DataType: 
  OrigDataType: 
T_1561: (in si_203 : word16)
  Class: Eq_1561
  DataType: 
  OrigDataType: 
T_1562: (in wArg08 : word16)
  Class: Eq_1561
  DataType: 
  OrigDataType: 
T_1563: (in al_57 : byte)
  Class: Eq_1563
  DataType: 
  OrigDataType: 
T_1564: (in 0x25 : byte)
  Class: Eq_1563
  DataType: 
  OrigDataType: 
T_1565: (in al_57 == 0x25 : bool)
  Class: Eq_1565
  DataType: 
  OrigDataType: 
T_1566: (in 0x0000 : word16)
  Class: Eq_1566
  DataType: 
  OrigDataType: 
T_1567: (in si_203 + 0x0000 : word16)
  Class: Eq_1567
  DataType: 
  OrigDataType: 
T_1568: (in Mem0[ds:si_203 + 0x0000:byte] : byte)
  Class: Eq_1568
  DataType: 
  OrigDataType: 
T_1569: (in (int16) Mem0[ds:si_203 + 0x0000:byte] : int16)
  Class: Eq_1569
  DataType: 
  OrigDataType: 
T_1570: (in 0x0000 : word16)
  Class: Eq_1569
  DataType: 
  OrigDataType: 
T_1571: (in (int16) Mem0[ds:si_203 + 0x0000:byte] < 0x0000 : bool)
  Class: Eq_1571
  DataType: 
  OrigDataType: 
T_1572: (in cs : selector)
  Class: Eq_1572
  DataType: 
  OrigDataType: 
T_1573: (in ss : selector)
  Class: Eq_1573
  DataType: 
  OrigDataType: 
T_1574: (in 0x0004 : word16)
  Class: Eq_1574
  DataType: 
  OrigDataType: 
T_1575: (in bp_204 + 0x0004 : word16)
  Class: Eq_1575
  DataType: 
  OrigDataType: 
T_1576: (in Mem0[ss:bp_204 + 0x0004:word16] : word16)
  Class: Eq_1576
  DataType: 
  OrigDataType: 
T_1577: (in SEQ(cs, Mem0[ss:bp_204 + 0x0004:word16]) : ptr32)
  Class: Eq_1577
  DataType: 
  OrigDataType: 
T_1578: (in ax_127 : word16)
  Class: Eq_471
  DataType: 
  OrigDataType: 
T_1579: (in (int16) al_57 : int16)
  Class: Eq_471
  DataType: 
  OrigDataType: 
T_1580: (in ax_138 : word16)
  Class: Eq_471
  DataType: 
  OrigDataType: 
T_1581: (in di_264 : word16)
  Class: Eq_471
  DataType: 
  OrigDataType: 
T_1582: (in 0x0000 : word16)
  Class: Eq_471
  DataType: 
  OrigDataType: 
T_1583: (in di_264 < 0x0000 : bool)
  Class: Eq_1583
  DataType: 
  OrigDataType: 
T_1584: (in 0x0000 : word16)
  Class: Eq_471
  DataType: 
  OrigDataType: 
T_1585: (in ax_127 < 0x0000 : bool)
  Class: Eq_1585
  DataType: 
  OrigDataType: 
T_1586: (in di_264 == ax_127 : bool)
  Class: Eq_1586
  DataType: 
  OrigDataType: 
T_1587: (in 0x055C : word16)
  Class: Eq_1587
  DataType: 
  OrigDataType: 
T_1588: (in ax_127 + 0x055C : word16)
  Class: Eq_1588
  DataType: 
  OrigDataType: 
T_1589: (in Mem0[ds:ax_127 + 0x055C:byte] : byte)
  Class: Eq_1589
  DataType: 
  OrigDataType: 
T_1590: (in 0x01 : byte)
  Class: Eq_1589
  DataType: 
  OrigDataType: 
T_1591: (in Mem0[ds:ax_127 + 0x055C:byte] != 0x01 : bool)
  Class: Eq_1591
  DataType: 
  OrigDataType: 
T_1592: (in bl_210 : byte)
  Class: Eq_1592
  DataType: 
  OrigDataType: 
T_1593: (in (byte) ax_138 : byte)
  Class: Eq_1592
  DataType: 
  OrigDataType: 
T_1594: (in DPB(ax_138, bl_210, 0, 8) : word16)
  Class: Eq_471
  DataType: 
  OrigDataType: 
T_1595: (in 0x00 : byte)
  Class: Eq_1592
  DataType: 
  OrigDataType: 
T_1596: (in bl_210 < 0x00 : bool)
  Class: Eq_1596
  DataType: 
  OrigDataType: 
T_1597: (in 0x0006 : word16)
  Class: Eq_1597
  DataType: 
  OrigDataType: 
T_1598: (in bp_204 + 0x0006 : word16)
  Class: Eq_1598
  DataType: 
  OrigDataType: 
T_1599: (in Mem0[ss:bp_204 + 0x0006:word16] : word16)
  Class: Eq_1599
  DataType: 
  OrigDataType: 
T_1600: (in SEQ(cs, Mem0[ss:bp_204 + 0x0006:word16]) : ptr32)
  Class: Eq_1600
  DataType: 
  OrigDataType: 
T_1601: (in 0x055C : word16)
  Class: Eq_1601
  DataType: 
  OrigDataType: 
T_1602: (in bx + 0x055C : word16)
  Class: Eq_1602
  DataType: 
  OrigDataType: 
T_1603: (in Mem0[ds:bx + 0x055C:byte] : byte)
  Class: Eq_1603
  DataType: 
  OrigDataType: 
T_1604: (in 0x01 : byte)
  Class: Eq_1603
  DataType: 
  OrigDataType: 
T_1605: (in Mem0[ds:bx + 0x055C:byte] != 0x01 : bool)
  Class: Eq_1605
  DataType: 
  OrigDataType: 
T_1606: (in 0x0004 : word16)
  Class: Eq_1606
  DataType: 
  OrigDataType: 
T_1607: (in bp_204 + 0x0004 : word16)
  Class: Eq_1607
  DataType: 
  OrigDataType: 
T_1608: (in Mem0[ss:bp_204 + 0x0004:word16] : word16)
  Class: Eq_1608
  DataType: 
  OrigDataType: 
T_1609: (in SEQ(cs, Mem0[ss:bp_204 + 0x0004:word16]) : ptr32)
  Class: Eq_1609
  DataType: 
  OrigDataType: 
T_1610: (in bx_265 : word16)
  Class: Eq_471
  DataType: 
  OrigDataType: 
T_1611: (in 0x0000 : word16)
  Class: Eq_471
  DataType: 
  OrigDataType: 
T_1612: (in bx_265 > 0x0000 : bool)
  Class: Eq_1612
  DataType: 
  OrigDataType: 
T_1613: (in 0x0006 : word16)
  Class: Eq_1613
  DataType: 
  OrigDataType: 
T_1614: (in bp_204 + 0x0006 : word16)
  Class: Eq_1614
  DataType: 
  OrigDataType: 
T_1615: (in Mem0[ss:bp_204 + 0x0006:word16] : word16)
  Class: Eq_1615
  DataType: 
  OrigDataType: 
T_1616: (in SEQ(cs, Mem0[ss:bp_204 + 0x0006:word16]) : ptr32)
  Class: Eq_1616
  DataType: 
  OrigDataType: 
T_1617: (in 0x0000 : word16)
  Class: Eq_1617
  DataType: 
  OrigDataType: 
T_1618: (in 0x0028 : word16)
  Class: Eq_1618
  DataType: 
  OrigDataType: 
T_1619: (in bp_204 - 0x0028 : word16)
  Class: Eq_1619
  DataType: 
  OrigDataType: 
T_1620: (in Mem125[ss:bp_204 - 0x0028:word16] : word16)
  Class: Eq_1617
  DataType: 
  OrigDataType: 
T_1621: (in 0x0000 : word16)
  Class: Eq_1621
  DataType: 
  OrigDataType: 
T_1622: (in si_203 + 0x0000 : word16)
  Class: Eq_1622
  DataType: 
  OrigDataType: 
T_1623: (in Mem0[ds:si_203 + 0x0000:byte] : byte)
  Class: Eq_1563
  DataType: 
  OrigDataType: 
T_1624: (in 0x0001 : word16)
  Class: Eq_1624
  DataType: 
  OrigDataType: 
T_1625: (in si_203 + 0x0001 : word16)
  Class: Eq_1561
  DataType: 
  OrigDataType: 
T_1626: (in 0x00 : byte)
  Class: Eq_1563
  DataType: 
  OrigDataType: 
T_1627: (in al_57 == 0x00 : bool)
  Class: Eq_1627
  DataType: 
  OrigDataType: 
T_1628: (in 0x0006 : word16)
  Class: Eq_1628
  DataType: 
  OrigDataType: 
T_1629: (in bp_204 + 0x0006 : word16)
  Class: Eq_1629
  DataType: 
  OrigDataType: 
T_1630: (in Mem0[ss:bp_204 + 0x0006:word16] : word16)
  Class: Eq_1630
  DataType: 
  OrigDataType: 
T_1631: (in SEQ(cs, Mem0[ss:bp_204 + 0x0006:word16]) : ptr32)
  Class: Eq_1631
  DataType: 
  OrigDataType: 
T_1632: (in 0x00 : byte)
  Class: Eq_1632
  DataType: 
  OrigDataType: 
T_1633: (in DPB(bx, 0x00, 8, 8) : word16)
  Class: Eq_1633
  DataType: 
  OrigDataType: 
T_1634: (in 0x0015 : word16)
  Class: Eq_1633
  DataType: 
  OrigDataType: 
T_1635: (in DPB(bx, 0x00, 8, 8) <=u 0x0015 : bool)
  Class: Eq_1635
  DataType: 
  OrigDataType: 
T_1636:
  Class: Eq_1636
  DataType: 
  OrigDataType: (struct 0001 (0 T_349 t0000))
*/
