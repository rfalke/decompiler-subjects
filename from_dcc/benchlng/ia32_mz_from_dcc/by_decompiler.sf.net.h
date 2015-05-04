// subject.h
// Generated on 5/4/2015 12:04:31 AM by decompiling from_dcc/benchlng/ia32_mz_from_dcc/subject.exe
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
  DataType: (union (uint16 u0) ((memptr T_28 (struct (0 T_2 t0000))) u1) ((memptr T_31 (struct (0 T_313 t0000))) u2) ((union (ptr16 u0) ((memptr T_31 (struct (0 T_98 t0000) (2 T_63 t0002))) u1)) u3))
  OrigDataType: (union (uint16 u0) ((memptr T_28 (struct (0 T_2 t0000))) u1) ((memptr T_31 (struct (0 T_313 t0000))) u2) ((union (ptr16 u0) ((memptr T_31 (struct (0 T_98 t0000) (2 T_63 t0002))) u1)) u3))
T_4: (in 0x09EF : word16)
  Class: Eq_4
  DataType: word16
  OrigDataType: word16
T_5: (in dx : word16)
  Class: Eq_4
  DataType: (ptr (segment (8A T_47 t008A) (8C T_35 t008C) (8E T_144 t008E) (90 T_33 t0090) (92 T_30 t0092) (96 T_38 t0096) (AC T_37 t00AC)))
  OrigDataType: (ptr (segment (8A T_47 t008A) (8C T_35 t008C) (8E T_144 t008E) (90 T_33 t0090) (92 T_30 t0092) (96 T_38 t0096) (AC T_37 t00AC)))
T_6: (in 0x09EF : word16)
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
  DataType: (ptr (segment (2 T_22 t0002) (2C T_25 t002C) (84 T_289 t0084) (86 T_282 t0086) (88 T_275 t0088) (98 T_266 t0098) (9A T_268 t009A) (5C2 T_241 t05C2) (5C6 T_270 t05C6)))
  OrigDataType: (ptr (segment (2 T_22 t0002) (2C T_25 t002C) (84 T_289 t0084) (86 T_282 t0086) (88 T_275 t0088) (98 T_266 t0098) (9A T_268 t009A) (5C2 T_241 t05C2) (5C6 T_270 t05C6)))
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
  DataType: (union (uint16 u0) ((memptr T_28 (struct (0 T_2 t0000))) u1) ((memptr T_31 (struct (0 T_313 t0000))) u2) ((union (ptr16 u0) ((memptr T_31 (struct (0 T_98 t0000) (2 T_63 t0002))) u1)) u3))
  OrigDataType: (union (uint16 u0) ((memptr T_28 (struct (0 T_2 t0000))) u1) ((memptr T_31 (struct (0 T_313 t0000))) u2) ((union (ptr16 u0) ((memptr T_31 (struct (0 T_98 t0000) (2 T_63 t0002))) u1)) u3))
T_27: (in 0x09EF : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_28: (in 0x09EF : selector)
  Class: Eq_4
  DataType: (ptr (segment (8A T_47 t008A) (8C T_35 t008C) (8E T_144 t008E) (90 T_2 t0090) (92 T_30 t0092) (96 T_38 t0096) (A4 T_201 t00A4) (A8 T_203 t00A8) (AC T_37 t00AC) (222 T_165 t0222) (224 T_2 t0224)))
  OrigDataType: (ptr (segment (8A T_47 t008A) (8C T_35 t008C) (8E T_144 t008E) (90 T_2 t0090) (92 T_30 t0092) (96 T_38 t0096) (A4 T_201 t00A4) (A8 T_203 t00A8) (AC T_37 t00AC) (222 T_165 t0222) (224 T_2 t0224)))
T_29: (in 0x0092 : word16)
  Class: Eq_29
  DataType: (memptr T_28 (struct (0 T_30 t0000)))
  OrigDataType: (memptr T_28 (struct (0 T_30 t0000)))
T_30: (in Mem0[0x09EF:0x0092:word16] : word16)
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
T_33: (in Mem0[0x09EF:0x0090:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_34: (in 0x008C : word16)
  Class: Eq_34
  DataType: (memptr T_28 (struct (0 T_35 t0000)))
  OrigDataType: (memptr T_28 (struct (0 T_35 t0000)))
T_35: (in Mem0[0x09EF:0x008C:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_36: (in 0x00AC : word16)
  Class: Eq_36
  DataType: (memptr T_28 (struct (0 T_37 t0000)))
  OrigDataType: (memptr T_28 (struct (0 T_37 t0000)))
T_37: (in Mem0[0x09EF:0x00AC:word16] : word16)
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
T_40: (in Mem0[0x09EF:0x0096:word16] : word16)
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
  DataType: (ptr (segment (74 T_387 t0074) (76 T_390 t0076) (78 T_396 t0078) (7A T_399 t007A) (7C T_405 t007C) (7E T_408 t007E) (80 T_414 t0080) (82 T_417 t0082)))
  OrigDataType: (ptr (segment (74 T_387 t0074) (76 T_390 t0076) (78 T_396 t0078) (7A T_399 t007A) (7C T_405 t007C) (7E T_408 t007E) (80 T_414 t0080) (82 T_417 t0082)))
T_45: (in fn0800_0162(al, ds) : void)
  Class: Eq_45
  DataType: void
  OrigDataType: void
T_46: (in 0x008A : word16)
  Class: Eq_46
  DataType: (memptr T_28 (struct (0 T_47 t0000)))
  OrigDataType: (memptr T_28 (struct (0 T_47 t0000)))
T_47: (in Mem0[0x09EF:0x008A:segptr32] : segptr32)
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
  DataType: (union (uint16 u0) ((memptr T_28 (struct (0 T_2 t0000))) u1) ((memptr T_31 (struct (0 T_313 t0000))) u2) ((union (ptr16 u0) ((memptr T_31 (struct (0 T_98 t0000) (2 T_63 t0002))) u1)) u3))
  OrigDataType: (union (uint16 u0) ((memptr T_28 (struct (0 T_2 t0000))) u1) ((memptr T_31 (struct (0 T_313 t0000))) u2) ((union (ptr16 u0) ((memptr T_31 (struct (0 T_98 t0000) (2 T_63 t0002))) u1)) u3))
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
T_77: (in Mem0[0x09EF:0x0096:word16] : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_78: (in 0x0001 : word16)
  Class: Eq_78
  DataType: word16
  OrigDataType: word16
T_79: (in Mem0[0x09EF:0x0096:word16] + 0x0001 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_80: (in v20 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_81: (in Mem0[0x09EF:0x0096:word16] : word16)
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
T_87: (in Mem0[0x09EF:0x0096:word16] : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_88: (in 0x0001 : word16)
  Class: Eq_88
  DataType: word16
  OrigDataType: word16
T_89: (in Mem0[0x09EF:0x0096:word16] + 0x0001 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_90: (in v21 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_91: (in Mem0[0x09EF:0x0096:word16] : word16)
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
  DataType: (ptr (fn T_114 (T_113, T_51)))
  OrigDataType: (ptr (fn T_114 (T_113, T_51)))
T_110: (in signature of fn0800_01E2 : void)
  Class: Eq_109
  DataType: 
  OrigDataType: 
T_111: (in si : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_112: (in di : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_113: (in si : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_114: (in fn0800_01E2(si, di) : void)
  Class: Eq_114
  DataType: void
  OrigDataType: void
T_115: (in 0x0001 : word16)
  Class: Eq_115
  DataType: word16
  OrigDataType: word16
T_116: (in bx + 0x0001 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_117: (in 0x0000 : word16)
  Class: Eq_117
  DataType: word16
  OrigDataType: word16
T_118: (in di + 0x0000 : word16)
  Class: Eq_118
  DataType: word16
  OrigDataType: word16
T_119: (in Mem0[es:di + 0x0000:byte] : byte)
  Class: Eq_98
  DataType: byte
  OrigDataType: byte
T_120: (in Mem0[es:di + 0x0000:byte] - al : byte)
  Class: Eq_120
  DataType: byte
  OrigDataType: byte
T_121: (in cond(Mem0[es:di + 0x0000:byte] - al) : byte)
  Class: Eq_70
  DataType: byte
  OrigDataType: byte
T_122: (in Test(NE,Z) : bool)
  Class: Eq_122
  DataType: bool
  OrigDataType: bool
T_123: (in 0x0000 : word16)
  Class: Eq_123
  DataType: word16
  OrigDataType: word16
T_124: (in di + 0x0000 : word16)
  Class: Eq_124
  DataType: word16
  OrigDataType: word16
T_125: (in Mem0[es:di + 0x0000:word16] : word16)
  Class: Eq_98
  DataType: word16
  OrigDataType: word16
T_126: (in 0x3738 : word16)
  Class: Eq_126
  DataType: word16
  OrigDataType: word16
T_127: (in Mem0[es:di + 0x0000:word16] - 0x3738 : word16)
  Class: Eq_127
  DataType: word16
  OrigDataType: word16
T_128: (in cond(Mem0[es:di + 0x0000:word16] - 0x3738) : byte)
  Class: Eq_70
  DataType: byte
  OrigDataType: byte
T_129: (in Test(NE,Z) : bool)
  Class: Eq_129
  DataType: bool
  OrigDataType: bool
T_130: (in 0x80 : byte)
  Class: Eq_130
  DataType: byte
  OrigDataType: byte
T_131: (in ch | 0x80 : byte)
  Class: Eq_55
  DataType: byte
  OrigDataType: byte
T_132: (in DPB(cx, ch, 8, 8) : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_133: (in -cx : word16)
  Class: Eq_47
  DataType: int16
  OrigDataType: int16
T_134: (in 0x008A : word16)
  Class: Eq_134
  DataType: (memptr T_28 (struct (0 T_135 t0000)))
  OrigDataType: (memptr T_28 (struct (0 T_135 t0000)))
T_135: (in Mem0[0x09EF:0x008A:word16] : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_136: (in 0x0001 : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_137: (in (byte) cx : byte)
  Class: Eq_57
  DataType: byte
  OrigDataType: byte
T_138: (in bx << cl : word16)
  Class: Eq_2
  DataType: ui16
  OrigDataType: ui16
T_139: (in 0x0008 : word16)
  Class: Eq_139
  DataType: word16
  OrigDataType: word16
T_140: (in bx + 0x0008 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_141: (in 0xFFF8 : word16)
  Class: Eq_141
  DataType: word16
  OrigDataType: word16
T_142: (in bx & 0xFFF8 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_143: (in 0x008E : word16)
  Class: Eq_143
  DataType: (memptr T_28 (struct (0 T_144 t0000)))
  OrigDataType: (memptr T_28 (struct (0 T_144 t0000)))
T_144: (in Mem0[0x09EF:0x008E:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_145: (in bp - 0x09EF : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_146: (in 0x0224 : word16)
  Class: Eq_146
  DataType: (memptr T_28 (struct (0 T_147 t0000)))
  OrigDataType: (memptr T_28 (struct (0 T_147 t0000)))
T_147: (in Mem0[0x09EF:0x0224:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_148: (in SEQ(es, di) : ptr32)
  Class: Eq_47
  DataType: ptr32
  OrigDataType: ptr32
T_149: (in 0x0200 : word16)
  Class: Eq_149
  DataType: word16
  OrigDataType: word16
T_150: (in di - 0x0200 : word16)
  Class: Eq_150
  DataType: word16
  OrigDataType: word16
T_151: (in cond(di - 0x0200) : byte)
  Class: Eq_70
  DataType: byte
  OrigDataType: byte
T_152: (in C : byte)
  Class: Eq_70
  DataType: byte
  OrigDataType: byte
T_153: (in Test(UGE,C) : bool)
  Class: Eq_153
  DataType: bool
  OrigDataType: bool
T_154: (in 0x0616 : word16)
  Class: Eq_154
  DataType: word16
  OrigDataType: word16
T_155: (in di + 0x0616 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_156: (in SEQ(es, di) : ptr32)
  Class: Eq_47
  DataType: ptr32
  OrigDataType: ptr32
T_157: (in cond(di) : byte)
  Class: Eq_70
  DataType: byte
  OrigDataType: byte
T_158: (in Test(ULT,C) : bool)
  Class: Eq_158
  DataType: bool
  OrigDataType: bool
T_159: (in 0x0200 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_160: (in SEQ(es, di) : ptr32)
  Class: Eq_47
  DataType: ptr32
  OrigDataType: ptr32
T_161: (in 0x0200 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_162: (in 0x0224 : word16)
  Class: Eq_162
  DataType: (memptr T_28 (struct (0 T_163 t0000)))
  OrigDataType: (memptr T_28 (struct (0 T_163 t0000)))
T_163: (in Mem0[0x09EF:0x0224:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_164: (in 0x0222 : word16)
  Class: Eq_164
  DataType: (memptr T_28 (struct (0 T_165 t0000)))
  OrigDataType: (memptr T_28 (struct (0 T_165 t0000)))
T_165: (in Mem0[0x09EF:0x0222:word16] : word16)
  Class: Eq_165
  DataType: word16
  OrigDataType: word16
T_166: (in di + Mem0[0x09EF:0x0222:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_167: (in SEQ(es, di) : ptr32)
  Class: Eq_47
  DataType: ptr32
  OrigDataType: ptr32
T_168: (in cond(di) : byte)
  Class: Eq_70
  DataType: byte
  OrigDataType: byte
T_169: (in Test(ULT,C) : bool)
  Class: Eq_169
  DataType: bool
  OrigDataType: bool
T_170: (in 0x04 : byte)
  Class: Eq_57
  DataType: byte
  OrigDataType: byte
T_171: (in 0x04 : byte)
  Class: Eq_171
  DataType: uint8
  OrigDataType: uint8
T_172: (in di >>u 0x04 : word16)
  Class: Eq_2
  DataType: uint16
  OrigDataType: uint16
T_173: (in 0x0001 : word16)
  Class: Eq_173
  DataType: word16
  OrigDataType: word16
T_174: (in di + 0x0001 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_175: (in SEQ(es, di) : ptr32)
  Class: Eq_47
  DataType: ptr32
  OrigDataType: ptr32
T_176: (in bp - di : word16)
  Class: Eq_176
  DataType: word16
  OrigDataType: word16
T_177: (in cond(bp - di) : byte)
  Class: Eq_70
  DataType: byte
  OrigDataType: byte
T_178: (in Test(ULT,C) : bool)
  Class: Eq_178
  DataType: bool
  OrigDataType: bool
T_179: (in 0x0224 : word16)
  Class: Eq_179
  DataType: (memptr T_28 (struct (0 T_180 t0000)))
  OrigDataType: (memptr T_28 (struct (0 T_180 t0000)))
T_180: (in Mem0[0x09EF:0x0224:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_181: (in 0x0000 : word16)
  Class: Eq_181
  DataType: word16
  OrigDataType: word16
T_182: (in Mem0[0x09EF:0x0224:word16] - 0x0000 : word16)
  Class: Eq_182
  DataType: word16
  OrigDataType: word16
T_183: (in cond(Mem0[0x09EF:0x0224:word16] - 0x0000) : byte)
  Class: Eq_70
  DataType: byte
  OrigDataType: byte
T_184: (in Test(EQ,Z) : bool)
  Class: Eq_184
  DataType: bool
  OrigDataType: bool
T_185: (in 0x1000 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_186: (in SEQ(es, di) : ptr32)
  Class: Eq_47
  DataType: ptr32
  OrigDataType: ptr32
T_187: (in 0x1000 : word16)
  Class: Eq_187
  DataType: word16
  OrigDataType: word16
T_188: (in bp - 0x1000 : word16)
  Class: Eq_188
  DataType: word16
  OrigDataType: word16
T_189: (in cond(bp - 0x1000) : byte)
  Class: Eq_70
  DataType: byte
  OrigDataType: byte
T_190: (in CZ : byte)
  Class: Eq_70
  DataType: byte
  OrigDataType: byte
T_191: (in Test(UGT,CZ) : bool)
  Class: Eq_191
  DataType: bool
  OrigDataType: bool
T_192: (in 0x0222 : word16)
  Class: Eq_192
  DataType: (memptr T_28 (struct (0 T_193 t0000)))
  OrigDataType: (memptr T_28 (struct (0 T_193 t0000)))
T_193: (in Mem0[0x09EF:0x0222:word16] : word16)
  Class: Eq_165
  DataType: word16
  OrigDataType: word16
T_194: (in 0x0000 : word16)
  Class: Eq_194
  DataType: word16
  OrigDataType: word16
T_195: (in Mem0[0x09EF:0x0222:word16] - 0x0000 : word16)
  Class: Eq_195
  DataType: word16
  OrigDataType: word16
T_196: (in cond(Mem0[0x09EF:0x0222:word16] - 0x0000) : byte)
  Class: Eq_70
  DataType: byte
  OrigDataType: byte
T_197: (in Test(NE,Z) : bool)
  Class: Eq_197
  DataType: bool
  OrigDataType: bool
T_198: (in 0x09EF : word16)
  Class: Eq_198
  DataType: word16
  OrigDataType: word16
T_199: (in bx + 0x09EF : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_200: (in 0x00A4 : word16)
  Class: Eq_200
  DataType: (memptr T_28 (struct (0 T_201 t0000)))
  OrigDataType: (memptr T_28 (struct (0 T_201 t0000)))
T_201: (in Mem0[0x09EF:0x00A4:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_202: (in 0x00A8 : word16)
  Class: Eq_202
  DataType: (memptr T_28 (struct (0 T_203 t0000)))
  OrigDataType: (memptr T_28 (struct (0 T_203 t0000)))
T_203: (in Mem0[0x09EF:0x00A8:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_204: (in 0x0090 : word16)
  Class: Eq_204
  DataType: (memptr T_28 (struct (0 T_205 t0000)))
  OrigDataType: (memptr T_28 (struct (0 T_205 t0000)))
T_205: (in Mem0[0x09EF:0x0090:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_206: (in bx - ax : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_207: (in 0x4A : byte)
  Class: Eq_10
  DataType: byte
  OrigDataType: byte
T_208: (in 0x0002 : word16)
  Class: Eq_208
  DataType: word16
  OrigDataType: word16
T_209: (in fp - 0x0002 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_210: (in wLoc02 : word16)
  Class: Eq_2
  DataType: (union (uint16 u0) ((memptr T_28 (struct (0 T_2 t0000))) u1) ((memptr T_31 (struct (0 T_313 t0000))) u2) ((union (ptr16 u0) ((memptr T_31 (struct (0 T_98 t0000) (2 T_63 t0002))) u1)) u3))
  OrigDataType: (union (uint16 u0) ((memptr T_28 (struct (0 T_2 t0000))) u1) ((memptr T_31 (struct (0 T_313 t0000))) u2) ((union (ptr16 u0) ((memptr T_31 (struct (0 T_98 t0000) (2 T_63 t0002))) u1)) u3))
T_211: (in msdos_resize_memory_block : ptr32)
  Class: Eq_211
  DataType: (ptr (fn T_217 (T_31, T_26, T_216)))
  OrigDataType: (ptr (fn T_217 (T_31, T_26, T_216)))
T_212: (in signature of msdos_resize_memory_block : void)
  Class: Eq_211
  DataType: 
  OrigDataType: 
T_213: (in es : selector)
  Class: Eq_2
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_214: (in bx : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_215: (in bxOut : ptr16)
  Class: Eq_215
  DataType: ptr16
  OrigDataType: ptr16
T_216: (in out bx : ptr16)
  Class: Eq_215
  DataType: (ptr (union (uint16 u0) ((memptr T_28 (struct (0 T_2 t0000))) u1) ((memptr T_31 (struct (0 T_313 t0000))) u2) ((union (ptr16 u0) ((memptr T_31 (struct (0 T_98 t0000) (2 T_63 t0002))) u1)) u3)))
  OrigDataType: (ptr (union (uint16 u0) ((memptr T_28 (struct (0 T_2 t0000))) u1) ((memptr T_31 (struct (0 T_313 t0000))) u2) ((union (ptr16 u0) ((memptr T_31 (struct (0 T_98 t0000) (2 T_63 t0002))) u1)) u3)))
T_217: (in msdos_resize_memory_block(es, bx, out bx) : byte)
  Class: Eq_70
  DataType: byte
  OrigDataType: byte
T_218: (in 0x04 : byte)
  Class: Eq_218
  DataType: byte
  OrigDataType: byte
T_219: (in di << 0x04 : word16)
  Class: Eq_2
  DataType: ui16
  OrigDataType: ui16
T_220: (in __cli : ptr32)
  Class: Eq_220
  DataType: (ptr (fn T_221 ()))
  OrigDataType: (ptr (fn T_221 ()))
T_221: (in __cli() : void)
  Class: Eq_221
  DataType: void
  OrigDataType: void
T_222: (in 0x09EF : word16)
  Class: Eq_222
  DataType: word16
  OrigDataType: word16
T_223: (in ss : selector)
  Class: Eq_222
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_224: (in 0x0000 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_225: (in (byte) ax : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_226: (in 0x01F8 : word16)
  Class: Eq_226
  DataType: (memptr T_7 (struct (0 T_227 t0000)))
  OrigDataType: (memptr T_7 (struct (0 T_227 t0000)))
T_227: (in Mem0[0x0800:0x01F8:selector] : selector)
  Class: Eq_2
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_228: (in 0x05D0 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_229: (in SEQ(es, di) : ptr32)
  Class: Eq_47
  DataType: ptr32
  OrigDataType: ptr32
T_230: (in 0x0616 : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_231: (in 0x0046 : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_232: (in SLICE(cx, byte, 8) : byte)
  Class: Eq_55
  DataType: byte
  OrigDataType: byte
T_233: (in (byte) cx : byte)
  Class: Eq_57
  DataType: byte
  OrigDataType: byte
T_234: (in 0x0046 : word16)
  Class: Eq_234
  DataType: word16
  OrigDataType: word16
T_235: (in cond(0x0046) : byte)
  Class: Eq_70
  DataType: byte
  OrigDataType: byte
T_236: (in SEQ(es, di) : ptr32)
  Class: Eq_47
  DataType: ptr32
  OrigDataType: ptr32
T_237: (in 0x0002 : word16)
  Class: Eq_237
  DataType: word16
  OrigDataType: word16
T_238: (in sp - 0x0002 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_239: (in cs : selector)
  Class: Eq_239
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_240: (in 0x05C2 : word16)
  Class: Eq_240
  DataType: (memptr T_20 (struct (0 T_241 t0000)))
  OrigDataType: (memptr T_20 (struct (0 T_241 t0000)))
T_241: (in Mem0[ds:0x05C2:word16] : word16)
  Class: Eq_241
  DataType: word16
  OrigDataType: word16
T_242: (in SEQ(cs, Mem0[ds:0x05C2:word16]) : ptr32)
  Class: Eq_242
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_243: (in fn0800_03CA : ptr32)
  Class: Eq_243
  DataType: (ptr (fn T_249 (T_20, T_210, T_248)))
  OrigDataType: (ptr (fn T_249 (T_20, T_210, T_248)))
T_244: (in signature of fn0800_03CA : void)
  Class: Eq_243
  DataType: 
  OrigDataType: 
T_245: (in ds : selector)
  Class: Eq_2
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_246: (in wArg00 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_247: (in dsOut : ptr16)
  Class: Eq_247
  DataType: ptr16
  OrigDataType: ptr16
T_248: (in out ds : ptr16)
  Class: Eq_247
  DataType: (ptr (ptr (segment (2 T_22 t0002) (2C T_25 t002C) (5C2 T_241 t05C2))))
  OrigDataType: (ptr (ptr (segment (2 T_22 t0002) (2C T_25 t002C) (5C2 T_241 t05C2))))
T_249: (in fn0800_03CA(ds, wLoc02, out ds) : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_250: (in fn0800_04B5 : ptr32)
  Class: Eq_250
  DataType: (ptr (fn T_256 (T_113, T_20, T_255)))
  OrigDataType: (ptr (fn T_256 (T_113, T_20, T_255)))
T_251: (in signature of fn0800_04B5 : void)
  Class: Eq_250
  DataType: 
  OrigDataType: 
T_252: (in si : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_253: (in ds : selector)
  Class: Eq_2
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_254: (in diOut : ptr16)
  Class: Eq_254
  DataType: ptr16
  OrigDataType: ptr16
T_255: (in out di : ptr16)
  Class: Eq_254
  DataType: (ptr (union (uint16 u0) ((memptr T_28 (struct (0 T_2 t0000))) u1) ((memptr T_31 (struct (0 T_313 t0000))) u2) ((union (ptr16 u0) ((memptr T_31 (struct (0 T_98 t0000) (2 T_63 t0002))) u1)) u3)))
  OrigDataType: (ptr (union (uint16 u0) ((memptr T_28 (struct (0 T_2 t0000))) u1) ((memptr T_31 (struct (0 T_313 t0000))) u2) ((union (ptr16 u0) ((memptr T_31 (struct (0 T_98 t0000) (2 T_63 t0002))) u1)) u3)))
T_256: (in fn0800_04B5(si, ds, out di) : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_257: (in 0x0002 : word16)
  Class: Eq_257
  DataType: word16
  OrigDataType: word16
T_258: (in sp + 0x0002 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_259: (in 0x00 : byte)
  Class: Eq_10
  DataType: byte
  OrigDataType: byte
T_260: (in bios_get_system_time : ptr32)
  Class: Eq_260
  DataType: (ptr (fn T_264 (T_263)))
  OrigDataType: (ptr (fn T_264 (T_263)))
T_261: (in signature of bios_get_system_time : void)
  Class: Eq_260
  DataType: 
  OrigDataType: 
T_262: (in dxOut : ptr16)
  Class: Eq_262
  DataType: ptr16
  OrigDataType: ptr16
T_263: (in out dx : ptr16)
  Class: Eq_262
  DataType: (ptr (ptr (segment (8A T_47 t008A) (8C T_35 t008C) (8E T_144 t008E) (90 T_33 t0090) (92 T_30 t0092) (96 T_38 t0096) (AC T_37 t00AC))))
  OrigDataType: (ptr (ptr (segment (8A T_47 t008A) (8C T_35 t008C) (8E T_144 t008E) (90 T_33 t0090) (92 T_30 t0092) (96 T_38 t0096) (AC T_37 t00AC))))
T_264: (in bios_get_system_time(out dx) : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_265: (in 0x0098 : word16)
  Class: Eq_265
  DataType: (memptr T_20 (struct (0 T_266 t0000)))
  OrigDataType: (memptr T_20 (struct (0 T_266 t0000)))
T_266: (in Mem0[ds:0x0098:word16] : word16)
  Class: Eq_4
  DataType: word16
  OrigDataType: word16
T_267: (in 0x009A : word16)
  Class: Eq_267
  DataType: (memptr T_20 (struct (0 T_268 t0000)))
  OrigDataType: (memptr T_20 (struct (0 T_268 t0000)))
T_268: (in Mem0[ds:0x009A:word16] : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_269: (in 0x05C6 : word16)
  Class: Eq_269
  DataType: (memptr T_20 (struct (0 T_270 t0000)))
  OrigDataType: (memptr T_20 (struct (0 T_270 t0000)))
T_270: (in Mem0[ds:0x05C6:word16] : word16)
  Class: Eq_270
  DataType: word16
  OrigDataType: word16
T_271: (in SEQ(cs, Mem0[ds:0x05C6:word16]) : ptr32)
  Class: Eq_271
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_272: (in 0x0002 : word16)
  Class: Eq_272
  DataType: word16
  OrigDataType: word16
T_273: (in sp - 0x0002 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_274: (in 0x0088 : word16)
  Class: Eq_274
  DataType: (memptr T_20 (struct (0 T_275 t0000)))
  OrigDataType: (memptr T_20 (struct (0 T_275 t0000)))
T_275: (in Mem0[ds:0x0088:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_276: (in 0x0000 : word16)
  Class: Eq_276
  DataType: word16
  OrigDataType: word16
T_277: (in sp + 0x0000 : word16)
  Class: Eq_277
  DataType: word16
  OrigDataType: word16
T_278: (in Mem0[0x09EF:sp + 0x0000:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_279: (in 0x0002 : word16)
  Class: Eq_279
  DataType: word16
  OrigDataType: word16
T_280: (in sp - 0x0002 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_281: (in 0x0086 : word16)
  Class: Eq_281
  DataType: (memptr T_20 (struct (0 T_282 t0000)))
  OrigDataType: (memptr T_20 (struct (0 T_282 t0000)))
T_282: (in Mem0[ds:0x0086:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_283: (in 0x0000 : word16)
  Class: Eq_283
  DataType: word16
  OrigDataType: word16
T_284: (in sp + 0x0000 : word16)
  Class: Eq_284
  DataType: word16
  OrigDataType: word16
T_285: (in Mem0[0x09EF:sp + 0x0000:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_286: (in 0x0002 : word16)
  Class: Eq_286
  DataType: word16
  OrigDataType: word16
T_287: (in sp - 0x0002 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_288: (in 0x0084 : word16)
  Class: Eq_288
  DataType: (memptr T_20 (struct (0 T_289 t0000)))
  OrigDataType: (memptr T_20 (struct (0 T_289 t0000)))
T_289: (in Mem0[ds:0x0084:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_290: (in 0x0000 : word16)
  Class: Eq_290
  DataType: word16
  OrigDataType: word16
T_291: (in sp + 0x0000 : word16)
  Class: Eq_291
  DataType: word16
  OrigDataType: word16
T_292: (in Mem0[0x09EF:sp + 0x0000:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_293: (in fn0800_01FA : ptr32)
  Class: Eq_293
  DataType: (ptr (fn T_298 (T_26, T_51, T_20)))
  OrigDataType: (ptr (fn T_298 (T_26, T_51, T_20)))
T_294: (in signature of fn0800_01FA : void)
  Class: Eq_293
  DataType: 
  OrigDataType: 
T_295: (in bx : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_296: (in di : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_297: (in ds : selector)
  Class: Eq_2
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_298: (in fn0800_01FA(bx, di, ds) : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_299: (in (byte) ax : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_300: (in 0x0002 : word16)
  Class: Eq_300
  DataType: word16
  OrigDataType: word16
T_301: (in sp - 0x0002 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_302: (in 0x0000 : word16)
  Class: Eq_302
  DataType: word16
  OrigDataType: word16
T_303: (in sp + 0x0000 : word16)
  Class: Eq_303
  DataType: word16
  OrigDataType: word16
T_304: (in Mem0[0x09EF:sp + 0x0000:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_305: (in fn0800_0395 : ptr32)
  Class: Eq_305
  DataType: (ptr (fn T_310 (T_20, T_309)))
  OrigDataType: (ptr (fn T_310 (T_20, T_309)))
T_306: (in signature of fn0800_0395 : void)
  Class: Eq_305
  DataType: 
  OrigDataType: 
T_307: (in ds : selector)
  Class: Eq_2
  DataType: (ptr (segment (21C T_881 t021C) (21E T_884 t021E) (220 T_887 t0220) (226 T_858 t0226) (5D0 (arr T_1891) a05D0)))
  OrigDataType: (ptr (segment (21C T_881 t021C) (21E T_884 t021E) (220 T_887 t0220) (226 T_858 t0226) (5D0 (arr T_1891) a05D0)))
T_308: (in wArg02 : word16)
  Class: Eq_308
  DataType: word16
  OrigDataType: word16
T_309: (in wArg00 : word16)
  Class: Eq_308
  DataType: word16
  OrigDataType: word16
T_310: (in fn0800_0395(ds, wArg00) : void)
  Class: Eq_310
  DataType: void
  OrigDataType: void
T_311: (in 0x0000 : word16)
  Class: Eq_311
  DataType: word16
  OrigDataType: word16
T_312: (in di + 0x0000 : word16)
  Class: Eq_312
  DataType: word16
  OrigDataType: word16
T_313: (in Mem0[es:di + 0x0000:byte] : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_314: (in 0x0001 : word16)
  Class: Eq_314
  DataType: word16
  OrigDataType: word16
T_315: (in di + 0x0001 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_316: (in SEQ(es, di) : ptr32)
  Class: Eq_47
  DataType: ptr32
  OrigDataType: ptr32
T_317: (in 0x0001 : word16)
  Class: Eq_317
  DataType: word16
  OrigDataType: word16
T_318: (in cx - 0x0001 : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_319: (in SLICE(cx, byte, 8) : byte)
  Class: Eq_55
  DataType: byte
  OrigDataType: byte
T_320: (in (byte) cx : byte)
  Class: Eq_57
  DataType: byte
  OrigDataType: byte
T_321: (in 0x0000 : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_322: (in cx == 0x0000 : bool)
  Class: Eq_322
  DataType: bool
  OrigDataType: bool
T_323: (in fn0800_0121 : ptr32)
  Class: Eq_323
  DataType: (ptr (fn T_328 (T_17, T_327)))
  OrigDataType: (ptr (fn T_328 (T_17, T_327)))
T_324: (in signature of fn0800_0121 : void)
  Class: Eq_323
  DataType: 
  OrigDataType: 
T_325: (in al : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_326: (in bArg00 : byte)
  Class: Eq_326
  DataType: byte
  OrigDataType: byte
T_327: (in bArg00 : byte)
  Class: Eq_326
  DataType: byte
  OrigDataType: byte
T_328: (in fn0800_0121(al, bArg00) : void)
  Class: Eq_328
  DataType: void
  OrigDataType: void
T_329: (in ds_3 : selector)
  Class: Eq_2
  DataType: (ptr (segment (0 (arr T_1890) a0000) (5C4 T_339 t05C4)))
  OrigDataType: (ptr (segment (0 (arr T_1890) a0000) (5C4 T_339 t05C4)))
T_330: (in 0x01F8 : word16)
  Class: Eq_330
  DataType: (memptr T_7 (struct (0 T_331 t0000)))
  OrigDataType: (memptr T_7 (struct (0 T_331 t0000)))
T_331: (in Mem0[0x0800:0x01F8:selector] : selector)
  Class: Eq_2
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_332: (in fn0800_01A5 : ptr32)
  Class: Eq_332
  DataType: (ptr (fn T_336 (T_325, T_329)))
  OrigDataType: (ptr (fn T_336 (T_325, T_329)))
T_333: (in signature of fn0800_01A5 : void)
  Class: Eq_332
  DataType: 
  OrigDataType: 
T_334: (in al : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_335: (in ds : selector)
  Class: Eq_2
  DataType: (ptr (segment (74 T_429 t0074) (78 T_433 t0078) (7C T_437 t007C) (80 T_442 t0080)))
  OrigDataType: (ptr (segment (74 T_429 t0074) (78 T_433 t0078) (7C T_437 t007C) (80 T_442 t0080)))
T_336: (in fn0800_01A5(al, ds_3) : void)
  Class: Eq_336
  DataType: void
  OrigDataType: void
T_337: (in cs : selector)
  Class: Eq_337
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_338: (in 0x05C4 : word16)
  Class: Eq_338
  DataType: (memptr T_329 (struct (0 T_339 t0000)))
  OrigDataType: (memptr T_329 (struct (0 T_339 t0000)))
T_339: (in Mem0[ds_3:0x05C4:word16] : word16)
  Class: Eq_339
  DataType: word16
  OrigDataType: word16
T_340: (in SEQ(cs, Mem0[ds_3:0x05C4:word16]) : ptr32)
  Class: Eq_340
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_341: (in ax_20 : word16)
  Class: Eq_341
  DataType: word16
  OrigDataType: word16
T_342: (in 0x0000 : word16)
  Class: Eq_341
  DataType: word16
  OrigDataType: word16
T_343: (in al_21 : byte)
  Class: Eq_343
  DataType: bcu8
  OrigDataType: bcu8
T_344: (in 0x00 : byte)
  Class: Eq_343
  DataType: byte
  OrigDataType: byte
T_345: (in ah_22 : byte)
  Class: Eq_345
  DataType: (union (byte u0) (word16 u1))
  OrigDataType: (union (byte u0) (word16 u1))
T_346: (in 0x00 : byte)
  Class: Eq_345
  DataType: byte
  OrigDataType: byte
T_347: (in si_25 : word16)
  Class: Eq_347
  DataType: (memptr T_329 (struct 0001 (0 T_353 t0000)))
  OrigDataType: (memptr T_329 (struct 0001 (0 T_353 t0000)))
T_348: (in 0x0000 : word16)
  Class: Eq_347
  DataType: word16
  OrigDataType: word16
T_349: (in cx_26 : word16)
  Class: Eq_349
  DataType: word16
  OrigDataType: word16
T_350: (in 0x002F : word16)
  Class: Eq_349
  DataType: word16
  OrigDataType: word16
T_351: (in 0x0000 : word16)
  Class: Eq_351
  DataType: word16
  OrigDataType: word16
T_352: (in si_25 + 0x0000 : word16)
  Class: Eq_352
  DataType: word16
  OrigDataType: word16
T_353: (in Mem0[ds_3:si_25 + 0x0000:byte] : byte)
  Class: Eq_353
  DataType: byte
  OrigDataType: byte
T_354: (in al_21 + Mem0[ds_3:si_25 + 0x0000:byte] : byte)
  Class: Eq_343
  DataType: byte
  OrigDataType: byte
T_355: (in 0x00 : byte)
  Class: Eq_343
  DataType: bcu8
  OrigDataType: bcu8
T_356: (in al_21 <u 0x00 : bool)
  Class: Eq_356
  DataType: bool
  OrigDataType: bool
T_357: (in ah_22 + (al_21 <u 0x00) : word16)
  Class: Eq_345
  DataType: word16
  OrigDataType: word16
T_358: (in DPB(ax_20, ah_22, 8, 8) : word16)
  Class: Eq_341
  DataType: word16
  OrigDataType: word16
T_359: (in 0x0001 : word16)
  Class: Eq_359
  DataType: word16
  OrigDataType: word16
T_360: (in si_25 + 0x0001 : word16)
  Class: Eq_347
  DataType: word16
  OrigDataType: word16
T_361: (in 0x0001 : word16)
  Class: Eq_361
  DataType: word16
  OrigDataType: word16
T_362: (in cx_26 - 0x0001 : word16)
  Class: Eq_349
  DataType: word16
  OrigDataType: word16
T_363: (in 0x0000 : word16)
  Class: Eq_349
  DataType: word16
  OrigDataType: word16
T_364: (in cx_26 != 0x0000 : bool)
  Class: Eq_364
  DataType: bool
  OrigDataType: bool
T_365: (in 0x0D37 : word16)
  Class: Eq_341
  DataType: word16
  OrigDataType: word16
T_366: (in ax_20 == 0x0D37 : bool)
  Class: Eq_366
  DataType: bool
  OrigDataType: bool
T_367: (in msdos_terminate : ptr32)
  Class: Eq_367
  DataType: (ptr (fn T_371 (T_370)))
  OrigDataType: (ptr (fn T_371 (T_370)))
T_368: (in signature of msdos_terminate : void)
  Class: Eq_367
  DataType: 
  OrigDataType: 
T_369: (in al : byte)
  Class: Eq_369
  DataType: byte
  OrigDataType: byte
T_370: (in bArg00 : byte)
  Class: Eq_369
  DataType: byte
  OrigDataType: byte
T_371: (in msdos_terminate(bArg00) : void)
  Class: Eq_371
  DataType: void
  OrigDataType: void
T_372: (in fn0800_01DA : ptr32)
  Class: Eq_372
  DataType: (ptr (fn T_379 (T_377, T_378, T_329)))
  OrigDataType: (ptr (fn T_379 (T_377, T_378, T_329)))
T_373: (in signature of fn0800_01DA : void)
  Class: Eq_372
  DataType: 
  OrigDataType: 
T_374: (in cx : word16)
  Class: Eq_374
  DataType: word16
  OrigDataType: word16
T_375: (in dx : word16)
  Class: Eq_375
  DataType: word16
  OrigDataType: word16
T_376: (in ds : selector)
  Class: Eq_2
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_377: (in 0x0019 : word16)
  Class: Eq_374
  DataType: word16
  OrigDataType: word16
T_378: (in 0x002F : word16)
  Class: Eq_375
  DataType: word16
  OrigDataType: word16
T_379: (in fn0800_01DA(0x0019, 0x002F, ds_3) : word16)
  Class: Eq_379
  DataType: word16
  OrigDataType: word16
T_380: (in es_bx_6 : word32)
  Class: Eq_380
  DataType: word32
  OrigDataType: word32
T_381: (in msdos_get_interrupt_vector : ptr32)
  Class: Eq_381
  DataType: (ptr (fn T_384 (T_43)))
  OrigDataType: (ptr (fn T_384 (T_43)))
T_382: (in signature of msdos_get_interrupt_vector : void)
  Class: Eq_381
  DataType: 
  OrigDataType: 
T_383: (in al : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_384: (in msdos_get_interrupt_vector(al) : word32)
  Class: Eq_380
  DataType: word32
  OrigDataType: word32
T_385: (in (word16) es_bx_6 : word16)
  Class: Eq_385
  DataType: word16
  OrigDataType: word16
T_386: (in 0x0074 : word16)
  Class: Eq_386
  DataType: (memptr T_44 (struct (0 T_387 t0000)))
  OrigDataType: (memptr T_44 (struct (0 T_387 t0000)))
T_387: (in Mem9[ds:0x0074:word16] : word16)
  Class: Eq_385
  DataType: word16
  OrigDataType: word16
T_388: (in SLICE(es_bx_6, selector, 16) : selector)
  Class: Eq_388
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_389: (in 0x0076 : word16)
  Class: Eq_389
  DataType: (memptr T_44 (struct (0 T_390 t0000)))
  OrigDataType: (memptr T_44 (struct (0 T_390 t0000)))
T_390: (in Mem10[ds:0x0076:word16] : word16)
  Class: Eq_388
  DataType: word16
  OrigDataType: word16
T_391: (in es_bx_11 : word32)
  Class: Eq_391
  DataType: word32
  OrigDataType: word32
T_392: (in msdos_get_interrupt_vector : ptr32)
  Class: Eq_381
  DataType: (ptr (fn T_393 (T_43)))
  OrigDataType: (ptr (fn T_393 (T_43)))
T_393: (in msdos_get_interrupt_vector(al) : word32)
  Class: Eq_391
  DataType: word32
  OrigDataType: word32
T_394: (in (word16) es_bx_11 : word16)
  Class: Eq_394
  DataType: word16
  OrigDataType: word16
T_395: (in 0x0078 : word16)
  Class: Eq_395
  DataType: (memptr T_44 (struct (0 T_396 t0000)))
  OrigDataType: (memptr T_44 (struct (0 T_396 t0000)))
T_396: (in Mem14[ds:0x0078:word16] : word16)
  Class: Eq_394
  DataType: word16
  OrigDataType: word16
T_397: (in SLICE(es_bx_11, selector, 16) : selector)
  Class: Eq_397
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_398: (in 0x007A : word16)
  Class: Eq_398
  DataType: (memptr T_44 (struct (0 T_399 t0000)))
  OrigDataType: (memptr T_44 (struct (0 T_399 t0000)))
T_399: (in Mem15[ds:0x007A:word16] : word16)
  Class: Eq_397
  DataType: word16
  OrigDataType: word16
T_400: (in es_bx_16 : word32)
  Class: Eq_400
  DataType: word32
  OrigDataType: word32
T_401: (in msdos_get_interrupt_vector : ptr32)
  Class: Eq_381
  DataType: (ptr (fn T_402 (T_43)))
  OrigDataType: (ptr (fn T_402 (T_43)))
T_402: (in msdos_get_interrupt_vector(al) : word32)
  Class: Eq_400
  DataType: word32
  OrigDataType: word32
T_403: (in (word16) es_bx_16 : word16)
  Class: Eq_403
  DataType: word16
  OrigDataType: word16
T_404: (in 0x007C : word16)
  Class: Eq_404
  DataType: (memptr T_44 (struct (0 T_405 t0000)))
  OrigDataType: (memptr T_44 (struct (0 T_405 t0000)))
T_405: (in Mem19[ds:0x007C:word16] : word16)
  Class: Eq_403
  DataType: word16
  OrigDataType: word16
T_406: (in SLICE(es_bx_16, selector, 16) : selector)
  Class: Eq_406
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_407: (in 0x007E : word16)
  Class: Eq_407
  DataType: (memptr T_44 (struct (0 T_408 t0000)))
  OrigDataType: (memptr T_44 (struct (0 T_408 t0000)))
T_408: (in Mem20[ds:0x007E:word16] : word16)
  Class: Eq_406
  DataType: word16
  OrigDataType: word16
T_409: (in es_bx_21 : word32)
  Class: Eq_409
  DataType: word32
  OrigDataType: word32
T_410: (in msdos_get_interrupt_vector : ptr32)
  Class: Eq_381
  DataType: (ptr (fn T_411 (T_43)))
  OrigDataType: (ptr (fn T_411 (T_43)))
T_411: (in msdos_get_interrupt_vector(al) : word32)
  Class: Eq_409
  DataType: word32
  OrigDataType: word32
T_412: (in (word16) es_bx_21 : word16)
  Class: Eq_412
  DataType: word16
  OrigDataType: word16
T_413: (in 0x0080 : word16)
  Class: Eq_413
  DataType: (memptr T_44 (struct (0 T_414 t0000)))
  OrigDataType: (memptr T_44 (struct (0 T_414 t0000)))
T_414: (in Mem24[ds:0x0080:word16] : word16)
  Class: Eq_412
  DataType: word16
  OrigDataType: word16
T_415: (in SLICE(es_bx_21, selector, 16) : selector)
  Class: Eq_415
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_416: (in 0x0082 : word16)
  Class: Eq_416
  DataType: (memptr T_44 (struct (0 T_417 t0000)))
  OrigDataType: (memptr T_44 (struct (0 T_417 t0000)))
T_417: (in Mem25[ds:0x0082:word16] : word16)
  Class: Eq_415
  DataType: word16
  OrigDataType: word16
T_418: (in msdos_set_interrupt_vector : ptr32)
  Class: Eq_418
  DataType: (ptr (fn T_426 (T_422, T_425)))
  OrigDataType: (ptr (fn T_426 (T_422, T_425)))
T_419: (in signature of msdos_set_interrupt_vector : void)
  Class: Eq_418
  DataType: 
  OrigDataType: 
T_420: (in al : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_421: (in ds_dx : word32)
  Class: Eq_421
  DataType: word32
  OrigDataType: word32
T_422: (in 0x00 : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_423: (in cs : selector)
  Class: Eq_423
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_424: (in 0x0158 : word16)
  Class: Eq_424
  DataType: word16
  OrigDataType: word16
T_425: (in SEQ(cs, 0x0158) : word32)
  Class: Eq_421
  DataType: word32
  OrigDataType: word32
T_426: (in msdos_set_interrupt_vector(0x00, SEQ(cs, 0x0158)) : void)
  Class: Eq_426
  DataType: void
  OrigDataType: void
T_427: (in msdos_set_interrupt_vector : ptr32)
  Class: Eq_418
  DataType: (ptr (fn T_430 (T_334, T_429)))
  OrigDataType: (ptr (fn T_430 (T_334, T_429)))
T_428: (in 0x0074 : word16)
  Class: Eq_428
  DataType: (memptr T_335 (struct (0 T_429 t0000)))
  OrigDataType: (memptr T_335 (struct (0 T_429 t0000)))
T_429: (in Mem0[ds:0x0074:segptr32] : segptr32)
  Class: Eq_421
  DataType: segptr32
  OrigDataType: segptr32
T_430: (in msdos_set_interrupt_vector(al, Mem0[ds:0x0074:segptr32]) : void)
  Class: Eq_430
  DataType: void
  OrigDataType: void
T_431: (in msdos_set_interrupt_vector : ptr32)
  Class: Eq_418
  DataType: (ptr (fn T_434 (T_334, T_433)))
  OrigDataType: (ptr (fn T_434 (T_334, T_433)))
T_432: (in 0x0078 : word16)
  Class: Eq_432
  DataType: (memptr T_335 (struct (0 T_433 t0000)))
  OrigDataType: (memptr T_335 (struct (0 T_433 t0000)))
T_433: (in Mem0[ds:0x0078:segptr32] : segptr32)
  Class: Eq_421
  DataType: segptr32
  OrigDataType: segptr32
T_434: (in msdos_set_interrupt_vector(al, Mem0[ds:0x0078:segptr32]) : void)
  Class: Eq_434
  DataType: void
  OrigDataType: void
T_435: (in msdos_set_interrupt_vector : ptr32)
  Class: Eq_418
  DataType: (ptr (fn T_438 (T_334, T_437)))
  OrigDataType: (ptr (fn T_438 (T_334, T_437)))
T_436: (in 0x007C : word16)
  Class: Eq_436
  DataType: (memptr T_335 (struct (0 T_437 t0000)))
  OrigDataType: (memptr T_335 (struct (0 T_437 t0000)))
T_437: (in Mem0[ds:0x007C:segptr32] : segptr32)
  Class: Eq_421
  DataType: segptr32
  OrigDataType: segptr32
T_438: (in msdos_set_interrupt_vector(al, Mem0[ds:0x007C:segptr32]) : void)
  Class: Eq_438
  DataType: void
  OrigDataType: void
T_439: (in msdos_set_interrupt_vector : ptr32)
  Class: Eq_418
  DataType: (ptr (fn T_443 (T_440, T_442)))
  OrigDataType: (ptr (fn T_443 (T_440, T_442)))
T_440: (in 0x06 : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_441: (in 0x0080 : word16)
  Class: Eq_441
  DataType: (memptr T_335 (struct (0 T_442 t0000)))
  OrigDataType: (memptr T_335 (struct (0 T_442 t0000)))
T_442: (in Mem0[ds:0x0080:segptr32] : segptr32)
  Class: Eq_421
  DataType: segptr32
  OrigDataType: segptr32
T_443: (in msdos_set_interrupt_vector(0x06, Mem0[ds:0x0080:segptr32]) : void)
  Class: Eq_443
  DataType: void
  OrigDataType: void
T_444: (in bx : word16)
  Class: Eq_444
  DataType: word16
  OrigDataType: word16
T_445: (in ax_8 : word16)
  Class: Eq_445
  DataType: word16
  OrigDataType: word16
T_446: (in msdos_write_file : ptr32)
  Class: Eq_446
  DataType: (ptr (fn T_455 (T_452, T_374, T_453, T_454)))
  OrigDataType: (ptr (fn T_455 (T_452, T_374, T_453, T_454)))
T_447: (in signature of msdos_write_file : void)
  Class: Eq_446
  DataType: 
  OrigDataType: 
T_448: (in bx : word16)
  Class: Eq_448
  DataType: word16
  OrigDataType: word16
T_449: (in cx : word16)
  Class: Eq_374
  DataType: word16
  OrigDataType: word16
T_450: (in ds_dx : word32)
  Class: Eq_450
  DataType: word32
  OrigDataType: word32
T_451: (in axOut : ptr16)
  Class: Eq_451
  DataType: ptr16
  OrigDataType: ptr16
T_452: (in 0x0002 : word16)
  Class: Eq_448
  DataType: word16
  OrigDataType: word16
T_453: (in ds_dx : word32)
  Class: Eq_450
  DataType: word32
  OrigDataType: word32
T_454: (in out ax_8 : ptr16)
  Class: Eq_451
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_455: (in msdos_write_file(0x0002, cx, ds_dx, out ax_8) : bool)
  Class: Eq_455
  DataType: bool
  OrigDataType: bool
T_456: (in 0x0002 : word16)
  Class: Eq_456
  DataType: word16
  OrigDataType: word16
T_457: (in ds_3 : selector)
  Class: Eq_2
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_458: (in 0x01F8 : word16)
  Class: Eq_458
  DataType: (memptr T_7 (struct (0 T_459 t0000)))
  OrigDataType: (memptr T_7 (struct (0 T_459 t0000)))
T_459: (in Mem0[0x0800:0x01F8:selector] : selector)
  Class: Eq_2
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_460: (in bx_4 : word16)
  Class: Eq_2
  DataType: (memptr T_457 (struct (0 T_470 t0000)))
  OrigDataType: (memptr T_457 (struct (0 T_470 t0000)))
T_461: (in fn0800_01DA : ptr32)
  Class: Eq_372
  DataType: (ptr (fn T_464 (T_462, T_463, T_457)))
  OrigDataType: (ptr (fn T_464 (T_462, T_463, T_457)))
T_462: (in 0x001E : word16)
  Class: Eq_374
  DataType: word16
  OrigDataType: word16
T_463: (in 0x0056 : word16)
  Class: Eq_375
  DataType: word16
  OrigDataType: word16
T_464: (in fn0800_01DA(0x001E, 0x0056, ds_3) : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_465: (in fn0800_0121 : ptr32)
  Class: Eq_323
  DataType: (ptr (fn T_468 (T_466, T_467)))
  OrigDataType: (ptr (fn T_468 (T_466, T_467)))
T_466: (in 0x03 : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_467: (in bLoc04 : byte)
  Class: Eq_326
  DataType: byte
  OrigDataType: byte
T_468: (in fn0800_0121(0x03, bLoc04) : void)
  Class: Eq_468
  DataType: void
  OrigDataType: void
T_469: (in bx_4 + si : word16)
  Class: Eq_469
  DataType: word16
  OrigDataType: word16
T_470: (in Mem0[ds_3:bx_4 + si:byte] : byte)
  Class: Eq_470
  DataType: byte
  OrigDataType: byte
T_471: (in 0x03 : byte)
  Class: Eq_471
  DataType: byte
  OrigDataType: byte
T_472: (in Mem0[ds_3:bx_4 + si:byte] + 0x03 : byte)
  Class: Eq_470
  DataType: byte
  OrigDataType: byte
T_473: (in bx_4 + si : word16)
  Class: Eq_473
  DataType: word16
  OrigDataType: word16
T_474: (in Mem13[ds_3:bx_4 + si:byte] : byte)
  Class: Eq_470
  DataType: byte
  OrigDataType: byte
T_475: (in fn0800_1768 : ptr32)
  Class: Eq_475
  DataType: (ptr (fn T_482 (T_460, T_112, T_457, T_481)))
  OrigDataType: (ptr (fn T_482 (T_460, T_112, T_457, T_481)))
T_476: (in signature of fn0800_1768 : void)
  Class: Eq_475
  DataType: 
  OrigDataType: 
T_477: (in bx : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_478: (in di : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_479: (in ds : selector)
  Class: Eq_2
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_480: (in wArg02 : word16)
  Class: Eq_480
  DataType: word16
  OrigDataType: word16
T_481: (in 0x0194 : word16)
  Class: Eq_480
  DataType: word16
  OrigDataType: word16
T_482: (in fn0800_1768(bx_4, di, ds_3, 0x0194) : word16)
  Class: Eq_482
  DataType: word16
  OrigDataType: word16
T_483: (in bx_41 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_484: (in si_42 : word16)
  Class: Eq_484
  DataType: word16
  OrigDataType: word16
T_485: (in di_43 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_486: (in fn0800_0EDF : ptr32)
  Class: Eq_486
  DataType: (ptr (fn T_497 (T_457, T_493, T_494, T_495, T_496)))
  OrigDataType: (ptr (fn T_497 (T_457, T_493, T_494, T_495, T_496)))
T_487: (in signature of fn0800_0EDF : void)
  Class: Eq_486
  DataType: 
  OrigDataType: 
T_488: (in ds : selector)
  Class: Eq_2
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_489: (in wArg02 : word16)
  Class: Eq_489
  DataType: word16
  OrigDataType: word16
T_490: (in bxOut : ptr16)
  Class: Eq_490
  DataType: ptr16
  OrigDataType: ptr16
T_491: (in siOut : ptr16)
  Class: Eq_491
  DataType: ptr16
  OrigDataType: ptr16
T_492: (in diOut : ptr16)
  Class: Eq_492
  DataType: ptr16
  OrigDataType: ptr16
T_493: (in 0x0198 : word16)
  Class: Eq_489
  DataType: word16
  OrigDataType: word16
T_494: (in out bx_41 : ptr16)
  Class: Eq_490
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_495: (in out si_42 : ptr16)
  Class: Eq_491
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_496: (in out di_43 : ptr16)
  Class: Eq_492
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_497: (in fn0800_0EDF(ds_3, 0x0198, out bx_41, out si_42, out di_43) : word16)
  Class: Eq_497
  DataType: word16
  OrigDataType: word16
T_498: (in fn0800_1768 : ptr32)
  Class: Eq_475
  DataType: (ptr (fn T_503 (T_501, T_485, T_457, T_502)))
  OrigDataType: (ptr (fn T_503 (T_501, T_485, T_457, T_502)))
T_499: (in fn0800_1768 : ptr32)
  Class: Eq_475
  DataType: (ptr (fn T_501 (T_483, T_485, T_457, T_500)))
  OrigDataType: (ptr (fn T_501 (T_483, T_485, T_457, T_500)))
T_500: (in 0x01B2 : word16)
  Class: Eq_480
  DataType: word16
  OrigDataType: word16
T_501: (in fn0800_1768(bx_41, di_43, ds_3, 0x01B2) : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_502: (in 0x01B6 : word16)
  Class: Eq_480
  DataType: word16
  OrigDataType: word16
T_503: (in fn0800_1768(fn0800_1768(bx_41, di_43, ds_3, 0x01B2), di_43, ds_3, 0x01B6) : word16)
  Class: Eq_503
  DataType: word16
  OrigDataType: word16
T_504: (in bx_71 : word16)
  Class: Eq_504
  DataType: word16
  OrigDataType: word16
T_505: (in si_72 : word16)
  Class: Eq_505
  DataType: word16
  OrigDataType: word16
T_506: (in di_73 : word16)
  Class: Eq_506
  DataType: word16
  OrigDataType: word16
T_507: (in fn0800_032D : ptr32)
  Class: Eq_507
  DataType: (ptr (fn T_520 (T_516, T_457, T_517, T_518, T_519)))
  OrigDataType: (ptr (fn T_520 (T_516, T_457, T_517, T_518, T_519)))
T_508: (in signature of fn0800_032D : void)
  Class: Eq_507
  DataType: 
  OrigDataType: 
T_509: (in bp : word16)
  Class: Eq_509
  DataType: (memptr T_553 (struct (FFFFFFEC T_578 tFFFFFFEC) (FFFFFFEE T_620 tFFFFFFEE) (FFFFFFF0 T_572 tFFFFFFF0) (FFFFFFF2 T_568 tFFFFFFF2) (FFFFFFF4 T_572 tFFFFFFF4) (FFFFFFF6 T_568 tFFFFFFF6) (FFFFFFF8 T_557 tFFFFFFF8) (FFFFFFFA T_552 tFFFFFFFA) (FFFFFFFC T_594 tFFFFFFFC) (FFFFFFFE T_552 tFFFFFFFE)))
  OrigDataType: (memptr T_553 (struct (FFFFFFEC T_578 tFFFFFFEC) (FFFFFFEE T_620 tFFFFFFEE) (FFFFFFF0 T_572 tFFFFFFF0) (FFFFFFF2 T_568 tFFFFFFF2) (FFFFFFF4 T_572 tFFFFFFF4) (FFFFFFF6 T_568 tFFFFFFF6) (FFFFFFF8 T_557 tFFFFFFF8) (FFFFFFFA T_552 tFFFFFFFA) (FFFFFFFC T_594 tFFFFFFFC) (FFFFFFFE T_552 tFFFFFFFE)))
T_510: (in ds : selector)
  Class: Eq_2
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_511: (in bxOut : ptr16)
  Class: Eq_511
  DataType: ptr16
  OrigDataType: ptr16
T_512: (in siOut : ptr16)
  Class: Eq_512
  DataType: ptr16
  OrigDataType: ptr16
T_513: (in diOut : ptr16)
  Class: Eq_513
  DataType: ptr16
  OrigDataType: ptr16
T_514: (in fp : ptr16)
  Class: Eq_514
  DataType: ptr16
  OrigDataType: ptr16
T_515: (in 0x0004 : word16)
  Class: Eq_515
  DataType: word16
  OrigDataType: word16
T_516: (in fp - 0x0004 : word16)
  Class: Eq_509
  DataType: word16
  OrigDataType: word16
T_517: (in out bx_71 : ptr16)
  Class: Eq_511
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_518: (in out si_72 : ptr16)
  Class: Eq_512
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_519: (in out di_73 : ptr16)
  Class: Eq_513
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_520: (in fn0800_032D(fp - 0x0004, ds_3, out bx_71, out si_72, out di_73) : word16)
  Class: Eq_520
  DataType: word16
  OrigDataType: word16
T_521: (in ax : word16)
  Class: Eq_521
  DataType: word16
  OrigDataType: word16
T_522: (in fn0800_1768 : ptr32)
  Class: Eq_475
  DataType: (ptr (fn T_524 (T_295, T_296, T_297, T_523)))
  OrigDataType: (ptr (fn T_524 (T_295, T_296, T_297, T_523)))
T_523: (in 0x0194 : word16)
  Class: Eq_480
  DataType: word16
  OrigDataType: word16
T_524: (in fn0800_1768(bx, di, ds, 0x0194) : word16)
  Class: Eq_524
  DataType: word16
  OrigDataType: word16
T_525: (in bx_31 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_526: (in si_32 : word16)
  Class: Eq_526
  DataType: word16
  OrigDataType: word16
T_527: (in di_33 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_528: (in fn0800_0EDF : ptr32)
  Class: Eq_486
  DataType: (ptr (fn T_533 (T_297, T_529, T_530, T_531, T_532)))
  OrigDataType: (ptr (fn T_533 (T_297, T_529, T_530, T_531, T_532)))
T_529: (in 0x0198 : word16)
  Class: Eq_489
  DataType: word16
  OrigDataType: word16
T_530: (in out bx_31 : ptr16)
  Class: Eq_490
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_531: (in out si_32 : ptr16)
  Class: Eq_491
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_532: (in out di_33 : ptr16)
  Class: Eq_492
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_533: (in fn0800_0EDF(ds, 0x0198, out bx_31, out si_32, out di_33) : word16)
  Class: Eq_533
  DataType: word16
  OrigDataType: word16
T_534: (in fn0800_1768 : ptr32)
  Class: Eq_475
  DataType: (ptr (fn T_539 (T_537, T_527, T_297, T_538)))
  OrigDataType: (ptr (fn T_539 (T_537, T_527, T_297, T_538)))
T_535: (in fn0800_1768 : ptr32)
  Class: Eq_475
  DataType: (ptr (fn T_537 (T_525, T_527, T_297, T_536)))
  OrigDataType: (ptr (fn T_537 (T_525, T_527, T_297, T_536)))
T_536: (in 0x01B2 : word16)
  Class: Eq_480
  DataType: word16
  OrigDataType: word16
T_537: (in fn0800_1768(bx_31, di_33, ds, 0x01B2) : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_538: (in 0x01B6 : word16)
  Class: Eq_480
  DataType: word16
  OrigDataType: word16
T_539: (in fn0800_1768(fn0800_1768(bx_31, di_33, ds, 0x01B2), di_33, ds, 0x01B6) : word16)
  Class: Eq_539
  DataType: word16
  OrigDataType: word16
T_540: (in bx_61 : word16)
  Class: Eq_540
  DataType: word16
  OrigDataType: word16
T_541: (in si_62 : word16)
  Class: Eq_541
  DataType: word16
  OrigDataType: word16
T_542: (in di_63 : word16)
  Class: Eq_542
  DataType: word16
  OrigDataType: word16
T_543: (in fn0800_032D : ptr32)
  Class: Eq_507
  DataType: (ptr (fn T_550 (T_546, T_297, T_547, T_548, T_549)))
  OrigDataType: (ptr (fn T_550 (T_546, T_297, T_547, T_548, T_549)))
T_544: (in fp : ptr16)
  Class: Eq_544
  DataType: ptr16
  OrigDataType: ptr16
T_545: (in 0x0002 : word16)
  Class: Eq_545
  DataType: word16
  OrigDataType: word16
T_546: (in fp - 0x0002 : word16)
  Class: Eq_509
  DataType: word16
  OrigDataType: word16
T_547: (in out bx_61 : ptr16)
  Class: Eq_511
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_548: (in out si_62 : ptr16)
  Class: Eq_512
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_549: (in out di_63 : ptr16)
  Class: Eq_513
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_550: (in fn0800_032D(fp - 0x0002, ds, out bx_61, out si_62, out di_63) : word16)
  Class: Eq_550
  DataType: word16
  OrigDataType: word16
T_551: (in ax : word16)
  Class: Eq_551
  DataType: word16
  OrigDataType: word16
T_552: (in dx_11 : word16)
  Class: Eq_552
  DataType: int16
  OrigDataType: int16
T_553: (in ss : selector)
  Class: Eq_553
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_554: (in 0x0006 : word16)
  Class: Eq_554
  DataType: word16
  OrigDataType: word16
T_555: (in bp - 0x0006 : word16)
  Class: Eq_555
  DataType: word16
  OrigDataType: word16
T_556: (in Mem0[ss:bp - 0x0006:word16] : word16)
  Class: Eq_552
  DataType: word16
  OrigDataType: word16
T_557: (in ax_12 : word16)
  Class: Eq_557
  DataType: cups16
  OrigDataType: cups16
T_558: (in 0x0008 : word16)
  Class: Eq_558
  DataType: word16
  OrigDataType: word16
T_559: (in bp - 0x0008 : word16)
  Class: Eq_559
  DataType: word16
  OrigDataType: word16
T_560: (in Mem0[ss:bp - 0x0008:word16] : word16)
  Class: Eq_557
  DataType: word16
  OrigDataType: word16
T_561: (in 0x0002 : word16)
  Class: Eq_561
  DataType: word16
  OrigDataType: word16
T_562: (in bp - 0x0002 : word16)
  Class: Eq_562
  DataType: word16
  OrigDataType: word16
T_563: (in Mem0[ss:bp - 0x0002:word16] : word16)
  Class: Eq_552
  DataType: int16
  OrigDataType: int16
T_564: (in dx_11 >= Mem0[ss:bp - 0x0002:word16] : bool)
  Class: Eq_564
  DataType: bool
  OrigDataType: bool
T_565: (in bp - 0x0002 : word16)
  Class: Eq_565
  DataType: word16
  OrigDataType: word16
T_566: (in Mem0[ss:bp - 0x0002:word16] : word16)
  Class: Eq_552
  DataType: int16
  OrigDataType: int16
T_567: (in dx_11 > Mem0[ss:bp - 0x0002:word16] : bool)
  Class: Eq_567
  DataType: bool
  OrigDataType: bool
T_568: (in 0x0000 : word16)
  Class: Eq_568
  DataType: word16
  OrigDataType: word16
T_569: (in 0x000A : word16)
  Class: Eq_569
  DataType: word16
  OrigDataType: word16
T_570: (in bp - 0x000A : word16)
  Class: Eq_570
  DataType: word16
  OrigDataType: word16
T_571: (in Mem22[ss:bp - 0x000A:word16] : word16)
  Class: Eq_568
  DataType: word16
  OrigDataType: word16
T_572: (in 0x0001 : word16)
  Class: Eq_572
  DataType: word16
  OrigDataType: word16
T_573: (in 0x000C : word16)
  Class: Eq_573
  DataType: word16
  OrigDataType: word16
T_574: (in bp - 0x000C : word16)
  Class: Eq_574
  DataType: word16
  OrigDataType: word16
T_575: (in Mem23[ss:bp - 0x000C:word16] : word16)
  Class: Eq_572
  DataType: word16
  OrigDataType: word16
T_576: (in 0x0014 : word16)
  Class: Eq_576
  DataType: word16
  OrigDataType: word16
T_577: (in bp - 0x0014 : word16)
  Class: Eq_577
  DataType: word16
  OrigDataType: word16
T_578: (in Mem0[ss:bp - 0x0014:word16] : word16)
  Class: Eq_578
  DataType: word16
  OrigDataType: word16
T_579: (in fp : ptr16)
  Class: Eq_579
  DataType: (union ((union (ptr16 u0) ((memptr T_553 (struct (FFFFFFFC T_665 tFFFFFFFC))) u1)) u0) ((memptr T_553 (struct (FFFFFFFC T_582 tFFFFFFFC))) u1))
  OrigDataType: (union ((union (ptr16 u0) ((memptr T_553 (struct (FFFFFFFC T_665 tFFFFFFFC))) u1)) u0) ((memptr T_553 (struct (FFFFFFFC T_582 tFFFFFFFC))) u1))
T_580: (in 0x0004 : word16)
  Class: Eq_580
  DataType: word16
  OrigDataType: word16
T_581: (in fp - 0x0004 : word16)
  Class: Eq_581
  DataType: word16
  OrigDataType: word16
T_582: (in Mem181[ss:fp - 0x0004:word16] : word16)
  Class: Eq_578
  DataType: word16
  OrigDataType: word16
T_583: (in bx_186 : word16)
  Class: Eq_583
  DataType: word16
  OrigDataType: word16
T_584: (in si_187 : word16)
  Class: Eq_584
  DataType: word16
  OrigDataType: word16
T_585: (in di_188 : word16)
  Class: Eq_585
  DataType: word16
  OrigDataType: word16
T_586: (in fn0800_0EDF : ptr32)
  Class: Eq_486
  DataType: (ptr (fn T_591 (T_510, T_587, T_588, T_589, T_590)))
  OrigDataType: (ptr (fn T_591 (T_510, T_587, T_588, T_589, T_590)))
T_587: (in 0x01BA : word16)
  Class: Eq_489
  DataType: word16
  OrigDataType: word16
T_588: (in out bx_186 : ptr16)
  Class: Eq_490
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_589: (in out si_187 : ptr16)
  Class: Eq_491
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_590: (in out di_188 : ptr16)
  Class: Eq_492
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_591: (in fn0800_0EDF(ds, 0x01BA, out bx_186, out si_187, out di_188) : word16)
  Class: Eq_591
  DataType: word16
  OrigDataType: word16
T_592: (in 0x0004 : word16)
  Class: Eq_592
  DataType: word16
  OrigDataType: word16
T_593: (in bp - 0x0004 : word16)
  Class: Eq_593
  DataType: word16
  OrigDataType: word16
T_594: (in Mem0[ss:bp - 0x0004:word16] : word16)
  Class: Eq_557
  DataType: cups16
  OrigDataType: cups16
T_595: (in ax_12 >u Mem0[ss:bp - 0x0004:word16] : bool)
  Class: Eq_595
  DataType: bool
  OrigDataType: bool
T_596: (in 0x000A : word16)
  Class: Eq_596
  DataType: word16
  OrigDataType: word16
T_597: (in bp - 0x000A : word16)
  Class: Eq_597
  DataType: word16
  OrigDataType: word16
T_598: (in Mem23[ss:bp - 0x000A:word16] : word16)
  Class: Eq_568
  DataType: int16
  OrigDataType: int16
T_599: (in 0x0000 : word16)
  Class: Eq_568
  DataType: int16
  OrigDataType: int16
T_600: (in Mem23[ss:bp - 0x000A:word16] >= 0x0000 : bool)
  Class: Eq_600
  DataType: bool
  OrigDataType: bool
T_601: (in bp - 0x000A : word16)
  Class: Eq_601
  DataType: word16
  OrigDataType: word16
T_602: (in Mem23[ss:bp - 0x000A:word16] : word16)
  Class: Eq_568
  DataType: int16
  OrigDataType: int16
T_603: (in Mem23[ss:bp - 0x000A:word16] > 0x0000 : bool)
  Class: Eq_603
  DataType: bool
  OrigDataType: bool
T_604: (in ax_159 : word16)
  Class: Eq_604
  DataType: word16
  OrigDataType: word16
T_605: (in ax_40 : word16)
  Class: Eq_605
  DataType: cups16
  OrigDataType: cups16
T_606: (in 0x0014 : word16)
  Class: Eq_606
  DataType: word16
  OrigDataType: word16
T_607: (in bp - 0x0014 : word16)
  Class: Eq_607
  DataType: word16
  OrigDataType: word16
T_608: (in Mem23[ss:bp - 0x0014:word16] : word16)
  Class: Eq_578
  DataType: word16
  OrigDataType: word16
T_609: (in 0x0010 : word16)
  Class: Eq_609
  DataType: word16
  OrigDataType: word16
T_610: (in bp - 0x0010 : word16)
  Class: Eq_610
  DataType: word16
  OrigDataType: word16
T_611: (in Mem23[ss:bp - 0x0010:word16] : word16)
  Class: Eq_572
  DataType: word16
  OrigDataType: word16
T_612: (in Mem23[ss:bp - 0x0014:word16] + Mem23[ss:bp - 0x0010:word16] : word16)
  Class: Eq_605
  DataType: word16
  OrigDataType: word16
T_613: (in ax_44 : word16)
  Class: Eq_578
  DataType: cups16
  OrigDataType: cups16
T_614: (in 0x000C : word16)
  Class: Eq_614
  DataType: word16
  OrigDataType: word16
T_615: (in bp - 0x000C : word16)
  Class: Eq_615
  DataType: word16
  OrigDataType: word16
T_616: (in Mem23[ss:bp - 0x000C:word16] : word16)
  Class: Eq_572
  DataType: word16
  OrigDataType: word16
T_617: (in ax_40 + Mem23[ss:bp - 0x000C:word16] : word16)
  Class: Eq_578
  DataType: word16
  OrigDataType: word16
T_618: (in 0x0012 : word16)
  Class: Eq_618
  DataType: word16
  OrigDataType: word16
T_619: (in bp - 0x0012 : word16)
  Class: Eq_619
  DataType: word16
  OrigDataType: word16
T_620: (in Mem23[ss:bp - 0x0012:word16] : word16)
  Class: Eq_620
  DataType: word16
  OrigDataType: word16
T_621: (in 0x000E : word16)
  Class: Eq_621
  DataType: word16
  OrigDataType: word16
T_622: (in bp - 0x000E : word16)
  Class: Eq_622
  DataType: word16
  OrigDataType: word16
T_623: (in Mem23[ss:bp - 0x000E:word16] : word16)
  Class: Eq_568
  DataType: word16
  OrigDataType: word16
T_624: (in Mem23[ss:bp - 0x0012:word16] + Mem23[ss:bp - 0x000E:word16] : word16)
  Class: Eq_624
  DataType: word16
  OrigDataType: word16
T_625: (in 0x0000 : word16)
  Class: Eq_605
  DataType: cups16
  OrigDataType: cups16
T_626: (in ax_40 <u 0x0000 : bool)
  Class: Eq_626
  DataType: bool
  OrigDataType: bool
T_627: (in Mem23[ss:bp - 0x0012:word16] + Mem23[ss:bp - 0x000E:word16] + (ax_40 <u 0x0000) : word16)
  Class: Eq_627
  DataType: word16
  OrigDataType: word16
T_628: (in 0x000A : word16)
  Class: Eq_628
  DataType: word16
  OrigDataType: word16
T_629: (in bp - 0x000A : word16)
  Class: Eq_629
  DataType: word16
  OrigDataType: word16
T_630: (in Mem23[ss:bp - 0x000A:word16] : word16)
  Class: Eq_568
  DataType: word16
  OrigDataType: word16
T_631: (in Mem23[ss:bp - 0x0012:word16] + Mem23[ss:bp - 0x000E:word16] + (ax_40 <u 0x0000) + Mem23[ss:bp - 0x000A:word16] : word16)
  Class: Eq_631
  DataType: word16
  OrigDataType: word16
T_632: (in 0x0000 : word16)
  Class: Eq_578
  DataType: cups16
  OrigDataType: cups16
T_633: (in ax_44 <u 0x0000 : bool)
  Class: Eq_633
  DataType: bool
  OrigDataType: bool
T_634: (in Mem23[ss:bp - 0x0012:word16] + Mem23[ss:bp - 0x000E:word16] + (ax_40 <u 0x0000) + Mem23[ss:bp - 0x000A:word16] + (ax_44 <u 0x0000) : word16)
  Class: Eq_620
  DataType: word16
  OrigDataType: word16
T_635: (in 0x0012 : word16)
  Class: Eq_635
  DataType: word16
  OrigDataType: word16
T_636: (in bp - 0x0012 : word16)
  Class: Eq_636
  DataType: word16
  OrigDataType: word16
T_637: (in Mem48[ss:bp - 0x0012:word16] : word16)
  Class: Eq_620
  DataType: word16
  OrigDataType: word16
T_638: (in 0x0014 : word16)
  Class: Eq_638
  DataType: word16
  OrigDataType: word16
T_639: (in bp - 0x0014 : word16)
  Class: Eq_639
  DataType: word16
  OrigDataType: word16
T_640: (in Mem49[ss:bp - 0x0014:word16] : word16)
  Class: Eq_578
  DataType: word16
  OrigDataType: word16
T_641: (in dx_50 : word16)
  Class: Eq_620
  DataType: int16
  OrigDataType: int16
T_642: (in 0x0012 : word16)
  Class: Eq_642
  DataType: word16
  OrigDataType: word16
T_643: (in bp - 0x0012 : word16)
  Class: Eq_643
  DataType: word16
  OrigDataType: word16
T_644: (in Mem49[ss:bp - 0x0012:word16] : word16)
  Class: Eq_620
  DataType: word16
  OrigDataType: word16
T_645: (in ax_56 : word16)
  Class: Eq_572
  DataType: word16
  OrigDataType: word16
T_646: (in __rcr : ptr32)
  Class: Eq_646
  DataType: (ptr (fn T_654 (T_649, T_650, T_653)))
  OrigDataType: (ptr (fn T_654 (T_649, T_650, T_653)))
T_647: (in 0x0014 : word16)
  Class: Eq_647
  DataType: word16
  OrigDataType: word16
T_648: (in bp - 0x0014 : word16)
  Class: Eq_648
  DataType: word16
  OrigDataType: word16
T_649: (in Mem49[ss:bp - 0x0014:word16] : word16)
  Class: Eq_578
  DataType: word16
  OrigDataType: word16
T_650: (in 0x01 : byte)
  Class: Eq_650
  DataType: byte
  OrigDataType: byte
T_651: (in 0x0001 : word16)
  Class: Eq_651
  DataType: uint16
  OrigDataType: uint16
T_652: (in dx_50 >> 0x0001 : word16)
  Class: Eq_652
  DataType: int16
  OrigDataType: int16
T_653: (in cond(dx_50 >> 0x0001) : byte)
  Class: Eq_653
  DataType: byte
  OrigDataType: byte
T_654: (in __rcr(Mem49[ss:bp - 0x0014:word16], 0x01, cond(dx_50 >> 0x0001)) : word16)
  Class: Eq_572
  DataType: word16
  OrigDataType: word16
T_655: (in dx_50 >> 0x0001 : word16)
  Class: Eq_568
  DataType: int16
  OrigDataType: int16
T_656: (in 0x000E : word16)
  Class: Eq_656
  DataType: word16
  OrigDataType: word16
T_657: (in bp - 0x000E : word16)
  Class: Eq_657
  DataType: word16
  OrigDataType: word16
T_658: (in Mem57[ss:bp - 0x000E:word16] : word16)
  Class: Eq_568
  DataType: word16
  OrigDataType: word16
T_659: (in 0x0010 : word16)
  Class: Eq_659
  DataType: word16
  OrigDataType: word16
T_660: (in bp - 0x0010 : word16)
  Class: Eq_660
  DataType: word16
  OrigDataType: word16
T_661: (in Mem58[ss:bp - 0x0010:word16] : word16)
  Class: Eq_572
  DataType: word16
  OrigDataType: word16
T_662: (in 0x000A : word16)
  Class: Eq_662
  DataType: word16
  OrigDataType: word16
T_663: (in 0x0004 : word16)
  Class: Eq_663
  DataType: word16
  OrigDataType: word16
T_664: (in fp - 0x0004 : word16)
  Class: Eq_664
  DataType: word16
  OrigDataType: word16
T_665: (in Mem67[ss:fp - 0x0004:word16] : word16)
  Class: Eq_662
  DataType: word16
  OrigDataType: word16
T_666: (in dx_73 : word16)
  Class: Eq_620
  DataType: word16
  OrigDataType: word16
T_667: (in ax_74 : word16)
  Class: Eq_578
  DataType: word16
  OrigDataType: word16
T_668: (in fn0800_1DEB : ptr32)
  Class: Eq_668
  DataType: (ptr (fn T_684 (T_677, T_680, T_681, T_682, T_683)))
  OrigDataType: (ptr (fn T_684 (T_677, T_680, T_681, T_682, T_683)))
T_669: (in signature of fn0800_1DEB : void)
  Class: Eq_668
  DataType: 
  OrigDataType: 
T_670: (in wArg04 : word16)
  Class: Eq_572
  DataType: word16
  OrigDataType: word16
T_671: (in wArg06 : word16)
  Class: Eq_568
  DataType: word16
  OrigDataType: word16
T_672: (in wArg08 : word16)
  Class: Eq_672
  DataType: word16
  OrigDataType: word16
T_673: (in wArg0A : word16)
  Class: Eq_673
  DataType: word16
  OrigDataType: word16
T_674: (in dxOut : ptr16)
  Class: Eq_674
  DataType: ptr16
  OrigDataType: ptr16
T_675: (in 0x0010 : word16)
  Class: Eq_675
  DataType: word16
  OrigDataType: word16
T_676: (in bp - 0x0010 : word16)
  Class: Eq_676
  DataType: word16
  OrigDataType: word16
T_677: (in Mem67[ss:bp - 0x0010:word16] : word16)
  Class: Eq_572
  DataType: word16
  OrigDataType: word16
T_678: (in 0x000E : word16)
  Class: Eq_678
  DataType: word16
  OrigDataType: word16
T_679: (in bp - 0x000E : word16)
  Class: Eq_679
  DataType: word16
  OrigDataType: word16
T_680: (in Mem67[ss:bp - 0x000E:word16] : word16)
  Class: Eq_568
  DataType: word16
  OrigDataType: word16
T_681: (in wLoc04 : word16)
  Class: Eq_672
  DataType: word16
  OrigDataType: word16
T_682: (in 0x0000 : word16)
  Class: Eq_673
  DataType: word16
  OrigDataType: word16
T_683: (in out dx_73 : ptr16)
  Class: Eq_674
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_684: (in fn0800_1DEB(Mem67[ss:bp - 0x0010:word16], Mem67[ss:bp - 0x000E:word16], wLoc04, 0x0000, out dx_73) : word16)
  Class: Eq_578
  DataType: word16
  OrigDataType: word16
T_685: (in 0x0012 : word16)
  Class: Eq_685
  DataType: word16
  OrigDataType: word16
T_686: (in bp - 0x0012 : word16)
  Class: Eq_686
  DataType: word16
  OrigDataType: word16
T_687: (in Mem76[ss:bp - 0x0012:word16] : word16)
  Class: Eq_620
  DataType: word16
  OrigDataType: word16
T_688: (in 0x0014 : word16)
  Class: Eq_688
  DataType: word16
  OrigDataType: word16
T_689: (in bp - 0x0014 : word16)
  Class: Eq_689
  DataType: word16
  OrigDataType: word16
T_690: (in Mem77[ss:bp - 0x0014:word16] : word16)
  Class: Eq_578
  DataType: word16
  OrigDataType: word16
T_691: (in ax_79 : word16)
  Class: Eq_572
  DataType: word16
  OrigDataType: word16
T_692: (in 0x0010 : word16)
  Class: Eq_692
  DataType: word16
  OrigDataType: word16
T_693: (in bp - 0x0010 : word16)
  Class: Eq_693
  DataType: word16
  OrigDataType: word16
T_694: (in Mem77[ss:bp - 0x0010:word16] : word16)
  Class: Eq_572
  DataType: word16
  OrigDataType: word16
T_695: (in 0x000E : word16)
  Class: Eq_695
  DataType: word16
  OrigDataType: word16
T_696: (in bp - 0x000E : word16)
  Class: Eq_696
  DataType: word16
  OrigDataType: word16
T_697: (in Mem77[ss:bp - 0x000E:word16] : word16)
  Class: Eq_568
  DataType: word16
  OrigDataType: word16
T_698: (in 0x000A : word16)
  Class: Eq_698
  DataType: word16
  OrigDataType: word16
T_699: (in bp - 0x000A : word16)
  Class: Eq_699
  DataType: word16
  OrigDataType: word16
T_700: (in Mem77[ss:bp - 0x000A:word16] : word16)
  Class: Eq_568
  DataType: word16
  OrigDataType: word16
T_701: (in Mem77[ss:bp - 0x000E:word16] != Mem77[ss:bp - 0x000A:word16] : bool)
  Class: Eq_701
  DataType: bool
  OrigDataType: bool
T_702: (in 0x0000 : word16)
  Class: Eq_604
  DataType: word16
  OrigDataType: word16
T_703: (in 0x000C : word16)
  Class: Eq_703
  DataType: word16
  OrigDataType: word16
T_704: (in bp - 0x000C : word16)
  Class: Eq_704
  DataType: word16
  OrigDataType: word16
T_705: (in Mem77[ss:bp - 0x000C:word16] : word16)
  Class: Eq_572
  DataType: word16
  OrigDataType: word16
T_706: (in ax_79 != Mem77[ss:bp - 0x000C:word16] : bool)
  Class: Eq_706
  DataType: bool
  OrigDataType: bool
T_707: (in 0x0001 : word16)
  Class: Eq_604
  DataType: word16
  OrigDataType: word16
T_708: (in ax_101 : word16)
  Class: Eq_708
  DataType: word16
  OrigDataType: word16
T_709: (in dx_ax_85 : int32)
  Class: Eq_709
  DataType: int32
  OrigDataType: int32
T_710: (in (int32) ax_159 : int32)
  Class: Eq_709
  DataType: int32
  OrigDataType: int32
T_711: (in SLICE(dx_ax_85, word16, 16) : word16)
  Class: Eq_620
  DataType: word16
  OrigDataType: word16
T_712: (in 0x0012 : word16)
  Class: Eq_712
  DataType: word16
  OrigDataType: word16
T_713: (in bp - 0x0012 : word16)
  Class: Eq_713
  DataType: word16
  OrigDataType: word16
T_714: (in Mem88[ss:bp - 0x0012:word16] : word16)
  Class: Eq_620
  DataType: word16
  OrigDataType: word16
T_715: (in (word16) dx_ax_85 : word16)
  Class: Eq_578
  DataType: word16
  OrigDataType: word16
T_716: (in 0x0014 : word16)
  Class: Eq_716
  DataType: word16
  OrigDataType: word16
T_717: (in bp - 0x0014 : word16)
  Class: Eq_717
  DataType: word16
  OrigDataType: word16
T_718: (in Mem89[ss:bp - 0x0014:word16] : word16)
  Class: Eq_578
  DataType: word16
  OrigDataType: word16
T_719: (in ax_92 : word16)
  Class: Eq_572
  DataType: word16
  OrigDataType: word16
T_720: (in 0x0014 : word16)
  Class: Eq_720
  DataType: word16
  OrigDataType: word16
T_721: (in bp - 0x0014 : word16)
  Class: Eq_721
  DataType: word16
  OrigDataType: word16
T_722: (in Mem89[ss:bp - 0x0014:word16] : word16)
  Class: Eq_578
  DataType: word16
  OrigDataType: word16
T_723: (in 0x000C : word16)
  Class: Eq_723
  DataType: word16
  OrigDataType: word16
T_724: (in bp - 0x000C : word16)
  Class: Eq_724
  DataType: word16
  OrigDataType: word16
T_725: (in Mem89[ss:bp - 0x000C:word16] : word16)
  Class: Eq_572
  DataType: word16
  OrigDataType: word16
T_726: (in Mem89[ss:bp - 0x0014:word16] | Mem89[ss:bp - 0x000C:word16] : word16)
  Class: Eq_572
  DataType: word16
  OrigDataType: word16
T_727: (in 0x0012 : word16)
  Class: Eq_727
  DataType: word16
  OrigDataType: word16
T_728: (in bp - 0x0012 : word16)
  Class: Eq_728
  DataType: word16
  OrigDataType: word16
T_729: (in Mem89[ss:bp - 0x0012:word16] : word16)
  Class: Eq_620
  DataType: word16
  OrigDataType: word16
T_730: (in 0x000A : word16)
  Class: Eq_730
  DataType: word16
  OrigDataType: word16
T_731: (in bp - 0x000A : word16)
  Class: Eq_731
  DataType: word16
  OrigDataType: word16
T_732: (in Mem89[ss:bp - 0x000A:word16] : word16)
  Class: Eq_568
  DataType: word16
  OrigDataType: word16
T_733: (in Mem89[ss:bp - 0x0012:word16] | Mem89[ss:bp - 0x000A:word16] : word16)
  Class: Eq_568
  DataType: word16
  OrigDataType: word16
T_734: (in 0x000E : word16)
  Class: Eq_734
  DataType: word16
  OrigDataType: word16
T_735: (in bp - 0x000E : word16)
  Class: Eq_735
  DataType: word16
  OrigDataType: word16
T_736: (in Mem94[ss:bp - 0x000E:word16] : word16)
  Class: Eq_568
  DataType: word16
  OrigDataType: word16
T_737: (in 0x0010 : word16)
  Class: Eq_737
  DataType: word16
  OrigDataType: word16
T_738: (in bp - 0x0010 : word16)
  Class: Eq_738
  DataType: word16
  OrigDataType: word16
T_739: (in Mem95[ss:bp - 0x0010:word16] : word16)
  Class: Eq_572
  DataType: word16
  OrigDataType: word16
T_740: (in 0x0010 : word16)
  Class: Eq_740
  DataType: word16
  OrigDataType: word16
T_741: (in bp - 0x0010 : word16)
  Class: Eq_741
  DataType: word16
  OrigDataType: word16
T_742: (in Mem95[ss:bp - 0x0010:word16] : word16)
  Class: Eq_572
  DataType: word16
  OrigDataType: word16
T_743: (in 0x000E : word16)
  Class: Eq_743
  DataType: word16
  OrigDataType: word16
T_744: (in bp - 0x000E : word16)
  Class: Eq_744
  DataType: word16
  OrigDataType: word16
T_745: (in Mem95[ss:bp - 0x000E:word16] : word16)
  Class: Eq_568
  DataType: word16
  OrigDataType: word16
T_746: (in Mem95[ss:bp - 0x0010:word16] | Mem95[ss:bp - 0x000E:word16] : word16)
  Class: Eq_746
  DataType: word16
  OrigDataType: word16
T_747: (in 0x0000 : word16)
  Class: Eq_746
  DataType: word16
  OrigDataType: word16
T_748: (in (Mem95[ss:bp - 0x0010:word16] | Mem95[ss:bp - 0x000E:word16]) != 0x0000 : bool)
  Class: Eq_748
  DataType: bool
  OrigDataType: bool
T_749: (in v15_168 : word16)
  Class: Eq_557
  DataType: cups16
  OrigDataType: cups16
T_750: (in 0x0008 : word16)
  Class: Eq_750
  DataType: word16
  OrigDataType: word16
T_751: (in bp - 0x0008 : word16)
  Class: Eq_751
  DataType: word16
  OrigDataType: word16
T_752: (in Mem23[ss:bp - 0x0008:word16] : word16)
  Class: Eq_557
  DataType: word16
  OrigDataType: word16
T_753: (in 0x0001 : word16)
  Class: Eq_753
  DataType: word16
  OrigDataType: word16
T_754: (in Mem23[ss:bp - 0x0008:word16] + 0x0001 : word16)
  Class: Eq_557
  DataType: word16
  OrigDataType: word16
T_755: (in 0x0008 : word16)
  Class: Eq_755
  DataType: word16
  OrigDataType: word16
T_756: (in bp - 0x0008 : word16)
  Class: Eq_756
  DataType: word16
  OrigDataType: word16
T_757: (in Mem169[ss:bp - 0x0008:word16] : word16)
  Class: Eq_557
  DataType: word16
  OrigDataType: word16
T_758: (in 0x0006 : word16)
  Class: Eq_758
  DataType: word16
  OrigDataType: word16
T_759: (in bp - 0x0006 : word16)
  Class: Eq_759
  DataType: word16
  OrigDataType: word16
T_760: (in Mem169[ss:bp - 0x0006:word16] : word16)
  Class: Eq_552
  DataType: word16
  OrigDataType: word16
T_761: (in 0x0000 : word16)
  Class: Eq_557
  DataType: cups16
  OrigDataType: cups16
T_762: (in v15_168 <u 0x0000 : bool)
  Class: Eq_762
  DataType: bool
  OrigDataType: bool
T_763: (in Mem169[ss:bp - 0x0006:word16] + (v15_168 <u 0x0000) : word16)
  Class: Eq_552
  DataType: word16
  OrigDataType: word16
T_764: (in 0x0006 : word16)
  Class: Eq_764
  DataType: word16
  OrigDataType: word16
T_765: (in bp - 0x0006 : word16)
  Class: Eq_765
  DataType: word16
  OrigDataType: word16
T_766: (in Mem173[ss:bp - 0x0006:word16] : word16)
  Class: Eq_552
  DataType: word16
  OrigDataType: word16
T_767: (in 0x000C : word16)
  Class: Eq_767
  DataType: word16
  OrigDataType: word16
T_768: (in bp - 0x000C : word16)
  Class: Eq_768
  DataType: word16
  OrigDataType: word16
T_769: (in Mem23[ss:bp - 0x000C:word16] : word16)
  Class: Eq_572
  DataType: cups16
  OrigDataType: cups16
T_770: (in 0x0028 : word16)
  Class: Eq_572
  DataType: cups16
  OrigDataType: cups16
T_771: (in Mem23[ss:bp - 0x000C:word16] >u 0x0028 : bool)
  Class: Eq_771
  DataType: bool
  OrigDataType: bool
T_772: (in 0x0000 : word16)
  Class: Eq_708
  DataType: word16
  OrigDataType: word16
T_773: (in 0x0001 : word16)
  Class: Eq_708
  DataType: word16
  OrigDataType: word16
T_774: (in ax_126 : word16)
  Class: Eq_774
  DataType: word16
  OrigDataType: word16
T_775: (in dx_ax_102 : int32)
  Class: Eq_775
  DataType: int32
  OrigDataType: int32
T_776: (in (int32) ax_101 : int32)
  Class: Eq_775
  DataType: int32
  OrigDataType: int32
T_777: (in SLICE(dx_ax_102, word16, 16) : word16)
  Class: Eq_620
  DataType: word16
  OrigDataType: word16
T_778: (in 0x0012 : word16)
  Class: Eq_778
  DataType: word16
  OrigDataType: word16
T_779: (in bp - 0x0012 : word16)
  Class: Eq_779
  DataType: word16
  OrigDataType: word16
T_780: (in Mem105[ss:bp - 0x0012:word16] : word16)
  Class: Eq_620
  DataType: word16
  OrigDataType: word16
T_781: (in (word16) dx_ax_102 : word16)
  Class: Eq_578
  DataType: word16
  OrigDataType: word16
T_782: (in 0x0014 : word16)
  Class: Eq_782
  DataType: word16
  OrigDataType: word16
T_783: (in bp - 0x0014 : word16)
  Class: Eq_783
  DataType: word16
  OrigDataType: word16
T_784: (in Mem106[ss:bp - 0x0014:word16] : word16)
  Class: Eq_578
  DataType: word16
  OrigDataType: word16
T_785: (in ax_109 : word16)
  Class: Eq_572
  DataType: cups16
  OrigDataType: cups16
T_786: (in 0x0014 : word16)
  Class: Eq_786
  DataType: word16
  OrigDataType: word16
T_787: (in bp - 0x0014 : word16)
  Class: Eq_787
  DataType: word16
  OrigDataType: word16
T_788: (in Mem106[ss:bp - 0x0014:word16] : word16)
  Class: Eq_578
  DataType: word16
  OrigDataType: word16
T_789: (in 0x000C : word16)
  Class: Eq_789
  DataType: word16
  OrigDataType: word16
T_790: (in bp - 0x000C : word16)
  Class: Eq_790
  DataType: word16
  OrigDataType: word16
T_791: (in Mem106[ss:bp - 0x000C:word16] : word16)
  Class: Eq_572
  DataType: word16
  OrigDataType: word16
T_792: (in Mem106[ss:bp - 0x0014:word16] + Mem106[ss:bp - 0x000C:word16] : word16)
  Class: Eq_572
  DataType: word16
  OrigDataType: word16
T_793: (in 0x0012 : word16)
  Class: Eq_793
  DataType: word16
  OrigDataType: word16
T_794: (in bp - 0x0012 : word16)
  Class: Eq_794
  DataType: word16
  OrigDataType: word16
T_795: (in Mem106[ss:bp - 0x0012:word16] : word16)
  Class: Eq_620
  DataType: word16
  OrigDataType: word16
T_796: (in 0x000A : word16)
  Class: Eq_796
  DataType: word16
  OrigDataType: word16
T_797: (in bp - 0x000A : word16)
  Class: Eq_797
  DataType: word16
  OrigDataType: word16
T_798: (in Mem106[ss:bp - 0x000A:word16] : word16)
  Class: Eq_568
  DataType: word16
  OrigDataType: word16
T_799: (in Mem106[ss:bp - 0x0012:word16] + Mem106[ss:bp - 0x000A:word16] : word16)
  Class: Eq_799
  DataType: word16
  OrigDataType: word16
T_800: (in 0x0000 : word16)
  Class: Eq_572
  DataType: cups16
  OrigDataType: cups16
T_801: (in ax_109 <u 0x0000 : bool)
  Class: Eq_801
  DataType: bool
  OrigDataType: bool
T_802: (in Mem106[ss:bp - 0x0012:word16] + Mem106[ss:bp - 0x000A:word16] + (ax_109 <u 0x0000) : word16)
  Class: Eq_568
  DataType: word16
  OrigDataType: word16
T_803: (in 0x000E : word16)
  Class: Eq_803
  DataType: word16
  OrigDataType: word16
T_804: (in bp - 0x000E : word16)
  Class: Eq_804
  DataType: word16
  OrigDataType: word16
T_805: (in Mem113[ss:bp - 0x000E:word16] : word16)
  Class: Eq_568
  DataType: word16
  OrigDataType: word16
T_806: (in 0x0010 : word16)
  Class: Eq_806
  DataType: word16
  OrigDataType: word16
T_807: (in bp - 0x0010 : word16)
  Class: Eq_807
  DataType: word16
  OrigDataType: word16
T_808: (in Mem114[ss:bp - 0x0010:word16] : word16)
  Class: Eq_572
  DataType: word16
  OrigDataType: word16
T_809: (in dx_115 : word16)
  Class: Eq_568
  DataType: int16
  OrigDataType: int16
T_810: (in 0x000E : word16)
  Class: Eq_810
  DataType: word16
  OrigDataType: word16
T_811: (in bp - 0x000E : word16)
  Class: Eq_811
  DataType: word16
  OrigDataType: word16
T_812: (in Mem114[ss:bp - 0x000E:word16] : word16)
  Class: Eq_568
  DataType: word16
  OrigDataType: word16
T_813: (in ax_116 : word16)
  Class: Eq_572
  DataType: cups16
  OrigDataType: cups16
T_814: (in 0x0010 : word16)
  Class: Eq_814
  DataType: word16
  OrigDataType: word16
T_815: (in bp - 0x0010 : word16)
  Class: Eq_815
  DataType: word16
  OrigDataType: word16
T_816: (in Mem114[ss:bp - 0x0010:word16] : word16)
  Class: Eq_572
  DataType: word16
  OrigDataType: word16
T_817: (in 0x000A : word16)
  Class: Eq_817
  DataType: word16
  OrigDataType: word16
T_818: (in bp - 0x000A : word16)
  Class: Eq_818
  DataType: word16
  OrigDataType: word16
T_819: (in Mem114[ss:bp - 0x000A:word16] : word16)
  Class: Eq_568
  DataType: int16
  OrigDataType: int16
T_820: (in dx_115 < Mem114[ss:bp - 0x000A:word16] : bool)
  Class: Eq_820
  DataType: bool
  OrigDataType: bool
T_821: (in 0x0000 : word16)
  Class: Eq_774
  DataType: word16
  OrigDataType: word16
T_822: (in bp - 0x000A : word16)
  Class: Eq_822
  DataType: word16
  OrigDataType: word16
T_823: (in Mem114[ss:bp - 0x000A:word16] : word16)
  Class: Eq_568
  DataType: int16
  OrigDataType: int16
T_824: (in dx_115 > Mem114[ss:bp - 0x000A:word16] : bool)
  Class: Eq_824
  DataType: bool
  OrigDataType: bool
T_825: (in 0x0001 : word16)
  Class: Eq_774
  DataType: word16
  OrigDataType: word16
T_826: (in 0x000C : word16)
  Class: Eq_826
  DataType: word16
  OrigDataType: word16
T_827: (in bp - 0x000C : word16)
  Class: Eq_827
  DataType: word16
  OrigDataType: word16
T_828: (in Mem114[ss:bp - 0x000C:word16] : word16)
  Class: Eq_572
  DataType: cups16
  OrigDataType: cups16
T_829: (in ax_116 <=u Mem114[ss:bp - 0x000C:word16] : bool)
  Class: Eq_829
  DataType: bool
  OrigDataType: bool
T_830: (in dx_ax_127 : int32)
  Class: Eq_830
  DataType: int32
  OrigDataType: int32
T_831: (in (int32) ax_126 : int32)
  Class: Eq_830
  DataType: int32
  OrigDataType: int32
T_832: (in SLICE(dx_ax_127, word16, 16) : word16)
  Class: Eq_620
  DataType: word16
  OrigDataType: word16
T_833: (in 0x0012 : word16)
  Class: Eq_833
  DataType: word16
  OrigDataType: word16
T_834: (in bp - 0x0012 : word16)
  Class: Eq_834
  DataType: word16
  OrigDataType: word16
T_835: (in Mem130[ss:bp - 0x0012:word16] : word16)
  Class: Eq_620
  DataType: word16
  OrigDataType: word16
T_836: (in (word16) dx_ax_127 : word16)
  Class: Eq_578
  DataType: word16
  OrigDataType: word16
T_837: (in 0x0014 : word16)
  Class: Eq_837
  DataType: word16
  OrigDataType: word16
T_838: (in bp - 0x0014 : word16)
  Class: Eq_838
  DataType: word16
  OrigDataType: word16
T_839: (in Mem131[ss:bp - 0x0014:word16] : word16)
  Class: Eq_578
  DataType: word16
  OrigDataType: word16
T_840: (in v17_132 : word16)
  Class: Eq_572
  DataType: cups16
  OrigDataType: cups16
T_841: (in 0x000C : word16)
  Class: Eq_841
  DataType: word16
  OrigDataType: word16
T_842: (in bp - 0x000C : word16)
  Class: Eq_842
  DataType: word16
  OrigDataType: word16
T_843: (in Mem131[ss:bp - 0x000C:word16] : word16)
  Class: Eq_572
  DataType: word16
  OrigDataType: word16
T_844: (in 0x0001 : word16)
  Class: Eq_844
  DataType: word16
  OrigDataType: word16
T_845: (in Mem131[ss:bp - 0x000C:word16] + 0x0001 : word16)
  Class: Eq_572
  DataType: word16
  OrigDataType: word16
T_846: (in 0x000C : word16)
  Class: Eq_846
  DataType: word16
  OrigDataType: word16
T_847: (in bp - 0x000C : word16)
  Class: Eq_847
  DataType: word16
  OrigDataType: word16
T_848: (in Mem133[ss:bp - 0x000C:word16] : word16)
  Class: Eq_572
  DataType: word16
  OrigDataType: word16
T_849: (in 0x000A : word16)
  Class: Eq_849
  DataType: word16
  OrigDataType: word16
T_850: (in bp - 0x000A : word16)
  Class: Eq_850
  DataType: word16
  OrigDataType: word16
T_851: (in Mem133[ss:bp - 0x000A:word16] : word16)
  Class: Eq_568
  DataType: word16
  OrigDataType: word16
T_852: (in 0x0000 : word16)
  Class: Eq_572
  DataType: cups16
  OrigDataType: cups16
T_853: (in v17_132 <u 0x0000 : bool)
  Class: Eq_853
  DataType: bool
  OrigDataType: bool
T_854: (in Mem133[ss:bp - 0x000A:word16] + (v17_132 <u 0x0000) : word16)
  Class: Eq_568
  DataType: word16
  OrigDataType: word16
T_855: (in 0x000A : word16)
  Class: Eq_855
  DataType: word16
  OrigDataType: word16
T_856: (in bp - 0x000A : word16)
  Class: Eq_856
  DataType: word16
  OrigDataType: word16
T_857: (in Mem137[ss:bp - 0x000A:word16] : word16)
  Class: Eq_568
  DataType: word16
  OrigDataType: word16
T_858: (in ax_21 : word16)
  Class: Eq_858
  DataType: word16
  OrigDataType: word16
T_859: (in 0x0226 : word16)
  Class: Eq_859
  DataType: (memptr T_307 (struct (0 T_860 t0000)))
  OrigDataType: (memptr T_307 (struct (0 T_860 t0000)))
T_860: (in Mem0[ds:0x0226:word16] : word16)
  Class: Eq_858
  DataType: word16
  OrigDataType: word16
T_861: (in v7_22 : word16)
  Class: Eq_858
  DataType: word16
  OrigDataType: word16
T_862: (in 0x0226 : word16)
  Class: Eq_862
  DataType: (memptr T_307 (struct (0 T_858 t0000)))
  OrigDataType: (memptr T_307 (struct (0 T_858 t0000)))
T_863: (in Mem0[ds:0x0226:word16] : word16)
  Class: Eq_858
  DataType: word16
  OrigDataType: word16
T_864: (in 0x0001 : word16)
  Class: Eq_864
  DataType: word16
  OrigDataType: word16
T_865: (in Mem0[ds:0x0226:word16] - 0x0001 : word16)
  Class: Eq_858
  DataType: word16
  OrigDataType: word16
T_866: (in Mem23[ds:0x0226:word16] : word16)
  Class: Eq_858
  DataType: word16
  OrigDataType: word16
T_867: (in al_25 : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_868: (in (byte) ax_21 : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_869: (in 0x0000 : word16)
  Class: Eq_858
  DataType: word16
  OrigDataType: word16
T_870: (in ax_21 != 0x0000 : bool)
  Class: Eq_870
  DataType: bool
  OrigDataType: bool
T_871: (in cs : selector)
  Class: Eq_871
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_872: (in 0x05D0 : word16)
  Class: Eq_872
  DataType: word16
  OrigDataType: word16
T_873: (in SEQ(ds, 0x05D0) : ptr32)
  Class: Eq_873
  DataType: ptr32
  OrigDataType: ptr32
T_874: (in 0x0226 : word16)
  Class: Eq_874
  DataType: (memptr T_307 (struct (0 T_875 t0000)))
  OrigDataType: (memptr T_307 (struct (0 T_875 t0000)))
T_875: (in Mem23[ds:0x0226:word16] : word16)
  Class: Eq_858
  DataType: ui16
  OrigDataType: ui16
T_876: (in 0x0002 : word16)
  Class: Eq_876
  DataType: ui16
  OrigDataType: ui16
T_877: (in Mem23[ds:0x0226:word16] * 0x0002 : word16)
  Class: Eq_877
  DataType: ui16
  OrigDataType: ui16
T_878: (in SEQ(ds, 0x05D0)[Mem23[ds:0x0226:word16] * 0x0002] : word16)
  Class: Eq_878
  DataType: word16
  OrigDataType: word16
T_879: (in SEQ(cs, SEQ(ds, 0x05D0)[Mem23[ds:0x0226:word16] * 0x0002]) : ptr32)
  Class: Eq_879
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_880: (in 0x021C : word16)
  Class: Eq_880
  DataType: (memptr T_307 (struct (0 T_881 t0000)))
  OrigDataType: (memptr T_307 (struct (0 T_881 t0000)))
T_881: (in Mem23[ds:0x021C:word16] : word16)
  Class: Eq_881
  DataType: word16
  OrigDataType: word16
T_882: (in SEQ(cs, Mem23[ds:0x021C:word16]) : ptr32)
  Class: Eq_882
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_883: (in 0x021E : word16)
  Class: Eq_883
  DataType: (memptr T_307 (struct (0 T_884 t0000)))
  OrigDataType: (memptr T_307 (struct (0 T_884 t0000)))
T_884: (in Mem23[ds:0x021E:word16] : word16)
  Class: Eq_884
  DataType: word16
  OrigDataType: word16
T_885: (in SEQ(cs, Mem23[ds:0x021E:word16]) : ptr32)
  Class: Eq_885
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_886: (in 0x0220 : word16)
  Class: Eq_886
  DataType: (memptr T_307 (struct (0 T_887 t0000)))
  OrigDataType: (memptr T_307 (struct (0 T_887 t0000)))
T_887: (in Mem23[ds:0x0220:word16] : word16)
  Class: Eq_887
  DataType: word16
  OrigDataType: word16
T_888: (in SEQ(cs, Mem23[ds:0x0220:word16]) : ptr32)
  Class: Eq_888
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_889: (in fn0800_0121 : ptr32)
  Class: Eq_323
  DataType: (ptr (fn T_891 (T_867, T_890)))
  OrigDataType: (ptr (fn T_891 (T_867, T_890)))
T_890: (in bLoc06 : byte)
  Class: Eq_326
  DataType: byte
  OrigDataType: byte
T_891: (in fn0800_0121(al_25, bLoc06) : void)
  Class: Eq_891
  DataType: void
  OrigDataType: void
T_892: (in si : word16)
  Class: Eq_892
  DataType: word16
  OrigDataType: word16
T_893: (in *dsOut : selector)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_894: (in di_110 : word16)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_895: (in es_231 : selector)
  Class: Eq_895
  DataType: 
  OrigDataType: 
T_896: (in wArg00 : word16)
  Class: Eq_896
  DataType: 
  OrigDataType: 
T_897: (in 0x03C4 : word16)
  Class: Eq_897
  DataType: 
  OrigDataType: 
T_898: (in Mem3[0x0800:0x03C4:word16] : word16)
  Class: Eq_896
  DataType: 
  OrigDataType: 
T_899: (in 0x03C6 : word16)
  Class: Eq_899
  DataType: 
  OrigDataType: 
T_900: (in Mem6[0x0800:0x03C6:word16] : word16)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_901: (in si_23 : word16)
  Class: Eq_901
  DataType: 
  OrigDataType: 
T_902: (in 0x008A : word16)
  Class: Eq_902
  DataType: 
  OrigDataType: 
T_903: (in Mem6[ds:0x008A:word16] : word16)
  Class: Eq_901
  DataType: 
  OrigDataType: 
T_904: (in es_8 : selector)
  Class: Eq_895
  DataType: 
  OrigDataType: 
T_905: (in 0x0090 : word16)
  Class: Eq_905
  DataType: 
  OrigDataType: 
T_906: (in Mem6[ds:0x0090:selector] : selector)
  Class: Eq_895
  DataType: 
  OrigDataType: 
T_907: (in ax_13 : word16)
  Class: Eq_907
  DataType: 
  OrigDataType: 
T_908: (in ax : word16)
  Class: Eq_908
  DataType: 
  OrigDataType: 
T_909: (in 0x0080 : word16)
  Class: Eq_909
  DataType: 
  OrigDataType: 
T_910: (in Mem6[ds:0x0080:byte] : byte)
  Class: Eq_910
  DataType: 
  OrigDataType: 
T_911: (in DPB(ax, Mem6[ds:0x0080:byte], 0, 8) : word16)
  Class: Eq_907
  DataType: 
  OrigDataType: 
T_912: (in si_103 : word16)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_913: (in 0x0002 : word16)
  Class: Eq_913
  DataType: 
  OrigDataType: 
T_914: (in si_23 + 0x0002 : word16)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_915: (in cx_25 : word16)
  Class: Eq_915
  DataType: 
  OrigDataType: 
T_916: (in 0x0001 : word16)
  Class: Eq_915
  DataType: 
  OrigDataType: 
T_917: (in 0x0092 : word16)
  Class: Eq_917
  DataType: 
  OrigDataType: 
T_918: (in Mem6[ds:0x0092:byte] : byte)
  Class: Eq_918
  DataType: 
  OrigDataType: 
T_919: (in 0x03 : byte)
  Class: Eq_918
  DataType: 
  OrigDataType: 
T_920: (in Mem6[ds:0x0092:byte] <u 0x03 : bool)
  Class: Eq_920
  DataType: 
  OrigDataType: 
T_921: (in fp : ptr16)
  Class: Eq_921
  DataType: 
  OrigDataType: 
T_922: (in 0x0002 : word16)
  Class: Eq_922
  DataType: 
  OrigDataType: 
T_923: (in ax_13 + 0x0002 : word16)
  Class: Eq_923
  DataType: 
  OrigDataType: 
T_924: (in ax_13 + 0x0002 + cx_25 : word16)
  Class: Eq_924
  DataType: 
  OrigDataType: 
T_925: (in 0xFFFE : word16)
  Class: Eq_925
  DataType: 
  OrigDataType: 
T_926: (in ax_13 + 0x0002 + cx_25 & 0xFFFE : word16)
  Class: Eq_926
  DataType: 
  OrigDataType: 
T_927: (in ax_13 + 0x0002 + cx_25 & 0xFFFE & 0xFFFE : word16)
  Class: Eq_927
  DataType: 
  OrigDataType: 
T_928: (in fp - (((ax_13 + 0x0002) + cx_25 & 0xFFFE) & 0xFFFE) : word16)
  Class: Eq_928
  DataType: 
  OrigDataType: 
T_929: (in 0x0001 : word16)
  Class: Eq_929
  DataType: 
  OrigDataType: 
T_930: (in fp - (((ax_13 + 0x0002) + cx_25 & 0xFFFE) & 0xFFFE) + 0x0001 : word16)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_931: (in 0x0000 : word16)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_932: (in di_110 <u 0x0000 : bool)
  Class: Eq_932
  DataType: 
  OrigDataType: 
T_933: (in 0x008C : word16)
  Class: Eq_933
  DataType: 
  OrigDataType: 
T_934: (in Mem6[ds:0x008C:selector] : selector)
  Class: Eq_895
  DataType: 
  OrigDataType: 
T_935: (in si_23 + 0x0002 : word16)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_936: (in cl_233 : byte)
  Class: Eq_936
  DataType: 
  OrigDataType: 
T_937: (in 0x7F : byte)
  Class: Eq_936
  DataType: 
  OrigDataType: 
T_938: (in cx_234 : word16)
  Class: Eq_938
  DataType: 
  OrigDataType: 
T_939: (in 0x007F : word16)
  Class: Eq_938
  DataType: 
  OrigDataType: 
T_940: (in 0x0000 : word16)
  Class: Eq_938
  DataType: 
  OrigDataType: 
T_941: (in cx_234 == 0x0000 : bool)
  Class: Eq_941
  DataType: 
  OrigDataType: 
T_942: (in 0x0001 : word16)
  Class: Eq_942
  DataType: 
  OrigDataType: 
T_943: (in cx_234 - 0x0001 : word16)
  Class: Eq_938
  DataType: 
  OrigDataType: 
T_944: (in 0x0001 : word16)
  Class: Eq_944
  DataType: 
  OrigDataType: 
T_945: (in di_110 + 0x0001 : word16)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_946: (in (byte) cx_234 : byte)
  Class: Eq_936
  DataType: 
  OrigDataType: 
T_947: (in 0x00 : byte)
  Class: Eq_947
  DataType: 
  OrigDataType: 
T_948: (in 0x0000 : word16)
  Class: Eq_948
  DataType: 
  OrigDataType: 
T_949: (in di_110 + 0x0000 : word16)
  Class: Eq_949
  DataType: 
  OrigDataType: 
T_950: (in Mem6[es_231:di_110 + 0x0000:byte] : byte)
  Class: Eq_947
  DataType: 
  OrigDataType: 
T_951: (in 0x00 != Mem6[es_231:di_110 + 0x0000:byte] : bool)
  Class: Eq_951
  DataType: 
  OrigDataType: 
T_952: (in 0x0000 : word16)
  Class: Eq_938
  DataType: 
  OrigDataType: 
T_953: (in cx_234 == 0x0000 : bool)
  Class: Eq_953
  DataType: 
  OrigDataType: 
T_954: (in 0x7F : byte)
  Class: Eq_954
  DataType: 
  OrigDataType: 
T_955: (in cl_233 ^ 0x7F : byte)
  Class: Eq_955
  DataType: 
  OrigDataType: 
T_956: (in DPB(cx_234, cl_233 ^ 0x7F, 0, 8) : word16)
  Class: Eq_915
  DataType: 
  OrigDataType: 
T_957: (in ss : selector)
  Class: Eq_957
  DataType: 
  OrigDataType: 
T_958: (in 0x0002 : word16)
  Class: Eq_958
  DataType: 
  OrigDataType: 
T_959: (in di_110 - 0x0002 : word16)
  Class: Eq_959
  DataType: 
  OrigDataType: 
T_960: (in Mem93[ss:di_110 - 0x0002:word16] : word16)
  Class: Eq_915
  DataType: 
  OrigDataType: 
T_961: (in cx_105 : word16)
  Class: Eq_961
  DataType: 
  OrigDataType: 
T_962: (in 0x0001 : word16)
  Class: Eq_962
  DataType: 
  OrigDataType: 
T_963: (in cx_25 - 0x0001 : word16)
  Class: Eq_963
  DataType: 
  OrigDataType: 
T_964: (in 0x0001 : word16)
  Class: Eq_964
  DataType: 
  OrigDataType: 
T_965: (in cx_25 - 0x0001 + 0x0001 : word16)
  Class: Eq_961
  DataType: 
  OrigDataType: 
T_966: (in di_104 : word16)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_967: (in 0x00 : byte)
  Class: Eq_967
  DataType: 
  OrigDataType: 
T_968: (in 0x0000 : word16)
  Class: Eq_968
  DataType: 
  OrigDataType: 
T_969: (in di_104 + 0x0000 : word16)
  Class: Eq_969
  DataType: 
  OrigDataType: 
T_970: (in Mem109[ss:di_104 + 0x0000:byte] : byte)
  Class: Eq_967
  DataType: 
  OrigDataType: 
T_971: (in 0x0000 : word16)
  Class: Eq_971
  DataType: 
  OrigDataType: 
T_972: (in di_104 + 0x0000 : word16)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_973: (in si_113 : word16)
  Class: Eq_973
  DataType: 
  OrigDataType: 
T_974: (in 0x0081 : word16)
  Class: Eq_973
  DataType: 
  OrigDataType: 
T_975: (in cx_115 : word16)
  Class: Eq_975
  DataType: 
  OrigDataType: 
T_976: (in 0x0001 : word16)
  Class: Eq_976
  DataType: 
  OrigDataType: 
T_977: (in ax_13 + 0x0001 : word16)
  Class: Eq_975
  DataType: 
  OrigDataType: 
T_978: (in ax_118 : word16)
  Class: Eq_961
  DataType: 
  OrigDataType: 
T_979: (in al_120 : byte)
  Class: Eq_979
  DataType: 
  OrigDataType: 
T_980: (in (byte) cx_105 : byte)
  Class: Eq_979
  DataType: 
  OrigDataType: 
T_981: (in dx_121 : word16)
  Class: Eq_961
  DataType: 
  OrigDataType: 
T_982: (in bx_122 : word16)
  Class: Eq_982
  DataType: 
  OrigDataType: 
T_983: (in 0x0000 : word16)
  Class: Eq_983
  DataType: 
  OrigDataType: 
T_984: (in cx_105 + 0x0000 : word16)
  Class: Eq_982
  DataType: 
  OrigDataType: 
T_985: (in 0x0000 : word16)
  Class: Eq_985
  DataType: 
  OrigDataType: 
T_986: (in si_103 + 0x0000 : word16)
  Class: Eq_986
  DataType: 
  OrigDataType: 
T_987: (in Mem93[es_231:si_103 + 0x0000:byte] : byte)
  Class: Eq_987
  DataType: 
  OrigDataType: 
T_988: (in 0x0000 : word16)
  Class: Eq_988
  DataType: 
  OrigDataType: 
T_989: (in di_104 + 0x0000 : word16)
  Class: Eq_989
  DataType: 
  OrigDataType: 
T_990: (in Mem102[ss:di_104 + 0x0000:byte] : byte)
  Class: Eq_987
  DataType: 
  OrigDataType: 
T_991: (in 0x0001 : word16)
  Class: Eq_991
  DataType: 
  OrigDataType: 
T_992: (in si_103 + 0x0001 : word16)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_993: (in 0x0001 : word16)
  Class: Eq_993
  DataType: 
  OrigDataType: 
T_994: (in di_104 + 0x0001 : word16)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_995: (in 0x0001 : word16)
  Class: Eq_995
  DataType: 
  OrigDataType: 
T_996: (in cx_105 - 0x0001 : word16)
  Class: Eq_961
  DataType: 
  OrigDataType: 
T_997: (in 0xFFFF : word16)
  Class: Eq_961
  DataType: 
  OrigDataType: 
T_998: (in cx_105 == 0xFFFF : bool)
  Class: Eq_998
  DataType: 
  OrigDataType: 
T_999: (in 0x20 : byte)
  Class: Eq_979
  DataType: 
  OrigDataType: 
T_1000: (in al_120 == 0x20 : bool)
  Class: Eq_1000
  DataType: 
  OrigDataType: 
T_1001: (in C_138 : byte)
  Class: Eq_1001
  DataType: 
  OrigDataType: 
T_1002: (in cx_187 : word16)
  Class: Eq_1002
  DataType: 
  OrigDataType: 
T_1003: (in di_110 - 0x0002 : word16)
  Class: Eq_1003
  DataType: 
  OrigDataType: 
T_1004: (in Mem109[ss:di_110 - 0x0002:word16] : word16)
  Class: Eq_1004
  DataType: 
  OrigDataType: 
T_1005: (in Mem109[ss:di_110 - 0x0002:word16] + dx_121 : word16)
  Class: Eq_1002
  DataType: 
  OrigDataType: 
T_1006: (in ds_189 : selector)
  Class: Eq_1006
  DataType: 
  OrigDataType: 
T_1007: (in 0x03C6 : word16)
  Class: Eq_1007
  DataType: 
  OrigDataType: 
T_1008: (in Mem109[0x0800:0x03C6:selector] : selector)
  Class: Eq_1006
  DataType: 
  OrigDataType: 
T_1009: (in *dsOut : selector)
  Class: Eq_1006
  DataType: 
  OrigDataType: 
T_1010: (in 0x0084 : word16)
  Class: Eq_1010
  DataType: 
  OrigDataType: 
T_1011: (in Mem190[ds_189:0x0084:word16] : word16)
  Class: Eq_982
  DataType: 
  OrigDataType: 
T_1012: (in bp_195 : word16)
  Class: Eq_1012
  DataType: 
  OrigDataType: 
T_1013: (in 0x0001 : word16)
  Class: Eq_1013
  DataType: 
  OrigDataType: 
T_1014: (in bx_122 + 0x0001 : word16)
  Class: Eq_1014
  DataType: 
  OrigDataType: 
T_1015: (in 0x0002 : word16)
  Class: Eq_1015
  DataType: 
  OrigDataType: 
T_1016: (in (bx_122 + 0x0001) * 0x0002 : word16)
  Class: Eq_1016
  DataType: 
  OrigDataType: 
T_1017: (in di_110 - (bx_122 + 0x0001) * 0x0002 : word16)
  Class: Eq_1012
  DataType: 
  OrigDataType: 
T_1018: (in 0x0000 : word16)
  Class: Eq_1012
  DataType: 
  OrigDataType: 
T_1019: (in bp_195 <u 0x0000 : bool)
  Class: Eq_1019
  DataType: 
  OrigDataType: 
T_1020: (in CZ_180 : byte)
  Class: Eq_1001
  DataType: 
  OrigDataType: 
T_1021: (in fn0800_0453 : ptr32)
  Class: Eq_1021
  DataType: 
  OrigDataType: 
T_1022: (in signature of fn0800_0453 : void)
  Class: Eq_1021
  DataType: 
  OrigDataType: 
T_1023: (in ax : word16)
  Class: Eq_961
  DataType: 
  OrigDataType: 
T_1024: (in cx : word16)
  Class: Eq_975
  DataType: 
  OrigDataType: 
T_1025: (in dx : word16)
  Class: Eq_961
  DataType: 
  OrigDataType: 
T_1026: (in bx : word16)
  Class: Eq_982
  DataType: 
  OrigDataType: 
T_1027: (in si : word16)
  Class: Eq_973
  DataType: 
  OrigDataType: 
T_1028: (in di : word16)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_1029: (in es : selector)
  Class: Eq_957
  DataType: 
  OrigDataType: 
T_1030: (in ds : selector)
  Class: Eq_895
  DataType: 
  OrigDataType: 
T_1031: (in axOut : ptr16)
  Class: Eq_1031
  DataType: 
  OrigDataType: 
T_1032: (in cxOut : ptr16)
  Class: Eq_1032
  DataType: 
  OrigDataType: 
T_1033: (in dxOut : ptr16)
  Class: Eq_1033
  DataType: 
  OrigDataType: 
T_1034: (in bxOut : ptr16)
  Class: Eq_1034
  DataType: 
  OrigDataType: 
T_1035: (in siOut : ptr16)
  Class: Eq_1035
  DataType: 
  OrigDataType: 
T_1036: (in diOut : ptr16)
  Class: Eq_1036
  DataType: 
  OrigDataType: 
T_1037: (in out ax_118 : ptr16)
  Class: Eq_1031
  DataType: 
  OrigDataType: 
T_1038: (in out cx_115 : ptr16)
  Class: Eq_1032
  DataType: 
  OrigDataType: 
T_1039: (in out dx_121 : ptr16)
  Class: Eq_1033
  DataType: 
  OrigDataType: 
T_1040: (in out bx_122 : ptr16)
  Class: Eq_1034
  DataType: 
  OrigDataType: 
T_1041: (in out si_113 : ptr16)
  Class: Eq_1035
  DataType: 
  OrigDataType: 
T_1042: (in out di_110 : ptr16)
  Class: Eq_1036
  DataType: 
  OrigDataType: 
T_1043: (in fn0800_0453(ax_118, cx_115, dx_121, bx_122, si_113, di_110, ss, es_8, out ax_118, out cx_115, out dx_121, out bx_122, out si_113, out di_110) : byte)
  Class: Eq_1001
  DataType: 
  OrigDataType: 
T_1044: (in 0x00 : byte)
  Class: Eq_979
  DataType: 
  OrigDataType: 
T_1045: (in 0x00 : byte)
  Class: Eq_1045
  DataType: 
  OrigDataType: 
T_1046: (in DPB(ax_118, 0x00, 0, 8) : word16)
  Class: Eq_961
  DataType: 
  OrigDataType: 
T_1047: (in 0x0D : byte)
  Class: Eq_979
  DataType: 
  OrigDataType: 
T_1048: (in al_120 == 0x0D : bool)
  Class: Eq_1048
  DataType: 
  OrigDataType: 
T_1049: (in 0x09 : byte)
  Class: Eq_979
  DataType: 
  OrigDataType: 
T_1050: (in al_120 != 0x09 : bool)
  Class: Eq_1050
  DataType: 
  OrigDataType: 
T_1051: (in CZ_137 : byte)
  Class: Eq_1001
  DataType: 
  OrigDataType: 
T_1052: (in fn0800_0453 : ptr32)
  Class: Eq_1021
  DataType: 
  OrigDataType: 
T_1053: (in out ax_118 : ptr16)
  Class: Eq_1031
  DataType: 
  OrigDataType: 
T_1054: (in out cx_115 : ptr16)
  Class: Eq_1032
  DataType: 
  OrigDataType: 
T_1055: (in out dx_121 : ptr16)
  Class: Eq_1033
  DataType: 
  OrigDataType: 
T_1056: (in out bx_122 : ptr16)
  Class: Eq_1034
  DataType: 
  OrigDataType: 
T_1057: (in out si_113 : ptr16)
  Class: Eq_1035
  DataType: 
  OrigDataType: 
T_1058: (in out di_110 : ptr16)
  Class: Eq_1036
  DataType: 
  OrigDataType: 
T_1059: (in fn0800_0453(ax_118, cx_115, dx_121, bx_122, si_113, di_110, ss, es_8, out ax_118, out cx_115, out dx_121, out bx_122, out si_113, out di_110) : byte)
  Class: Eq_1001
  DataType: 
  OrigDataType: 
T_1060: (in fn0800_01E2 : ptr32)
  Class: Eq_109
  DataType: 
  OrigDataType: 
T_1061: (in fn0800_01E2(si_103, di_110) : void)
  Class: Eq_1061
  DataType: 
  OrigDataType: 
T_1062: (in 0x0086 : word16)
  Class: Eq_1062
  DataType: 
  OrigDataType: 
T_1063: (in Mem199[ds_189:0x0086:word16] : word16)
  Class: Eq_1012
  DataType: 
  OrigDataType: 
T_1064: (in 0x0000 : word16)
  Class: Eq_1064
  DataType: 
  OrigDataType: 
T_1065: (in 0x0000 : word16)
  Class: Eq_1065
  DataType: 
  OrigDataType: 
T_1066: (in bp_195 + 0x0000 : word16)
  Class: Eq_1066
  DataType: 
  OrigDataType: 
T_1067: (in Mem214[ss:bp_195 + 0x0000:word16] : word16)
  Class: Eq_1064
  DataType: 
  OrigDataType: 
T_1068: (in 0x03C4 : word16)
  Class: Eq_1068
  DataType: 
  OrigDataType: 
T_1069: (in Mem214[0x0800:0x03C4:word16] : word16)
  Class: Eq_1069
  DataType: 
  OrigDataType: 
T_1070: (in 0x0000 : word16)
  Class: Eq_1070
  DataType: 
  OrigDataType: 
T_1071: (in bp_195 + 0x0000 : word16)
  Class: Eq_1071
  DataType: 
  OrigDataType: 
T_1072: (in Mem216[ss:bp_195 + 0x0000:word16] : word16)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_1073: (in 0x0002 : word16)
  Class: Eq_1073
  DataType: 
  OrigDataType: 
T_1074: (in bp_195 + 0x0002 : word16)
  Class: Eq_1012
  DataType: 
  OrigDataType: 
T_1075: (in al_221 : byte)
  Class: Eq_1075
  DataType: 
  OrigDataType: 
T_1076: (in 0x0000 : word16)
  Class: Eq_1076
  DataType: 
  OrigDataType: 
T_1077: (in si_103 + 0x0000 : word16)
  Class: Eq_1077
  DataType: 
  OrigDataType: 
T_1078: (in Mem216[ds_189:si_103 + 0x0000:byte] : byte)
  Class: Eq_1075
  DataType: 
  OrigDataType: 
T_1079: (in 0x0001 : word16)
  Class: Eq_1079
  DataType: 
  OrigDataType: 
T_1080: (in si_103 + 0x0001 : word16)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_1081: (in 0x0001 : word16)
  Class: Eq_1081
  DataType: 
  OrigDataType: 
T_1082: (in cx_187 - 0x0001 : word16)
  Class: Eq_1002
  DataType: 
  OrigDataType: 
T_1083: (in 0x00 : byte)
  Class: Eq_1075
  DataType: 
  OrigDataType: 
T_1084: (in al_221 != 0x00 : bool)
  Class: Eq_1084
  DataType: 
  OrigDataType: 
T_1085: (in 0x0000 : word16)
  Class: Eq_1002
  DataType: 
  OrigDataType: 
T_1086: (in cx_187 != 0x0000 : bool)
  Class: Eq_1086
  DataType: 
  OrigDataType: 
T_1087: (in al_221 != 0x00 && cx_187 != 0x0000 : bool)
  Class: Eq_1087
  DataType: 
  OrigDataType: 
T_1088: (in 0x00 : byte)
  Class: Eq_1075
  DataType: 
  OrigDataType: 
T_1089: (in al_221 == 0x00 : bool)
  Class: Eq_1089
  DataType: 
  OrigDataType: 
T_1090: (in 0x0000 : word16)
  Class: Eq_1002
  DataType: 
  OrigDataType: 
T_1091: (in cx_187 == 0x0000 : bool)
  Class: Eq_1091
  DataType: 
  OrigDataType: 
T_1092: (in CZ : byte)
  Class: Eq_1092
  DataType: 
  OrigDataType: 
T_1093: (in *dxOut : word16)
  Class: Eq_961
  DataType: 
  OrigDataType: 
T_1094: (in *diOut : word16)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_1095: (in *bxOut : word16)
  Class: Eq_982
  DataType: 
  OrigDataType: 
T_1096: (in *cxOut : word16)
  Class: Eq_975
  DataType: 
  OrigDataType: 
T_1097: (in *siOut : word16)
  Class: Eq_973
  DataType: 
  OrigDataType: 
T_1098: (in ax_15 : word16)
  Class: Eq_961
  DataType: 
  OrigDataType: 
T_1099: (in al_4 : byte)
  Class: Eq_1099
  DataType: 
  OrigDataType: 
T_1100: (in (byte) ax : byte)
  Class: Eq_1099
  DataType: 
  OrigDataType: 
T_1101: (in 0x0000 : word16)
  Class: Eq_961
  DataType: 
  OrigDataType: 
T_1102: (in ax == 0x0000 : bool)
  Class: Eq_1102
  DataType: 
  OrigDataType: 
T_1103: (in ax_21 : word16)
  Class: Eq_1103
  DataType: 
  OrigDataType: 
T_1104: (in 0x00 : byte)
  Class: Eq_1104
  DataType: 
  OrigDataType: 
T_1105: (in DPB(ax_15, 0x00, 0, 8) : word16)
  Class: Eq_1103
  DataType: 
  OrigDataType: 
T_1106: (in *axOut : word16)
  Class: Eq_1103
  DataType: 
  OrigDataType: 
T_1107: (in CZ_26 : byte)
  Class: Eq_1107
  DataType: 
  OrigDataType: 
T_1108: (in true : bool)
  Class: Eq_1107
  DataType: 
  OrigDataType: 
T_1109: (in 0x0000 : word16)
  Class: Eq_975
  DataType: 
  OrigDataType: 
T_1110: (in cx == 0x0000 : bool)
  Class: Eq_1110
  DataType: 
  OrigDataType: 
T_1111: (in 0x0000 : word16)
  Class: Eq_1111
  DataType: 
  OrigDataType: 
T_1112: (in di + 0x0000 : word16)
  Class: Eq_1112
  DataType: 
  OrigDataType: 
T_1113: (in Mem78[es:di + 0x0000:byte] : byte)
  Class: Eq_1099
  DataType: 
  OrigDataType: 
T_1114: (in dx_77 : word16)
  Class: Eq_1114
  DataType: 
  OrigDataType: 
T_1115: (in 0x0001 : word16)
  Class: Eq_1115
  DataType: 
  OrigDataType: 
T_1116: (in dx + 0x0001 : word16)
  Class: Eq_1116
  DataType: 
  OrigDataType: 
T_1117: (in *dxOut : word16)
  Class: Eq_1116
  DataType: 
  OrigDataType: 
T_1118: (in di_80 : word16)
  Class: Eq_1118
  DataType: 
  OrigDataType: 
T_1119: (in 0x0001 : word16)
  Class: Eq_1119
  DataType: 
  OrigDataType: 
T_1120: (in di + 0x0001 : word16)
  Class: Eq_1120
  DataType: 
  OrigDataType: 
T_1121: (in *diOut : word16)
  Class: Eq_1120
  DataType: 
  OrigDataType: 
T_1122: (in DPB(ax, al_4, 0, 8) : word16)
  Class: Eq_961
  DataType: 
  OrigDataType: 
T_1123: (in 0x00 : byte)
  Class: Eq_1099
  DataType: 
  OrigDataType: 
T_1124: (in al_4 != 0x00 : bool)
  Class: Eq_1124
  DataType: 
  OrigDataType: 
T_1125: (in bx_86 : word16)
  Class: Eq_1125
  DataType: 
  OrigDataType: 
T_1126: (in 0x0001 : word16)
  Class: Eq_1126
  DataType: 
  OrigDataType: 
T_1127: (in bx + 0x0001 : word16)
  Class: Eq_1127
  DataType: 
  OrigDataType: 
T_1128: (in *bxOut : word16)
  Class: Eq_1127
  DataType: 
  OrigDataType: 
T_1129: (in al_46 : byte)
  Class: Eq_1129
  DataType: 
  OrigDataType: 
T_1130: (in 0x0000 : word16)
  Class: Eq_1130
  DataType: 
  OrigDataType: 
T_1131: (in si + 0x0000 : word16)
  Class: Eq_1131
  DataType: 
  OrigDataType: 
T_1132: (in Mem0[ds:si + 0x0000:byte] : byte)
  Class: Eq_1129
  DataType: 
  OrigDataType: 
T_1133: (in si_47 : word16)
  Class: Eq_1133
  DataType: 
  OrigDataType: 
T_1134: (in 0x0001 : word16)
  Class: Eq_1134
  DataType: 
  OrigDataType: 
T_1135: (in si + 0x0001 : word16)
  Class: Eq_1133
  DataType: 
  OrigDataType: 
T_1136: (in *siOut : word16)
  Class: Eq_1133
  DataType: 
  OrigDataType: 
T_1137: (in cx_48 : word16)
  Class: Eq_1137
  DataType: 
  OrigDataType: 
T_1138: (in 0x0001 : word16)
  Class: Eq_1138
  DataType: 
  OrigDataType: 
T_1139: (in cx - 0x0001 : word16)
  Class: Eq_1137
  DataType: 
  OrigDataType: 
T_1140: (in *cxOut : word16)
  Class: Eq_1137
  DataType: 
  OrigDataType: 
T_1141: (in ax_50 : word16)
  Class: Eq_1141
  DataType: 
  OrigDataType: 
T_1142: (in 0x22 : byte)
  Class: Eq_1142
  DataType: 
  OrigDataType: 
T_1143: (in al_46 - 0x22 : byte)
  Class: Eq_1143
  DataType: 
  OrigDataType: 
T_1144: (in DPB(ax_21, al_46 - 0x22, 0, 8) : word16)
  Class: Eq_1141
  DataType: 
  OrigDataType: 
T_1145: (in *axOut : word16)
  Class: Eq_1141
  DataType: 
  OrigDataType: 
T_1146: (in al_46 - 0x22 : byte)
  Class: Eq_1146
  DataType: 
  OrigDataType: 
T_1147: (in cond(al_46 - 0x22) : byte)
  Class: Eq_1107
  DataType: 
  OrigDataType: 
T_1148: (in 0x22 : byte)
  Class: Eq_1129
  DataType: 
  OrigDataType: 
T_1149: (in al_46 == 0x22 : bool)
  Class: Eq_1149
  DataType: 
  OrigDataType: 
T_1150: (in ax_57 : word16)
  Class: Eq_1150
  DataType: 
  OrigDataType: 
T_1151: (in DPB(ax_50, al_46, 0, 8) : word16)
  Class: Eq_1150
  DataType: 
  OrigDataType: 
T_1152: (in *axOut : word16)
  Class: Eq_1150
  DataType: 
  OrigDataType: 
T_1153: (in 0x5C : byte)
  Class: Eq_1129
  DataType: 
  OrigDataType: 
T_1154: (in al_46 != 0x5C : bool)
  Class: Eq_1154
  DataType: 
  OrigDataType: 
T_1155: (in si_64 : word16)
  Class: Eq_1155
  DataType: 
  OrigDataType: 
T_1156: (in *siOut : word16)
  Class: Eq_1133
  DataType: 
  OrigDataType: 
T_1157: (in false : bool)
  Class: Eq_1107
  DataType: 
  OrigDataType: 
T_1158: (in si + 0x0001 : word16)
  Class: Eq_1158
  DataType: 
  OrigDataType: 
T_1159: (in Mem0[ds:si + 0x0001:byte] : byte)
  Class: Eq_1159
  DataType: 
  OrigDataType: 
T_1160: (in 0x22 : byte)
  Class: Eq_1159
  DataType: 
  OrigDataType: 
T_1161: (in Mem0[ds:si + 0x0001:byte] != 0x22 : bool)
  Class: Eq_1161
  DataType: 
  OrigDataType: 
T_1162: (in ax_73 : word16)
  Class: Eq_1162
  DataType: 
  OrigDataType: 
T_1163: (in si + 0x0001 : word16)
  Class: Eq_1163
  DataType: 
  OrigDataType: 
T_1164: (in Mem0[ds:si + 0x0001:byte] : byte)
  Class: Eq_1164
  DataType: 
  OrigDataType: 
T_1165: (in DPB(ax_57, Mem0[ds:si + 0x0001:byte], 0, 8) : word16)
  Class: Eq_1165
  DataType: 
  OrigDataType: 
T_1166: (in *axOut : word16)
  Class: Eq_1165
  DataType: 
  OrigDataType: 
T_1167: (in 0x0002 : word16)
  Class: Eq_1167
  DataType: 
  OrigDataType: 
T_1168: (in si + 0x0002 : word16)
  Class: Eq_1133
  DataType: 
  OrigDataType: 
T_1169: (in cx_75 : word16)
  Class: Eq_1169
  DataType: 
  OrigDataType: 
T_1170: (in 0x0002 : word16)
  Class: Eq_1170
  DataType: 
  OrigDataType: 
T_1171: (in cx - 0x0002 : word16)
  Class: Eq_1171
  DataType: 
  OrigDataType: 
T_1172: (in *cxOut : word16)
  Class: Eq_1171
  DataType: 
  OrigDataType: 
T_1173: (in bx : word16)
  Class: Eq_1173
  DataType: 
  OrigDataType: 
T_1174: (in cx_4 : word16)
  Class: Eq_1174
  DataType: 
  OrigDataType: 
T_1175: (in 0x008A : word16)
  Class: Eq_1175
  DataType: 
  OrigDataType: 
T_1176: (in Mem0[ds:0x008A:word16] : word16)
  Class: Eq_1174
  DataType: 
  OrigDataType: 
T_1177: (in bx_100 : word16)
  Class: Eq_1177
  DataType: 
  OrigDataType: 
T_1178: (in ax_8 : word16)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_1179: (in fn0800_0604 : ptr32)
  Class: Eq_1179
  DataType: 
  OrigDataType: 
T_1180: (in signature of fn0800_0604 : void)
  Class: Eq_1179
  DataType: 
  OrigDataType: 
T_1181: (in ds : selector)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_1182: (in wArg02 : word16)
  Class: Eq_1174
  DataType: 
  OrigDataType: 
T_1183: (in bxOut : ptr16)
  Class: Eq_1183
  DataType: 
  OrigDataType: 
T_1184: (in out bx_100 : ptr16)
  Class: Eq_1183
  DataType: 
  OrigDataType: 
T_1185: (in fn0800_0604(ds, cx_4, out bx_100) : word16)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_1186: (in cx_66 : word16)
  Class: Eq_1174
  DataType: 
  OrigDataType: 
T_1187: (in di_104 : word16)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_1188: (in *diOut : word16)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_1189: (in 0x0000 : word16)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_1190: (in ax_8 == 0x0000 : bool)
  Class: Eq_1190
  DataType: 
  OrigDataType: 
T_1191: (in ds_59 : selector)
  Class: Eq_1191
  DataType: 
  OrigDataType: 
T_1192: (in 0x008C : word16)
  Class: Eq_1192
  DataType: 
  OrigDataType: 
T_1193: (in Mem0[ds:0x008C:selector] : selector)
  Class: Eq_1191
  DataType: 
  OrigDataType: 
T_1194: (in 0x0000 : word16)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_1195: (in bx_79 : word16)
  Class: Eq_1195
  DataType: 
  OrigDataType: 
T_1196: (in ax_80 : word16)
  Class: Eq_1177
  DataType: 
  OrigDataType: 
T_1197: (in fn0800_0604 : ptr32)
  Class: Eq_1179
  DataType: 
  OrigDataType: 
T_1198: (in 0x008E : word16)
  Class: Eq_1198
  DataType: 
  OrigDataType: 
T_1199: (in Mem0[ds:0x008E:word16] : word16)
  Class: Eq_1174
  DataType: 
  OrigDataType: 
T_1200: (in out bx_79 : ptr16)
  Class: Eq_1183
  DataType: 
  OrigDataType: 
T_1201: (in fn0800_0604(ds, Mem0[ds:0x008E:word16], out bx_79) : word16)
  Class: Eq_1177
  DataType: 
  OrigDataType: 
T_1202: (in 0x0088 : word16)
  Class: Eq_1202
  DataType: 
  OrigDataType: 
T_1203: (in Mem85[ds:0x0088:word16] : word16)
  Class: Eq_1177
  DataType: 
  OrigDataType: 
T_1204: (in *diOut : word16)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_1205: (in 0x0000 : word16)
  Class: Eq_1177
  DataType: 
  OrigDataType: 
T_1206: (in ax_80 != 0x0000 : bool)
  Class: Eq_1206
  DataType: 
  OrigDataType: 
T_1207: (in 0x0000 : word16)
  Class: Eq_1207
  DataType: 
  OrigDataType: 
T_1208: (in si + 0x0000 : word16)
  Class: Eq_1208
  DataType: 
  OrigDataType: 
T_1209: (in Mem0[ds_59:si + 0x0000:byte] : byte)
  Class: Eq_1209
  DataType: 
  OrigDataType: 
T_1210: (in 0x0000 : word16)
  Class: Eq_1210
  DataType: 
  OrigDataType: 
T_1211: (in di_104 + 0x0000 : word16)
  Class: Eq_1211
  DataType: 
  OrigDataType: 
T_1212: (in Mem68[ds:di_104 + 0x0000:byte] : byte)
  Class: Eq_1209
  DataType: 
  OrigDataType: 
T_1213: (in 0x0001 : word16)
  Class: Eq_1213
  DataType: 
  OrigDataType: 
T_1214: (in si + 0x0001 : word16)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_1215: (in 0x0001 : word16)
  Class: Eq_1215
  DataType: 
  OrigDataType: 
T_1216: (in di_104 + 0x0001 : word16)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_1217: (in 0x0001 : word16)
  Class: Eq_1217
  DataType: 
  OrigDataType: 
T_1218: (in cx_66 - 0x0001 : word16)
  Class: Eq_1174
  DataType: 
  OrigDataType: 
T_1219: (in 0x0000 : word16)
  Class: Eq_1174
  DataType: 
  OrigDataType: 
T_1220: (in cx_66 == 0x0000 : bool)
  Class: Eq_1220
  DataType: 
  OrigDataType: 
T_1221: (in fn0800_01E2 : ptr32)
  Class: Eq_109
  DataType: 
  OrigDataType: 
T_1222: (in fn0800_01E2(si, di_104) : void)
  Class: Eq_1222
  DataType: 
  OrigDataType: 
T_1223: (in cx_105 : word16)
  Class: Eq_1223
  DataType: 
  OrigDataType: 
T_1224: (in 0xFFFF : word16)
  Class: Eq_1223
  DataType: 
  OrigDataType: 
T_1225: (in 0x0000 : word16)
  Class: Eq_1225
  DataType: 
  OrigDataType: 
T_1226: (in di_104 + 0x0000 : word16)
  Class: Eq_1226
  DataType: 
  OrigDataType: 
T_1227: (in Mem99[ds:di_104 + 0x0000:byte] : byte)
  Class: Eq_1227
  DataType: 
  OrigDataType: 
T_1228: (in 0x00 : byte)
  Class: Eq_1227
  DataType: 
  OrigDataType: 
T_1229: (in Mem99[ds:di_104 + 0x0000:byte] != 0x00 : bool)
  Class: Eq_1229
  DataType: 
  OrigDataType: 
T_1230: (in di_115 : word16)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_1231: (in 0x0001 : word16)
  Class: Eq_1231
  DataType: 
  OrigDataType: 
T_1232: (in di_115 + 0x0001 : word16)
  Class: Eq_1232
  DataType: 
  OrigDataType: 
T_1233: (in *diOut : word16)
  Class: Eq_1232
  DataType: 
  OrigDataType: 
T_1234: (in 0x0001 : word16)
  Class: Eq_1234
  DataType: 
  OrigDataType: 
T_1235: (in cx_105 - 0x0001 : word16)
  Class: Eq_1223
  DataType: 
  OrigDataType: 
T_1236: (in 0x00 : byte)
  Class: Eq_1236
  DataType: 
  OrigDataType: 
T_1237: (in 0x0000 : word16)
  Class: Eq_1237
  DataType: 
  OrigDataType: 
T_1238: (in di_115 + 0x0000 : word16)
  Class: Eq_1238
  DataType: 
  OrigDataType: 
T_1239: (in Mem99[ds:di_115 + 0x0000:byte] : byte)
  Class: Eq_1236
  DataType: 
  OrigDataType: 
T_1240: (in 0x00 != Mem99[ds:di_115 + 0x0000:byte] : bool)
  Class: Eq_1240
  DataType: 
  OrigDataType: 
T_1241: (in 0x0000 : word16)
  Class: Eq_1223
  DataType: 
  OrigDataType: 
T_1242: (in cx_105 == 0x0000 : bool)
  Class: Eq_1242
  DataType: 
  OrigDataType: 
T_1243: (in 0x0000 : word16)
  Class: Eq_1243
  DataType: 
  OrigDataType: 
T_1244: (in bx_100 + 0x0000 : word16)
  Class: Eq_1244
  DataType: 
  OrigDataType: 
T_1245: (in Mem99[ds:bx_100 + 0x0000:word16] : word16)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_1246: (in 0x0002 : word16)
  Class: Eq_1246
  DataType: 
  OrigDataType: 
T_1247: (in bx_100 + 0x0002 : word16)
  Class: Eq_1177
  DataType: 
  OrigDataType: 
T_1248: (in 0x0000 : word16)
  Class: Eq_1248
  DataType: 
  OrigDataType: 
T_1249: (in 0x0000 : word16)
  Class: Eq_1249
  DataType: 
  OrigDataType: 
T_1250: (in bx_100 + 0x0000 : word16)
  Class: Eq_1250
  DataType: 
  OrigDataType: 
T_1251: (in Mem110[ds:bx_100 + 0x0000:word16] : word16)
  Class: Eq_1248
  DataType: 
  OrigDataType: 
T_1252: (in bx : word16)
  Class: Eq_1252
  DataType: 
  OrigDataType: 
T_1253: (in ax_16 : word16)
  Class: Eq_1253
  DataType: 
  OrigDataType: 
T_1254: (in ds : selector)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_1255: (in wArg02 : word16)
  Class: Eq_1253
  DataType: 
  OrigDataType: 
T_1256: (in 0x0006 : word16)
  Class: Eq_1256
  DataType: 
  OrigDataType: 
T_1257: (in wArg02 + 0x0006 : word16)
  Class: Eq_1257
  DataType: 
  OrigDataType: 
T_1258: (in Mem0[ds:wArg02 + 0x0006:word16] : word16)
  Class: Eq_1253
  DataType: 
  OrigDataType: 
T_1259: (in 0x0612 : word16)
  Class: Eq_1259
  DataType: 
  OrigDataType: 
T_1260: (in Mem17[ds:0x0612:word16] : word16)
  Class: Eq_1253
  DataType: 
  OrigDataType: 
T_1261: (in ax_16 != wArg02 : bool)
  Class: Eq_1261
  DataType: 
  OrigDataType: 
T_1262: (in si_30 : word16)
  Class: Eq_1262
  DataType: 
  OrigDataType: 
T_1263: (in 0x0004 : word16)
  Class: Eq_1263
  DataType: 
  OrigDataType: 
T_1264: (in wArg02 + 0x0004 : word16)
  Class: Eq_1264
  DataType: 
  OrigDataType: 
T_1265: (in Mem17[ds:wArg02 + 0x0004:word16] : word16)
  Class: Eq_1262
  DataType: 
  OrigDataType: 
T_1266: (in 0x0612 : word16)
  Class: Eq_1266
  DataType: 
  OrigDataType: 
T_1267: (in Mem17[ds:0x0612:word16] : word16)
  Class: Eq_1252
  DataType: 
  OrigDataType: 
T_1268: (in 0x0004 : word16)
  Class: Eq_1268
  DataType: 
  OrigDataType: 
T_1269: (in bx + 0x0004 : word16)
  Class: Eq_1269
  DataType: 
  OrigDataType: 
T_1270: (in Mem32[ds:bx + 0x0004:word16] : word16)
  Class: Eq_1262
  DataType: 
  OrigDataType: 
T_1271: (in 0x0612 : word16)
  Class: Eq_1271
  DataType: 
  OrigDataType: 
T_1272: (in Mem32[ds:0x0612:word16] : word16)
  Class: Eq_1272
  DataType: 
  OrigDataType: 
T_1273: (in 0x0006 : word16)
  Class: Eq_1273
  DataType: 
  OrigDataType: 
T_1274: (in si_30 + 0x0006 : word16)
  Class: Eq_1274
  DataType: 
  OrigDataType: 
T_1275: (in Mem34[ds:si_30 + 0x0006:word16] : word16)
  Class: Eq_1272
  DataType: 
  OrigDataType: 
T_1276: (in 0x0000 : word16)
  Class: Eq_1276
  DataType: 
  OrigDataType: 
T_1277: (in 0x0612 : word16)
  Class: Eq_1277
  DataType: 
  OrigDataType: 
T_1278: (in Mem28[ds:0x0612:word16] : word16)
  Class: Eq_1276
  DataType: 
  OrigDataType: 
T_1279: (in ax : word16)
  Class: Eq_1279
  DataType: 
  OrigDataType: 
T_1280: (in ds : selector)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_1281: (in wArg02 : word16)
  Class: Eq_1281
  DataType: 
  OrigDataType: 
T_1282: (in 0x0000 : word16)
  Class: Eq_1282
  DataType: 
  OrigDataType: 
T_1283: (in wArg02 + 0x0000 : word16)
  Class: Eq_1283
  DataType: 
  OrigDataType: 
T_1284: (in Mem0[ds:wArg02 + 0x0000:word16] : word16)
  Class: Eq_1284
  DataType: 
  OrigDataType: 
T_1285: (in wArg04 : word16)
  Class: Eq_1285
  DataType: 
  OrigDataType: 
T_1286: (in Mem0[ds:wArg02 + 0x0000:word16] - wArg04 : word16)
  Class: Eq_1286
  DataType: 
  OrigDataType: 
T_1287: (in 0x0000 : word16)
  Class: Eq_1287
  DataType: 
  OrigDataType: 
T_1288: (in wArg02 + 0x0000 : word16)
  Class: Eq_1288
  DataType: 
  OrigDataType: 
T_1289: (in Mem19[ds:wArg02 + 0x0000:word16] : word16)
  Class: Eq_1286
  DataType: 
  OrigDataType: 
T_1290: (in si_21 : word16)
  Class: Eq_1290
  DataType: 
  OrigDataType: 
T_1291: (in 0x0000 : word16)
  Class: Eq_1291
  DataType: 
  OrigDataType: 
T_1292: (in wArg02 + 0x0000 : word16)
  Class: Eq_1292
  DataType: 
  OrigDataType: 
T_1293: (in Mem19[ds:wArg02 + 0x0000:word16] : word16)
  Class: Eq_1293
  DataType: 
  OrigDataType: 
T_1294: (in Mem19[ds:wArg02 + 0x0000:word16] + wArg02 : word16)
  Class: Eq_1290
  DataType: 
  OrigDataType: 
T_1295: (in 0x0001 : word16)
  Class: Eq_1295
  DataType: 
  OrigDataType: 
T_1296: (in wArg04 + 0x0001 : word16)
  Class: Eq_1296
  DataType: 
  OrigDataType: 
T_1297: (in 0x0000 : word16)
  Class: Eq_1297
  DataType: 
  OrigDataType: 
T_1298: (in si_21 + 0x0000 : word16)
  Class: Eq_1298
  DataType: 
  OrigDataType: 
T_1299: (in Mem24[ds:si_21 + 0x0000:word16] : word16)
  Class: Eq_1296
  DataType: 
  OrigDataType: 
T_1300: (in 0x0002 : word16)
  Class: Eq_1300
  DataType: 
  OrigDataType: 
T_1301: (in si_21 + 0x0002 : word16)
  Class: Eq_1301
  DataType: 
  OrigDataType: 
T_1302: (in Mem25[ds:si_21 + 0x0002:word16] : word16)
  Class: Eq_1281
  DataType: 
  OrigDataType: 
T_1303: (in 0x0610 : word16)
  Class: Eq_1303
  DataType: 
  OrigDataType: 
T_1304: (in Mem25[ds:0x0610:word16] : word16)
  Class: Eq_1281
  DataType: 
  OrigDataType: 
T_1305: (in Mem25[ds:0x0610:word16] != wArg02 : bool)
  Class: Eq_1305
  DataType: 
  OrigDataType: 
T_1306: (in si_21 + wArg04 : word16)
  Class: Eq_1306
  DataType: 
  OrigDataType: 
T_1307: (in 0x0002 : word16)
  Class: Eq_1307
  DataType: 
  OrigDataType: 
T_1308: (in si_21 + wArg04 + 0x0002 : word16)
  Class: Eq_1308
  DataType: 
  OrigDataType: 
T_1309: (in Mem43[ds:si_21 + wArg04 + 0x0002:word16] : word16)
  Class: Eq_1290
  DataType: 
  OrigDataType: 
T_1310: (in 0x0610 : word16)
  Class: Eq_1310
  DataType: 
  OrigDataType: 
T_1311: (in Mem39[ds:0x0610:word16] : word16)
  Class: Eq_1290
  DataType: 
  OrigDataType: 
T_1312: (in 0x0004 : word16)
  Class: Eq_1312
  DataType: 
  OrigDataType: 
T_1313: (in si_21 + 0x0004 : word16)
  Class: Eq_1313
  DataType: 
  OrigDataType: 
T_1314: (in ax : word16)
  Class: Eq_1314
  DataType: 
  OrigDataType: 
T_1315: (in ax_30 : word16)
  Class: Eq_1315
  DataType: 
  OrigDataType: 
T_1316: (in ax_21 : word16)
  Class: Eq_1316
  DataType: 
  OrigDataType: 
T_1317: (in fn0800_069B : ptr32)
  Class: Eq_1317
  DataType: 
  OrigDataType: 
T_1318: (in signature of fn0800_069B : void)
  Class: Eq_1317
  DataType: 
  OrigDataType: 
T_1319: (in ds : selector)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_1320: (in wArg02 : word16)
  Class: Eq_1320
  DataType: 
  OrigDataType: 
T_1321: (in wArg04 : word16)
  Class: Eq_1321
  DataType: 
  OrigDataType: 
T_1322: (in ds : selector)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_1323: (in wArg02 : word16)
  Class: Eq_1323
  DataType: 
  OrigDataType: 
T_1324: (in 0xFFFF : word16)
  Class: Eq_1324
  DataType: 
  OrigDataType: 
T_1325: (in wArg02 & 0xFFFF : word16)
  Class: Eq_1320
  DataType: 
  OrigDataType: 
T_1326: (in 0x0000 : word16)
  Class: Eq_1321
  DataType: 
  OrigDataType: 
T_1327: (in fn0800_069B(ds, wArg02 & 0xFFFF, 0x0000) : word16)
  Class: Eq_1316
  DataType: 
  OrigDataType: 
T_1328: (in 0xFFFF : word16)
  Class: Eq_1316
  DataType: 
  OrigDataType: 
T_1329: (in ax_21 != 0xFFFF : bool)
  Class: Eq_1329
  DataType: 
  OrigDataType: 
T_1330: (in 0x0610 : word16)
  Class: Eq_1330
  DataType: 
  OrigDataType: 
T_1331: (in Mem0[ds:0x0610:word16] : word16)
  Class: Eq_1331
  DataType: 
  OrigDataType: 
T_1332: (in 0x0002 : word16)
  Class: Eq_1332
  DataType: 
  OrigDataType: 
T_1333: (in ax_21 + 0x0002 : word16)
  Class: Eq_1333
  DataType: 
  OrigDataType: 
T_1334: (in Mem42[ds:ax_21 + 0x0002:word16] : word16)
  Class: Eq_1331
  DataType: 
  OrigDataType: 
T_1335: (in 0x0001 : word16)
  Class: Eq_1335
  DataType: 
  OrigDataType: 
T_1336: (in wArg02 + 0x0001 : word16)
  Class: Eq_1336
  DataType: 
  OrigDataType: 
T_1337: (in 0x0000 : word16)
  Class: Eq_1337
  DataType: 
  OrigDataType: 
T_1338: (in ax_21 + 0x0000 : word16)
  Class: Eq_1338
  DataType: 
  OrigDataType: 
T_1339: (in Mem45[ds:ax_21 + 0x0000:word16] : word16)
  Class: Eq_1336
  DataType: 
  OrigDataType: 
T_1340: (in 0x0610 : word16)
  Class: Eq_1340
  DataType: 
  OrigDataType: 
T_1341: (in Mem46[ds:0x0610:word16] : word16)
  Class: Eq_1316
  DataType: 
  OrigDataType: 
T_1342: (in 0x0610 : word16)
  Class: Eq_1342
  DataType: 
  OrigDataType: 
T_1343: (in Mem46[ds:0x0610:word16] : word16)
  Class: Eq_1343
  DataType: 
  OrigDataType: 
T_1344: (in 0x0004 : word16)
  Class: Eq_1344
  DataType: 
  OrigDataType: 
T_1345: (in Mem46[ds:0x0610:word16] + 0x0004 : word16)
  Class: Eq_1315
  DataType: 
  OrigDataType: 
T_1346: (in 0x0000 : word16)
  Class: Eq_1315
  DataType: 
  OrigDataType: 
T_1347: (in ax : word16)
  Class: Eq_1347
  DataType: 
  OrigDataType: 
T_1348: (in ax_30 : word16)
  Class: Eq_1348
  DataType: 
  OrigDataType: 
T_1349: (in ax_21 : word16)
  Class: Eq_1349
  DataType: 
  OrigDataType: 
T_1350: (in fn0800_069B : ptr32)
  Class: Eq_1317
  DataType: 
  OrigDataType: 
T_1351: (in ds : selector)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_1352: (in wArg02 : word16)
  Class: Eq_1352
  DataType: 
  OrigDataType: 
T_1353: (in 0xFFFF : word16)
  Class: Eq_1353
  DataType: 
  OrigDataType: 
T_1354: (in wArg02 & 0xFFFF : word16)
  Class: Eq_1320
  DataType: 
  OrigDataType: 
T_1355: (in 0x0000 : word16)
  Class: Eq_1321
  DataType: 
  OrigDataType: 
T_1356: (in fn0800_069B(ds, wArg02 & 0xFFFF, 0x0000) : word16)
  Class: Eq_1349
  DataType: 
  OrigDataType: 
T_1357: (in 0xFFFF : word16)
  Class: Eq_1349
  DataType: 
  OrigDataType: 
T_1358: (in ax_21 != 0xFFFF : bool)
  Class: Eq_1358
  DataType: 
  OrigDataType: 
T_1359: (in 0x0614 : word16)
  Class: Eq_1359
  DataType: 
  OrigDataType: 
T_1360: (in Mem40[ds:0x0614:word16] : word16)
  Class: Eq_1349
  DataType: 
  OrigDataType: 
T_1361: (in 0x0610 : word16)
  Class: Eq_1361
  DataType: 
  OrigDataType: 
T_1362: (in Mem41[ds:0x0610:word16] : word16)
  Class: Eq_1349
  DataType: 
  OrigDataType: 
T_1363: (in 0x0001 : word16)
  Class: Eq_1363
  DataType: 
  OrigDataType: 
T_1364: (in wArg02 + 0x0001 : word16)
  Class: Eq_1364
  DataType: 
  OrigDataType: 
T_1365: (in 0x0000 : word16)
  Class: Eq_1365
  DataType: 
  OrigDataType: 
T_1366: (in ax_21 + 0x0000 : word16)
  Class: Eq_1366
  DataType: 
  OrigDataType: 
T_1367: (in Mem44[ds:ax_21 + 0x0000:word16] : word16)
  Class: Eq_1364
  DataType: 
  OrigDataType: 
T_1368: (in 0x0004 : word16)
  Class: Eq_1368
  DataType: 
  OrigDataType: 
T_1369: (in ax_21 + 0x0004 : word16)
  Class: Eq_1348
  DataType: 
  OrigDataType: 
T_1370: (in 0x0000 : word16)
  Class: Eq_1348
  DataType: 
  OrigDataType: 
T_1371: (in ax : word16)
  Class: Eq_1371
  DataType: 
  OrigDataType: 
T_1372: (in bx : word16)
  Class: Eq_1372
  DataType: 
  OrigDataType: 
T_1373: (in *bxOut : word16)
  Class: Eq_1372
  DataType: 
  OrigDataType: 
T_1374: (in ax_111 : word16)
  Class: Eq_1374
  DataType: 
  OrigDataType: 
T_1375: (in wArg02 : word16)
  Class: Eq_1375
  DataType: 
  OrigDataType: 
T_1376: (in 0x0000 : word16)
  Class: Eq_1375
  DataType: 
  OrigDataType: 
T_1377: (in wArg02 == 0x0000 : bool)
  Class: Eq_1377
  DataType: 
  OrigDataType: 
T_1378: (in 0x0000 : word16)
  Class: Eq_1374
  DataType: 
  OrigDataType: 
T_1379: (in 0xFFF4 : word16)
  Class: Eq_1375
  DataType: 
  OrigDataType: 
T_1380: (in wArg02 <=u 0xFFF4 : bool)
  Class: Eq_1380
  DataType: 
  OrigDataType: 
T_1381: (in ax_52 : word16)
  Class: Eq_1381
  DataType: 
  OrigDataType: 
T_1382: (in 0x000B : word16)
  Class: Eq_1382
  DataType: 
  OrigDataType: 
T_1383: (in wArg02 + 0x000B : word16)
  Class: Eq_1383
  DataType: 
  OrigDataType: 
T_1384: (in 0xFFF8 : word16)
  Class: Eq_1384
  DataType: 
  OrigDataType: 
T_1385: (in wArg02 + 0x000B & 0xFFF8 : word16)
  Class: Eq_1381
  DataType: 
  OrigDataType: 
T_1386: (in 0x0614 : word16)
  Class: Eq_1386
  DataType: 
  OrigDataType: 
T_1387: (in Mem0[ds:0x0614:word16] : word16)
  Class: Eq_1387
  DataType: 
  OrigDataType: 
T_1388: (in 0x0000 : word16)
  Class: Eq_1387
  DataType: 
  OrigDataType: 
T_1389: (in Mem0[ds:0x0614:word16] != 0x0000 : bool)
  Class: Eq_1389
  DataType: 
  OrigDataType: 
T_1390: (in si_113 : word16)
  Class: Eq_1390
  DataType: 
  OrigDataType: 
T_1391: (in 0x0612 : word16)
  Class: Eq_1391
  DataType: 
  OrigDataType: 
T_1392: (in Mem0[ds:0x0612:word16] : word16)
  Class: Eq_1390
  DataType: 
  OrigDataType: 
T_1393: (in 0x0000 : word16)
  Class: Eq_1390
  DataType: 
  OrigDataType: 
T_1394: (in si_113 == 0x0000 : bool)
  Class: Eq_1394
  DataType: 
  OrigDataType: 
T_1395: (in fn0800_05CA : ptr32)
  Class: Eq_1395
  DataType: 
  OrigDataType: 
T_1396: (in signature of fn0800_05CA : void)
  Class: Eq_1395
  DataType: 
  OrigDataType: 
T_1397: (in wArg02 : word16)
  Class: Eq_1381
  DataType: 
  OrigDataType: 
T_1398: (in fn0800_05CA(ds, ax_52) : word16)
  Class: Eq_1374
  DataType: 
  OrigDataType: 
T_1399: (in fn0800_058D : ptr32)
  Class: Eq_1399
  DataType: 
  OrigDataType: 
T_1400: (in signature of fn0800_058D : void)
  Class: Eq_1399
  DataType: 
  OrigDataType: 
T_1401: (in wArg02 : word16)
  Class: Eq_1381
  DataType: 
  OrigDataType: 
T_1402: (in fn0800_058D(ds, ax_52) : word16)
  Class: Eq_1402
  DataType: 
  OrigDataType: 
T_1403: (in fn0800_058D : ptr32)
  Class: Eq_1399
  DataType: 
  OrigDataType: 
T_1404: (in fn0800_058D(ds, ax_52) : word16)
  Class: Eq_1374
  DataType: 
  OrigDataType: 
T_1405: (in 0x0000 : word16)
  Class: Eq_1405
  DataType: 
  OrigDataType: 
T_1406: (in si_113 + 0x0000 : word16)
  Class: Eq_1406
  DataType: 
  OrigDataType: 
T_1407: (in Mem0[ds:si_113 + 0x0000:word16] : word16)
  Class: Eq_1407
  DataType: 
  OrigDataType: 
T_1408: (in 0x0028 : word16)
  Class: Eq_1408
  DataType: 
  OrigDataType: 
T_1409: (in ax_52 + 0x0028 : word16)
  Class: Eq_1407
  DataType: 
  OrigDataType: 
T_1410: (in Mem0[ds:si_113 + 0x0000:word16] <u ax_52 + 0x0028 : bool)
  Class: Eq_1410
  DataType: 
  OrigDataType: 
T_1411: (in 0x0000 : word16)
  Class: Eq_1411
  DataType: 
  OrigDataType: 
T_1412: (in si_113 + 0x0000 : word16)
  Class: Eq_1412
  DataType: 
  OrigDataType: 
T_1413: (in Mem0[ds:si_113 + 0x0000:word16] : word16)
  Class: Eq_1381
  DataType: 
  OrigDataType: 
T_1414: (in Mem0[ds:si_113 + 0x0000:word16] <u ax_52 : bool)
  Class: Eq_1414
  DataType: 
  OrigDataType: 
T_1415: (in fn0800_0553 : ptr32)
  Class: Eq_1415
  DataType: 
  OrigDataType: 
T_1416: (in signature of fn0800_0553 : void)
  Class: Eq_1415
  DataType: 
  OrigDataType: 
T_1417: (in wArg02 : word16)
  Class: Eq_1390
  DataType: 
  OrigDataType: 
T_1418: (in wArg04 : word16)
  Class: Eq_1381
  DataType: 
  OrigDataType: 
T_1419: (in fn0800_0553(ds, si_113, ax_52) : word16)
  Class: Eq_1374
  DataType: 
  OrigDataType: 
T_1420: (in 0x0006 : word16)
  Class: Eq_1420
  DataType: 
  OrigDataType: 
T_1421: (in si_113 + 0x0006 : word16)
  Class: Eq_1421
  DataType: 
  OrigDataType: 
T_1422: (in Mem0[ds:si_113 + 0x0006:word16] : word16)
  Class: Eq_1390
  DataType: 
  OrigDataType: 
T_1423: (in 0x0612 : word16)
  Class: Eq_1423
  DataType: 
  OrigDataType: 
T_1424: (in Mem0[ds:0x0612:word16] : word16)
  Class: Eq_1390
  DataType: 
  OrigDataType: 
T_1425: (in si_113 != Mem0[ds:0x0612:word16] : bool)
  Class: Eq_1425
  DataType: 
  OrigDataType: 
T_1426: (in bx_105 : word16)
  Class: Eq_1426
  DataType: 
  OrigDataType: 
T_1427: (in fn0800_0525 : ptr32)
  Class: Eq_1427
  DataType: 
  OrigDataType: 
T_1428: (in signature of fn0800_0525 : void)
  Class: Eq_1427
  DataType: 
  OrigDataType: 
T_1429: (in wArg02 : word16)
  Class: Eq_1390
  DataType: 
  OrigDataType: 
T_1430: (in fn0800_0525(ds, si_113) : word16)
  Class: Eq_1430
  DataType: 
  OrigDataType: 
T_1431: (in *bxOut : word16)
  Class: Eq_1430
  DataType: 
  OrigDataType: 
T_1432: (in 0x0000 : word16)
  Class: Eq_1432
  DataType: 
  OrigDataType: 
T_1433: (in si_113 + 0x0000 : word16)
  Class: Eq_1433
  DataType: 
  OrigDataType: 
T_1434: (in Mem0[ds:si_113 + 0x0000:word16] : word16)
  Class: Eq_1434
  DataType: 
  OrigDataType: 
T_1435: (in 0x0001 : word16)
  Class: Eq_1435
  DataType: 
  OrigDataType: 
T_1436: (in Mem0[ds:si_113 + 0x0000:word16] + 0x0001 : word16)
  Class: Eq_1436
  DataType: 
  OrigDataType: 
T_1437: (in 0x0000 : word16)
  Class: Eq_1437
  DataType: 
  OrigDataType: 
T_1438: (in si_113 + 0x0000 : word16)
  Class: Eq_1438
  DataType: 
  OrigDataType: 
T_1439: (in Mem109[ds:si_113 + 0x0000:word16] : word16)
  Class: Eq_1436
  DataType: 
  OrigDataType: 
T_1440: (in 0x0004 : word16)
  Class: Eq_1440
  DataType: 
  OrigDataType: 
T_1441: (in si_113 + 0x0004 : word16)
  Class: Eq_1374
  DataType: 
  OrigDataType: 
T_1442: (in ax : word16)
  Class: Eq_1442
  DataType: 
  OrigDataType: 
T_1443: (in ax_31 : word16)
  Class: Eq_1443
  DataType: 
  OrigDataType: 
T_1444: (in ax_12 : word16)
  Class: Eq_1444
  DataType: 
  OrigDataType: 
T_1445: (in wArg02 : word16)
  Class: Eq_1445
  DataType: 
  OrigDataType: 
T_1446: (in 0x009E : word16)
  Class: Eq_1446
  DataType: 
  OrigDataType: 
T_1447: (in Mem0[ds:0x009E:word16] : word16)
  Class: Eq_1447
  DataType: 
  OrigDataType: 
T_1448: (in wArg02 + Mem0[ds:0x009E:word16] : word16)
  Class: Eq_1444
  DataType: 
  OrigDataType: 
T_1449: (in dx_cx_18 : ui32)
  Class: Eq_1449
  DataType: 
  OrigDataType: 
T_1450: (in wArg04 : word16)
  Class: Eq_1450
  DataType: 
  OrigDataType: 
T_1451: (in 0x0000 : word16)
  Class: Eq_1444
  DataType: 
  OrigDataType: 
T_1452: (in ax_12 <u 0x0000 : bool)
  Class: Eq_1452
  DataType: 
  OrigDataType: 
T_1453: (in wArg04 + (ax_12 <u 0x0000) : word16)
  Class: Eq_1453
  DataType: 
  OrigDataType: 
T_1454: (in 0x0100 : word16)
  Class: Eq_1454
  DataType: 
  OrigDataType: 
T_1455: (in ax_12 + 0x0100 : word16)
  Class: Eq_1455
  DataType: 
  OrigDataType: 
T_1456: (in SEQ(wArg04 + (ax_12 <u 0x0000), ax_12 + 0x0100) : ui32)
  Class: Eq_1449
  DataType: 
  OrigDataType: 
T_1457: (in cx_22 : word16)
  Class: Eq_1457
  DataType: 
  OrigDataType: 
T_1458: (in 0x00000100 : ui32)
  Class: Eq_1458
  DataType: 
  OrigDataType: 
T_1459: (in dx_cx_18 + 0x00000100 : ui32)
  Class: Eq_1459
  DataType: 
  OrigDataType: 
T_1460: (in (word16) (dx_cx_18 + 0x00000100) : word16)
  Class: Eq_1457
  DataType: 
  OrigDataType: 
T_1461: (in dx_cx_18 + 0x00000100 : ui32)
  Class: Eq_1461
  DataType: 
  OrigDataType: 
T_1462: (in SLICE(dx_cx_18 + 0x00000100, word16, 16) : word16)
  Class: Eq_1462
  DataType: 
  OrigDataType: 
T_1463: (in SEQ(SLICE(dx_cx_18 + 0x00000100, word16, 16), cx_22) : ui32)
  Class: Eq_1463
  DataType: 
  OrigDataType: 
T_1464: (in 0x00000000 : ui32)
  Class: Eq_1463
  DataType: 
  OrigDataType: 
T_1465: (in SEQ(SLICE(dx_cx_18 + 0x00000100, word16, 16), cx_22) != 0x00000000 : bool)
  Class: Eq_1465
  DataType: 
  OrigDataType: 
T_1466: (in 0x0008 : word16)
  Class: Eq_1466
  DataType: 
  OrigDataType: 
T_1467: (in 0x0094 : word16)
  Class: Eq_1467
  DataType: 
  OrigDataType: 
T_1468: (in Mem37[ds:0x0094:word16] : word16)
  Class: Eq_1466
  DataType: 
  OrigDataType: 
T_1469: (in 0xFFFF : word16)
  Class: Eq_1443
  DataType: 
  OrigDataType: 
T_1470: (in fp : ptr16)
  Class: Eq_1470
  DataType: 
  OrigDataType: 
T_1471: (in 0x0002 : word16)
  Class: Eq_1471
  DataType: 
  OrigDataType: 
T_1472: (in fp - 0x0002 : word16)
  Class: Eq_1457
  DataType: 
  OrigDataType: 
T_1473: (in cx_22 >=u fp - 0x0002 : bool)
  Class: Eq_1473
  DataType: 
  OrigDataType: 
T_1474: (in v13_42 : word16)
  Class: Eq_1443
  DataType: 
  OrigDataType: 
T_1475: (in 0x009E : word16)
  Class: Eq_1475
  DataType: 
  OrigDataType: 
T_1476: (in Mem0[ds:0x009E:word16] : word16)
  Class: Eq_1443
  DataType: 
  OrigDataType: 
T_1477: (in Mem43[ds:0x009E:word16] : word16)
  Class: Eq_1444
  DataType: 
  OrigDataType: 
T_1478: (in ax : word16)
  Class: Eq_1478
  DataType: 
  OrigDataType: 
T_1479: (in bx_19 : word16)
  Class: Eq_1479
  DataType: 
  OrigDataType: 
T_1480: (in si_20 : word16)
  Class: Eq_1480
  DataType: 
  OrigDataType: 
T_1481: (in di_21 : word16)
  Class: Eq_1481
  DataType: 
  OrigDataType: 
T_1482: (in ax_22 : word16)
  Class: Eq_1482
  DataType: 
  OrigDataType: 
T_1483: (in fn0800_1107 : ptr32)
  Class: Eq_1483
  DataType: 
  OrigDataType: 
T_1484: (in signature of fn0800_1107 : void)
  Class: Eq_1483
  DataType: 
  OrigDataType: 
T_1485: (in ds : selector)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_1486: (in wArg04 : word16)
  Class: Eq_1486
  DataType: 
  OrigDataType: 
T_1487: (in bxOut : ptr16)
  Class: Eq_1487
  DataType: 
  OrigDataType: 
T_1488: (in siOut : ptr16)
  Class: Eq_1488
  DataType: 
  OrigDataType: 
T_1489: (in diOut : ptr16)
  Class: Eq_1489
  DataType: 
  OrigDataType: 
T_1490: (in wArg02 : word16)
  Class: Eq_1486
  DataType: 
  OrigDataType: 
T_1491: (in out bx_19 : ptr16)
  Class: Eq_1487
  DataType: 
  OrigDataType: 
T_1492: (in out si_20 : ptr16)
  Class: Eq_1488
  DataType: 
  OrigDataType: 
T_1493: (in out di_21 : ptr16)
  Class: Eq_1489
  DataType: 
  OrigDataType: 
T_1494: (in fn0800_1107(ds, wArg02, out bx_19, out si_20, out di_21) : word16)
  Class: Eq_1482
  DataType: 
  OrigDataType: 
T_1495: (in ax : word16)
  Class: Eq_1495
  DataType: 
  OrigDataType: 
T_1496: (in bx : word16)
  Class: Eq_1496
  DataType: 
  OrigDataType: 
T_1497: (in *bxOut : word16)
  Class: Eq_1496
  DataType: 
  OrigDataType: 
T_1498: (in bLoc57_115 : byte)
  Class: Eq_1498
  DataType: 
  OrigDataType: 
T_1499: (in 0x50 : byte)
  Class: Eq_1498
  DataType: 
  OrigDataType: 
T_1500: (in sp_158 : word16)
  Class: Eq_1500
  DataType: 
  OrigDataType: 
T_1501: (in fp : ptr16)
  Class: Eq_1501
  DataType: 
  OrigDataType: 
T_1502: (in 0x00A0 : word16)
  Class: Eq_1502
  DataType: 
  OrigDataType: 
T_1503: (in fp - 0x00A0 : word16)
  Class: Eq_1500
  DataType: 
  OrigDataType: 
T_1504: (in di_113 : word16)
  Class: Eq_1504
  DataType: 
  OrigDataType: 
T_1505: (in 0x0056 : word16)
  Class: Eq_1505
  DataType: 
  OrigDataType: 
T_1506: (in fp - 0x0056 : word16)
  Class: Eq_1504
  DataType: 
  OrigDataType: 
T_1507: (in si_111 : word16)
  Class: Eq_1507
  DataType: 
  OrigDataType: 
T_1508: (in wArg04 : word16)
  Class: Eq_1507
  DataType: 
  OrigDataType: 
T_1509: (in al_40 : byte)
  Class: Eq_1509
  DataType: 
  OrigDataType: 
T_1510: (in 0x25 : byte)
  Class: Eq_1509
  DataType: 
  OrigDataType: 
T_1511: (in al_40 == 0x25 : bool)
  Class: Eq_1511
  DataType: 
  OrigDataType: 
T_1512: (in 0x0000 : word16)
  Class: Eq_1512
  DataType: 
  OrigDataType: 
T_1513: (in si_111 + 0x0000 : word16)
  Class: Eq_1513
  DataType: 
  OrigDataType: 
T_1514: (in Mem0[ds:si_111 + 0x0000:byte] : byte)
  Class: Eq_1509
  DataType: 
  OrigDataType: 
T_1515: (in al_110 : byte)
  Class: Eq_1509
  DataType: 
  OrigDataType: 
T_1516: (in DPB(ax, al_110, 0, 8) : word16)
  Class: Eq_1495
  DataType: 
  OrigDataType: 
T_1517: (in 0x0001 : word16)
  Class: Eq_1517
  DataType: 
  OrigDataType: 
T_1518: (in si_111 + 0x0001 : word16)
  Class: Eq_1507
  DataType: 
  OrigDataType: 
T_1519: (in 0x25 : byte)
  Class: Eq_1509
  DataType: 
  OrigDataType: 
T_1520: (in al_110 == 0x25 : bool)
  Class: Eq_1520
  DataType: 
  OrigDataType: 
T_1521: (in 0x0000 : word16)
  Class: Eq_1521
  DataType: 
  OrigDataType: 
T_1522: (in di_113 + 0x0000 : word16)
  Class: Eq_1522
  DataType: 
  OrigDataType: 
T_1523: (in Mem112[ds:di_113 + 0x0000:byte] : byte)
  Class: Eq_1509
  DataType: 
  OrigDataType: 
T_1524: (in v15_114 : byte)
  Class: Eq_1498
  DataType: 
  OrigDataType: 
T_1525: (in 0x01 : byte)
  Class: Eq_1525
  DataType: 
  OrigDataType: 
T_1526: (in bLoc57_115 - 0x01 : byte)
  Class: Eq_1498
  DataType: 
  OrigDataType: 
T_1527: (in 0x0001 : word16)
  Class: Eq_1527
  DataType: 
  OrigDataType: 
T_1528: (in di_113 + 0x0001 : word16)
  Class: Eq_1504
  DataType: 
  OrigDataType: 
T_1529: (in 0x00 : byte)
  Class: Eq_1498
  DataType: 
  OrigDataType: 
T_1530: (in v15_114 > 0x00 : bool)
  Class: Eq_1530
  DataType: 
  OrigDataType: 
T_1531: (in 0x0000 : word16)
  Class: Eq_1531
  DataType: 
  OrigDataType: 
T_1532: (in si_111 + 0x0000 : word16)
  Class: Eq_1532
  DataType: 
  OrigDataType: 
T_1533: (in Mem0[ds:si_111 + 0x0000:byte] : byte)
  Class: Eq_1509
  DataType: 
  OrigDataType: 
T_1534: (in 0x0001 : word16)
  Class: Eq_1534
  DataType: 
  OrigDataType: 
T_1535: (in si_111 + 0x0001 : word16)
  Class: Eq_1507
  DataType: 
  OrigDataType: 
T_1536: (in DPB(ax, al_40, 0, 8) : word16)
  Class: Eq_1495
  DataType: 
  OrigDataType: 
T_1537: (in 0x00 : byte)
  Class: Eq_1509
  DataType: 
  OrigDataType: 
T_1538: (in al_40 == 0x00 : bool)
  Class: Eq_1538
  DataType: 
  OrigDataType: 
T_1539: (in bx_118 : word16)
  Class: Eq_1539
  DataType: 
  OrigDataType: 
T_1540: (in fn0800_1135 : ptr32)
  Class: Eq_1540
  DataType: 
  OrigDataType: 
T_1541: (in signature of fn0800_1135 : void)
  Class: Eq_1540
  DataType: 
  OrigDataType: 
T_1542: (in bp : word16)
  Class: Eq_1542
  DataType: 
  OrigDataType: 
T_1543: (in di : word16)
  Class: Eq_1504
  DataType: 
  OrigDataType: 
T_1544: (in diOut : ptr16)
  Class: Eq_1544
  DataType: 
  OrigDataType: 
T_1545: (in 0x0002 : word16)
  Class: Eq_1545
  DataType: 
  OrigDataType: 
T_1546: (in fp - 0x0002 : word16)
  Class: Eq_1542
  DataType: 
  OrigDataType: 
T_1547: (in out di_113 : ptr16)
  Class: Eq_1544
  DataType: 
  OrigDataType: 
T_1548: (in fn0800_1135(fp - 0x0002, di_113, out di_113) : word16)
  Class: Eq_1548
  DataType: 
  OrigDataType: 
T_1549: (in *bxOut : word16)
  Class: Eq_1548
  DataType: 
  OrigDataType: 
T_1550: (in 0x50 : byte)
  Class: Eq_1498
  DataType: 
  OrigDataType: 
T_1551: (in bLoc57_115 >= 0x50 : bool)
  Class: Eq_1551
  DataType: 
  OrigDataType: 
T_1552: (in 0x50 : byte)
  Class: Eq_1498
  DataType: 
  OrigDataType: 
T_1553: (in bLoc57_115 >= 0x50 : bool)
  Class: Eq_1553
  DataType: 
  OrigDataType: 
T_1554: (in ax_81 : word16)
  Class: Eq_1554
  DataType: 
  OrigDataType: 
T_1555: (in sp_78 : word16)
  Class: Eq_1555
  DataType: 
  OrigDataType: 
T_1556: (in 0x0002 : word16)
  Class: Eq_1556
  DataType: 
  OrigDataType: 
T_1557: (in sp_158 + 0x0002 : word16)
  Class: Eq_1555
  DataType: 
  OrigDataType: 
T_1558: (in 0x0000 : word16)
  Class: Eq_1558
  DataType: 
  OrigDataType: 
T_1559: (in 0x0000 : word16)
  Class: Eq_1558
  DataType: 
  OrigDataType: 
T_1560: (in 0x0000 == 0x0000 : bool)
  Class: Eq_1560
  DataType: 
  OrigDataType: 
T_1561: (in di_99 : word16)
  Class: Eq_1504
  DataType: 
  OrigDataType: 
T_1562: (in fn0800_1135 : ptr32)
  Class: Eq_1540
  DataType: 
  OrigDataType: 
T_1563: (in fp - 0x0002 : word16)
  Class: Eq_1542
  DataType: 
  OrigDataType: 
T_1564: (in out di_99 : ptr16)
  Class: Eq_1544
  DataType: 
  OrigDataType: 
T_1565: (in fn0800_1135(fp - 0x0002, di_113, out di_99) : word16)
  Class: Eq_1565
  DataType: 
  OrigDataType: 
T_1566: (in di_101 : word16)
  Class: Eq_1566
  DataType: 
  OrigDataType: 
T_1567: (in bx_102 : word16)
  Class: Eq_1567
  DataType: 
  OrigDataType: 
T_1568: (in fn0800_1135 : ptr32)
  Class: Eq_1540
  DataType: 
  OrigDataType: 
T_1569: (in fp - 0x0002 : word16)
  Class: Eq_1542
  DataType: 
  OrigDataType: 
T_1570: (in out di_101 : ptr16)
  Class: Eq_1544
  DataType: 
  OrigDataType: 
T_1571: (in fn0800_1135(fp - 0x0002, di_99, out di_101) : word16)
  Class: Eq_1571
  DataType: 
  OrigDataType: 
T_1572: (in *bxOut : word16)
  Class: Eq_1571
  DataType: 
  OrigDataType: 
T_1573: (in ax_137 : word16)
  Class: Eq_1573
  DataType: 
  OrigDataType: 
T_1574: (in 0x00 : byte)
  Class: Eq_1574
  DataType: 
  OrigDataType: 
T_1575: (in DPB(ax, 0x00, 8, 8) : word16)
  Class: Eq_1573
  DataType: 
  OrigDataType: 
T_1576: (in bl_140 : byte)
  Class: Eq_1576
  DataType: 
  OrigDataType: 
T_1577: (in (byte) ax_137 : byte)
  Class: Eq_1576
  DataType: 
  OrigDataType: 
T_1578: (in bx_142 : word16)
  Class: Eq_1578
  DataType: 
  OrigDataType: 
T_1579: (in 0x20 : byte)
  Class: Eq_1579
  DataType: 
  OrigDataType: 
T_1580: (in bl_140 - 0x20 : byte)
  Class: Eq_1580
  DataType: 
  OrigDataType: 
T_1581: (in DPB(ax_137, bl_140 - 0x20, 0, 8) : word16)
  Class: Eq_1578
  DataType: 
  OrigDataType: 
T_1582: (in 0x80 : byte)
  Class: Eq_1576
  DataType: 
  OrigDataType: 
T_1583: (in bl_140 >=u 0x80 : bool)
  Class: Eq_1583
  DataType: 
  OrigDataType: 
T_1584: (in 0x0000 : word16)
  Class: Eq_1554
  DataType: 
  OrigDataType: 
T_1585: (in 0xFFFF : word16)
  Class: Eq_1554
  DataType: 
  OrigDataType: 
T_1586: (in di_84 : word16)
  Class: Eq_1586
  DataType: 
  OrigDataType: 
T_1587: (in ss : selector)
  Class: Eq_1587
  DataType: 
  OrigDataType: 
T_1588: (in 0x0000 : word16)
  Class: Eq_1588
  DataType: 
  OrigDataType: 
T_1589: (in sp_78 + 0x0000 : word16)
  Class: Eq_1589
  DataType: 
  OrigDataType: 
T_1590: (in Mem0[ss:sp_78 + 0x0000:word16] : word16)
  Class: Eq_1590
  DataType: 
  OrigDataType: 
T_1591: (in *diOut : word16)
  Class: Eq_1590
  DataType: 
  OrigDataType: 
T_1592: (in si_86 : word16)
  Class: Eq_1592
  DataType: 
  OrigDataType: 
T_1593: (in 0x0002 : word16)
  Class: Eq_1593
  DataType: 
  OrigDataType: 
T_1594: (in sp_78 + 0x0002 : word16)
  Class: Eq_1594
  DataType: 
  OrigDataType: 
T_1595: (in Mem0[ss:sp_78 + 0x0002:word16] : word16)
  Class: Eq_1595
  DataType: 
  OrigDataType: 
T_1596: (in *siOut : word16)
  Class: Eq_1595
  DataType: 
  OrigDataType: 
T_1597: (in 0x04E1 : word16)
  Class: Eq_1597
  DataType: 
  OrigDataType: 
T_1598: (in bx_142 + 0x04E1 : word16)
  Class: Eq_1598
  DataType: 
  OrigDataType: 
T_1599: (in Mem0[ds:bx_142 + 0x04E1:byte] : byte)
  Class: Eq_1599
  DataType: 
  OrigDataType: 
T_1600: (in DPB(bx_142, Mem0[ds:bx_142 + 0x04E1:byte], 0, 8) : word16)
  Class: Eq_1600
  DataType: 
  OrigDataType: 
T_1601: (in 0x0017 : word16)
  Class: Eq_1600
  DataType: 
  OrigDataType: 
T_1602: (in DPB(bx_142, Mem0[ds:bx_142 + 0x04E1:byte], 0, 8) <=u 0x0017 : bool)
  Class: Eq_1602
  DataType: 
  OrigDataType: 
T_1603: (in si_151 : word16)
  Class: Eq_1507
  DataType: 
  OrigDataType: 
T_1604: (in al_153 : byte)
  Class: Eq_1604
  DataType: 
  OrigDataType: 
T_1605: (in 0x25 : byte)
  Class: Eq_1604
  DataType: 
  OrigDataType: 
T_1606: (in bx_161 : word16)
  Class: Eq_1606
  DataType: 
  OrigDataType: 
T_1607: (in fn0800_112D : ptr32)
  Class: Eq_1607
  DataType: 
  OrigDataType: 
T_1608: (in signature of fn0800_112D : void)
  Class: Eq_1607
  DataType: 
  OrigDataType: 
T_1609: (in bp : word16)
  Class: Eq_1542
  DataType: 
  OrigDataType: 
T_1610: (in di : word16)
  Class: Eq_1504
  DataType: 
  OrigDataType: 
T_1611: (in al : byte)
  Class: Eq_1604
  DataType: 
  OrigDataType: 
T_1612: (in ds : selector)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_1613: (in diOut : ptr16)
  Class: Eq_1613
  DataType: 
  OrigDataType: 
T_1614: (in fp - 0x0002 : word16)
  Class: Eq_1542
  DataType: 
  OrigDataType: 
T_1615: (in out di_113 : ptr16)
  Class: Eq_1613
  DataType: 
  OrigDataType: 
T_1616: (in fn0800_112D(fp - 0x0002, di_113, al_153, ds, out di_113) : word16)
  Class: Eq_1616
  DataType: 
  OrigDataType: 
T_1617: (in *bxOut : word16)
  Class: Eq_1616
  DataType: 
  OrigDataType: 
T_1618: (in al_164 : byte)
  Class: Eq_1604
  DataType: 
  OrigDataType: 
T_1619: (in 0x0000 : word16)
  Class: Eq_1619
  DataType: 
  OrigDataType: 
T_1620: (in si_151 + 0x0000 : word16)
  Class: Eq_1620
  DataType: 
  OrigDataType: 
T_1621: (in Mem0[ds:si_151 + 0x0000:byte] : byte)
  Class: Eq_1604
  DataType: 
  OrigDataType: 
T_1622: (in 0xFFFE : word16)
  Class: Eq_1622
  DataType: 
  OrigDataType: 
T_1623: (in sp_158 + 0xFFFE : word16)
  Class: Eq_1500
  DataType: 
  OrigDataType: 
T_1624: (in 0x0001 : word16)
  Class: Eq_1624
  DataType: 
  OrigDataType: 
T_1625: (in si_151 + 0x0001 : word16)
  Class: Eq_1507
  DataType: 
  OrigDataType: 
T_1626: (in 0x00 : byte)
  Class: Eq_1604
  DataType: 
  OrigDataType: 
T_1627: (in al_164 != 0x00 : bool)
  Class: Eq_1627
  DataType: 
  OrigDataType: 
T_1628: (in bx : word16)
  Class: Eq_1628
  DataType: 
  OrigDataType: 
T_1629: (in 0x0000 : word16)
  Class: Eq_1629
  DataType: 
  OrigDataType: 
T_1630: (in di + 0x0000 : word16)
  Class: Eq_1630
  DataType: 
  OrigDataType: 
T_1631: (in Mem3[ds:di + 0x0000:byte] : byte)
  Class: Eq_1604
  DataType: 
  OrigDataType: 
T_1632: (in v9_9 : byte)
  Class: Eq_1632
  DataType: 
  OrigDataType: 
T_1633: (in ss : selector)
  Class: Eq_1633
  DataType: 
  OrigDataType: 
T_1634: (in 0x0055 : word16)
  Class: Eq_1634
  DataType: 
  OrigDataType: 
T_1635: (in bp - 0x0055 : word16)
  Class: Eq_1635
  DataType: 
  OrigDataType: 
T_1636: (in Mem3[ss:bp - 0x0055:byte] : byte)
  Class: Eq_1636
  DataType: 
  OrigDataType: 
T_1637: (in 0x01 : byte)
  Class: Eq_1637
  DataType: 
  OrigDataType: 
T_1638: (in Mem3[ss:bp - 0x0055:byte] - 0x01 : byte)
  Class: Eq_1632
  DataType: 
  OrigDataType: 
T_1639: (in 0x0055 : word16)
  Class: Eq_1639
  DataType: 
  OrigDataType: 
T_1640: (in bp - 0x0055 : word16)
  Class: Eq_1640
  DataType: 
  OrigDataType: 
T_1641: (in Mem10[ss:bp - 0x0055:byte] : byte)
  Class: Eq_1632
  DataType: 
  OrigDataType: 
T_1642: (in di_6 : word16)
  Class: Eq_1642
  DataType: 
  OrigDataType: 
T_1643: (in 0x0001 : word16)
  Class: Eq_1643
  DataType: 
  OrigDataType: 
T_1644: (in di + 0x0001 : word16)
  Class: Eq_1644
  DataType: 
  OrigDataType: 
T_1645: (in *diOut : word16)
  Class: Eq_1644
  DataType: 
  OrigDataType: 
T_1646: (in 0x00 : byte)
  Class: Eq_1632
  DataType: 
  OrigDataType: 
T_1647: (in v9_9 <= 0x00 : bool)
  Class: Eq_1647
  DataType: 
  OrigDataType: 
T_1648: (in di_15 : word16)
  Class: Eq_1504
  DataType: 
  OrigDataType: 
T_1649: (in fn0800_1135 : ptr32)
  Class: Eq_1540
  DataType: 
  OrigDataType: 
T_1650: (in di + 0x0001 : word16)
  Class: Eq_1504
  DataType: 
  OrigDataType: 
T_1651: (in out di_15 : ptr16)
  Class: Eq_1544
  DataType: 
  OrigDataType: 
T_1652: (in fn0800_1135(bp, di + 0x0001, out di_15) : word16)
  Class: Eq_1652
  DataType: 
  OrigDataType: 
T_1653: (in di_17 : word16)
  Class: Eq_1653
  DataType: 
  OrigDataType: 
T_1654: (in fn0800_1135 : ptr32)
  Class: Eq_1540
  DataType: 
  OrigDataType: 
T_1655: (in out di_17 : ptr16)
  Class: Eq_1544
  DataType: 
  OrigDataType: 
T_1656: (in fn0800_1135(bp, di_15, out di_17) : word16)
  Class: Eq_1656
  DataType: 
  OrigDataType: 
T_1657: (in bx : word16)
  Class: Eq_1657
  DataType: 
  OrigDataType: 
T_1658: (in di_17 : word16)
  Class: Eq_1658
  DataType: 
  OrigDataType: 
T_1659: (in 0x0054 : word16)
  Class: Eq_1659
  DataType: 
  OrigDataType: 
T_1660: (in bp - 0x0054 : word16)
  Class: Eq_1660
  DataType: 
  OrigDataType: 
T_1661: (in di - (bp - 0x0054) : word16)
  Class: Eq_1658
  DataType: 
  OrigDataType: 
T_1662: (in cs : selector)
  Class: Eq_1662
  DataType: 
  OrigDataType: 
T_1663: (in ss : selector)
  Class: Eq_1663
  DataType: 
  OrigDataType: 
T_1664: (in 0x000A : word16)
  Class: Eq_1664
  DataType: 
  OrigDataType: 
T_1665: (in bp + 0x000A : word16)
  Class: Eq_1665
  DataType: 
  OrigDataType: 
T_1666: (in Mem0[ss:bp + 0x000A:word16] : word16)
  Class: Eq_1666
  DataType: 
  OrigDataType: 
T_1667: (in SEQ(cs, Mem0[ss:bp + 0x000A:word16]) : ptr32)
  Class: Eq_1667
  DataType: 
  OrigDataType: 
T_1668: (in 0x0054 : word16)
  Class: Eq_1542
  DataType: 
  OrigDataType: 
T_1669: (in bp != 0x0054 : bool)
  Class: Eq_1669
  DataType: 
  OrigDataType: 
T_1670: (in 0x50 : byte)
  Class: Eq_1670
  DataType: 
  OrigDataType: 
T_1671: (in 0x0055 : word16)
  Class: Eq_1671
  DataType: 
  OrigDataType: 
T_1672: (in bp - 0x0055 : word16)
  Class: Eq_1672
  DataType: 
  OrigDataType: 
T_1673: (in Mem37[ss:bp - 0x0055:byte] : byte)
  Class: Eq_1670
  DataType: 
  OrigDataType: 
T_1674: (in 0x0058 : word16)
  Class: Eq_1674
  DataType: 
  OrigDataType: 
T_1675: (in bp - 0x0058 : word16)
  Class: Eq_1675
  DataType: 
  OrigDataType: 
T_1676: (in Mem37[ss:bp - 0x0058:word16] : word16)
  Class: Eq_1676
  DataType: 
  OrigDataType: 
T_1677: (in Mem37[ss:bp - 0x0058:word16] + di_17 : word16)
  Class: Eq_1677
  DataType: 
  OrigDataType: 
T_1678: (in 0x0058 : word16)
  Class: Eq_1678
  DataType: 
  OrigDataType: 
T_1679: (in bp - 0x0058 : word16)
  Class: Eq_1679
  DataType: 
  OrigDataType: 
T_1680: (in Mem39[ss:bp - 0x0058:word16] : word16)
  Class: Eq_1677
  DataType: 
  OrigDataType: 
T_1681: (in di_41 : word16)
  Class: Eq_1681
  DataType: 
  OrigDataType: 
T_1682: (in 0x0054 : word16)
  Class: Eq_1682
  DataType: 
  OrigDataType: 
T_1683: (in bp - 0x0054 : word16)
  Class: Eq_1683
  DataType: 
  OrigDataType: 
T_1684: (in *diOut : word16)
  Class: Eq_1683
  DataType: 
  OrigDataType: 
T_1685: (in 0x0001 : word16)
  Class: Eq_1685
  DataType: 
  OrigDataType: 
T_1686: (in 0x0002 : word16)
  Class: Eq_1686
  DataType: 
  OrigDataType: 
T_1687: (in bp - 0x0002 : word16)
  Class: Eq_1687
  DataType: 
  OrigDataType: 
T_1688: (in Mem51[ss:bp - 0x0002:word16] : word16)
  Class: Eq_1685
  DataType: 
  OrigDataType: 
T_1689: (in es : selector)
  Class: Eq_1689
  DataType: 
  OrigDataType: 
T_1690: (in bx_24 : word16)
  Class: Eq_1690
  DataType: 
  OrigDataType: 
T_1691: (in fn0800_1787 : ptr32)
  Class: Eq_1691
  DataType: 
  OrigDataType: 
T_1692: (in signature of fn0800_1787 : void)
  Class: Eq_1691
  DataType: 
  OrigDataType: 
T_1693: (in bx : word16)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_1694: (in di : word16)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_1695: (in ds : selector)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_1696: (in wArg06 : word16)
  Class: Eq_1696
  DataType: 
  OrigDataType: 
T_1697: (in wArg08 : word16)
  Class: Eq_1697
  DataType: 
  OrigDataType: 
T_1698: (in 0x032A : word16)
  Class: Eq_1696
  DataType: 
  OrigDataType: 
T_1699: (in wArg02 : word16)
  Class: Eq_1697
  DataType: 
  OrigDataType: 
T_1700: (in fn0800_1787(bx, di, ds, 0x032A, wArg02) : word16)
  Class: Eq_1690
  DataType: 
  OrigDataType: 
T_1701: (in bp_204 : word16)
  Class: Eq_1701
  DataType: 
  OrigDataType: 
T_1702: (in fp : ptr16)
  Class: Eq_1702
  DataType: 
  OrigDataType: 
T_1703: (in 0x0002 : word16)
  Class: Eq_1703
  DataType: 
  OrigDataType: 
T_1704: (in fp - 0x0002 : word16)
  Class: Eq_1701
  DataType: 
  OrigDataType: 
T_1705: (in si_203 : word16)
  Class: Eq_1705
  DataType: 
  OrigDataType: 
T_1706: (in wArg08 : word16)
  Class: Eq_1705
  DataType: 
  OrigDataType: 
T_1707: (in al_57 : byte)
  Class: Eq_1707
  DataType: 
  OrigDataType: 
T_1708: (in 0x25 : byte)
  Class: Eq_1707
  DataType: 
  OrigDataType: 
T_1709: (in al_57 == 0x25 : bool)
  Class: Eq_1709
  DataType: 
  OrigDataType: 
T_1710: (in 0x0000 : word16)
  Class: Eq_1710
  DataType: 
  OrigDataType: 
T_1711: (in si_203 + 0x0000 : word16)
  Class: Eq_1711
  DataType: 
  OrigDataType: 
T_1712: (in Mem0[ds:si_203 + 0x0000:byte] : byte)
  Class: Eq_1712
  DataType: 
  OrigDataType: 
T_1713: (in (int16) Mem0[ds:si_203 + 0x0000:byte] : int16)
  Class: Eq_1713
  DataType: 
  OrigDataType: 
T_1714: (in 0x0000 : word16)
  Class: Eq_1713
  DataType: 
  OrigDataType: 
T_1715: (in (int16) Mem0[ds:si_203 + 0x0000:byte] < 0x0000 : bool)
  Class: Eq_1715
  DataType: 
  OrigDataType: 
T_1716: (in cs : selector)
  Class: Eq_1716
  DataType: 
  OrigDataType: 
T_1717: (in ss : selector)
  Class: Eq_1717
  DataType: 
  OrigDataType: 
T_1718: (in 0x0004 : word16)
  Class: Eq_1718
  DataType: 
  OrigDataType: 
T_1719: (in bp_204 + 0x0004 : word16)
  Class: Eq_1719
  DataType: 
  OrigDataType: 
T_1720: (in Mem0[ss:bp_204 + 0x0004:word16] : word16)
  Class: Eq_1720
  DataType: 
  OrigDataType: 
T_1721: (in SEQ(cs, Mem0[ss:bp_204 + 0x0004:word16]) : ptr32)
  Class: Eq_1721
  DataType: 
  OrigDataType: 
T_1722: (in ax_127 : word16)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_1723: (in (int16) al_57 : int16)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_1724: (in ax_138 : word16)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_1725: (in di_264 : word16)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_1726: (in 0x0000 : word16)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_1727: (in di_264 < 0x0000 : bool)
  Class: Eq_1727
  DataType: 
  OrigDataType: 
T_1728: (in 0x0000 : word16)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_1729: (in ax_127 < 0x0000 : bool)
  Class: Eq_1729
  DataType: 
  OrigDataType: 
T_1730: (in di_264 == ax_127 : bool)
  Class: Eq_1730
  DataType: 
  OrigDataType: 
T_1731: (in 0x0542 : word16)
  Class: Eq_1731
  DataType: 
  OrigDataType: 
T_1732: (in ax_127 + 0x0542 : word16)
  Class: Eq_1732
  DataType: 
  OrigDataType: 
T_1733: (in Mem0[ds:ax_127 + 0x0542:byte] : byte)
  Class: Eq_1733
  DataType: 
  OrigDataType: 
T_1734: (in 0x01 : byte)
  Class: Eq_1733
  DataType: 
  OrigDataType: 
T_1735: (in Mem0[ds:ax_127 + 0x0542:byte] != 0x01 : bool)
  Class: Eq_1735
  DataType: 
  OrigDataType: 
T_1736: (in bl_210 : byte)
  Class: Eq_1736
  DataType: 
  OrigDataType: 
T_1737: (in (byte) ax_138 : byte)
  Class: Eq_1736
  DataType: 
  OrigDataType: 
T_1738: (in DPB(ax_138, bl_210, 0, 8) : word16)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_1739: (in 0x00 : byte)
  Class: Eq_1736
  DataType: 
  OrigDataType: 
T_1740: (in bl_210 < 0x00 : bool)
  Class: Eq_1740
  DataType: 
  OrigDataType: 
T_1741: (in 0x0006 : word16)
  Class: Eq_1741
  DataType: 
  OrigDataType: 
T_1742: (in bp_204 + 0x0006 : word16)
  Class: Eq_1742
  DataType: 
  OrigDataType: 
T_1743: (in Mem0[ss:bp_204 + 0x0006:word16] : word16)
  Class: Eq_1743
  DataType: 
  OrigDataType: 
T_1744: (in SEQ(cs, Mem0[ss:bp_204 + 0x0006:word16]) : ptr32)
  Class: Eq_1744
  DataType: 
  OrigDataType: 
T_1745: (in 0x0542 : word16)
  Class: Eq_1745
  DataType: 
  OrigDataType: 
T_1746: (in bx + 0x0542 : word16)
  Class: Eq_1746
  DataType: 
  OrigDataType: 
T_1747: (in Mem0[ds:bx + 0x0542:byte] : byte)
  Class: Eq_1747
  DataType: 
  OrigDataType: 
T_1748: (in 0x01 : byte)
  Class: Eq_1747
  DataType: 
  OrigDataType: 
T_1749: (in Mem0[ds:bx + 0x0542:byte] != 0x01 : bool)
  Class: Eq_1749
  DataType: 
  OrigDataType: 
T_1750: (in 0x0004 : word16)
  Class: Eq_1750
  DataType: 
  OrigDataType: 
T_1751: (in bp_204 + 0x0004 : word16)
  Class: Eq_1751
  DataType: 
  OrigDataType: 
T_1752: (in Mem0[ss:bp_204 + 0x0004:word16] : word16)
  Class: Eq_1752
  DataType: 
  OrigDataType: 
T_1753: (in SEQ(cs, Mem0[ss:bp_204 + 0x0004:word16]) : ptr32)
  Class: Eq_1753
  DataType: 
  OrigDataType: 
T_1754: (in bx_265 : word16)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_1755: (in 0x0000 : word16)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_1756: (in bx_265 > 0x0000 : bool)
  Class: Eq_1756
  DataType: 
  OrigDataType: 
T_1757: (in 0x0006 : word16)
  Class: Eq_1757
  DataType: 
  OrigDataType: 
T_1758: (in bp_204 + 0x0006 : word16)
  Class: Eq_1758
  DataType: 
  OrigDataType: 
T_1759: (in Mem0[ss:bp_204 + 0x0006:word16] : word16)
  Class: Eq_1759
  DataType: 
  OrigDataType: 
T_1760: (in SEQ(cs, Mem0[ss:bp_204 + 0x0006:word16]) : ptr32)
  Class: Eq_1760
  DataType: 
  OrigDataType: 
T_1761: (in 0x0000 : word16)
  Class: Eq_1761
  DataType: 
  OrigDataType: 
T_1762: (in 0x0028 : word16)
  Class: Eq_1762
  DataType: 
  OrigDataType: 
T_1763: (in bp_204 - 0x0028 : word16)
  Class: Eq_1763
  DataType: 
  OrigDataType: 
T_1764: (in Mem125[ss:bp_204 - 0x0028:word16] : word16)
  Class: Eq_1761
  DataType: 
  OrigDataType: 
T_1765: (in 0x0000 : word16)
  Class: Eq_1765
  DataType: 
  OrigDataType: 
T_1766: (in si_203 + 0x0000 : word16)
  Class: Eq_1766
  DataType: 
  OrigDataType: 
T_1767: (in Mem0[ds:si_203 + 0x0000:byte] : byte)
  Class: Eq_1707
  DataType: 
  OrigDataType: 
T_1768: (in 0x0001 : word16)
  Class: Eq_1768
  DataType: 
  OrigDataType: 
T_1769: (in si_203 + 0x0001 : word16)
  Class: Eq_1705
  DataType: 
  OrigDataType: 
T_1770: (in 0x00 : byte)
  Class: Eq_1707
  DataType: 
  OrigDataType: 
T_1771: (in al_57 == 0x00 : bool)
  Class: Eq_1771
  DataType: 
  OrigDataType: 
T_1772: (in 0x0006 : word16)
  Class: Eq_1772
  DataType: 
  OrigDataType: 
T_1773: (in bp_204 + 0x0006 : word16)
  Class: Eq_1773
  DataType: 
  OrigDataType: 
T_1774: (in Mem0[ss:bp_204 + 0x0006:word16] : word16)
  Class: Eq_1774
  DataType: 
  OrigDataType: 
T_1775: (in SEQ(cs, Mem0[ss:bp_204 + 0x0006:word16]) : ptr32)
  Class: Eq_1775
  DataType: 
  OrigDataType: 
T_1776: (in 0x00 : byte)
  Class: Eq_1776
  DataType: 
  OrigDataType: 
T_1777: (in DPB(bx, 0x00, 8, 8) : word16)
  Class: Eq_1777
  DataType: 
  OrigDataType: 
T_1778: (in 0x0015 : word16)
  Class: Eq_1777
  DataType: 
  OrigDataType: 
T_1779: (in DPB(bx, 0x00, 8, 8) <=u 0x0015 : bool)
  Class: Eq_1779
  DataType: 
  OrigDataType: 
T_1780: (in ax : word16)
  Class: Eq_1780
  DataType: 
  OrigDataType: 
T_1781: (in di_13 : word16)
  Class: Eq_1781
  DataType: 
  OrigDataType: 
T_1782: (in 0x0002 : word16)
  Class: Eq_1781
  DataType: 
  OrigDataType: 
T_1783: (in ax_101 : word16)
  Class: Eq_1783
  DataType: 
  OrigDataType: 
T_1784: (in wArg04 : word16)
  Class: Eq_1783
  DataType: 
  OrigDataType: 
T_1785: (in dx_117 : word16)
  Class: Eq_1785
  DataType: 
  OrigDataType: 
T_1786: (in wArg06 : word16)
  Class: Eq_1785
  DataType: 
  OrigDataType: 
T_1787: (in bx_163 : word16)
  Class: Eq_1783
  DataType: 
  OrigDataType: 
T_1788: (in wArg08 : word16)
  Class: Eq_1783
  DataType: 
  OrigDataType: 
T_1789: (in cx_158 : word16)
  Class: Eq_1789
  DataType: 
  OrigDataType: 
T_1790: (in wArg0A : word16)
  Class: Eq_1789
  DataType: 
  OrigDataType: 
T_1791: (in 0x0000 : word16)
  Class: Eq_1789
  DataType: 
  OrigDataType: 
T_1792: (in wArg0A != 0x0000 : bool)
  Class: Eq_1792
  DataType: 
  OrigDataType: 
T_1793: (in false : bool)
  Class: Eq_1793
  DataType: 
  OrigDataType: 
T_1794: (in dx_ax_181 : word32)
  Class: Eq_1794
  DataType: 
  OrigDataType: 
T_1795: (in SEQ(wArg06, wArg04) : word32)
  Class: Eq_1794
  DataType: 
  OrigDataType: 
T_1796: (in 0x0000 : word16)
  Class: Eq_1785
  DataType: 
  OrigDataType: 
T_1797: (in wArg06 == 0x0000 : bool)
  Class: Eq_1797
  DataType: 
  OrigDataType: 
T_1798: (in dx_187 : word16)
  Class: Eq_1783
  DataType: 
  OrigDataType: 
T_1799: (in dx_ax_181 % bx_163 : uint16)
  Class: Eq_1783
  DataType: 
  OrigDataType: 
T_1800: (in SEQ(dx_187, wArg04) : word32)
  Class: Eq_1800
  DataType: 
  OrigDataType: 
T_1801: (in SEQ(dx_187, wArg04) /u bx_163 : uint16)
  Class: Eq_1783
  DataType: 
  OrigDataType: 
T_1802: (in 0x0002 : word16)
  Class: Eq_1802
  DataType: 
  OrigDataType: 
T_1803: (in 0x0000 : word16)
  Class: Eq_1802
  DataType: 
  OrigDataType: 
T_1804: (in 0x0002 == 0x0000 : bool)
  Class: Eq_1804
  DataType: 
  OrigDataType: 
T_1805: (in 0x0000 : word16)
  Class: Eq_1783
  DataType: 
  OrigDataType: 
T_1806: (in wArg08 == 0x0000 : bool)
  Class: Eq_1806
  DataType: 
  OrigDataType: 
T_1807: (in bp_bx_66 : ui32)
  Class: Eq_1807
  DataType: 
  OrigDataType: 
T_1808: (in SEQ(cx_158, bx_163) : ui32)
  Class: Eq_1807
  DataType: 
  OrigDataType: 
T_1809: (in cx_107 : word16)
  Class: Eq_1809
  DataType: 
  OrigDataType: 
T_1810: (in 0x0020 : word16)
  Class: Eq_1809
  DataType: 
  OrigDataType: 
T_1811: (in di_105 : word16)
  Class: Eq_1789
  DataType: 
  OrigDataType: 
T_1812: (in 0x0000 : word16)
  Class: Eq_1789
  DataType: 
  OrigDataType: 
T_1813: (in si_106 : word16)
  Class: Eq_1783
  DataType: 
  OrigDataType: 
T_1814: (in 0x0000 : word16)
  Class: Eq_1783
  DataType: 
  OrigDataType: 
T_1815: (in 0x0000 : word16)
  Class: Eq_1785
  DataType: 
  OrigDataType: 
T_1816: (in dx_117 >= 0x0000 : bool)
  Class: Eq_1816
  DataType: 
  OrigDataType: 
T_1817: (in 0x0000 : word16)
  Class: Eq_1789
  DataType: 
  OrigDataType: 
T_1818: (in wArg0A >= 0x0000 : bool)
  Class: Eq_1818
  DataType: 
  OrigDataType: 
T_1819: (in -wArg04 : word16)
  Class: Eq_1783
  DataType: 
  OrigDataType: 
T_1820: (in -dx_117 : word16)
  Class: Eq_1820
  DataType: 
  OrigDataType: 
T_1821: (in 0x0000 : word16)
  Class: Eq_1783
  DataType: 
  OrigDataType: 
T_1822: (in ax_101 == 0x0000 : bool)
  Class: Eq_1822
  DataType: 
  OrigDataType: 
T_1823: (in -dx_117 - (ax_101 == 0x0000) : word16)
  Class: Eq_1785
  DataType: 
  OrigDataType: 
T_1824: (in 0x000E : word16)
  Class: Eq_1781
  DataType: 
  OrigDataType: 
T_1825: (in -bx_163 : word16)
  Class: Eq_1783
  DataType: 
  OrigDataType: 
T_1826: (in -wArg0A : word16)
  Class: Eq_1826
  DataType: 
  OrigDataType: 
T_1827: (in 0x0000 : word16)
  Class: Eq_1783
  DataType: 
  OrigDataType: 
T_1828: (in bx_163 == 0x0000 : bool)
  Class: Eq_1828
  DataType: 
  OrigDataType: 
T_1829: (in -wArg0A - (bx_163 == 0x0000) : word16)
  Class: Eq_1789
  DataType: 
  OrigDataType: 
T_1830: (in 0x0004 : word16)
  Class: Eq_1830
  DataType: 
  OrigDataType: 
T_1831: (in di_13 ^ 0x0004 : word16)
  Class: Eq_1781
  DataType: 
  OrigDataType: 
T_1832: (in 0x0001 : word16)
  Class: Eq_1832
  DataType: 
  OrigDataType: 
T_1833: (in cx_107 - 0x0001 : word16)
  Class: Eq_1809
  DataType: 
  OrigDataType: 
T_1834: (in 0x0000 : word16)
  Class: Eq_1809
  DataType: 
  OrigDataType: 
T_1835: (in cx_107 != 0x0000 : bool)
  Class: Eq_1835
  DataType: 
  OrigDataType: 
T_1836: (in di_105 >u cx_158 : bool)
  Class: Eq_1836
  DataType: 
  OrigDataType: 
T_1837: (in di_si_139 : ui32)
  Class: Eq_1837
  DataType: 
  OrigDataType: 
T_1838: (in si_106 - bx_163 : word16)
  Class: Eq_1838
  DataType: 
  OrigDataType: 
T_1839: (in SEQ(di_105, si_106 - bx_163) : ui32)
  Class: Eq_1839
  DataType: 
  OrigDataType: 
T_1840: (in SEQ(di_105, si_106 - bx_163) - bp_bx_66 : ui32)
  Class: Eq_1837
  DataType: 
  OrigDataType: 
T_1841: (in SLICE(di_si_139, word16, 16) : word16)
  Class: Eq_1789
  DataType: 
  OrigDataType: 
T_1842: (in (word16) di_si_139 : word16)
  Class: Eq_1783
  DataType: 
  OrigDataType: 
T_1843: (in 0x0001 : word16)
  Class: Eq_1843
  DataType: 
  OrigDataType: 
T_1844: (in ax_101 + 0x0001 : word16)
  Class: Eq_1783
  DataType: 
  OrigDataType: 
T_1845: (in si_106 <u bx_163 : bool)
  Class: Eq_1845
  DataType: 
  OrigDataType: 
T_1846: (in dx_195 : word16)
  Class: Eq_1846
  DataType: 
  OrigDataType: 
T_1847: (in 0x0000 : word16)
  Class: Eq_1847
  DataType: 
  OrigDataType: 
T_1848: (in *dxOut : word16)
  Class: Eq_1847
  DataType: 
  OrigDataType: 
T_1849: (in 0x0001 : word16)
  Class: Eq_1849
  DataType: 
  OrigDataType: 
T_1850: (in ax_101 << 0x0001 : word16)
  Class: Eq_1783
  DataType: 
  OrigDataType: 
T_1851: (in __rcl : ptr32)
  Class: Eq_1851
  DataType: 
  OrigDataType: 
T_1852: (in 0x01 : byte)
  Class: Eq_1852
  DataType: 
  OrigDataType: 
T_1853: (in cond(ax_101) : byte)
  Class: Eq_1853
  DataType: 
  OrigDataType: 
T_1854: (in __rcl(dx_117, 0x01, cond(ax_101)) : word16)
  Class: Eq_1785
  DataType: 
  OrigDataType: 
T_1855: (in *dxOut : word16)
  Class: Eq_1785
  DataType: 
  OrigDataType: 
T_1856: (in __rcl : ptr32)
  Class: Eq_1856
  DataType: 
  OrigDataType: 
T_1857: (in 0x01 : byte)
  Class: Eq_1857
  DataType: 
  OrigDataType: 
T_1858: (in 0x8000 : cui16)
  Class: Eq_1858
  DataType: 
  OrigDataType: 
T_1859: (in dx_117 & 0x8000 : word16)
  Class: Eq_1859
  DataType: 
  OrigDataType: 
T_1860: (in 0x0000 : word16)
  Class: Eq_1859
  DataType: 
  OrigDataType: 
T_1861: (in (dx_117 & 0x8000) != 0x0000 : bool)
  Class: Eq_1861
  DataType: 
  OrigDataType: 
T_1862: (in __rcl(si_106, 0x01, (dx_117 & 0x8000) != 0x0000) : word16)
  Class: Eq_1783
  DataType: 
  OrigDataType: 
T_1863: (in __rcl : ptr32)
  Class: Eq_1863
  DataType: 
  OrigDataType: 
T_1864: (in 0x01 : byte)
  Class: Eq_1864
  DataType: 
  OrigDataType: 
T_1865: (in 0x8000 : cui16)
  Class: Eq_1865
  DataType: 
  OrigDataType: 
T_1866: (in si_106 & 0x8000 : word16)
  Class: Eq_1866
  DataType: 
  OrigDataType: 
T_1867: (in 0x0000 : word16)
  Class: Eq_1866
  DataType: 
  OrigDataType: 
T_1868: (in (si_106 & 0x8000) != 0x0000 : bool)
  Class: Eq_1868
  DataType: 
  OrigDataType: 
T_1869: (in __rcl(di_105, 0x01, (si_106 & 0x8000) != 0x0000) : word16)
  Class: Eq_1789
  DataType: 
  OrigDataType: 
T_1870: (in di_105 <u cx_158 : bool)
  Class: Eq_1870
  DataType: 
  OrigDataType: 
T_1871: (in bx_108 : word16)
  Class: Eq_1781
  DataType: 
  OrigDataType: 
T_1872: (in 0x0002 : word16)
  Class: Eq_1872
  DataType: 
  OrigDataType: 
T_1873: (in di_13 & 0x0002 : word16)
  Class: Eq_1873
  DataType: 
  OrigDataType: 
T_1874: (in 0x0000 : word16)
  Class: Eq_1873
  DataType: 
  OrigDataType: 
T_1875: (in (di_13 & 0x0002) == 0x0000 : bool)
  Class: Eq_1875
  DataType: 
  OrigDataType: 
T_1876: (in 0x0004 : word16)
  Class: Eq_1876
  DataType: 
  OrigDataType: 
T_1877: (in bx_108 & 0x0004 : word16)
  Class: Eq_1877
  DataType: 
  OrigDataType: 
T_1878: (in 0x0000 : word16)
  Class: Eq_1877
  DataType: 
  OrigDataType: 
T_1879: (in (bx_108 & 0x0004) == 0x0000 : bool)
  Class: Eq_1879
  DataType: 
  OrigDataType: 
T_1880: (in *dxOut : word16)
  Class: Eq_1789
  DataType: 
  OrigDataType: 
T_1881: (in 0x0001 : word16)
  Class: Eq_1881
  DataType: 
  OrigDataType: 
T_1882: (in di_13 >>u 0x0001 : word16)
  Class: Eq_1781
  DataType: 
  OrigDataType: 
T_1883: (in -ax_101 : word16)
  Class: Eq_1783
  DataType: 
  OrigDataType: 
T_1884: (in dx_126 : word16)
  Class: Eq_1884
  DataType: 
  OrigDataType: 
T_1885: (in -dx_117 : word16)
  Class: Eq_1885
  DataType: 
  OrigDataType: 
T_1886: (in 0x0000 : word16)
  Class: Eq_1783
  DataType: 
  OrigDataType: 
T_1887: (in ax_101 == 0x0000 : bool)
  Class: Eq_1887
  DataType: 
  OrigDataType: 
T_1888: (in -dx_117 - (ax_101 == 0x0000) : word16)
  Class: Eq_1888
  DataType: 
  OrigDataType: 
T_1889: (in *dxOut : word16)
  Class: Eq_1888
  DataType: 
  OrigDataType: 
T_1890:
  Class: Eq_1890
  DataType: 
  OrigDataType: (struct 0001 (0 T_353 t0000))
T_1891:
  Class: Eq_1891
  DataType: 
  OrigDataType: (struct 0002 (0 T_878 t0000))
*/
