// subject.h
// Generated on 5/4/2015 12:04:48 AM by decompiling from_dcc/matrixmu/ia32_mz_from_dcc/subject.exe
// using Decompiler version 0.4.2.0.

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
T_4: (in 0x0860 : word16)
  Class: Eq_4
  DataType: word16
  OrigDataType: word16
T_5: (in dx : word16)
  Class: Eq_4
  DataType: (ptr (segment (8A T_47 t008A) (8C T_35 t008C) (8E T_143 t008E) (90 T_33 t0090) (92 T_30 t0092) (96 T_38 t0096) (AC T_37 t00AC)))
  OrigDataType: (ptr (segment (8A T_47 t008A) (8C T_35 t008C) (8E T_143 t008E) (90 T_33 t0090) (92 T_30 t0092) (96 T_38 t0096) (AC T_37 t00AC)))
T_6: (in 0x0860 : word16)
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
  DataType: (ptr (segment (2 T_22 t0002) (2C T_25 t002C) (84 T_288 t0084) (86 T_281 t0086) (88 T_274 t0088) (98 T_265 t0098) (9A T_267 t009A) (1A0 T_240 t01A0) (1A4 T_269 t01A4)))
  OrigDataType: (ptr (segment (2 T_22 t0002) (2C T_25 t002C) (84 T_288 t0084) (86 T_281 t0086) (88 T_274 t0088) (98 T_265 t0098) (9A T_267 t009A) (1A0 T_240 t01A0) (1A4 T_269 t01A4)))
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
T_27: (in 0x0860 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_28: (in 0x0860 : selector)
  Class: Eq_4
  DataType: (ptr (segment (8A T_47 t008A) (8C T_35 t008C) (8E T_143 t008E) (90 T_2 t0090) (92 T_30 t0092) (96 T_38 t0096) (A4 T_200 t00A4) (A8 T_202 t00A8) (AC T_37 t00AC) (19A T_164 t019A) (19C T_2 t019C)))
  OrigDataType: (ptr (segment (8A T_47 t008A) (8C T_35 t008C) (8E T_143 t008E) (90 T_2 t0090) (92 T_30 t0092) (96 T_38 t0096) (A4 T_200 t00A4) (A8 T_202 t00A8) (AC T_37 t00AC) (19A T_164 t019A) (19C T_2 t019C)))
T_29: (in 0x0092 : word16)
  Class: Eq_29
  DataType: (memptr T_28 (struct (0 T_30 t0000)))
  OrigDataType: (memptr T_28 (struct (0 T_30 t0000)))
T_30: (in Mem0[0x0860:0x0092:word16] : word16)
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
T_33: (in Mem0[0x0860:0x0090:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_34: (in 0x008C : word16)
  Class: Eq_34
  DataType: (memptr T_28 (struct (0 T_35 t0000)))
  OrigDataType: (memptr T_28 (struct (0 T_35 t0000)))
T_35: (in Mem0[0x0860:0x008C:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_36: (in 0x00AC : word16)
  Class: Eq_36
  DataType: (memptr T_28 (struct (0 T_37 t0000)))
  OrigDataType: (memptr T_28 (struct (0 T_37 t0000)))
T_37: (in Mem0[0x0860:0x00AC:word16] : word16)
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
T_40: (in Mem0[0x0860:0x0096:word16] : word16)
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
T_47: (in Mem0[0x0860:0x008A:segptr32] : segptr32)
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
T_77: (in Mem0[0x0860:0x0096:word16] : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_78: (in 0x0001 : word16)
  Class: Eq_78
  DataType: word16
  OrigDataType: word16
T_79: (in Mem0[0x0860:0x0096:word16] + 0x0001 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_80: (in v20 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_81: (in Mem0[0x0860:0x0096:word16] : word16)
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
T_87: (in Mem0[0x0860:0x0096:word16] : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_88: (in 0x0001 : word16)
  Class: Eq_88
  DataType: word16
  OrigDataType: word16
T_89: (in Mem0[0x0860:0x0096:word16] + 0x0001 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_90: (in v21 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_91: (in Mem0[0x0860:0x0096:word16] : word16)
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
T_134: (in Mem0[0x0860:0x008A:word16] : word16)
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
T_143: (in Mem0[0x0860:0x008E:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_144: (in bp - 0x0860 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_145: (in 0x019C : word16)
  Class: Eq_145
  DataType: (memptr T_28 (struct (0 T_146 t0000)))
  OrigDataType: (memptr T_28 (struct (0 T_146 t0000)))
T_146: (in Mem0[0x0860:0x019C:word16] : word16)
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
T_153: (in 0x01EC : word16)
  Class: Eq_153
  DataType: word16
  OrigDataType: word16
T_154: (in di + 0x01EC : word16)
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
T_161: (in 0x019C : word16)
  Class: Eq_161
  DataType: (memptr T_28 (struct (0 T_162 t0000)))
  OrigDataType: (memptr T_28 (struct (0 T_162 t0000)))
T_162: (in Mem0[0x0860:0x019C:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_163: (in 0x019A : word16)
  Class: Eq_163
  DataType: (memptr T_28 (struct (0 T_164 t0000)))
  OrigDataType: (memptr T_28 (struct (0 T_164 t0000)))
T_164: (in Mem0[0x0860:0x019A:word16] : word16)
  Class: Eq_164
  DataType: word16
  OrigDataType: word16
T_165: (in di + Mem0[0x0860:0x019A:word16] : word16)
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
T_178: (in 0x019C : word16)
  Class: Eq_178
  DataType: (memptr T_28 (struct (0 T_179 t0000)))
  OrigDataType: (memptr T_28 (struct (0 T_179 t0000)))
T_179: (in Mem0[0x0860:0x019C:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_180: (in 0x0000 : word16)
  Class: Eq_180
  DataType: word16
  OrigDataType: word16
T_181: (in Mem0[0x0860:0x019C:word16] - 0x0000 : word16)
  Class: Eq_181
  DataType: word16
  OrigDataType: word16
T_182: (in cond(Mem0[0x0860:0x019C:word16] - 0x0000) : byte)
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
T_191: (in 0x019A : word16)
  Class: Eq_191
  DataType: (memptr T_28 (struct (0 T_192 t0000)))
  OrigDataType: (memptr T_28 (struct (0 T_192 t0000)))
T_192: (in Mem0[0x0860:0x019A:word16] : word16)
  Class: Eq_164
  DataType: word16
  OrigDataType: word16
T_193: (in 0x0000 : word16)
  Class: Eq_193
  DataType: word16
  OrigDataType: word16
T_194: (in Mem0[0x0860:0x019A:word16] - 0x0000 : word16)
  Class: Eq_194
  DataType: word16
  OrigDataType: word16
T_195: (in cond(Mem0[0x0860:0x019A:word16] - 0x0000) : byte)
  Class: Eq_70
  DataType: byte
  OrigDataType: byte
T_196: (in Test(NE,Z) : bool)
  Class: Eq_196
  DataType: bool
  OrigDataType: bool
T_197: (in 0x0860 : word16)
  Class: Eq_197
  DataType: word16
  OrigDataType: word16
T_198: (in bx + 0x0860 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_199: (in 0x00A4 : word16)
  Class: Eq_199
  DataType: (memptr T_28 (struct (0 T_200 t0000)))
  OrigDataType: (memptr T_28 (struct (0 T_200 t0000)))
T_200: (in Mem0[0x0860:0x00A4:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_201: (in 0x00A8 : word16)
  Class: Eq_201
  DataType: (memptr T_28 (struct (0 T_202 t0000)))
  OrigDataType: (memptr T_28 (struct (0 T_202 t0000)))
T_202: (in Mem0[0x0860:0x00A8:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_203: (in 0x0090 : word16)
  Class: Eq_203
  DataType: (memptr T_28 (struct (0 T_204 t0000)))
  OrigDataType: (memptr T_28 (struct (0 T_204 t0000)))
T_204: (in Mem0[0x0860:0x0090:word16] : word16)
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
T_221: (in 0x0860 : word16)
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
T_227: (in 0x01A6 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_228: (in SEQ(es, di) : ptr32)
  Class: Eq_47
  DataType: ptr32
  OrigDataType: ptr32
T_229: (in 0x01EC : word16)
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
T_239: (in 0x01A0 : word16)
  Class: Eq_239
  DataType: (memptr T_20 (struct (0 T_240 t0000)))
  OrigDataType: (memptr T_20 (struct (0 T_240 t0000)))
T_240: (in Mem0[ds:0x01A0:word16] : word16)
  Class: Eq_240
  DataType: word16
  OrigDataType: word16
T_241: (in SEQ(cs, Mem0[ds:0x01A0:word16]) : ptr32)
  Class: Eq_241
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_242: (in fn0800_02D5 : ptr32)
  Class: Eq_242
  DataType: (ptr (fn T_248 (T_20, T_209, T_247)))
  OrigDataType: (ptr (fn T_248 (T_20, T_209, T_247)))
T_243: (in signature of fn0800_02D5 : void)
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
  DataType: (ptr (ptr (segment (2 T_22 t0002) (2C T_25 t002C) (1A0 T_240 t01A0))))
  OrigDataType: (ptr (ptr (segment (2 T_22 t0002) (2C T_25 t002C) (1A0 T_240 t01A0))))
T_248: (in fn0800_02D5(ds, wLoc02, out ds) : word16)
  Class: Eq_111
  DataType: word16
  OrigDataType: word16
T_249: (in fn0800_03C0 : ptr32)
  Class: Eq_249
  DataType: (ptr (fn T_255 (T_112, T_20, T_254)))
  OrigDataType: (ptr (fn T_255 (T_112, T_20, T_254)))
T_250: (in signature of fn0800_03C0 : void)
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
T_255: (in fn0800_03C0(si, ds, out di) : word16)
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
T_268: (in 0x01A4 : word16)
  Class: Eq_268
  DataType: (memptr T_20 (struct (0 T_269 t0000)))
  OrigDataType: (memptr T_20 (struct (0 T_269 t0000)))
T_269: (in Mem0[ds:0x01A4:word16] : word16)
  Class: Eq_269
  DataType: word16
  OrigDataType: word16
T_270: (in SEQ(cs, Mem0[ds:0x01A4:word16]) : ptr32)
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
T_277: (in Mem0[0x0860:sp + 0x0000:word16] : word16)
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
T_284: (in Mem0[0x0860:sp + 0x0000:word16] : word16)
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
T_291: (in Mem0[0x0860:sp + 0x0000:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_292: (in fn0800_0283 : ptr32)
  Class: Eq_292
  DataType: (ptr (fn T_297 (T_112, T_51, T_20)))
  OrigDataType: (ptr (fn T_297 (T_112, T_51, T_20)))
T_293: (in signature of fn0800_0283 : void)
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
T_297: (in fn0800_0283(si, di, ds) : word16)
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
T_303: (in Mem0[0x0860:sp + 0x0000:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_304: (in fn0800_02A0 : ptr32)
  Class: Eq_304
  DataType: (ptr (fn T_309 (T_20, T_308)))
  OrigDataType: (ptr (fn T_309 (T_20, T_308)))
T_305: (in signature of fn0800_02A0 : void)
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
T_309: (in fn0800_02A0(ds, wArg00) : void)
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
  DataType: (ptr (segment (0 (arr T_1229) a0000) (1A2 T_338 t01A2)))
  OrigDataType: (ptr (segment (0 (arr T_1229) a0000) (1A2 T_338 t01A2)))
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
T_337: (in 0x01A2 : word16)
  Class: Eq_337
  DataType: (memptr T_328 (struct (0 T_338 t0000)))
  OrigDataType: (memptr T_328 (struct (0 T_338 t0000)))
T_338: (in Mem0[ds_3:0x01A2:word16] : word16)
  Class: Eq_338
  DataType: word16
  OrigDataType: word16
T_339: (in SEQ(cs, Mem0[ds_3:0x01A2:word16]) : ptr32)
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
T_474: (in bp_29 : word16)
  Class: Eq_474
  DataType: word16
  OrigDataType: word16
T_475: (in si_30 : word16)
  Class: Eq_475
  DataType: word16
  OrigDataType: word16
T_476: (in di_31 : word16)
  Class: Eq_476
  DataType: word16
  OrigDataType: word16
T_477: (in fn0800_0278 : ptr32)
  Class: Eq_477
  DataType: (ptr (fn T_496 (T_489, T_490, T_456, T_491, T_492, T_493, T_494, T_495)))
  OrigDataType: (ptr (fn T_496 (T_489, T_490, T_456, T_491, T_492, T_493, T_494, T_495)))
T_478: (in signature of fn0800_0278 : void)
  Class: Eq_477
  DataType: 
  OrigDataType: 
T_479: (in bp : word16)
  Class: Eq_479
  DataType: word16
  OrigDataType: word16
T_480: (in si : word16)
  Class: Eq_480
  DataType: int16
  OrigDataType: int16
T_481: (in ds : selector)
  Class: Eq_2
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_482: (in wArg00 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_483: (in wArg02 : word16)
  Class: Eq_111
  DataType: word16
  OrigDataType: word16
T_484: (in bpOut : ptr16)
  Class: Eq_484
  DataType: ptr16
  OrigDataType: ptr16
T_485: (in siOut : ptr16)
  Class: Eq_485
  DataType: ptr16
  OrigDataType: ptr16
T_486: (in diOut : ptr16)
  Class: Eq_486
  DataType: ptr16
  OrigDataType: ptr16
T_487: (in fp : ptr16)
  Class: Eq_487
  DataType: ptr16
  OrigDataType: ptr16
T_488: (in 0x0004 : word16)
  Class: Eq_488
  DataType: word16
  OrigDataType: word16
T_489: (in fp - 0x0004 : word16)
  Class: Eq_479
  DataType: word16
  OrigDataType: word16
T_490: (in 0x0000 : word16)
  Class: Eq_480
  DataType: word16
  OrigDataType: word16
T_491: (in wArg00 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_492: (in wArg02 : word16)
  Class: Eq_111
  DataType: word16
  OrigDataType: word16
T_493: (in out bp_29 : ptr16)
  Class: Eq_484
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_494: (in out si_30 : ptr16)
  Class: Eq_485
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_495: (in out di_31 : ptr16)
  Class: Eq_486
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_496: (in fn0800_0278(fp - 0x0004, 0x0000, ds_3, wArg00, wArg02, out bp_29, out si_30, out di_31) : word16)
  Class: Eq_496
  DataType: word16
  OrigDataType: word16
T_497: (in ax : word16)
  Class: Eq_497
  DataType: word16
  OrigDataType: word16
T_498: (in bp_17 : word16)
  Class: Eq_498
  DataType: word16
  OrigDataType: word16
T_499: (in si_18 : word16)
  Class: Eq_499
  DataType: word16
  OrigDataType: word16
T_500: (in di_19 : word16)
  Class: Eq_500
  DataType: word16
  OrigDataType: word16
T_501: (in fn0800_0278 : ptr32)
  Class: Eq_477
  DataType: (ptr (fn T_512 (T_504, T_505, T_506, T_507, T_508, T_509, T_510, T_511)))
  OrigDataType: (ptr (fn T_512 (T_504, T_505, T_506, T_507, T_508, T_509, T_510, T_511)))
T_502: (in fp : ptr16)
  Class: Eq_502
  DataType: ptr16
  OrigDataType: ptr16
T_503: (in 0x0002 : word16)
  Class: Eq_503
  DataType: word16
  OrigDataType: word16
T_504: (in fp - 0x0002 : word16)
  Class: Eq_479
  DataType: word16
  OrigDataType: word16
T_505: (in 0x0000 : word16)
  Class: Eq_480
  DataType: word16
  OrigDataType: word16
T_506: (in ds : selector)
  Class: Eq_2
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_507: (in di : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_508: (in si : word16)
  Class: Eq_111
  DataType: word16
  OrigDataType: word16
T_509: (in out bp_17 : ptr16)
  Class: Eq_484
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_510: (in out si_18 : ptr16)
  Class: Eq_485
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_511: (in out di_19 : ptr16)
  Class: Eq_486
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_512: (in fn0800_0278(fp - 0x0002, 0x0000, ds, di, si, out bp_17, out si_18, out di_19) : word16)
  Class: Eq_512
  DataType: word16
  OrigDataType: word16
T_513: (in ax : word16)
  Class: Eq_513
  DataType: word16
  OrigDataType: word16
T_514: (in 0x0005 : word16)
  Class: Eq_480
  DataType: int16
  OrigDataType: int16
T_515: (in si < 0x0005 : bool)
  Class: Eq_515
  DataType: bool
  OrigDataType: bool
T_516: (in di_37 : word16)
  Class: Eq_516
  DataType: word16
  OrigDataType: word16
T_517: (in 0x0000 : word16)
  Class: Eq_516
  DataType: word16
  OrigDataType: word16
T_518: (in di_23 : word16)
  Class: Eq_518
  DataType: word16
  OrigDataType: word16
T_519: (in wArg00 : word16)
  Class: Eq_519
  DataType: word16
  OrigDataType: word16
T_520: (in *diOut : word16)
  Class: Eq_519
  DataType: 
  OrigDataType: 
T_521: (in si_27 : word16)
  Class: Eq_521
  DataType: 
  OrigDataType: 
T_522: (in wArg02 : word16)
  Class: Eq_522
  DataType: 
  OrigDataType: 
T_523: (in *siOut : word16)
  Class: Eq_522
  DataType: 
  OrigDataType: 
T_524: (in bp_32 : word16)
  Class: Eq_524
  DataType: 
  OrigDataType: 
T_525: (in ss : selector)
  Class: Eq_525
  DataType: 
  OrigDataType: 
T_526: (in 0x0000 : word16)
  Class: Eq_526
  DataType: 
  OrigDataType: 
T_527: (in bp + 0x0000 : word16)
  Class: Eq_527
  DataType: 
  OrigDataType: 
T_528: (in Mem0[ss:bp + 0x0000:word16] : word16)
  Class: Eq_528
  DataType: 
  OrigDataType: 
T_529: (in *bpOut : word16)
  Class: Eq_528
  DataType: 
  OrigDataType: 
T_530: (in 0x0004 : word16)
  Class: Eq_516
  DataType: 
  OrigDataType: 
T_531: (in di_37 < 0x0004 : bool)
  Class: Eq_531
  DataType: 
  OrigDataType: 
T_532: (in 0x0000 : word16)
  Class: Eq_532
  DataType: 
  OrigDataType: 
T_533: (in 0x0002 : word16)
  Class: Eq_533
  DataType: 
  OrigDataType: 
T_534: (in bp - 0x0002 : word16)
  Class: Eq_534
  DataType: 
  OrigDataType: 
T_535: (in Mem52[ss:bp - 0x0002:word16] : word16)
  Class: Eq_532
  DataType: 
  OrigDataType: 
T_536: (in 0x0001 : word16)
  Class: Eq_536
  DataType: 
  OrigDataType: 
T_537: (in si + 0x0001 : word16)
  Class: Eq_480
  DataType: 
  OrigDataType: 
T_538: (in 0x0002 : word16)
  Class: Eq_538
  DataType: 
  OrigDataType: 
T_539: (in bp - 0x0002 : word16)
  Class: Eq_539
  DataType: 
  OrigDataType: 
T_540: (in Mem52[ss:bp - 0x0002:word16] : word16)
  Class: Eq_540
  DataType: 
  OrigDataType: 
T_541: (in 0x0004 : word16)
  Class: Eq_540
  DataType: 
  OrigDataType: 
T_542: (in Mem52[ss:bp - 0x0002:word16] < 0x0004 : bool)
  Class: Eq_542
  DataType: 
  OrigDataType: 
T_543: (in ax_102 : word16)
  Class: Eq_513
  DataType: 
  OrigDataType: 
T_544: (in 0x0002 : word16)
  Class: Eq_544
  DataType: 
  OrigDataType: 
T_545: (in bp - 0x0002 : word16)
  Class: Eq_545
  DataType: 
  OrigDataType: 
T_546: (in Mem52[ss:bp - 0x0002:word16] : word16)
  Class: Eq_546
  DataType: 
  OrigDataType: 
T_547: (in 0x000A : word16)
  Class: Eq_547
  DataType: 
  OrigDataType: 
T_548: (in Mem52[ss:bp - 0x0002:word16] *u 0x000A : uint32)
  Class: Eq_548
  DataType: 
  OrigDataType: 
T_549: (in (word16) (Mem52[ss:bp - 0x0002:word16] *u 0x000A) : word16)
  Class: Eq_549
  DataType: 
  OrigDataType: 
T_550: (in 0x0006 : word16)
  Class: Eq_550
  DataType: 
  OrigDataType: 
T_551: (in bp + 0x0006 : word16)
  Class: Eq_551
  DataType: 
  OrigDataType: 
T_552: (in Mem52[ss:bp + 0x0006:word16] : word16)
  Class: Eq_552
  DataType: 
  OrigDataType: 
T_553: (in (word16) (Mem52[ss:bp - 0x0002:word16] *u 0x000A) + Mem52[ss:bp + 0x0006:word16] : word16)
  Class: Eq_553
  DataType: 
  OrigDataType: 
T_554: (in SEQ(ds, (word16) (Mem52[ss:bp - 0x0002:word16] *u 0x000A) + Mem52[ss:bp + 0x0006:word16]) : ptr32)
  Class: Eq_554
  DataType: 
  OrigDataType: 
T_555: (in 0x0002 : word16)
  Class: Eq_555
  DataType: 
  OrigDataType: 
T_556: (in di_37 * 0x0002 : word16)
  Class: Eq_556
  DataType: 
  OrigDataType: 
T_557: (in SEQ(ds, (word16) (Mem52[ss:bp - 0x0002:word16] *u 0x000A) + Mem52[ss:bp + 0x0006:word16])[di_37 * 0x0002] : word16)
  Class: Eq_557
  DataType: 
  OrigDataType: 
T_558: (in 0x0001 : word16)
  Class: Eq_558
  DataType: 
  OrigDataType: 
T_559: (in si << 0x0001 : word16)
  Class: Eq_559
  DataType: 
  OrigDataType: 
T_560: (in 0x0002 : word16)
  Class: Eq_560
  DataType: 
  OrigDataType: 
T_561: (in si << 0x0001 << 0x0002 : word16)
  Class: Eq_561
  DataType: 
  OrigDataType: 
T_562: (in 0x0004 : word16)
  Class: Eq_562
  DataType: 
  OrigDataType: 
T_563: (in bp + 0x0004 : word16)
  Class: Eq_563
  DataType: 
  OrigDataType: 
T_564: (in Mem52[ss:bp + 0x0004:word16] : word16)
  Class: Eq_564
  DataType: 
  OrigDataType: 
T_565: (in (si << 0x0001 << 0x0002) + Mem52[ss:bp + 0x0004:word16] : word16)
  Class: Eq_565
  DataType: 
  OrigDataType: 
T_566: (in SEQ(ds, (si << 0x0001 << 0x0002) + Mem52[ss:bp + 0x0004:word16]) : ptr32)
  Class: Eq_566
  DataType: 
  OrigDataType: 
T_567: (in 0x0002 : word16)
  Class: Eq_567
  DataType: 
  OrigDataType: 
T_568: (in bp - 0x0002 : word16)
  Class: Eq_568
  DataType: 
  OrigDataType: 
T_569: (in Mem52[ss:bp - 0x0002:word16] : word16)
  Class: Eq_569
  DataType: 
  OrigDataType: 
T_570: (in 0x0002 : word16)
  Class: Eq_570
  DataType: 
  OrigDataType: 
T_571: (in Mem52[ss:bp - 0x0002:word16] * 0x0002 : word16)
  Class: Eq_571
  DataType: 
  OrigDataType: 
T_572: (in SEQ(ds, (si << 0x0001 << 0x0002) + Mem52[ss:bp + 0x0004:word16])[Mem52[ss:bp - 0x0002:word16] * 0x0002] : word16)
  Class: Eq_572
  DataType: 
  OrigDataType: 
T_573: (in SEQ(ds, (word16) (Mem52[ss:bp - 0x0002:word16] *u 0x000A) + Mem52[ss:bp + 0x0006:word16])[di_37 * 0x0002] *u SEQ(ds, ((si << 0x0001) << 0x0002) + Mem52[ss:bp + 0x0004:word16])[Mem52[ss:bp - 0x0002:word16] * 0x0002] : uint32)
  Class: Eq_573
  DataType: 
  OrigDataType: 
T_574: (in (word16) (SEQ(ds, (word16) (Mem52[ss:bp - 0x0002:word16] *u 0x000A) + Mem52[ss:bp + 0x0006:word16])[di_37 * 0x0002] *u SEQ(ds, ((si << 0x0001) << 0x0002) + Mem52[ss:bp + 0x0004:word16])[Mem52[ss:bp - 0x0002:word16] * 0x0002]) : word16)
  Class: Eq_574
  DataType: 
  OrigDataType: 
T_575: (in 0x000A : word16)
  Class: Eq_575
  DataType: 
  OrigDataType: 
T_576: (in si *u 0x000A : uint32)
  Class: Eq_576
  DataType: 
  OrigDataType: 
T_577: (in (word16) (si *u 0x000A) : word16)
  Class: Eq_577
  DataType: 
  OrigDataType: 
T_578: (in 0x0008 : word16)
  Class: Eq_578
  DataType: 
  OrigDataType: 
T_579: (in bp + 0x0008 : word16)
  Class: Eq_579
  DataType: 
  OrigDataType: 
T_580: (in Mem52[ss:bp + 0x0008:word16] : word16)
  Class: Eq_580
  DataType: 
  OrigDataType: 
T_581: (in (word16) (si *u 0x000A) + Mem52[ss:bp + 0x0008:word16] : word16)
  Class: Eq_581
  DataType: 
  OrigDataType: 
T_582: (in SEQ(ds, (word16) (si *u 0x000A) + Mem52[ss:bp + 0x0008:word16]) : ptr32)
  Class: Eq_582
  DataType: 
  OrigDataType: 
T_583: (in 0x0002 : word16)
  Class: Eq_583
  DataType: 
  OrigDataType: 
T_584: (in di_37 * 0x0002 : word16)
  Class: Eq_584
  DataType: 
  OrigDataType: 
T_585: (in SEQ(ds, (word16) (si *u 0x000A) + Mem52[ss:bp + 0x0008:word16])[di_37 * 0x0002] : word16)
  Class: Eq_585
  DataType: 
  OrigDataType: 
T_586: (in (word16) (SEQ(ds, (word16) (Mem52[ss:bp - 0x0002:word16] *u 0x000A) + Mem52[ss:bp + 0x0006:word16])[di_37 * 0x0002] *u SEQ(ds, ((si << 0x0001) << 0x0002) + Mem52[ss:bp + 0x0004:word16])[Mem52[ss:bp - 0x0002:word16] * 0x0002]) + SEQ(ds, (word16) (si *u 0x000A) + Mem52[ss:bp + 0x0008:word16])[di_37 * 0x0002] : word16)
  Class: Eq_513
  DataType: 
  OrigDataType: 
T_587: (in 0x000A : word16)
  Class: Eq_587
  DataType: 
  OrigDataType: 
T_588: (in si *u 0x000A : uint32)
  Class: Eq_588
  DataType: 
  OrigDataType: 
T_589: (in (word16) (si *u 0x000A) : word16)
  Class: Eq_589
  DataType: 
  OrigDataType: 
T_590: (in 0x0008 : word16)
  Class: Eq_590
  DataType: 
  OrigDataType: 
T_591: (in bp + 0x0008 : word16)
  Class: Eq_591
  DataType: 
  OrigDataType: 
T_592: (in Mem52[ss:bp + 0x0008:word16] : word16)
  Class: Eq_592
  DataType: 
  OrigDataType: 
T_593: (in (word16) (si *u 0x000A) + Mem52[ss:bp + 0x0008:word16] : word16)
  Class: Eq_593
  DataType: 
  OrigDataType: 
T_594: (in SEQ(ds, (word16) (si *u 0x000A) + Mem52[ss:bp + 0x0008:word16]) : ptr32)
  Class: Eq_594
  DataType: 
  OrigDataType: 
T_595: (in 0x0002 : word16)
  Class: Eq_595
  DataType: 
  OrigDataType: 
T_596: (in di_37 * 0x0002 : word16)
  Class: Eq_596
  DataType: 
  OrigDataType: 
T_597: (in SEQ(ds, (word16) (si *u 0x000A) + Mem52[ss:bp + 0x0008:word16])[di_37 * 0x0002] : word16)
  Class: Eq_513
  DataType: 
  OrigDataType: 
T_598: (in 0x0002 : word16)
  Class: Eq_598
  DataType: 
  OrigDataType: 
T_599: (in bp - 0x0002 : word16)
  Class: Eq_599
  DataType: 
  OrigDataType: 
T_600: (in Mem118[ss:bp - 0x0002:word16] : word16)
  Class: Eq_600
  DataType: 
  OrigDataType: 
T_601: (in 0x0001 : word16)
  Class: Eq_601
  DataType: 
  OrigDataType: 
T_602: (in Mem118[ss:bp - 0x0002:word16] + 0x0001 : word16)
  Class: Eq_602
  DataType: 
  OrigDataType: 
T_603: (in 0x0002 : word16)
  Class: Eq_603
  DataType: 
  OrigDataType: 
T_604: (in bp - 0x0002 : word16)
  Class: Eq_604
  DataType: 
  OrigDataType: 
T_605: (in Mem120[ss:bp - 0x0002:word16] : word16)
  Class: Eq_602
  DataType: 
  OrigDataType: 
T_606: (in 0x0001 : word16)
  Class: Eq_606
  DataType: 
  OrigDataType: 
T_607: (in di_37 + 0x0001 : word16)
  Class: Eq_516
  DataType: 
  OrigDataType: 
T_608: (in ax : word16)
  Class: Eq_608
  DataType: 
  OrigDataType: 
T_609: (in bp_20 : word16)
  Class: Eq_609
  DataType: 
  OrigDataType: 
T_610: (in fn0800_01FA : ptr32)
  Class: Eq_610
  DataType: 
  OrigDataType: 
T_611: (in signature of fn0800_01FA : void)
  Class: Eq_610
  DataType: 
  OrigDataType: 
T_612: (in bpOut : ptr16)
  Class: Eq_612
  DataType: 
  OrigDataType: 
T_613: (in out bp_20 : ptr16)
  Class: Eq_612
  DataType: 
  OrigDataType: 
T_614: (in fn0800_01FA(si, di, ds, out bp_20) : word16)
  Class: Eq_614
  DataType: 
  OrigDataType: 
T_615: (in ax_21 : word16)
  Class: Eq_615
  DataType: 
  OrigDataType: 
T_616: (in 0x019E : word16)
  Class: Eq_616
  DataType: 
  OrigDataType: 
T_617: (in Mem0[ds:0x019E:word16] : word16)
  Class: Eq_615
  DataType: 
  OrigDataType: 
T_618: (in v7_22 : word16)
  Class: Eq_618
  DataType: 
  OrigDataType: 
T_619: (in 0x019E : word16)
  Class: Eq_619
  DataType: 
  OrigDataType: 
T_620: (in Mem0[ds:0x019E:word16] : word16)
  Class: Eq_620
  DataType: 
  OrigDataType: 
T_621: (in 0x0001 : word16)
  Class: Eq_621
  DataType: 
  OrigDataType: 
T_622: (in Mem0[ds:0x019E:word16] - 0x0001 : word16)
  Class: Eq_618
  DataType: 
  OrigDataType: 
T_623: (in Mem23[ds:0x019E:word16] : word16)
  Class: Eq_618
  DataType: 
  OrigDataType: 
T_624: (in al_25 : byte)
  Class: Eq_16
  DataType: 
  OrigDataType: 
T_625: (in (byte) ax_21 : byte)
  Class: Eq_16
  DataType: 
  OrigDataType: 
T_626: (in 0x0000 : word16)
  Class: Eq_615
  DataType: 
  OrigDataType: 
T_627: (in ax_21 != 0x0000 : bool)
  Class: Eq_627
  DataType: 
  OrigDataType: 
T_628: (in cs : selector)
  Class: Eq_628
  DataType: 
  OrigDataType: 
T_629: (in 0x01A6 : word16)
  Class: Eq_629
  DataType: 
  OrigDataType: 
T_630: (in SEQ(ds, 0x01A6) : ptr32)
  Class: Eq_630
  DataType: 
  OrigDataType: 
T_631: (in 0x019E : word16)
  Class: Eq_631
  DataType: 
  OrigDataType: 
T_632: (in Mem23[ds:0x019E:word16] : word16)
  Class: Eq_632
  DataType: 
  OrigDataType: 
T_633: (in 0x0002 : word16)
  Class: Eq_633
  DataType: 
  OrigDataType: 
T_634: (in Mem23[ds:0x019E:word16] * 0x0002 : word16)
  Class: Eq_634
  DataType: 
  OrigDataType: 
T_635: (in SEQ(ds, 0x01A6)[Mem23[ds:0x019E:word16] * 0x0002] : word16)
  Class: Eq_635
  DataType: 
  OrigDataType: 
T_636: (in SEQ(cs, SEQ(ds, 0x01A6)[Mem23[ds:0x019E:word16] * 0x0002]) : ptr32)
  Class: Eq_636
  DataType: 
  OrigDataType: 
T_637: (in 0x0194 : word16)
  Class: Eq_637
  DataType: 
  OrigDataType: 
T_638: (in Mem23[ds:0x0194:word16] : word16)
  Class: Eq_638
  DataType: 
  OrigDataType: 
T_639: (in SEQ(cs, Mem23[ds:0x0194:word16]) : ptr32)
  Class: Eq_639
  DataType: 
  OrigDataType: 
T_640: (in 0x0196 : word16)
  Class: Eq_640
  DataType: 
  OrigDataType: 
T_641: (in Mem23[ds:0x0196:word16] : word16)
  Class: Eq_641
  DataType: 
  OrigDataType: 
T_642: (in SEQ(cs, Mem23[ds:0x0196:word16]) : ptr32)
  Class: Eq_642
  DataType: 
  OrigDataType: 
T_643: (in 0x0198 : word16)
  Class: Eq_643
  DataType: 
  OrigDataType: 
T_644: (in Mem23[ds:0x0198:word16] : word16)
  Class: Eq_644
  DataType: 
  OrigDataType: 
T_645: (in SEQ(cs, Mem23[ds:0x0198:word16]) : ptr32)
  Class: Eq_645
  DataType: 
  OrigDataType: 
T_646: (in fn0800_0121 : ptr32)
  Class: Eq_322
  DataType: 
  OrigDataType: 
T_647: (in bLoc06 : byte)
  Class: Eq_325
  DataType: 
  OrigDataType: 
T_648: (in fn0800_0121(al_25, bLoc06) : void)
  Class: Eq_648
  DataType: 
  OrigDataType: 
T_649: (in si : word16)
  Class: Eq_649
  DataType: 
  OrigDataType: 
T_650: (in *dsOut : selector)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_651: (in es_231 : selector)
  Class: Eq_651
  DataType: 
  OrigDataType: 
T_652: (in wArg00 : word16)
  Class: Eq_652
  DataType: 
  OrigDataType: 
T_653: (in 0x02CF : word16)
  Class: Eq_653
  DataType: 
  OrigDataType: 
T_654: (in Mem3[0x0800:0x02CF:word16] : word16)
  Class: Eq_652
  DataType: 
  OrigDataType: 
T_655: (in 0x02D1 : word16)
  Class: Eq_655
  DataType: 
  OrigDataType: 
T_656: (in Mem6[0x0800:0x02D1:word16] : word16)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_657: (in si_23 : word16)
  Class: Eq_657
  DataType: 
  OrigDataType: 
T_658: (in 0x008A : word16)
  Class: Eq_658
  DataType: 
  OrigDataType: 
T_659: (in Mem6[ds:0x008A:word16] : word16)
  Class: Eq_657
  DataType: 
  OrigDataType: 
T_660: (in es_8 : selector)
  Class: Eq_651
  DataType: 
  OrigDataType: 
T_661: (in 0x0090 : word16)
  Class: Eq_661
  DataType: 
  OrigDataType: 
T_662: (in Mem6[ds:0x0090:selector] : selector)
  Class: Eq_651
  DataType: 
  OrigDataType: 
T_663: (in ax_13 : word16)
  Class: Eq_663
  DataType: 
  OrigDataType: 
T_664: (in ax : word16)
  Class: Eq_664
  DataType: 
  OrigDataType: 
T_665: (in 0x0080 : word16)
  Class: Eq_665
  DataType: 
  OrigDataType: 
T_666: (in Mem6[ds:0x0080:byte] : byte)
  Class: Eq_666
  DataType: 
  OrigDataType: 
T_667: (in DPB(ax, Mem6[ds:0x0080:byte], 0, 8) : word16)
  Class: Eq_663
  DataType: 
  OrigDataType: 
T_668: (in si_103 : word16)
  Class: Eq_111
  DataType: 
  OrigDataType: 
T_669: (in 0x0002 : word16)
  Class: Eq_669
  DataType: 
  OrigDataType: 
T_670: (in si_23 + 0x0002 : word16)
  Class: Eq_111
  DataType: 
  OrigDataType: 
T_671: (in cx_25 : word16)
  Class: Eq_671
  DataType: 
  OrigDataType: 
T_672: (in 0x0001 : word16)
  Class: Eq_671
  DataType: 
  OrigDataType: 
T_673: (in 0x0092 : word16)
  Class: Eq_673
  DataType: 
  OrigDataType: 
T_674: (in Mem6[ds:0x0092:byte] : byte)
  Class: Eq_674
  DataType: 
  OrigDataType: 
T_675: (in 0x03 : byte)
  Class: Eq_674
  DataType: 
  OrigDataType: 
T_676: (in Mem6[ds:0x0092:byte] <u 0x03 : bool)
  Class: Eq_676
  DataType: 
  OrigDataType: 
T_677: (in di_83 : word16)
  Class: Eq_111
  DataType: 
  OrigDataType: 
T_678: (in fp : ptr16)
  Class: Eq_678
  DataType: 
  OrigDataType: 
T_679: (in 0x0002 : word16)
  Class: Eq_679
  DataType: 
  OrigDataType: 
T_680: (in ax_13 + 0x0002 : word16)
  Class: Eq_680
  DataType: 
  OrigDataType: 
T_681: (in ax_13 + 0x0002 + cx_25 : word16)
  Class: Eq_681
  DataType: 
  OrigDataType: 
T_682: (in 0xFFFE : word16)
  Class: Eq_682
  DataType: 
  OrigDataType: 
T_683: (in ax_13 + 0x0002 + cx_25 & 0xFFFE : word16)
  Class: Eq_683
  DataType: 
  OrigDataType: 
T_684: (in ax_13 + 0x0002 + cx_25 & 0xFFFE & 0xFFFE : word16)
  Class: Eq_684
  DataType: 
  OrigDataType: 
T_685: (in fp - (((ax_13 + 0x0002) + cx_25 & 0xFFFE) & 0xFFFE) : word16)
  Class: Eq_685
  DataType: 
  OrigDataType: 
T_686: (in 0x0001 : word16)
  Class: Eq_686
  DataType: 
  OrigDataType: 
T_687: (in fp - (((ax_13 + 0x0002) + cx_25 & 0xFFFE) & 0xFFFE) + 0x0001 : word16)
  Class: Eq_111
  DataType: 
  OrigDataType: 
T_688: (in 0x0000 : word16)
  Class: Eq_111
  DataType: 
  OrigDataType: 
T_689: (in di_83 <u 0x0000 : bool)
  Class: Eq_689
  DataType: 
  OrigDataType: 
T_690: (in 0x008C : word16)
  Class: Eq_690
  DataType: 
  OrigDataType: 
T_691: (in Mem6[ds:0x008C:selector] : selector)
  Class: Eq_651
  DataType: 
  OrigDataType: 
T_692: (in di_232 : word16)
  Class: Eq_692
  DataType: 
  OrigDataType: 
T_693: (in si_23 + 0x0002 : word16)
  Class: Eq_692
  DataType: 
  OrigDataType: 
T_694: (in cl_233 : byte)
  Class: Eq_694
  DataType: 
  OrigDataType: 
T_695: (in 0x7F : byte)
  Class: Eq_694
  DataType: 
  OrigDataType: 
T_696: (in cx_234 : word16)
  Class: Eq_696
  DataType: 
  OrigDataType: 
T_697: (in 0x007F : word16)
  Class: Eq_696
  DataType: 
  OrigDataType: 
T_698: (in 0x0000 : word16)
  Class: Eq_696
  DataType: 
  OrigDataType: 
T_699: (in cx_234 == 0x0000 : bool)
  Class: Eq_699
  DataType: 
  OrigDataType: 
T_700: (in 0x0001 : word16)
  Class: Eq_700
  DataType: 
  OrigDataType: 
T_701: (in cx_234 - 0x0001 : word16)
  Class: Eq_696
  DataType: 
  OrigDataType: 
T_702: (in di_260 : word16)
  Class: Eq_692
  DataType: 
  OrigDataType: 
T_703: (in 0x0001 : word16)
  Class: Eq_703
  DataType: 
  OrigDataType: 
T_704: (in di_260 + 0x0001 : word16)
  Class: Eq_692
  DataType: 
  OrigDataType: 
T_705: (in (byte) cx_234 : byte)
  Class: Eq_694
  DataType: 
  OrigDataType: 
T_706: (in 0x00 : byte)
  Class: Eq_706
  DataType: 
  OrigDataType: 
T_707: (in 0x0000 : word16)
  Class: Eq_707
  DataType: 
  OrigDataType: 
T_708: (in di_260 + 0x0000 : word16)
  Class: Eq_708
  DataType: 
  OrigDataType: 
T_709: (in Mem6[es_231:di_260 + 0x0000:byte] : byte)
  Class: Eq_706
  DataType: 
  OrigDataType: 
T_710: (in 0x00 != Mem6[es_231:di_260 + 0x0000:byte] : bool)
  Class: Eq_710
  DataType: 
  OrigDataType: 
T_711: (in 0x0000 : word16)
  Class: Eq_696
  DataType: 
  OrigDataType: 
T_712: (in cx_234 == 0x0000 : bool)
  Class: Eq_712
  DataType: 
  OrigDataType: 
T_713: (in 0x7F : byte)
  Class: Eq_713
  DataType: 
  OrigDataType: 
T_714: (in cl_233 ^ 0x7F : byte)
  Class: Eq_714
  DataType: 
  OrigDataType: 
T_715: (in DPB(cx_234, cl_233 ^ 0x7F, 0, 8) : word16)
  Class: Eq_671
  DataType: 
  OrigDataType: 
T_716: (in ss : selector)
  Class: Eq_716
  DataType: 
  OrigDataType: 
T_717: (in 0x0002 : word16)
  Class: Eq_717
  DataType: 
  OrigDataType: 
T_718: (in di_83 - 0x0002 : word16)
  Class: Eq_718
  DataType: 
  OrigDataType: 
T_719: (in Mem93[ss:di_83 - 0x0002:word16] : word16)
  Class: Eq_671
  DataType: 
  OrigDataType: 
T_720: (in cx_105 : word16)
  Class: Eq_720
  DataType: 
  OrigDataType: 
T_721: (in 0x0001 : word16)
  Class: Eq_721
  DataType: 
  OrigDataType: 
T_722: (in cx_25 - 0x0001 : word16)
  Class: Eq_722
  DataType: 
  OrigDataType: 
T_723: (in 0x0001 : word16)
  Class: Eq_723
  DataType: 
  OrigDataType: 
T_724: (in cx_25 - 0x0001 + 0x0001 : word16)
  Class: Eq_720
  DataType: 
  OrigDataType: 
T_725: (in di_104 : word16)
  Class: Eq_111
  DataType: 
  OrigDataType: 
T_726: (in 0x00 : byte)
  Class: Eq_726
  DataType: 
  OrigDataType: 
T_727: (in 0x0000 : word16)
  Class: Eq_727
  DataType: 
  OrigDataType: 
T_728: (in di_104 + 0x0000 : word16)
  Class: Eq_728
  DataType: 
  OrigDataType: 
T_729: (in Mem109[ss:di_104 + 0x0000:byte] : byte)
  Class: Eq_726
  DataType: 
  OrigDataType: 
T_730: (in di_110 : word16)
  Class: Eq_730
  DataType: 
  OrigDataType: 
T_731: (in 0x0000 : word16)
  Class: Eq_731
  DataType: 
  OrigDataType: 
T_732: (in di_104 + 0x0000 : word16)
  Class: Eq_730
  DataType: 
  OrigDataType: 
T_733: (in si_113 : word16)
  Class: Eq_733
  DataType: 
  OrigDataType: 
T_734: (in 0x0081 : word16)
  Class: Eq_733
  DataType: 
  OrigDataType: 
T_735: (in cx_115 : word16)
  Class: Eq_735
  DataType: 
  OrigDataType: 
T_736: (in 0x0001 : word16)
  Class: Eq_736
  DataType: 
  OrigDataType: 
T_737: (in ax_13 + 0x0001 : word16)
  Class: Eq_735
  DataType: 
  OrigDataType: 
T_738: (in ax_118 : word16)
  Class: Eq_720
  DataType: 
  OrigDataType: 
T_739: (in al_120 : byte)
  Class: Eq_739
  DataType: 
  OrigDataType: 
T_740: (in (byte) cx_105 : byte)
  Class: Eq_739
  DataType: 
  OrigDataType: 
T_741: (in dx_121 : word16)
  Class: Eq_720
  DataType: 
  OrigDataType: 
T_742: (in bx_122 : word16)
  Class: Eq_742
  DataType: 
  OrigDataType: 
T_743: (in 0x0000 : word16)
  Class: Eq_743
  DataType: 
  OrigDataType: 
T_744: (in cx_105 + 0x0000 : word16)
  Class: Eq_742
  DataType: 
  OrigDataType: 
T_745: (in 0x0000 : word16)
  Class: Eq_745
  DataType: 
  OrigDataType: 
T_746: (in si_103 + 0x0000 : word16)
  Class: Eq_746
  DataType: 
  OrigDataType: 
T_747: (in Mem93[es_231:si_103 + 0x0000:byte] : byte)
  Class: Eq_747
  DataType: 
  OrigDataType: 
T_748: (in 0x0000 : word16)
  Class: Eq_748
  DataType: 
  OrigDataType: 
T_749: (in di_104 + 0x0000 : word16)
  Class: Eq_749
  DataType: 
  OrigDataType: 
T_750: (in Mem102[ss:di_104 + 0x0000:byte] : byte)
  Class: Eq_747
  DataType: 
  OrigDataType: 
T_751: (in 0x0001 : word16)
  Class: Eq_751
  DataType: 
  OrigDataType: 
T_752: (in si_103 + 0x0001 : word16)
  Class: Eq_111
  DataType: 
  OrigDataType: 
T_753: (in 0x0001 : word16)
  Class: Eq_753
  DataType: 
  OrigDataType: 
T_754: (in di_104 + 0x0001 : word16)
  Class: Eq_111
  DataType: 
  OrigDataType: 
T_755: (in 0x0001 : word16)
  Class: Eq_755
  DataType: 
  OrigDataType: 
T_756: (in cx_105 - 0x0001 : word16)
  Class: Eq_720
  DataType: 
  OrigDataType: 
T_757: (in 0xFFFF : word16)
  Class: Eq_720
  DataType: 
  OrigDataType: 
T_758: (in cx_105 == 0xFFFF : bool)
  Class: Eq_758
  DataType: 
  OrigDataType: 
T_759: (in 0x20 : byte)
  Class: Eq_739
  DataType: 
  OrigDataType: 
T_760: (in al_120 == 0x20 : bool)
  Class: Eq_760
  DataType: 
  OrigDataType: 
T_761: (in C_138 : byte)
  Class: Eq_761
  DataType: 
  OrigDataType: 
T_762: (in cx_187 : word16)
  Class: Eq_762
  DataType: 
  OrigDataType: 
T_763: (in di_83 - 0x0002 : word16)
  Class: Eq_763
  DataType: 
  OrigDataType: 
T_764: (in Mem109[ss:di_83 - 0x0002:word16] : word16)
  Class: Eq_764
  DataType: 
  OrigDataType: 
T_765: (in Mem109[ss:di_83 - 0x0002:word16] + dx_121 : word16)
  Class: Eq_762
  DataType: 
  OrigDataType: 
T_766: (in ds_189 : selector)
  Class: Eq_766
  DataType: 
  OrigDataType: 
T_767: (in 0x02D1 : word16)
  Class: Eq_767
  DataType: 
  OrigDataType: 
T_768: (in Mem109[0x0800:0x02D1:selector] : selector)
  Class: Eq_766
  DataType: 
  OrigDataType: 
T_769: (in *dsOut : selector)
  Class: Eq_766
  DataType: 
  OrigDataType: 
T_770: (in 0x0084 : word16)
  Class: Eq_770
  DataType: 
  OrigDataType: 
T_771: (in Mem190[ds_189:0x0084:word16] : word16)
  Class: Eq_742
  DataType: 
  OrigDataType: 
T_772: (in bp_195 : word16)
  Class: Eq_772
  DataType: 
  OrigDataType: 
T_773: (in 0x0001 : word16)
  Class: Eq_773
  DataType: 
  OrigDataType: 
T_774: (in bx_122 + 0x0001 : word16)
  Class: Eq_774
  DataType: 
  OrigDataType: 
T_775: (in 0x0002 : word16)
  Class: Eq_775
  DataType: 
  OrigDataType: 
T_776: (in (bx_122 + 0x0001) * 0x0002 : word16)
  Class: Eq_776
  DataType: 
  OrigDataType: 
T_777: (in di_83 - (bx_122 + 0x0001) * 0x0002 : word16)
  Class: Eq_772
  DataType: 
  OrigDataType: 
T_778: (in 0x0000 : word16)
  Class: Eq_772
  DataType: 
  OrigDataType: 
T_779: (in bp_195 <u 0x0000 : bool)
  Class: Eq_779
  DataType: 
  OrigDataType: 
T_780: (in CZ_180 : byte)
  Class: Eq_761
  DataType: 
  OrigDataType: 
T_781: (in fn0800_035E : ptr32)
  Class: Eq_781
  DataType: 
  OrigDataType: 
T_782: (in signature of fn0800_035E : void)
  Class: Eq_781
  DataType: 
  OrigDataType: 
T_783: (in ax : word16)
  Class: Eq_720
  DataType: 
  OrigDataType: 
T_784: (in cx : word16)
  Class: Eq_735
  DataType: 
  OrigDataType: 
T_785: (in dx : word16)
  Class: Eq_720
  DataType: 
  OrigDataType: 
T_786: (in bx : word16)
  Class: Eq_742
  DataType: 
  OrigDataType: 
T_787: (in si : word16)
  Class: Eq_733
  DataType: 
  OrigDataType: 
T_788: (in di : word16)
  Class: Eq_730
  DataType: 
  OrigDataType: 
T_789: (in es : selector)
  Class: Eq_716
  DataType: 
  OrigDataType: 
T_790: (in ds : selector)
  Class: Eq_651
  DataType: 
  OrigDataType: 
T_791: (in axOut : ptr16)
  Class: Eq_791
  DataType: 
  OrigDataType: 
T_792: (in cxOut : ptr16)
  Class: Eq_792
  DataType: 
  OrigDataType: 
T_793: (in dxOut : ptr16)
  Class: Eq_793
  DataType: 
  OrigDataType: 
T_794: (in bxOut : ptr16)
  Class: Eq_794
  DataType: 
  OrigDataType: 
T_795: (in siOut : ptr16)
  Class: Eq_795
  DataType: 
  OrigDataType: 
T_796: (in diOut : ptr16)
  Class: Eq_796
  DataType: 
  OrigDataType: 
T_797: (in out ax_118 : ptr16)
  Class: Eq_791
  DataType: 
  OrigDataType: 
T_798: (in out cx_115 : ptr16)
  Class: Eq_792
  DataType: 
  OrigDataType: 
T_799: (in out dx_121 : ptr16)
  Class: Eq_793
  DataType: 
  OrigDataType: 
T_800: (in out bx_122 : ptr16)
  Class: Eq_794
  DataType: 
  OrigDataType: 
T_801: (in out si_113 : ptr16)
  Class: Eq_795
  DataType: 
  OrigDataType: 
T_802: (in out di_110 : ptr16)
  Class: Eq_796
  DataType: 
  OrigDataType: 
T_803: (in fn0800_035E(ax_118, cx_115, dx_121, bx_122, si_113, di_110, ss, es_8, out ax_118, out cx_115, out dx_121, out bx_122, out si_113, out di_110) : byte)
  Class: Eq_761
  DataType: 
  OrigDataType: 
T_804: (in 0x00 : byte)
  Class: Eq_739
  DataType: 
  OrigDataType: 
T_805: (in 0x00 : byte)
  Class: Eq_805
  DataType: 
  OrigDataType: 
T_806: (in DPB(ax_118, 0x00, 0, 8) : word16)
  Class: Eq_720
  DataType: 
  OrigDataType: 
T_807: (in 0x0D : byte)
  Class: Eq_739
  DataType: 
  OrigDataType: 
T_808: (in al_120 == 0x0D : bool)
  Class: Eq_808
  DataType: 
  OrigDataType: 
T_809: (in 0x09 : byte)
  Class: Eq_739
  DataType: 
  OrigDataType: 
T_810: (in al_120 != 0x09 : bool)
  Class: Eq_810
  DataType: 
  OrigDataType: 
T_811: (in CZ_137 : byte)
  Class: Eq_761
  DataType: 
  OrigDataType: 
T_812: (in fn0800_035E : ptr32)
  Class: Eq_781
  DataType: 
  OrigDataType: 
T_813: (in out ax_118 : ptr16)
  Class: Eq_791
  DataType: 
  OrigDataType: 
T_814: (in out cx_115 : ptr16)
  Class: Eq_792
  DataType: 
  OrigDataType: 
T_815: (in out dx_121 : ptr16)
  Class: Eq_793
  DataType: 
  OrigDataType: 
T_816: (in out bx_122 : ptr16)
  Class: Eq_794
  DataType: 
  OrigDataType: 
T_817: (in out si_113 : ptr16)
  Class: Eq_795
  DataType: 
  OrigDataType: 
T_818: (in out di_110 : ptr16)
  Class: Eq_796
  DataType: 
  OrigDataType: 
T_819: (in fn0800_035E(ax_118, cx_115, dx_121, bx_122, si_113, di_110, ss, es_8, out ax_118, out cx_115, out dx_121, out bx_122, out si_113, out di_110) : byte)
  Class: Eq_761
  DataType: 
  OrigDataType: 
T_820: (in fn0800_01E2 : ptr32)
  Class: Eq_109
  DataType: 
  OrigDataType: 
T_821: (in fn0800_01E2(si_103) : void)
  Class: Eq_821
  DataType: 
  OrigDataType: 
T_822: (in 0x0086 : word16)
  Class: Eq_822
  DataType: 
  OrigDataType: 
T_823: (in Mem199[ds_189:0x0086:word16] : word16)
  Class: Eq_772
  DataType: 
  OrigDataType: 
T_824: (in 0x0000 : word16)
  Class: Eq_824
  DataType: 
  OrigDataType: 
T_825: (in 0x0000 : word16)
  Class: Eq_825
  DataType: 
  OrigDataType: 
T_826: (in bp_195 + 0x0000 : word16)
  Class: Eq_826
  DataType: 
  OrigDataType: 
T_827: (in Mem214[ss:bp_195 + 0x0000:word16] : word16)
  Class: Eq_824
  DataType: 
  OrigDataType: 
T_828: (in 0x02CF : word16)
  Class: Eq_828
  DataType: 
  OrigDataType: 
T_829: (in Mem214[0x0800:0x02CF:word16] : word16)
  Class: Eq_829
  DataType: 
  OrigDataType: 
T_830: (in 0x0000 : word16)
  Class: Eq_830
  DataType: 
  OrigDataType: 
T_831: (in bp_195 + 0x0000 : word16)
  Class: Eq_831
  DataType: 
  OrigDataType: 
T_832: (in Mem216[ss:bp_195 + 0x0000:word16] : word16)
  Class: Eq_111
  DataType: 
  OrigDataType: 
T_833: (in 0x0002 : word16)
  Class: Eq_833
  DataType: 
  OrigDataType: 
T_834: (in bp_195 + 0x0002 : word16)
  Class: Eq_772
  DataType: 
  OrigDataType: 
T_835: (in al_221 : byte)
  Class: Eq_835
  DataType: 
  OrigDataType: 
T_836: (in 0x0000 : word16)
  Class: Eq_836
  DataType: 
  OrigDataType: 
T_837: (in si_103 + 0x0000 : word16)
  Class: Eq_837
  DataType: 
  OrigDataType: 
T_838: (in Mem216[ds_189:si_103 + 0x0000:byte] : byte)
  Class: Eq_835
  DataType: 
  OrigDataType: 
T_839: (in 0x0001 : word16)
  Class: Eq_839
  DataType: 
  OrigDataType: 
T_840: (in si_103 + 0x0001 : word16)
  Class: Eq_111
  DataType: 
  OrigDataType: 
T_841: (in 0x0001 : word16)
  Class: Eq_841
  DataType: 
  OrigDataType: 
T_842: (in cx_187 - 0x0001 : word16)
  Class: Eq_762
  DataType: 
  OrigDataType: 
T_843: (in 0x00 : byte)
  Class: Eq_835
  DataType: 
  OrigDataType: 
T_844: (in al_221 != 0x00 : bool)
  Class: Eq_844
  DataType: 
  OrigDataType: 
T_845: (in 0x0000 : word16)
  Class: Eq_762
  DataType: 
  OrigDataType: 
T_846: (in cx_187 != 0x0000 : bool)
  Class: Eq_846
  DataType: 
  OrigDataType: 
T_847: (in al_221 != 0x00 && cx_187 != 0x0000 : bool)
  Class: Eq_847
  DataType: 
  OrigDataType: 
T_848: (in 0x00 : byte)
  Class: Eq_835
  DataType: 
  OrigDataType: 
T_849: (in al_221 == 0x00 : bool)
  Class: Eq_849
  DataType: 
  OrigDataType: 
T_850: (in 0x0000 : word16)
  Class: Eq_762
  DataType: 
  OrigDataType: 
T_851: (in cx_187 == 0x0000 : bool)
  Class: Eq_851
  DataType: 
  OrigDataType: 
T_852: (in CZ : byte)
  Class: Eq_852
  DataType: 
  OrigDataType: 
T_853: (in *dxOut : word16)
  Class: Eq_720
  DataType: 
  OrigDataType: 
T_854: (in *diOut : word16)
  Class: Eq_730
  DataType: 
  OrigDataType: 
T_855: (in *bxOut : word16)
  Class: Eq_742
  DataType: 
  OrigDataType: 
T_856: (in *cxOut : word16)
  Class: Eq_735
  DataType: 
  OrigDataType: 
T_857: (in *siOut : word16)
  Class: Eq_733
  DataType: 
  OrigDataType: 
T_858: (in ax_15 : word16)
  Class: Eq_720
  DataType: 
  OrigDataType: 
T_859: (in al_4 : byte)
  Class: Eq_859
  DataType: 
  OrigDataType: 
T_860: (in (byte) ax : byte)
  Class: Eq_859
  DataType: 
  OrigDataType: 
T_861: (in 0x0000 : word16)
  Class: Eq_720
  DataType: 
  OrigDataType: 
T_862: (in ax == 0x0000 : bool)
  Class: Eq_862
  DataType: 
  OrigDataType: 
T_863: (in ax_21 : word16)
  Class: Eq_863
  DataType: 
  OrigDataType: 
T_864: (in 0x00 : byte)
  Class: Eq_864
  DataType: 
  OrigDataType: 
T_865: (in DPB(ax_15, 0x00, 0, 8) : word16)
  Class: Eq_863
  DataType: 
  OrigDataType: 
T_866: (in *axOut : word16)
  Class: Eq_863
  DataType: 
  OrigDataType: 
T_867: (in CZ_26 : byte)
  Class: Eq_867
  DataType: 
  OrigDataType: 
T_868: (in true : bool)
  Class: Eq_867
  DataType: 
  OrigDataType: 
T_869: (in 0x0000 : word16)
  Class: Eq_735
  DataType: 
  OrigDataType: 
T_870: (in cx == 0x0000 : bool)
  Class: Eq_870
  DataType: 
  OrigDataType: 
T_871: (in 0x0000 : word16)
  Class: Eq_871
  DataType: 
  OrigDataType: 
T_872: (in di + 0x0000 : word16)
  Class: Eq_872
  DataType: 
  OrigDataType: 
T_873: (in Mem78[es:di + 0x0000:byte] : byte)
  Class: Eq_859
  DataType: 
  OrigDataType: 
T_874: (in dx_77 : word16)
  Class: Eq_874
  DataType: 
  OrigDataType: 
T_875: (in 0x0001 : word16)
  Class: Eq_875
  DataType: 
  OrigDataType: 
T_876: (in dx + 0x0001 : word16)
  Class: Eq_876
  DataType: 
  OrigDataType: 
T_877: (in *dxOut : word16)
  Class: Eq_876
  DataType: 
  OrigDataType: 
T_878: (in di_80 : word16)
  Class: Eq_878
  DataType: 
  OrigDataType: 
T_879: (in 0x0001 : word16)
  Class: Eq_879
  DataType: 
  OrigDataType: 
T_880: (in di + 0x0001 : word16)
  Class: Eq_880
  DataType: 
  OrigDataType: 
T_881: (in *diOut : word16)
  Class: Eq_880
  DataType: 
  OrigDataType: 
T_882: (in DPB(ax, al_4, 0, 8) : word16)
  Class: Eq_720
  DataType: 
  OrigDataType: 
T_883: (in 0x00 : byte)
  Class: Eq_859
  DataType: 
  OrigDataType: 
T_884: (in al_4 != 0x00 : bool)
  Class: Eq_884
  DataType: 
  OrigDataType: 
T_885: (in bx_86 : word16)
  Class: Eq_885
  DataType: 
  OrigDataType: 
T_886: (in 0x0001 : word16)
  Class: Eq_886
  DataType: 
  OrigDataType: 
T_887: (in bx + 0x0001 : word16)
  Class: Eq_887
  DataType: 
  OrigDataType: 
T_888: (in *bxOut : word16)
  Class: Eq_887
  DataType: 
  OrigDataType: 
T_889: (in al_46 : byte)
  Class: Eq_889
  DataType: 
  OrigDataType: 
T_890: (in 0x0000 : word16)
  Class: Eq_890
  DataType: 
  OrigDataType: 
T_891: (in si + 0x0000 : word16)
  Class: Eq_891
  DataType: 
  OrigDataType: 
T_892: (in Mem0[ds:si + 0x0000:byte] : byte)
  Class: Eq_889
  DataType: 
  OrigDataType: 
T_893: (in si_47 : word16)
  Class: Eq_893
  DataType: 
  OrigDataType: 
T_894: (in 0x0001 : word16)
  Class: Eq_894
  DataType: 
  OrigDataType: 
T_895: (in si + 0x0001 : word16)
  Class: Eq_893
  DataType: 
  OrigDataType: 
T_896: (in *siOut : word16)
  Class: Eq_893
  DataType: 
  OrigDataType: 
T_897: (in cx_48 : word16)
  Class: Eq_897
  DataType: 
  OrigDataType: 
T_898: (in 0x0001 : word16)
  Class: Eq_898
  DataType: 
  OrigDataType: 
T_899: (in cx - 0x0001 : word16)
  Class: Eq_897
  DataType: 
  OrigDataType: 
T_900: (in *cxOut : word16)
  Class: Eq_897
  DataType: 
  OrigDataType: 
T_901: (in ax_50 : word16)
  Class: Eq_901
  DataType: 
  OrigDataType: 
T_902: (in 0x22 : byte)
  Class: Eq_902
  DataType: 
  OrigDataType: 
T_903: (in al_46 - 0x22 : byte)
  Class: Eq_903
  DataType: 
  OrigDataType: 
T_904: (in DPB(ax_21, al_46 - 0x22, 0, 8) : word16)
  Class: Eq_901
  DataType: 
  OrigDataType: 
T_905: (in *axOut : word16)
  Class: Eq_901
  DataType: 
  OrigDataType: 
T_906: (in al_46 - 0x22 : byte)
  Class: Eq_906
  DataType: 
  OrigDataType: 
T_907: (in cond(al_46 - 0x22) : byte)
  Class: Eq_867
  DataType: 
  OrigDataType: 
T_908: (in 0x22 : byte)
  Class: Eq_889
  DataType: 
  OrigDataType: 
T_909: (in al_46 == 0x22 : bool)
  Class: Eq_909
  DataType: 
  OrigDataType: 
T_910: (in ax_57 : word16)
  Class: Eq_910
  DataType: 
  OrigDataType: 
T_911: (in DPB(ax_50, al_46, 0, 8) : word16)
  Class: Eq_910
  DataType: 
  OrigDataType: 
T_912: (in *axOut : word16)
  Class: Eq_910
  DataType: 
  OrigDataType: 
T_913: (in 0x5C : byte)
  Class: Eq_889
  DataType: 
  OrigDataType: 
T_914: (in al_46 != 0x5C : bool)
  Class: Eq_914
  DataType: 
  OrigDataType: 
T_915: (in si_64 : word16)
  Class: Eq_915
  DataType: 
  OrigDataType: 
T_916: (in *siOut : word16)
  Class: Eq_893
  DataType: 
  OrigDataType: 
T_917: (in false : bool)
  Class: Eq_867
  DataType: 
  OrigDataType: 
T_918: (in si + 0x0001 : word16)
  Class: Eq_918
  DataType: 
  OrigDataType: 
T_919: (in Mem0[ds:si + 0x0001:byte] : byte)
  Class: Eq_919
  DataType: 
  OrigDataType: 
T_920: (in 0x22 : byte)
  Class: Eq_919
  DataType: 
  OrigDataType: 
T_921: (in Mem0[ds:si + 0x0001:byte] != 0x22 : bool)
  Class: Eq_921
  DataType: 
  OrigDataType: 
T_922: (in ax_73 : word16)
  Class: Eq_922
  DataType: 
  OrigDataType: 
T_923: (in si + 0x0001 : word16)
  Class: Eq_923
  DataType: 
  OrigDataType: 
T_924: (in Mem0[ds:si + 0x0001:byte] : byte)
  Class: Eq_924
  DataType: 
  OrigDataType: 
T_925: (in DPB(ax_57, Mem0[ds:si + 0x0001:byte], 0, 8) : word16)
  Class: Eq_925
  DataType: 
  OrigDataType: 
T_926: (in *axOut : word16)
  Class: Eq_925
  DataType: 
  OrigDataType: 
T_927: (in 0x0002 : word16)
  Class: Eq_927
  DataType: 
  OrigDataType: 
T_928: (in si + 0x0002 : word16)
  Class: Eq_893
  DataType: 
  OrigDataType: 
T_929: (in cx_75 : word16)
  Class: Eq_929
  DataType: 
  OrigDataType: 
T_930: (in 0x0002 : word16)
  Class: Eq_930
  DataType: 
  OrigDataType: 
T_931: (in cx - 0x0002 : word16)
  Class: Eq_931
  DataType: 
  OrigDataType: 
T_932: (in *cxOut : word16)
  Class: Eq_931
  DataType: 
  OrigDataType: 
T_933: (in cx_4 : word16)
  Class: Eq_933
  DataType: 
  OrigDataType: 
T_934: (in 0x008A : word16)
  Class: Eq_934
  DataType: 
  OrigDataType: 
T_935: (in Mem0[ds:0x008A:word16] : word16)
  Class: Eq_933
  DataType: 
  OrigDataType: 
T_936: (in ax_7 : word16)
  Class: Eq_936
  DataType: 
  OrigDataType: 
T_937: (in fn0800_050F : ptr32)
  Class: Eq_937
  DataType: 
  OrigDataType: 
T_938: (in signature of fn0800_050F : void)
  Class: Eq_937
  DataType: 
  OrigDataType: 
T_939: (in ds : selector)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_940: (in wArg02 : word16)
  Class: Eq_933
  DataType: 
  OrigDataType: 
T_941: (in fn0800_050F(ds, cx_4) : word16)
  Class: Eq_936
  DataType: 
  OrigDataType: 
T_942: (in cx_66 : word16)
  Class: Eq_933
  DataType: 
  OrigDataType: 
T_943: (in di_10 : word16)
  Class: Eq_936
  DataType: 
  OrigDataType: 
T_944: (in *diOut : word16)
  Class: Eq_936
  DataType: 
  OrigDataType: 
T_945: (in 0x0000 : word16)
  Class: Eq_936
  DataType: 
  OrigDataType: 
T_946: (in ax_7 == 0x0000 : bool)
  Class: Eq_946
  DataType: 
  OrigDataType: 
T_947: (in ds_59 : selector)
  Class: Eq_947
  DataType: 
  OrigDataType: 
T_948: (in 0x008C : word16)
  Class: Eq_948
  DataType: 
  OrigDataType: 
T_949: (in Mem0[ds:0x008C:selector] : selector)
  Class: Eq_947
  DataType: 
  OrigDataType: 
T_950: (in 0x0000 : word16)
  Class: Eq_111
  DataType: 
  OrigDataType: 
T_951: (in ax_79 : word16)
  Class: Eq_951
  DataType: 
  OrigDataType: 
T_952: (in fn0800_050F : ptr32)
  Class: Eq_937
  DataType: 
  OrigDataType: 
T_953: (in 0x008E : word16)
  Class: Eq_953
  DataType: 
  OrigDataType: 
T_954: (in Mem0[ds:0x008E:word16] : word16)
  Class: Eq_933
  DataType: 
  OrigDataType: 
T_955: (in fn0800_050F(ds, Mem0[ds:0x008E:word16]) : word16)
  Class: Eq_951
  DataType: 
  OrigDataType: 
T_956: (in 0x0088 : word16)
  Class: Eq_956
  DataType: 
  OrigDataType: 
T_957: (in Mem84[ds:0x0088:word16] : word16)
  Class: Eq_951
  DataType: 
  OrigDataType: 
T_958: (in di_103 : word16)
  Class: Eq_936
  DataType: 
  OrigDataType: 
T_959: (in *diOut : word16)
  Class: Eq_936
  DataType: 
  OrigDataType: 
T_960: (in bx_81 : word16)
  Class: Eq_951
  DataType: 
  OrigDataType: 
T_961: (in 0x0000 : word16)
  Class: Eq_951
  DataType: 
  OrigDataType: 
T_962: (in ax_79 != 0x0000 : bool)
  Class: Eq_962
  DataType: 
  OrigDataType: 
T_963: (in 0x0000 : word16)
  Class: Eq_963
  DataType: 
  OrigDataType: 
T_964: (in si + 0x0000 : word16)
  Class: Eq_964
  DataType: 
  OrigDataType: 
T_965: (in Mem0[ds_59:si + 0x0000:byte] : byte)
  Class: Eq_965
  DataType: 
  OrigDataType: 
T_966: (in 0x0000 : word16)
  Class: Eq_966
  DataType: 
  OrigDataType: 
T_967: (in di_10 + 0x0000 : word16)
  Class: Eq_967
  DataType: 
  OrigDataType: 
T_968: (in Mem68[ds:di_10 + 0x0000:byte] : byte)
  Class: Eq_965
  DataType: 
  OrigDataType: 
T_969: (in 0x0001 : word16)
  Class: Eq_969
  DataType: 
  OrigDataType: 
T_970: (in si + 0x0001 : word16)
  Class: Eq_111
  DataType: 
  OrigDataType: 
T_971: (in 0x0001 : word16)
  Class: Eq_971
  DataType: 
  OrigDataType: 
T_972: (in di_10 + 0x0001 : word16)
  Class: Eq_936
  DataType: 
  OrigDataType: 
T_973: (in 0x0001 : word16)
  Class: Eq_973
  DataType: 
  OrigDataType: 
T_974: (in cx_66 - 0x0001 : word16)
  Class: Eq_933
  DataType: 
  OrigDataType: 
T_975: (in 0x0000 : word16)
  Class: Eq_933
  DataType: 
  OrigDataType: 
T_976: (in cx_66 == 0x0000 : bool)
  Class: Eq_976
  DataType: 
  OrigDataType: 
T_977: (in fn0800_01E2 : ptr32)
  Class: Eq_109
  DataType: 
  OrigDataType: 
T_978: (in fn0800_01E2(si) : void)
  Class: Eq_978
  DataType: 
  OrigDataType: 
T_979: (in cx_104 : word16)
  Class: Eq_979
  DataType: 
  OrigDataType: 
T_980: (in 0xFFFF : word16)
  Class: Eq_979
  DataType: 
  OrigDataType: 
T_981: (in 0x0000 : word16)
  Class: Eq_981
  DataType: 
  OrigDataType: 
T_982: (in di_103 + 0x0000 : word16)
  Class: Eq_982
  DataType: 
  OrigDataType: 
T_983: (in Mem98[ds:di_103 + 0x0000:byte] : byte)
  Class: Eq_983
  DataType: 
  OrigDataType: 
T_984: (in 0x00 : byte)
  Class: Eq_983
  DataType: 
  OrigDataType: 
T_985: (in Mem98[ds:di_103 + 0x0000:byte] != 0x00 : bool)
  Class: Eq_985
  DataType: 
  OrigDataType: 
T_986: (in di_114 : word16)
  Class: Eq_936
  DataType: 
  OrigDataType: 
T_987: (in 0x0001 : word16)
  Class: Eq_987
  DataType: 
  OrigDataType: 
T_988: (in di_114 + 0x0001 : word16)
  Class: Eq_988
  DataType: 
  OrigDataType: 
T_989: (in *diOut : word16)
  Class: Eq_988
  DataType: 
  OrigDataType: 
T_990: (in 0x0001 : word16)
  Class: Eq_990
  DataType: 
  OrigDataType: 
T_991: (in cx_104 - 0x0001 : word16)
  Class: Eq_979
  DataType: 
  OrigDataType: 
T_992: (in 0x00 : byte)
  Class: Eq_992
  DataType: 
  OrigDataType: 
T_993: (in 0x0000 : word16)
  Class: Eq_993
  DataType: 
  OrigDataType: 
T_994: (in di_114 + 0x0000 : word16)
  Class: Eq_994
  DataType: 
  OrigDataType: 
T_995: (in Mem98[ds:di_114 + 0x0000:byte] : byte)
  Class: Eq_992
  DataType: 
  OrigDataType: 
T_996: (in 0x00 != Mem98[ds:di_114 + 0x0000:byte] : bool)
  Class: Eq_996
  DataType: 
  OrigDataType: 
T_997: (in 0x0000 : word16)
  Class: Eq_979
  DataType: 
  OrigDataType: 
T_998: (in cx_104 == 0x0000 : bool)
  Class: Eq_998
  DataType: 
  OrigDataType: 
T_999: (in 0x0000 : word16)
  Class: Eq_999
  DataType: 
  OrigDataType: 
T_1000: (in bx_81 + 0x0000 : word16)
  Class: Eq_1000
  DataType: 
  OrigDataType: 
T_1001: (in Mem98[ds:bx_81 + 0x0000:word16] : word16)
  Class: Eq_936
  DataType: 
  OrigDataType: 
T_1002: (in 0x0002 : word16)
  Class: Eq_1002
  DataType: 
  OrigDataType: 
T_1003: (in bx_81 + 0x0002 : word16)
  Class: Eq_951
  DataType: 
  OrigDataType: 
T_1004: (in 0x0000 : word16)
  Class: Eq_1004
  DataType: 
  OrigDataType: 
T_1005: (in 0x0000 : word16)
  Class: Eq_1005
  DataType: 
  OrigDataType: 
T_1006: (in bx_81 + 0x0000 : word16)
  Class: Eq_1006
  DataType: 
  OrigDataType: 
T_1007: (in Mem109[ds:bx_81 + 0x0000:word16] : word16)
  Class: Eq_1004
  DataType: 
  OrigDataType: 
T_1008: (in ax_16 : word16)
  Class: Eq_1008
  DataType: 
  OrigDataType: 
T_1009: (in ds : selector)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_1010: (in wArg02 : word16)
  Class: Eq_1008
  DataType: 
  OrigDataType: 
T_1011: (in 0x0006 : word16)
  Class: Eq_1011
  DataType: 
  OrigDataType: 
T_1012: (in wArg02 + 0x0006 : word16)
  Class: Eq_1012
  DataType: 
  OrigDataType: 
T_1013: (in Mem0[ds:wArg02 + 0x0006:word16] : word16)
  Class: Eq_1008
  DataType: 
  OrigDataType: 
T_1014: (in 0x01E8 : word16)
  Class: Eq_1014
  DataType: 
  OrigDataType: 
T_1015: (in Mem17[ds:0x01E8:word16] : word16)
  Class: Eq_1008
  DataType: 
  OrigDataType: 
T_1016: (in ax_16 != wArg02 : bool)
  Class: Eq_1016
  DataType: 
  OrigDataType: 
T_1017: (in si_30 : word16)
  Class: Eq_1017
  DataType: 
  OrigDataType: 
T_1018: (in 0x0004 : word16)
  Class: Eq_1018
  DataType: 
  OrigDataType: 
T_1019: (in wArg02 + 0x0004 : word16)
  Class: Eq_1019
  DataType: 
  OrigDataType: 
T_1020: (in Mem17[ds:wArg02 + 0x0004:word16] : word16)
  Class: Eq_1017
  DataType: 
  OrigDataType: 
T_1021: (in 0x01E8 : word16)
  Class: Eq_1021
  DataType: 
  OrigDataType: 
T_1022: (in Mem17[ds:0x01E8:word16] : word16)
  Class: Eq_1022
  DataType: 
  OrigDataType: 
T_1023: (in 0x0004 : word16)
  Class: Eq_1023
  DataType: 
  OrigDataType: 
T_1024: (in Mem17[ds:0x01E8:word16] + 0x0004 : word16)
  Class: Eq_1024
  DataType: 
  OrigDataType: 
T_1025: (in Mem32[ds:Mem17[ds:0x01E8:word16] + 0x0004:word16] : word16)
  Class: Eq_1017
  DataType: 
  OrigDataType: 
T_1026: (in 0x01E8 : word16)
  Class: Eq_1026
  DataType: 
  OrigDataType: 
T_1027: (in Mem32[ds:0x01E8:word16] : word16)
  Class: Eq_1027
  DataType: 
  OrigDataType: 
T_1028: (in 0x0006 : word16)
  Class: Eq_1028
  DataType: 
  OrigDataType: 
T_1029: (in si_30 + 0x0006 : word16)
  Class: Eq_1029
  DataType: 
  OrigDataType: 
T_1030: (in Mem34[ds:si_30 + 0x0006:word16] : word16)
  Class: Eq_1027
  DataType: 
  OrigDataType: 
T_1031: (in 0x0000 : word16)
  Class: Eq_1031
  DataType: 
  OrigDataType: 
T_1032: (in 0x01E8 : word16)
  Class: Eq_1032
  DataType: 
  OrigDataType: 
T_1033: (in Mem28[ds:0x01E8:word16] : word16)
  Class: Eq_1031
  DataType: 
  OrigDataType: 
T_1034: (in ax : word16)
  Class: Eq_1034
  DataType: 
  OrigDataType: 
T_1035: (in ds : selector)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_1036: (in wArg02 : word16)
  Class: Eq_1036
  DataType: 
  OrigDataType: 
T_1037: (in 0x0000 : word16)
  Class: Eq_1037
  DataType: 
  OrigDataType: 
T_1038: (in wArg02 + 0x0000 : word16)
  Class: Eq_1038
  DataType: 
  OrigDataType: 
T_1039: (in Mem0[ds:wArg02 + 0x0000:word16] : word16)
  Class: Eq_1039
  DataType: 
  OrigDataType: 
T_1040: (in wArg04 : word16)
  Class: Eq_1040
  DataType: 
  OrigDataType: 
T_1041: (in Mem0[ds:wArg02 + 0x0000:word16] - wArg04 : word16)
  Class: Eq_1041
  DataType: 
  OrigDataType: 
T_1042: (in 0x0000 : word16)
  Class: Eq_1042
  DataType: 
  OrigDataType: 
T_1043: (in wArg02 + 0x0000 : word16)
  Class: Eq_1043
  DataType: 
  OrigDataType: 
T_1044: (in Mem19[ds:wArg02 + 0x0000:word16] : word16)
  Class: Eq_1041
  DataType: 
  OrigDataType: 
T_1045: (in si_21 : word16)
  Class: Eq_1045
  DataType: 
  OrigDataType: 
T_1046: (in 0x0000 : word16)
  Class: Eq_1046
  DataType: 
  OrigDataType: 
T_1047: (in wArg02 + 0x0000 : word16)
  Class: Eq_1047
  DataType: 
  OrigDataType: 
T_1048: (in Mem19[ds:wArg02 + 0x0000:word16] : word16)
  Class: Eq_1048
  DataType: 
  OrigDataType: 
T_1049: (in Mem19[ds:wArg02 + 0x0000:word16] + wArg02 : word16)
  Class: Eq_1045
  DataType: 
  OrigDataType: 
T_1050: (in 0x0001 : word16)
  Class: Eq_1050
  DataType: 
  OrigDataType: 
T_1051: (in wArg04 + 0x0001 : word16)
  Class: Eq_1051
  DataType: 
  OrigDataType: 
T_1052: (in 0x0000 : word16)
  Class: Eq_1052
  DataType: 
  OrigDataType: 
T_1053: (in si_21 + 0x0000 : word16)
  Class: Eq_1053
  DataType: 
  OrigDataType: 
T_1054: (in Mem24[ds:si_21 + 0x0000:word16] : word16)
  Class: Eq_1051
  DataType: 
  OrigDataType: 
T_1055: (in 0x0002 : word16)
  Class: Eq_1055
  DataType: 
  OrigDataType: 
T_1056: (in si_21 + 0x0002 : word16)
  Class: Eq_1056
  DataType: 
  OrigDataType: 
T_1057: (in Mem25[ds:si_21 + 0x0002:word16] : word16)
  Class: Eq_1036
  DataType: 
  OrigDataType: 
T_1058: (in 0x01E6 : word16)
  Class: Eq_1058
  DataType: 
  OrigDataType: 
T_1059: (in Mem25[ds:0x01E6:word16] : word16)
  Class: Eq_1036
  DataType: 
  OrigDataType: 
T_1060: (in Mem25[ds:0x01E6:word16] != wArg02 : bool)
  Class: Eq_1060
  DataType: 
  OrigDataType: 
T_1061: (in si_21 + wArg04 : word16)
  Class: Eq_1061
  DataType: 
  OrigDataType: 
T_1062: (in 0x0002 : word16)
  Class: Eq_1062
  DataType: 
  OrigDataType: 
T_1063: (in si_21 + wArg04 + 0x0002 : word16)
  Class: Eq_1063
  DataType: 
  OrigDataType: 
T_1064: (in Mem43[ds:si_21 + wArg04 + 0x0002:word16] : word16)
  Class: Eq_1045
  DataType: 
  OrigDataType: 
T_1065: (in 0x01E6 : word16)
  Class: Eq_1065
  DataType: 
  OrigDataType: 
T_1066: (in Mem39[ds:0x01E6:word16] : word16)
  Class: Eq_1045
  DataType: 
  OrigDataType: 
T_1067: (in 0x0004 : word16)
  Class: Eq_1067
  DataType: 
  OrigDataType: 
T_1068: (in si_21 + 0x0004 : word16)
  Class: Eq_1068
  DataType: 
  OrigDataType: 
T_1069: (in ax : word16)
  Class: Eq_1069
  DataType: 
  OrigDataType: 
T_1070: (in ax_30 : word16)
  Class: Eq_1070
  DataType: 
  OrigDataType: 
T_1071: (in ax_21 : word16)
  Class: Eq_1071
  DataType: 
  OrigDataType: 
T_1072: (in fn0800_05A6 : ptr32)
  Class: Eq_1072
  DataType: 
  OrigDataType: 
T_1073: (in signature of fn0800_05A6 : void)
  Class: Eq_1072
  DataType: 
  OrigDataType: 
T_1074: (in ds : selector)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_1075: (in wArg02 : word16)
  Class: Eq_1075
  DataType: 
  OrigDataType: 
T_1076: (in wArg04 : word16)
  Class: Eq_1076
  DataType: 
  OrigDataType: 
T_1077: (in ds : selector)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_1078: (in wArg02 : word16)
  Class: Eq_1078
  DataType: 
  OrigDataType: 
T_1079: (in 0xFFFF : word16)
  Class: Eq_1079
  DataType: 
  OrigDataType: 
T_1080: (in wArg02 & 0xFFFF : word16)
  Class: Eq_1075
  DataType: 
  OrigDataType: 
T_1081: (in 0x0000 : word16)
  Class: Eq_1076
  DataType: 
  OrigDataType: 
T_1082: (in fn0800_05A6(ds, wArg02 & 0xFFFF, 0x0000) : word16)
  Class: Eq_1071
  DataType: 
  OrigDataType: 
T_1083: (in 0xFFFF : word16)
  Class: Eq_1071
  DataType: 
  OrigDataType: 
T_1084: (in ax_21 != 0xFFFF : bool)
  Class: Eq_1084
  DataType: 
  OrigDataType: 
T_1085: (in 0x01E6 : word16)
  Class: Eq_1085
  DataType: 
  OrigDataType: 
T_1086: (in Mem0[ds:0x01E6:word16] : word16)
  Class: Eq_1086
  DataType: 
  OrigDataType: 
T_1087: (in 0x0002 : word16)
  Class: Eq_1087
  DataType: 
  OrigDataType: 
T_1088: (in ax_21 + 0x0002 : word16)
  Class: Eq_1088
  DataType: 
  OrigDataType: 
T_1089: (in Mem42[ds:ax_21 + 0x0002:word16] : word16)
  Class: Eq_1086
  DataType: 
  OrigDataType: 
T_1090: (in 0x0001 : word16)
  Class: Eq_1090
  DataType: 
  OrigDataType: 
T_1091: (in wArg02 + 0x0001 : word16)
  Class: Eq_1091
  DataType: 
  OrigDataType: 
T_1092: (in 0x0000 : word16)
  Class: Eq_1092
  DataType: 
  OrigDataType: 
T_1093: (in ax_21 + 0x0000 : word16)
  Class: Eq_1093
  DataType: 
  OrigDataType: 
T_1094: (in Mem45[ds:ax_21 + 0x0000:word16] : word16)
  Class: Eq_1091
  DataType: 
  OrigDataType: 
T_1095: (in 0x01E6 : word16)
  Class: Eq_1095
  DataType: 
  OrigDataType: 
T_1096: (in Mem46[ds:0x01E6:word16] : word16)
  Class: Eq_1071
  DataType: 
  OrigDataType: 
T_1097: (in 0x01E6 : word16)
  Class: Eq_1097
  DataType: 
  OrigDataType: 
T_1098: (in Mem46[ds:0x01E6:word16] : word16)
  Class: Eq_1098
  DataType: 
  OrigDataType: 
T_1099: (in 0x0004 : word16)
  Class: Eq_1099
  DataType: 
  OrigDataType: 
T_1100: (in Mem46[ds:0x01E6:word16] + 0x0004 : word16)
  Class: Eq_1070
  DataType: 
  OrigDataType: 
T_1101: (in 0x0000 : word16)
  Class: Eq_1070
  DataType: 
  OrigDataType: 
T_1102: (in ax : word16)
  Class: Eq_1102
  DataType: 
  OrigDataType: 
T_1103: (in ax_30 : word16)
  Class: Eq_1103
  DataType: 
  OrigDataType: 
T_1104: (in ax_21 : word16)
  Class: Eq_1104
  DataType: 
  OrigDataType: 
T_1105: (in fn0800_05A6 : ptr32)
  Class: Eq_1072
  DataType: 
  OrigDataType: 
T_1106: (in ds : selector)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_1107: (in wArg02 : word16)
  Class: Eq_1107
  DataType: 
  OrigDataType: 
T_1108: (in 0xFFFF : word16)
  Class: Eq_1108
  DataType: 
  OrigDataType: 
T_1109: (in wArg02 & 0xFFFF : word16)
  Class: Eq_1075
  DataType: 
  OrigDataType: 
T_1110: (in 0x0000 : word16)
  Class: Eq_1076
  DataType: 
  OrigDataType: 
T_1111: (in fn0800_05A6(ds, wArg02 & 0xFFFF, 0x0000) : word16)
  Class: Eq_1104
  DataType: 
  OrigDataType: 
T_1112: (in 0xFFFF : word16)
  Class: Eq_1104
  DataType: 
  OrigDataType: 
T_1113: (in ax_21 != 0xFFFF : bool)
  Class: Eq_1113
  DataType: 
  OrigDataType: 
T_1114: (in 0x01EA : word16)
  Class: Eq_1114
  DataType: 
  OrigDataType: 
T_1115: (in Mem40[ds:0x01EA:word16] : word16)
  Class: Eq_1104
  DataType: 
  OrigDataType: 
T_1116: (in 0x01E6 : word16)
  Class: Eq_1116
  DataType: 
  OrigDataType: 
T_1117: (in Mem41[ds:0x01E6:word16] : word16)
  Class: Eq_1104
  DataType: 
  OrigDataType: 
T_1118: (in 0x0001 : word16)
  Class: Eq_1118
  DataType: 
  OrigDataType: 
T_1119: (in wArg02 + 0x0001 : word16)
  Class: Eq_1119
  DataType: 
  OrigDataType: 
T_1120: (in 0x0000 : word16)
  Class: Eq_1120
  DataType: 
  OrigDataType: 
T_1121: (in ax_21 + 0x0000 : word16)
  Class: Eq_1121
  DataType: 
  OrigDataType: 
T_1122: (in Mem44[ds:ax_21 + 0x0000:word16] : word16)
  Class: Eq_1119
  DataType: 
  OrigDataType: 
T_1123: (in 0x0004 : word16)
  Class: Eq_1123
  DataType: 
  OrigDataType: 
T_1124: (in ax_21 + 0x0004 : word16)
  Class: Eq_1103
  DataType: 
  OrigDataType: 
T_1125: (in 0x0000 : word16)
  Class: Eq_1103
  DataType: 
  OrigDataType: 
T_1126: (in ax : word16)
  Class: Eq_1126
  DataType: 
  OrigDataType: 
T_1127: (in ax_107 : word16)
  Class: Eq_1127
  DataType: 
  OrigDataType: 
T_1128: (in wArg02 : word16)
  Class: Eq_1128
  DataType: 
  OrigDataType: 
T_1129: (in 0x0000 : word16)
  Class: Eq_1128
  DataType: 
  OrigDataType: 
T_1130: (in wArg02 == 0x0000 : bool)
  Class: Eq_1130
  DataType: 
  OrigDataType: 
T_1131: (in 0x0000 : word16)
  Class: Eq_1127
  DataType: 
  OrigDataType: 
T_1132: (in 0xFFF4 : word16)
  Class: Eq_1128
  DataType: 
  OrigDataType: 
T_1133: (in wArg02 <=u 0xFFF4 : bool)
  Class: Eq_1133
  DataType: 
  OrigDataType: 
T_1134: (in ax_49 : word16)
  Class: Eq_1134
  DataType: 
  OrigDataType: 
T_1135: (in 0x000B : word16)
  Class: Eq_1135
  DataType: 
  OrigDataType: 
T_1136: (in wArg02 + 0x000B : word16)
  Class: Eq_1136
  DataType: 
  OrigDataType: 
T_1137: (in 0xFFF8 : word16)
  Class: Eq_1137
  DataType: 
  OrigDataType: 
T_1138: (in wArg02 + 0x000B & 0xFFF8 : word16)
  Class: Eq_1134
  DataType: 
  OrigDataType: 
T_1139: (in 0x01EA : word16)
  Class: Eq_1139
  DataType: 
  OrigDataType: 
T_1140: (in Mem0[ds:0x01EA:word16] : word16)
  Class: Eq_1140
  DataType: 
  OrigDataType: 
T_1141: (in 0x0000 : word16)
  Class: Eq_1140
  DataType: 
  OrigDataType: 
T_1142: (in Mem0[ds:0x01EA:word16] != 0x0000 : bool)
  Class: Eq_1142
  DataType: 
  OrigDataType: 
T_1143: (in si_109 : word16)
  Class: Eq_1143
  DataType: 
  OrigDataType: 
T_1144: (in 0x01E8 : word16)
  Class: Eq_1144
  DataType: 
  OrigDataType: 
T_1145: (in Mem0[ds:0x01E8:word16] : word16)
  Class: Eq_1143
  DataType: 
  OrigDataType: 
T_1146: (in 0x0000 : word16)
  Class: Eq_1143
  DataType: 
  OrigDataType: 
T_1147: (in si_109 == 0x0000 : bool)
  Class: Eq_1147
  DataType: 
  OrigDataType: 
T_1148: (in fn0800_04D5 : ptr32)
  Class: Eq_1148
  DataType: 
  OrigDataType: 
T_1149: (in signature of fn0800_04D5 : void)
  Class: Eq_1148
  DataType: 
  OrigDataType: 
T_1150: (in wArg02 : word16)
  Class: Eq_1134
  DataType: 
  OrigDataType: 
T_1151: (in fn0800_04D5(ds, ax_49) : word16)
  Class: Eq_1127
  DataType: 
  OrigDataType: 
T_1152: (in fn0800_0498 : ptr32)
  Class: Eq_1152
  DataType: 
  OrigDataType: 
T_1153: (in signature of fn0800_0498 : void)
  Class: Eq_1152
  DataType: 
  OrigDataType: 
T_1154: (in wArg02 : word16)
  Class: Eq_1134
  DataType: 
  OrigDataType: 
T_1155: (in fn0800_0498(ds, ax_49) : word16)
  Class: Eq_1155
  DataType: 
  OrigDataType: 
T_1156: (in fn0800_0498 : ptr32)
  Class: Eq_1152
  DataType: 
  OrigDataType: 
T_1157: (in fn0800_0498(ds, ax_49) : word16)
  Class: Eq_1127
  DataType: 
  OrigDataType: 
T_1158: (in 0x0000 : word16)
  Class: Eq_1158
  DataType: 
  OrigDataType: 
T_1159: (in si_109 + 0x0000 : word16)
  Class: Eq_1159
  DataType: 
  OrigDataType: 
T_1160: (in Mem0[ds:si_109 + 0x0000:word16] : word16)
  Class: Eq_1160
  DataType: 
  OrigDataType: 
T_1161: (in 0x0028 : word16)
  Class: Eq_1161
  DataType: 
  OrigDataType: 
T_1162: (in ax_49 + 0x0028 : word16)
  Class: Eq_1160
  DataType: 
  OrigDataType: 
T_1163: (in Mem0[ds:si_109 + 0x0000:word16] <u ax_49 + 0x0028 : bool)
  Class: Eq_1163
  DataType: 
  OrigDataType: 
T_1164: (in 0x0000 : word16)
  Class: Eq_1164
  DataType: 
  OrigDataType: 
T_1165: (in si_109 + 0x0000 : word16)
  Class: Eq_1165
  DataType: 
  OrigDataType: 
T_1166: (in Mem0[ds:si_109 + 0x0000:word16] : word16)
  Class: Eq_1134
  DataType: 
  OrigDataType: 
T_1167: (in Mem0[ds:si_109 + 0x0000:word16] <u ax_49 : bool)
  Class: Eq_1167
  DataType: 
  OrigDataType: 
T_1168: (in fn0800_045E : ptr32)
  Class: Eq_1168
  DataType: 
  OrigDataType: 
T_1169: (in signature of fn0800_045E : void)
  Class: Eq_1168
  DataType: 
  OrigDataType: 
T_1170: (in wArg02 : word16)
  Class: Eq_1143
  DataType: 
  OrigDataType: 
T_1171: (in wArg04 : word16)
  Class: Eq_1134
  DataType: 
  OrigDataType: 
T_1172: (in fn0800_045E(ds, si_109, ax_49) : word16)
  Class: Eq_1127
  DataType: 
  OrigDataType: 
T_1173: (in 0x0006 : word16)
  Class: Eq_1173
  DataType: 
  OrigDataType: 
T_1174: (in si_109 + 0x0006 : word16)
  Class: Eq_1174
  DataType: 
  OrigDataType: 
T_1175: (in Mem0[ds:si_109 + 0x0006:word16] : word16)
  Class: Eq_1143
  DataType: 
  OrigDataType: 
T_1176: (in 0x01E8 : word16)
  Class: Eq_1176
  DataType: 
  OrigDataType: 
T_1177: (in Mem0[ds:0x01E8:word16] : word16)
  Class: Eq_1143
  DataType: 
  OrigDataType: 
T_1178: (in si_109 != Mem0[ds:0x01E8:word16] : bool)
  Class: Eq_1178
  DataType: 
  OrigDataType: 
T_1179: (in fn0800_0430 : ptr32)
  Class: Eq_1179
  DataType: 
  OrigDataType: 
T_1180: (in signature of fn0800_0430 : void)
  Class: Eq_1179
  DataType: 
  OrigDataType: 
T_1181: (in wArg02 : word16)
  Class: Eq_1143
  DataType: 
  OrigDataType: 
T_1182: (in fn0800_0430(ds, si_109) : void)
  Class: Eq_1182
  DataType: 
  OrigDataType: 
T_1183: (in 0x0000 : word16)
  Class: Eq_1183
  DataType: 
  OrigDataType: 
T_1184: (in si_109 + 0x0000 : word16)
  Class: Eq_1184
  DataType: 
  OrigDataType: 
T_1185: (in Mem0[ds:si_109 + 0x0000:word16] : word16)
  Class: Eq_1185
  DataType: 
  OrigDataType: 
T_1186: (in 0x0001 : word16)
  Class: Eq_1186
  DataType: 
  OrigDataType: 
T_1187: (in Mem0[ds:si_109 + 0x0000:word16] + 0x0001 : word16)
  Class: Eq_1187
  DataType: 
  OrigDataType: 
T_1188: (in 0x0000 : word16)
  Class: Eq_1188
  DataType: 
  OrigDataType: 
T_1189: (in si_109 + 0x0000 : word16)
  Class: Eq_1189
  DataType: 
  OrigDataType: 
T_1190: (in Mem105[ds:si_109 + 0x0000:word16] : word16)
  Class: Eq_1187
  DataType: 
  OrigDataType: 
T_1191: (in 0x0004 : word16)
  Class: Eq_1191
  DataType: 
  OrigDataType: 
T_1192: (in si_109 + 0x0004 : word16)
  Class: Eq_1127
  DataType: 
  OrigDataType: 
T_1193: (in ax : word16)
  Class: Eq_1193
  DataType: 
  OrigDataType: 
T_1194: (in ax_31 : word16)
  Class: Eq_1194
  DataType: 
  OrigDataType: 
T_1195: (in ax_12 : word16)
  Class: Eq_1195
  DataType: 
  OrigDataType: 
T_1196: (in wArg02 : word16)
  Class: Eq_1196
  DataType: 
  OrigDataType: 
T_1197: (in 0x009E : word16)
  Class: Eq_1197
  DataType: 
  OrigDataType: 
T_1198: (in Mem0[ds:0x009E:word16] : word16)
  Class: Eq_1198
  DataType: 
  OrigDataType: 
T_1199: (in wArg02 + Mem0[ds:0x009E:word16] : word16)
  Class: Eq_1195
  DataType: 
  OrigDataType: 
T_1200: (in dx_cx_18 : ui32)
  Class: Eq_1200
  DataType: 
  OrigDataType: 
T_1201: (in wArg04 : word16)
  Class: Eq_1201
  DataType: 
  OrigDataType: 
T_1202: (in 0x0000 : word16)
  Class: Eq_1195
  DataType: 
  OrigDataType: 
T_1203: (in ax_12 <u 0x0000 : bool)
  Class: Eq_1203
  DataType: 
  OrigDataType: 
T_1204: (in wArg04 + (ax_12 <u 0x0000) : word16)
  Class: Eq_1204
  DataType: 
  OrigDataType: 
T_1205: (in 0x0100 : word16)
  Class: Eq_1205
  DataType: 
  OrigDataType: 
T_1206: (in ax_12 + 0x0100 : word16)
  Class: Eq_1206
  DataType: 
  OrigDataType: 
T_1207: (in SEQ(wArg04 + (ax_12 <u 0x0000), ax_12 + 0x0100) : ui32)
  Class: Eq_1200
  DataType: 
  OrigDataType: 
T_1208: (in cx_22 : word16)
  Class: Eq_1208
  DataType: 
  OrigDataType: 
T_1209: (in 0x00000100 : ui32)
  Class: Eq_1209
  DataType: 
  OrigDataType: 
T_1210: (in dx_cx_18 + 0x00000100 : ui32)
  Class: Eq_1210
  DataType: 
  OrigDataType: 
T_1211: (in (word16) (dx_cx_18 + 0x00000100) : word16)
  Class: Eq_1208
  DataType: 
  OrigDataType: 
T_1212: (in dx_cx_18 + 0x00000100 : ui32)
  Class: Eq_1212
  DataType: 
  OrigDataType: 
T_1213: (in SLICE(dx_cx_18 + 0x00000100, word16, 16) : word16)
  Class: Eq_1213
  DataType: 
  OrigDataType: 
T_1214: (in SEQ(SLICE(dx_cx_18 + 0x00000100, word16, 16), cx_22) : ui32)
  Class: Eq_1214
  DataType: 
  OrigDataType: 
T_1215: (in 0x00000000 : ui32)
  Class: Eq_1214
  DataType: 
  OrigDataType: 
T_1216: (in SEQ(SLICE(dx_cx_18 + 0x00000100, word16, 16), cx_22) != 0x00000000 : bool)
  Class: Eq_1216
  DataType: 
  OrigDataType: 
T_1217: (in 0x0008 : word16)
  Class: Eq_1217
  DataType: 
  OrigDataType: 
T_1218: (in 0x0094 : word16)
  Class: Eq_1218
  DataType: 
  OrigDataType: 
T_1219: (in Mem37[ds:0x0094:word16] : word16)
  Class: Eq_1217
  DataType: 
  OrigDataType: 
T_1220: (in 0xFFFF : word16)
  Class: Eq_1194
  DataType: 
  OrigDataType: 
T_1221: (in fp : ptr16)
  Class: Eq_1221
  DataType: 
  OrigDataType: 
T_1222: (in 0x0002 : word16)
  Class: Eq_1222
  DataType: 
  OrigDataType: 
T_1223: (in fp - 0x0002 : word16)
  Class: Eq_1208
  DataType: 
  OrigDataType: 
T_1224: (in cx_22 >=u fp - 0x0002 : bool)
  Class: Eq_1224
  DataType: 
  OrigDataType: 
T_1225: (in v13_42 : word16)
  Class: Eq_1194
  DataType: 
  OrigDataType: 
T_1226: (in 0x009E : word16)
  Class: Eq_1226
  DataType: 
  OrigDataType: 
T_1227: (in Mem0[ds:0x009E:word16] : word16)
  Class: Eq_1194
  DataType: 
  OrigDataType: 
T_1228: (in Mem43[ds:0x009E:word16] : word16)
  Class: Eq_1195
  DataType: 
  OrigDataType: 
T_1229:
  Class: Eq_1229
  DataType: 
  OrigDataType: (struct 0001 (0 T_352 t0000))
*/
