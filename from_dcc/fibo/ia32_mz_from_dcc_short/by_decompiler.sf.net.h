// subject.h
// Generated on TIMESTAMP by decompiling from_dcc/fibo/ia32_mz_from_dcc_short/subject.exe
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
  DataType: (union (uint16 u0) ((memptr T_28 (struct (0 T_2 t0000))) u1) ((memptr T_31 (struct (0 T_314 t0000))) u2) ((union (ptr16 u0) ((memptr T_31 (struct (0 T_98 t0000) (2 T_63 t0002))) u1)) u3))
  OrigDataType: (union (uint16 u0) ((memptr T_28 (struct (0 T_2 t0000))) u1) ((memptr T_31 (struct (0 T_314 t0000))) u2) ((union (ptr16 u0) ((memptr T_31 (struct (0 T_98 t0000) (2 T_63 t0002))) u1)) u3))
T_4: (in 0x09D8 : word16)
  Class: Eq_4
  DataType: word16
  OrigDataType: word16
T_5: (in dx : word16)
  Class: Eq_4
  DataType: (ptr (segment (8A T_47 t008A) (8C T_35 t008C) (8E T_143 t008E) (90 T_33 t0090) (92 T_30 t0092) (96 T_38 t0096) (AC T_37 t00AC)))
  OrigDataType: (ptr (segment (8A T_47 t008A) (8C T_35 t008C) (8E T_143 t008E) (90 T_33 t0090) (92 T_30 t0092) (96 T_38 t0096) (AC T_37 t00AC)))
T_6: (in 0x09D8 : word16)
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
  DataType: (ptr (segment (2 T_22 t0002) (2C T_25 t002C) (84 T_291 t0084) (86 T_284 t0086) (88 T_277 t0088) (98 T_268 t0098) (9A T_270 t009A) (5DC T_240 t05DC) (5E0 T_272 t05E0)))
  OrigDataType: (ptr (segment (2 T_22 t0002) (2C T_25 t002C) (84 T_291 t0084) (86 T_284 t0086) (88 T_277 t0088) (98 T_268 t0098) (9A T_270 t009A) (5DC T_240 t05DC) (5E0 T_272 t05E0)))
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
  DataType: (union (uint16 u0) ((memptr T_28 (struct (0 T_2 t0000))) u1) ((memptr T_31 (struct (0 T_314 t0000))) u2) ((union (ptr16 u0) ((memptr T_31 (struct (0 T_98 t0000) (2 T_63 t0002))) u1)) u3))
  OrigDataType: (union (uint16 u0) ((memptr T_28 (struct (0 T_2 t0000))) u1) ((memptr T_31 (struct (0 T_314 t0000))) u2) ((union (ptr16 u0) ((memptr T_31 (struct (0 T_98 t0000) (2 T_63 t0002))) u1)) u3))
T_27: (in 0x09D8 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_28: (in 0x09D8 : selector)
  Class: Eq_4
  DataType: (ptr (segment (8A T_47 t008A) (8C T_35 t008C) (8E T_143 t008E) (90 T_2 t0090) (92 T_30 t0092) (96 T_38 t0096) (A4 T_200 t00A4) (A8 T_202 t00A8) (AC T_37 t00AC) (23C T_164 t023C) (23E T_2 t023E)))
  OrigDataType: (ptr (segment (8A T_47 t008A) (8C T_35 t008C) (8E T_143 t008E) (90 T_2 t0090) (92 T_30 t0092) (96 T_38 t0096) (A4 T_200 t00A4) (A8 T_202 t00A8) (AC T_37 t00AC) (23C T_164 t023C) (23E T_2 t023E)))
T_29: (in 0x0092 : word16)
  Class: Eq_29
  DataType: (memptr T_28 (struct (0 T_30 t0000)))
  OrigDataType: (memptr T_28 (struct (0 T_30 t0000)))
T_30: (in Mem0[0x09D8:0x0092:word16] : word16)
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
T_33: (in Mem0[0x09D8:0x0090:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_34: (in 0x008C : word16)
  Class: Eq_34
  DataType: (memptr T_28 (struct (0 T_35 t0000)))
  OrigDataType: (memptr T_28 (struct (0 T_35 t0000)))
T_35: (in Mem0[0x09D8:0x008C:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_36: (in 0x00AC : word16)
  Class: Eq_36
  DataType: (memptr T_28 (struct (0 T_37 t0000)))
  OrigDataType: (memptr T_28 (struct (0 T_37 t0000)))
T_37: (in Mem0[0x09D8:0x00AC:word16] : word16)
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
T_40: (in Mem0[0x09D8:0x0096:word16] : word16)
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
  DataType: (ptr (segment (74 T_388 t0074) (76 T_391 t0076) (78 T_397 t0078) (7A T_400 t007A) (7C T_406 t007C) (7E T_409 t007E) (80 T_415 t0080) (82 T_418 t0082)))
  OrigDataType: (ptr (segment (74 T_388 t0074) (76 T_391 t0076) (78 T_397 t0078) (7A T_400 t007A) (7C T_406 t007C) (7E T_409 t007E) (80 T_415 t0080) (82 T_418 t0082)))
T_45: (in fn0800_0162(al, ds) : void)
  Class: Eq_45
  DataType: void
  OrigDataType: void
T_46: (in 0x008A : word16)
  Class: Eq_46
  DataType: (memptr T_28 (struct (0 T_47 t0000)))
  OrigDataType: (memptr T_28 (struct (0 T_47 t0000)))
T_47: (in Mem0[0x09D8:0x008A:segptr32] : segptr32)
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
  DataType: (union (uint16 u0) ((memptr T_28 (struct (0 T_2 t0000))) u1) ((memptr T_31 (struct (0 T_314 t0000))) u2) ((union (ptr16 u0) ((memptr T_31 (struct (0 T_98 t0000) (2 T_63 t0002))) u1)) u3))
  OrigDataType: (union (uint16 u0) ((memptr T_28 (struct (0 T_2 t0000))) u1) ((memptr T_31 (struct (0 T_314 t0000))) u2) ((union (ptr16 u0) ((memptr T_31 (struct (0 T_98 t0000) (2 T_63 t0002))) u1)) u3))
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
T_77: (in Mem0[0x09D8:0x0096:word16] : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_78: (in 0x0001 : word16)
  Class: Eq_78
  DataType: word16
  OrigDataType: word16
T_79: (in Mem0[0x09D8:0x0096:word16] + 0x0001 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_80: (in v20 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_81: (in Mem0[0x09D8:0x0096:word16] : word16)
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
T_87: (in Mem0[0x09D8:0x0096:word16] : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_88: (in 0x0001 : word16)
  Class: Eq_88
  DataType: word16
  OrigDataType: word16
T_89: (in Mem0[0x09D8:0x0096:word16] + 0x0001 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_90: (in v21 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_91: (in Mem0[0x09D8:0x0096:word16] : word16)
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
T_134: (in Mem0[0x09D8:0x008A:word16] : word16)
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
T_143: (in Mem0[0x09D8:0x008E:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_144: (in bp - 0x09D8 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_145: (in 0x023E : word16)
  Class: Eq_145
  DataType: (memptr T_28 (struct (0 T_146 t0000)))
  OrigDataType: (memptr T_28 (struct (0 T_146 t0000)))
T_146: (in Mem0[0x09D8:0x023E:word16] : word16)
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
T_162: (in Mem0[0x09D8:0x023E:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_163: (in 0x023C : word16)
  Class: Eq_163
  DataType: (memptr T_28 (struct (0 T_164 t0000)))
  OrigDataType: (memptr T_28 (struct (0 T_164 t0000)))
T_164: (in Mem0[0x09D8:0x023C:word16] : word16)
  Class: Eq_164
  DataType: word16
  OrigDataType: word16
T_165: (in di + Mem0[0x09D8:0x023C:word16] : word16)
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
T_179: (in Mem0[0x09D8:0x023E:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_180: (in 0x0000 : word16)
  Class: Eq_180
  DataType: word16
  OrigDataType: word16
T_181: (in Mem0[0x09D8:0x023E:word16] - 0x0000 : word16)
  Class: Eq_181
  DataType: word16
  OrigDataType: word16
T_182: (in cond(Mem0[0x09D8:0x023E:word16] - 0x0000) : byte)
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
T_192: (in Mem0[0x09D8:0x023C:word16] : word16)
  Class: Eq_164
  DataType: word16
  OrigDataType: word16
T_193: (in 0x0000 : word16)
  Class: Eq_193
  DataType: word16
  OrigDataType: word16
T_194: (in Mem0[0x09D8:0x023C:word16] - 0x0000 : word16)
  Class: Eq_194
  DataType: word16
  OrigDataType: word16
T_195: (in cond(Mem0[0x09D8:0x023C:word16] - 0x0000) : byte)
  Class: Eq_70
  DataType: byte
  OrigDataType: byte
T_196: (in Test(NE,Z) : bool)
  Class: Eq_196
  DataType: bool
  OrigDataType: bool
T_197: (in 0x09D8 : word16)
  Class: Eq_197
  DataType: word16
  OrigDataType: word16
T_198: (in bx + 0x09D8 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_199: (in 0x00A4 : word16)
  Class: Eq_199
  DataType: (memptr T_28 (struct (0 T_200 t0000)))
  OrigDataType: (memptr T_28 (struct (0 T_200 t0000)))
T_200: (in Mem0[0x09D8:0x00A4:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_201: (in 0x00A8 : word16)
  Class: Eq_201
  DataType: (memptr T_28 (struct (0 T_202 t0000)))
  OrigDataType: (memptr T_28 (struct (0 T_202 t0000)))
T_202: (in Mem0[0x09D8:0x00A8:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_203: (in 0x0090 : word16)
  Class: Eq_203
  DataType: (memptr T_28 (struct (0 T_204 t0000)))
  OrigDataType: (memptr T_28 (struct (0 T_204 t0000)))
T_204: (in Mem0[0x09D8:0x0090:word16] : word16)
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
  DataType: (union (uint16 u0) ((memptr T_28 (struct (0 T_2 t0000))) u1) ((memptr T_31 (struct (0 T_314 t0000))) u2) ((union (ptr16 u0) ((memptr T_31 (struct (0 T_98 t0000) (2 T_63 t0002))) u1)) u3))
  OrigDataType: (union (uint16 u0) ((memptr T_28 (struct (0 T_2 t0000))) u1) ((memptr T_31 (struct (0 T_314 t0000))) u2) ((union (ptr16 u0) ((memptr T_31 (struct (0 T_98 t0000) (2 T_63 t0002))) u1)) u3))
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
  DataType: (ptr (union (uint16 u0) ((memptr T_28 (struct (0 T_2 t0000))) u1) ((memptr T_31 (struct (0 T_314 t0000))) u2) ((union (ptr16 u0) ((memptr T_31 (struct (0 T_98 t0000) (2 T_63 t0002))) u1)) u3)))
  OrigDataType: (ptr (union (uint16 u0) ((memptr T_28 (struct (0 T_2 t0000))) u1) ((memptr T_31 (struct (0 T_314 t0000))) u2) ((union (ptr16 u0) ((memptr T_31 (struct (0 T_98 t0000) (2 T_63 t0002))) u1)) u3)))
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
T_221: (in 0x09D8 : word16)
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
T_242: (in fn0800_02FC : ptr32)
  Class: Eq_242
  DataType: (ptr (fn T_248 (T_20, T_209, T_247)))
  OrigDataType: (ptr (fn T_248 (T_20, T_209, T_247)))
T_243: (in signature of fn0800_02FC : void)
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
T_248: (in fn0800_02FC(ds, wLoc02, out ds) : word16)
  Class: Eq_111
  DataType: word16
  OrigDataType: word16
T_249: (in fn0800_03E7 : ptr32)
  Class: Eq_249
  DataType: (ptr (fn T_257 (T_112, T_20, T_255, T_256)))
  OrigDataType: (ptr (fn T_257 (T_112, T_20, T_255, T_256)))
T_250: (in signature of fn0800_03E7 : void)
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
T_254: (in alOut : ptr16)
  Class: Eq_254
  DataType: ptr16
  OrigDataType: ptr16
T_255: (in out di : ptr16)
  Class: Eq_253
  DataType: (ptr (union (uint16 u0) ((memptr T_28 (struct (0 T_2 t0000))) u1) ((memptr T_31 (struct (0 T_314 t0000))) u2) ((union (ptr16 u0) ((memptr T_31 (struct (0 T_98 t0000) (2 T_63 t0002))) u1)) u3)))
  OrigDataType: (ptr (union (uint16 u0) ((memptr T_28 (struct (0 T_2 t0000))) u1) ((memptr T_31 (struct (0 T_314 t0000))) u2) ((union (ptr16 u0) ((memptr T_31 (struct (0 T_98 t0000) (2 T_63 t0002))) u1)) u3)))
T_256: (in out al : ptr16)
  Class: Eq_254
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_257: (in fn0800_03E7(si, ds, out di, out al) : word16)
  Class: Eq_111
  DataType: word16
  OrigDataType: word16
T_258: (in 0x0002 : word16)
  Class: Eq_258
  DataType: word16
  OrigDataType: word16
T_259: (in sp + 0x0002 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_260: (in 0x00 : byte)
  Class: Eq_10
  DataType: byte
  OrigDataType: byte
T_261: (in DPB(ax, ah, 8, 8) : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_262: (in bios_get_system_time : ptr32)
  Class: Eq_262
  DataType: (ptr (fn T_266 (T_265)))
  OrigDataType: (ptr (fn T_266 (T_265)))
T_263: (in signature of bios_get_system_time : void)
  Class: Eq_262
  DataType: 
  OrigDataType: 
T_264: (in dxOut : ptr16)
  Class: Eq_264
  DataType: ptr16
  OrigDataType: ptr16
T_265: (in out dx : ptr16)
  Class: Eq_264
  DataType: (ptr (ptr (segment (8A T_47 t008A) (8C T_35 t008C) (8E T_143 t008E) (90 T_33 t0090) (92 T_30 t0092) (96 T_38 t0096) (AC T_37 t00AC))))
  OrigDataType: (ptr (ptr (segment (8A T_47 t008A) (8C T_35 t008C) (8E T_143 t008E) (90 T_33 t0090) (92 T_30 t0092) (96 T_38 t0096) (AC T_37 t00AC))))
T_266: (in bios_get_system_time(out dx) : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_267: (in 0x0098 : word16)
  Class: Eq_267
  DataType: (memptr T_20 (struct (0 T_268 t0000)))
  OrigDataType: (memptr T_20 (struct (0 T_268 t0000)))
T_268: (in Mem0[ds:0x0098:word16] : word16)
  Class: Eq_4
  DataType: word16
  OrigDataType: word16
T_269: (in 0x009A : word16)
  Class: Eq_269
  DataType: (memptr T_20 (struct (0 T_270 t0000)))
  OrigDataType: (memptr T_20 (struct (0 T_270 t0000)))
T_270: (in Mem0[ds:0x009A:word16] : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_271: (in 0x05E0 : word16)
  Class: Eq_271
  DataType: (memptr T_20 (struct (0 T_272 t0000)))
  OrigDataType: (memptr T_20 (struct (0 T_272 t0000)))
T_272: (in Mem0[ds:0x05E0:word16] : word16)
  Class: Eq_272
  DataType: word16
  OrigDataType: word16
T_273: (in SEQ(cs, Mem0[ds:0x05E0:word16]) : ptr32)
  Class: Eq_273
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_274: (in 0x0002 : word16)
  Class: Eq_274
  DataType: word16
  OrigDataType: word16
T_275: (in sp - 0x0002 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_276: (in 0x0088 : word16)
  Class: Eq_276
  DataType: (memptr T_20 (struct (0 T_277 t0000)))
  OrigDataType: (memptr T_20 (struct (0 T_277 t0000)))
T_277: (in Mem0[ds:0x0088:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_278: (in 0x0000 : word16)
  Class: Eq_278
  DataType: word16
  OrigDataType: word16
T_279: (in sp + 0x0000 : word16)
  Class: Eq_279
  DataType: word16
  OrigDataType: word16
T_280: (in Mem0[0x09D8:sp + 0x0000:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_281: (in 0x0002 : word16)
  Class: Eq_281
  DataType: word16
  OrigDataType: word16
T_282: (in sp - 0x0002 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_283: (in 0x0086 : word16)
  Class: Eq_283
  DataType: (memptr T_20 (struct (0 T_284 t0000)))
  OrigDataType: (memptr T_20 (struct (0 T_284 t0000)))
T_284: (in Mem0[ds:0x0086:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_285: (in 0x0000 : word16)
  Class: Eq_285
  DataType: word16
  OrigDataType: word16
T_286: (in sp + 0x0000 : word16)
  Class: Eq_286
  DataType: word16
  OrigDataType: word16
T_287: (in Mem0[0x09D8:sp + 0x0000:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_288: (in 0x0002 : word16)
  Class: Eq_288
  DataType: word16
  OrigDataType: word16
T_289: (in sp - 0x0002 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_290: (in 0x0084 : word16)
  Class: Eq_290
  DataType: (memptr T_20 (struct (0 T_291 t0000)))
  OrigDataType: (memptr T_20 (struct (0 T_291 t0000)))
T_291: (in Mem0[ds:0x0084:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_292: (in 0x0000 : word16)
  Class: Eq_292
  DataType: word16
  OrigDataType: word16
T_293: (in sp + 0x0000 : word16)
  Class: Eq_293
  DataType: word16
  OrigDataType: word16
T_294: (in Mem0[0x09D8:sp + 0x0000:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_295: (in fn0800_01FA : ptr32)
  Class: Eq_295
  DataType: (ptr (fn T_300 (T_112, T_51, T_20)))
  OrigDataType: (ptr (fn T_300 (T_112, T_51, T_20)))
T_296: (in signature of fn0800_01FA : void)
  Class: Eq_295
  DataType: 
  OrigDataType: 
T_297: (in si : word16)
  Class: Eq_111
  DataType: word16
  OrigDataType: word16
T_298: (in di : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_299: (in ds : selector)
  Class: Eq_2
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_300: (in fn0800_01FA(si, di, ds) : void)
  Class: Eq_300
  DataType: void
  OrigDataType: void
T_301: (in 0x0002 : word16)
  Class: Eq_301
  DataType: word16
  OrigDataType: word16
T_302: (in sp - 0x0002 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_303: (in 0x0000 : word16)
  Class: Eq_303
  DataType: word16
  OrigDataType: word16
T_304: (in sp + 0x0000 : word16)
  Class: Eq_304
  DataType: word16
  OrigDataType: word16
T_305: (in Mem0[0x09D8:sp + 0x0000:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_306: (in fn0800_02C7 : ptr32)
  Class: Eq_306
  DataType: (ptr (fn T_311 (T_20, T_310)))
  OrigDataType: (ptr (fn T_311 (T_20, T_310)))
T_307: (in signature of fn0800_02C7 : void)
  Class: Eq_306
  DataType: 
  OrigDataType: 
T_308: (in ds : selector)
  Class: Eq_2
  DataType: (ptr (segment (236 T_606 t0236) (238 T_609 t0238) (23A T_612 t023A) (240 T_583 t0240) (5EA (arr T_1499) a05EA)))
  OrigDataType: (ptr (segment (236 T_606 t0236) (238 T_609 t0238) (23A T_612 t023A) (240 T_583 t0240) (5EA (arr T_1499) a05EA)))
T_309: (in wArg02 : word16)
  Class: Eq_309
  DataType: word16
  OrigDataType: word16
T_310: (in wArg00 : word16)
  Class: Eq_309
  DataType: word16
  OrigDataType: word16
T_311: (in fn0800_02C7(ds, wArg00) : void)
  Class: Eq_311
  DataType: void
  OrigDataType: void
T_312: (in 0x0000 : word16)
  Class: Eq_312
  DataType: word16
  OrigDataType: word16
T_313: (in di + 0x0000 : word16)
  Class: Eq_313
  DataType: word16
  OrigDataType: word16
T_314: (in Mem0[es:di + 0x0000:byte] : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_315: (in 0x0001 : word16)
  Class: Eq_315
  DataType: word16
  OrigDataType: word16
T_316: (in di + 0x0001 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_317: (in SEQ(es, di) : ptr32)
  Class: Eq_47
  DataType: ptr32
  OrigDataType: ptr32
T_318: (in 0x0001 : word16)
  Class: Eq_318
  DataType: word16
  OrigDataType: word16
T_319: (in cx - 0x0001 : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_320: (in SLICE(cx, byte, 8) : byte)
  Class: Eq_55
  DataType: byte
  OrigDataType: byte
T_321: (in (byte) cx : byte)
  Class: Eq_57
  DataType: byte
  OrigDataType: byte
T_322: (in 0x0000 : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_323: (in cx == 0x0000 : bool)
  Class: Eq_323
  DataType: bool
  OrigDataType: bool
T_324: (in fn0800_0121 : ptr32)
  Class: Eq_324
  DataType: (ptr (fn T_329 (T_17, T_328)))
  OrigDataType: (ptr (fn T_329 (T_17, T_328)))
T_325: (in signature of fn0800_0121 : void)
  Class: Eq_324
  DataType: 
  OrigDataType: 
T_326: (in al : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_327: (in bArg00 : byte)
  Class: Eq_327
  DataType: byte
  OrigDataType: byte
T_328: (in bArg00 : byte)
  Class: Eq_327
  DataType: byte
  OrigDataType: byte
T_329: (in fn0800_0121(al, bArg00) : void)
  Class: Eq_329
  DataType: void
  OrigDataType: void
T_330: (in ds_3 : selector)
  Class: Eq_2
  DataType: (ptr (segment (0 (arr T_1498) a0000) (5DE T_340 t05DE)))
  OrigDataType: (ptr (segment (0 (arr T_1498) a0000) (5DE T_340 t05DE)))
T_331: (in 0x01F8 : word16)
  Class: Eq_331
  DataType: (memptr T_7 (struct (0 T_332 t0000)))
  OrigDataType: (memptr T_7 (struct (0 T_332 t0000)))
T_332: (in Mem0[0x0800:0x01F8:selector] : selector)
  Class: Eq_2
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_333: (in fn0800_01A5 : ptr32)
  Class: Eq_333
  DataType: (ptr (fn T_337 (T_326, T_330)))
  OrigDataType: (ptr (fn T_337 (T_326, T_330)))
T_334: (in signature of fn0800_01A5 : void)
  Class: Eq_333
  DataType: 
  OrigDataType: 
T_335: (in al : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_336: (in ds : selector)
  Class: Eq_2
  DataType: (ptr (segment (74 T_430 t0074) (78 T_434 t0078) (7C T_438 t007C) (80 T_443 t0080)))
  OrigDataType: (ptr (segment (74 T_430 t0074) (78 T_434 t0078) (7C T_438 t007C) (80 T_443 t0080)))
T_337: (in fn0800_01A5(al, ds_3) : void)
  Class: Eq_337
  DataType: void
  OrigDataType: void
T_338: (in cs : selector)
  Class: Eq_338
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_339: (in 0x05DE : word16)
  Class: Eq_339
  DataType: (memptr T_330 (struct (0 T_340 t0000)))
  OrigDataType: (memptr T_330 (struct (0 T_340 t0000)))
T_340: (in Mem0[ds_3:0x05DE:word16] : word16)
  Class: Eq_340
  DataType: word16
  OrigDataType: word16
T_341: (in SEQ(cs, Mem0[ds_3:0x05DE:word16]) : ptr32)
  Class: Eq_341
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_342: (in ax_20 : word16)
  Class: Eq_342
  DataType: word16
  OrigDataType: word16
T_343: (in 0x0000 : word16)
  Class: Eq_342
  DataType: word16
  OrigDataType: word16
T_344: (in al_21 : byte)
  Class: Eq_344
  DataType: bcu8
  OrigDataType: bcu8
T_345: (in 0x00 : byte)
  Class: Eq_344
  DataType: byte
  OrigDataType: byte
T_346: (in ah_22 : byte)
  Class: Eq_346
  DataType: (union (byte u0) (word16 u1))
  OrigDataType: (union (byte u0) (word16 u1))
T_347: (in 0x00 : byte)
  Class: Eq_346
  DataType: byte
  OrigDataType: byte
T_348: (in si_25 : word16)
  Class: Eq_348
  DataType: (memptr T_330 (struct 0001 (0 T_354 t0000)))
  OrigDataType: (memptr T_330 (struct 0001 (0 T_354 t0000)))
T_349: (in 0x0000 : word16)
  Class: Eq_348
  DataType: word16
  OrigDataType: word16
T_350: (in cx_26 : word16)
  Class: Eq_350
  DataType: word16
  OrigDataType: word16
T_351: (in 0x002F : word16)
  Class: Eq_350
  DataType: word16
  OrigDataType: word16
T_352: (in 0x0000 : word16)
  Class: Eq_352
  DataType: word16
  OrigDataType: word16
T_353: (in si_25 + 0x0000 : word16)
  Class: Eq_353
  DataType: word16
  OrigDataType: word16
T_354: (in Mem0[ds_3:si_25 + 0x0000:byte] : byte)
  Class: Eq_354
  DataType: byte
  OrigDataType: byte
T_355: (in al_21 + Mem0[ds_3:si_25 + 0x0000:byte] : byte)
  Class: Eq_344
  DataType: byte
  OrigDataType: byte
T_356: (in 0x00 : byte)
  Class: Eq_344
  DataType: bcu8
  OrigDataType: bcu8
T_357: (in al_21 <u 0x00 : bool)
  Class: Eq_357
  DataType: bool
  OrigDataType: bool
T_358: (in ah_22 + (al_21 <u 0x00) : word16)
  Class: Eq_346
  DataType: word16
  OrigDataType: word16
T_359: (in DPB(ax_20, ah_22, 8, 8) : word16)
  Class: Eq_342
  DataType: word16
  OrigDataType: word16
T_360: (in 0x0001 : word16)
  Class: Eq_360
  DataType: word16
  OrigDataType: word16
T_361: (in si_25 + 0x0001 : word16)
  Class: Eq_348
  DataType: word16
  OrigDataType: word16
T_362: (in 0x0001 : word16)
  Class: Eq_362
  DataType: word16
  OrigDataType: word16
T_363: (in cx_26 - 0x0001 : word16)
  Class: Eq_350
  DataType: word16
  OrigDataType: word16
T_364: (in 0x0000 : word16)
  Class: Eq_350
  DataType: word16
  OrigDataType: word16
T_365: (in cx_26 != 0x0000 : bool)
  Class: Eq_365
  DataType: bool
  OrigDataType: bool
T_366: (in 0x0D37 : word16)
  Class: Eq_342
  DataType: word16
  OrigDataType: word16
T_367: (in ax_20 == 0x0D37 : bool)
  Class: Eq_367
  DataType: bool
  OrigDataType: bool
T_368: (in msdos_terminate : ptr32)
  Class: Eq_368
  DataType: (ptr (fn T_372 (T_371)))
  OrigDataType: (ptr (fn T_372 (T_371)))
T_369: (in signature of msdos_terminate : void)
  Class: Eq_368
  DataType: 
  OrigDataType: 
T_370: (in al : byte)
  Class: Eq_370
  DataType: byte
  OrigDataType: byte
T_371: (in bArg00 : byte)
  Class: Eq_370
  DataType: byte
  OrigDataType: byte
T_372: (in msdos_terminate(bArg00) : void)
  Class: Eq_372
  DataType: void
  OrigDataType: void
T_373: (in fn0800_01DA : ptr32)
  Class: Eq_373
  DataType: (ptr (fn T_380 (T_378, T_379, T_330)))
  OrigDataType: (ptr (fn T_380 (T_378, T_379, T_330)))
T_374: (in signature of fn0800_01DA : void)
  Class: Eq_373
  DataType: 
  OrigDataType: 
T_375: (in cx : word16)
  Class: Eq_375
  DataType: word16
  OrigDataType: word16
T_376: (in dx : word16)
  Class: Eq_376
  DataType: word16
  OrigDataType: word16
T_377: (in ds : selector)
  Class: Eq_2
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_378: (in 0x0019 : word16)
  Class: Eq_375
  DataType: word16
  OrigDataType: word16
T_379: (in 0x002F : word16)
  Class: Eq_376
  DataType: word16
  OrigDataType: word16
T_380: (in fn0800_01DA(0x0019, 0x002F, ds_3) : word16)
  Class: Eq_380
  DataType: word16
  OrigDataType: word16
T_381: (in es_bx_6 : word32)
  Class: Eq_381
  DataType: word32
  OrigDataType: word32
T_382: (in msdos_get_interrupt_vector : ptr32)
  Class: Eq_382
  DataType: (ptr (fn T_385 (T_43)))
  OrigDataType: (ptr (fn T_385 (T_43)))
T_383: (in signature of msdos_get_interrupt_vector : void)
  Class: Eq_382
  DataType: 
  OrigDataType: 
T_384: (in al : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_385: (in msdos_get_interrupt_vector(al) : word32)
  Class: Eq_381
  DataType: word32
  OrigDataType: word32
T_386: (in (word16) es_bx_6 : word16)
  Class: Eq_386
  DataType: word16
  OrigDataType: word16
T_387: (in 0x0074 : word16)
  Class: Eq_387
  DataType: (memptr T_44 (struct (0 T_388 t0000)))
  OrigDataType: (memptr T_44 (struct (0 T_388 t0000)))
T_388: (in Mem9[ds:0x0074:word16] : word16)
  Class: Eq_386
  DataType: word16
  OrigDataType: word16
T_389: (in SLICE(es_bx_6, selector, 16) : selector)
  Class: Eq_389
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_390: (in 0x0076 : word16)
  Class: Eq_390
  DataType: (memptr T_44 (struct (0 T_391 t0000)))
  OrigDataType: (memptr T_44 (struct (0 T_391 t0000)))
T_391: (in Mem10[ds:0x0076:word16] : word16)
  Class: Eq_389
  DataType: word16
  OrigDataType: word16
T_392: (in es_bx_11 : word32)
  Class: Eq_392
  DataType: word32
  OrigDataType: word32
T_393: (in msdos_get_interrupt_vector : ptr32)
  Class: Eq_382
  DataType: (ptr (fn T_394 (T_43)))
  OrigDataType: (ptr (fn T_394 (T_43)))
T_394: (in msdos_get_interrupt_vector(al) : word32)
  Class: Eq_392
  DataType: word32
  OrigDataType: word32
T_395: (in (word16) es_bx_11 : word16)
  Class: Eq_395
  DataType: word16
  OrigDataType: word16
T_396: (in 0x0078 : word16)
  Class: Eq_396
  DataType: (memptr T_44 (struct (0 T_397 t0000)))
  OrigDataType: (memptr T_44 (struct (0 T_397 t0000)))
T_397: (in Mem14[ds:0x0078:word16] : word16)
  Class: Eq_395
  DataType: word16
  OrigDataType: word16
T_398: (in SLICE(es_bx_11, selector, 16) : selector)
  Class: Eq_398
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_399: (in 0x007A : word16)
  Class: Eq_399
  DataType: (memptr T_44 (struct (0 T_400 t0000)))
  OrigDataType: (memptr T_44 (struct (0 T_400 t0000)))
T_400: (in Mem15[ds:0x007A:word16] : word16)
  Class: Eq_398
  DataType: word16
  OrigDataType: word16
T_401: (in es_bx_16 : word32)
  Class: Eq_401
  DataType: word32
  OrigDataType: word32
T_402: (in msdos_get_interrupt_vector : ptr32)
  Class: Eq_382
  DataType: (ptr (fn T_403 (T_43)))
  OrigDataType: (ptr (fn T_403 (T_43)))
T_403: (in msdos_get_interrupt_vector(al) : word32)
  Class: Eq_401
  DataType: word32
  OrigDataType: word32
T_404: (in (word16) es_bx_16 : word16)
  Class: Eq_404
  DataType: word16
  OrigDataType: word16
T_405: (in 0x007C : word16)
  Class: Eq_405
  DataType: (memptr T_44 (struct (0 T_406 t0000)))
  OrigDataType: (memptr T_44 (struct (0 T_406 t0000)))
T_406: (in Mem19[ds:0x007C:word16] : word16)
  Class: Eq_404
  DataType: word16
  OrigDataType: word16
T_407: (in SLICE(es_bx_16, selector, 16) : selector)
  Class: Eq_407
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_408: (in 0x007E : word16)
  Class: Eq_408
  DataType: (memptr T_44 (struct (0 T_409 t0000)))
  OrigDataType: (memptr T_44 (struct (0 T_409 t0000)))
T_409: (in Mem20[ds:0x007E:word16] : word16)
  Class: Eq_407
  DataType: word16
  OrigDataType: word16
T_410: (in es_bx_21 : word32)
  Class: Eq_410
  DataType: word32
  OrigDataType: word32
T_411: (in msdos_get_interrupt_vector : ptr32)
  Class: Eq_382
  DataType: (ptr (fn T_412 (T_43)))
  OrigDataType: (ptr (fn T_412 (T_43)))
T_412: (in msdos_get_interrupt_vector(al) : word32)
  Class: Eq_410
  DataType: word32
  OrigDataType: word32
T_413: (in (word16) es_bx_21 : word16)
  Class: Eq_413
  DataType: word16
  OrigDataType: word16
T_414: (in 0x0080 : word16)
  Class: Eq_414
  DataType: (memptr T_44 (struct (0 T_415 t0000)))
  OrigDataType: (memptr T_44 (struct (0 T_415 t0000)))
T_415: (in Mem24[ds:0x0080:word16] : word16)
  Class: Eq_413
  DataType: word16
  OrigDataType: word16
T_416: (in SLICE(es_bx_21, selector, 16) : selector)
  Class: Eq_416
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_417: (in 0x0082 : word16)
  Class: Eq_417
  DataType: (memptr T_44 (struct (0 T_418 t0000)))
  OrigDataType: (memptr T_44 (struct (0 T_418 t0000)))
T_418: (in Mem25[ds:0x0082:word16] : word16)
  Class: Eq_416
  DataType: word16
  OrigDataType: word16
T_419: (in msdos_set_interrupt_vector : ptr32)
  Class: Eq_419
  DataType: (ptr (fn T_427 (T_423, T_426)))
  OrigDataType: (ptr (fn T_427 (T_423, T_426)))
T_420: (in signature of msdos_set_interrupt_vector : void)
  Class: Eq_419
  DataType: 
  OrigDataType: 
T_421: (in al : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_422: (in ds_dx : word32)
  Class: Eq_422
  DataType: word32
  OrigDataType: word32
T_423: (in 0x00 : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_424: (in cs : selector)
  Class: Eq_424
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_425: (in 0x0158 : word16)
  Class: Eq_425
  DataType: word16
  OrigDataType: word16
T_426: (in SEQ(cs, 0x0158) : word32)
  Class: Eq_422
  DataType: word32
  OrigDataType: word32
T_427: (in msdos_set_interrupt_vector(0x00, SEQ(cs, 0x0158)) : void)
  Class: Eq_427
  DataType: void
  OrigDataType: void
T_428: (in msdos_set_interrupt_vector : ptr32)
  Class: Eq_419
  DataType: (ptr (fn T_431 (T_335, T_430)))
  OrigDataType: (ptr (fn T_431 (T_335, T_430)))
T_429: (in 0x0074 : word16)
  Class: Eq_429
  DataType: (memptr T_336 (struct (0 T_430 t0000)))
  OrigDataType: (memptr T_336 (struct (0 T_430 t0000)))
T_430: (in Mem0[ds:0x0074:segptr32] : segptr32)
  Class: Eq_422
  DataType: segptr32
  OrigDataType: segptr32
T_431: (in msdos_set_interrupt_vector(al, Mem0[ds:0x0074:segptr32]) : void)
  Class: Eq_431
  DataType: void
  OrigDataType: void
T_432: (in msdos_set_interrupt_vector : ptr32)
  Class: Eq_419
  DataType: (ptr (fn T_435 (T_335, T_434)))
  OrigDataType: (ptr (fn T_435 (T_335, T_434)))
T_433: (in 0x0078 : word16)
  Class: Eq_433
  DataType: (memptr T_336 (struct (0 T_434 t0000)))
  OrigDataType: (memptr T_336 (struct (0 T_434 t0000)))
T_434: (in Mem0[ds:0x0078:segptr32] : segptr32)
  Class: Eq_422
  DataType: segptr32
  OrigDataType: segptr32
T_435: (in msdos_set_interrupt_vector(al, Mem0[ds:0x0078:segptr32]) : void)
  Class: Eq_435
  DataType: void
  OrigDataType: void
T_436: (in msdos_set_interrupt_vector : ptr32)
  Class: Eq_419
  DataType: (ptr (fn T_439 (T_335, T_438)))
  OrigDataType: (ptr (fn T_439 (T_335, T_438)))
T_437: (in 0x007C : word16)
  Class: Eq_437
  DataType: (memptr T_336 (struct (0 T_438 t0000)))
  OrigDataType: (memptr T_336 (struct (0 T_438 t0000)))
T_438: (in Mem0[ds:0x007C:segptr32] : segptr32)
  Class: Eq_422
  DataType: segptr32
  OrigDataType: segptr32
T_439: (in msdos_set_interrupt_vector(al, Mem0[ds:0x007C:segptr32]) : void)
  Class: Eq_439
  DataType: void
  OrigDataType: void
T_440: (in msdos_set_interrupt_vector : ptr32)
  Class: Eq_419
  DataType: (ptr (fn T_444 (T_441, T_443)))
  OrigDataType: (ptr (fn T_444 (T_441, T_443)))
T_441: (in 0x06 : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_442: (in 0x0080 : word16)
  Class: Eq_442
  DataType: (memptr T_336 (struct (0 T_443 t0000)))
  OrigDataType: (memptr T_336 (struct (0 T_443 t0000)))
T_443: (in Mem0[ds:0x0080:segptr32] : segptr32)
  Class: Eq_422
  DataType: segptr32
  OrigDataType: segptr32
T_444: (in msdos_set_interrupt_vector(0x06, Mem0[ds:0x0080:segptr32]) : void)
  Class: Eq_444
  DataType: void
  OrigDataType: void
T_445: (in bx : word16)
  Class: Eq_445
  DataType: word16
  OrigDataType: word16
T_446: (in ax_8 : word16)
  Class: Eq_446
  DataType: word16
  OrigDataType: word16
T_447: (in msdos_write_file : ptr32)
  Class: Eq_447
  DataType: (ptr (fn T_456 (T_453, T_375, T_454, T_455)))
  OrigDataType: (ptr (fn T_456 (T_453, T_375, T_454, T_455)))
T_448: (in signature of msdos_write_file : void)
  Class: Eq_447
  DataType: 
  OrigDataType: 
T_449: (in bx : word16)
  Class: Eq_449
  DataType: word16
  OrigDataType: word16
T_450: (in cx : word16)
  Class: Eq_375
  DataType: word16
  OrigDataType: word16
T_451: (in ds_dx : word32)
  Class: Eq_451
  DataType: word32
  OrigDataType: word32
T_452: (in axOut : ptr16)
  Class: Eq_452
  DataType: ptr16
  OrigDataType: ptr16
T_453: (in 0x0002 : word16)
  Class: Eq_449
  DataType: word16
  OrigDataType: word16
T_454: (in ds_dx : word32)
  Class: Eq_451
  DataType: word32
  OrigDataType: word32
T_455: (in out ax_8 : ptr16)
  Class: Eq_452
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_456: (in msdos_write_file(0x0002, cx, ds_dx, out ax_8) : bool)
  Class: Eq_456
  DataType: bool
  OrigDataType: bool
T_457: (in 0x0002 : word16)
  Class: Eq_457
  DataType: word16
  OrigDataType: word16
T_458: (in ds_3 : selector)
  Class: Eq_2
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_459: (in 0x01F8 : word16)
  Class: Eq_459
  DataType: (memptr T_7 (struct (0 T_460 t0000)))
  OrigDataType: (memptr T_7 (struct (0 T_460 t0000)))
T_460: (in Mem0[0x0800:0x01F8:selector] : selector)
  Class: Eq_2
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_461: (in bx_4 : word16)
  Class: Eq_461
  DataType: (memptr T_458 (struct (0 T_471 t0000)))
  OrigDataType: (memptr T_458 (struct (0 T_471 t0000)))
T_462: (in fn0800_01DA : ptr32)
  Class: Eq_373
  DataType: (ptr (fn T_465 (T_463, T_464, T_458)))
  OrigDataType: (ptr (fn T_465 (T_463, T_464, T_458)))
T_463: (in 0x001E : word16)
  Class: Eq_375
  DataType: word16
  OrigDataType: word16
T_464: (in 0x0056 : word16)
  Class: Eq_376
  DataType: word16
  OrigDataType: word16
T_465: (in fn0800_01DA(0x001E, 0x0056, ds_3) : word16)
  Class: Eq_461
  DataType: word16
  OrigDataType: word16
T_466: (in fn0800_0121 : ptr32)
  Class: Eq_324
  DataType: (ptr (fn T_469 (T_467, T_468)))
  OrigDataType: (ptr (fn T_469 (T_467, T_468)))
T_467: (in 0x03 : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_468: (in bLoc04 : byte)
  Class: Eq_327
  DataType: byte
  OrigDataType: byte
T_469: (in fn0800_0121(0x03, bLoc04) : void)
  Class: Eq_469
  DataType: void
  OrigDataType: void
T_470: (in bx_4 + si : word16)
  Class: Eq_470
  DataType: word16
  OrigDataType: word16
T_471: (in Mem0[ds_3:bx_4 + si:byte] : byte)
  Class: Eq_471
  DataType: byte
  OrigDataType: byte
T_472: (in 0x03 : byte)
  Class: Eq_472
  DataType: byte
  OrigDataType: byte
T_473: (in Mem0[ds_3:bx_4 + si:byte] + 0x03 : byte)
  Class: Eq_471
  DataType: byte
  OrigDataType: byte
T_474: (in bx_4 + si : word16)
  Class: Eq_474
  DataType: word16
  OrigDataType: word16
T_475: (in Mem13[ds_3:bx_4 + si:byte] : byte)
  Class: Eq_471
  DataType: byte
  OrigDataType: byte
T_476: (in si_28 : word16)
  Class: Eq_476
  DataType: word16
  OrigDataType: word16
T_477: (in di_29 : word16)
  Class: Eq_477
  DataType: word16
  OrigDataType: word16
T_478: (in bx_30 : word16)
  Class: Eq_477
  DataType: word16
  OrigDataType: word16
T_479: (in fn0800_0E11 : ptr32)
  Class: Eq_479
  DataType: (ptr (fn T_488 (T_458, T_485, T_486, T_487)))
  OrigDataType: (ptr (fn T_488 (T_458, T_485, T_486, T_487)))
T_480: (in signature of fn0800_0E11 : void)
  Class: Eq_479
  DataType: 
  OrigDataType: 
T_481: (in ds : selector)
  Class: Eq_2
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_482: (in wArg02 : word16)
  Class: Eq_482
  DataType: word16
  OrigDataType: word16
T_483: (in siOut : ptr16)
  Class: Eq_483
  DataType: ptr16
  OrigDataType: ptr16
T_484: (in diOut : ptr16)
  Class: Eq_484
  DataType: ptr16
  OrigDataType: ptr16
T_485: (in 0x0194 : word16)
  Class: Eq_482
  DataType: word16
  OrigDataType: word16
T_486: (in out si_28 : ptr16)
  Class: Eq_483
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_487: (in out di_29 : ptr16)
  Class: Eq_484
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_488: (in fn0800_0E11(ds_3, 0x0194, out si_28, out di_29) : word16)
  Class: Eq_477
  DataType: word16
  OrigDataType: word16
T_489: (in fn0800_169A : ptr32)
  Class: Eq_489
  DataType: (ptr (fn T_496 (T_478, T_477, T_458, T_495)))
  OrigDataType: (ptr (fn T_496 (T_478, T_477, T_458, T_495)))
T_490: (in signature of fn0800_169A : void)
  Class: Eq_489
  DataType: 
  OrigDataType: 
T_491: (in bx : word16)
  Class: Eq_477
  DataType: word16
  OrigDataType: word16
T_492: (in di : word16)
  Class: Eq_477
  DataType: word16
  OrigDataType: word16
T_493: (in ds : selector)
  Class: Eq_2
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_494: (in wArg02 : word16)
  Class: Eq_494
  DataType: word16
  OrigDataType: word16
T_495: (in 0x01B1 : word16)
  Class: Eq_494
  DataType: word16
  OrigDataType: word16
T_496: (in fn0800_169A(bx_30, di_29, ds_3, 0x01B1) : word16)
  Class: Eq_496
  DataType: word16
  OrigDataType: word16
T_497: (in fn0800_0249 : ptr32)
  Class: Eq_497
  DataType: (ptr (fn T_510 (T_506, T_507, T_458, T_508, T_509)))
  OrigDataType: (ptr (fn T_510 (T_506, T_507, T_458, T_508, T_509)))
T_498: (in signature of fn0800_0249 : void)
  Class: Eq_497
  DataType: 
  OrigDataType: 
T_499: (in bp : word16)
  Class: Eq_499
  DataType: (memptr T_528 (struct (FFFFFFFC T_531 tFFFFFFFC) (FFFFFFFE T_549 tFFFFFFFE)))
  OrigDataType: (memptr T_528 (struct (FFFFFFFC T_531 tFFFFFFFC) (FFFFFFFE T_549 tFFFFFFFE)))
T_500: (in si : word16)
  Class: Eq_500
  DataType: int16
  OrigDataType: int16
T_501: (in ds : selector)
  Class: Eq_2
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_502: (in wArg00 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_503: (in wArg02 : word16)
  Class: Eq_111
  DataType: word16
  OrigDataType: word16
T_504: (in fp : ptr16)
  Class: Eq_504
  DataType: ptr16
  OrigDataType: ptr16
T_505: (in 0x0004 : word16)
  Class: Eq_505
  DataType: word16
  OrigDataType: word16
T_506: (in fp - 0x0004 : word16)
  Class: Eq_499
  DataType: word16
  OrigDataType: word16
T_507: (in 0x0001 : word16)
  Class: Eq_500
  DataType: word16
  OrigDataType: word16
T_508: (in wArg00 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_509: (in wArg02 : word16)
  Class: Eq_111
  DataType: word16
  OrigDataType: word16
T_510: (in fn0800_0249(fp - 0x0004, 0x0001, ds_3, wArg00, wArg02) : void)
  Class: Eq_510
  DataType: void
  OrigDataType: void
T_511: (in si_18 : word16)
  Class: Eq_511
  DataType: word16
  OrigDataType: word16
T_512: (in di_19 : word16)
  Class: Eq_477
  DataType: word16
  OrigDataType: word16
T_513: (in bx_20 : word16)
  Class: Eq_477
  DataType: word16
  OrigDataType: word16
T_514: (in fn0800_0E11 : ptr32)
  Class: Eq_479
  DataType: (ptr (fn T_518 (T_299, T_515, T_516, T_517)))
  OrigDataType: (ptr (fn T_518 (T_299, T_515, T_516, T_517)))
T_515: (in 0x0194 : word16)
  Class: Eq_482
  DataType: word16
  OrigDataType: word16
T_516: (in out si_18 : ptr16)
  Class: Eq_483
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_517: (in out di_19 : ptr16)
  Class: Eq_484
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_518: (in fn0800_0E11(ds, 0x0194, out si_18, out di_19) : word16)
  Class: Eq_477
  DataType: word16
  OrigDataType: word16
T_519: (in fn0800_169A : ptr32)
  Class: Eq_489
  DataType: (ptr (fn T_521 (T_513, T_512, T_299, T_520)))
  OrigDataType: (ptr (fn T_521 (T_513, T_512, T_299, T_520)))
T_520: (in 0x01B1 : word16)
  Class: Eq_494
  DataType: word16
  OrigDataType: word16
T_521: (in fn0800_169A(bx_20, di_19, ds, 0x01B1) : word16)
  Class: Eq_521
  DataType: word16
  OrigDataType: word16
T_522: (in fn0800_0249 : ptr32)
  Class: Eq_497
  DataType: (ptr (fn T_527 (T_525, T_526, T_299, T_298, T_297)))
  OrigDataType: (ptr (fn T_527 (T_525, T_526, T_299, T_298, T_297)))
T_523: (in fp : ptr16)
  Class: Eq_523
  DataType: ptr16
  OrigDataType: ptr16
T_524: (in 0x0002 : word16)
  Class: Eq_524
  DataType: word16
  OrigDataType: word16
T_525: (in fp - 0x0002 : word16)
  Class: Eq_499
  DataType: word16
  OrigDataType: word16
T_526: (in 0x0001 : word16)
  Class: Eq_500
  DataType: word16
  OrigDataType: word16
T_527: (in fn0800_0249(fp - 0x0002, 0x0001, ds, di, si) : void)
  Class: Eq_527
  DataType: void
  OrigDataType: void
T_528: (in ss : selector)
  Class: Eq_528
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_529: (in 0x0004 : word16)
  Class: Eq_529
  DataType: word16
  OrigDataType: word16
T_530: (in bp - 0x0004 : word16)
  Class: Eq_530
  DataType: word16
  OrigDataType: word16
T_531: (in Mem0[ss:bp - 0x0004:word16] : word16)
  Class: Eq_500
  DataType: int16
  OrigDataType: int16
T_532: (in si <= Mem0[ss:bp - 0x0004:word16] : bool)
  Class: Eq_532
  DataType: bool
  OrigDataType: bool
T_533: (in si_41 : word16)
  Class: Eq_533
  DataType: word16
  OrigDataType: word16
T_534: (in di_42 : word16)
  Class: Eq_477
  DataType: word16
  OrigDataType: word16
T_535: (in bx_43 : word16)
  Class: Eq_477
  DataType: word16
  OrigDataType: word16
T_536: (in fn0800_0E11 : ptr32)
  Class: Eq_479
  DataType: (ptr (fn T_540 (T_501, T_537, T_538, T_539)))
  OrigDataType: (ptr (fn T_540 (T_501, T_537, T_538, T_539)))
T_537: (in 0x01B4 : word16)
  Class: Eq_482
  DataType: word16
  OrigDataType: word16
T_538: (in out si_41 : ptr16)
  Class: Eq_483
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_539: (in out di_42 : ptr16)
  Class: Eq_484
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_540: (in fn0800_0E11(ds, 0x01B4, out si_41, out di_42) : word16)
  Class: Eq_477
  DataType: word16
  OrigDataType: word16
T_541: (in fn0800_169A : ptr32)
  Class: Eq_489
  DataType: (ptr (fn T_543 (T_535, T_534, T_501, T_542)))
  OrigDataType: (ptr (fn T_543 (T_535, T_534, T_501, T_542)))
T_542: (in 0x01C3 : word16)
  Class: Eq_494
  DataType: word16
  OrigDataType: word16
T_543: (in fn0800_169A(bx_43, di_42, ds, 0x01C3) : word16)
  Class: Eq_543
  DataType: word16
  OrigDataType: word16
T_544: (in fn0800_025B : ptr32)
  Class: Eq_544
  DataType: (ptr (fn T_550 (T_549)))
  OrigDataType: (ptr (fn T_550 (T_549)))
T_545: (in signature of fn0800_025B : void)
  Class: Eq_544
  DataType: 
  OrigDataType: 
T_546: (in wArg02 : word16)
  Class: Eq_546
  DataType: word16
  OrigDataType: word16
T_547: (in 0x0002 : word16)
  Class: Eq_547
  DataType: word16
  OrigDataType: word16
T_548: (in bp - 0x0002 : word16)
  Class: Eq_548
  DataType: word16
  OrigDataType: word16
T_549: (in Mem0[ss:bp - 0x0002:word16] : word16)
  Class: Eq_546
  DataType: word16
  OrigDataType: word16
T_550: (in fn0800_025B(Mem0[ss:bp - 0x0002:word16]) : word16)
  Class: Eq_550
  DataType: word16
  OrigDataType: word16
T_551: (in 0x01C6 : word16)
  Class: Eq_551
  DataType: word16
  OrigDataType: word16
T_552: (in fp : ptr16)
  Class: Eq_552
  DataType: (union (ptr16 u0) ((memptr T_528 (struct (FFFFFFFA T_555 tFFFFFFFA))) u1))
  OrigDataType: (union (ptr16 u0) ((memptr T_528 (struct (FFFFFFFA T_555 tFFFFFFFA))) u1))
T_553: (in 0x0006 : word16)
  Class: Eq_553
  DataType: word16
  OrigDataType: word16
T_554: (in fp - 0x0006 : word16)
  Class: Eq_554
  DataType: word16
  OrigDataType: word16
T_555: (in Mem69[ss:fp - 0x0006:word16] : word16)
  Class: Eq_551
  DataType: word16
  OrigDataType: word16
T_556: (in si_71 : word16)
  Class: Eq_556
  DataType: word16
  OrigDataType: word16
T_557: (in di_72 : word16)
  Class: Eq_557
  DataType: word16
  OrigDataType: word16
T_558: (in fn0800_0E11 : ptr32)
  Class: Eq_479
  DataType: (ptr (fn T_562 (T_501, T_559, T_560, T_561)))
  OrigDataType: (ptr (fn T_562 (T_501, T_559, T_560, T_561)))
T_559: (in wLoc06 : word16)
  Class: Eq_482
  DataType: word16
  OrigDataType: word16
T_560: (in out si_71 : ptr16)
  Class: Eq_483
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_561: (in out di_72 : ptr16)
  Class: Eq_484
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_562: (in fn0800_0E11(ds, wLoc06, out si_71, out di_72) : word16)
  Class: Eq_562
  DataType: word16
  OrigDataType: word16
T_563: (in 0x0001 : word16)
  Class: Eq_563
  DataType: word16
  OrigDataType: word16
T_564: (in si_71 + 0x0001 : word16)
  Class: Eq_500
  DataType: word16
  OrigDataType: word16
T_565: (in fn0800_02C7 : ptr32)
  Class: Eq_306
  DataType: (ptr (fn T_567 (T_501, T_566)))
  OrigDataType: (ptr (fn T_567 (T_501, T_566)))
T_566: (in 0x0000 : word16)
  Class: Eq_309
  DataType: word16
  OrigDataType: word16
T_567: (in fn0800_02C7(ds, 0x0000) : void)
  Class: Eq_567
  DataType: void
  OrigDataType: void
T_568: (in ax : word16)
  Class: Eq_568
  DataType: word16
  OrigDataType: word16
T_569: (in ax_18 : word16)
  Class: Eq_569
  DataType: word16
  OrigDataType: word16
T_570: (in wArg02 : word16)
  Class: Eq_570
  DataType: int16
  OrigDataType: int16
T_571: (in 0x0002 : word16)
  Class: Eq_570
  DataType: int16
  OrigDataType: int16
T_572: (in wArg02 <= 0x0002 : bool)
  Class: Eq_572
  DataType: bool
  OrigDataType: bool
T_573: (in 0x0001 : word16)
  Class: Eq_569
  DataType: word16
  OrigDataType: word16
T_574: (in fn0800_025B : ptr32)
  Class: Eq_544
  DataType: (ptr (fn T_577 (T_576)))
  OrigDataType: (ptr (fn T_577 (T_576)))
T_575: (in 0x0001 : word16)
  Class: Eq_575
  DataType: word16
  OrigDataType: word16
T_576: (in wArg02 - 0x0001 : word16)
  Class: Eq_546
  DataType: word16
  OrigDataType: word16
T_577: (in fn0800_025B(wArg02 - 0x0001) : word16)
  Class: Eq_577
  DataType: word16
  OrigDataType: word16
T_578: (in fn0800_025B : ptr32)
  Class: Eq_544
  DataType: (ptr (fn T_581 (T_580)))
  OrigDataType: (ptr (fn T_581 (T_580)))
T_579: (in 0xFFFE : word16)
  Class: Eq_579
  DataType: word16
  OrigDataType: word16
T_580: (in wArg02 + 0xFFFE : word16)
  Class: Eq_546
  DataType: word16
  OrigDataType: word16
T_581: (in fn0800_025B(wArg02 + 0xFFFE) : word16)
  Class: Eq_581
  DataType: word16
  OrigDataType: word16
T_582: (in fn0800_025B(wArg02 - 0x0001) + fn0800_025B(wArg02 + 0xFFFE) : word16)
  Class: Eq_569
  DataType: word16
  OrigDataType: word16
T_583: (in ax_21 : word16)
  Class: Eq_583
  DataType: word16
  OrigDataType: word16
T_584: (in 0x0240 : word16)
  Class: Eq_584
  DataType: (memptr T_308 (struct (0 T_585 t0000)))
  OrigDataType: (memptr T_308 (struct (0 T_585 t0000)))
T_585: (in Mem0[ds:0x0240:word16] : word16)
  Class: Eq_583
  DataType: word16
  OrigDataType: word16
T_586: (in v7_22 : word16)
  Class: Eq_583
  DataType: word16
  OrigDataType: word16
T_587: (in 0x0240 : word16)
  Class: Eq_587
  DataType: (memptr T_308 (struct (0 T_583 t0000)))
  OrigDataType: (memptr T_308 (struct (0 T_583 t0000)))
T_588: (in Mem0[ds:0x0240:word16] : word16)
  Class: Eq_583
  DataType: word16
  OrigDataType: word16
T_589: (in 0x0001 : word16)
  Class: Eq_589
  DataType: word16
  OrigDataType: word16
T_590: (in Mem0[ds:0x0240:word16] - 0x0001 : word16)
  Class: Eq_583
  DataType: word16
  OrigDataType: word16
T_591: (in Mem23[ds:0x0240:word16] : word16)
  Class: Eq_583
  DataType: word16
  OrigDataType: word16
T_592: (in al_25 : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_593: (in (byte) ax_21 : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_594: (in 0x0000 : word16)
  Class: Eq_583
  DataType: word16
  OrigDataType: word16
T_595: (in ax_21 != 0x0000 : bool)
  Class: Eq_595
  DataType: bool
  OrigDataType: bool
T_596: (in cs : selector)
  Class: Eq_596
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_597: (in 0x05EA : word16)
  Class: Eq_597
  DataType: word16
  OrigDataType: word16
T_598: (in SEQ(ds, 0x05EA) : ptr32)
  Class: Eq_598
  DataType: ptr32
  OrigDataType: ptr32
T_599: (in 0x0240 : word16)
  Class: Eq_599
  DataType: (memptr T_308 (struct (0 T_600 t0000)))
  OrigDataType: (memptr T_308 (struct (0 T_600 t0000)))
T_600: (in Mem23[ds:0x0240:word16] : word16)
  Class: Eq_583
  DataType: ui16
  OrigDataType: ui16
T_601: (in 0x0002 : word16)
  Class: Eq_601
  DataType: ui16
  OrigDataType: ui16
T_602: (in Mem23[ds:0x0240:word16] * 0x0002 : word16)
  Class: Eq_602
  DataType: ui16
  OrigDataType: ui16
T_603: (in SEQ(ds, 0x05EA)[Mem23[ds:0x0240:word16] * 0x0002] : word16)
  Class: Eq_603
  DataType: word16
  OrigDataType: word16
T_604: (in SEQ(cs, SEQ(ds, 0x05EA)[Mem23[ds:0x0240:word16] * 0x0002]) : ptr32)
  Class: Eq_604
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_605: (in 0x0236 : word16)
  Class: Eq_605
  DataType: (memptr T_308 (struct (0 T_606 t0000)))
  OrigDataType: (memptr T_308 (struct (0 T_606 t0000)))
T_606: (in Mem23[ds:0x0236:word16] : word16)
  Class: Eq_606
  DataType: word16
  OrigDataType: word16
T_607: (in SEQ(cs, Mem23[ds:0x0236:word16]) : ptr32)
  Class: Eq_607
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_608: (in 0x0238 : word16)
  Class: Eq_608
  DataType: (memptr T_308 (struct (0 T_609 t0000)))
  OrigDataType: (memptr T_308 (struct (0 T_609 t0000)))
T_609: (in Mem23[ds:0x0238:word16] : word16)
  Class: Eq_609
  DataType: word16
  OrigDataType: word16
T_610: (in SEQ(cs, Mem23[ds:0x0238:word16]) : ptr32)
  Class: Eq_610
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_611: (in 0x023A : word16)
  Class: Eq_611
  DataType: (memptr T_308 (struct (0 T_612 t0000)))
  OrigDataType: (memptr T_308 (struct (0 T_612 t0000)))
T_612: (in Mem23[ds:0x023A:word16] : word16)
  Class: Eq_612
  DataType: word16
  OrigDataType: word16
T_613: (in SEQ(cs, Mem23[ds:0x023A:word16]) : ptr32)
  Class: Eq_613
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_614: (in fn0800_0121 : ptr32)
  Class: Eq_324
  DataType: (ptr (fn T_616 (T_592, T_615)))
  OrigDataType: (ptr (fn T_616 (T_592, T_615)))
T_615: (in bLoc06 : byte)
  Class: Eq_327
  DataType: byte
  OrigDataType: byte
T_616: (in fn0800_0121(al_25, bLoc06) : void)
  Class: Eq_616
  DataType: void
  OrigDataType: void
T_617: (in si : word16)
  Class: Eq_617
  DataType: word16
  OrigDataType: word16
T_618: (in *dsOut : selector)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_619: (in es_231 : selector)
  Class: Eq_619
  DataType: 
  OrigDataType: 
T_620: (in wArg00 : word16)
  Class: Eq_620
  DataType: 
  OrigDataType: 
T_621: (in 0x02F6 : word16)
  Class: Eq_621
  DataType: 
  OrigDataType: 
T_622: (in Mem3[0x0800:0x02F6:word16] : word16)
  Class: Eq_620
  DataType: 
  OrigDataType: 
T_623: (in 0x02F8 : word16)
  Class: Eq_623
  DataType: 
  OrigDataType: 
T_624: (in Mem6[0x0800:0x02F8:word16] : word16)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_625: (in si_23 : word16)
  Class: Eq_625
  DataType: 
  OrigDataType: 
T_626: (in 0x008A : word16)
  Class: Eq_626
  DataType: 
  OrigDataType: 
T_627: (in Mem6[ds:0x008A:word16] : word16)
  Class: Eq_625
  DataType: 
  OrigDataType: 
T_628: (in es_8 : selector)
  Class: Eq_619
  DataType: 
  OrigDataType: 
T_629: (in 0x0090 : word16)
  Class: Eq_629
  DataType: 
  OrigDataType: 
T_630: (in Mem6[ds:0x0090:selector] : selector)
  Class: Eq_619
  DataType: 
  OrigDataType: 
T_631: (in ax_13 : word16)
  Class: Eq_631
  DataType: 
  OrigDataType: 
T_632: (in ax : word16)
  Class: Eq_632
  DataType: 
  OrigDataType: 
T_633: (in 0x0080 : word16)
  Class: Eq_633
  DataType: 
  OrigDataType: 
T_634: (in Mem6[ds:0x0080:byte] : byte)
  Class: Eq_634
  DataType: 
  OrigDataType: 
T_635: (in DPB(ax, Mem6[ds:0x0080:byte], 0, 8) : word16)
  Class: Eq_631
  DataType: 
  OrigDataType: 
T_636: (in si_103 : word16)
  Class: Eq_111
  DataType: 
  OrigDataType: 
T_637: (in 0x0002 : word16)
  Class: Eq_637
  DataType: 
  OrigDataType: 
T_638: (in si_23 + 0x0002 : word16)
  Class: Eq_111
  DataType: 
  OrigDataType: 
T_639: (in cx_25 : word16)
  Class: Eq_639
  DataType: 
  OrigDataType: 
T_640: (in 0x0001 : word16)
  Class: Eq_639
  DataType: 
  OrigDataType: 
T_641: (in 0x0092 : word16)
  Class: Eq_641
  DataType: 
  OrigDataType: 
T_642: (in Mem6[ds:0x0092:byte] : byte)
  Class: Eq_642
  DataType: 
  OrigDataType: 
T_643: (in 0x03 : byte)
  Class: Eq_642
  DataType: 
  OrigDataType: 
T_644: (in Mem6[ds:0x0092:byte] <u 0x03 : bool)
  Class: Eq_644
  DataType: 
  OrigDataType: 
T_645: (in di_83 : word16)
  Class: Eq_111
  DataType: 
  OrigDataType: 
T_646: (in fp : ptr16)
  Class: Eq_646
  DataType: 
  OrigDataType: 
T_647: (in 0x0002 : word16)
  Class: Eq_647
  DataType: 
  OrigDataType: 
T_648: (in ax_13 + 0x0002 : word16)
  Class: Eq_648
  DataType: 
  OrigDataType: 
T_649: (in ax_13 + 0x0002 + cx_25 : word16)
  Class: Eq_649
  DataType: 
  OrigDataType: 
T_650: (in 0xFFFE : word16)
  Class: Eq_650
  DataType: 
  OrigDataType: 
T_651: (in ax_13 + 0x0002 + cx_25 & 0xFFFE : word16)
  Class: Eq_651
  DataType: 
  OrigDataType: 
T_652: (in ax_13 + 0x0002 + cx_25 & 0xFFFE & 0xFFFE : word16)
  Class: Eq_652
  DataType: 
  OrigDataType: 
T_653: (in fp - (((ax_13 + 0x0002) + cx_25 & 0xFFFE) & 0xFFFE) : word16)
  Class: Eq_653
  DataType: 
  OrigDataType: 
T_654: (in 0x0001 : word16)
  Class: Eq_654
  DataType: 
  OrigDataType: 
T_655: (in fp - (((ax_13 + 0x0002) + cx_25 & 0xFFFE) & 0xFFFE) + 0x0001 : word16)
  Class: Eq_111
  DataType: 
  OrigDataType: 
T_656: (in 0x0000 : word16)
  Class: Eq_111
  DataType: 
  OrigDataType: 
T_657: (in di_83 <u 0x0000 : bool)
  Class: Eq_657
  DataType: 
  OrigDataType: 
T_658: (in 0x008C : word16)
  Class: Eq_658
  DataType: 
  OrigDataType: 
T_659: (in Mem6[ds:0x008C:selector] : selector)
  Class: Eq_619
  DataType: 
  OrigDataType: 
T_660: (in di_232 : word16)
  Class: Eq_660
  DataType: 
  OrigDataType: 
T_661: (in si_23 + 0x0002 : word16)
  Class: Eq_660
  DataType: 
  OrigDataType: 
T_662: (in cl_233 : byte)
  Class: Eq_662
  DataType: 
  OrigDataType: 
T_663: (in 0x7F : byte)
  Class: Eq_662
  DataType: 
  OrigDataType: 
T_664: (in cx_234 : word16)
  Class: Eq_664
  DataType: 
  OrigDataType: 
T_665: (in 0x007F : word16)
  Class: Eq_664
  DataType: 
  OrigDataType: 
T_666: (in 0x0000 : word16)
  Class: Eq_664
  DataType: 
  OrigDataType: 
T_667: (in cx_234 == 0x0000 : bool)
  Class: Eq_667
  DataType: 
  OrigDataType: 
T_668: (in 0x0001 : word16)
  Class: Eq_668
  DataType: 
  OrigDataType: 
T_669: (in cx_234 - 0x0001 : word16)
  Class: Eq_664
  DataType: 
  OrigDataType: 
T_670: (in di_260 : word16)
  Class: Eq_660
  DataType: 
  OrigDataType: 
T_671: (in 0x0001 : word16)
  Class: Eq_671
  DataType: 
  OrigDataType: 
T_672: (in di_260 + 0x0001 : word16)
  Class: Eq_660
  DataType: 
  OrigDataType: 
T_673: (in (byte) cx_234 : byte)
  Class: Eq_662
  DataType: 
  OrigDataType: 
T_674: (in 0x00 : byte)
  Class: Eq_674
  DataType: 
  OrigDataType: 
T_675: (in 0x0000 : word16)
  Class: Eq_675
  DataType: 
  OrigDataType: 
T_676: (in di_260 + 0x0000 : word16)
  Class: Eq_676
  DataType: 
  OrigDataType: 
T_677: (in Mem6[es_231:di_260 + 0x0000:byte] : byte)
  Class: Eq_674
  DataType: 
  OrigDataType: 
T_678: (in 0x00 != Mem6[es_231:di_260 + 0x0000:byte] : bool)
  Class: Eq_678
  DataType: 
  OrigDataType: 
T_679: (in 0x0000 : word16)
  Class: Eq_664
  DataType: 
  OrigDataType: 
T_680: (in cx_234 == 0x0000 : bool)
  Class: Eq_680
  DataType: 
  OrigDataType: 
T_681: (in 0x7F : byte)
  Class: Eq_681
  DataType: 
  OrigDataType: 
T_682: (in cl_233 ^ 0x7F : byte)
  Class: Eq_682
  DataType: 
  OrigDataType: 
T_683: (in DPB(cx_234, cl_233 ^ 0x7F, 0, 8) : word16)
  Class: Eq_639
  DataType: 
  OrigDataType: 
T_684: (in ss : selector)
  Class: Eq_684
  DataType: 
  OrigDataType: 
T_685: (in 0x0002 : word16)
  Class: Eq_685
  DataType: 
  OrigDataType: 
T_686: (in di_83 - 0x0002 : word16)
  Class: Eq_686
  DataType: 
  OrigDataType: 
T_687: (in Mem93[ss:di_83 - 0x0002:word16] : word16)
  Class: Eq_639
  DataType: 
  OrigDataType: 
T_688: (in cx_105 : word16)
  Class: Eq_688
  DataType: 
  OrigDataType: 
T_689: (in 0x0001 : word16)
  Class: Eq_689
  DataType: 
  OrigDataType: 
T_690: (in cx_25 - 0x0001 : word16)
  Class: Eq_690
  DataType: 
  OrigDataType: 
T_691: (in 0x0001 : word16)
  Class: Eq_691
  DataType: 
  OrigDataType: 
T_692: (in cx_25 - 0x0001 + 0x0001 : word16)
  Class: Eq_688
  DataType: 
  OrigDataType: 
T_693: (in di_104 : word16)
  Class: Eq_111
  DataType: 
  OrigDataType: 
T_694: (in 0x00 : byte)
  Class: Eq_694
  DataType: 
  OrigDataType: 
T_695: (in 0x0000 : word16)
  Class: Eq_695
  DataType: 
  OrigDataType: 
T_696: (in di_104 + 0x0000 : word16)
  Class: Eq_696
  DataType: 
  OrigDataType: 
T_697: (in Mem109[ss:di_104 + 0x0000:byte] : byte)
  Class: Eq_694
  DataType: 
  OrigDataType: 
T_698: (in di_110 : word16)
  Class: Eq_698
  DataType: 
  OrigDataType: 
T_699: (in 0x0000 : word16)
  Class: Eq_699
  DataType: 
  OrigDataType: 
T_700: (in di_104 + 0x0000 : word16)
  Class: Eq_698
  DataType: 
  OrigDataType: 
T_701: (in si_113 : word16)
  Class: Eq_701
  DataType: 
  OrigDataType: 
T_702: (in 0x0081 : word16)
  Class: Eq_701
  DataType: 
  OrigDataType: 
T_703: (in cx_115 : word16)
  Class: Eq_703
  DataType: 
  OrigDataType: 
T_704: (in 0x0001 : word16)
  Class: Eq_704
  DataType: 
  OrigDataType: 
T_705: (in ax_13 + 0x0001 : word16)
  Class: Eq_703
  DataType: 
  OrigDataType: 
T_706: (in ax_118 : word16)
  Class: Eq_688
  DataType: 
  OrigDataType: 
T_707: (in al_120 : byte)
  Class: Eq_707
  DataType: 
  OrigDataType: 
T_708: (in (byte) cx_105 : byte)
  Class: Eq_707
  DataType: 
  OrigDataType: 
T_709: (in dx_121 : word16)
  Class: Eq_688
  DataType: 
  OrigDataType: 
T_710: (in bx_122 : word16)
  Class: Eq_710
  DataType: 
  OrigDataType: 
T_711: (in 0x0000 : word16)
  Class: Eq_711
  DataType: 
  OrigDataType: 
T_712: (in cx_105 + 0x0000 : word16)
  Class: Eq_710
  DataType: 
  OrigDataType: 
T_713: (in 0x0000 : word16)
  Class: Eq_713
  DataType: 
  OrigDataType: 
T_714: (in si_103 + 0x0000 : word16)
  Class: Eq_714
  DataType: 
  OrigDataType: 
T_715: (in Mem93[es_231:si_103 + 0x0000:byte] : byte)
  Class: Eq_715
  DataType: 
  OrigDataType: 
T_716: (in 0x0000 : word16)
  Class: Eq_716
  DataType: 
  OrigDataType: 
T_717: (in di_104 + 0x0000 : word16)
  Class: Eq_717
  DataType: 
  OrigDataType: 
T_718: (in Mem102[ss:di_104 + 0x0000:byte] : byte)
  Class: Eq_715
  DataType: 
  OrigDataType: 
T_719: (in 0x0001 : word16)
  Class: Eq_719
  DataType: 
  OrigDataType: 
T_720: (in si_103 + 0x0001 : word16)
  Class: Eq_111
  DataType: 
  OrigDataType: 
T_721: (in 0x0001 : word16)
  Class: Eq_721
  DataType: 
  OrigDataType: 
T_722: (in di_104 + 0x0001 : word16)
  Class: Eq_111
  DataType: 
  OrigDataType: 
T_723: (in 0x0001 : word16)
  Class: Eq_723
  DataType: 
  OrigDataType: 
T_724: (in cx_105 - 0x0001 : word16)
  Class: Eq_688
  DataType: 
  OrigDataType: 
T_725: (in 0xFFFF : word16)
  Class: Eq_688
  DataType: 
  OrigDataType: 
T_726: (in cx_105 == 0xFFFF : bool)
  Class: Eq_726
  DataType: 
  OrigDataType: 
T_727: (in 0x20 : byte)
  Class: Eq_707
  DataType: 
  OrigDataType: 
T_728: (in al_120 == 0x20 : bool)
  Class: Eq_728
  DataType: 
  OrigDataType: 
T_729: (in C_138 : byte)
  Class: Eq_729
  DataType: 
  OrigDataType: 
T_730: (in cx_187 : word16)
  Class: Eq_730
  DataType: 
  OrigDataType: 
T_731: (in di_83 - 0x0002 : word16)
  Class: Eq_731
  DataType: 
  OrigDataType: 
T_732: (in Mem109[ss:di_83 - 0x0002:word16] : word16)
  Class: Eq_732
  DataType: 
  OrigDataType: 
T_733: (in Mem109[ss:di_83 - 0x0002:word16] + dx_121 : word16)
  Class: Eq_730
  DataType: 
  OrigDataType: 
T_734: (in ds_189 : selector)
  Class: Eq_734
  DataType: 
  OrigDataType: 
T_735: (in 0x02F8 : word16)
  Class: Eq_735
  DataType: 
  OrigDataType: 
T_736: (in Mem109[0x0800:0x02F8:selector] : selector)
  Class: Eq_734
  DataType: 
  OrigDataType: 
T_737: (in *dsOut : selector)
  Class: Eq_734
  DataType: 
  OrigDataType: 
T_738: (in 0x0084 : word16)
  Class: Eq_738
  DataType: 
  OrigDataType: 
T_739: (in Mem190[ds_189:0x0084:word16] : word16)
  Class: Eq_710
  DataType: 
  OrigDataType: 
T_740: (in bp_195 : word16)
  Class: Eq_740
  DataType: 
  OrigDataType: 
T_741: (in 0x0001 : word16)
  Class: Eq_741
  DataType: 
  OrigDataType: 
T_742: (in bx_122 + 0x0001 : word16)
  Class: Eq_742
  DataType: 
  OrigDataType: 
T_743: (in 0x0002 : word16)
  Class: Eq_743
  DataType: 
  OrigDataType: 
T_744: (in (bx_122 + 0x0001) * 0x0002 : word16)
  Class: Eq_744
  DataType: 
  OrigDataType: 
T_745: (in di_83 - (bx_122 + 0x0001) * 0x0002 : word16)
  Class: Eq_740
  DataType: 
  OrigDataType: 
T_746: (in 0x0000 : word16)
  Class: Eq_740
  DataType: 
  OrigDataType: 
T_747: (in bp_195 <u 0x0000 : bool)
  Class: Eq_747
  DataType: 
  OrigDataType: 
T_748: (in CZ_180 : byte)
  Class: Eq_729
  DataType: 
  OrigDataType: 
T_749: (in fn0800_0385 : ptr32)
  Class: Eq_749
  DataType: 
  OrigDataType: 
T_750: (in signature of fn0800_0385 : void)
  Class: Eq_749
  DataType: 
  OrigDataType: 
T_751: (in ax : word16)
  Class: Eq_688
  DataType: 
  OrigDataType: 
T_752: (in cx : word16)
  Class: Eq_703
  DataType: 
  OrigDataType: 
T_753: (in dx : word16)
  Class: Eq_688
  DataType: 
  OrigDataType: 
T_754: (in bx : word16)
  Class: Eq_710
  DataType: 
  OrigDataType: 
T_755: (in si : word16)
  Class: Eq_701
  DataType: 
  OrigDataType: 
T_756: (in di : word16)
  Class: Eq_698
  DataType: 
  OrigDataType: 
T_757: (in es : selector)
  Class: Eq_684
  DataType: 
  OrigDataType: 
T_758: (in ds : selector)
  Class: Eq_619
  DataType: 
  OrigDataType: 
T_759: (in axOut : ptr16)
  Class: Eq_759
  DataType: 
  OrigDataType: 
T_760: (in cxOut : ptr16)
  Class: Eq_760
  DataType: 
  OrigDataType: 
T_761: (in dxOut : ptr16)
  Class: Eq_761
  DataType: 
  OrigDataType: 
T_762: (in bxOut : ptr16)
  Class: Eq_762
  DataType: 
  OrigDataType: 
T_763: (in siOut : ptr16)
  Class: Eq_763
  DataType: 
  OrigDataType: 
T_764: (in diOut : ptr16)
  Class: Eq_764
  DataType: 
  OrigDataType: 
T_765: (in out ax_118 : ptr16)
  Class: Eq_759
  DataType: 
  OrigDataType: 
T_766: (in out cx_115 : ptr16)
  Class: Eq_760
  DataType: 
  OrigDataType: 
T_767: (in out dx_121 : ptr16)
  Class: Eq_761
  DataType: 
  OrigDataType: 
T_768: (in out bx_122 : ptr16)
  Class: Eq_762
  DataType: 
  OrigDataType: 
T_769: (in out si_113 : ptr16)
  Class: Eq_763
  DataType: 
  OrigDataType: 
T_770: (in out di_110 : ptr16)
  Class: Eq_764
  DataType: 
  OrigDataType: 
T_771: (in fn0800_0385(ax_118, cx_115, dx_121, bx_122, si_113, di_110, ss, es_8, out ax_118, out cx_115, out dx_121, out bx_122, out si_113, out di_110) : byte)
  Class: Eq_729
  DataType: 
  OrigDataType: 
T_772: (in 0x00 : byte)
  Class: Eq_707
  DataType: 
  OrigDataType: 
T_773: (in 0x00 : byte)
  Class: Eq_773
  DataType: 
  OrigDataType: 
T_774: (in DPB(ax_118, 0x00, 0, 8) : word16)
  Class: Eq_688
  DataType: 
  OrigDataType: 
T_775: (in 0x0D : byte)
  Class: Eq_707
  DataType: 
  OrigDataType: 
T_776: (in al_120 == 0x0D : bool)
  Class: Eq_776
  DataType: 
  OrigDataType: 
T_777: (in 0x09 : byte)
  Class: Eq_707
  DataType: 
  OrigDataType: 
T_778: (in al_120 != 0x09 : bool)
  Class: Eq_778
  DataType: 
  OrigDataType: 
T_779: (in CZ_137 : byte)
  Class: Eq_729
  DataType: 
  OrigDataType: 
T_780: (in fn0800_0385 : ptr32)
  Class: Eq_749
  DataType: 
  OrigDataType: 
T_781: (in out ax_118 : ptr16)
  Class: Eq_759
  DataType: 
  OrigDataType: 
T_782: (in out cx_115 : ptr16)
  Class: Eq_760
  DataType: 
  OrigDataType: 
T_783: (in out dx_121 : ptr16)
  Class: Eq_761
  DataType: 
  OrigDataType: 
T_784: (in out bx_122 : ptr16)
  Class: Eq_762
  DataType: 
  OrigDataType: 
T_785: (in out si_113 : ptr16)
  Class: Eq_763
  DataType: 
  OrigDataType: 
T_786: (in out di_110 : ptr16)
  Class: Eq_764
  DataType: 
  OrigDataType: 
T_787: (in fn0800_0385(ax_118, cx_115, dx_121, bx_122, si_113, di_110, ss, es_8, out ax_118, out cx_115, out dx_121, out bx_122, out si_113, out di_110) : byte)
  Class: Eq_729
  DataType: 
  OrigDataType: 
T_788: (in fn0800_01E2 : ptr32)
  Class: Eq_109
  DataType: 
  OrigDataType: 
T_789: (in fn0800_01E2(si_103) : void)
  Class: Eq_789
  DataType: 
  OrigDataType: 
T_790: (in 0x0086 : word16)
  Class: Eq_790
  DataType: 
  OrigDataType: 
T_791: (in Mem199[ds_189:0x0086:word16] : word16)
  Class: Eq_740
  DataType: 
  OrigDataType: 
T_792: (in 0x0000 : word16)
  Class: Eq_792
  DataType: 
  OrigDataType: 
T_793: (in 0x0000 : word16)
  Class: Eq_793
  DataType: 
  OrigDataType: 
T_794: (in bp_195 + 0x0000 : word16)
  Class: Eq_794
  DataType: 
  OrigDataType: 
T_795: (in Mem214[ss:bp_195 + 0x0000:word16] : word16)
  Class: Eq_792
  DataType: 
  OrigDataType: 
T_796: (in 0x02F6 : word16)
  Class: Eq_796
  DataType: 
  OrigDataType: 
T_797: (in Mem214[0x0800:0x02F6:word16] : word16)
  Class: Eq_797
  DataType: 
  OrigDataType: 
T_798: (in 0x0000 : word16)
  Class: Eq_798
  DataType: 
  OrigDataType: 
T_799: (in bp_195 + 0x0000 : word16)
  Class: Eq_799
  DataType: 
  OrigDataType: 
T_800: (in Mem216[ss:bp_195 + 0x0000:word16] : word16)
  Class: Eq_111
  DataType: 
  OrigDataType: 
T_801: (in 0x0002 : word16)
  Class: Eq_801
  DataType: 
  OrigDataType: 
T_802: (in bp_195 + 0x0002 : word16)
  Class: Eq_740
  DataType: 
  OrigDataType: 
T_803: (in al_221 : byte)
  Class: Eq_803
  DataType: 
  OrigDataType: 
T_804: (in 0x0000 : word16)
  Class: Eq_804
  DataType: 
  OrigDataType: 
T_805: (in si_103 + 0x0000 : word16)
  Class: Eq_805
  DataType: 
  OrigDataType: 
T_806: (in Mem216[ds_189:si_103 + 0x0000:byte] : byte)
  Class: Eq_803
  DataType: 
  OrigDataType: 
T_807: (in 0x0001 : word16)
  Class: Eq_807
  DataType: 
  OrigDataType: 
T_808: (in si_103 + 0x0001 : word16)
  Class: Eq_111
  DataType: 
  OrigDataType: 
T_809: (in 0x0001 : word16)
  Class: Eq_809
  DataType: 
  OrigDataType: 
T_810: (in cx_187 - 0x0001 : word16)
  Class: Eq_730
  DataType: 
  OrigDataType: 
T_811: (in 0x00 : byte)
  Class: Eq_803
  DataType: 
  OrigDataType: 
T_812: (in al_221 != 0x00 : bool)
  Class: Eq_812
  DataType: 
  OrigDataType: 
T_813: (in 0x0000 : word16)
  Class: Eq_730
  DataType: 
  OrigDataType: 
T_814: (in cx_187 != 0x0000 : bool)
  Class: Eq_814
  DataType: 
  OrigDataType: 
T_815: (in al_221 != 0x00 && cx_187 != 0x0000 : bool)
  Class: Eq_815
  DataType: 
  OrigDataType: 
T_816: (in 0x00 : byte)
  Class: Eq_803
  DataType: 
  OrigDataType: 
T_817: (in al_221 == 0x00 : bool)
  Class: Eq_817
  DataType: 
  OrigDataType: 
T_818: (in 0x0000 : word16)
  Class: Eq_730
  DataType: 
  OrigDataType: 
T_819: (in cx_187 == 0x0000 : bool)
  Class: Eq_819
  DataType: 
  OrigDataType: 
T_820: (in CZ : byte)
  Class: Eq_820
  DataType: 
  OrigDataType: 
T_821: (in *dxOut : word16)
  Class: Eq_688
  DataType: 
  OrigDataType: 
T_822: (in *diOut : word16)
  Class: Eq_698
  DataType: 
  OrigDataType: 
T_823: (in *bxOut : word16)
  Class: Eq_710
  DataType: 
  OrigDataType: 
T_824: (in *cxOut : word16)
  Class: Eq_703
  DataType: 
  OrigDataType: 
T_825: (in *siOut : word16)
  Class: Eq_701
  DataType: 
  OrigDataType: 
T_826: (in ax_15 : word16)
  Class: Eq_688
  DataType: 
  OrigDataType: 
T_827: (in al_4 : byte)
  Class: Eq_827
  DataType: 
  OrigDataType: 
T_828: (in (byte) ax : byte)
  Class: Eq_827
  DataType: 
  OrigDataType: 
T_829: (in 0x0000 : word16)
  Class: Eq_688
  DataType: 
  OrigDataType: 
T_830: (in ax == 0x0000 : bool)
  Class: Eq_830
  DataType: 
  OrigDataType: 
T_831: (in ax_21 : word16)
  Class: Eq_831
  DataType: 
  OrigDataType: 
T_832: (in 0x00 : byte)
  Class: Eq_832
  DataType: 
  OrigDataType: 
T_833: (in DPB(ax_15, 0x00, 0, 8) : word16)
  Class: Eq_833
  DataType: 
  OrigDataType: 
T_834: (in *axOut : word16)
  Class: Eq_833
  DataType: 
  OrigDataType: 
T_835: (in CZ_26 : byte)
  Class: Eq_835
  DataType: 
  OrigDataType: 
T_836: (in true : bool)
  Class: Eq_835
  DataType: 
  OrigDataType: 
T_837: (in 0x0000 : word16)
  Class: Eq_703
  DataType: 
  OrigDataType: 
T_838: (in cx == 0x0000 : bool)
  Class: Eq_838
  DataType: 
  OrigDataType: 
T_839: (in 0x0000 : word16)
  Class: Eq_839
  DataType: 
  OrigDataType: 
T_840: (in di + 0x0000 : word16)
  Class: Eq_840
  DataType: 
  OrigDataType: 
T_841: (in Mem78[es:di + 0x0000:byte] : byte)
  Class: Eq_827
  DataType: 
  OrigDataType: 
T_842: (in dx_77 : word16)
  Class: Eq_842
  DataType: 
  OrigDataType: 
T_843: (in 0x0001 : word16)
  Class: Eq_843
  DataType: 
  OrigDataType: 
T_844: (in dx + 0x0001 : word16)
  Class: Eq_844
  DataType: 
  OrigDataType: 
T_845: (in *dxOut : word16)
  Class: Eq_844
  DataType: 
  OrigDataType: 
T_846: (in di_80 : word16)
  Class: Eq_846
  DataType: 
  OrigDataType: 
T_847: (in 0x0001 : word16)
  Class: Eq_847
  DataType: 
  OrigDataType: 
T_848: (in di + 0x0001 : word16)
  Class: Eq_848
  DataType: 
  OrigDataType: 
T_849: (in *diOut : word16)
  Class: Eq_848
  DataType: 
  OrigDataType: 
T_850: (in DPB(ax, al_4, 0, 8) : word16)
  Class: Eq_688
  DataType: 
  OrigDataType: 
T_851: (in 0x00 : byte)
  Class: Eq_827
  DataType: 
  OrigDataType: 
T_852: (in al_4 != 0x00 : bool)
  Class: Eq_852
  DataType: 
  OrigDataType: 
T_853: (in bx_86 : word16)
  Class: Eq_853
  DataType: 
  OrigDataType: 
T_854: (in 0x0001 : word16)
  Class: Eq_854
  DataType: 
  OrigDataType: 
T_855: (in bx + 0x0001 : word16)
  Class: Eq_855
  DataType: 
  OrigDataType: 
T_856: (in *bxOut : word16)
  Class: Eq_855
  DataType: 
  OrigDataType: 
T_857: (in al_46 : byte)
  Class: Eq_857
  DataType: 
  OrigDataType: 
T_858: (in 0x0000 : word16)
  Class: Eq_858
  DataType: 
  OrigDataType: 
T_859: (in si + 0x0000 : word16)
  Class: Eq_859
  DataType: 
  OrigDataType: 
T_860: (in Mem0[ds:si + 0x0000:byte] : byte)
  Class: Eq_857
  DataType: 
  OrigDataType: 
T_861: (in si_47 : word16)
  Class: Eq_861
  DataType: 
  OrigDataType: 
T_862: (in 0x0001 : word16)
  Class: Eq_862
  DataType: 
  OrigDataType: 
T_863: (in si + 0x0001 : word16)
  Class: Eq_861
  DataType: 
  OrigDataType: 
T_864: (in *siOut : word16)
  Class: Eq_861
  DataType: 
  OrigDataType: 
T_865: (in cx_48 : word16)
  Class: Eq_865
  DataType: 
  OrigDataType: 
T_866: (in 0x0001 : word16)
  Class: Eq_866
  DataType: 
  OrigDataType: 
T_867: (in cx - 0x0001 : word16)
  Class: Eq_865
  DataType: 
  OrigDataType: 
T_868: (in *cxOut : word16)
  Class: Eq_865
  DataType: 
  OrigDataType: 
T_869: (in ax_50 : word16)
  Class: Eq_869
  DataType: 
  OrigDataType: 
T_870: (in 0x22 : byte)
  Class: Eq_870
  DataType: 
  OrigDataType: 
T_871: (in al_46 - 0x22 : byte)
  Class: Eq_871
  DataType: 
  OrigDataType: 
T_872: (in DPB(ax_15, al_46 - 0x22, 0, 8) : word16)
  Class: Eq_872
  DataType: 
  OrigDataType: 
T_873: (in *axOut : word16)
  Class: Eq_872
  DataType: 
  OrigDataType: 
T_874: (in al_46 - 0x22 : byte)
  Class: Eq_874
  DataType: 
  OrigDataType: 
T_875: (in cond(al_46 - 0x22) : byte)
  Class: Eq_835
  DataType: 
  OrigDataType: 
T_876: (in 0x22 : byte)
  Class: Eq_857
  DataType: 
  OrigDataType: 
T_877: (in al_46 == 0x22 : bool)
  Class: Eq_877
  DataType: 
  OrigDataType: 
T_878: (in ax_57 : word16)
  Class: Eq_878
  DataType: 
  OrigDataType: 
T_879: (in DPB(ax_15, al_46, 0, 8) : word16)
  Class: Eq_879
  DataType: 
  OrigDataType: 
T_880: (in *axOut : word16)
  Class: Eq_879
  DataType: 
  OrigDataType: 
T_881: (in 0x5C : byte)
  Class: Eq_857
  DataType: 
  OrigDataType: 
T_882: (in al_46 != 0x5C : bool)
  Class: Eq_882
  DataType: 
  OrigDataType: 
T_883: (in si_64 : word16)
  Class: Eq_883
  DataType: 
  OrigDataType: 
T_884: (in *siOut : word16)
  Class: Eq_861
  DataType: 
  OrigDataType: 
T_885: (in false : bool)
  Class: Eq_835
  DataType: 
  OrigDataType: 
T_886: (in si + 0x0001 : word16)
  Class: Eq_886
  DataType: 
  OrigDataType: 
T_887: (in Mem0[ds:si + 0x0001:byte] : byte)
  Class: Eq_887
  DataType: 
  OrigDataType: 
T_888: (in 0x22 : byte)
  Class: Eq_887
  DataType: 
  OrigDataType: 
T_889: (in Mem0[ds:si + 0x0001:byte] != 0x22 : bool)
  Class: Eq_889
  DataType: 
  OrigDataType: 
T_890: (in ax_73 : word16)
  Class: Eq_890
  DataType: 
  OrigDataType: 
T_891: (in si + 0x0001 : word16)
  Class: Eq_891
  DataType: 
  OrigDataType: 
T_892: (in Mem0[ds:si + 0x0001:byte] : byte)
  Class: Eq_892
  DataType: 
  OrigDataType: 
T_893: (in DPB(ax_15, Mem0[ds:si + 0x0001:byte], 0, 8) : word16)
  Class: Eq_893
  DataType: 
  OrigDataType: 
T_894: (in *axOut : word16)
  Class: Eq_893
  DataType: 
  OrigDataType: 
T_895: (in 0x0002 : word16)
  Class: Eq_895
  DataType: 
  OrigDataType: 
T_896: (in si + 0x0002 : word16)
  Class: Eq_861
  DataType: 
  OrigDataType: 
T_897: (in cx_75 : word16)
  Class: Eq_897
  DataType: 
  OrigDataType: 
T_898: (in 0x0002 : word16)
  Class: Eq_898
  DataType: 
  OrigDataType: 
T_899: (in cx - 0x0002 : word16)
  Class: Eq_899
  DataType: 
  OrigDataType: 
T_900: (in *cxOut : word16)
  Class: Eq_899
  DataType: 
  OrigDataType: 
T_901: (in cx_4 : word16)
  Class: Eq_901
  DataType: 
  OrigDataType: 
T_902: (in 0x008A : word16)
  Class: Eq_902
  DataType: 
  OrigDataType: 
T_903: (in Mem0[ds:0x008A:word16] : word16)
  Class: Eq_901
  DataType: 
  OrigDataType: 
T_904: (in ax_7 : word16)
  Class: Eq_904
  DataType: 
  OrigDataType: 
T_905: (in fn0800_0536 : ptr32)
  Class: Eq_905
  DataType: 
  OrigDataType: 
T_906: (in signature of fn0800_0536 : void)
  Class: Eq_905
  DataType: 
  OrigDataType: 
T_907: (in ds : selector)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_908: (in wArg02 : word16)
  Class: Eq_901
  DataType: 
  OrigDataType: 
T_909: (in fn0800_0536(ds, cx_4) : word16)
  Class: Eq_904
  DataType: 
  OrigDataType: 
T_910: (in cx_68 : word16)
  Class: Eq_901
  DataType: 
  OrigDataType: 
T_911: (in di_10 : word16)
  Class: Eq_904
  DataType: 
  OrigDataType: 
T_912: (in *diOut : word16)
  Class: Eq_904
  DataType: 
  OrigDataType: 
T_913: (in al_12 : byte)
  Class: Eq_913
  DataType: 
  OrigDataType: 
T_914: (in (byte) ax_7 : byte)
  Class: Eq_914
  DataType: 
  OrigDataType: 
T_915: (in *alOut : byte)
  Class: Eq_914
  DataType: 
  OrigDataType: 
T_916: (in 0x0000 : word16)
  Class: Eq_904
  DataType: 
  OrigDataType: 
T_917: (in ax_7 == 0x0000 : bool)
  Class: Eq_917
  DataType: 
  OrigDataType: 
T_918: (in ds_61 : selector)
  Class: Eq_918
  DataType: 
  OrigDataType: 
T_919: (in 0x008C : word16)
  Class: Eq_919
  DataType: 
  OrigDataType: 
T_920: (in Mem0[ds:0x008C:selector] : selector)
  Class: Eq_918
  DataType: 
  OrigDataType: 
T_921: (in 0x0000 : word16)
  Class: Eq_111
  DataType: 
  OrigDataType: 
T_922: (in ax_81 : word16)
  Class: Eq_922
  DataType: 
  OrigDataType: 
T_923: (in fn0800_0536 : ptr32)
  Class: Eq_905
  DataType: 
  OrigDataType: 
T_924: (in 0x008E : word16)
  Class: Eq_924
  DataType: 
  OrigDataType: 
T_925: (in Mem0[ds:0x008E:word16] : word16)
  Class: Eq_901
  DataType: 
  OrigDataType: 
T_926: (in fn0800_0536(ds, Mem0[ds:0x008E:word16]) : word16)
  Class: Eq_922
  DataType: 
  OrigDataType: 
T_927: (in 0x0088 : word16)
  Class: Eq_927
  DataType: 
  OrigDataType: 
T_928: (in Mem86[ds:0x0088:word16] : word16)
  Class: Eq_922
  DataType: 
  OrigDataType: 
T_929: (in di_106 : word16)
  Class: Eq_904
  DataType: 
  OrigDataType: 
T_930: (in *diOut : word16)
  Class: Eq_904
  DataType: 
  OrigDataType: 
T_931: (in bx_102 : word16)
  Class: Eq_922
  DataType: 
  OrigDataType: 
T_932: (in al_88 : byte)
  Class: Eq_932
  DataType: 
  OrigDataType: 
T_933: (in (byte) ax_81 : byte)
  Class: Eq_933
  DataType: 
  OrigDataType: 
T_934: (in *alOut : byte)
  Class: Eq_933
  DataType: 
  OrigDataType: 
T_935: (in 0x0000 : word16)
  Class: Eq_922
  DataType: 
  OrigDataType: 
T_936: (in ax_81 != 0x0000 : bool)
  Class: Eq_936
  DataType: 
  OrigDataType: 
T_937: (in 0x0000 : word16)
  Class: Eq_937
  DataType: 
  OrigDataType: 
T_938: (in si + 0x0000 : word16)
  Class: Eq_938
  DataType: 
  OrigDataType: 
T_939: (in Mem0[ds_61:si + 0x0000:byte] : byte)
  Class: Eq_939
  DataType: 
  OrigDataType: 
T_940: (in 0x0000 : word16)
  Class: Eq_940
  DataType: 
  OrigDataType: 
T_941: (in di_10 + 0x0000 : word16)
  Class: Eq_941
  DataType: 
  OrigDataType: 
T_942: (in Mem70[ds:di_10 + 0x0000:byte] : byte)
  Class: Eq_939
  DataType: 
  OrigDataType: 
T_943: (in 0x0001 : word16)
  Class: Eq_943
  DataType: 
  OrigDataType: 
T_944: (in si + 0x0001 : word16)
  Class: Eq_111
  DataType: 
  OrigDataType: 
T_945: (in 0x0001 : word16)
  Class: Eq_945
  DataType: 
  OrigDataType: 
T_946: (in di_10 + 0x0001 : word16)
  Class: Eq_904
  DataType: 
  OrigDataType: 
T_947: (in 0x0001 : word16)
  Class: Eq_947
  DataType: 
  OrigDataType: 
T_948: (in cx_68 - 0x0001 : word16)
  Class: Eq_901
  DataType: 
  OrigDataType: 
T_949: (in 0x0000 : word16)
  Class: Eq_901
  DataType: 
  OrigDataType: 
T_950: (in cx_68 == 0x0000 : bool)
  Class: Eq_950
  DataType: 
  OrigDataType: 
T_951: (in fn0800_01E2 : ptr32)
  Class: Eq_109
  DataType: 
  OrigDataType: 
T_952: (in fn0800_01E2(si) : void)
  Class: Eq_952
  DataType: 
  OrigDataType: 
T_953: (in al_93 : byte)
  Class: Eq_953
  DataType: 
  OrigDataType: 
T_954: (in 0x00 : byte)
  Class: Eq_954
  DataType: 
  OrigDataType: 
T_955: (in *alOut : byte)
  Class: Eq_954
  DataType: 
  OrigDataType: 
T_956: (in cx_100 : word16)
  Class: Eq_956
  DataType: 
  OrigDataType: 
T_957: (in 0xFFFF : word16)
  Class: Eq_956
  DataType: 
  OrigDataType: 
T_958: (in 0x0000 : word16)
  Class: Eq_958
  DataType: 
  OrigDataType: 
T_959: (in di_106 + 0x0000 : word16)
  Class: Eq_959
  DataType: 
  OrigDataType: 
T_960: (in Mem101[ds:di_106 + 0x0000:byte] : byte)
  Class: Eq_960
  DataType: 
  OrigDataType: 
T_961: (in 0x00 : byte)
  Class: Eq_960
  DataType: 
  OrigDataType: 
T_962: (in Mem101[ds:di_106 + 0x0000:byte] != 0x00 : bool)
  Class: Eq_962
  DataType: 
  OrigDataType: 
T_963: (in di_117 : word16)
  Class: Eq_904
  DataType: 
  OrigDataType: 
T_964: (in 0x0001 : word16)
  Class: Eq_964
  DataType: 
  OrigDataType: 
T_965: (in di_117 + 0x0001 : word16)
  Class: Eq_965
  DataType: 
  OrigDataType: 
T_966: (in *diOut : word16)
  Class: Eq_965
  DataType: 
  OrigDataType: 
T_967: (in 0x0001 : word16)
  Class: Eq_967
  DataType: 
  OrigDataType: 
T_968: (in cx_100 - 0x0001 : word16)
  Class: Eq_956
  DataType: 
  OrigDataType: 
T_969: (in 0x00 : byte)
  Class: Eq_969
  DataType: 
  OrigDataType: 
T_970: (in 0x0000 : word16)
  Class: Eq_970
  DataType: 
  OrigDataType: 
T_971: (in di_117 + 0x0000 : word16)
  Class: Eq_971
  DataType: 
  OrigDataType: 
T_972: (in Mem101[ds:di_117 + 0x0000:byte] : byte)
  Class: Eq_969
  DataType: 
  OrigDataType: 
T_973: (in 0x00 != Mem101[ds:di_117 + 0x0000:byte] : bool)
  Class: Eq_973
  DataType: 
  OrigDataType: 
T_974: (in 0x0000 : word16)
  Class: Eq_956
  DataType: 
  OrigDataType: 
T_975: (in cx_100 == 0x0000 : bool)
  Class: Eq_975
  DataType: 
  OrigDataType: 
T_976: (in 0x0000 : word16)
  Class: Eq_976
  DataType: 
  OrigDataType: 
T_977: (in bx_102 + 0x0000 : word16)
  Class: Eq_977
  DataType: 
  OrigDataType: 
T_978: (in Mem101[ds:bx_102 + 0x0000:word16] : word16)
  Class: Eq_904
  DataType: 
  OrigDataType: 
T_979: (in 0x0002 : word16)
  Class: Eq_979
  DataType: 
  OrigDataType: 
T_980: (in bx_102 + 0x0002 : word16)
  Class: Eq_922
  DataType: 
  OrigDataType: 
T_981: (in 0x0000 : word16)
  Class: Eq_981
  DataType: 
  OrigDataType: 
T_982: (in 0x0000 : word16)
  Class: Eq_982
  DataType: 
  OrigDataType: 
T_983: (in bx_102 + 0x0000 : word16)
  Class: Eq_983
  DataType: 
  OrigDataType: 
T_984: (in Mem112[ds:bx_102 + 0x0000:word16] : word16)
  Class: Eq_981
  DataType: 
  OrigDataType: 
T_985: (in ax_16 : word16)
  Class: Eq_985
  DataType: 
  OrigDataType: 
T_986: (in ds : selector)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_987: (in wArg02 : word16)
  Class: Eq_985
  DataType: 
  OrigDataType: 
T_988: (in 0x0006 : word16)
  Class: Eq_988
  DataType: 
  OrigDataType: 
T_989: (in wArg02 + 0x0006 : word16)
  Class: Eq_989
  DataType: 
  OrigDataType: 
T_990: (in Mem0[ds:wArg02 + 0x0006:word16] : word16)
  Class: Eq_985
  DataType: 
  OrigDataType: 
T_991: (in 0x062C : word16)
  Class: Eq_991
  DataType: 
  OrigDataType: 
T_992: (in Mem17[ds:0x062C:word16] : word16)
  Class: Eq_985
  DataType: 
  OrigDataType: 
T_993: (in ax_16 != wArg02 : bool)
  Class: Eq_993
  DataType: 
  OrigDataType: 
T_994: (in si_30 : word16)
  Class: Eq_994
  DataType: 
  OrigDataType: 
T_995: (in 0x0004 : word16)
  Class: Eq_995
  DataType: 
  OrigDataType: 
T_996: (in wArg02 + 0x0004 : word16)
  Class: Eq_996
  DataType: 
  OrigDataType: 
T_997: (in Mem17[ds:wArg02 + 0x0004:word16] : word16)
  Class: Eq_994
  DataType: 
  OrigDataType: 
T_998: (in 0x062C : word16)
  Class: Eq_998
  DataType: 
  OrigDataType: 
T_999: (in Mem17[ds:0x062C:word16] : word16)
  Class: Eq_999
  DataType: 
  OrigDataType: 
T_1000: (in 0x0004 : word16)
  Class: Eq_1000
  DataType: 
  OrigDataType: 
T_1001: (in Mem17[ds:0x062C:word16] + 0x0004 : word16)
  Class: Eq_1001
  DataType: 
  OrigDataType: 
T_1002: (in Mem32[ds:Mem17[ds:0x062C:word16] + 0x0004:word16] : word16)
  Class: Eq_994
  DataType: 
  OrigDataType: 
T_1003: (in 0x062C : word16)
  Class: Eq_1003
  DataType: 
  OrigDataType: 
T_1004: (in Mem32[ds:0x062C:word16] : word16)
  Class: Eq_1004
  DataType: 
  OrigDataType: 
T_1005: (in 0x0006 : word16)
  Class: Eq_1005
  DataType: 
  OrigDataType: 
T_1006: (in si_30 + 0x0006 : word16)
  Class: Eq_1006
  DataType: 
  OrigDataType: 
T_1007: (in Mem34[ds:si_30 + 0x0006:word16] : word16)
  Class: Eq_1004
  DataType: 
  OrigDataType: 
T_1008: (in 0x0000 : word16)
  Class: Eq_1008
  DataType: 
  OrigDataType: 
T_1009: (in 0x062C : word16)
  Class: Eq_1009
  DataType: 
  OrigDataType: 
T_1010: (in Mem28[ds:0x062C:word16] : word16)
  Class: Eq_1008
  DataType: 
  OrigDataType: 
T_1011: (in ax : word16)
  Class: Eq_1011
  DataType: 
  OrigDataType: 
T_1012: (in ds : selector)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_1013: (in wArg02 : word16)
  Class: Eq_1013
  DataType: 
  OrigDataType: 
T_1014: (in 0x0000 : word16)
  Class: Eq_1014
  DataType: 
  OrigDataType: 
T_1015: (in wArg02 + 0x0000 : word16)
  Class: Eq_1015
  DataType: 
  OrigDataType: 
T_1016: (in Mem0[ds:wArg02 + 0x0000:word16] : word16)
  Class: Eq_1016
  DataType: 
  OrigDataType: 
T_1017: (in wArg04 : word16)
  Class: Eq_1017
  DataType: 
  OrigDataType: 
T_1018: (in Mem0[ds:wArg02 + 0x0000:word16] - wArg04 : word16)
  Class: Eq_1018
  DataType: 
  OrigDataType: 
T_1019: (in 0x0000 : word16)
  Class: Eq_1019
  DataType: 
  OrigDataType: 
T_1020: (in wArg02 + 0x0000 : word16)
  Class: Eq_1020
  DataType: 
  OrigDataType: 
T_1021: (in Mem19[ds:wArg02 + 0x0000:word16] : word16)
  Class: Eq_1018
  DataType: 
  OrigDataType: 
T_1022: (in si_21 : word16)
  Class: Eq_1022
  DataType: 
  OrigDataType: 
T_1023: (in 0x0000 : word16)
  Class: Eq_1023
  DataType: 
  OrigDataType: 
T_1024: (in wArg02 + 0x0000 : word16)
  Class: Eq_1024
  DataType: 
  OrigDataType: 
T_1025: (in Mem19[ds:wArg02 + 0x0000:word16] : word16)
  Class: Eq_1025
  DataType: 
  OrigDataType: 
T_1026: (in Mem19[ds:wArg02 + 0x0000:word16] + wArg02 : word16)
  Class: Eq_1022
  DataType: 
  OrigDataType: 
T_1027: (in 0x0001 : word16)
  Class: Eq_1027
  DataType: 
  OrigDataType: 
T_1028: (in wArg04 + 0x0001 : word16)
  Class: Eq_1028
  DataType: 
  OrigDataType: 
T_1029: (in 0x0000 : word16)
  Class: Eq_1029
  DataType: 
  OrigDataType: 
T_1030: (in si_21 + 0x0000 : word16)
  Class: Eq_1030
  DataType: 
  OrigDataType: 
T_1031: (in Mem24[ds:si_21 + 0x0000:word16] : word16)
  Class: Eq_1028
  DataType: 
  OrigDataType: 
T_1032: (in 0x0002 : word16)
  Class: Eq_1032
  DataType: 
  OrigDataType: 
T_1033: (in si_21 + 0x0002 : word16)
  Class: Eq_1033
  DataType: 
  OrigDataType: 
T_1034: (in Mem25[ds:si_21 + 0x0002:word16] : word16)
  Class: Eq_1013
  DataType: 
  OrigDataType: 
T_1035: (in 0x062A : word16)
  Class: Eq_1035
  DataType: 
  OrigDataType: 
T_1036: (in Mem25[ds:0x062A:word16] : word16)
  Class: Eq_1013
  DataType: 
  OrigDataType: 
T_1037: (in Mem25[ds:0x062A:word16] != wArg02 : bool)
  Class: Eq_1037
  DataType: 
  OrigDataType: 
T_1038: (in si_21 + wArg04 : word16)
  Class: Eq_1038
  DataType: 
  OrigDataType: 
T_1039: (in 0x0002 : word16)
  Class: Eq_1039
  DataType: 
  OrigDataType: 
T_1040: (in si_21 + wArg04 + 0x0002 : word16)
  Class: Eq_1040
  DataType: 
  OrigDataType: 
T_1041: (in Mem43[ds:si_21 + wArg04 + 0x0002:word16] : word16)
  Class: Eq_1022
  DataType: 
  OrigDataType: 
T_1042: (in 0x062A : word16)
  Class: Eq_1042
  DataType: 
  OrigDataType: 
T_1043: (in Mem39[ds:0x062A:word16] : word16)
  Class: Eq_1022
  DataType: 
  OrigDataType: 
T_1044: (in 0x0004 : word16)
  Class: Eq_1044
  DataType: 
  OrigDataType: 
T_1045: (in si_21 + 0x0004 : word16)
  Class: Eq_1045
  DataType: 
  OrigDataType: 
T_1046: (in ax : word16)
  Class: Eq_1046
  DataType: 
  OrigDataType: 
T_1047: (in ax_30 : word16)
  Class: Eq_1047
  DataType: 
  OrigDataType: 
T_1048: (in ax_21 : word16)
  Class: Eq_1048
  DataType: 
  OrigDataType: 
T_1049: (in fn0800_05CD : ptr32)
  Class: Eq_1049
  DataType: 
  OrigDataType: 
T_1050: (in signature of fn0800_05CD : void)
  Class: Eq_1049
  DataType: 
  OrigDataType: 
T_1051: (in ds : selector)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_1052: (in wArg02 : word16)
  Class: Eq_1052
  DataType: 
  OrigDataType: 
T_1053: (in wArg04 : word16)
  Class: Eq_1053
  DataType: 
  OrigDataType: 
T_1054: (in ds : selector)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_1055: (in wArg02 : word16)
  Class: Eq_1055
  DataType: 
  OrigDataType: 
T_1056: (in 0xFFFF : word16)
  Class: Eq_1056
  DataType: 
  OrigDataType: 
T_1057: (in wArg02 & 0xFFFF : word16)
  Class: Eq_1052
  DataType: 
  OrigDataType: 
T_1058: (in 0x0000 : word16)
  Class: Eq_1053
  DataType: 
  OrigDataType: 
T_1059: (in fn0800_05CD(ds, wArg02 & 0xFFFF, 0x0000) : word16)
  Class: Eq_1048
  DataType: 
  OrigDataType: 
T_1060: (in 0xFFFF : word16)
  Class: Eq_1048
  DataType: 
  OrigDataType: 
T_1061: (in ax_21 != 0xFFFF : bool)
  Class: Eq_1061
  DataType: 
  OrigDataType: 
T_1062: (in 0x062A : word16)
  Class: Eq_1062
  DataType: 
  OrigDataType: 
T_1063: (in Mem0[ds:0x062A:word16] : word16)
  Class: Eq_1063
  DataType: 
  OrigDataType: 
T_1064: (in 0x0002 : word16)
  Class: Eq_1064
  DataType: 
  OrigDataType: 
T_1065: (in ax_21 + 0x0002 : word16)
  Class: Eq_1065
  DataType: 
  OrigDataType: 
T_1066: (in Mem42[ds:ax_21 + 0x0002:word16] : word16)
  Class: Eq_1063
  DataType: 
  OrigDataType: 
T_1067: (in 0x0001 : word16)
  Class: Eq_1067
  DataType: 
  OrigDataType: 
T_1068: (in wArg02 + 0x0001 : word16)
  Class: Eq_1068
  DataType: 
  OrigDataType: 
T_1069: (in 0x0000 : word16)
  Class: Eq_1069
  DataType: 
  OrigDataType: 
T_1070: (in ax_21 + 0x0000 : word16)
  Class: Eq_1070
  DataType: 
  OrigDataType: 
T_1071: (in Mem45[ds:ax_21 + 0x0000:word16] : word16)
  Class: Eq_1068
  DataType: 
  OrigDataType: 
T_1072: (in 0x062A : word16)
  Class: Eq_1072
  DataType: 
  OrigDataType: 
T_1073: (in Mem46[ds:0x062A:word16] : word16)
  Class: Eq_1048
  DataType: 
  OrigDataType: 
T_1074: (in 0x062A : word16)
  Class: Eq_1074
  DataType: 
  OrigDataType: 
T_1075: (in Mem46[ds:0x062A:word16] : word16)
  Class: Eq_1075
  DataType: 
  OrigDataType: 
T_1076: (in 0x0004 : word16)
  Class: Eq_1076
  DataType: 
  OrigDataType: 
T_1077: (in Mem46[ds:0x062A:word16] + 0x0004 : word16)
  Class: Eq_1047
  DataType: 
  OrigDataType: 
T_1078: (in 0x0000 : word16)
  Class: Eq_1047
  DataType: 
  OrigDataType: 
T_1079: (in ax : word16)
  Class: Eq_1079
  DataType: 
  OrigDataType: 
T_1080: (in ax_30 : word16)
  Class: Eq_1080
  DataType: 
  OrigDataType: 
T_1081: (in ax_21 : word16)
  Class: Eq_1081
  DataType: 
  OrigDataType: 
T_1082: (in fn0800_05CD : ptr32)
  Class: Eq_1049
  DataType: 
  OrigDataType: 
T_1083: (in ds : selector)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_1084: (in wArg02 : word16)
  Class: Eq_1084
  DataType: 
  OrigDataType: 
T_1085: (in 0xFFFF : word16)
  Class: Eq_1085
  DataType: 
  OrigDataType: 
T_1086: (in wArg02 & 0xFFFF : word16)
  Class: Eq_1052
  DataType: 
  OrigDataType: 
T_1087: (in 0x0000 : word16)
  Class: Eq_1053
  DataType: 
  OrigDataType: 
T_1088: (in fn0800_05CD(ds, wArg02 & 0xFFFF, 0x0000) : word16)
  Class: Eq_1081
  DataType: 
  OrigDataType: 
T_1089: (in 0xFFFF : word16)
  Class: Eq_1081
  DataType: 
  OrigDataType: 
T_1090: (in ax_21 != 0xFFFF : bool)
  Class: Eq_1090
  DataType: 
  OrigDataType: 
T_1091: (in 0x062E : word16)
  Class: Eq_1091
  DataType: 
  OrigDataType: 
T_1092: (in Mem40[ds:0x062E:word16] : word16)
  Class: Eq_1081
  DataType: 
  OrigDataType: 
T_1093: (in 0x062A : word16)
  Class: Eq_1093
  DataType: 
  OrigDataType: 
T_1094: (in Mem41[ds:0x062A:word16] : word16)
  Class: Eq_1081
  DataType: 
  OrigDataType: 
T_1095: (in 0x0001 : word16)
  Class: Eq_1095
  DataType: 
  OrigDataType: 
T_1096: (in wArg02 + 0x0001 : word16)
  Class: Eq_1096
  DataType: 
  OrigDataType: 
T_1097: (in 0x0000 : word16)
  Class: Eq_1097
  DataType: 
  OrigDataType: 
T_1098: (in ax_21 + 0x0000 : word16)
  Class: Eq_1098
  DataType: 
  OrigDataType: 
T_1099: (in Mem44[ds:ax_21 + 0x0000:word16] : word16)
  Class: Eq_1096
  DataType: 
  OrigDataType: 
T_1100: (in 0x0004 : word16)
  Class: Eq_1100
  DataType: 
  OrigDataType: 
T_1101: (in ax_21 + 0x0004 : word16)
  Class: Eq_1080
  DataType: 
  OrigDataType: 
T_1102: (in 0x0000 : word16)
  Class: Eq_1080
  DataType: 
  OrigDataType: 
T_1103: (in ax : word16)
  Class: Eq_1103
  DataType: 
  OrigDataType: 
T_1104: (in ax_107 : word16)
  Class: Eq_1104
  DataType: 
  OrigDataType: 
T_1105: (in wArg02 : word16)
  Class: Eq_1105
  DataType: 
  OrigDataType: 
T_1106: (in 0x0000 : word16)
  Class: Eq_1105
  DataType: 
  OrigDataType: 
T_1107: (in wArg02 == 0x0000 : bool)
  Class: Eq_1107
  DataType: 
  OrigDataType: 
T_1108: (in 0x0000 : word16)
  Class: Eq_1104
  DataType: 
  OrigDataType: 
T_1109: (in 0xFFF4 : word16)
  Class: Eq_1105
  DataType: 
  OrigDataType: 
T_1110: (in wArg02 <=u 0xFFF4 : bool)
  Class: Eq_1110
  DataType: 
  OrigDataType: 
T_1111: (in ax_49 : word16)
  Class: Eq_1111
  DataType: 
  OrigDataType: 
T_1112: (in 0x000B : word16)
  Class: Eq_1112
  DataType: 
  OrigDataType: 
T_1113: (in wArg02 + 0x000B : word16)
  Class: Eq_1113
  DataType: 
  OrigDataType: 
T_1114: (in 0xFFF8 : word16)
  Class: Eq_1114
  DataType: 
  OrigDataType: 
T_1115: (in wArg02 + 0x000B & 0xFFF8 : word16)
  Class: Eq_1111
  DataType: 
  OrigDataType: 
T_1116: (in 0x062E : word16)
  Class: Eq_1116
  DataType: 
  OrigDataType: 
T_1117: (in Mem0[ds:0x062E:word16] : word16)
  Class: Eq_1117
  DataType: 
  OrigDataType: 
T_1118: (in 0x0000 : word16)
  Class: Eq_1117
  DataType: 
  OrigDataType: 
T_1119: (in Mem0[ds:0x062E:word16] != 0x0000 : bool)
  Class: Eq_1119
  DataType: 
  OrigDataType: 
T_1120: (in si_109 : word16)
  Class: Eq_1120
  DataType: 
  OrigDataType: 
T_1121: (in 0x062C : word16)
  Class: Eq_1121
  DataType: 
  OrigDataType: 
T_1122: (in Mem0[ds:0x062C:word16] : word16)
  Class: Eq_1120
  DataType: 
  OrigDataType: 
T_1123: (in 0x0000 : word16)
  Class: Eq_1120
  DataType: 
  OrigDataType: 
T_1124: (in si_109 == 0x0000 : bool)
  Class: Eq_1124
  DataType: 
  OrigDataType: 
T_1125: (in fn0800_04FC : ptr32)
  Class: Eq_1125
  DataType: 
  OrigDataType: 
T_1126: (in signature of fn0800_04FC : void)
  Class: Eq_1125
  DataType: 
  OrigDataType: 
T_1127: (in wArg02 : word16)
  Class: Eq_1111
  DataType: 
  OrigDataType: 
T_1128: (in fn0800_04FC(ds, ax_49) : word16)
  Class: Eq_1104
  DataType: 
  OrigDataType: 
T_1129: (in fn0800_04BF : ptr32)
  Class: Eq_1129
  DataType: 
  OrigDataType: 
T_1130: (in signature of fn0800_04BF : void)
  Class: Eq_1129
  DataType: 
  OrigDataType: 
T_1131: (in wArg02 : word16)
  Class: Eq_1111
  DataType: 
  OrigDataType: 
T_1132: (in fn0800_04BF(ds, ax_49) : word16)
  Class: Eq_1132
  DataType: 
  OrigDataType: 
T_1133: (in fn0800_04BF : ptr32)
  Class: Eq_1129
  DataType: 
  OrigDataType: 
T_1134: (in fn0800_04BF(ds, ax_49) : word16)
  Class: Eq_1104
  DataType: 
  OrigDataType: 
T_1135: (in 0x0000 : word16)
  Class: Eq_1135
  DataType: 
  OrigDataType: 
T_1136: (in si_109 + 0x0000 : word16)
  Class: Eq_1136
  DataType: 
  OrigDataType: 
T_1137: (in Mem0[ds:si_109 + 0x0000:word16] : word16)
  Class: Eq_1137
  DataType: 
  OrigDataType: 
T_1138: (in 0x0028 : word16)
  Class: Eq_1138
  DataType: 
  OrigDataType: 
T_1139: (in ax_49 + 0x0028 : word16)
  Class: Eq_1137
  DataType: 
  OrigDataType: 
T_1140: (in Mem0[ds:si_109 + 0x0000:word16] <u ax_49 + 0x0028 : bool)
  Class: Eq_1140
  DataType: 
  OrigDataType: 
T_1141: (in 0x0000 : word16)
  Class: Eq_1141
  DataType: 
  OrigDataType: 
T_1142: (in si_109 + 0x0000 : word16)
  Class: Eq_1142
  DataType: 
  OrigDataType: 
T_1143: (in Mem0[ds:si_109 + 0x0000:word16] : word16)
  Class: Eq_1111
  DataType: 
  OrigDataType: 
T_1144: (in Mem0[ds:si_109 + 0x0000:word16] <u ax_49 : bool)
  Class: Eq_1144
  DataType: 
  OrigDataType: 
T_1145: (in fn0800_0485 : ptr32)
  Class: Eq_1145
  DataType: 
  OrigDataType: 
T_1146: (in signature of fn0800_0485 : void)
  Class: Eq_1145
  DataType: 
  OrigDataType: 
T_1147: (in wArg02 : word16)
  Class: Eq_1120
  DataType: 
  OrigDataType: 
T_1148: (in wArg04 : word16)
  Class: Eq_1111
  DataType: 
  OrigDataType: 
T_1149: (in fn0800_0485(ds, si_109, ax_49) : word16)
  Class: Eq_1104
  DataType: 
  OrigDataType: 
T_1150: (in 0x0006 : word16)
  Class: Eq_1150
  DataType: 
  OrigDataType: 
T_1151: (in si_109 + 0x0006 : word16)
  Class: Eq_1151
  DataType: 
  OrigDataType: 
T_1152: (in Mem0[ds:si_109 + 0x0006:word16] : word16)
  Class: Eq_1120
  DataType: 
  OrigDataType: 
T_1153: (in 0x062C : word16)
  Class: Eq_1153
  DataType: 
  OrigDataType: 
T_1154: (in Mem0[ds:0x062C:word16] : word16)
  Class: Eq_1120
  DataType: 
  OrigDataType: 
T_1155: (in si_109 != Mem0[ds:0x062C:word16] : bool)
  Class: Eq_1155
  DataType: 
  OrigDataType: 
T_1156: (in fn0800_0457 : ptr32)
  Class: Eq_1156
  DataType: 
  OrigDataType: 
T_1157: (in signature of fn0800_0457 : void)
  Class: Eq_1156
  DataType: 
  OrigDataType: 
T_1158: (in wArg02 : word16)
  Class: Eq_1120
  DataType: 
  OrigDataType: 
T_1159: (in fn0800_0457(ds, si_109) : void)
  Class: Eq_1159
  DataType: 
  OrigDataType: 
T_1160: (in 0x0000 : word16)
  Class: Eq_1160
  DataType: 
  OrigDataType: 
T_1161: (in si_109 + 0x0000 : word16)
  Class: Eq_1161
  DataType: 
  OrigDataType: 
T_1162: (in Mem0[ds:si_109 + 0x0000:word16] : word16)
  Class: Eq_1162
  DataType: 
  OrigDataType: 
T_1163: (in 0x0001 : word16)
  Class: Eq_1163
  DataType: 
  OrigDataType: 
T_1164: (in Mem0[ds:si_109 + 0x0000:word16] + 0x0001 : word16)
  Class: Eq_1164
  DataType: 
  OrigDataType: 
T_1165: (in 0x0000 : word16)
  Class: Eq_1165
  DataType: 
  OrigDataType: 
T_1166: (in si_109 + 0x0000 : word16)
  Class: Eq_1166
  DataType: 
  OrigDataType: 
T_1167: (in Mem105[ds:si_109 + 0x0000:word16] : word16)
  Class: Eq_1164
  DataType: 
  OrigDataType: 
T_1168: (in 0x0004 : word16)
  Class: Eq_1168
  DataType: 
  OrigDataType: 
T_1169: (in si_109 + 0x0004 : word16)
  Class: Eq_1104
  DataType: 
  OrigDataType: 
T_1170: (in ax : word16)
  Class: Eq_1170
  DataType: 
  OrigDataType: 
T_1171: (in ax_31 : word16)
  Class: Eq_1171
  DataType: 
  OrigDataType: 
T_1172: (in ax_12 : word16)
  Class: Eq_1172
  DataType: 
  OrigDataType: 
T_1173: (in wArg02 : word16)
  Class: Eq_1173
  DataType: 
  OrigDataType: 
T_1174: (in 0x009E : word16)
  Class: Eq_1174
  DataType: 
  OrigDataType: 
T_1175: (in Mem0[ds:0x009E:word16] : word16)
  Class: Eq_1175
  DataType: 
  OrigDataType: 
T_1176: (in wArg02 + Mem0[ds:0x009E:word16] : word16)
  Class: Eq_1172
  DataType: 
  OrigDataType: 
T_1177: (in dx_cx_18 : ui32)
  Class: Eq_1177
  DataType: 
  OrigDataType: 
T_1178: (in wArg04 : word16)
  Class: Eq_1178
  DataType: 
  OrigDataType: 
T_1179: (in 0x0000 : word16)
  Class: Eq_1172
  DataType: 
  OrigDataType: 
T_1180: (in ax_12 <u 0x0000 : bool)
  Class: Eq_1180
  DataType: 
  OrigDataType: 
T_1181: (in wArg04 + (ax_12 <u 0x0000) : word16)
  Class: Eq_1181
  DataType: 
  OrigDataType: 
T_1182: (in 0x0100 : word16)
  Class: Eq_1182
  DataType: 
  OrigDataType: 
T_1183: (in ax_12 + 0x0100 : word16)
  Class: Eq_1183
  DataType: 
  OrigDataType: 
T_1184: (in SEQ(wArg04 + (ax_12 <u 0x0000), ax_12 + 0x0100) : ui32)
  Class: Eq_1177
  DataType: 
  OrigDataType: 
T_1185: (in cx_22 : word16)
  Class: Eq_1185
  DataType: 
  OrigDataType: 
T_1186: (in 0x00000100 : ui32)
  Class: Eq_1186
  DataType: 
  OrigDataType: 
T_1187: (in dx_cx_18 + 0x00000100 : ui32)
  Class: Eq_1187
  DataType: 
  OrigDataType: 
T_1188: (in (word16) (dx_cx_18 + 0x00000100) : word16)
  Class: Eq_1185
  DataType: 
  OrigDataType: 
T_1189: (in dx_cx_18 + 0x00000100 : ui32)
  Class: Eq_1189
  DataType: 
  OrigDataType: 
T_1190: (in SLICE(dx_cx_18 + 0x00000100, word16, 16) : word16)
  Class: Eq_1190
  DataType: 
  OrigDataType: 
T_1191: (in SEQ(SLICE(dx_cx_18 + 0x00000100, word16, 16), cx_22) : ui32)
  Class: Eq_1191
  DataType: 
  OrigDataType: 
T_1192: (in 0x00000000 : ui32)
  Class: Eq_1191
  DataType: 
  OrigDataType: 
T_1193: (in SEQ(SLICE(dx_cx_18 + 0x00000100, word16, 16), cx_22) != 0x00000000 : bool)
  Class: Eq_1193
  DataType: 
  OrigDataType: 
T_1194: (in 0x0008 : word16)
  Class: Eq_1194
  DataType: 
  OrigDataType: 
T_1195: (in 0x0094 : word16)
  Class: Eq_1195
  DataType: 
  OrigDataType: 
T_1196: (in Mem37[ds:0x0094:word16] : word16)
  Class: Eq_1194
  DataType: 
  OrigDataType: 
T_1197: (in 0xFFFF : word16)
  Class: Eq_1171
  DataType: 
  OrigDataType: 
T_1198: (in fp : ptr16)
  Class: Eq_1198
  DataType: 
  OrigDataType: 
T_1199: (in 0x0002 : word16)
  Class: Eq_1199
  DataType: 
  OrigDataType: 
T_1200: (in fp - 0x0002 : word16)
  Class: Eq_1185
  DataType: 
  OrigDataType: 
T_1201: (in cx_22 >=u fp - 0x0002 : bool)
  Class: Eq_1201
  DataType: 
  OrigDataType: 
T_1202: (in v13_42 : word16)
  Class: Eq_1171
  DataType: 
  OrigDataType: 
T_1203: (in 0x009E : word16)
  Class: Eq_1203
  DataType: 
  OrigDataType: 
T_1204: (in Mem0[ds:0x009E:word16] : word16)
  Class: Eq_1171
  DataType: 
  OrigDataType: 
T_1205: (in Mem43[ds:0x009E:word16] : word16)
  Class: Eq_1172
  DataType: 
  OrigDataType: 
T_1206: (in bx : word16)
  Class: Eq_1206
  DataType: 
  OrigDataType: 
T_1207: (in si_19 : word16)
  Class: Eq_1207
  DataType: 
  OrigDataType: 
T_1208: (in di_20 : word16)
  Class: Eq_1208
  DataType: 
  OrigDataType: 
T_1209: (in bx_21 : word16)
  Class: Eq_1209
  DataType: 
  OrigDataType: 
T_1210: (in fn0800_1039 : ptr32)
  Class: Eq_1210
  DataType: 
  OrigDataType: 
T_1211: (in signature of fn0800_1039 : void)
  Class: Eq_1210
  DataType: 
  OrigDataType: 
T_1212: (in ds : selector)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_1213: (in wArg04 : word16)
  Class: Eq_1213
  DataType: 
  OrigDataType: 
T_1214: (in siOut : ptr16)
  Class: Eq_1214
  DataType: 
  OrigDataType: 
T_1215: (in diOut : ptr16)
  Class: Eq_1215
  DataType: 
  OrigDataType: 
T_1216: (in wArg02 : word16)
  Class: Eq_1213
  DataType: 
  OrigDataType: 
T_1217: (in out si_19 : ptr16)
  Class: Eq_1214
  DataType: 
  OrigDataType: 
T_1218: (in out di_20 : ptr16)
  Class: Eq_1215
  DataType: 
  OrigDataType: 
T_1219: (in fn0800_1039(ds, wArg02, out si_19, out di_20) : word16)
  Class: Eq_1209
  DataType: 
  OrigDataType: 
T_1220: (in bx : word16)
  Class: Eq_1220
  DataType: 
  OrigDataType: 
T_1221: (in bLoc57_108 : byte)
  Class: Eq_1221
  DataType: 
  OrigDataType: 
T_1222: (in 0x50 : byte)
  Class: Eq_1221
  DataType: 
  OrigDataType: 
T_1223: (in sp_151 : word16)
  Class: Eq_1223
  DataType: 
  OrigDataType: 
T_1224: (in fp : ptr16)
  Class: Eq_1224
  DataType: 
  OrigDataType: 
T_1225: (in 0x00A0 : word16)
  Class: Eq_1225
  DataType: 
  OrigDataType: 
T_1226: (in fp - 0x00A0 : word16)
  Class: Eq_1223
  DataType: 
  OrigDataType: 
T_1227: (in di_106 : word16)
  Class: Eq_1227
  DataType: 
  OrigDataType: 
T_1228: (in 0x0056 : word16)
  Class: Eq_1228
  DataType: 
  OrigDataType: 
T_1229: (in fp - 0x0056 : word16)
  Class: Eq_1227
  DataType: 
  OrigDataType: 
T_1230: (in si_104 : word16)
  Class: Eq_1230
  DataType: 
  OrigDataType: 
T_1231: (in wArg04 : word16)
  Class: Eq_1230
  DataType: 
  OrigDataType: 
T_1232: (in al_40 : byte)
  Class: Eq_1232
  DataType: 
  OrigDataType: 
T_1233: (in 0x25 : byte)
  Class: Eq_1232
  DataType: 
  OrigDataType: 
T_1234: (in al_40 == 0x25 : bool)
  Class: Eq_1234
  DataType: 
  OrigDataType: 
T_1235: (in 0x0000 : word16)
  Class: Eq_1235
  DataType: 
  OrigDataType: 
T_1236: (in si_104 + 0x0000 : word16)
  Class: Eq_1236
  DataType: 
  OrigDataType: 
T_1237: (in Mem0[ds:si_104 + 0x0000:byte] : byte)
  Class: Eq_1232
  DataType: 
  OrigDataType: 
T_1238: (in al_100 : byte)
  Class: Eq_1232
  DataType: 
  OrigDataType: 
T_1239: (in ax : word16)
  Class: Eq_1239
  DataType: 
  OrigDataType: 
T_1240: (in DPB(ax, al_100, 0, 8) : word16)
  Class: Eq_1239
  DataType: 
  OrigDataType: 
T_1241: (in 0x0001 : word16)
  Class: Eq_1241
  DataType: 
  OrigDataType: 
T_1242: (in si_104 + 0x0001 : word16)
  Class: Eq_1230
  DataType: 
  OrigDataType: 
T_1243: (in 0x25 : byte)
  Class: Eq_1232
  DataType: 
  OrigDataType: 
T_1244: (in al_100 == 0x25 : bool)
  Class: Eq_1244
  DataType: 
  OrigDataType: 
T_1245: (in 0x0000 : word16)
  Class: Eq_1245
  DataType: 
  OrigDataType: 
T_1246: (in di_106 + 0x0000 : word16)
  Class: Eq_1246
  DataType: 
  OrigDataType: 
T_1247: (in Mem105[ds:di_106 + 0x0000:byte] : byte)
  Class: Eq_1232
  DataType: 
  OrigDataType: 
T_1248: (in v15_107 : byte)
  Class: Eq_1221
  DataType: 
  OrigDataType: 
T_1249: (in 0x01 : byte)
  Class: Eq_1249
  DataType: 
  OrigDataType: 
T_1250: (in bLoc57_108 - 0x01 : byte)
  Class: Eq_1221
  DataType: 
  OrigDataType: 
T_1251: (in 0x0001 : word16)
  Class: Eq_1251
  DataType: 
  OrigDataType: 
T_1252: (in di_106 + 0x0001 : word16)
  Class: Eq_1227
  DataType: 
  OrigDataType: 
T_1253: (in 0x00 : byte)
  Class: Eq_1221
  DataType: 
  OrigDataType: 
T_1254: (in v15_107 > 0x00 : bool)
  Class: Eq_1254
  DataType: 
  OrigDataType: 
T_1255: (in 0x0000 : word16)
  Class: Eq_1255
  DataType: 
  OrigDataType: 
T_1256: (in si_104 + 0x0000 : word16)
  Class: Eq_1256
  DataType: 
  OrigDataType: 
T_1257: (in Mem0[ds:si_104 + 0x0000:byte] : byte)
  Class: Eq_1232
  DataType: 
  OrigDataType: 
T_1258: (in 0x0001 : word16)
  Class: Eq_1258
  DataType: 
  OrigDataType: 
T_1259: (in si_104 + 0x0001 : word16)
  Class: Eq_1230
  DataType: 
  OrigDataType: 
T_1260: (in DPB(ax, al_40, 0, 8) : word16)
  Class: Eq_1239
  DataType: 
  OrigDataType: 
T_1261: (in 0x00 : byte)
  Class: Eq_1232
  DataType: 
  OrigDataType: 
T_1262: (in al_40 == 0x00 : bool)
  Class: Eq_1262
  DataType: 
  OrigDataType: 
T_1263: (in fn0800_1067 : ptr32)
  Class: Eq_1263
  DataType: 
  OrigDataType: 
T_1264: (in signature of fn0800_1067 : void)
  Class: Eq_1263
  DataType: 
  OrigDataType: 
T_1265: (in bp : word16)
  Class: Eq_1265
  DataType: 
  OrigDataType: 
T_1266: (in di : word16)
  Class: Eq_1227
  DataType: 
  OrigDataType: 
T_1267: (in diOut : ptr16)
  Class: Eq_1267
  DataType: 
  OrigDataType: 
T_1268: (in 0x0002 : word16)
  Class: Eq_1268
  DataType: 
  OrigDataType: 
T_1269: (in fp - 0x0002 : word16)
  Class: Eq_1265
  DataType: 
  OrigDataType: 
T_1270: (in out di_106 : ptr16)
  Class: Eq_1267
  DataType: 
  OrigDataType: 
T_1271: (in fn0800_1067(fp - 0x0002, di_106, out di_106) : word16)
  Class: Eq_1220
  DataType: 
  OrigDataType: 
T_1272: (in 0x50 : byte)
  Class: Eq_1221
  DataType: 
  OrigDataType: 
T_1273: (in bLoc57_108 >= 0x50 : bool)
  Class: Eq_1273
  DataType: 
  OrigDataType: 
T_1274: (in 0x50 : byte)
  Class: Eq_1221
  DataType: 
  OrigDataType: 
T_1275: (in bLoc57_108 >= 0x50 : bool)
  Class: Eq_1275
  DataType: 
  OrigDataType: 
T_1276: (in sp_78 : word16)
  Class: Eq_1276
  DataType: 
  OrigDataType: 
T_1277: (in 0x0002 : word16)
  Class: Eq_1277
  DataType: 
  OrigDataType: 
T_1278: (in sp_151 + 0x0002 : word16)
  Class: Eq_1276
  DataType: 
  OrigDataType: 
T_1279: (in 0x0000 : word16)
  Class: Eq_1279
  DataType: 
  OrigDataType: 
T_1280: (in 0x0000 : word16)
  Class: Eq_1279
  DataType: 
  OrigDataType: 
T_1281: (in 0x0000 == 0x0000 : bool)
  Class: Eq_1281
  DataType: 
  OrigDataType: 
T_1282: (in di_92 : word16)
  Class: Eq_1227
  DataType: 
  OrigDataType: 
T_1283: (in fn0800_1067 : ptr32)
  Class: Eq_1263
  DataType: 
  OrigDataType: 
T_1284: (in fp - 0x0002 : word16)
  Class: Eq_1265
  DataType: 
  OrigDataType: 
T_1285: (in out di_92 : ptr16)
  Class: Eq_1267
  DataType: 
  OrigDataType: 
T_1286: (in fn0800_1067(fp - 0x0002, di_106, out di_92) : word16)
  Class: Eq_1286
  DataType: 
  OrigDataType: 
T_1287: (in di_94 : word16)
  Class: Eq_1287
  DataType: 
  OrigDataType: 
T_1288: (in fn0800_1067 : ptr32)
  Class: Eq_1263
  DataType: 
  OrigDataType: 
T_1289: (in fp - 0x0002 : word16)
  Class: Eq_1265
  DataType: 
  OrigDataType: 
T_1290: (in out di_94 : ptr16)
  Class: Eq_1267
  DataType: 
  OrigDataType: 
T_1291: (in fn0800_1067(fp - 0x0002, di_92, out di_94) : word16)
  Class: Eq_1220
  DataType: 
  OrigDataType: 
T_1292: (in ax_130 : word16)
  Class: Eq_1292
  DataType: 
  OrigDataType: 
T_1293: (in 0x00 : byte)
  Class: Eq_1293
  DataType: 
  OrigDataType: 
T_1294: (in DPB(ax, 0x00, 8, 8) : word16)
  Class: Eq_1292
  DataType: 
  OrigDataType: 
T_1295: (in bl_133 : byte)
  Class: Eq_1295
  DataType: 
  OrigDataType: 
T_1296: (in (byte) ax_130 : byte)
  Class: Eq_1295
  DataType: 
  OrigDataType: 
T_1297: (in bx_135 : word16)
  Class: Eq_1297
  DataType: 
  OrigDataType: 
T_1298: (in 0x20 : byte)
  Class: Eq_1298
  DataType: 
  OrigDataType: 
T_1299: (in bl_133 - 0x20 : byte)
  Class: Eq_1299
  DataType: 
  OrigDataType: 
T_1300: (in DPB(ax_130, bl_133 - 0x20, 0, 8) : word16)
  Class: Eq_1297
  DataType: 
  OrigDataType: 
T_1301: (in 0x80 : byte)
  Class: Eq_1295
  DataType: 
  OrigDataType: 
T_1302: (in bl_133 >=u 0x80 : bool)
  Class: Eq_1302
  DataType: 
  OrigDataType: 
T_1303: (in di_82 : word16)
  Class: Eq_1303
  DataType: 
  OrigDataType: 
T_1304: (in ss : selector)
  Class: Eq_1304
  DataType: 
  OrigDataType: 
T_1305: (in 0x0000 : word16)
  Class: Eq_1305
  DataType: 
  OrigDataType: 
T_1306: (in sp_78 + 0x0000 : word16)
  Class: Eq_1306
  DataType: 
  OrigDataType: 
T_1307: (in Mem0[ss:sp_78 + 0x0000:word16] : word16)
  Class: Eq_1307
  DataType: 
  OrigDataType: 
T_1308: (in *diOut : word16)
  Class: Eq_1307
  DataType: 
  OrigDataType: 
T_1309: (in si_84 : word16)
  Class: Eq_1309
  DataType: 
  OrigDataType: 
T_1310: (in 0x0002 : word16)
  Class: Eq_1310
  DataType: 
  OrigDataType: 
T_1311: (in sp_78 + 0x0002 : word16)
  Class: Eq_1311
  DataType: 
  OrigDataType: 
T_1312: (in Mem0[ss:sp_78 + 0x0002:word16] : word16)
  Class: Eq_1312
  DataType: 
  OrigDataType: 
T_1313: (in *siOut : word16)
  Class: Eq_1312
  DataType: 
  OrigDataType: 
T_1314: (in 0x04FB : word16)
  Class: Eq_1314
  DataType: 
  OrigDataType: 
T_1315: (in bx_135 + 0x04FB : word16)
  Class: Eq_1315
  DataType: 
  OrigDataType: 
T_1316: (in Mem0[ds:bx_135 + 0x04FB:byte] : byte)
  Class: Eq_1316
  DataType: 
  OrigDataType: 
T_1317: (in DPB(ax_130, Mem0[ds:bx_135 + 0x04FB:byte], 0, 8) : word16)
  Class: Eq_1317
  DataType: 
  OrigDataType: 
T_1318: (in 0x0017 : word16)
  Class: Eq_1317
  DataType: 
  OrigDataType: 
T_1319: (in DPB(ax_130, Mem0[ds:bx_135 + 0x04FB:byte], 0, 8) <=u 0x0017 : bool)
  Class: Eq_1319
  DataType: 
  OrigDataType: 
T_1320: (in si_144 : word16)
  Class: Eq_1230
  DataType: 
  OrigDataType: 
T_1321: (in al_146 : byte)
  Class: Eq_1321
  DataType: 
  OrigDataType: 
T_1322: (in 0x25 : byte)
  Class: Eq_1321
  DataType: 
  OrigDataType: 
T_1323: (in fn0800_105F : ptr32)
  Class: Eq_1323
  DataType: 
  OrigDataType: 
T_1324: (in signature of fn0800_105F : void)
  Class: Eq_1323
  DataType: 
  OrigDataType: 
T_1325: (in bp : word16)
  Class: Eq_1265
  DataType: 
  OrigDataType: 
T_1326: (in di : word16)
  Class: Eq_1227
  DataType: 
  OrigDataType: 
T_1327: (in al : byte)
  Class: Eq_1321
  DataType: 
  OrigDataType: 
T_1328: (in ds : selector)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_1329: (in diOut : ptr16)
  Class: Eq_1329
  DataType: 
  OrigDataType: 
T_1330: (in fp - 0x0002 : word16)
  Class: Eq_1265
  DataType: 
  OrigDataType: 
T_1331: (in out di_106 : ptr16)
  Class: Eq_1329
  DataType: 
  OrigDataType: 
T_1332: (in fn0800_105F(fp - 0x0002, di_106, al_146, ds, out di_106) : word16)
  Class: Eq_1220
  DataType: 
  OrigDataType: 
T_1333: (in al_157 : byte)
  Class: Eq_1321
  DataType: 
  OrigDataType: 
T_1334: (in 0x0000 : word16)
  Class: Eq_1334
  DataType: 
  OrigDataType: 
T_1335: (in si_144 + 0x0000 : word16)
  Class: Eq_1335
  DataType: 
  OrigDataType: 
T_1336: (in Mem0[ds:si_144 + 0x0000:byte] : byte)
  Class: Eq_1321
  DataType: 
  OrigDataType: 
T_1337: (in 0xFFFE : word16)
  Class: Eq_1337
  DataType: 
  OrigDataType: 
T_1338: (in sp_151 + 0xFFFE : word16)
  Class: Eq_1223
  DataType: 
  OrigDataType: 
T_1339: (in 0x0001 : word16)
  Class: Eq_1339
  DataType: 
  OrigDataType: 
T_1340: (in si_144 + 0x0001 : word16)
  Class: Eq_1230
  DataType: 
  OrigDataType: 
T_1341: (in 0x00 : byte)
  Class: Eq_1321
  DataType: 
  OrigDataType: 
T_1342: (in al_157 != 0x00 : bool)
  Class: Eq_1342
  DataType: 
  OrigDataType: 
T_1343: (in bx : word16)
  Class: Eq_1343
  DataType: 
  OrigDataType: 
T_1344: (in 0x0000 : word16)
  Class: Eq_1344
  DataType: 
  OrigDataType: 
T_1345: (in di + 0x0000 : word16)
  Class: Eq_1345
  DataType: 
  OrigDataType: 
T_1346: (in Mem3[ds:di + 0x0000:byte] : byte)
  Class: Eq_1321
  DataType: 
  OrigDataType: 
T_1347: (in v9_9 : byte)
  Class: Eq_1347
  DataType: 
  OrigDataType: 
T_1348: (in ss : selector)
  Class: Eq_1348
  DataType: 
  OrigDataType: 
T_1349: (in 0x0055 : word16)
  Class: Eq_1349
  DataType: 
  OrigDataType: 
T_1350: (in bp - 0x0055 : word16)
  Class: Eq_1350
  DataType: 
  OrigDataType: 
T_1351: (in Mem3[ss:bp - 0x0055:byte] : byte)
  Class: Eq_1351
  DataType: 
  OrigDataType: 
T_1352: (in 0x01 : byte)
  Class: Eq_1352
  DataType: 
  OrigDataType: 
T_1353: (in Mem3[ss:bp - 0x0055:byte] - 0x01 : byte)
  Class: Eq_1347
  DataType: 
  OrigDataType: 
T_1354: (in 0x0055 : word16)
  Class: Eq_1354
  DataType: 
  OrigDataType: 
T_1355: (in bp - 0x0055 : word16)
  Class: Eq_1355
  DataType: 
  OrigDataType: 
T_1356: (in Mem10[ss:bp - 0x0055:byte] : byte)
  Class: Eq_1347
  DataType: 
  OrigDataType: 
T_1357: (in di_6 : word16)
  Class: Eq_1357
  DataType: 
  OrigDataType: 
T_1358: (in 0x0001 : word16)
  Class: Eq_1358
  DataType: 
  OrigDataType: 
T_1359: (in di + 0x0001 : word16)
  Class: Eq_1359
  DataType: 
  OrigDataType: 
T_1360: (in *diOut : word16)
  Class: Eq_1359
  DataType: 
  OrigDataType: 
T_1361: (in 0x00 : byte)
  Class: Eq_1347
  DataType: 
  OrigDataType: 
T_1362: (in v9_9 <= 0x00 : bool)
  Class: Eq_1362
  DataType: 
  OrigDataType: 
T_1363: (in di_15 : word16)
  Class: Eq_1227
  DataType: 
  OrigDataType: 
T_1364: (in fn0800_1067 : ptr32)
  Class: Eq_1263
  DataType: 
  OrigDataType: 
T_1365: (in di + 0x0001 : word16)
  Class: Eq_1227
  DataType: 
  OrigDataType: 
T_1366: (in out di_15 : ptr16)
  Class: Eq_1267
  DataType: 
  OrigDataType: 
T_1367: (in fn0800_1067(bp, di + 0x0001, out di_15) : word16)
  Class: Eq_1367
  DataType: 
  OrigDataType: 
T_1368: (in di_17 : word16)
  Class: Eq_1368
  DataType: 
  OrigDataType: 
T_1369: (in fn0800_1067 : ptr32)
  Class: Eq_1263
  DataType: 
  OrigDataType: 
T_1370: (in out di_17 : ptr16)
  Class: Eq_1267
  DataType: 
  OrigDataType: 
T_1371: (in fn0800_1067(bp, di_15, out di_17) : word16)
  Class: Eq_1371
  DataType: 
  OrigDataType: 
T_1372: (in bx : word16)
  Class: Eq_1372
  DataType: 
  OrigDataType: 
T_1373: (in di_17 : word16)
  Class: Eq_1373
  DataType: 
  OrigDataType: 
T_1374: (in 0x0054 : word16)
  Class: Eq_1374
  DataType: 
  OrigDataType: 
T_1375: (in bp - 0x0054 : word16)
  Class: Eq_1375
  DataType: 
  OrigDataType: 
T_1376: (in di - (bp - 0x0054) : word16)
  Class: Eq_1373
  DataType: 
  OrigDataType: 
T_1377: (in cs : selector)
  Class: Eq_1377
  DataType: 
  OrigDataType: 
T_1378: (in ss : selector)
  Class: Eq_1378
  DataType: 
  OrigDataType: 
T_1379: (in 0x000A : word16)
  Class: Eq_1379
  DataType: 
  OrigDataType: 
T_1380: (in bp + 0x000A : word16)
  Class: Eq_1380
  DataType: 
  OrigDataType: 
T_1381: (in Mem0[ss:bp + 0x000A:word16] : word16)
  Class: Eq_1381
  DataType: 
  OrigDataType: 
T_1382: (in SEQ(cs, Mem0[ss:bp + 0x000A:word16]) : ptr32)
  Class: Eq_1382
  DataType: 
  OrigDataType: 
T_1383: (in 0x0054 : word16)
  Class: Eq_1265
  DataType: 
  OrigDataType: 
T_1384: (in bp != 0x0054 : bool)
  Class: Eq_1384
  DataType: 
  OrigDataType: 
T_1385: (in 0x50 : byte)
  Class: Eq_1385
  DataType: 
  OrigDataType: 
T_1386: (in 0x0055 : word16)
  Class: Eq_1386
  DataType: 
  OrigDataType: 
T_1387: (in bp - 0x0055 : word16)
  Class: Eq_1387
  DataType: 
  OrigDataType: 
T_1388: (in Mem37[ss:bp - 0x0055:byte] : byte)
  Class: Eq_1385
  DataType: 
  OrigDataType: 
T_1389: (in 0x0058 : word16)
  Class: Eq_1389
  DataType: 
  OrigDataType: 
T_1390: (in bp - 0x0058 : word16)
  Class: Eq_1390
  DataType: 
  OrigDataType: 
T_1391: (in Mem37[ss:bp - 0x0058:word16] : word16)
  Class: Eq_1391
  DataType: 
  OrigDataType: 
T_1392: (in Mem37[ss:bp - 0x0058:word16] + di_17 : word16)
  Class: Eq_1392
  DataType: 
  OrigDataType: 
T_1393: (in 0x0058 : word16)
  Class: Eq_1393
  DataType: 
  OrigDataType: 
T_1394: (in bp - 0x0058 : word16)
  Class: Eq_1394
  DataType: 
  OrigDataType: 
T_1395: (in Mem39[ss:bp - 0x0058:word16] : word16)
  Class: Eq_1392
  DataType: 
  OrigDataType: 
T_1396: (in di_41 : word16)
  Class: Eq_1396
  DataType: 
  OrigDataType: 
T_1397: (in 0x0054 : word16)
  Class: Eq_1397
  DataType: 
  OrigDataType: 
T_1398: (in bp - 0x0054 : word16)
  Class: Eq_1398
  DataType: 
  OrigDataType: 
T_1399: (in *diOut : word16)
  Class: Eq_1398
  DataType: 
  OrigDataType: 
T_1400: (in 0x0001 : word16)
  Class: Eq_1400
  DataType: 
  OrigDataType: 
T_1401: (in 0x0002 : word16)
  Class: Eq_1401
  DataType: 
  OrigDataType: 
T_1402: (in bp - 0x0002 : word16)
  Class: Eq_1402
  DataType: 
  OrigDataType: 
T_1403: (in Mem51[ss:bp - 0x0002:word16] : word16)
  Class: Eq_1400
  DataType: 
  OrigDataType: 
T_1404: (in es : selector)
  Class: Eq_1404
  DataType: 
  OrigDataType: 
T_1405: (in ax : word16)
  Class: Eq_1405
  DataType: 
  OrigDataType: 
T_1406: (in ax_24 : word16)
  Class: Eq_1406
  DataType: 
  OrigDataType: 
T_1407: (in fn0800_16B9 : ptr32)
  Class: Eq_1407
  DataType: 
  OrigDataType: 
T_1408: (in signature of fn0800_16B9 : void)
  Class: Eq_1407
  DataType: 
  OrigDataType: 
T_1409: (in bx : word16)
  Class: Eq_477
  DataType: 
  OrigDataType: 
T_1410: (in di : word16)
  Class: Eq_477
  DataType: 
  OrigDataType: 
T_1411: (in ds : selector)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_1412: (in wArg06 : word16)
  Class: Eq_1412
  DataType: 
  OrigDataType: 
T_1413: (in wArg08 : word16)
  Class: Eq_1413
  DataType: 
  OrigDataType: 
T_1414: (in 0x0344 : word16)
  Class: Eq_1412
  DataType: 
  OrigDataType: 
T_1415: (in wArg02 : word16)
  Class: Eq_1413
  DataType: 
  OrigDataType: 
T_1416: (in fn0800_16B9(bx, di, ds, 0x0344, wArg02) : word16)
  Class: Eq_1406
  DataType: 
  OrigDataType: 
T_1417: (in ax : word16)
  Class: Eq_1417
  DataType: 
  OrigDataType: 
T_1418: (in bp_204 : word16)
  Class: Eq_1418
  DataType: 
  OrigDataType: 
T_1419: (in fp : ptr16)
  Class: Eq_1419
  DataType: 
  OrigDataType: 
T_1420: (in 0x0002 : word16)
  Class: Eq_1420
  DataType: 
  OrigDataType: 
T_1421: (in fp - 0x0002 : word16)
  Class: Eq_1418
  DataType: 
  OrigDataType: 
T_1422: (in si_203 : word16)
  Class: Eq_1422
  DataType: 
  OrigDataType: 
T_1423: (in wArg08 : word16)
  Class: Eq_1422
  DataType: 
  OrigDataType: 
T_1424: (in al_57 : byte)
  Class: Eq_1424
  DataType: 
  OrigDataType: 
T_1425: (in 0x25 : byte)
  Class: Eq_1424
  DataType: 
  OrigDataType: 
T_1426: (in al_57 == 0x25 : bool)
  Class: Eq_1426
  DataType: 
  OrigDataType: 
T_1427: (in 0x0000 : word16)
  Class: Eq_1427
  DataType: 
  OrigDataType: 
T_1428: (in si_203 + 0x0000 : word16)
  Class: Eq_1428
  DataType: 
  OrigDataType: 
T_1429: (in Mem0[ds:si_203 + 0x0000:byte] : byte)
  Class: Eq_1429
  DataType: 
  OrigDataType: 
T_1430: (in (int16) Mem0[ds:si_203 + 0x0000:byte] : int16)
  Class: Eq_1430
  DataType: 
  OrigDataType: 
T_1431: (in 0x0000 : word16)
  Class: Eq_1430
  DataType: 
  OrigDataType: 
T_1432: (in (int16) Mem0[ds:si_203 + 0x0000:byte] < 0x0000 : bool)
  Class: Eq_1432
  DataType: 
  OrigDataType: 
T_1433: (in cs : selector)
  Class: Eq_1433
  DataType: 
  OrigDataType: 
T_1434: (in ss : selector)
  Class: Eq_1434
  DataType: 
  OrigDataType: 
T_1435: (in 0x0004 : word16)
  Class: Eq_1435
  DataType: 
  OrigDataType: 
T_1436: (in bp_204 + 0x0004 : word16)
  Class: Eq_1436
  DataType: 
  OrigDataType: 
T_1437: (in Mem0[ss:bp_204 + 0x0004:word16] : word16)
  Class: Eq_1437
  DataType: 
  OrigDataType: 
T_1438: (in SEQ(cs, Mem0[ss:bp_204 + 0x0004:word16]) : ptr32)
  Class: Eq_1438
  DataType: 
  OrigDataType: 
T_1439: (in ax_127 : word16)
  Class: Eq_477
  DataType: 
  OrigDataType: 
T_1440: (in (int16) al_57 : int16)
  Class: Eq_477
  DataType: 
  OrigDataType: 
T_1441: (in ax_138 : word16)
  Class: Eq_477
  DataType: 
  OrigDataType: 
T_1442: (in di_264 : word16)
  Class: Eq_477
  DataType: 
  OrigDataType: 
T_1443: (in 0x0000 : word16)
  Class: Eq_477
  DataType: 
  OrigDataType: 
T_1444: (in di_264 < 0x0000 : bool)
  Class: Eq_1444
  DataType: 
  OrigDataType: 
T_1445: (in 0x0000 : word16)
  Class: Eq_477
  DataType: 
  OrigDataType: 
T_1446: (in ax_127 < 0x0000 : bool)
  Class: Eq_1446
  DataType: 
  OrigDataType: 
T_1447: (in di_264 == ax_127 : bool)
  Class: Eq_1447
  DataType: 
  OrigDataType: 
T_1448: (in 0x055C : word16)
  Class: Eq_1448
  DataType: 
  OrigDataType: 
T_1449: (in ax_127 + 0x055C : word16)
  Class: Eq_1449
  DataType: 
  OrigDataType: 
T_1450: (in Mem0[ds:ax_127 + 0x055C:byte] : byte)
  Class: Eq_1450
  DataType: 
  OrigDataType: 
T_1451: (in 0x01 : byte)
  Class: Eq_1450
  DataType: 
  OrigDataType: 
T_1452: (in Mem0[ds:ax_127 + 0x055C:byte] != 0x01 : bool)
  Class: Eq_1452
  DataType: 
  OrigDataType: 
T_1453: (in bl_210 : byte)
  Class: Eq_1453
  DataType: 
  OrigDataType: 
T_1454: (in (byte) ax_138 : byte)
  Class: Eq_1453
  DataType: 
  OrigDataType: 
T_1455: (in DPB(ax_138, bl_210, 0, 8) : word16)
  Class: Eq_477
  DataType: 
  OrigDataType: 
T_1456: (in 0x00 : byte)
  Class: Eq_1453
  DataType: 
  OrigDataType: 
T_1457: (in bl_210 < 0x00 : bool)
  Class: Eq_1457
  DataType: 
  OrigDataType: 
T_1458: (in 0x0006 : word16)
  Class: Eq_1458
  DataType: 
  OrigDataType: 
T_1459: (in bp_204 + 0x0006 : word16)
  Class: Eq_1459
  DataType: 
  OrigDataType: 
T_1460: (in Mem0[ss:bp_204 + 0x0006:word16] : word16)
  Class: Eq_1460
  DataType: 
  OrigDataType: 
T_1461: (in SEQ(cs, Mem0[ss:bp_204 + 0x0006:word16]) : ptr32)
  Class: Eq_1461
  DataType: 
  OrigDataType: 
T_1462: (in 0x055C : word16)
  Class: Eq_1462
  DataType: 
  OrigDataType: 
T_1463: (in bx + 0x055C : word16)
  Class: Eq_1463
  DataType: 
  OrigDataType: 
T_1464: (in Mem0[ds:bx + 0x055C:byte] : byte)
  Class: Eq_1464
  DataType: 
  OrigDataType: 
T_1465: (in 0x01 : byte)
  Class: Eq_1464
  DataType: 
  OrigDataType: 
T_1466: (in Mem0[ds:bx + 0x055C:byte] != 0x01 : bool)
  Class: Eq_1466
  DataType: 
  OrigDataType: 
T_1467: (in 0x0004 : word16)
  Class: Eq_1467
  DataType: 
  OrigDataType: 
T_1468: (in bp_204 + 0x0004 : word16)
  Class: Eq_1468
  DataType: 
  OrigDataType: 
T_1469: (in Mem0[ss:bp_204 + 0x0004:word16] : word16)
  Class: Eq_1469
  DataType: 
  OrigDataType: 
T_1470: (in SEQ(cs, Mem0[ss:bp_204 + 0x0004:word16]) : ptr32)
  Class: Eq_1470
  DataType: 
  OrigDataType: 
T_1471: (in bx_265 : word16)
  Class: Eq_477
  DataType: 
  OrigDataType: 
T_1472: (in 0x0000 : word16)
  Class: Eq_477
  DataType: 
  OrigDataType: 
T_1473: (in bx_265 > 0x0000 : bool)
  Class: Eq_1473
  DataType: 
  OrigDataType: 
T_1474: (in 0x0006 : word16)
  Class: Eq_1474
  DataType: 
  OrigDataType: 
T_1475: (in bp_204 + 0x0006 : word16)
  Class: Eq_1475
  DataType: 
  OrigDataType: 
T_1476: (in Mem0[ss:bp_204 + 0x0006:word16] : word16)
  Class: Eq_1476
  DataType: 
  OrigDataType: 
T_1477: (in SEQ(cs, Mem0[ss:bp_204 + 0x0006:word16]) : ptr32)
  Class: Eq_1477
  DataType: 
  OrigDataType: 
T_1478: (in 0x0000 : word16)
  Class: Eq_1478
  DataType: 
  OrigDataType: 
T_1479: (in 0x0028 : word16)
  Class: Eq_1479
  DataType: 
  OrigDataType: 
T_1480: (in bp_204 - 0x0028 : word16)
  Class: Eq_1480
  DataType: 
  OrigDataType: 
T_1481: (in Mem125[ss:bp_204 - 0x0028:word16] : word16)
  Class: Eq_1478
  DataType: 
  OrigDataType: 
T_1482: (in 0x0000 : word16)
  Class: Eq_1482
  DataType: 
  OrigDataType: 
T_1483: (in 0x0000 : word16)
  Class: Eq_1483
  DataType: 
  OrigDataType: 
T_1484: (in si_203 + 0x0000 : word16)
  Class: Eq_1484
  DataType: 
  OrigDataType: 
T_1485: (in Mem0[ds:si_203 + 0x0000:byte] : byte)
  Class: Eq_1424
  DataType: 
  OrigDataType: 
T_1486: (in 0x0001 : word16)
  Class: Eq_1486
  DataType: 
  OrigDataType: 
T_1487: (in si_203 + 0x0001 : word16)
  Class: Eq_1422
  DataType: 
  OrigDataType: 
T_1488: (in 0x00 : byte)
  Class: Eq_1424
  DataType: 
  OrigDataType: 
T_1489: (in al_57 == 0x00 : bool)
  Class: Eq_1489
  DataType: 
  OrigDataType: 
T_1490: (in 0x0006 : word16)
  Class: Eq_1490
  DataType: 
  OrigDataType: 
T_1491: (in bp_204 + 0x0006 : word16)
  Class: Eq_1491
  DataType: 
  OrigDataType: 
T_1492: (in Mem0[ss:bp_204 + 0x0006:word16] : word16)
  Class: Eq_1492
  DataType: 
  OrigDataType: 
T_1493: (in SEQ(cs, Mem0[ss:bp_204 + 0x0006:word16]) : ptr32)
  Class: Eq_1493
  DataType: 
  OrigDataType: 
T_1494: (in 0x00 : byte)
  Class: Eq_1494
  DataType: 
  OrigDataType: 
T_1495: (in DPB(bx, 0x00, 8, 8) : word16)
  Class: Eq_1495
  DataType: 
  OrigDataType: 
T_1496: (in 0x0015 : word16)
  Class: Eq_1495
  DataType: 
  OrigDataType: 
T_1497: (in DPB(bx, 0x00, 8, 8) <=u 0x0015 : bool)
  Class: Eq_1497
  DataType: 
  OrigDataType: 
T_1498:
  Class: Eq_1498
  DataType: 
  OrigDataType: (struct 0001 (0 T_354 t0000))
T_1499:
  Class: Eq_1499
  DataType: 
  OrigDataType: (struct 0002 (0 T_603 t0000))
*/
