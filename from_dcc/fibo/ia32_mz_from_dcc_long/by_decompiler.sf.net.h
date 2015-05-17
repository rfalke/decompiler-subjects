// subject.h
// Generated on TIMESTAMP by decompiling from_dcc/fibo/ia32_mz_from_dcc_long/subject.exe
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
  DataType: (union (uint16 u0) ((memptr T_31 (struct (0 T_298 t0000))) u1) ((union (ptr16 u0) ((memptr T_31 (struct (0 T_98 t0000) (2 T_63 t0002))) u1)) u2) ((memptr T_146 (struct (0 T_2 t0000))) u3))
  OrigDataType: (union (uint16 u0) ((memptr T_31 (struct (0 T_298 t0000))) u1) ((union (ptr16 u0) ((memptr T_31 (struct (0 T_98 t0000) (2 T_63 t0002))) u1)) u2) ((memptr T_146 (struct (0 T_2 t0000))) u3))
T_4: (in 0x0A6B : word16)
  Class: Eq_4
  DataType: word16
  OrigDataType: word16
T_5: (in dx : word16)
  Class: Eq_4
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_6: (in 0x0A6B : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_7: (in 0x0800 : selector)
  Class: Eq_7
  DataType: (ptr (segment (1C7 T_2 t01C7) (1C9 T_454 t01C9) (1CB T_457 t01CB) (1CD T_2 t01CD)))
  OrigDataType: (ptr (segment (1C7 T_2 t01C7) (1C9 T_454 t01C9) (1CB T_457 t01CB) (1CD T_2 t01CD)))
T_8: (in 0x01C7 : word16)
  Class: Eq_8
  DataType: (memptr T_7 (struct (0 T_9 t0000)))
  OrigDataType: (memptr T_7 (struct (0 T_9 t0000)))
T_9: (in Mem0[0x0800:0x01C7:word16] : word16)
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
  DataType: (ptr (segment (2 T_22 t0002) (2C T_25 t002C) (6B T_278 t006B) (6D T_271 t006D) (6F T_264 t006F) (71 T_257 t0071) (73 T_250 t0073) (83 T_239 t0083) (85 T_241 t0085) (53E T_211 t053E) (542 T_245 t0542)))
  OrigDataType: (ptr (segment (2 T_22 t0002) (2C T_25 t002C) (6B T_278 t006B) (6D T_271 t006D) (6F T_264 t006F) (71 T_257 t0071) (73 T_250 t0073) (83 T_239 t0083) (85 T_241 t0085) (53E T_211 t053E) (542 T_245 t0542)))
T_21: (in 0x0002 : word16)
  Class: Eq_21
  DataType: (memptr T_20 (struct (0 T_22 t0000)))
  OrigDataType: (memptr T_20 (struct (0 T_22 t0000)))
T_22: (in Mem0[ds:0x0002:word16] : word16)
  Class: Eq_22
  DataType: word16
  OrigDataType: word16
T_23: (in bp : word16)
  Class: Eq_22
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
  DataType: (union (uint16 u0) ((memptr T_31 (struct (0 T_298 t0000))) u1) ((union (ptr16 u0) ((memptr T_31 (struct (0 T_98 t0000) (2 T_63 t0002))) u1)) u2) ((memptr T_146 (struct (0 T_2 t0000))) u3))
  OrigDataType: (union (uint16 u0) ((memptr T_31 (struct (0 T_298 t0000))) u1) ((union (ptr16 u0) ((memptr T_31 (struct (0 T_98 t0000) (2 T_63 t0002))) u1)) u2) ((memptr T_146 (struct (0 T_2 t0000))) u3))
T_27: (in 0x0A6B : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_28: (in 0x0A6B : selector)
  Class: Eq_28
  DataType: (ptr (segment (75 T_47 t0075) (77 T_35 t0077) (79 T_145 t0079) (7B T_2 t007B) (7D T_30 t007D) (81 T_38 t0081) (89 T_174 t0089) (8D T_176 t008D) (91 T_37 t0091) (142 T_2 t0142)))
  OrigDataType: (ptr (segment (75 T_47 t0075) (77 T_35 t0077) (79 T_145 t0079) (7B T_2 t007B) (7D T_30 t007D) (81 T_38 t0081) (89 T_174 t0089) (8D T_176 t008D) (91 T_37 t0091) (142 T_2 t0142)))
T_29: (in 0x007D : word16)
  Class: Eq_29
  DataType: (memptr T_28 (struct (0 T_30 t0000)))
  OrigDataType: (memptr T_28 (struct (0 T_30 t0000)))
T_30: (in Mem0[0x0A6B:0x007D:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_31: (in es : selector)
  Class: Eq_2
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_32: (in 0x007B : word16)
  Class: Eq_32
  DataType: (memptr T_28 (struct (0 T_33 t0000)))
  OrigDataType: (memptr T_28 (struct (0 T_33 t0000)))
T_33: (in Mem0[0x0A6B:0x007B:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_34: (in 0x0077 : word16)
  Class: Eq_34
  DataType: (memptr T_28 (struct (0 T_35 t0000)))
  OrigDataType: (memptr T_28 (struct (0 T_35 t0000)))
T_35: (in Mem0[0x0A6B:0x0077:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_36: (in 0x0091 : word16)
  Class: Eq_36
  DataType: (memptr T_28 (struct (0 T_37 t0000)))
  OrigDataType: (memptr T_28 (struct (0 T_37 t0000)))
T_37: (in Mem0[0x0A6B:0x0091:word16] : word16)
  Class: Eq_22
  DataType: word16
  OrigDataType: word16
T_38: (in 0xFFFF : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_39: (in 0x0081 : word16)
  Class: Eq_39
  DataType: (memptr T_28 (struct (0 T_40 t0000)))
  OrigDataType: (memptr T_28 (struct (0 T_40 t0000)))
T_40: (in Mem0[0x0A6B:0x0081:word16] : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_41: (in fn0800_012F : ptr32)
  Class: Eq_41
  DataType: (ptr (fn T_45 (T_17, T_20)))
  OrigDataType: (ptr (fn T_45 (T_17, T_20)))
T_42: (in signature of fn0800_012F : void)
  Class: Eq_41
  DataType: 
  OrigDataType: 
T_43: (in al : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_44: (in ds : selector)
  Class: Eq_2
  DataType: (ptr (segment (5B T_338 t005B) (5D T_341 t005D) (5F T_347 t005F) (61 T_350 t0061) (63 T_356 t0063) (65 T_359 t0065) (67 T_365 t0067) (69 T_368 t0069)))
  OrigDataType: (ptr (segment (5B T_338 t005B) (5D T_341 t005D) (5F T_347 t005F) (61 T_350 t0061) (63 T_356 t0063) (65 T_359 t0065) (67 T_365 t0067) (69 T_368 t0069)))
T_45: (in fn0800_012F(al, ds) : void)
  Class: Eq_45
  DataType: void
  OrigDataType: void
T_46: (in 0x0075 : word16)
  Class: Eq_46
  DataType: (memptr T_28 (struct (0 T_47 t0000)))
  OrigDataType: (memptr T_28 (struct (0 T_47 t0000)))
T_47: (in Mem0[0x0A6B:0x0075:segptr32] : segptr32)
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
  DataType: (union (uint16 u0) ((memptr T_31 (struct (0 T_298 t0000))) u1) ((union (ptr16 u0) ((memptr T_31 (struct (0 T_98 t0000) (2 T_63 t0002))) u1)) u2) ((memptr T_146 (struct (0 T_2 t0000))) u3))
  OrigDataType: (union (uint16 u0) ((memptr T_31 (struct (0 T_298 t0000))) u1) ((union (ptr16 u0) ((memptr T_31 (struct (0 T_98 t0000) (2 T_63 t0002))) u1)) u2) ((memptr T_146 (struct (0 T_2 t0000))) u3))
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
T_76: (in 0x0081 : word16)
  Class: Eq_76
  DataType: (memptr T_28 (struct (0 T_38 t0000)))
  OrigDataType: (memptr T_28 (struct (0 T_38 t0000)))
T_77: (in Mem0[0x0A6B:0x0081:word16] : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_78: (in 0x0001 : word16)
  Class: Eq_78
  DataType: word16
  OrigDataType: word16
T_79: (in Mem0[0x0A6B:0x0081:word16] + 0x0001 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_80: (in v20 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_81: (in Mem0[0x0A6B:0x0081:word16] : word16)
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
T_86: (in 0x0081 : word16)
  Class: Eq_86
  DataType: (memptr T_28 (struct (0 T_38 t0000)))
  OrigDataType: (memptr T_28 (struct (0 T_38 t0000)))
T_87: (in Mem0[0x0A6B:0x0081:word16] : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_88: (in 0x0001 : word16)
  Class: Eq_88
  DataType: word16
  OrigDataType: word16
T_89: (in Mem0[0x0A6B:0x0081:word16] + 0x0001 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_90: (in v21 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_91: (in Mem0[0x0A6B:0x0081:word16] : word16)
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
T_109: (in fn0800_01AF : ptr32)
  Class: Eq_109
  DataType: (ptr (fn T_115 (T_113, T_114)))
  OrigDataType: (ptr (fn T_115 (T_113, T_114)))
T_110: (in signature of fn0800_01AF : void)
  Class: Eq_109
  DataType: 
  OrigDataType: 
T_111: (in si : word16)
  Class: Eq_111
  DataType: word16
  OrigDataType: word16
T_112: (in wArg00 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_113: (in si : word16)
  Class: Eq_111
  DataType: word16
  OrigDataType: word16
T_114: (in wArg00 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_115: (in fn0800_01AF(si, wArg00) : void)
  Class: Eq_115
  DataType: void
  OrigDataType: void
T_116: (in 0x0001 : word16)
  Class: Eq_116
  DataType: word16
  OrigDataType: word16
T_117: (in bx + 0x0001 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_118: (in 0x0000 : word16)
  Class: Eq_118
  DataType: word16
  OrigDataType: word16
T_119: (in di + 0x0000 : word16)
  Class: Eq_119
  DataType: word16
  OrigDataType: word16
T_120: (in Mem0[es:di + 0x0000:byte] : byte)
  Class: Eq_98
  DataType: byte
  OrigDataType: byte
T_121: (in Mem0[es:di + 0x0000:byte] - al : byte)
  Class: Eq_121
  DataType: byte
  OrigDataType: byte
T_122: (in cond(Mem0[es:di + 0x0000:byte] - al) : byte)
  Class: Eq_70
  DataType: byte
  OrigDataType: byte
T_123: (in Test(NE,Z) : bool)
  Class: Eq_123
  DataType: bool
  OrigDataType: bool
T_124: (in 0x0000 : word16)
  Class: Eq_124
  DataType: word16
  OrigDataType: word16
T_125: (in di + 0x0000 : word16)
  Class: Eq_125
  DataType: word16
  OrigDataType: word16
T_126: (in Mem0[es:di + 0x0000:word16] : word16)
  Class: Eq_98
  DataType: word16
  OrigDataType: word16
T_127: (in 0x3738 : word16)
  Class: Eq_127
  DataType: word16
  OrigDataType: word16
T_128: (in Mem0[es:di + 0x0000:word16] - 0x3738 : word16)
  Class: Eq_128
  DataType: word16
  OrigDataType: word16
T_129: (in cond(Mem0[es:di + 0x0000:word16] - 0x3738) : byte)
  Class: Eq_70
  DataType: byte
  OrigDataType: byte
T_130: (in Test(NE,Z) : bool)
  Class: Eq_130
  DataType: bool
  OrigDataType: bool
T_131: (in 0x80 : byte)
  Class: Eq_131
  DataType: byte
  OrigDataType: byte
T_132: (in ch | 0x80 : byte)
  Class: Eq_55
  DataType: byte
  OrigDataType: byte
T_133: (in DPB(cx, ch, 8, 8) : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_134: (in -cx : word16)
  Class: Eq_47
  DataType: int16
  OrigDataType: int16
T_135: (in 0x0075 : word16)
  Class: Eq_135
  DataType: (memptr T_28 (struct (0 T_136 t0000)))
  OrigDataType: (memptr T_28 (struct (0 T_136 t0000)))
T_136: (in Mem0[0x0A6B:0x0075:word16] : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_137: (in 0x0002 : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_138: (in (byte) cx : byte)
  Class: Eq_57
  DataType: byte
  OrigDataType: byte
T_139: (in bx << cl : word16)
  Class: Eq_2
  DataType: ui16
  OrigDataType: ui16
T_140: (in 0x0010 : word16)
  Class: Eq_140
  DataType: word16
  OrigDataType: word16
T_141: (in bx + 0x0010 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_142: (in 0xFFF0 : word16)
  Class: Eq_142
  DataType: word16
  OrigDataType: word16
T_143: (in bx & 0xFFF0 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_144: (in 0x0079 : word16)
  Class: Eq_144
  DataType: (memptr T_28 (struct (0 T_145 t0000)))
  OrigDataType: (memptr T_28 (struct (0 T_145 t0000)))
T_145: (in Mem0[0x0A6B:0x0079:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_146: (in ss : selector)
  Class: Eq_4
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_147: (in (byte) dx : byte)
  Class: Eq_64
  DataType: byte
  OrigDataType: byte
T_148: (in SLICE(dx, byte, 8) : byte)
  Class: Eq_66
  DataType: byte
  OrigDataType: byte
T_149: (in bp - dx : word16)
  Class: Eq_22
  DataType: word16
  OrigDataType: word16
T_150: (in 0x0142 : word16)
  Class: Eq_150
  DataType: (memptr T_28 (struct (0 T_151 t0000)))
  OrigDataType: (memptr T_28 (struct (0 T_151 t0000)))
T_151: (in Mem0[0x0A6B:0x0142:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_152: (in SEQ(es, di) : ptr32)
  Class: Eq_47
  DataType: ptr32
  OrigDataType: ptr32
T_153: (in 0x0200 : word16)
  Class: Eq_153
  DataType: word16
  OrigDataType: word16
T_154: (in di - 0x0200 : word16)
  Class: Eq_154
  DataType: word16
  OrigDataType: word16
T_155: (in cond(di - 0x0200) : byte)
  Class: Eq_70
  DataType: byte
  OrigDataType: byte
T_156: (in C : byte)
  Class: Eq_70
  DataType: byte
  OrigDataType: byte
T_157: (in Test(UGE,C) : bool)
  Class: Eq_157
  DataType: bool
  OrigDataType: bool
T_158: (in 0x04 : byte)
  Class: Eq_57
  DataType: byte
  OrigDataType: byte
T_159: (in 0x04 : byte)
  Class: Eq_159
  DataType: uint8
  OrigDataType: uint8
T_160: (in di >>u 0x04 : word16)
  Class: Eq_2
  DataType: uint16
  OrigDataType: uint16
T_161: (in 0x0001 : word16)
  Class: Eq_161
  DataType: word16
  OrigDataType: word16
T_162: (in di + 0x0001 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_163: (in SEQ(es, di) : ptr32)
  Class: Eq_47
  DataType: ptr32
  OrigDataType: ptr32
T_164: (in bp - di : word16)
  Class: Eq_164
  DataType: word16
  OrigDataType: word16
T_165: (in cond(bp - di) : byte)
  Class: Eq_70
  DataType: byte
  OrigDataType: byte
T_166: (in Test(UGE,C) : bool)
  Class: Eq_166
  DataType: bool
  OrigDataType: bool
T_167: (in 0x0200 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_168: (in SEQ(es, di) : ptr32)
  Class: Eq_47
  DataType: ptr32
  OrigDataType: ptr32
T_169: (in 0x0200 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_170: (in 0x0142 : word16)
  Class: Eq_170
  DataType: (memptr T_28 (struct (0 T_171 t0000)))
  OrigDataType: (memptr T_28 (struct (0 T_171 t0000)))
T_171: (in Mem0[0x0A6B:0x0142:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_172: (in bx + dx : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_173: (in 0x0089 : word16)
  Class: Eq_173
  DataType: (memptr T_28 (struct (0 T_174 t0000)))
  OrigDataType: (memptr T_28 (struct (0 T_174 t0000)))
T_174: (in Mem0[0x0A6B:0x0089:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_175: (in 0x008D : word16)
  Class: Eq_175
  DataType: (memptr T_28 (struct (0 T_176 t0000)))
  OrigDataType: (memptr T_28 (struct (0 T_176 t0000)))
T_176: (in Mem0[0x0A6B:0x008D:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_177: (in 0x007B : word16)
  Class: Eq_177
  DataType: (memptr T_28 (struct (0 T_178 t0000)))
  OrigDataType: (memptr T_28 (struct (0 T_178 t0000)))
T_178: (in Mem0[0x0A6B:0x007B:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_179: (in bx - ax : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_180: (in 0x4A : byte)
  Class: Eq_10
  DataType: byte
  OrigDataType: byte
T_181: (in 0x0002 : word16)
  Class: Eq_181
  DataType: word16
  OrigDataType: word16
T_182: (in fp - 0x0002 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_183: (in wLoc02 : word16)
  Class: Eq_2
  DataType: (union (uint16 u0) ((memptr T_31 (struct (0 T_298 t0000))) u1) ((union (ptr16 u0) ((memptr T_31 (struct (0 T_98 t0000) (2 T_63 t0002))) u1)) u2) ((memptr T_146 (struct (0 T_2 t0000))) u3))
  OrigDataType: (union (uint16 u0) ((memptr T_31 (struct (0 T_298 t0000))) u1) ((union (ptr16 u0) ((memptr T_31 (struct (0 T_98 t0000) (2 T_63 t0002))) u1)) u2) ((memptr T_146 (struct (0 T_2 t0000))) u3))
T_184: (in msdos_resize_memory_block : ptr32)
  Class: Eq_184
  DataType: (ptr (fn T_190 (T_31, T_26, T_189)))
  OrigDataType: (ptr (fn T_190 (T_31, T_26, T_189)))
T_185: (in signature of msdos_resize_memory_block : void)
  Class: Eq_184
  DataType: 
  OrigDataType: 
T_186: (in es : selector)
  Class: Eq_2
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_187: (in bx : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_188: (in bxOut : ptr16)
  Class: Eq_188
  DataType: ptr16
  OrigDataType: ptr16
T_189: (in out bx : ptr16)
  Class: Eq_188
  DataType: (ptr (union (uint16 u0) ((memptr T_31 (struct (0 T_298 t0000))) u1) ((union (ptr16 u0) ((memptr T_31 (struct (0 T_98 t0000) (2 T_63 t0002))) u1)) u2) ((memptr T_146 (struct (0 T_2 t0000))) u3)))
  OrigDataType: (ptr (union (uint16 u0) ((memptr T_31 (struct (0 T_298 t0000))) u1) ((union (ptr16 u0) ((memptr T_31 (struct (0 T_98 t0000) (2 T_63 t0002))) u1)) u2) ((memptr T_146 (struct (0 T_2 t0000))) u3)))
T_190: (in msdos_resize_memory_block(es, bx, out bx) : byte)
  Class: Eq_70
  DataType: byte
  OrigDataType: byte
T_191: (in 0x04 : byte)
  Class: Eq_191
  DataType: byte
  OrigDataType: byte
T_192: (in di << 0x04 : word16)
  Class: Eq_2
  DataType: ui16
  OrigDataType: ui16
T_193: (in __cli : ptr32)
  Class: Eq_193
  DataType: (ptr (fn T_194 ()))
  OrigDataType: (ptr (fn T_194 ()))
T_194: (in __cli() : void)
  Class: Eq_194
  DataType: void
  OrigDataType: void
T_195: (in 0x0000 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_196: (in (byte) ax : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_197: (in 0x01C7 : word16)
  Class: Eq_197
  DataType: (memptr T_7 (struct (0 T_198 t0000)))
  OrigDataType: (memptr T_7 (struct (0 T_198 t0000)))
T_198: (in Mem0[0x0800:0x01C7:selector] : selector)
  Class: Eq_2
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_199: (in 0x0554 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_200: (in SEQ(es, di) : ptr32)
  Class: Eq_47
  DataType: ptr32
  OrigDataType: ptr32
T_201: (in 0x05D4 : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_202: (in 0x0080 : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_203: (in SLICE(cx, byte, 8) : byte)
  Class: Eq_55
  DataType: byte
  OrigDataType: byte
T_204: (in (byte) cx : byte)
  Class: Eq_57
  DataType: byte
  OrigDataType: byte
T_205: (in 0x0080 : word16)
  Class: Eq_205
  DataType: word16
  OrigDataType: word16
T_206: (in cond(0x0080) : byte)
  Class: Eq_70
  DataType: byte
  OrigDataType: byte
T_207: (in 0x0002 : word16)
  Class: Eq_207
  DataType: word16
  OrigDataType: word16
T_208: (in sp - 0x0002 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_209: (in cs : selector)
  Class: Eq_209
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_210: (in 0x053E : word16)
  Class: Eq_210
  DataType: (memptr T_20 (struct (0 T_211 t0000)))
  OrigDataType: (memptr T_20 (struct (0 T_211 t0000)))
T_211: (in Mem0[ds:0x053E:word16] : word16)
  Class: Eq_211
  DataType: word16
  OrigDataType: word16
T_212: (in SEQ(cs, Mem0[ds:0x053E:word16]) : ptr32)
  Class: Eq_212
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_213: (in fn0800_01D1 : ptr32)
  Class: Eq_213
  DataType: (ptr (fn T_223 (T_20, T_220, T_183, T_221, T_222)))
  OrigDataType: (ptr (fn T_223 (T_20, T_220, T_183, T_221, T_222)))
T_214: (in signature of fn0800_01D1 : void)
  Class: Eq_213
  DataType: 
  OrigDataType: 
T_215: (in ds : selector)
  Class: Eq_2
  DataType: (ptr (segment (75 T_560 t0075) (7B T_552 t007B) (7D T_562 t007D) (80 T_556 t0080)))
  OrigDataType: (ptr (segment (75 T_560 t0075) (7B T_552 t007B) (7D T_562 t007D) (80 T_556 t0080)))
T_216: (in wArg00 : word16)
  Class: Eq_216
  DataType: word16
  OrigDataType: word16
T_217: (in wArg02 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_218: (in siOut : ptr16)
  Class: Eq_218
  DataType: ptr16
  OrigDataType: ptr16
T_219: (in dsOut : ptr16)
  Class: Eq_219
  DataType: ptr16
  OrigDataType: ptr16
T_220: (in wLoc04 : word16)
  Class: Eq_216
  DataType: word16
  OrigDataType: word16
T_221: (in out si : ptr16)
  Class: Eq_218
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_222: (in out ds : ptr16)
  Class: Eq_219
  DataType: (ptr (ptr (segment (2 T_22 t0002) (2C T_25 t002C) (53E T_211 t053E))))
  OrigDataType: (ptr (ptr (segment (2 T_22 t0002) (2C T_25 t002C) (53E T_211 t053E))))
T_223: (in fn0800_01D1(ds, wLoc04, wLoc02, out si, out ds) : word16)
  Class: Eq_22
  DataType: word16
  OrigDataType: word16
T_224: (in fn0800_02CF : ptr32)
  Class: Eq_224
  DataType: (ptr (fn T_228 (T_113, T_20)))
  OrigDataType: (ptr (fn T_228 (T_113, T_20)))
T_225: (in signature of fn0800_02CF : void)
  Class: Eq_224
  DataType: 
  OrigDataType: 
T_226: (in si : word16)
  Class: Eq_111
  DataType: word16
  OrigDataType: word16
T_227: (in ds : selector)
  Class: Eq_2
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_228: (in fn0800_02CF(si, ds) : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_229: (in 0x0004 : word16)
  Class: Eq_229
  DataType: word16
  OrigDataType: word16
T_230: (in sp + 0x0004 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_231: (in 0x00 : byte)
  Class: Eq_10
  DataType: byte
  OrigDataType: byte
T_232: (in DPB(ax, ah, 8, 8) : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_233: (in bios_get_system_time : ptr32)
  Class: Eq_233
  DataType: (ptr (fn T_237 (T_236)))
  OrigDataType: (ptr (fn T_237 (T_236)))
T_234: (in signature of bios_get_system_time : void)
  Class: Eq_233
  DataType: 
  OrigDataType: 
T_235: (in dxOut : ptr16)
  Class: Eq_235
  DataType: ptr16
  OrigDataType: ptr16
T_236: (in out dx : ptr16)
  Class: Eq_235
  DataType: (ptr (ptr (segment)))
  OrigDataType: (ptr (ptr (segment)))
T_237: (in bios_get_system_time(out dx) : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_238: (in 0x0083 : word16)
  Class: Eq_238
  DataType: (memptr T_20 (struct (0 T_239 t0000)))
  OrigDataType: (memptr T_20 (struct (0 T_239 t0000)))
T_239: (in Mem0[ds:0x0083:word16] : word16)
  Class: Eq_4
  DataType: word16
  OrigDataType: word16
T_240: (in 0x0085 : word16)
  Class: Eq_240
  DataType: (memptr T_20 (struct (0 T_241 t0000)))
  OrigDataType: (memptr T_20 (struct (0 T_241 t0000)))
T_241: (in Mem0[ds:0x0085:word16] : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_242: (in 0x0002 : word16)
  Class: Eq_242
  DataType: word16
  OrigDataType: word16
T_243: (in sp - 0x0002 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_244: (in 0x0542 : word16)
  Class: Eq_244
  DataType: (memptr T_20 (struct (0 T_245 t0000)))
  OrigDataType: (memptr T_20 (struct (0 T_245 t0000)))
T_245: (in Mem0[ds:0x0542:word16] : word16)
  Class: Eq_245
  DataType: word16
  OrigDataType: word16
T_246: (in SEQ(cs, Mem0[ds:0x0542:word16]) : ptr32)
  Class: Eq_246
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_247: (in 0x0002 : word16)
  Class: Eq_247
  DataType: word16
  OrigDataType: word16
T_248: (in sp - 0x0002 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_249: (in 0x0073 : word16)
  Class: Eq_249
  DataType: (memptr T_20 (struct (0 T_250 t0000)))
  OrigDataType: (memptr T_20 (struct (0 T_250 t0000)))
T_250: (in Mem0[ds:0x0073:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_251: (in 0x0000 : word16)
  Class: Eq_251
  DataType: word16
  OrigDataType: word16
T_252: (in sp + 0x0000 : word16)
  Class: Eq_252
  DataType: word16
  OrigDataType: word16
T_253: (in Mem0[ss:sp + 0x0000:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_254: (in 0x0002 : word16)
  Class: Eq_254
  DataType: word16
  OrigDataType: word16
T_255: (in sp - 0x0002 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_256: (in 0x0071 : word16)
  Class: Eq_256
  DataType: (memptr T_20 (struct (0 T_257 t0000)))
  OrigDataType: (memptr T_20 (struct (0 T_257 t0000)))
T_257: (in Mem0[ds:0x0071:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_258: (in 0x0000 : word16)
  Class: Eq_258
  DataType: word16
  OrigDataType: word16
T_259: (in sp + 0x0000 : word16)
  Class: Eq_259
  DataType: word16
  OrigDataType: word16
T_260: (in Mem0[ss:sp + 0x0000:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_261: (in 0x0002 : word16)
  Class: Eq_261
  DataType: word16
  OrigDataType: word16
T_262: (in sp - 0x0002 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_263: (in 0x006F : word16)
  Class: Eq_263
  DataType: (memptr T_20 (struct (0 T_264 t0000)))
  OrigDataType: (memptr T_20 (struct (0 T_264 t0000)))
T_264: (in Mem0[ds:0x006F:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_265: (in 0x0000 : word16)
  Class: Eq_265
  DataType: word16
  OrigDataType: word16
T_266: (in sp + 0x0000 : word16)
  Class: Eq_266
  DataType: word16
  OrigDataType: word16
T_267: (in Mem0[ss:sp + 0x0000:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_268: (in 0x0002 : word16)
  Class: Eq_268
  DataType: word16
  OrigDataType: word16
T_269: (in sp - 0x0002 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_270: (in 0x006D : word16)
  Class: Eq_270
  DataType: (memptr T_20 (struct (0 T_271 t0000)))
  OrigDataType: (memptr T_20 (struct (0 T_271 t0000)))
T_271: (in Mem0[ds:0x006D:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_272: (in 0x0000 : word16)
  Class: Eq_272
  DataType: word16
  OrigDataType: word16
T_273: (in sp + 0x0000 : word16)
  Class: Eq_273
  DataType: word16
  OrigDataType: word16
T_274: (in Mem0[ss:sp + 0x0000:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_275: (in 0x0002 : word16)
  Class: Eq_275
  DataType: word16
  OrigDataType: word16
T_276: (in sp - 0x0002 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_277: (in 0x006B : word16)
  Class: Eq_277
  DataType: (memptr T_20 (struct (0 T_278 t0000)))
  OrigDataType: (memptr T_20 (struct (0 T_278 t0000)))
T_278: (in Mem0[ds:0x006B:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_279: (in 0x0000 : word16)
  Class: Eq_279
  DataType: word16
  OrigDataType: word16
T_280: (in sp + 0x0000 : word16)
  Class: Eq_280
  DataType: word16
  OrigDataType: word16
T_281: (in Mem0[ss:sp + 0x0000:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_282: (in fn083C_0002 : ptr32)
  Class: Eq_282
  DataType: (ptr (fn T_286 (T_23, T_20)))
  OrigDataType: (ptr (fn T_286 (T_23, T_20)))
T_283: (in signature of fn083C_0002 : void)
  Class: Eq_282
  DataType: 
  OrigDataType: 
T_284: (in bp : word16)
  Class: Eq_22
  DataType: word16
  OrigDataType: word16
T_285: (in ds : selector)
  Class: Eq_2
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_286: (in fn083C_0002(bp, ds) : void)
  Class: Eq_286
  DataType: void
  OrigDataType: void
T_287: (in 0x0002 : word16)
  Class: Eq_287
  DataType: word16
  OrigDataType: word16
T_288: (in sp - 0x0002 : word16)
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
T_291: (in Mem0[ss:sp + 0x0000:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_292: (in fn084A_000A : ptr32)
  Class: Eq_292
  DataType: (ptr (fn T_295 (T_20)))
  OrigDataType: (ptr (fn T_295 (T_20)))
T_293: (in signature of fn084A_000A : void)
  Class: Eq_292
  DataType: 
  OrigDataType: 
T_294: (in ds : selector)
  Class: Eq_2
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_295: (in fn084A_000A(ds) : void)
  Class: Eq_295
  DataType: void
  OrigDataType: void
T_296: (in 0x0000 : word16)
  Class: Eq_296
  DataType: word16
  OrigDataType: word16
T_297: (in di + 0x0000 : word16)
  Class: Eq_297
  DataType: word16
  OrigDataType: word16
T_298: (in Mem0[es:di + 0x0000:byte] : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_299: (in 0x0001 : word16)
  Class: Eq_299
  DataType: word16
  OrigDataType: word16
T_300: (in di + 0x0001 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_301: (in SEQ(es, di) : ptr32)
  Class: Eq_47
  DataType: ptr32
  OrigDataType: ptr32
T_302: (in 0x0001 : word16)
  Class: Eq_302
  DataType: word16
  OrigDataType: word16
T_303: (in cx - 0x0001 : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_304: (in SLICE(cx, byte, 8) : byte)
  Class: Eq_55
  DataType: byte
  OrigDataType: byte
T_305: (in (byte) cx : byte)
  Class: Eq_57
  DataType: byte
  OrigDataType: byte
T_306: (in 0x0000 : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_307: (in cx == 0x0000 : bool)
  Class: Eq_307
  DataType: bool
  OrigDataType: bool
T_308: (in fn0800_010D : ptr32)
  Class: Eq_308
  DataType: (ptr (fn T_313 (T_17, T_312)))
  OrigDataType: (ptr (fn T_313 (T_17, T_312)))
T_309: (in signature of fn0800_010D : void)
  Class: Eq_308
  DataType: 
  OrigDataType: 
T_310: (in al : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_311: (in bArg02 : byte)
  Class: Eq_311
  DataType: byte
  OrigDataType: byte
T_312: (in bArg02 : byte)
  Class: Eq_311
  DataType: byte
  OrigDataType: byte
T_313: (in fn0800_010D(al, bArg02) : void)
  Class: Eq_313
  DataType: void
  OrigDataType: void
T_314: (in ds_3 : selector)
  Class: Eq_2
  DataType: (ptr (segment (540 T_324 t0540)))
  OrigDataType: (ptr (segment (540 T_324 t0540)))
T_315: (in 0x01C7 : word16)
  Class: Eq_315
  DataType: (memptr T_7 (struct (0 T_316 t0000)))
  OrigDataType: (memptr T_7 (struct (0 T_316 t0000)))
T_316: (in Mem0[0x0800:0x01C7:selector] : selector)
  Class: Eq_2
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_317: (in fn0800_0172 : ptr32)
  Class: Eq_317
  DataType: (ptr (fn T_321 (T_310, T_314)))
  OrigDataType: (ptr (fn T_321 (T_310, T_314)))
T_318: (in signature of fn0800_0172 : void)
  Class: Eq_317
  DataType: 
  OrigDataType: 
T_319: (in al : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_320: (in ds : selector)
  Class: Eq_2
  DataType: (ptr (segment (5B T_380 t005B) (5F T_384 t005F) (63 T_388 t0063) (67 T_393 t0067)))
  OrigDataType: (ptr (segment (5B T_380 t005B) (5F T_384 t005F) (63 T_388 t0063) (67 T_393 t0067)))
T_321: (in fn0800_0172(al, ds_3) : void)
  Class: Eq_321
  DataType: void
  OrigDataType: void
T_322: (in cs : selector)
  Class: Eq_322
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_323: (in 0x0540 : word16)
  Class: Eq_323
  DataType: (memptr T_314 (struct (0 T_324 t0000)))
  OrigDataType: (memptr T_314 (struct (0 T_324 t0000)))
T_324: (in Mem0[ds_3:0x0540:word16] : word16)
  Class: Eq_324
  DataType: word16
  OrigDataType: word16
T_325: (in SEQ(cs, Mem0[ds_3:0x0540:word16]) : ptr32)
  Class: Eq_325
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_326: (in msdos_terminate : ptr32)
  Class: Eq_326
  DataType: (ptr (fn T_330 (T_329)))
  OrigDataType: (ptr (fn T_330 (T_329)))
T_327: (in signature of msdos_terminate : void)
  Class: Eq_326
  DataType: 
  OrigDataType: 
T_328: (in al : byte)
  Class: Eq_328
  DataType: byte
  OrigDataType: byte
T_329: (in bArg02 : byte)
  Class: Eq_328
  DataType: byte
  OrigDataType: byte
T_330: (in msdos_terminate(bArg02) : void)
  Class: Eq_330
  DataType: void
  OrigDataType: void
T_331: (in es_bx_6 : word32)
  Class: Eq_331
  DataType: word32
  OrigDataType: word32
T_332: (in msdos_get_interrupt_vector : ptr32)
  Class: Eq_332
  DataType: (ptr (fn T_335 (T_43)))
  OrigDataType: (ptr (fn T_335 (T_43)))
T_333: (in signature of msdos_get_interrupt_vector : void)
  Class: Eq_332
  DataType: 
  OrigDataType: 
T_334: (in al : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_335: (in msdos_get_interrupt_vector(al) : word32)
  Class: Eq_331
  DataType: word32
  OrigDataType: word32
T_336: (in (word16) es_bx_6 : word16)
  Class: Eq_336
  DataType: word16
  OrigDataType: word16
T_337: (in 0x005B : word16)
  Class: Eq_337
  DataType: (memptr T_44 (struct (0 T_338 t0000)))
  OrigDataType: (memptr T_44 (struct (0 T_338 t0000)))
T_338: (in Mem9[ds:0x005B:word16] : word16)
  Class: Eq_336
  DataType: word16
  OrigDataType: word16
T_339: (in SLICE(es_bx_6, selector, 16) : selector)
  Class: Eq_339
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_340: (in 0x005D : word16)
  Class: Eq_340
  DataType: (memptr T_44 (struct (0 T_341 t0000)))
  OrigDataType: (memptr T_44 (struct (0 T_341 t0000)))
T_341: (in Mem10[ds:0x005D:word16] : word16)
  Class: Eq_339
  DataType: word16
  OrigDataType: word16
T_342: (in es_bx_11 : word32)
  Class: Eq_342
  DataType: word32
  OrigDataType: word32
T_343: (in msdos_get_interrupt_vector : ptr32)
  Class: Eq_332
  DataType: (ptr (fn T_344 (T_43)))
  OrigDataType: (ptr (fn T_344 (T_43)))
T_344: (in msdos_get_interrupt_vector(al) : word32)
  Class: Eq_342
  DataType: word32
  OrigDataType: word32
T_345: (in (word16) es_bx_11 : word16)
  Class: Eq_345
  DataType: word16
  OrigDataType: word16
T_346: (in 0x005F : word16)
  Class: Eq_346
  DataType: (memptr T_44 (struct (0 T_347 t0000)))
  OrigDataType: (memptr T_44 (struct (0 T_347 t0000)))
T_347: (in Mem14[ds:0x005F:word16] : word16)
  Class: Eq_345
  DataType: word16
  OrigDataType: word16
T_348: (in SLICE(es_bx_11, selector, 16) : selector)
  Class: Eq_348
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_349: (in 0x0061 : word16)
  Class: Eq_349
  DataType: (memptr T_44 (struct (0 T_350 t0000)))
  OrigDataType: (memptr T_44 (struct (0 T_350 t0000)))
T_350: (in Mem15[ds:0x0061:word16] : word16)
  Class: Eq_348
  DataType: word16
  OrigDataType: word16
T_351: (in es_bx_16 : word32)
  Class: Eq_351
  DataType: word32
  OrigDataType: word32
T_352: (in msdos_get_interrupt_vector : ptr32)
  Class: Eq_332
  DataType: (ptr (fn T_353 (T_43)))
  OrigDataType: (ptr (fn T_353 (T_43)))
T_353: (in msdos_get_interrupt_vector(al) : word32)
  Class: Eq_351
  DataType: word32
  OrigDataType: word32
T_354: (in (word16) es_bx_16 : word16)
  Class: Eq_354
  DataType: word16
  OrigDataType: word16
T_355: (in 0x0063 : word16)
  Class: Eq_355
  DataType: (memptr T_44 (struct (0 T_356 t0000)))
  OrigDataType: (memptr T_44 (struct (0 T_356 t0000)))
T_356: (in Mem19[ds:0x0063:word16] : word16)
  Class: Eq_354
  DataType: word16
  OrigDataType: word16
T_357: (in SLICE(es_bx_16, selector, 16) : selector)
  Class: Eq_357
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_358: (in 0x0065 : word16)
  Class: Eq_358
  DataType: (memptr T_44 (struct (0 T_359 t0000)))
  OrigDataType: (memptr T_44 (struct (0 T_359 t0000)))
T_359: (in Mem20[ds:0x0065:word16] : word16)
  Class: Eq_357
  DataType: word16
  OrigDataType: word16
T_360: (in es_bx_21 : word32)
  Class: Eq_360
  DataType: word32
  OrigDataType: word32
T_361: (in msdos_get_interrupt_vector : ptr32)
  Class: Eq_332
  DataType: (ptr (fn T_362 (T_43)))
  OrigDataType: (ptr (fn T_362 (T_43)))
T_362: (in msdos_get_interrupt_vector(al) : word32)
  Class: Eq_360
  DataType: word32
  OrigDataType: word32
T_363: (in (word16) es_bx_21 : word16)
  Class: Eq_363
  DataType: word16
  OrigDataType: word16
T_364: (in 0x0067 : word16)
  Class: Eq_364
  DataType: (memptr T_44 (struct (0 T_365 t0000)))
  OrigDataType: (memptr T_44 (struct (0 T_365 t0000)))
T_365: (in Mem24[ds:0x0067:word16] : word16)
  Class: Eq_363
  DataType: word16
  OrigDataType: word16
T_366: (in SLICE(es_bx_21, selector, 16) : selector)
  Class: Eq_366
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_367: (in 0x0069 : word16)
  Class: Eq_367
  DataType: (memptr T_44 (struct (0 T_368 t0000)))
  OrigDataType: (memptr T_44 (struct (0 T_368 t0000)))
T_368: (in Mem25[ds:0x0069:word16] : word16)
  Class: Eq_366
  DataType: word16
  OrigDataType: word16
T_369: (in msdos_set_interrupt_vector : ptr32)
  Class: Eq_369
  DataType: (ptr (fn T_377 (T_373, T_376)))
  OrigDataType: (ptr (fn T_377 (T_373, T_376)))
T_370: (in signature of msdos_set_interrupt_vector : void)
  Class: Eq_369
  DataType: 
  OrigDataType: 
T_371: (in al : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_372: (in ds_dx : word32)
  Class: Eq_372
  DataType: word32
  OrigDataType: word32
T_373: (in 0x00 : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_374: (in cs : selector)
  Class: Eq_374
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_375: (in 0x0125 : word16)
  Class: Eq_375
  DataType: word16
  OrigDataType: word16
T_376: (in SEQ(cs, 0x0125) : word32)
  Class: Eq_372
  DataType: word32
  OrigDataType: word32
T_377: (in msdos_set_interrupt_vector(0x00, SEQ(cs, 0x0125)) : void)
  Class: Eq_377
  DataType: void
  OrigDataType: void
T_378: (in msdos_set_interrupt_vector : ptr32)
  Class: Eq_369
  DataType: (ptr (fn T_381 (T_319, T_380)))
  OrigDataType: (ptr (fn T_381 (T_319, T_380)))
T_379: (in 0x005B : word16)
  Class: Eq_379
  DataType: (memptr T_320 (struct (0 T_380 t0000)))
  OrigDataType: (memptr T_320 (struct (0 T_380 t0000)))
T_380: (in Mem0[ds:0x005B:segptr32] : segptr32)
  Class: Eq_372
  DataType: segptr32
  OrigDataType: segptr32
T_381: (in msdos_set_interrupt_vector(al, Mem0[ds:0x005B:segptr32]) : void)
  Class: Eq_381
  DataType: void
  OrigDataType: void
T_382: (in msdos_set_interrupt_vector : ptr32)
  Class: Eq_369
  DataType: (ptr (fn T_385 (T_319, T_384)))
  OrigDataType: (ptr (fn T_385 (T_319, T_384)))
T_383: (in 0x005F : word16)
  Class: Eq_383
  DataType: (memptr T_320 (struct (0 T_384 t0000)))
  OrigDataType: (memptr T_320 (struct (0 T_384 t0000)))
T_384: (in Mem0[ds:0x005F:segptr32] : segptr32)
  Class: Eq_372
  DataType: segptr32
  OrigDataType: segptr32
T_385: (in msdos_set_interrupt_vector(al, Mem0[ds:0x005F:segptr32]) : void)
  Class: Eq_385
  DataType: void
  OrigDataType: void
T_386: (in msdos_set_interrupt_vector : ptr32)
  Class: Eq_369
  DataType: (ptr (fn T_389 (T_319, T_388)))
  OrigDataType: (ptr (fn T_389 (T_319, T_388)))
T_387: (in 0x0063 : word16)
  Class: Eq_387
  DataType: (memptr T_320 (struct (0 T_388 t0000)))
  OrigDataType: (memptr T_320 (struct (0 T_388 t0000)))
T_388: (in Mem0[ds:0x0063:segptr32] : segptr32)
  Class: Eq_372
  DataType: segptr32
  OrigDataType: segptr32
T_389: (in msdos_set_interrupt_vector(al, Mem0[ds:0x0063:segptr32]) : void)
  Class: Eq_389
  DataType: void
  OrigDataType: void
T_390: (in msdos_set_interrupt_vector : ptr32)
  Class: Eq_369
  DataType: (ptr (fn T_394 (T_391, T_393)))
  OrigDataType: (ptr (fn T_394 (T_391, T_393)))
T_391: (in 0x06 : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_392: (in 0x0067 : word16)
  Class: Eq_392
  DataType: (memptr T_320 (struct (0 T_393 t0000)))
  OrigDataType: (memptr T_320 (struct (0 T_393 t0000)))
T_393: (in Mem0[ds:0x0067:segptr32] : segptr32)
  Class: Eq_372
  DataType: segptr32
  OrigDataType: segptr32
T_394: (in msdos_set_interrupt_vector(0x06, Mem0[ds:0x0067:segptr32]) : void)
  Class: Eq_394
  DataType: void
  OrigDataType: void
T_395: (in bx : word16)
  Class: Eq_395
  DataType: word16
  OrigDataType: word16
T_396: (in ax_8 : word16)
  Class: Eq_396
  DataType: word16
  OrigDataType: word16
T_397: (in msdos_write_file : ptr32)
  Class: Eq_397
  DataType: (ptr (fn T_407 (T_403, T_404, T_405, T_406)))
  OrigDataType: (ptr (fn T_407 (T_403, T_404, T_405, T_406)))
T_398: (in signature of msdos_write_file : void)
  Class: Eq_397
  DataType: 
  OrigDataType: 
T_399: (in bx : word16)
  Class: Eq_399
  DataType: word16
  OrigDataType: word16
T_400: (in cx : word16)
  Class: Eq_400
  DataType: word16
  OrigDataType: word16
T_401: (in ds_dx : word32)
  Class: Eq_401
  DataType: word32
  OrigDataType: word32
T_402: (in axOut : ptr16)
  Class: Eq_402
  DataType: ptr16
  OrigDataType: ptr16
T_403: (in 0x0002 : word16)
  Class: Eq_399
  DataType: word16
  OrigDataType: word16
T_404: (in cx : word16)
  Class: Eq_400
  DataType: word16
  OrigDataType: word16
T_405: (in ds_dx : word32)
  Class: Eq_401
  DataType: word32
  OrigDataType: word32
T_406: (in out ax_8 : ptr16)
  Class: Eq_402
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_407: (in msdos_write_file(0x0002, cx, ds_dx, out ax_8) : bool)
  Class: Eq_407
  DataType: bool
  OrigDataType: bool
T_408: (in 0x0002 : word16)
  Class: Eq_408
  DataType: word16
  OrigDataType: word16
T_409: (in ds_3 : selector)
  Class: Eq_2
  DataType: (ptr (segment (75 T_472 t0075) (7B T_464 t007B) (7D T_474 t007D) (80 T_468 t0080)))
  OrigDataType: (ptr (segment (75 T_472 t0075) (7B T_464 t007B) (7D T_474 t007D) (80 T_468 t0080)))
T_410: (in 0x01C7 : word16)
  Class: Eq_410
  DataType: (memptr T_7 (struct (0 T_411 t0000)))
  OrigDataType: (memptr T_7 (struct (0 T_411 t0000)))
T_411: (in Mem0[0x0800:0x01C7:selector] : selector)
  Class: Eq_2
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_412: (in bx_4 : word16)
  Class: Eq_412
  DataType: (memptr T_409 (struct (0 T_425 t0000)))
  OrigDataType: (memptr T_409 (struct (0 T_425 t0000)))
T_413: (in fn0800_01A7 : ptr32)
  Class: Eq_413
  DataType: (ptr (fn T_419 (T_417, T_418, T_409)))
  OrigDataType: (ptr (fn T_419 (T_417, T_418, T_409)))
T_414: (in signature of fn0800_01A7 : void)
  Class: Eq_413
  DataType: 
  OrigDataType: 
T_415: (in dx : word16)
  Class: Eq_415
  DataType: word16
  OrigDataType: word16
T_416: (in ds : selector)
  Class: Eq_2
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_417: (in 0x001E : word16)
  Class: Eq_400
  DataType: word16
  OrigDataType: word16
T_418: (in 0x003D : word16)
  Class: Eq_415
  DataType: word16
  OrigDataType: word16
T_419: (in fn0800_01A7(0x001E, 0x003D, ds_3) : word16)
  Class: Eq_412
  DataType: word16
  OrigDataType: word16
T_420: (in fn0800_010D : ptr32)
  Class: Eq_308
  DataType: (ptr (fn T_423 (T_421, T_422)))
  OrigDataType: (ptr (fn T_423 (T_421, T_422)))
T_421: (in 0x03 : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_422: (in bLoc04 : byte)
  Class: Eq_311
  DataType: byte
  OrigDataType: byte
T_423: (in fn0800_010D(0x03, bLoc04) : void)
  Class: Eq_423
  DataType: void
  OrigDataType: void
T_424: (in bx_4 + si : word16)
  Class: Eq_424
  DataType: word16
  OrigDataType: word16
T_425: (in Mem0[ds_3:bx_4 + si:byte] : byte)
  Class: Eq_425
  DataType: byte
  OrigDataType: byte
T_426: (in 0x03 : byte)
  Class: Eq_426
  DataType: byte
  OrigDataType: byte
T_427: (in Mem0[ds_3:bx_4 + si:byte] + 0x03 : byte)
  Class: Eq_425
  DataType: byte
  OrigDataType: byte
T_428: (in bx_4 + si : word16)
  Class: Eq_428
  DataType: word16
  OrigDataType: word16
T_429: (in Mem13[ds_3:bx_4 + si:byte] : byte)
  Class: Eq_425
  DataType: byte
  OrigDataType: byte
T_430: (in bx_4 + si : word16)
  Class: Eq_430
  DataType: word16
  OrigDataType: word16
T_431: (in Mem13[ds_3:bx_4 + si:byte] : byte)
  Class: Eq_425
  DataType: byte
  OrigDataType: byte
T_432: (in 0x03 : byte)
  Class: Eq_432
  DataType: byte
  OrigDataType: byte
T_433: (in Mem13[ds_3:bx_4 + si:byte] + 0x03 : byte)
  Class: Eq_425
  DataType: byte
  OrigDataType: byte
T_434: (in bx_4 + si : word16)
  Class: Eq_434
  DataType: word16
  OrigDataType: word16
T_435: (in Mem15[ds_3:bx_4 + si:byte] : byte)
  Class: Eq_425
  DataType: byte
  OrigDataType: byte
T_436: (in bx_4 + si : word16)
  Class: Eq_436
  DataType: word16
  OrigDataType: word16
T_437: (in Mem15[ds_3:bx_4 + si:byte] : byte)
  Class: Eq_425
  DataType: byte
  OrigDataType: byte
T_438: (in 0x03 : byte)
  Class: Eq_438
  DataType: byte
  OrigDataType: byte
T_439: (in Mem15[ds_3:bx_4 + si:byte] + 0x03 : byte)
  Class: Eq_425
  DataType: byte
  OrigDataType: byte
T_440: (in bx_4 + si : word16)
  Class: Eq_440
  DataType: word16
  OrigDataType: word16
T_441: (in Mem17[ds_3:bx_4 + si:byte] : byte)
  Class: Eq_425
  DataType: byte
  OrigDataType: byte
T_442: (in bx_4 + si : word16)
  Class: Eq_442
  DataType: word16
  OrigDataType: word16
T_443: (in Mem17[ds_3:bx_4 + si:byte] : byte)
  Class: Eq_425
  DataType: byte
  OrigDataType: byte
T_444: (in 0x03 : byte)
  Class: Eq_444
  DataType: byte
  OrigDataType: byte
T_445: (in Mem17[ds_3:bx_4 + si:byte] + 0x03 : byte)
  Class: Eq_425
  DataType: byte
  OrigDataType: byte
T_446: (in bx_4 + si : word16)
  Class: Eq_446
  DataType: word16
  OrigDataType: word16
T_447: (in Mem19[ds_3:bx_4 + si:byte] : byte)
  Class: Eq_425
  DataType: byte
  OrigDataType: byte
T_448: (in bx_4 + si : word16)
  Class: Eq_448
  DataType: word16
  OrigDataType: word16
T_449: (in Mem19[ds_3:bx_4 + si:byte] : byte)
  Class: Eq_425
  DataType: byte
  OrigDataType: byte
T_450: (in 0x03 : byte)
  Class: Eq_450
  DataType: byte
  OrigDataType: byte
T_451: (in Mem19[ds_3:bx_4 + si:byte] + 0x03 : byte)
  Class: Eq_425
  DataType: byte
  OrigDataType: byte
T_452: (in bx_4 + si : word16)
  Class: Eq_452
  DataType: word16
  OrigDataType: word16
T_453: (in Mem21[ds_3:bx_4 + si:byte] : byte)
  Class: Eq_425
  DataType: byte
  OrigDataType: byte
T_454: (in 0x0003 : word16)
  Class: Eq_454
  DataType: word16
  OrigDataType: word16
T_455: (in 0x01C9 : word16)
  Class: Eq_455
  DataType: (memptr T_7 (struct (0 T_456 t0000)))
  OrigDataType: (memptr T_7 (struct (0 T_456 t0000)))
T_456: (in Mem22[0x0800:0x01C9:word16] : word16)
  Class: Eq_454
  DataType: word16
  OrigDataType: word16
T_457: (in wArg00 : word16)
  Class: Eq_457
  DataType: word16
  OrigDataType: word16
T_458: (in 0x01CB : word16)
  Class: Eq_458
  DataType: (memptr T_7 (struct (0 T_459 t0000)))
  OrigDataType: (memptr T_7 (struct (0 T_459 t0000)))
T_459: (in Mem25[0x0800:0x01CB:word16] : word16)
  Class: Eq_457
  DataType: word16
  OrigDataType: word16
T_460: (in 0x01CD : word16)
  Class: Eq_460
  DataType: (memptr T_7 (struct (0 T_461 t0000)))
  OrigDataType: (memptr T_7 (struct (0 T_461 t0000)))
T_461: (in Mem27[0x0800:0x01CD:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_462: (in es_29 : selector)
  Class: Eq_462
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_463: (in 0x007B : word16)
  Class: Eq_463
  DataType: (memptr T_409 (struct (0 T_464 t0000)))
  OrigDataType: (memptr T_409 (struct (0 T_464 t0000)))
T_464: (in Mem27[ds_3:0x007B:selector] : selector)
  Class: Eq_462
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_465: (in ax_33 : word16)
  Class: Eq_465
  DataType: word16
  OrigDataType: word16
T_466: (in 0x0003 : word16)
  Class: Eq_466
  DataType: word16
  OrigDataType: word16
T_467: (in 0x0080 : word16)
  Class: Eq_467
  DataType: (memptr T_409 (struct (0 T_468 t0000)))
  OrigDataType: (memptr T_409 (struct (0 T_468 t0000)))
T_468: (in Mem27[ds_3:0x0080:byte] : byte)
  Class: Eq_468
  DataType: byte
  OrigDataType: byte
T_469: (in DPB(0x0003, Mem27[ds_3:0x0080:byte], 0, 8) : word16)
  Class: Eq_465
  DataType: word16
  OrigDataType: word16
T_470: (in si_42 : word16)
  Class: Eq_470
  DataType: word16
  OrigDataType: word16
T_471: (in 0x0075 : word16)
  Class: Eq_471
  DataType: (memptr T_409 (struct (0 T_472 t0000)))
  OrigDataType: (memptr T_409 (struct (0 T_472 t0000)))
T_472: (in Mem27[ds_3:0x0075:word16] : word16)
  Class: Eq_470
  DataType: word16
  OrigDataType: word16
T_473: (in 0x007D : word16)
  Class: Eq_473
  DataType: (memptr T_409 (struct (0 T_474 t0000)))
  OrigDataType: (memptr T_409 (struct (0 T_474 t0000)))
T_474: (in Mem27[ds_3:0x007D:byte] : byte)
  Class: Eq_474
  DataType: bcu8
  OrigDataType: bcu8
T_475: (in 0x03 : byte)
  Class: Eq_474
  DataType: bcu8
  OrigDataType: bcu8
T_476: (in Mem27[ds_3:0x007D:byte] <u 0x03 : bool)
  Class: Eq_476
  DataType: bool
  OrigDataType: bool
T_477: (in bx_55 : word16)
  Class: Eq_477
  DataType: word16
  OrigDataType: word16
T_478: (in bp_56 : word16)
  Class: Eq_478
  DataType: word16
  OrigDataType: word16
T_479: (in si_57 : word16)
  Class: Eq_479
  DataType: word16
  OrigDataType: word16
T_480: (in al_58 : byte)
  Class: Eq_480
  DataType: byte
  OrigDataType: byte
T_481: (in ch_59 : byte)
  Class: Eq_481
  DataType: byte
  OrigDataType: byte
T_482: (in ds_60 : selector)
  Class: Eq_482
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_483: (in fn0800_0203 : ptr32)
  Class: Eq_483
  DataType: (ptr (fn T_509 (T_497, T_499, T_462, T_501, T_502, T_409, T_503, T_504, T_505, T_506, T_507, T_508)))
  OrigDataType: (ptr (fn T_509 (T_497, T_499, T_462, T_501, T_502, T_409, T_503, T_504, T_505, T_506, T_507, T_508)))
T_484: (in signature of fn0800_0203 : void)
  Class: Eq_483
  DataType: 
  OrigDataType: 
T_485: (in dx : word16)
  Class: Eq_485
  DataType: word16
  OrigDataType: word16
T_486: (in bx : word16)
  Class: Eq_486
  DataType: word16
  OrigDataType: word16
T_487: (in bp : word16)
  Class: Eq_462
  DataType: word16
  OrigDataType: word16
T_488: (in si : word16)
  Class: Eq_111
  DataType: word16
  OrigDataType: word16
T_489: (in ch : byte)
  Class: Eq_489
  DataType: byte
  OrigDataType: byte
T_490: (in ds : selector)
  Class: Eq_2
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_491: (in bxOut : ptr16)
  Class: Eq_491
  DataType: ptr16
  OrigDataType: ptr16
T_492: (in bpOut : ptr16)
  Class: Eq_492
  DataType: ptr16
  OrigDataType: ptr16
T_493: (in siOut : ptr16)
  Class: Eq_493
  DataType: ptr16
  OrigDataType: ptr16
T_494: (in alOut : ptr16)
  Class: Eq_494
  DataType: ptr16
  OrigDataType: ptr16
T_495: (in chOut : ptr16)
  Class: Eq_495
  DataType: ptr16
  OrigDataType: ptr16
T_496: (in dsOut : ptr16)
  Class: Eq_496
  DataType: ptr16
  OrigDataType: ptr16
T_497: (in 0x0081 : word16)
  Class: Eq_485
  DataType: word16
  OrigDataType: word16
T_498: (in 0x0001 : word16)
  Class: Eq_498
  DataType: word16
  OrigDataType: word16
T_499: (in ax_33 + 0x0001 : word16)
  Class: Eq_486
  DataType: word16
  OrigDataType: word16
T_500: (in 0x0002 : word16)
  Class: Eq_500
  DataType: word16
  OrigDataType: word16
T_501: (in si_42 + 0x0002 : word16)
  Class: Eq_111
  DataType: word16
  OrigDataType: word16
T_502: (in 0x00 : byte)
  Class: Eq_489
  DataType: byte
  OrigDataType: byte
T_503: (in out bx_55 : ptr16)
  Class: Eq_491
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_504: (in out bp_56 : ptr16)
  Class: Eq_492
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_505: (in out si_57 : ptr16)
  Class: Eq_493
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_506: (in out al_58 : ptr16)
  Class: Eq_494
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_507: (in out ch_59 : ptr16)
  Class: Eq_495
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_508: (in out ds_60 : ptr16)
  Class: Eq_496
  DataType: (ptr (ptr (segment)))
  OrigDataType: (ptr (ptr (segment)))
T_509: (in fn0800_0203(0x0081, ax_33 + 0x0001, es_29, si_42 + 0x0002, 0x00, ds_3, out bx_55, out bp_56, out si_57, out al_58, out ch_59, out ds_60) : word16)
  Class: Eq_509
  DataType: word16
  OrigDataType: word16
T_510: (in bx_62 : word16)
  Class: Eq_510
  DataType: word16
  OrigDataType: word16
T_511: (in bp_63 : word16)
  Class: Eq_511
  DataType: word16
  OrigDataType: word16
T_512: (in si_64 : word16)
  Class: Eq_512
  DataType: word16
  OrigDataType: word16
T_513: (in al_65 : byte)
  Class: Eq_513
  DataType: byte
  OrigDataType: byte
T_514: (in ch_66 : byte)
  Class: Eq_514
  DataType: byte
  OrigDataType: byte
T_515: (in ds_67 : selector)
  Class: Eq_515
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_516: (in fn0800_0214 : ptr32)
  Class: Eq_516
  DataType: (ptr (fn T_540 (T_530, T_531, T_532, T_462, T_533, T_462, T_534, T_535, T_536, T_537, T_538, T_539)))
  OrigDataType: (ptr (fn T_540 (T_530, T_531, T_532, T_462, T_533, T_462, T_534, T_535, T_536, T_537, T_538, T_539)))
T_517: (in signature of fn0800_0214 : void)
  Class: Eq_516
  DataType: 
  OrigDataType: 
T_518: (in cx : word16)
  Class: Eq_518
  DataType: word16
  OrigDataType: word16
T_519: (in dx : word16)
  Class: Eq_485
  DataType: word16
  OrigDataType: word16
T_520: (in bx : word16)
  Class: Eq_486
  DataType: word16
  OrigDataType: word16
T_521: (in bp : word16)
  Class: Eq_462
  DataType: word16
  OrigDataType: word16
T_522: (in si : word16)
  Class: Eq_111
  DataType: word16
  OrigDataType: word16
T_523: (in es : selector)
  Class: Eq_462
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_524: (in bxOut : ptr16)
  Class: Eq_524
  DataType: ptr16
  OrigDataType: ptr16
T_525: (in bpOut : ptr16)
  Class: Eq_525
  DataType: ptr16
  OrigDataType: ptr16
T_526: (in siOut : ptr16)
  Class: Eq_526
  DataType: ptr16
  OrigDataType: ptr16
T_527: (in alOut : ptr16)
  Class: Eq_527
  DataType: ptr16
  OrigDataType: ptr16
T_528: (in chOut : ptr16)
  Class: Eq_528
  DataType: ptr16
  OrigDataType: ptr16
T_529: (in dsOut : ptr16)
  Class: Eq_529
  DataType: ptr16
  OrigDataType: ptr16
T_530: (in 0x0001 : word16)
  Class: Eq_518
  DataType: word16
  OrigDataType: word16
T_531: (in 0x0081 : word16)
  Class: Eq_485
  DataType: word16
  OrigDataType: word16
T_532: (in ax_33 + 0x0001 : word16)
  Class: Eq_486
  DataType: word16
  OrigDataType: word16
T_533: (in si_42 + 0x0002 : word16)
  Class: Eq_111
  DataType: word16
  OrigDataType: word16
T_534: (in out bx_62 : ptr16)
  Class: Eq_524
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_535: (in out bp_63 : ptr16)
  Class: Eq_525
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_536: (in out si_64 : ptr16)
  Class: Eq_526
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_537: (in out al_65 : ptr16)
  Class: Eq_527
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_538: (in out ch_66 : ptr16)
  Class: Eq_528
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_539: (in out ds_67 : ptr16)
  Class: Eq_529
  DataType: (ptr (ptr (segment)))
  OrigDataType: (ptr (ptr (segment)))
T_540: (in fn0800_0214(0x0001, 0x0081, ax_33 + 0x0001, es_29, si_42 + 0x0002, es_29, out bx_62, out bp_63, out si_64, out al_65, out ch_66, out ds_67) : word16)
  Class: Eq_540
  DataType: word16
  OrigDataType: word16
T_541: (in bp : word16)
  Class: Eq_541
  DataType: word16
  OrigDataType: word16
T_542: (in wArg00 : word16)
  Class: Eq_454
  DataType: word16
  OrigDataType: word16
T_543: (in 0x01C9 : word16)
  Class: Eq_543
  DataType: (memptr T_7 (struct (0 T_544 t0000)))
  OrigDataType: (memptr T_7 (struct (0 T_544 t0000)))
T_544: (in Mem3[0x0800:0x01C9:word16] : word16)
  Class: Eq_454
  DataType: word16
  OrigDataType: word16
T_545: (in wArg02 : word16)
  Class: Eq_457
  DataType: word16
  OrigDataType: word16
T_546: (in 0x01CB : word16)
  Class: Eq_546
  DataType: (memptr T_7 (struct (0 T_547 t0000)))
  OrigDataType: (memptr T_7 (struct (0 T_547 t0000)))
T_547: (in Mem6[0x0800:0x01CB:word16] : word16)
  Class: Eq_457
  DataType: word16
  OrigDataType: word16
T_548: (in 0x01CD : word16)
  Class: Eq_548
  DataType: (memptr T_7 (struct (0 T_549 t0000)))
  OrigDataType: (memptr T_7 (struct (0 T_549 t0000)))
T_549: (in Mem9[0x0800:0x01CD:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_550: (in es_11 : selector)
  Class: Eq_462
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_551: (in 0x007B : word16)
  Class: Eq_551
  DataType: (memptr T_215 (struct (0 T_552 t0000)))
  OrigDataType: (memptr T_215 (struct (0 T_552 t0000)))
T_552: (in Mem9[ds:0x007B:selector] : selector)
  Class: Eq_462
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_553: (in ax_16 : word16)
  Class: Eq_553
  DataType: word16
  OrigDataType: word16
T_554: (in ax : word16)
  Class: Eq_554
  DataType: word16
  OrigDataType: word16
T_555: (in 0x0080 : word16)
  Class: Eq_555
  DataType: (memptr T_215 (struct (0 T_556 t0000)))
  OrigDataType: (memptr T_215 (struct (0 T_556 t0000)))
T_556: (in Mem9[ds:0x0080:byte] : byte)
  Class: Eq_556
  DataType: byte
  OrigDataType: byte
T_557: (in DPB(ax, Mem9[ds:0x0080:byte], 0, 8) : word16)
  Class: Eq_553
  DataType: word16
  OrigDataType: word16
T_558: (in si_26 : word16)
  Class: Eq_558
  DataType: word16
  OrigDataType: word16
T_559: (in 0x0075 : word16)
  Class: Eq_559
  DataType: (memptr T_215 (struct (0 T_560 t0000)))
  OrigDataType: (memptr T_215 (struct (0 T_560 t0000)))
T_560: (in Mem9[ds:0x0075:word16] : word16)
  Class: Eq_558
  DataType: word16
  OrigDataType: word16
T_561: (in 0x007D : word16)
  Class: Eq_561
  DataType: (memptr T_215 (struct (0 T_562 t0000)))
  OrigDataType: (memptr T_215 (struct (0 T_562 t0000)))
T_562: (in Mem9[ds:0x007D:byte] : byte)
  Class: Eq_562
  DataType: bcu8
  OrigDataType: bcu8
T_563: (in 0x03 : byte)
  Class: Eq_562
  DataType: bcu8
  OrigDataType: bcu8
T_564: (in Mem9[ds:0x007D:byte] <u 0x03 : bool)
  Class: Eq_564
  DataType: bool
  OrigDataType: bool
T_565: (in bx_55 : word16)
  Class: Eq_565
  DataType: word16
  OrigDataType: word16
T_566: (in bp_56 : word16)
  Class: Eq_566
  DataType: word16
  OrigDataType: word16
T_567: (in si_57 : word16)
  Class: Eq_567
  DataType: word16
  OrigDataType: word16
T_568: (in al_58 : byte)
  Class: Eq_568
  DataType: byte
  OrigDataType: byte
T_569: (in ch_59 : byte)
  Class: Eq_569
  DataType: byte
  OrigDataType: byte
T_570: (in ds_60 : selector)
  Class: Eq_570
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_571: (in fn0800_0214 : ptr32)
  Class: Eq_516
  DataType: (ptr (fn T_584 (T_572, T_573, T_575, T_550, T_577, T_550, T_578, T_579, T_580, T_581, T_582, T_583)))
  OrigDataType: (ptr (fn T_584 (T_572, T_573, T_575, T_550, T_577, T_550, T_578, T_579, T_580, T_581, T_582, T_583)))
T_572: (in 0x0001 : word16)
  Class: Eq_518
  DataType: word16
  OrigDataType: word16
T_573: (in 0x0081 : word16)
  Class: Eq_485
  DataType: word16
  OrigDataType: word16
T_574: (in 0x0001 : word16)
  Class: Eq_574
  DataType: word16
  OrigDataType: word16
T_575: (in ax_16 + 0x0001 : word16)
  Class: Eq_486
  DataType: word16
  OrigDataType: word16
T_576: (in 0x0002 : word16)
  Class: Eq_576
  DataType: word16
  OrigDataType: word16
T_577: (in si_26 + 0x0002 : word16)
  Class: Eq_111
  DataType: word16
  OrigDataType: word16
T_578: (in out bx_55 : ptr16)
  Class: Eq_524
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_579: (in out bp_56 : ptr16)
  Class: Eq_525
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_580: (in out si_57 : ptr16)
  Class: Eq_526
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_581: (in out al_58 : ptr16)
  Class: Eq_527
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_582: (in out ch_59 : ptr16)
  Class: Eq_528
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_583: (in out ds_60 : ptr16)
  Class: Eq_529
  DataType: (ptr (ptr (segment)))
  OrigDataType: (ptr (ptr (segment)))
T_584: (in fn0800_0214(0x0001, 0x0081, ax_16 + 0x0001, es_11, si_26 + 0x0002, es_11, out bx_55, out bp_56, out si_57, out al_58, out ch_59, out ds_60) : word16)
  Class: Eq_584
  DataType: word16
  OrigDataType: word16
T_585: (in bx_41 : word16)
  Class: Eq_486
  DataType: word16
  OrigDataType: word16
T_586: (in bp_42 : word16)
  Class: Eq_462
  DataType: word16
  OrigDataType: word16
T_587: (in si_43 : word16)
  Class: Eq_111
  DataType: word16
  OrigDataType: word16
T_588: (in al_44 : byte)
  Class: Eq_588
  DataType: byte
  OrigDataType: byte
T_589: (in ch_45 : byte)
  Class: Eq_489
  DataType: byte
  OrigDataType: byte
T_590: (in ds_46 : selector)
  Class: Eq_2
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_591: (in dx_47 : word16)
  Class: Eq_485
  DataType: word16
  OrigDataType: word16
T_592: (in fn0800_0203 : ptr32)
  Class: Eq_483
  DataType: (ptr (fn T_603 (T_593, T_594, T_550, T_595, T_596, T_215, T_597, T_598, T_599, T_600, T_601, T_602)))
  OrigDataType: (ptr (fn T_603 (T_593, T_594, T_550, T_595, T_596, T_215, T_597, T_598, T_599, T_600, T_601, T_602)))
T_593: (in 0x0081 : word16)
  Class: Eq_485
  DataType: word16
  OrigDataType: word16
T_594: (in ax_16 + 0x0001 : word16)
  Class: Eq_486
  DataType: word16
  OrigDataType: word16
T_595: (in si_26 + 0x0002 : word16)
  Class: Eq_111
  DataType: word16
  OrigDataType: word16
T_596: (in 0x00 : byte)
  Class: Eq_489
  DataType: byte
  OrigDataType: byte
T_597: (in out bx_41 : ptr16)
  Class: Eq_491
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_598: (in out bp_42 : ptr16)
  Class: Eq_492
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_599: (in out si_43 : ptr16)
  Class: Eq_493
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_600: (in out al_44 : ptr16)
  Class: Eq_494
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_601: (in out ch_45 : ptr16)
  Class: Eq_495
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_602: (in out ds_46 : ptr16)
  Class: Eq_496
  DataType: (ptr (ptr (segment)))
  OrigDataType: (ptr (ptr (segment)))
T_603: (in fn0800_0203(0x0081, ax_16 + 0x0001, es_11, si_26 + 0x0002, 0x00, ds, out bx_41, out bp_42, out si_43, out al_44, out ch_45, out ds_46) : word16)
  Class: Eq_485
  DataType: word16
  OrigDataType: word16
T_604: (in bx_48 : word16)
  Class: Eq_604
  DataType: word16
  OrigDataType: word16
T_605: (in bp_49 : word16)
  Class: Eq_605
  DataType: word16
  OrigDataType: word16
T_606: (in si_50 : word16)
  Class: Eq_606
  DataType: word16
  OrigDataType: word16
T_607: (in al_51 : byte)
  Class: Eq_607
  DataType: byte
  OrigDataType: byte
T_608: (in ch_52 : byte)
  Class: Eq_608
  DataType: byte
  OrigDataType: byte
T_609: (in ds_53 : selector)
  Class: Eq_609
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_610: (in fn0800_0203 : ptr32)
  Class: Eq_483
  DataType: (ptr (fn T_617 (T_591, T_585, T_586, T_587, T_589, T_590, T_611, T_612, T_613, T_614, T_615, T_616)))
  OrigDataType: (ptr (fn T_617 (T_591, T_585, T_586, T_587, T_589, T_590, T_611, T_612, T_613, T_614, T_615, T_616)))
T_611: (in out bx_48 : ptr16)
  Class: Eq_491
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_612: (in out bp_49 : ptr16)
  Class: Eq_492
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_613: (in out si_50 : ptr16)
  Class: Eq_493
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_614: (in out al_51 : ptr16)
  Class: Eq_494
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_615: (in out ch_52 : ptr16)
  Class: Eq_495
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_616: (in out ds_53 : ptr16)
  Class: Eq_496
  DataType: (ptr (ptr (segment)))
  OrigDataType: (ptr (ptr (segment)))
T_617: (in fn0800_0203(dx_47, bx_41, bp_42, si_43, ch_45, ds_46, out bx_48, out bp_49, out si_50, out al_51, out ch_52, out ds_53) : word16)
  Class: Eq_617
  DataType: word16
  OrigDataType: word16
T_618: (in *dsOut : selector)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_619: (in *siOut : word16)
  Class: Eq_111
  DataType: 
  OrigDataType: 
T_620: (in *chOut : byte)
  Class: Eq_489
  DataType: 
  OrigDataType: 
T_621: (in *bxOut : word16)
  Class: Eq_486
  DataType: 
  OrigDataType: 
T_622: (in *bpOut : word16)
  Class: Eq_462
  DataType: 
  OrigDataType: 
T_623: (in es_2 : selector)
  Class: Eq_462
  DataType: 
  OrigDataType: 
T_624: (in 0x0077 : word16)
  Class: Eq_624
  DataType: 
  OrigDataType: 
T_625: (in Mem0[ds:0x0077:selector] : selector)
  Class: Eq_462
  DataType: 
  OrigDataType: 
T_626: (in di_16 : word16)
  Class: Eq_111
  DataType: 
  OrigDataType: 
T_627: (in cl_17 : byte)
  Class: Eq_627
  DataType: 
  OrigDataType: 
T_628: (in 0x7F : byte)
  Class: Eq_627
  DataType: 
  OrigDataType: 
T_629: (in cx_18 : word16)
  Class: Eq_629
  DataType: 
  OrigDataType: 
T_630: (in cx : word16)
  Class: Eq_630
  DataType: 
  OrigDataType: 
T_631: (in 0x7F : byte)
  Class: Eq_631
  DataType: 
  OrigDataType: 
T_632: (in DPB(cx, 0x7F, 0, 8) : word16)
  Class: Eq_629
  DataType: 
  OrigDataType: 
T_633: (in al_8 : byte)
  Class: Eq_633
  DataType: 
  OrigDataType: 
T_634: (in 0x00 : byte)
  Class: Eq_634
  DataType: 
  OrigDataType: 
T_635: (in *alOut : byte)
  Class: Eq_634
  DataType: 
  OrigDataType: 
T_636: (in 0x0000 : word16)
  Class: Eq_629
  DataType: 
  OrigDataType: 
T_637: (in cx_18 == 0x0000 : bool)
  Class: Eq_637
  DataType: 
  OrigDataType: 
T_638: (in 0x0001 : word16)
  Class: Eq_638
  DataType: 
  OrigDataType: 
T_639: (in cx_18 - 0x0001 : word16)
  Class: Eq_629
  DataType: 
  OrigDataType: 
T_640: (in di_63 : word16)
  Class: Eq_111
  DataType: 
  OrigDataType: 
T_641: (in 0x0001 : word16)
  Class: Eq_641
  DataType: 
  OrigDataType: 
T_642: (in di_63 + 0x0001 : word16)
  Class: Eq_111
  DataType: 
  OrigDataType: 
T_643: (in (byte) cx_18 : byte)
  Class: Eq_627
  DataType: 
  OrigDataType: 
T_644: (in ch_62 : byte)
  Class: Eq_644
  DataType: 
  OrigDataType: 
T_645: (in SLICE(cx_18, byte, 8) : byte)
  Class: Eq_645
  DataType: 
  OrigDataType: 
T_646: (in *chOut : byte)
  Class: Eq_645
  DataType: 
  OrigDataType: 
T_647: (in 0x00 : byte)
  Class: Eq_647
  DataType: 
  OrigDataType: 
T_648: (in 0x0000 : word16)
  Class: Eq_648
  DataType: 
  OrigDataType: 
T_649: (in di_63 + 0x0000 : word16)
  Class: Eq_649
  DataType: 
  OrigDataType: 
T_650: (in Mem0[es_2:di_63 + 0x0000:byte] : byte)
  Class: Eq_647
  DataType: 
  OrigDataType: 
T_651: (in 0x00 != Mem0[es_2:di_63 + 0x0000:byte] : bool)
  Class: Eq_651
  DataType: 
  OrigDataType: 
T_652: (in 0x0000 : word16)
  Class: Eq_629
  DataType: 
  OrigDataType: 
T_653: (in cx_18 == 0x0000 : bool)
  Class: Eq_653
  DataType: 
  OrigDataType: 
T_654: (in cx_44 : word16)
  Class: Eq_518
  DataType: 
  OrigDataType: 
T_655: (in 0x7F : byte)
  Class: Eq_655
  DataType: 
  OrigDataType: 
T_656: (in cl_17 ^ 0x7F : byte)
  Class: Eq_656
  DataType: 
  OrigDataType: 
T_657: (in DPB(cx_18, cl_17 ^ 0x7F, 0, 8) : word16)
  Class: Eq_518
  DataType: 
  OrigDataType: 
T_658: (in bx_50 : word16)
  Class: Eq_658
  DataType: 
  OrigDataType: 
T_659: (in bp_51 : word16)
  Class: Eq_659
  DataType: 
  OrigDataType: 
T_660: (in si_52 : word16)
  Class: Eq_660
  DataType: 
  OrigDataType: 
T_661: (in al_53 : byte)
  Class: Eq_661
  DataType: 
  OrigDataType: 
T_662: (in ch_54 : byte)
  Class: Eq_662
  DataType: 
  OrigDataType: 
T_663: (in ds_55 : selector)
  Class: Eq_663
  DataType: 
  OrigDataType: 
T_664: (in fn0800_0214 : ptr32)
  Class: Eq_516
  DataType: 
  OrigDataType: 
T_665: (in out bx_50 : ptr16)
  Class: Eq_524
  DataType: 
  OrigDataType: 
T_666: (in out bp_51 : ptr16)
  Class: Eq_525
  DataType: 
  OrigDataType: 
T_667: (in out si_52 : ptr16)
  Class: Eq_526
  DataType: 
  OrigDataType: 
T_668: (in out al_53 : ptr16)
  Class: Eq_527
  DataType: 
  OrigDataType: 
T_669: (in out ch_54 : ptr16)
  Class: Eq_528
  DataType: 
  OrigDataType: 
T_670: (in out ds_55 : ptr16)
  Class: Eq_529
  DataType: 
  OrigDataType: 
T_671: (in fn0800_0214(cx_44, dx, bx, bp, si, es_2, out bx_50, out bp_51, out si_52, out al_53, out ch_54, out ds_55) : word16)
  Class: Eq_671
  DataType: 
  OrigDataType: 
T_672: (in fn0800_0287 : ptr32)
  Class: Eq_672
  DataType: 
  OrigDataType: 
T_673: (in signature of fn0800_0287 : void)
  Class: Eq_672
  DataType: 
  OrigDataType: 
T_674: (in si : word16)
  Class: Eq_111
  DataType: 
  OrigDataType: 
T_675: (in fn0800_0287(si) : void)
  Class: Eq_675
  DataType: 
  OrigDataType: 
T_676: (in *bxOut : word16)
  Class: Eq_486
  DataType: 
  OrigDataType: 
T_677: (in *siOut : word16)
  Class: Eq_111
  DataType: 
  OrigDataType: 
T_678: (in *bpOut : word16)
  Class: Eq_462
  DataType: 
  OrigDataType: 
T_679: (in ds : selector)
  Class: Eq_679
  DataType: 
  OrigDataType: 
T_680: (in *dsOut : selector)
  Class: Eq_679
  DataType: 
  OrigDataType: 
T_681: (in ch : byte)
  Class: Eq_681
  DataType: 
  OrigDataType: 
T_682: (in *chOut : byte)
  Class: Eq_681
  DataType: 
  OrigDataType: 
T_683: (in ax_6 : word16)
  Class: Eq_683
  DataType: 
  OrigDataType: 
T_684: (in 0x0001 : word16)
  Class: Eq_684
  DataType: 
  OrigDataType: 
T_685: (in bx + 0x0001 : word16)
  Class: Eq_685
  DataType: 
  OrigDataType: 
T_686: (in bx + 0x0001 + cx : word16)
  Class: Eq_683
  DataType: 
  OrigDataType: 
T_687: (in al_8 : byte)
  Class: Eq_687
  DataType: 
  OrigDataType: 
T_688: (in 0xFFFE : word16)
  Class: Eq_688
  DataType: 
  OrigDataType: 
T_689: (in ax_6 & 0xFFFE : word16)
  Class: Eq_689
  DataType: 
  OrigDataType: 
T_690: (in (byte) (ax_6 & 0xFFFE) : byte)
  Class: Eq_690
  DataType: 
  OrigDataType: 
T_691: (in *alOut : byte)
  Class: Eq_690
  DataType: 
  OrigDataType: 
T_692: (in di_10 : word16)
  Class: Eq_111
  DataType: 
  OrigDataType: 
T_693: (in fp : ptr16)
  Class: Eq_693
  DataType: 
  OrigDataType: 
T_694: (in 0x0002 : word16)
  Class: Eq_694
  DataType: 
  OrigDataType: 
T_695: (in fp - 0x0002 : word16)
  Class: Eq_695
  DataType: 
  OrigDataType: 
T_696: (in ax_6 & 0xFFFE : word16)
  Class: Eq_696
  DataType: 
  OrigDataType: 
T_697: (in fp - 0x0002 - (ax_6 & 0xFFFE) : word16)
  Class: Eq_697
  DataType: 
  OrigDataType: 
T_698: (in 0x0001 : word16)
  Class: Eq_698
  DataType: 
  OrigDataType: 
T_699: (in fp - 0x0002 - (ax_6 & 0xFFFE) + 0x0001 : word16)
  Class: Eq_111
  DataType: 
  OrigDataType: 
T_700: (in 0x0000 : word16)
  Class: Eq_111
  DataType: 
  OrigDataType: 
T_701: (in di_10 <u 0x0000 : bool)
  Class: Eq_701
  DataType: 
  OrigDataType: 
T_702: (in fn0800_0287 : ptr32)
  Class: Eq_672
  DataType: 
  OrigDataType: 
T_703: (in fn0800_0287(si) : void)
  Class: Eq_703
  DataType: 
  OrigDataType: 
T_704: (in ss : selector)
  Class: Eq_704
  DataType: 
  OrigDataType: 
T_705: (in 0x0002 : word16)
  Class: Eq_705
  DataType: 
  OrigDataType: 
T_706: (in di_10 - 0x0002 : word16)
  Class: Eq_706
  DataType: 
  OrigDataType: 
T_707: (in Mem45[ss:di_10 - 0x0002:word16] : word16)
  Class: Eq_518
  DataType: 
  OrigDataType: 
T_708: (in cx_46 : word16)
  Class: Eq_708
  DataType: 
  OrigDataType: 
T_709: (in 0x0001 : word16)
  Class: Eq_709
  DataType: 
  OrigDataType: 
T_710: (in cx - 0x0001 : word16)
  Class: Eq_710
  DataType: 
  OrigDataType: 
T_711: (in 0x0001 : word16)
  Class: Eq_711
  DataType: 
  OrigDataType: 
T_712: (in cx - 0x0001 + 0x0001 : word16)
  Class: Eq_708
  DataType: 
  OrigDataType: 
T_713: (in di_51 : word16)
  Class: Eq_111
  DataType: 
  OrigDataType: 
T_714: (in 0x00 : byte)
  Class: Eq_714
  DataType: 
  OrigDataType: 
T_715: (in 0x0000 : word16)
  Class: Eq_715
  DataType: 
  OrigDataType: 
T_716: (in di_51 + 0x0000 : word16)
  Class: Eq_716
  DataType: 
  OrigDataType: 
T_717: (in Mem62[ss:di_51 + 0x0000:byte] : byte)
  Class: Eq_714
  DataType: 
  OrigDataType: 
T_718: (in di_103 : word16)
  Class: Eq_718
  DataType: 
  OrigDataType: 
T_719: (in 0x0000 : word16)
  Class: Eq_719
  DataType: 
  OrigDataType: 
T_720: (in di_51 + 0x0000 : word16)
  Class: Eq_718
  DataType: 
  OrigDataType: 
T_721: (in si_102 : word16)
  Class: Eq_485
  DataType: 
  OrigDataType: 
T_722: (in cx_104 : word16)
  Class: Eq_486
  DataType: 
  OrigDataType: 
T_723: (in ax_110 : word16)
  Class: Eq_708
  DataType: 
  OrigDataType: 
T_724: (in al_109 : byte)
  Class: Eq_724
  DataType: 
  OrigDataType: 
T_725: (in (byte) cx_46 : byte)
  Class: Eq_725
  DataType: 
  OrigDataType: 
T_726: (in *alOut : byte)
  Class: Eq_725
  DataType: 
  OrigDataType: 
T_727: (in dx_117 : word16)
  Class: Eq_708
  DataType: 
  OrigDataType: 
T_728: (in bx_118 : word16)
  Class: Eq_728
  DataType: 
  OrigDataType: 
T_729: (in 0x0000 : word16)
  Class: Eq_729
  DataType: 
  OrigDataType: 
T_730: (in cx_46 + 0x0000 : word16)
  Class: Eq_728
  DataType: 
  OrigDataType: 
T_731: (in 0x0000 : word16)
  Class: Eq_731
  DataType: 
  OrigDataType: 
T_732: (in si + 0x0000 : word16)
  Class: Eq_732
  DataType: 
  OrigDataType: 
T_733: (in Mem45[es:si + 0x0000:byte] : byte)
  Class: Eq_733
  DataType: 
  OrigDataType: 
T_734: (in 0x0000 : word16)
  Class: Eq_734
  DataType: 
  OrigDataType: 
T_735: (in di_51 + 0x0000 : word16)
  Class: Eq_735
  DataType: 
  OrigDataType: 
T_736: (in Mem55[ss:di_51 + 0x0000:byte] : byte)
  Class: Eq_733
  DataType: 
  OrigDataType: 
T_737: (in 0x0001 : word16)
  Class: Eq_737
  DataType: 
  OrigDataType: 
T_738: (in si + 0x0001 : word16)
  Class: Eq_111
  DataType: 
  OrigDataType: 
T_739: (in 0x0001 : word16)
  Class: Eq_739
  DataType: 
  OrigDataType: 
T_740: (in di_51 + 0x0001 : word16)
  Class: Eq_111
  DataType: 
  OrigDataType: 
T_741: (in 0x0001 : word16)
  Class: Eq_741
  DataType: 
  OrigDataType: 
T_742: (in cx_46 - 0x0001 : word16)
  Class: Eq_708
  DataType: 
  OrigDataType: 
T_743: (in 0xFFFF : word16)
  Class: Eq_708
  DataType: 
  OrigDataType: 
T_744: (in cx_46 == 0xFFFF : bool)
  Class: Eq_744
  DataType: 
  OrigDataType: 
T_745: (in 0x20 : byte)
  Class: Eq_724
  DataType: 
  OrigDataType: 
T_746: (in al_109 == 0x20 : bool)
  Class: Eq_746
  DataType: 
  OrigDataType: 
T_747: (in C_124 : byte)
  Class: Eq_747
  DataType: 
  OrigDataType: 
T_748: (in cx_141 : word16)
  Class: Eq_748
  DataType: 
  OrigDataType: 
T_749: (in di_10 - 0x0002 : word16)
  Class: Eq_749
  DataType: 
  OrigDataType: 
T_750: (in Mem62[ss:di_10 - 0x0002:word16] : word16)
  Class: Eq_750
  DataType: 
  OrigDataType: 
T_751: (in Mem62[ss:di_10 - 0x0002:word16] + dx_117 : word16)
  Class: Eq_748
  DataType: 
  OrigDataType: 
T_752: (in ds_143 : selector)
  Class: Eq_752
  DataType: 
  OrigDataType: 
T_753: (in 0x01CD : word16)
  Class: Eq_753
  DataType: 
  OrigDataType: 
T_754: (in Mem62[0x0800:0x01CD:selector] : selector)
  Class: Eq_752
  DataType: 
  OrigDataType: 
T_755: (in *dsOut : selector)
  Class: Eq_752
  DataType: 
  OrigDataType: 
T_756: (in 0x006B : word16)
  Class: Eq_756
  DataType: 
  OrigDataType: 
T_757: (in Mem144[ds_143:0x006B:word16] : word16)
  Class: Eq_728
  DataType: 
  OrigDataType: 
T_758: (in bx_147 : word16)
  Class: Eq_758
  DataType: 
  OrigDataType: 
T_759: (in 0x0001 : word16)
  Class: Eq_759
  DataType: 
  OrigDataType: 
T_760: (in bx_118 + 0x0001 : word16)
  Class: Eq_760
  DataType: 
  OrigDataType: 
T_761: (in 0x0002 : word16)
  Class: Eq_761
  DataType: 
  OrigDataType: 
T_762: (in (bx_118 + 0x0001) * 0x0002 : word16)
  Class: Eq_762
  DataType: 
  OrigDataType: 
T_763: (in 0x0002 : word16)
  Class: Eq_763
  DataType: 
  OrigDataType: 
T_764: (in (bx_118 + 0x0001) * 0x0002 * 0x0002 : word16)
  Class: Eq_758
  DataType: 
  OrigDataType: 
T_765: (in *bxOut : word16)
  Class: Eq_758
  DataType: 
  OrigDataType: 
T_766: (in ch_142 : byte)
  Class: Eq_766
  DataType: 
  OrigDataType: 
T_767: (in SLICE(cx_141, byte, 8) : byte)
  Class: Eq_766
  DataType: 
  OrigDataType: 
T_768: (in *chOut : byte)
  Class: Eq_766
  DataType: 
  OrigDataType: 
T_769: (in si_148 : word16)
  Class: Eq_111
  DataType: 
  OrigDataType: 
T_770: (in *siOut : word16)
  Class: Eq_111
  DataType: 
  OrigDataType: 
T_771: (in bp_150 : word16)
  Class: Eq_771
  DataType: 
  OrigDataType: 
T_772: (in di_10 - bx_147 : word16)
  Class: Eq_772
  DataType: 
  OrigDataType: 
T_773: (in 0x0002 : word16)
  Class: Eq_773
  DataType: 
  OrigDataType: 
T_774: (in di_10 - bx_147 + 0x0002 : word16)
  Class: Eq_771
  DataType: 
  OrigDataType: 
T_775: (in *bpOut : word16)
  Class: Eq_771
  DataType: 
  OrigDataType: 
T_776: (in 0x0000 : word16)
  Class: Eq_771
  DataType: 
  OrigDataType: 
T_777: (in bp_150 <u 0x0000 : bool)
  Class: Eq_777
  DataType: 
  OrigDataType: 
T_778: (in CZ_134 : byte)
  Class: Eq_747
  DataType: 
  OrigDataType: 
T_779: (in fn0800_025F : ptr32)
  Class: Eq_779
  DataType: 
  OrigDataType: 
T_780: (in signature of fn0800_025F : void)
  Class: Eq_779
  DataType: 
  OrigDataType: 
T_781: (in ax : word16)
  Class: Eq_708
  DataType: 
  OrigDataType: 
T_782: (in cx : word16)
  Class: Eq_486
  DataType: 
  OrigDataType: 
T_783: (in dx : word16)
  Class: Eq_708
  DataType: 
  OrigDataType: 
T_784: (in bx : word16)
  Class: Eq_728
  DataType: 
  OrigDataType: 
T_785: (in si : word16)
  Class: Eq_485
  DataType: 
  OrigDataType: 
T_786: (in di : word16)
  Class: Eq_718
  DataType: 
  OrigDataType: 
T_787: (in es : selector)
  Class: Eq_704
  DataType: 
  OrigDataType: 
T_788: (in ds : selector)
  Class: Eq_462
  DataType: 
  OrigDataType: 
T_789: (in axOut : ptr16)
  Class: Eq_789
  DataType: 
  OrigDataType: 
T_790: (in cxOut : ptr16)
  Class: Eq_790
  DataType: 
  OrigDataType: 
T_791: (in dxOut : ptr16)
  Class: Eq_791
  DataType: 
  OrigDataType: 
T_792: (in bxOut : ptr16)
  Class: Eq_792
  DataType: 
  OrigDataType: 
T_793: (in siOut : ptr16)
  Class: Eq_793
  DataType: 
  OrigDataType: 
T_794: (in diOut : ptr16)
  Class: Eq_794
  DataType: 
  OrigDataType: 
T_795: (in out ax_110 : ptr16)
  Class: Eq_789
  DataType: 
  OrigDataType: 
T_796: (in out cx_104 : ptr16)
  Class: Eq_790
  DataType: 
  OrigDataType: 
T_797: (in out dx_117 : ptr16)
  Class: Eq_791
  DataType: 
  OrigDataType: 
T_798: (in out bx_118 : ptr16)
  Class: Eq_792
  DataType: 
  OrigDataType: 
T_799: (in out si_102 : ptr16)
  Class: Eq_793
  DataType: 
  OrigDataType: 
T_800: (in out di_103 : ptr16)
  Class: Eq_794
  DataType: 
  OrigDataType: 
T_801: (in fn0800_025F(ax_110, cx_104, dx_117, bx_118, si_102, di_103, ss, bp, out ax_110, out cx_104, out dx_117, out bx_118, out si_102, out di_103) : byte)
  Class: Eq_747
  DataType: 
  OrigDataType: 
T_802: (in 0x00 : byte)
  Class: Eq_802
  DataType: 
  OrigDataType: 
T_803: (in *alOut : byte)
  Class: Eq_802
  DataType: 
  OrigDataType: 
T_804: (in 0x00 : byte)
  Class: Eq_804
  DataType: 
  OrigDataType: 
T_805: (in DPB(ax_110, 0x00, 0, 8) : word16)
  Class: Eq_708
  DataType: 
  OrigDataType: 
T_806: (in 0x0D : byte)
  Class: Eq_724
  DataType: 
  OrigDataType: 
T_807: (in al_109 == 0x0D : bool)
  Class: Eq_807
  DataType: 
  OrigDataType: 
T_808: (in 0x09 : byte)
  Class: Eq_724
  DataType: 
  OrigDataType: 
T_809: (in al_109 != 0x09 : bool)
  Class: Eq_809
  DataType: 
  OrigDataType: 
T_810: (in CZ_91 : byte)
  Class: Eq_747
  DataType: 
  OrigDataType: 
T_811: (in fn0800_025F : ptr32)
  Class: Eq_779
  DataType: 
  OrigDataType: 
T_812: (in out ax_110 : ptr16)
  Class: Eq_789
  DataType: 
  OrigDataType: 
T_813: (in out cx_104 : ptr16)
  Class: Eq_790
  DataType: 
  OrigDataType: 
T_814: (in out dx_117 : ptr16)
  Class: Eq_791
  DataType: 
  OrigDataType: 
T_815: (in out bx_118 : ptr16)
  Class: Eq_792
  DataType: 
  OrigDataType: 
T_816: (in out si_102 : ptr16)
  Class: Eq_793
  DataType: 
  OrigDataType: 
T_817: (in out di_103 : ptr16)
  Class: Eq_794
  DataType: 
  OrigDataType: 
T_818: (in fn0800_025F(ax_110, cx_104, dx_117, bx_118, si_102, di_103, ss, bp, out ax_110, out cx_104, out dx_117, out bx_118, out si_102, out di_103) : byte)
  Class: Eq_747
  DataType: 
  OrigDataType: 
T_819: (in fn0800_0287 : ptr32)
  Class: Eq_672
  DataType: 
  OrigDataType: 
T_820: (in fn0800_0287(di_10) : void)
  Class: Eq_820
  DataType: 
  OrigDataType: 
T_821: (in 0x006D : word16)
  Class: Eq_821
  DataType: 
  OrigDataType: 
T_822: (in Mem154[ds_143:0x006D:word16] : word16)
  Class: Eq_771
  DataType: 
  OrigDataType: 
T_823: (in 0x006F : word16)
  Class: Eq_823
  DataType: 
  OrigDataType: 
T_824: (in Mem155[ds_143:0x006F:word16] : word16)
  Class: Eq_704
  DataType: 
  OrigDataType: 
T_825: (in 0x0000 : word16)
  Class: Eq_825
  DataType: 
  OrigDataType: 
T_826: (in 0x0000 : word16)
  Class: Eq_826
  DataType: 
  OrigDataType: 
T_827: (in bp_150 + 0x0000 : word16)
  Class: Eq_827
  DataType: 
  OrigDataType: 
T_828: (in Mem171[ss:bp_150 + 0x0000:word16] : word16)
  Class: Eq_825
  DataType: 
  OrigDataType: 
T_829: (in 0x0000 : word16)
  Class: Eq_829
  DataType: 
  OrigDataType: 
T_830: (in 0x0002 : word16)
  Class: Eq_830
  DataType: 
  OrigDataType: 
T_831: (in bp_150 + 0x0002 : word16)
  Class: Eq_831
  DataType: 
  OrigDataType: 
T_832: (in Mem172[ss:bp_150 + 0x0002:word16] : word16)
  Class: Eq_829
  DataType: 
  OrigDataType: 
T_833: (in al_168 : byte)
  Class: Eq_833
  DataType: 
  OrigDataType: 
T_834: (in 0x00 : byte)
  Class: Eq_833
  DataType: 
  OrigDataType: 
T_835: (in *alOut : byte)
  Class: Eq_833
  DataType: 
  OrigDataType: 
T_836: (in 0x01C9 : word16)
  Class: Eq_836
  DataType: 
  OrigDataType: 
T_837: (in Mem172[0x0800:0x01C9:ptr32] : ptr32)
  Class: Eq_837
  DataType: 
  OrigDataType: 
T_838: (in 0x0000 : word16)
  Class: Eq_838
  DataType: 
  OrigDataType: 
T_839: (in bp_150 + 0x0000 : word16)
  Class: Eq_839
  DataType: 
  OrigDataType: 
T_840: (in Mem174[ss:bp_150 + 0x0000:word16] : word16)
  Class: Eq_111
  DataType: 
  OrigDataType: 
T_841: (in 0x0000 : word16)
  Class: Eq_841
  DataType: 
  OrigDataType: 
T_842: (in bp_150 + 0x0000 : word16)
  Class: Eq_842
  DataType: 
  OrigDataType: 
T_843: (in Mem175[ss:bp_150 + 0x0000:word16] : word16)
  Class: Eq_704
  DataType: 
  OrigDataType: 
T_844: (in 0x0004 : word16)
  Class: Eq_844
  DataType: 
  OrigDataType: 
T_845: (in bp_150 + 0x0004 : word16)
  Class: Eq_845
  DataType: 
  OrigDataType: 
T_846: (in *bpOut : word16)
  Class: Eq_845
  DataType: 
  OrigDataType: 
T_847: (in 0x0001 : word16)
  Class: Eq_847
  DataType: 
  OrigDataType: 
T_848: (in cx_141 - 0x0001 : word16)
  Class: Eq_748
  DataType: 
  OrigDataType: 
T_849: (in al_180 : byte)
  Class: Eq_849
  DataType: 
  OrigDataType: 
T_850: (in 0x0000 : word16)
  Class: Eq_850
  DataType: 
  OrigDataType: 
T_851: (in si_148 + 0x0000 : word16)
  Class: Eq_851
  DataType: 
  OrigDataType: 
T_852: (in Mem175[ds_143:si_148 + 0x0000:byte] : byte)
  Class: Eq_849
  DataType: 
  OrigDataType: 
T_853: (in 0x0001 : word16)
  Class: Eq_853
  DataType: 
  OrigDataType: 
T_854: (in si_148 + 0x0001 : word16)
  Class: Eq_111
  DataType: 
  OrigDataType: 
T_855: (in *siOut : word16)
  Class: Eq_111
  DataType: 
  OrigDataType: 
T_856: (in ch_189 : byte)
  Class: Eq_856
  DataType: 
  OrigDataType: 
T_857: (in SLICE(cx_141, byte, 8) : byte)
  Class: Eq_857
  DataType: 
  OrigDataType: 
T_858: (in *chOut : byte)
  Class: Eq_857
  DataType: 
  OrigDataType: 
T_859: (in 0x00 : byte)
  Class: Eq_849
  DataType: 
  OrigDataType: 
T_860: (in al_180 != 0x00 : bool)
  Class: Eq_860
  DataType: 
  OrigDataType: 
T_861: (in 0x0000 : word16)
  Class: Eq_748
  DataType: 
  OrigDataType: 
T_862: (in cx_141 != 0x0000 : bool)
  Class: Eq_862
  DataType: 
  OrigDataType: 
T_863: (in al_180 != 0x00 && cx_141 != 0x0000 : bool)
  Class: Eq_863
  DataType: 
  OrigDataType: 
T_864: (in 0x00 : byte)
  Class: Eq_849
  DataType: 
  OrigDataType: 
T_865: (in al_180 == 0x00 : bool)
  Class: Eq_865
  DataType: 
  OrigDataType: 
T_866: (in 0x0000 : word16)
  Class: Eq_748
  DataType: 
  OrigDataType: 
T_867: (in cx_141 == 0x0000 : bool)
  Class: Eq_867
  DataType: 
  OrigDataType: 
T_868: (in CZ : byte)
  Class: Eq_868
  DataType: 
  OrigDataType: 
T_869: (in *dxOut : word16)
  Class: Eq_708
  DataType: 
  OrigDataType: 
T_870: (in *diOut : word16)
  Class: Eq_718
  DataType: 
  OrigDataType: 
T_871: (in *bxOut : word16)
  Class: Eq_728
  DataType: 
  OrigDataType: 
T_872: (in *cxOut : word16)
  Class: Eq_486
  DataType: 
  OrigDataType: 
T_873: (in *siOut : word16)
  Class: Eq_485
  DataType: 
  OrigDataType: 
T_874: (in ax_15 : word16)
  Class: Eq_708
  DataType: 
  OrigDataType: 
T_875: (in al_4 : byte)
  Class: Eq_875
  DataType: 
  OrigDataType: 
T_876: (in (byte) ax : byte)
  Class: Eq_875
  DataType: 
  OrigDataType: 
T_877: (in 0x0000 : word16)
  Class: Eq_708
  DataType: 
  OrigDataType: 
T_878: (in ax == 0x0000 : bool)
  Class: Eq_878
  DataType: 
  OrigDataType: 
T_879: (in ax_21 : word16)
  Class: Eq_879
  DataType: 
  OrigDataType: 
T_880: (in 0x00 : byte)
  Class: Eq_880
  DataType: 
  OrigDataType: 
T_881: (in DPB(ax_15, 0x00, 0, 8) : word16)
  Class: Eq_881
  DataType: 
  OrigDataType: 
T_882: (in *axOut : word16)
  Class: Eq_881
  DataType: 
  OrigDataType: 
T_883: (in CZ_26 : byte)
  Class: Eq_883
  DataType: 
  OrigDataType: 
T_884: (in true : bool)
  Class: Eq_883
  DataType: 
  OrigDataType: 
T_885: (in 0x0000 : word16)
  Class: Eq_486
  DataType: 
  OrigDataType: 
T_886: (in cx == 0x0000 : bool)
  Class: Eq_886
  DataType: 
  OrigDataType: 
T_887: (in 0x0000 : word16)
  Class: Eq_887
  DataType: 
  OrigDataType: 
T_888: (in di + 0x0000 : word16)
  Class: Eq_888
  DataType: 
  OrigDataType: 
T_889: (in Mem78[es:di + 0x0000:byte] : byte)
  Class: Eq_875
  DataType: 
  OrigDataType: 
T_890: (in dx_77 : word16)
  Class: Eq_890
  DataType: 
  OrigDataType: 
T_891: (in 0x0001 : word16)
  Class: Eq_891
  DataType: 
  OrigDataType: 
T_892: (in dx + 0x0001 : word16)
  Class: Eq_892
  DataType: 
  OrigDataType: 
T_893: (in *dxOut : word16)
  Class: Eq_892
  DataType: 
  OrigDataType: 
T_894: (in di_80 : word16)
  Class: Eq_894
  DataType: 
  OrigDataType: 
T_895: (in 0x0001 : word16)
  Class: Eq_895
  DataType: 
  OrigDataType: 
T_896: (in di + 0x0001 : word16)
  Class: Eq_896
  DataType: 
  OrigDataType: 
T_897: (in *diOut : word16)
  Class: Eq_896
  DataType: 
  OrigDataType: 
T_898: (in DPB(ax, al_4, 0, 8) : word16)
  Class: Eq_708
  DataType: 
  OrigDataType: 
T_899: (in 0x00 : byte)
  Class: Eq_875
  DataType: 
  OrigDataType: 
T_900: (in al_4 != 0x00 : bool)
  Class: Eq_900
  DataType: 
  OrigDataType: 
T_901: (in bx_86 : word16)
  Class: Eq_901
  DataType: 
  OrigDataType: 
T_902: (in 0x0001 : word16)
  Class: Eq_902
  DataType: 
  OrigDataType: 
T_903: (in bx + 0x0001 : word16)
  Class: Eq_903
  DataType: 
  OrigDataType: 
T_904: (in *bxOut : word16)
  Class: Eq_903
  DataType: 
  OrigDataType: 
T_905: (in al_46 : byte)
  Class: Eq_905
  DataType: 
  OrigDataType: 
T_906: (in 0x0000 : word16)
  Class: Eq_906
  DataType: 
  OrigDataType: 
T_907: (in si + 0x0000 : word16)
  Class: Eq_907
  DataType: 
  OrigDataType: 
T_908: (in Mem0[ds:si + 0x0000:byte] : byte)
  Class: Eq_905
  DataType: 
  OrigDataType: 
T_909: (in si_47 : word16)
  Class: Eq_909
  DataType: 
  OrigDataType: 
T_910: (in 0x0001 : word16)
  Class: Eq_910
  DataType: 
  OrigDataType: 
T_911: (in si + 0x0001 : word16)
  Class: Eq_909
  DataType: 
  OrigDataType: 
T_912: (in *siOut : word16)
  Class: Eq_909
  DataType: 
  OrigDataType: 
T_913: (in cx_48 : word16)
  Class: Eq_913
  DataType: 
  OrigDataType: 
T_914: (in 0x0001 : word16)
  Class: Eq_914
  DataType: 
  OrigDataType: 
T_915: (in cx - 0x0001 : word16)
  Class: Eq_913
  DataType: 
  OrigDataType: 
T_916: (in *cxOut : word16)
  Class: Eq_913
  DataType: 
  OrigDataType: 
T_917: (in ax_50 : word16)
  Class: Eq_917
  DataType: 
  OrigDataType: 
T_918: (in 0x22 : byte)
  Class: Eq_918
  DataType: 
  OrigDataType: 
T_919: (in al_46 - 0x22 : byte)
  Class: Eq_919
  DataType: 
  OrigDataType: 
T_920: (in DPB(ax_15, al_46 - 0x22, 0, 8) : word16)
  Class: Eq_920
  DataType: 
  OrigDataType: 
T_921: (in *axOut : word16)
  Class: Eq_920
  DataType: 
  OrigDataType: 
T_922: (in al_46 - 0x22 : byte)
  Class: Eq_922
  DataType: 
  OrigDataType: 
T_923: (in cond(al_46 - 0x22) : byte)
  Class: Eq_883
  DataType: 
  OrigDataType: 
T_924: (in 0x22 : byte)
  Class: Eq_905
  DataType: 
  OrigDataType: 
T_925: (in al_46 == 0x22 : bool)
  Class: Eq_925
  DataType: 
  OrigDataType: 
T_926: (in ax_57 : word16)
  Class: Eq_926
  DataType: 
  OrigDataType: 
T_927: (in DPB(ax_15, al_46, 0, 8) : word16)
  Class: Eq_927
  DataType: 
  OrigDataType: 
T_928: (in *axOut : word16)
  Class: Eq_927
  DataType: 
  OrigDataType: 
T_929: (in 0x5C : byte)
  Class: Eq_905
  DataType: 
  OrigDataType: 
T_930: (in al_46 != 0x5C : bool)
  Class: Eq_930
  DataType: 
  OrigDataType: 
T_931: (in si_64 : word16)
  Class: Eq_931
  DataType: 
  OrigDataType: 
T_932: (in *siOut : word16)
  Class: Eq_909
  DataType: 
  OrigDataType: 
T_933: (in false : bool)
  Class: Eq_883
  DataType: 
  OrigDataType: 
T_934: (in si + 0x0001 : word16)
  Class: Eq_934
  DataType: 
  OrigDataType: 
T_935: (in Mem0[ds:si + 0x0001:byte] : byte)
  Class: Eq_935
  DataType: 
  OrigDataType: 
T_936: (in 0x22 : byte)
  Class: Eq_935
  DataType: 
  OrigDataType: 
T_937: (in Mem0[ds:si + 0x0001:byte] != 0x22 : bool)
  Class: Eq_937
  DataType: 
  OrigDataType: 
T_938: (in ax_73 : word16)
  Class: Eq_938
  DataType: 
  OrigDataType: 
T_939: (in si + 0x0001 : word16)
  Class: Eq_939
  DataType: 
  OrigDataType: 
T_940: (in Mem0[ds:si + 0x0001:byte] : byte)
  Class: Eq_940
  DataType: 
  OrigDataType: 
T_941: (in DPB(ax_15, Mem0[ds:si + 0x0001:byte], 0, 8) : word16)
  Class: Eq_941
  DataType: 
  OrigDataType: 
T_942: (in *axOut : word16)
  Class: Eq_941
  DataType: 
  OrigDataType: 
T_943: (in 0x0002 : word16)
  Class: Eq_943
  DataType: 
  OrigDataType: 
T_944: (in si + 0x0002 : word16)
  Class: Eq_909
  DataType: 
  OrigDataType: 
T_945: (in cx_75 : word16)
  Class: Eq_945
  DataType: 
  OrigDataType: 
T_946: (in 0x0002 : word16)
  Class: Eq_946
  DataType: 
  OrigDataType: 
T_947: (in cx - 0x0002 : word16)
  Class: Eq_947
  DataType: 
  OrigDataType: 
T_948: (in *cxOut : word16)
  Class: Eq_947
  DataType: 
  OrigDataType: 
T_949: (in fn0800_01AF : ptr32)
  Class: Eq_109
  DataType: 
  OrigDataType: 
T_950: (in wArg00 : word16)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_951: (in fn0800_01AF(si, wArg00) : void)
  Class: Eq_951
  DataType: 
  OrigDataType: 
T_952: (in al : byte)
  Class: Eq_952
  DataType: 
  OrigDataType: 
T_953: (in es_4 : selector)
  Class: Eq_953
  DataType: 
  OrigDataType: 
T_954: (in 0x0077 : word16)
  Class: Eq_954
  DataType: 
  OrigDataType: 
T_955: (in Mem0[ds:0x0077:selector] : selector)
  Class: Eq_953
  DataType: 
  OrigDataType: 
T_956: (in dx_12 : word16)
  Class: Eq_956
  DataType: 
  OrigDataType: 
T_957: (in ax_13 : word16)
  Class: Eq_957
  DataType: 
  OrigDataType: 
T_958: (in fn0850_000C : ptr32)
  Class: Eq_958
  DataType: 
  OrigDataType: 
T_959: (in signature of fn0850_000C : void)
  Class: Eq_958
  DataType: 
  OrigDataType: 
T_960: (in ds : selector)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_961: (in wArg04 : word16)
  Class: Eq_961
  DataType: 
  OrigDataType: 
T_962: (in dxOut : ptr16)
  Class: Eq_962
  DataType: 
  OrigDataType: 
T_963: (in 0x0079 : word16)
  Class: Eq_963
  DataType: 
  OrigDataType: 
T_964: (in Mem0[ds:0x0079:word16] : word16)
  Class: Eq_961
  DataType: 
  OrigDataType: 
T_965: (in out dx_12 : ptr16)
  Class: Eq_962
  DataType: 
  OrigDataType: 
T_966: (in fn0850_000C(ds, Mem0[ds:0x0079:word16], out dx_12) : word16)
  Class: Eq_957
  DataType: 
  OrigDataType: 
T_967: (in 0x0071 : word16)
  Class: Eq_967
  DataType: 
  OrigDataType: 
T_968: (in Mem18[ds:0x0071:word16] : word16)
  Class: Eq_957
  DataType: 
  OrigDataType: 
T_969: (in 0x0073 : word16)
  Class: Eq_969
  DataType: 
  OrigDataType: 
T_970: (in Mem19[ds:0x0073:word16] : word16)
  Class: Eq_956
  DataType: 
  OrigDataType: 
T_971: (in ax_23 : word16)
  Class: Eq_971
  DataType: 
  OrigDataType: 
T_972: (in ax_13 | dx_12 : word16)
  Class: Eq_971
  DataType: 
  OrigDataType: 
T_973: (in di_48 : word16)
  Class: Eq_973
  DataType: 
  OrigDataType: 
T_974: (in 0x0000 : word16)
  Class: Eq_973
  DataType: 
  OrigDataType: 
T_975: (in bx_15 : word16)
  Class: Eq_975
  DataType: 
  OrigDataType: 
T_976: (in 0x0002 : word16)
  Class: Eq_976
  DataType: 
  OrigDataType: 
T_977: (in ax_13 + 0x0002 : word16)
  Class: Eq_975
  DataType: 
  OrigDataType: 
T_978: (in al_24 : byte)
  Class: Eq_978
  DataType: 
  OrigDataType: 
T_979: (in (byte) ax_23 : byte)
  Class: Eq_978
  DataType: 
  OrigDataType: 
T_980: (in 0x0000 : word16)
  Class: Eq_971
  DataType: 
  OrigDataType: 
T_981: (in ax_23 != 0x0000 : bool)
  Class: Eq_981
  DataType: 
  OrigDataType: 
T_982: (in cx_46 : word16)
  Class: Eq_982
  DataType: 
  OrigDataType: 
T_983: (in 0xFFFF : word16)
  Class: Eq_982
  DataType: 
  OrigDataType: 
T_984: (in fn0800_01AF : ptr32)
  Class: Eq_109
  DataType: 
  OrigDataType: 
T_985: (in fn0800_01AF(si, ds) : void)
  Class: Eq_985
  DataType: 
  OrigDataType: 
T_986: (in 0x0000 : word16)
  Class: Eq_986
  DataType: 
  OrigDataType: 
T_987: (in di_48 + 0x0000 : word16)
  Class: Eq_987
  DataType: 
  OrigDataType: 
T_988: (in Mem52[es_4:di_48 + 0x0000:byte] : byte)
  Class: Eq_988
  DataType: 
  OrigDataType: 
T_989: (in 0x00 : byte)
  Class: Eq_988
  DataType: 
  OrigDataType: 
T_990: (in Mem52[es_4:di_48 + 0x0000:byte] != 0x00 : bool)
  Class: Eq_990
  DataType: 
  OrigDataType: 
T_991: (in 0x0001 : word16)
  Class: Eq_991
  DataType: 
  OrigDataType: 
T_992: (in di_48 + 0x0001 : word16)
  Class: Eq_973
  DataType: 
  OrigDataType: 
T_993: (in 0x0001 : word16)
  Class: Eq_993
  DataType: 
  OrigDataType: 
T_994: (in cx_46 - 0x0001 : word16)
  Class: Eq_982
  DataType: 
  OrigDataType: 
T_995: (in 0x00 : byte)
  Class: Eq_995
  DataType: 
  OrigDataType: 
T_996: (in 0x0000 : word16)
  Class: Eq_996
  DataType: 
  OrigDataType: 
T_997: (in di_48 + 0x0000 : word16)
  Class: Eq_997
  DataType: 
  OrigDataType: 
T_998: (in Mem52[es_4:di_48 + 0x0000:byte] : byte)
  Class: Eq_995
  DataType: 
  OrigDataType: 
T_999: (in 0x00 != Mem52[es_4:di_48 + 0x0000:byte] : bool)
  Class: Eq_999
  DataType: 
  OrigDataType: 
T_1000: (in 0x0000 : word16)
  Class: Eq_982
  DataType: 
  OrigDataType: 
T_1001: (in cx_46 == 0x0000 : bool)
  Class: Eq_1001
  DataType: 
  OrigDataType: 
T_1002: (in 0x0000 : word16)
  Class: Eq_1002
  DataType: 
  OrigDataType: 
T_1003: (in bx_15 + 0x0000 : word16)
  Class: Eq_1003
  DataType: 
  OrigDataType: 
T_1004: (in Mem51[dx_12:bx_15 + 0x0000:word16] : word16)
  Class: Eq_973
  DataType: 
  OrigDataType: 
T_1005: (in 0x0000 : word16)
  Class: Eq_1005
  DataType: 
  OrigDataType: 
T_1006: (in bx_15 + 0x0000 : word16)
  Class: Eq_1006
  DataType: 
  OrigDataType: 
T_1007: (in Mem52[dx_12:bx_15 + 0x0000:word16] : word16)
  Class: Eq_953
  DataType: 
  OrigDataType: 
T_1008: (in 0x0004 : word16)
  Class: Eq_1008
  DataType: 
  OrigDataType: 
T_1009: (in bx_15 + 0x0004 : word16)
  Class: Eq_975
  DataType: 
  OrigDataType: 
T_1010: (in 0x0000 : word16)
  Class: Eq_1010
  DataType: 
  OrigDataType: 
T_1011: (in 0x0000 : word16)
  Class: Eq_1011
  DataType: 
  OrigDataType: 
T_1012: (in bx_15 + 0x0000 : word16)
  Class: Eq_1012
  DataType: 
  OrigDataType: 
T_1013: (in Mem63[dx_12:bx_15 + 0x0000:word16] : word16)
  Class: Eq_1010
  DataType: 
  OrigDataType: 
T_1014: (in 0x0000 : word16)
  Class: Eq_1014
  DataType: 
  OrigDataType: 
T_1015: (in 0x0002 : word16)
  Class: Eq_1015
  DataType: 
  OrigDataType: 
T_1016: (in bx_15 + 0x0002 : word16)
  Class: Eq_1016
  DataType: 
  OrigDataType: 
T_1017: (in Mem64[dx_12:bx_15 + 0x0002:word16] : word16)
  Class: Eq_1014
  DataType: 
  OrigDataType: 
T_1018: (in 0x00 : byte)
  Class: Eq_1018
  DataType: 
  OrigDataType: 
T_1019: (in ax : word16)
  Class: Eq_1019
  DataType: 
  OrigDataType: 
T_1020: (in cl_7 : byte)
  Class: Eq_1020
  DataType: 
  OrigDataType: 
T_1021: (in cx : word16)
  Class: Eq_1021
  DataType: 
  OrigDataType: 
T_1022: (in (byte) cx : byte)
  Class: Eq_1020
  DataType: 
  OrigDataType: 
T_1023: (in 0x0000 : word16)
  Class: Eq_1021
  DataType: 
  OrigDataType: 
T_1024: (in cx >= 0x0000 : bool)
  Class: Eq_1024
  DataType: 
  OrigDataType: 
T_1025: (in ax_65 : word16)
  Class: Eq_1025
  DataType: 
  OrigDataType: 
T_1026: (in bx : word16)
  Class: Eq_1026
  DataType: 
  OrigDataType: 
T_1027: (in ax + bx : word16)
  Class: Eq_1025
  DataType: 
  OrigDataType: 
T_1028: (in al_66 : byte)
  Class: Eq_1028
  DataType: 
  OrigDataType: 
T_1029: (in (byte) ax_65 : byte)
  Class: Eq_1028
  DataType: 
  OrigDataType: 
T_1030: (in 0x0000 : word16)
  Class: Eq_1025
  DataType: 
  OrigDataType: 
T_1031: (in ax_65 >=u 0x0000 : bool)
  Class: Eq_1031
  DataType: 
  OrigDataType: 
T_1032: (in bx_33 : word16)
  Class: Eq_1032
  DataType: 
  OrigDataType: 
T_1033: (in ~cx : word16)
  Class: Eq_1033
  DataType: 
  OrigDataType: 
T_1034: (in ~bx : word16)
  Class: Eq_1034
  DataType: 
  OrigDataType: 
T_1035: (in 0x0001 : word16)
  Class: Eq_1035
  DataType: 
  OrigDataType: 
T_1036: (in ~bx + 0x0001 : word16)
  Class: Eq_1036
  DataType: 
  OrigDataType: 
T_1037: (in SEQ(~cx, ~bx + 0x0001) : ui32)
  Class: Eq_1037
  DataType: 
  OrigDataType: 
T_1038: (in 0x00000001 : ui32)
  Class: Eq_1038
  DataType: 
  OrigDataType: 
T_1039: (in SEQ(~cx, ~bx + 0x0001) + 0x00000001 : ui32)
  Class: Eq_1039
  DataType: 
  OrigDataType: 
T_1040: (in (word16) (SEQ(~cx, ~bx + 0x0001) + 0x00000001) : word16)
  Class: Eq_1032
  DataType: 
  OrigDataType: 
T_1041: (in ax_39 : word16)
  Class: Eq_1041
  DataType: 
  OrigDataType: 
T_1042: (in ax - bx_33 : word16)
  Class: Eq_1041
  DataType: 
  OrigDataType: 
T_1043: (in al_40 : byte)
  Class: Eq_1043
  DataType: 
  OrigDataType: 
T_1044: (in (byte) ax_39 : byte)
  Class: Eq_1043
  DataType: 
  OrigDataType: 
T_1045: (in 0x0000 : word16)
  Class: Eq_1041
  DataType: 
  OrigDataType: 
T_1046: (in ax_39 >=u 0x0000 : bool)
  Class: Eq_1046
  DataType: 
  OrigDataType: 
T_1047: (in dx_80 : word16)
  Class: Eq_1047
  DataType: 
  OrigDataType: 
T_1048: (in dx : word16)
  Class: Eq_1048
  DataType: 
  OrigDataType: 
T_1049: (in dh : byte)
  Class: Eq_1049
  DataType: 
  OrigDataType: 
T_1050: (in 0x04 : byte)
  Class: Eq_1050
  DataType: 
  OrigDataType: 
T_1051: (in cl_7 << 0x04 : word16)
  Class: Eq_1051
  DataType: 
  OrigDataType: 
T_1052: (in dh + (cl_7 << 0x04) : byte)
  Class: Eq_1052
  DataType: 
  OrigDataType: 
T_1053: (in DPB(dx, dh + (cl_7 << 0x04), 8, 8) : word16)
  Class: Eq_1053
  DataType: 
  OrigDataType: 
T_1054: (in 0x04 : byte)
  Class: Eq_1054
  DataType: 
  OrigDataType: 
T_1055: (in ax_65 >>u 0x04 : word16)
  Class: Eq_1055
  DataType: 
  OrigDataType: 
T_1056: (in DPB(dx, dh + (cl_7 << 0x04), 8, 8) + (ax_65 >>u 0x04) : word16)
  Class: Eq_1056
  DataType: 
  OrigDataType: 
T_1057: (in dxOut : ptr16)
  Class: Eq_1057
  DataType: 
  OrigDataType: 
T_1058: (in *dxOut : word16)
  Class: Eq_1056
  DataType: 
  OrigDataType: 
T_1059: (in ax_65 >>u 0x04 : word16)
  Class: Eq_1059
  DataType: 
  OrigDataType: 
T_1060: (in DPB(ax_65 >>u 0x04, al_66, 0, 8) : word16)
  Class: Eq_1060
  DataType: 
  OrigDataType: 
T_1061: (in 0x000F : word16)
  Class: Eq_1061
  DataType: 
  OrigDataType: 
T_1062: (in DPB(ax_65 >>u 0x04, al_66, 0, 8) & 0x000F : word16)
  Class: Eq_1062
  DataType: 
  OrigDataType: 
T_1063: (in 0x1000 : word16)
  Class: Eq_1063
  DataType: 
  OrigDataType: 
T_1064: (in dx + 0x1000 : word16)
  Class: Eq_1048
  DataType: 
  OrigDataType: 
T_1065: (in dx + 0x1000 : word16)
  Class: Eq_1065
  DataType: 
  OrigDataType: 
T_1066: (in SLICE(dx + 0x1000, byte, 8) : byte)
  Class: Eq_1049
  DataType: 
  OrigDataType: 
T_1067: (in dx_54 : word16)
  Class: Eq_1067
  DataType: 
  OrigDataType: 
T_1068: (in 0x00 : byte)
  Class: Eq_1068
  DataType: 
  OrigDataType: 
T_1069: (in DPB(bx_33, 0x00, 0, 8) : word16)
  Class: Eq_1069
  DataType: 
  OrigDataType: 
T_1070: (in dx - DPB(bx_33, 0x00, 0, 8) : word16)
  Class: Eq_1070
  DataType: 
  OrigDataType: 
T_1071: (in 0x04 : byte)
  Class: Eq_1071
  DataType: 
  OrigDataType: 
T_1072: (in ax_39 >>u 0x04 : word16)
  Class: Eq_1072
  DataType: 
  OrigDataType: 
T_1073: (in dx - DPB(bx_33, 0x00, 0, 8) + (ax_39 >>u 0x04) : word16)
  Class: Eq_1073
  DataType: 
  OrigDataType: 
T_1074: (in *dxOut : word16)
  Class: Eq_1073
  DataType: 
  OrigDataType: 
T_1075: (in ax_39 >>u 0x04 : word16)
  Class: Eq_1075
  DataType: 
  OrigDataType: 
T_1076: (in DPB(ax_39 >>u 0x04, al_40, 0, 8) : word16)
  Class: Eq_1076
  DataType: 
  OrigDataType: 
T_1077: (in 0x000F : word16)
  Class: Eq_1077
  DataType: 
  OrigDataType: 
T_1078: (in DPB(ax_39 >>u 0x04, al_40, 0, 8) & 0x000F : word16)
  Class: Eq_1078
  DataType: 
  OrigDataType: 
T_1079: (in 0x1000 : word16)
  Class: Eq_1079
  DataType: 
  OrigDataType: 
T_1080: (in dx - 0x1000 : word16)
  Class: Eq_1048
  DataType: 
  OrigDataType: 
T_1081: (in CZ : byte)
  Class: Eq_1081
  DataType: 
  OrigDataType: 
T_1082: (in dx_11 : word16)
  Class: Eq_1082
  DataType: 
  OrigDataType: 
T_1083: (in dx : word16)
  Class: Eq_1083
  DataType: 
  OrigDataType: 
T_1084: (in ax : word16)
  Class: Eq_1084
  DataType: 
  OrigDataType: 
T_1085: (in 0x04 : byte)
  Class: Eq_1085
  DataType: 
  OrigDataType: 
T_1086: (in ax >>u 0x04 : word16)
  Class: Eq_1086
  DataType: 
  OrigDataType: 
T_1087: (in dx + (ax >>u 0x04) : word16)
  Class: Eq_1082
  DataType: 
  OrigDataType: 
T_1088: (in cx_20 : word16)
  Class: Eq_1082
  DataType: 
  OrigDataType: 
T_1089: (in cx : word16)
  Class: Eq_1048
  DataType: 
  OrigDataType: 
T_1090: (in bx : word16)
  Class: Eq_1019
  DataType: 
  OrigDataType: 
T_1091: (in 0x04 : byte)
  Class: Eq_1091
  DataType: 
  OrigDataType: 
T_1092: (in bx >>u 0x04 : word16)
  Class: Eq_1092
  DataType: 
  OrigDataType: 
T_1093: (in cx + (bx >>u 0x04) : word16)
  Class: Eq_1082
  DataType: 
  OrigDataType: 
T_1094: (in ax_15 : word16)
  Class: Eq_1094
  DataType: 
  OrigDataType: 
T_1095: (in ax >>u 0x04 : word16)
  Class: Eq_1095
  DataType: 
  OrigDataType: 
T_1096: (in bl : byte)
  Class: Eq_1096
  DataType: 
  OrigDataType: 
T_1097: (in DPB(ax >>u 0x04, bl, 8, 8) : word16)
  Class: Eq_1094
  DataType: 
  OrigDataType: 
T_1098: (in bx_22 : word16)
  Class: Eq_1098
  DataType: 
  OrigDataType: 
T_1099: (in bx >>u 0x04 : word16)
  Class: Eq_1099
  DataType: 
  OrigDataType: 
T_1100: (in DPB(bx >>u 0x04, bl, 0, 8) : word16)
  Class: Eq_1098
  DataType: 
  OrigDataType: 
T_1101: (in CZ_32 : byte)
  Class: Eq_1101
  DataType: 
  OrigDataType: 
T_1102: (in dx_11 - cx_20 : word16)
  Class: Eq_1102
  DataType: 
  OrigDataType: 
T_1103: (in cond(dx_11 - cx_20) : byte)
  Class: Eq_1101
  DataType: 
  OrigDataType: 
T_1104: (in dx_11 != cx_20 : bool)
  Class: Eq_1104
  DataType: 
  OrigDataType: 
T_1105: (in 0x000F : word16)
  Class: Eq_1105
  DataType: 
  OrigDataType: 
T_1106: (in ax_15 & 0x000F : word16)
  Class: Eq_1106
  DataType: 
  OrigDataType: 
T_1107: (in 0x000F : word16)
  Class: Eq_1107
  DataType: 
  OrigDataType: 
T_1108: (in bx_22 & 0x000F : word16)
  Class: Eq_1108
  DataType: 
  OrigDataType: 
T_1109: (in (ax_15 & 0x000F) - (bx_22 & 0x000F) : word16)
  Class: Eq_1109
  DataType: 
  OrigDataType: 
T_1110: (in cond((ax_15 & 0x000F) - (bx_22 & 0x000F)) : byte)
  Class: Eq_1101
  DataType: 
  OrigDataType: 
T_1111: (in fn093D_000E : ptr32)
  Class: Eq_1111
  DataType: 
  OrigDataType: 
T_1112: (in signature of fn093D_000E : void)
  Class: Eq_1111
  DataType: 
  OrigDataType: 
T_1113: (in ds : selector)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_1114: (in wArg04 : word16)
  Class: Eq_1114
  DataType: 
  OrigDataType: 
T_1115: (in wArg06 : word16)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_1116: (in 0x0094 : word16)
  Class: Eq_1114
  DataType: 
  OrigDataType: 
T_1117: (in fn093D_000E(ds, 0x0094, ds) : word16)
  Class: Eq_1117
  DataType: 
  OrigDataType: 
T_1118: (in fn09F1_0007 : ptr32)
  Class: Eq_1118
  DataType: 
  OrigDataType: 
T_1119: (in signature of fn09F1_0007 : void)
  Class: Eq_1118
  DataType: 
  OrigDataType: 
T_1120: (in ds : selector)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_1121: (in wArg04 : word16)
  Class: Eq_1114
  DataType: 
  OrigDataType: 
T_1122: (in wArg06 : word16)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_1123: (in 0x00B1 : word16)
  Class: Eq_1114
  DataType: 
  OrigDataType: 
T_1124: (in fn09F1_0007(ds, 0x00B1, ds) : void)
  Class: Eq_1124
  DataType: 
  OrigDataType: 
T_1125: (in bp_43 : word16)
  Class: Eq_1125
  DataType: 
  OrigDataType: 
T_1126: (in fp : ptr16)
  Class: Eq_1126
  DataType: 
  OrigDataType: 
T_1127: (in 0x0002 : word16)
  Class: Eq_1127
  DataType: 
  OrigDataType: 
T_1128: (in fp - 0x0002 : word16)
  Class: Eq_1125
  DataType: 
  OrigDataType: 
T_1129: (in sp_103 : word16)
  Class: Eq_1129
  DataType: 
  OrigDataType: 
T_1130: (in 0x000A : word16)
  Class: Eq_1130
  DataType: 
  OrigDataType: 
T_1131: (in fp - 0x000A : word16)
  Class: Eq_1129
  DataType: 
  OrigDataType: 
T_1132: (in si_105 : word16)
  Class: Eq_1132
  DataType: 
  OrigDataType: 
T_1133: (in 0x0001 : word16)
  Class: Eq_1132
  DataType: 
  OrigDataType: 
T_1134: (in ss : selector)
  Class: Eq_1134
  DataType: 
  OrigDataType: 
T_1135: (in 0x0004 : word16)
  Class: Eq_1135
  DataType: 
  OrigDataType: 
T_1136: (in bp_43 - 0x0004 : word16)
  Class: Eq_1136
  DataType: 
  OrigDataType: 
T_1137: (in Mem0[ss:bp_43 - 0x0004:word16] : word16)
  Class: Eq_1132
  DataType: 
  OrigDataType: 
T_1138: (in si_105 <= Mem0[ss:bp_43 - 0x0004:word16] : bool)
  Class: Eq_1138
  DataType: 
  OrigDataType: 
T_1139: (in sp_61 : word16)
  Class: Eq_1139
  DataType: 
  OrigDataType: 
T_1140: (in 0x0002 : word16)
  Class: Eq_1140
  DataType: 
  OrigDataType: 
T_1141: (in sp_103 - 0x0002 : word16)
  Class: Eq_1139
  DataType: 
  OrigDataType: 
T_1142: (in 0x0000 : word16)
  Class: Eq_1142
  DataType: 
  OrigDataType: 
T_1143: (in sp_61 + 0x0000 : word16)
  Class: Eq_1143
  DataType: 
  OrigDataType: 
T_1144: (in Mem62[ss:sp_61 + 0x0000:word16] : word16)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_1145: (in 0x00B4 : word16)
  Class: Eq_1145
  DataType: 
  OrigDataType: 
T_1146: (in 0x0002 : word16)
  Class: Eq_1146
  DataType: 
  OrigDataType: 
T_1147: (in sp_61 - 0x0002 : word16)
  Class: Eq_1147
  DataType: 
  OrigDataType: 
T_1148: (in Mem65[ss:sp_61 - 0x0002:word16] : word16)
  Class: Eq_1145
  DataType: 
  OrigDataType: 
T_1149: (in fn093D_000E : ptr32)
  Class: Eq_1111
  DataType: 
  OrigDataType: 
T_1150: (in wArg00 : word16)
  Class: Eq_1114
  DataType: 
  OrigDataType: 
T_1151: (in wArg02 : word16)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_1152: (in fn093D_000E(ds, wArg00, wArg02) : word16)
  Class: Eq_1152
  DataType: 
  OrigDataType: 
T_1153: (in 0x0000 : word16)
  Class: Eq_1153
  DataType: 
  OrigDataType: 
T_1154: (in sp_61 + 0x0000 : word16)
  Class: Eq_1154
  DataType: 
  OrigDataType: 
T_1155: (in Mem74[ss:sp_61 + 0x0000:word16] : word16)
  Class: Eq_1134
  DataType: 
  OrigDataType: 
T_1156: (in 0x0002 : word16)
  Class: Eq_1156
  DataType: 
  OrigDataType: 
T_1157: (in bp_43 - 0x0002 : word16)
  Class: Eq_1157
  DataType: 
  OrigDataType: 
T_1158: (in 0x0002 : word16)
  Class: Eq_1158
  DataType: 
  OrigDataType: 
T_1159: (in sp_61 - 0x0002 : word16)
  Class: Eq_1159
  DataType: 
  OrigDataType: 
T_1160: (in Mem77[ss:sp_61 - 0x0002:word16] : word16)
  Class: Eq_1157
  DataType: 
  OrigDataType: 
T_1161: (in 0x0004 : word16)
  Class: Eq_1161
  DataType: 
  OrigDataType: 
T_1162: (in sp_61 - 0x0004 : word16)
  Class: Eq_1162
  DataType: 
  OrigDataType: 
T_1163: (in Mem79[ss:sp_61 - 0x0004:word16] : word16)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_1164: (in 0x00C3 : word16)
  Class: Eq_1164
  DataType: 
  OrigDataType: 
T_1165: (in 0x0006 : word16)
  Class: Eq_1165
  DataType: 
  OrigDataType: 
T_1166: (in sp_61 - 0x0006 : word16)
  Class: Eq_1166
  DataType: 
  OrigDataType: 
T_1167: (in Mem82[ss:sp_61 - 0x0006:word16] : word16)
  Class: Eq_1164
  DataType: 
  OrigDataType: 
T_1168: (in fn09F1_0007 : ptr32)
  Class: Eq_1118
  DataType: 
  OrigDataType: 
T_1169: (in fn09F1_0007(ds, wArg00, wArg02) : void)
  Class: Eq_1169
  DataType: 
  OrigDataType: 
T_1170: (in 0x0002 : word16)
  Class: Eq_1170
  DataType: 
  OrigDataType: 
T_1171: (in bp_43 - 0x0002 : word16)
  Class: Eq_1171
  DataType: 
  OrigDataType: 
T_1172: (in Mem82[ss:bp_43 - 0x0002:word16] : word16)
  Class: Eq_1172
  DataType: 
  OrigDataType: 
T_1173: (in 0x0000 : word16)
  Class: Eq_1173
  DataType: 
  OrigDataType: 
T_1174: (in sp_61 + 0x0000 : word16)
  Class: Eq_1174
  DataType: 
  OrigDataType: 
T_1175: (in Mem86[ss:sp_61 + 0x0000:word16] : word16)
  Class: Eq_1172
  DataType: 
  OrigDataType: 
T_1176: (in si_88 : word16)
  Class: Eq_1176
  DataType: 
  OrigDataType: 
T_1177: (in fn083C_007C : ptr32)
  Class: Eq_1177
  DataType: 
  OrigDataType: 
T_1178: (in signature of fn083C_007C : void)
  Class: Eq_1177
  DataType: 
  OrigDataType: 
T_1179: (in bp : word16)
  Class: Eq_1125
  DataType: 
  OrigDataType: 
T_1180: (in wArg04 : word16)
  Class: Eq_1114
  DataType: 
  OrigDataType: 
T_1181: (in bpOut : ptr16)
  Class: Eq_1181
  DataType: 
  OrigDataType: 
T_1182: (in siOut : ptr16)
  Class: Eq_1182
  DataType: 
  OrigDataType: 
T_1183: (in out bp_43 : ptr16)
  Class: Eq_1181
  DataType: 
  OrigDataType: 
T_1184: (in out si_88 : ptr16)
  Class: Eq_1182
  DataType: 
  OrigDataType: 
T_1185: (in fn083C_007C(bp_43, wArg00, out bp_43, out si_88) : word16)
  Class: Eq_1185
  DataType: 
  OrigDataType: 
T_1186: (in 0x0000 : word16)
  Class: Eq_1186
  DataType: 
  OrigDataType: 
T_1187: (in sp_61 + 0x0000 : word16)
  Class: Eq_1187
  DataType: 
  OrigDataType: 
T_1188: (in Mem94[ss:sp_61 + 0x0000:word16] : word16)
  Class: Eq_1185
  DataType: 
  OrigDataType: 
T_1189: (in 0x0002 : word16)
  Class: Eq_1189
  DataType: 
  OrigDataType: 
T_1190: (in bp_43 - 0x0002 : word16)
  Class: Eq_1190
  DataType: 
  OrigDataType: 
T_1191: (in Mem94[ss:bp_43 - 0x0002:word16] : word16)
  Class: Eq_1191
  DataType: 
  OrigDataType: 
T_1192: (in 0x0002 : word16)
  Class: Eq_1192
  DataType: 
  OrigDataType: 
T_1193: (in sp_61 - 0x0002 : word16)
  Class: Eq_1193
  DataType: 
  OrigDataType: 
T_1194: (in Mem96[ss:sp_61 - 0x0002:word16] : word16)
  Class: Eq_1191
  DataType: 
  OrigDataType: 
T_1195: (in 0x0004 : word16)
  Class: Eq_1195
  DataType: 
  OrigDataType: 
T_1196: (in sp_61 - 0x0004 : word16)
  Class: Eq_1196
  DataType: 
  OrigDataType: 
T_1197: (in Mem98[ss:sp_61 - 0x0004:word16] : word16)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_1198: (in 0x00C6 : word16)
  Class: Eq_1198
  DataType: 
  OrigDataType: 
T_1199: (in 0x0006 : word16)
  Class: Eq_1199
  DataType: 
  OrigDataType: 
T_1200: (in sp_61 - 0x0006 : word16)
  Class: Eq_1200
  DataType: 
  OrigDataType: 
T_1201: (in Mem101[ss:sp_61 - 0x0006:word16] : word16)
  Class: Eq_1198
  DataType: 
  OrigDataType: 
T_1202: (in 0x0002 : word16)
  Class: Eq_1202
  DataType: 
  OrigDataType: 
T_1203: (in sp_61 + 0x0002 : word16)
  Class: Eq_1129
  DataType: 
  OrigDataType: 
T_1204: (in fn093D_000E : ptr32)
  Class: Eq_1111
  DataType: 
  OrigDataType: 
T_1205: (in fn093D_000E(ds, wArg00, wArg02) : word16)
  Class: Eq_1205
  DataType: 
  OrigDataType: 
T_1206: (in 0x0001 : word16)
  Class: Eq_1206
  DataType: 
  OrigDataType: 
T_1207: (in fn093D_000E(ds, wArg00, wArg02) + 0x0001 : word16)
  Class: Eq_1132
  DataType: 
  OrigDataType: 
T_1208: (in 0x0000 : word16)
  Class: Eq_1208
  DataType: 
  OrigDataType: 
T_1209: (in 0x0002 : word16)
  Class: Eq_1209
  DataType: 
  OrigDataType: 
T_1210: (in sp_103 - 0x0002 : word16)
  Class: Eq_1210
  DataType: 
  OrigDataType: 
T_1211: (in Mem52[ss:sp_103 - 0x0002:word16] : word16)
  Class: Eq_1208
  DataType: 
  OrigDataType: 
T_1212: (in fn084A_000A : ptr32)
  Class: Eq_292
  DataType: 
  OrigDataType: 
T_1213: (in fn084A_000A(ds) : void)
  Class: Eq_1213
  DataType: 
  OrigDataType: 
T_1214: (in ax : word16)
  Class: Eq_1214
  DataType: 
  OrigDataType: 
T_1215: (in ax_17 : word16)
  Class: Eq_1215
  DataType: 
  OrigDataType: 
T_1216: (in sp_19 : word16)
  Class: Eq_1216
  DataType: 
  OrigDataType: 
T_1217: (in fp : ptr16)
  Class: Eq_1217
  DataType: 
  OrigDataType: 
T_1218: (in 0x0004 : word16)
  Class: Eq_1218
  DataType: 
  OrigDataType: 
T_1219: (in fp - 0x0004 : word16)
  Class: Eq_1216
  DataType: 
  OrigDataType: 
T_1220: (in wArg04 : word16)
  Class: Eq_1220
  DataType: 
  OrigDataType: 
T_1221: (in 0x0002 : word16)
  Class: Eq_1220
  DataType: 
  OrigDataType: 
T_1222: (in wArg04 <= 0x0002 : bool)
  Class: Eq_1222
  DataType: 
  OrigDataType: 
T_1223: (in 0x0001 : word16)
  Class: Eq_1215
  DataType: 
  OrigDataType: 
T_1224: (in bp_34 : word16)
  Class: Eq_1125
  DataType: 
  OrigDataType: 
T_1225: (in si_35 : word16)
  Class: Eq_1225
  DataType: 
  OrigDataType: 
T_1226: (in fn083C_007C : ptr32)
  Class: Eq_1177
  DataType: 
  OrigDataType: 
T_1227: (in 0x0002 : word16)
  Class: Eq_1227
  DataType: 
  OrigDataType: 
T_1228: (in fp - 0x0002 : word16)
  Class: Eq_1125
  DataType: 
  OrigDataType: 
T_1229: (in 0x0001 : word16)
  Class: Eq_1229
  DataType: 
  OrigDataType: 
T_1230: (in wArg04 - 0x0001 : word16)
  Class: Eq_1114
  DataType: 
  OrigDataType: 
T_1231: (in out bp_34 : ptr16)
  Class: Eq_1181
  DataType: 
  OrigDataType: 
T_1232: (in out si_35 : ptr16)
  Class: Eq_1182
  DataType: 
  OrigDataType: 
T_1233: (in fn083C_007C(fp - 0x0002, wArg04 - 0x0001, out bp_34, out si_35) : word16)
  Class: Eq_1233
  DataType: 
  OrigDataType: 
T_1234: (in ss : selector)
  Class: Eq_1234
  DataType: 
  OrigDataType: 
T_1235: (in 0x0008 : word16)
  Class: Eq_1235
  DataType: 
  OrigDataType: 
T_1236: (in fp - 0x0008 : word16)
  Class: Eq_1236
  DataType: 
  OrigDataType: 
T_1237: (in Mem40[ss:fp - 0x0008:word16] : word16)
  Class: Eq_1233
  DataType: 
  OrigDataType: 
T_1238: (in 0xFFFE : word16)
  Class: Eq_1238
  DataType: 
  OrigDataType: 
T_1239: (in si_35 + 0xFFFE : word16)
  Class: Eq_1239
  DataType: 
  OrigDataType: 
T_1240: (in 0x000A : word16)
  Class: Eq_1240
  DataType: 
  OrigDataType: 
T_1241: (in fp - 0x000A : word16)
  Class: Eq_1241
  DataType: 
  OrigDataType: 
T_1242: (in Mem45[ss:fp - 0x000A:word16] : word16)
  Class: Eq_1239
  DataType: 
  OrigDataType: 
T_1243: (in 0x0008 : word16)
  Class: Eq_1243
  DataType: 
  OrigDataType: 
T_1244: (in fp - 0x0008 : word16)
  Class: Eq_1216
  DataType: 
  OrigDataType: 
T_1245: (in bp_48 : word16)
  Class: Eq_1245
  DataType: 
  OrigDataType: 
T_1246: (in si_49 : word16)
  Class: Eq_1246
  DataType: 
  OrigDataType: 
T_1247: (in 0x000A : word16)
  Class: Eq_1247
  DataType: 
  OrigDataType: 
T_1248: (in fp - 0x000A : word16)
  Class: Eq_1248
  DataType: 
  OrigDataType: 
T_1249: (in Mem45[ss:fp - 0x000A:word16] : word16)
  Class: Eq_1249
  DataType: 
  OrigDataType: 
T_1250: (in fn083C_007C : ptr32)
  Class: Eq_1177
  DataType: 
  OrigDataType: 
T_1251: (in wArg02 : word16)
  Class: Eq_1114
  DataType: 
  OrigDataType: 
T_1252: (in out bp_48 : ptr16)
  Class: Eq_1181
  DataType: 
  OrigDataType: 
T_1253: (in out si_49 : ptr16)
  Class: Eq_1182
  DataType: 
  OrigDataType: 
T_1254: (in fn083C_007C(bp_34, wArg02, out bp_48, out si_49) : word16)
  Class: Eq_1254
  DataType: 
  OrigDataType: 
T_1255: (in Mem45[ss:fp - 0x000A:word16] + fn083C_007C(bp_34, wArg02, out bp_48, out si_49) : word16)
  Class: Eq_1215
  DataType: 
  OrigDataType: 
T_1256: (in si_22 : word16)
  Class: Eq_1256
  DataType: 
  OrigDataType: 
T_1257: (in 0x0000 : word16)
  Class: Eq_1257
  DataType: 
  OrigDataType: 
T_1258: (in sp_19 + 0x0000 : word16)
  Class: Eq_1258
  DataType: 
  OrigDataType: 
T_1259: (in Mem0[ss:sp_19 + 0x0000:word16] : word16)
  Class: Eq_1259
  DataType: 
  OrigDataType: 
T_1260: (in *siOut : word16)
  Class: Eq_1259
  DataType: 
  OrigDataType: 
T_1261: (in bp_24 : word16)
  Class: Eq_1261
  DataType: 
  OrigDataType: 
T_1262: (in 0x0002 : word16)
  Class: Eq_1262
  DataType: 
  OrigDataType: 
T_1263: (in sp_19 + 0x0002 : word16)
  Class: Eq_1263
  DataType: 
  OrigDataType: 
T_1264: (in Mem0[ss:sp_19 + 0x0002:word16] : word16)
  Class: Eq_1264
  DataType: 
  OrigDataType: 
T_1265: (in *bpOut : word16)
  Class: Eq_1264
  DataType: 
  OrigDataType: 
T_1266: (in si_18 : word16)
  Class: Eq_1266
  DataType: 
  OrigDataType: 
T_1267: (in si_11 : word16)
  Class: Eq_1267
  DataType: 
  OrigDataType: 
T_1268: (in wArg04 : word16)
  Class: Eq_1267
  DataType: 
  OrigDataType: 
T_1269: (in 0x0000 : word16)
  Class: Eq_1267
  DataType: 
  OrigDataType: 
T_1270: (in wArg04 < 0x0000 : bool)
  Class: Eq_1270
  DataType: 
  OrigDataType: 
T_1271: (in -wArg04 : word16)
  Class: Eq_1266
  DataType: 
  OrigDataType: 
T_1272: (in 0x0023 : word16)
  Class: Eq_1266
  DataType: 
  OrigDataType: 
T_1273: (in si_18 >u 0x0023 : bool)
  Class: Eq_1273
  DataType: 
  OrigDataType: 
T_1274: (in 0x0058 : word16)
  Class: Eq_1267
  DataType: 
  OrigDataType: 
T_1275: (in wArg04 <=u 0x0058 : bool)
  Class: Eq_1275
  DataType: 
  OrigDataType: 
T_1276: (in ds : selector)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_1277: (in 0x00DA : word16)
  Class: Eq_1277
  DataType: 
  OrigDataType: 
T_1278: (in Mem30[ds:0x00DA:word16] : word16)
  Class: Eq_1267
  DataType: 
  OrigDataType: 
T_1279: (in 0x00DC : word16)
  Class: Eq_1279
  DataType: 
  OrigDataType: 
T_1280: (in si_11 + 0x00DC : word16)
  Class: Eq_1280
  DataType: 
  OrigDataType: 
T_1281: (in Mem30[ds:si_11 + 0x00DC:byte] : byte)
  Class: Eq_1281
  DataType: 
  OrigDataType: 
T_1282: (in (int16) Mem30[ds:si_11 + 0x00DC:byte] : int16)
  Class: Eq_1266
  DataType: 
  OrigDataType: 
T_1283: (in 0x0057 : word16)
  Class: Eq_1267
  DataType: 
  OrigDataType: 
T_1284: (in 0xFFFF : word16)
  Class: Eq_1284
  DataType: 
  OrigDataType: 
T_1285: (in 0x00DA : word16)
  Class: Eq_1285
  DataType: 
  OrigDataType: 
T_1286: (in Mem44[ds:0x00DA:word16] : word16)
  Class: Eq_1284
  DataType: 
  OrigDataType: 
T_1287: (in 0x007F : word16)
  Class: Eq_1287
  DataType: 
  OrigDataType: 
T_1288: (in Mem20[ds:0x007F:word16] : word16)
  Class: Eq_1266
  DataType: 
  OrigDataType: 
T_1289: (in ax_8 : word16)
  Class: Eq_1289
  DataType: 
  OrigDataType: 
T_1290: (in 0x0144 : word16)
  Class: Eq_1290
  DataType: 
  OrigDataType: 
T_1291: (in Mem0[ds:0x0144:word16] : word16)
  Class: Eq_1289
  DataType: 
  OrigDataType: 
T_1292: (in 0x0144 : word16)
  Class: Eq_1292
  DataType: 
  OrigDataType: 
T_1293: (in Mem0[ds:0x0144:word16] : word16)
  Class: Eq_1293
  DataType: 
  OrigDataType: 
T_1294: (in 0x0001 : word16)
  Class: Eq_1294
  DataType: 
  OrigDataType: 
T_1295: (in Mem0[ds:0x0144:word16] - 0x0001 : word16)
  Class: Eq_1295
  DataType: 
  OrigDataType: 
T_1296: (in Mem10[ds:0x0144:word16] : word16)
  Class: Eq_1295
  DataType: 
  OrigDataType: 
T_1297: (in 0x0000 : word16)
  Class: Eq_1289
  DataType: 
  OrigDataType: 
T_1298: (in ax_8 != 0x0000 : bool)
  Class: Eq_1298
  DataType: 
  OrigDataType: 
T_1299: (in ax : word16)
  Class: Eq_1299
  DataType: 
  OrigDataType: 
T_1300: (in dx_16 : word16)
  Class: Eq_1300
  DataType: 
  OrigDataType: 
T_1301: (in ax_17 : word16)
  Class: Eq_1301
  DataType: 
  OrigDataType: 
T_1302: (in fn0850_020D : ptr32)
  Class: Eq_1302
  DataType: 
  OrigDataType: 
T_1303: (in signature of fn0850_020D : void)
  Class: Eq_1302
  DataType: 
  OrigDataType: 
T_1304: (in ds : selector)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_1305: (in wArg04 : word16)
  Class: Eq_1305
  DataType: 
  OrigDataType: 
T_1306: (in wArg06 : word16)
  Class: Eq_1306
  DataType: 
  OrigDataType: 
T_1307: (in dxOut : ptr16)
  Class: Eq_1307
  DataType: 
  OrigDataType: 
T_1308: (in wArg04 : word16)
  Class: Eq_1305
  DataType: 
  OrigDataType: 
T_1309: (in 0x0000 : word16)
  Class: Eq_1306
  DataType: 
  OrigDataType: 
T_1310: (in out dx_16 : ptr16)
  Class: Eq_1307
  DataType: 
  OrigDataType: 
T_1311: (in fn0850_020D(ds, wArg04, 0x0000, out dx_16) : word16)
  Class: Eq_1301
  DataType: 
  OrigDataType: 
T_1312: (in es_10 : selector)
  Class: Eq_1312
  DataType: 
  OrigDataType: 
T_1313: (in ptrArg04 : segptr32)
  Class: Eq_1313
  DataType: 
  OrigDataType: 
T_1314: (in SLICE(ptrArg04, selector, 16) : selector)
  Class: Eq_1312
  DataType: 
  OrigDataType: 
T_1315: (in bx_11 : word16)
  Class: Eq_1315
  DataType: 
  OrigDataType: 
T_1316: (in (word16) ptrArg04 : word16)
  Class: Eq_1315
  DataType: 
  OrigDataType: 
T_1317: (in dx_13 : word16)
  Class: Eq_1083
  DataType: 
  OrigDataType: 
T_1318: (in 0x000E : word16)
  Class: Eq_1318
  DataType: 
  OrigDataType: 
T_1319: (in bx_11 + 0x000E : word16)
  Class: Eq_1319
  DataType: 
  OrigDataType: 
T_1320: (in Mem0[es_10:bx_11 + 0x000E:word16] : word16)
  Class: Eq_1083
  DataType: 
  OrigDataType: 
T_1321: (in ax_14 : word16)
  Class: Eq_1084
  DataType: 
  OrigDataType: 
T_1322: (in 0x000C : word16)
  Class: Eq_1322
  DataType: 
  OrigDataType: 
T_1323: (in bx_11 + 0x000C : word16)
  Class: Eq_1323
  DataType: 
  OrigDataType: 
T_1324: (in Mem0[es_10:bx_11 + 0x000C:word16] : word16)
  Class: Eq_1084
  DataType: 
  OrigDataType: 
T_1325: (in ds : selector)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_1326: (in 0x0150 : word16)
  Class: Eq_1326
  DataType: 
  OrigDataType: 
T_1327: (in Mem15[ds:0x0150:word16] : word16)
  Class: Eq_1083
  DataType: 
  OrigDataType: 
T_1328: (in 0x014E : word16)
  Class: Eq_1328
  DataType: 
  OrigDataType: 
T_1329: (in Mem17[ds:0x014E:word16] : word16)
  Class: Eq_1084
  DataType: 
  OrigDataType: 
T_1330: (in fn0800_036E : ptr32)
  Class: Eq_1330
  DataType: 
  OrigDataType: 
T_1331: (in signature of fn0800_036E : void)
  Class: Eq_1330
  DataType: 
  OrigDataType: 
T_1332: (in wArg06 : word16)
  Class: Eq_1048
  DataType: 
  OrigDataType: 
T_1333: (in wArg04 : word16)
  Class: Eq_1019
  DataType: 
  OrigDataType: 
T_1334: (in fn0800_036E(ax_14, wArg06, dx_13, wArg04) : byte)
  Class: Eq_1334
  DataType: 
  OrigDataType: 
T_1335: (in es_bx_43 : ptr32)
  Class: Eq_1335
  DataType: 
  OrigDataType: 
T_1336: (in SLICE(ptrArg04, selector, 16) : selector)
  Class: Eq_1336
  DataType: 
  OrigDataType: 
T_1337: (in (word16) ptrArg04 : word16)
  Class: Eq_1337
  DataType: 
  OrigDataType: 
T_1338: (in 0x0008 : word16)
  Class: Eq_1338
  DataType: 
  OrigDataType: 
T_1339: (in (word16) ptrArg04 + 0x0008 : word16)
  Class: Eq_1339
  DataType: 
  OrigDataType: 
T_1340: (in Mem17[SLICE(ptrArg04, selector, 16):(word16) ptrArg04 + 0x0008:segptr32] : segptr32)
  Class: Eq_1335
  DataType: 
  OrigDataType: 
T_1341: (in es_bx_51 : ptr32)
  Class: Eq_1341
  DataType: 
  OrigDataType: 
T_1342: (in 0x014E : word16)
  Class: Eq_1342
  DataType: 
  OrigDataType: 
T_1343: (in Mem17[ds:0x014E:segptr32] : segptr32)
  Class: Eq_1341
  DataType: 
  OrigDataType: 
T_1344: (in es_52 : selector)
  Class: Eq_1344
  DataType: 
  OrigDataType: 
T_1345: (in SLICE(es_bx_51, selector, 16) : selector)
  Class: Eq_1344
  DataType: 
  OrigDataType: 
T_1346: (in bx_53 : word16)
  Class: Eq_1346
  DataType: 
  OrigDataType: 
T_1347: (in (word16) es_bx_51 : word16)
  Class: Eq_1346
  DataType: 
  OrigDataType: 
T_1348: (in SLICE(es_bx_43, selector, 16) : selector)
  Class: Eq_1348
  DataType: 
  OrigDataType: 
T_1349: (in 0x000A : word16)
  Class: Eq_1349
  DataType: 
  OrigDataType: 
T_1350: (in bx_53 + 0x000A : word16)
  Class: Eq_1350
  DataType: 
  OrigDataType: 
T_1351: (in Mem54[es_52:bx_53 + 0x000A:word16] : word16)
  Class: Eq_1348
  DataType: 
  OrigDataType: 
T_1352: (in bx_45 : word16)
  Class: Eq_1352
  DataType: 
  OrigDataType: 
T_1353: (in (word16) es_bx_43 : word16)
  Class: Eq_1352
  DataType: 
  OrigDataType: 
T_1354: (in 0x0008 : word16)
  Class: Eq_1354
  DataType: 
  OrigDataType: 
T_1355: (in bx_53 + 0x0008 : word16)
  Class: Eq_1355
  DataType: 
  OrigDataType: 
T_1356: (in Mem55[es_52:bx_53 + 0x0008:word16] : word16)
  Class: Eq_1352
  DataType: 
  OrigDataType: 
T_1357: (in ptrLoc06_48 : segptr32)
  Class: Eq_1357
  DataType: 
  OrigDataType: 
T_1358: (in ptrLoc06 : segptr32)
  Class: Eq_1358
  DataType: 
  OrigDataType: 
T_1359: (in DPB(ptrLoc06, bx_45, 0, 16) : segptr32)
  Class: Eq_1357
  DataType: 
  OrigDataType: 
T_1360: (in ax_57 : word16)
  Class: Eq_1360
  DataType: 
  OrigDataType: 
T_1361: (in 0x014E : word16)
  Class: Eq_1361
  DataType: 
  OrigDataType: 
T_1362: (in Mem55[ds:0x014E:word16] : word16)
  Class: Eq_1360
  DataType: 
  OrigDataType: 
T_1363: (in es_59 : selector)
  Class: Eq_1363
  DataType: 
  OrigDataType: 
T_1364: (in SLICE(ptrLoc06_48, selector, 16) : selector)
  Class: Eq_1363
  DataType: 
  OrigDataType: 
T_1365: (in bx_60 : word16)
  Class: Eq_1365
  DataType: 
  OrigDataType: 
T_1366: (in (word16) ptrLoc06_48 : word16)
  Class: Eq_1365
  DataType: 
  OrigDataType: 
T_1367: (in 0x0150 : word16)
  Class: Eq_1367
  DataType: 
  OrigDataType: 
T_1368: (in Mem55[ds:0x0150:word16] : word16)
  Class: Eq_1368
  DataType: 
  OrigDataType: 
T_1369: (in 0x000E : word16)
  Class: Eq_1369
  DataType: 
  OrigDataType: 
T_1370: (in bx_60 + 0x000E : word16)
  Class: Eq_1370
  DataType: 
  OrigDataType: 
T_1371: (in Mem61[es_59:bx_60 + 0x000E:word16] : word16)
  Class: Eq_1368
  DataType: 
  OrigDataType: 
T_1372: (in 0x000C : word16)
  Class: Eq_1372
  DataType: 
  OrigDataType: 
T_1373: (in bx_60 + 0x000C : word16)
  Class: Eq_1373
  DataType: 
  OrigDataType: 
T_1374: (in Mem62[es_59:bx_60 + 0x000C:word16] : word16)
  Class: Eq_1360
  DataType: 
  OrigDataType: 
T_1375: (in 0x0000 : word16)
  Class: Eq_1375
  DataType: 
  OrigDataType: 
T_1376: (in 0x0150 : word16)
  Class: Eq_1376
  DataType: 
  OrigDataType: 
T_1377: (in Mem35[ds:0x0150:word16] : word16)
  Class: Eq_1375
  DataType: 
  OrigDataType: 
T_1378: (in 0x0000 : word16)
  Class: Eq_1378
  DataType: 
  OrigDataType: 
T_1379: (in 0x014E : word16)
  Class: Eq_1379
  DataType: 
  OrigDataType: 
T_1380: (in Mem36[ds:0x014E:word16] : word16)
  Class: Eq_1378
  DataType: 
  OrigDataType: 
T_1381: (in ax : word16)
  Class: Eq_1381
  DataType: 
  OrigDataType: 
T_1382: (in es_13 : selector)
  Class: Eq_1382
  DataType: 
  OrigDataType: 
T_1383: (in ptrArg04 : segptr32)
  Class: Eq_1383
  DataType: 
  OrigDataType: 
T_1384: (in SLICE(ptrArg04, selector, 16) : selector)
  Class: Eq_1382
  DataType: 
  OrigDataType: 
T_1385: (in bx_14 : word16)
  Class: Eq_1385
  DataType: 
  OrigDataType: 
T_1386: (in (word16) ptrArg04 : word16)
  Class: Eq_1385
  DataType: 
  OrigDataType: 
T_1387: (in v11_16 : word16)
  Class: Eq_1387
  DataType: 
  OrigDataType: 
T_1388: (in 0x0000 : word16)
  Class: Eq_1388
  DataType: 
  OrigDataType: 
T_1389: (in bx_14 + 0x0000 : word16)
  Class: Eq_1389
  DataType: 
  OrigDataType: 
T_1390: (in Mem0[es_13:bx_14 + 0x0000:word16] : word16)
  Class: Eq_1390
  DataType: 
  OrigDataType: 
T_1391: (in wArg08 : word16)
  Class: Eq_1026
  DataType: 
  OrigDataType: 
T_1392: (in Mem0[es_13:bx_14 + 0x0000:word16] - wArg08 : word16)
  Class: Eq_1387
  DataType: 
  OrigDataType: 
T_1393: (in 0x0000 : word16)
  Class: Eq_1393
  DataType: 
  OrigDataType: 
T_1394: (in bx_14 + 0x0000 : word16)
  Class: Eq_1394
  DataType: 
  OrigDataType: 
T_1395: (in Mem17[es_13:bx_14 + 0x0000:word16] : word16)
  Class: Eq_1387
  DataType: 
  OrigDataType: 
T_1396: (in 0x0002 : word16)
  Class: Eq_1396
  DataType: 
  OrigDataType: 
T_1397: (in bx_14 + 0x0002 : word16)
  Class: Eq_1397
  DataType: 
  OrigDataType: 
T_1398: (in Mem17[es_13:bx_14 + 0x0002:word16] : word16)
  Class: Eq_1398
  DataType: 
  OrigDataType: 
T_1399: (in wArg0A : word16)
  Class: Eq_1021
  DataType: 
  OrigDataType: 
T_1400: (in Mem17[es_13:bx_14 + 0x0002:word16] - wArg0A : word16)
  Class: Eq_1400
  DataType: 
  OrigDataType: 
T_1401: (in 0x0000 : word16)
  Class: Eq_1387
  DataType: 
  OrigDataType: 
T_1402: (in v11_16 <u 0x0000 : bool)
  Class: Eq_1402
  DataType: 
  OrigDataType: 
T_1403: (in Mem17[es_13:bx_14 + 0x0002:word16] - wArg0A - (v11_16 <u 0x0000) : word16)
  Class: Eq_1403
  DataType: 
  OrigDataType: 
T_1404: (in 0x0002 : word16)
  Class: Eq_1404
  DataType: 
  OrigDataType: 
T_1405: (in bx_14 + 0x0002 : word16)
  Class: Eq_1405
  DataType: 
  OrigDataType: 
T_1406: (in Mem21[es_13:bx_14 + 0x0002:word16] : word16)
  Class: Eq_1403
  DataType: 
  OrigDataType: 
T_1407: (in es_24 : selector)
  Class: Eq_1407
  DataType: 
  OrigDataType: 
T_1408: (in SLICE(ptrArg04, selector, 16) : selector)
  Class: Eq_1407
  DataType: 
  OrigDataType: 
T_1409: (in bx_25 : word16)
  Class: Eq_1409
  DataType: 
  OrigDataType: 
T_1410: (in (word16) ptrArg04 : word16)
  Class: Eq_1409
  DataType: 
  OrigDataType: 
T_1411: (in dx_32 : word16)
  Class: Eq_1048
  DataType: 
  OrigDataType: 
T_1412: (in ax_33 : word16)
  Class: Eq_1019
  DataType: 
  OrigDataType: 
T_1413: (in fn0800_0313 : ptr32)
  Class: Eq_1413
  DataType: 
  OrigDataType: 
T_1414: (in signature of fn0800_0313 : void)
  Class: Eq_1413
  DataType: 
  OrigDataType: 
T_1415: (in wArg04 : word16)
  Class: Eq_1019
  DataType: 
  OrigDataType: 
T_1416: (in 0x0002 : word16)
  Class: Eq_1416
  DataType: 
  OrigDataType: 
T_1417: (in bx_25 + 0x0002 : word16)
  Class: Eq_1417
  DataType: 
  OrigDataType: 
T_1418: (in Mem21[es_24:bx_25 + 0x0002:word16] : word16)
  Class: Eq_1021
  DataType: 
  OrigDataType: 
T_1419: (in wArg06 : word16)
  Class: Eq_1048
  DataType: 
  OrigDataType: 
T_1420: (in 0x0000 : word16)
  Class: Eq_1420
  DataType: 
  OrigDataType: 
T_1421: (in bx_25 + 0x0000 : word16)
  Class: Eq_1421
  DataType: 
  OrigDataType: 
T_1422: (in Mem21[es_24:bx_25 + 0x0000:word16] : word16)
  Class: Eq_1026
  DataType: 
  OrigDataType: 
T_1423: (in out dx_32 : ptr16)
  Class: Eq_1057
  DataType: 
  OrigDataType: 
T_1424: (in fn0800_0313(wArg04, Mem21[es_24:bx_25 + 0x0002:word16], wArg06, Mem21[es_24:bx_25 + 0x0000:word16], out dx_32) : word16)
  Class: Eq_1019
  DataType: 
  OrigDataType: 
T_1425: (in ptrLoc06_37 : segptr32)
  Class: Eq_1425
  DataType: 
  OrigDataType: 
T_1426: (in ptrLoc06 : segptr32)
  Class: Eq_1426
  DataType: 
  OrigDataType: 
T_1427: (in DPB(ptrLoc06, ax_33, 0, 16) : segptr32)
  Class: Eq_1425
  DataType: 
  OrigDataType: 
T_1428: (in dx_ax_41 : ui32)
  Class: Eq_1428
  DataType: 
  OrigDataType: 
T_1429: (in 0x0001 : word16)
  Class: Eq_1429
  DataType: 
  OrigDataType: 
T_1430: (in wArg08 + 0x0001 : word16)
  Class: Eq_1430
  DataType: 
  OrigDataType: 
T_1431: (in SEQ(wArg0A, wArg08 + 0x0001) : ui32)
  Class: Eq_1428
  DataType: 
  OrigDataType: 
T_1432: (in es_48 : selector)
  Class: Eq_1432
  DataType: 
  OrigDataType: 
T_1433: (in SLICE(ptrLoc06_37, selector, 16) : selector)
  Class: Eq_1432
  DataType: 
  OrigDataType: 
T_1434: (in bx_49 : word16)
  Class: Eq_1434
  DataType: 
  OrigDataType: 
T_1435: (in (word16) ptrLoc06_37 : word16)
  Class: Eq_1434
  DataType: 
  OrigDataType: 
T_1436: (in 0x00000001 : ui32)
  Class: Eq_1436
  DataType: 
  OrigDataType: 
T_1437: (in dx_ax_41 + 0x00000001 : ui32)
  Class: Eq_1437
  DataType: 
  OrigDataType: 
T_1438: (in SLICE(dx_ax_41 + 0x00000001, word16, 16) : word16)
  Class: Eq_1438
  DataType: 
  OrigDataType: 
T_1439: (in 0x0002 : word16)
  Class: Eq_1439
  DataType: 
  OrigDataType: 
T_1440: (in bx_49 + 0x0002 : word16)
  Class: Eq_1440
  DataType: 
  OrigDataType: 
T_1441: (in Mem50[es_48:bx_49 + 0x0002:word16] : word16)
  Class: Eq_1438
  DataType: 
  OrigDataType: 
T_1442: (in dx_ax_41 + 0x00000001 : ui32)
  Class: Eq_1442
  DataType: 
  OrigDataType: 
T_1443: (in (word16) (dx_ax_41 + 0x00000001) : word16)
  Class: Eq_1443
  DataType: 
  OrigDataType: 
T_1444: (in 0x0000 : word16)
  Class: Eq_1444
  DataType: 
  OrigDataType: 
T_1445: (in bx_49 + 0x0000 : word16)
  Class: Eq_1445
  DataType: 
  OrigDataType: 
T_1446: (in Mem51[es_48:bx_49 + 0x0000:word16] : word16)
  Class: Eq_1443
  DataType: 
  OrigDataType: 
T_1447: (in es_55 : selector)
  Class: Eq_1447
  DataType: 
  OrigDataType: 
T_1448: (in SLICE(ptrLoc06_37, selector, 16) : selector)
  Class: Eq_1447
  DataType: 
  OrigDataType: 
T_1449: (in bx_56 : word16)
  Class: Eq_1449
  DataType: 
  OrigDataType: 
T_1450: (in (word16) ptrLoc06_37 : word16)
  Class: Eq_1449
  DataType: 
  OrigDataType: 
T_1451: (in 0x0006 : word16)
  Class: Eq_1451
  DataType: 
  OrigDataType: 
T_1452: (in bx_56 + 0x0006 : word16)
  Class: Eq_1452
  DataType: 
  OrigDataType: 
T_1453: (in Mem57[es_55:bx_56 + 0x0006:word16] : word16)
  Class: Eq_1048
  DataType: 
  OrigDataType: 
T_1454: (in 0x0004 : word16)
  Class: Eq_1454
  DataType: 
  OrigDataType: 
T_1455: (in bx_56 + 0x0004 : word16)
  Class: Eq_1455
  DataType: 
  OrigDataType: 
T_1456: (in Mem58[es_55:bx_56 + 0x0004:word16] : word16)
  Class: Eq_1019
  DataType: 
  OrigDataType: 
T_1457: (in fn0800_036E : ptr32)
  Class: Eq_1330
  DataType: 
  OrigDataType: 
T_1458: (in ds : selector)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_1459: (in 0x014A : word16)
  Class: Eq_1459
  DataType: 
  OrigDataType: 
T_1460: (in Mem58[ds:0x014A:word16] : word16)
  Class: Eq_1084
  DataType: 
  OrigDataType: 
T_1461: (in 0x014C : word16)
  Class: Eq_1461
  DataType: 
  OrigDataType: 
T_1462: (in Mem58[ds:0x014C:word16] : word16)
  Class: Eq_1083
  DataType: 
  OrigDataType: 
T_1463: (in fn0800_036E(Mem58[ds:0x014A:word16], wArg06, Mem58[ds:0x014C:word16], wArg04) : byte)
  Class: Eq_1463
  DataType: 
  OrigDataType: 
T_1464: (in dx_91 : word16)
  Class: Eq_1464
  DataType: 
  OrigDataType: 
T_1465: (in ptrArg04_95 : segptr32)
  Class: Eq_1465
  DataType: 
  OrigDataType: 
T_1466: (in fn0800_0313 : ptr32)
  Class: Eq_1413
  DataType: 
  OrigDataType: 
T_1467: (in out dx_91 : ptr16)
  Class: Eq_1057
  DataType: 
  OrigDataType: 
T_1468: (in fn0800_0313(ax_33, wArg0A, dx_32, wArg08, out dx_91) : word16)
  Class: Eq_1468
  DataType: 
  OrigDataType: 
T_1469: (in DPB(ptrArg04, fn0800_0313(ax_33, wArg0A, dx_32, wArg08, out dx_91), 0, 16) : segptr32)
  Class: Eq_1465
  DataType: 
  OrigDataType: 
T_1470: (in es_99 : selector)
  Class: Eq_1470
  DataType: 
  OrigDataType: 
T_1471: (in SLICE(ptrArg04_95, selector, 16) : selector)
  Class: Eq_1470
  DataType: 
  OrigDataType: 
T_1472: (in bx_100 : word16)
  Class: Eq_1472
  DataType: 
  OrigDataType: 
T_1473: (in (word16) ptrArg04_95 : word16)
  Class: Eq_1472
  DataType: 
  OrigDataType: 
T_1474: (in 0x0006 : word16)
  Class: Eq_1474
  DataType: 
  OrigDataType: 
T_1475: (in bx_100 + 0x0006 : word16)
  Class: Eq_1475
  DataType: 
  OrigDataType: 
T_1476: (in Mem101[es_99:bx_100 + 0x0006:word16] : word16)
  Class: Eq_1048
  DataType: 
  OrigDataType: 
T_1477: (in 0x0004 : word16)
  Class: Eq_1477
  DataType: 
  OrigDataType: 
T_1478: (in bx_100 + 0x0004 : word16)
  Class: Eq_1478
  DataType: 
  OrigDataType: 
T_1479: (in Mem102[es_99:bx_100 + 0x0004:word16] : word16)
  Class: Eq_1019
  DataType: 
  OrigDataType: 
T_1480: (in SLICE(ptrLoc06_37, selector, 16) : selector)
  Class: Eq_1480
  DataType: 
  OrigDataType: 
T_1481: (in 0x014C : word16)
  Class: Eq_1481
  DataType: 
  OrigDataType: 
T_1482: (in Mem85[ds:0x014C:word16] : word16)
  Class: Eq_1480
  DataType: 
  OrigDataType: 
T_1483: (in (word16) ptrLoc06_37 : word16)
  Class: Eq_1483
  DataType: 
  OrigDataType: 
T_1484: (in 0x014A : word16)
  Class: Eq_1484
  DataType: 
  OrigDataType: 
T_1485: (in Mem86[ds:0x014A:word16] : word16)
  Class: Eq_1483
  DataType: 
  OrigDataType: 
T_1486: (in dx_73 : word16)
  Class: Eq_1486
  DataType: 
  OrigDataType: 
T_1487: (in dxOut : ptr16)
  Class: Eq_1487
  DataType: 
  OrigDataType: 
T_1488: (in *dxOut : word16)
  Class: Eq_1048
  DataType: 
  OrigDataType: 
T_1489: (in 0x0008 : word16)
  Class: Eq_1489
  DataType: 
  OrigDataType: 
T_1490: (in ax_33 + 0x0008 : word16)
  Class: Eq_1490
  DataType: 
  OrigDataType: 
T_1491: (in ax : word16)
  Class: Eq_1491
  DataType: 
  OrigDataType: 
T_1492: (in ax_31 : word16)
  Class: Eq_1492
  DataType: 
  OrigDataType: 
T_1493: (in dx_15 : word16)
  Class: Eq_1493
  DataType: 
  OrigDataType: 
T_1494: (in ax_16 : word16)
  Class: Eq_1494
  DataType: 
  OrigDataType: 
T_1495: (in fn0881_00E3 : ptr32)
  Class: Eq_1495
  DataType: 
  OrigDataType: 
T_1496: (in signature of fn0881_00E3 : void)
  Class: Eq_1495
  DataType: 
  OrigDataType: 
T_1497: (in ds : selector)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_1498: (in wArg04 : word16)
  Class: Eq_1498
  DataType: 
  OrigDataType: 
T_1499: (in wArg06 : word16)
  Class: Eq_1499
  DataType: 
  OrigDataType: 
T_1500: (in dxOut : ptr16)
  Class: Eq_1500
  DataType: 
  OrigDataType: 
T_1501: (in ds : selector)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_1502: (in wArg04 : word16)
  Class: Eq_1498
  DataType: 
  OrigDataType: 
T_1503: (in wArg06 : word16)
  Class: Eq_1499
  DataType: 
  OrigDataType: 
T_1504: (in out dx_15 : ptr16)
  Class: Eq_1500
  DataType: 
  OrigDataType: 
T_1505: (in fn0881_00E3(ds, wArg04, wArg06, out dx_15) : word16)
  Class: Eq_1494
  DataType: 
  OrigDataType: 
T_1506: (in 0xFFFF : word16)
  Class: Eq_1493
  DataType: 
  OrigDataType: 
T_1507: (in dx_15 != 0xFFFF : bool)
  Class: Eq_1507
  DataType: 
  OrigDataType: 
T_1508: (in ax_42 : word16)
  Class: Eq_1508
  DataType: 
  OrigDataType: 
T_1509: (in 0x014A : word16)
  Class: Eq_1509
  DataType: 
  OrigDataType: 
T_1510: (in Mem0[ds:0x014A:word16] : word16)
  Class: Eq_1508
  DataType: 
  OrigDataType: 
T_1511: (in es_45 : selector)
  Class: Eq_1511
  DataType: 
  OrigDataType: 
T_1512: (in ptrLoc06 : segptr32)
  Class: Eq_1512
  DataType: 
  OrigDataType: 
T_1513: (in SLICE(ptrLoc06, selector, 16) : selector)
  Class: Eq_1511
  DataType: 
  OrigDataType: 
T_1514: (in bx_46 : word16)
  Class: Eq_1514
  DataType: 
  OrigDataType: 
T_1515: (in (word16) ptrLoc06 : word16)
  Class: Eq_1514
  DataType: 
  OrigDataType: 
T_1516: (in 0x014C : word16)
  Class: Eq_1516
  DataType: 
  OrigDataType: 
T_1517: (in Mem0[ds:0x014C:word16] : word16)
  Class: Eq_1517
  DataType: 
  OrigDataType: 
T_1518: (in 0x0006 : word16)
  Class: Eq_1518
  DataType: 
  OrigDataType: 
T_1519: (in bx_46 + 0x0006 : word16)
  Class: Eq_1519
  DataType: 
  OrigDataType: 
T_1520: (in Mem47[es_45:bx_46 + 0x0006:word16] : word16)
  Class: Eq_1517
  DataType: 
  OrigDataType: 
T_1521: (in 0x0004 : word16)
  Class: Eq_1521
  DataType: 
  OrigDataType: 
T_1522: (in bx_46 + 0x0004 : word16)
  Class: Eq_1522
  DataType: 
  OrigDataType: 
T_1523: (in Mem48[es_45:bx_46 + 0x0004:word16] : word16)
  Class: Eq_1508
  DataType: 
  OrigDataType: 
T_1524: (in dx_ax_52 : ui32)
  Class: Eq_1524
  DataType: 
  OrigDataType: 
T_1525: (in 0x0001 : word16)
  Class: Eq_1525
  DataType: 
  OrigDataType: 
T_1526: (in wArg04 + 0x0001 : word16)
  Class: Eq_1526
  DataType: 
  OrigDataType: 
T_1527: (in SEQ(wArg06, wArg04 + 0x0001) : ui32)
  Class: Eq_1524
  DataType: 
  OrigDataType: 
T_1528: (in es_58 : selector)
  Class: Eq_1528
  DataType: 
  OrigDataType: 
T_1529: (in SLICE(ptrLoc06, selector, 16) : selector)
  Class: Eq_1528
  DataType: 
  OrigDataType: 
T_1530: (in bx_59 : word16)
  Class: Eq_1530
  DataType: 
  OrigDataType: 
T_1531: (in (word16) ptrLoc06 : word16)
  Class: Eq_1530
  DataType: 
  OrigDataType: 
T_1532: (in 0x00000001 : ui32)
  Class: Eq_1532
  DataType: 
  OrigDataType: 
T_1533: (in dx_ax_52 + 0x00000001 : ui32)
  Class: Eq_1533
  DataType: 
  OrigDataType: 
T_1534: (in SLICE(dx_ax_52 + 0x00000001, word16, 16) : word16)
  Class: Eq_1534
  DataType: 
  OrigDataType: 
T_1535: (in 0x0002 : word16)
  Class: Eq_1535
  DataType: 
  OrigDataType: 
T_1536: (in bx_59 + 0x0002 : word16)
  Class: Eq_1536
  DataType: 
  OrigDataType: 
T_1537: (in Mem60[es_58:bx_59 + 0x0002:word16] : word16)
  Class: Eq_1534
  DataType: 
  OrigDataType: 
T_1538: (in dx_ax_52 + 0x00000001 : ui32)
  Class: Eq_1538
  DataType: 
  OrigDataType: 
T_1539: (in (word16) (dx_ax_52 + 0x00000001) : word16)
  Class: Eq_1539
  DataType: 
  OrigDataType: 
T_1540: (in 0x0000 : word16)
  Class: Eq_1540
  DataType: 
  OrigDataType: 
T_1541: (in bx_59 + 0x0000 : word16)
  Class: Eq_1541
  DataType: 
  OrigDataType: 
T_1542: (in Mem61[es_58:bx_59 + 0x0000:word16] : word16)
  Class: Eq_1539
  DataType: 
  OrigDataType: 
T_1543: (in SLICE(ptrLoc06, selector, 16) : selector)
  Class: Eq_1543
  DataType: 
  OrigDataType: 
T_1544: (in 0x014C : word16)
  Class: Eq_1544
  DataType: 
  OrigDataType: 
T_1545: (in Mem65[ds:0x014C:word16] : word16)
  Class: Eq_1543
  DataType: 
  OrigDataType: 
T_1546: (in (word16) ptrLoc06 : word16)
  Class: Eq_1546
  DataType: 
  OrigDataType: 
T_1547: (in 0x014A : word16)
  Class: Eq_1547
  DataType: 
  OrigDataType: 
T_1548: (in Mem66[ds:0x014A:word16] : word16)
  Class: Eq_1546
  DataType: 
  OrigDataType: 
T_1549: (in dx_67 : word16)
  Class: Eq_1549
  DataType: 
  OrigDataType: 
T_1550: (in 0x014C : word16)
  Class: Eq_1550
  DataType: 
  OrigDataType: 
T_1551: (in Mem66[ds:0x014C:word16] : word16)
  Class: Eq_1551
  DataType: 
  OrigDataType: 
T_1552: (in dxOut : ptr16)
  Class: Eq_1552
  DataType: 
  OrigDataType: 
T_1553: (in *dxOut : word16)
  Class: Eq_1551
  DataType: 
  OrigDataType: 
T_1554: (in 0x014A : word16)
  Class: Eq_1554
  DataType: 
  OrigDataType: 
T_1555: (in Mem66[ds:0x014A:word16] : word16)
  Class: Eq_1555
  DataType: 
  OrigDataType: 
T_1556: (in 0x0008 : word16)
  Class: Eq_1556
  DataType: 
  OrigDataType: 
T_1557: (in Mem66[ds:0x014A:word16] + 0x0008 : word16)
  Class: Eq_1492
  DataType: 
  OrigDataType: 
T_1558: (in 0xFFFF : word16)
  Class: Eq_1494
  DataType: 
  OrigDataType: 
T_1559: (in ax_16 != 0xFFFF : bool)
  Class: Eq_1559
  DataType: 
  OrigDataType: 
T_1560: (in dx_76 : word16)
  Class: Eq_1560
  DataType: 
  OrigDataType: 
T_1561: (in 0x0000 : word16)
  Class: Eq_1561
  DataType: 
  OrigDataType: 
T_1562: (in *dxOut : word16)
  Class: Eq_1561
  DataType: 
  OrigDataType: 
T_1563: (in 0x0000 : word16)
  Class: Eq_1492
  DataType: 
  OrigDataType: 
T_1564: (in ax : word16)
  Class: Eq_1564
  DataType: 
  OrigDataType: 
T_1565: (in ax_31 : word16)
  Class: Eq_1565
  DataType: 
  OrigDataType: 
T_1566: (in dx_15 : word16)
  Class: Eq_1566
  DataType: 
  OrigDataType: 
T_1567: (in ax_16 : word16)
  Class: Eq_1567
  DataType: 
  OrigDataType: 
T_1568: (in fn0881_00E3 : ptr32)
  Class: Eq_1495
  DataType: 
  OrigDataType: 
T_1569: (in ds : selector)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_1570: (in wArg04 : word16)
  Class: Eq_1498
  DataType: 
  OrigDataType: 
T_1571: (in wArg06 : word16)
  Class: Eq_1499
  DataType: 
  OrigDataType: 
T_1572: (in out dx_15 : ptr16)
  Class: Eq_1500
  DataType: 
  OrigDataType: 
T_1573: (in fn0881_00E3(ds, wArg04, wArg06, out dx_15) : word16)
  Class: Eq_1567
  DataType: 
  OrigDataType: 
T_1574: (in 0xFFFF : word16)
  Class: Eq_1566
  DataType: 
  OrigDataType: 
T_1575: (in dx_15 != 0xFFFF : bool)
  Class: Eq_1575
  DataType: 
  OrigDataType: 
T_1576: (in ptrLoc06 : segptr32)
  Class: Eq_1576
  DataType: 
  OrigDataType: 
T_1577: (in SLICE(ptrLoc06, selector, 16) : selector)
  Class: Eq_1577
  DataType: 
  OrigDataType: 
T_1578: (in 0x0148 : word16)
  Class: Eq_1578
  DataType: 
  OrigDataType: 
T_1579: (in Mem44[ds:0x0148:word16] : word16)
  Class: Eq_1577
  DataType: 
  OrigDataType: 
T_1580: (in (word16) ptrLoc06 : word16)
  Class: Eq_1580
  DataType: 
  OrigDataType: 
T_1581: (in 0x0146 : word16)
  Class: Eq_1581
  DataType: 
  OrigDataType: 
T_1582: (in Mem45[ds:0x0146:word16] : word16)
  Class: Eq_1580
  DataType: 
  OrigDataType: 
T_1583: (in SLICE(ptrLoc06, selector, 16) : selector)
  Class: Eq_1583
  DataType: 
  OrigDataType: 
T_1584: (in 0x014C : word16)
  Class: Eq_1584
  DataType: 
  OrigDataType: 
T_1585: (in Mem49[ds:0x014C:word16] : word16)
  Class: Eq_1583
  DataType: 
  OrigDataType: 
T_1586: (in (word16) ptrLoc06 : word16)
  Class: Eq_1586
  DataType: 
  OrigDataType: 
T_1587: (in 0x014A : word16)
  Class: Eq_1587
  DataType: 
  OrigDataType: 
T_1588: (in Mem50[ds:0x014A:word16] : word16)
  Class: Eq_1586
  DataType: 
  OrigDataType: 
T_1589: (in dx_ax_54 : ui32)
  Class: Eq_1589
  DataType: 
  OrigDataType: 
T_1590: (in 0x0001 : word16)
  Class: Eq_1590
  DataType: 
  OrigDataType: 
T_1591: (in wArg04 + 0x0001 : word16)
  Class: Eq_1591
  DataType: 
  OrigDataType: 
T_1592: (in SEQ(wArg06, wArg04 + 0x0001) : ui32)
  Class: Eq_1589
  DataType: 
  OrigDataType: 
T_1593: (in es_60 : selector)
  Class: Eq_1593
  DataType: 
  OrigDataType: 
T_1594: (in SLICE(ptrLoc06, selector, 16) : selector)
  Class: Eq_1593
  DataType: 
  OrigDataType: 
T_1595: (in bx_61 : word16)
  Class: Eq_1595
  DataType: 
  OrigDataType: 
T_1596: (in (word16) ptrLoc06 : word16)
  Class: Eq_1595
  DataType: 
  OrigDataType: 
T_1597: (in 0x00000001 : ui32)
  Class: Eq_1597
  DataType: 
  OrigDataType: 
T_1598: (in dx_ax_54 + 0x00000001 : ui32)
  Class: Eq_1598
  DataType: 
  OrigDataType: 
T_1599: (in SLICE(dx_ax_54 + 0x00000001, word16, 16) : word16)
  Class: Eq_1599
  DataType: 
  OrigDataType: 
T_1600: (in 0x0002 : word16)
  Class: Eq_1600
  DataType: 
  OrigDataType: 
T_1601: (in bx_61 + 0x0002 : word16)
  Class: Eq_1601
  DataType: 
  OrigDataType: 
T_1602: (in Mem62[es_60:bx_61 + 0x0002:word16] : word16)
  Class: Eq_1599
  DataType: 
  OrigDataType: 
T_1603: (in dx_ax_54 + 0x00000001 : ui32)
  Class: Eq_1603
  DataType: 
  OrigDataType: 
T_1604: (in (word16) (dx_ax_54 + 0x00000001) : word16)
  Class: Eq_1604
  DataType: 
  OrigDataType: 
T_1605: (in 0x0000 : word16)
  Class: Eq_1605
  DataType: 
  OrigDataType: 
T_1606: (in bx_61 + 0x0000 : word16)
  Class: Eq_1606
  DataType: 
  OrigDataType: 
T_1607: (in Mem63[es_60:bx_61 + 0x0000:word16] : word16)
  Class: Eq_1604
  DataType: 
  OrigDataType: 
T_1608: (in dx_64 : word16)
  Class: Eq_1608
  DataType: 
  OrigDataType: 
T_1609: (in dxOut : ptr16)
  Class: Eq_1609
  DataType: 
  OrigDataType: 
T_1610: (in *dxOut : word16)
  Class: Eq_1566
  DataType: 
  OrigDataType: 
T_1611: (in 0x0008 : word16)
  Class: Eq_1611
  DataType: 
  OrigDataType: 
T_1612: (in ax_16 + 0x0008 : word16)
  Class: Eq_1565
  DataType: 
  OrigDataType: 
T_1613: (in 0xFFFF : word16)
  Class: Eq_1567
  DataType: 
  OrigDataType: 
T_1614: (in ax_16 != 0xFFFF : bool)
  Class: Eq_1614
  DataType: 
  OrigDataType: 
T_1615: (in dx_73 : word16)
  Class: Eq_1615
  DataType: 
  OrigDataType: 
T_1616: (in 0x0000 : word16)
  Class: Eq_1616
  DataType: 
  OrigDataType: 
T_1617: (in *dxOut : word16)
  Class: Eq_1616
  DataType: 
  OrigDataType: 
T_1618: (in 0x0000 : word16)
  Class: Eq_1565
  DataType: 
  OrigDataType: 
T_1619: (in ax : word16)
  Class: Eq_1619
  DataType: 
  OrigDataType: 
T_1620: (in ax_122 : word16)
  Class: Eq_1620
  DataType: 
  OrigDataType: 
T_1621: (in wArg04 : word16)
  Class: Eq_1621
  DataType: 
  OrigDataType: 
T_1622: (in wArg06 : word16)
  Class: Eq_1622
  DataType: 
  OrigDataType: 
T_1623: (in wArg04 | wArg06 : word16)
  Class: Eq_1623
  DataType: 
  OrigDataType: 
T_1624: (in 0x0000 : word16)
  Class: Eq_1623
  DataType: 
  OrigDataType: 
T_1625: (in (wArg04 | wArg06) != 0x0000 : bool)
  Class: Eq_1625
  DataType: 
  OrigDataType: 
T_1626: (in dx_ax_64 : ui32)
  Class: Eq_1626
  DataType: 
  OrigDataType: 
T_1627: (in 0x0017 : word16)
  Class: Eq_1627
  DataType: 
  OrigDataType: 
T_1628: (in wArg04 + 0x0017 : word16)
  Class: Eq_1628
  DataType: 
  OrigDataType: 
T_1629: (in SEQ(wArg06, wArg04 + 0x0017) : ui32)
  Class: Eq_1626
  DataType: 
  OrigDataType: 
T_1630: (in ax_67 : word16)
  Class: Eq_1630
  DataType: 
  OrigDataType: 
T_1631: (in 0x00000017 : ui32)
  Class: Eq_1631
  DataType: 
  OrigDataType: 
T_1632: (in dx_ax_64 + 0x00000017 : ui32)
  Class: Eq_1632
  DataType: 
  OrigDataType: 
T_1633: (in (word16) (dx_ax_64 + 0x00000017) : word16)
  Class: Eq_1630
  DataType: 
  OrigDataType: 
T_1634: (in dx_68 : word16)
  Class: Eq_1634
  DataType: 
  OrigDataType: 
T_1635: (in dx_ax_64 + 0x00000017 : ui32)
  Class: Eq_1635
  DataType: 
  OrigDataType: 
T_1636: (in SLICE(dx_ax_64 + 0x00000017, word16, 16) : word16)
  Class: Eq_1634
  DataType: 
  OrigDataType: 
T_1637: (in fn0800_036E : ptr32)
  Class: Eq_1330
  DataType: 
  OrigDataType: 
T_1638: (in 0x0146 : word16)
  Class: Eq_1638
  DataType: 
  OrigDataType: 
T_1639: (in Mem0[ds:0x0146:word16] : word16)
  Class: Eq_1084
  DataType: 
  OrigDataType: 
T_1640: (in 0x0000 : word16)
  Class: Eq_1048
  DataType: 
  OrigDataType: 
T_1641: (in 0x0148 : word16)
  Class: Eq_1641
  DataType: 
  OrigDataType: 
T_1642: (in Mem0[ds:0x0148:word16] : word16)
  Class: Eq_1083
  DataType: 
  OrigDataType: 
T_1643: (in 0x0000 : word16)
  Class: Eq_1019
  DataType: 
  OrigDataType: 
T_1644: (in fn0800_036E(Mem0[ds:0x0146:word16], 0x0000, Mem0[ds:0x0148:word16], 0x0000) : byte)
  Class: Eq_1644
  DataType: 
  OrigDataType: 
T_1645: (in dx_41 : word16)
  Class: Eq_1645
  DataType: 
  OrigDataType: 
T_1646: (in 0x0000 : word16)
  Class: Eq_1646
  DataType: 
  OrigDataType: 
T_1647: (in *dxOut : word16)
  Class: Eq_1646
  DataType: 
  OrigDataType: 
T_1648: (in 0x0000 : word16)
  Class: Eq_1620
  DataType: 
  OrigDataType: 
T_1649: (in dx_95 : word16)
  Class: Eq_1083
  DataType: 
  OrigDataType: 
T_1650: (in 0x0150 : word16)
  Class: Eq_1650
  DataType: 
  OrigDataType: 
T_1651: (in Mem0[ds:0x0150:word16] : word16)
  Class: Eq_1083
  DataType: 
  OrigDataType: 
T_1652: (in ax_96 : word16)
  Class: Eq_1084
  DataType: 
  OrigDataType: 
T_1653: (in 0x014E : word16)
  Class: Eq_1653
  DataType: 
  OrigDataType: 
T_1654: (in Mem0[ds:0x014E:word16] : word16)
  Class: Eq_1084
  DataType: 
  OrigDataType: 
T_1655: (in wLoc04_128 : word16)
  Class: Eq_1083
  DataType: 
  OrigDataType: 
T_1656: (in wLoc06_129 : word16)
  Class: Eq_1084
  DataType: 
  OrigDataType: 
T_1657: (in fn0800_036E : ptr32)
  Class: Eq_1330
  DataType: 
  OrigDataType: 
T_1658: (in 0x0000 : word16)
  Class: Eq_1048
  DataType: 
  OrigDataType: 
T_1659: (in 0x0000 : word16)
  Class: Eq_1019
  DataType: 
  OrigDataType: 
T_1660: (in fn0800_036E(ax_96, 0x0000, dx_95, 0x0000) : byte)
  Class: Eq_1660
  DataType: 
  OrigDataType: 
T_1661: (in dx_88 : word16)
  Class: Eq_1661
  DataType: 
  OrigDataType: 
T_1662: (in fn0850_01A7 : ptr32)
  Class: Eq_1662
  DataType: 
  OrigDataType: 
T_1663: (in signature of fn0850_01A7 : void)
  Class: Eq_1662
  DataType: 
  OrigDataType: 
T_1664: (in wArg04 : word16)
  Class: Eq_1664
  DataType: 
  OrigDataType: 
T_1665: (in wArg06 : word16)
  Class: Eq_1665
  DataType: 
  OrigDataType: 
T_1666: (in 0xFFF0 : word16)
  Class: Eq_1666
  DataType: 
  OrigDataType: 
T_1667: (in ax_67 & 0xFFF0 : word16)
  Class: Eq_1664
  DataType: 
  OrigDataType: 
T_1668: (in 0xFFFF : word16)
  Class: Eq_1668
  DataType: 
  OrigDataType: 
T_1669: (in dx_68 & 0xFFFF : word16)
  Class: Eq_1665
  DataType: 
  OrigDataType: 
T_1670: (in out dx_88 : ptr16)
  Class: Eq_1609
  DataType: 
  OrigDataType: 
T_1671: (in fn0850_01A7(ds, ax_67 & 0xFFF0, dx_68 & 0xFFFF, out dx_88) : word16)
  Class: Eq_1620
  DataType: 
  OrigDataType: 
T_1672: (in bx_132 : word16)
  Class: Eq_1672
  DataType: 
  OrigDataType: 
T_1673: (in ptrLoc06 : segptr32)
  Class: Eq_1673
  DataType: 
  OrigDataType: 
T_1674: (in (word16) ptrLoc06 : word16)
  Class: Eq_1672
  DataType: 
  OrigDataType: 
T_1675: (in es_133 : selector)
  Class: Eq_1675
  DataType: 
  OrigDataType: 
T_1676: (in SLICE(ptrLoc06, selector, 16) : selector)
  Class: Eq_1675
  DataType: 
  OrigDataType: 
T_1677: (in cx_bx_141 : ui32)
  Class: Eq_1677
  DataType: 
  OrigDataType: 
T_1678: (in dx_68 & 0xFFFF : word16)
  Class: Eq_1678
  DataType: 
  OrigDataType: 
T_1679: (in ax_67 & 0xFFF0 : word16)
  Class: Eq_1679
  DataType: 
  OrigDataType: 
T_1680: (in 0x0030 : word16)
  Class: Eq_1680
  DataType: 
  OrigDataType: 
T_1681: (in (ax_67 & 0xFFF0) + 0x0030 : word16)
  Class: Eq_1681
  DataType: 
  OrigDataType: 
T_1682: (in SEQ(dx_68 & 0xFFFF, (ax_67 & 0xFFF0) + 0x0030) : ui32)
  Class: Eq_1677
  DataType: 
  OrigDataType: 
T_1683: (in dx_134 : word16)
  Class: Eq_1683
  DataType: 
  OrigDataType: 
T_1684: (in 0x0002 : word16)
  Class: Eq_1684
  DataType: 
  OrigDataType: 
T_1685: (in bx_132 + 0x0002 : word16)
  Class: Eq_1685
  DataType: 
  OrigDataType: 
T_1686: (in Mem0[es_133:bx_132 + 0x0002:word16] : word16)
  Class: Eq_1683
  DataType: 
  OrigDataType: 
T_1687: (in ax_135 : word16)
  Class: Eq_1687
  DataType: 
  OrigDataType: 
T_1688: (in 0x0000 : word16)
  Class: Eq_1688
  DataType: 
  OrigDataType: 
T_1689: (in bx_132 + 0x0000 : word16)
  Class: Eq_1689
  DataType: 
  OrigDataType: 
T_1690: (in Mem0[es_133:bx_132 + 0x0000:word16] : word16)
  Class: Eq_1687
  DataType: 
  OrigDataType: 
T_1691: (in cx_144 : word16)
  Class: Eq_1683
  DataType: 
  OrigDataType: 
T_1692: (in 0x00000030 : ui32)
  Class: Eq_1692
  DataType: 
  OrigDataType: 
T_1693: (in cx_bx_141 + 0x00000030 : ui32)
  Class: Eq_1693
  DataType: 
  OrigDataType: 
T_1694: (in SLICE(cx_bx_141 + 0x00000030, word16, 16) : word16)
  Class: Eq_1683
  DataType: 
  OrigDataType: 
T_1695: (in bx_145 : word16)
  Class: Eq_1687
  DataType: 
  OrigDataType: 
T_1696: (in cx_bx_141 + 0x00000030 : ui32)
  Class: Eq_1696
  DataType: 
  OrigDataType: 
T_1697: (in (word16) (cx_bx_141 + 0x00000030) : word16)
  Class: Eq_1687
  DataType: 
  OrigDataType: 
T_1698: (in dx_134 <u cx_144 : bool)
  Class: Eq_1698
  DataType: 
  OrigDataType: 
T_1699: (in dx_121 : word16)
  Class: Eq_1699
  DataType: 
  OrigDataType: 
T_1700: (in fn0850_0139 : ptr32)
  Class: Eq_1700
  DataType: 
  OrigDataType: 
T_1701: (in signature of fn0850_0139 : void)
  Class: Eq_1700
  DataType: 
  OrigDataType: 
T_1702: (in wArg04 : word16)
  Class: Eq_1702
  DataType: 
  OrigDataType: 
T_1703: (in wArg06 : word16)
  Class: Eq_1703
  DataType: 
  OrigDataType: 
T_1704: (in ax_67 & 0xFFF0 : word16)
  Class: Eq_1702
  DataType: 
  OrigDataType: 
T_1705: (in dx_68 & 0xFFFF : word16)
  Class: Eq_1703
  DataType: 
  OrigDataType: 
T_1706: (in out dx_121 : ptr16)
  Class: Eq_1552
  DataType: 
  OrigDataType: 
T_1707: (in fn0850_0139(ds, ax_67 & 0xFFF0, dx_68 & 0xFFFF, out dx_121) : word16)
  Class: Eq_1620
  DataType: 
  OrigDataType: 
T_1708: (in bx_152 : word16)
  Class: Eq_1708
  DataType: 
  OrigDataType: 
T_1709: (in (word16) ptrLoc06 : word16)
  Class: Eq_1708
  DataType: 
  OrigDataType: 
T_1710: (in es_153 : selector)
  Class: Eq_1710
  DataType: 
  OrigDataType: 
T_1711: (in SLICE(ptrLoc06, selector, 16) : selector)
  Class: Eq_1710
  DataType: 
  OrigDataType: 
T_1712: (in dx_154 : word16)
  Class: Eq_1712
  DataType: 
  OrigDataType: 
T_1713: (in 0x0002 : word16)
  Class: Eq_1713
  DataType: 
  OrigDataType: 
T_1714: (in bx_152 + 0x0002 : word16)
  Class: Eq_1714
  DataType: 
  OrigDataType: 
T_1715: (in Mem0[es_153:bx_152 + 0x0002:word16] : word16)
  Class: Eq_1712
  DataType: 
  OrigDataType: 
T_1716: (in ax_155 : word16)
  Class: Eq_1716
  DataType: 
  OrigDataType: 
T_1717: (in 0x0000 : word16)
  Class: Eq_1717
  DataType: 
  OrigDataType: 
T_1718: (in bx_152 + 0x0000 : word16)
  Class: Eq_1718
  DataType: 
  OrigDataType: 
T_1719: (in Mem0[es_153:bx_152 + 0x0000:word16] : word16)
  Class: Eq_1716
  DataType: 
  OrigDataType: 
T_1720: (in dx_68 & 0xFFFF : word16)
  Class: Eq_1712
  DataType: 
  OrigDataType: 
T_1721: (in dx_154 <u (dx_68 & 0xFFFF) : bool)
  Class: Eq_1721
  DataType: 
  OrigDataType: 
T_1722: (in dx_134 != cx_144 : bool)
  Class: Eq_1722
  DataType: 
  OrigDataType: 
T_1723: (in dx_215 : word16)
  Class: Eq_1723
  DataType: 
  OrigDataType: 
T_1724: (in fn0850_0089 : ptr32)
  Class: Eq_1724
  DataType: 
  OrigDataType: 
T_1725: (in signature of fn0850_0089 : void)
  Class: Eq_1724
  DataType: 
  OrigDataType: 
T_1726: (in ptrArg04 : segptr32)
  Class: Eq_1726
  DataType: 
  OrigDataType: 
T_1727: (in wArg06 : word16)
  Class: Eq_1083
  DataType: 
  OrigDataType: 
T_1728: (in wArg08 : word16)
  Class: Eq_1728
  DataType: 
  OrigDataType: 
T_1729: (in wArg0A : word16)
  Class: Eq_1729
  DataType: 
  OrigDataType: 
T_1730: (in ptrLoc0E : segptr32)
  Class: Eq_1730
  DataType: 
  OrigDataType: 
T_1731: (in DPB(ptrLoc0E, wLoc06_129, 0, 16) : segptr32)
  Class: Eq_1726
  DataType: 
  OrigDataType: 
T_1732: (in ax_67 & 0xFFF0 : word16)
  Class: Eq_1728
  DataType: 
  OrigDataType: 
T_1733: (in dx_68 & 0xFFFF : word16)
  Class: Eq_1729
  DataType: 
  OrigDataType: 
T_1734: (in out dx_215 : ptr16)
  Class: Eq_1487
  DataType: 
  OrigDataType: 
T_1735: (in fn0850_0089(ds, DPB(ptrLoc0E, wLoc06_129, 0, 16), wLoc04_128, ax_67 & 0xFFF0, dx_68 & 0xFFFF, out dx_215) : word16)
  Class: Eq_1620
  DataType: 
  OrigDataType: 
T_1736: (in ax_135 <u bx_145 : bool)
  Class: Eq_1736
  DataType: 
  OrigDataType: 
T_1737: (in es_bx_167 : ptr32)
  Class: Eq_1737
  DataType: 
  OrigDataType: 
T_1738: (in SLICE(ptrLoc06, selector, 16) : selector)
  Class: Eq_1738
  DataType: 
  OrigDataType: 
T_1739: (in (word16) ptrLoc06 : word16)
  Class: Eq_1739
  DataType: 
  OrigDataType: 
T_1740: (in 0x000C : word16)
  Class: Eq_1740
  DataType: 
  OrigDataType: 
T_1741: (in (word16) ptrLoc06 + 0x000C : word16)
  Class: Eq_1741
  DataType: 
  OrigDataType: 
T_1742: (in Mem0[SLICE(ptrLoc06, selector, 16):(word16) ptrLoc06 + 0x000C:segptr32] : segptr32)
  Class: Eq_1737
  DataType: 
  OrigDataType: 
T_1743: (in es_169 : selector)
  Class: Eq_1083
  DataType: 
  OrigDataType: 
T_1744: (in SLICE(es_bx_167, selector, 16) : selector)
  Class: Eq_1083
  DataType: 
  OrigDataType: 
T_1745: (in bx_168 : word16)
  Class: Eq_1084
  DataType: 
  OrigDataType: 
T_1746: (in (word16) es_bx_167 : word16)
  Class: Eq_1084
  DataType: 
  OrigDataType: 
T_1747: (in fn0800_036E : ptr32)
  Class: Eq_1330
  DataType: 
  OrigDataType: 
T_1748: (in 0x0150 : word16)
  Class: Eq_1748
  DataType: 
  OrigDataType: 
T_1749: (in Mem0[ds:0x0150:word16] : word16)
  Class: Eq_1048
  DataType: 
  OrigDataType: 
T_1750: (in 0x014E : word16)
  Class: Eq_1750
  DataType: 
  OrigDataType: 
T_1751: (in Mem0[ds:0x014E:word16] : word16)
  Class: Eq_1019
  DataType: 
  OrigDataType: 
T_1752: (in fn0800_036E(bx_168, Mem0[ds:0x0150:word16], es_169, Mem0[ds:0x014E:word16]) : byte)
  Class: Eq_1752
  DataType: 
  OrigDataType: 
T_1753: (in dx_68 & 0xFFFF : word16)
  Class: Eq_1712
  DataType: 
  OrigDataType: 
T_1754: (in dx_154 != (dx_68 & 0xFFFF) : bool)
  Class: Eq_1754
  DataType: 
  OrigDataType: 
T_1755: (in fn0850_0021 : ptr32)
  Class: Eq_1755
  DataType: 
  OrigDataType: 
T_1756: (in signature of fn0850_0021 : void)
  Class: Eq_1755
  DataType: 
  OrigDataType: 
T_1757: (in ptrArg04 : segptr32)
  Class: Eq_1757
  DataType: 
  OrigDataType: 
T_1758: (in wArg06 : word16)
  Class: Eq_1083
  DataType: 
  OrigDataType: 
T_1759: (in ptrLoc0A : segptr32)
  Class: Eq_1759
  DataType: 
  OrigDataType: 
T_1760: (in DPB(ptrLoc0A, wLoc06_129, 0, 16) : segptr32)
  Class: Eq_1757
  DataType: 
  OrigDataType: 
T_1761: (in fn0850_0021(ds, DPB(ptrLoc0A, wLoc06_129, 0, 16), wLoc04_128) : void)
  Class: Eq_1761
  DataType: 
  OrigDataType: 
T_1762: (in bx_189 : word16)
  Class: Eq_1762
  DataType: 
  OrigDataType: 
T_1763: (in (word16) ptrLoc06 : word16)
  Class: Eq_1762
  DataType: 
  OrigDataType: 
T_1764: (in es_190 : selector)
  Class: Eq_1764
  DataType: 
  OrigDataType: 
T_1765: (in SLICE(ptrLoc06, selector, 16) : selector)
  Class: Eq_1764
  DataType: 
  OrigDataType: 
T_1766: (in v16_191 : word16)
  Class: Eq_1766
  DataType: 
  OrigDataType: 
T_1767: (in 0x0000 : word16)
  Class: Eq_1767
  DataType: 
  OrigDataType: 
T_1768: (in bx_189 + 0x0000 : word16)
  Class: Eq_1768
  DataType: 
  OrigDataType: 
T_1769: (in Mem0[es_190:bx_189 + 0x0000:word16] : word16)
  Class: Eq_1769
  DataType: 
  OrigDataType: 
T_1770: (in 0x0001 : word16)
  Class: Eq_1770
  DataType: 
  OrigDataType: 
T_1771: (in Mem0[es_190:bx_189 + 0x0000:word16] + 0x0001 : word16)
  Class: Eq_1766
  DataType: 
  OrigDataType: 
T_1772: (in 0x0000 : word16)
  Class: Eq_1772
  DataType: 
  OrigDataType: 
T_1773: (in bx_189 + 0x0000 : word16)
  Class: Eq_1773
  DataType: 
  OrigDataType: 
T_1774: (in Mem192[es_190:bx_189 + 0x0000:word16] : word16)
  Class: Eq_1766
  DataType: 
  OrigDataType: 
T_1775: (in 0x0002 : word16)
  Class: Eq_1775
  DataType: 
  OrigDataType: 
T_1776: (in bx_189 + 0x0002 : word16)
  Class: Eq_1776
  DataType: 
  OrigDataType: 
T_1777: (in Mem192[es_190:bx_189 + 0x0002:word16] : word16)
  Class: Eq_1777
  DataType: 
  OrigDataType: 
T_1778: (in 0x0000 : word16)
  Class: Eq_1766
  DataType: 
  OrigDataType: 
T_1779: (in v16_191 <u 0x0000 : bool)
  Class: Eq_1779
  DataType: 
  OrigDataType: 
T_1780: (in Mem192[es_190:bx_189 + 0x0002:word16] + (v16_191 <u 0x0000) : word16)
  Class: Eq_1780
  DataType: 
  OrigDataType: 
T_1781: (in 0x0002 : word16)
  Class: Eq_1781
  DataType: 
  OrigDataType: 
T_1782: (in bx_189 + 0x0002 : word16)
  Class: Eq_1782
  DataType: 
  OrigDataType: 
T_1783: (in Mem196[es_190:bx_189 + 0x0002:word16] : word16)
  Class: Eq_1780
  DataType: 
  OrigDataType: 
T_1784: (in dx_197 : word16)
  Class: Eq_1784
  DataType: 
  OrigDataType: 
T_1785: (in *dxOut : word16)
  Class: Eq_1083
  DataType: 
  OrigDataType: 
T_1786: (in 0x0008 : word16)
  Class: Eq_1786
  DataType: 
  OrigDataType: 
T_1787: (in wLoc06_129 + 0x0008 : word16)
  Class: Eq_1620
  DataType: 
  OrigDataType: 
T_1788: (in ax_67 & 0xFFF0 : word16)
  Class: Eq_1716
  DataType: 
  OrigDataType: 
T_1789: (in ax_155 <u (ax_67 & 0xFFF0) : bool)
  Class: Eq_1789
  DataType: 
  OrigDataType: 
T_1790: (in ax : word16)
  Class: Eq_1790
  DataType: 
  OrigDataType: 
T_1791: (in ax_101 : word16)
  Class: Eq_1791
  DataType: 
  OrigDataType: 
T_1792: (in ax_21 : word16)
  Class: Eq_1792
  DataType: 
  OrigDataType: 
T_1793: (in wArg04 : word16)
  Class: Eq_1793
  DataType: 
  OrigDataType: 
T_1794: (in 0x0001 : word16)
  Class: Eq_1794
  DataType: 
  OrigDataType: 
T_1795: (in wArg04 + 0x0001 : word16)
  Class: Eq_1795
  DataType: 
  OrigDataType: 
T_1796: (in ds : selector)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_1797: (in 0x007B : word16)
  Class: Eq_1797
  DataType: 
  OrigDataType: 
T_1798: (in Mem0[ds:0x007B:word16] : word16)
  Class: Eq_1798
  DataType: 
  OrigDataType: 
T_1799: (in wArg04 + 0x0001 - Mem0[ds:0x007B:word16] : word16)
  Class: Eq_1799
  DataType: 
  OrigDataType: 
T_1800: (in 0x003F : word16)
  Class: Eq_1800
  DataType: 
  OrigDataType: 
T_1801: (in wArg04 + 0x0001 - Mem0[ds:0x007B:word16] + 0x003F : word16)
  Class: Eq_1801
  DataType: 
  OrigDataType: 
T_1802: (in 0x06 : byte)
  Class: Eq_1802
  DataType: 
  OrigDataType: 
T_1803: (in wArg04 + 0x0001 - Mem0[ds:0x007B:word16] + 0x003F >>u 0x06 : word16)
  Class: Eq_1792
  DataType: 
  OrigDataType: 
T_1804: (in 0x0152 : word16)
  Class: Eq_1804
  DataType: 
  OrigDataType: 
T_1805: (in Mem0[ds:0x0152:word16] : word16)
  Class: Eq_1792
  DataType: 
  OrigDataType: 
T_1806: (in ax_21 != Mem0[ds:0x0152:word16] : bool)
  Class: Eq_1806
  DataType: 
  OrigDataType: 
T_1807: (in ax_65 : word16)
  Class: Eq_1807
  DataType: 
  OrigDataType: 
T_1808: (in 0x06 : byte)
  Class: Eq_1808
  DataType: 
  OrigDataType: 
T_1809: (in ax_21 << 0x06 : word16)
  Class: Eq_1809
  DataType: 
  OrigDataType: 
T_1810: (in 0x007B : word16)
  Class: Eq_1810
  DataType: 
  OrigDataType: 
T_1811: (in Mem0[ds:0x007B:word16] : word16)
  Class: Eq_1811
  DataType: 
  OrigDataType: 
T_1812: (in (ax_21 << 0x06) + Mem0[ds:0x007B:word16] : word16)
  Class: Eq_1807
  DataType: 
  OrigDataType: 
T_1813: (in si_109 : word16)
  Class: Eq_1813
  DataType: 
  OrigDataType: 
T_1814: (in ax_21 << 0x06 : word16)
  Class: Eq_1813
  DataType: 
  OrigDataType: 
T_1815: (in di_63 : word16)
  Class: Eq_1807
  DataType: 
  OrigDataType: 
T_1816: (in 0x0091 : word16)
  Class: Eq_1816
  DataType: 
  OrigDataType: 
T_1817: (in Mem0[ds:0x0091:word16] : word16)
  Class: Eq_1807
  DataType: 
  OrigDataType: 
T_1818: (in al_66 : byte)
  Class: Eq_1818
  DataType: 
  OrigDataType: 
T_1819: (in (byte) ax_65 : byte)
  Class: Eq_1818
  DataType: 
  OrigDataType: 
T_1820: (in ax_65 <=u di_63 : bool)
  Class: Eq_1820
  DataType: 
  OrigDataType: 
T_1821: (in ptrArg02 : segptr32)
  Class: Eq_1821
  DataType: 
  OrigDataType: 
T_1822: (in SLICE(ptrArg02, selector, 16) : selector)
  Class: Eq_1822
  DataType: 
  OrigDataType: 
T_1823: (in 0x008D : word16)
  Class: Eq_1823
  DataType: 
  OrigDataType: 
T_1824: (in Mem50[ds:0x008D:word16] : word16)
  Class: Eq_1822
  DataType: 
  OrigDataType: 
T_1825: (in (word16) ptrArg02 : word16)
  Class: Eq_1825
  DataType: 
  OrigDataType: 
T_1826: (in 0x008B : word16)
  Class: Eq_1826
  DataType: 
  OrigDataType: 
T_1827: (in Mem51[ds:0x008B:word16] : word16)
  Class: Eq_1825
  DataType: 
  OrigDataType: 
T_1828: (in 0x0001 : word16)
  Class: Eq_1791
  DataType: 
  OrigDataType: 
T_1829: (in ax_74 : word16)
  Class: Eq_1829
  DataType: 
  OrigDataType: 
T_1830: (in fn0898_0004 : ptr32)
  Class: Eq_1830
  DataType: 
  OrigDataType: 
T_1831: (in signature of fn0898_0004 : void)
  Class: Eq_1830
  DataType: 
  OrigDataType: 
T_1832: (in al : byte)
  Class: Eq_1818
  DataType: 
  OrigDataType: 
T_1833: (in ds : selector)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_1834: (in psegArg04 : selector)
  Class: Eq_1834
  DataType: 
  OrigDataType: 
T_1835: (in wArg06 : word16)
  Class: Eq_1813
  DataType: 
  OrigDataType: 
T_1836: (in 0x007B : word16)
  Class: Eq_1836
  DataType: 
  OrigDataType: 
T_1837: (in Mem0[ds:0x007B:word16] : word16)
  Class: Eq_1834
  DataType: 
  OrigDataType: 
T_1838: (in fn0898_0004(al_66, ds, Mem0[ds:0x007B:word16], si_109) : word16)
  Class: Eq_1829
  DataType: 
  OrigDataType: 
T_1839: (in 0xFFFF : word16)
  Class: Eq_1829
  DataType: 
  OrigDataType: 
T_1840: (in ax_74 != 0xFFFF : bool)
  Class: Eq_1840
  DataType: 
  OrigDataType: 
T_1841: (in 0x007B : word16)
  Class: Eq_1841
  DataType: 
  OrigDataType: 
T_1842: (in Mem0[ds:0x007B:word16] : word16)
  Class: Eq_1842
  DataType: 
  OrigDataType: 
T_1843: (in di_63 - Mem0[ds:0x007B:word16] : word16)
  Class: Eq_1813
  DataType: 
  OrigDataType: 
T_1844: (in 0x007B : word16)
  Class: Eq_1844
  DataType: 
  OrigDataType: 
T_1845: (in Mem0[ds:0x007B:word16] : word16)
  Class: Eq_1845
  DataType: 
  OrigDataType: 
T_1846: (in Mem0[ds:0x007B:word16] + ax_74 : word16)
  Class: Eq_1846
  DataType: 
  OrigDataType: 
T_1847: (in 0x0091 : word16)
  Class: Eq_1847
  DataType: 
  OrigDataType: 
T_1848: (in Mem99[ds:0x0091:word16] : word16)
  Class: Eq_1846
  DataType: 
  OrigDataType: 
T_1849: (in 0x0000 : word16)
  Class: Eq_1849
  DataType: 
  OrigDataType: 
T_1850: (in 0x008F : word16)
  Class: Eq_1850
  DataType: 
  OrigDataType: 
T_1851: (in Mem100[ds:0x008F:word16] : word16)
  Class: Eq_1849
  DataType: 
  OrigDataType: 
T_1852: (in 0x0000 : word16)
  Class: Eq_1791
  DataType: 
  OrigDataType: 
T_1853: (in 0x06 : byte)
  Class: Eq_1853
  DataType: 
  OrigDataType: 
T_1854: (in si_109 >>u 0x06 : word16)
  Class: Eq_1854
  DataType: 
  OrigDataType: 
T_1855: (in 0x0152 : word16)
  Class: Eq_1855
  DataType: 
  OrigDataType: 
T_1856: (in Mem86[ds:0x0152:word16] : word16)
  Class: Eq_1854
  DataType: 
  OrigDataType: 
T_1857: (in SLICE(ptrArg02, selector, 16) : selector)
  Class: Eq_1857
  DataType: 
  OrigDataType: 
T_1858: (in 0x008D : word16)
  Class: Eq_1858
  DataType: 
  OrigDataType: 
T_1859: (in Mem90[ds:0x008D:word16] : word16)
  Class: Eq_1857
  DataType: 
  OrigDataType: 
T_1860: (in (word16) ptrArg02 : word16)
  Class: Eq_1860
  DataType: 
  OrigDataType: 
T_1861: (in 0x008B : word16)
  Class: Eq_1861
  DataType: 
  OrigDataType: 
T_1862: (in Mem91[ds:0x008B:word16] : word16)
  Class: Eq_1860
  DataType: 
  OrigDataType: 
T_1863: (in 0x0001 : word16)
  Class: Eq_1791
  DataType: 
  OrigDataType: 
T_1864: (in ax : word16)
  Class: Eq_1864
  DataType: 
  OrigDataType: 
T_1865: (in ax_31 : word16)
  Class: Eq_1865
  DataType: 
  OrigDataType: 
T_1866: (in wArg06 : word16)
  Class: Eq_1021
  DataType: 
  OrigDataType: 
T_1867: (in 0x0010 : word16)
  Class: Eq_1021
  DataType: 
  OrigDataType: 
T_1868: (in wArg06 < 0x0010 : bool)
  Class: Eq_1868
  DataType: 
  OrigDataType: 
T_1869: (in dx_44 : word16)
  Class: Eq_1083
  DataType: 
  OrigDataType: 
T_1870: (in ax_45 : word16)
  Class: Eq_1084
  DataType: 
  OrigDataType: 
T_1871: (in fn0800_0313 : ptr32)
  Class: Eq_1413
  DataType: 
  OrigDataType: 
T_1872: (in 0x008B : word16)
  Class: Eq_1872
  DataType: 
  OrigDataType: 
T_1873: (in Mem0[ds:0x008B:word16] : word16)
  Class: Eq_1019
  DataType: 
  OrigDataType: 
T_1874: (in 0x008D : word16)
  Class: Eq_1874
  DataType: 
  OrigDataType: 
T_1875: (in Mem0[ds:0x008D:word16] : word16)
  Class: Eq_1048
  DataType: 
  OrigDataType: 
T_1876: (in wArg04 : word16)
  Class: Eq_1026
  DataType: 
  OrigDataType: 
T_1877: (in out dx_44 : ptr16)
  Class: Eq_1057
  DataType: 
  OrigDataType: 
T_1878: (in fn0800_0313(Mem0[ds:0x008B:word16], wArg06, Mem0[ds:0x008D:word16], wArg04, out dx_44) : word16)
  Class: Eq_1084
  DataType: 
  OrigDataType: 
T_1879: (in fn0800_036E : ptr32)
  Class: Eq_1330
  DataType: 
  OrigDataType: 
T_1880: (in 0x0089 : word16)
  Class: Eq_1880
  DataType: 
  OrigDataType: 
T_1881: (in Mem0[ds:0x0089:word16] : word16)
  Class: Eq_1048
  DataType: 
  OrigDataType: 
T_1882: (in 0x0087 : word16)
  Class: Eq_1882
  DataType: 
  OrigDataType: 
T_1883: (in Mem0[ds:0x0087:word16] : word16)
  Class: Eq_1019
  DataType: 
  OrigDataType: 
T_1884: (in fn0800_036E(ax_45, Mem0[ds:0x0089:word16], dx_44, Mem0[ds:0x0087:word16]) : byte)
  Class: Eq_1884
  DataType: 
  OrigDataType: 
T_1885: (in wArg06 > 0x0010 : bool)
  Class: Eq_1885
  DataType: 
  OrigDataType: 
T_1886: (in dx_93 : word16)
  Class: Eq_1886
  DataType: 
  OrigDataType: 
T_1887: (in 0xFFFF : word16)
  Class: Eq_1887
  DataType: 
  OrigDataType: 
T_1888: (in *dxOut : word16)
  Class: Eq_1887
  DataType: 
  OrigDataType: 
T_1889: (in 0xFFFF : word16)
  Class: Eq_1865
  DataType: 
  OrigDataType: 
T_1890: (in 0x0000 : word16)
  Class: Eq_1026
  DataType: 
  OrigDataType: 
T_1891: (in wArg04 <=u 0x0000 : bool)
  Class: Eq_1891
  DataType: 
  OrigDataType: 
T_1892: (in dx_57 : word16)
  Class: Eq_1892
  DataType: 
  OrigDataType: 
T_1893: (in 0xFFFF : word16)
  Class: Eq_1893
  DataType: 
  OrigDataType: 
T_1894: (in *dxOut : word16)
  Class: Eq_1893
  DataType: 
  OrigDataType: 
T_1895: (in 0xFFFF : word16)
  Class: Eq_1865
  DataType: 
  OrigDataType: 
T_1896: (in fn0800_036E : ptr32)
  Class: Eq_1330
  DataType: 
  OrigDataType: 
T_1897: (in 0x0091 : word16)
  Class: Eq_1897
  DataType: 
  OrigDataType: 
T_1898: (in Mem0[ds:0x0091:word16] : word16)
  Class: Eq_1048
  DataType: 
  OrigDataType: 
T_1899: (in 0x008F : word16)
  Class: Eq_1899
  DataType: 
  OrigDataType: 
T_1900: (in Mem0[ds:0x008F:word16] : word16)
  Class: Eq_1019
  DataType: 
  OrigDataType: 
T_1901: (in fn0800_036E(ax_45, Mem0[ds:0x0091:word16], dx_44, Mem0[ds:0x008F:word16]) : byte)
  Class: Eq_1901
  DataType: 
  OrigDataType: 
T_1902: (in es_bx_71 : ptr32)
  Class: Eq_1902
  DataType: 
  OrigDataType: 
T_1903: (in 0x008B : word16)
  Class: Eq_1903
  DataType: 
  OrigDataType: 
T_1904: (in Mem0[ds:0x008B:segptr32] : segptr32)
  Class: Eq_1902
  DataType: 
  OrigDataType: 
T_1905: (in bx_72 : word16)
  Class: Eq_1865
  DataType: 
  OrigDataType: 
T_1906: (in (word16) es_bx_71 : word16)
  Class: Eq_1865
  DataType: 
  OrigDataType: 
T_1907: (in es_73 : selector)
  Class: Eq_1907
  DataType: 
  OrigDataType: 
T_1908: (in SLICE(es_bx_71, selector, 16) : selector)
  Class: Eq_1907
  DataType: 
  OrigDataType: 
T_1909: (in fn0881_000C : ptr32)
  Class: Eq_1909
  DataType: 
  OrigDataType: 
T_1910: (in signature of fn0881_000C : void)
  Class: Eq_1909
  DataType: 
  OrigDataType: 
T_1911: (in ptrArg02 : segptr32)
  Class: Eq_1911
  DataType: 
  OrigDataType: 
T_1912: (in wArg04 : word16)
  Class: Eq_1083
  DataType: 
  OrigDataType: 
T_1913: (in ptrLoc0E : segptr32)
  Class: Eq_1913
  DataType: 
  OrigDataType: 
T_1914: (in DPB(ptrLoc0E, ax_45, 0, 16) : segptr32)
  Class: Eq_1911
  DataType: 
  OrigDataType: 
T_1915: (in fn0881_000C(ds, DPB(ptrLoc0E, ax_45, 0, 16), dx_44) : word16)
  Class: Eq_1915
  DataType: 
  OrigDataType: 
T_1916: (in 0x0000 : word16)
  Class: Eq_1915
  DataType: 
  OrigDataType: 
T_1917: (in fn0881_000C(ds, DPB(ptrLoc0E, ax_45, 0, 16), dx_44) != 0x0000 : bool)
  Class: Eq_1917
  DataType: 
  OrigDataType: 
T_1918: (in dx_89 : word16)
  Class: Eq_1918
  DataType: 
  OrigDataType: 
T_1919: (in *dxOut : selector)
  Class: Eq_1907
  DataType: 
  OrigDataType: 
T_1920: (in dx_87 : word16)
  Class: Eq_1920
  DataType: 
  OrigDataType: 
T_1921: (in 0xFFFF : word16)
  Class: Eq_1921
  DataType: 
  OrigDataType: 
T_1922: (in *dxOut : word16)
  Class: Eq_1921
  DataType: 
  OrigDataType: 
T_1923: (in 0xFFFF : word16)
  Class: Eq_1865
  DataType: 
  OrigDataType: 
T_1924: (in ax : word16)
  Class: Eq_1924
  DataType: 
  OrigDataType: 
T_1925: (in ax_17 : word16)
  Class: Eq_1925
  DataType: 
  OrigDataType: 
T_1926: (in ax_8 : word16)
  Class: Eq_1926
  DataType: 
  OrigDataType: 
T_1927: (in 0x4A : byte)
  Class: Eq_1927
  DataType: 
  OrigDataType: 
T_1928: (in DPB(ax, 0x4A, 8, 8) : word16)
  Class: Eq_1926
  DataType: 
  OrigDataType: 
T_1929: (in bx_13 : word16)
  Class: Eq_1925
  DataType: 
  OrigDataType: 
T_1930: (in msdos_resize_memory_block : ptr32)
  Class: Eq_184
  DataType: 
  OrigDataType: 
T_1931: (in psegArg04 : selector)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_1932: (in wArg06 : word16)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_1933: (in out bx_13 : ptr16)
  Class: Eq_188
  DataType: 
  OrigDataType: 
T_1934: (in msdos_resize_memory_block(psegArg04, wArg06, out bx_13) : bool)
  Class: Eq_1934
  DataType: 
  OrigDataType: 
T_1935: (in fn0846_000E : ptr32)
  Class: Eq_1935
  DataType: 
  OrigDataType: 
T_1936: (in signature of fn0846_000E : void)
  Class: Eq_1935
  DataType: 
  OrigDataType: 
T_1937: (in wArg04 : word16)
  Class: Eq_1926
  DataType: 
  OrigDataType: 
T_1938: (in fn0846_000E(ds, ax_8) : void)
  Class: Eq_1938
  DataType: 
  OrigDataType: 
T_1939: (in 0xFFFF : word16)
  Class: Eq_1925
  DataType: 
  OrigDataType: 
T_1940: (in si : word16)
  Class: Eq_1940
  DataType: 
  OrigDataType: 
T_1941: (in fn0967_0037 : ptr32)
  Class: Eq_1941
  DataType: 
  OrigDataType: 
T_1942: (in signature of fn0967_0037 : void)
  Class: Eq_1941
  DataType: 
  OrigDataType: 
T_1943: (in ds : selector)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_1944: (in ptrArg08 : segptr32)
  Class: Eq_1944
  DataType: 
  OrigDataType: 
T_1945: (in psegArg0A : selector)
  Class: Eq_1945
  DataType: 
  OrigDataType: 
T_1946: (in ptrLoc0E : segptr32)
  Class: Eq_1946
  DataType: 
  OrigDataType: 
T_1947: (in wArg04 : word16)
  Class: Eq_1947
  DataType: 
  OrigDataType: 
T_1948: (in DPB(ptrLoc0E, wArg04, 0, 16) : segptr32)
  Class: Eq_1944
  DataType: 
  OrigDataType: 
T_1949: (in wArg06 : word16)
  Class: Eq_1945
  DataType: 
  OrigDataType: 
T_1950: (in fn0967_0037(ds, DPB(ptrLoc0E, wArg04, 0, 16), wArg06) : void)
  Class: Eq_1950
  DataType: 
  OrigDataType: 
T_1951: (in bLoc57_15 : byte)
  Class: Eq_1951
  DataType: 
  OrigDataType: 
T_1952: (in 0x50 : byte)
  Class: Eq_1951
  DataType: 
  OrigDataType: 
T_1953: (in di_137 : word16)
  Class: Eq_1953
  DataType: 
  OrigDataType: 
T_1954: (in fp : ptr16)
  Class: Eq_1954
  DataType: 
  OrigDataType: 
T_1955: (in 0x0056 : word16)
  Class: Eq_1955
  DataType: 
  OrigDataType: 
T_1956: (in fp - 0x0056 : word16)
  Class: Eq_1953
  DataType: 
  OrigDataType: 
T_1957: (in si_104 : word16)
  Class: Eq_1957
  DataType: 
  OrigDataType: 
T_1958: (in ptrArg08 : segptr32)
  Class: Eq_1958
  DataType: 
  OrigDataType: 
T_1959: (in (word16) ptrArg08 : word16)
  Class: Eq_1957
  DataType: 
  OrigDataType: 
T_1960: (in al_37 : byte)
  Class: Eq_1960
  DataType: 
  OrigDataType: 
T_1961: (in 0x25 : byte)
  Class: Eq_1960
  DataType: 
  OrigDataType: 
T_1962: (in al_37 == 0x25 : bool)
  Class: Eq_1962
  DataType: 
  OrigDataType: 
T_1963: (in 0x0000 : word16)
  Class: Eq_1963
  DataType: 
  OrigDataType: 
T_1964: (in si_104 + 0x0000 : word16)
  Class: Eq_1964
  DataType: 
  OrigDataType: 
T_1965: (in Mem0[ds:si_104 + 0x0000:byte] : byte)
  Class: Eq_1960
  DataType: 
  OrigDataType: 
T_1966: (in al_102 : byte)
  Class: Eq_1960
  DataType: 
  OrigDataType: 
T_1967: (in ax : word16)
  Class: Eq_1967
  DataType: 
  OrigDataType: 
T_1968: (in DPB(ax, al_102, 0, 8) : word16)
  Class: Eq_1967
  DataType: 
  OrigDataType: 
T_1969: (in 0x0001 : word16)
  Class: Eq_1969
  DataType: 
  OrigDataType: 
T_1970: (in si_104 + 0x0001 : word16)
  Class: Eq_1957
  DataType: 
  OrigDataType: 
T_1971: (in 0x25 : byte)
  Class: Eq_1960
  DataType: 
  OrigDataType: 
T_1972: (in al_102 == 0x25 : bool)
  Class: Eq_1972
  DataType: 
  OrigDataType: 
T_1973: (in ss : selector)
  Class: Eq_1973
  DataType: 
  OrigDataType: 
T_1974: (in 0x0000 : word16)
  Class: Eq_1974
  DataType: 
  OrigDataType: 
T_1975: (in di_137 + 0x0000 : word16)
  Class: Eq_1975
  DataType: 
  OrigDataType: 
T_1976: (in Mem96[ss:di_137 + 0x0000:byte] : byte)
  Class: Eq_1960
  DataType: 
  OrigDataType: 
T_1977: (in v16_98 : byte)
  Class: Eq_1951
  DataType: 
  OrigDataType: 
T_1978: (in 0x01 : byte)
  Class: Eq_1978
  DataType: 
  OrigDataType: 
T_1979: (in bLoc57_15 - 0x01 : byte)
  Class: Eq_1951
  DataType: 
  OrigDataType: 
T_1980: (in 0x0001 : word16)
  Class: Eq_1980
  DataType: 
  OrigDataType: 
T_1981: (in di_137 + 0x0001 : word16)
  Class: Eq_1953
  DataType: 
  OrigDataType: 
T_1982: (in 0x00 : byte)
  Class: Eq_1951
  DataType: 
  OrigDataType: 
T_1983: (in v16_98 > 0x00 : bool)
  Class: Eq_1983
  DataType: 
  OrigDataType: 
T_1984: (in 0x0000 : word16)
  Class: Eq_1984
  DataType: 
  OrigDataType: 
T_1985: (in si_104 + 0x0000 : word16)
  Class: Eq_1985
  DataType: 
  OrigDataType: 
T_1986: (in Mem0[ds:si_104 + 0x0000:byte] : byte)
  Class: Eq_1960
  DataType: 
  OrigDataType: 
T_1987: (in 0x0001 : word16)
  Class: Eq_1987
  DataType: 
  OrigDataType: 
T_1988: (in si_104 + 0x0001 : word16)
  Class: Eq_1957
  DataType: 
  OrigDataType: 
T_1989: (in DPB(ax, al_37, 0, 8) : word16)
  Class: Eq_1967
  DataType: 
  OrigDataType: 
T_1990: (in 0x00 : byte)
  Class: Eq_1960
  DataType: 
  OrigDataType: 
T_1991: (in al_37 == 0x00 : bool)
  Class: Eq_1991
  DataType: 
  OrigDataType: 
T_1992: (in fn0967_0066 : ptr32)
  Class: Eq_1992
  DataType: 
  OrigDataType: 
T_1993: (in signature of fn0967_0066 : void)
  Class: Eq_1992
  DataType: 
  OrigDataType: 
T_1994: (in bp : word16)
  Class: Eq_1994
  DataType: 
  OrigDataType: 
T_1995: (in di : word16)
  Class: Eq_1953
  DataType: 
  OrigDataType: 
T_1996: (in 0x0002 : word16)
  Class: Eq_1996
  DataType: 
  OrigDataType: 
T_1997: (in fp - 0x0002 : word16)
  Class: Eq_1994
  DataType: 
  OrigDataType: 
T_1998: (in fn0967_0066(fp - 0x0002, di_137) : void)
  Class: Eq_1998
  DataType: 
  OrigDataType: 
T_1999: (in 0x50 : byte)
  Class: Eq_1951
  DataType: 
  OrigDataType: 
T_2000: (in bLoc57_15 >= 0x50 : bool)
  Class: Eq_2000
  DataType: 
  OrigDataType: 
T_2001: (in 0x50 : byte)
  Class: Eq_1951
  DataType: 
  OrigDataType: 
T_2002: (in bLoc57_15 >= 0x50 : bool)
  Class: Eq_2002
  DataType: 
  OrigDataType: 
T_2003: (in 0x0000 : word16)
  Class: Eq_2003
  DataType: 
  OrigDataType: 
T_2004: (in 0x0000 : word16)
  Class: Eq_2003
  DataType: 
  OrigDataType: 
T_2005: (in 0x0000 == 0x0000 : bool)
  Class: Eq_2005
  DataType: 
  OrigDataType: 
T_2006: (in fn0967_0066 : ptr32)
  Class: Eq_1992
  DataType: 
  OrigDataType: 
T_2007: (in fp - 0x0002 : word16)
  Class: Eq_1994
  DataType: 
  OrigDataType: 
T_2008: (in fn0967_0066(fp - 0x0002, di_137) : void)
  Class: Eq_2008
  DataType: 
  OrigDataType: 
T_2009: (in fn0967_0066 : ptr32)
  Class: Eq_1992
  DataType: 
  OrigDataType: 
T_2010: (in fp - 0x0002 : word16)
  Class: Eq_1994
  DataType: 
  OrigDataType: 
T_2011: (in fn0967_0066(fp - 0x0002, di_137) : void)
  Class: Eq_2011
  DataType: 
  OrigDataType: 
T_2012: (in ax_119 : word16)
  Class: Eq_2012
  DataType: 
  OrigDataType: 
T_2013: (in 0x00 : byte)
  Class: Eq_2013
  DataType: 
  OrigDataType: 
T_2014: (in DPB(ax, 0x00, 8, 8) : word16)
  Class: Eq_2012
  DataType: 
  OrigDataType: 
T_2015: (in bl_122 : byte)
  Class: Eq_2015
  DataType: 
  OrigDataType: 
T_2016: (in (byte) ax_119 : byte)
  Class: Eq_2015
  DataType: 
  OrigDataType: 
T_2017: (in bx_124 : word16)
  Class: Eq_2017
  DataType: 
  OrigDataType: 
T_2018: (in 0x20 : byte)
  Class: Eq_2018
  DataType: 
  OrigDataType: 
T_2019: (in bl_122 - 0x20 : byte)
  Class: Eq_2019
  DataType: 
  OrigDataType: 
T_2020: (in DPB(ax_119, bl_122 - 0x20, 0, 8) : word16)
  Class: Eq_2017
  DataType: 
  OrigDataType: 
T_2021: (in 0x80 : byte)
  Class: Eq_2015
  DataType: 
  OrigDataType: 
T_2022: (in bl_122 >=u 0x80 : bool)
  Class: Eq_2022
  DataType: 
  OrigDataType: 
T_2023: (in 0x045D : word16)
  Class: Eq_2023
  DataType: 
  OrigDataType: 
T_2024: (in bx_124 + 0x045D : word16)
  Class: Eq_2024
  DataType: 
  OrigDataType: 
T_2025: (in Mem0[ds:bx_124 + 0x045D:byte] : byte)
  Class: Eq_2025
  DataType: 
  OrigDataType: 
T_2026: (in DPB(ax_119, Mem0[ds:bx_124 + 0x045D:byte], 0, 8) : word16)
  Class: Eq_2026
  DataType: 
  OrigDataType: 
T_2027: (in 0x0017 : word16)
  Class: Eq_2026
  DataType: 
  OrigDataType: 
T_2028: (in DPB(ax_119, Mem0[ds:bx_124 + 0x045D:byte], 0, 8) <=u 0x0017 : bool)
  Class: Eq_2028
  DataType: 
  OrigDataType: 
T_2029: (in si_133 : word16)
  Class: Eq_1957
  DataType: 
  OrigDataType: 
T_2030: (in al_138 : byte)
  Class: Eq_2030
  DataType: 
  OrigDataType: 
T_2031: (in 0x25 : byte)
  Class: Eq_2030
  DataType: 
  OrigDataType: 
T_2032: (in fn0967_005D : ptr32)
  Class: Eq_2032
  DataType: 
  OrigDataType: 
T_2033: (in signature of fn0967_005D : void)
  Class: Eq_2032
  DataType: 
  OrigDataType: 
T_2034: (in bp : word16)
  Class: Eq_1994
  DataType: 
  OrigDataType: 
T_2035: (in di : word16)
  Class: Eq_1953
  DataType: 
  OrigDataType: 
T_2036: (in al : byte)
  Class: Eq_2030
  DataType: 
  OrigDataType: 
T_2037: (in fp - 0x0002 : word16)
  Class: Eq_1994
  DataType: 
  OrigDataType: 
T_2038: (in fn0967_005D(fp - 0x0002, di_137, al_138) : word16)
  Class: Eq_1953
  DataType: 
  OrigDataType: 
T_2039: (in al_147 : byte)
  Class: Eq_2030
  DataType: 
  OrigDataType: 
T_2040: (in 0x0000 : word16)
  Class: Eq_2040
  DataType: 
  OrigDataType: 
T_2041: (in si_133 + 0x0000 : word16)
  Class: Eq_2041
  DataType: 
  OrigDataType: 
T_2042: (in Mem0[ds:si_133 + 0x0000:byte] : byte)
  Class: Eq_2030
  DataType: 
  OrigDataType: 
T_2043: (in 0x0001 : word16)
  Class: Eq_2043
  DataType: 
  OrigDataType: 
T_2044: (in si_133 + 0x0001 : word16)
  Class: Eq_1957
  DataType: 
  OrigDataType: 
T_2045: (in 0x00 : byte)
  Class: Eq_2030
  DataType: 
  OrigDataType: 
T_2046: (in al_147 != 0x00 : bool)
  Class: Eq_2046
  DataType: 
  OrigDataType: 
T_2047: (in ss : selector)
  Class: Eq_2047
  DataType: 
  OrigDataType: 
T_2048: (in 0x0000 : word16)
  Class: Eq_2048
  DataType: 
  OrigDataType: 
T_2049: (in di + 0x0000 : word16)
  Class: Eq_2049
  DataType: 
  OrigDataType: 
T_2050: (in Mem3[ss:di + 0x0000:byte] : byte)
  Class: Eq_2030
  DataType: 
  OrigDataType: 
T_2051: (in v8_8 : byte)
  Class: Eq_2051
  DataType: 
  OrigDataType: 
T_2052: (in 0x0055 : word16)
  Class: Eq_2052
  DataType: 
  OrigDataType: 
T_2053: (in bp - 0x0055 : word16)
  Class: Eq_2053
  DataType: 
  OrigDataType: 
T_2054: (in Mem3[ss:bp - 0x0055:byte] : byte)
  Class: Eq_2054
  DataType: 
  OrigDataType: 
T_2055: (in 0x01 : byte)
  Class: Eq_2055
  DataType: 
  OrigDataType: 
T_2056: (in Mem3[ss:bp - 0x0055:byte] - 0x01 : byte)
  Class: Eq_2051
  DataType: 
  OrigDataType: 
T_2057: (in 0x0055 : word16)
  Class: Eq_2057
  DataType: 
  OrigDataType: 
T_2058: (in bp - 0x0055 : word16)
  Class: Eq_2058
  DataType: 
  OrigDataType: 
T_2059: (in Mem9[ss:bp - 0x0055:byte] : byte)
  Class: Eq_2051
  DataType: 
  OrigDataType: 
T_2060: (in 0x00 : byte)
  Class: Eq_2051
  DataType: 
  OrigDataType: 
T_2061: (in v8_8 <= 0x00 : bool)
  Class: Eq_2061
  DataType: 
  OrigDataType: 
T_2062: (in fn0967_0095 : ptr32)
  Class: Eq_2062
  DataType: 
  OrigDataType: 
T_2063: (in signature of fn0967_0095 : void)
  Class: Eq_2062
  DataType: 
  OrigDataType: 
T_2064: (in fn0967_0095() : void)
  Class: Eq_2064
  DataType: 
  OrigDataType: 
T_2065: (in 0x0001 : word16)
  Class: Eq_2065
  DataType: 
  OrigDataType: 
T_2066: (in di + 0x0001 : word16)
  Class: Eq_2066
  DataType: 
  OrigDataType: 
T_2067: (in fn0967_0066 : ptr32)
  Class: Eq_1992
  DataType: 
  OrigDataType: 
T_2068: (in di + 0x0001 : word16)
  Class: Eq_1953
  DataType: 
  OrigDataType: 
T_2069: (in fn0967_0066(bp, di + 0x0001) : void)
  Class: Eq_2069
  DataType: 
  OrigDataType: 
T_2070: (in di + 0x0001 : word16)
  Class: Eq_2070
  DataType: 
  OrigDataType: 
T_2071: (in fn0967_0066 : ptr32)
  Class: Eq_1992
  DataType: 
  OrigDataType: 
T_2072: (in di + 0x0001 : word16)
  Class: Eq_1953
  DataType: 
  OrigDataType: 
T_2073: (in fn0967_0066(bp, di + 0x0001) : void)
  Class: Eq_2073
  DataType: 
  OrigDataType: 
T_2074: (in di + 0x0001 : word16)
  Class: Eq_2074
  DataType: 
  OrigDataType: 
T_2075: (in fn09F4_0005 : ptr32)
  Class: Eq_2075
  DataType: 
  OrigDataType: 
T_2076: (in signature of fn09F4_0005 : void)
  Class: Eq_2075
  DataType: 
  OrigDataType: 
T_2077: (in ds : selector)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_2078: (in wArg0C : word16)
  Class: Eq_2078
  DataType: 
  OrigDataType: 
T_2079: (in wArg0E : word16)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_2080: (in wArg10 : word16)
  Class: Eq_2080
  DataType: 
  OrigDataType: 
T_2081: (in psegArg12 : selector)
  Class: Eq_2081
  DataType: 
  OrigDataType: 
T_2082: (in 0x0256 : word16)
  Class: Eq_2078
  DataType: 
  OrigDataType: 
T_2083: (in wArg04 : word16)
  Class: Eq_2080
  DataType: 
  OrigDataType: 
T_2084: (in wArg06 : word16)
  Class: Eq_2081
  DataType: 
  OrigDataType: 
T_2085: (in fn09F4_0005(ds, 0x0256, ds, wArg04, wArg06) : void)
  Class: Eq_2085
  DataType: 
  OrigDataType: 
T_2086: (in al_26 : byte)
  Class: Eq_2086
  DataType: 
  OrigDataType: 
T_2087: (in wArg10 : word16)
  Class: Eq_2087
  DataType: 
  OrigDataType: 
T_2088: (in 0x0000 : word16)
  Class: Eq_2088
  DataType: 
  OrigDataType: 
T_2089: (in wArg10 + 0x0000 : word16)
  Class: Eq_2089
  DataType: 
  OrigDataType: 
T_2090: (in Mem0[ds:wArg10 + 0x0000:byte] : byte)
  Class: Eq_2086
  DataType: 
  OrigDataType: 
T_2091: (in 0x00 : byte)
  Class: Eq_2086
  DataType: 
  OrigDataType: 
T_2092: (in al_26 == 0x00 : bool)
  Class: Eq_2092
  DataType: 
  OrigDataType: 
T_2093: (in 0x25 : byte)
  Class: Eq_2086
  DataType: 
  OrigDataType: 
T_2094: (in al_26 == 0x25 : bool)
  Class: Eq_2094
  DataType: 
  OrigDataType: 
T_2095: (in 0x0001 : word16)
  Class: Eq_2095
  DataType: 
  OrigDataType: 
T_2096: (in wArg10 + 0x0001 : word16)
  Class: Eq_2096
  DataType: 
  OrigDataType: 
T_2097: (in Mem0[ds:wArg10 + 0x0001:byte] : byte)
  Class: Eq_2097
  DataType: 
  OrigDataType: 
T_2098: (in (int16) Mem0[ds:wArg10 + 0x0001:byte] : int16)
  Class: Eq_2098
  DataType: 
  OrigDataType: 
T_2099: (in 0x0000 : word16)
  Class: Eq_2098
  DataType: 
  OrigDataType: 
T_2100: (in (int16) Mem0[ds:wArg10 + 0x0001:byte] < 0x0000 : bool)
  Class: Eq_2100
  DataType: 
  OrigDataType: 
T_2101: (in 0x0001 : word16)
  Class: Eq_2101
  DataType: 
  OrigDataType: 
T_2102: (in ss : selector)
  Class: Eq_2102
  DataType: 
  OrigDataType: 
T_2103: (in fp : ptr16)
  Class: Eq_2103
  DataType: 
  OrigDataType: 
T_2104: (in 0x0028 : word16)
  Class: Eq_2104
  DataType: 
  OrigDataType: 
T_2105: (in fp - 0x0028 : word16)
  Class: Eq_2105
  DataType: 
  OrigDataType: 
T_2106: (in Mem61[ss:fp - 0x0028:word16] : word16)
  Class: Eq_2101
  DataType: 
  OrigDataType: 
T_2107: (in bx : word16)
  Class: Eq_2107
  DataType: 
  OrigDataType: 
T_2108: (in 0x00 : byte)
  Class: Eq_2108
  DataType: 
  OrigDataType: 
T_2109: (in DPB(bx, 0x00, 8, 8) : word16)
  Class: Eq_2109
  DataType: 
  OrigDataType: 
T_2110: (in 0x0015 : word16)
  Class: Eq_2109
  DataType: 
  OrigDataType: 
T_2111: (in DPB(bx, 0x00, 8, 8) <=u 0x0015 : bool)
  Class: Eq_2111
  DataType: 
  OrigDataType: 
*/
