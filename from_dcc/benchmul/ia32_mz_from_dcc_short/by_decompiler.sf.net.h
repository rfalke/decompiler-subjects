// subject.h
// Generated on TIMESTAMP by decompiling from_dcc/benchmul/ia32_mz_from_dcc_short/subject.exe
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
  DataType: (union (uint16 u0) ((memptr T_28 (struct (0 T_2 t0000))) u1) ((memptr T_31 (struct (0 T_312 t0000))) u2) ((union (ptr16 u0) ((memptr T_31 (struct (0 T_98 t0000) (2 T_63 t0002))) u1)) u3))
  OrigDataType: (union (uint16 u0) ((memptr T_28 (struct (0 T_2 t0000))) u1) ((memptr T_31 (struct (0 T_312 t0000))) u2) ((union (ptr16 u0) ((memptr T_31 (struct (0 T_98 t0000) (2 T_63 t0002))) u1)) u3))
T_4: (in 0x09DA : word16)
  Class: Eq_4
  DataType: word16
  OrigDataType: word16
T_5: (in dx : word16)
  Class: Eq_4
  DataType: (ptr (segment (8A T_47 t008A) (8C T_35 t008C) (8E T_143 t008E) (90 T_33 t0090) (92 T_30 t0092) (96 T_38 t0096) (AC T_37 t00AC)))
  OrigDataType: (ptr (segment (8A T_47 t008A) (8C T_35 t008C) (8E T_143 t008E) (90 T_33 t0090) (92 T_30 t0092) (96 T_38 t0096) (AC T_37 t00AC)))
T_6: (in 0x09DA : word16)
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
  DataType: (ptr (segment (2 T_22 t0002) (2C T_25 t002C) (84 T_288 t0084) (86 T_281 t0086) (88 T_274 t0088) (98 T_265 t0098) (9A T_267 t009A) (5EA T_240 t05EA) (5EE T_269 t05EE)))
  OrigDataType: (ptr (segment (2 T_22 t0002) (2C T_25 t002C) (84 T_288 t0084) (86 T_281 t0086) (88 T_274 t0088) (98 T_265 t0098) (9A T_267 t009A) (5EA T_240 t05EA) (5EE T_269 t05EE)))
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
  DataType: (union (uint16 u0) ((memptr T_28 (struct (0 T_2 t0000))) u1) ((memptr T_31 (struct (0 T_312 t0000))) u2) ((union (ptr16 u0) ((memptr T_31 (struct (0 T_98 t0000) (2 T_63 t0002))) u1)) u3))
  OrigDataType: (union (uint16 u0) ((memptr T_28 (struct (0 T_2 t0000))) u1) ((memptr T_31 (struct (0 T_312 t0000))) u2) ((union (ptr16 u0) ((memptr T_31 (struct (0 T_98 t0000) (2 T_63 t0002))) u1)) u3))
T_27: (in 0x09DA : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_28: (in 0x09DA : selector)
  Class: Eq_4
  DataType: (ptr (segment (8A T_47 t008A) (8C T_35 t008C) (8E T_143 t008E) (90 T_2 t0090) (92 T_30 t0092) (96 T_38 t0096) (A4 T_200 t00A4) (A8 T_202 t00A8) (AC T_37 t00AC) (24A T_164 t024A) (24C T_2 t024C)))
  OrigDataType: (ptr (segment (8A T_47 t008A) (8C T_35 t008C) (8E T_143 t008E) (90 T_2 t0090) (92 T_30 t0092) (96 T_38 t0096) (A4 T_200 t00A4) (A8 T_202 t00A8) (AC T_37 t00AC) (24A T_164 t024A) (24C T_2 t024C)))
T_29: (in 0x0092 : word16)
  Class: Eq_29
  DataType: (memptr T_28 (struct (0 T_30 t0000)))
  OrigDataType: (memptr T_28 (struct (0 T_30 t0000)))
T_30: (in Mem0[0x09DA:0x0092:word16] : word16)
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
T_33: (in Mem0[0x09DA:0x0090:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_34: (in 0x008C : word16)
  Class: Eq_34
  DataType: (memptr T_28 (struct (0 T_35 t0000)))
  OrigDataType: (memptr T_28 (struct (0 T_35 t0000)))
T_35: (in Mem0[0x09DA:0x008C:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_36: (in 0x00AC : word16)
  Class: Eq_36
  DataType: (memptr T_28 (struct (0 T_37 t0000)))
  OrigDataType: (memptr T_28 (struct (0 T_37 t0000)))
T_37: (in Mem0[0x09DA:0x00AC:word16] : word16)
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
T_40: (in Mem0[0x09DA:0x0096:word16] : word16)
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
  DataType: (ptr (segment (74 T_386 t0074) (76 T_389 t0076) (78 T_395 t0078) (7A T_398 t007A) (7C T_404 t007C) (7E T_407 t007E) (80 T_413 t0080) (82 T_416 t0082)))
  OrigDataType: (ptr (segment (74 T_386 t0074) (76 T_389 t0076) (78 T_395 t0078) (7A T_398 t007A) (7C T_404 t007C) (7E T_407 t007E) (80 T_413 t0080) (82 T_416 t0082)))
T_45: (in fn0800_0162(al, ds) : void)
  Class: Eq_45
  DataType: void
  OrigDataType: void
T_46: (in 0x008A : word16)
  Class: Eq_46
  DataType: (memptr T_28 (struct (0 T_47 t0000)))
  OrigDataType: (memptr T_28 (struct (0 T_47 t0000)))
T_47: (in Mem0[0x09DA:0x008A:segptr32] : segptr32)
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
  DataType: (union (uint16 u0) ((memptr T_28 (struct (0 T_2 t0000))) u1) ((memptr T_31 (struct (0 T_312 t0000))) u2) ((union (ptr16 u0) ((memptr T_31 (struct (0 T_98 t0000) (2 T_63 t0002))) u1)) u3))
  OrigDataType: (union (uint16 u0) ((memptr T_28 (struct (0 T_2 t0000))) u1) ((memptr T_31 (struct (0 T_312 t0000))) u2) ((union (ptr16 u0) ((memptr T_31 (struct (0 T_98 t0000) (2 T_63 t0002))) u1)) u3))
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
T_77: (in Mem0[0x09DA:0x0096:word16] : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_78: (in 0x0001 : word16)
  Class: Eq_78
  DataType: word16
  OrigDataType: word16
T_79: (in Mem0[0x09DA:0x0096:word16] + 0x0001 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_80: (in v20 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_81: (in Mem0[0x09DA:0x0096:word16] : word16)
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
T_87: (in Mem0[0x09DA:0x0096:word16] : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_88: (in 0x0001 : word16)
  Class: Eq_88
  DataType: word16
  OrigDataType: word16
T_89: (in Mem0[0x09DA:0x0096:word16] + 0x0001 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_90: (in v21 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_91: (in Mem0[0x09DA:0x0096:word16] : word16)
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
T_134: (in Mem0[0x09DA:0x008A:word16] : word16)
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
T_143: (in Mem0[0x09DA:0x008E:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_144: (in bp - 0x09DA : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_145: (in 0x024C : word16)
  Class: Eq_145
  DataType: (memptr T_28 (struct (0 T_146 t0000)))
  OrigDataType: (memptr T_28 (struct (0 T_146 t0000)))
T_146: (in Mem0[0x09DA:0x024C:word16] : word16)
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
T_153: (in 0x063E : word16)
  Class: Eq_153
  DataType: word16
  OrigDataType: word16
T_154: (in di + 0x063E : word16)
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
T_161: (in 0x024C : word16)
  Class: Eq_161
  DataType: (memptr T_28 (struct (0 T_162 t0000)))
  OrigDataType: (memptr T_28 (struct (0 T_162 t0000)))
T_162: (in Mem0[0x09DA:0x024C:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_163: (in 0x024A : word16)
  Class: Eq_163
  DataType: (memptr T_28 (struct (0 T_164 t0000)))
  OrigDataType: (memptr T_28 (struct (0 T_164 t0000)))
T_164: (in Mem0[0x09DA:0x024A:word16] : word16)
  Class: Eq_164
  DataType: word16
  OrigDataType: word16
T_165: (in di + Mem0[0x09DA:0x024A:word16] : word16)
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
T_178: (in 0x024C : word16)
  Class: Eq_178
  DataType: (memptr T_28 (struct (0 T_179 t0000)))
  OrigDataType: (memptr T_28 (struct (0 T_179 t0000)))
T_179: (in Mem0[0x09DA:0x024C:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_180: (in 0x0000 : word16)
  Class: Eq_180
  DataType: word16
  OrigDataType: word16
T_181: (in Mem0[0x09DA:0x024C:word16] - 0x0000 : word16)
  Class: Eq_181
  DataType: word16
  OrigDataType: word16
T_182: (in cond(Mem0[0x09DA:0x024C:word16] - 0x0000) : byte)
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
T_191: (in 0x024A : word16)
  Class: Eq_191
  DataType: (memptr T_28 (struct (0 T_192 t0000)))
  OrigDataType: (memptr T_28 (struct (0 T_192 t0000)))
T_192: (in Mem0[0x09DA:0x024A:word16] : word16)
  Class: Eq_164
  DataType: word16
  OrigDataType: word16
T_193: (in 0x0000 : word16)
  Class: Eq_193
  DataType: word16
  OrigDataType: word16
T_194: (in Mem0[0x09DA:0x024A:word16] - 0x0000 : word16)
  Class: Eq_194
  DataType: word16
  OrigDataType: word16
T_195: (in cond(Mem0[0x09DA:0x024A:word16] - 0x0000) : byte)
  Class: Eq_70
  DataType: byte
  OrigDataType: byte
T_196: (in Test(NE,Z) : bool)
  Class: Eq_196
  DataType: bool
  OrigDataType: bool
T_197: (in 0x09DA : word16)
  Class: Eq_197
  DataType: word16
  OrigDataType: word16
T_198: (in bx + 0x09DA : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_199: (in 0x00A4 : word16)
  Class: Eq_199
  DataType: (memptr T_28 (struct (0 T_200 t0000)))
  OrigDataType: (memptr T_28 (struct (0 T_200 t0000)))
T_200: (in Mem0[0x09DA:0x00A4:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_201: (in 0x00A8 : word16)
  Class: Eq_201
  DataType: (memptr T_28 (struct (0 T_202 t0000)))
  OrigDataType: (memptr T_28 (struct (0 T_202 t0000)))
T_202: (in Mem0[0x09DA:0x00A8:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_203: (in 0x0090 : word16)
  Class: Eq_203
  DataType: (memptr T_28 (struct (0 T_204 t0000)))
  OrigDataType: (memptr T_28 (struct (0 T_204 t0000)))
T_204: (in Mem0[0x09DA:0x0090:word16] : word16)
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
  DataType: (union (uint16 u0) ((memptr T_28 (struct (0 T_2 t0000))) u1) ((memptr T_31 (struct (0 T_312 t0000))) u2) ((union (ptr16 u0) ((memptr T_31 (struct (0 T_98 t0000) (2 T_63 t0002))) u1)) u3))
  OrigDataType: (union (uint16 u0) ((memptr T_28 (struct (0 T_2 t0000))) u1) ((memptr T_31 (struct (0 T_312 t0000))) u2) ((union (ptr16 u0) ((memptr T_31 (struct (0 T_98 t0000) (2 T_63 t0002))) u1)) u3))
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
  DataType: (ptr (union (uint16 u0) ((memptr T_28 (struct (0 T_2 t0000))) u1) ((memptr T_31 (struct (0 T_312 t0000))) u2) ((union (ptr16 u0) ((memptr T_31 (struct (0 T_98 t0000) (2 T_63 t0002))) u1)) u3)))
  OrigDataType: (ptr (union (uint16 u0) ((memptr T_28 (struct (0 T_2 t0000))) u1) ((memptr T_31 (struct (0 T_312 t0000))) u2) ((union (ptr16 u0) ((memptr T_31 (struct (0 T_98 t0000) (2 T_63 t0002))) u1)) u3)))
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
T_221: (in 0x09DA : word16)
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
T_227: (in 0x05F8 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_228: (in SEQ(es, di) : ptr32)
  Class: Eq_47
  DataType: ptr32
  OrigDataType: ptr32
T_229: (in 0x063E : word16)
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
T_239: (in 0x05EA : word16)
  Class: Eq_239
  DataType: (memptr T_20 (struct (0 T_240 t0000)))
  OrigDataType: (memptr T_20 (struct (0 T_240 t0000)))
T_240: (in Mem0[ds:0x05EA:word16] : word16)
  Class: Eq_240
  DataType: word16
  OrigDataType: word16
T_241: (in SEQ(cs, Mem0[ds:0x05EA:word16]) : ptr32)
  Class: Eq_241
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_242: (in fn0800_0318 : ptr32)
  Class: Eq_242
  DataType: (ptr (fn T_248 (T_20, T_209, T_247)))
  OrigDataType: (ptr (fn T_248 (T_20, T_209, T_247)))
T_243: (in signature of fn0800_0318 : void)
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
  DataType: (ptr (ptr (segment (2 T_22 t0002) (2C T_25 t002C) (5EA T_240 t05EA))))
  OrigDataType: (ptr (ptr (segment (2 T_22 t0002) (2C T_25 t002C) (5EA T_240 t05EA))))
T_248: (in fn0800_0318(ds, wLoc02, out ds) : word16)
  Class: Eq_111
  DataType: word16
  OrigDataType: word16
T_249: (in fn0800_0403 : ptr32)
  Class: Eq_249
  DataType: (ptr (fn T_255 (T_112, T_20, T_254)))
  OrigDataType: (ptr (fn T_255 (T_112, T_20, T_254)))
T_250: (in signature of fn0800_0403 : void)
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
T_253: (in diOut : ptr16)
  Class: Eq_253
  DataType: ptr16
  OrigDataType: ptr16
T_254: (in out di : ptr16)
  Class: Eq_253
  DataType: (ptr (union (uint16 u0) ((memptr T_28 (struct (0 T_2 t0000))) u1) ((memptr T_31 (struct (0 T_312 t0000))) u2) ((union (ptr16 u0) ((memptr T_31 (struct (0 T_98 t0000) (2 T_63 t0002))) u1)) u3)))
  OrigDataType: (ptr (union (uint16 u0) ((memptr T_28 (struct (0 T_2 t0000))) u1) ((memptr T_31 (struct (0 T_312 t0000))) u2) ((union (ptr16 u0) ((memptr T_31 (struct (0 T_98 t0000) (2 T_63 t0002))) u1)) u3)))
T_255: (in fn0800_0403(si, ds, out di) : word16)
  Class: Eq_111
  DataType: word16
  OrigDataType: word16
T_256: (in 0x0002 : word16)
  Class: Eq_256
  DataType: word16
  OrigDataType: word16
T_257: (in sp + 0x0002 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_258: (in 0x00 : byte)
  Class: Eq_10
  DataType: byte
  OrigDataType: byte
T_259: (in bios_get_system_time : ptr32)
  Class: Eq_259
  DataType: (ptr (fn T_263 (T_262)))
  OrigDataType: (ptr (fn T_263 (T_262)))
T_260: (in signature of bios_get_system_time : void)
  Class: Eq_259
  DataType: 
  OrigDataType: 
T_261: (in dxOut : ptr16)
  Class: Eq_261
  DataType: ptr16
  OrigDataType: ptr16
T_262: (in out dx : ptr16)
  Class: Eq_261
  DataType: (ptr (ptr (segment (8A T_47 t008A) (8C T_35 t008C) (8E T_143 t008E) (90 T_33 t0090) (92 T_30 t0092) (96 T_38 t0096) (AC T_37 t00AC))))
  OrigDataType: (ptr (ptr (segment (8A T_47 t008A) (8C T_35 t008C) (8E T_143 t008E) (90 T_33 t0090) (92 T_30 t0092) (96 T_38 t0096) (AC T_37 t00AC))))
T_263: (in bios_get_system_time(out dx) : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_264: (in 0x0098 : word16)
  Class: Eq_264
  DataType: (memptr T_20 (struct (0 T_265 t0000)))
  OrigDataType: (memptr T_20 (struct (0 T_265 t0000)))
T_265: (in Mem0[ds:0x0098:word16] : word16)
  Class: Eq_4
  DataType: word16
  OrigDataType: word16
T_266: (in 0x009A : word16)
  Class: Eq_266
  DataType: (memptr T_20 (struct (0 T_267 t0000)))
  OrigDataType: (memptr T_20 (struct (0 T_267 t0000)))
T_267: (in Mem0[ds:0x009A:word16] : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_268: (in 0x05EE : word16)
  Class: Eq_268
  DataType: (memptr T_20 (struct (0 T_269 t0000)))
  OrigDataType: (memptr T_20 (struct (0 T_269 t0000)))
T_269: (in Mem0[ds:0x05EE:word16] : word16)
  Class: Eq_269
  DataType: word16
  OrigDataType: word16
T_270: (in SEQ(cs, Mem0[ds:0x05EE:word16]) : ptr32)
  Class: Eq_270
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_271: (in 0x0002 : word16)
  Class: Eq_271
  DataType: word16
  OrigDataType: word16
T_272: (in sp - 0x0002 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_273: (in 0x0088 : word16)
  Class: Eq_273
  DataType: (memptr T_20 (struct (0 T_274 t0000)))
  OrigDataType: (memptr T_20 (struct (0 T_274 t0000)))
T_274: (in Mem0[ds:0x0088:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_275: (in 0x0000 : word16)
  Class: Eq_275
  DataType: word16
  OrigDataType: word16
T_276: (in sp + 0x0000 : word16)
  Class: Eq_276
  DataType: word16
  OrigDataType: word16
T_277: (in Mem0[0x09DA:sp + 0x0000:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_278: (in 0x0002 : word16)
  Class: Eq_278
  DataType: word16
  OrigDataType: word16
T_279: (in sp - 0x0002 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_280: (in 0x0086 : word16)
  Class: Eq_280
  DataType: (memptr T_20 (struct (0 T_281 t0000)))
  OrigDataType: (memptr T_20 (struct (0 T_281 t0000)))
T_281: (in Mem0[ds:0x0086:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_282: (in 0x0000 : word16)
  Class: Eq_282
  DataType: word16
  OrigDataType: word16
T_283: (in sp + 0x0000 : word16)
  Class: Eq_283
  DataType: word16
  OrigDataType: word16
T_284: (in Mem0[0x09DA:sp + 0x0000:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_285: (in 0x0002 : word16)
  Class: Eq_285
  DataType: word16
  OrigDataType: word16
T_286: (in sp - 0x0002 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_287: (in 0x0084 : word16)
  Class: Eq_287
  DataType: (memptr T_20 (struct (0 T_288 t0000)))
  OrigDataType: (memptr T_20 (struct (0 T_288 t0000)))
T_288: (in Mem0[ds:0x0084:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_289: (in 0x0000 : word16)
  Class: Eq_289
  DataType: word16
  OrigDataType: word16
T_290: (in sp + 0x0000 : word16)
  Class: Eq_290
  DataType: word16
  OrigDataType: word16
T_291: (in Mem0[0x09DA:sp + 0x0000:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_292: (in fn0800_01FA : ptr32)
  Class: Eq_292
  DataType: (ptr (fn T_297 (T_112, T_51, T_20)))
  OrigDataType: (ptr (fn T_297 (T_112, T_51, T_20)))
T_293: (in signature of fn0800_01FA : void)
  Class: Eq_292
  DataType: 
  OrigDataType: 
T_294: (in si : word16)
  Class: Eq_111
  DataType: word16
  OrigDataType: word16
T_295: (in di : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_296: (in ds : selector)
  Class: Eq_2
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_297: (in fn0800_01FA(si, di, ds) : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_298: (in (byte) ax : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_299: (in 0x0002 : word16)
  Class: Eq_299
  DataType: word16
  OrigDataType: word16
T_300: (in sp - 0x0002 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_301: (in 0x0000 : word16)
  Class: Eq_301
  DataType: word16
  OrigDataType: word16
T_302: (in sp + 0x0000 : word16)
  Class: Eq_302
  DataType: word16
  OrigDataType: word16
T_303: (in Mem0[0x09DA:sp + 0x0000:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_304: (in fn0800_02E3 : ptr32)
  Class: Eq_304
  DataType: (ptr (fn T_309 (T_20, T_308)))
  OrigDataType: (ptr (fn T_309 (T_20, T_308)))
T_305: (in signature of fn0800_02E3 : void)
  Class: Eq_304
  DataType: 
  OrigDataType: 
T_306: (in ds : selector)
  Class: Eq_2
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_307: (in wArg02 : word16)
  Class: Eq_307
  DataType: word16
  OrigDataType: word16
T_308: (in wArg00 : word16)
  Class: Eq_307
  DataType: word16
  OrigDataType: word16
T_309: (in fn0800_02E3(ds, wArg00) : void)
  Class: Eq_309
  DataType: void
  OrigDataType: void
T_310: (in 0x0000 : word16)
  Class: Eq_310
  DataType: word16
  OrigDataType: word16
T_311: (in di + 0x0000 : word16)
  Class: Eq_311
  DataType: word16
  OrigDataType: word16
T_312: (in Mem0[es:di + 0x0000:byte] : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_313: (in 0x0001 : word16)
  Class: Eq_313
  DataType: word16
  OrigDataType: word16
T_314: (in di + 0x0001 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_315: (in SEQ(es, di) : ptr32)
  Class: Eq_47
  DataType: ptr32
  OrigDataType: ptr32
T_316: (in 0x0001 : word16)
  Class: Eq_316
  DataType: word16
  OrigDataType: word16
T_317: (in cx - 0x0001 : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_318: (in SLICE(cx, byte, 8) : byte)
  Class: Eq_55
  DataType: byte
  OrigDataType: byte
T_319: (in (byte) cx : byte)
  Class: Eq_57
  DataType: byte
  OrigDataType: byte
T_320: (in 0x0000 : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_321: (in cx == 0x0000 : bool)
  Class: Eq_321
  DataType: bool
  OrigDataType: bool
T_322: (in fn0800_0121 : ptr32)
  Class: Eq_322
  DataType: (ptr (fn T_327 (T_17, T_326)))
  OrigDataType: (ptr (fn T_327 (T_17, T_326)))
T_323: (in signature of fn0800_0121 : void)
  Class: Eq_322
  DataType: 
  OrigDataType: 
T_324: (in al : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_325: (in bArg00 : byte)
  Class: Eq_325
  DataType: byte
  OrigDataType: byte
T_326: (in bArg00 : byte)
  Class: Eq_325
  DataType: byte
  OrigDataType: byte
T_327: (in fn0800_0121(al, bArg00) : void)
  Class: Eq_327
  DataType: void
  OrigDataType: void
T_328: (in ds_3 : selector)
  Class: Eq_2
  DataType: (ptr (segment (0 (arr T_1514) a0000) (5EC T_338 t05EC)))
  OrigDataType: (ptr (segment (0 (arr T_1514) a0000) (5EC T_338 t05EC)))
T_329: (in 0x01F8 : word16)
  Class: Eq_329
  DataType: (memptr T_7 (struct (0 T_330 t0000)))
  OrigDataType: (memptr T_7 (struct (0 T_330 t0000)))
T_330: (in Mem0[0x0800:0x01F8:selector] : selector)
  Class: Eq_2
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_331: (in fn0800_01A5 : ptr32)
  Class: Eq_331
  DataType: (ptr (fn T_335 (T_324, T_328)))
  OrigDataType: (ptr (fn T_335 (T_324, T_328)))
T_332: (in signature of fn0800_01A5 : void)
  Class: Eq_331
  DataType: 
  OrigDataType: 
T_333: (in al : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_334: (in ds : selector)
  Class: Eq_2
  DataType: (ptr (segment (74 T_428 t0074) (78 T_432 t0078) (7C T_436 t007C) (80 T_441 t0080)))
  OrigDataType: (ptr (segment (74 T_428 t0074) (78 T_432 t0078) (7C T_436 t007C) (80 T_441 t0080)))
T_335: (in fn0800_01A5(al, ds_3) : void)
  Class: Eq_335
  DataType: void
  OrigDataType: void
T_336: (in cs : selector)
  Class: Eq_336
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_337: (in 0x05EC : word16)
  Class: Eq_337
  DataType: (memptr T_328 (struct (0 T_338 t0000)))
  OrigDataType: (memptr T_328 (struct (0 T_338 t0000)))
T_338: (in Mem0[ds_3:0x05EC:word16] : word16)
  Class: Eq_338
  DataType: word16
  OrigDataType: word16
T_339: (in SEQ(cs, Mem0[ds_3:0x05EC:word16]) : ptr32)
  Class: Eq_339
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_340: (in ax_20 : word16)
  Class: Eq_340
  DataType: word16
  OrigDataType: word16
T_341: (in 0x0000 : word16)
  Class: Eq_340
  DataType: word16
  OrigDataType: word16
T_342: (in al_21 : byte)
  Class: Eq_342
  DataType: bcu8
  OrigDataType: bcu8
T_343: (in 0x00 : byte)
  Class: Eq_342
  DataType: byte
  OrigDataType: byte
T_344: (in ah_22 : byte)
  Class: Eq_344
  DataType: (union (byte u0) (word16 u1))
  OrigDataType: (union (byte u0) (word16 u1))
T_345: (in 0x00 : byte)
  Class: Eq_344
  DataType: byte
  OrigDataType: byte
T_346: (in si_25 : word16)
  Class: Eq_346
  DataType: (memptr T_328 (struct 0001 (0 T_352 t0000)))
  OrigDataType: (memptr T_328 (struct 0001 (0 T_352 t0000)))
T_347: (in 0x0000 : word16)
  Class: Eq_346
  DataType: word16
  OrigDataType: word16
T_348: (in cx_26 : word16)
  Class: Eq_348
  DataType: word16
  OrigDataType: word16
T_349: (in 0x002F : word16)
  Class: Eq_348
  DataType: word16
  OrigDataType: word16
T_350: (in 0x0000 : word16)
  Class: Eq_350
  DataType: word16
  OrigDataType: word16
T_351: (in si_25 + 0x0000 : word16)
  Class: Eq_351
  DataType: word16
  OrigDataType: word16
T_352: (in Mem0[ds_3:si_25 + 0x0000:byte] : byte)
  Class: Eq_352
  DataType: byte
  OrigDataType: byte
T_353: (in al_21 + Mem0[ds_3:si_25 + 0x0000:byte] : byte)
  Class: Eq_342
  DataType: byte
  OrigDataType: byte
T_354: (in 0x00 : byte)
  Class: Eq_342
  DataType: bcu8
  OrigDataType: bcu8
T_355: (in al_21 <u 0x00 : bool)
  Class: Eq_355
  DataType: bool
  OrigDataType: bool
T_356: (in ah_22 + (al_21 <u 0x00) : word16)
  Class: Eq_344
  DataType: word16
  OrigDataType: word16
T_357: (in DPB(ax_20, ah_22, 8, 8) : word16)
  Class: Eq_340
  DataType: word16
  OrigDataType: word16
T_358: (in 0x0001 : word16)
  Class: Eq_358
  DataType: word16
  OrigDataType: word16
T_359: (in si_25 + 0x0001 : word16)
  Class: Eq_346
  DataType: word16
  OrigDataType: word16
T_360: (in 0x0001 : word16)
  Class: Eq_360
  DataType: word16
  OrigDataType: word16
T_361: (in cx_26 - 0x0001 : word16)
  Class: Eq_348
  DataType: word16
  OrigDataType: word16
T_362: (in 0x0000 : word16)
  Class: Eq_348
  DataType: word16
  OrigDataType: word16
T_363: (in cx_26 != 0x0000 : bool)
  Class: Eq_363
  DataType: bool
  OrigDataType: bool
T_364: (in 0x0D37 : word16)
  Class: Eq_340
  DataType: word16
  OrigDataType: word16
T_365: (in ax_20 == 0x0D37 : bool)
  Class: Eq_365
  DataType: bool
  OrigDataType: bool
T_366: (in msdos_terminate : ptr32)
  Class: Eq_366
  DataType: (ptr (fn T_370 (T_369)))
  OrigDataType: (ptr (fn T_370 (T_369)))
T_367: (in signature of msdos_terminate : void)
  Class: Eq_366
  DataType: 
  OrigDataType: 
T_368: (in al : byte)
  Class: Eq_368
  DataType: byte
  OrigDataType: byte
T_369: (in bArg00 : byte)
  Class: Eq_368
  DataType: byte
  OrigDataType: byte
T_370: (in msdos_terminate(bArg00) : void)
  Class: Eq_370
  DataType: void
  OrigDataType: void
T_371: (in fn0800_01DA : ptr32)
  Class: Eq_371
  DataType: (ptr (fn T_378 (T_376, T_377, T_328)))
  OrigDataType: (ptr (fn T_378 (T_376, T_377, T_328)))
T_372: (in signature of fn0800_01DA : void)
  Class: Eq_371
  DataType: 
  OrigDataType: 
T_373: (in cx : word16)
  Class: Eq_373
  DataType: word16
  OrigDataType: word16
T_374: (in dx : word16)
  Class: Eq_374
  DataType: word16
  OrigDataType: word16
T_375: (in ds : selector)
  Class: Eq_2
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_376: (in 0x0019 : word16)
  Class: Eq_373
  DataType: word16
  OrigDataType: word16
T_377: (in 0x002F : word16)
  Class: Eq_374
  DataType: word16
  OrigDataType: word16
T_378: (in fn0800_01DA(0x0019, 0x002F, ds_3) : word16)
  Class: Eq_378
  DataType: word16
  OrigDataType: word16
T_379: (in es_bx_6 : word32)
  Class: Eq_379
  DataType: word32
  OrigDataType: word32
T_380: (in msdos_get_interrupt_vector : ptr32)
  Class: Eq_380
  DataType: (ptr (fn T_383 (T_43)))
  OrigDataType: (ptr (fn T_383 (T_43)))
T_381: (in signature of msdos_get_interrupt_vector : void)
  Class: Eq_380
  DataType: 
  OrigDataType: 
T_382: (in al : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_383: (in msdos_get_interrupt_vector(al) : word32)
  Class: Eq_379
  DataType: word32
  OrigDataType: word32
T_384: (in (word16) es_bx_6 : word16)
  Class: Eq_384
  DataType: word16
  OrigDataType: word16
T_385: (in 0x0074 : word16)
  Class: Eq_385
  DataType: (memptr T_44 (struct (0 T_386 t0000)))
  OrigDataType: (memptr T_44 (struct (0 T_386 t0000)))
T_386: (in Mem9[ds:0x0074:word16] : word16)
  Class: Eq_384
  DataType: word16
  OrigDataType: word16
T_387: (in SLICE(es_bx_6, selector, 16) : selector)
  Class: Eq_387
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_388: (in 0x0076 : word16)
  Class: Eq_388
  DataType: (memptr T_44 (struct (0 T_389 t0000)))
  OrigDataType: (memptr T_44 (struct (0 T_389 t0000)))
T_389: (in Mem10[ds:0x0076:word16] : word16)
  Class: Eq_387
  DataType: word16
  OrigDataType: word16
T_390: (in es_bx_11 : word32)
  Class: Eq_390
  DataType: word32
  OrigDataType: word32
T_391: (in msdos_get_interrupt_vector : ptr32)
  Class: Eq_380
  DataType: (ptr (fn T_392 (T_43)))
  OrigDataType: (ptr (fn T_392 (T_43)))
T_392: (in msdos_get_interrupt_vector(al) : word32)
  Class: Eq_390
  DataType: word32
  OrigDataType: word32
T_393: (in (word16) es_bx_11 : word16)
  Class: Eq_393
  DataType: word16
  OrigDataType: word16
T_394: (in 0x0078 : word16)
  Class: Eq_394
  DataType: (memptr T_44 (struct (0 T_395 t0000)))
  OrigDataType: (memptr T_44 (struct (0 T_395 t0000)))
T_395: (in Mem14[ds:0x0078:word16] : word16)
  Class: Eq_393
  DataType: word16
  OrigDataType: word16
T_396: (in SLICE(es_bx_11, selector, 16) : selector)
  Class: Eq_396
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_397: (in 0x007A : word16)
  Class: Eq_397
  DataType: (memptr T_44 (struct (0 T_398 t0000)))
  OrigDataType: (memptr T_44 (struct (0 T_398 t0000)))
T_398: (in Mem15[ds:0x007A:word16] : word16)
  Class: Eq_396
  DataType: word16
  OrigDataType: word16
T_399: (in es_bx_16 : word32)
  Class: Eq_399
  DataType: word32
  OrigDataType: word32
T_400: (in msdos_get_interrupt_vector : ptr32)
  Class: Eq_380
  DataType: (ptr (fn T_401 (T_43)))
  OrigDataType: (ptr (fn T_401 (T_43)))
T_401: (in msdos_get_interrupt_vector(al) : word32)
  Class: Eq_399
  DataType: word32
  OrigDataType: word32
T_402: (in (word16) es_bx_16 : word16)
  Class: Eq_402
  DataType: word16
  OrigDataType: word16
T_403: (in 0x007C : word16)
  Class: Eq_403
  DataType: (memptr T_44 (struct (0 T_404 t0000)))
  OrigDataType: (memptr T_44 (struct (0 T_404 t0000)))
T_404: (in Mem19[ds:0x007C:word16] : word16)
  Class: Eq_402
  DataType: word16
  OrigDataType: word16
T_405: (in SLICE(es_bx_16, selector, 16) : selector)
  Class: Eq_405
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_406: (in 0x007E : word16)
  Class: Eq_406
  DataType: (memptr T_44 (struct (0 T_407 t0000)))
  OrigDataType: (memptr T_44 (struct (0 T_407 t0000)))
T_407: (in Mem20[ds:0x007E:word16] : word16)
  Class: Eq_405
  DataType: word16
  OrigDataType: word16
T_408: (in es_bx_21 : word32)
  Class: Eq_408
  DataType: word32
  OrigDataType: word32
T_409: (in msdos_get_interrupt_vector : ptr32)
  Class: Eq_380
  DataType: (ptr (fn T_410 (T_43)))
  OrigDataType: (ptr (fn T_410 (T_43)))
T_410: (in msdos_get_interrupt_vector(al) : word32)
  Class: Eq_408
  DataType: word32
  OrigDataType: word32
T_411: (in (word16) es_bx_21 : word16)
  Class: Eq_411
  DataType: word16
  OrigDataType: word16
T_412: (in 0x0080 : word16)
  Class: Eq_412
  DataType: (memptr T_44 (struct (0 T_413 t0000)))
  OrigDataType: (memptr T_44 (struct (0 T_413 t0000)))
T_413: (in Mem24[ds:0x0080:word16] : word16)
  Class: Eq_411
  DataType: word16
  OrigDataType: word16
T_414: (in SLICE(es_bx_21, selector, 16) : selector)
  Class: Eq_414
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_415: (in 0x0082 : word16)
  Class: Eq_415
  DataType: (memptr T_44 (struct (0 T_416 t0000)))
  OrigDataType: (memptr T_44 (struct (0 T_416 t0000)))
T_416: (in Mem25[ds:0x0082:word16] : word16)
  Class: Eq_414
  DataType: word16
  OrigDataType: word16
T_417: (in msdos_set_interrupt_vector : ptr32)
  Class: Eq_417
  DataType: (ptr (fn T_425 (T_421, T_424)))
  OrigDataType: (ptr (fn T_425 (T_421, T_424)))
T_418: (in signature of msdos_set_interrupt_vector : void)
  Class: Eq_417
  DataType: 
  OrigDataType: 
T_419: (in al : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_420: (in ds_dx : word32)
  Class: Eq_420
  DataType: word32
  OrigDataType: word32
T_421: (in 0x00 : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_422: (in cs : selector)
  Class: Eq_422
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_423: (in 0x0158 : word16)
  Class: Eq_423
  DataType: word16
  OrigDataType: word16
T_424: (in SEQ(cs, 0x0158) : word32)
  Class: Eq_420
  DataType: word32
  OrigDataType: word32
T_425: (in msdos_set_interrupt_vector(0x00, SEQ(cs, 0x0158)) : void)
  Class: Eq_425
  DataType: void
  OrigDataType: void
T_426: (in msdos_set_interrupt_vector : ptr32)
  Class: Eq_417
  DataType: (ptr (fn T_429 (T_333, T_428)))
  OrigDataType: (ptr (fn T_429 (T_333, T_428)))
T_427: (in 0x0074 : word16)
  Class: Eq_427
  DataType: (memptr T_334 (struct (0 T_428 t0000)))
  OrigDataType: (memptr T_334 (struct (0 T_428 t0000)))
T_428: (in Mem0[ds:0x0074:segptr32] : segptr32)
  Class: Eq_420
  DataType: segptr32
  OrigDataType: segptr32
T_429: (in msdos_set_interrupt_vector(al, Mem0[ds:0x0074:segptr32]) : void)
  Class: Eq_429
  DataType: void
  OrigDataType: void
T_430: (in msdos_set_interrupt_vector : ptr32)
  Class: Eq_417
  DataType: (ptr (fn T_433 (T_333, T_432)))
  OrigDataType: (ptr (fn T_433 (T_333, T_432)))
T_431: (in 0x0078 : word16)
  Class: Eq_431
  DataType: (memptr T_334 (struct (0 T_432 t0000)))
  OrigDataType: (memptr T_334 (struct (0 T_432 t0000)))
T_432: (in Mem0[ds:0x0078:segptr32] : segptr32)
  Class: Eq_420
  DataType: segptr32
  OrigDataType: segptr32
T_433: (in msdos_set_interrupt_vector(al, Mem0[ds:0x0078:segptr32]) : void)
  Class: Eq_433
  DataType: void
  OrigDataType: void
T_434: (in msdos_set_interrupt_vector : ptr32)
  Class: Eq_417
  DataType: (ptr (fn T_437 (T_333, T_436)))
  OrigDataType: (ptr (fn T_437 (T_333, T_436)))
T_435: (in 0x007C : word16)
  Class: Eq_435
  DataType: (memptr T_334 (struct (0 T_436 t0000)))
  OrigDataType: (memptr T_334 (struct (0 T_436 t0000)))
T_436: (in Mem0[ds:0x007C:segptr32] : segptr32)
  Class: Eq_420
  DataType: segptr32
  OrigDataType: segptr32
T_437: (in msdos_set_interrupt_vector(al, Mem0[ds:0x007C:segptr32]) : void)
  Class: Eq_437
  DataType: void
  OrigDataType: void
T_438: (in msdos_set_interrupt_vector : ptr32)
  Class: Eq_417
  DataType: (ptr (fn T_442 (T_439, T_441)))
  OrigDataType: (ptr (fn T_442 (T_439, T_441)))
T_439: (in 0x06 : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_440: (in 0x0080 : word16)
  Class: Eq_440
  DataType: (memptr T_334 (struct (0 T_441 t0000)))
  OrigDataType: (memptr T_334 (struct (0 T_441 t0000)))
T_441: (in Mem0[ds:0x0080:segptr32] : segptr32)
  Class: Eq_420
  DataType: segptr32
  OrigDataType: segptr32
T_442: (in msdos_set_interrupt_vector(0x06, Mem0[ds:0x0080:segptr32]) : void)
  Class: Eq_442
  DataType: void
  OrigDataType: void
T_443: (in bx : word16)
  Class: Eq_443
  DataType: word16
  OrigDataType: word16
T_444: (in ax_8 : word16)
  Class: Eq_444
  DataType: word16
  OrigDataType: word16
T_445: (in msdos_write_file : ptr32)
  Class: Eq_445
  DataType: (ptr (fn T_454 (T_451, T_373, T_452, T_453)))
  OrigDataType: (ptr (fn T_454 (T_451, T_373, T_452, T_453)))
T_446: (in signature of msdos_write_file : void)
  Class: Eq_445
  DataType: 
  OrigDataType: 
T_447: (in bx : word16)
  Class: Eq_447
  DataType: word16
  OrigDataType: word16
T_448: (in cx : word16)
  Class: Eq_373
  DataType: word16
  OrigDataType: word16
T_449: (in ds_dx : word32)
  Class: Eq_449
  DataType: word32
  OrigDataType: word32
T_450: (in axOut : ptr16)
  Class: Eq_450
  DataType: ptr16
  OrigDataType: ptr16
T_451: (in 0x0002 : word16)
  Class: Eq_447
  DataType: word16
  OrigDataType: word16
T_452: (in ds_dx : word32)
  Class: Eq_449
  DataType: word32
  OrigDataType: word32
T_453: (in out ax_8 : ptr16)
  Class: Eq_450
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_454: (in msdos_write_file(0x0002, cx, ds_dx, out ax_8) : bool)
  Class: Eq_454
  DataType: bool
  OrigDataType: bool
T_455: (in 0x0002 : word16)
  Class: Eq_455
  DataType: word16
  OrigDataType: word16
T_456: (in ds_3 : selector)
  Class: Eq_2
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_457: (in 0x01F8 : word16)
  Class: Eq_457
  DataType: (memptr T_7 (struct (0 T_458 t0000)))
  OrigDataType: (memptr T_7 (struct (0 T_458 t0000)))
T_458: (in Mem0[0x0800:0x01F8:selector] : selector)
  Class: Eq_2
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_459: (in bx_4 : word16)
  Class: Eq_459
  DataType: (memptr T_456 (struct (0 T_469 t0000)))
  OrigDataType: (memptr T_456 (struct (0 T_469 t0000)))
T_460: (in fn0800_01DA : ptr32)
  Class: Eq_371
  DataType: (ptr (fn T_463 (T_461, T_462, T_456)))
  OrigDataType: (ptr (fn T_463 (T_461, T_462, T_456)))
T_461: (in 0x001E : word16)
  Class: Eq_373
  DataType: word16
  OrigDataType: word16
T_462: (in 0x0056 : word16)
  Class: Eq_374
  DataType: word16
  OrigDataType: word16
T_463: (in fn0800_01DA(0x001E, 0x0056, ds_3) : word16)
  Class: Eq_459
  DataType: word16
  OrigDataType: word16
T_464: (in fn0800_0121 : ptr32)
  Class: Eq_322
  DataType: (ptr (fn T_467 (T_465, T_466)))
  OrigDataType: (ptr (fn T_467 (T_465, T_466)))
T_465: (in 0x03 : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_466: (in bLoc04 : byte)
  Class: Eq_325
  DataType: byte
  OrigDataType: byte
T_467: (in fn0800_0121(0x03, bLoc04) : void)
  Class: Eq_467
  DataType: void
  OrigDataType: void
T_468: (in bx_4 + si : word16)
  Class: Eq_468
  DataType: word16
  OrigDataType: word16
T_469: (in Mem0[ds_3:bx_4 + si:byte] : byte)
  Class: Eq_469
  DataType: byte
  OrigDataType: byte
T_470: (in 0x03 : byte)
  Class: Eq_470
  DataType: byte
  OrigDataType: byte
T_471: (in Mem0[ds_3:bx_4 + si:byte] + 0x03 : byte)
  Class: Eq_469
  DataType: byte
  OrigDataType: byte
T_472: (in bx_4 + si : word16)
  Class: Eq_472
  DataType: word16
  OrigDataType: word16
T_473: (in Mem13[ds_3:bx_4 + si:byte] : byte)
  Class: Eq_469
  DataType: byte
  OrigDataType: byte
T_474: (in bx_28 : word16)
  Class: Eq_474
  DataType: word16
  OrigDataType: word16
T_475: (in di_29 : word16)
  Class: Eq_474
  DataType: word16
  OrigDataType: word16
T_476: (in fn0800_0E2D : ptr32)
  Class: Eq_476
  DataType: (ptr (fn T_485 (T_456, T_482, T_483, T_484)))
  OrigDataType: (ptr (fn T_485 (T_456, T_482, T_483, T_484)))
T_477: (in signature of fn0800_0E2D : void)
  Class: Eq_476
  DataType: 
  OrigDataType: 
T_478: (in ds : selector)
  Class: Eq_2
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_479: (in wArg02 : word16)
  Class: Eq_479
  DataType: word16
  OrigDataType: word16
T_480: (in bxOut : ptr16)
  Class: Eq_480
  DataType: ptr16
  OrigDataType: ptr16
T_481: (in diOut : ptr16)
  Class: Eq_481
  DataType: ptr16
  OrigDataType: ptr16
T_482: (in 0x01A8 : word16)
  Class: Eq_479
  DataType: word16
  OrigDataType: word16
T_483: (in out bx_28 : ptr16)
  Class: Eq_480
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_484: (in out di_29 : ptr16)
  Class: Eq_481
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_485: (in fn0800_0E2D(ds_3, 0x01A8, out bx_28, out di_29) : word16)
  Class: Eq_485
  DataType: word16
  OrigDataType: word16
T_486: (in fn0800_16B6 : ptr32)
  Class: Eq_486
  DataType: (ptr (fn T_493 (T_474, T_475, T_456, T_492)))
  OrigDataType: (ptr (fn T_493 (T_474, T_475, T_456, T_492)))
T_487: (in signature of fn0800_16B6 : void)
  Class: Eq_486
  DataType: 
  OrigDataType: 
T_488: (in bx : word16)
  Class: Eq_474
  DataType: word16
  OrigDataType: word16
T_489: (in di : word16)
  Class: Eq_474
  DataType: word16
  OrigDataType: word16
T_490: (in ds : selector)
  Class: Eq_2
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_491: (in wArg02 : word16)
  Class: Eq_491
  DataType: word16
  OrigDataType: word16
T_492: (in 0x01C4 : word16)
  Class: Eq_491
  DataType: word16
  OrigDataType: word16
T_493: (in fn0800_16B6(bx_28, di_29, ds_3, 0x01C4) : void)
  Class: Eq_493
  DataType: void
  OrigDataType: void
T_494: (in bx_52 : word16)
  Class: Eq_494
  DataType: word16
  OrigDataType: word16
T_495: (in di_53 : word16)
  Class: Eq_495
  DataType: word16
  OrigDataType: word16
T_496: (in fn0800_0E2D : ptr32)
  Class: Eq_476
  DataType: (ptr (fn T_500 (T_456, T_497, T_498, T_499)))
  OrigDataType: (ptr (fn T_500 (T_456, T_497, T_498, T_499)))
T_497: (in 0x01C8 : word16)
  Class: Eq_479
  DataType: word16
  OrigDataType: word16
T_498: (in out bx_52 : ptr16)
  Class: Eq_480
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_499: (in out di_53 : ptr16)
  Class: Eq_481
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_500: (in fn0800_0E2D(ds_3, 0x01C8, out bx_52, out di_53) : word16)
  Class: Eq_500
  DataType: word16
  OrigDataType: word16
T_501: (in si_63 : word16)
  Class: Eq_501
  DataType: word16
  OrigDataType: word16
T_502: (in di_64 : word16)
  Class: Eq_502
  DataType: word16
  OrigDataType: word16
T_503: (in fn0800_0285 : ptr32)
  Class: Eq_503
  DataType: (ptr (fn T_520 (T_514, T_515, T_456, T_516, T_517, T_518, T_519)))
  OrigDataType: (ptr (fn T_520 (T_514, T_515, T_456, T_516, T_517, T_518, T_519)))
T_504: (in signature of fn0800_0285 : void)
  Class: Eq_503
  DataType: 
  OrigDataType: 
T_505: (in bp : word16)
  Class: Eq_505
  DataType: (memptr T_551 (struct (FFFFFFF8 T_558 tFFFFFFF8) (FFFFFFFA T_554 tFFFFFFFA) (FFFFFFFE T_550 tFFFFFFFE)))
  OrigDataType: (memptr T_551 (struct (FFFFFFF8 T_558 tFFFFFFF8) (FFFFFFFA T_554 tFFFFFFFA) (FFFFFFFE T_550 tFFFFFFFE)))
T_506: (in si : word16)
  Class: Eq_506
  DataType: word16
  OrigDataType: word16
T_507: (in ds : selector)
  Class: Eq_2
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_508: (in wArg00 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_509: (in wArg02 : word16)
  Class: Eq_111
  DataType: word16
  OrigDataType: word16
T_510: (in siOut : ptr16)
  Class: Eq_510
  DataType: ptr16
  OrigDataType: ptr16
T_511: (in diOut : ptr16)
  Class: Eq_511
  DataType: ptr16
  OrigDataType: ptr16
T_512: (in fp : ptr16)
  Class: Eq_512
  DataType: ptr16
  OrigDataType: ptr16
T_513: (in 0x0004 : word16)
  Class: Eq_513
  DataType: word16
  OrigDataType: word16
T_514: (in fp - 0x0004 : word16)
  Class: Eq_505
  DataType: word16
  OrigDataType: word16
T_515: (in 0x0014 : word16)
  Class: Eq_506
  DataType: word16
  OrigDataType: word16
T_516: (in wArg00 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_517: (in wArg02 : word16)
  Class: Eq_111
  DataType: word16
  OrigDataType: word16
T_518: (in out si_63 : ptr16)
  Class: Eq_510
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_519: (in out di_64 : ptr16)
  Class: Eq_511
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_520: (in fn0800_0285(fp - 0x0004, 0x0014, ds_3, wArg00, wArg02, out si_63, out di_64) : word16)
  Class: Eq_520
  DataType: word16
  OrigDataType: word16
T_521: (in ax : word16)
  Class: Eq_521
  DataType: word16
  OrigDataType: word16
T_522: (in bx_18 : word16)
  Class: Eq_474
  DataType: word16
  OrigDataType: word16
T_523: (in di_19 : word16)
  Class: Eq_474
  DataType: word16
  OrigDataType: word16
T_524: (in fn0800_0E2D : ptr32)
  Class: Eq_476
  DataType: (ptr (fn T_528 (T_296, T_525, T_526, T_527)))
  OrigDataType: (ptr (fn T_528 (T_296, T_525, T_526, T_527)))
T_525: (in 0x01A8 : word16)
  Class: Eq_479
  DataType: word16
  OrigDataType: word16
T_526: (in out bx_18 : ptr16)
  Class: Eq_480
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_527: (in out di_19 : ptr16)
  Class: Eq_481
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_528: (in fn0800_0E2D(ds, 0x01A8, out bx_18, out di_19) : word16)
  Class: Eq_528
  DataType: word16
  OrigDataType: word16
T_529: (in fn0800_16B6 : ptr32)
  Class: Eq_486
  DataType: (ptr (fn T_531 (T_522, T_523, T_296, T_530)))
  OrigDataType: (ptr (fn T_531 (T_522, T_523, T_296, T_530)))
T_530: (in 0x01C4 : word16)
  Class: Eq_491
  DataType: word16
  OrigDataType: word16
T_531: (in fn0800_16B6(bx_18, di_19, ds, 0x01C4) : void)
  Class: Eq_531
  DataType: void
  OrigDataType: void
T_532: (in bx_42 : word16)
  Class: Eq_532
  DataType: word16
  OrigDataType: word16
T_533: (in di_43 : word16)
  Class: Eq_533
  DataType: word16
  OrigDataType: word16
T_534: (in fn0800_0E2D : ptr32)
  Class: Eq_476
  DataType: (ptr (fn T_538 (T_296, T_535, T_536, T_537)))
  OrigDataType: (ptr (fn T_538 (T_296, T_535, T_536, T_537)))
T_535: (in 0x01C8 : word16)
  Class: Eq_479
  DataType: word16
  OrigDataType: word16
T_536: (in out bx_42 : ptr16)
  Class: Eq_480
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_537: (in out di_43 : ptr16)
  Class: Eq_481
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_538: (in fn0800_0E2D(ds, 0x01C8, out bx_42, out di_43) : word16)
  Class: Eq_538
  DataType: word16
  OrigDataType: word16
T_539: (in si_51 : word16)
  Class: Eq_539
  DataType: word16
  OrigDataType: word16
T_540: (in di_52 : word16)
  Class: Eq_540
  DataType: word16
  OrigDataType: word16
T_541: (in fn0800_0285 : ptr32)
  Class: Eq_503
  DataType: (ptr (fn T_548 (T_544, T_545, T_296, T_295, T_294, T_546, T_547)))
  OrigDataType: (ptr (fn T_548 (T_544, T_545, T_296, T_295, T_294, T_546, T_547)))
T_542: (in fp : ptr16)
  Class: Eq_542
  DataType: ptr16
  OrigDataType: ptr16
T_543: (in 0x0002 : word16)
  Class: Eq_543
  DataType: word16
  OrigDataType: word16
T_544: (in fp - 0x0002 : word16)
  Class: Eq_505
  DataType: word16
  OrigDataType: word16
T_545: (in 0x0014 : word16)
  Class: Eq_506
  DataType: word16
  OrigDataType: word16
T_546: (in out si_51 : ptr16)
  Class: Eq_510
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_547: (in out di_52 : ptr16)
  Class: Eq_511
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_548: (in fn0800_0285(fp - 0x0002, 0x0014, ds, di, si, out si_51, out di_52) : word16)
  Class: Eq_548
  DataType: word16
  OrigDataType: word16
T_549: (in ax : word16)
  Class: Eq_549
  DataType: word16
  OrigDataType: word16
T_550: (in dx_7 : word16)
  Class: Eq_550
  DataType: int16
  OrigDataType: int16
T_551: (in ss : selector)
  Class: Eq_551
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_552: (in 0x0006 : word16)
  Class: Eq_552
  DataType: word16
  OrigDataType: word16
T_553: (in bp - 0x0006 : word16)
  Class: Eq_553
  DataType: word16
  OrigDataType: word16
T_554: (in Mem0[ss:bp - 0x0006:word16] : word16)
  Class: Eq_550
  DataType: word16
  OrigDataType: word16
T_555: (in ax_8 : word16)
  Class: Eq_555
  DataType: word16
  OrigDataType: word16
T_556: (in 0x0008 : word16)
  Class: Eq_556
  DataType: word16
  OrigDataType: word16
T_557: (in bp - 0x0008 : word16)
  Class: Eq_557
  DataType: word16
  OrigDataType: word16
T_558: (in Mem0[ss:bp - 0x0008:word16] : word16)
  Class: Eq_555
  DataType: word16
  OrigDataType: word16
T_559: (in 0x0002 : word16)
  Class: Eq_559
  DataType: word16
  OrigDataType: word16
T_560: (in bp - 0x0002 : word16)
  Class: Eq_560
  DataType: word16
  OrigDataType: word16
T_561: (in Mem0[ss:bp - 0x0002:word16] : word16)
  Class: Eq_550
  DataType: int16
  OrigDataType: int16
T_562: (in dx_7 < Mem0[ss:bp - 0x0002:word16] : bool)
  Class: Eq_562
  DataType: bool
  OrigDataType: bool
T_563: (in di_17 : word16)
  Class: Eq_563
  DataType: word16
  OrigDataType: word16
T_564: (in 0x0001 : word16)
  Class: Eq_563
  DataType: word16
  OrigDataType: word16
T_565: (in bp - 0x0002 : word16)
  Class: Eq_565
  DataType: word16
  OrigDataType: word16
T_566: (in Mem0[ss:bp - 0x0002:word16] : word16)
  Class: Eq_550
  DataType: int16
  OrigDataType: int16
T_567: (in dx_7 > Mem0[ss:bp - 0x0002:word16] : bool)
  Class: Eq_567
  DataType: bool
  OrigDataType: bool
T_568: (in di_106 : word16)
  Class: Eq_568
  DataType: word16
  OrigDataType: word16
T_569: (in wArg00 : word16)
  Class: Eq_569
  DataType: word16
  OrigDataType: word16
T_570: (in *diOut : word16)
  Class: Eq_569
  DataType: 
  OrigDataType: 
T_571: (in si_109 : word16)
  Class: Eq_571
  DataType: 
  OrigDataType: 
T_572: (in wArg02 : word16)
  Class: Eq_572
  DataType: 
  OrigDataType: 
T_573: (in *siOut : word16)
  Class: Eq_572
  DataType: 
  OrigDataType: 
T_574: (in bx_97 : word16)
  Class: Eq_574
  DataType: 
  OrigDataType: 
T_575: (in di_98 : word16)
  Class: Eq_575
  DataType: 
  OrigDataType: 
T_576: (in fn0800_0E2D : ptr32)
  Class: Eq_476
  DataType: 
  OrigDataType: 
T_577: (in 0x01E2 : word16)
  Class: Eq_479
  DataType: 
  OrigDataType: 
T_578: (in out bx_97 : ptr16)
  Class: Eq_480
  DataType: 
  OrigDataType: 
T_579: (in out di_98 : ptr16)
  Class: Eq_481
  DataType: 
  OrigDataType: 
T_580: (in fn0800_0E2D(ds, 0x01E2, out bx_97, out di_98) : word16)
  Class: Eq_580
  DataType: 
  OrigDataType: 
T_581: (in 0x0004 : word16)
  Class: Eq_581
  DataType: 
  OrigDataType: 
T_582: (in bp - 0x0004 : word16)
  Class: Eq_582
  DataType: 
  OrigDataType: 
T_583: (in Mem0[ss:bp - 0x0004:word16] : word16)
  Class: Eq_555
  DataType: 
  OrigDataType: 
T_584: (in ax_8 <=u Mem0[ss:bp - 0x0004:word16] : bool)
  Class: Eq_584
  DataType: 
  OrigDataType: 
T_585: (in 0x0028 : word16)
  Class: Eq_563
  DataType: 
  OrigDataType: 
T_586: (in di_17 <= 0x0028 : bool)
  Class: Eq_586
  DataType: 
  OrigDataType: 
T_587: (in 0x0001 : word16)
  Class: Eq_587
  DataType: 
  OrigDataType: 
T_588: (in di_17 + 0x0001 : word16)
  Class: Eq_563
  DataType: 
  OrigDataType: 
T_589: (in v14_25 : word16)
  Class: Eq_589
  DataType: 
  OrigDataType: 
T_590: (in 0x0008 : word16)
  Class: Eq_590
  DataType: 
  OrigDataType: 
T_591: (in bp - 0x0008 : word16)
  Class: Eq_591
  DataType: 
  OrigDataType: 
T_592: (in Mem0[ss:bp - 0x0008:word16] : word16)
  Class: Eq_592
  DataType: 
  OrigDataType: 
T_593: (in 0x0001 : word16)
  Class: Eq_593
  DataType: 
  OrigDataType: 
T_594: (in Mem0[ss:bp - 0x0008:word16] + 0x0001 : word16)
  Class: Eq_589
  DataType: 
  OrigDataType: 
T_595: (in 0x0008 : word16)
  Class: Eq_595
  DataType: 
  OrigDataType: 
T_596: (in bp - 0x0008 : word16)
  Class: Eq_596
  DataType: 
  OrigDataType: 
T_597: (in Mem26[ss:bp - 0x0008:word16] : word16)
  Class: Eq_589
  DataType: 
  OrigDataType: 
T_598: (in 0x0006 : word16)
  Class: Eq_598
  DataType: 
  OrigDataType: 
T_599: (in bp - 0x0006 : word16)
  Class: Eq_599
  DataType: 
  OrigDataType: 
T_600: (in Mem26[ss:bp - 0x0006:word16] : word16)
  Class: Eq_600
  DataType: 
  OrigDataType: 
T_601: (in 0x0000 : word16)
  Class: Eq_589
  DataType: 
  OrigDataType: 
T_602: (in v14_25 <u 0x0000 : bool)
  Class: Eq_602
  DataType: 
  OrigDataType: 
T_603: (in Mem26[ss:bp - 0x0006:word16] + (v14_25 <u 0x0000) : word16)
  Class: Eq_603
  DataType: 
  OrigDataType: 
T_604: (in 0x0006 : word16)
  Class: Eq_604
  DataType: 
  OrigDataType: 
T_605: (in bp - 0x0006 : word16)
  Class: Eq_605
  DataType: 
  OrigDataType: 
T_606: (in Mem30[ss:bp - 0x0006:word16] : word16)
  Class: Eq_603
  DataType: 
  OrigDataType: 
T_607: (in ax_21 : word16)
  Class: Eq_607
  DataType: 
  OrigDataType: 
T_608: (in 0x024E : word16)
  Class: Eq_608
  DataType: 
  OrigDataType: 
T_609: (in Mem0[ds:0x024E:word16] : word16)
  Class: Eq_607
  DataType: 
  OrigDataType: 
T_610: (in v7_22 : word16)
  Class: Eq_610
  DataType: 
  OrigDataType: 
T_611: (in 0x024E : word16)
  Class: Eq_611
  DataType: 
  OrigDataType: 
T_612: (in Mem0[ds:0x024E:word16] : word16)
  Class: Eq_612
  DataType: 
  OrigDataType: 
T_613: (in 0x0001 : word16)
  Class: Eq_613
  DataType: 
  OrigDataType: 
T_614: (in Mem0[ds:0x024E:word16] - 0x0001 : word16)
  Class: Eq_610
  DataType: 
  OrigDataType: 
T_615: (in Mem23[ds:0x024E:word16] : word16)
  Class: Eq_610
  DataType: 
  OrigDataType: 
T_616: (in al_25 : byte)
  Class: Eq_16
  DataType: 
  OrigDataType: 
T_617: (in (byte) ax_21 : byte)
  Class: Eq_16
  DataType: 
  OrigDataType: 
T_618: (in 0x0000 : word16)
  Class: Eq_607
  DataType: 
  OrigDataType: 
T_619: (in ax_21 != 0x0000 : bool)
  Class: Eq_619
  DataType: 
  OrigDataType: 
T_620: (in cs : selector)
  Class: Eq_620
  DataType: 
  OrigDataType: 
T_621: (in 0x05F8 : word16)
  Class: Eq_621
  DataType: 
  OrigDataType: 
T_622: (in SEQ(ds, 0x05F8) : ptr32)
  Class: Eq_622
  DataType: 
  OrigDataType: 
T_623: (in 0x024E : word16)
  Class: Eq_623
  DataType: 
  OrigDataType: 
T_624: (in Mem23[ds:0x024E:word16] : word16)
  Class: Eq_624
  DataType: 
  OrigDataType: 
T_625: (in 0x0002 : word16)
  Class: Eq_625
  DataType: 
  OrigDataType: 
T_626: (in Mem23[ds:0x024E:word16] * 0x0002 : word16)
  Class: Eq_626
  DataType: 
  OrigDataType: 
T_627: (in SEQ(ds, 0x05F8)[Mem23[ds:0x024E:word16] * 0x0002] : word16)
  Class: Eq_627
  DataType: 
  OrigDataType: 
T_628: (in SEQ(cs, SEQ(ds, 0x05F8)[Mem23[ds:0x024E:word16] * 0x0002]) : ptr32)
  Class: Eq_628
  DataType: 
  OrigDataType: 
T_629: (in 0x0244 : word16)
  Class: Eq_629
  DataType: 
  OrigDataType: 
T_630: (in Mem23[ds:0x0244:word16] : word16)
  Class: Eq_630
  DataType: 
  OrigDataType: 
T_631: (in SEQ(cs, Mem23[ds:0x0244:word16]) : ptr32)
  Class: Eq_631
  DataType: 
  OrigDataType: 
T_632: (in 0x0246 : word16)
  Class: Eq_632
  DataType: 
  OrigDataType: 
T_633: (in Mem23[ds:0x0246:word16] : word16)
  Class: Eq_633
  DataType: 
  OrigDataType: 
T_634: (in SEQ(cs, Mem23[ds:0x0246:word16]) : ptr32)
  Class: Eq_634
  DataType: 
  OrigDataType: 
T_635: (in 0x0248 : word16)
  Class: Eq_635
  DataType: 
  OrigDataType: 
T_636: (in Mem23[ds:0x0248:word16] : word16)
  Class: Eq_636
  DataType: 
  OrigDataType: 
T_637: (in SEQ(cs, Mem23[ds:0x0248:word16]) : ptr32)
  Class: Eq_637
  DataType: 
  OrigDataType: 
T_638: (in fn0800_0121 : ptr32)
  Class: Eq_322
  DataType: 
  OrigDataType: 
T_639: (in bLoc06 : byte)
  Class: Eq_325
  DataType: 
  OrigDataType: 
T_640: (in fn0800_0121(al_25, bLoc06) : void)
  Class: Eq_640
  DataType: 
  OrigDataType: 
T_641: (in si : word16)
  Class: Eq_641
  DataType: 
  OrigDataType: 
T_642: (in *dsOut : selector)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_643: (in es_231 : selector)
  Class: Eq_643
  DataType: 
  OrigDataType: 
T_644: (in wArg00 : word16)
  Class: Eq_644
  DataType: 
  OrigDataType: 
T_645: (in 0x0312 : word16)
  Class: Eq_645
  DataType: 
  OrigDataType: 
T_646: (in Mem3[0x0800:0x0312:word16] : word16)
  Class: Eq_644
  DataType: 
  OrigDataType: 
T_647: (in 0x0314 : word16)
  Class: Eq_647
  DataType: 
  OrigDataType: 
T_648: (in Mem6[0x0800:0x0314:word16] : word16)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_649: (in si_23 : word16)
  Class: Eq_649
  DataType: 
  OrigDataType: 
T_650: (in 0x008A : word16)
  Class: Eq_650
  DataType: 
  OrigDataType: 
T_651: (in Mem6[ds:0x008A:word16] : word16)
  Class: Eq_649
  DataType: 
  OrigDataType: 
T_652: (in es_8 : selector)
  Class: Eq_643
  DataType: 
  OrigDataType: 
T_653: (in 0x0090 : word16)
  Class: Eq_653
  DataType: 
  OrigDataType: 
T_654: (in Mem6[ds:0x0090:selector] : selector)
  Class: Eq_643
  DataType: 
  OrigDataType: 
T_655: (in ax_13 : word16)
  Class: Eq_655
  DataType: 
  OrigDataType: 
T_656: (in ax : word16)
  Class: Eq_656
  DataType: 
  OrigDataType: 
T_657: (in 0x0080 : word16)
  Class: Eq_657
  DataType: 
  OrigDataType: 
T_658: (in Mem6[ds:0x0080:byte] : byte)
  Class: Eq_658
  DataType: 
  OrigDataType: 
T_659: (in DPB(ax, Mem6[ds:0x0080:byte], 0, 8) : word16)
  Class: Eq_655
  DataType: 
  OrigDataType: 
T_660: (in si_103 : word16)
  Class: Eq_111
  DataType: 
  OrigDataType: 
T_661: (in 0x0002 : word16)
  Class: Eq_661
  DataType: 
  OrigDataType: 
T_662: (in si_23 + 0x0002 : word16)
  Class: Eq_111
  DataType: 
  OrigDataType: 
T_663: (in cx_25 : word16)
  Class: Eq_663
  DataType: 
  OrigDataType: 
T_664: (in 0x0001 : word16)
  Class: Eq_663
  DataType: 
  OrigDataType: 
T_665: (in 0x0092 : word16)
  Class: Eq_665
  DataType: 
  OrigDataType: 
T_666: (in Mem6[ds:0x0092:byte] : byte)
  Class: Eq_666
  DataType: 
  OrigDataType: 
T_667: (in 0x03 : byte)
  Class: Eq_666
  DataType: 
  OrigDataType: 
T_668: (in Mem6[ds:0x0092:byte] <u 0x03 : bool)
  Class: Eq_668
  DataType: 
  OrigDataType: 
T_669: (in di_83 : word16)
  Class: Eq_111
  DataType: 
  OrigDataType: 
T_670: (in fp : ptr16)
  Class: Eq_670
  DataType: 
  OrigDataType: 
T_671: (in 0x0002 : word16)
  Class: Eq_671
  DataType: 
  OrigDataType: 
T_672: (in ax_13 + 0x0002 : word16)
  Class: Eq_672
  DataType: 
  OrigDataType: 
T_673: (in ax_13 + 0x0002 + cx_25 : word16)
  Class: Eq_673
  DataType: 
  OrigDataType: 
T_674: (in 0xFFFE : word16)
  Class: Eq_674
  DataType: 
  OrigDataType: 
T_675: (in ax_13 + 0x0002 + cx_25 & 0xFFFE : word16)
  Class: Eq_675
  DataType: 
  OrigDataType: 
T_676: (in ax_13 + 0x0002 + cx_25 & 0xFFFE & 0xFFFE : word16)
  Class: Eq_676
  DataType: 
  OrigDataType: 
T_677: (in fp - (((ax_13 + 0x0002) + cx_25 & 0xFFFE) & 0xFFFE) : word16)
  Class: Eq_677
  DataType: 
  OrigDataType: 
T_678: (in 0x0001 : word16)
  Class: Eq_678
  DataType: 
  OrigDataType: 
T_679: (in fp - (((ax_13 + 0x0002) + cx_25 & 0xFFFE) & 0xFFFE) + 0x0001 : word16)
  Class: Eq_111
  DataType: 
  OrigDataType: 
T_680: (in 0x0000 : word16)
  Class: Eq_111
  DataType: 
  OrigDataType: 
T_681: (in di_83 <u 0x0000 : bool)
  Class: Eq_681
  DataType: 
  OrigDataType: 
T_682: (in 0x008C : word16)
  Class: Eq_682
  DataType: 
  OrigDataType: 
T_683: (in Mem6[ds:0x008C:selector] : selector)
  Class: Eq_643
  DataType: 
  OrigDataType: 
T_684: (in di_232 : word16)
  Class: Eq_684
  DataType: 
  OrigDataType: 
T_685: (in si_23 + 0x0002 : word16)
  Class: Eq_684
  DataType: 
  OrigDataType: 
T_686: (in cl_233 : byte)
  Class: Eq_686
  DataType: 
  OrigDataType: 
T_687: (in 0x7F : byte)
  Class: Eq_686
  DataType: 
  OrigDataType: 
T_688: (in cx_234 : word16)
  Class: Eq_688
  DataType: 
  OrigDataType: 
T_689: (in 0x007F : word16)
  Class: Eq_688
  DataType: 
  OrigDataType: 
T_690: (in 0x0000 : word16)
  Class: Eq_688
  DataType: 
  OrigDataType: 
T_691: (in cx_234 == 0x0000 : bool)
  Class: Eq_691
  DataType: 
  OrigDataType: 
T_692: (in 0x0001 : word16)
  Class: Eq_692
  DataType: 
  OrigDataType: 
T_693: (in cx_234 - 0x0001 : word16)
  Class: Eq_688
  DataType: 
  OrigDataType: 
T_694: (in di_260 : word16)
  Class: Eq_684
  DataType: 
  OrigDataType: 
T_695: (in 0x0001 : word16)
  Class: Eq_695
  DataType: 
  OrigDataType: 
T_696: (in di_260 + 0x0001 : word16)
  Class: Eq_684
  DataType: 
  OrigDataType: 
T_697: (in (byte) cx_234 : byte)
  Class: Eq_686
  DataType: 
  OrigDataType: 
T_698: (in 0x00 : byte)
  Class: Eq_698
  DataType: 
  OrigDataType: 
T_699: (in 0x0000 : word16)
  Class: Eq_699
  DataType: 
  OrigDataType: 
T_700: (in di_260 + 0x0000 : word16)
  Class: Eq_700
  DataType: 
  OrigDataType: 
T_701: (in Mem6[es_231:di_260 + 0x0000:byte] : byte)
  Class: Eq_698
  DataType: 
  OrigDataType: 
T_702: (in 0x00 != Mem6[es_231:di_260 + 0x0000:byte] : bool)
  Class: Eq_702
  DataType: 
  OrigDataType: 
T_703: (in 0x0000 : word16)
  Class: Eq_688
  DataType: 
  OrigDataType: 
T_704: (in cx_234 == 0x0000 : bool)
  Class: Eq_704
  DataType: 
  OrigDataType: 
T_705: (in 0x7F : byte)
  Class: Eq_705
  DataType: 
  OrigDataType: 
T_706: (in cl_233 ^ 0x7F : byte)
  Class: Eq_706
  DataType: 
  OrigDataType: 
T_707: (in DPB(cx_234, cl_233 ^ 0x7F, 0, 8) : word16)
  Class: Eq_663
  DataType: 
  OrigDataType: 
T_708: (in ss : selector)
  Class: Eq_708
  DataType: 
  OrigDataType: 
T_709: (in 0x0002 : word16)
  Class: Eq_709
  DataType: 
  OrigDataType: 
T_710: (in di_83 - 0x0002 : word16)
  Class: Eq_710
  DataType: 
  OrigDataType: 
T_711: (in Mem93[ss:di_83 - 0x0002:word16] : word16)
  Class: Eq_663
  DataType: 
  OrigDataType: 
T_712: (in cx_105 : word16)
  Class: Eq_712
  DataType: 
  OrigDataType: 
T_713: (in 0x0001 : word16)
  Class: Eq_713
  DataType: 
  OrigDataType: 
T_714: (in cx_25 - 0x0001 : word16)
  Class: Eq_714
  DataType: 
  OrigDataType: 
T_715: (in 0x0001 : word16)
  Class: Eq_715
  DataType: 
  OrigDataType: 
T_716: (in cx_25 - 0x0001 + 0x0001 : word16)
  Class: Eq_712
  DataType: 
  OrigDataType: 
T_717: (in di_104 : word16)
  Class: Eq_111
  DataType: 
  OrigDataType: 
T_718: (in 0x00 : byte)
  Class: Eq_718
  DataType: 
  OrigDataType: 
T_719: (in 0x0000 : word16)
  Class: Eq_719
  DataType: 
  OrigDataType: 
T_720: (in di_104 + 0x0000 : word16)
  Class: Eq_720
  DataType: 
  OrigDataType: 
T_721: (in Mem109[ss:di_104 + 0x0000:byte] : byte)
  Class: Eq_718
  DataType: 
  OrigDataType: 
T_722: (in di_110 : word16)
  Class: Eq_722
  DataType: 
  OrigDataType: 
T_723: (in 0x0000 : word16)
  Class: Eq_723
  DataType: 
  OrigDataType: 
T_724: (in di_104 + 0x0000 : word16)
  Class: Eq_722
  DataType: 
  OrigDataType: 
T_725: (in si_113 : word16)
  Class: Eq_725
  DataType: 
  OrigDataType: 
T_726: (in 0x0081 : word16)
  Class: Eq_725
  DataType: 
  OrigDataType: 
T_727: (in cx_115 : word16)
  Class: Eq_727
  DataType: 
  OrigDataType: 
T_728: (in 0x0001 : word16)
  Class: Eq_728
  DataType: 
  OrigDataType: 
T_729: (in ax_13 + 0x0001 : word16)
  Class: Eq_727
  DataType: 
  OrigDataType: 
T_730: (in ax_118 : word16)
  Class: Eq_712
  DataType: 
  OrigDataType: 
T_731: (in al_120 : byte)
  Class: Eq_731
  DataType: 
  OrigDataType: 
T_732: (in (byte) cx_105 : byte)
  Class: Eq_731
  DataType: 
  OrigDataType: 
T_733: (in dx_121 : word16)
  Class: Eq_712
  DataType: 
  OrigDataType: 
T_734: (in bx_122 : word16)
  Class: Eq_734
  DataType: 
  OrigDataType: 
T_735: (in 0x0000 : word16)
  Class: Eq_735
  DataType: 
  OrigDataType: 
T_736: (in cx_105 + 0x0000 : word16)
  Class: Eq_734
  DataType: 
  OrigDataType: 
T_737: (in 0x0000 : word16)
  Class: Eq_737
  DataType: 
  OrigDataType: 
T_738: (in si_103 + 0x0000 : word16)
  Class: Eq_738
  DataType: 
  OrigDataType: 
T_739: (in Mem93[es_231:si_103 + 0x0000:byte] : byte)
  Class: Eq_739
  DataType: 
  OrigDataType: 
T_740: (in 0x0000 : word16)
  Class: Eq_740
  DataType: 
  OrigDataType: 
T_741: (in di_104 + 0x0000 : word16)
  Class: Eq_741
  DataType: 
  OrigDataType: 
T_742: (in Mem102[ss:di_104 + 0x0000:byte] : byte)
  Class: Eq_739
  DataType: 
  OrigDataType: 
T_743: (in 0x0001 : word16)
  Class: Eq_743
  DataType: 
  OrigDataType: 
T_744: (in si_103 + 0x0001 : word16)
  Class: Eq_111
  DataType: 
  OrigDataType: 
T_745: (in 0x0001 : word16)
  Class: Eq_745
  DataType: 
  OrigDataType: 
T_746: (in di_104 + 0x0001 : word16)
  Class: Eq_111
  DataType: 
  OrigDataType: 
T_747: (in 0x0001 : word16)
  Class: Eq_747
  DataType: 
  OrigDataType: 
T_748: (in cx_105 - 0x0001 : word16)
  Class: Eq_712
  DataType: 
  OrigDataType: 
T_749: (in 0xFFFF : word16)
  Class: Eq_712
  DataType: 
  OrigDataType: 
T_750: (in cx_105 == 0xFFFF : bool)
  Class: Eq_750
  DataType: 
  OrigDataType: 
T_751: (in 0x20 : byte)
  Class: Eq_731
  DataType: 
  OrigDataType: 
T_752: (in al_120 == 0x20 : bool)
  Class: Eq_752
  DataType: 
  OrigDataType: 
T_753: (in C_138 : byte)
  Class: Eq_753
  DataType: 
  OrigDataType: 
T_754: (in cx_187 : word16)
  Class: Eq_754
  DataType: 
  OrigDataType: 
T_755: (in di_83 - 0x0002 : word16)
  Class: Eq_755
  DataType: 
  OrigDataType: 
T_756: (in Mem109[ss:di_83 - 0x0002:word16] : word16)
  Class: Eq_756
  DataType: 
  OrigDataType: 
T_757: (in Mem109[ss:di_83 - 0x0002:word16] + dx_121 : word16)
  Class: Eq_754
  DataType: 
  OrigDataType: 
T_758: (in ds_189 : selector)
  Class: Eq_758
  DataType: 
  OrigDataType: 
T_759: (in 0x0314 : word16)
  Class: Eq_759
  DataType: 
  OrigDataType: 
T_760: (in Mem109[0x0800:0x0314:selector] : selector)
  Class: Eq_758
  DataType: 
  OrigDataType: 
T_761: (in *dsOut : selector)
  Class: Eq_758
  DataType: 
  OrigDataType: 
T_762: (in 0x0084 : word16)
  Class: Eq_762
  DataType: 
  OrigDataType: 
T_763: (in Mem190[ds_189:0x0084:word16] : word16)
  Class: Eq_734
  DataType: 
  OrigDataType: 
T_764: (in bp_195 : word16)
  Class: Eq_764
  DataType: 
  OrigDataType: 
T_765: (in 0x0001 : word16)
  Class: Eq_765
  DataType: 
  OrigDataType: 
T_766: (in bx_122 + 0x0001 : word16)
  Class: Eq_766
  DataType: 
  OrigDataType: 
T_767: (in 0x0002 : word16)
  Class: Eq_767
  DataType: 
  OrigDataType: 
T_768: (in (bx_122 + 0x0001) * 0x0002 : word16)
  Class: Eq_768
  DataType: 
  OrigDataType: 
T_769: (in di_83 - (bx_122 + 0x0001) * 0x0002 : word16)
  Class: Eq_764
  DataType: 
  OrigDataType: 
T_770: (in 0x0000 : word16)
  Class: Eq_764
  DataType: 
  OrigDataType: 
T_771: (in bp_195 <u 0x0000 : bool)
  Class: Eq_771
  DataType: 
  OrigDataType: 
T_772: (in CZ_180 : byte)
  Class: Eq_753
  DataType: 
  OrigDataType: 
T_773: (in fn0800_03A1 : ptr32)
  Class: Eq_773
  DataType: 
  OrigDataType: 
T_774: (in signature of fn0800_03A1 : void)
  Class: Eq_773
  DataType: 
  OrigDataType: 
T_775: (in ax : word16)
  Class: Eq_712
  DataType: 
  OrigDataType: 
T_776: (in cx : word16)
  Class: Eq_727
  DataType: 
  OrigDataType: 
T_777: (in dx : word16)
  Class: Eq_712
  DataType: 
  OrigDataType: 
T_778: (in bx : word16)
  Class: Eq_734
  DataType: 
  OrigDataType: 
T_779: (in si : word16)
  Class: Eq_725
  DataType: 
  OrigDataType: 
T_780: (in di : word16)
  Class: Eq_722
  DataType: 
  OrigDataType: 
T_781: (in es : selector)
  Class: Eq_708
  DataType: 
  OrigDataType: 
T_782: (in ds : selector)
  Class: Eq_643
  DataType: 
  OrigDataType: 
T_783: (in axOut : ptr16)
  Class: Eq_783
  DataType: 
  OrigDataType: 
T_784: (in cxOut : ptr16)
  Class: Eq_784
  DataType: 
  OrigDataType: 
T_785: (in dxOut : ptr16)
  Class: Eq_785
  DataType: 
  OrigDataType: 
T_786: (in bxOut : ptr16)
  Class: Eq_786
  DataType: 
  OrigDataType: 
T_787: (in siOut : ptr16)
  Class: Eq_787
  DataType: 
  OrigDataType: 
T_788: (in diOut : ptr16)
  Class: Eq_788
  DataType: 
  OrigDataType: 
T_789: (in out ax_118 : ptr16)
  Class: Eq_783
  DataType: 
  OrigDataType: 
T_790: (in out cx_115 : ptr16)
  Class: Eq_784
  DataType: 
  OrigDataType: 
T_791: (in out dx_121 : ptr16)
  Class: Eq_785
  DataType: 
  OrigDataType: 
T_792: (in out bx_122 : ptr16)
  Class: Eq_786
  DataType: 
  OrigDataType: 
T_793: (in out si_113 : ptr16)
  Class: Eq_787
  DataType: 
  OrigDataType: 
T_794: (in out di_110 : ptr16)
  Class: Eq_788
  DataType: 
  OrigDataType: 
T_795: (in fn0800_03A1(ax_118, cx_115, dx_121, bx_122, si_113, di_110, ss, es_8, out ax_118, out cx_115, out dx_121, out bx_122, out si_113, out di_110) : byte)
  Class: Eq_753
  DataType: 
  OrigDataType: 
T_796: (in 0x00 : byte)
  Class: Eq_731
  DataType: 
  OrigDataType: 
T_797: (in 0x00 : byte)
  Class: Eq_797
  DataType: 
  OrigDataType: 
T_798: (in DPB(ax_118, 0x00, 0, 8) : word16)
  Class: Eq_712
  DataType: 
  OrigDataType: 
T_799: (in 0x0D : byte)
  Class: Eq_731
  DataType: 
  OrigDataType: 
T_800: (in al_120 == 0x0D : bool)
  Class: Eq_800
  DataType: 
  OrigDataType: 
T_801: (in 0x09 : byte)
  Class: Eq_731
  DataType: 
  OrigDataType: 
T_802: (in al_120 != 0x09 : bool)
  Class: Eq_802
  DataType: 
  OrigDataType: 
T_803: (in CZ_137 : byte)
  Class: Eq_753
  DataType: 
  OrigDataType: 
T_804: (in fn0800_03A1 : ptr32)
  Class: Eq_773
  DataType: 
  OrigDataType: 
T_805: (in out ax_118 : ptr16)
  Class: Eq_783
  DataType: 
  OrigDataType: 
T_806: (in out cx_115 : ptr16)
  Class: Eq_784
  DataType: 
  OrigDataType: 
T_807: (in out dx_121 : ptr16)
  Class: Eq_785
  DataType: 
  OrigDataType: 
T_808: (in out bx_122 : ptr16)
  Class: Eq_786
  DataType: 
  OrigDataType: 
T_809: (in out si_113 : ptr16)
  Class: Eq_787
  DataType: 
  OrigDataType: 
T_810: (in out di_110 : ptr16)
  Class: Eq_788
  DataType: 
  OrigDataType: 
T_811: (in fn0800_03A1(ax_118, cx_115, dx_121, bx_122, si_113, di_110, ss, es_8, out ax_118, out cx_115, out dx_121, out bx_122, out si_113, out di_110) : byte)
  Class: Eq_753
  DataType: 
  OrigDataType: 
T_812: (in fn0800_01E2 : ptr32)
  Class: Eq_109
  DataType: 
  OrigDataType: 
T_813: (in fn0800_01E2(si_103) : void)
  Class: Eq_813
  DataType: 
  OrigDataType: 
T_814: (in 0x0086 : word16)
  Class: Eq_814
  DataType: 
  OrigDataType: 
T_815: (in Mem199[ds_189:0x0086:word16] : word16)
  Class: Eq_764
  DataType: 
  OrigDataType: 
T_816: (in 0x0000 : word16)
  Class: Eq_816
  DataType: 
  OrigDataType: 
T_817: (in 0x0000 : word16)
  Class: Eq_817
  DataType: 
  OrigDataType: 
T_818: (in bp_195 + 0x0000 : word16)
  Class: Eq_818
  DataType: 
  OrigDataType: 
T_819: (in Mem214[ss:bp_195 + 0x0000:word16] : word16)
  Class: Eq_816
  DataType: 
  OrigDataType: 
T_820: (in 0x0312 : word16)
  Class: Eq_820
  DataType: 
  OrigDataType: 
T_821: (in Mem214[0x0800:0x0312:word16] : word16)
  Class: Eq_821
  DataType: 
  OrigDataType: 
T_822: (in 0x0000 : word16)
  Class: Eq_822
  DataType: 
  OrigDataType: 
T_823: (in bp_195 + 0x0000 : word16)
  Class: Eq_823
  DataType: 
  OrigDataType: 
T_824: (in Mem216[ss:bp_195 + 0x0000:word16] : word16)
  Class: Eq_111
  DataType: 
  OrigDataType: 
T_825: (in 0x0002 : word16)
  Class: Eq_825
  DataType: 
  OrigDataType: 
T_826: (in bp_195 + 0x0002 : word16)
  Class: Eq_764
  DataType: 
  OrigDataType: 
T_827: (in al_221 : byte)
  Class: Eq_827
  DataType: 
  OrigDataType: 
T_828: (in 0x0000 : word16)
  Class: Eq_828
  DataType: 
  OrigDataType: 
T_829: (in si_103 + 0x0000 : word16)
  Class: Eq_829
  DataType: 
  OrigDataType: 
T_830: (in Mem216[ds_189:si_103 + 0x0000:byte] : byte)
  Class: Eq_827
  DataType: 
  OrigDataType: 
T_831: (in 0x0001 : word16)
  Class: Eq_831
  DataType: 
  OrigDataType: 
T_832: (in si_103 + 0x0001 : word16)
  Class: Eq_111
  DataType: 
  OrigDataType: 
T_833: (in 0x0001 : word16)
  Class: Eq_833
  DataType: 
  OrigDataType: 
T_834: (in cx_187 - 0x0001 : word16)
  Class: Eq_754
  DataType: 
  OrigDataType: 
T_835: (in 0x00 : byte)
  Class: Eq_827
  DataType: 
  OrigDataType: 
T_836: (in al_221 != 0x00 : bool)
  Class: Eq_836
  DataType: 
  OrigDataType: 
T_837: (in 0x0000 : word16)
  Class: Eq_754
  DataType: 
  OrigDataType: 
T_838: (in cx_187 != 0x0000 : bool)
  Class: Eq_838
  DataType: 
  OrigDataType: 
T_839: (in al_221 != 0x00 && cx_187 != 0x0000 : bool)
  Class: Eq_839
  DataType: 
  OrigDataType: 
T_840: (in 0x00 : byte)
  Class: Eq_827
  DataType: 
  OrigDataType: 
T_841: (in al_221 == 0x00 : bool)
  Class: Eq_841
  DataType: 
  OrigDataType: 
T_842: (in 0x0000 : word16)
  Class: Eq_754
  DataType: 
  OrigDataType: 
T_843: (in cx_187 == 0x0000 : bool)
  Class: Eq_843
  DataType: 
  OrigDataType: 
T_844: (in CZ : byte)
  Class: Eq_844
  DataType: 
  OrigDataType: 
T_845: (in *dxOut : word16)
  Class: Eq_712
  DataType: 
  OrigDataType: 
T_846: (in *diOut : word16)
  Class: Eq_722
  DataType: 
  OrigDataType: 
T_847: (in *bxOut : word16)
  Class: Eq_734
  DataType: 
  OrigDataType: 
T_848: (in *cxOut : word16)
  Class: Eq_727
  DataType: 
  OrigDataType: 
T_849: (in *siOut : word16)
  Class: Eq_725
  DataType: 
  OrigDataType: 
T_850: (in ax_15 : word16)
  Class: Eq_712
  DataType: 
  OrigDataType: 
T_851: (in al_4 : byte)
  Class: Eq_851
  DataType: 
  OrigDataType: 
T_852: (in (byte) ax : byte)
  Class: Eq_851
  DataType: 
  OrigDataType: 
T_853: (in 0x0000 : word16)
  Class: Eq_712
  DataType: 
  OrigDataType: 
T_854: (in ax == 0x0000 : bool)
  Class: Eq_854
  DataType: 
  OrigDataType: 
T_855: (in ax_21 : word16)
  Class: Eq_855
  DataType: 
  OrigDataType: 
T_856: (in 0x00 : byte)
  Class: Eq_856
  DataType: 
  OrigDataType: 
T_857: (in DPB(ax_15, 0x00, 0, 8) : word16)
  Class: Eq_857
  DataType: 
  OrigDataType: 
T_858: (in *axOut : word16)
  Class: Eq_857
  DataType: 
  OrigDataType: 
T_859: (in CZ_26 : byte)
  Class: Eq_859
  DataType: 
  OrigDataType: 
T_860: (in true : bool)
  Class: Eq_859
  DataType: 
  OrigDataType: 
T_861: (in 0x0000 : word16)
  Class: Eq_727
  DataType: 
  OrigDataType: 
T_862: (in cx == 0x0000 : bool)
  Class: Eq_862
  DataType: 
  OrigDataType: 
T_863: (in 0x0000 : word16)
  Class: Eq_863
  DataType: 
  OrigDataType: 
T_864: (in di + 0x0000 : word16)
  Class: Eq_864
  DataType: 
  OrigDataType: 
T_865: (in Mem78[es:di + 0x0000:byte] : byte)
  Class: Eq_851
  DataType: 
  OrigDataType: 
T_866: (in dx_77 : word16)
  Class: Eq_866
  DataType: 
  OrigDataType: 
T_867: (in 0x0001 : word16)
  Class: Eq_867
  DataType: 
  OrigDataType: 
T_868: (in dx + 0x0001 : word16)
  Class: Eq_868
  DataType: 
  OrigDataType: 
T_869: (in *dxOut : word16)
  Class: Eq_868
  DataType: 
  OrigDataType: 
T_870: (in di_80 : word16)
  Class: Eq_870
  DataType: 
  OrigDataType: 
T_871: (in 0x0001 : word16)
  Class: Eq_871
  DataType: 
  OrigDataType: 
T_872: (in di + 0x0001 : word16)
  Class: Eq_872
  DataType: 
  OrigDataType: 
T_873: (in *diOut : word16)
  Class: Eq_872
  DataType: 
  OrigDataType: 
T_874: (in DPB(ax, al_4, 0, 8) : word16)
  Class: Eq_712
  DataType: 
  OrigDataType: 
T_875: (in 0x00 : byte)
  Class: Eq_851
  DataType: 
  OrigDataType: 
T_876: (in al_4 != 0x00 : bool)
  Class: Eq_876
  DataType: 
  OrigDataType: 
T_877: (in bx_86 : word16)
  Class: Eq_877
  DataType: 
  OrigDataType: 
T_878: (in 0x0001 : word16)
  Class: Eq_878
  DataType: 
  OrigDataType: 
T_879: (in bx + 0x0001 : word16)
  Class: Eq_879
  DataType: 
  OrigDataType: 
T_880: (in *bxOut : word16)
  Class: Eq_879
  DataType: 
  OrigDataType: 
T_881: (in al_46 : byte)
  Class: Eq_881
  DataType: 
  OrigDataType: 
T_882: (in 0x0000 : word16)
  Class: Eq_882
  DataType: 
  OrigDataType: 
T_883: (in si + 0x0000 : word16)
  Class: Eq_883
  DataType: 
  OrigDataType: 
T_884: (in Mem0[ds:si + 0x0000:byte] : byte)
  Class: Eq_881
  DataType: 
  OrigDataType: 
T_885: (in si_47 : word16)
  Class: Eq_885
  DataType: 
  OrigDataType: 
T_886: (in 0x0001 : word16)
  Class: Eq_886
  DataType: 
  OrigDataType: 
T_887: (in si + 0x0001 : word16)
  Class: Eq_885
  DataType: 
  OrigDataType: 
T_888: (in *siOut : word16)
  Class: Eq_885
  DataType: 
  OrigDataType: 
T_889: (in cx_48 : word16)
  Class: Eq_889
  DataType: 
  OrigDataType: 
T_890: (in 0x0001 : word16)
  Class: Eq_890
  DataType: 
  OrigDataType: 
T_891: (in cx - 0x0001 : word16)
  Class: Eq_889
  DataType: 
  OrigDataType: 
T_892: (in *cxOut : word16)
  Class: Eq_889
  DataType: 
  OrigDataType: 
T_893: (in ax_50 : word16)
  Class: Eq_893
  DataType: 
  OrigDataType: 
T_894: (in 0x22 : byte)
  Class: Eq_894
  DataType: 
  OrigDataType: 
T_895: (in al_46 - 0x22 : byte)
  Class: Eq_895
  DataType: 
  OrigDataType: 
T_896: (in DPB(ax_15, al_46 - 0x22, 0, 8) : word16)
  Class: Eq_896
  DataType: 
  OrigDataType: 
T_897: (in *axOut : word16)
  Class: Eq_896
  DataType: 
  OrigDataType: 
T_898: (in al_46 - 0x22 : byte)
  Class: Eq_898
  DataType: 
  OrigDataType: 
T_899: (in cond(al_46 - 0x22) : byte)
  Class: Eq_859
  DataType: 
  OrigDataType: 
T_900: (in 0x22 : byte)
  Class: Eq_881
  DataType: 
  OrigDataType: 
T_901: (in al_46 == 0x22 : bool)
  Class: Eq_901
  DataType: 
  OrigDataType: 
T_902: (in ax_57 : word16)
  Class: Eq_902
  DataType: 
  OrigDataType: 
T_903: (in DPB(ax_15, al_46, 0, 8) : word16)
  Class: Eq_903
  DataType: 
  OrigDataType: 
T_904: (in *axOut : word16)
  Class: Eq_903
  DataType: 
  OrigDataType: 
T_905: (in 0x5C : byte)
  Class: Eq_881
  DataType: 
  OrigDataType: 
T_906: (in al_46 != 0x5C : bool)
  Class: Eq_906
  DataType: 
  OrigDataType: 
T_907: (in si_64 : word16)
  Class: Eq_907
  DataType: 
  OrigDataType: 
T_908: (in *siOut : word16)
  Class: Eq_885
  DataType: 
  OrigDataType: 
T_909: (in false : bool)
  Class: Eq_859
  DataType: 
  OrigDataType: 
T_910: (in si + 0x0001 : word16)
  Class: Eq_910
  DataType: 
  OrigDataType: 
T_911: (in Mem0[ds:si + 0x0001:byte] : byte)
  Class: Eq_911
  DataType: 
  OrigDataType: 
T_912: (in 0x22 : byte)
  Class: Eq_911
  DataType: 
  OrigDataType: 
T_913: (in Mem0[ds:si + 0x0001:byte] != 0x22 : bool)
  Class: Eq_913
  DataType: 
  OrigDataType: 
T_914: (in ax_73 : word16)
  Class: Eq_914
  DataType: 
  OrigDataType: 
T_915: (in si + 0x0001 : word16)
  Class: Eq_915
  DataType: 
  OrigDataType: 
T_916: (in Mem0[ds:si + 0x0001:byte] : byte)
  Class: Eq_916
  DataType: 
  OrigDataType: 
T_917: (in DPB(ax_15, Mem0[ds:si + 0x0001:byte], 0, 8) : word16)
  Class: Eq_917
  DataType: 
  OrigDataType: 
T_918: (in *axOut : word16)
  Class: Eq_917
  DataType: 
  OrigDataType: 
T_919: (in 0x0002 : word16)
  Class: Eq_919
  DataType: 
  OrigDataType: 
T_920: (in si + 0x0002 : word16)
  Class: Eq_885
  DataType: 
  OrigDataType: 
T_921: (in cx_75 : word16)
  Class: Eq_921
  DataType: 
  OrigDataType: 
T_922: (in 0x0002 : word16)
  Class: Eq_922
  DataType: 
  OrigDataType: 
T_923: (in cx - 0x0002 : word16)
  Class: Eq_923
  DataType: 
  OrigDataType: 
T_924: (in *cxOut : word16)
  Class: Eq_923
  DataType: 
  OrigDataType: 
T_925: (in cx_4 : word16)
  Class: Eq_925
  DataType: 
  OrigDataType: 
T_926: (in 0x008A : word16)
  Class: Eq_926
  DataType: 
  OrigDataType: 
T_927: (in Mem0[ds:0x008A:word16] : word16)
  Class: Eq_925
  DataType: 
  OrigDataType: 
T_928: (in ax_7 : word16)
  Class: Eq_928
  DataType: 
  OrigDataType: 
T_929: (in fn0800_0552 : ptr32)
  Class: Eq_929
  DataType: 
  OrigDataType: 
T_930: (in signature of fn0800_0552 : void)
  Class: Eq_929
  DataType: 
  OrigDataType: 
T_931: (in ds : selector)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_932: (in wArg02 : word16)
  Class: Eq_925
  DataType: 
  OrigDataType: 
T_933: (in fn0800_0552(ds, cx_4) : word16)
  Class: Eq_928
  DataType: 
  OrigDataType: 
T_934: (in cx_66 : word16)
  Class: Eq_925
  DataType: 
  OrigDataType: 
T_935: (in di_10 : word16)
  Class: Eq_928
  DataType: 
  OrigDataType: 
T_936: (in *diOut : word16)
  Class: Eq_928
  DataType: 
  OrigDataType: 
T_937: (in 0x0000 : word16)
  Class: Eq_928
  DataType: 
  OrigDataType: 
T_938: (in ax_7 == 0x0000 : bool)
  Class: Eq_938
  DataType: 
  OrigDataType: 
T_939: (in ds_59 : selector)
  Class: Eq_939
  DataType: 
  OrigDataType: 
T_940: (in 0x008C : word16)
  Class: Eq_940
  DataType: 
  OrigDataType: 
T_941: (in Mem0[ds:0x008C:selector] : selector)
  Class: Eq_939
  DataType: 
  OrigDataType: 
T_942: (in 0x0000 : word16)
  Class: Eq_111
  DataType: 
  OrigDataType: 
T_943: (in ax_79 : word16)
  Class: Eq_943
  DataType: 
  OrigDataType: 
T_944: (in fn0800_0552 : ptr32)
  Class: Eq_929
  DataType: 
  OrigDataType: 
T_945: (in 0x008E : word16)
  Class: Eq_945
  DataType: 
  OrigDataType: 
T_946: (in Mem0[ds:0x008E:word16] : word16)
  Class: Eq_925
  DataType: 
  OrigDataType: 
T_947: (in fn0800_0552(ds, Mem0[ds:0x008E:word16]) : word16)
  Class: Eq_943
  DataType: 
  OrigDataType: 
T_948: (in 0x0088 : word16)
  Class: Eq_948
  DataType: 
  OrigDataType: 
T_949: (in Mem84[ds:0x0088:word16] : word16)
  Class: Eq_943
  DataType: 
  OrigDataType: 
T_950: (in di_103 : word16)
  Class: Eq_928
  DataType: 
  OrigDataType: 
T_951: (in *diOut : word16)
  Class: Eq_928
  DataType: 
  OrigDataType: 
T_952: (in bx_81 : word16)
  Class: Eq_943
  DataType: 
  OrigDataType: 
T_953: (in 0x0000 : word16)
  Class: Eq_943
  DataType: 
  OrigDataType: 
T_954: (in ax_79 != 0x0000 : bool)
  Class: Eq_954
  DataType: 
  OrigDataType: 
T_955: (in 0x0000 : word16)
  Class: Eq_955
  DataType: 
  OrigDataType: 
T_956: (in si + 0x0000 : word16)
  Class: Eq_956
  DataType: 
  OrigDataType: 
T_957: (in Mem0[ds_59:si + 0x0000:byte] : byte)
  Class: Eq_957
  DataType: 
  OrigDataType: 
T_958: (in 0x0000 : word16)
  Class: Eq_958
  DataType: 
  OrigDataType: 
T_959: (in di_10 + 0x0000 : word16)
  Class: Eq_959
  DataType: 
  OrigDataType: 
T_960: (in Mem68[ds:di_10 + 0x0000:byte] : byte)
  Class: Eq_957
  DataType: 
  OrigDataType: 
T_961: (in 0x0001 : word16)
  Class: Eq_961
  DataType: 
  OrigDataType: 
T_962: (in si + 0x0001 : word16)
  Class: Eq_111
  DataType: 
  OrigDataType: 
T_963: (in 0x0001 : word16)
  Class: Eq_963
  DataType: 
  OrigDataType: 
T_964: (in di_10 + 0x0001 : word16)
  Class: Eq_928
  DataType: 
  OrigDataType: 
T_965: (in 0x0001 : word16)
  Class: Eq_965
  DataType: 
  OrigDataType: 
T_966: (in cx_66 - 0x0001 : word16)
  Class: Eq_925
  DataType: 
  OrigDataType: 
T_967: (in 0x0000 : word16)
  Class: Eq_925
  DataType: 
  OrigDataType: 
T_968: (in cx_66 == 0x0000 : bool)
  Class: Eq_968
  DataType: 
  OrigDataType: 
T_969: (in fn0800_01E2 : ptr32)
  Class: Eq_109
  DataType: 
  OrigDataType: 
T_970: (in fn0800_01E2(si) : void)
  Class: Eq_970
  DataType: 
  OrigDataType: 
T_971: (in cx_104 : word16)
  Class: Eq_971
  DataType: 
  OrigDataType: 
T_972: (in 0xFFFF : word16)
  Class: Eq_971
  DataType: 
  OrigDataType: 
T_973: (in 0x0000 : word16)
  Class: Eq_973
  DataType: 
  OrigDataType: 
T_974: (in di_103 + 0x0000 : word16)
  Class: Eq_974
  DataType: 
  OrigDataType: 
T_975: (in Mem98[ds:di_103 + 0x0000:byte] : byte)
  Class: Eq_975
  DataType: 
  OrigDataType: 
T_976: (in 0x00 : byte)
  Class: Eq_975
  DataType: 
  OrigDataType: 
T_977: (in Mem98[ds:di_103 + 0x0000:byte] != 0x00 : bool)
  Class: Eq_977
  DataType: 
  OrigDataType: 
T_978: (in di_114 : word16)
  Class: Eq_928
  DataType: 
  OrigDataType: 
T_979: (in 0x0001 : word16)
  Class: Eq_979
  DataType: 
  OrigDataType: 
T_980: (in di_114 + 0x0001 : word16)
  Class: Eq_980
  DataType: 
  OrigDataType: 
T_981: (in *diOut : word16)
  Class: Eq_980
  DataType: 
  OrigDataType: 
T_982: (in 0x0001 : word16)
  Class: Eq_982
  DataType: 
  OrigDataType: 
T_983: (in cx_104 - 0x0001 : word16)
  Class: Eq_971
  DataType: 
  OrigDataType: 
T_984: (in 0x00 : byte)
  Class: Eq_984
  DataType: 
  OrigDataType: 
T_985: (in 0x0000 : word16)
  Class: Eq_985
  DataType: 
  OrigDataType: 
T_986: (in di_114 + 0x0000 : word16)
  Class: Eq_986
  DataType: 
  OrigDataType: 
T_987: (in Mem98[ds:di_114 + 0x0000:byte] : byte)
  Class: Eq_984
  DataType: 
  OrigDataType: 
T_988: (in 0x00 != Mem98[ds:di_114 + 0x0000:byte] : bool)
  Class: Eq_988
  DataType: 
  OrigDataType: 
T_989: (in 0x0000 : word16)
  Class: Eq_971
  DataType: 
  OrigDataType: 
T_990: (in cx_104 == 0x0000 : bool)
  Class: Eq_990
  DataType: 
  OrigDataType: 
T_991: (in 0x0000 : word16)
  Class: Eq_991
  DataType: 
  OrigDataType: 
T_992: (in bx_81 + 0x0000 : word16)
  Class: Eq_992
  DataType: 
  OrigDataType: 
T_993: (in Mem98[ds:bx_81 + 0x0000:word16] : word16)
  Class: Eq_928
  DataType: 
  OrigDataType: 
T_994: (in 0x0002 : word16)
  Class: Eq_994
  DataType: 
  OrigDataType: 
T_995: (in bx_81 + 0x0002 : word16)
  Class: Eq_943
  DataType: 
  OrigDataType: 
T_996: (in 0x0000 : word16)
  Class: Eq_996
  DataType: 
  OrigDataType: 
T_997: (in 0x0000 : word16)
  Class: Eq_997
  DataType: 
  OrigDataType: 
T_998: (in bx_81 + 0x0000 : word16)
  Class: Eq_998
  DataType: 
  OrigDataType: 
T_999: (in Mem109[ds:bx_81 + 0x0000:word16] : word16)
  Class: Eq_996
  DataType: 
  OrigDataType: 
T_1000: (in ax_16 : word16)
  Class: Eq_1000
  DataType: 
  OrigDataType: 
T_1001: (in ds : selector)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_1002: (in wArg02 : word16)
  Class: Eq_1000
  DataType: 
  OrigDataType: 
T_1003: (in 0x0006 : word16)
  Class: Eq_1003
  DataType: 
  OrigDataType: 
T_1004: (in wArg02 + 0x0006 : word16)
  Class: Eq_1004
  DataType: 
  OrigDataType: 
T_1005: (in Mem0[ds:wArg02 + 0x0006:word16] : word16)
  Class: Eq_1000
  DataType: 
  OrigDataType: 
T_1006: (in 0x063A : word16)
  Class: Eq_1006
  DataType: 
  OrigDataType: 
T_1007: (in Mem17[ds:0x063A:word16] : word16)
  Class: Eq_1000
  DataType: 
  OrigDataType: 
T_1008: (in ax_16 != wArg02 : bool)
  Class: Eq_1008
  DataType: 
  OrigDataType: 
T_1009: (in si_30 : word16)
  Class: Eq_1009
  DataType: 
  OrigDataType: 
T_1010: (in 0x0004 : word16)
  Class: Eq_1010
  DataType: 
  OrigDataType: 
T_1011: (in wArg02 + 0x0004 : word16)
  Class: Eq_1011
  DataType: 
  OrigDataType: 
T_1012: (in Mem17[ds:wArg02 + 0x0004:word16] : word16)
  Class: Eq_1009
  DataType: 
  OrigDataType: 
T_1013: (in 0x063A : word16)
  Class: Eq_1013
  DataType: 
  OrigDataType: 
T_1014: (in Mem17[ds:0x063A:word16] : word16)
  Class: Eq_1014
  DataType: 
  OrigDataType: 
T_1015: (in 0x0004 : word16)
  Class: Eq_1015
  DataType: 
  OrigDataType: 
T_1016: (in Mem17[ds:0x063A:word16] + 0x0004 : word16)
  Class: Eq_1016
  DataType: 
  OrigDataType: 
T_1017: (in Mem32[ds:Mem17[ds:0x063A:word16] + 0x0004:word16] : word16)
  Class: Eq_1009
  DataType: 
  OrigDataType: 
T_1018: (in 0x063A : word16)
  Class: Eq_1018
  DataType: 
  OrigDataType: 
T_1019: (in Mem32[ds:0x063A:word16] : word16)
  Class: Eq_1019
  DataType: 
  OrigDataType: 
T_1020: (in 0x0006 : word16)
  Class: Eq_1020
  DataType: 
  OrigDataType: 
T_1021: (in si_30 + 0x0006 : word16)
  Class: Eq_1021
  DataType: 
  OrigDataType: 
T_1022: (in Mem34[ds:si_30 + 0x0006:word16] : word16)
  Class: Eq_1019
  DataType: 
  OrigDataType: 
T_1023: (in 0x0000 : word16)
  Class: Eq_1023
  DataType: 
  OrigDataType: 
T_1024: (in 0x063A : word16)
  Class: Eq_1024
  DataType: 
  OrigDataType: 
T_1025: (in Mem28[ds:0x063A:word16] : word16)
  Class: Eq_1023
  DataType: 
  OrigDataType: 
T_1026: (in ax : word16)
  Class: Eq_1026
  DataType: 
  OrigDataType: 
T_1027: (in ds : selector)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_1028: (in wArg02 : word16)
  Class: Eq_1028
  DataType: 
  OrigDataType: 
T_1029: (in 0x0000 : word16)
  Class: Eq_1029
  DataType: 
  OrigDataType: 
T_1030: (in wArg02 + 0x0000 : word16)
  Class: Eq_1030
  DataType: 
  OrigDataType: 
T_1031: (in Mem0[ds:wArg02 + 0x0000:word16] : word16)
  Class: Eq_1031
  DataType: 
  OrigDataType: 
T_1032: (in wArg04 : word16)
  Class: Eq_1032
  DataType: 
  OrigDataType: 
T_1033: (in Mem0[ds:wArg02 + 0x0000:word16] - wArg04 : word16)
  Class: Eq_1033
  DataType: 
  OrigDataType: 
T_1034: (in 0x0000 : word16)
  Class: Eq_1034
  DataType: 
  OrigDataType: 
T_1035: (in wArg02 + 0x0000 : word16)
  Class: Eq_1035
  DataType: 
  OrigDataType: 
T_1036: (in Mem19[ds:wArg02 + 0x0000:word16] : word16)
  Class: Eq_1033
  DataType: 
  OrigDataType: 
T_1037: (in si_21 : word16)
  Class: Eq_1037
  DataType: 
  OrigDataType: 
T_1038: (in 0x0000 : word16)
  Class: Eq_1038
  DataType: 
  OrigDataType: 
T_1039: (in wArg02 + 0x0000 : word16)
  Class: Eq_1039
  DataType: 
  OrigDataType: 
T_1040: (in Mem19[ds:wArg02 + 0x0000:word16] : word16)
  Class: Eq_1040
  DataType: 
  OrigDataType: 
T_1041: (in Mem19[ds:wArg02 + 0x0000:word16] + wArg02 : word16)
  Class: Eq_1037
  DataType: 
  OrigDataType: 
T_1042: (in 0x0001 : word16)
  Class: Eq_1042
  DataType: 
  OrigDataType: 
T_1043: (in wArg04 + 0x0001 : word16)
  Class: Eq_1043
  DataType: 
  OrigDataType: 
T_1044: (in 0x0000 : word16)
  Class: Eq_1044
  DataType: 
  OrigDataType: 
T_1045: (in si_21 + 0x0000 : word16)
  Class: Eq_1045
  DataType: 
  OrigDataType: 
T_1046: (in Mem24[ds:si_21 + 0x0000:word16] : word16)
  Class: Eq_1043
  DataType: 
  OrigDataType: 
T_1047: (in 0x0002 : word16)
  Class: Eq_1047
  DataType: 
  OrigDataType: 
T_1048: (in si_21 + 0x0002 : word16)
  Class: Eq_1048
  DataType: 
  OrigDataType: 
T_1049: (in Mem25[ds:si_21 + 0x0002:word16] : word16)
  Class: Eq_1028
  DataType: 
  OrigDataType: 
T_1050: (in 0x0638 : word16)
  Class: Eq_1050
  DataType: 
  OrigDataType: 
T_1051: (in Mem25[ds:0x0638:word16] : word16)
  Class: Eq_1028
  DataType: 
  OrigDataType: 
T_1052: (in Mem25[ds:0x0638:word16] != wArg02 : bool)
  Class: Eq_1052
  DataType: 
  OrigDataType: 
T_1053: (in si_21 + wArg04 : word16)
  Class: Eq_1053
  DataType: 
  OrigDataType: 
T_1054: (in 0x0002 : word16)
  Class: Eq_1054
  DataType: 
  OrigDataType: 
T_1055: (in si_21 + wArg04 + 0x0002 : word16)
  Class: Eq_1055
  DataType: 
  OrigDataType: 
T_1056: (in Mem43[ds:si_21 + wArg04 + 0x0002:word16] : word16)
  Class: Eq_1037
  DataType: 
  OrigDataType: 
T_1057: (in 0x0638 : word16)
  Class: Eq_1057
  DataType: 
  OrigDataType: 
T_1058: (in Mem39[ds:0x0638:word16] : word16)
  Class: Eq_1037
  DataType: 
  OrigDataType: 
T_1059: (in 0x0004 : word16)
  Class: Eq_1059
  DataType: 
  OrigDataType: 
T_1060: (in si_21 + 0x0004 : word16)
  Class: Eq_1060
  DataType: 
  OrigDataType: 
T_1061: (in ax : word16)
  Class: Eq_1061
  DataType: 
  OrigDataType: 
T_1062: (in ax_30 : word16)
  Class: Eq_1062
  DataType: 
  OrigDataType: 
T_1063: (in ax_21 : word16)
  Class: Eq_1063
  DataType: 
  OrigDataType: 
T_1064: (in fn0800_05E9 : ptr32)
  Class: Eq_1064
  DataType: 
  OrigDataType: 
T_1065: (in signature of fn0800_05E9 : void)
  Class: Eq_1064
  DataType: 
  OrigDataType: 
T_1066: (in ds : selector)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_1067: (in wArg02 : word16)
  Class: Eq_1067
  DataType: 
  OrigDataType: 
T_1068: (in wArg04 : word16)
  Class: Eq_1068
  DataType: 
  OrigDataType: 
T_1069: (in ds : selector)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_1070: (in wArg02 : word16)
  Class: Eq_1070
  DataType: 
  OrigDataType: 
T_1071: (in 0xFFFF : word16)
  Class: Eq_1071
  DataType: 
  OrigDataType: 
T_1072: (in wArg02 & 0xFFFF : word16)
  Class: Eq_1067
  DataType: 
  OrigDataType: 
T_1073: (in 0x0000 : word16)
  Class: Eq_1068
  DataType: 
  OrigDataType: 
T_1074: (in fn0800_05E9(ds, wArg02 & 0xFFFF, 0x0000) : word16)
  Class: Eq_1063
  DataType: 
  OrigDataType: 
T_1075: (in 0xFFFF : word16)
  Class: Eq_1063
  DataType: 
  OrigDataType: 
T_1076: (in ax_21 != 0xFFFF : bool)
  Class: Eq_1076
  DataType: 
  OrigDataType: 
T_1077: (in 0x0638 : word16)
  Class: Eq_1077
  DataType: 
  OrigDataType: 
T_1078: (in Mem0[ds:0x0638:word16] : word16)
  Class: Eq_1078
  DataType: 
  OrigDataType: 
T_1079: (in 0x0002 : word16)
  Class: Eq_1079
  DataType: 
  OrigDataType: 
T_1080: (in ax_21 + 0x0002 : word16)
  Class: Eq_1080
  DataType: 
  OrigDataType: 
T_1081: (in Mem42[ds:ax_21 + 0x0002:word16] : word16)
  Class: Eq_1078
  DataType: 
  OrigDataType: 
T_1082: (in 0x0001 : word16)
  Class: Eq_1082
  DataType: 
  OrigDataType: 
T_1083: (in wArg02 + 0x0001 : word16)
  Class: Eq_1083
  DataType: 
  OrigDataType: 
T_1084: (in 0x0000 : word16)
  Class: Eq_1084
  DataType: 
  OrigDataType: 
T_1085: (in ax_21 + 0x0000 : word16)
  Class: Eq_1085
  DataType: 
  OrigDataType: 
T_1086: (in Mem45[ds:ax_21 + 0x0000:word16] : word16)
  Class: Eq_1083
  DataType: 
  OrigDataType: 
T_1087: (in 0x0638 : word16)
  Class: Eq_1087
  DataType: 
  OrigDataType: 
T_1088: (in Mem46[ds:0x0638:word16] : word16)
  Class: Eq_1063
  DataType: 
  OrigDataType: 
T_1089: (in 0x0638 : word16)
  Class: Eq_1089
  DataType: 
  OrigDataType: 
T_1090: (in Mem46[ds:0x0638:word16] : word16)
  Class: Eq_1090
  DataType: 
  OrigDataType: 
T_1091: (in 0x0004 : word16)
  Class: Eq_1091
  DataType: 
  OrigDataType: 
T_1092: (in Mem46[ds:0x0638:word16] + 0x0004 : word16)
  Class: Eq_1062
  DataType: 
  OrigDataType: 
T_1093: (in 0x0000 : word16)
  Class: Eq_1062
  DataType: 
  OrigDataType: 
T_1094: (in ax : word16)
  Class: Eq_1094
  DataType: 
  OrigDataType: 
T_1095: (in ax_30 : word16)
  Class: Eq_1095
  DataType: 
  OrigDataType: 
T_1096: (in ax_21 : word16)
  Class: Eq_1096
  DataType: 
  OrigDataType: 
T_1097: (in fn0800_05E9 : ptr32)
  Class: Eq_1064
  DataType: 
  OrigDataType: 
T_1098: (in ds : selector)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_1099: (in wArg02 : word16)
  Class: Eq_1099
  DataType: 
  OrigDataType: 
T_1100: (in 0xFFFF : word16)
  Class: Eq_1100
  DataType: 
  OrigDataType: 
T_1101: (in wArg02 & 0xFFFF : word16)
  Class: Eq_1067
  DataType: 
  OrigDataType: 
T_1102: (in 0x0000 : word16)
  Class: Eq_1068
  DataType: 
  OrigDataType: 
T_1103: (in fn0800_05E9(ds, wArg02 & 0xFFFF, 0x0000) : word16)
  Class: Eq_1096
  DataType: 
  OrigDataType: 
T_1104: (in 0xFFFF : word16)
  Class: Eq_1096
  DataType: 
  OrigDataType: 
T_1105: (in ax_21 != 0xFFFF : bool)
  Class: Eq_1105
  DataType: 
  OrigDataType: 
T_1106: (in 0x063C : word16)
  Class: Eq_1106
  DataType: 
  OrigDataType: 
T_1107: (in Mem40[ds:0x063C:word16] : word16)
  Class: Eq_1096
  DataType: 
  OrigDataType: 
T_1108: (in 0x0638 : word16)
  Class: Eq_1108
  DataType: 
  OrigDataType: 
T_1109: (in Mem41[ds:0x0638:word16] : word16)
  Class: Eq_1096
  DataType: 
  OrigDataType: 
T_1110: (in 0x0001 : word16)
  Class: Eq_1110
  DataType: 
  OrigDataType: 
T_1111: (in wArg02 + 0x0001 : word16)
  Class: Eq_1111
  DataType: 
  OrigDataType: 
T_1112: (in 0x0000 : word16)
  Class: Eq_1112
  DataType: 
  OrigDataType: 
T_1113: (in ax_21 + 0x0000 : word16)
  Class: Eq_1113
  DataType: 
  OrigDataType: 
T_1114: (in Mem44[ds:ax_21 + 0x0000:word16] : word16)
  Class: Eq_1111
  DataType: 
  OrigDataType: 
T_1115: (in 0x0004 : word16)
  Class: Eq_1115
  DataType: 
  OrigDataType: 
T_1116: (in ax_21 + 0x0004 : word16)
  Class: Eq_1095
  DataType: 
  OrigDataType: 
T_1117: (in 0x0000 : word16)
  Class: Eq_1095
  DataType: 
  OrigDataType: 
T_1118: (in ax : word16)
  Class: Eq_1118
  DataType: 
  OrigDataType: 
T_1119: (in ax_107 : word16)
  Class: Eq_1119
  DataType: 
  OrigDataType: 
T_1120: (in wArg02 : word16)
  Class: Eq_1120
  DataType: 
  OrigDataType: 
T_1121: (in 0x0000 : word16)
  Class: Eq_1120
  DataType: 
  OrigDataType: 
T_1122: (in wArg02 == 0x0000 : bool)
  Class: Eq_1122
  DataType: 
  OrigDataType: 
T_1123: (in 0x0000 : word16)
  Class: Eq_1119
  DataType: 
  OrigDataType: 
T_1124: (in 0xFFF4 : word16)
  Class: Eq_1120
  DataType: 
  OrigDataType: 
T_1125: (in wArg02 <=u 0xFFF4 : bool)
  Class: Eq_1125
  DataType: 
  OrigDataType: 
T_1126: (in ax_49 : word16)
  Class: Eq_1126
  DataType: 
  OrigDataType: 
T_1127: (in 0x000B : word16)
  Class: Eq_1127
  DataType: 
  OrigDataType: 
T_1128: (in wArg02 + 0x000B : word16)
  Class: Eq_1128
  DataType: 
  OrigDataType: 
T_1129: (in 0xFFF8 : word16)
  Class: Eq_1129
  DataType: 
  OrigDataType: 
T_1130: (in wArg02 + 0x000B & 0xFFF8 : word16)
  Class: Eq_1126
  DataType: 
  OrigDataType: 
T_1131: (in 0x063C : word16)
  Class: Eq_1131
  DataType: 
  OrigDataType: 
T_1132: (in Mem0[ds:0x063C:word16] : word16)
  Class: Eq_1132
  DataType: 
  OrigDataType: 
T_1133: (in 0x0000 : word16)
  Class: Eq_1132
  DataType: 
  OrigDataType: 
T_1134: (in Mem0[ds:0x063C:word16] != 0x0000 : bool)
  Class: Eq_1134
  DataType: 
  OrigDataType: 
T_1135: (in si_109 : word16)
  Class: Eq_1135
  DataType: 
  OrigDataType: 
T_1136: (in 0x063A : word16)
  Class: Eq_1136
  DataType: 
  OrigDataType: 
T_1137: (in Mem0[ds:0x063A:word16] : word16)
  Class: Eq_1135
  DataType: 
  OrigDataType: 
T_1138: (in 0x0000 : word16)
  Class: Eq_1135
  DataType: 
  OrigDataType: 
T_1139: (in si_109 == 0x0000 : bool)
  Class: Eq_1139
  DataType: 
  OrigDataType: 
T_1140: (in fn0800_0518 : ptr32)
  Class: Eq_1140
  DataType: 
  OrigDataType: 
T_1141: (in signature of fn0800_0518 : void)
  Class: Eq_1140
  DataType: 
  OrigDataType: 
T_1142: (in wArg02 : word16)
  Class: Eq_1126
  DataType: 
  OrigDataType: 
T_1143: (in fn0800_0518(ds, ax_49) : word16)
  Class: Eq_1119
  DataType: 
  OrigDataType: 
T_1144: (in fn0800_04DB : ptr32)
  Class: Eq_1144
  DataType: 
  OrigDataType: 
T_1145: (in signature of fn0800_04DB : void)
  Class: Eq_1144
  DataType: 
  OrigDataType: 
T_1146: (in wArg02 : word16)
  Class: Eq_1126
  DataType: 
  OrigDataType: 
T_1147: (in fn0800_04DB(ds, ax_49) : word16)
  Class: Eq_1147
  DataType: 
  OrigDataType: 
T_1148: (in fn0800_04DB : ptr32)
  Class: Eq_1144
  DataType: 
  OrigDataType: 
T_1149: (in fn0800_04DB(ds, ax_49) : word16)
  Class: Eq_1119
  DataType: 
  OrigDataType: 
T_1150: (in 0x0000 : word16)
  Class: Eq_1150
  DataType: 
  OrigDataType: 
T_1151: (in si_109 + 0x0000 : word16)
  Class: Eq_1151
  DataType: 
  OrigDataType: 
T_1152: (in Mem0[ds:si_109 + 0x0000:word16] : word16)
  Class: Eq_1152
  DataType: 
  OrigDataType: 
T_1153: (in 0x0028 : word16)
  Class: Eq_1153
  DataType: 
  OrigDataType: 
T_1154: (in ax_49 + 0x0028 : word16)
  Class: Eq_1152
  DataType: 
  OrigDataType: 
T_1155: (in Mem0[ds:si_109 + 0x0000:word16] <u ax_49 + 0x0028 : bool)
  Class: Eq_1155
  DataType: 
  OrigDataType: 
T_1156: (in 0x0000 : word16)
  Class: Eq_1156
  DataType: 
  OrigDataType: 
T_1157: (in si_109 + 0x0000 : word16)
  Class: Eq_1157
  DataType: 
  OrigDataType: 
T_1158: (in Mem0[ds:si_109 + 0x0000:word16] : word16)
  Class: Eq_1126
  DataType: 
  OrigDataType: 
T_1159: (in Mem0[ds:si_109 + 0x0000:word16] <u ax_49 : bool)
  Class: Eq_1159
  DataType: 
  OrigDataType: 
T_1160: (in fn0800_04A1 : ptr32)
  Class: Eq_1160
  DataType: 
  OrigDataType: 
T_1161: (in signature of fn0800_04A1 : void)
  Class: Eq_1160
  DataType: 
  OrigDataType: 
T_1162: (in wArg02 : word16)
  Class: Eq_1135
  DataType: 
  OrigDataType: 
T_1163: (in wArg04 : word16)
  Class: Eq_1126
  DataType: 
  OrigDataType: 
T_1164: (in fn0800_04A1(ds, si_109, ax_49) : word16)
  Class: Eq_1119
  DataType: 
  OrigDataType: 
T_1165: (in 0x0006 : word16)
  Class: Eq_1165
  DataType: 
  OrigDataType: 
T_1166: (in si_109 + 0x0006 : word16)
  Class: Eq_1166
  DataType: 
  OrigDataType: 
T_1167: (in Mem0[ds:si_109 + 0x0006:word16] : word16)
  Class: Eq_1135
  DataType: 
  OrigDataType: 
T_1168: (in 0x063A : word16)
  Class: Eq_1168
  DataType: 
  OrigDataType: 
T_1169: (in Mem0[ds:0x063A:word16] : word16)
  Class: Eq_1135
  DataType: 
  OrigDataType: 
T_1170: (in si_109 != Mem0[ds:0x063A:word16] : bool)
  Class: Eq_1170
  DataType: 
  OrigDataType: 
T_1171: (in fn0800_0473 : ptr32)
  Class: Eq_1171
  DataType: 
  OrigDataType: 
T_1172: (in signature of fn0800_0473 : void)
  Class: Eq_1171
  DataType: 
  OrigDataType: 
T_1173: (in wArg02 : word16)
  Class: Eq_1135
  DataType: 
  OrigDataType: 
T_1174: (in fn0800_0473(ds, si_109) : void)
  Class: Eq_1174
  DataType: 
  OrigDataType: 
T_1175: (in 0x0000 : word16)
  Class: Eq_1175
  DataType: 
  OrigDataType: 
T_1176: (in si_109 + 0x0000 : word16)
  Class: Eq_1176
  DataType: 
  OrigDataType: 
T_1177: (in Mem0[ds:si_109 + 0x0000:word16] : word16)
  Class: Eq_1177
  DataType: 
  OrigDataType: 
T_1178: (in 0x0001 : word16)
  Class: Eq_1178
  DataType: 
  OrigDataType: 
T_1179: (in Mem0[ds:si_109 + 0x0000:word16] + 0x0001 : word16)
  Class: Eq_1179
  DataType: 
  OrigDataType: 
T_1180: (in 0x0000 : word16)
  Class: Eq_1180
  DataType: 
  OrigDataType: 
T_1181: (in si_109 + 0x0000 : word16)
  Class: Eq_1181
  DataType: 
  OrigDataType: 
T_1182: (in Mem105[ds:si_109 + 0x0000:word16] : word16)
  Class: Eq_1179
  DataType: 
  OrigDataType: 
T_1183: (in 0x0004 : word16)
  Class: Eq_1183
  DataType: 
  OrigDataType: 
T_1184: (in si_109 + 0x0004 : word16)
  Class: Eq_1119
  DataType: 
  OrigDataType: 
T_1185: (in ax : word16)
  Class: Eq_1185
  DataType: 
  OrigDataType: 
T_1186: (in ax_31 : word16)
  Class: Eq_1186
  DataType: 
  OrigDataType: 
T_1187: (in ax_12 : word16)
  Class: Eq_1187
  DataType: 
  OrigDataType: 
T_1188: (in wArg02 : word16)
  Class: Eq_1188
  DataType: 
  OrigDataType: 
T_1189: (in 0x009E : word16)
  Class: Eq_1189
  DataType: 
  OrigDataType: 
T_1190: (in Mem0[ds:0x009E:word16] : word16)
  Class: Eq_1190
  DataType: 
  OrigDataType: 
T_1191: (in wArg02 + Mem0[ds:0x009E:word16] : word16)
  Class: Eq_1187
  DataType: 
  OrigDataType: 
T_1192: (in dx_cx_18 : ui32)
  Class: Eq_1192
  DataType: 
  OrigDataType: 
T_1193: (in wArg04 : word16)
  Class: Eq_1193
  DataType: 
  OrigDataType: 
T_1194: (in 0x0000 : word16)
  Class: Eq_1187
  DataType: 
  OrigDataType: 
T_1195: (in ax_12 <u 0x0000 : bool)
  Class: Eq_1195
  DataType: 
  OrigDataType: 
T_1196: (in wArg04 + (ax_12 <u 0x0000) : word16)
  Class: Eq_1196
  DataType: 
  OrigDataType: 
T_1197: (in 0x0100 : word16)
  Class: Eq_1197
  DataType: 
  OrigDataType: 
T_1198: (in ax_12 + 0x0100 : word16)
  Class: Eq_1198
  DataType: 
  OrigDataType: 
T_1199: (in SEQ(wArg04 + (ax_12 <u 0x0000), ax_12 + 0x0100) : ui32)
  Class: Eq_1192
  DataType: 
  OrigDataType: 
T_1200: (in cx_22 : word16)
  Class: Eq_1200
  DataType: 
  OrigDataType: 
T_1201: (in 0x00000100 : ui32)
  Class: Eq_1201
  DataType: 
  OrigDataType: 
T_1202: (in dx_cx_18 + 0x00000100 : ui32)
  Class: Eq_1202
  DataType: 
  OrigDataType: 
T_1203: (in (word16) (dx_cx_18 + 0x00000100) : word16)
  Class: Eq_1200
  DataType: 
  OrigDataType: 
T_1204: (in dx_cx_18 + 0x00000100 : ui32)
  Class: Eq_1204
  DataType: 
  OrigDataType: 
T_1205: (in SLICE(dx_cx_18 + 0x00000100, word16, 16) : word16)
  Class: Eq_1205
  DataType: 
  OrigDataType: 
T_1206: (in SEQ(SLICE(dx_cx_18 + 0x00000100, word16, 16), cx_22) : ui32)
  Class: Eq_1206
  DataType: 
  OrigDataType: 
T_1207: (in 0x00000000 : ui32)
  Class: Eq_1206
  DataType: 
  OrigDataType: 
T_1208: (in SEQ(SLICE(dx_cx_18 + 0x00000100, word16, 16), cx_22) != 0x00000000 : bool)
  Class: Eq_1208
  DataType: 
  OrigDataType: 
T_1209: (in 0x0008 : word16)
  Class: Eq_1209
  DataType: 
  OrigDataType: 
T_1210: (in 0x0094 : word16)
  Class: Eq_1210
  DataType: 
  OrigDataType: 
T_1211: (in Mem37[ds:0x0094:word16] : word16)
  Class: Eq_1209
  DataType: 
  OrigDataType: 
T_1212: (in 0xFFFF : word16)
  Class: Eq_1186
  DataType: 
  OrigDataType: 
T_1213: (in fp : ptr16)
  Class: Eq_1213
  DataType: 
  OrigDataType: 
T_1214: (in 0x0002 : word16)
  Class: Eq_1214
  DataType: 
  OrigDataType: 
T_1215: (in fp - 0x0002 : word16)
  Class: Eq_1200
  DataType: 
  OrigDataType: 
T_1216: (in cx_22 >=u fp - 0x0002 : bool)
  Class: Eq_1216
  DataType: 
  OrigDataType: 
T_1217: (in v13_42 : word16)
  Class: Eq_1186
  DataType: 
  OrigDataType: 
T_1218: (in 0x009E : word16)
  Class: Eq_1218
  DataType: 
  OrigDataType: 
T_1219: (in Mem0[ds:0x009E:word16] : word16)
  Class: Eq_1186
  DataType: 
  OrigDataType: 
T_1220: (in Mem43[ds:0x009E:word16] : word16)
  Class: Eq_1187
  DataType: 
  OrigDataType: 
T_1221: (in ax : word16)
  Class: Eq_1221
  DataType: 
  OrigDataType: 
T_1222: (in bx_19 : word16)
  Class: Eq_1222
  DataType: 
  OrigDataType: 
T_1223: (in di_20 : word16)
  Class: Eq_1223
  DataType: 
  OrigDataType: 
T_1224: (in ax_21 : word16)
  Class: Eq_1224
  DataType: 
  OrigDataType: 
T_1225: (in fn0800_1055 : ptr32)
  Class: Eq_1225
  DataType: 
  OrigDataType: 
T_1226: (in signature of fn0800_1055 : void)
  Class: Eq_1225
  DataType: 
  OrigDataType: 
T_1227: (in ds : selector)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_1228: (in wArg04 : word16)
  Class: Eq_1228
  DataType: 
  OrigDataType: 
T_1229: (in bxOut : ptr16)
  Class: Eq_1229
  DataType: 
  OrigDataType: 
T_1230: (in diOut : ptr16)
  Class: Eq_1230
  DataType: 
  OrigDataType: 
T_1231: (in wArg02 : word16)
  Class: Eq_1228
  DataType: 
  OrigDataType: 
T_1232: (in out bx_19 : ptr16)
  Class: Eq_1229
  DataType: 
  OrigDataType: 
T_1233: (in out di_20 : ptr16)
  Class: Eq_1230
  DataType: 
  OrigDataType: 
T_1234: (in fn0800_1055(ds, wArg02, out bx_19, out di_20) : word16)
  Class: Eq_1224
  DataType: 
  OrigDataType: 
T_1235: (in ax : word16)
  Class: Eq_1235
  DataType: 
  OrigDataType: 
T_1236: (in bx : word16)
  Class: Eq_1236
  DataType: 
  OrigDataType: 
T_1237: (in *bxOut : word16)
  Class: Eq_1236
  DataType: 
  OrigDataType: 
T_1238: (in bLoc57_114 : byte)
  Class: Eq_1238
  DataType: 
  OrigDataType: 
T_1239: (in 0x50 : byte)
  Class: Eq_1238
  DataType: 
  OrigDataType: 
T_1240: (in sp_157 : word16)
  Class: Eq_1240
  DataType: 
  OrigDataType: 
T_1241: (in fp : ptr16)
  Class: Eq_1241
  DataType: 
  OrigDataType: 
T_1242: (in 0x00A0 : word16)
  Class: Eq_1242
  DataType: 
  OrigDataType: 
T_1243: (in fp - 0x00A0 : word16)
  Class: Eq_1240
  DataType: 
  OrigDataType: 
T_1244: (in di_112 : word16)
  Class: Eq_1244
  DataType: 
  OrigDataType: 
T_1245: (in 0x0056 : word16)
  Class: Eq_1245
  DataType: 
  OrigDataType: 
T_1246: (in fp - 0x0056 : word16)
  Class: Eq_1244
  DataType: 
  OrigDataType: 
T_1247: (in si_110 : word16)
  Class: Eq_1247
  DataType: 
  OrigDataType: 
T_1248: (in wArg04 : word16)
  Class: Eq_1247
  DataType: 
  OrigDataType: 
T_1249: (in al_40 : byte)
  Class: Eq_1249
  DataType: 
  OrigDataType: 
T_1250: (in 0x25 : byte)
  Class: Eq_1249
  DataType: 
  OrigDataType: 
T_1251: (in al_40 == 0x25 : bool)
  Class: Eq_1251
  DataType: 
  OrigDataType: 
T_1252: (in 0x0000 : word16)
  Class: Eq_1252
  DataType: 
  OrigDataType: 
T_1253: (in si_110 + 0x0000 : word16)
  Class: Eq_1253
  DataType: 
  OrigDataType: 
T_1254: (in Mem0[ds:si_110 + 0x0000:byte] : byte)
  Class: Eq_1249
  DataType: 
  OrigDataType: 
T_1255: (in al_109 : byte)
  Class: Eq_1249
  DataType: 
  OrigDataType: 
T_1256: (in DPB(ax, al_109, 0, 8) : word16)
  Class: Eq_1235
  DataType: 
  OrigDataType: 
T_1257: (in 0x0001 : word16)
  Class: Eq_1257
  DataType: 
  OrigDataType: 
T_1258: (in si_110 + 0x0001 : word16)
  Class: Eq_1247
  DataType: 
  OrigDataType: 
T_1259: (in 0x25 : byte)
  Class: Eq_1249
  DataType: 
  OrigDataType: 
T_1260: (in al_109 == 0x25 : bool)
  Class: Eq_1260
  DataType: 
  OrigDataType: 
T_1261: (in 0x0000 : word16)
  Class: Eq_1261
  DataType: 
  OrigDataType: 
T_1262: (in di_112 + 0x0000 : word16)
  Class: Eq_1262
  DataType: 
  OrigDataType: 
T_1263: (in Mem111[ds:di_112 + 0x0000:byte] : byte)
  Class: Eq_1249
  DataType: 
  OrigDataType: 
T_1264: (in v15_113 : byte)
  Class: Eq_1238
  DataType: 
  OrigDataType: 
T_1265: (in 0x01 : byte)
  Class: Eq_1265
  DataType: 
  OrigDataType: 
T_1266: (in bLoc57_114 - 0x01 : byte)
  Class: Eq_1238
  DataType: 
  OrigDataType: 
T_1267: (in 0x0001 : word16)
  Class: Eq_1267
  DataType: 
  OrigDataType: 
T_1268: (in di_112 + 0x0001 : word16)
  Class: Eq_1244
  DataType: 
  OrigDataType: 
T_1269: (in 0x00 : byte)
  Class: Eq_1238
  DataType: 
  OrigDataType: 
T_1270: (in v15_113 > 0x00 : bool)
  Class: Eq_1270
  DataType: 
  OrigDataType: 
T_1271: (in 0x0000 : word16)
  Class: Eq_1271
  DataType: 
  OrigDataType: 
T_1272: (in si_110 + 0x0000 : word16)
  Class: Eq_1272
  DataType: 
  OrigDataType: 
T_1273: (in Mem0[ds:si_110 + 0x0000:byte] : byte)
  Class: Eq_1249
  DataType: 
  OrigDataType: 
T_1274: (in 0x0001 : word16)
  Class: Eq_1274
  DataType: 
  OrigDataType: 
T_1275: (in si_110 + 0x0001 : word16)
  Class: Eq_1247
  DataType: 
  OrigDataType: 
T_1276: (in DPB(ax, al_40, 0, 8) : word16)
  Class: Eq_1235
  DataType: 
  OrigDataType: 
T_1277: (in 0x00 : byte)
  Class: Eq_1249
  DataType: 
  OrigDataType: 
T_1278: (in al_40 == 0x00 : bool)
  Class: Eq_1278
  DataType: 
  OrigDataType: 
T_1279: (in bx_117 : word16)
  Class: Eq_1279
  DataType: 
  OrigDataType: 
T_1280: (in fn0800_1083 : ptr32)
  Class: Eq_1280
  DataType: 
  OrigDataType: 
T_1281: (in signature of fn0800_1083 : void)
  Class: Eq_1280
  DataType: 
  OrigDataType: 
T_1282: (in bp : word16)
  Class: Eq_1282
  DataType: 
  OrigDataType: 
T_1283: (in di : word16)
  Class: Eq_1244
  DataType: 
  OrigDataType: 
T_1284: (in diOut : ptr16)
  Class: Eq_1284
  DataType: 
  OrigDataType: 
T_1285: (in 0x0002 : word16)
  Class: Eq_1285
  DataType: 
  OrigDataType: 
T_1286: (in fp - 0x0002 : word16)
  Class: Eq_1282
  DataType: 
  OrigDataType: 
T_1287: (in out di_112 : ptr16)
  Class: Eq_1284
  DataType: 
  OrigDataType: 
T_1288: (in fn0800_1083(fp - 0x0002, di_112, out di_112) : word16)
  Class: Eq_1288
  DataType: 
  OrigDataType: 
T_1289: (in *bxOut : word16)
  Class: Eq_1288
  DataType: 
  OrigDataType: 
T_1290: (in 0x50 : byte)
  Class: Eq_1238
  DataType: 
  OrigDataType: 
T_1291: (in bLoc57_114 >= 0x50 : bool)
  Class: Eq_1291
  DataType: 
  OrigDataType: 
T_1292: (in 0x50 : byte)
  Class: Eq_1238
  DataType: 
  OrigDataType: 
T_1293: (in bLoc57_114 >= 0x50 : bool)
  Class: Eq_1293
  DataType: 
  OrigDataType: 
T_1294: (in ax_81 : word16)
  Class: Eq_1294
  DataType: 
  OrigDataType: 
T_1295: (in sp_78 : word16)
  Class: Eq_1295
  DataType: 
  OrigDataType: 
T_1296: (in 0x0002 : word16)
  Class: Eq_1296
  DataType: 
  OrigDataType: 
T_1297: (in sp_157 + 0x0002 : word16)
  Class: Eq_1295
  DataType: 
  OrigDataType: 
T_1298: (in 0x0000 : word16)
  Class: Eq_1298
  DataType: 
  OrigDataType: 
T_1299: (in 0x0000 : word16)
  Class: Eq_1298
  DataType: 
  OrigDataType: 
T_1300: (in 0x0000 == 0x0000 : bool)
  Class: Eq_1300
  DataType: 
  OrigDataType: 
T_1301: (in di_98 : word16)
  Class: Eq_1244
  DataType: 
  OrigDataType: 
T_1302: (in fn0800_1083 : ptr32)
  Class: Eq_1280
  DataType: 
  OrigDataType: 
T_1303: (in fp - 0x0002 : word16)
  Class: Eq_1282
  DataType: 
  OrigDataType: 
T_1304: (in out di_98 : ptr16)
  Class: Eq_1284
  DataType: 
  OrigDataType: 
T_1305: (in fn0800_1083(fp - 0x0002, di_112, out di_98) : word16)
  Class: Eq_1305
  DataType: 
  OrigDataType: 
T_1306: (in di_100 : word16)
  Class: Eq_1306
  DataType: 
  OrigDataType: 
T_1307: (in bx_101 : word16)
  Class: Eq_1307
  DataType: 
  OrigDataType: 
T_1308: (in fn0800_1083 : ptr32)
  Class: Eq_1280
  DataType: 
  OrigDataType: 
T_1309: (in fp - 0x0002 : word16)
  Class: Eq_1282
  DataType: 
  OrigDataType: 
T_1310: (in out di_100 : ptr16)
  Class: Eq_1284
  DataType: 
  OrigDataType: 
T_1311: (in fn0800_1083(fp - 0x0002, di_98, out di_100) : word16)
  Class: Eq_1311
  DataType: 
  OrigDataType: 
T_1312: (in *bxOut : word16)
  Class: Eq_1311
  DataType: 
  OrigDataType: 
T_1313: (in ax_136 : word16)
  Class: Eq_1313
  DataType: 
  OrigDataType: 
T_1314: (in 0x00 : byte)
  Class: Eq_1314
  DataType: 
  OrigDataType: 
T_1315: (in DPB(ax, 0x00, 8, 8) : word16)
  Class: Eq_1313
  DataType: 
  OrigDataType: 
T_1316: (in bl_139 : byte)
  Class: Eq_1316
  DataType: 
  OrigDataType: 
T_1317: (in (byte) ax_136 : byte)
  Class: Eq_1316
  DataType: 
  OrigDataType: 
T_1318: (in bx_141 : word16)
  Class: Eq_1318
  DataType: 
  OrigDataType: 
T_1319: (in 0x20 : byte)
  Class: Eq_1319
  DataType: 
  OrigDataType: 
T_1320: (in bl_139 - 0x20 : byte)
  Class: Eq_1320
  DataType: 
  OrigDataType: 
T_1321: (in DPB(ax_136, bl_139 - 0x20, 0, 8) : word16)
  Class: Eq_1318
  DataType: 
  OrigDataType: 
T_1322: (in 0x80 : byte)
  Class: Eq_1316
  DataType: 
  OrigDataType: 
T_1323: (in bl_139 >=u 0x80 : bool)
  Class: Eq_1323
  DataType: 
  OrigDataType: 
T_1324: (in 0x0000 : word16)
  Class: Eq_1294
  DataType: 
  OrigDataType: 
T_1325: (in 0xFFFF : word16)
  Class: Eq_1294
  DataType: 
  OrigDataType: 
T_1326: (in di_84 : word16)
  Class: Eq_1326
  DataType: 
  OrigDataType: 
T_1327: (in ss : selector)
  Class: Eq_1327
  DataType: 
  OrigDataType: 
T_1328: (in 0x0000 : word16)
  Class: Eq_1328
  DataType: 
  OrigDataType: 
T_1329: (in sp_78 + 0x0000 : word16)
  Class: Eq_1329
  DataType: 
  OrigDataType: 
T_1330: (in Mem0[ss:sp_78 + 0x0000:word16] : word16)
  Class: Eq_1330
  DataType: 
  OrigDataType: 
T_1331: (in *diOut : word16)
  Class: Eq_1330
  DataType: 
  OrigDataType: 
T_1332: (in 0x0509 : word16)
  Class: Eq_1332
  DataType: 
  OrigDataType: 
T_1333: (in bx_141 + 0x0509 : word16)
  Class: Eq_1333
  DataType: 
  OrigDataType: 
T_1334: (in Mem0[ds:bx_141 + 0x0509:byte] : byte)
  Class: Eq_1334
  DataType: 
  OrigDataType: 
T_1335: (in DPB(ax_136, Mem0[ds:bx_141 + 0x0509:byte], 0, 8) : word16)
  Class: Eq_1335
  DataType: 
  OrigDataType: 
T_1336: (in 0x0017 : word16)
  Class: Eq_1335
  DataType: 
  OrigDataType: 
T_1337: (in DPB(ax_136, Mem0[ds:bx_141 + 0x0509:byte], 0, 8) <=u 0x0017 : bool)
  Class: Eq_1337
  DataType: 
  OrigDataType: 
T_1338: (in si_150 : word16)
  Class: Eq_1247
  DataType: 
  OrigDataType: 
T_1339: (in al_152 : byte)
  Class: Eq_1339
  DataType: 
  OrigDataType: 
T_1340: (in 0x25 : byte)
  Class: Eq_1339
  DataType: 
  OrigDataType: 
T_1341: (in bx_160 : word16)
  Class: Eq_1341
  DataType: 
  OrigDataType: 
T_1342: (in fn0800_107B : ptr32)
  Class: Eq_1342
  DataType: 
  OrigDataType: 
T_1343: (in signature of fn0800_107B : void)
  Class: Eq_1342
  DataType: 
  OrigDataType: 
T_1344: (in bp : word16)
  Class: Eq_1282
  DataType: 
  OrigDataType: 
T_1345: (in di : word16)
  Class: Eq_1244
  DataType: 
  OrigDataType: 
T_1346: (in al : byte)
  Class: Eq_1339
  DataType: 
  OrigDataType: 
T_1347: (in ds : selector)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_1348: (in diOut : ptr16)
  Class: Eq_1348
  DataType: 
  OrigDataType: 
T_1349: (in fp - 0x0002 : word16)
  Class: Eq_1282
  DataType: 
  OrigDataType: 
T_1350: (in out di_112 : ptr16)
  Class: Eq_1348
  DataType: 
  OrigDataType: 
T_1351: (in fn0800_107B(fp - 0x0002, di_112, al_152, ds, out di_112) : word16)
  Class: Eq_1351
  DataType: 
  OrigDataType: 
T_1352: (in *bxOut : word16)
  Class: Eq_1351
  DataType: 
  OrigDataType: 
T_1353: (in al_163 : byte)
  Class: Eq_1339
  DataType: 
  OrigDataType: 
T_1354: (in 0x0000 : word16)
  Class: Eq_1354
  DataType: 
  OrigDataType: 
T_1355: (in si_150 + 0x0000 : word16)
  Class: Eq_1355
  DataType: 
  OrigDataType: 
T_1356: (in Mem0[ds:si_150 + 0x0000:byte] : byte)
  Class: Eq_1339
  DataType: 
  OrigDataType: 
T_1357: (in 0xFFFE : word16)
  Class: Eq_1357
  DataType: 
  OrigDataType: 
T_1358: (in sp_157 + 0xFFFE : word16)
  Class: Eq_1240
  DataType: 
  OrigDataType: 
T_1359: (in 0x0001 : word16)
  Class: Eq_1359
  DataType: 
  OrigDataType: 
T_1360: (in si_150 + 0x0001 : word16)
  Class: Eq_1247
  DataType: 
  OrigDataType: 
T_1361: (in 0x00 : byte)
  Class: Eq_1339
  DataType: 
  OrigDataType: 
T_1362: (in al_163 != 0x00 : bool)
  Class: Eq_1362
  DataType: 
  OrigDataType: 
T_1363: (in bx : word16)
  Class: Eq_1363
  DataType: 
  OrigDataType: 
T_1364: (in 0x0000 : word16)
  Class: Eq_1364
  DataType: 
  OrigDataType: 
T_1365: (in di + 0x0000 : word16)
  Class: Eq_1365
  DataType: 
  OrigDataType: 
T_1366: (in Mem3[ds:di + 0x0000:byte] : byte)
  Class: Eq_1339
  DataType: 
  OrigDataType: 
T_1367: (in v9_9 : byte)
  Class: Eq_1367
  DataType: 
  OrigDataType: 
T_1368: (in ss : selector)
  Class: Eq_1368
  DataType: 
  OrigDataType: 
T_1369: (in 0x0055 : word16)
  Class: Eq_1369
  DataType: 
  OrigDataType: 
T_1370: (in bp - 0x0055 : word16)
  Class: Eq_1370
  DataType: 
  OrigDataType: 
T_1371: (in Mem3[ss:bp - 0x0055:byte] : byte)
  Class: Eq_1371
  DataType: 
  OrigDataType: 
T_1372: (in 0x01 : byte)
  Class: Eq_1372
  DataType: 
  OrigDataType: 
T_1373: (in Mem3[ss:bp - 0x0055:byte] - 0x01 : byte)
  Class: Eq_1367
  DataType: 
  OrigDataType: 
T_1374: (in 0x0055 : word16)
  Class: Eq_1374
  DataType: 
  OrigDataType: 
T_1375: (in bp - 0x0055 : word16)
  Class: Eq_1375
  DataType: 
  OrigDataType: 
T_1376: (in Mem10[ss:bp - 0x0055:byte] : byte)
  Class: Eq_1367
  DataType: 
  OrigDataType: 
T_1377: (in di_6 : word16)
  Class: Eq_1377
  DataType: 
  OrigDataType: 
T_1378: (in 0x0001 : word16)
  Class: Eq_1378
  DataType: 
  OrigDataType: 
T_1379: (in di + 0x0001 : word16)
  Class: Eq_1379
  DataType: 
  OrigDataType: 
T_1380: (in *diOut : word16)
  Class: Eq_1379
  DataType: 
  OrigDataType: 
T_1381: (in 0x00 : byte)
  Class: Eq_1367
  DataType: 
  OrigDataType: 
T_1382: (in v9_9 <= 0x00 : bool)
  Class: Eq_1382
  DataType: 
  OrigDataType: 
T_1383: (in di_15 : word16)
  Class: Eq_1244
  DataType: 
  OrigDataType: 
T_1384: (in fn0800_1083 : ptr32)
  Class: Eq_1280
  DataType: 
  OrigDataType: 
T_1385: (in di + 0x0001 : word16)
  Class: Eq_1244
  DataType: 
  OrigDataType: 
T_1386: (in out di_15 : ptr16)
  Class: Eq_1284
  DataType: 
  OrigDataType: 
T_1387: (in fn0800_1083(bp, di + 0x0001, out di_15) : word16)
  Class: Eq_1387
  DataType: 
  OrigDataType: 
T_1388: (in di_17 : word16)
  Class: Eq_1388
  DataType: 
  OrigDataType: 
T_1389: (in fn0800_1083 : ptr32)
  Class: Eq_1280
  DataType: 
  OrigDataType: 
T_1390: (in out di_17 : ptr16)
  Class: Eq_1284
  DataType: 
  OrigDataType: 
T_1391: (in fn0800_1083(bp, di_15, out di_17) : word16)
  Class: Eq_1391
  DataType: 
  OrigDataType: 
T_1392: (in bx : word16)
  Class: Eq_1392
  DataType: 
  OrigDataType: 
T_1393: (in di_17 : word16)
  Class: Eq_1393
  DataType: 
  OrigDataType: 
T_1394: (in 0x0054 : word16)
  Class: Eq_1394
  DataType: 
  OrigDataType: 
T_1395: (in bp - 0x0054 : word16)
  Class: Eq_1395
  DataType: 
  OrigDataType: 
T_1396: (in di - (bp - 0x0054) : word16)
  Class: Eq_1393
  DataType: 
  OrigDataType: 
T_1397: (in cs : selector)
  Class: Eq_1397
  DataType: 
  OrigDataType: 
T_1398: (in ss : selector)
  Class: Eq_1398
  DataType: 
  OrigDataType: 
T_1399: (in 0x000A : word16)
  Class: Eq_1399
  DataType: 
  OrigDataType: 
T_1400: (in bp + 0x000A : word16)
  Class: Eq_1400
  DataType: 
  OrigDataType: 
T_1401: (in Mem0[ss:bp + 0x000A:word16] : word16)
  Class: Eq_1401
  DataType: 
  OrigDataType: 
T_1402: (in SEQ(cs, Mem0[ss:bp + 0x000A:word16]) : ptr32)
  Class: Eq_1402
  DataType: 
  OrigDataType: 
T_1403: (in 0x0054 : word16)
  Class: Eq_1282
  DataType: 
  OrigDataType: 
T_1404: (in bp != 0x0054 : bool)
  Class: Eq_1404
  DataType: 
  OrigDataType: 
T_1405: (in 0x50 : byte)
  Class: Eq_1405
  DataType: 
  OrigDataType: 
T_1406: (in 0x0055 : word16)
  Class: Eq_1406
  DataType: 
  OrigDataType: 
T_1407: (in bp - 0x0055 : word16)
  Class: Eq_1407
  DataType: 
  OrigDataType: 
T_1408: (in Mem37[ss:bp - 0x0055:byte] : byte)
  Class: Eq_1405
  DataType: 
  OrigDataType: 
T_1409: (in 0x0058 : word16)
  Class: Eq_1409
  DataType: 
  OrigDataType: 
T_1410: (in bp - 0x0058 : word16)
  Class: Eq_1410
  DataType: 
  OrigDataType: 
T_1411: (in Mem37[ss:bp - 0x0058:word16] : word16)
  Class: Eq_1411
  DataType: 
  OrigDataType: 
T_1412: (in Mem37[ss:bp - 0x0058:word16] + di_17 : word16)
  Class: Eq_1412
  DataType: 
  OrigDataType: 
T_1413: (in 0x0058 : word16)
  Class: Eq_1413
  DataType: 
  OrigDataType: 
T_1414: (in bp - 0x0058 : word16)
  Class: Eq_1414
  DataType: 
  OrigDataType: 
T_1415: (in Mem39[ss:bp - 0x0058:word16] : word16)
  Class: Eq_1412
  DataType: 
  OrigDataType: 
T_1416: (in di_41 : word16)
  Class: Eq_1416
  DataType: 
  OrigDataType: 
T_1417: (in 0x0054 : word16)
  Class: Eq_1417
  DataType: 
  OrigDataType: 
T_1418: (in bp - 0x0054 : word16)
  Class: Eq_1418
  DataType: 
  OrigDataType: 
T_1419: (in *diOut : word16)
  Class: Eq_1418
  DataType: 
  OrigDataType: 
T_1420: (in 0x0001 : word16)
  Class: Eq_1420
  DataType: 
  OrigDataType: 
T_1421: (in 0x0002 : word16)
  Class: Eq_1421
  DataType: 
  OrigDataType: 
T_1422: (in bp - 0x0002 : word16)
  Class: Eq_1422
  DataType: 
  OrigDataType: 
T_1423: (in Mem51[ss:bp - 0x0002:word16] : word16)
  Class: Eq_1420
  DataType: 
  OrigDataType: 
T_1424: (in es : selector)
  Class: Eq_1424
  DataType: 
  OrigDataType: 
T_1425: (in fn0800_16D5 : ptr32)
  Class: Eq_1425
  DataType: 
  OrigDataType: 
T_1426: (in signature of fn0800_16D5 : void)
  Class: Eq_1425
  DataType: 
  OrigDataType: 
T_1427: (in bx : word16)
  Class: Eq_474
  DataType: 
  OrigDataType: 
T_1428: (in di : word16)
  Class: Eq_474
  DataType: 
  OrigDataType: 
T_1429: (in ds : selector)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_1430: (in wArg06 : word16)
  Class: Eq_1430
  DataType: 
  OrigDataType: 
T_1431: (in wArg08 : word16)
  Class: Eq_1431
  DataType: 
  OrigDataType: 
T_1432: (in 0x0352 : word16)
  Class: Eq_1430
  DataType: 
  OrigDataType: 
T_1433: (in wArg02 : word16)
  Class: Eq_1431
  DataType: 
  OrigDataType: 
T_1434: (in fn0800_16D5(bx, di, ds, 0x0352, wArg02) : void)
  Class: Eq_1434
  DataType: 
  OrigDataType: 
T_1435: (in bp_204 : word16)
  Class: Eq_1435
  DataType: 
  OrigDataType: 
T_1436: (in fp : ptr16)
  Class: Eq_1436
  DataType: 
  OrigDataType: 
T_1437: (in 0x0002 : word16)
  Class: Eq_1437
  DataType: 
  OrigDataType: 
T_1438: (in fp - 0x0002 : word16)
  Class: Eq_1435
  DataType: 
  OrigDataType: 
T_1439: (in si_203 : word16)
  Class: Eq_1439
  DataType: 
  OrigDataType: 
T_1440: (in wArg08 : word16)
  Class: Eq_1439
  DataType: 
  OrigDataType: 
T_1441: (in al_57 : byte)
  Class: Eq_1441
  DataType: 
  OrigDataType: 
T_1442: (in 0x25 : byte)
  Class: Eq_1441
  DataType: 
  OrigDataType: 
T_1443: (in al_57 == 0x25 : bool)
  Class: Eq_1443
  DataType: 
  OrigDataType: 
T_1444: (in 0x0000 : word16)
  Class: Eq_1444
  DataType: 
  OrigDataType: 
T_1445: (in si_203 + 0x0000 : word16)
  Class: Eq_1445
  DataType: 
  OrigDataType: 
T_1446: (in Mem0[ds:si_203 + 0x0000:byte] : byte)
  Class: Eq_1446
  DataType: 
  OrigDataType: 
T_1447: (in (int16) Mem0[ds:si_203 + 0x0000:byte] : int16)
  Class: Eq_1447
  DataType: 
  OrigDataType: 
T_1448: (in 0x0000 : word16)
  Class: Eq_1447
  DataType: 
  OrigDataType: 
T_1449: (in (int16) Mem0[ds:si_203 + 0x0000:byte] < 0x0000 : bool)
  Class: Eq_1449
  DataType: 
  OrigDataType: 
T_1450: (in cs : selector)
  Class: Eq_1450
  DataType: 
  OrigDataType: 
T_1451: (in ss : selector)
  Class: Eq_1451
  DataType: 
  OrigDataType: 
T_1452: (in 0x0004 : word16)
  Class: Eq_1452
  DataType: 
  OrigDataType: 
T_1453: (in bp_204 + 0x0004 : word16)
  Class: Eq_1453
  DataType: 
  OrigDataType: 
T_1454: (in Mem0[ss:bp_204 + 0x0004:word16] : word16)
  Class: Eq_1454
  DataType: 
  OrigDataType: 
T_1455: (in SEQ(cs, Mem0[ss:bp_204 + 0x0004:word16]) : ptr32)
  Class: Eq_1455
  DataType: 
  OrigDataType: 
T_1456: (in ax_127 : word16)
  Class: Eq_474
  DataType: 
  OrigDataType: 
T_1457: (in (int16) al_57 : int16)
  Class: Eq_474
  DataType: 
  OrigDataType: 
T_1458: (in ax_138 : word16)
  Class: Eq_474
  DataType: 
  OrigDataType: 
T_1459: (in di_264 : word16)
  Class: Eq_474
  DataType: 
  OrigDataType: 
T_1460: (in 0x0000 : word16)
  Class: Eq_474
  DataType: 
  OrigDataType: 
T_1461: (in di_264 < 0x0000 : bool)
  Class: Eq_1461
  DataType: 
  OrigDataType: 
T_1462: (in 0x0000 : word16)
  Class: Eq_474
  DataType: 
  OrigDataType: 
T_1463: (in ax_127 < 0x0000 : bool)
  Class: Eq_1463
  DataType: 
  OrigDataType: 
T_1464: (in di_264 == ax_127 : bool)
  Class: Eq_1464
  DataType: 
  OrigDataType: 
T_1465: (in 0x056A : word16)
  Class: Eq_1465
  DataType: 
  OrigDataType: 
T_1466: (in ax_127 + 0x056A : word16)
  Class: Eq_1466
  DataType: 
  OrigDataType: 
T_1467: (in Mem0[ds:ax_127 + 0x056A:byte] : byte)
  Class: Eq_1467
  DataType: 
  OrigDataType: 
T_1468: (in 0x01 : byte)
  Class: Eq_1467
  DataType: 
  OrigDataType: 
T_1469: (in Mem0[ds:ax_127 + 0x056A:byte] != 0x01 : bool)
  Class: Eq_1469
  DataType: 
  OrigDataType: 
T_1470: (in bl_210 : byte)
  Class: Eq_1470
  DataType: 
  OrigDataType: 
T_1471: (in (byte) ax_138 : byte)
  Class: Eq_1470
  DataType: 
  OrigDataType: 
T_1472: (in DPB(ax_138, bl_210, 0, 8) : word16)
  Class: Eq_474
  DataType: 
  OrigDataType: 
T_1473: (in 0x00 : byte)
  Class: Eq_1470
  DataType: 
  OrigDataType: 
T_1474: (in bl_210 < 0x00 : bool)
  Class: Eq_1474
  DataType: 
  OrigDataType: 
T_1475: (in 0x0006 : word16)
  Class: Eq_1475
  DataType: 
  OrigDataType: 
T_1476: (in bp_204 + 0x0006 : word16)
  Class: Eq_1476
  DataType: 
  OrigDataType: 
T_1477: (in Mem0[ss:bp_204 + 0x0006:word16] : word16)
  Class: Eq_1477
  DataType: 
  OrigDataType: 
T_1478: (in SEQ(cs, Mem0[ss:bp_204 + 0x0006:word16]) : ptr32)
  Class: Eq_1478
  DataType: 
  OrigDataType: 
T_1479: (in 0x056A : word16)
  Class: Eq_1479
  DataType: 
  OrigDataType: 
T_1480: (in bx + 0x056A : word16)
  Class: Eq_1480
  DataType: 
  OrigDataType: 
T_1481: (in Mem0[ds:bx + 0x056A:byte] : byte)
  Class: Eq_1481
  DataType: 
  OrigDataType: 
T_1482: (in 0x01 : byte)
  Class: Eq_1481
  DataType: 
  OrigDataType: 
T_1483: (in Mem0[ds:bx + 0x056A:byte] != 0x01 : bool)
  Class: Eq_1483
  DataType: 
  OrigDataType: 
T_1484: (in 0x0004 : word16)
  Class: Eq_1484
  DataType: 
  OrigDataType: 
T_1485: (in bp_204 + 0x0004 : word16)
  Class: Eq_1485
  DataType: 
  OrigDataType: 
T_1486: (in Mem0[ss:bp_204 + 0x0004:word16] : word16)
  Class: Eq_1486
  DataType: 
  OrigDataType: 
T_1487: (in SEQ(cs, Mem0[ss:bp_204 + 0x0004:word16]) : ptr32)
  Class: Eq_1487
  DataType: 
  OrigDataType: 
T_1488: (in bx_265 : word16)
  Class: Eq_474
  DataType: 
  OrigDataType: 
T_1489: (in 0x0000 : word16)
  Class: Eq_474
  DataType: 
  OrigDataType: 
T_1490: (in bx_265 > 0x0000 : bool)
  Class: Eq_1490
  DataType: 
  OrigDataType: 
T_1491: (in 0x0006 : word16)
  Class: Eq_1491
  DataType: 
  OrigDataType: 
T_1492: (in bp_204 + 0x0006 : word16)
  Class: Eq_1492
  DataType: 
  OrigDataType: 
T_1493: (in Mem0[ss:bp_204 + 0x0006:word16] : word16)
  Class: Eq_1493
  DataType: 
  OrigDataType: 
T_1494: (in SEQ(cs, Mem0[ss:bp_204 + 0x0006:word16]) : ptr32)
  Class: Eq_1494
  DataType: 
  OrigDataType: 
T_1495: (in 0x0000 : word16)
  Class: Eq_1495
  DataType: 
  OrigDataType: 
T_1496: (in 0x0028 : word16)
  Class: Eq_1496
  DataType: 
  OrigDataType: 
T_1497: (in bp_204 - 0x0028 : word16)
  Class: Eq_1497
  DataType: 
  OrigDataType: 
T_1498: (in Mem125[ss:bp_204 - 0x0028:word16] : word16)
  Class: Eq_1495
  DataType: 
  OrigDataType: 
T_1499: (in 0x0000 : word16)
  Class: Eq_1499
  DataType: 
  OrigDataType: 
T_1500: (in si_203 + 0x0000 : word16)
  Class: Eq_1500
  DataType: 
  OrigDataType: 
T_1501: (in Mem0[ds:si_203 + 0x0000:byte] : byte)
  Class: Eq_1441
  DataType: 
  OrigDataType: 
T_1502: (in 0x0001 : word16)
  Class: Eq_1502
  DataType: 
  OrigDataType: 
T_1503: (in si_203 + 0x0001 : word16)
  Class: Eq_1439
  DataType: 
  OrigDataType: 
T_1504: (in 0x00 : byte)
  Class: Eq_1441
  DataType: 
  OrigDataType: 
T_1505: (in al_57 == 0x00 : bool)
  Class: Eq_1505
  DataType: 
  OrigDataType: 
T_1506: (in 0x0006 : word16)
  Class: Eq_1506
  DataType: 
  OrigDataType: 
T_1507: (in bp_204 + 0x0006 : word16)
  Class: Eq_1507
  DataType: 
  OrigDataType: 
T_1508: (in Mem0[ss:bp_204 + 0x0006:word16] : word16)
  Class: Eq_1508
  DataType: 
  OrigDataType: 
T_1509: (in SEQ(cs, Mem0[ss:bp_204 + 0x0006:word16]) : ptr32)
  Class: Eq_1509
  DataType: 
  OrigDataType: 
T_1510: (in 0x00 : byte)
  Class: Eq_1510
  DataType: 
  OrigDataType: 
T_1511: (in DPB(bx, 0x00, 8, 8) : word16)
  Class: Eq_1511
  DataType: 
  OrigDataType: 
T_1512: (in 0x0015 : word16)
  Class: Eq_1511
  DataType: 
  OrigDataType: 
T_1513: (in DPB(bx, 0x00, 8, 8) <=u 0x0015 : bool)
  Class: Eq_1513
  DataType: 
  OrigDataType: 
T_1514:
  Class: Eq_1514
  DataType: 
  OrigDataType: (struct 0001 (0 T_352 t0000))
*/
