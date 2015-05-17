// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_228/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr (struct "Globals"))
  OrigDataType: (ptr (struct "Globals"))
T_2: (in bios_video_set_mode : ptr32)
  Class: Eq_2
  DataType: (ptr (fn T_6 (T_5)))
  OrigDataType: (ptr (fn T_6 (T_5)))
T_3: (in signature of bios_video_set_mode : void)
  Class: Eq_2
  DataType: 
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
T_7: (in es_7 : selector)
  Class: Eq_7
  DataType: (ptr (segment (0 (arr T_210) a0000)))
  OrigDataType: (ptr (segment (0 (arr T_210) a0000)))
T_8: (in ds : selector)
  Class: Eq_8
  DataType: (ptr (segment (1C6 T_58 t01C6) (1CA T_82 t01CA) (1CE T_106 t01CE) (1FF T_42 t01FF) (203 T_68 t0203) (205 T_78 t0205) (207 (arr T_209) a0207)))
  OrigDataType: (ptr (segment (1C6 T_58 t01C6) (1CA T_82 t01CA) (1CE T_106 t01CE) (1FF T_42 t01FF) (203 T_68 t0203) (205 T_78 t0205) (207 (arr T_209) a0207)))
T_9: (in bx : word16)
  Class: Eq_9
  DataType: (memptr T_8 (struct (0 T_12 t0000) (207 T_47 t0207)))
  OrigDataType: (memptr T_8 (struct (0 T_12 t0000) (207 T_47 t0207)))
T_10: (in 0x0000 : word16)
  Class: Eq_10
  DataType: word16
  OrigDataType: word16
T_11: (in bx + 0x0000 : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_12: (in Mem0[ds:bx + 0x0000:segptr32] : segptr32)
  Class: Eq_12
  DataType: segptr32
  OrigDataType: segptr32
T_13: (in SLICE(Mem0[ds:bx + 0x0000:segptr32], selector, 16) : selector)
  Class: Eq_7
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_14: (in al_14 : byte)
  Class: Eq_14
  DataType: byte
  OrigDataType: byte
T_15: (in cx : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_16: (in ~cx : word16)
  Class: Eq_16
  DataType: uint16
  OrigDataType: uint16
T_17: (in 0x0002 : word16)
  Class: Eq_17
  DataType: uint16
  OrigDataType: uint16
T_18: (in ~cx >>u 0x0002 : word16)
  Class: Eq_18
  DataType: uint16
  OrigDataType: uint16
T_19: (in (byte) (~cx >>u 0x0002) : byte)
  Class: Eq_14
  DataType: byte
  OrigDataType: byte
T_20: (in __outb : ptr32)
  Class: Eq_20
  DataType: (ptr (fn T_22 (T_21, T_14)))
  OrigDataType: (ptr (fn T_22 (T_21, T_14)))
T_21: (in 0x03C9 : word16)
  Class: Eq_21
  DataType: word16
  OrigDataType: word16
T_22: (in __outb(0x03C9, al_14) : void)
  Class: Eq_22
  DataType: void
  OrigDataType: void
T_23: (in __outb : ptr32)
  Class: Eq_23
  DataType: (ptr (fn T_25 (T_24, T_14)))
  OrigDataType: (ptr (fn T_25 (T_24, T_14)))
T_24: (in 0x03C9 : word16)
  Class: Eq_24
  DataType: word16
  OrigDataType: word16
T_25: (in __outb(0x03C9, al_14) : void)
  Class: Eq_25
  DataType: void
  OrigDataType: void
T_26: (in __outb : ptr32)
  Class: Eq_26
  DataType: (ptr (fn T_28 (T_27, T_14)))
  OrigDataType: (ptr (fn T_28 (T_27, T_14)))
T_27: (in 0x03C9 : word16)
  Class: Eq_27
  DataType: word16
  OrigDataType: word16
T_28: (in __outb(0x03C9, al_14) : void)
  Class: Eq_28
  DataType: void
  OrigDataType: void
T_29: (in 0x0001 : word16)
  Class: Eq_29
  DataType: word16
  OrigDataType: word16
T_30: (in cx - 0x0001 : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_31: (in 0x0000 : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_32: (in cx != 0x0000 : bool)
  Class: Eq_32
  DataType: bool
  OrigDataType: bool
T_33: (in cx_48 : word16)
  Class: Eq_33
  DataType: uint16
  OrigDataType: uint16
T_34: (in 0x2328 : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_35: (in 0x0001 : word16)
  Class: Eq_35
  DataType: word16
  OrigDataType: word16
T_36: (in cx_48 - 0x0001 : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_37: (in ch_95 : byte)
  Class: Eq_37
  DataType: byte
  OrigDataType: byte
T_38: (in SLICE(cx_48, byte, 8) : byte)
  Class: Eq_37
  DataType: byte
  OrigDataType: byte
T_39: (in 0x0000 : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_40: (in cx_48 != 0x0000 : bool)
  Class: Eq_40
  DataType: bool
  OrigDataType: bool
T_41: (in 0x01FF : word16)
  Class: Eq_41
  DataType: (memptr T_8 (struct (0 T_42 t0000)))
  OrigDataType: (memptr T_8 (struct (0 T_42 t0000)))
T_42: (in Mem78[ds:0x01FF:word16] : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_43: (in (byte) Mem78[ds:0x01FF:word16] : byte)
  Class: Eq_43
  DataType: byte
  OrigDataType: byte
T_44: (in ax_135 : word16)
  Class: Eq_9
  DataType: (memptr T_8 (struct (0 T_12 t0000) (207 T_47 t0207)))
  OrigDataType: (memptr T_8 (struct (0 T_12 t0000) (207 T_47 t0207)))
T_45: (in 0x0207 : word16)
  Class: Eq_45
  DataType: word16
  OrigDataType: word16
T_46: (in ax_135 + 0x0207 : word16)
  Class: Eq_46
  DataType: word16
  OrigDataType: word16
T_47: (in Mem142[ds:ax_135 + 0x0207:byte] : byte)
  Class: Eq_43
  DataType: byte
  OrigDataType: byte
T_48: (in 0x0032 : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_49: (in 0x01FF : word16)
  Class: Eq_49
  DataType: (memptr T_8 (struct (0 T_50 t0000)))
  OrigDataType: (memptr T_8 (struct (0 T_50 t0000)))
T_50: (in Mem59[ds:0x01FF:word16] : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_51: (in 0x01FF : word16)
  Class: Eq_51
  DataType: (memptr T_8 (struct (0 T_52 t0000)))
  OrigDataType: (memptr T_8 (struct (0 T_52 t0000)))
T_52: (in Mem59[ds:0x01FF:word16] : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_53: (in 0x0003 : word16)
  Class: Eq_53
  DataType: uint16
  OrigDataType: uint16
T_54: (in cx_48 >>u 0x0003 : word16)
  Class: Eq_54
  DataType: uint16
  OrigDataType: uint16
T_55: (in Mem59[ds:0x01FF:word16] - (cx_48 >>u 0x0003) : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_56: (in 0x01FF : word16)
  Class: Eq_56
  DataType: (memptr T_8 (struct (0 T_57 t0000)))
  OrigDataType: (memptr T_8 (struct (0 T_57 t0000)))
T_57: (in Mem63[ds:0x01FF:word16] : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_58: (in rLoc1_64 : real64)
  Class: Eq_58
  DataType: (union (real16 u0) (real64 u1))
  OrigDataType: (union (real16 u0) (real64 u1))
T_59: (in 0x01C6 : word16)
  Class: Eq_59
  DataType: (memptr T_8 (struct (0 T_60 t0000)))
  OrigDataType: (memptr T_8 (struct (0 T_60 t0000)))
T_60: (in Mem63[ds:0x01C6:real32] : real32)
  Class: Eq_58
  DataType: real32
  OrigDataType: real32
T_61: (in sin : ptr32)
  Class: Eq_61
  DataType: (ptr (fn T_63 (T_62)))
  OrigDataType: (ptr (fn T_63 (T_62)))
T_62: (in rLoc3 : real64)
  Class: Eq_62
  DataType: (union (real16 u0) (real64 u1))
  OrigDataType: (union (real16 u0) (real64 u1))
T_63: (in sin(rLoc3) : real64)
  Class: Eq_63
  DataType: (union (real16 u0) (real64 u1))
  OrigDataType: (union (real16 u0) (real64 u1))
T_64: (in 0x01FF : word16)
  Class: Eq_64
  DataType: (memptr T_8 (struct (0 T_65 t0000)))
  OrigDataType: (memptr T_8 (struct (0 T_65 t0000)))
T_65: (in Mem63[ds:0x01FF:word16] : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_66: (in (real64) Mem63[ds:0x01FF:word16] : real64)
  Class: Eq_66
  DataType: (union (real16 u0) (real64 u1))
  OrigDataType: (union (real16 u0) (real64 u1))
T_67: (in sin(rLoc3) * (real64) Mem63[ds:0x01FF:word16] : word16)
  Class: Eq_62
  DataType: real16
  OrigDataType: real16
T_68: (in (int16) rLoc3 : int16)
  Class: Eq_68
  DataType: int16
  OrigDataType: int16
T_69: (in 0x0203 : word16)
  Class: Eq_69
  DataType: (memptr T_8 (struct (0 T_70 t0000)))
  OrigDataType: (memptr T_8 (struct (0 T_70 t0000)))
T_70: (in Mem69[ds:0x0203:int16] : int16)
  Class: Eq_68
  DataType: int16
  OrigDataType: int16
T_71: (in cos : ptr32)
  Class: Eq_71
  DataType: (ptr (fn T_73 (T_72)))
  OrigDataType: (ptr (fn T_73 (T_72)))
T_72: (in rLoc2 : real64)
  Class: Eq_72
  DataType: (union (real16 u0) (real64 u1))
  OrigDataType: (union (real16 u0) (real64 u1))
T_73: (in cos(rLoc2) : real64)
  Class: Eq_73
  DataType: (union (real16 u0) (real64 u1))
  OrigDataType: (union (real16 u0) (real64 u1))
T_74: (in 0x01FF : word16)
  Class: Eq_74
  DataType: (memptr T_8 (struct (0 T_75 t0000)))
  OrigDataType: (memptr T_8 (struct (0 T_75 t0000)))
T_75: (in Mem69[ds:0x01FF:word16] : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_76: (in (real64) Mem69[ds:0x01FF:word16] : real64)
  Class: Eq_76
  DataType: (union (real16 u0) (real64 u1))
  OrigDataType: (union (real16 u0) (real64 u1))
T_77: (in cos(rLoc2) * (real64) Mem69[ds:0x01FF:word16] : word16)
  Class: Eq_72
  DataType: real16
  OrigDataType: real16
T_78: (in (int16) rLoc2 : int16)
  Class: Eq_78
  DataType: int16
  OrigDataType: int16
T_79: (in 0x0205 : word16)
  Class: Eq_79
  DataType: (memptr T_8 (struct (0 T_80 t0000)))
  OrigDataType: (memptr T_8 (struct (0 T_80 t0000)))
T_80: (in Mem72[ds:0x0205:int16] : int16)
  Class: Eq_78
  DataType: int16
  OrigDataType: int16
T_81: (in 0x01CA : word16)
  Class: Eq_81
  DataType: (memptr T_8 (struct (0 T_82 t0000)))
  OrigDataType: (memptr T_8 (struct (0 T_82 t0000)))
T_82: (in Mem72[ds:0x01CA:real32] : real32)
  Class: Eq_82
  DataType: (union (real16 u0) (real32 u1))
  OrigDataType: (union (real16 u0) (real32 u1))
T_83: (in rLoc1_64 + Mem72[ds:0x01CA:real32] : word16)
  Class: Eq_58
  DataType: real16
  OrigDataType: real16
T_84: (in 0x01C6 : word16)
  Class: Eq_84
  DataType: (memptr T_8 (struct (0 T_85 t0000)))
  OrigDataType: (memptr T_8 (struct (0 T_85 t0000)))
T_85: (in Mem74[ds:0x01C6:real32] : real32)
  Class: Eq_58
  DataType: real32
  OrigDataType: real32
T_86: (in 0x0203 : word16)
  Class: Eq_86
  DataType: (memptr T_8 (struct (0 T_68 t0000)))
  OrigDataType: (memptr T_8 (struct (0 T_68 t0000)))
T_87: (in Mem74[ds:0x0203:word16] : word16)
  Class: Eq_68
  DataType: word16
  OrigDataType: word16
T_88: (in 0x00A0 : word16)
  Class: Eq_88
  DataType: word16
  OrigDataType: word16
T_89: (in Mem74[ds:0x0203:word16] + 0x00A0 : word16)
  Class: Eq_68
  DataType: word16
  OrigDataType: word16
T_90: (in Mem76[ds:0x0203:word16] : word16)
  Class: Eq_68
  DataType: word16
  OrigDataType: word16
T_91: (in 0x0205 : word16)
  Class: Eq_91
  DataType: (memptr T_8 (struct (0 T_78 t0000)))
  OrigDataType: (memptr T_8 (struct (0 T_78 t0000)))
T_92: (in Mem76[ds:0x0205:word16] : word16)
  Class: Eq_78
  DataType: word16
  OrigDataType: word16
T_93: (in 0x0064 : word16)
  Class: Eq_93
  DataType: word16
  OrigDataType: word16
T_94: (in Mem76[ds:0x0205:word16] + 0x0064 : word16)
  Class: Eq_78
  DataType: word16
  OrigDataType: word16
T_95: (in Mem78[ds:0x0205:word16] : word16)
  Class: Eq_78
  DataType: word16
  OrigDataType: word16
T_96: (in 0x0203 : word16)
  Class: Eq_96
  DataType: (memptr T_8 (struct (0 T_97 t0000)))
  OrigDataType: (memptr T_8 (struct (0 T_97 t0000)))
T_97: (in Mem78[ds:0x0203:word16] : word16)
  Class: Eq_68
  DataType: word16
  OrigDataType: word16
T_98: (in 0x0140 : word16)
  Class: Eq_98
  DataType: word16
  OrigDataType: word16
T_99: (in Mem78[ds:0x0203:word16] + 0x0140 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_100: (in SLICE(ax_135, byte, 8) : byte)
  Class: Eq_100
  DataType: bcu8
  OrigDataType: bcu8
T_101: (in 0xFA : byte)
  Class: Eq_100
  DataType: bcu8
  OrigDataType: bcu8
T_102: (in SLICE(ax_135, byte, 8) >u 0xFA : bool)
  Class: Eq_102
  DataType: bool
  OrigDataType: bool
T_103: (in 0x01C6 : word16)
  Class: Eq_103
  DataType: (memptr T_8 (struct (0 T_104 t0000)))
  OrigDataType: (memptr T_8 (struct (0 T_104 t0000)))
T_104: (in Mem78[ds:0x01C6:real32] : real32)
  Class: Eq_58
  DataType: real32
  OrigDataType: real32
T_105: (in 0x01CE : word16)
  Class: Eq_105
  DataType: (memptr T_8 (struct (0 T_106 t0000)))
  OrigDataType: (memptr T_8 (struct (0 T_106 t0000)))
T_106: (in Mem78[ds:0x01CE:real32] : real32)
  Class: Eq_106
  DataType: real32
  OrigDataType: real32
T_107: (in Mem78[ds:0x01C6:real32] - Mem78[ds:0x01CE:real32] : word16)
  Class: Eq_58
  DataType: word16
  OrigDataType: word16
T_108: (in 0x01C6 : word16)
  Class: Eq_108
  DataType: (memptr T_8 (struct (0 T_109 t0000)))
  OrigDataType: (memptr T_8 (struct (0 T_109 t0000)))
T_109: (in Mem99[ds:0x01C6:real32] : real32)
  Class: Eq_58
  DataType: real32
  OrigDataType: real32
T_110: (in bx_100 : word16)
  Class: Eq_110
  DataType: word16
  OrigDataType: word16
T_111: (in cl_101 : byte)
  Class: Eq_111
  DataType: byte
  OrigDataType: byte
T_112: (in bx_103 : word16)
  Class: Eq_112
  DataType: word16
  OrigDataType: word16
T_113: (in cl_104 : byte)
  Class: Eq_113
  DataType: byte
  OrigDataType: byte
T_114: (in cl_107 : byte)
  Class: Eq_114
  DataType: byte
  OrigDataType: byte
T_115: (in fn0C00_019B : ptr32)
  Class: Eq_115
  DataType: (ptr (fn T_132 (T_129, T_37, T_8, T_130, T_131)))
  OrigDataType: (ptr (fn T_132 (T_129, T_37, T_8, T_130, T_131)))
T_116: (in signature of fn0C00_019B : void)
  Class: Eq_115
  DataType: 
  OrigDataType: 
T_117: (in ax : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_118: (in ch : byte)
  Class: Eq_37
  DataType: byte
  OrigDataType: byte
T_119: (in ds : selector)
  Class: Eq_8
  DataType: (ptr (segment (208 (arr T_211 2175) a0208)))
  OrigDataType: (ptr (segment (208 (arr T_211 2175) a0208)))
T_120: (in bxOut : ptr16)
  Class: Eq_120
  DataType: ptr16
  OrigDataType: ptr16
T_121: (in clOut : ptr16)
  Class: Eq_121
  DataType: ptr16
  OrigDataType: ptr16
T_122: (in fn0C00_019B : ptr32)
  Class: Eq_115
  DataType: (ptr (fn T_129 (T_126, T_37, T_8, T_127, T_128)))
  OrigDataType: (ptr (fn T_129 (T_126, T_37, T_8, T_127, T_128)))
T_123: (in fn0C00_019B : ptr32)
  Class: Eq_115
  DataType: (ptr (fn T_126 (T_44, T_37, T_8, T_124, T_125)))
  OrigDataType: (ptr (fn T_126 (T_44, T_37, T_8, T_124, T_125)))
T_124: (in out bx_100 : ptr16)
  Class: Eq_120
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_125: (in out cl_101 : ptr16)
  Class: Eq_121
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_126: (in fn0C00_019B(ax_135, ch_95, ds, out bx_100, out cl_101) : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_127: (in out bx_103 : ptr16)
  Class: Eq_120
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_128: (in out cl_104 : ptr16)
  Class: Eq_121
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_129: (in fn0C00_019B(fn0C00_019B(ax_135, ch_95, ds, out bx_100, out cl_101), ch_95, ds, out bx_103, out cl_104) : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_130: (in out bx : ptr16)
  Class: Eq_120
  DataType: (ptr (memptr T_8 (struct (0 T_12 t0000) (207 T_47 t0207))))
  OrigDataType: (ptr (memptr T_8 (struct (0 T_12 t0000) (207 T_47 t0207))))
T_131: (in out cl_107 : ptr16)
  Class: Eq_121
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_132: (in fn0C00_019B(fn0C00_019B(fn0C00_019B(ax_135, ch_95, ds, out bx_100, out cl_101), ch_95, ds, out bx_103, out cl_104), ch_95, ds, out bx, out cl_107) : word16)
  Class: Eq_132
  DataType: word16
  OrigDataType: word16
T_133: (in si_109 : word16)
  Class: Eq_133
  DataType: (memptr T_8 (struct 0002 (0 T_147 t0000)))
  OrigDataType: (memptr T_8 (struct 0002 (0 T_147 t0000)))
T_134: (in 0x0207 : word16)
  Class: Eq_133
  DataType: word16
  OrigDataType: word16
T_135: (in di_110 : word16)
  Class: Eq_135
  DataType: (memptr T_7 (struct 0002 (0 T_150 t0000)))
  OrigDataType: (memptr T_7 (struct 0002 (0 T_150 t0000)))
T_136: (in 0x0000 : word16)
  Class: Eq_135
  DataType: word16
  OrigDataType: word16
T_137: (in cx_114 : word16)
  Class: Eq_137
  DataType: word16
  OrigDataType: word16
T_138: (in 0x7D : byte)
  Class: Eq_138
  DataType: byte
  OrigDataType: byte
T_139: (in DPB(cx_48, 0x7D, 8, 8) : word16)
  Class: Eq_137
  DataType: word16
  OrigDataType: word16
T_140: (in __inb : ptr32)
  Class: Eq_140
  DataType: (ptr (fn T_142 (T_141)))
  OrigDataType: (ptr (fn T_142 (T_141)))
T_141: (in 0x60 : byte)
  Class: Eq_141
  DataType: byte
  OrigDataType: byte
T_142: (in __inb(0x60) : byte)
  Class: Eq_142
  DataType: byte
  OrigDataType: byte
T_143: (in 0x01 : byte)
  Class: Eq_142
  DataType: byte
  OrigDataType: byte
T_144: (in __inb(0x60) != 0x01 : bool)
  Class: Eq_144
  DataType: bool
  OrigDataType: bool
T_145: (in 0x0000 : word16)
  Class: Eq_145
  DataType: word16
  OrigDataType: word16
T_146: (in si_109 + 0x0000 : word16)
  Class: Eq_146
  DataType: word16
  OrigDataType: word16
T_147: (in Mem99[ds:si_109 + 0x0000:word16] : word16)
  Class: Eq_147
  DataType: word16
  OrigDataType: word16
T_148: (in 0x0000 : word16)
  Class: Eq_148
  DataType: word16
  OrigDataType: word16
T_149: (in di_110 + 0x0000 : word16)
  Class: Eq_149
  DataType: word16
  OrigDataType: word16
T_150: (in Mem121[es_7:di_110 + 0x0000:word16] : word16)
  Class: Eq_147
  DataType: word16
  OrigDataType: word16
T_151: (in 0x0002 : word16)
  Class: Eq_151
  DataType: word16
  OrigDataType: word16
T_152: (in si_109 + 0x0002 : word16)
  Class: Eq_133
  DataType: word16
  OrigDataType: word16
T_153: (in 0x0002 : word16)
  Class: Eq_153
  DataType: word16
  OrigDataType: word16
T_154: (in di_110 + 0x0002 : word16)
  Class: Eq_135
  DataType: word16
  OrigDataType: word16
T_155: (in 0x0001 : word16)
  Class: Eq_155
  DataType: word16
  OrigDataType: word16
T_156: (in cx_114 - 0x0001 : word16)
  Class: Eq_137
  DataType: word16
  OrigDataType: word16
T_157: (in 0x0000 : word16)
  Class: Eq_137
  DataType: word16
  OrigDataType: word16
T_158: (in cx_114 == 0x0000 : bool)
  Class: Eq_158
  DataType: bool
  OrigDataType: bool
T_159: (in bios_video_set_mode : ptr32)
  Class: Eq_2
  DataType: (ptr (fn T_161 (T_160)))
  OrigDataType: (ptr (fn T_161 (T_160)))
T_160: (in 0x03 : byte)
  Class: Eq_4
  DataType: byte
  OrigDataType: byte
T_161: (in bios_video_set_mode(0x03) : void)
  Class: Eq_161
  DataType: void
  OrigDataType: void
T_162: (in msdos_display_string : ptr32)
  Class: Eq_162
  DataType: (ptr (fn T_167 (T_8, T_166)))
  OrigDataType: (ptr (fn T_167 (T_8, T_166)))
T_163: (in signature of msdos_display_string : void)
  Class: Eq_162
  DataType: 
  OrigDataType: 
T_164: (in ds : selector)
  Class: Eq_8
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_165: (in dx : word16)
  Class: Eq_165
  DataType: word16
  OrigDataType: word16
T_166: (in 0x01D2 : word16)
  Class: Eq_165
  DataType: word16
  OrigDataType: word16
T_167: (in msdos_display_string(ds, 0x01D2) : void)
  Class: Eq_167
  DataType: void
  OrigDataType: void
T_168: (in bx_19 : word16)
  Class: Eq_168
  DataType: word16
  OrigDataType: word16
T_169: (in 0x0000 : word16)
  Class: Eq_168
  DataType: word16
  OrigDataType: word16
T_170: (in si_12 : word16)
  Class: Eq_170
  DataType: (memptr T_119 (struct 0001 (208 T_175 t0208)))
  OrigDataType: (memptr T_119 (struct 0001 (208 T_175 t0208)))
T_171: (in 0xF780 : word16)
  Class: Eq_170
  DataType: word16
  OrigDataType: word16
T_172: (in cl_20 : byte)
  Class: Eq_172
  DataType: byte
  OrigDataType: byte
T_173: (in 0x0208 : word16)
  Class: Eq_173
  DataType: word16
  OrigDataType: word16
T_174: (in si_12 + 0x0208 : word16)
  Class: Eq_174
  DataType: word16
  OrigDataType: word16
T_175: (in Mem0[ds:si_12 + 0x0208:byte] : byte)
  Class: Eq_172
  DataType: byte
  OrigDataType: byte
T_176: (in *clOut : byte)
  Class: Eq_172
  DataType: 
  OrigDataType: 
T_177: (in 0x00C7 : word16)
  Class: Eq_177
  DataType: 
  OrigDataType: 
T_178: (in si_12 + 0x00C7 : word16)
  Class: Eq_178
  DataType: 
  OrigDataType: 
T_179: (in Mem0[ds:si_12 + 0x00C7:byte] : byte)
  Class: Eq_179
  DataType: 
  OrigDataType: 
T_180: (in DPB(bx_19, Mem0[ds:si_12 + 0x00C7:byte], 0, 8) : word16)
  Class: Eq_168
  DataType: 
  OrigDataType: 
T_181: (in *bxOut : word16)
  Class: Eq_168
  DataType: 
  OrigDataType: 
T_182: (in cx : word16)
  Class: Eq_182
  DataType: 
  OrigDataType: 
T_183: (in DPB(cx, cl_20, 0, 8) : word16)
  Class: Eq_182
  DataType: 
  OrigDataType: 
T_184: (in dx : word16)
  Class: Eq_184
  DataType: 
  OrigDataType: 
T_185: (in 0x0206 : word16)
  Class: Eq_185
  DataType: 
  OrigDataType: 
T_186: (in si_12 + 0x0206 : word16)
  Class: Eq_186
  DataType: 
  OrigDataType: 
T_187: (in Mem0[ds:si_12 + 0x0206:byte] : byte)
  Class: Eq_187
  DataType: 
  OrigDataType: 
T_188: (in DPB(dx, Mem0[ds:si_12 + 0x0206:byte], 0, 8) : word16)
  Class: Eq_184
  DataType: 
  OrigDataType: 
T_189: (in ax_29 : word16)
  Class: Eq_189
  DataType: 
  OrigDataType: 
T_190: (in 0x0347 : word16)
  Class: Eq_190
  DataType: 
  OrigDataType: 
T_191: (in si_12 + 0x0347 : word16)
  Class: Eq_191
  DataType: 
  OrigDataType: 
T_192: (in Mem0[ds:si_12 + 0x0347:byte] : byte)
  Class: Eq_192
  DataType: 
  OrigDataType: 
T_193: (in (word16) Mem0[ds:si_12 + 0x0347:byte] : word16)
  Class: Eq_193
  DataType: 
  OrigDataType: 
T_194: (in (word16) Mem0[ds:si_12 + 0x0347:byte] + bx_19 : word16)
  Class: Eq_194
  DataType: 
  OrigDataType: 
T_195: (in (word16) Mem0[ds:si_12 + 0x0347:byte] + bx_19 + cx : word16)
  Class: Eq_195
  DataType: 
  OrigDataType: 
T_196: (in (word16) Mem0[ds:si_12 + 0x0347:byte] + bx_19 + cx + dx : word16)
  Class: Eq_196
  DataType: 
  OrigDataType: 
T_197: (in 0x0002 : word16)
  Class: Eq_197
  DataType: 
  OrigDataType: 
T_198: (in (word16) Mem0[ds:si_12 + 0x0347:byte] + bx_19 + cx + dx >>u 0x0002 : word16)
  Class: Eq_198
  DataType: 
  OrigDataType: 
T_199: (in 0x0001 : word16)
  Class: Eq_199
  DataType: 
  OrigDataType: 
T_200: (in ((word16) Mem0[ds:si_12 + 0x0347:byte] + bx_19 + cx + dx >>u 0x0002) - 0x0001 : word16)
  Class: Eq_189
  DataType: 
  OrigDataType: 
T_201: (in (byte) ax_29 : byte)
  Class: Eq_201
  DataType: 
  OrigDataType: 
T_202: (in 0x0207 : word16)
  Class: Eq_202
  DataType: 
  OrigDataType: 
T_203: (in si_12 + 0x0207 : word16)
  Class: Eq_203
  DataType: 
  OrigDataType: 
T_204: (in Mem32[ds:si_12 + 0x0207:byte] : byte)
  Class: Eq_201
  DataType: 
  OrigDataType: 
T_205: (in 0x0001 : word16)
  Class: Eq_205
  DataType: 
  OrigDataType: 
T_206: (in si_12 - 0x0001 : word16)
  Class: Eq_170
  DataType: 
  OrigDataType: 
T_207: (in 0x0000 : word16)
  Class: Eq_170
  DataType: 
  OrigDataType: 
T_208: (in si_12 != 0x0000 : bool)
  Class: Eq_208
  DataType: 
  OrigDataType: 
T_209:
  Class: Eq_209
  DataType: 
  OrigDataType: (struct 0002 (0 T_147 t0000))
T_210:
  Class: Eq_210
  DataType: 
  OrigDataType: (struct 0002 (0 T_150 t0000))
T_211:
  Class: Eq_211
  DataType: 
  OrigDataType: (struct 0001 (0 T_175 t0000))
*/
