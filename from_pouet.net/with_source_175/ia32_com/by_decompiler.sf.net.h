// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_175/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFF80000 (ptr Eq_60) ptrFFF80000) (FFFA0000 (ptr Eq_60) ptrFFFA0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_7: (fn void (word16, byte))
	T_7 (in __outb : ptr32)
Eq_23: (fn void (word16, bcu8))
	T_23 (in __outb : ptr32)
Eq_30: (union "Eq_30" (uint16 u0) (byte u1))
	T_30 (in al_156 : Eq_30)
	T_32 (in al_27 >>u 0x01 : word16)
	T_49 (in 0x3F : byte)
Eq_33: (union "Eq_33" (uint16 u0) (bcu8 u1))
	T_33 (in al_27 >>u 0x01 : word16)
	T_34 (in 0x40 : byte)
Eq_37: (fn void (word16, Eq_30))
	T_37 (in __outb : ptr32)
Eq_40: (fn void (word16, byte))
	T_40 (in __outb : ptr32)
Eq_55: (segment "Eq_55")
	T_55 (in ss : selector)
Eq_56: (union "Eq_56" ((memptr (ptr Eq_55) Eq_155) u0) (Eq_157 u1))
	T_56 (in fp : ptr16)
Eq_60: (segment "Eq_60" (FFFFF780 (arr word16) aFFFFF780) (0 Eq_89 t0000) (F780 word16 wF780))
	T_60 (in 0xA000 : selector)
	T_63 (in Mem66[ss:fp - 0x0002:word16] : word16)
	T_77 (in 0x8000 : selector)
Eq_69: (fn byte (byte, byte))
	T_69 (in __ror : ptr32)
Eq_89: (struct "Eq_89" 0001 (0 byte b0000) (13F byte b013F) (141 byte b0141) (280 byte b0280))
	T_89 (in di_123 : (memptr (ptr Eq_60) Eq_89))
	T_90 (in 0x0000 : word16)
	T_96 (in di_123 + 0x0001 : word16)
	T_133 (in si_128 : (memptr (ptr Eq_60) Eq_89))
	T_147 (in si_128 - 0x0001 : word16)
	T_149 (in di_123 - 0x0001 : word16)
Eq_135: (fn byte (byte))
	T_135 (in __inb : ptr32)
Eq_155: (struct "Eq_155" (FFFFFFFE word16 wFFFFFFFE))
	T_155
Eq_156: (struct "Eq_156" (FFFFFFFE word16 wFFFFFFFE))
	T_156
Eq_157: (union "Eq_157" (ptr16 u0) ((memptr (ptr Eq_55) Eq_156) u1))
	T_157
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr Eq_1)
  OrigDataType: (ptr (struct "Globals"))
T_2: (in bios_video_set_mode : ptr32)
  Class: Eq_2
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (fn T_6 (T_5)))
T_3: (in signature of bios_video_set_mode : void)
  Class: Eq_2
  DataType: (ptr Eq_2)
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
T_7: (in __outb : ptr32)
  Class: Eq_7
  DataType: (ptr Eq_7)
  OrigDataType: (ptr (fn T_10 (T_8, T_9)))
T_8: (in 0x03C8 : word16)
  Class: Eq_8
  DataType: word16
  OrigDataType: word16
T_9: (in 0x00 : byte)
  Class: Eq_9
  DataType: byte
  OrigDataType: byte
T_10: (in __outb(0x03C8, 0x00) : void)
  Class: Eq_10
  DataType: void
  OrigDataType: void
T_11: (in dx_47 : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_12: (in 0x03C9 : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_13: (in dl_45 : byte)
  Class: Eq_13
  DataType: byte
  OrigDataType: byte
T_14: (in 0xC9 : byte)
  Class: Eq_13
  DataType: byte
  OrigDataType: byte
T_15: (in dh_46 : byte)
  Class: Eq_15
  DataType: byte
  OrigDataType: byte
T_16: (in 0x03 : byte)
  Class: Eq_15
  DataType: byte
  OrigDataType: byte
T_17: (in cl_10 : byte)
  Class: Eq_17
  DataType: byte
  OrigDataType: byte
T_18: (in 0xFF : byte)
  Class: Eq_17
  DataType: byte
  OrigDataType: byte
T_19: (in cx_12 : word16)
  Class: Eq_19
  DataType: word16
  OrigDataType: word16
T_20: (in cx : word16)
  Class: Eq_20
  DataType: word16
  OrigDataType: word16
T_21: (in 0xFF : byte)
  Class: Eq_21
  DataType: byte
  OrigDataType: byte
T_22: (in DPB(cx, 0xFF, 0, 8) : word16)
  Class: Eq_19
  DataType: word16
  OrigDataType: word16
T_23: (in __outb : ptr32)
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: (ptr (fn T_26 (T_24, T_25)))
T_24: (in 0x03C9 : word16)
  Class: Eq_24
  DataType: word16
  OrigDataType: word16
T_25: (in al_158 : bcu8)
  Class: Eq_25
  DataType: bcu8
  OrigDataType: bcu8
T_26: (in __outb(0x03C9, al_158) : void)
  Class: Eq_26
  DataType: void
  OrigDataType: void
T_27: (in al_27 : uint8)
  Class: Eq_27
  DataType: uint8
  OrigDataType: uint8
T_28: (in 0xFF : byte)
  Class: Eq_28
  DataType: byte
  OrigDataType: byte
T_29: (in 0xFF - cl_10 : byte)
  Class: Eq_27
  DataType: uint8
  OrigDataType: byte
T_30: (in al_156 : Eq_30)
  Class: Eq_30
  DataType: Eq_30
  OrigDataType: byte
T_31: (in 0x01 : byte)
  Class: Eq_31
  DataType: uint8
  OrigDataType: uint8
T_32: (in al_27 >>u 0x01 : word16)
  Class: Eq_30
  DataType: Eq_30
  OrigDataType: uint16
T_33: (in al_27 >>u 0x01 : word16)
  Class: Eq_33
  DataType: Eq_33
  OrigDataType: uint16
T_34: (in 0x40 : byte)
  Class: Eq_33
  DataType: bcu8
  OrigDataType: bcu8
T_35: (in al_27 >>u 0x01 <u 0x40 : bool)
  Class: Eq_35
  DataType: bool
  OrigDataType: bool
T_36: (in 0x3F : byte)
  Class: Eq_25
  DataType: bcu8
  OrigDataType: byte
T_37: (in __outb : ptr32)
  Class: Eq_37
  DataType: (ptr Eq_37)
  OrigDataType: (ptr (fn T_39 (T_38, T_30)))
T_38: (in 0x03C9 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_39: (in __outb(0x03C9, al_156) : void)
  Class: Eq_39
  DataType: void
  OrigDataType: void
T_40: (in __outb : ptr32)
  Class: Eq_40
  DataType: (ptr Eq_40)
  OrigDataType: (ptr (fn T_43 (T_41, T_42)))
T_41: (in 0x03C9 : word16)
  Class: Eq_41
  DataType: word16
  OrigDataType: word16
T_42: (in 0x00 : byte)
  Class: Eq_42
  DataType: byte
  OrigDataType: byte
T_43: (in __outb(0x03C9, 0x00) : void)
  Class: Eq_43
  DataType: void
  OrigDataType: void
T_44: (in 0x0001 : word16)
  Class: Eq_44
  DataType: word16
  OrigDataType: word16
T_45: (in cx_12 - 0x0001 : word16)
  Class: Eq_19
  DataType: word16
  OrigDataType: word16
T_46: (in (byte) cx_12 : byte)
  Class: Eq_17
  DataType: byte
  OrigDataType: byte
T_47: (in 0x0000 : word16)
  Class: Eq_19
  DataType: word16
  OrigDataType: word16
T_48: (in cx_12 != 0x0000 : bool)
  Class: Eq_48
  DataType: bool
  OrigDataType: bool
T_49: (in 0x3F : byte)
  Class: Eq_30
  DataType: byte
  OrigDataType: byte
T_50: (in 0xFF : byte)
  Class: Eq_50
  DataType: byte
  OrigDataType: byte
T_51: (in 0xFF - cl_10 : byte)
  Class: Eq_25
  DataType: bcu8
  OrigDataType: byte
T_52: (in 0x40 : byte)
  Class: Eq_25
  DataType: bcu8
  OrigDataType: bcu8
T_53: (in al_158 <u 0x40 : bool)
  Class: Eq_53
  DataType: bool
  OrigDataType: bool
T_54: (in 0x8000 : word16)
  Class: Eq_54
  DataType: word16
  OrigDataType: word16
T_55: (in ss : selector)
  Class: Eq_55
  DataType: (ptr Eq_55)
  OrigDataType: (ptr (segment))
T_56: (in fp : ptr16)
  Class: Eq_56
  DataType: Eq_56
  OrigDataType: (union ((union (ptr16 u0) ((memptr T_55 (struct (FFFFFFFE T_63 tFFFFFFFE))) u1)) u0) ((union (ptr16 u0) ((memptr T_55 (struct (FFFFFFFE T_59 tFFFFFFFE))) u1)) u1) ((memptr T_55 (struct (FFFFFFFE T_132 tFFFFFFFE))) u2))
T_57: (in 0x0002 : word16)
  Class: Eq_57
  DataType: word16
  OrigDataType: word16
T_58: (in fp - 0x0002 : word16)
  Class: Eq_58
  DataType: word16
  OrigDataType: word16
T_59: (in Mem61[ss:fp - 0x0002:word16] : word16)
  Class: Eq_54
  DataType: word16
  OrigDataType: word16
T_60: (in 0xA000 : selector)
  Class: Eq_60
  DataType: (ptr Eq_60)
  OrigDataType: (ptr (segment))
T_61: (in 0x0002 : word16)
  Class: Eq_61
  DataType: word16
  OrigDataType: word16
T_62: (in fp - 0x0002 : word16)
  Class: Eq_62
  DataType: word16
  OrigDataType: word16
T_63: (in Mem66[ss:fp - 0x0002:word16] : word16)
  Class: Eq_60
  DataType: (ptr Eq_60)
  OrigDataType: word16
T_64: (in cx_70 : word16)
  Class: Eq_64
  DataType: word16
  OrigDataType: word16
T_65: (in 0x02 : byte)
  Class: Eq_65
  DataType: byte
  OrigDataType: byte
T_66: (in DPB(cx_12, 0x02, 8, 8) : word16)
  Class: Eq_64
  DataType: word16
  OrigDataType: word16
T_67: (in di_71 : (memptr (ptr Eq_60) word16))
  Class: Eq_67
  DataType: (memptr (ptr Eq_60) word16)
  OrigDataType: (memptr T_77 (struct 0002 (0 T_80 t0000)))
T_68: (in 0xF780 : word16)
  Class: Eq_67
  DataType: (memptr (ptr Eq_60) word16)
  OrigDataType: word16
T_69: (in __ror : ptr32)
  Class: Eq_69
  DataType: (ptr Eq_69)
  OrigDataType: (ptr (fn T_72 (T_70, T_71)))
T_70: (in dl_45 ^ dh_46 : byte)
  Class: Eq_70
  DataType: byte
  OrigDataType: byte
T_71: (in 0x01 : byte)
  Class: Eq_71
  DataType: byte
  OrigDataType: byte
T_72: (in __ror(dl_45 ^ dh_46, 0x01) : byte)
  Class: Eq_13
  DataType: byte
  OrigDataType: byte
T_73: (in 0x2A : byte)
  Class: Eq_73
  DataType: byte
  OrigDataType: byte
T_74: (in dh_46 + 0x2A : byte)
  Class: Eq_74
  DataType: byte
  OrigDataType: byte
T_75: (in dh_46 + 0x2A ^ dl_45 : byte)
  Class: Eq_15
  DataType: byte
  OrigDataType: byte
T_76: (in DPB(dx_47, dh_46, 8, 8) : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_77: (in 0x8000 : selector)
  Class: Eq_60
  DataType: (ptr Eq_60)
  OrigDataType: (ptr (segment (FFFFF780 (arr word16) aFFFFF780)))
T_78: (in 0x0000 : word16)
  Class: Eq_78
  DataType: word16
  OrigDataType: word16
T_79: (in di_71 + 0x0000 : word16)
  Class: Eq_79
  DataType: word16
  OrigDataType: word16
T_80: (in Mem86[0x8000:di_71 + 0x0000:word16] : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_81: (in 0x0002 : word16)
  Class: Eq_81
  DataType: word16
  OrigDataType: word16
T_82: (in di_71 + 0x0002 : word16)
  Class: Eq_67
  DataType: (memptr (ptr Eq_60) word16)
  OrigDataType: word16
T_83: (in 0x0001 : word16)
  Class: Eq_83
  DataType: word16
  OrigDataType: word16
T_84: (in cx_70 - 0x0001 : word16)
  Class: Eq_64
  DataType: word16
  OrigDataType: word16
T_85: (in 0x0000 : word16)
  Class: Eq_64
  DataType: word16
  OrigDataType: word16
T_86: (in cx_70 != 0x0000 : bool)
  Class: Eq_86
  DataType: bool
  OrigDataType: bool
T_87: (in cx_124 : word16)
  Class: Eq_87
  DataType: word16
  OrigDataType: word16
T_88: (in ~cx_70 : word16)
  Class: Eq_87
  DataType: word16
  OrigDataType: word16
T_89: (in di_123 : (memptr (ptr Eq_60) Eq_89))
  Class: Eq_89
  DataType: (memptr (ptr Eq_60) Eq_89)
  OrigDataType: (memptr T_60 (struct 0001 (0 T_91 t0000) (13F T_113 t013F) (141 T_105 t0141) (280 T_118 t0280)))
T_90: (in 0x0000 : word16)
  Class: Eq_89
  DataType: (memptr (ptr Eq_60) Eq_89)
  OrigDataType: word16
T_91: (in al_115 : byte)
  Class: Eq_91
  DataType: byte
  OrigDataType: byte
T_92: (in 0x0000 : word16)
  Class: Eq_92
  DataType: word16
  OrigDataType: word16
T_93: (in di_123 + 0x0000 : word16)
  Class: Eq_93
  DataType: word16
  OrigDataType: word16
T_94: (in Mem122[0x8000:di_123 + 0x0000:byte] : byte)
  Class: Eq_91
  DataType: byte
  OrigDataType: byte
T_95: (in 0x0001 : word16)
  Class: Eq_95
  DataType: word16
  OrigDataType: word16
T_96: (in di_123 + 0x0001 : word16)
  Class: Eq_89
  DataType: (memptr (ptr Eq_60) Eq_89)
  OrigDataType: word16
T_97: (in 0x0001 : word16)
  Class: Eq_97
  DataType: word16
  OrigDataType: word16
T_98: (in cx_124 - 0x0001 : word16)
  Class: Eq_87
  DataType: word16
  OrigDataType: word16
T_99: (in 0x0000 : word16)
  Class: Eq_87
  DataType: word16
  OrigDataType: word16
T_100: (in cx_124 != 0x0000 : bool)
  Class: Eq_100
  DataType: bool
  OrigDataType: bool
T_101: (in al_113 : byte)
  Class: Eq_91
  DataType: byte
  OrigDataType: byte
T_102: (in bx : word16)
  Class: Eq_102
  DataType: word16
  OrigDataType: word16
T_103: (in 0x0141 : word16)
  Class: Eq_103
  DataType: word16
  OrigDataType: word16
T_104: (in di_123 + 0x0141 : word16)
  Class: Eq_104
  DataType: word16
  OrigDataType: word16
T_105: (in Mem86[0x8000:di_123 + 0x0141:byte] : byte)
  Class: Eq_105
  DataType: byte
  OrigDataType: byte
T_106: (in DPB(bx, (0x8000->*di_123).b0141, 0, 8) : word16)
  Class: Eq_102
  DataType: word16
  OrigDataType: word16
T_107: (in 0x0000 : word16)
  Class: Eq_107
  DataType: word16
  OrigDataType: word16
T_108: (in di_123 + 0x0000 : word16)
  Class: Eq_108
  DataType: word16
  OrigDataType: word16
T_109: (in Mem86[0x8000:di_123 + 0x0000:byte] : byte)
  Class: Eq_91
  DataType: byte
  OrigDataType: byte
T_110: (in (word16) (0x8000->*di_123).b0000 : word16)
  Class: Eq_110
  DataType: word16
  OrigDataType: word16
T_111: (in 0x013F : word16)
  Class: Eq_111
  DataType: word16
  OrigDataType: word16
T_112: (in di_123 + 0x013F : word16)
  Class: Eq_112
  DataType: word16
  OrigDataType: word16
T_113: (in Mem86[0x8000:di_123 + 0x013F:byte] : byte)
  Class: Eq_113
  DataType: byte
  OrigDataType: byte
T_114: (in DPB(bx, (0x8000->*di_123).b013F, 0, 8) : word16)
  Class: Eq_114
  DataType: word16
  OrigDataType: word16
T_115: (in (word16) (0x8000->*di_123).b0000 + DPB(bx, (0x8000->*di_123).b013F, 0, 8) : word16)
  Class: Eq_115
  DataType: word16
  OrigDataType: word16
T_116: (in 0x0280 : word16)
  Class: Eq_116
  DataType: word16
  OrigDataType: word16
T_117: (in di_123 + 0x0280 : word16)
  Class: Eq_117
  DataType: word16
  OrigDataType: word16
T_118: (in Mem86[0x8000:di_123 + 0x0280:byte] : byte)
  Class: Eq_118
  DataType: byte
  OrigDataType: byte
T_119: (in DPB(bx, (0x8000->*di_123).b0280, 0, 8) : word16)
  Class: Eq_119
  DataType: word16
  OrigDataType: word16
T_120: (in (word16) (0x8000->*di_123).b0000 + DPB(bx, (0x8000->*di_123).b013F, 0, 8) + DPB(bx, (0x8000->*di_123).b0280, 0, 8) : word16)
  Class: Eq_120
  DataType: word16
  OrigDataType: word16
T_121: (in (word16) (0x8000->*di_123).b0000 + DPB(bx, (0x8000->*di_123).b013F, 0, 8) + DPB(bx, (0x8000->*di_123).b0280, 0, 8) + bx : word16)
  Class: Eq_121
  DataType: uint16
  OrigDataType: uint16
T_122: (in 0x0002 : word16)
  Class: Eq_122
  DataType: uint16
  OrigDataType: uint16
T_123: (in (word16) (0x8000->*di_123).b0000 + DPB(bx, (0x8000->*di_123).b013F, 0, 8) + DPB(bx, (0x8000->*di_123).b0280, 0, 8) + bx >>u 0x0002 : word16)
  Class: Eq_123
  DataType: uint16
  OrigDataType: uint16
T_124: (in (byte) ((word16) (0x8000->*di_123).b0000 + DPB(bx, (0x8000->*di_123).b013F, 0, 8) + DPB(bx, (0x8000->*di_123).b0280, 0, 8) + bx >>u 0x0002) : byte)
  Class: Eq_91
  DataType: byte
  OrigDataType: byte
T_125: (in 0x01 : byte)
  Class: Eq_125
  DataType: byte
  OrigDataType: byte
T_126: (in al_113 - 0x01 : byte)
  Class: Eq_91
  DataType: byte
  OrigDataType: byte
T_127: (in 0x01 : byte)
  Class: Eq_91
  DataType: byte
  OrigDataType: byte
T_128: (in al_113 != 0x01 : bool)
  Class: Eq_128
  DataType: bool
  OrigDataType: bool
T_129: (in 0xA000 : word16)
  Class: Eq_129
  DataType: word16
  OrigDataType: word16
T_130: (in 0x0002 : word16)
  Class: Eq_130
  DataType: word16
  OrigDataType: word16
T_131: (in fp - 0x0002 : word16)
  Class: Eq_131
  DataType: word16
  OrigDataType: word16
T_132: (in Mem130[ss:fp - 0x0002:word16] : word16)
  Class: Eq_129
  DataType: word16
  OrigDataType: word16
T_133: (in si_128 : (memptr (ptr Eq_60) Eq_89))
  Class: Eq_89
  DataType: (memptr (ptr Eq_60) Eq_89)
  OrigDataType: (memptr T_77 (struct 0001 (0 T_142 t0000)))
T_134: (in ~cx_124 : word16)
  Class: Eq_19
  DataType: word16
  OrigDataType: word16
T_135: (in __inb : ptr32)
  Class: Eq_135
  DataType: (ptr Eq_135)
  OrigDataType: (ptr (fn T_137 (T_136)))
T_136: (in 0x60 : byte)
  Class: Eq_136
  DataType: byte
  OrigDataType: byte
T_137: (in __inb(0x60) : byte)
  Class: Eq_137
  DataType: byte
  OrigDataType: byte
T_138: (in 0x01 : byte)
  Class: Eq_137
  DataType: byte
  OrigDataType: byte
T_139: (in __inb(0x60) != 0x01 : bool)
  Class: Eq_139
  DataType: bool
  OrigDataType: bool
T_140: (in 0x0000 : word16)
  Class: Eq_140
  DataType: word16
  OrigDataType: word16
T_141: (in si_128 + 0x0000 : word16)
  Class: Eq_141
  DataType: word16
  OrigDataType: word16
T_142: (in Mem130[0x8000:si_128 + 0x0000:byte] : byte)
  Class: Eq_91
  DataType: byte
  OrigDataType: byte
T_143: (in 0x0000 : word16)
  Class: Eq_143
  DataType: word16
  OrigDataType: word16
T_144: (in di_123 + 0x0000 : word16)
  Class: Eq_144
  DataType: word16
  OrigDataType: word16
T_145: (in Mem142[0xA000:di_123 + 0x0000:byte] : byte)
  Class: Eq_91
  DataType: byte
  OrigDataType: byte
T_146: (in 0x0001 : word16)
  Class: Eq_146
  DataType: word16
  OrigDataType: word16
T_147: (in si_128 - 0x0001 : word16)
  Class: Eq_89
  DataType: (memptr (ptr Eq_60) Eq_89)
  OrigDataType: word16
T_148: (in 0x0001 : word16)
  Class: Eq_148
  DataType: word16
  OrigDataType: word16
T_149: (in di_123 - 0x0001 : word16)
  Class: Eq_89
  DataType: (memptr (ptr Eq_60) Eq_89)
  OrigDataType: word16
T_150: (in 0x0001 : word16)
  Class: Eq_150
  DataType: word16
  OrigDataType: word16
T_151: (in cx_12 - 0x0001 : word16)
  Class: Eq_19
  DataType: word16
  OrigDataType: word16
T_152: (in 0x0000 : word16)
  Class: Eq_19
  DataType: word16
  OrigDataType: word16
T_153: (in cx_12 == 0x0000 : bool)
  Class: Eq_153
  DataType: bool
  OrigDataType: bool
T_154:
  Class: Eq_154
  DataType: word16
  OrigDataType: (struct 0002 (0 T_80 t0000))
T_155:
  Class: Eq_155
  DataType: Eq_155
  OrigDataType: 
T_156:
  Class: Eq_156
  DataType: Eq_156
  OrigDataType: 
T_157:
  Class: Eq_157
  DataType: Eq_157
  OrigDataType: 
*/
typedef Eq_60 Eq_1Eq_60 Eq_1struct Globals {
	Eq_60 * ptrFFF80000;	// FFF80000
	Eq_60 * ptrFFFA0000;	// FFFA0000
} Eq_1;

typedef void (Eq_2)(byte);

typedef void (Eq_7)(word16, byte);

typedef void (Eq_23)(word16, bcu8);

typedef union Eq_30 {
	uint16 u0;
	byte u1;
} Eq_30;

typedef union Eq_33 {
	uint16 u0;
	bcu8 u1;
} Eq_33;

typedef void (Eq_37)(word16, Eq_30);

typedef void (Eq_40)(word16, byte);

typedef struct Eq_55 {
} Eq_55;

typedef union Eq_56 {
	Eq_155 Eq_55::* u0;
	Eq_157 u1;
} Eq_56;

typedef  Eq_60[]Eq_89struct Eq_60 {
	word16 aFFFFF780[];	// FFFFF780
	Eq_89 t0000;	// 0
	word16 wF780;	// F780
} Eq_60;

typedef byte (Eq_69)(byte, byte);

typedef struct Eq_89 {	// size: 1 1
	byte b0000;	// 0
	byte b013F;	// 13F
	byte b0141;	// 141
	byte b0280;	// 280
} Eq_89;

typedef byte (Eq_135)(byte);

typedef struct Eq_155 {
	word16 wFFFFFFFE;	// FFFFFFFE
} Eq_155;

typedef struct Eq_156 {
	word16 wFFFFFFFE;	// FFFFFFFE
} Eq_156;

typedef union Eq_157 {
	ptr16 u0;
	Eq_156 Eq_55::* u1;
} Eq_157;

