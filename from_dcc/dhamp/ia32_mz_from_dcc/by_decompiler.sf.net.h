// subject.h
// Generated on 5/4/2015 12:04:40 AM by decompiling from_dcc/dhamp/ia32_mz_from_dcc/subject.exe
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
  DataType: (union (uint16 u0) ((memptr T_31 (struct (0 T_293 t0000))) u1) ((union (ptr16 u0) ((memptr T_31 (struct (0 T_98 t0000) (2 T_63 t0002))) u1)) u2) ((memptr T_144 (struct (0 T_2 t0000))) u3))
  OrigDataType: (union (uint16 u0) ((memptr T_31 (struct (0 T_293 t0000))) u1) ((union (ptr16 u0) ((memptr T_31 (struct (0 T_98 t0000) (2 T_63 t0002))) u1)) u2) ((memptr T_144 (struct (0 T_2 t0000))) u3))
T_4: (in 0x0DB6 : word16)
  Class: Eq_4
  DataType: word16
  OrigDataType: word16
T_5: (in dx : word16)
  Class: Eq_4
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_6: (in 0x0DB6 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_7: (in 0x0800 : selector)
  Class: Eq_7
  DataType: (ptr (segment (1C7 T_2 t01C7)))
  OrigDataType: (ptr (segment (1C7 T_2 t01C7)))
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
  Class: Eq_20
  DataType: (ptr (segment (2 T_22 t0002) (2C T_25 t002C) (6B T_273 t006B) (6D T_266 t006D) (6F T_259 t006F) (71 T_252 t0071) (73 T_245 t0073) (83 T_234 t0083) (85 T_236 t0085) (5FE T_209 t05FE) (602 T_240 t0602)))
  OrigDataType: (ptr (segment (2 T_22 t0002) (2C T_25 t002C) (6B T_273 t006B) (6D T_266 t006D) (6F T_259 t006F) (71 T_252 t0071) (73 T_245 t0073) (83 T_234 t0083) (85 T_236 t0085) (5FE T_209 t05FE) (602 T_240 t0602)))
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
  DataType: (union (uint16 u0) ((memptr T_31 (struct (0 T_293 t0000))) u1) ((union (ptr16 u0) ((memptr T_31 (struct (0 T_98 t0000) (2 T_63 t0002))) u1)) u2) ((memptr T_144 (struct (0 T_2 t0000))) u3))
  OrigDataType: (union (uint16 u0) ((memptr T_31 (struct (0 T_293 t0000))) u1) ((union (ptr16 u0) ((memptr T_31 (struct (0 T_98 t0000) (2 T_63 t0002))) u1)) u2) ((memptr T_144 (struct (0 T_2 t0000))) u3))
T_27: (in 0x0DB6 : word16)
  Class: Eq_20
  DataType: word16
  OrigDataType: word16
T_28: (in 0x0DB6 : selector)
  Class: Eq_28
  DataType: (ptr (segment (75 T_47 t0075) (77 T_35 t0077) (79 T_143 t0079) (7B T_2 t007B) (7D T_30 t007D) (81 T_38 t0081) (89 T_172 t0089) (8D T_174 t008D) (91 T_37 t0091) (376 T_2 t0376)))
  OrigDataType: (ptr (segment (75 T_47 t0075) (77 T_35 t0077) (79 T_143 t0079) (7B T_2 t007B) (7D T_30 t007D) (81 T_38 t0081) (89 T_172 t0089) (8D T_174 t008D) (91 T_37 t0091) (376 T_2 t0376)))
T_29: (in 0x007D : word16)
  Class: Eq_29
  DataType: (memptr T_28 (struct (0 T_30 t0000)))
  OrigDataType: (memptr T_28 (struct (0 T_30 t0000)))
T_30: (in Mem0[0x0DB6:0x007D:word16] : word16)
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
T_33: (in Mem0[0x0DB6:0x007B:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_34: (in 0x0077 : word16)
  Class: Eq_34
  DataType: (memptr T_28 (struct (0 T_35 t0000)))
  OrigDataType: (memptr T_28 (struct (0 T_35 t0000)))
T_35: (in Mem0[0x0DB6:0x0077:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_36: (in 0x0091 : word16)
  Class: Eq_36
  DataType: (memptr T_28 (struct (0 T_37 t0000)))
  OrigDataType: (memptr T_28 (struct (0 T_37 t0000)))
T_37: (in Mem0[0x0DB6:0x0091:word16] : word16)
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
T_40: (in Mem0[0x0DB6:0x0081:word16] : word16)
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
  Class: Eq_20
  DataType: (ptr (segment (5B T_333 t005B) (5D T_336 t005D) (5F T_342 t005F) (61 T_345 t0061) (63 T_351 t0063) (65 T_354 t0065) (67 T_360 t0067) (69 T_363 t0069)))
  OrigDataType: (ptr (segment (5B T_333 t005B) (5D T_336 t005D) (5F T_342 t005F) (61 T_345 t0061) (63 T_351 t0063) (65 T_354 t0065) (67 T_360 t0067) (69 T_363 t0069)))
T_45: (in fn0800_012F(al, ds) : void)
  Class: Eq_45
  DataType: void
  OrigDataType: void
T_46: (in 0x0075 : word16)
  Class: Eq_46
  DataType: (memptr T_28 (struct (0 T_47 t0000)))
  OrigDataType: (memptr T_28 (struct (0 T_47 t0000)))
T_47: (in Mem0[0x0DB6:0x0075:segptr32] : segptr32)
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
  DataType: (union (uint16 u0) ((memptr T_31 (struct (0 T_293 t0000))) u1) ((union (ptr16 u0) ((memptr T_31 (struct (0 T_98 t0000) (2 T_63 t0002))) u1)) u2) ((memptr T_144 (struct (0 T_2 t0000))) u3))
  OrigDataType: (union (uint16 u0) ((memptr T_31 (struct (0 T_293 t0000))) u1) ((union (ptr16 u0) ((memptr T_31 (struct (0 T_98 t0000) (2 T_63 t0002))) u1)) u2) ((memptr T_144 (struct (0 T_2 t0000))) u3))
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
T_77: (in Mem0[0x0DB6:0x0081:word16] : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_78: (in 0x0001 : word16)
  Class: Eq_78
  DataType: word16
  OrigDataType: word16
T_79: (in Mem0[0x0DB6:0x0081:word16] + 0x0001 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_80: (in v20 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_81: (in Mem0[0x0DB6:0x0081:word16] : word16)
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
T_87: (in Mem0[0x0DB6:0x0081:word16] : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_88: (in 0x0001 : word16)
  Class: Eq_88
  DataType: word16
  OrigDataType: word16
T_89: (in Mem0[0x0DB6:0x0081:word16] + 0x0001 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_90: (in v21 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_91: (in Mem0[0x0DB6:0x0081:word16] : word16)
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
  DataType: (ptr (fn T_113 (T_112)))
  OrigDataType: (ptr (fn T_113 (T_112)))
T_110: (in signature of fn0800_01AF : void)
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
T_113: (in fn0800_01AF(si) : void)
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
T_133: (in 0x0075 : word16)
  Class: Eq_133
  DataType: (memptr T_28 (struct (0 T_134 t0000)))
  OrigDataType: (memptr T_28 (struct (0 T_134 t0000)))
T_134: (in Mem0[0x0DB6:0x0075:word16] : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_135: (in 0x0002 : word16)
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
T_138: (in 0x0010 : word16)
  Class: Eq_138
  DataType: word16
  OrigDataType: word16
T_139: (in bx + 0x0010 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_140: (in 0xFFF0 : word16)
  Class: Eq_140
  DataType: word16
  OrigDataType: word16
T_141: (in bx & 0xFFF0 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_142: (in 0x0079 : word16)
  Class: Eq_142
  DataType: (memptr T_28 (struct (0 T_143 t0000)))
  OrigDataType: (memptr T_28 (struct (0 T_143 t0000)))
T_143: (in Mem0[0x0DB6:0x0079:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_144: (in ss : selector)
  Class: Eq_4
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_145: (in (byte) dx : byte)
  Class: Eq_64
  DataType: byte
  OrigDataType: byte
T_146: (in SLICE(dx, byte, 8) : byte)
  Class: Eq_66
  DataType: byte
  OrigDataType: byte
T_147: (in bp - dx : word16)
  Class: Eq_22
  DataType: word16
  OrigDataType: word16
T_148: (in 0x0376 : word16)
  Class: Eq_148
  DataType: (memptr T_28 (struct (0 T_149 t0000)))
  OrigDataType: (memptr T_28 (struct (0 T_149 t0000)))
T_149: (in Mem0[0x0DB6:0x0376:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_150: (in SEQ(es, di) : ptr32)
  Class: Eq_47
  DataType: ptr32
  OrigDataType: ptr32
T_151: (in 0x0200 : word16)
  Class: Eq_151
  DataType: word16
  OrigDataType: word16
T_152: (in di - 0x0200 : word16)
  Class: Eq_152
  DataType: word16
  OrigDataType: word16
T_153: (in cond(di - 0x0200) : byte)
  Class: Eq_70
  DataType: byte
  OrigDataType: byte
T_154: (in C : byte)
  Class: Eq_70
  DataType: byte
  OrigDataType: byte
T_155: (in Test(UGE,C) : bool)
  Class: Eq_155
  DataType: bool
  OrigDataType: bool
T_156: (in 0x04 : byte)
  Class: Eq_57
  DataType: byte
  OrigDataType: byte
T_157: (in 0x04 : byte)
  Class: Eq_157
  DataType: uint8
  OrigDataType: uint8
T_158: (in di >>u 0x04 : word16)
  Class: Eq_2
  DataType: uint16
  OrigDataType: uint16
T_159: (in 0x0001 : word16)
  Class: Eq_159
  DataType: word16
  OrigDataType: word16
T_160: (in di + 0x0001 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_161: (in SEQ(es, di) : ptr32)
  Class: Eq_47
  DataType: ptr32
  OrigDataType: ptr32
T_162: (in bp - di : word16)
  Class: Eq_162
  DataType: word16
  OrigDataType: word16
T_163: (in cond(bp - di) : byte)
  Class: Eq_70
  DataType: byte
  OrigDataType: byte
T_164: (in Test(UGE,C) : bool)
  Class: Eq_164
  DataType: bool
  OrigDataType: bool
T_165: (in 0x0200 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_166: (in SEQ(es, di) : ptr32)
  Class: Eq_47
  DataType: ptr32
  OrigDataType: ptr32
T_167: (in 0x0200 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_168: (in 0x0376 : word16)
  Class: Eq_168
  DataType: (memptr T_28 (struct (0 T_169 t0000)))
  OrigDataType: (memptr T_28 (struct (0 T_169 t0000)))
T_169: (in Mem0[0x0DB6:0x0376:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_170: (in bx + dx : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_171: (in 0x0089 : word16)
  Class: Eq_171
  DataType: (memptr T_28 (struct (0 T_172 t0000)))
  OrigDataType: (memptr T_28 (struct (0 T_172 t0000)))
T_172: (in Mem0[0x0DB6:0x0089:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_173: (in 0x008D : word16)
  Class: Eq_173
  DataType: (memptr T_28 (struct (0 T_174 t0000)))
  OrigDataType: (memptr T_28 (struct (0 T_174 t0000)))
T_174: (in Mem0[0x0DB6:0x008D:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_175: (in 0x007B : word16)
  Class: Eq_175
  DataType: (memptr T_28 (struct (0 T_176 t0000)))
  OrigDataType: (memptr T_28 (struct (0 T_176 t0000)))
T_176: (in Mem0[0x0DB6:0x007B:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_177: (in bx - ax : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_178: (in 0x4A : byte)
  Class: Eq_10
  DataType: byte
  OrigDataType: byte
T_179: (in 0x0002 : word16)
  Class: Eq_179
  DataType: word16
  OrigDataType: word16
T_180: (in fp - 0x0002 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_181: (in wLoc02 : word16)
  Class: Eq_2
  DataType: (union (uint16 u0) ((memptr T_31 (struct (0 T_293 t0000))) u1) ((union (ptr16 u0) ((memptr T_31 (struct (0 T_98 t0000) (2 T_63 t0002))) u1)) u2) ((memptr T_144 (struct (0 T_2 t0000))) u3))
  OrigDataType: (union (uint16 u0) ((memptr T_31 (struct (0 T_293 t0000))) u1) ((union (ptr16 u0) ((memptr T_31 (struct (0 T_98 t0000) (2 T_63 t0002))) u1)) u2) ((memptr T_144 (struct (0 T_2 t0000))) u3))
T_182: (in msdos_resize_memory_block : ptr32)
  Class: Eq_182
  DataType: (ptr (fn T_188 (T_31, T_26, T_187)))
  OrigDataType: (ptr (fn T_188 (T_31, T_26, T_187)))
T_183: (in signature of msdos_resize_memory_block : void)
  Class: Eq_182
  DataType: 
  OrigDataType: 
T_184: (in es : selector)
  Class: Eq_2
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_185: (in bx : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_186: (in bxOut : ptr16)
  Class: Eq_186
  DataType: ptr16
  OrigDataType: ptr16
T_187: (in out bx : ptr16)
  Class: Eq_186
  DataType: (ptr (union (uint16 u0) ((memptr T_31 (struct (0 T_293 t0000))) u1) ((union (ptr16 u0) ((memptr T_31 (struct (0 T_98 t0000) (2 T_63 t0002))) u1)) u2) ((memptr T_144 (struct (0 T_2 t0000))) u3)))
  OrigDataType: (ptr (union (uint16 u0) ((memptr T_31 (struct (0 T_293 t0000))) u1) ((union (ptr16 u0) ((memptr T_31 (struct (0 T_98 t0000) (2 T_63 t0002))) u1)) u2) ((memptr T_144 (struct (0 T_2 t0000))) u3)))
T_188: (in msdos_resize_memory_block(es, bx, out bx) : byte)
  Class: Eq_70
  DataType: byte
  OrigDataType: byte
T_189: (in 0x04 : byte)
  Class: Eq_189
  DataType: byte
  OrigDataType: byte
T_190: (in di << 0x04 : word16)
  Class: Eq_2
  DataType: ui16
  OrigDataType: ui16
T_191: (in __cli : ptr32)
  Class: Eq_191
  DataType: (ptr (fn T_192 ()))
  OrigDataType: (ptr (fn T_192 ()))
T_192: (in __cli() : void)
  Class: Eq_192
  DataType: void
  OrigDataType: void
T_193: (in 0x0000 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_194: (in (byte) ax : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_195: (in 0x01C7 : word16)
  Class: Eq_195
  DataType: (memptr T_7 (struct (0 T_196 t0000)))
  OrigDataType: (memptr T_7 (struct (0 T_196 t0000)))
T_196: (in Mem0[0x0800:0x01C7:selector] : selector)
  Class: Eq_2
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_197: (in 0x0618 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_198: (in SEQ(es, di) : ptr32)
  Class: Eq_47
  DataType: ptr32
  OrigDataType: ptr32
T_199: (in 0x06C2 : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_200: (in 0x00AA : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_201: (in SLICE(cx, byte, 8) : byte)
  Class: Eq_55
  DataType: byte
  OrigDataType: byte
T_202: (in (byte) cx : byte)
  Class: Eq_57
  DataType: byte
  OrigDataType: byte
T_203: (in 0x00AA : word16)
  Class: Eq_203
  DataType: word16
  OrigDataType: word16
T_204: (in cond(0x00AA) : byte)
  Class: Eq_70
  DataType: byte
  OrigDataType: byte
T_205: (in 0x0002 : word16)
  Class: Eq_205
  DataType: word16
  OrigDataType: word16
T_206: (in sp - 0x0002 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_207: (in cs : selector)
  Class: Eq_207
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_208: (in 0x05FE : word16)
  Class: Eq_208
  DataType: (memptr T_20 (struct (0 T_209 t0000)))
  OrigDataType: (memptr T_20 (struct (0 T_209 t0000)))
T_209: (in Mem0[ds:0x05FE:word16] : word16)
  Class: Eq_209
  DataType: word16
  OrigDataType: word16
T_210: (in SEQ(cs, Mem0[ds:0x05FE:word16]) : ptr32)
  Class: Eq_210
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_211: (in fn0800_05CF : ptr32)
  Class: Eq_211
  DataType: (ptr (fn T_219 (T_20, T_217, T_181, T_218)))
  OrigDataType: (ptr (fn T_219 (T_20, T_217, T_181, T_218)))
T_212: (in signature of fn0800_05CF : void)
  Class: Eq_211
  DataType: 
  OrigDataType: 
T_213: (in ds : selector)
  Class: Eq_20
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_214: (in wArg00 : word16)
  Class: Eq_214
  DataType: word16
  OrigDataType: word16
T_215: (in wArg02 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_216: (in dsOut : ptr16)
  Class: Eq_216
  DataType: ptr16
  OrigDataType: ptr16
T_217: (in wLoc04 : word16)
  Class: Eq_214
  DataType: word16
  OrigDataType: word16
T_218: (in out ds : ptr16)
  Class: Eq_216
  DataType: (ptr (ptr (segment (2 T_22 t0002) (2C T_25 t002C) (5FE T_209 t05FE))))
  OrigDataType: (ptr (ptr (segment (2 T_22 t0002) (2C T_25 t002C) (5FE T_209 t05FE))))
T_219: (in fn0800_05CF(ds, wLoc04, wLoc02, out ds) : word16)
  Class: Eq_111
  DataType: word16
  OrigDataType: word16
T_220: (in fn0800_06CD : ptr32)
  Class: Eq_220
  DataType: (ptr (fn T_224 (T_112, T_20)))
  OrigDataType: (ptr (fn T_224 (T_112, T_20)))
T_221: (in signature of fn0800_06CD : void)
  Class: Eq_220
  DataType: 
  OrigDataType: 
T_222: (in si : word16)
  Class: Eq_111
  DataType: word16
  OrigDataType: word16
T_223: (in ds : selector)
  Class: Eq_20
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_224: (in fn0800_06CD(si, ds) : void)
  Class: Eq_224
  DataType: void
  OrigDataType: void
T_225: (in 0x0004 : word16)
  Class: Eq_225
  DataType: word16
  OrigDataType: word16
T_226: (in sp + 0x0004 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_227: (in 0x00 : byte)
  Class: Eq_10
  DataType: byte
  OrigDataType: byte
T_228: (in bios_get_system_time : ptr32)
  Class: Eq_228
  DataType: (ptr (fn T_232 (T_231)))
  OrigDataType: (ptr (fn T_232 (T_231)))
T_229: (in signature of bios_get_system_time : void)
  Class: Eq_228
  DataType: 
  OrigDataType: 
T_230: (in dxOut : ptr16)
  Class: Eq_230
  DataType: ptr16
  OrigDataType: ptr16
T_231: (in out dx : ptr16)
  Class: Eq_230
  DataType: (ptr (ptr (segment)))
  OrigDataType: (ptr (ptr (segment)))
T_232: (in bios_get_system_time(out dx) : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_233: (in 0x0083 : word16)
  Class: Eq_233
  DataType: (memptr T_20 (struct (0 T_234 t0000)))
  OrigDataType: (memptr T_20 (struct (0 T_234 t0000)))
T_234: (in Mem0[ds:0x0083:word16] : word16)
  Class: Eq_4
  DataType: word16
  OrigDataType: word16
T_235: (in 0x0085 : word16)
  Class: Eq_235
  DataType: (memptr T_20 (struct (0 T_236 t0000)))
  OrigDataType: (memptr T_20 (struct (0 T_236 t0000)))
T_236: (in Mem0[ds:0x0085:word16] : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_237: (in 0x0002 : word16)
  Class: Eq_237
  DataType: word16
  OrigDataType: word16
T_238: (in sp - 0x0002 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_239: (in 0x0602 : word16)
  Class: Eq_239
  DataType: (memptr T_20 (struct (0 T_240 t0000)))
  OrigDataType: (memptr T_20 (struct (0 T_240 t0000)))
T_240: (in Mem0[ds:0x0602:word16] : word16)
  Class: Eq_240
  DataType: word16
  OrigDataType: word16
T_241: (in SEQ(cs, Mem0[ds:0x0602:word16]) : ptr32)
  Class: Eq_241
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_242: (in 0x0002 : word16)
  Class: Eq_242
  DataType: word16
  OrigDataType: word16
T_243: (in sp - 0x0002 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_244: (in 0x0073 : word16)
  Class: Eq_244
  DataType: (memptr T_20 (struct (0 T_245 t0000)))
  OrigDataType: (memptr T_20 (struct (0 T_245 t0000)))
T_245: (in Mem0[ds:0x0073:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_246: (in 0x0000 : word16)
  Class: Eq_246
  DataType: word16
  OrigDataType: word16
T_247: (in sp + 0x0000 : word16)
  Class: Eq_247
  DataType: word16
  OrigDataType: word16
T_248: (in Mem0[ss:sp + 0x0000:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_249: (in 0x0002 : word16)
  Class: Eq_249
  DataType: word16
  OrigDataType: word16
T_250: (in sp - 0x0002 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_251: (in 0x0071 : word16)
  Class: Eq_251
  DataType: (memptr T_20 (struct (0 T_252 t0000)))
  OrigDataType: (memptr T_20 (struct (0 T_252 t0000)))
T_252: (in Mem0[ds:0x0071:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_253: (in 0x0000 : word16)
  Class: Eq_253
  DataType: word16
  OrigDataType: word16
T_254: (in sp + 0x0000 : word16)
  Class: Eq_254
  DataType: word16
  OrigDataType: word16
T_255: (in Mem0[ss:sp + 0x0000:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_256: (in 0x0002 : word16)
  Class: Eq_256
  DataType: word16
  OrigDataType: word16
T_257: (in sp - 0x0002 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_258: (in 0x006F : word16)
  Class: Eq_258
  DataType: (memptr T_20 (struct (0 T_259 t0000)))
  OrigDataType: (memptr T_20 (struct (0 T_259 t0000)))
T_259: (in Mem0[ds:0x006F:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_260: (in 0x0000 : word16)
  Class: Eq_260
  DataType: word16
  OrigDataType: word16
T_261: (in sp + 0x0000 : word16)
  Class: Eq_261
  DataType: word16
  OrigDataType: word16
T_262: (in Mem0[ss:sp + 0x0000:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_263: (in 0x0002 : word16)
  Class: Eq_263
  DataType: word16
  OrigDataType: word16
T_264: (in sp - 0x0002 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_265: (in 0x006D : word16)
  Class: Eq_265
  DataType: (memptr T_20 (struct (0 T_266 t0000)))
  OrigDataType: (memptr T_20 (struct (0 T_266 t0000)))
T_266: (in Mem0[ds:0x006D:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_267: (in 0x0000 : word16)
  Class: Eq_267
  DataType: word16
  OrigDataType: word16
T_268: (in sp + 0x0000 : word16)
  Class: Eq_268
  DataType: word16
  OrigDataType: word16
T_269: (in Mem0[ss:sp + 0x0000:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_270: (in 0x0002 : word16)
  Class: Eq_270
  DataType: word16
  OrigDataType: word16
T_271: (in sp - 0x0002 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_272: (in 0x006B : word16)
  Class: Eq_272
  DataType: (memptr T_20 (struct (0 T_273 t0000)))
  OrigDataType: (memptr T_20 (struct (0 T_273 t0000)))
T_273: (in Mem0[ds:0x006B:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_274: (in 0x0000 : word16)
  Class: Eq_274
  DataType: word16
  OrigDataType: word16
T_275: (in sp + 0x0000 : word16)
  Class: Eq_275
  DataType: word16
  OrigDataType: word16
T_276: (in Mem0[ss:sp + 0x0000:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_277: (in fn087B_0004 : ptr32)
  Class: Eq_277
  DataType: (ptr (fn T_280 (T_20)))
  OrigDataType: (ptr (fn T_280 (T_20)))
T_278: (in signature of fn087B_0004 : void)
  Class: Eq_277
  DataType: 
  OrigDataType: 
T_279: (in ds : selector)
  Class: Eq_20
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_280: (in fn087B_0004(ds) : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_281: (in (byte) ax : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_282: (in 0x0002 : word16)
  Class: Eq_282
  DataType: word16
  OrigDataType: word16
T_283: (in sp - 0x0002 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_284: (in 0x0000 : word16)
  Class: Eq_284
  DataType: word16
  OrigDataType: word16
T_285: (in sp + 0x0000 : word16)
  Class: Eq_285
  DataType: word16
  OrigDataType: word16
T_286: (in Mem0[ss:sp + 0x0000:word16] : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_287: (in fn0BCA_0002 : ptr32)
  Class: Eq_287
  DataType: (ptr (fn T_290 (T_20)))
  OrigDataType: (ptr (fn T_290 (T_20)))
T_288: (in signature of fn0BCA_0002 : void)
  Class: Eq_287
  DataType: 
  OrigDataType: 
T_289: (in ds : selector)
  Class: Eq_20
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_290: (in fn0BCA_0002(ds) : void)
  Class: Eq_290
  DataType: void
  OrigDataType: void
T_291: (in 0x0000 : word16)
  Class: Eq_291
  DataType: word16
  OrigDataType: word16
T_292: (in di + 0x0000 : word16)
  Class: Eq_292
  DataType: word16
  OrigDataType: word16
T_293: (in Mem0[es:di + 0x0000:byte] : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_294: (in 0x0001 : word16)
  Class: Eq_294
  DataType: word16
  OrigDataType: word16
T_295: (in di + 0x0001 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_296: (in SEQ(es, di) : ptr32)
  Class: Eq_47
  DataType: ptr32
  OrigDataType: ptr32
T_297: (in 0x0001 : word16)
  Class: Eq_297
  DataType: word16
  OrigDataType: word16
T_298: (in cx - 0x0001 : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_299: (in SLICE(cx, byte, 8) : byte)
  Class: Eq_55
  DataType: byte
  OrigDataType: byte
T_300: (in (byte) cx : byte)
  Class: Eq_57
  DataType: byte
  OrigDataType: byte
T_301: (in 0x0000 : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_302: (in cx == 0x0000 : bool)
  Class: Eq_302
  DataType: bool
  OrigDataType: bool
T_303: (in fn0800_010D : ptr32)
  Class: Eq_303
  DataType: (ptr (fn T_308 (T_17, T_307)))
  OrigDataType: (ptr (fn T_308 (T_17, T_307)))
T_304: (in signature of fn0800_010D : void)
  Class: Eq_303
  DataType: 
  OrigDataType: 
T_305: (in al : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_306: (in bArg02 : byte)
  Class: Eq_306
  DataType: byte
  OrigDataType: byte
T_307: (in bArg02 : byte)
  Class: Eq_306
  DataType: byte
  OrigDataType: byte
T_308: (in fn0800_010D(al, bArg02) : void)
  Class: Eq_308
  DataType: void
  OrigDataType: void
T_309: (in ds_3 : selector)
  Class: Eq_2
  DataType: (ptr (segment (600 T_319 t0600)))
  OrigDataType: (ptr (segment (600 T_319 t0600)))
T_310: (in 0x01C7 : word16)
  Class: Eq_310
  DataType: (memptr T_7 (struct (0 T_311 t0000)))
  OrigDataType: (memptr T_7 (struct (0 T_311 t0000)))
T_311: (in Mem0[0x0800:0x01C7:selector] : selector)
  Class: Eq_2
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_312: (in fn0800_0172 : ptr32)
  Class: Eq_312
  DataType: (ptr (fn T_316 (T_305, T_309)))
  OrigDataType: (ptr (fn T_316 (T_305, T_309)))
T_313: (in signature of fn0800_0172 : void)
  Class: Eq_312
  DataType: 
  OrigDataType: 
T_314: (in al : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_315: (in ds : selector)
  Class: Eq_2
  DataType: (ptr (segment (5B T_375 t005B) (5F T_379 t005F) (63 T_383 t0063) (67 T_388 t0067)))
  OrigDataType: (ptr (segment (5B T_375 t005B) (5F T_379 t005F) (63 T_383 t0063) (67 T_388 t0067)))
T_316: (in fn0800_0172(al, ds_3) : void)
  Class: Eq_316
  DataType: void
  OrigDataType: void
T_317: (in cs : selector)
  Class: Eq_317
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_318: (in 0x0600 : word16)
  Class: Eq_318
  DataType: (memptr T_309 (struct (0 T_319 t0000)))
  OrigDataType: (memptr T_309 (struct (0 T_319 t0000)))
T_319: (in Mem0[ds_3:0x0600:word16] : word16)
  Class: Eq_319
  DataType: word16
  OrigDataType: word16
T_320: (in SEQ(cs, Mem0[ds_3:0x0600:word16]) : ptr32)
  Class: Eq_320
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_321: (in msdos_terminate : ptr32)
  Class: Eq_321
  DataType: (ptr (fn T_325 (T_324)))
  OrigDataType: (ptr (fn T_325 (T_324)))
T_322: (in signature of msdos_terminate : void)
  Class: Eq_321
  DataType: 
  OrigDataType: 
T_323: (in al : byte)
  Class: Eq_323
  DataType: byte
  OrigDataType: byte
T_324: (in bArg02 : byte)
  Class: Eq_323
  DataType: byte
  OrigDataType: byte
T_325: (in msdos_terminate(bArg02) : void)
  Class: Eq_325
  DataType: void
  OrigDataType: void
T_326: (in es_bx_6 : word32)
  Class: Eq_326
  DataType: word32
  OrigDataType: word32
T_327: (in msdos_get_interrupt_vector : ptr32)
  Class: Eq_327
  DataType: (ptr (fn T_330 (T_43)))
  OrigDataType: (ptr (fn T_330 (T_43)))
T_328: (in signature of msdos_get_interrupt_vector : void)
  Class: Eq_327
  DataType: 
  OrigDataType: 
T_329: (in al : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_330: (in msdos_get_interrupt_vector(al) : word32)
  Class: Eq_326
  DataType: word32
  OrigDataType: word32
T_331: (in (word16) es_bx_6 : word16)
  Class: Eq_331
  DataType: word16
  OrigDataType: word16
T_332: (in 0x005B : word16)
  Class: Eq_332
  DataType: (memptr T_44 (struct (0 T_333 t0000)))
  OrigDataType: (memptr T_44 (struct (0 T_333 t0000)))
T_333: (in Mem9[ds:0x005B:word16] : word16)
  Class: Eq_331
  DataType: word16
  OrigDataType: word16
T_334: (in SLICE(es_bx_6, selector, 16) : selector)
  Class: Eq_334
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_335: (in 0x005D : word16)
  Class: Eq_335
  DataType: (memptr T_44 (struct (0 T_336 t0000)))
  OrigDataType: (memptr T_44 (struct (0 T_336 t0000)))
T_336: (in Mem10[ds:0x005D:word16] : word16)
  Class: Eq_334
  DataType: word16
  OrigDataType: word16
T_337: (in es_bx_11 : word32)
  Class: Eq_337
  DataType: word32
  OrigDataType: word32
T_338: (in msdos_get_interrupt_vector : ptr32)
  Class: Eq_327
  DataType: (ptr (fn T_339 (T_43)))
  OrigDataType: (ptr (fn T_339 (T_43)))
T_339: (in msdos_get_interrupt_vector(al) : word32)
  Class: Eq_337
  DataType: word32
  OrigDataType: word32
T_340: (in (word16) es_bx_11 : word16)
  Class: Eq_340
  DataType: word16
  OrigDataType: word16
T_341: (in 0x005F : word16)
  Class: Eq_341
  DataType: (memptr T_44 (struct (0 T_342 t0000)))
  OrigDataType: (memptr T_44 (struct (0 T_342 t0000)))
T_342: (in Mem14[ds:0x005F:word16] : word16)
  Class: Eq_340
  DataType: word16
  OrigDataType: word16
T_343: (in SLICE(es_bx_11, selector, 16) : selector)
  Class: Eq_343
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_344: (in 0x0061 : word16)
  Class: Eq_344
  DataType: (memptr T_44 (struct (0 T_345 t0000)))
  OrigDataType: (memptr T_44 (struct (0 T_345 t0000)))
T_345: (in Mem15[ds:0x0061:word16] : word16)
  Class: Eq_343
  DataType: word16
  OrigDataType: word16
T_346: (in es_bx_16 : word32)
  Class: Eq_346
  DataType: word32
  OrigDataType: word32
T_347: (in msdos_get_interrupt_vector : ptr32)
  Class: Eq_327
  DataType: (ptr (fn T_348 (T_43)))
  OrigDataType: (ptr (fn T_348 (T_43)))
T_348: (in msdos_get_interrupt_vector(al) : word32)
  Class: Eq_346
  DataType: word32
  OrigDataType: word32
T_349: (in (word16) es_bx_16 : word16)
  Class: Eq_349
  DataType: word16
  OrigDataType: word16
T_350: (in 0x0063 : word16)
  Class: Eq_350
  DataType: (memptr T_44 (struct (0 T_351 t0000)))
  OrigDataType: (memptr T_44 (struct (0 T_351 t0000)))
T_351: (in Mem19[ds:0x0063:word16] : word16)
  Class: Eq_349
  DataType: word16
  OrigDataType: word16
T_352: (in SLICE(es_bx_16, selector, 16) : selector)
  Class: Eq_352
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_353: (in 0x0065 : word16)
  Class: Eq_353
  DataType: (memptr T_44 (struct (0 T_354 t0000)))
  OrigDataType: (memptr T_44 (struct (0 T_354 t0000)))
T_354: (in Mem20[ds:0x0065:word16] : word16)
  Class: Eq_352
  DataType: word16
  OrigDataType: word16
T_355: (in es_bx_21 : word32)
  Class: Eq_355
  DataType: word32
  OrigDataType: word32
T_356: (in msdos_get_interrupt_vector : ptr32)
  Class: Eq_327
  DataType: (ptr (fn T_357 (T_43)))
  OrigDataType: (ptr (fn T_357 (T_43)))
T_357: (in msdos_get_interrupt_vector(al) : word32)
  Class: Eq_355
  DataType: word32
  OrigDataType: word32
T_358: (in (word16) es_bx_21 : word16)
  Class: Eq_358
  DataType: word16
  OrigDataType: word16
T_359: (in 0x0067 : word16)
  Class: Eq_359
  DataType: (memptr T_44 (struct (0 T_360 t0000)))
  OrigDataType: (memptr T_44 (struct (0 T_360 t0000)))
T_360: (in Mem24[ds:0x0067:word16] : word16)
  Class: Eq_358
  DataType: word16
  OrigDataType: word16
T_361: (in SLICE(es_bx_21, selector, 16) : selector)
  Class: Eq_361
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_362: (in 0x0069 : word16)
  Class: Eq_362
  DataType: (memptr T_44 (struct (0 T_363 t0000)))
  OrigDataType: (memptr T_44 (struct (0 T_363 t0000)))
T_363: (in Mem25[ds:0x0069:word16] : word16)
  Class: Eq_361
  DataType: word16
  OrigDataType: word16
T_364: (in msdos_set_interrupt_vector : ptr32)
  Class: Eq_364
  DataType: (ptr (fn T_372 (T_368, T_371)))
  OrigDataType: (ptr (fn T_372 (T_368, T_371)))
T_365: (in signature of msdos_set_interrupt_vector : void)
  Class: Eq_364
  DataType: 
  OrigDataType: 
T_366: (in al : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_367: (in ds_dx : word32)
  Class: Eq_367
  DataType: word32
  OrigDataType: word32
T_368: (in 0x00 : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_369: (in cs : selector)
  Class: Eq_369
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_370: (in 0x0125 : word16)
  Class: Eq_370
  DataType: word16
  OrigDataType: word16
T_371: (in SEQ(cs, 0x0125) : word32)
  Class: Eq_367
  DataType: word32
  OrigDataType: word32
T_372: (in msdos_set_interrupt_vector(0x00, SEQ(cs, 0x0125)) : void)
  Class: Eq_372
  DataType: void
  OrigDataType: void
T_373: (in msdos_set_interrupt_vector : ptr32)
  Class: Eq_364
  DataType: (ptr (fn T_376 (T_314, T_375)))
  OrigDataType: (ptr (fn T_376 (T_314, T_375)))
T_374: (in 0x005B : word16)
  Class: Eq_374
  DataType: (memptr T_315 (struct (0 T_375 t0000)))
  OrigDataType: (memptr T_315 (struct (0 T_375 t0000)))
T_375: (in Mem0[ds:0x005B:segptr32] : segptr32)
  Class: Eq_367
  DataType: segptr32
  OrigDataType: segptr32
T_376: (in msdos_set_interrupt_vector(al, Mem0[ds:0x005B:segptr32]) : void)
  Class: Eq_376
  DataType: void
  OrigDataType: void
T_377: (in msdos_set_interrupt_vector : ptr32)
  Class: Eq_364
  DataType: (ptr (fn T_380 (T_314, T_379)))
  OrigDataType: (ptr (fn T_380 (T_314, T_379)))
T_378: (in 0x005F : word16)
  Class: Eq_378
  DataType: (memptr T_315 (struct (0 T_379 t0000)))
  OrigDataType: (memptr T_315 (struct (0 T_379 t0000)))
T_379: (in Mem0[ds:0x005F:segptr32] : segptr32)
  Class: Eq_367
  DataType: segptr32
  OrigDataType: segptr32
T_380: (in msdos_set_interrupt_vector(al, Mem0[ds:0x005F:segptr32]) : void)
  Class: Eq_380
  DataType: void
  OrigDataType: void
T_381: (in msdos_set_interrupt_vector : ptr32)
  Class: Eq_364
  DataType: (ptr (fn T_384 (T_314, T_383)))
  OrigDataType: (ptr (fn T_384 (T_314, T_383)))
T_382: (in 0x0063 : word16)
  Class: Eq_382
  DataType: (memptr T_315 (struct (0 T_383 t0000)))
  OrigDataType: (memptr T_315 (struct (0 T_383 t0000)))
T_383: (in Mem0[ds:0x0063:segptr32] : segptr32)
  Class: Eq_367
  DataType: segptr32
  OrigDataType: segptr32
T_384: (in msdos_set_interrupt_vector(al, Mem0[ds:0x0063:segptr32]) : void)
  Class: Eq_384
  DataType: void
  OrigDataType: void
T_385: (in msdos_set_interrupt_vector : ptr32)
  Class: Eq_364
  DataType: (ptr (fn T_389 (T_386, T_388)))
  OrigDataType: (ptr (fn T_389 (T_386, T_388)))
T_386: (in 0x06 : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_387: (in 0x0067 : word16)
  Class: Eq_387
  DataType: (memptr T_315 (struct (0 T_388 t0000)))
  OrigDataType: (memptr T_315 (struct (0 T_388 t0000)))
T_388: (in Mem0[ds:0x0067:segptr32] : segptr32)
  Class: Eq_367
  DataType: segptr32
  OrigDataType: segptr32
T_389: (in msdos_set_interrupt_vector(0x06, Mem0[ds:0x0067:segptr32]) : void)
  Class: Eq_389
  DataType: void
  OrigDataType: void
T_390: (in bx : word16)
  Class: Eq_390
  DataType: word16
  OrigDataType: word16
T_391: (in ax_8 : word16)
  Class: Eq_391
  DataType: word16
  OrigDataType: word16
T_392: (in msdos_write_file : ptr32)
  Class: Eq_392
  DataType: (ptr (fn T_402 (T_398, T_399, T_400, T_401)))
  OrigDataType: (ptr (fn T_402 (T_398, T_399, T_400, T_401)))
T_393: (in signature of msdos_write_file : void)
  Class: Eq_392
  DataType: 
  OrigDataType: 
T_394: (in bx : word16)
  Class: Eq_394
  DataType: word16
  OrigDataType: word16
T_395: (in cx : word16)
  Class: Eq_395
  DataType: word16
  OrigDataType: word16
T_396: (in ds_dx : word32)
  Class: Eq_396
  DataType: word32
  OrigDataType: word32
T_397: (in axOut : ptr16)
  Class: Eq_397
  DataType: ptr16
  OrigDataType: ptr16
T_398: (in 0x0002 : word16)
  Class: Eq_394
  DataType: word16
  OrigDataType: word16
T_399: (in cx : word16)
  Class: Eq_395
  DataType: word16
  OrigDataType: word16
T_400: (in ds_dx : word32)
  Class: Eq_396
  DataType: word32
  OrigDataType: word32
T_401: (in out ax_8 : ptr16)
  Class: Eq_397
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_402: (in msdos_write_file(0x0002, cx, ds_dx, out ax_8) : bool)
  Class: Eq_402
  DataType: bool
  OrigDataType: bool
T_403: (in 0x0002 : word16)
  Class: Eq_403
  DataType: word16
  OrigDataType: word16
T_404: (in ds_3 : selector)
  Class: Eq_2
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_405: (in 0x01C7 : word16)
  Class: Eq_405
  DataType: (memptr T_7 (struct (0 T_406 t0000)))
  OrigDataType: (memptr T_7 (struct (0 T_406 t0000)))
T_406: (in Mem0[0x0800:0x01C7:selector] : selector)
  Class: Eq_2
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_407: (in bx_4 : word16)
  Class: Eq_407
  DataType: (memptr T_404 (struct (0 T_420 t0000)))
  OrigDataType: (memptr T_404 (struct (0 T_420 t0000)))
T_408: (in fn0800_01A7 : ptr32)
  Class: Eq_408
  DataType: (ptr (fn T_414 (T_412, T_413, T_404)))
  OrigDataType: (ptr (fn T_414 (T_412, T_413, T_404)))
T_409: (in signature of fn0800_01A7 : void)
  Class: Eq_408
  DataType: 
  OrigDataType: 
T_410: (in dx : word16)
  Class: Eq_410
  DataType: word16
  OrigDataType: word16
T_411: (in ds : selector)
  Class: Eq_2
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_412: (in 0x001E : word16)
  Class: Eq_395
  DataType: word16
  OrigDataType: word16
T_413: (in 0x003D : word16)
  Class: Eq_410
  DataType: word16
  OrigDataType: word16
T_414: (in fn0800_01A7(0x001E, 0x003D, ds_3) : word16)
  Class: Eq_407
  DataType: word16
  OrigDataType: word16
T_415: (in fn0800_010D : ptr32)
  Class: Eq_303
  DataType: (ptr (fn T_418 (T_416, T_417)))
  OrigDataType: (ptr (fn T_418 (T_416, T_417)))
T_416: (in 0x03 : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_417: (in bLoc04 : byte)
  Class: Eq_306
  DataType: byte
  OrigDataType: byte
T_418: (in fn0800_010D(0x03, bLoc04) : void)
  Class: Eq_418
  DataType: void
  OrigDataType: void
T_419: (in bx_4 + si : word16)
  Class: Eq_419
  DataType: word16
  OrigDataType: word16
T_420: (in Mem0[ds_3:bx_4 + si:byte] : byte)
  Class: Eq_420
  DataType: byte
  OrigDataType: byte
T_421: (in 0x03 : byte)
  Class: Eq_421
  DataType: byte
  OrigDataType: byte
T_422: (in Mem0[ds_3:bx_4 + si:byte] + 0x03 : byte)
  Class: Eq_420
  DataType: byte
  OrigDataType: byte
T_423: (in bx_4 + si : word16)
  Class: Eq_423
  DataType: word16
  OrigDataType: word16
T_424: (in Mem13[ds_3:bx_4 + si:byte] : byte)
  Class: Eq_420
  DataType: byte
  OrigDataType: byte
T_425: (in fp : ptr16)
  Class: Eq_425
  DataType: ptr16
  OrigDataType: ptr16
T_426: (in 0x0008 : word16)
  Class: Eq_426
  DataType: word16
  OrigDataType: word16
T_427: (in fp - 0x0008 : word16)
  Class: Eq_427
  DataType: word16
  OrigDataType: word16
T_428: (in 0x0006 : word16)
  Class: Eq_428
  DataType: word16
  OrigDataType: word16
T_429: (in fp - 0x0006 : word16)
  Class: Eq_427
  DataType: word16
  OrigDataType: word16
T_430: (in fp - 0x0008 != fp - 0x0006 : bool)
  Class: Eq_430
  DataType: bool
  OrigDataType: bool
T_431: (in __outb : ptr32)
  Class: Eq_431
  DataType: (ptr (fn T_434 (T_432, T_433)))
  OrigDataType: (ptr (fn T_434 (T_432, T_433)))
T_432: (in 0xF0 : byte)
  Class: Eq_432
  DataType: byte
  OrigDataType: byte
T_433: (in 0x00 : byte)
  Class: Eq_433
  DataType: byte
  OrigDataType: byte
T_434: (in __outb(0xF0, 0x00) : void)
  Class: Eq_434
  DataType: void
  OrigDataType: void
T_435: (in si : word16)
  Class: Eq_435
  DataType: word16
  OrigDataType: word16
T_436: (in *dsOut : selector)
  Class: Eq_20
  DataType: 
  OrigDataType: 
T_437: (in es_238 : selector)
  Class: Eq_437
  DataType: 
  OrigDataType: 
T_438: (in wArg00 : word16)
  Class: Eq_438
  DataType: 
  OrigDataType: 
T_439: (in 0x05C7 : word16)
  Class: Eq_439
  DataType: 
  OrigDataType: 
T_440: (in Mem3[0x0800:0x05C7:word16] : word16)
  Class: Eq_438
  DataType: 
  OrigDataType: 
T_441: (in wArg02 : word16)
  Class: Eq_441
  DataType: 
  OrigDataType: 
T_442: (in 0x05C9 : word16)
  Class: Eq_442
  DataType: 
  OrigDataType: 
T_443: (in Mem6[0x0800:0x05C9:word16] : word16)
  Class: Eq_441
  DataType: 
  OrigDataType: 
T_444: (in 0x05CB : word16)
  Class: Eq_444
  DataType: 
  OrigDataType: 
T_445: (in Mem9[0x0800:0x05CB:word16] : word16)
  Class: Eq_20
  DataType: 
  OrigDataType: 
T_446: (in si_26 : word16)
  Class: Eq_446
  DataType: 
  OrigDataType: 
T_447: (in 0x0075 : word16)
  Class: Eq_447
  DataType: 
  OrigDataType: 
T_448: (in Mem9[ds:0x0075:word16] : word16)
  Class: Eq_446
  DataType: 
  OrigDataType: 
T_449: (in es_11 : selector)
  Class: Eq_437
  DataType: 
  OrigDataType: 
T_450: (in 0x007B : word16)
  Class: Eq_450
  DataType: 
  OrigDataType: 
T_451: (in Mem9[ds:0x007B:selector] : selector)
  Class: Eq_437
  DataType: 
  OrigDataType: 
T_452: (in ax_16 : word16)
  Class: Eq_452
  DataType: 
  OrigDataType: 
T_453: (in ax : word16)
  Class: Eq_453
  DataType: 
  OrigDataType: 
T_454: (in 0x0080 : word16)
  Class: Eq_454
  DataType: 
  OrigDataType: 
T_455: (in Mem9[ds:0x0080:byte] : byte)
  Class: Eq_455
  DataType: 
  OrigDataType: 
T_456: (in DPB(ax, Mem9[ds:0x0080:byte], 0, 8) : word16)
  Class: Eq_452
  DataType: 
  OrigDataType: 
T_457: (in si_100 : word16)
  Class: Eq_111
  DataType: 
  OrigDataType: 
T_458: (in 0x0002 : word16)
  Class: Eq_458
  DataType: 
  OrigDataType: 
T_459: (in si_26 + 0x0002 : word16)
  Class: Eq_111
  DataType: 
  OrigDataType: 
T_460: (in cx_257 : word16)
  Class: Eq_460
  DataType: 
  OrigDataType: 
T_461: (in 0x0001 : word16)
  Class: Eq_460
  DataType: 
  OrigDataType: 
T_462: (in 0x007D : word16)
  Class: Eq_462
  DataType: 
  OrigDataType: 
T_463: (in Mem9[ds:0x007D:byte] : byte)
  Class: Eq_463
  DataType: 
  OrigDataType: 
T_464: (in 0x03 : byte)
  Class: Eq_463
  DataType: 
  OrigDataType: 
T_465: (in Mem9[ds:0x007D:byte] <u 0x03 : bool)
  Class: Eq_465
  DataType: 
  OrigDataType: 
T_466: (in di_86 : word16)
  Class: Eq_111
  DataType: 
  OrigDataType: 
T_467: (in fp : ptr16)
  Class: Eq_467
  DataType: 
  OrigDataType: 
T_468: (in 0x0002 : word16)
  Class: Eq_468
  DataType: 
  OrigDataType: 
T_469: (in fp + 0x0002 : word16)
  Class: Eq_469
  DataType: 
  OrigDataType: 
T_470: (in 0x0002 : word16)
  Class: Eq_470
  DataType: 
  OrigDataType: 
T_471: (in ax_16 + 0x0002 : word16)
  Class: Eq_471
  DataType: 
  OrigDataType: 
T_472: (in ax_16 + 0x0002 + cx_257 : word16)
  Class: Eq_472
  DataType: 
  OrigDataType: 
T_473: (in 0xFFFE : word16)
  Class: Eq_473
  DataType: 
  OrigDataType: 
T_474: (in ax_16 + 0x0002 + cx_257 & 0xFFFE : word16)
  Class: Eq_474
  DataType: 
  OrigDataType: 
T_475: (in fp + 0x0002 - ((ax_16 + 0x0002) + cx_257 & 0xFFFE) : word16)
  Class: Eq_475
  DataType: 
  OrigDataType: 
T_476: (in 0x0001 : word16)
  Class: Eq_476
  DataType: 
  OrigDataType: 
T_477: (in fp + 0x0002 - ((ax_16 + 0x0002) + cx_257 & 0xFFFE) + 0x0001 : word16)
  Class: Eq_111
  DataType: 
  OrigDataType: 
T_478: (in 0x0000 : word16)
  Class: Eq_111
  DataType: 
  OrigDataType: 
T_479: (in di_86 <u 0x0000 : bool)
  Class: Eq_479
  DataType: 
  OrigDataType: 
T_480: (in 0x0077 : word16)
  Class: Eq_480
  DataType: 
  OrigDataType: 
T_481: (in Mem9[ds:0x0077:selector] : selector)
  Class: Eq_437
  DataType: 
  OrigDataType: 
T_482: (in di_239 : word16)
  Class: Eq_482
  DataType: 
  OrigDataType: 
T_483: (in si_26 + 0x0002 : word16)
  Class: Eq_482
  DataType: 
  OrigDataType: 
T_484: (in cl_240 : byte)
  Class: Eq_484
  DataType: 
  OrigDataType: 
T_485: (in 0x7F : byte)
  Class: Eq_484
  DataType: 
  OrigDataType: 
T_486: (in cx_241 : word16)
  Class: Eq_486
  DataType: 
  OrigDataType: 
T_487: (in 0x007F : word16)
  Class: Eq_486
  DataType: 
  OrigDataType: 
T_488: (in 0x0000 : word16)
  Class: Eq_486
  DataType: 
  OrigDataType: 
T_489: (in cx_241 == 0x0000 : bool)
  Class: Eq_489
  DataType: 
  OrigDataType: 
T_490: (in 0x0001 : word16)
  Class: Eq_490
  DataType: 
  OrigDataType: 
T_491: (in cx_241 - 0x0001 : word16)
  Class: Eq_486
  DataType: 
  OrigDataType: 
T_492: (in di_267 : word16)
  Class: Eq_482
  DataType: 
  OrigDataType: 
T_493: (in 0x0001 : word16)
  Class: Eq_493
  DataType: 
  OrigDataType: 
T_494: (in di_267 + 0x0001 : word16)
  Class: Eq_482
  DataType: 
  OrigDataType: 
T_495: (in (byte) cx_241 : byte)
  Class: Eq_484
  DataType: 
  OrigDataType: 
T_496: (in 0x00 : byte)
  Class: Eq_496
  DataType: 
  OrigDataType: 
T_497: (in 0x0000 : word16)
  Class: Eq_497
  DataType: 
  OrigDataType: 
T_498: (in di_267 + 0x0000 : word16)
  Class: Eq_498
  DataType: 
  OrigDataType: 
T_499: (in Mem9[es_238:di_267 + 0x0000:byte] : byte)
  Class: Eq_496
  DataType: 
  OrigDataType: 
T_500: (in 0x00 != Mem9[es_238:di_267 + 0x0000:byte] : bool)
  Class: Eq_500
  DataType: 
  OrigDataType: 
T_501: (in 0x0000 : word16)
  Class: Eq_486
  DataType: 
  OrigDataType: 
T_502: (in cx_241 == 0x0000 : bool)
  Class: Eq_502
  DataType: 
  OrigDataType: 
T_503: (in 0x7F : byte)
  Class: Eq_503
  DataType: 
  OrigDataType: 
T_504: (in cl_240 ^ 0x7F : byte)
  Class: Eq_504
  DataType: 
  OrigDataType: 
T_505: (in DPB(cx_241, cl_240 ^ 0x7F, 0, 8) : word16)
  Class: Eq_460
  DataType: 
  OrigDataType: 
T_506: (in ss : selector)
  Class: Eq_506
  DataType: 
  OrigDataType: 
T_507: (in 0x0002 : word16)
  Class: Eq_507
  DataType: 
  OrigDataType: 
T_508: (in di_86 - 0x0002 : word16)
  Class: Eq_508
  DataType: 
  OrigDataType: 
T_509: (in Mem96[ss:di_86 - 0x0002:word16] : word16)
  Class: Eq_460
  DataType: 
  OrigDataType: 
T_510: (in cx_102 : word16)
  Class: Eq_510
  DataType: 
  OrigDataType: 
T_511: (in 0x0001 : word16)
  Class: Eq_511
  DataType: 
  OrigDataType: 
T_512: (in cx_257 - 0x0001 : word16)
  Class: Eq_512
  DataType: 
  OrigDataType: 
T_513: (in 0x0001 : word16)
  Class: Eq_513
  DataType: 
  OrigDataType: 
T_514: (in cx_257 - 0x0001 + 0x0001 : word16)
  Class: Eq_510
  DataType: 
  OrigDataType: 
T_515: (in di_101 : word16)
  Class: Eq_111
  DataType: 
  OrigDataType: 
T_516: (in 0x00 : byte)
  Class: Eq_516
  DataType: 
  OrigDataType: 
T_517: (in 0x0000 : word16)
  Class: Eq_517
  DataType: 
  OrigDataType: 
T_518: (in di_101 + 0x0000 : word16)
  Class: Eq_518
  DataType: 
  OrigDataType: 
T_519: (in Mem112[ss:di_101 + 0x0000:byte] : byte)
  Class: Eq_516
  DataType: 
  OrigDataType: 
T_520: (in di_113 : word16)
  Class: Eq_520
  DataType: 
  OrigDataType: 
T_521: (in 0x0000 : word16)
  Class: Eq_521
  DataType: 
  OrigDataType: 
T_522: (in di_101 + 0x0000 : word16)
  Class: Eq_520
  DataType: 
  OrigDataType: 
T_523: (in si_116 : word16)
  Class: Eq_523
  DataType: 
  OrigDataType: 
T_524: (in 0x0081 : word16)
  Class: Eq_523
  DataType: 
  OrigDataType: 
T_525: (in cx_118 : word16)
  Class: Eq_525
  DataType: 
  OrigDataType: 
T_526: (in 0x0001 : word16)
  Class: Eq_526
  DataType: 
  OrigDataType: 
T_527: (in ax_16 + 0x0001 : word16)
  Class: Eq_525
  DataType: 
  OrigDataType: 
T_528: (in ax_121 : word16)
  Class: Eq_510
  DataType: 
  OrigDataType: 
T_529: (in al_123 : byte)
  Class: Eq_529
  DataType: 
  OrigDataType: 
T_530: (in (byte) cx_102 : byte)
  Class: Eq_529
  DataType: 
  OrigDataType: 
T_531: (in dx_124 : word16)
  Class: Eq_510
  DataType: 
  OrigDataType: 
T_532: (in bx_125 : word16)
  Class: Eq_532
  DataType: 
  OrigDataType: 
T_533: (in 0x0000 : word16)
  Class: Eq_533
  DataType: 
  OrigDataType: 
T_534: (in cx_102 + 0x0000 : word16)
  Class: Eq_532
  DataType: 
  OrigDataType: 
T_535: (in 0x0000 : word16)
  Class: Eq_535
  DataType: 
  OrigDataType: 
T_536: (in si_100 + 0x0000 : word16)
  Class: Eq_536
  DataType: 
  OrigDataType: 
T_537: (in Mem96[es_238:si_100 + 0x0000:byte] : byte)
  Class: Eq_537
  DataType: 
  OrigDataType: 
T_538: (in 0x0000 : word16)
  Class: Eq_538
  DataType: 
  OrigDataType: 
T_539: (in di_101 + 0x0000 : word16)
  Class: Eq_539
  DataType: 
  OrigDataType: 
T_540: (in Mem105[ss:di_101 + 0x0000:byte] : byte)
  Class: Eq_537
  DataType: 
  OrigDataType: 
T_541: (in 0x0001 : word16)
  Class: Eq_541
  DataType: 
  OrigDataType: 
T_542: (in si_100 + 0x0001 : word16)
  Class: Eq_111
  DataType: 
  OrigDataType: 
T_543: (in 0x0001 : word16)
  Class: Eq_543
  DataType: 
  OrigDataType: 
T_544: (in di_101 + 0x0001 : word16)
  Class: Eq_111
  DataType: 
  OrigDataType: 
T_545: (in 0x0001 : word16)
  Class: Eq_545
  DataType: 
  OrigDataType: 
T_546: (in cx_102 - 0x0001 : word16)
  Class: Eq_510
  DataType: 
  OrigDataType: 
T_547: (in 0xFFFF : word16)
  Class: Eq_510
  DataType: 
  OrigDataType: 
T_548: (in cx_102 == 0xFFFF : bool)
  Class: Eq_548
  DataType: 
  OrigDataType: 
T_549: (in 0x20 : byte)
  Class: Eq_529
  DataType: 
  OrigDataType: 
T_550: (in al_123 == 0x20 : bool)
  Class: Eq_550
  DataType: 
  OrigDataType: 
T_551: (in C_141 : byte)
  Class: Eq_551
  DataType: 
  OrigDataType: 
T_552: (in cx_190 : word16)
  Class: Eq_552
  DataType: 
  OrigDataType: 
T_553: (in di_86 - 0x0002 : word16)
  Class: Eq_553
  DataType: 
  OrigDataType: 
T_554: (in Mem112[ss:di_86 - 0x0002:word16] : word16)
  Class: Eq_554
  DataType: 
  OrigDataType: 
T_555: (in Mem112[ss:di_86 - 0x0002:word16] + dx_124 : word16)
  Class: Eq_552
  DataType: 
  OrigDataType: 
T_556: (in ds_192 : selector)
  Class: Eq_556
  DataType: 
  OrigDataType: 
T_557: (in 0x05CB : word16)
  Class: Eq_557
  DataType: 
  OrigDataType: 
T_558: (in Mem112[0x0800:0x05CB:selector] : selector)
  Class: Eq_556
  DataType: 
  OrigDataType: 
T_559: (in *dsOut : selector)
  Class: Eq_556
  DataType: 
  OrigDataType: 
T_560: (in 0x006B : word16)
  Class: Eq_560
  DataType: 
  OrigDataType: 
T_561: (in Mem193[ds_192:0x006B:word16] : word16)
  Class: Eq_532
  DataType: 
  OrigDataType: 
T_562: (in bx_196 : word16)
  Class: Eq_562
  DataType: 
  OrigDataType: 
T_563: (in 0x0001 : word16)
  Class: Eq_563
  DataType: 
  OrigDataType: 
T_564: (in bx_125 + 0x0001 : word16)
  Class: Eq_564
  DataType: 
  OrigDataType: 
T_565: (in 0x0002 : word16)
  Class: Eq_565
  DataType: 
  OrigDataType: 
T_566: (in (bx_125 + 0x0001) * 0x0002 : word16)
  Class: Eq_566
  DataType: 
  OrigDataType: 
T_567: (in 0x0002 : word16)
  Class: Eq_567
  DataType: 
  OrigDataType: 
T_568: (in (bx_125 + 0x0001) * 0x0002 * 0x0002 : word16)
  Class: Eq_562
  DataType: 
  OrigDataType: 
T_569: (in bp_199 : word16)
  Class: Eq_569
  DataType: 
  OrigDataType: 
T_570: (in di_86 - bx_196 : word16)
  Class: Eq_570
  DataType: 
  OrigDataType: 
T_571: (in 0x0002 : word16)
  Class: Eq_571
  DataType: 
  OrigDataType: 
T_572: (in di_86 - bx_196 + 0x0002 : word16)
  Class: Eq_569
  DataType: 
  OrigDataType: 
T_573: (in 0x0000 : word16)
  Class: Eq_569
  DataType: 
  OrigDataType: 
T_574: (in bp_199 <u 0x0000 : bool)
  Class: Eq_574
  DataType: 
  OrigDataType: 
T_575: (in CZ_183 : byte)
  Class: Eq_551
  DataType: 
  OrigDataType: 
T_576: (in fn0800_065D : ptr32)
  Class: Eq_576
  DataType: 
  OrigDataType: 
T_577: (in signature of fn0800_065D : void)
  Class: Eq_576
  DataType: 
  OrigDataType: 
T_578: (in ax : word16)
  Class: Eq_510
  DataType: 
  OrigDataType: 
T_579: (in cx : word16)
  Class: Eq_525
  DataType: 
  OrigDataType: 
T_580: (in dx : word16)
  Class: Eq_510
  DataType: 
  OrigDataType: 
T_581: (in bx : word16)
  Class: Eq_532
  DataType: 
  OrigDataType: 
T_582: (in si : word16)
  Class: Eq_523
  DataType: 
  OrigDataType: 
T_583: (in di : word16)
  Class: Eq_520
  DataType: 
  OrigDataType: 
T_584: (in es : selector)
  Class: Eq_506
  DataType: 
  OrigDataType: 
T_585: (in ds : selector)
  Class: Eq_437
  DataType: 
  OrigDataType: 
T_586: (in axOut : ptr16)
  Class: Eq_586
  DataType: 
  OrigDataType: 
T_587: (in cxOut : ptr16)
  Class: Eq_587
  DataType: 
  OrigDataType: 
T_588: (in dxOut : ptr16)
  Class: Eq_588
  DataType: 
  OrigDataType: 
T_589: (in bxOut : ptr16)
  Class: Eq_589
  DataType: 
  OrigDataType: 
T_590: (in siOut : ptr16)
  Class: Eq_590
  DataType: 
  OrigDataType: 
T_591: (in diOut : ptr16)
  Class: Eq_591
  DataType: 
  OrigDataType: 
T_592: (in out ax_121 : ptr16)
  Class: Eq_586
  DataType: 
  OrigDataType: 
T_593: (in out cx_118 : ptr16)
  Class: Eq_587
  DataType: 
  OrigDataType: 
T_594: (in out dx_124 : ptr16)
  Class: Eq_588
  DataType: 
  OrigDataType: 
T_595: (in out bx_125 : ptr16)
  Class: Eq_589
  DataType: 
  OrigDataType: 
T_596: (in out si_116 : ptr16)
  Class: Eq_590
  DataType: 
  OrigDataType: 
T_597: (in out di_113 : ptr16)
  Class: Eq_591
  DataType: 
  OrigDataType: 
T_598: (in fn0800_065D(ax_121, cx_118, dx_124, bx_125, si_116, di_113, ss, es_11, out ax_121, out cx_118, out dx_124, out bx_125, out si_116, out di_113) : byte)
  Class: Eq_551
  DataType: 
  OrigDataType: 
T_599: (in 0x00 : byte)
  Class: Eq_529
  DataType: 
  OrigDataType: 
T_600: (in 0x00 : byte)
  Class: Eq_600
  DataType: 
  OrigDataType: 
T_601: (in DPB(ax_121, 0x00, 0, 8) : word16)
  Class: Eq_510
  DataType: 
  OrigDataType: 
T_602: (in 0x0D : byte)
  Class: Eq_529
  DataType: 
  OrigDataType: 
T_603: (in al_123 == 0x0D : bool)
  Class: Eq_603
  DataType: 
  OrigDataType: 
T_604: (in 0x09 : byte)
  Class: Eq_529
  DataType: 
  OrigDataType: 
T_605: (in al_123 != 0x09 : bool)
  Class: Eq_605
  DataType: 
  OrigDataType: 
T_606: (in CZ_140 : byte)
  Class: Eq_551
  DataType: 
  OrigDataType: 
T_607: (in fn0800_065D : ptr32)
  Class: Eq_576
  DataType: 
  OrigDataType: 
T_608: (in out ax_121 : ptr16)
  Class: Eq_586
  DataType: 
  OrigDataType: 
T_609: (in out cx_118 : ptr16)
  Class: Eq_587
  DataType: 
  OrigDataType: 
T_610: (in out dx_124 : ptr16)
  Class: Eq_588
  DataType: 
  OrigDataType: 
T_611: (in out bx_125 : ptr16)
  Class: Eq_589
  DataType: 
  OrigDataType: 
T_612: (in out si_116 : ptr16)
  Class: Eq_590
  DataType: 
  OrigDataType: 
T_613: (in out di_113 : ptr16)
  Class: Eq_591
  DataType: 
  OrigDataType: 
T_614: (in fn0800_065D(ax_121, cx_118, dx_124, bx_125, si_116, di_113, ss, es_11, out ax_121, out cx_118, out dx_124, out bx_125, out si_116, out di_113) : byte)
  Class: Eq_551
  DataType: 
  OrigDataType: 
T_615: (in fn0800_01AF : ptr32)
  Class: Eq_109
  DataType: 
  OrigDataType: 
T_616: (in fn0800_01AF(si_100) : void)
  Class: Eq_616
  DataType: 
  OrigDataType: 
T_617: (in 0x006D : word16)
  Class: Eq_617
  DataType: 
  OrigDataType: 
T_618: (in Mem203[ds_192:0x006D:word16] : word16)
  Class: Eq_569
  DataType: 
  OrigDataType: 
T_619: (in 0x006F : word16)
  Class: Eq_619
  DataType: 
  OrigDataType: 
T_620: (in Mem204[ds_192:0x006F:word16] : word16)
  Class: Eq_506
  DataType: 
  OrigDataType: 
T_621: (in 0x0000 : word16)
  Class: Eq_621
  DataType: 
  OrigDataType: 
T_622: (in 0x0000 : word16)
  Class: Eq_622
  DataType: 
  OrigDataType: 
T_623: (in bp_199 + 0x0000 : word16)
  Class: Eq_623
  DataType: 
  OrigDataType: 
T_624: (in Mem219[ss:bp_199 + 0x0000:word16] : word16)
  Class: Eq_621
  DataType: 
  OrigDataType: 
T_625: (in 0x0000 : word16)
  Class: Eq_625
  DataType: 
  OrigDataType: 
T_626: (in 0x0002 : word16)
  Class: Eq_626
  DataType: 
  OrigDataType: 
T_627: (in bp_199 + 0x0002 : word16)
  Class: Eq_627
  DataType: 
  OrigDataType: 
T_628: (in Mem220[ss:bp_199 + 0x0002:word16] : word16)
  Class: Eq_625
  DataType: 
  OrigDataType: 
T_629: (in 0x05C7 : word16)
  Class: Eq_629
  DataType: 
  OrigDataType: 
T_630: (in Mem220[0x0800:0x05C7:ptr32] : ptr32)
  Class: Eq_630
  DataType: 
  OrigDataType: 
T_631: (in 0x0000 : word16)
  Class: Eq_631
  DataType: 
  OrigDataType: 
T_632: (in bp_199 + 0x0000 : word16)
  Class: Eq_632
  DataType: 
  OrigDataType: 
T_633: (in Mem222[ss:bp_199 + 0x0000:word16] : word16)
  Class: Eq_111
  DataType: 
  OrigDataType: 
T_634: (in 0x0000 : word16)
  Class: Eq_634
  DataType: 
  OrigDataType: 
T_635: (in bp_199 + 0x0000 : word16)
  Class: Eq_635
  DataType: 
  OrigDataType: 
T_636: (in Mem223[ss:bp_199 + 0x0000:word16] : word16)
  Class: Eq_506
  DataType: 
  OrigDataType: 
T_637: (in 0x0004 : word16)
  Class: Eq_637
  DataType: 
  OrigDataType: 
T_638: (in bp_199 + 0x0004 : word16)
  Class: Eq_569
  DataType: 
  OrigDataType: 
T_639: (in al_228 : byte)
  Class: Eq_639
  DataType: 
  OrigDataType: 
T_640: (in 0x0000 : word16)
  Class: Eq_640
  DataType: 
  OrigDataType: 
T_641: (in si_100 + 0x0000 : word16)
  Class: Eq_641
  DataType: 
  OrigDataType: 
T_642: (in Mem223[ds_192:si_100 + 0x0000:byte] : byte)
  Class: Eq_639
  DataType: 
  OrigDataType: 
T_643: (in 0x0001 : word16)
  Class: Eq_643
  DataType: 
  OrigDataType: 
T_644: (in si_100 + 0x0001 : word16)
  Class: Eq_111
  DataType: 
  OrigDataType: 
T_645: (in 0x0001 : word16)
  Class: Eq_645
  DataType: 
  OrigDataType: 
T_646: (in cx_190 - 0x0001 : word16)
  Class: Eq_552
  DataType: 
  OrigDataType: 
T_647: (in 0x00 : byte)
  Class: Eq_639
  DataType: 
  OrigDataType: 
T_648: (in al_228 != 0x00 : bool)
  Class: Eq_648
  DataType: 
  OrigDataType: 
T_649: (in 0x0000 : word16)
  Class: Eq_552
  DataType: 
  OrigDataType: 
T_650: (in cx_190 != 0x0000 : bool)
  Class: Eq_650
  DataType: 
  OrigDataType: 
T_651: (in al_228 != 0x00 && cx_190 != 0x0000 : bool)
  Class: Eq_651
  DataType: 
  OrigDataType: 
T_652: (in 0x00 : byte)
  Class: Eq_639
  DataType: 
  OrigDataType: 
T_653: (in al_228 == 0x00 : bool)
  Class: Eq_653
  DataType: 
  OrigDataType: 
T_654: (in 0x0000 : word16)
  Class: Eq_552
  DataType: 
  OrigDataType: 
T_655: (in cx_190 == 0x0000 : bool)
  Class: Eq_655
  DataType: 
  OrigDataType: 
T_656: (in CZ : byte)
  Class: Eq_656
  DataType: 
  OrigDataType: 
T_657: (in *dxOut : word16)
  Class: Eq_510
  DataType: 
  OrigDataType: 
T_658: (in *diOut : word16)
  Class: Eq_520
  DataType: 
  OrigDataType: 
T_659: (in *bxOut : word16)
  Class: Eq_532
  DataType: 
  OrigDataType: 
T_660: (in *cxOut : word16)
  Class: Eq_525
  DataType: 
  OrigDataType: 
T_661: (in *siOut : word16)
  Class: Eq_523
  DataType: 
  OrigDataType: 
T_662: (in ax_15 : word16)
  Class: Eq_510
  DataType: 
  OrigDataType: 
T_663: (in al_4 : byte)
  Class: Eq_663
  DataType: 
  OrigDataType: 
T_664: (in (byte) ax : byte)
  Class: Eq_663
  DataType: 
  OrigDataType: 
T_665: (in 0x0000 : word16)
  Class: Eq_510
  DataType: 
  OrigDataType: 
T_666: (in ax == 0x0000 : bool)
  Class: Eq_666
  DataType: 
  OrigDataType: 
T_667: (in ax_21 : word16)
  Class: Eq_667
  DataType: 
  OrigDataType: 
T_668: (in 0x00 : byte)
  Class: Eq_668
  DataType: 
  OrigDataType: 
T_669: (in DPB(ax_15, 0x00, 0, 8) : word16)
  Class: Eq_667
  DataType: 
  OrigDataType: 
T_670: (in *axOut : word16)
  Class: Eq_667
  DataType: 
  OrigDataType: 
T_671: (in CZ_26 : byte)
  Class: Eq_671
  DataType: 
  OrigDataType: 
T_672: (in true : bool)
  Class: Eq_671
  DataType: 
  OrigDataType: 
T_673: (in 0x0000 : word16)
  Class: Eq_525
  DataType: 
  OrigDataType: 
T_674: (in cx == 0x0000 : bool)
  Class: Eq_674
  DataType: 
  OrigDataType: 
T_675: (in 0x0000 : word16)
  Class: Eq_675
  DataType: 
  OrigDataType: 
T_676: (in di + 0x0000 : word16)
  Class: Eq_676
  DataType: 
  OrigDataType: 
T_677: (in Mem78[es:di + 0x0000:byte] : byte)
  Class: Eq_663
  DataType: 
  OrigDataType: 
T_678: (in dx_77 : word16)
  Class: Eq_678
  DataType: 
  OrigDataType: 
T_679: (in 0x0001 : word16)
  Class: Eq_679
  DataType: 
  OrigDataType: 
T_680: (in dx + 0x0001 : word16)
  Class: Eq_680
  DataType: 
  OrigDataType: 
T_681: (in *dxOut : word16)
  Class: Eq_680
  DataType: 
  OrigDataType: 
T_682: (in di_80 : word16)
  Class: Eq_682
  DataType: 
  OrigDataType: 
T_683: (in 0x0001 : word16)
  Class: Eq_683
  DataType: 
  OrigDataType: 
T_684: (in di + 0x0001 : word16)
  Class: Eq_684
  DataType: 
  OrigDataType: 
T_685: (in *diOut : word16)
  Class: Eq_684
  DataType: 
  OrigDataType: 
T_686: (in DPB(ax, al_4, 0, 8) : word16)
  Class: Eq_510
  DataType: 
  OrigDataType: 
T_687: (in 0x00 : byte)
  Class: Eq_663
  DataType: 
  OrigDataType: 
T_688: (in al_4 != 0x00 : bool)
  Class: Eq_688
  DataType: 
  OrigDataType: 
T_689: (in bx_86 : word16)
  Class: Eq_689
  DataType: 
  OrigDataType: 
T_690: (in 0x0001 : word16)
  Class: Eq_690
  DataType: 
  OrigDataType: 
T_691: (in bx + 0x0001 : word16)
  Class: Eq_691
  DataType: 
  OrigDataType: 
T_692: (in *bxOut : word16)
  Class: Eq_691
  DataType: 
  OrigDataType: 
T_693: (in al_46 : byte)
  Class: Eq_693
  DataType: 
  OrigDataType: 
T_694: (in 0x0000 : word16)
  Class: Eq_694
  DataType: 
  OrigDataType: 
T_695: (in si + 0x0000 : word16)
  Class: Eq_695
  DataType: 
  OrigDataType: 
T_696: (in Mem0[ds:si + 0x0000:byte] : byte)
  Class: Eq_693
  DataType: 
  OrigDataType: 
T_697: (in si_47 : word16)
  Class: Eq_697
  DataType: 
  OrigDataType: 
T_698: (in 0x0001 : word16)
  Class: Eq_698
  DataType: 
  OrigDataType: 
T_699: (in si + 0x0001 : word16)
  Class: Eq_697
  DataType: 
  OrigDataType: 
T_700: (in *siOut : word16)
  Class: Eq_697
  DataType: 
  OrigDataType: 
T_701: (in cx_48 : word16)
  Class: Eq_701
  DataType: 
  OrigDataType: 
T_702: (in 0x0001 : word16)
  Class: Eq_702
  DataType: 
  OrigDataType: 
T_703: (in cx - 0x0001 : word16)
  Class: Eq_701
  DataType: 
  OrigDataType: 
T_704: (in *cxOut : word16)
  Class: Eq_701
  DataType: 
  OrigDataType: 
T_705: (in ax_50 : word16)
  Class: Eq_705
  DataType: 
  OrigDataType: 
T_706: (in 0x22 : byte)
  Class: Eq_706
  DataType: 
  OrigDataType: 
T_707: (in al_46 - 0x22 : byte)
  Class: Eq_707
  DataType: 
  OrigDataType: 
T_708: (in DPB(ax_21, al_46 - 0x22, 0, 8) : word16)
  Class: Eq_705
  DataType: 
  OrigDataType: 
T_709: (in *axOut : word16)
  Class: Eq_705
  DataType: 
  OrigDataType: 
T_710: (in al_46 - 0x22 : byte)
  Class: Eq_710
  DataType: 
  OrigDataType: 
T_711: (in cond(al_46 - 0x22) : byte)
  Class: Eq_671
  DataType: 
  OrigDataType: 
T_712: (in 0x22 : byte)
  Class: Eq_693
  DataType: 
  OrigDataType: 
T_713: (in al_46 == 0x22 : bool)
  Class: Eq_713
  DataType: 
  OrigDataType: 
T_714: (in ax_57 : word16)
  Class: Eq_714
  DataType: 
  OrigDataType: 
T_715: (in DPB(ax_50, al_46, 0, 8) : word16)
  Class: Eq_714
  DataType: 
  OrigDataType: 
T_716: (in *axOut : word16)
  Class: Eq_714
  DataType: 
  OrigDataType: 
T_717: (in 0x5C : byte)
  Class: Eq_693
  DataType: 
  OrigDataType: 
T_718: (in al_46 != 0x5C : bool)
  Class: Eq_718
  DataType: 
  OrigDataType: 
T_719: (in si_64 : word16)
  Class: Eq_719
  DataType: 
  OrigDataType: 
T_720: (in *siOut : word16)
  Class: Eq_697
  DataType: 
  OrigDataType: 
T_721: (in false : bool)
  Class: Eq_671
  DataType: 
  OrigDataType: 
T_722: (in si + 0x0001 : word16)
  Class: Eq_722
  DataType: 
  OrigDataType: 
T_723: (in Mem0[ds:si + 0x0001:byte] : byte)
  Class: Eq_723
  DataType: 
  OrigDataType: 
T_724: (in 0x22 : byte)
  Class: Eq_723
  DataType: 
  OrigDataType: 
T_725: (in Mem0[ds:si + 0x0001:byte] != 0x22 : bool)
  Class: Eq_725
  DataType: 
  OrigDataType: 
T_726: (in ax_73 : word16)
  Class: Eq_726
  DataType: 
  OrigDataType: 
T_727: (in si + 0x0001 : word16)
  Class: Eq_727
  DataType: 
  OrigDataType: 
T_728: (in Mem0[ds:si + 0x0001:byte] : byte)
  Class: Eq_728
  DataType: 
  OrigDataType: 
T_729: (in DPB(ax_57, Mem0[ds:si + 0x0001:byte], 0, 8) : word16)
  Class: Eq_729
  DataType: 
  OrigDataType: 
T_730: (in *axOut : word16)
  Class: Eq_729
  DataType: 
  OrigDataType: 
T_731: (in 0x0002 : word16)
  Class: Eq_731
  DataType: 
  OrigDataType: 
T_732: (in si + 0x0002 : word16)
  Class: Eq_697
  DataType: 
  OrigDataType: 
T_733: (in cx_75 : word16)
  Class: Eq_733
  DataType: 
  OrigDataType: 
T_734: (in 0x0002 : word16)
  Class: Eq_734
  DataType: 
  OrigDataType: 
T_735: (in cx - 0x0002 : word16)
  Class: Eq_735
  DataType: 
  OrigDataType: 
T_736: (in *cxOut : word16)
  Class: Eq_735
  DataType: 
  OrigDataType: 
T_737: (in es_4 : selector)
  Class: Eq_737
  DataType: 
  OrigDataType: 
T_738: (in 0x0077 : word16)
  Class: Eq_738
  DataType: 
  OrigDataType: 
T_739: (in Mem0[ds:0x0077:selector] : selector)
  Class: Eq_737
  DataType: 
  OrigDataType: 
T_740: (in dx_12 : word16)
  Class: Eq_740
  DataType: 
  OrigDataType: 
T_741: (in ax_13 : word16)
  Class: Eq_741
  DataType: 
  OrigDataType: 
T_742: (in fn0BD0_0004 : ptr32)
  Class: Eq_742
  DataType: 
  OrigDataType: 
T_743: (in signature of fn0BD0_0004 : void)
  Class: Eq_742
  DataType: 
  OrigDataType: 
T_744: (in ds : selector)
  Class: Eq_20
  DataType: 
  OrigDataType: 
T_745: (in wArg04 : word16)
  Class: Eq_745
  DataType: 
  OrigDataType: 
T_746: (in dxOut : ptr16)
  Class: Eq_746
  DataType: 
  OrigDataType: 
T_747: (in 0x0079 : word16)
  Class: Eq_747
  DataType: 
  OrigDataType: 
T_748: (in Mem0[ds:0x0079:word16] : word16)
  Class: Eq_745
  DataType: 
  OrigDataType: 
T_749: (in out dx_12 : ptr16)
  Class: Eq_746
  DataType: 
  OrigDataType: 
T_750: (in fn0BD0_0004(ds, Mem0[ds:0x0079:word16], out dx_12) : word16)
  Class: Eq_741
  DataType: 
  OrigDataType: 
T_751: (in 0x0071 : word16)
  Class: Eq_751
  DataType: 
  OrigDataType: 
T_752: (in Mem18[ds:0x0071:word16] : word16)
  Class: Eq_741
  DataType: 
  OrigDataType: 
T_753: (in 0x0073 : word16)
  Class: Eq_753
  DataType: 
  OrigDataType: 
T_754: (in Mem19[ds:0x0073:word16] : word16)
  Class: Eq_740
  DataType: 
  OrigDataType: 
T_755: (in di_48 : word16)
  Class: Eq_755
  DataType: 
  OrigDataType: 
T_756: (in 0x0000 : word16)
  Class: Eq_755
  DataType: 
  OrigDataType: 
T_757: (in bx_15 : word16)
  Class: Eq_757
  DataType: 
  OrigDataType: 
T_758: (in 0x0002 : word16)
  Class: Eq_758
  DataType: 
  OrigDataType: 
T_759: (in ax_13 + 0x0002 : word16)
  Class: Eq_757
  DataType: 
  OrigDataType: 
T_760: (in ax_13 | dx_12 : word16)
  Class: Eq_760
  DataType: 
  OrigDataType: 
T_761: (in 0x0000 : word16)
  Class: Eq_760
  DataType: 
  OrigDataType: 
T_762: (in (ax_13 | dx_12) != 0x0000 : bool)
  Class: Eq_762
  DataType: 
  OrigDataType: 
T_763: (in cx_46 : word16)
  Class: Eq_763
  DataType: 
  OrigDataType: 
T_764: (in 0xFFFF : word16)
  Class: Eq_763
  DataType: 
  OrigDataType: 
T_765: (in fn0800_01AF : ptr32)
  Class: Eq_109
  DataType: 
  OrigDataType: 
T_766: (in fn0800_01AF(si) : void)
  Class: Eq_766
  DataType: 
  OrigDataType: 
T_767: (in 0x0000 : word16)
  Class: Eq_767
  DataType: 
  OrigDataType: 
T_768: (in di_48 + 0x0000 : word16)
  Class: Eq_768
  DataType: 
  OrigDataType: 
T_769: (in Mem52[es_4:di_48 + 0x0000:byte] : byte)
  Class: Eq_769
  DataType: 
  OrigDataType: 
T_770: (in 0x00 : byte)
  Class: Eq_769
  DataType: 
  OrigDataType: 
T_771: (in Mem52[es_4:di_48 + 0x0000:byte] != 0x00 : bool)
  Class: Eq_771
  DataType: 
  OrigDataType: 
T_772: (in 0x0001 : word16)
  Class: Eq_772
  DataType: 
  OrigDataType: 
T_773: (in di_48 + 0x0001 : word16)
  Class: Eq_755
  DataType: 
  OrigDataType: 
T_774: (in 0x0001 : word16)
  Class: Eq_774
  DataType: 
  OrigDataType: 
T_775: (in cx_46 - 0x0001 : word16)
  Class: Eq_763
  DataType: 
  OrigDataType: 
T_776: (in 0x00 : byte)
  Class: Eq_776
  DataType: 
  OrigDataType: 
T_777: (in 0x0000 : word16)
  Class: Eq_777
  DataType: 
  OrigDataType: 
T_778: (in di_48 + 0x0000 : word16)
  Class: Eq_778
  DataType: 
  OrigDataType: 
T_779: (in Mem52[es_4:di_48 + 0x0000:byte] : byte)
  Class: Eq_776
  DataType: 
  OrigDataType: 
T_780: (in 0x00 != Mem52[es_4:di_48 + 0x0000:byte] : bool)
  Class: Eq_780
  DataType: 
  OrigDataType: 
T_781: (in 0x0000 : word16)
  Class: Eq_763
  DataType: 
  OrigDataType: 
T_782: (in cx_46 == 0x0000 : bool)
  Class: Eq_782
  DataType: 
  OrigDataType: 
T_783: (in 0x0000 : word16)
  Class: Eq_783
  DataType: 
  OrigDataType: 
T_784: (in bx_15 + 0x0000 : word16)
  Class: Eq_784
  DataType: 
  OrigDataType: 
T_785: (in Mem51[dx_12:bx_15 + 0x0000:word16] : word16)
  Class: Eq_755
  DataType: 
  OrigDataType: 
T_786: (in 0x0000 : word16)
  Class: Eq_786
  DataType: 
  OrigDataType: 
T_787: (in bx_15 + 0x0000 : word16)
  Class: Eq_787
  DataType: 
  OrigDataType: 
T_788: (in Mem52[dx_12:bx_15 + 0x0000:word16] : word16)
  Class: Eq_737
  DataType: 
  OrigDataType: 
T_789: (in 0x0004 : word16)
  Class: Eq_789
  DataType: 
  OrigDataType: 
T_790: (in bx_15 + 0x0004 : word16)
  Class: Eq_757
  DataType: 
  OrigDataType: 
T_791: (in 0x0000 : word16)
  Class: Eq_791
  DataType: 
  OrigDataType: 
T_792: (in 0x0000 : word16)
  Class: Eq_792
  DataType: 
  OrigDataType: 
T_793: (in bx_15 + 0x0000 : word16)
  Class: Eq_793
  DataType: 
  OrigDataType: 
T_794: (in Mem63[dx_12:bx_15 + 0x0000:word16] : word16)
  Class: Eq_791
  DataType: 
  OrigDataType: 
T_795: (in 0x0000 : word16)
  Class: Eq_795
  DataType: 
  OrigDataType: 
T_796: (in 0x0002 : word16)
  Class: Eq_796
  DataType: 
  OrigDataType: 
T_797: (in bx_15 + 0x0002 : word16)
  Class: Eq_797
  DataType: 
  OrigDataType: 
T_798: (in Mem64[dx_12:bx_15 + 0x0002:word16] : word16)
  Class: Eq_795
  DataType: 
  OrigDataType: 
T_799: (in ax : word16)
  Class: Eq_799
  DataType: 
  OrigDataType: 
T_800: (in cl_7 : byte)
  Class: Eq_800
  DataType: 
  OrigDataType: 
T_801: (in cx : word16)
  Class: Eq_801
  DataType: 
  OrigDataType: 
T_802: (in (byte) cx : byte)
  Class: Eq_800
  DataType: 
  OrigDataType: 
T_803: (in 0x0000 : word16)
  Class: Eq_801
  DataType: 
  OrigDataType: 
T_804: (in cx >= 0x0000 : bool)
  Class: Eq_804
  DataType: 
  OrigDataType: 
T_805: (in ax_65 : word16)
  Class: Eq_805
  DataType: 
  OrigDataType: 
T_806: (in bx : word16)
  Class: Eq_806
  DataType: 
  OrigDataType: 
T_807: (in ax + bx : word16)
  Class: Eq_805
  DataType: 
  OrigDataType: 
T_808: (in al_66 : byte)
  Class: Eq_808
  DataType: 
  OrigDataType: 
T_809: (in (byte) ax_65 : byte)
  Class: Eq_808
  DataType: 
  OrigDataType: 
T_810: (in 0x0000 : word16)
  Class: Eq_805
  DataType: 
  OrigDataType: 
T_811: (in ax_65 >=u 0x0000 : bool)
  Class: Eq_811
  DataType: 
  OrigDataType: 
T_812: (in bx_33 : word16)
  Class: Eq_812
  DataType: 
  OrigDataType: 
T_813: (in ~cx : word16)
  Class: Eq_813
  DataType: 
  OrigDataType: 
T_814: (in ~bx : word16)
  Class: Eq_814
  DataType: 
  OrigDataType: 
T_815: (in 0x0001 : word16)
  Class: Eq_815
  DataType: 
  OrigDataType: 
T_816: (in ~bx + 0x0001 : word16)
  Class: Eq_816
  DataType: 
  OrigDataType: 
T_817: (in SEQ(~cx, ~bx + 0x0001) : ui32)
  Class: Eq_817
  DataType: 
  OrigDataType: 
T_818: (in 0x00000001 : ui32)
  Class: Eq_818
  DataType: 
  OrigDataType: 
T_819: (in SEQ(~cx, ~bx + 0x0001) + 0x00000001 : ui32)
  Class: Eq_819
  DataType: 
  OrigDataType: 
T_820: (in (word16) (SEQ(~cx, ~bx + 0x0001) + 0x00000001) : word16)
  Class: Eq_812
  DataType: 
  OrigDataType: 
T_821: (in ax_39 : word16)
  Class: Eq_821
  DataType: 
  OrigDataType: 
T_822: (in ax - bx_33 : word16)
  Class: Eq_821
  DataType: 
  OrigDataType: 
T_823: (in al_40 : byte)
  Class: Eq_823
  DataType: 
  OrigDataType: 
T_824: (in (byte) ax_39 : byte)
  Class: Eq_823
  DataType: 
  OrigDataType: 
T_825: (in 0x0000 : word16)
  Class: Eq_821
  DataType: 
  OrigDataType: 
T_826: (in ax_39 >=u 0x0000 : bool)
  Class: Eq_826
  DataType: 
  OrigDataType: 
T_827: (in dx_80 : word16)
  Class: Eq_827
  DataType: 
  OrigDataType: 
T_828: (in dx : word16)
  Class: Eq_828
  DataType: 
  OrigDataType: 
T_829: (in dh : byte)
  Class: Eq_829
  DataType: 
  OrigDataType: 
T_830: (in 0x04 : byte)
  Class: Eq_830
  DataType: 
  OrigDataType: 
T_831: (in cl_7 << 0x04 : word16)
  Class: Eq_831
  DataType: 
  OrigDataType: 
T_832: (in dh + (cl_7 << 0x04) : byte)
  Class: Eq_832
  DataType: 
  OrigDataType: 
T_833: (in DPB(dx, dh + (cl_7 << 0x04), 8, 8) : word16)
  Class: Eq_833
  DataType: 
  OrigDataType: 
T_834: (in 0x04 : byte)
  Class: Eq_834
  DataType: 
  OrigDataType: 
T_835: (in ax_65 >>u 0x04 : word16)
  Class: Eq_835
  DataType: 
  OrigDataType: 
T_836: (in DPB(dx, dh + (cl_7 << 0x04), 8, 8) + (ax_65 >>u 0x04) : word16)
  Class: Eq_836
  DataType: 
  OrigDataType: 
T_837: (in dxOut : ptr16)
  Class: Eq_837
  DataType: 
  OrigDataType: 
T_838: (in *dxOut : word16)
  Class: Eq_836
  DataType: 
  OrigDataType: 
T_839: (in ax_65 >>u 0x04 : word16)
  Class: Eq_839
  DataType: 
  OrigDataType: 
T_840: (in DPB(ax_65 >>u 0x04, al_66, 0, 8) : word16)
  Class: Eq_840
  DataType: 
  OrigDataType: 
T_841: (in 0x000F : word16)
  Class: Eq_841
  DataType: 
  OrigDataType: 
T_842: (in DPB(ax_65 >>u 0x04, al_66, 0, 8) & 0x000F : word16)
  Class: Eq_842
  DataType: 
  OrigDataType: 
T_843: (in 0x1000 : word16)
  Class: Eq_843
  DataType: 
  OrigDataType: 
T_844: (in dx + 0x1000 : word16)
  Class: Eq_828
  DataType: 
  OrigDataType: 
T_845: (in dx + 0x1000 : word16)
  Class: Eq_845
  DataType: 
  OrigDataType: 
T_846: (in SLICE(dx + 0x1000, byte, 8) : byte)
  Class: Eq_829
  DataType: 
  OrigDataType: 
T_847: (in dx_54 : word16)
  Class: Eq_847
  DataType: 
  OrigDataType: 
T_848: (in 0x00 : byte)
  Class: Eq_848
  DataType: 
  OrigDataType: 
T_849: (in DPB(bx_33, 0x00, 0, 8) : word16)
  Class: Eq_849
  DataType: 
  OrigDataType: 
T_850: (in dx - DPB(bx_33, 0x00, 0, 8) : word16)
  Class: Eq_850
  DataType: 
  OrigDataType: 
T_851: (in 0x04 : byte)
  Class: Eq_851
  DataType: 
  OrigDataType: 
T_852: (in ax_39 >>u 0x04 : word16)
  Class: Eq_852
  DataType: 
  OrigDataType: 
T_853: (in dx - DPB(bx_33, 0x00, 0, 8) + (ax_39 >>u 0x04) : word16)
  Class: Eq_853
  DataType: 
  OrigDataType: 
T_854: (in *dxOut : word16)
  Class: Eq_853
  DataType: 
  OrigDataType: 
T_855: (in ax_39 >>u 0x04 : word16)
  Class: Eq_855
  DataType: 
  OrigDataType: 
T_856: (in DPB(ax_39 >>u 0x04, al_40, 0, 8) : word16)
  Class: Eq_856
  DataType: 
  OrigDataType: 
T_857: (in 0x000F : word16)
  Class: Eq_857
  DataType: 
  OrigDataType: 
T_858: (in DPB(ax_39 >>u 0x04, al_40, 0, 8) & 0x000F : word16)
  Class: Eq_858
  DataType: 
  OrigDataType: 
T_859: (in 0x1000 : word16)
  Class: Eq_859
  DataType: 
  OrigDataType: 
T_860: (in dx - 0x1000 : word16)
  Class: Eq_828
  DataType: 
  OrigDataType: 
T_861: (in CZ : byte)
  Class: Eq_861
  DataType: 
  OrigDataType: 
T_862: (in dx_11 : word16)
  Class: Eq_862
  DataType: 
  OrigDataType: 
T_863: (in dx : word16)
  Class: Eq_863
  DataType: 
  OrigDataType: 
T_864: (in ax : word16)
  Class: Eq_864
  DataType: 
  OrigDataType: 
T_865: (in 0x04 : byte)
  Class: Eq_865
  DataType: 
  OrigDataType: 
T_866: (in ax >>u 0x04 : word16)
  Class: Eq_866
  DataType: 
  OrigDataType: 
T_867: (in dx + (ax >>u 0x04) : word16)
  Class: Eq_862
  DataType: 
  OrigDataType: 
T_868: (in cx_20 : word16)
  Class: Eq_862
  DataType: 
  OrigDataType: 
T_869: (in cx : word16)
  Class: Eq_828
  DataType: 
  OrigDataType: 
T_870: (in bx : word16)
  Class: Eq_799
  DataType: 
  OrigDataType: 
T_871: (in 0x04 : byte)
  Class: Eq_871
  DataType: 
  OrigDataType: 
T_872: (in bx >>u 0x04 : word16)
  Class: Eq_872
  DataType: 
  OrigDataType: 
T_873: (in cx + (bx >>u 0x04) : word16)
  Class: Eq_862
  DataType: 
  OrigDataType: 
T_874: (in ax_15 : word16)
  Class: Eq_874
  DataType: 
  OrigDataType: 
T_875: (in ax >>u 0x04 : word16)
  Class: Eq_875
  DataType: 
  OrigDataType: 
T_876: (in bl : byte)
  Class: Eq_876
  DataType: 
  OrigDataType: 
T_877: (in DPB(ax >>u 0x04, bl, 8, 8) : word16)
  Class: Eq_874
  DataType: 
  OrigDataType: 
T_878: (in bx_22 : word16)
  Class: Eq_878
  DataType: 
  OrigDataType: 
T_879: (in bx >>u 0x04 : word16)
  Class: Eq_879
  DataType: 
  OrigDataType: 
T_880: (in DPB(bx >>u 0x04, bl, 0, 8) : word16)
  Class: Eq_878
  DataType: 
  OrigDataType: 
T_881: (in CZ_32 : byte)
  Class: Eq_881
  DataType: 
  OrigDataType: 
T_882: (in dx_11 - cx_20 : word16)
  Class: Eq_882
  DataType: 
  OrigDataType: 
T_883: (in cond(dx_11 - cx_20) : byte)
  Class: Eq_881
  DataType: 
  OrigDataType: 
T_884: (in dx_11 != cx_20 : bool)
  Class: Eq_884
  DataType: 
  OrigDataType: 
T_885: (in 0x000F : word16)
  Class: Eq_885
  DataType: 
  OrigDataType: 
T_886: (in ax_15 & 0x000F : word16)
  Class: Eq_886
  DataType: 
  OrigDataType: 
T_887: (in 0x000F : word16)
  Class: Eq_887
  DataType: 
  OrigDataType: 
T_888: (in bx_22 & 0x000F : word16)
  Class: Eq_888
  DataType: 
  OrigDataType: 
T_889: (in (ax_15 & 0x000F) - (bx_22 & 0x000F) : word16)
  Class: Eq_889
  DataType: 
  OrigDataType: 
T_890: (in cond((ax_15 & 0x000F) - (bx_22 & 0x000F)) : byte)
  Class: Eq_881
  DataType: 
  OrigDataType: 
T_891: (in ax : word16)
  Class: Eq_891
  DataType: 
  OrigDataType: 
T_892: (in si_22 : word16)
  Class: Eq_892
  DataType: 
  OrigDataType: 
T_893: (in fn0CFE_0002 : ptr32)
  Class: Eq_893
  DataType: 
  OrigDataType: 
T_894: (in signature of fn0CFE_0002 : void)
  Class: Eq_893
  DataType: 
  OrigDataType: 
T_895: (in ds : selector)
  Class: Eq_20
  DataType: 
  OrigDataType: 
T_896: (in wArg04 : word16)
  Class: Eq_896
  DataType: 
  OrigDataType: 
T_897: (in wArg06 : word16)
  Class: Eq_20
  DataType: 
  OrigDataType: 
T_898: (in siOut : ptr16)
  Class: Eq_898
  DataType: 
  OrigDataType: 
T_899: (in 0x0098 : word16)
  Class: Eq_896
  DataType: 
  OrigDataType: 
T_900: (in out si_22 : ptr16)
  Class: Eq_898
  DataType: 
  OrigDataType: 
T_901: (in fn0CFE_0002(ds, 0x0098, ds, out si_22) : word16)
  Class: Eq_901
  DataType: 
  OrigDataType: 
T_902: (in 0x0006 : word16)
  Class: Eq_892
  DataType: 
  OrigDataType: 
T_903: (in si_22 >= 0x0006 : bool)
  Class: Eq_903
  DataType: 
  OrigDataType: 
T_904: (in 0x0007 : word16)
  Class: Eq_904
  DataType: 
  OrigDataType: 
T_905: (in ss : selector)
  Class: Eq_905
  DataType: 
  OrigDataType: 
T_906: (in fp : ptr16)
  Class: Eq_906
  DataType: 
  OrigDataType: 
T_907: (in 0x00DA : word16)
  Class: Eq_907
  DataType: 
  OrigDataType: 
T_908: (in fp - 0x00DA : word16)
  Class: Eq_908
  DataType: 
  OrigDataType: 
T_909: (in Mem43[ss:fp - 0x00DA:word16] : word16)
  Class: Eq_904
  DataType: 
  OrigDataType: 
T_910: (in 0x011C : word16)
  Class: Eq_910
  DataType: 
  OrigDataType: 
T_911: (in 0x00DE : word16)
  Class: Eq_911
  DataType: 
  OrigDataType: 
T_912: (in fp - 0x00DE : word16)
  Class: Eq_912
  DataType: 
  OrigDataType: 
T_913: (in Mem49[ss:fp - 0x00DE:word16] : word16)
  Class: Eq_910
  DataType: 
  OrigDataType: 
T_914: (in si_50 : word16)
  Class: Eq_914
  DataType: 
  OrigDataType: 
T_915: (in fn0CFE_0002 : ptr32)
  Class: Eq_893
  DataType: 
  OrigDataType: 
T_916: (in 0x0098 : word16)
  Class: Eq_896
  DataType: 
  OrigDataType: 
T_917: (in out si_50 : ptr16)
  Class: Eq_898
  DataType: 
  OrigDataType: 
T_918: (in fn0CFE_0002(ds, 0x0098, ds, out si_50) : word16)
  Class: Eq_918
  DataType: 
  OrigDataType: 
T_919: (in 0x0005 : word16)
  Class: Eq_892
  DataType: 
  OrigDataType: 
T_920: (in si_22 <=u 0x0005 : bool)
  Class: Eq_920
  DataType: 
  OrigDataType: 
T_921: (in 0x0001 : word16)
  Class: Eq_921
  DataType: 
  OrigDataType: 
T_922: (in si_22 + 0x0001 : word16)
  Class: Eq_892
  DataType: 
  OrigDataType: 
T_923: (in si_18 : word16)
  Class: Eq_923
  DataType: 
  OrigDataType: 
T_924: (in si_11 : word16)
  Class: Eq_924
  DataType: 
  OrigDataType: 
T_925: (in wArg04 : word16)
  Class: Eq_924
  DataType: 
  OrigDataType: 
T_926: (in 0x0000 : word16)
  Class: Eq_924
  DataType: 
  OrigDataType: 
T_927: (in wArg04 < 0x0000 : bool)
  Class: Eq_927
  DataType: 
  OrigDataType: 
T_928: (in -wArg04 : word16)
  Class: Eq_923
  DataType: 
  OrigDataType: 
T_929: (in 0x0023 : word16)
  Class: Eq_923
  DataType: 
  OrigDataType: 
T_930: (in si_18 >u 0x0023 : bool)
  Class: Eq_930
  DataType: 
  OrigDataType: 
T_931: (in 0x0058 : word16)
  Class: Eq_924
  DataType: 
  OrigDataType: 
T_932: (in wArg04 <=u 0x0058 : bool)
  Class: Eq_932
  DataType: 
  OrigDataType: 
T_933: (in ds : selector)
  Class: Eq_20
  DataType: 
  OrigDataType: 
T_934: (in 0x030E : word16)
  Class: Eq_934
  DataType: 
  OrigDataType: 
T_935: (in Mem30[ds:0x030E:word16] : word16)
  Class: Eq_924
  DataType: 
  OrigDataType: 
T_936: (in 0x0310 : word16)
  Class: Eq_936
  DataType: 
  OrigDataType: 
T_937: (in si_11 + 0x0310 : word16)
  Class: Eq_937
  DataType: 
  OrigDataType: 
T_938: (in Mem30[ds:si_11 + 0x0310:byte] : byte)
  Class: Eq_938
  DataType: 
  OrigDataType: 
T_939: (in (int16) Mem30[ds:si_11 + 0x0310:byte] : int16)
  Class: Eq_923
  DataType: 
  OrigDataType: 
T_940: (in 0x0057 : word16)
  Class: Eq_924
  DataType: 
  OrigDataType: 
T_941: (in 0xFFFF : word16)
  Class: Eq_941
  DataType: 
  OrigDataType: 
T_942: (in 0x030E : word16)
  Class: Eq_942
  DataType: 
  OrigDataType: 
T_943: (in Mem44[ds:0x030E:word16] : word16)
  Class: Eq_941
  DataType: 
  OrigDataType: 
T_944: (in 0x007F : word16)
  Class: Eq_944
  DataType: 
  OrigDataType: 
T_945: (in Mem20[ds:0x007F:word16] : word16)
  Class: Eq_923
  DataType: 
  OrigDataType: 
T_946: (in ax_8 : word16)
  Class: Eq_946
  DataType: 
  OrigDataType: 
T_947: (in 0x0378 : word16)
  Class: Eq_947
  DataType: 
  OrigDataType: 
T_948: (in Mem0[ds:0x0378:word16] : word16)
  Class: Eq_946
  DataType: 
  OrigDataType: 
T_949: (in 0x0378 : word16)
  Class: Eq_949
  DataType: 
  OrigDataType: 
T_950: (in Mem0[ds:0x0378:word16] : word16)
  Class: Eq_950
  DataType: 
  OrigDataType: 
T_951: (in 0x0001 : word16)
  Class: Eq_951
  DataType: 
  OrigDataType: 
T_952: (in Mem0[ds:0x0378:word16] - 0x0001 : word16)
  Class: Eq_952
  DataType: 
  OrigDataType: 
T_953: (in Mem10[ds:0x0378:word16] : word16)
  Class: Eq_952
  DataType: 
  OrigDataType: 
T_954: (in 0x0000 : word16)
  Class: Eq_946
  DataType: 
  OrigDataType: 
T_955: (in ax_8 != 0x0000 : bool)
  Class: Eq_955
  DataType: 
  OrigDataType: 
T_956: (in ax : word16)
  Class: Eq_956
  DataType: 
  OrigDataType: 
T_957: (in dx_16 : word16)
  Class: Eq_957
  DataType: 
  OrigDataType: 
T_958: (in ax_17 : word16)
  Class: Eq_958
  DataType: 
  OrigDataType: 
T_959: (in fn0BD0_0205 : ptr32)
  Class: Eq_959
  DataType: 
  OrigDataType: 
T_960: (in signature of fn0BD0_0205 : void)
  Class: Eq_959
  DataType: 
  OrigDataType: 
T_961: (in ds : selector)
  Class: Eq_20
  DataType: 
  OrigDataType: 
T_962: (in wArg04 : word16)
  Class: Eq_962
  DataType: 
  OrigDataType: 
T_963: (in wArg06 : word16)
  Class: Eq_963
  DataType: 
  OrigDataType: 
T_964: (in dxOut : ptr16)
  Class: Eq_964
  DataType: 
  OrigDataType: 
T_965: (in wArg04 : word16)
  Class: Eq_962
  DataType: 
  OrigDataType: 
T_966: (in 0x0000 : word16)
  Class: Eq_963
  DataType: 
  OrigDataType: 
T_967: (in out dx_16 : ptr16)
  Class: Eq_964
  DataType: 
  OrigDataType: 
T_968: (in fn0BD0_0205(ds, wArg04, 0x0000, out dx_16) : word16)
  Class: Eq_958
  DataType: 
  OrigDataType: 
T_969: (in es_10 : selector)
  Class: Eq_969
  DataType: 
  OrigDataType: 
T_970: (in ptrArg04 : segptr32)
  Class: Eq_970
  DataType: 
  OrigDataType: 
T_971: (in SLICE(ptrArg04, selector, 16) : selector)
  Class: Eq_969
  DataType: 
  OrigDataType: 
T_972: (in bx_11 : word16)
  Class: Eq_972
  DataType: 
  OrigDataType: 
T_973: (in (word16) ptrArg04 : word16)
  Class: Eq_972
  DataType: 
  OrigDataType: 
T_974: (in dx_13 : word16)
  Class: Eq_863
  DataType: 
  OrigDataType: 
T_975: (in 0x000E : word16)
  Class: Eq_975
  DataType: 
  OrigDataType: 
T_976: (in bx_11 + 0x000E : word16)
  Class: Eq_976
  DataType: 
  OrigDataType: 
T_977: (in Mem0[es_10:bx_11 + 0x000E:word16] : word16)
  Class: Eq_863
  DataType: 
  OrigDataType: 
T_978: (in ax_14 : word16)
  Class: Eq_864
  DataType: 
  OrigDataType: 
T_979: (in 0x000C : word16)
  Class: Eq_979
  DataType: 
  OrigDataType: 
T_980: (in bx_11 + 0x000C : word16)
  Class: Eq_980
  DataType: 
  OrigDataType: 
T_981: (in Mem0[es_10:bx_11 + 0x000C:word16] : word16)
  Class: Eq_864
  DataType: 
  OrigDataType: 
T_982: (in ds : selector)
  Class: Eq_20
  DataType: 
  OrigDataType: 
T_983: (in 0x0384 : word16)
  Class: Eq_983
  DataType: 
  OrigDataType: 
T_984: (in Mem15[ds:0x0384:word16] : word16)
  Class: Eq_863
  DataType: 
  OrigDataType: 
T_985: (in 0x0382 : word16)
  Class: Eq_985
  DataType: 
  OrigDataType: 
T_986: (in Mem17[ds:0x0382:word16] : word16)
  Class: Eq_864
  DataType: 
  OrigDataType: 
T_987: (in fn0800_076C : ptr32)
  Class: Eq_987
  DataType: 
  OrigDataType: 
T_988: (in signature of fn0800_076C : void)
  Class: Eq_987
  DataType: 
  OrigDataType: 
T_989: (in wArg06 : word16)
  Class: Eq_828
  DataType: 
  OrigDataType: 
T_990: (in wArg04 : word16)
  Class: Eq_799
  DataType: 
  OrigDataType: 
T_991: (in fn0800_076C(ax_14, wArg06, dx_13, wArg04) : byte)
  Class: Eq_991
  DataType: 
  OrigDataType: 
T_992: (in es_bx_43 : ptr32)
  Class: Eq_992
  DataType: 
  OrigDataType: 
T_993: (in SLICE(ptrArg04, selector, 16) : selector)
  Class: Eq_993
  DataType: 
  OrigDataType: 
T_994: (in (word16) ptrArg04 : word16)
  Class: Eq_994
  DataType: 
  OrigDataType: 
T_995: (in 0x0008 : word16)
  Class: Eq_995
  DataType: 
  OrigDataType: 
T_996: (in (word16) ptrArg04 + 0x0008 : word16)
  Class: Eq_996
  DataType: 
  OrigDataType: 
T_997: (in Mem17[SLICE(ptrArg04, selector, 16):(word16) ptrArg04 + 0x0008:segptr32] : segptr32)
  Class: Eq_992
  DataType: 
  OrigDataType: 
T_998: (in es_bx_51 : ptr32)
  Class: Eq_998
  DataType: 
  OrigDataType: 
T_999: (in 0x0382 : word16)
  Class: Eq_999
  DataType: 
  OrigDataType: 
T_1000: (in Mem17[ds:0x0382:segptr32] : segptr32)
  Class: Eq_998
  DataType: 
  OrigDataType: 
T_1001: (in es_52 : selector)
  Class: Eq_1001
  DataType: 
  OrigDataType: 
T_1002: (in SLICE(es_bx_51, selector, 16) : selector)
  Class: Eq_1001
  DataType: 
  OrigDataType: 
T_1003: (in bx_53 : word16)
  Class: Eq_1003
  DataType: 
  OrigDataType: 
T_1004: (in (word16) es_bx_51 : word16)
  Class: Eq_1003
  DataType: 
  OrigDataType: 
T_1005: (in SLICE(es_bx_43, selector, 16) : selector)
  Class: Eq_1005
  DataType: 
  OrigDataType: 
T_1006: (in 0x000A : word16)
  Class: Eq_1006
  DataType: 
  OrigDataType: 
T_1007: (in bx_53 + 0x000A : word16)
  Class: Eq_1007
  DataType: 
  OrigDataType: 
T_1008: (in Mem54[es_52:bx_53 + 0x000A:word16] : word16)
  Class: Eq_1005
  DataType: 
  OrigDataType: 
T_1009: (in bx_45 : word16)
  Class: Eq_1009
  DataType: 
  OrigDataType: 
T_1010: (in (word16) es_bx_43 : word16)
  Class: Eq_1009
  DataType: 
  OrigDataType: 
T_1011: (in 0x0008 : word16)
  Class: Eq_1011
  DataType: 
  OrigDataType: 
T_1012: (in bx_53 + 0x0008 : word16)
  Class: Eq_1012
  DataType: 
  OrigDataType: 
T_1013: (in Mem55[es_52:bx_53 + 0x0008:word16] : word16)
  Class: Eq_1009
  DataType: 
  OrigDataType: 
T_1014: (in ptrLoc06_48 : segptr32)
  Class: Eq_1014
  DataType: 
  OrigDataType: 
T_1015: (in ptrLoc06 : segptr32)
  Class: Eq_1015
  DataType: 
  OrigDataType: 
T_1016: (in DPB(ptrLoc06, bx_45, 0, 16) : segptr32)
  Class: Eq_1014
  DataType: 
  OrigDataType: 
T_1017: (in ax_57 : word16)
  Class: Eq_1017
  DataType: 
  OrigDataType: 
T_1018: (in 0x0382 : word16)
  Class: Eq_1018
  DataType: 
  OrigDataType: 
T_1019: (in Mem55[ds:0x0382:word16] : word16)
  Class: Eq_1017
  DataType: 
  OrigDataType: 
T_1020: (in es_59 : selector)
  Class: Eq_1020
  DataType: 
  OrigDataType: 
T_1021: (in SLICE(ptrLoc06_48, selector, 16) : selector)
  Class: Eq_1020
  DataType: 
  OrigDataType: 
T_1022: (in bx_60 : word16)
  Class: Eq_1022
  DataType: 
  OrigDataType: 
T_1023: (in (word16) ptrLoc06_48 : word16)
  Class: Eq_1022
  DataType: 
  OrigDataType: 
T_1024: (in 0x0384 : word16)
  Class: Eq_1024
  DataType: 
  OrigDataType: 
T_1025: (in Mem55[ds:0x0384:word16] : word16)
  Class: Eq_1025
  DataType: 
  OrigDataType: 
T_1026: (in 0x000E : word16)
  Class: Eq_1026
  DataType: 
  OrigDataType: 
T_1027: (in bx_60 + 0x000E : word16)
  Class: Eq_1027
  DataType: 
  OrigDataType: 
T_1028: (in Mem61[es_59:bx_60 + 0x000E:word16] : word16)
  Class: Eq_1025
  DataType: 
  OrigDataType: 
T_1029: (in 0x000C : word16)
  Class: Eq_1029
  DataType: 
  OrigDataType: 
T_1030: (in bx_60 + 0x000C : word16)
  Class: Eq_1030
  DataType: 
  OrigDataType: 
T_1031: (in Mem62[es_59:bx_60 + 0x000C:word16] : word16)
  Class: Eq_1017
  DataType: 
  OrigDataType: 
T_1032: (in 0x0000 : word16)
  Class: Eq_1032
  DataType: 
  OrigDataType: 
T_1033: (in 0x0384 : word16)
  Class: Eq_1033
  DataType: 
  OrigDataType: 
T_1034: (in Mem35[ds:0x0384:word16] : word16)
  Class: Eq_1032
  DataType: 
  OrigDataType: 
T_1035: (in 0x0000 : word16)
  Class: Eq_1035
  DataType: 
  OrigDataType: 
T_1036: (in 0x0382 : word16)
  Class: Eq_1036
  DataType: 
  OrigDataType: 
T_1037: (in Mem36[ds:0x0382:word16] : word16)
  Class: Eq_1035
  DataType: 
  OrigDataType: 
T_1038: (in ax : word16)
  Class: Eq_1038
  DataType: 
  OrigDataType: 
T_1039: (in es_13 : selector)
  Class: Eq_1039
  DataType: 
  OrigDataType: 
T_1040: (in ptrArg04 : segptr32)
  Class: Eq_1040
  DataType: 
  OrigDataType: 
T_1041: (in SLICE(ptrArg04, selector, 16) : selector)
  Class: Eq_1039
  DataType: 
  OrigDataType: 
T_1042: (in bx_14 : word16)
  Class: Eq_1042
  DataType: 
  OrigDataType: 
T_1043: (in (word16) ptrArg04 : word16)
  Class: Eq_1042
  DataType: 
  OrigDataType: 
T_1044: (in v11_16 : word16)
  Class: Eq_1044
  DataType: 
  OrigDataType: 
T_1045: (in 0x0000 : word16)
  Class: Eq_1045
  DataType: 
  OrigDataType: 
T_1046: (in bx_14 + 0x0000 : word16)
  Class: Eq_1046
  DataType: 
  OrigDataType: 
T_1047: (in Mem0[es_13:bx_14 + 0x0000:word16] : word16)
  Class: Eq_1047
  DataType: 
  OrigDataType: 
T_1048: (in wArg08 : word16)
  Class: Eq_806
  DataType: 
  OrigDataType: 
T_1049: (in Mem0[es_13:bx_14 + 0x0000:word16] - wArg08 : word16)
  Class: Eq_1044
  DataType: 
  OrigDataType: 
T_1050: (in 0x0000 : word16)
  Class: Eq_1050
  DataType: 
  OrigDataType: 
T_1051: (in bx_14 + 0x0000 : word16)
  Class: Eq_1051
  DataType: 
  OrigDataType: 
T_1052: (in Mem17[es_13:bx_14 + 0x0000:word16] : word16)
  Class: Eq_1044
  DataType: 
  OrigDataType: 
T_1053: (in 0x0002 : word16)
  Class: Eq_1053
  DataType: 
  OrigDataType: 
T_1054: (in bx_14 + 0x0002 : word16)
  Class: Eq_1054
  DataType: 
  OrigDataType: 
T_1055: (in Mem17[es_13:bx_14 + 0x0002:word16] : word16)
  Class: Eq_1055
  DataType: 
  OrigDataType: 
T_1056: (in wArg0A : word16)
  Class: Eq_801
  DataType: 
  OrigDataType: 
T_1057: (in Mem17[es_13:bx_14 + 0x0002:word16] - wArg0A : word16)
  Class: Eq_1057
  DataType: 
  OrigDataType: 
T_1058: (in 0x0000 : word16)
  Class: Eq_1044
  DataType: 
  OrigDataType: 
T_1059: (in v11_16 <u 0x0000 : bool)
  Class: Eq_1059
  DataType: 
  OrigDataType: 
T_1060: (in Mem17[es_13:bx_14 + 0x0002:word16] - wArg0A - (v11_16 <u 0x0000) : word16)
  Class: Eq_1060
  DataType: 
  OrigDataType: 
T_1061: (in 0x0002 : word16)
  Class: Eq_1061
  DataType: 
  OrigDataType: 
T_1062: (in bx_14 + 0x0002 : word16)
  Class: Eq_1062
  DataType: 
  OrigDataType: 
T_1063: (in Mem21[es_13:bx_14 + 0x0002:word16] : word16)
  Class: Eq_1060
  DataType: 
  OrigDataType: 
T_1064: (in es_24 : selector)
  Class: Eq_1064
  DataType: 
  OrigDataType: 
T_1065: (in SLICE(ptrArg04, selector, 16) : selector)
  Class: Eq_1064
  DataType: 
  OrigDataType: 
T_1066: (in bx_25 : word16)
  Class: Eq_1066
  DataType: 
  OrigDataType: 
T_1067: (in (word16) ptrArg04 : word16)
  Class: Eq_1066
  DataType: 
  OrigDataType: 
T_1068: (in dx_32 : word16)
  Class: Eq_828
  DataType: 
  OrigDataType: 
T_1069: (in ax_33 : word16)
  Class: Eq_799
  DataType: 
  OrigDataType: 
T_1070: (in fn0800_0711 : ptr32)
  Class: Eq_1070
  DataType: 
  OrigDataType: 
T_1071: (in signature of fn0800_0711 : void)
  Class: Eq_1070
  DataType: 
  OrigDataType: 
T_1072: (in wArg04 : word16)
  Class: Eq_799
  DataType: 
  OrigDataType: 
T_1073: (in 0x0002 : word16)
  Class: Eq_1073
  DataType: 
  OrigDataType: 
T_1074: (in bx_25 + 0x0002 : word16)
  Class: Eq_1074
  DataType: 
  OrigDataType: 
T_1075: (in Mem21[es_24:bx_25 + 0x0002:word16] : word16)
  Class: Eq_801
  DataType: 
  OrigDataType: 
T_1076: (in wArg06 : word16)
  Class: Eq_828
  DataType: 
  OrigDataType: 
T_1077: (in 0x0000 : word16)
  Class: Eq_1077
  DataType: 
  OrigDataType: 
T_1078: (in bx_25 + 0x0000 : word16)
  Class: Eq_1078
  DataType: 
  OrigDataType: 
T_1079: (in Mem21[es_24:bx_25 + 0x0000:word16] : word16)
  Class: Eq_806
  DataType: 
  OrigDataType: 
T_1080: (in out dx_32 : ptr16)
  Class: Eq_837
  DataType: 
  OrigDataType: 
T_1081: (in fn0800_0711(wArg04, Mem21[es_24:bx_25 + 0x0002:word16], wArg06, Mem21[es_24:bx_25 + 0x0000:word16], out dx_32) : word16)
  Class: Eq_799
  DataType: 
  OrigDataType: 
T_1082: (in ptrLoc06_37 : segptr32)
  Class: Eq_1082
  DataType: 
  OrigDataType: 
T_1083: (in ptrLoc06 : segptr32)
  Class: Eq_1083
  DataType: 
  OrigDataType: 
T_1084: (in DPB(ptrLoc06, ax_33, 0, 16) : segptr32)
  Class: Eq_1082
  DataType: 
  OrigDataType: 
T_1085: (in dx_ax_41 : ui32)
  Class: Eq_1085
  DataType: 
  OrigDataType: 
T_1086: (in 0x0001 : word16)
  Class: Eq_1086
  DataType: 
  OrigDataType: 
T_1087: (in wArg08 + 0x0001 : word16)
  Class: Eq_1087
  DataType: 
  OrigDataType: 
T_1088: (in SEQ(wArg0A, wArg08 + 0x0001) : ui32)
  Class: Eq_1085
  DataType: 
  OrigDataType: 
T_1089: (in es_48 : selector)
  Class: Eq_1089
  DataType: 
  OrigDataType: 
T_1090: (in SLICE(ptrLoc06_37, selector, 16) : selector)
  Class: Eq_1089
  DataType: 
  OrigDataType: 
T_1091: (in bx_49 : word16)
  Class: Eq_1091
  DataType: 
  OrigDataType: 
T_1092: (in (word16) ptrLoc06_37 : word16)
  Class: Eq_1091
  DataType: 
  OrigDataType: 
T_1093: (in 0x00000001 : ui32)
  Class: Eq_1093
  DataType: 
  OrigDataType: 
T_1094: (in dx_ax_41 + 0x00000001 : ui32)
  Class: Eq_1094
  DataType: 
  OrigDataType: 
T_1095: (in SLICE(dx_ax_41 + 0x00000001, word16, 16) : word16)
  Class: Eq_1095
  DataType: 
  OrigDataType: 
T_1096: (in 0x0002 : word16)
  Class: Eq_1096
  DataType: 
  OrigDataType: 
T_1097: (in bx_49 + 0x0002 : word16)
  Class: Eq_1097
  DataType: 
  OrigDataType: 
T_1098: (in Mem50[es_48:bx_49 + 0x0002:word16] : word16)
  Class: Eq_1095
  DataType: 
  OrigDataType: 
T_1099: (in dx_ax_41 + 0x00000001 : ui32)
  Class: Eq_1099
  DataType: 
  OrigDataType: 
T_1100: (in (word16) (dx_ax_41 + 0x00000001) : word16)
  Class: Eq_1100
  DataType: 
  OrigDataType: 
T_1101: (in 0x0000 : word16)
  Class: Eq_1101
  DataType: 
  OrigDataType: 
T_1102: (in bx_49 + 0x0000 : word16)
  Class: Eq_1102
  DataType: 
  OrigDataType: 
T_1103: (in Mem51[es_48:bx_49 + 0x0000:word16] : word16)
  Class: Eq_1100
  DataType: 
  OrigDataType: 
T_1104: (in es_55 : selector)
  Class: Eq_1104
  DataType: 
  OrigDataType: 
T_1105: (in SLICE(ptrLoc06_37, selector, 16) : selector)
  Class: Eq_1104
  DataType: 
  OrigDataType: 
T_1106: (in bx_56 : word16)
  Class: Eq_1106
  DataType: 
  OrigDataType: 
T_1107: (in (word16) ptrLoc06_37 : word16)
  Class: Eq_1106
  DataType: 
  OrigDataType: 
T_1108: (in 0x0006 : word16)
  Class: Eq_1108
  DataType: 
  OrigDataType: 
T_1109: (in bx_56 + 0x0006 : word16)
  Class: Eq_1109
  DataType: 
  OrigDataType: 
T_1110: (in Mem57[es_55:bx_56 + 0x0006:word16] : word16)
  Class: Eq_828
  DataType: 
  OrigDataType: 
T_1111: (in 0x0004 : word16)
  Class: Eq_1111
  DataType: 
  OrigDataType: 
T_1112: (in bx_56 + 0x0004 : word16)
  Class: Eq_1112
  DataType: 
  OrigDataType: 
T_1113: (in Mem58[es_55:bx_56 + 0x0004:word16] : word16)
  Class: Eq_799
  DataType: 
  OrigDataType: 
T_1114: (in fn0800_076C : ptr32)
  Class: Eq_987
  DataType: 
  OrigDataType: 
T_1115: (in ds : selector)
  Class: Eq_20
  DataType: 
  OrigDataType: 
T_1116: (in 0x037E : word16)
  Class: Eq_1116
  DataType: 
  OrigDataType: 
T_1117: (in Mem58[ds:0x037E:word16] : word16)
  Class: Eq_864
  DataType: 
  OrigDataType: 
T_1118: (in 0x0380 : word16)
  Class: Eq_1118
  DataType: 
  OrigDataType: 
T_1119: (in Mem58[ds:0x0380:word16] : word16)
  Class: Eq_863
  DataType: 
  OrigDataType: 
T_1120: (in fn0800_076C(Mem58[ds:0x037E:word16], wArg06, Mem58[ds:0x0380:word16], wArg04) : byte)
  Class: Eq_1120
  DataType: 
  OrigDataType: 
T_1121: (in dx_91 : word16)
  Class: Eq_1121
  DataType: 
  OrigDataType: 
T_1122: (in ptrArg04_95 : segptr32)
  Class: Eq_1122
  DataType: 
  OrigDataType: 
T_1123: (in fn0800_0711 : ptr32)
  Class: Eq_1070
  DataType: 
  OrigDataType: 
T_1124: (in out dx_91 : ptr16)
  Class: Eq_837
  DataType: 
  OrigDataType: 
T_1125: (in fn0800_0711(ax_33, wArg0A, dx_32, wArg08, out dx_91) : word16)
  Class: Eq_1125
  DataType: 
  OrigDataType: 
T_1126: (in DPB(ptrArg04, fn0800_0711(ax_33, wArg0A, dx_32, wArg08, out dx_91), 0, 16) : segptr32)
  Class: Eq_1122
  DataType: 
  OrigDataType: 
T_1127: (in es_99 : selector)
  Class: Eq_1127
  DataType: 
  OrigDataType: 
T_1128: (in SLICE(ptrArg04_95, selector, 16) : selector)
  Class: Eq_1127
  DataType: 
  OrigDataType: 
T_1129: (in bx_100 : word16)
  Class: Eq_1129
  DataType: 
  OrigDataType: 
T_1130: (in (word16) ptrArg04_95 : word16)
  Class: Eq_1129
  DataType: 
  OrigDataType: 
T_1131: (in 0x0006 : word16)
  Class: Eq_1131
  DataType: 
  OrigDataType: 
T_1132: (in bx_100 + 0x0006 : word16)
  Class: Eq_1132
  DataType: 
  OrigDataType: 
T_1133: (in Mem101[es_99:bx_100 + 0x0006:word16] : word16)
  Class: Eq_828
  DataType: 
  OrigDataType: 
T_1134: (in 0x0004 : word16)
  Class: Eq_1134
  DataType: 
  OrigDataType: 
T_1135: (in bx_100 + 0x0004 : word16)
  Class: Eq_1135
  DataType: 
  OrigDataType: 
T_1136: (in Mem102[es_99:bx_100 + 0x0004:word16] : word16)
  Class: Eq_799
  DataType: 
  OrigDataType: 
T_1137: (in SLICE(ptrLoc06_37, selector, 16) : selector)
  Class: Eq_1137
  DataType: 
  OrigDataType: 
T_1138: (in 0x0380 : word16)
  Class: Eq_1138
  DataType: 
  OrigDataType: 
T_1139: (in Mem85[ds:0x0380:word16] : word16)
  Class: Eq_1137
  DataType: 
  OrigDataType: 
T_1140: (in (word16) ptrLoc06_37 : word16)
  Class: Eq_1140
  DataType: 
  OrigDataType: 
T_1141: (in 0x037E : word16)
  Class: Eq_1141
  DataType: 
  OrigDataType: 
T_1142: (in Mem86[ds:0x037E:word16] : word16)
  Class: Eq_1140
  DataType: 
  OrigDataType: 
T_1143: (in dx_73 : word16)
  Class: Eq_1143
  DataType: 
  OrigDataType: 
T_1144: (in dxOut : ptr16)
  Class: Eq_1144
  DataType: 
  OrigDataType: 
T_1145: (in *dxOut : word16)
  Class: Eq_828
  DataType: 
  OrigDataType: 
T_1146: (in 0x0008 : word16)
  Class: Eq_1146
  DataType: 
  OrigDataType: 
T_1147: (in ax_33 + 0x0008 : word16)
  Class: Eq_1147
  DataType: 
  OrigDataType: 
T_1148: (in ax : word16)
  Class: Eq_1148
  DataType: 
  OrigDataType: 
T_1149: (in ax_31 : word16)
  Class: Eq_1149
  DataType: 
  OrigDataType: 
T_1150: (in dx_15 : word16)
  Class: Eq_1150
  DataType: 
  OrigDataType: 
T_1151: (in ax_16 : word16)
  Class: Eq_1151
  DataType: 
  OrigDataType: 
T_1152: (in fn0C01_00DB : ptr32)
  Class: Eq_1152
  DataType: 
  OrigDataType: 
T_1153: (in signature of fn0C01_00DB : void)
  Class: Eq_1152
  DataType: 
  OrigDataType: 
T_1154: (in ds : selector)
  Class: Eq_20
  DataType: 
  OrigDataType: 
T_1155: (in wArg04 : word16)
  Class: Eq_1155
  DataType: 
  OrigDataType: 
T_1156: (in wArg06 : word16)
  Class: Eq_1156
  DataType: 
  OrigDataType: 
T_1157: (in dxOut : ptr16)
  Class: Eq_1157
  DataType: 
  OrigDataType: 
T_1158: (in ds : selector)
  Class: Eq_20
  DataType: 
  OrigDataType: 
T_1159: (in wArg04 : word16)
  Class: Eq_1155
  DataType: 
  OrigDataType: 
T_1160: (in wArg06 : word16)
  Class: Eq_1156
  DataType: 
  OrigDataType: 
T_1161: (in out dx_15 : ptr16)
  Class: Eq_1157
  DataType: 
  OrigDataType: 
T_1162: (in fn0C01_00DB(ds, wArg04, wArg06, out dx_15) : word16)
  Class: Eq_1151
  DataType: 
  OrigDataType: 
T_1163: (in 0xFFFF : word16)
  Class: Eq_1150
  DataType: 
  OrigDataType: 
T_1164: (in dx_15 != 0xFFFF : bool)
  Class: Eq_1164
  DataType: 
  OrigDataType: 
T_1165: (in ax_42 : word16)
  Class: Eq_1165
  DataType: 
  OrigDataType: 
T_1166: (in 0x037E : word16)
  Class: Eq_1166
  DataType: 
  OrigDataType: 
T_1167: (in Mem0[ds:0x037E:word16] : word16)
  Class: Eq_1165
  DataType: 
  OrigDataType: 
T_1168: (in es_45 : selector)
  Class: Eq_1168
  DataType: 
  OrigDataType: 
T_1169: (in ptrLoc06 : segptr32)
  Class: Eq_1169
  DataType: 
  OrigDataType: 
T_1170: (in SLICE(ptrLoc06, selector, 16) : selector)
  Class: Eq_1168
  DataType: 
  OrigDataType: 
T_1171: (in bx_46 : word16)
  Class: Eq_1171
  DataType: 
  OrigDataType: 
T_1172: (in (word16) ptrLoc06 : word16)
  Class: Eq_1171
  DataType: 
  OrigDataType: 
T_1173: (in 0x0380 : word16)
  Class: Eq_1173
  DataType: 
  OrigDataType: 
T_1174: (in Mem0[ds:0x0380:word16] : word16)
  Class: Eq_1174
  DataType: 
  OrigDataType: 
T_1175: (in 0x0006 : word16)
  Class: Eq_1175
  DataType: 
  OrigDataType: 
T_1176: (in bx_46 + 0x0006 : word16)
  Class: Eq_1176
  DataType: 
  OrigDataType: 
T_1177: (in Mem47[es_45:bx_46 + 0x0006:word16] : word16)
  Class: Eq_1174
  DataType: 
  OrigDataType: 
T_1178: (in 0x0004 : word16)
  Class: Eq_1178
  DataType: 
  OrigDataType: 
T_1179: (in bx_46 + 0x0004 : word16)
  Class: Eq_1179
  DataType: 
  OrigDataType: 
T_1180: (in Mem48[es_45:bx_46 + 0x0004:word16] : word16)
  Class: Eq_1165
  DataType: 
  OrigDataType: 
T_1181: (in dx_ax_52 : ui32)
  Class: Eq_1181
  DataType: 
  OrigDataType: 
T_1182: (in 0x0001 : word16)
  Class: Eq_1182
  DataType: 
  OrigDataType: 
T_1183: (in wArg04 + 0x0001 : word16)
  Class: Eq_1183
  DataType: 
  OrigDataType: 
T_1184: (in SEQ(wArg06, wArg04 + 0x0001) : ui32)
  Class: Eq_1181
  DataType: 
  OrigDataType: 
T_1185: (in es_58 : selector)
  Class: Eq_1185
  DataType: 
  OrigDataType: 
T_1186: (in SLICE(ptrLoc06, selector, 16) : selector)
  Class: Eq_1185
  DataType: 
  OrigDataType: 
T_1187: (in bx_59 : word16)
  Class: Eq_1187
  DataType: 
  OrigDataType: 
T_1188: (in (word16) ptrLoc06 : word16)
  Class: Eq_1187
  DataType: 
  OrigDataType: 
T_1189: (in 0x00000001 : ui32)
  Class: Eq_1189
  DataType: 
  OrigDataType: 
T_1190: (in dx_ax_52 + 0x00000001 : ui32)
  Class: Eq_1190
  DataType: 
  OrigDataType: 
T_1191: (in SLICE(dx_ax_52 + 0x00000001, word16, 16) : word16)
  Class: Eq_1191
  DataType: 
  OrigDataType: 
T_1192: (in 0x0002 : word16)
  Class: Eq_1192
  DataType: 
  OrigDataType: 
T_1193: (in bx_59 + 0x0002 : word16)
  Class: Eq_1193
  DataType: 
  OrigDataType: 
T_1194: (in Mem60[es_58:bx_59 + 0x0002:word16] : word16)
  Class: Eq_1191
  DataType: 
  OrigDataType: 
T_1195: (in dx_ax_52 + 0x00000001 : ui32)
  Class: Eq_1195
  DataType: 
  OrigDataType: 
T_1196: (in (word16) (dx_ax_52 + 0x00000001) : word16)
  Class: Eq_1196
  DataType: 
  OrigDataType: 
T_1197: (in 0x0000 : word16)
  Class: Eq_1197
  DataType: 
  OrigDataType: 
T_1198: (in bx_59 + 0x0000 : word16)
  Class: Eq_1198
  DataType: 
  OrigDataType: 
T_1199: (in Mem61[es_58:bx_59 + 0x0000:word16] : word16)
  Class: Eq_1196
  DataType: 
  OrigDataType: 
T_1200: (in SLICE(ptrLoc06, selector, 16) : selector)
  Class: Eq_1200
  DataType: 
  OrigDataType: 
T_1201: (in 0x0380 : word16)
  Class: Eq_1201
  DataType: 
  OrigDataType: 
T_1202: (in Mem65[ds:0x0380:word16] : word16)
  Class: Eq_1200
  DataType: 
  OrigDataType: 
T_1203: (in (word16) ptrLoc06 : word16)
  Class: Eq_1203
  DataType: 
  OrigDataType: 
T_1204: (in 0x037E : word16)
  Class: Eq_1204
  DataType: 
  OrigDataType: 
T_1205: (in Mem66[ds:0x037E:word16] : word16)
  Class: Eq_1203
  DataType: 
  OrigDataType: 
T_1206: (in dx_67 : word16)
  Class: Eq_1206
  DataType: 
  OrigDataType: 
T_1207: (in 0x0380 : word16)
  Class: Eq_1207
  DataType: 
  OrigDataType: 
T_1208: (in Mem66[ds:0x0380:word16] : word16)
  Class: Eq_1208
  DataType: 
  OrigDataType: 
T_1209: (in dxOut : ptr16)
  Class: Eq_1209
  DataType: 
  OrigDataType: 
T_1210: (in *dxOut : word16)
  Class: Eq_1208
  DataType: 
  OrigDataType: 
T_1211: (in 0x037E : word16)
  Class: Eq_1211
  DataType: 
  OrigDataType: 
T_1212: (in Mem66[ds:0x037E:word16] : word16)
  Class: Eq_1212
  DataType: 
  OrigDataType: 
T_1213: (in 0x0008 : word16)
  Class: Eq_1213
  DataType: 
  OrigDataType: 
T_1214: (in Mem66[ds:0x037E:word16] + 0x0008 : word16)
  Class: Eq_1149
  DataType: 
  OrigDataType: 
T_1215: (in 0xFFFF : word16)
  Class: Eq_1151
  DataType: 
  OrigDataType: 
T_1216: (in ax_16 != 0xFFFF : bool)
  Class: Eq_1216
  DataType: 
  OrigDataType: 
T_1217: (in dx_76 : word16)
  Class: Eq_1217
  DataType: 
  OrigDataType: 
T_1218: (in 0x0000 : word16)
  Class: Eq_1218
  DataType: 
  OrigDataType: 
T_1219: (in *dxOut : word16)
  Class: Eq_1218
  DataType: 
  OrigDataType: 
T_1220: (in 0x0000 : word16)
  Class: Eq_1149
  DataType: 
  OrigDataType: 
T_1221: (in ax : word16)
  Class: Eq_1221
  DataType: 
  OrigDataType: 
T_1222: (in ax_31 : word16)
  Class: Eq_1222
  DataType: 
  OrigDataType: 
T_1223: (in dx_15 : word16)
  Class: Eq_1223
  DataType: 
  OrigDataType: 
T_1224: (in ax_16 : word16)
  Class: Eq_1224
  DataType: 
  OrigDataType: 
T_1225: (in fn0C01_00DB : ptr32)
  Class: Eq_1152
  DataType: 
  OrigDataType: 
T_1226: (in ds : selector)
  Class: Eq_20
  DataType: 
  OrigDataType: 
T_1227: (in wArg04 : word16)
  Class: Eq_1155
  DataType: 
  OrigDataType: 
T_1228: (in wArg06 : word16)
  Class: Eq_1156
  DataType: 
  OrigDataType: 
T_1229: (in out dx_15 : ptr16)
  Class: Eq_1157
  DataType: 
  OrigDataType: 
T_1230: (in fn0C01_00DB(ds, wArg04, wArg06, out dx_15) : word16)
  Class: Eq_1224
  DataType: 
  OrigDataType: 
T_1231: (in 0xFFFF : word16)
  Class: Eq_1223
  DataType: 
  OrigDataType: 
T_1232: (in dx_15 != 0xFFFF : bool)
  Class: Eq_1232
  DataType: 
  OrigDataType: 
T_1233: (in ptrLoc06 : segptr32)
  Class: Eq_1233
  DataType: 
  OrigDataType: 
T_1234: (in SLICE(ptrLoc06, selector, 16) : selector)
  Class: Eq_1234
  DataType: 
  OrigDataType: 
T_1235: (in 0x037C : word16)
  Class: Eq_1235
  DataType: 
  OrigDataType: 
T_1236: (in Mem44[ds:0x037C:word16] : word16)
  Class: Eq_1234
  DataType: 
  OrigDataType: 
T_1237: (in (word16) ptrLoc06 : word16)
  Class: Eq_1237
  DataType: 
  OrigDataType: 
T_1238: (in 0x037A : word16)
  Class: Eq_1238
  DataType: 
  OrigDataType: 
T_1239: (in Mem45[ds:0x037A:word16] : word16)
  Class: Eq_1237
  DataType: 
  OrigDataType: 
T_1240: (in SLICE(ptrLoc06, selector, 16) : selector)
  Class: Eq_1240
  DataType: 
  OrigDataType: 
T_1241: (in 0x0380 : word16)
  Class: Eq_1241
  DataType: 
  OrigDataType: 
T_1242: (in Mem49[ds:0x0380:word16] : word16)
  Class: Eq_1240
  DataType: 
  OrigDataType: 
T_1243: (in (word16) ptrLoc06 : word16)
  Class: Eq_1243
  DataType: 
  OrigDataType: 
T_1244: (in 0x037E : word16)
  Class: Eq_1244
  DataType: 
  OrigDataType: 
T_1245: (in Mem50[ds:0x037E:word16] : word16)
  Class: Eq_1243
  DataType: 
  OrigDataType: 
T_1246: (in dx_ax_54 : ui32)
  Class: Eq_1246
  DataType: 
  OrigDataType: 
T_1247: (in 0x0001 : word16)
  Class: Eq_1247
  DataType: 
  OrigDataType: 
T_1248: (in wArg04 + 0x0001 : word16)
  Class: Eq_1248
  DataType: 
  OrigDataType: 
T_1249: (in SEQ(wArg06, wArg04 + 0x0001) : ui32)
  Class: Eq_1246
  DataType: 
  OrigDataType: 
T_1250: (in es_60 : selector)
  Class: Eq_1250
  DataType: 
  OrigDataType: 
T_1251: (in SLICE(ptrLoc06, selector, 16) : selector)
  Class: Eq_1250
  DataType: 
  OrigDataType: 
T_1252: (in bx_61 : word16)
  Class: Eq_1252
  DataType: 
  OrigDataType: 
T_1253: (in (word16) ptrLoc06 : word16)
  Class: Eq_1252
  DataType: 
  OrigDataType: 
T_1254: (in 0x00000001 : ui32)
  Class: Eq_1254
  DataType: 
  OrigDataType: 
T_1255: (in dx_ax_54 + 0x00000001 : ui32)
  Class: Eq_1255
  DataType: 
  OrigDataType: 
T_1256: (in SLICE(dx_ax_54 + 0x00000001, word16, 16) : word16)
  Class: Eq_1256
  DataType: 
  OrigDataType: 
T_1257: (in 0x0002 : word16)
  Class: Eq_1257
  DataType: 
  OrigDataType: 
T_1258: (in bx_61 + 0x0002 : word16)
  Class: Eq_1258
  DataType: 
  OrigDataType: 
T_1259: (in Mem62[es_60:bx_61 + 0x0002:word16] : word16)
  Class: Eq_1256
  DataType: 
  OrigDataType: 
T_1260: (in dx_ax_54 + 0x00000001 : ui32)
  Class: Eq_1260
  DataType: 
  OrigDataType: 
T_1261: (in (word16) (dx_ax_54 + 0x00000001) : word16)
  Class: Eq_1261
  DataType: 
  OrigDataType: 
T_1262: (in 0x0000 : word16)
  Class: Eq_1262
  DataType: 
  OrigDataType: 
T_1263: (in bx_61 + 0x0000 : word16)
  Class: Eq_1263
  DataType: 
  OrigDataType: 
T_1264: (in Mem63[es_60:bx_61 + 0x0000:word16] : word16)
  Class: Eq_1261
  DataType: 
  OrigDataType: 
T_1265: (in dx_64 : word16)
  Class: Eq_1265
  DataType: 
  OrigDataType: 
T_1266: (in dxOut : ptr16)
  Class: Eq_1266
  DataType: 
  OrigDataType: 
T_1267: (in *dxOut : word16)
  Class: Eq_1223
  DataType: 
  OrigDataType: 
T_1268: (in 0x0008 : word16)
  Class: Eq_1268
  DataType: 
  OrigDataType: 
T_1269: (in ax_16 + 0x0008 : word16)
  Class: Eq_1222
  DataType: 
  OrigDataType: 
T_1270: (in 0xFFFF : word16)
  Class: Eq_1224
  DataType: 
  OrigDataType: 
T_1271: (in ax_16 != 0xFFFF : bool)
  Class: Eq_1271
  DataType: 
  OrigDataType: 
T_1272: (in dx_73 : word16)
  Class: Eq_1272
  DataType: 
  OrigDataType: 
T_1273: (in 0x0000 : word16)
  Class: Eq_1273
  DataType: 
  OrigDataType: 
T_1274: (in *dxOut : word16)
  Class: Eq_1273
  DataType: 
  OrigDataType: 
T_1275: (in 0x0000 : word16)
  Class: Eq_1222
  DataType: 
  OrigDataType: 
T_1276: (in ax : word16)
  Class: Eq_1276
  DataType: 
  OrigDataType: 
T_1277: (in ax_122 : word16)
  Class: Eq_1277
  DataType: 
  OrigDataType: 
T_1278: (in wArg04 : word16)
  Class: Eq_1278
  DataType: 
  OrigDataType: 
T_1279: (in wArg06 : word16)
  Class: Eq_1279
  DataType: 
  OrigDataType: 
T_1280: (in wArg04 | wArg06 : word16)
  Class: Eq_1280
  DataType: 
  OrigDataType: 
T_1281: (in 0x0000 : word16)
  Class: Eq_1280
  DataType: 
  OrigDataType: 
T_1282: (in (wArg04 | wArg06) != 0x0000 : bool)
  Class: Eq_1282
  DataType: 
  OrigDataType: 
T_1283: (in dx_ax_64 : ui32)
  Class: Eq_1283
  DataType: 
  OrigDataType: 
T_1284: (in 0x0017 : word16)
  Class: Eq_1284
  DataType: 
  OrigDataType: 
T_1285: (in wArg04 + 0x0017 : word16)
  Class: Eq_1285
  DataType: 
  OrigDataType: 
T_1286: (in SEQ(wArg06, wArg04 + 0x0017) : ui32)
  Class: Eq_1283
  DataType: 
  OrigDataType: 
T_1287: (in ax_67 : word16)
  Class: Eq_1287
  DataType: 
  OrigDataType: 
T_1288: (in 0x00000017 : ui32)
  Class: Eq_1288
  DataType: 
  OrigDataType: 
T_1289: (in dx_ax_64 + 0x00000017 : ui32)
  Class: Eq_1289
  DataType: 
  OrigDataType: 
T_1290: (in (word16) (dx_ax_64 + 0x00000017) : word16)
  Class: Eq_1287
  DataType: 
  OrigDataType: 
T_1291: (in dx_68 : word16)
  Class: Eq_1291
  DataType: 
  OrigDataType: 
T_1292: (in dx_ax_64 + 0x00000017 : ui32)
  Class: Eq_1292
  DataType: 
  OrigDataType: 
T_1293: (in SLICE(dx_ax_64 + 0x00000017, word16, 16) : word16)
  Class: Eq_1291
  DataType: 
  OrigDataType: 
T_1294: (in fn0800_076C : ptr32)
  Class: Eq_987
  DataType: 
  OrigDataType: 
T_1295: (in 0x037A : word16)
  Class: Eq_1295
  DataType: 
  OrigDataType: 
T_1296: (in Mem0[ds:0x037A:word16] : word16)
  Class: Eq_864
  DataType: 
  OrigDataType: 
T_1297: (in 0x0000 : word16)
  Class: Eq_828
  DataType: 
  OrigDataType: 
T_1298: (in 0x037C : word16)
  Class: Eq_1298
  DataType: 
  OrigDataType: 
T_1299: (in Mem0[ds:0x037C:word16] : word16)
  Class: Eq_863
  DataType: 
  OrigDataType: 
T_1300: (in 0x0000 : word16)
  Class: Eq_799
  DataType: 
  OrigDataType: 
T_1301: (in fn0800_076C(Mem0[ds:0x037A:word16], 0x0000, Mem0[ds:0x037C:word16], 0x0000) : byte)
  Class: Eq_1301
  DataType: 
  OrigDataType: 
T_1302: (in dx_41 : word16)
  Class: Eq_1302
  DataType: 
  OrigDataType: 
T_1303: (in 0x0000 : word16)
  Class: Eq_1303
  DataType: 
  OrigDataType: 
T_1304: (in *dxOut : word16)
  Class: Eq_1303
  DataType: 
  OrigDataType: 
T_1305: (in 0x0000 : word16)
  Class: Eq_1277
  DataType: 
  OrigDataType: 
T_1306: (in dx_95 : word16)
  Class: Eq_863
  DataType: 
  OrigDataType: 
T_1307: (in 0x0384 : word16)
  Class: Eq_1307
  DataType: 
  OrigDataType: 
T_1308: (in Mem0[ds:0x0384:word16] : word16)
  Class: Eq_863
  DataType: 
  OrigDataType: 
T_1309: (in ax_96 : word16)
  Class: Eq_864
  DataType: 
  OrigDataType: 
T_1310: (in 0x0382 : word16)
  Class: Eq_1310
  DataType: 
  OrigDataType: 
T_1311: (in Mem0[ds:0x0382:word16] : word16)
  Class: Eq_864
  DataType: 
  OrigDataType: 
T_1312: (in wLoc04_128 : word16)
  Class: Eq_863
  DataType: 
  OrigDataType: 
T_1313: (in wLoc06_129 : word16)
  Class: Eq_864
  DataType: 
  OrigDataType: 
T_1314: (in fn0800_076C : ptr32)
  Class: Eq_987
  DataType: 
  OrigDataType: 
T_1315: (in 0x0000 : word16)
  Class: Eq_828
  DataType: 
  OrigDataType: 
T_1316: (in 0x0000 : word16)
  Class: Eq_799
  DataType: 
  OrigDataType: 
T_1317: (in fn0800_076C(ax_96, 0x0000, dx_95, 0x0000) : byte)
  Class: Eq_1317
  DataType: 
  OrigDataType: 
T_1318: (in dx_88 : word16)
  Class: Eq_1318
  DataType: 
  OrigDataType: 
T_1319: (in fn0BD0_019F : ptr32)
  Class: Eq_1319
  DataType: 
  OrigDataType: 
T_1320: (in signature of fn0BD0_019F : void)
  Class: Eq_1319
  DataType: 
  OrigDataType: 
T_1321: (in wArg04 : word16)
  Class: Eq_1321
  DataType: 
  OrigDataType: 
T_1322: (in wArg06 : word16)
  Class: Eq_1322
  DataType: 
  OrigDataType: 
T_1323: (in 0xFFF0 : word16)
  Class: Eq_1323
  DataType: 
  OrigDataType: 
T_1324: (in ax_67 & 0xFFF0 : word16)
  Class: Eq_1321
  DataType: 
  OrigDataType: 
T_1325: (in 0xFFFF : word16)
  Class: Eq_1325
  DataType: 
  OrigDataType: 
T_1326: (in dx_68 & 0xFFFF : word16)
  Class: Eq_1322
  DataType: 
  OrigDataType: 
T_1327: (in out dx_88 : ptr16)
  Class: Eq_1266
  DataType: 
  OrigDataType: 
T_1328: (in fn0BD0_019F(ds, ax_67 & 0xFFF0, dx_68 & 0xFFFF, out dx_88) : word16)
  Class: Eq_1277
  DataType: 
  OrigDataType: 
T_1329: (in bx_132 : word16)
  Class: Eq_1329
  DataType: 
  OrigDataType: 
T_1330: (in ptrLoc06 : segptr32)
  Class: Eq_1330
  DataType: 
  OrigDataType: 
T_1331: (in (word16) ptrLoc06 : word16)
  Class: Eq_1329
  DataType: 
  OrigDataType: 
T_1332: (in es_133 : selector)
  Class: Eq_1332
  DataType: 
  OrigDataType: 
T_1333: (in SLICE(ptrLoc06, selector, 16) : selector)
  Class: Eq_1332
  DataType: 
  OrigDataType: 
T_1334: (in cx_bx_141 : ui32)
  Class: Eq_1334
  DataType: 
  OrigDataType: 
T_1335: (in dx_68 & 0xFFFF : word16)
  Class: Eq_1335
  DataType: 
  OrigDataType: 
T_1336: (in ax_67 & 0xFFF0 : word16)
  Class: Eq_1336
  DataType: 
  OrigDataType: 
T_1337: (in 0x0030 : word16)
  Class: Eq_1337
  DataType: 
  OrigDataType: 
T_1338: (in (ax_67 & 0xFFF0) + 0x0030 : word16)
  Class: Eq_1338
  DataType: 
  OrigDataType: 
T_1339: (in SEQ(dx_68 & 0xFFFF, (ax_67 & 0xFFF0) + 0x0030) : ui32)
  Class: Eq_1334
  DataType: 
  OrigDataType: 
T_1340: (in dx_134 : word16)
  Class: Eq_1340
  DataType: 
  OrigDataType: 
T_1341: (in 0x0002 : word16)
  Class: Eq_1341
  DataType: 
  OrigDataType: 
T_1342: (in bx_132 + 0x0002 : word16)
  Class: Eq_1342
  DataType: 
  OrigDataType: 
T_1343: (in Mem0[es_133:bx_132 + 0x0002:word16] : word16)
  Class: Eq_1340
  DataType: 
  OrigDataType: 
T_1344: (in ax_135 : word16)
  Class: Eq_1344
  DataType: 
  OrigDataType: 
T_1345: (in 0x0000 : word16)
  Class: Eq_1345
  DataType: 
  OrigDataType: 
T_1346: (in bx_132 + 0x0000 : word16)
  Class: Eq_1346
  DataType: 
  OrigDataType: 
T_1347: (in Mem0[es_133:bx_132 + 0x0000:word16] : word16)
  Class: Eq_1344
  DataType: 
  OrigDataType: 
T_1348: (in cx_144 : word16)
  Class: Eq_1340
  DataType: 
  OrigDataType: 
T_1349: (in 0x00000030 : ui32)
  Class: Eq_1349
  DataType: 
  OrigDataType: 
T_1350: (in cx_bx_141 + 0x00000030 : ui32)
  Class: Eq_1350
  DataType: 
  OrigDataType: 
T_1351: (in SLICE(cx_bx_141 + 0x00000030, word16, 16) : word16)
  Class: Eq_1340
  DataType: 
  OrigDataType: 
T_1352: (in bx_145 : word16)
  Class: Eq_1344
  DataType: 
  OrigDataType: 
T_1353: (in cx_bx_141 + 0x00000030 : ui32)
  Class: Eq_1353
  DataType: 
  OrigDataType: 
T_1354: (in (word16) (cx_bx_141 + 0x00000030) : word16)
  Class: Eq_1344
  DataType: 
  OrigDataType: 
T_1355: (in dx_134 <u cx_144 : bool)
  Class: Eq_1355
  DataType: 
  OrigDataType: 
T_1356: (in dx_121 : word16)
  Class: Eq_1356
  DataType: 
  OrigDataType: 
T_1357: (in fn0BD0_0131 : ptr32)
  Class: Eq_1357
  DataType: 
  OrigDataType: 
T_1358: (in signature of fn0BD0_0131 : void)
  Class: Eq_1357
  DataType: 
  OrigDataType: 
T_1359: (in wArg04 : word16)
  Class: Eq_1359
  DataType: 
  OrigDataType: 
T_1360: (in wArg06 : word16)
  Class: Eq_1360
  DataType: 
  OrigDataType: 
T_1361: (in ax_67 & 0xFFF0 : word16)
  Class: Eq_1359
  DataType: 
  OrigDataType: 
T_1362: (in dx_68 & 0xFFFF : word16)
  Class: Eq_1360
  DataType: 
  OrigDataType: 
T_1363: (in out dx_121 : ptr16)
  Class: Eq_1209
  DataType: 
  OrigDataType: 
T_1364: (in fn0BD0_0131(ds, ax_67 & 0xFFF0, dx_68 & 0xFFFF, out dx_121) : word16)
  Class: Eq_1277
  DataType: 
  OrigDataType: 
T_1365: (in bx_152 : word16)
  Class: Eq_1365
  DataType: 
  OrigDataType: 
T_1366: (in (word16) ptrLoc06 : word16)
  Class: Eq_1365
  DataType: 
  OrigDataType: 
T_1367: (in es_153 : selector)
  Class: Eq_1367
  DataType: 
  OrigDataType: 
T_1368: (in SLICE(ptrLoc06, selector, 16) : selector)
  Class: Eq_1367
  DataType: 
  OrigDataType: 
T_1369: (in dx_154 : word16)
  Class: Eq_1369
  DataType: 
  OrigDataType: 
T_1370: (in 0x0002 : word16)
  Class: Eq_1370
  DataType: 
  OrigDataType: 
T_1371: (in bx_152 + 0x0002 : word16)
  Class: Eq_1371
  DataType: 
  OrigDataType: 
T_1372: (in Mem0[es_153:bx_152 + 0x0002:word16] : word16)
  Class: Eq_1369
  DataType: 
  OrigDataType: 
T_1373: (in ax_155 : word16)
  Class: Eq_1373
  DataType: 
  OrigDataType: 
T_1374: (in 0x0000 : word16)
  Class: Eq_1374
  DataType: 
  OrigDataType: 
T_1375: (in bx_152 + 0x0000 : word16)
  Class: Eq_1375
  DataType: 
  OrigDataType: 
T_1376: (in Mem0[es_153:bx_152 + 0x0000:word16] : word16)
  Class: Eq_1373
  DataType: 
  OrigDataType: 
T_1377: (in dx_68 & 0xFFFF : word16)
  Class: Eq_1369
  DataType: 
  OrigDataType: 
T_1378: (in dx_154 <u (dx_68 & 0xFFFF) : bool)
  Class: Eq_1378
  DataType: 
  OrigDataType: 
T_1379: (in dx_134 != cx_144 : bool)
  Class: Eq_1379
  DataType: 
  OrigDataType: 
T_1380: (in dx_215 : word16)
  Class: Eq_1380
  DataType: 
  OrigDataType: 
T_1381: (in fn0BD0_0081 : ptr32)
  Class: Eq_1381
  DataType: 
  OrigDataType: 
T_1382: (in signature of fn0BD0_0081 : void)
  Class: Eq_1381
  DataType: 
  OrigDataType: 
T_1383: (in ptrArg04 : segptr32)
  Class: Eq_1383
  DataType: 
  OrigDataType: 
T_1384: (in wArg06 : word16)
  Class: Eq_863
  DataType: 
  OrigDataType: 
T_1385: (in wArg08 : word16)
  Class: Eq_1385
  DataType: 
  OrigDataType: 
T_1386: (in wArg0A : word16)
  Class: Eq_1386
  DataType: 
  OrigDataType: 
T_1387: (in ptrLoc0E : segptr32)
  Class: Eq_1387
  DataType: 
  OrigDataType: 
T_1388: (in DPB(ptrLoc0E, wLoc06_129, 0, 16) : segptr32)
  Class: Eq_1383
  DataType: 
  OrigDataType: 
T_1389: (in ax_67 & 0xFFF0 : word16)
  Class: Eq_1385
  DataType: 
  OrigDataType: 
T_1390: (in dx_68 & 0xFFFF : word16)
  Class: Eq_1386
  DataType: 
  OrigDataType: 
T_1391: (in out dx_215 : ptr16)
  Class: Eq_1144
  DataType: 
  OrigDataType: 
T_1392: (in fn0BD0_0081(ds, DPB(ptrLoc0E, wLoc06_129, 0, 16), wLoc04_128, ax_67 & 0xFFF0, dx_68 & 0xFFFF, out dx_215) : word16)
  Class: Eq_1277
  DataType: 
  OrigDataType: 
T_1393: (in ax_135 <u bx_145 : bool)
  Class: Eq_1393
  DataType: 
  OrigDataType: 
T_1394: (in es_bx_167 : ptr32)
  Class: Eq_1394
  DataType: 
  OrigDataType: 
T_1395: (in SLICE(ptrLoc06, selector, 16) : selector)
  Class: Eq_1395
  DataType: 
  OrigDataType: 
T_1396: (in (word16) ptrLoc06 : word16)
  Class: Eq_1396
  DataType: 
  OrigDataType: 
T_1397: (in 0x000C : word16)
  Class: Eq_1397
  DataType: 
  OrigDataType: 
T_1398: (in (word16) ptrLoc06 + 0x000C : word16)
  Class: Eq_1398
  DataType: 
  OrigDataType: 
T_1399: (in Mem0[SLICE(ptrLoc06, selector, 16):(word16) ptrLoc06 + 0x000C:segptr32] : segptr32)
  Class: Eq_1394
  DataType: 
  OrigDataType: 
T_1400: (in es_169 : selector)
  Class: Eq_863
  DataType: 
  OrigDataType: 
T_1401: (in SLICE(es_bx_167, selector, 16) : selector)
  Class: Eq_863
  DataType: 
  OrigDataType: 
T_1402: (in bx_168 : word16)
  Class: Eq_864
  DataType: 
  OrigDataType: 
T_1403: (in (word16) es_bx_167 : word16)
  Class: Eq_864
  DataType: 
  OrigDataType: 
T_1404: (in fn0800_076C : ptr32)
  Class: Eq_987
  DataType: 
  OrigDataType: 
T_1405: (in 0x0384 : word16)
  Class: Eq_1405
  DataType: 
  OrigDataType: 
T_1406: (in Mem0[ds:0x0384:word16] : word16)
  Class: Eq_828
  DataType: 
  OrigDataType: 
T_1407: (in 0x0382 : word16)
  Class: Eq_1407
  DataType: 
  OrigDataType: 
T_1408: (in Mem0[ds:0x0382:word16] : word16)
  Class: Eq_799
  DataType: 
  OrigDataType: 
T_1409: (in fn0800_076C(bx_168, Mem0[ds:0x0384:word16], es_169, Mem0[ds:0x0382:word16]) : byte)
  Class: Eq_1409
  DataType: 
  OrigDataType: 
T_1410: (in dx_68 & 0xFFFF : word16)
  Class: Eq_1369
  DataType: 
  OrigDataType: 
T_1411: (in dx_154 != (dx_68 & 0xFFFF) : bool)
  Class: Eq_1411
  DataType: 
  OrigDataType: 
T_1412: (in fn0BD0_0019 : ptr32)
  Class: Eq_1412
  DataType: 
  OrigDataType: 
T_1413: (in signature of fn0BD0_0019 : void)
  Class: Eq_1412
  DataType: 
  OrigDataType: 
T_1414: (in ptrArg04 : segptr32)
  Class: Eq_1414
  DataType: 
  OrigDataType: 
T_1415: (in wArg06 : word16)
  Class: Eq_863
  DataType: 
  OrigDataType: 
T_1416: (in ptrLoc0A : segptr32)
  Class: Eq_1416
  DataType: 
  OrigDataType: 
T_1417: (in DPB(ptrLoc0A, wLoc06_129, 0, 16) : segptr32)
  Class: Eq_1414
  DataType: 
  OrigDataType: 
T_1418: (in fn0BD0_0019(ds, DPB(ptrLoc0A, wLoc06_129, 0, 16), wLoc04_128) : void)
  Class: Eq_1418
  DataType: 
  OrigDataType: 
T_1419: (in bx_189 : word16)
  Class: Eq_1419
  DataType: 
  OrigDataType: 
T_1420: (in (word16) ptrLoc06 : word16)
  Class: Eq_1419
  DataType: 
  OrigDataType: 
T_1421: (in es_190 : selector)
  Class: Eq_1421
  DataType: 
  OrigDataType: 
T_1422: (in SLICE(ptrLoc06, selector, 16) : selector)
  Class: Eq_1421
  DataType: 
  OrigDataType: 
T_1423: (in v16_191 : word16)
  Class: Eq_1423
  DataType: 
  OrigDataType: 
T_1424: (in 0x0000 : word16)
  Class: Eq_1424
  DataType: 
  OrigDataType: 
T_1425: (in bx_189 + 0x0000 : word16)
  Class: Eq_1425
  DataType: 
  OrigDataType: 
T_1426: (in Mem0[es_190:bx_189 + 0x0000:word16] : word16)
  Class: Eq_1426
  DataType: 
  OrigDataType: 
T_1427: (in 0x0001 : word16)
  Class: Eq_1427
  DataType: 
  OrigDataType: 
T_1428: (in Mem0[es_190:bx_189 + 0x0000:word16] + 0x0001 : word16)
  Class: Eq_1423
  DataType: 
  OrigDataType: 
T_1429: (in 0x0000 : word16)
  Class: Eq_1429
  DataType: 
  OrigDataType: 
T_1430: (in bx_189 + 0x0000 : word16)
  Class: Eq_1430
  DataType: 
  OrigDataType: 
T_1431: (in Mem192[es_190:bx_189 + 0x0000:word16] : word16)
  Class: Eq_1423
  DataType: 
  OrigDataType: 
T_1432: (in 0x0002 : word16)
  Class: Eq_1432
  DataType: 
  OrigDataType: 
T_1433: (in bx_189 + 0x0002 : word16)
  Class: Eq_1433
  DataType: 
  OrigDataType: 
T_1434: (in Mem192[es_190:bx_189 + 0x0002:word16] : word16)
  Class: Eq_1434
  DataType: 
  OrigDataType: 
T_1435: (in 0x0000 : word16)
  Class: Eq_1423
  DataType: 
  OrigDataType: 
T_1436: (in v16_191 <u 0x0000 : bool)
  Class: Eq_1436
  DataType: 
  OrigDataType: 
T_1437: (in Mem192[es_190:bx_189 + 0x0002:word16] + (v16_191 <u 0x0000) : word16)
  Class: Eq_1437
  DataType: 
  OrigDataType: 
T_1438: (in 0x0002 : word16)
  Class: Eq_1438
  DataType: 
  OrigDataType: 
T_1439: (in bx_189 + 0x0002 : word16)
  Class: Eq_1439
  DataType: 
  OrigDataType: 
T_1440: (in Mem196[es_190:bx_189 + 0x0002:word16] : word16)
  Class: Eq_1437
  DataType: 
  OrigDataType: 
T_1441: (in dx_197 : word16)
  Class: Eq_1441
  DataType: 
  OrigDataType: 
T_1442: (in *dxOut : word16)
  Class: Eq_863
  DataType: 
  OrigDataType: 
T_1443: (in 0x0008 : word16)
  Class: Eq_1443
  DataType: 
  OrigDataType: 
T_1444: (in wLoc06_129 + 0x0008 : word16)
  Class: Eq_1277
  DataType: 
  OrigDataType: 
T_1445: (in ax_67 & 0xFFF0 : word16)
  Class: Eq_1373
  DataType: 
  OrigDataType: 
T_1446: (in ax_155 <u (ax_67 & 0xFFF0) : bool)
  Class: Eq_1446
  DataType: 
  OrigDataType: 
T_1447: (in ax : word16)
  Class: Eq_1447
  DataType: 
  OrigDataType: 
T_1448: (in ax_101 : word16)
  Class: Eq_1448
  DataType: 
  OrigDataType: 
T_1449: (in ax_21 : word16)
  Class: Eq_1449
  DataType: 
  OrigDataType: 
T_1450: (in wArg04 : word16)
  Class: Eq_1450
  DataType: 
  OrigDataType: 
T_1451: (in 0x0001 : word16)
  Class: Eq_1451
  DataType: 
  OrigDataType: 
T_1452: (in wArg04 + 0x0001 : word16)
  Class: Eq_1452
  DataType: 
  OrigDataType: 
T_1453: (in ds : selector)
  Class: Eq_20
  DataType: 
  OrigDataType: 
T_1454: (in 0x007B : word16)
  Class: Eq_1454
  DataType: 
  OrigDataType: 
T_1455: (in Mem0[ds:0x007B:word16] : word16)
  Class: Eq_1455
  DataType: 
  OrigDataType: 
T_1456: (in wArg04 + 0x0001 - Mem0[ds:0x007B:word16] : word16)
  Class: Eq_1456
  DataType: 
  OrigDataType: 
T_1457: (in 0x003F : word16)
  Class: Eq_1457
  DataType: 
  OrigDataType: 
T_1458: (in wArg04 + 0x0001 - Mem0[ds:0x007B:word16] + 0x003F : word16)
  Class: Eq_1458
  DataType: 
  OrigDataType: 
T_1459: (in 0x06 : byte)
  Class: Eq_1459
  DataType: 
  OrigDataType: 
T_1460: (in wArg04 + 0x0001 - Mem0[ds:0x007B:word16] + 0x003F >>u 0x06 : word16)
  Class: Eq_1449
  DataType: 
  OrigDataType: 
T_1461: (in 0x0386 : word16)
  Class: Eq_1461
  DataType: 
  OrigDataType: 
T_1462: (in Mem0[ds:0x0386:word16] : word16)
  Class: Eq_1449
  DataType: 
  OrigDataType: 
T_1463: (in ax_21 != Mem0[ds:0x0386:word16] : bool)
  Class: Eq_1463
  DataType: 
  OrigDataType: 
T_1464: (in ax_65 : word16)
  Class: Eq_1464
  DataType: 
  OrigDataType: 
T_1465: (in 0x06 : byte)
  Class: Eq_1465
  DataType: 
  OrigDataType: 
T_1466: (in ax_21 << 0x06 : word16)
  Class: Eq_1466
  DataType: 
  OrigDataType: 
T_1467: (in 0x007B : word16)
  Class: Eq_1467
  DataType: 
  OrigDataType: 
T_1468: (in Mem0[ds:0x007B:word16] : word16)
  Class: Eq_1468
  DataType: 
  OrigDataType: 
T_1469: (in (ax_21 << 0x06) + Mem0[ds:0x007B:word16] : word16)
  Class: Eq_1464
  DataType: 
  OrigDataType: 
T_1470: (in si_109 : word16)
  Class: Eq_1470
  DataType: 
  OrigDataType: 
T_1471: (in ax_21 << 0x06 : word16)
  Class: Eq_1470
  DataType: 
  OrigDataType: 
T_1472: (in di_63 : word16)
  Class: Eq_1464
  DataType: 
  OrigDataType: 
T_1473: (in 0x0091 : word16)
  Class: Eq_1473
  DataType: 
  OrigDataType: 
T_1474: (in Mem0[ds:0x0091:word16] : word16)
  Class: Eq_1464
  DataType: 
  OrigDataType: 
T_1475: (in al_66 : byte)
  Class: Eq_1475
  DataType: 
  OrigDataType: 
T_1476: (in (byte) ax_65 : byte)
  Class: Eq_1475
  DataType: 
  OrigDataType: 
T_1477: (in ax_65 <=u di_63 : bool)
  Class: Eq_1477
  DataType: 
  OrigDataType: 
T_1478: (in ptrArg02 : segptr32)
  Class: Eq_1478
  DataType: 
  OrigDataType: 
T_1479: (in SLICE(ptrArg02, selector, 16) : selector)
  Class: Eq_1479
  DataType: 
  OrigDataType: 
T_1480: (in 0x008D : word16)
  Class: Eq_1480
  DataType: 
  OrigDataType: 
T_1481: (in Mem50[ds:0x008D:word16] : word16)
  Class: Eq_1479
  DataType: 
  OrigDataType: 
T_1482: (in (word16) ptrArg02 : word16)
  Class: Eq_1482
  DataType: 
  OrigDataType: 
T_1483: (in 0x008B : word16)
  Class: Eq_1483
  DataType: 
  OrigDataType: 
T_1484: (in Mem51[ds:0x008B:word16] : word16)
  Class: Eq_1482
  DataType: 
  OrigDataType: 
T_1485: (in 0x0001 : word16)
  Class: Eq_1448
  DataType: 
  OrigDataType: 
T_1486: (in ax_74 : word16)
  Class: Eq_1486
  DataType: 
  OrigDataType: 
T_1487: (in fn0C17_000C : ptr32)
  Class: Eq_1487
  DataType: 
  OrigDataType: 
T_1488: (in signature of fn0C17_000C : void)
  Class: Eq_1487
  DataType: 
  OrigDataType: 
T_1489: (in al : byte)
  Class: Eq_1475
  DataType: 
  OrigDataType: 
T_1490: (in ds : selector)
  Class: Eq_20
  DataType: 
  OrigDataType: 
T_1491: (in psegArg04 : selector)
  Class: Eq_1491
  DataType: 
  OrigDataType: 
T_1492: (in wArg06 : word16)
  Class: Eq_1470
  DataType: 
  OrigDataType: 
T_1493: (in 0x007B : word16)
  Class: Eq_1493
  DataType: 
  OrigDataType: 
T_1494: (in Mem0[ds:0x007B:word16] : word16)
  Class: Eq_1491
  DataType: 
  OrigDataType: 
T_1495: (in fn0C17_000C(al_66, ds, Mem0[ds:0x007B:word16], si_109) : word16)
  Class: Eq_1486
  DataType: 
  OrigDataType: 
T_1496: (in 0xFFFF : word16)
  Class: Eq_1486
  DataType: 
  OrigDataType: 
T_1497: (in ax_74 != 0xFFFF : bool)
  Class: Eq_1497
  DataType: 
  OrigDataType: 
T_1498: (in 0x007B : word16)
  Class: Eq_1498
  DataType: 
  OrigDataType: 
T_1499: (in Mem0[ds:0x007B:word16] : word16)
  Class: Eq_1499
  DataType: 
  OrigDataType: 
T_1500: (in di_63 - Mem0[ds:0x007B:word16] : word16)
  Class: Eq_1470
  DataType: 
  OrigDataType: 
T_1501: (in 0x007B : word16)
  Class: Eq_1501
  DataType: 
  OrigDataType: 
T_1502: (in Mem0[ds:0x007B:word16] : word16)
  Class: Eq_1502
  DataType: 
  OrigDataType: 
T_1503: (in Mem0[ds:0x007B:word16] + ax_74 : word16)
  Class: Eq_1503
  DataType: 
  OrigDataType: 
T_1504: (in 0x0091 : word16)
  Class: Eq_1504
  DataType: 
  OrigDataType: 
T_1505: (in Mem99[ds:0x0091:word16] : word16)
  Class: Eq_1503
  DataType: 
  OrigDataType: 
T_1506: (in 0x0000 : word16)
  Class: Eq_1506
  DataType: 
  OrigDataType: 
T_1507: (in 0x008F : word16)
  Class: Eq_1507
  DataType: 
  OrigDataType: 
T_1508: (in Mem100[ds:0x008F:word16] : word16)
  Class: Eq_1506
  DataType: 
  OrigDataType: 
T_1509: (in 0x0000 : word16)
  Class: Eq_1448
  DataType: 
  OrigDataType: 
T_1510: (in 0x06 : byte)
  Class: Eq_1510
  DataType: 
  OrigDataType: 
T_1511: (in si_109 >>u 0x06 : word16)
  Class: Eq_1511
  DataType: 
  OrigDataType: 
T_1512: (in 0x0386 : word16)
  Class: Eq_1512
  DataType: 
  OrigDataType: 
T_1513: (in Mem86[ds:0x0386:word16] : word16)
  Class: Eq_1511
  DataType: 
  OrigDataType: 
T_1514: (in SLICE(ptrArg02, selector, 16) : selector)
  Class: Eq_1514
  DataType: 
  OrigDataType: 
T_1515: (in 0x008D : word16)
  Class: Eq_1515
  DataType: 
  OrigDataType: 
T_1516: (in Mem90[ds:0x008D:word16] : word16)
  Class: Eq_1514
  DataType: 
  OrigDataType: 
T_1517: (in (word16) ptrArg02 : word16)
  Class: Eq_1517
  DataType: 
  OrigDataType: 
T_1518: (in 0x008B : word16)
  Class: Eq_1518
  DataType: 
  OrigDataType: 
T_1519: (in Mem91[ds:0x008B:word16] : word16)
  Class: Eq_1517
  DataType: 
  OrigDataType: 
T_1520: (in 0x0001 : word16)
  Class: Eq_1448
  DataType: 
  OrigDataType: 
T_1521: (in ax : word16)
  Class: Eq_1521
  DataType: 
  OrigDataType: 
T_1522: (in ax_31 : word16)
  Class: Eq_1522
  DataType: 
  OrigDataType: 
T_1523: (in wArg06 : word16)
  Class: Eq_801
  DataType: 
  OrigDataType: 
T_1524: (in 0x0010 : word16)
  Class: Eq_801
  DataType: 
  OrigDataType: 
T_1525: (in wArg06 < 0x0010 : bool)
  Class: Eq_1525
  DataType: 
  OrigDataType: 
T_1526: (in dx_44 : word16)
  Class: Eq_863
  DataType: 
  OrigDataType: 
T_1527: (in ax_45 : word16)
  Class: Eq_864
  DataType: 
  OrigDataType: 
T_1528: (in fn0800_0711 : ptr32)
  Class: Eq_1070
  DataType: 
  OrigDataType: 
T_1529: (in 0x008B : word16)
  Class: Eq_1529
  DataType: 
  OrigDataType: 
T_1530: (in Mem0[ds:0x008B:word16] : word16)
  Class: Eq_799
  DataType: 
  OrigDataType: 
T_1531: (in 0x008D : word16)
  Class: Eq_1531
  DataType: 
  OrigDataType: 
T_1532: (in Mem0[ds:0x008D:word16] : word16)
  Class: Eq_828
  DataType: 
  OrigDataType: 
T_1533: (in wArg04 : word16)
  Class: Eq_806
  DataType: 
  OrigDataType: 
T_1534: (in out dx_44 : ptr16)
  Class: Eq_837
  DataType: 
  OrigDataType: 
T_1535: (in fn0800_0711(Mem0[ds:0x008B:word16], wArg06, Mem0[ds:0x008D:word16], wArg04, out dx_44) : word16)
  Class: Eq_864
  DataType: 
  OrigDataType: 
T_1536: (in fn0800_076C : ptr32)
  Class: Eq_987
  DataType: 
  OrigDataType: 
T_1537: (in 0x0089 : word16)
  Class: Eq_1537
  DataType: 
  OrigDataType: 
T_1538: (in Mem0[ds:0x0089:word16] : word16)
  Class: Eq_828
  DataType: 
  OrigDataType: 
T_1539: (in 0x0087 : word16)
  Class: Eq_1539
  DataType: 
  OrigDataType: 
T_1540: (in Mem0[ds:0x0087:word16] : word16)
  Class: Eq_799
  DataType: 
  OrigDataType: 
T_1541: (in fn0800_076C(ax_45, Mem0[ds:0x0089:word16], dx_44, Mem0[ds:0x0087:word16]) : byte)
  Class: Eq_1541
  DataType: 
  OrigDataType: 
T_1542: (in wArg06 > 0x0010 : bool)
  Class: Eq_1542
  DataType: 
  OrigDataType: 
T_1543: (in dx_93 : word16)
  Class: Eq_1543
  DataType: 
  OrigDataType: 
T_1544: (in 0xFFFF : word16)
  Class: Eq_1544
  DataType: 
  OrigDataType: 
T_1545: (in *dxOut : word16)
  Class: Eq_1544
  DataType: 
  OrigDataType: 
T_1546: (in 0xFFFF : word16)
  Class: Eq_1522
  DataType: 
  OrigDataType: 
T_1547: (in 0x0000 : word16)
  Class: Eq_806
  DataType: 
  OrigDataType: 
T_1548: (in wArg04 <=u 0x0000 : bool)
  Class: Eq_1548
  DataType: 
  OrigDataType: 
T_1549: (in dx_57 : word16)
  Class: Eq_1549
  DataType: 
  OrigDataType: 
T_1550: (in 0xFFFF : word16)
  Class: Eq_1550
  DataType: 
  OrigDataType: 
T_1551: (in *dxOut : word16)
  Class: Eq_1550
  DataType: 
  OrigDataType: 
T_1552: (in 0xFFFF : word16)
  Class: Eq_1522
  DataType: 
  OrigDataType: 
T_1553: (in fn0800_076C : ptr32)
  Class: Eq_987
  DataType: 
  OrigDataType: 
T_1554: (in 0x0091 : word16)
  Class: Eq_1554
  DataType: 
  OrigDataType: 
T_1555: (in Mem0[ds:0x0091:word16] : word16)
  Class: Eq_828
  DataType: 
  OrigDataType: 
T_1556: (in 0x008F : word16)
  Class: Eq_1556
  DataType: 
  OrigDataType: 
T_1557: (in Mem0[ds:0x008F:word16] : word16)
  Class: Eq_799
  DataType: 
  OrigDataType: 
T_1558: (in fn0800_076C(ax_45, Mem0[ds:0x0091:word16], dx_44, Mem0[ds:0x008F:word16]) : byte)
  Class: Eq_1558
  DataType: 
  OrigDataType: 
T_1559: (in es_bx_71 : ptr32)
  Class: Eq_1559
  DataType: 
  OrigDataType: 
T_1560: (in 0x008B : word16)
  Class: Eq_1560
  DataType: 
  OrigDataType: 
T_1561: (in Mem0[ds:0x008B:segptr32] : segptr32)
  Class: Eq_1559
  DataType: 
  OrigDataType: 
T_1562: (in bx_72 : word16)
  Class: Eq_1522
  DataType: 
  OrigDataType: 
T_1563: (in (word16) es_bx_71 : word16)
  Class: Eq_1522
  DataType: 
  OrigDataType: 
T_1564: (in es_73 : selector)
  Class: Eq_1564
  DataType: 
  OrigDataType: 
T_1565: (in SLICE(es_bx_71, selector, 16) : selector)
  Class: Eq_1564
  DataType: 
  OrigDataType: 
T_1566: (in fn0C01_0004 : ptr32)
  Class: Eq_1566
  DataType: 
  OrigDataType: 
T_1567: (in signature of fn0C01_0004 : void)
  Class: Eq_1566
  DataType: 
  OrigDataType: 
T_1568: (in ptrArg02 : segptr32)
  Class: Eq_1568
  DataType: 
  OrigDataType: 
T_1569: (in wArg04 : word16)
  Class: Eq_863
  DataType: 
  OrigDataType: 
T_1570: (in ptrLoc0E : segptr32)
  Class: Eq_1570
  DataType: 
  OrigDataType: 
T_1571: (in DPB(ptrLoc0E, ax_45, 0, 16) : segptr32)
  Class: Eq_1568
  DataType: 
  OrigDataType: 
T_1572: (in fn0C01_0004(ds, DPB(ptrLoc0E, ax_45, 0, 16), dx_44) : word16)
  Class: Eq_1572
  DataType: 
  OrigDataType: 
T_1573: (in 0x0000 : word16)
  Class: Eq_1572
  DataType: 
  OrigDataType: 
T_1574: (in fn0C01_0004(ds, DPB(ptrLoc0E, ax_45, 0, 16), dx_44) != 0x0000 : bool)
  Class: Eq_1574
  DataType: 
  OrigDataType: 
T_1575: (in dx_89 : word16)
  Class: Eq_1575
  DataType: 
  OrigDataType: 
T_1576: (in *dxOut : selector)
  Class: Eq_1564
  DataType: 
  OrigDataType: 
T_1577: (in dx_87 : word16)
  Class: Eq_1577
  DataType: 
  OrigDataType: 
T_1578: (in 0xFFFF : word16)
  Class: Eq_1578
  DataType: 
  OrigDataType: 
T_1579: (in *dxOut : word16)
  Class: Eq_1578
  DataType: 
  OrigDataType: 
T_1580: (in 0xFFFF : word16)
  Class: Eq_1522
  DataType: 
  OrigDataType: 
T_1581: (in ax : word16)
  Class: Eq_1581
  DataType: 
  OrigDataType: 
T_1582: (in ax_17 : word16)
  Class: Eq_1582
  DataType: 
  OrigDataType: 
T_1583: (in ax_8 : word16)
  Class: Eq_1583
  DataType: 
  OrigDataType: 
T_1584: (in 0x4A : byte)
  Class: Eq_1584
  DataType: 
  OrigDataType: 
T_1585: (in DPB(ax, 0x4A, 8, 8) : word16)
  Class: Eq_1583
  DataType: 
  OrigDataType: 
T_1586: (in bx_13 : word16)
  Class: Eq_1582
  DataType: 
  OrigDataType: 
T_1587: (in msdos_resize_memory_block : ptr32)
  Class: Eq_182
  DataType: 
  OrigDataType: 
T_1588: (in psegArg04 : selector)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_1589: (in wArg06 : word16)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_1590: (in out bx_13 : ptr16)
  Class: Eq_186
  DataType: 
  OrigDataType: 
T_1591: (in msdos_resize_memory_block(psegArg04, wArg06, out bx_13) : bool)
  Class: Eq_1591
  DataType: 
  OrigDataType: 
T_1592: (in fn0BC6_0006 : ptr32)
  Class: Eq_1592
  DataType: 
  OrigDataType: 
T_1593: (in signature of fn0BC6_0006 : void)
  Class: Eq_1592
  DataType: 
  OrigDataType: 
T_1594: (in wArg04 : word16)
  Class: Eq_1583
  DataType: 
  OrigDataType: 
T_1595: (in fn0BC6_0006(ds, ax_8) : void)
  Class: Eq_1595
  DataType: 
  OrigDataType: 
T_1596: (in 0xFFFF : word16)
  Class: Eq_1582
  DataType: 
  OrigDataType: 
T_1597: (in ax : word16)
  Class: Eq_1597
  DataType: 
  OrigDataType: 
T_1598: (in si : word16)
  Class: Eq_1598
  DataType: 
  OrigDataType: 
T_1599: (in *siOut : word16)
  Class: Eq_1598
  DataType: 
  OrigDataType: 
T_1600: (in ax_32 : word16)
  Class: Eq_1600
  DataType: 
  OrigDataType: 
T_1601: (in fn0D28_002B : ptr32)
  Class: Eq_1601
  DataType: 
  OrigDataType: 
T_1602: (in signature of fn0D28_002B : void)
  Class: Eq_1601
  DataType: 
  OrigDataType: 
T_1603: (in ds : selector)
  Class: Eq_20
  DataType: 
  OrigDataType: 
T_1604: (in ptrArg08 : segptr32)
  Class: Eq_1604
  DataType: 
  OrigDataType: 
T_1605: (in psegArg0A : selector)
  Class: Eq_1605
  DataType: 
  OrigDataType: 
T_1606: (in ptrLoc0E : segptr32)
  Class: Eq_1606
  DataType: 
  OrigDataType: 
T_1607: (in wArg04 : word16)
  Class: Eq_1607
  DataType: 
  OrigDataType: 
T_1608: (in DPB(ptrLoc0E, wArg04, 0, 16) : segptr32)
  Class: Eq_1604
  DataType: 
  OrigDataType: 
T_1609: (in wArg06 : word16)
  Class: Eq_1605
  DataType: 
  OrigDataType: 
T_1610: (in fn0D28_002B(ds, DPB(ptrLoc0E, wArg04, 0, 16), wArg06) : word16)
  Class: Eq_1600
  DataType: 
  OrigDataType: 
T_1611: (in ax : word16)
  Class: Eq_1611
  DataType: 
  OrigDataType: 
T_1612: (in bLoc57_105 : byte)
  Class: Eq_1612
  DataType: 
  OrigDataType: 
T_1613: (in 0x50 : byte)
  Class: Eq_1612
  DataType: 
  OrigDataType: 
T_1614: (in di_103 : word16)
  Class: Eq_1614
  DataType: 
  OrigDataType: 
T_1615: (in fp : ptr16)
  Class: Eq_1615
  DataType: 
  OrigDataType: 
T_1616: (in 0x0056 : word16)
  Class: Eq_1616
  DataType: 
  OrigDataType: 
T_1617: (in fp - 0x0056 : word16)
  Class: Eq_1614
  DataType: 
  OrigDataType: 
T_1618: (in si_101 : word16)
  Class: Eq_1618
  DataType: 
  OrigDataType: 
T_1619: (in ptrArg08 : segptr32)
  Class: Eq_1619
  DataType: 
  OrigDataType: 
T_1620: (in (word16) ptrArg08 : word16)
  Class: Eq_1618
  DataType: 
  OrigDataType: 
T_1621: (in al_37 : byte)
  Class: Eq_1621
  DataType: 
  OrigDataType: 
T_1622: (in 0x25 : byte)
  Class: Eq_1621
  DataType: 
  OrigDataType: 
T_1623: (in al_37 == 0x25 : bool)
  Class: Eq_1623
  DataType: 
  OrigDataType: 
T_1624: (in 0x0000 : word16)
  Class: Eq_1624
  DataType: 
  OrigDataType: 
T_1625: (in si_101 + 0x0000 : word16)
  Class: Eq_1625
  DataType: 
  OrigDataType: 
T_1626: (in Mem0[ds:si_101 + 0x0000:byte] : byte)
  Class: Eq_1621
  DataType: 
  OrigDataType: 
T_1627: (in al_100 : byte)
  Class: Eq_1621
  DataType: 
  OrigDataType: 
T_1628: (in DPB(ax, al_100, 0, 8) : word16)
  Class: Eq_1611
  DataType: 
  OrigDataType: 
T_1629: (in 0x0001 : word16)
  Class: Eq_1629
  DataType: 
  OrigDataType: 
T_1630: (in si_101 + 0x0001 : word16)
  Class: Eq_1618
  DataType: 
  OrigDataType: 
T_1631: (in 0x25 : byte)
  Class: Eq_1621
  DataType: 
  OrigDataType: 
T_1632: (in al_100 == 0x25 : bool)
  Class: Eq_1632
  DataType: 
  OrigDataType: 
T_1633: (in ss : selector)
  Class: Eq_1633
  DataType: 
  OrigDataType: 
T_1634: (in 0x0000 : word16)
  Class: Eq_1634
  DataType: 
  OrigDataType: 
T_1635: (in di_103 + 0x0000 : word16)
  Class: Eq_1635
  DataType: 
  OrigDataType: 
T_1636: (in Mem102[ss:di_103 + 0x0000:byte] : byte)
  Class: Eq_1621
  DataType: 
  OrigDataType: 
T_1637: (in v16_104 : byte)
  Class: Eq_1612
  DataType: 
  OrigDataType: 
T_1638: (in 0x01 : byte)
  Class: Eq_1638
  DataType: 
  OrigDataType: 
T_1639: (in bLoc57_105 - 0x01 : byte)
  Class: Eq_1612
  DataType: 
  OrigDataType: 
T_1640: (in 0x0001 : word16)
  Class: Eq_1640
  DataType: 
  OrigDataType: 
T_1641: (in di_103 + 0x0001 : word16)
  Class: Eq_1614
  DataType: 
  OrigDataType: 
T_1642: (in 0x00 : byte)
  Class: Eq_1612
  DataType: 
  OrigDataType: 
T_1643: (in v16_104 > 0x00 : bool)
  Class: Eq_1643
  DataType: 
  OrigDataType: 
T_1644: (in 0x0000 : word16)
  Class: Eq_1644
  DataType: 
  OrigDataType: 
T_1645: (in si_101 + 0x0000 : word16)
  Class: Eq_1645
  DataType: 
  OrigDataType: 
T_1646: (in Mem0[ds:si_101 + 0x0000:byte] : byte)
  Class: Eq_1621
  DataType: 
  OrigDataType: 
T_1647: (in 0x0001 : word16)
  Class: Eq_1647
  DataType: 
  OrigDataType: 
T_1648: (in si_101 + 0x0001 : word16)
  Class: Eq_1618
  DataType: 
  OrigDataType: 
T_1649: (in DPB(ax, al_37, 0, 8) : word16)
  Class: Eq_1611
  DataType: 
  OrigDataType: 
T_1650: (in 0x00 : byte)
  Class: Eq_1621
  DataType: 
  OrigDataType: 
T_1651: (in al_37 == 0x00 : bool)
  Class: Eq_1651
  DataType: 
  OrigDataType: 
T_1652: (in fn0D28_005A : ptr32)
  Class: Eq_1652
  DataType: 
  OrigDataType: 
T_1653: (in signature of fn0D28_005A : void)
  Class: Eq_1652
  DataType: 
  OrigDataType: 
T_1654: (in bp : word16)
  Class: Eq_1654
  DataType: 
  OrigDataType: 
T_1655: (in di : word16)
  Class: Eq_1614
  DataType: 
  OrigDataType: 
T_1656: (in 0x0002 : word16)
  Class: Eq_1656
  DataType: 
  OrigDataType: 
T_1657: (in fp - 0x0002 : word16)
  Class: Eq_1654
  DataType: 
  OrigDataType: 
T_1658: (in fn0D28_005A(fp - 0x0002, di_103) : void)
  Class: Eq_1658
  DataType: 
  OrigDataType: 
T_1659: (in 0x50 : byte)
  Class: Eq_1612
  DataType: 
  OrigDataType: 
T_1660: (in bLoc57_105 >= 0x50 : bool)
  Class: Eq_1660
  DataType: 
  OrigDataType: 
T_1661: (in 0x50 : byte)
  Class: Eq_1612
  DataType: 
  OrigDataType: 
T_1662: (in bLoc57_105 >= 0x50 : bool)
  Class: Eq_1662
  DataType: 
  OrigDataType: 
T_1663: (in ax_78 : word16)
  Class: Eq_1663
  DataType: 
  OrigDataType: 
T_1664: (in 0x0000 : word16)
  Class: Eq_1664
  DataType: 
  OrigDataType: 
T_1665: (in 0x0000 : word16)
  Class: Eq_1664
  DataType: 
  OrigDataType: 
T_1666: (in 0x0000 == 0x0000 : bool)
  Class: Eq_1666
  DataType: 
  OrigDataType: 
T_1667: (in fn0D28_005A : ptr32)
  Class: Eq_1652
  DataType: 
  OrigDataType: 
T_1668: (in fp - 0x0002 : word16)
  Class: Eq_1654
  DataType: 
  OrigDataType: 
T_1669: (in fn0D28_005A(fp - 0x0002, di_103) : void)
  Class: Eq_1669
  DataType: 
  OrigDataType: 
T_1670: (in fn0D28_005A : ptr32)
  Class: Eq_1652
  DataType: 
  OrigDataType: 
T_1671: (in fp - 0x0002 : word16)
  Class: Eq_1654
  DataType: 
  OrigDataType: 
T_1672: (in fn0D28_005A(fp - 0x0002, di_103) : void)
  Class: Eq_1672
  DataType: 
  OrigDataType: 
T_1673: (in ax_125 : word16)
  Class: Eq_1673
  DataType: 
  OrigDataType: 
T_1674: (in 0x00 : byte)
  Class: Eq_1674
  DataType: 
  OrigDataType: 
T_1675: (in DPB(ax, 0x00, 8, 8) : word16)
  Class: Eq_1673
  DataType: 
  OrigDataType: 
T_1676: (in bl_128 : byte)
  Class: Eq_1676
  DataType: 
  OrigDataType: 
T_1677: (in (byte) ax_125 : byte)
  Class: Eq_1676
  DataType: 
  OrigDataType: 
T_1678: (in bx_130 : word16)
  Class: Eq_1678
  DataType: 
  OrigDataType: 
T_1679: (in 0x20 : byte)
  Class: Eq_1679
  DataType: 
  OrigDataType: 
T_1680: (in bl_128 - 0x20 : byte)
  Class: Eq_1680
  DataType: 
  OrigDataType: 
T_1681: (in DPB(ax_125, bl_128 - 0x20, 0, 8) : word16)
  Class: Eq_1678
  DataType: 
  OrigDataType: 
T_1682: (in 0x80 : byte)
  Class: Eq_1676
  DataType: 
  OrigDataType: 
T_1683: (in bl_128 >=u 0x80 : bool)
  Class: Eq_1683
  DataType: 
  OrigDataType: 
T_1684: (in 0x0000 : word16)
  Class: Eq_1663
  DataType: 
  OrigDataType: 
T_1685: (in 0xFFFF : word16)
  Class: Eq_1663
  DataType: 
  OrigDataType: 
T_1686: (in 0x059D : word16)
  Class: Eq_1686
  DataType: 
  OrigDataType: 
T_1687: (in bx_130 + 0x059D : word16)
  Class: Eq_1687
  DataType: 
  OrigDataType: 
T_1688: (in Mem0[ds:bx_130 + 0x059D:byte] : byte)
  Class: Eq_1688
  DataType: 
  OrigDataType: 
T_1689: (in DPB(bx_130, Mem0[ds:bx_130 + 0x059D:byte], 0, 8) : word16)
  Class: Eq_1689
  DataType: 
  OrigDataType: 
T_1690: (in 0x0017 : word16)
  Class: Eq_1689
  DataType: 
  OrigDataType: 
T_1691: (in DPB(bx_130, Mem0[ds:bx_130 + 0x059D:byte], 0, 8) <=u 0x0017 : bool)
  Class: Eq_1691
  DataType: 
  OrigDataType: 
T_1692: (in si_139 : word16)
  Class: Eq_1618
  DataType: 
  OrigDataType: 
T_1693: (in al_144 : byte)
  Class: Eq_1693
  DataType: 
  OrigDataType: 
T_1694: (in 0x25 : byte)
  Class: Eq_1693
  DataType: 
  OrigDataType: 
T_1695: (in fn0D28_0051 : ptr32)
  Class: Eq_1695
  DataType: 
  OrigDataType: 
T_1696: (in signature of fn0D28_0051 : void)
  Class: Eq_1695
  DataType: 
  OrigDataType: 
T_1697: (in bp : word16)
  Class: Eq_1654
  DataType: 
  OrigDataType: 
T_1698: (in di : word16)
  Class: Eq_1614
  DataType: 
  OrigDataType: 
T_1699: (in al : byte)
  Class: Eq_1693
  DataType: 
  OrigDataType: 
T_1700: (in fp - 0x0002 : word16)
  Class: Eq_1654
  DataType: 
  OrigDataType: 
T_1701: (in fn0D28_0051(fp - 0x0002, di_103, al_144) : word16)
  Class: Eq_1614
  DataType: 
  OrigDataType: 
T_1702: (in al_153 : byte)
  Class: Eq_1693
  DataType: 
  OrigDataType: 
T_1703: (in 0x0000 : word16)
  Class: Eq_1703
  DataType: 
  OrigDataType: 
T_1704: (in si_139 + 0x0000 : word16)
  Class: Eq_1704
  DataType: 
  OrigDataType: 
T_1705: (in Mem0[ds:si_139 + 0x0000:byte] : byte)
  Class: Eq_1693
  DataType: 
  OrigDataType: 
T_1706: (in 0x0001 : word16)
  Class: Eq_1706
  DataType: 
  OrigDataType: 
T_1707: (in si_139 + 0x0001 : word16)
  Class: Eq_1618
  DataType: 
  OrigDataType: 
T_1708: (in 0x00 : byte)
  Class: Eq_1693
  DataType: 
  OrigDataType: 
T_1709: (in al_153 != 0x00 : bool)
  Class: Eq_1709
  DataType: 
  OrigDataType: 
T_1710: (in ss : selector)
  Class: Eq_1710
  DataType: 
  OrigDataType: 
T_1711: (in 0x0000 : word16)
  Class: Eq_1711
  DataType: 
  OrigDataType: 
T_1712: (in di + 0x0000 : word16)
  Class: Eq_1712
  DataType: 
  OrigDataType: 
T_1713: (in Mem3[ss:di + 0x0000:byte] : byte)
  Class: Eq_1693
  DataType: 
  OrigDataType: 
T_1714: (in v8_8 : byte)
  Class: Eq_1714
  DataType: 
  OrigDataType: 
T_1715: (in 0x0055 : word16)
  Class: Eq_1715
  DataType: 
  OrigDataType: 
T_1716: (in bp - 0x0055 : word16)
  Class: Eq_1716
  DataType: 
  OrigDataType: 
T_1717: (in Mem3[ss:bp - 0x0055:byte] : byte)
  Class: Eq_1717
  DataType: 
  OrigDataType: 
T_1718: (in 0x01 : byte)
  Class: Eq_1718
  DataType: 
  OrigDataType: 
T_1719: (in Mem3[ss:bp - 0x0055:byte] - 0x01 : byte)
  Class: Eq_1714
  DataType: 
  OrigDataType: 
T_1720: (in 0x0055 : word16)
  Class: Eq_1720
  DataType: 
  OrigDataType: 
T_1721: (in bp - 0x0055 : word16)
  Class: Eq_1721
  DataType: 
  OrigDataType: 
T_1722: (in Mem9[ss:bp - 0x0055:byte] : byte)
  Class: Eq_1714
  DataType: 
  OrigDataType: 
T_1723: (in 0x00 : byte)
  Class: Eq_1714
  DataType: 
  OrigDataType: 
T_1724: (in v8_8 <= 0x00 : bool)
  Class: Eq_1724
  DataType: 
  OrigDataType: 
T_1725: (in fn0D28_0089 : ptr32)
  Class: Eq_1725
  DataType: 
  OrigDataType: 
T_1726: (in signature of fn0D28_0089 : void)
  Class: Eq_1725
  DataType: 
  OrigDataType: 
T_1727: (in fn0D28_0089() : void)
  Class: Eq_1727
  DataType: 
  OrigDataType: 
T_1728: (in 0x0001 : word16)
  Class: Eq_1728
  DataType: 
  OrigDataType: 
T_1729: (in di + 0x0001 : word16)
  Class: Eq_1729
  DataType: 
  OrigDataType: 
T_1730: (in fn0D28_005A : ptr32)
  Class: Eq_1652
  DataType: 
  OrigDataType: 
T_1731: (in di + 0x0001 : word16)
  Class: Eq_1614
  DataType: 
  OrigDataType: 
T_1732: (in fn0D28_005A(bp, di + 0x0001) : void)
  Class: Eq_1732
  DataType: 
  OrigDataType: 
T_1733: (in di + 0x0001 : word16)
  Class: Eq_1733
  DataType: 
  OrigDataType: 
T_1734: (in fn0D28_005A : ptr32)
  Class: Eq_1652
  DataType: 
  OrigDataType: 
T_1735: (in di + 0x0001 : word16)
  Class: Eq_1614
  DataType: 
  OrigDataType: 
T_1736: (in fn0D28_005A(bp, di + 0x0001) : void)
  Class: Eq_1736
  DataType: 
  OrigDataType: 
T_1737: (in di + 0x0001 : word16)
  Class: Eq_1737
  DataType: 
  OrigDataType: 
*/
