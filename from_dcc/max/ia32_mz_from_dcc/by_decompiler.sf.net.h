// subject.h
// Generated on TIMESTAMP by decompiling from_dcc/max/ia32_mz_from_dcc/subject.exe
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
  DataType: (union (uint16 u0) ((memptr T_28 (struct (0 T_2 t0000))) u1) ((memptr T_31 (struct (0 T_308 t0000))) u2) ((union (ptr16 u0) ((memptr T_31 (struct (0 T_98 t0000) (2 T_63 t0002))) u1)) u3))
  OrigDataType: (union (uint16 u0) ((memptr T_28 (struct (0 T_2 t0000))) u1) ((memptr T_31 (struct (0 T_308 t0000))) u2) ((union (ptr16 u0) ((memptr T_31 (struct (0 T_98 t0000) (2 T_63 t0002))) u1)) u3))
T_4: (in 0x09D4 : word16)
  Class: Eq_4
  DataType: word16
  OrigDataType: word16
T_5: (in dx : word16)
  Class: Eq_4
  DataType: (ptr (segment (8A T_47 t008A) (8C T_35 t008C) (8E T_143 t008E) (90 T_33 t0090) (92 T_30 t0092) (96 T_38 t0096) (AC T_37 t00AC)))
  OrigDataType: (ptr (segment (8A T_47 t008A) (8C T_35 t008C) (8E T_143 t008E) (90 T_33 t0090) (92 T_30 t0092) (96 T_38 t0096) (AC T_37 t00AC)))
T_6: (in 0x09D4 : word16)
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
  DataType: (ptr (segment (2 T_22 t0002) (2C T_25 t002C) (84 T_286 t0084) (86 T_279 t0086) (88 T_272 t0088) (98 T_263 t0098) (9A T_265 t009A) (5BC T_240 t05BC) (5C0 T_267 t05C0)))
  OrigDataType: (ptr (segment (2 T_22 t0002) (2C T_25 t002C) (84 T_286 t0084) (86 T_279 t0086) (88 T_272 t0088) (98 T_263 t0098) (9A T_265 t009A) (5BC T_240 t05BC) (5C0 T_267 t05C0)))
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
  DataType: (union (uint16 u0) ((memptr T_28 (struct (0 T_2 t0000))) u1) ((memptr T_31 (struct (0 T_308 t0000))) u2) ((union (ptr16 u0) ((memptr T_31 (struct (0 T_98 t0000) (2 T_63 t0002))) u1)) u3))
  OrigDataType: (union (uint16 u0) ((memptr T_28 (struct (0 T_2 t0000))) u1) ((memptr T_31 (struct (0 T_308 t0000))) u2) ((union (ptr16 u0) ((memptr T_31 (struct (0 T_98 t0000) (2 T_63 t0002))) u1)) u3))
T_27: (in 0x09D4 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_28: (in 0x09D4 : selector)
  Class: Eq_4
  DataType: (ptr (segment (8A T_47 t008A) (8C T_35 t008C) (8E T_143 t008E) (90 T_2 t0090) (92 T_30 t0092) (96 T_38 t0096) (A4 T_200 t00A4) (A8 T_202 t00A8) (AC T_37 t00AC) (21C T_164 t021C) (21E T_2 t021E)))
  OrigDataType: (ptr (segment (8A T_47 t008A) (8C T_35 t008C) (8E T_143 t008E) (90 T_2 t0090) (92 T_30 t0092) (96 T_38 t0096) (A4 T_200 t00A4) (A8 T_202 t00A8) (AC T_37 t00AC) (21C T_164 t021C) (21E T_2 t021E)))
T_29: (in 0x0092 : word16)
  Class: Eq_29
  DataType: (memptr T_28 (struct (0 T_30 t0000)))
  OrigDataType: (memptr T_28 (struct (0 T_30 t0000)))
T_30: (in Mem0[0x09D4:0x0092:word16] : word16)
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
T_33: (in Mem0[0x09D4:0x0090:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_34: (in 0x008C : word16)
  Class: Eq_34
  DataType: (memptr T_28 (struct (0 T_35 t0000)))
  OrigDataType: (memptr T_28 (struct (0 T_35 t0000)))
T_35: (in Mem0[0x09D4:0x008C:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_36: (in 0x00AC : word16)
  Class: Eq_36
  DataType: (memptr T_28 (struct (0 T_37 t0000)))
  OrigDataType: (memptr T_28 (struct (0 T_37 t0000)))
T_37: (in Mem0[0x09D4:0x00AC:word16] : word16)
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
T_40: (in Mem0[0x09D4:0x0096:word16] : word16)
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
  DataType: (ptr (segment (74 T_382 t0074) (76 T_385 t0076) (78 T_391 t0078) (7A T_394 t007A) (7C T_400 t007C) (7E T_403 t007E) (80 T_409 t0080) (82 T_412 t0082)))
  OrigDataType: (ptr (segment (74 T_382 t0074) (76 T_385 t0076) (78 T_391 t0078) (7A T_394 t007A) (7C T_400 t007C) (7E T_403 t007E) (80 T_409 t0080) (82 T_412 t0082)))
T_45: (in fn0800_0162(al, ds) : void)
  Class: Eq_45
  DataType: void
  OrigDataType: void
T_46: (in 0x008A : word16)
  Class: Eq_46
  DataType: (memptr T_28 (struct (0 T_47 t0000)))
  OrigDataType: (memptr T_28 (struct (0 T_47 t0000)))
T_47: (in Mem0[0x09D4:0x008A:segptr32] : segptr32)
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
  DataType: (union (uint16 u0) ((memptr T_28 (struct (0 T_2 t0000))) u1) ((memptr T_31 (struct (0 T_308 t0000))) u2) ((union (ptr16 u0) ((memptr T_31 (struct (0 T_98 t0000) (2 T_63 t0002))) u1)) u3))
  OrigDataType: (union (uint16 u0) ((memptr T_28 (struct (0 T_2 t0000))) u1) ((memptr T_31 (struct (0 T_308 t0000))) u2) ((union (ptr16 u0) ((memptr T_31 (struct (0 T_98 t0000) (2 T_63 t0002))) u1)) u3))
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
T_77: (in Mem0[0x09D4:0x0096:word16] : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_78: (in 0x0001 : word16)
  Class: Eq_78
  DataType: word16
  OrigDataType: word16
T_79: (in Mem0[0x09D4:0x0096:word16] + 0x0001 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_80: (in v20 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_81: (in Mem0[0x09D4:0x0096:word16] : word16)
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
T_87: (in Mem0[0x09D4:0x0096:word16] : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_88: (in 0x0001 : word16)
  Class: Eq_88
  DataType: word16
  OrigDataType: word16
T_89: (in Mem0[0x09D4:0x0096:word16] + 0x0001 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_90: (in v21 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_91: (in Mem0[0x09D4:0x0096:word16] : word16)
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
T_134: (in Mem0[0x09D4:0x008A:word16] : word16)
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
T_143: (in Mem0[0x09D4:0x008E:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_144: (in bp - 0x09D4 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_145: (in 0x021E : word16)
  Class: Eq_145
  DataType: (memptr T_28 (struct (0 T_146 t0000)))
  OrigDataType: (memptr T_28 (struct (0 T_146 t0000)))
T_146: (in Mem0[0x09D4:0x021E:word16] : word16)
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
T_153: (in 0x0610 : word16)
  Class: Eq_153
  DataType: word16
  OrigDataType: word16
T_154: (in di + 0x0610 : word16)
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
T_161: (in 0x021E : word16)
  Class: Eq_161
  DataType: (memptr T_28 (struct (0 T_162 t0000)))
  OrigDataType: (memptr T_28 (struct (0 T_162 t0000)))
T_162: (in Mem0[0x09D4:0x021E:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_163: (in 0x021C : word16)
  Class: Eq_163
  DataType: (memptr T_28 (struct (0 T_164 t0000)))
  OrigDataType: (memptr T_28 (struct (0 T_164 t0000)))
T_164: (in Mem0[0x09D4:0x021C:word16] : word16)
  Class: Eq_164
  DataType: word16
  OrigDataType: word16
T_165: (in di + Mem0[0x09D4:0x021C:word16] : word16)
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
T_178: (in 0x021E : word16)
  Class: Eq_178
  DataType: (memptr T_28 (struct (0 T_179 t0000)))
  OrigDataType: (memptr T_28 (struct (0 T_179 t0000)))
T_179: (in Mem0[0x09D4:0x021E:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_180: (in 0x0000 : word16)
  Class: Eq_180
  DataType: word16
  OrigDataType: word16
T_181: (in Mem0[0x09D4:0x021E:word16] - 0x0000 : word16)
  Class: Eq_181
  DataType: word16
  OrigDataType: word16
T_182: (in cond(Mem0[0x09D4:0x021E:word16] - 0x0000) : byte)
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
T_191: (in 0x021C : word16)
  Class: Eq_191
  DataType: (memptr T_28 (struct (0 T_192 t0000)))
  OrigDataType: (memptr T_28 (struct (0 T_192 t0000)))
T_192: (in Mem0[0x09D4:0x021C:word16] : word16)
  Class: Eq_164
  DataType: word16
  OrigDataType: word16
T_193: (in 0x0000 : word16)
  Class: Eq_193
  DataType: word16
  OrigDataType: word16
T_194: (in Mem0[0x09D4:0x021C:word16] - 0x0000 : word16)
  Class: Eq_194
  DataType: word16
  OrigDataType: word16
T_195: (in cond(Mem0[0x09D4:0x021C:word16] - 0x0000) : byte)
  Class: Eq_70
  DataType: byte
  OrigDataType: byte
T_196: (in Test(NE,Z) : bool)
  Class: Eq_196
  DataType: bool
  OrigDataType: bool
T_197: (in 0x09D4 : word16)
  Class: Eq_197
  DataType: word16
  OrigDataType: word16
T_198: (in bx + 0x09D4 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_199: (in 0x00A4 : word16)
  Class: Eq_199
  DataType: (memptr T_28 (struct (0 T_200 t0000)))
  OrigDataType: (memptr T_28 (struct (0 T_200 t0000)))
T_200: (in Mem0[0x09D4:0x00A4:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_201: (in 0x00A8 : word16)
  Class: Eq_201
  DataType: (memptr T_28 (struct (0 T_202 t0000)))
  OrigDataType: (memptr T_28 (struct (0 T_202 t0000)))
T_202: (in Mem0[0x09D4:0x00A8:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_203: (in 0x0090 : word16)
  Class: Eq_203
  DataType: (memptr T_28 (struct (0 T_204 t0000)))
  OrigDataType: (memptr T_28 (struct (0 T_204 t0000)))
T_204: (in Mem0[0x09D4:0x0090:word16] : word16)
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
  DataType: (union (uint16 u0) ((memptr T_28 (struct (0 T_2 t0000))) u1) ((memptr T_31 (struct (0 T_308 t0000))) u2) ((union (ptr16 u0) ((memptr T_31 (struct (0 T_98 t0000) (2 T_63 t0002))) u1)) u3))
  OrigDataType: (union (uint16 u0) ((memptr T_28 (struct (0 T_2 t0000))) u1) ((memptr T_31 (struct (0 T_308 t0000))) u2) ((union (ptr16 u0) ((memptr T_31 (struct (0 T_98 t0000) (2 T_63 t0002))) u1)) u3))
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
  DataType: (ptr (union (uint16 u0) ((memptr T_28 (struct (0 T_2 t0000))) u1) ((memptr T_31 (struct (0 T_308 t0000))) u2) ((union (ptr16 u0) ((memptr T_31 (struct (0 T_98 t0000) (2 T_63 t0002))) u1)) u3)))
  OrigDataType: (ptr (union (uint16 u0) ((memptr T_28 (struct (0 T_2 t0000))) u1) ((memptr T_31 (struct (0 T_308 t0000))) u2) ((union (ptr16 u0) ((memptr T_31 (struct (0 T_98 t0000) (2 T_63 t0002))) u1)) u3)))
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
T_221: (in 0x09D4 : word16)
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
T_227: (in 0x05CA : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_228: (in SEQ(es, di) : ptr32)
  Class: Eq_47
  DataType: ptr32
  OrigDataType: ptr32
T_229: (in 0x0610 : word16)
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
T_239: (in 0x05BC : word16)
  Class: Eq_239
  DataType: (memptr T_20 (struct (0 T_240 t0000)))
  OrigDataType: (memptr T_20 (struct (0 T_240 t0000)))
T_240: (in Mem0[ds:0x05BC:word16] : word16)
  Class: Eq_240
  DataType: word16
  OrigDataType: word16
T_241: (in SEQ(cs, Mem0[ds:0x05BC:word16]) : ptr32)
  Class: Eq_241
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_242: (in fn0800_02C3 : ptr32)
  Class: Eq_242
  DataType: (ptr (fn T_248 (T_20, T_209, T_247)))
  OrigDataType: (ptr (fn T_248 (T_20, T_209, T_247)))
T_243: (in signature of fn0800_02C3 : void)
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
  DataType: (ptr (ptr (segment (2 T_22 t0002) (2C T_25 t002C) (5BC T_240 t05BC))))
  OrigDataType: (ptr (ptr (segment (2 T_22 t0002) (2C T_25 t002C) (5BC T_240 t05BC))))
T_248: (in fn0800_02C3(ds, wLoc02, out ds) : word16)
  Class: Eq_111
  DataType: word16
  OrigDataType: word16
T_249: (in fn0800_03AE : ptr32)
  Class: Eq_249
  DataType: (ptr (fn T_253 (T_112, T_20)))
  OrigDataType: (ptr (fn T_253 (T_112, T_20)))
T_250: (in signature of fn0800_03AE : void)
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
T_253: (in fn0800_03AE(si, ds) : void)
  Class: Eq_253
  DataType: void
  OrigDataType: void
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
T_266: (in 0x05C0 : word16)
  Class: Eq_266
  DataType: (memptr T_20 (struct (0 T_267 t0000)))
  OrigDataType: (memptr T_20 (struct (0 T_267 t0000)))
T_267: (in Mem0[ds:0x05C0:word16] : word16)
  Class: Eq_267
  DataType: word16
  OrigDataType: word16
T_268: (in SEQ(cs, Mem0[ds:0x05C0:word16]) : ptr32)
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
T_275: (in Mem0[0x09D4:sp + 0x0000:word16] : word16)
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
T_282: (in Mem0[0x09D4:sp + 0x0000:word16] : word16)
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
T_289: (in Mem0[0x09D4:sp + 0x0000:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_290: (in fn0800_01FA : ptr32)
  Class: Eq_290
  DataType: (ptr (fn T_293 (T_20)))
  OrigDataType: (ptr (fn T_293 (T_20)))
T_291: (in signature of fn0800_01FA : void)
  Class: Eq_290
  DataType: 
  OrigDataType: 
T_292: (in ds : selector)
  Class: Eq_2
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_293: (in fn0800_01FA(ds) : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_294: (in (byte) ax : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_295: (in 0x0002 : word16)
  Class: Eq_295
  DataType: word16
  OrigDataType: word16
T_296: (in sp - 0x0002 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_297: (in 0x0000 : word16)
  Class: Eq_297
  DataType: word16
  OrigDataType: word16
T_298: (in sp + 0x0000 : word16)
  Class: Eq_298
  DataType: word16
  OrigDataType: word16
T_299: (in Mem0[0x09D4:sp + 0x0000:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_300: (in fn0800_028E : ptr32)
  Class: Eq_300
  DataType: (ptr (fn T_305 (T_20, T_304)))
  OrigDataType: (ptr (fn T_305 (T_20, T_304)))
T_301: (in signature of fn0800_028E : void)
  Class: Eq_300
  DataType: 
  OrigDataType: 
T_302: (in ds : selector)
  Class: Eq_2
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_303: (in wArg02 : word16)
  Class: Eq_303
  DataType: word16
  OrigDataType: word16
T_304: (in wArg00 : word16)
  Class: Eq_303
  DataType: word16
  OrigDataType: word16
T_305: (in fn0800_028E(ds, wArg00) : void)
  Class: Eq_305
  DataType: void
  OrigDataType: void
T_306: (in 0x0000 : word16)
  Class: Eq_306
  DataType: word16
  OrigDataType: word16
T_307: (in di + 0x0000 : word16)
  Class: Eq_307
  DataType: word16
  OrigDataType: word16
T_308: (in Mem0[es:di + 0x0000:byte] : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_309: (in 0x0001 : word16)
  Class: Eq_309
  DataType: word16
  OrigDataType: word16
T_310: (in di + 0x0001 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_311: (in SEQ(es, di) : ptr32)
  Class: Eq_47
  DataType: ptr32
  OrigDataType: ptr32
T_312: (in 0x0001 : word16)
  Class: Eq_312
  DataType: word16
  OrigDataType: word16
T_313: (in cx - 0x0001 : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_314: (in SLICE(cx, byte, 8) : byte)
  Class: Eq_55
  DataType: byte
  OrigDataType: byte
T_315: (in (byte) cx : byte)
  Class: Eq_57
  DataType: byte
  OrigDataType: byte
T_316: (in 0x0000 : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_317: (in cx == 0x0000 : bool)
  Class: Eq_317
  DataType: bool
  OrigDataType: bool
T_318: (in fn0800_0121 : ptr32)
  Class: Eq_318
  DataType: (ptr (fn T_323 (T_17, T_322)))
  OrigDataType: (ptr (fn T_323 (T_17, T_322)))
T_319: (in signature of fn0800_0121 : void)
  Class: Eq_318
  DataType: 
  OrigDataType: 
T_320: (in al : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_321: (in bArg00 : byte)
  Class: Eq_321
  DataType: byte
  OrigDataType: byte
T_322: (in bArg00 : byte)
  Class: Eq_321
  DataType: byte
  OrigDataType: byte
T_323: (in fn0800_0121(al, bArg00) : void)
  Class: Eq_323
  DataType: void
  OrigDataType: void
T_324: (in ds_3 : selector)
  Class: Eq_2
  DataType: (ptr (segment (0 (arr T_1494) a0000) (5BE T_334 t05BE)))
  OrigDataType: (ptr (segment (0 (arr T_1494) a0000) (5BE T_334 t05BE)))
T_325: (in 0x01F8 : word16)
  Class: Eq_325
  DataType: (memptr T_7 (struct (0 T_326 t0000)))
  OrigDataType: (memptr T_7 (struct (0 T_326 t0000)))
T_326: (in Mem0[0x0800:0x01F8:selector] : selector)
  Class: Eq_2
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_327: (in fn0800_01A5 : ptr32)
  Class: Eq_327
  DataType: (ptr (fn T_331 (T_320, T_324)))
  OrigDataType: (ptr (fn T_331 (T_320, T_324)))
T_328: (in signature of fn0800_01A5 : void)
  Class: Eq_327
  DataType: 
  OrigDataType: 
T_329: (in al : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_330: (in ds : selector)
  Class: Eq_2
  DataType: (ptr (segment (74 T_424 t0074) (78 T_428 t0078) (7C T_432 t007C) (80 T_437 t0080)))
  OrigDataType: (ptr (segment (74 T_424 t0074) (78 T_428 t0078) (7C T_432 t007C) (80 T_437 t0080)))
T_331: (in fn0800_01A5(al, ds_3) : void)
  Class: Eq_331
  DataType: void
  OrigDataType: void
T_332: (in cs : selector)
  Class: Eq_332
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_333: (in 0x05BE : word16)
  Class: Eq_333
  DataType: (memptr T_324 (struct (0 T_334 t0000)))
  OrigDataType: (memptr T_324 (struct (0 T_334 t0000)))
T_334: (in Mem0[ds_3:0x05BE:word16] : word16)
  Class: Eq_334
  DataType: word16
  OrigDataType: word16
T_335: (in SEQ(cs, Mem0[ds_3:0x05BE:word16]) : ptr32)
  Class: Eq_335
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_336: (in ax_20 : word16)
  Class: Eq_336
  DataType: word16
  OrigDataType: word16
T_337: (in 0x0000 : word16)
  Class: Eq_336
  DataType: word16
  OrigDataType: word16
T_338: (in al_21 : byte)
  Class: Eq_338
  DataType: bcu8
  OrigDataType: bcu8
T_339: (in 0x00 : byte)
  Class: Eq_338
  DataType: byte
  OrigDataType: byte
T_340: (in ah_22 : byte)
  Class: Eq_340
  DataType: (union (byte u0) (word16 u1))
  OrigDataType: (union (byte u0) (word16 u1))
T_341: (in 0x00 : byte)
  Class: Eq_340
  DataType: byte
  OrigDataType: byte
T_342: (in si_25 : word16)
  Class: Eq_342
  DataType: (memptr T_324 (struct 0001 (0 T_348 t0000)))
  OrigDataType: (memptr T_324 (struct 0001 (0 T_348 t0000)))
T_343: (in 0x0000 : word16)
  Class: Eq_342
  DataType: word16
  OrigDataType: word16
T_344: (in cx_26 : word16)
  Class: Eq_344
  DataType: word16
  OrigDataType: word16
T_345: (in 0x002F : word16)
  Class: Eq_344
  DataType: word16
  OrigDataType: word16
T_346: (in 0x0000 : word16)
  Class: Eq_346
  DataType: word16
  OrigDataType: word16
T_347: (in si_25 + 0x0000 : word16)
  Class: Eq_347
  DataType: word16
  OrigDataType: word16
T_348: (in Mem0[ds_3:si_25 + 0x0000:byte] : byte)
  Class: Eq_348
  DataType: byte
  OrigDataType: byte
T_349: (in al_21 + Mem0[ds_3:si_25 + 0x0000:byte] : byte)
  Class: Eq_338
  DataType: byte
  OrigDataType: byte
T_350: (in 0x00 : byte)
  Class: Eq_338
  DataType: bcu8
  OrigDataType: bcu8
T_351: (in al_21 <u 0x00 : bool)
  Class: Eq_351
  DataType: bool
  OrigDataType: bool
T_352: (in ah_22 + (al_21 <u 0x00) : word16)
  Class: Eq_340
  DataType: word16
  OrigDataType: word16
T_353: (in DPB(ax_20, ah_22, 8, 8) : word16)
  Class: Eq_336
  DataType: word16
  OrigDataType: word16
T_354: (in 0x0001 : word16)
  Class: Eq_354
  DataType: word16
  OrigDataType: word16
T_355: (in si_25 + 0x0001 : word16)
  Class: Eq_342
  DataType: word16
  OrigDataType: word16
T_356: (in 0x0001 : word16)
  Class: Eq_356
  DataType: word16
  OrigDataType: word16
T_357: (in cx_26 - 0x0001 : word16)
  Class: Eq_344
  DataType: word16
  OrigDataType: word16
T_358: (in 0x0000 : word16)
  Class: Eq_344
  DataType: word16
  OrigDataType: word16
T_359: (in cx_26 != 0x0000 : bool)
  Class: Eq_359
  DataType: bool
  OrigDataType: bool
T_360: (in 0x0D37 : word16)
  Class: Eq_336
  DataType: word16
  OrigDataType: word16
T_361: (in ax_20 == 0x0D37 : bool)
  Class: Eq_361
  DataType: bool
  OrigDataType: bool
T_362: (in msdos_terminate : ptr32)
  Class: Eq_362
  DataType: (ptr (fn T_366 (T_365)))
  OrigDataType: (ptr (fn T_366 (T_365)))
T_363: (in signature of msdos_terminate : void)
  Class: Eq_362
  DataType: 
  OrigDataType: 
T_364: (in al : byte)
  Class: Eq_364
  DataType: byte
  OrigDataType: byte
T_365: (in bArg00 : byte)
  Class: Eq_364
  DataType: byte
  OrigDataType: byte
T_366: (in msdos_terminate(bArg00) : void)
  Class: Eq_366
  DataType: void
  OrigDataType: void
T_367: (in fn0800_01DA : ptr32)
  Class: Eq_367
  DataType: (ptr (fn T_374 (T_372, T_373, T_324)))
  OrigDataType: (ptr (fn T_374 (T_372, T_373, T_324)))
T_368: (in signature of fn0800_01DA : void)
  Class: Eq_367
  DataType: 
  OrigDataType: 
T_369: (in cx : word16)
  Class: Eq_369
  DataType: word16
  OrigDataType: word16
T_370: (in dx : word16)
  Class: Eq_370
  DataType: word16
  OrigDataType: word16
T_371: (in ds : selector)
  Class: Eq_2
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_372: (in 0x0019 : word16)
  Class: Eq_369
  DataType: word16
  OrigDataType: word16
T_373: (in 0x002F : word16)
  Class: Eq_370
  DataType: word16
  OrigDataType: word16
T_374: (in fn0800_01DA(0x0019, 0x002F, ds_3) : word16)
  Class: Eq_374
  DataType: word16
  OrigDataType: word16
T_375: (in es_bx_6 : word32)
  Class: Eq_375
  DataType: word32
  OrigDataType: word32
T_376: (in msdos_get_interrupt_vector : ptr32)
  Class: Eq_376
  DataType: (ptr (fn T_379 (T_43)))
  OrigDataType: (ptr (fn T_379 (T_43)))
T_377: (in signature of msdos_get_interrupt_vector : void)
  Class: Eq_376
  DataType: 
  OrigDataType: 
T_378: (in al : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_379: (in msdos_get_interrupt_vector(al) : word32)
  Class: Eq_375
  DataType: word32
  OrigDataType: word32
T_380: (in (word16) es_bx_6 : word16)
  Class: Eq_380
  DataType: word16
  OrigDataType: word16
T_381: (in 0x0074 : word16)
  Class: Eq_381
  DataType: (memptr T_44 (struct (0 T_382 t0000)))
  OrigDataType: (memptr T_44 (struct (0 T_382 t0000)))
T_382: (in Mem9[ds:0x0074:word16] : word16)
  Class: Eq_380
  DataType: word16
  OrigDataType: word16
T_383: (in SLICE(es_bx_6, selector, 16) : selector)
  Class: Eq_383
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_384: (in 0x0076 : word16)
  Class: Eq_384
  DataType: (memptr T_44 (struct (0 T_385 t0000)))
  OrigDataType: (memptr T_44 (struct (0 T_385 t0000)))
T_385: (in Mem10[ds:0x0076:word16] : word16)
  Class: Eq_383
  DataType: word16
  OrigDataType: word16
T_386: (in es_bx_11 : word32)
  Class: Eq_386
  DataType: word32
  OrigDataType: word32
T_387: (in msdos_get_interrupt_vector : ptr32)
  Class: Eq_376
  DataType: (ptr (fn T_388 (T_43)))
  OrigDataType: (ptr (fn T_388 (T_43)))
T_388: (in msdos_get_interrupt_vector(al) : word32)
  Class: Eq_386
  DataType: word32
  OrigDataType: word32
T_389: (in (word16) es_bx_11 : word16)
  Class: Eq_389
  DataType: word16
  OrigDataType: word16
T_390: (in 0x0078 : word16)
  Class: Eq_390
  DataType: (memptr T_44 (struct (0 T_391 t0000)))
  OrigDataType: (memptr T_44 (struct (0 T_391 t0000)))
T_391: (in Mem14[ds:0x0078:word16] : word16)
  Class: Eq_389
  DataType: word16
  OrigDataType: word16
T_392: (in SLICE(es_bx_11, selector, 16) : selector)
  Class: Eq_392
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_393: (in 0x007A : word16)
  Class: Eq_393
  DataType: (memptr T_44 (struct (0 T_394 t0000)))
  OrigDataType: (memptr T_44 (struct (0 T_394 t0000)))
T_394: (in Mem15[ds:0x007A:word16] : word16)
  Class: Eq_392
  DataType: word16
  OrigDataType: word16
T_395: (in es_bx_16 : word32)
  Class: Eq_395
  DataType: word32
  OrigDataType: word32
T_396: (in msdos_get_interrupt_vector : ptr32)
  Class: Eq_376
  DataType: (ptr (fn T_397 (T_43)))
  OrigDataType: (ptr (fn T_397 (T_43)))
T_397: (in msdos_get_interrupt_vector(al) : word32)
  Class: Eq_395
  DataType: word32
  OrigDataType: word32
T_398: (in (word16) es_bx_16 : word16)
  Class: Eq_398
  DataType: word16
  OrigDataType: word16
T_399: (in 0x007C : word16)
  Class: Eq_399
  DataType: (memptr T_44 (struct (0 T_400 t0000)))
  OrigDataType: (memptr T_44 (struct (0 T_400 t0000)))
T_400: (in Mem19[ds:0x007C:word16] : word16)
  Class: Eq_398
  DataType: word16
  OrigDataType: word16
T_401: (in SLICE(es_bx_16, selector, 16) : selector)
  Class: Eq_401
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_402: (in 0x007E : word16)
  Class: Eq_402
  DataType: (memptr T_44 (struct (0 T_403 t0000)))
  OrigDataType: (memptr T_44 (struct (0 T_403 t0000)))
T_403: (in Mem20[ds:0x007E:word16] : word16)
  Class: Eq_401
  DataType: word16
  OrigDataType: word16
T_404: (in es_bx_21 : word32)
  Class: Eq_404
  DataType: word32
  OrigDataType: word32
T_405: (in msdos_get_interrupt_vector : ptr32)
  Class: Eq_376
  DataType: (ptr (fn T_406 (T_43)))
  OrigDataType: (ptr (fn T_406 (T_43)))
T_406: (in msdos_get_interrupt_vector(al) : word32)
  Class: Eq_404
  DataType: word32
  OrigDataType: word32
T_407: (in (word16) es_bx_21 : word16)
  Class: Eq_407
  DataType: word16
  OrigDataType: word16
T_408: (in 0x0080 : word16)
  Class: Eq_408
  DataType: (memptr T_44 (struct (0 T_409 t0000)))
  OrigDataType: (memptr T_44 (struct (0 T_409 t0000)))
T_409: (in Mem24[ds:0x0080:word16] : word16)
  Class: Eq_407
  DataType: word16
  OrigDataType: word16
T_410: (in SLICE(es_bx_21, selector, 16) : selector)
  Class: Eq_410
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_411: (in 0x0082 : word16)
  Class: Eq_411
  DataType: (memptr T_44 (struct (0 T_412 t0000)))
  OrigDataType: (memptr T_44 (struct (0 T_412 t0000)))
T_412: (in Mem25[ds:0x0082:word16] : word16)
  Class: Eq_410
  DataType: word16
  OrigDataType: word16
T_413: (in msdos_set_interrupt_vector : ptr32)
  Class: Eq_413
  DataType: (ptr (fn T_421 (T_417, T_420)))
  OrigDataType: (ptr (fn T_421 (T_417, T_420)))
T_414: (in signature of msdos_set_interrupt_vector : void)
  Class: Eq_413
  DataType: 
  OrigDataType: 
T_415: (in al : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_416: (in ds_dx : word32)
  Class: Eq_416
  DataType: word32
  OrigDataType: word32
T_417: (in 0x00 : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_418: (in cs : selector)
  Class: Eq_418
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_419: (in 0x0158 : word16)
  Class: Eq_419
  DataType: word16
  OrigDataType: word16
T_420: (in SEQ(cs, 0x0158) : word32)
  Class: Eq_416
  DataType: word32
  OrigDataType: word32
T_421: (in msdos_set_interrupt_vector(0x00, SEQ(cs, 0x0158)) : void)
  Class: Eq_421
  DataType: void
  OrigDataType: void
T_422: (in msdos_set_interrupt_vector : ptr32)
  Class: Eq_413
  DataType: (ptr (fn T_425 (T_329, T_424)))
  OrigDataType: (ptr (fn T_425 (T_329, T_424)))
T_423: (in 0x0074 : word16)
  Class: Eq_423
  DataType: (memptr T_330 (struct (0 T_424 t0000)))
  OrigDataType: (memptr T_330 (struct (0 T_424 t0000)))
T_424: (in Mem0[ds:0x0074:segptr32] : segptr32)
  Class: Eq_416
  DataType: segptr32
  OrigDataType: segptr32
T_425: (in msdos_set_interrupt_vector(al, Mem0[ds:0x0074:segptr32]) : void)
  Class: Eq_425
  DataType: void
  OrigDataType: void
T_426: (in msdos_set_interrupt_vector : ptr32)
  Class: Eq_413
  DataType: (ptr (fn T_429 (T_329, T_428)))
  OrigDataType: (ptr (fn T_429 (T_329, T_428)))
T_427: (in 0x0078 : word16)
  Class: Eq_427
  DataType: (memptr T_330 (struct (0 T_428 t0000)))
  OrigDataType: (memptr T_330 (struct (0 T_428 t0000)))
T_428: (in Mem0[ds:0x0078:segptr32] : segptr32)
  Class: Eq_416
  DataType: segptr32
  OrigDataType: segptr32
T_429: (in msdos_set_interrupt_vector(al, Mem0[ds:0x0078:segptr32]) : void)
  Class: Eq_429
  DataType: void
  OrigDataType: void
T_430: (in msdos_set_interrupt_vector : ptr32)
  Class: Eq_413
  DataType: (ptr (fn T_433 (T_329, T_432)))
  OrigDataType: (ptr (fn T_433 (T_329, T_432)))
T_431: (in 0x007C : word16)
  Class: Eq_431
  DataType: (memptr T_330 (struct (0 T_432 t0000)))
  OrigDataType: (memptr T_330 (struct (0 T_432 t0000)))
T_432: (in Mem0[ds:0x007C:segptr32] : segptr32)
  Class: Eq_416
  DataType: segptr32
  OrigDataType: segptr32
T_433: (in msdos_set_interrupt_vector(al, Mem0[ds:0x007C:segptr32]) : void)
  Class: Eq_433
  DataType: void
  OrigDataType: void
T_434: (in msdos_set_interrupt_vector : ptr32)
  Class: Eq_413
  DataType: (ptr (fn T_438 (T_435, T_437)))
  OrigDataType: (ptr (fn T_438 (T_435, T_437)))
T_435: (in 0x06 : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_436: (in 0x0080 : word16)
  Class: Eq_436
  DataType: (memptr T_330 (struct (0 T_437 t0000)))
  OrigDataType: (memptr T_330 (struct (0 T_437 t0000)))
T_437: (in Mem0[ds:0x0080:segptr32] : segptr32)
  Class: Eq_416
  DataType: segptr32
  OrigDataType: segptr32
T_438: (in msdos_set_interrupt_vector(0x06, Mem0[ds:0x0080:segptr32]) : void)
  Class: Eq_438
  DataType: void
  OrigDataType: void
T_439: (in bx : word16)
  Class: Eq_439
  DataType: word16
  OrigDataType: word16
T_440: (in ax_8 : word16)
  Class: Eq_440
  DataType: word16
  OrigDataType: word16
T_441: (in msdos_write_file : ptr32)
  Class: Eq_441
  DataType: (ptr (fn T_450 (T_447, T_369, T_448, T_449)))
  OrigDataType: (ptr (fn T_450 (T_447, T_369, T_448, T_449)))
T_442: (in signature of msdos_write_file : void)
  Class: Eq_441
  DataType: 
  OrigDataType: 
T_443: (in bx : word16)
  Class: Eq_443
  DataType: word16
  OrigDataType: word16
T_444: (in cx : word16)
  Class: Eq_369
  DataType: word16
  OrigDataType: word16
T_445: (in ds_dx : word32)
  Class: Eq_445
  DataType: word32
  OrigDataType: word32
T_446: (in axOut : ptr16)
  Class: Eq_446
  DataType: ptr16
  OrigDataType: ptr16
T_447: (in 0x0002 : word16)
  Class: Eq_443
  DataType: word16
  OrigDataType: word16
T_448: (in ds_dx : word32)
  Class: Eq_445
  DataType: word32
  OrigDataType: word32
T_449: (in out ax_8 : ptr16)
  Class: Eq_446
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_450: (in msdos_write_file(0x0002, cx, ds_dx, out ax_8) : bool)
  Class: Eq_450
  DataType: bool
  OrigDataType: bool
T_451: (in 0x0002 : word16)
  Class: Eq_451
  DataType: word16
  OrigDataType: word16
T_452: (in ds_3 : selector)
  Class: Eq_2
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_453: (in 0x01F8 : word16)
  Class: Eq_453
  DataType: (memptr T_7 (struct (0 T_454 t0000)))
  OrigDataType: (memptr T_7 (struct (0 T_454 t0000)))
T_454: (in Mem0[0x0800:0x01F8:selector] : selector)
  Class: Eq_2
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_455: (in bx_4 : word16)
  Class: Eq_455
  DataType: (memptr T_452 (struct (0 T_465 t0000)))
  OrigDataType: (memptr T_452 (struct (0 T_465 t0000)))
T_456: (in fn0800_01DA : ptr32)
  Class: Eq_367
  DataType: (ptr (fn T_459 (T_457, T_458, T_452)))
  OrigDataType: (ptr (fn T_459 (T_457, T_458, T_452)))
T_457: (in 0x001E : word16)
  Class: Eq_369
  DataType: word16
  OrigDataType: word16
T_458: (in 0x0056 : word16)
  Class: Eq_370
  DataType: word16
  OrigDataType: word16
T_459: (in fn0800_01DA(0x001E, 0x0056, ds_3) : word16)
  Class: Eq_455
  DataType: word16
  OrigDataType: word16
T_460: (in fn0800_0121 : ptr32)
  Class: Eq_318
  DataType: (ptr (fn T_463 (T_461, T_462)))
  OrigDataType: (ptr (fn T_463 (T_461, T_462)))
T_461: (in 0x03 : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_462: (in bLoc04 : byte)
  Class: Eq_321
  DataType: byte
  OrigDataType: byte
T_463: (in fn0800_0121(0x03, bLoc04) : void)
  Class: Eq_463
  DataType: void
  OrigDataType: void
T_464: (in bx_4 + si : word16)
  Class: Eq_464
  DataType: word16
  OrigDataType: word16
T_465: (in Mem0[ds_3:bx_4 + si:byte] : byte)
  Class: Eq_465
  DataType: byte
  OrigDataType: byte
T_466: (in 0x03 : byte)
  Class: Eq_466
  DataType: byte
  OrigDataType: byte
T_467: (in Mem0[ds_3:bx_4 + si:byte] + 0x03 : byte)
  Class: Eq_465
  DataType: byte
  OrigDataType: byte
T_468: (in bx_4 + si : word16)
  Class: Eq_468
  DataType: word16
  OrigDataType: word16
T_469: (in Mem13[ds_3:bx_4 + si:byte] : byte)
  Class: Eq_465
  DataType: byte
  OrigDataType: byte
T_470: (in bx_23 : word16)
  Class: Eq_470
  DataType: word16
  OrigDataType: word16
T_471: (in si_24 : word16)
  Class: Eq_471
  DataType: word16
  OrigDataType: word16
T_472: (in di_25 : word16)
  Class: Eq_470
  DataType: word16
  OrigDataType: word16
T_473: (in fn0800_0DD8 : ptr32)
  Class: Eq_473
  DataType: (ptr (fn T_484 (T_452, T_480, T_481, T_482, T_483)))
  OrigDataType: (ptr (fn T_484 (T_452, T_480, T_481, T_482, T_483)))
T_474: (in signature of fn0800_0DD8 : void)
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
T_478: (in siOut : ptr16)
  Class: Eq_478
  DataType: ptr16
  OrigDataType: ptr16
T_479: (in diOut : ptr16)
  Class: Eq_479
  DataType: ptr16
  OrigDataType: ptr16
T_480: (in 0x0194 : word16)
  Class: Eq_476
  DataType: word16
  OrigDataType: word16
T_481: (in out bx_23 : ptr16)
  Class: Eq_477
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_482: (in out si_24 : ptr16)
  Class: Eq_478
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_483: (in out di_25 : ptr16)
  Class: Eq_479
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_484: (in fn0800_0DD8(ds_3, 0x0194, out bx_23, out si_24, out di_25) : word16)
  Class: Eq_484
  DataType: word16
  OrigDataType: word16
T_485: (in fn0800_1661 : ptr32)
  Class: Eq_485
  DataType: (ptr (fn T_492 (T_470, T_472, T_452, T_491)))
  OrigDataType: (ptr (fn T_492 (T_470, T_472, T_452, T_491)))
T_486: (in signature of fn0800_1661 : void)
  Class: Eq_485
  DataType: 
  OrigDataType: 
T_487: (in bx : word16)
  Class: Eq_470
  DataType: word16
  OrigDataType: word16
T_488: (in di : word16)
  Class: Eq_470
  DataType: word16
  OrigDataType: word16
T_489: (in ds : selector)
  Class: Eq_2
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_490: (in wArg02 : word16)
  Class: Eq_490
  DataType: word16
  OrigDataType: word16
T_491: (in 0x01A6 : word16)
  Class: Eq_490
  DataType: word16
  OrigDataType: word16
T_492: (in fn0800_1661(bx_23, di_25, ds_3, 0x01A6) : void)
  Class: Eq_492
  DataType: void
  OrigDataType: void
T_493: (in wLoc08 : word16)
  Class: Eq_493
  DataType: word16
  OrigDataType: word16
T_494: (in wLoc06 : word16)
  Class: Eq_493
  DataType: word16
  OrigDataType: word16
T_495: (in wLoc08 == wLoc06 : bool)
  Class: Eq_495
  DataType: bool
  OrigDataType: bool
T_496: (in fn0800_0237 : ptr32)
  Class: Eq_496
  DataType: (ptr (fn T_502 (T_501)))
  OrigDataType: (ptr (fn T_502 (T_501)))
T_497: (in signature of fn0800_0237 : void)
  Class: Eq_496
  DataType: 
  OrigDataType: 
T_498: (in bp : word16)
  Class: Eq_498
  DataType: word16
  OrigDataType: word16
T_499: (in fp : ptr16)
  Class: Eq_499
  DataType: ptr16
  OrigDataType: ptr16
T_500: (in 0x0004 : word16)
  Class: Eq_500
  DataType: word16
  OrigDataType: word16
T_501: (in fp - 0x0004 : word16)
  Class: Eq_498
  DataType: word16
  OrigDataType: word16
T_502: (in fn0800_0237(fp - 0x0004) : word16)
  Class: Eq_502
  DataType: word16
  OrigDataType: word16
T_503: (in bp_47 : word16)
  Class: Eq_503
  DataType: word16
  OrigDataType: word16
T_504: (in si_48 : word16)
  Class: Eq_504
  DataType: word16
  OrigDataType: word16
T_505: (in fn0800_0222 : ptr32)
  Class: Eq_505
  DataType: (ptr (fn T_514 (T_511, T_452, T_512, T_513)))
  OrigDataType: (ptr (fn T_514 (T_511, T_452, T_512, T_513)))
T_506: (in signature of fn0800_0222 : void)
  Class: Eq_505
  DataType: 
  OrigDataType: 
T_507: (in bp : word16)
  Class: Eq_498
  DataType: (memptr T_554 (struct (FFFFFFFC T_557 tFFFFFFFC) (FFFFFFFE T_560 tFFFFFFFE)))
  OrigDataType: (memptr T_554 (struct (FFFFFFFC T_557 tFFFFFFFC) (FFFFFFFE T_560 tFFFFFFFE)))
T_508: (in ds : selector)
  Class: Eq_2
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_509: (in bpOut : ptr16)
  Class: Eq_509
  DataType: ptr16
  OrigDataType: ptr16
T_510: (in siOut : ptr16)
  Class: Eq_510
  DataType: ptr16
  OrigDataType: ptr16
T_511: (in fp - 0x0004 : word16)
  Class: Eq_498
  DataType: word16
  OrigDataType: word16
T_512: (in out bp_47 : ptr16)
  Class: Eq_509
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_513: (in out si_48 : ptr16)
  Class: Eq_510
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_514: (in fn0800_0222(fp - 0x0004, ds_3, out bp_47, out si_48) : word16)
  Class: Eq_514
  DataType: word16
  OrigDataType: word16
T_515: (in ax : word16)
  Class: Eq_515
  DataType: word16
  OrigDataType: word16
T_516: (in bx_12 : word16)
  Class: Eq_470
  DataType: word16
  OrigDataType: word16
T_517: (in si_13 : word16)
  Class: Eq_517
  DataType: word16
  OrigDataType: word16
T_518: (in di_14 : word16)
  Class: Eq_470
  DataType: word16
  OrigDataType: word16
T_519: (in fn0800_0DD8 : ptr32)
  Class: Eq_473
  DataType: (ptr (fn T_524 (T_292, T_520, T_521, T_522, T_523)))
  OrigDataType: (ptr (fn T_524 (T_292, T_520, T_521, T_522, T_523)))
T_520: (in 0x0194 : word16)
  Class: Eq_476
  DataType: word16
  OrigDataType: word16
T_521: (in out bx_12 : ptr16)
  Class: Eq_477
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_522: (in out si_13 : ptr16)
  Class: Eq_478
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_523: (in out di_14 : ptr16)
  Class: Eq_479
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_524: (in fn0800_0DD8(ds, 0x0194, out bx_12, out si_13, out di_14) : word16)
  Class: Eq_524
  DataType: word16
  OrigDataType: word16
T_525: (in fn0800_1661 : ptr32)
  Class: Eq_485
  DataType: (ptr (fn T_527 (T_516, T_518, T_292, T_526)))
  OrigDataType: (ptr (fn T_527 (T_516, T_518, T_292, T_526)))
T_526: (in 0x01A6 : word16)
  Class: Eq_490
  DataType: word16
  OrigDataType: word16
T_527: (in fn0800_1661(bx_12, di_14, ds, 0x01A6) : void)
  Class: Eq_527
  DataType: void
  OrigDataType: void
T_528: (in wLoc06 : word16)
  Class: Eq_528
  DataType: word16
  OrigDataType: word16
T_529: (in wLoc04 : word16)
  Class: Eq_528
  DataType: word16
  OrigDataType: word16
T_530: (in wLoc06 == wLoc04 : bool)
  Class: Eq_530
  DataType: bool
  OrigDataType: bool
T_531: (in fn0800_0237 : ptr32)
  Class: Eq_496
  DataType: (ptr (fn T_535 (T_534)))
  OrigDataType: (ptr (fn T_535 (T_534)))
T_532: (in fp : ptr16)
  Class: Eq_532
  DataType: ptr16
  OrigDataType: ptr16
T_533: (in 0x0002 : word16)
  Class: Eq_533
  DataType: word16
  OrigDataType: word16
T_534: (in fp - 0x0002 : word16)
  Class: Eq_498
  DataType: word16
  OrigDataType: word16
T_535: (in fn0800_0237(fp - 0x0002) : word16)
  Class: Eq_535
  DataType: word16
  OrigDataType: word16
T_536: (in bp_36 : word16)
  Class: Eq_498
  DataType: word16
  OrigDataType: word16
T_537: (in si_37 : word16)
  Class: Eq_537
  DataType: word16
  OrigDataType: word16
T_538: (in fn0800_0222 : ptr32)
  Class: Eq_505
  DataType: (ptr (fn T_542 (T_539, T_292, T_540, T_541)))
  OrigDataType: (ptr (fn T_542 (T_539, T_292, T_540, T_541)))
T_539: (in fp - 0x0002 : word16)
  Class: Eq_498
  DataType: word16
  OrigDataType: word16
T_540: (in out bp_36 : ptr16)
  Class: Eq_509
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_541: (in out si_37 : ptr16)
  Class: Eq_510
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_542: (in fn0800_0222(fp - 0x0002, ds, out bp_36, out si_37) : word16)
  Class: Eq_542
  DataType: word16
  OrigDataType: word16
T_543: (in bp_39 : word16)
  Class: Eq_543
  DataType: word16
  OrigDataType: word16
T_544: (in si_40 : word16)
  Class: Eq_544
  DataType: word16
  OrigDataType: word16
T_545: (in fn0800_0222 : ptr32)
  Class: Eq_505
  DataType: (ptr (fn T_548 (T_536, T_292, T_546, T_547)))
  OrigDataType: (ptr (fn T_548 (T_536, T_292, T_546, T_547)))
T_546: (in out bp_39 : ptr16)
  Class: Eq_509
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_547: (in out si_40 : ptr16)
  Class: Eq_510
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_548: (in fn0800_0222(bp_36, ds, out bp_39, out si_40) : word16)
  Class: Eq_548
  DataType: word16
  OrigDataType: word16
T_549: (in ax : word16)
  Class: Eq_549
  DataType: word16
  OrigDataType: word16
T_550: (in fn0800_023B : ptr32)
  Class: Eq_550
  DataType: (ptr (fn T_561 (T_557, T_560)))
  OrigDataType: (ptr (fn T_561 (T_557, T_560)))
T_551: (in signature of fn0800_023B : void)
  Class: Eq_550
  DataType: 
  OrigDataType: 
T_552: (in wArg02 : word16)
  Class: Eq_552
  DataType: word16
  OrigDataType: word16
T_553: (in wArg04 : word16)
  Class: Eq_553
  DataType: word16
  OrigDataType: word16
T_554: (in ss : selector)
  Class: Eq_554
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_555: (in 0x0004 : word16)
  Class: Eq_555
  DataType: word16
  OrigDataType: word16
T_556: (in bp - 0x0004 : word16)
  Class: Eq_556
  DataType: word16
  OrigDataType: word16
T_557: (in Mem0[ss:bp - 0x0004:word16] : word16)
  Class: Eq_552
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
  Class: Eq_553
  DataType: word16
  OrigDataType: word16
T_561: (in fn0800_023B(Mem0[ss:bp - 0x0004:word16], Mem0[ss:bp - 0x0002:word16]) : void)
  Class: Eq_561
  DataType: void
  OrigDataType: void
T_562: (in bx_19 : word16)
  Class: Eq_562
  DataType: word16
  OrigDataType: word16
T_563: (in si_20 : word16)
  Class: Eq_563
  DataType: word16
  OrigDataType: word16
T_564: (in di_21 : word16)
  Class: Eq_564
  DataType: word16
  OrigDataType: word16
T_565: (in ax_22 : word16)
  Class: Eq_565
  DataType: word16
  OrigDataType: word16
T_566: (in fn0800_0DD8 : ptr32)
  Class: Eq_473
  DataType: (ptr (fn T_571 (T_508, T_567, T_568, T_569, T_570)))
  OrigDataType: (ptr (fn T_571 (T_508, T_567, T_568, T_569, T_570)))
T_567: (in 0x01AC : word16)
  Class: Eq_476
  DataType: word16
  OrigDataType: word16
T_568: (in out bx_19 : ptr16)
  Class: Eq_477
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_569: (in out si_20 : ptr16)
  Class: Eq_478
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_570: (in out di_21 : ptr16)
  Class: Eq_479
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_571: (in fn0800_0DD8(ds, 0x01AC, out bx_19, out si_20, out di_21) : word16)
  Class: Eq_565
  DataType: word16
  OrigDataType: word16
T_572: (in bp_27 : word16)
  Class: Eq_572
  DataType: word16
  OrigDataType: word16
T_573: (in fn0800_0237 : ptr32)
  Class: Eq_496
  DataType: (ptr (fn T_574 (T_507)))
  OrigDataType: (ptr (fn T_574 (T_507)))
T_574: (in fn0800_0237(bp) : word16)
  Class: Eq_574
  DataType: word16
  OrigDataType: word16
T_575: (in *bpOut : word16)
  Class: Eq_574
  DataType: 
  OrigDataType: 
T_576: (in ss : selector)
  Class: Eq_576
  DataType: 
  OrigDataType: 
T_577: (in 0x0000 : word16)
  Class: Eq_577
  DataType: 
  OrigDataType: 
T_578: (in bp + 0x0000 : word16)
  Class: Eq_578
  DataType: 
  OrigDataType: 
T_579: (in Mem0[ss:bp + 0x0000:word16] : word16)
  Class: Eq_579
  DataType: 
  OrigDataType: 
T_580: (in wArg02 : word16)
  Class: Eq_580
  DataType: 
  OrigDataType: 
T_581: (in wArg04 : word16)
  Class: Eq_580
  DataType: 
  OrigDataType: 
T_582: (in wArg02 <= wArg04 : bool)
  Class: Eq_582
  DataType: 
  OrigDataType: 
T_583: (in ax_21 : word16)
  Class: Eq_583
  DataType: 
  OrigDataType: 
T_584: (in 0x0220 : word16)
  Class: Eq_584
  DataType: 
  OrigDataType: 
T_585: (in Mem0[ds:0x0220:word16] : word16)
  Class: Eq_583
  DataType: 
  OrigDataType: 
T_586: (in v7_22 : word16)
  Class: Eq_586
  DataType: 
  OrigDataType: 
T_587: (in 0x0220 : word16)
  Class: Eq_587
  DataType: 
  OrigDataType: 
T_588: (in Mem0[ds:0x0220:word16] : word16)
  Class: Eq_588
  DataType: 
  OrigDataType: 
T_589: (in 0x0001 : word16)
  Class: Eq_589
  DataType: 
  OrigDataType: 
T_590: (in Mem0[ds:0x0220:word16] - 0x0001 : word16)
  Class: Eq_586
  DataType: 
  OrigDataType: 
T_591: (in Mem23[ds:0x0220:word16] : word16)
  Class: Eq_586
  DataType: 
  OrigDataType: 
T_592: (in al_25 : byte)
  Class: Eq_16
  DataType: 
  OrigDataType: 
T_593: (in (byte) ax_21 : byte)
  Class: Eq_16
  DataType: 
  OrigDataType: 
T_594: (in 0x0000 : word16)
  Class: Eq_583
  DataType: 
  OrigDataType: 
T_595: (in ax_21 != 0x0000 : bool)
  Class: Eq_595
  DataType: 
  OrigDataType: 
T_596: (in cs : selector)
  Class: Eq_596
  DataType: 
  OrigDataType: 
T_597: (in 0x05CA : word16)
  Class: Eq_597
  DataType: 
  OrigDataType: 
T_598: (in SEQ(ds, 0x05CA) : ptr32)
  Class: Eq_598
  DataType: 
  OrigDataType: 
T_599: (in 0x0220 : word16)
  Class: Eq_599
  DataType: 
  OrigDataType: 
T_600: (in Mem23[ds:0x0220:word16] : word16)
  Class: Eq_600
  DataType: 
  OrigDataType: 
T_601: (in 0x0002 : word16)
  Class: Eq_601
  DataType: 
  OrigDataType: 
T_602: (in Mem23[ds:0x0220:word16] * 0x0002 : word16)
  Class: Eq_602
  DataType: 
  OrigDataType: 
T_603: (in SEQ(ds, 0x05CA)[Mem23[ds:0x0220:word16] * 0x0002] : word16)
  Class: Eq_603
  DataType: 
  OrigDataType: 
T_604: (in SEQ(cs, SEQ(ds, 0x05CA)[Mem23[ds:0x0220:word16] * 0x0002]) : ptr32)
  Class: Eq_604
  DataType: 
  OrigDataType: 
T_605: (in 0x0216 : word16)
  Class: Eq_605
  DataType: 
  OrigDataType: 
T_606: (in Mem23[ds:0x0216:word16] : word16)
  Class: Eq_606
  DataType: 
  OrigDataType: 
T_607: (in SEQ(cs, Mem23[ds:0x0216:word16]) : ptr32)
  Class: Eq_607
  DataType: 
  OrigDataType: 
T_608: (in 0x0218 : word16)
  Class: Eq_608
  DataType: 
  OrigDataType: 
T_609: (in Mem23[ds:0x0218:word16] : word16)
  Class: Eq_609
  DataType: 
  OrigDataType: 
T_610: (in SEQ(cs, Mem23[ds:0x0218:word16]) : ptr32)
  Class: Eq_610
  DataType: 
  OrigDataType: 
T_611: (in 0x021A : word16)
  Class: Eq_611
  DataType: 
  OrigDataType: 
T_612: (in Mem23[ds:0x021A:word16] : word16)
  Class: Eq_612
  DataType: 
  OrigDataType: 
T_613: (in SEQ(cs, Mem23[ds:0x021A:word16]) : ptr32)
  Class: Eq_613
  DataType: 
  OrigDataType: 
T_614: (in fn0800_0121 : ptr32)
  Class: Eq_318
  DataType: 
  OrigDataType: 
T_615: (in bLoc06 : byte)
  Class: Eq_321
  DataType: 
  OrigDataType: 
T_616: (in fn0800_0121(al_25, bLoc06) : void)
  Class: Eq_616
  DataType: 
  OrigDataType: 
T_617: (in si : word16)
  Class: Eq_617
  DataType: 
  OrigDataType: 
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
T_621: (in 0x02BD : word16)
  Class: Eq_621
  DataType: 
  OrigDataType: 
T_622: (in Mem3[0x0800:0x02BD:word16] : word16)
  Class: Eq_620
  DataType: 
  OrigDataType: 
T_623: (in 0x02BF : word16)
  Class: Eq_623
  DataType: 
  OrigDataType: 
T_624: (in Mem6[0x0800:0x02BF:word16] : word16)
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
T_735: (in 0x02BF : word16)
  Class: Eq_735
  DataType: 
  OrigDataType: 
T_736: (in Mem109[0x0800:0x02BF:selector] : selector)
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
T_749: (in fn0800_034C : ptr32)
  Class: Eq_749
  DataType: 
  OrigDataType: 
T_750: (in signature of fn0800_034C : void)
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
T_771: (in fn0800_034C(ax_118, cx_115, dx_121, bx_122, si_113, di_110, ss, es_8, out ax_118, out cx_115, out dx_121, out bx_122, out si_113, out di_110) : byte)
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
T_780: (in fn0800_034C : ptr32)
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
T_787: (in fn0800_034C(ax_118, cx_115, dx_121, bx_122, si_113, di_110, ss, es_8, out ax_118, out cx_115, out dx_121, out bx_122, out si_113, out di_110) : byte)
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
T_796: (in 0x02BD : word16)
  Class: Eq_796
  DataType: 
  OrigDataType: 
T_797: (in Mem214[0x0800:0x02BD:word16] : word16)
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
T_905: (in fn0800_04FD : ptr32)
  Class: Eq_905
  DataType: 
  OrigDataType: 
T_906: (in signature of fn0800_04FD : void)
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
T_909: (in fn0800_04FD(ds, cx_4) : word16)
  Class: Eq_904
  DataType: 
  OrigDataType: 
T_910: (in cx_65 : word16)
  Class: Eq_901
  DataType: 
  OrigDataType: 
T_911: (in di_10 : word16)
  Class: Eq_904
  DataType: 
  OrigDataType: 
T_912: (in 0x0000 : word16)
  Class: Eq_904
  DataType: 
  OrigDataType: 
T_913: (in ax_7 == 0x0000 : bool)
  Class: Eq_913
  DataType: 
  OrigDataType: 
T_914: (in ds_58 : selector)
  Class: Eq_914
  DataType: 
  OrigDataType: 
T_915: (in 0x008C : word16)
  Class: Eq_915
  DataType: 
  OrigDataType: 
T_916: (in Mem0[ds:0x008C:selector] : selector)
  Class: Eq_914
  DataType: 
  OrigDataType: 
T_917: (in 0x0000 : word16)
  Class: Eq_111
  DataType: 
  OrigDataType: 
T_918: (in ax_78 : word16)
  Class: Eq_918
  DataType: 
  OrigDataType: 
T_919: (in fn0800_04FD : ptr32)
  Class: Eq_905
  DataType: 
  OrigDataType: 
T_920: (in 0x008E : word16)
  Class: Eq_920
  DataType: 
  OrigDataType: 
T_921: (in Mem0[ds:0x008E:word16] : word16)
  Class: Eq_901
  DataType: 
  OrigDataType: 
T_922: (in fn0800_04FD(ds, Mem0[ds:0x008E:word16]) : word16)
  Class: Eq_918
  DataType: 
  OrigDataType: 
T_923: (in 0x0088 : word16)
  Class: Eq_923
  DataType: 
  OrigDataType: 
T_924: (in Mem83[ds:0x0088:word16] : word16)
  Class: Eq_918
  DataType: 
  OrigDataType: 
T_925: (in di_102 : word16)
  Class: Eq_904
  DataType: 
  OrigDataType: 
T_926: (in bx_80 : word16)
  Class: Eq_918
  DataType: 
  OrigDataType: 
T_927: (in 0x0000 : word16)
  Class: Eq_918
  DataType: 
  OrigDataType: 
T_928: (in ax_78 != 0x0000 : bool)
  Class: Eq_928
  DataType: 
  OrigDataType: 
T_929: (in 0x0000 : word16)
  Class: Eq_929
  DataType: 
  OrigDataType: 
T_930: (in si + 0x0000 : word16)
  Class: Eq_930
  DataType: 
  OrigDataType: 
T_931: (in Mem0[ds_58:si + 0x0000:byte] : byte)
  Class: Eq_931
  DataType: 
  OrigDataType: 
T_932: (in 0x0000 : word16)
  Class: Eq_932
  DataType: 
  OrigDataType: 
T_933: (in di_10 + 0x0000 : word16)
  Class: Eq_933
  DataType: 
  OrigDataType: 
T_934: (in Mem67[ds:di_10 + 0x0000:byte] : byte)
  Class: Eq_931
  DataType: 
  OrigDataType: 
T_935: (in 0x0001 : word16)
  Class: Eq_935
  DataType: 
  OrigDataType: 
T_936: (in si + 0x0001 : word16)
  Class: Eq_111
  DataType: 
  OrigDataType: 
T_937: (in 0x0001 : word16)
  Class: Eq_937
  DataType: 
  OrigDataType: 
T_938: (in di_10 + 0x0001 : word16)
  Class: Eq_904
  DataType: 
  OrigDataType: 
T_939: (in 0x0001 : word16)
  Class: Eq_939
  DataType: 
  OrigDataType: 
T_940: (in cx_65 - 0x0001 : word16)
  Class: Eq_901
  DataType: 
  OrigDataType: 
T_941: (in 0x0000 : word16)
  Class: Eq_901
  DataType: 
  OrigDataType: 
T_942: (in cx_65 == 0x0000 : bool)
  Class: Eq_942
  DataType: 
  OrigDataType: 
T_943: (in fn0800_01E2 : ptr32)
  Class: Eq_109
  DataType: 
  OrigDataType: 
T_944: (in fn0800_01E2(si) : void)
  Class: Eq_944
  DataType: 
  OrigDataType: 
T_945: (in cx_103 : word16)
  Class: Eq_945
  DataType: 
  OrigDataType: 
T_946: (in 0xFFFF : word16)
  Class: Eq_945
  DataType: 
  OrigDataType: 
T_947: (in 0x0000 : word16)
  Class: Eq_947
  DataType: 
  OrigDataType: 
T_948: (in di_102 + 0x0000 : word16)
  Class: Eq_948
  DataType: 
  OrigDataType: 
T_949: (in Mem97[ds:di_102 + 0x0000:byte] : byte)
  Class: Eq_949
  DataType: 
  OrigDataType: 
T_950: (in 0x00 : byte)
  Class: Eq_949
  DataType: 
  OrigDataType: 
T_951: (in Mem97[ds:di_102 + 0x0000:byte] != 0x00 : bool)
  Class: Eq_951
  DataType: 
  OrigDataType: 
T_952: (in 0x0001 : word16)
  Class: Eq_952
  DataType: 
  OrigDataType: 
T_953: (in di_102 + 0x0001 : word16)
  Class: Eq_904
  DataType: 
  OrigDataType: 
T_954: (in 0x0001 : word16)
  Class: Eq_954
  DataType: 
  OrigDataType: 
T_955: (in cx_103 - 0x0001 : word16)
  Class: Eq_945
  DataType: 
  OrigDataType: 
T_956: (in 0x00 : byte)
  Class: Eq_956
  DataType: 
  OrigDataType: 
T_957: (in 0x0000 : word16)
  Class: Eq_957
  DataType: 
  OrigDataType: 
T_958: (in di_102 + 0x0000 : word16)
  Class: Eq_958
  DataType: 
  OrigDataType: 
T_959: (in Mem97[ds:di_102 + 0x0000:byte] : byte)
  Class: Eq_956
  DataType: 
  OrigDataType: 
T_960: (in 0x00 != Mem97[ds:di_102 + 0x0000:byte] : bool)
  Class: Eq_960
  DataType: 
  OrigDataType: 
T_961: (in 0x0000 : word16)
  Class: Eq_945
  DataType: 
  OrigDataType: 
T_962: (in cx_103 == 0x0000 : bool)
  Class: Eq_962
  DataType: 
  OrigDataType: 
T_963: (in 0x0000 : word16)
  Class: Eq_963
  DataType: 
  OrigDataType: 
T_964: (in bx_80 + 0x0000 : word16)
  Class: Eq_964
  DataType: 
  OrigDataType: 
T_965: (in Mem97[ds:bx_80 + 0x0000:word16] : word16)
  Class: Eq_904
  DataType: 
  OrigDataType: 
T_966: (in 0x0002 : word16)
  Class: Eq_966
  DataType: 
  OrigDataType: 
T_967: (in bx_80 + 0x0002 : word16)
  Class: Eq_918
  DataType: 
  OrigDataType: 
T_968: (in 0x0000 : word16)
  Class: Eq_968
  DataType: 
  OrigDataType: 
T_969: (in 0x0000 : word16)
  Class: Eq_969
  DataType: 
  OrigDataType: 
T_970: (in bx_80 + 0x0000 : word16)
  Class: Eq_970
  DataType: 
  OrigDataType: 
T_971: (in Mem108[ds:bx_80 + 0x0000:word16] : word16)
  Class: Eq_968
  DataType: 
  OrigDataType: 
T_972: (in ax_16 : word16)
  Class: Eq_972
  DataType: 
  OrigDataType: 
T_973: (in ds : selector)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_974: (in wArg02 : word16)
  Class: Eq_972
  DataType: 
  OrigDataType: 
T_975: (in 0x0006 : word16)
  Class: Eq_975
  DataType: 
  OrigDataType: 
T_976: (in wArg02 + 0x0006 : word16)
  Class: Eq_976
  DataType: 
  OrigDataType: 
T_977: (in Mem0[ds:wArg02 + 0x0006:word16] : word16)
  Class: Eq_972
  DataType: 
  OrigDataType: 
T_978: (in 0x060C : word16)
  Class: Eq_978
  DataType: 
  OrigDataType: 
T_979: (in Mem17[ds:0x060C:word16] : word16)
  Class: Eq_972
  DataType: 
  OrigDataType: 
T_980: (in ax_16 != wArg02 : bool)
  Class: Eq_980
  DataType: 
  OrigDataType: 
T_981: (in si_30 : word16)
  Class: Eq_981
  DataType: 
  OrigDataType: 
T_982: (in 0x0004 : word16)
  Class: Eq_982
  DataType: 
  OrigDataType: 
T_983: (in wArg02 + 0x0004 : word16)
  Class: Eq_983
  DataType: 
  OrigDataType: 
T_984: (in Mem17[ds:wArg02 + 0x0004:word16] : word16)
  Class: Eq_981
  DataType: 
  OrigDataType: 
T_985: (in 0x060C : word16)
  Class: Eq_985
  DataType: 
  OrigDataType: 
T_986: (in Mem17[ds:0x060C:word16] : word16)
  Class: Eq_986
  DataType: 
  OrigDataType: 
T_987: (in 0x0004 : word16)
  Class: Eq_987
  DataType: 
  OrigDataType: 
T_988: (in Mem17[ds:0x060C:word16] + 0x0004 : word16)
  Class: Eq_988
  DataType: 
  OrigDataType: 
T_989: (in Mem32[ds:Mem17[ds:0x060C:word16] + 0x0004:word16] : word16)
  Class: Eq_981
  DataType: 
  OrigDataType: 
T_990: (in 0x060C : word16)
  Class: Eq_990
  DataType: 
  OrigDataType: 
T_991: (in Mem32[ds:0x060C:word16] : word16)
  Class: Eq_991
  DataType: 
  OrigDataType: 
T_992: (in 0x0006 : word16)
  Class: Eq_992
  DataType: 
  OrigDataType: 
T_993: (in si_30 + 0x0006 : word16)
  Class: Eq_993
  DataType: 
  OrigDataType: 
T_994: (in Mem34[ds:si_30 + 0x0006:word16] : word16)
  Class: Eq_991
  DataType: 
  OrigDataType: 
T_995: (in 0x0000 : word16)
  Class: Eq_995
  DataType: 
  OrigDataType: 
T_996: (in 0x060C : word16)
  Class: Eq_996
  DataType: 
  OrigDataType: 
T_997: (in Mem28[ds:0x060C:word16] : word16)
  Class: Eq_995
  DataType: 
  OrigDataType: 
T_998: (in ax : word16)
  Class: Eq_998
  DataType: 
  OrigDataType: 
T_999: (in ds : selector)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_1000: (in wArg02 : word16)
  Class: Eq_1000
  DataType: 
  OrigDataType: 
T_1001: (in 0x0000 : word16)
  Class: Eq_1001
  DataType: 
  OrigDataType: 
T_1002: (in wArg02 + 0x0000 : word16)
  Class: Eq_1002
  DataType: 
  OrigDataType: 
T_1003: (in Mem0[ds:wArg02 + 0x0000:word16] : word16)
  Class: Eq_1003
  DataType: 
  OrigDataType: 
T_1004: (in wArg04 : word16)
  Class: Eq_1004
  DataType: 
  OrigDataType: 
T_1005: (in Mem0[ds:wArg02 + 0x0000:word16] - wArg04 : word16)
  Class: Eq_1005
  DataType: 
  OrigDataType: 
T_1006: (in 0x0000 : word16)
  Class: Eq_1006
  DataType: 
  OrigDataType: 
T_1007: (in wArg02 + 0x0000 : word16)
  Class: Eq_1007
  DataType: 
  OrigDataType: 
T_1008: (in Mem19[ds:wArg02 + 0x0000:word16] : word16)
  Class: Eq_1005
  DataType: 
  OrigDataType: 
T_1009: (in si_21 : word16)
  Class: Eq_1009
  DataType: 
  OrigDataType: 
T_1010: (in 0x0000 : word16)
  Class: Eq_1010
  DataType: 
  OrigDataType: 
T_1011: (in wArg02 + 0x0000 : word16)
  Class: Eq_1011
  DataType: 
  OrigDataType: 
T_1012: (in Mem19[ds:wArg02 + 0x0000:word16] : word16)
  Class: Eq_1012
  DataType: 
  OrigDataType: 
T_1013: (in Mem19[ds:wArg02 + 0x0000:word16] + wArg02 : word16)
  Class: Eq_1009
  DataType: 
  OrigDataType: 
T_1014: (in 0x0001 : word16)
  Class: Eq_1014
  DataType: 
  OrigDataType: 
T_1015: (in wArg04 + 0x0001 : word16)
  Class: Eq_1015
  DataType: 
  OrigDataType: 
T_1016: (in 0x0000 : word16)
  Class: Eq_1016
  DataType: 
  OrigDataType: 
T_1017: (in si_21 + 0x0000 : word16)
  Class: Eq_1017
  DataType: 
  OrigDataType: 
T_1018: (in Mem24[ds:si_21 + 0x0000:word16] : word16)
  Class: Eq_1015
  DataType: 
  OrigDataType: 
T_1019: (in 0x0002 : word16)
  Class: Eq_1019
  DataType: 
  OrigDataType: 
T_1020: (in si_21 + 0x0002 : word16)
  Class: Eq_1020
  DataType: 
  OrigDataType: 
T_1021: (in Mem25[ds:si_21 + 0x0002:word16] : word16)
  Class: Eq_1000
  DataType: 
  OrigDataType: 
T_1022: (in 0x060A : word16)
  Class: Eq_1022
  DataType: 
  OrigDataType: 
T_1023: (in Mem25[ds:0x060A:word16] : word16)
  Class: Eq_1000
  DataType: 
  OrigDataType: 
T_1024: (in Mem25[ds:0x060A:word16] != wArg02 : bool)
  Class: Eq_1024
  DataType: 
  OrigDataType: 
T_1025: (in si_21 + wArg04 : word16)
  Class: Eq_1025
  DataType: 
  OrigDataType: 
T_1026: (in 0x0002 : word16)
  Class: Eq_1026
  DataType: 
  OrigDataType: 
T_1027: (in si_21 + wArg04 + 0x0002 : word16)
  Class: Eq_1027
  DataType: 
  OrigDataType: 
T_1028: (in Mem43[ds:si_21 + wArg04 + 0x0002:word16] : word16)
  Class: Eq_1009
  DataType: 
  OrigDataType: 
T_1029: (in 0x060A : word16)
  Class: Eq_1029
  DataType: 
  OrigDataType: 
T_1030: (in Mem39[ds:0x060A:word16] : word16)
  Class: Eq_1009
  DataType: 
  OrigDataType: 
T_1031: (in 0x0004 : word16)
  Class: Eq_1031
  DataType: 
  OrigDataType: 
T_1032: (in si_21 + 0x0004 : word16)
  Class: Eq_1032
  DataType: 
  OrigDataType: 
T_1033: (in ax : word16)
  Class: Eq_1033
  DataType: 
  OrigDataType: 
T_1034: (in ax_30 : word16)
  Class: Eq_1034
  DataType: 
  OrigDataType: 
T_1035: (in ax_21 : word16)
  Class: Eq_1035
  DataType: 
  OrigDataType: 
T_1036: (in fn0800_0594 : ptr32)
  Class: Eq_1036
  DataType: 
  OrigDataType: 
T_1037: (in signature of fn0800_0594 : void)
  Class: Eq_1036
  DataType: 
  OrigDataType: 
T_1038: (in ds : selector)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_1039: (in wArg02 : word16)
  Class: Eq_1039
  DataType: 
  OrigDataType: 
T_1040: (in wArg04 : word16)
  Class: Eq_1040
  DataType: 
  OrigDataType: 
T_1041: (in ds : selector)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_1042: (in wArg02 : word16)
  Class: Eq_1042
  DataType: 
  OrigDataType: 
T_1043: (in 0xFFFF : word16)
  Class: Eq_1043
  DataType: 
  OrigDataType: 
T_1044: (in wArg02 & 0xFFFF : word16)
  Class: Eq_1039
  DataType: 
  OrigDataType: 
T_1045: (in 0x0000 : word16)
  Class: Eq_1040
  DataType: 
  OrigDataType: 
T_1046: (in fn0800_0594(ds, wArg02 & 0xFFFF, 0x0000) : word16)
  Class: Eq_1035
  DataType: 
  OrigDataType: 
T_1047: (in 0xFFFF : word16)
  Class: Eq_1035
  DataType: 
  OrigDataType: 
T_1048: (in ax_21 != 0xFFFF : bool)
  Class: Eq_1048
  DataType: 
  OrigDataType: 
T_1049: (in 0x060A : word16)
  Class: Eq_1049
  DataType: 
  OrigDataType: 
T_1050: (in Mem0[ds:0x060A:word16] : word16)
  Class: Eq_1050
  DataType: 
  OrigDataType: 
T_1051: (in 0x0002 : word16)
  Class: Eq_1051
  DataType: 
  OrigDataType: 
T_1052: (in ax_21 + 0x0002 : word16)
  Class: Eq_1052
  DataType: 
  OrigDataType: 
T_1053: (in Mem42[ds:ax_21 + 0x0002:word16] : word16)
  Class: Eq_1050
  DataType: 
  OrigDataType: 
T_1054: (in 0x0001 : word16)
  Class: Eq_1054
  DataType: 
  OrigDataType: 
T_1055: (in wArg02 + 0x0001 : word16)
  Class: Eq_1055
  DataType: 
  OrigDataType: 
T_1056: (in 0x0000 : word16)
  Class: Eq_1056
  DataType: 
  OrigDataType: 
T_1057: (in ax_21 + 0x0000 : word16)
  Class: Eq_1057
  DataType: 
  OrigDataType: 
T_1058: (in Mem45[ds:ax_21 + 0x0000:word16] : word16)
  Class: Eq_1055
  DataType: 
  OrigDataType: 
T_1059: (in 0x060A : word16)
  Class: Eq_1059
  DataType: 
  OrigDataType: 
T_1060: (in Mem46[ds:0x060A:word16] : word16)
  Class: Eq_1035
  DataType: 
  OrigDataType: 
T_1061: (in 0x060A : word16)
  Class: Eq_1061
  DataType: 
  OrigDataType: 
T_1062: (in Mem46[ds:0x060A:word16] : word16)
  Class: Eq_1062
  DataType: 
  OrigDataType: 
T_1063: (in 0x0004 : word16)
  Class: Eq_1063
  DataType: 
  OrigDataType: 
T_1064: (in Mem46[ds:0x060A:word16] + 0x0004 : word16)
  Class: Eq_1034
  DataType: 
  OrigDataType: 
T_1065: (in 0x0000 : word16)
  Class: Eq_1034
  DataType: 
  OrigDataType: 
T_1066: (in ax : word16)
  Class: Eq_1066
  DataType: 
  OrigDataType: 
T_1067: (in ax_30 : word16)
  Class: Eq_1067
  DataType: 
  OrigDataType: 
T_1068: (in ax_21 : word16)
  Class: Eq_1068
  DataType: 
  OrigDataType: 
T_1069: (in fn0800_0594 : ptr32)
  Class: Eq_1036
  DataType: 
  OrigDataType: 
T_1070: (in ds : selector)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_1071: (in wArg02 : word16)
  Class: Eq_1071
  DataType: 
  OrigDataType: 
T_1072: (in 0xFFFF : word16)
  Class: Eq_1072
  DataType: 
  OrigDataType: 
T_1073: (in wArg02 & 0xFFFF : word16)
  Class: Eq_1039
  DataType: 
  OrigDataType: 
T_1074: (in 0x0000 : word16)
  Class: Eq_1040
  DataType: 
  OrigDataType: 
T_1075: (in fn0800_0594(ds, wArg02 & 0xFFFF, 0x0000) : word16)
  Class: Eq_1068
  DataType: 
  OrigDataType: 
T_1076: (in 0xFFFF : word16)
  Class: Eq_1068
  DataType: 
  OrigDataType: 
T_1077: (in ax_21 != 0xFFFF : bool)
  Class: Eq_1077
  DataType: 
  OrigDataType: 
T_1078: (in 0x060E : word16)
  Class: Eq_1078
  DataType: 
  OrigDataType: 
T_1079: (in Mem40[ds:0x060E:word16] : word16)
  Class: Eq_1068
  DataType: 
  OrigDataType: 
T_1080: (in 0x060A : word16)
  Class: Eq_1080
  DataType: 
  OrigDataType: 
T_1081: (in Mem41[ds:0x060A:word16] : word16)
  Class: Eq_1068
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
T_1086: (in Mem44[ds:ax_21 + 0x0000:word16] : word16)
  Class: Eq_1083
  DataType: 
  OrigDataType: 
T_1087: (in 0x0004 : word16)
  Class: Eq_1087
  DataType: 
  OrigDataType: 
T_1088: (in ax_21 + 0x0004 : word16)
  Class: Eq_1067
  DataType: 
  OrigDataType: 
T_1089: (in 0x0000 : word16)
  Class: Eq_1067
  DataType: 
  OrigDataType: 
T_1090: (in ax : word16)
  Class: Eq_1090
  DataType: 
  OrigDataType: 
T_1091: (in ax_107 : word16)
  Class: Eq_1091
  DataType: 
  OrigDataType: 
T_1092: (in wArg02 : word16)
  Class: Eq_1092
  DataType: 
  OrigDataType: 
T_1093: (in 0x0000 : word16)
  Class: Eq_1092
  DataType: 
  OrigDataType: 
T_1094: (in wArg02 == 0x0000 : bool)
  Class: Eq_1094
  DataType: 
  OrigDataType: 
T_1095: (in 0x0000 : word16)
  Class: Eq_1091
  DataType: 
  OrigDataType: 
T_1096: (in 0xFFF4 : word16)
  Class: Eq_1092
  DataType: 
  OrigDataType: 
T_1097: (in wArg02 <=u 0xFFF4 : bool)
  Class: Eq_1097
  DataType: 
  OrigDataType: 
T_1098: (in ax_49 : word16)
  Class: Eq_1098
  DataType: 
  OrigDataType: 
T_1099: (in 0x000B : word16)
  Class: Eq_1099
  DataType: 
  OrigDataType: 
T_1100: (in wArg02 + 0x000B : word16)
  Class: Eq_1100
  DataType: 
  OrigDataType: 
T_1101: (in 0xFFF8 : word16)
  Class: Eq_1101
  DataType: 
  OrigDataType: 
T_1102: (in wArg02 + 0x000B & 0xFFF8 : word16)
  Class: Eq_1098
  DataType: 
  OrigDataType: 
T_1103: (in 0x060E : word16)
  Class: Eq_1103
  DataType: 
  OrigDataType: 
T_1104: (in Mem0[ds:0x060E:word16] : word16)
  Class: Eq_1104
  DataType: 
  OrigDataType: 
T_1105: (in 0x0000 : word16)
  Class: Eq_1104
  DataType: 
  OrigDataType: 
T_1106: (in Mem0[ds:0x060E:word16] != 0x0000 : bool)
  Class: Eq_1106
  DataType: 
  OrigDataType: 
T_1107: (in si_109 : word16)
  Class: Eq_1107
  DataType: 
  OrigDataType: 
T_1108: (in 0x060C : word16)
  Class: Eq_1108
  DataType: 
  OrigDataType: 
T_1109: (in Mem0[ds:0x060C:word16] : word16)
  Class: Eq_1107
  DataType: 
  OrigDataType: 
T_1110: (in 0x0000 : word16)
  Class: Eq_1107
  DataType: 
  OrigDataType: 
T_1111: (in si_109 == 0x0000 : bool)
  Class: Eq_1111
  DataType: 
  OrigDataType: 
T_1112: (in fn0800_04C3 : ptr32)
  Class: Eq_1112
  DataType: 
  OrigDataType: 
T_1113: (in signature of fn0800_04C3 : void)
  Class: Eq_1112
  DataType: 
  OrigDataType: 
T_1114: (in wArg02 : word16)
  Class: Eq_1098
  DataType: 
  OrigDataType: 
T_1115: (in fn0800_04C3(ds, ax_49) : word16)
  Class: Eq_1091
  DataType: 
  OrigDataType: 
T_1116: (in fn0800_0486 : ptr32)
  Class: Eq_1116
  DataType: 
  OrigDataType: 
T_1117: (in signature of fn0800_0486 : void)
  Class: Eq_1116
  DataType: 
  OrigDataType: 
T_1118: (in wArg02 : word16)
  Class: Eq_1098
  DataType: 
  OrigDataType: 
T_1119: (in fn0800_0486(ds, ax_49) : word16)
  Class: Eq_1119
  DataType: 
  OrigDataType: 
T_1120: (in fn0800_0486 : ptr32)
  Class: Eq_1116
  DataType: 
  OrigDataType: 
T_1121: (in fn0800_0486(ds, ax_49) : word16)
  Class: Eq_1091
  DataType: 
  OrigDataType: 
T_1122: (in 0x0000 : word16)
  Class: Eq_1122
  DataType: 
  OrigDataType: 
T_1123: (in si_109 + 0x0000 : word16)
  Class: Eq_1123
  DataType: 
  OrigDataType: 
T_1124: (in Mem0[ds:si_109 + 0x0000:word16] : word16)
  Class: Eq_1124
  DataType: 
  OrigDataType: 
T_1125: (in 0x0028 : word16)
  Class: Eq_1125
  DataType: 
  OrigDataType: 
T_1126: (in ax_49 + 0x0028 : word16)
  Class: Eq_1124
  DataType: 
  OrigDataType: 
T_1127: (in Mem0[ds:si_109 + 0x0000:word16] <u ax_49 + 0x0028 : bool)
  Class: Eq_1127
  DataType: 
  OrigDataType: 
T_1128: (in 0x0000 : word16)
  Class: Eq_1128
  DataType: 
  OrigDataType: 
T_1129: (in si_109 + 0x0000 : word16)
  Class: Eq_1129
  DataType: 
  OrigDataType: 
T_1130: (in Mem0[ds:si_109 + 0x0000:word16] : word16)
  Class: Eq_1098
  DataType: 
  OrigDataType: 
T_1131: (in Mem0[ds:si_109 + 0x0000:word16] <u ax_49 : bool)
  Class: Eq_1131
  DataType: 
  OrigDataType: 
T_1132: (in fn0800_044C : ptr32)
  Class: Eq_1132
  DataType: 
  OrigDataType: 
T_1133: (in signature of fn0800_044C : void)
  Class: Eq_1132
  DataType: 
  OrigDataType: 
T_1134: (in wArg02 : word16)
  Class: Eq_1107
  DataType: 
  OrigDataType: 
T_1135: (in wArg04 : word16)
  Class: Eq_1098
  DataType: 
  OrigDataType: 
T_1136: (in fn0800_044C(ds, si_109, ax_49) : word16)
  Class: Eq_1091
  DataType: 
  OrigDataType: 
T_1137: (in 0x0006 : word16)
  Class: Eq_1137
  DataType: 
  OrigDataType: 
T_1138: (in si_109 + 0x0006 : word16)
  Class: Eq_1138
  DataType: 
  OrigDataType: 
T_1139: (in Mem0[ds:si_109 + 0x0006:word16] : word16)
  Class: Eq_1107
  DataType: 
  OrigDataType: 
T_1140: (in 0x060C : word16)
  Class: Eq_1140
  DataType: 
  OrigDataType: 
T_1141: (in Mem0[ds:0x060C:word16] : word16)
  Class: Eq_1107
  DataType: 
  OrigDataType: 
T_1142: (in si_109 != Mem0[ds:0x060C:word16] : bool)
  Class: Eq_1142
  DataType: 
  OrigDataType: 
T_1143: (in fn0800_041E : ptr32)
  Class: Eq_1143
  DataType: 
  OrigDataType: 
T_1144: (in signature of fn0800_041E : void)
  Class: Eq_1143
  DataType: 
  OrigDataType: 
T_1145: (in wArg02 : word16)
  Class: Eq_1107
  DataType: 
  OrigDataType: 
T_1146: (in fn0800_041E(ds, si_109) : void)
  Class: Eq_1146
  DataType: 
  OrigDataType: 
T_1147: (in 0x0000 : word16)
  Class: Eq_1147
  DataType: 
  OrigDataType: 
T_1148: (in si_109 + 0x0000 : word16)
  Class: Eq_1148
  DataType: 
  OrigDataType: 
T_1149: (in Mem0[ds:si_109 + 0x0000:word16] : word16)
  Class: Eq_1149
  DataType: 
  OrigDataType: 
T_1150: (in 0x0001 : word16)
  Class: Eq_1150
  DataType: 
  OrigDataType: 
T_1151: (in Mem0[ds:si_109 + 0x0000:word16] + 0x0001 : word16)
  Class: Eq_1151
  DataType: 
  OrigDataType: 
T_1152: (in 0x0000 : word16)
  Class: Eq_1152
  DataType: 
  OrigDataType: 
T_1153: (in si_109 + 0x0000 : word16)
  Class: Eq_1153
  DataType: 
  OrigDataType: 
T_1154: (in Mem105[ds:si_109 + 0x0000:word16] : word16)
  Class: Eq_1151
  DataType: 
  OrigDataType: 
T_1155: (in 0x0004 : word16)
  Class: Eq_1155
  DataType: 
  OrigDataType: 
T_1156: (in si_109 + 0x0004 : word16)
  Class: Eq_1091
  DataType: 
  OrigDataType: 
T_1157: (in ax : word16)
  Class: Eq_1157
  DataType: 
  OrigDataType: 
T_1158: (in ax_31 : word16)
  Class: Eq_1158
  DataType: 
  OrigDataType: 
T_1159: (in ax_12 : word16)
  Class: Eq_1159
  DataType: 
  OrigDataType: 
T_1160: (in wArg02 : word16)
  Class: Eq_1160
  DataType: 
  OrigDataType: 
T_1161: (in 0x009E : word16)
  Class: Eq_1161
  DataType: 
  OrigDataType: 
T_1162: (in Mem0[ds:0x009E:word16] : word16)
  Class: Eq_1162
  DataType: 
  OrigDataType: 
T_1163: (in wArg02 + Mem0[ds:0x009E:word16] : word16)
  Class: Eq_1159
  DataType: 
  OrigDataType: 
T_1164: (in dx_cx_18 : ui32)
  Class: Eq_1164
  DataType: 
  OrigDataType: 
T_1165: (in wArg04 : word16)
  Class: Eq_1165
  DataType: 
  OrigDataType: 
T_1166: (in 0x0000 : word16)
  Class: Eq_1159
  DataType: 
  OrigDataType: 
T_1167: (in ax_12 <u 0x0000 : bool)
  Class: Eq_1167
  DataType: 
  OrigDataType: 
T_1168: (in wArg04 + (ax_12 <u 0x0000) : word16)
  Class: Eq_1168
  DataType: 
  OrigDataType: 
T_1169: (in 0x0100 : word16)
  Class: Eq_1169
  DataType: 
  OrigDataType: 
T_1170: (in ax_12 + 0x0100 : word16)
  Class: Eq_1170
  DataType: 
  OrigDataType: 
T_1171: (in SEQ(wArg04 + (ax_12 <u 0x0000), ax_12 + 0x0100) : ui32)
  Class: Eq_1164
  DataType: 
  OrigDataType: 
T_1172: (in cx_22 : word16)
  Class: Eq_1172
  DataType: 
  OrigDataType: 
T_1173: (in 0x00000100 : ui32)
  Class: Eq_1173
  DataType: 
  OrigDataType: 
T_1174: (in dx_cx_18 + 0x00000100 : ui32)
  Class: Eq_1174
  DataType: 
  OrigDataType: 
T_1175: (in (word16) (dx_cx_18 + 0x00000100) : word16)
  Class: Eq_1172
  DataType: 
  OrigDataType: 
T_1176: (in dx_cx_18 + 0x00000100 : ui32)
  Class: Eq_1176
  DataType: 
  OrigDataType: 
T_1177: (in SLICE(dx_cx_18 + 0x00000100, word16, 16) : word16)
  Class: Eq_1177
  DataType: 
  OrigDataType: 
T_1178: (in SEQ(SLICE(dx_cx_18 + 0x00000100, word16, 16), cx_22) : ui32)
  Class: Eq_1178
  DataType: 
  OrigDataType: 
T_1179: (in 0x00000000 : ui32)
  Class: Eq_1178
  DataType: 
  OrigDataType: 
T_1180: (in SEQ(SLICE(dx_cx_18 + 0x00000100, word16, 16), cx_22) != 0x00000000 : bool)
  Class: Eq_1180
  DataType: 
  OrigDataType: 
T_1181: (in 0x0008 : word16)
  Class: Eq_1181
  DataType: 
  OrigDataType: 
T_1182: (in 0x0094 : word16)
  Class: Eq_1182
  DataType: 
  OrigDataType: 
T_1183: (in Mem37[ds:0x0094:word16] : word16)
  Class: Eq_1181
  DataType: 
  OrigDataType: 
T_1184: (in 0xFFFF : word16)
  Class: Eq_1158
  DataType: 
  OrigDataType: 
T_1185: (in fp : ptr16)
  Class: Eq_1185
  DataType: 
  OrigDataType: 
T_1186: (in 0x0002 : word16)
  Class: Eq_1186
  DataType: 
  OrigDataType: 
T_1187: (in fp - 0x0002 : word16)
  Class: Eq_1172
  DataType: 
  OrigDataType: 
T_1188: (in cx_22 >=u fp - 0x0002 : bool)
  Class: Eq_1188
  DataType: 
  OrigDataType: 
T_1189: (in v13_42 : word16)
  Class: Eq_1158
  DataType: 
  OrigDataType: 
T_1190: (in 0x009E : word16)
  Class: Eq_1190
  DataType: 
  OrigDataType: 
T_1191: (in Mem0[ds:0x009E:word16] : word16)
  Class: Eq_1158
  DataType: 
  OrigDataType: 
T_1192: (in Mem43[ds:0x009E:word16] : word16)
  Class: Eq_1159
  DataType: 
  OrigDataType: 
T_1193: (in ax : word16)
  Class: Eq_1193
  DataType: 
  OrigDataType: 
T_1194: (in bx_19 : word16)
  Class: Eq_1194
  DataType: 
  OrigDataType: 
T_1195: (in si_20 : word16)
  Class: Eq_1195
  DataType: 
  OrigDataType: 
T_1196: (in di_21 : word16)
  Class: Eq_1196
  DataType: 
  OrigDataType: 
T_1197: (in ax_22 : word16)
  Class: Eq_1197
  DataType: 
  OrigDataType: 
T_1198: (in fn0800_1000 : ptr32)
  Class: Eq_1198
  DataType: 
  OrigDataType: 
T_1199: (in signature of fn0800_1000 : void)
  Class: Eq_1198
  DataType: 
  OrigDataType: 
T_1200: (in ds : selector)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_1201: (in wArg04 : word16)
  Class: Eq_1201
  DataType: 
  OrigDataType: 
T_1202: (in bxOut : ptr16)
  Class: Eq_1202
  DataType: 
  OrigDataType: 
T_1203: (in siOut : ptr16)
  Class: Eq_1203
  DataType: 
  OrigDataType: 
T_1204: (in diOut : ptr16)
  Class: Eq_1204
  DataType: 
  OrigDataType: 
T_1205: (in wArg02 : word16)
  Class: Eq_1201
  DataType: 
  OrigDataType: 
T_1206: (in out bx_19 : ptr16)
  Class: Eq_1202
  DataType: 
  OrigDataType: 
T_1207: (in out si_20 : ptr16)
  Class: Eq_1203
  DataType: 
  OrigDataType: 
T_1208: (in out di_21 : ptr16)
  Class: Eq_1204
  DataType: 
  OrigDataType: 
T_1209: (in fn0800_1000(ds, wArg02, out bx_19, out si_20, out di_21) : word16)
  Class: Eq_1197
  DataType: 
  OrigDataType: 
T_1210: (in ax : word16)
  Class: Eq_1210
  DataType: 
  OrigDataType: 
T_1211: (in bx : word16)
  Class: Eq_1211
  DataType: 
  OrigDataType: 
T_1212: (in *bxOut : word16)
  Class: Eq_1211
  DataType: 
  OrigDataType: 
T_1213: (in bLoc57_115 : byte)
  Class: Eq_1213
  DataType: 
  OrigDataType: 
T_1214: (in 0x50 : byte)
  Class: Eq_1213
  DataType: 
  OrigDataType: 
T_1215: (in sp_158 : word16)
  Class: Eq_1215
  DataType: 
  OrigDataType: 
T_1216: (in fp : ptr16)
  Class: Eq_1216
  DataType: 
  OrigDataType: 
T_1217: (in 0x00A0 : word16)
  Class: Eq_1217
  DataType: 
  OrigDataType: 
T_1218: (in fp - 0x00A0 : word16)
  Class: Eq_1215
  DataType: 
  OrigDataType: 
T_1219: (in di_113 : word16)
  Class: Eq_1219
  DataType: 
  OrigDataType: 
T_1220: (in 0x0056 : word16)
  Class: Eq_1220
  DataType: 
  OrigDataType: 
T_1221: (in fp - 0x0056 : word16)
  Class: Eq_1219
  DataType: 
  OrigDataType: 
T_1222: (in si_111 : word16)
  Class: Eq_1222
  DataType: 
  OrigDataType: 
T_1223: (in wArg04 : word16)
  Class: Eq_1222
  DataType: 
  OrigDataType: 
T_1224: (in al_40 : byte)
  Class: Eq_1224
  DataType: 
  OrigDataType: 
T_1225: (in 0x25 : byte)
  Class: Eq_1224
  DataType: 
  OrigDataType: 
T_1226: (in al_40 == 0x25 : bool)
  Class: Eq_1226
  DataType: 
  OrigDataType: 
T_1227: (in 0x0000 : word16)
  Class: Eq_1227
  DataType: 
  OrigDataType: 
T_1228: (in si_111 + 0x0000 : word16)
  Class: Eq_1228
  DataType: 
  OrigDataType: 
T_1229: (in Mem0[ds:si_111 + 0x0000:byte] : byte)
  Class: Eq_1224
  DataType: 
  OrigDataType: 
T_1230: (in al_110 : byte)
  Class: Eq_1224
  DataType: 
  OrigDataType: 
T_1231: (in DPB(ax, al_110, 0, 8) : word16)
  Class: Eq_1210
  DataType: 
  OrigDataType: 
T_1232: (in 0x0001 : word16)
  Class: Eq_1232
  DataType: 
  OrigDataType: 
T_1233: (in si_111 + 0x0001 : word16)
  Class: Eq_1222
  DataType: 
  OrigDataType: 
T_1234: (in 0x25 : byte)
  Class: Eq_1224
  DataType: 
  OrigDataType: 
T_1235: (in al_110 == 0x25 : bool)
  Class: Eq_1235
  DataType: 
  OrigDataType: 
T_1236: (in 0x0000 : word16)
  Class: Eq_1236
  DataType: 
  OrigDataType: 
T_1237: (in di_113 + 0x0000 : word16)
  Class: Eq_1237
  DataType: 
  OrigDataType: 
T_1238: (in Mem112[ds:di_113 + 0x0000:byte] : byte)
  Class: Eq_1224
  DataType: 
  OrigDataType: 
T_1239: (in v15_114 : byte)
  Class: Eq_1213
  DataType: 
  OrigDataType: 
T_1240: (in 0x01 : byte)
  Class: Eq_1240
  DataType: 
  OrigDataType: 
T_1241: (in bLoc57_115 - 0x01 : byte)
  Class: Eq_1213
  DataType: 
  OrigDataType: 
T_1242: (in 0x0001 : word16)
  Class: Eq_1242
  DataType: 
  OrigDataType: 
T_1243: (in di_113 + 0x0001 : word16)
  Class: Eq_1219
  DataType: 
  OrigDataType: 
T_1244: (in 0x00 : byte)
  Class: Eq_1213
  DataType: 
  OrigDataType: 
T_1245: (in v15_114 > 0x00 : bool)
  Class: Eq_1245
  DataType: 
  OrigDataType: 
T_1246: (in 0x0000 : word16)
  Class: Eq_1246
  DataType: 
  OrigDataType: 
T_1247: (in si_111 + 0x0000 : word16)
  Class: Eq_1247
  DataType: 
  OrigDataType: 
T_1248: (in Mem0[ds:si_111 + 0x0000:byte] : byte)
  Class: Eq_1224
  DataType: 
  OrigDataType: 
T_1249: (in 0x0001 : word16)
  Class: Eq_1249
  DataType: 
  OrigDataType: 
T_1250: (in si_111 + 0x0001 : word16)
  Class: Eq_1222
  DataType: 
  OrigDataType: 
T_1251: (in DPB(ax, al_40, 0, 8) : word16)
  Class: Eq_1210
  DataType: 
  OrigDataType: 
T_1252: (in 0x00 : byte)
  Class: Eq_1224
  DataType: 
  OrigDataType: 
T_1253: (in al_40 == 0x00 : bool)
  Class: Eq_1253
  DataType: 
  OrigDataType: 
T_1254: (in bx_118 : word16)
  Class: Eq_1254
  DataType: 
  OrigDataType: 
T_1255: (in fn0800_102E : ptr32)
  Class: Eq_1255
  DataType: 
  OrigDataType: 
T_1256: (in signature of fn0800_102E : void)
  Class: Eq_1255
  DataType: 
  OrigDataType: 
T_1257: (in bp : word16)
  Class: Eq_1257
  DataType: 
  OrigDataType: 
T_1258: (in di : word16)
  Class: Eq_1219
  DataType: 
  OrigDataType: 
T_1259: (in diOut : ptr16)
  Class: Eq_1259
  DataType: 
  OrigDataType: 
T_1260: (in 0x0002 : word16)
  Class: Eq_1260
  DataType: 
  OrigDataType: 
T_1261: (in fp - 0x0002 : word16)
  Class: Eq_1257
  DataType: 
  OrigDataType: 
T_1262: (in out di_113 : ptr16)
  Class: Eq_1259
  DataType: 
  OrigDataType: 
T_1263: (in fn0800_102E(fp - 0x0002, di_113, out di_113) : word16)
  Class: Eq_1263
  DataType: 
  OrigDataType: 
T_1264: (in *bxOut : word16)
  Class: Eq_1263
  DataType: 
  OrigDataType: 
T_1265: (in 0x50 : byte)
  Class: Eq_1213
  DataType: 
  OrigDataType: 
T_1266: (in bLoc57_115 >= 0x50 : bool)
  Class: Eq_1266
  DataType: 
  OrigDataType: 
T_1267: (in 0x50 : byte)
  Class: Eq_1213
  DataType: 
  OrigDataType: 
T_1268: (in bLoc57_115 >= 0x50 : bool)
  Class: Eq_1268
  DataType: 
  OrigDataType: 
T_1269: (in ax_81 : word16)
  Class: Eq_1269
  DataType: 
  OrigDataType: 
T_1270: (in sp_78 : word16)
  Class: Eq_1270
  DataType: 
  OrigDataType: 
T_1271: (in 0x0002 : word16)
  Class: Eq_1271
  DataType: 
  OrigDataType: 
T_1272: (in sp_158 + 0x0002 : word16)
  Class: Eq_1270
  DataType: 
  OrigDataType: 
T_1273: (in 0x0000 : word16)
  Class: Eq_1273
  DataType: 
  OrigDataType: 
T_1274: (in 0x0000 : word16)
  Class: Eq_1273
  DataType: 
  OrigDataType: 
T_1275: (in 0x0000 == 0x0000 : bool)
  Class: Eq_1275
  DataType: 
  OrigDataType: 
T_1276: (in di_99 : word16)
  Class: Eq_1219
  DataType: 
  OrigDataType: 
T_1277: (in fn0800_102E : ptr32)
  Class: Eq_1255
  DataType: 
  OrigDataType: 
T_1278: (in fp - 0x0002 : word16)
  Class: Eq_1257
  DataType: 
  OrigDataType: 
T_1279: (in out di_99 : ptr16)
  Class: Eq_1259
  DataType: 
  OrigDataType: 
T_1280: (in fn0800_102E(fp - 0x0002, di_113, out di_99) : word16)
  Class: Eq_1280
  DataType: 
  OrigDataType: 
T_1281: (in di_101 : word16)
  Class: Eq_1281
  DataType: 
  OrigDataType: 
T_1282: (in bx_102 : word16)
  Class: Eq_1282
  DataType: 
  OrigDataType: 
T_1283: (in fn0800_102E : ptr32)
  Class: Eq_1255
  DataType: 
  OrigDataType: 
T_1284: (in fp - 0x0002 : word16)
  Class: Eq_1257
  DataType: 
  OrigDataType: 
T_1285: (in out di_101 : ptr16)
  Class: Eq_1259
  DataType: 
  OrigDataType: 
T_1286: (in fn0800_102E(fp - 0x0002, di_99, out di_101) : word16)
  Class: Eq_1286
  DataType: 
  OrigDataType: 
T_1287: (in *bxOut : word16)
  Class: Eq_1286
  DataType: 
  OrigDataType: 
T_1288: (in ax_137 : word16)
  Class: Eq_1288
  DataType: 
  OrigDataType: 
T_1289: (in 0x00 : byte)
  Class: Eq_1289
  DataType: 
  OrigDataType: 
T_1290: (in DPB(ax, 0x00, 8, 8) : word16)
  Class: Eq_1288
  DataType: 
  OrigDataType: 
T_1291: (in bl_140 : byte)
  Class: Eq_1291
  DataType: 
  OrigDataType: 
T_1292: (in (byte) ax_137 : byte)
  Class: Eq_1291
  DataType: 
  OrigDataType: 
T_1293: (in bx_142 : word16)
  Class: Eq_1293
  DataType: 
  OrigDataType: 
T_1294: (in 0x20 : byte)
  Class: Eq_1294
  DataType: 
  OrigDataType: 
T_1295: (in bl_140 - 0x20 : byte)
  Class: Eq_1295
  DataType: 
  OrigDataType: 
T_1296: (in DPB(ax_137, bl_140 - 0x20, 0, 8) : word16)
  Class: Eq_1293
  DataType: 
  OrigDataType: 
T_1297: (in 0x80 : byte)
  Class: Eq_1291
  DataType: 
  OrigDataType: 
T_1298: (in bl_140 >=u 0x80 : bool)
  Class: Eq_1298
  DataType: 
  OrigDataType: 
T_1299: (in 0x0000 : word16)
  Class: Eq_1269
  DataType: 
  OrigDataType: 
T_1300: (in 0xFFFF : word16)
  Class: Eq_1269
  DataType: 
  OrigDataType: 
T_1301: (in di_84 : word16)
  Class: Eq_1301
  DataType: 
  OrigDataType: 
T_1302: (in ss : selector)
  Class: Eq_1302
  DataType: 
  OrigDataType: 
T_1303: (in 0x0000 : word16)
  Class: Eq_1303
  DataType: 
  OrigDataType: 
T_1304: (in sp_78 + 0x0000 : word16)
  Class: Eq_1304
  DataType: 
  OrigDataType: 
T_1305: (in Mem0[ss:sp_78 + 0x0000:word16] : word16)
  Class: Eq_1305
  DataType: 
  OrigDataType: 
T_1306: (in *diOut : word16)
  Class: Eq_1305
  DataType: 
  OrigDataType: 
T_1307: (in si_86 : word16)
  Class: Eq_1307
  DataType: 
  OrigDataType: 
T_1308: (in 0x0002 : word16)
  Class: Eq_1308
  DataType: 
  OrigDataType: 
T_1309: (in sp_78 + 0x0002 : word16)
  Class: Eq_1309
  DataType: 
  OrigDataType: 
T_1310: (in Mem0[ss:sp_78 + 0x0002:word16] : word16)
  Class: Eq_1310
  DataType: 
  OrigDataType: 
T_1311: (in *siOut : word16)
  Class: Eq_1310
  DataType: 
  OrigDataType: 
T_1312: (in 0x04DB : word16)
  Class: Eq_1312
  DataType: 
  OrigDataType: 
T_1313: (in bx_142 + 0x04DB : word16)
  Class: Eq_1313
  DataType: 
  OrigDataType: 
T_1314: (in Mem0[ds:bx_142 + 0x04DB:byte] : byte)
  Class: Eq_1314
  DataType: 
  OrigDataType: 
T_1315: (in DPB(ax_137, Mem0[ds:bx_142 + 0x04DB:byte], 0, 8) : word16)
  Class: Eq_1315
  DataType: 
  OrigDataType: 
T_1316: (in 0x0017 : word16)
  Class: Eq_1315
  DataType: 
  OrigDataType: 
T_1317: (in DPB(ax_137, Mem0[ds:bx_142 + 0x04DB:byte], 0, 8) <=u 0x0017 : bool)
  Class: Eq_1317
  DataType: 
  OrigDataType: 
T_1318: (in si_151 : word16)
  Class: Eq_1222
  DataType: 
  OrigDataType: 
T_1319: (in al_153 : byte)
  Class: Eq_1319
  DataType: 
  OrigDataType: 
T_1320: (in 0x25 : byte)
  Class: Eq_1319
  DataType: 
  OrigDataType: 
T_1321: (in bx_161 : word16)
  Class: Eq_1321
  DataType: 
  OrigDataType: 
T_1322: (in fn0800_1026 : ptr32)
  Class: Eq_1322
  DataType: 
  OrigDataType: 
T_1323: (in signature of fn0800_1026 : void)
  Class: Eq_1322
  DataType: 
  OrigDataType: 
T_1324: (in bp : word16)
  Class: Eq_1257
  DataType: 
  OrigDataType: 
T_1325: (in di : word16)
  Class: Eq_1219
  DataType: 
  OrigDataType: 
T_1326: (in al : byte)
  Class: Eq_1319
  DataType: 
  OrigDataType: 
T_1327: (in ds : selector)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_1328: (in diOut : ptr16)
  Class: Eq_1328
  DataType: 
  OrigDataType: 
T_1329: (in fp - 0x0002 : word16)
  Class: Eq_1257
  DataType: 
  OrigDataType: 
T_1330: (in out di_113 : ptr16)
  Class: Eq_1328
  DataType: 
  OrigDataType: 
T_1331: (in fn0800_1026(fp - 0x0002, di_113, al_153, ds, out di_113) : word16)
  Class: Eq_1331
  DataType: 
  OrigDataType: 
T_1332: (in *bxOut : word16)
  Class: Eq_1331
  DataType: 
  OrigDataType: 
T_1333: (in al_164 : byte)
  Class: Eq_1319
  DataType: 
  OrigDataType: 
T_1334: (in 0x0000 : word16)
  Class: Eq_1334
  DataType: 
  OrigDataType: 
T_1335: (in si_151 + 0x0000 : word16)
  Class: Eq_1335
  DataType: 
  OrigDataType: 
T_1336: (in Mem0[ds:si_151 + 0x0000:byte] : byte)
  Class: Eq_1319
  DataType: 
  OrigDataType: 
T_1337: (in 0xFFFE : word16)
  Class: Eq_1337
  DataType: 
  OrigDataType: 
T_1338: (in sp_158 + 0xFFFE : word16)
  Class: Eq_1215
  DataType: 
  OrigDataType: 
T_1339: (in 0x0001 : word16)
  Class: Eq_1339
  DataType: 
  OrigDataType: 
T_1340: (in si_151 + 0x0001 : word16)
  Class: Eq_1222
  DataType: 
  OrigDataType: 
T_1341: (in 0x00 : byte)
  Class: Eq_1319
  DataType: 
  OrigDataType: 
T_1342: (in al_164 != 0x00 : bool)
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
  Class: Eq_1319
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
  Class: Eq_1219
  DataType: 
  OrigDataType: 
T_1364: (in fn0800_102E : ptr32)
  Class: Eq_1255
  DataType: 
  OrigDataType: 
T_1365: (in di + 0x0001 : word16)
  Class: Eq_1219
  DataType: 
  OrigDataType: 
T_1366: (in out di_15 : ptr16)
  Class: Eq_1259
  DataType: 
  OrigDataType: 
T_1367: (in fn0800_102E(bp, di + 0x0001, out di_15) : word16)
  Class: Eq_1367
  DataType: 
  OrigDataType: 
T_1368: (in di_17 : word16)
  Class: Eq_1368
  DataType: 
  OrigDataType: 
T_1369: (in fn0800_102E : ptr32)
  Class: Eq_1255
  DataType: 
  OrigDataType: 
T_1370: (in out di_17 : ptr16)
  Class: Eq_1259
  DataType: 
  OrigDataType: 
T_1371: (in fn0800_102E(bp, di_15, out di_17) : word16)
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
  Class: Eq_1257
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
T_1405: (in fn0800_1680 : ptr32)
  Class: Eq_1405
  DataType: 
  OrigDataType: 
T_1406: (in signature of fn0800_1680 : void)
  Class: Eq_1405
  DataType: 
  OrigDataType: 
T_1407: (in bx : word16)
  Class: Eq_470
  DataType: 
  OrigDataType: 
T_1408: (in di : word16)
  Class: Eq_470
  DataType: 
  OrigDataType: 
T_1409: (in ds : selector)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_1410: (in wArg06 : word16)
  Class: Eq_1410
  DataType: 
  OrigDataType: 
T_1411: (in wArg08 : word16)
  Class: Eq_1411
  DataType: 
  OrigDataType: 
T_1412: (in 0x0324 : word16)
  Class: Eq_1410
  DataType: 
  OrigDataType: 
T_1413: (in wArg02 : word16)
  Class: Eq_1411
  DataType: 
  OrigDataType: 
T_1414: (in fn0800_1680(bx, di, ds, 0x0324, wArg02) : void)
  Class: Eq_1414
  DataType: 
  OrigDataType: 
T_1415: (in bp_204 : word16)
  Class: Eq_1415
  DataType: 
  OrigDataType: 
T_1416: (in fp : ptr16)
  Class: Eq_1416
  DataType: 
  OrigDataType: 
T_1417: (in 0x0002 : word16)
  Class: Eq_1417
  DataType: 
  OrigDataType: 
T_1418: (in fp - 0x0002 : word16)
  Class: Eq_1415
  DataType: 
  OrigDataType: 
T_1419: (in si_203 : word16)
  Class: Eq_1419
  DataType: 
  OrigDataType: 
T_1420: (in wArg08 : word16)
  Class: Eq_1419
  DataType: 
  OrigDataType: 
T_1421: (in al_57 : byte)
  Class: Eq_1421
  DataType: 
  OrigDataType: 
T_1422: (in 0x25 : byte)
  Class: Eq_1421
  DataType: 
  OrigDataType: 
T_1423: (in al_57 == 0x25 : bool)
  Class: Eq_1423
  DataType: 
  OrigDataType: 
T_1424: (in 0x0000 : word16)
  Class: Eq_1424
  DataType: 
  OrigDataType: 
T_1425: (in si_203 + 0x0000 : word16)
  Class: Eq_1425
  DataType: 
  OrigDataType: 
T_1426: (in Mem0[ds:si_203 + 0x0000:byte] : byte)
  Class: Eq_1426
  DataType: 
  OrigDataType: 
T_1427: (in (int16) Mem0[ds:si_203 + 0x0000:byte] : int16)
  Class: Eq_1427
  DataType: 
  OrigDataType: 
T_1428: (in 0x0000 : word16)
  Class: Eq_1427
  DataType: 
  OrigDataType: 
T_1429: (in (int16) Mem0[ds:si_203 + 0x0000:byte] < 0x0000 : bool)
  Class: Eq_1429
  DataType: 
  OrigDataType: 
T_1430: (in cs : selector)
  Class: Eq_1430
  DataType: 
  OrigDataType: 
T_1431: (in ss : selector)
  Class: Eq_1431
  DataType: 
  OrigDataType: 
T_1432: (in 0x0004 : word16)
  Class: Eq_1432
  DataType: 
  OrigDataType: 
T_1433: (in bp_204 + 0x0004 : word16)
  Class: Eq_1433
  DataType: 
  OrigDataType: 
T_1434: (in Mem0[ss:bp_204 + 0x0004:word16] : word16)
  Class: Eq_1434
  DataType: 
  OrigDataType: 
T_1435: (in SEQ(cs, Mem0[ss:bp_204 + 0x0004:word16]) : ptr32)
  Class: Eq_1435
  DataType: 
  OrigDataType: 
T_1436: (in ax_127 : word16)
  Class: Eq_470
  DataType: 
  OrigDataType: 
T_1437: (in (int16) al_57 : int16)
  Class: Eq_470
  DataType: 
  OrigDataType: 
T_1438: (in ax_138 : word16)
  Class: Eq_470
  DataType: 
  OrigDataType: 
T_1439: (in di_264 : word16)
  Class: Eq_470
  DataType: 
  OrigDataType: 
T_1440: (in 0x0000 : word16)
  Class: Eq_470
  DataType: 
  OrigDataType: 
T_1441: (in di_264 < 0x0000 : bool)
  Class: Eq_1441
  DataType: 
  OrigDataType: 
T_1442: (in 0x0000 : word16)
  Class: Eq_470
  DataType: 
  OrigDataType: 
T_1443: (in ax_127 < 0x0000 : bool)
  Class: Eq_1443
  DataType: 
  OrigDataType: 
T_1444: (in di_264 == ax_127 : bool)
  Class: Eq_1444
  DataType: 
  OrigDataType: 
T_1445: (in 0x053C : word16)
  Class: Eq_1445
  DataType: 
  OrigDataType: 
T_1446: (in ax_127 + 0x053C : word16)
  Class: Eq_1446
  DataType: 
  OrigDataType: 
T_1447: (in Mem0[ds:ax_127 + 0x053C:byte] : byte)
  Class: Eq_1447
  DataType: 
  OrigDataType: 
T_1448: (in 0x01 : byte)
  Class: Eq_1447
  DataType: 
  OrigDataType: 
T_1449: (in Mem0[ds:ax_127 + 0x053C:byte] != 0x01 : bool)
  Class: Eq_1449
  DataType: 
  OrigDataType: 
T_1450: (in bl_210 : byte)
  Class: Eq_1450
  DataType: 
  OrigDataType: 
T_1451: (in (byte) ax_138 : byte)
  Class: Eq_1450
  DataType: 
  OrigDataType: 
T_1452: (in DPB(ax_138, bl_210, 0, 8) : word16)
  Class: Eq_470
  DataType: 
  OrigDataType: 
T_1453: (in 0x00 : byte)
  Class: Eq_1450
  DataType: 
  OrigDataType: 
T_1454: (in bl_210 < 0x00 : bool)
  Class: Eq_1454
  DataType: 
  OrigDataType: 
T_1455: (in 0x0006 : word16)
  Class: Eq_1455
  DataType: 
  OrigDataType: 
T_1456: (in bp_204 + 0x0006 : word16)
  Class: Eq_1456
  DataType: 
  OrigDataType: 
T_1457: (in Mem0[ss:bp_204 + 0x0006:word16] : word16)
  Class: Eq_1457
  DataType: 
  OrigDataType: 
T_1458: (in SEQ(cs, Mem0[ss:bp_204 + 0x0006:word16]) : ptr32)
  Class: Eq_1458
  DataType: 
  OrigDataType: 
T_1459: (in 0x053C : word16)
  Class: Eq_1459
  DataType: 
  OrigDataType: 
T_1460: (in bx + 0x053C : word16)
  Class: Eq_1460
  DataType: 
  OrigDataType: 
T_1461: (in Mem0[ds:bx + 0x053C:byte] : byte)
  Class: Eq_1461
  DataType: 
  OrigDataType: 
T_1462: (in 0x01 : byte)
  Class: Eq_1461
  DataType: 
  OrigDataType: 
T_1463: (in Mem0[ds:bx + 0x053C:byte] != 0x01 : bool)
  Class: Eq_1463
  DataType: 
  OrigDataType: 
T_1464: (in 0x0004 : word16)
  Class: Eq_1464
  DataType: 
  OrigDataType: 
T_1465: (in bp_204 + 0x0004 : word16)
  Class: Eq_1465
  DataType: 
  OrigDataType: 
T_1466: (in Mem0[ss:bp_204 + 0x0004:word16] : word16)
  Class: Eq_1466
  DataType: 
  OrigDataType: 
T_1467: (in SEQ(cs, Mem0[ss:bp_204 + 0x0004:word16]) : ptr32)
  Class: Eq_1467
  DataType: 
  OrigDataType: 
T_1468: (in bx_265 : word16)
  Class: Eq_470
  DataType: 
  OrigDataType: 
T_1469: (in 0x0000 : word16)
  Class: Eq_470
  DataType: 
  OrigDataType: 
T_1470: (in bx_265 > 0x0000 : bool)
  Class: Eq_1470
  DataType: 
  OrigDataType: 
T_1471: (in 0x0006 : word16)
  Class: Eq_1471
  DataType: 
  OrigDataType: 
T_1472: (in bp_204 + 0x0006 : word16)
  Class: Eq_1472
  DataType: 
  OrigDataType: 
T_1473: (in Mem0[ss:bp_204 + 0x0006:word16] : word16)
  Class: Eq_1473
  DataType: 
  OrigDataType: 
T_1474: (in SEQ(cs, Mem0[ss:bp_204 + 0x0006:word16]) : ptr32)
  Class: Eq_1474
  DataType: 
  OrigDataType: 
T_1475: (in 0x0000 : word16)
  Class: Eq_1475
  DataType: 
  OrigDataType: 
T_1476: (in 0x0028 : word16)
  Class: Eq_1476
  DataType: 
  OrigDataType: 
T_1477: (in bp_204 - 0x0028 : word16)
  Class: Eq_1477
  DataType: 
  OrigDataType: 
T_1478: (in Mem125[ss:bp_204 - 0x0028:word16] : word16)
  Class: Eq_1475
  DataType: 
  OrigDataType: 
T_1479: (in 0x0000 : word16)
  Class: Eq_1479
  DataType: 
  OrigDataType: 
T_1480: (in si_203 + 0x0000 : word16)
  Class: Eq_1480
  DataType: 
  OrigDataType: 
T_1481: (in Mem0[ds:si_203 + 0x0000:byte] : byte)
  Class: Eq_1421
  DataType: 
  OrigDataType: 
T_1482: (in 0x0001 : word16)
  Class: Eq_1482
  DataType: 
  OrigDataType: 
T_1483: (in si_203 + 0x0001 : word16)
  Class: Eq_1419
  DataType: 
  OrigDataType: 
T_1484: (in 0x00 : byte)
  Class: Eq_1421
  DataType: 
  OrigDataType: 
T_1485: (in al_57 == 0x00 : bool)
  Class: Eq_1485
  DataType: 
  OrigDataType: 
T_1486: (in 0x0006 : word16)
  Class: Eq_1486
  DataType: 
  OrigDataType: 
T_1487: (in bp_204 + 0x0006 : word16)
  Class: Eq_1487
  DataType: 
  OrigDataType: 
T_1488: (in Mem0[ss:bp_204 + 0x0006:word16] : word16)
  Class: Eq_1488
  DataType: 
  OrigDataType: 
T_1489: (in SEQ(cs, Mem0[ss:bp_204 + 0x0006:word16]) : ptr32)
  Class: Eq_1489
  DataType: 
  OrigDataType: 
T_1490: (in 0x00 : byte)
  Class: Eq_1490
  DataType: 
  OrigDataType: 
T_1491: (in DPB(bx, 0x00, 8, 8) : word16)
  Class: Eq_1491
  DataType: 
  OrigDataType: 
T_1492: (in 0x0015 : word16)
  Class: Eq_1491
  DataType: 
  OrigDataType: 
T_1493: (in DPB(bx, 0x00, 8, 8) <=u 0x0015 : bool)
  Class: Eq_1493
  DataType: 
  OrigDataType: 
T_1494:
  Class: Eq_1494
  DataType: 
  OrigDataType: (struct 0001 (0 T_348 t0000))
*/
