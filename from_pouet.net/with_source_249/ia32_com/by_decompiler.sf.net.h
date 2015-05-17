// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_249/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_141) ptrFFFA0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
	T_257 (in bios_video_set_mode : ptr32)
Eq_7: (fn void ((ptr Eq_9), word16))
	T_7 (in msdos_display_string : ptr32)
	T_8 (in signature of msdos_display_string : void)
Eq_9: (segment "Eq_9")
	T_9 (in ds : selector)
	T_11 (in ds : (ptr Eq_9))
Eq_15: (segment "Eq_15")
	T_15 (in cs : selector)
Eq_17: (segment "Eq_17" (FFFFA000 byte bFFFFA000) (FFFFFE00 (arr word16) aFFFFFE00) (FFFFFFFE (arr word16) aFFFFFFFE) (0 (arr word16) a0000) (2 (arr word16) a0002) (200 (arr word16) a0200) (A000 byte bA000))
	T_17 (in ax_10 : (ptr Eq_17))
	T_20 (in DPB(cs, ah_8 + 0x10, 8, 8) : word16)
	T_21 (in ax_13 : (ptr Eq_17))
	T_24 (in DPB(cs, ah_8 + 0x20, 8, 8) : selector)
	T_25 (in ds_11 : (ptr Eq_17))
	T_26 (in es_139 : (ptr Eq_17))
Eq_50: (fn void (word16, byte))
	T_50 (in __outb : ptr32)
Eq_54: (fn void (word16, byte))
	T_54 (in __outb : ptr32)
Eq_58: (union "Eq_58" (int8 u0) (uint16 u1))
	T_58 (in al_43 : Eq_58)
	T_60 (in ah_21 >>u 0x02 : word16)
Eq_61: (fn void (word16, Eq_58))
	T_61 (in __outb : ptr32)
Eq_64: (fn void (word16, byte))
	T_64 (in __outb : ptr32)
Eq_75: (segment "Eq_75")
	T_75 (in ss : selector)
Eq_76: (union "Eq_76" ((memptr (ptr Eq_75) Eq_269) u0) (Eq_271 u1))
	T_76 (in fp : ptr16)
Eq_84: (struct "Eq_84" 0002 (FFFFFE00 word16 wFFFFFE00) (FFFFFFFE word16 wFFFFFFFE) (0 word16 w0000) (2 word16 w0002) (200 word16 w0200))
	T_84 (in di_105 : (memptr (ptr Eq_17) Eq_84))
	T_116 (in di_105 + 0x0002 : word16)
	T_255 (in 0x0000 : word16)
Eq_123: (fn byte (word16))
	T_123 (in __inb : ptr32)
Eq_141: (segment "Eq_141" (2D20 byte b2D20))
	T_141 (in 0xA000 : selector)
Eq_175: (fn (memptr (ptr Eq_17) byte) (word16, byte))
	T_175 (in __rol : ptr32)
Eq_215: (fn byte (byte))
	T_215 (in __inb : ptr32)
Eq_221: (union "Eq_221" (cups16 u0) ((memptr (ptr Eq_17) Eq_272) u1))
	T_221 (in di_258 : Eq_221)
	T_222 (in 0x6041 : word16)
	T_228 (in di_258 + 0x0008 : word16)
	T_251 (in di_258 + 0x0600 : word16)
	T_252 (in 0x65BF : word16)
Eq_260: (fn void ())
	T_260 (in msdos_terminate_program20 : ptr32)
	T_261 (in signature of msdos_terminate_program20 : void)
Eq_269: (struct "Eq_269" (FFFFFFFE word16 wFFFFFFFE))
	T_269
Eq_270: (struct "Eq_270" (FFFFFFFA word16 wFFFFFFFA))
	T_270
Eq_271: (union "Eq_271" (ptr16 u0) ((memptr (ptr Eq_75) Eq_270) u1))
	T_271
Eq_272: (struct "Eq_272" 0008 (0 byte b0000))
	T_272
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
T_7: (in msdos_display_string : ptr32)
  Class: Eq_7
  DataType: (ptr Eq_7)
  OrigDataType: (ptr (fn T_13 (T_11, T_12)))
T_8: (in signature of msdos_display_string : void)
  Class: Eq_7
  DataType: (ptr Eq_7)
  OrigDataType: 
T_9: (in ds : selector)
  Class: Eq_9
  DataType: (ptr Eq_9)
  OrigDataType: (ptr (segment))
T_10: (in dx : word16)
  Class: Eq_10
  DataType: word16
  OrigDataType: word16
T_11: (in ds : (ptr Eq_9))
  Class: Eq_9
  DataType: (ptr Eq_9)
  OrigDataType: (ptr (segment))
T_12: (in 0x01EA : word16)
  Class: Eq_10
  DataType: word16
  OrigDataType: word16
T_13: (in msdos_display_string(ds, 0x01EA) : void)
  Class: Eq_13
  DataType: void
  OrigDataType: void
T_14: (in ah_8 : byte)
  Class: Eq_14
  DataType: byte
  OrigDataType: byte
T_15: (in cs : selector)
  Class: Eq_15
  DataType: (ptr Eq_15)
  OrigDataType: (ptr (segment))
T_16: (in SLICE(cs, byte, 8) : byte)
  Class: Eq_14
  DataType: byte
  OrigDataType: byte
T_17: (in ax_10 : (ptr Eq_17))
  Class: Eq_17
  DataType: (ptr Eq_17)
  OrigDataType: word16
T_18: (in 0x10 : byte)
  Class: Eq_18
  DataType: byte
  OrigDataType: byte
T_19: (in ah_8 + 0x10 : byte)
  Class: Eq_19
  DataType: byte
  OrigDataType: byte
T_20: (in DPB(cs, ah_8 + 0x10, 8, 8) : word16)
  Class: Eq_17
  DataType: (ptr Eq_17)
  OrigDataType: word16
T_21: (in ax_13 : (ptr Eq_17))
  Class: Eq_17
  DataType: (ptr Eq_17)
  OrigDataType: word16
T_22: (in 0x20 : byte)
  Class: Eq_22
  DataType: byte
  OrigDataType: byte
T_23: (in ah_8 + 0x20 : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_24: (in DPB(cs, ah_8 + 0x20, 8, 8) : selector)
  Class: Eq_17
  DataType: (ptr Eq_17)
  OrigDataType: (ptr (segment))
T_25: (in ds_11 : (ptr Eq_17))
  Class: Eq_17
  DataType: (ptr Eq_17)
  OrigDataType: (ptr (segment (FFFFFE00 (arr T_263) aFFFFFE00) (FFFFFFFE (arr T_265) aFFFFFFFE) (0 (arr T_267) a0000) (2 (arr T_266) a0002) (200 (arr T_264) a0200)))
T_26: (in es_139 : (ptr Eq_17))
  Class: Eq_17
  DataType: (ptr Eq_17)
  OrigDataType: (ptr (segment (FFFFFE00 (arr T_263) aFFFFFE00) (FFFFFFFE (arr T_265) aFFFFFFFE) (0 (arr T_267) a0000) (2 (arr T_266) a0002) (200 (arr T_264) a0200)))
T_27: (in wLoc02_16 : (memptr (ptr Eq_17) byte))
  Class: Eq_27
  DataType: (memptr (ptr Eq_17) byte)
  OrigDataType: word16
T_28: (in 0xA000 : word16)
  Class: Eq_27
  DataType: (memptr (ptr Eq_17) byte)
  OrigDataType: word16
T_29: (in ax_19 : word16)
  Class: Eq_29
  DataType: word16
  OrigDataType: word16
T_30: (in 0x0000 : word16)
  Class: Eq_29
  DataType: word16
  OrigDataType: word16
T_31: (in ah_21 : uint8)
  Class: Eq_31
  DataType: uint8
  OrigDataType: uint8
T_32: (in 0x00 : byte)
  Class: Eq_31
  DataType: uint8
  OrigDataType: byte
T_33: (in cx_22 : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_34: (in 0x0000 : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_35: (in 0x00 : byte)
  Class: Eq_35
  DataType: byte
  OrigDataType: byte
T_36: (in di : (memptr (ptr Eq_17) byte))
  Class: Eq_36
  DataType: (memptr (ptr Eq_17) byte)
  OrigDataType: (memptr T_17 (struct 0001 (0 T_35 t0000)))
T_37: (in 0x0000 : word16)
  Class: Eq_37
  DataType: word16
  OrigDataType: word16
T_38: (in di + 0x0000 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_39: (in Mem30[ax_10:di + 0x0000:byte] : byte)
  Class: Eq_35
  DataType: byte
  OrigDataType: byte
T_40: (in 0x00 : byte)
  Class: Eq_35
  DataType: byte
  OrigDataType: byte
T_41: (in 0x0000 : word16)
  Class: Eq_41
  DataType: word16
  OrigDataType: word16
T_42: (in di + 0x0000 : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_43: (in Mem31[ax_13:di + 0x0000:byte] : byte)
  Class: Eq_35
  DataType: byte
  OrigDataType: byte
T_44: (in 0x0001 : word16)
  Class: Eq_44
  DataType: word16
  OrigDataType: word16
T_45: (in di + 0x0001 : word16)
  Class: Eq_36
  DataType: (memptr (ptr Eq_17) byte)
  OrigDataType: word16
T_46: (in 0x0001 : word16)
  Class: Eq_46
  DataType: word16
  OrigDataType: word16
T_47: (in cx_22 - 0x0001 : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_48: (in 0x0000 : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_49: (in cx_22 != 0x0000 : bool)
  Class: Eq_49
  DataType: bool
  OrigDataType: bool
T_50: (in __outb : ptr32)
  Class: Eq_50
  DataType: (ptr Eq_50)
  OrigDataType: (ptr (fn T_53 (T_51, T_52)))
T_51: (in 0x03C8 : word16)
  Class: Eq_51
  DataType: word16
  OrigDataType: word16
T_52: (in 0x00 : byte)
  Class: Eq_52
  DataType: byte
  OrigDataType: byte
T_53: (in __outb(0x03C8, 0x00) : void)
  Class: Eq_53
  DataType: void
  OrigDataType: void
T_54: (in __outb : ptr32)
  Class: Eq_54
  DataType: (ptr Eq_54)
  OrigDataType: (ptr (fn T_57 (T_55, T_56)))
T_55: (in 0x03C9 : word16)
  Class: Eq_55
  DataType: word16
  OrigDataType: word16
T_56: (in 0x00 : byte)
  Class: Eq_56
  DataType: byte
  OrigDataType: byte
T_57: (in __outb(0x03C9, 0x00) : void)
  Class: Eq_57
  DataType: void
  OrigDataType: void
T_58: (in al_43 : Eq_58)
  Class: Eq_58
  DataType: Eq_58
  OrigDataType: int8
T_59: (in 0x02 : byte)
  Class: Eq_59
  DataType: uint8
  OrigDataType: uint8
T_60: (in ah_21 >>u 0x02 : word16)
  Class: Eq_58
  DataType: Eq_58
  OrigDataType: uint16
T_61: (in __outb : ptr32)
  Class: Eq_61
  DataType: (ptr Eq_61)
  OrigDataType: (ptr (fn T_63 (T_62, T_58)))
T_62: (in 0x03C9 : word16)
  Class: Eq_62
  DataType: word16
  OrigDataType: word16
T_63: (in __outb(0x03C9, al_43) : void)
  Class: Eq_63
  DataType: void
  OrigDataType: void
T_64: (in __outb : ptr32)
  Class: Eq_64
  DataType: (ptr Eq_64)
  OrigDataType: (ptr (fn T_69 (T_65, T_68)))
T_65: (in 0x03C9 : word16)
  Class: Eq_65
  DataType: word16
  OrigDataType: word16
T_66: (in -al_43 : byte)
  Class: Eq_66
  DataType: int8
  OrigDataType: int8
T_67: (in 0x01 : byte)
  Class: Eq_67
  DataType: byte
  OrigDataType: byte
T_68: (in -al_43 + 0x01 : byte)
  Class: Eq_68
  DataType: byte
  OrigDataType: byte
T_69: (in __outb(0x03C9, -al_43 + 0x01) : void)
  Class: Eq_69
  DataType: void
  OrigDataType: void
T_70: (in 0x01 : byte)
  Class: Eq_70
  DataType: byte
  OrigDataType: byte
T_71: (in ah_21 + 0x01 : byte)
  Class: Eq_31
  DataType: uint8
  OrigDataType: byte
T_72: (in DPB(ax_19, ah_21, 8, 8) : word16)
  Class: Eq_29
  DataType: word16
  OrigDataType: word16
T_73: (in 0x00 : byte)
  Class: Eq_31
  DataType: uint8
  OrigDataType: byte
T_74: (in ah_21 != 0x00 : bool)
  Class: Eq_74
  DataType: bool
  OrigDataType: bool
T_75: (in ss : selector)
  Class: Eq_75
  DataType: (ptr Eq_75)
  OrigDataType: (ptr (segment))
T_76: (in fp : ptr16)
  Class: Eq_76
  DataType: Eq_76
  OrigDataType: (union ((union (ptr16 u0) ((memptr T_75 (struct (FFFFFFFA T_183 tFFFFFFFA))) u1)) u0) ((memptr T_75 (struct (FFFFFFFE T_79 tFFFFFFFE))) u1))
T_77: (in 0x0002 : word16)
  Class: Eq_77
  DataType: word16
  OrigDataType: word16
T_78: (in fp - 0x0002 : word16)
  Class: Eq_78
  DataType: word16
  OrigDataType: word16
T_79: (in Mem52[ss:fp - 0x0002:word16] : word16)
  Class: Eq_29
  DataType: word16
  OrigDataType: word16
T_80: (in wLoc04_215 : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_81: (in wLoc08_219 : word16)
  Class: Eq_81
  DataType: word16
  OrigDataType: word16
T_82: (in bx : word16)
  Class: Eq_81
  DataType: word16
  OrigDataType: word16
T_83: (in ax_118 : int16)
  Class: Eq_83
  DataType: int16
  OrigDataType: int16
T_84: (in di_105 : (memptr (ptr Eq_17) Eq_84))
  Class: Eq_84
  DataType: (memptr (ptr Eq_17) Eq_84)
  OrigDataType: (memptr T_17 (struct 0002 (FFFFFE00 T_87 tFFFFFE00) (FFFFFFFE T_94 tFFFFFFFE) (0 T_104 t0000) (2 T_98 t0002) (200 T_90 t0200)))
T_85: (in 0x0200 : word16)
  Class: Eq_85
  DataType: word16
  OrigDataType: word16
T_86: (in di_105 - 0x0200 : word16)
  Class: Eq_86
  DataType: word16
  OrigDataType: word16
T_87: (in Mem52[ds_11:di_105 - 0x0200:word16] : word16)
  Class: Eq_87
  DataType: word16
  OrigDataType: word16
T_88: (in 0x0200 : word16)
  Class: Eq_88
  DataType: word16
  OrigDataType: word16
T_89: (in di_105 + 0x0200 : word16)
  Class: Eq_89
  DataType: word16
  OrigDataType: word16
T_90: (in Mem52[ds_11:di_105 + 0x0200:word16] : word16)
  Class: Eq_90
  DataType: word16
  OrigDataType: word16
T_91: (in (ds_11->*di_105).w0200 + (ds_11->*di_105).w0200 : word16)
  Class: Eq_91
  DataType: word16
  OrigDataType: word16
T_92: (in 0x0002 : word16)
  Class: Eq_92
  DataType: word16
  OrigDataType: word16
T_93: (in di_105 - 0x0002 : word16)
  Class: Eq_93
  DataType: word16
  OrigDataType: word16
T_94: (in Mem52[ds_11:di_105 - 0x0002:word16] : word16)
  Class: Eq_94
  DataType: word16
  OrigDataType: word16
T_95: (in (ds_11->*di_105).w0200 + (ds_11->*di_105).w0200 + (ds_11->*di_105).w0002 : word16)
  Class: Eq_95
  DataType: word16
  OrigDataType: word16
T_96: (in 0x0002 : word16)
  Class: Eq_96
  DataType: word16
  OrigDataType: word16
T_97: (in di_105 + 0x0002 : word16)
  Class: Eq_97
  DataType: word16
  OrigDataType: word16
T_98: (in Mem52[ds_11:di_105 + 0x0002:word16] : word16)
  Class: Eq_98
  DataType: word16
  OrigDataType: word16
T_99: (in (ds_11->*di_105).w0200 + (ds_11->*di_105).w0200 + (ds_11->*di_105).w0002 + (ds_11->*di_105).w0002 : word16)
  Class: Eq_99
  DataType: int16
  OrigDataType: int16
T_100: (in 0x0001 : word16)
  Class: Eq_100
  DataType: uint16
  OrigDataType: uint16
T_101: (in (ds_11->*di_105).w0200 + (ds_11->*di_105).w0200 + (ds_11->*di_105).w0002 + (ds_11->*di_105).w0002 >> 0x0001 : word16)
  Class: Eq_101
  DataType: int16
  OrigDataType: int16
T_102: (in 0x0000 : word16)
  Class: Eq_102
  DataType: word16
  OrigDataType: word16
T_103: (in di_105 + 0x0000 : word16)
  Class: Eq_103
  DataType: word16
  OrigDataType: word16
T_104: (in Mem52[es_139:di_105 + 0x0000:word16] : word16)
  Class: Eq_104
  DataType: word16
  OrigDataType: word16
T_105: (in ((ds_11->*di_105).w0200 + (ds_11->*di_105).w0200 + (ds_11->*di_105).w0002 + (ds_11->*di_105).w0002 >> 0x0001) - (es_139->*di_105).w0000 : word16)
  Class: Eq_83
  DataType: int16
  OrigDataType: word16
T_106: (in 0x0005 : word16)
  Class: Eq_106
  DataType: uint16
  OrigDataType: uint16
T_107: (in ax_118 >> 0x0005 : word16)
  Class: Eq_107
  DataType: int16
  OrigDataType: int16
T_108: (in ax_118 - (ax_118 >> 0x0005) : word16)
  Class: Eq_104
  DataType: word16
  OrigDataType: word16
T_109: (in 0x0000 : word16)
  Class: Eq_109
  DataType: word16
  OrigDataType: word16
T_110: (in di_105 + 0x0000 : word16)
  Class: Eq_110
  DataType: word16
  OrigDataType: word16
T_111: (in Mem123[es_139:di_105 + 0x0000:word16] : word16)
  Class: Eq_104
  DataType: word16
  OrigDataType: word16
T_112: (in cx_108 : cui16)
  Class: Eq_112
  DataType: cui16
  OrigDataType: word16
T_113: (in 0x0001 : word16)
  Class: Eq_113
  DataType: word16
  OrigDataType: word16
T_114: (in cx_108 - 0x0001 : word16)
  Class: Eq_112
  DataType: cui16
  OrigDataType: word16
T_115: (in 0x0002 : word16)
  Class: Eq_115
  DataType: word16
  OrigDataType: word16
T_116: (in di_105 + 0x0002 : word16)
  Class: Eq_84
  DataType: (memptr (ptr Eq_17) Eq_84)
  OrigDataType: word16
T_117: (in ch_126 : byte)
  Class: Eq_117
  DataType: byte
  OrigDataType: byte
T_118: (in SLICE(cx_108, byte, 8) : byte)
  Class: Eq_118
  DataType: byte
  OrigDataType: byte
T_119: (in 0x01 : byte)
  Class: Eq_119
  DataType: byte
  OrigDataType: byte
T_120: (in SLICE(cx_108, byte, 8) + 0x01 : byte)
  Class: Eq_117
  DataType: byte
  OrigDataType: byte
T_121: (in 0x0000 : word16)
  Class: Eq_112
  DataType: cui16
  OrigDataType: word16
T_122: (in cx_108 != 0x0000 : bool)
  Class: Eq_122
  DataType: bool
  OrigDataType: bool
T_123: (in __inb : ptr32)
  Class: Eq_123
  DataType: (ptr Eq_123)
  OrigDataType: (ptr (fn T_125 (T_124)))
T_124: (in 0x03DA : word16)
  Class: Eq_124
  DataType: word16
  OrigDataType: word16
T_125: (in __inb(0x03DA) : byte)
  Class: Eq_125
  DataType: byte
  OrigDataType: byte
T_126: (in 0x08 : byte)
  Class: Eq_126
  DataType: byte
  OrigDataType: byte
T_127: (in __inb(0x03DA) & 0x08 : byte)
  Class: Eq_127
  DataType: byte
  OrigDataType: byte
T_128: (in 0x00 : byte)
  Class: Eq_127
  DataType: byte
  OrigDataType: byte
T_129: (in (__inb(0x03DA) & 0x08) == 0x00 : bool)
  Class: Eq_129
  DataType: bool
  OrigDataType: bool
T_130: (in si_141 : (memptr (ptr Eq_17) word16))
  Class: Eq_130
  DataType: (memptr (ptr Eq_17) word16)
  OrigDataType: (memptr T_26 (struct 0002 (0 T_158 t0000)))
T_131: (in 0x0000 : word16)
  Class: Eq_130
  DataType: (memptr (ptr Eq_17) word16)
  OrigDataType: word16
T_132: (in di_144 : (memptr (ptr Eq_141) byte))
  Class: Eq_132
  DataType: (memptr (ptr Eq_141) byte)
  OrigDataType: (memptr T_141 (struct 0001 (0 T_144 t0000)))
T_133: (in 0x2D20 : word16)
  Class: Eq_132
  DataType: (memptr (ptr Eq_141) byte)
  OrigDataType: word16
T_134: (in dx_169 : int16)
  Class: Eq_134
  DataType: int16
  OrigDataType: int16
T_135: (in 0x00FF : word16)
  Class: Eq_134
  DataType: int16
  OrigDataType: int16
T_136: (in dx_169 <= 0x00FF : bool)
  Class: Eq_136
  DataType: bool
  OrigDataType: bool
T_137: (in 0x00 : byte)
  Class: Eq_137
  DataType: byte
  OrigDataType: byte
T_138: (in dl_170 : byte)
  Class: Eq_137
  DataType: byte
  OrigDataType: byte
T_139: (in 0x00 : byte)
  Class: Eq_139
  DataType: byte
  OrigDataType: byte
T_140: (in DPB(dx_169, 0x00, 0, 8) : word16)
  Class: Eq_134
  DataType: int16
  OrigDataType: word16
T_141: (in 0xA000 : selector)
  Class: Eq_141
  DataType: (ptr Eq_141)
  OrigDataType: (ptr (segment))
T_142: (in 0x0000 : word16)
  Class: Eq_142
  DataType: word16
  OrigDataType: word16
T_143: (in di_144 + 0x0000 : word16)
  Class: Eq_143
  DataType: word16
  OrigDataType: word16
T_144: (in Mem179[0xA000:di_144 + 0x0000:byte] : byte)
  Class: Eq_137
  DataType: byte
  OrigDataType: byte
T_145: (in 0x0001 : word16)
  Class: Eq_145
  DataType: word16
  OrigDataType: word16
T_146: (in cx_108 - 0x0001 : word16)
  Class: Eq_112
  DataType: cui16
  OrigDataType: word16
T_147: (in 0x0001 : word16)
  Class: Eq_147
  DataType: word16
  OrigDataType: word16
T_148: (in di_144 + 0x0001 : word16)
  Class: Eq_132
  DataType: (memptr (ptr Eq_141) byte)
  OrigDataType: word16
T_149: (in SLICE(cx_108, byte, 8) : byte)
  Class: Eq_117
  DataType: byte
  OrigDataType: byte
T_150: (in 0xFFFF : cui16)
  Class: Eq_112
  DataType: cui16
  OrigDataType: cui16
T_151: (in cx_108 != 0xFFFF : bool)
  Class: Eq_151
  DataType: bool
  OrigDataType: bool
T_152: (in 0xFF : byte)
  Class: Eq_137
  DataType: byte
  OrigDataType: byte
T_153: (in 0x0002 : word16)
  Class: Eq_153
  DataType: word16
  OrigDataType: word16
T_154: (in si_141 + 0x0002 : word16)
  Class: Eq_130
  DataType: (memptr (ptr Eq_17) word16)
  OrigDataType: word16
T_155: (in 0x0080 : word16)
  Class: Eq_155
  DataType: word16
  OrigDataType: word16
T_156: (in 0x0000 : word16)
  Class: Eq_156
  DataType: word16
  OrigDataType: word16
T_157: (in si_141 + 0x0000 : word16)
  Class: Eq_157
  DataType: word16
  OrigDataType: word16
T_158: (in Mem123[es_139:si_141 + 0x0000:word16] : word16)
  Class: Eq_158
  DataType: word16
  OrigDataType: word16
T_159: (in 0x0000 : word16)
  Class: Eq_159
  DataType: word16
  OrigDataType: word16
T_160: (in si_141 + 0x0000 : word16)
  Class: Eq_160
  DataType: word16
  OrigDataType: word16
T_161: (in Mem123[es_139:si_141 + 0x0000:word16] : word16)
  Class: Eq_158
  DataType: word16
  OrigDataType: word16
T_162: (in es_139->*si_141 - es_139->*si_141 : word16)
  Class: Eq_162
  DataType: word16
  OrigDataType: word16
T_163: (in 0x0080 - (es_139->*si_141 - es_139->*si_141) : word16)
  Class: Eq_134
  DataType: int16
  OrigDataType: word16
T_164: (in (byte) dx_169 : byte)
  Class: Eq_137
  DataType: byte
  OrigDataType: byte
T_165: (in 0x0000 : word16)
  Class: Eq_134
  DataType: int16
  OrigDataType: int16
T_166: (in dx_169 >= 0x0000 : bool)
  Class: Eq_166
  DataType: bool
  OrigDataType: bool
T_167: (in 0x0040 : word16)
  Class: Eq_167
  DataType: word16
  OrigDataType: word16
T_168: (in di_144 + 0x0040 : word16)
  Class: Eq_132
  DataType: (memptr (ptr Eq_141) byte)
  OrigDataType: word16
T_169: (in 0x0000 : word16)
  Class: Eq_130
  DataType: (memptr (ptr Eq_17) word16)
  OrigDataType: word16
T_170: (in si_141 != Eq_17::a0000 : bool)
  Class: Eq_170
  DataType: bool
  OrigDataType: bool
T_171: (in 0x00 : byte)
  Class: Eq_171
  DataType: byte
  OrigDataType: byte
T_172: (in ch_126 + 0x00 : byte)
  Class: Eq_172
  DataType: byte
  OrigDataType: byte
T_173: (in DPB(cx_108, ch_126 + 0x00, 8, 8) : word16)
  Class: Eq_112
  DataType: cui16
  OrigDataType: word16
T_174: (in ax_206 : word16)
  Class: Eq_27
  DataType: (memptr (ptr Eq_17) byte)
  OrigDataType: (memptr T_26 (struct (0 T_208 t0000)))
T_175: (in __rol : ptr32)
  Class: Eq_175
  DataType: (ptr Eq_175)
  OrigDataType: (ptr (fn T_179 (T_177, T_178)))
T_176: (in 0x6784 : word16)
  Class: Eq_176
  DataType: word16
  OrigDataType: word16
T_177: (in wLoc02_16 + 0x6784 : word16)
  Class: Eq_177
  DataType: word16
  OrigDataType: word16
T_178: (in 0x01 : byte)
  Class: Eq_178
  DataType: byte
  OrigDataType: byte
T_179: (in __rol(wLoc02_16 + 0x6784, 0x01) : word16)
  Class: Eq_27
  DataType: (memptr (ptr Eq_17) byte)
  OrigDataType: word16
T_180: (in 0x03C9 : word16)
  Class: Eq_180
  DataType: word16
  OrigDataType: word16
T_181: (in 0x0006 : word16)
  Class: Eq_181
  DataType: word16
  OrigDataType: word16
T_182: (in fp - 0x0006 : word16)
  Class: Eq_182
  DataType: word16
  OrigDataType: word16
T_183: (in Mem217[ss:fp - 0x0006:word16] : word16)
  Class: Eq_180
  DataType: word16
  OrigDataType: word16
T_184: (in cx_209 : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_185: (in 0x0001 : word16)
  Class: Eq_185
  DataType: word16
  OrigDataType: word16
T_186: (in wLoc04_215 + 0x0001 : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_187: (in al_207 : byte)
  Class: Eq_187
  DataType: byte
  OrigDataType: byte
T_188: (in (byte) ax_206 : byte)
  Class: Eq_187
  DataType: byte
  OrigDataType: byte
T_189: (in ch_210 : byte)
  Class: Eq_189
  DataType: byte
  OrigDataType: byte
T_190: (in SLICE(cx_209, byte, 8) : byte)
  Class: Eq_189
  DataType: byte
  OrigDataType: byte
T_191: (in cl_211 : bcu8)
  Class: Eq_191
  DataType: bcu8
  OrigDataType: bcu8
T_192: (in (byte) cx_209 : byte)
  Class: Eq_191
  DataType: bcu8
  OrigDataType: byte
T_193: (in 0x03 : byte)
  Class: Eq_193
  DataType: byte
  OrigDataType: byte
T_194: (in cl_211 & 0x03 : byte)
  Class: Eq_194
  DataType: byte
  OrigDataType: byte
T_195: (in 0x00 : byte)
  Class: Eq_194
  DataType: byte
  OrigDataType: byte
T_196: (in (cl_211 & 0x03) != 0x00 : bool)
  Class: Eq_196
  DataType: bool
  OrigDataType: bool
T_197: (in bx_237 : (memptr (ptr Eq_141) byte))
  Class: Eq_197
  DataType: (memptr (ptr Eq_141) byte)
  OrigDataType: (memptr T_141 (struct 0001 (0 T_244 t0000)))
T_198: (in 0x03 : byte)
  Class: Eq_198
  DataType: byte
  OrigDataType: byte
T_199: (in ch_210 & 0x03 : byte)
  Class: Eq_199
  DataType: uint8
  OrigDataType: uint8
T_200: (in 0x0A : byte)
  Class: Eq_200
  DataType: uint8
  OrigDataType: uint8
T_201: (in (ch_210 & 0x03) *u 0x0A : uint16)
  Class: Eq_201
  DataType: uint16
  OrigDataType: uint16
T_202: (in (byte) ((ch_210 & 0x03) *u 0x0A) : byte)
  Class: Eq_202
  DataType: byte
  OrigDataType: byte
T_203: (in DPB(wLoc08_219, (byte) ((ch_210 & 0x03) *u 0x0A), 8, 8) : word16)
  Class: Eq_197
  DataType: (memptr (ptr Eq_141) byte)
  OrigDataType: word16
T_204: (in 0x64 : byte)
  Class: Eq_191
  DataType: bcu8
  OrigDataType: bcu8
T_205: (in cl_211 >u 0x64 : bool)
  Class: Eq_205
  DataType: bool
  OrigDataType: bool
T_206: (in 0x0000 : word16)
  Class: Eq_206
  DataType: word16
  OrigDataType: word16
T_207: (in ax_206 + 0x0000 : word16)
  Class: Eq_207
  DataType: word16
  OrigDataType: word16
T_208: (in Mem217[es_139:ax_206 + 0x0000:byte] : byte)
  Class: Eq_208
  DataType: byte
  OrigDataType: byte
T_209: (in 0x07 : byte)
  Class: Eq_209
  DataType: byte
  OrigDataType: byte
T_210: (in al_207 & 0x07 : byte)
  Class: Eq_210
  DataType: byte
  OrigDataType: byte
T_211: (in es_139->*ax_206 + (al_207 & 0x07) : byte)
  Class: Eq_208
  DataType: byte
  OrigDataType: byte
T_212: (in 0x0000 : word16)
  Class: Eq_212
  DataType: word16
  OrigDataType: word16
T_213: (in ax_206 + 0x0000 : word16)
  Class: Eq_213
  DataType: word16
  OrigDataType: word16
T_214: (in Mem302[es_139:ax_206 + 0x0000:byte] : byte)
  Class: Eq_208
  DataType: byte
  OrigDataType: byte
T_215: (in __inb : ptr32)
  Class: Eq_215
  DataType: (ptr Eq_215)
  OrigDataType: (ptr (fn T_217 (T_216)))
T_216: (in 0x60 : byte)
  Class: Eq_216
  DataType: byte
  OrigDataType: byte
T_217: (in __inb(0x60) : byte)
  Class: Eq_217
  DataType: byte
  OrigDataType: byte
T_218: (in (int16) __inb(0x60) : int16)
  Class: Eq_218
  DataType: int16
  OrigDataType: int16
T_219: (in 0x0001 : word16)
  Class: Eq_218
  DataType: int16
  OrigDataType: word16
T_220: (in (int16) __inb(0x60) != 0x0001 : bool)
  Class: Eq_220
  DataType: bool
  OrigDataType: bool
T_221: (in di_258 : Eq_221)
  Class: Eq_221
  DataType: Eq_221
  OrigDataType: (union (cups16 u0) ((memptr T_25 (struct 0008 (0 T_236 t0000))) u1))
T_222: (in 0x6041 : word16)
  Class: Eq_221
  DataType: cups16
  OrigDataType: word16
T_223: (in 0x0001 : word16)
  Class: Eq_223
  DataType: word16
  OrigDataType: word16
T_224: (in bx_237 + 0x0001 : word16)
  Class: Eq_197
  DataType: (memptr (ptr Eq_141) byte)
  OrigDataType: word16
T_225: (in bh_284 : byte)
  Class: Eq_225
  DataType: byte
  OrigDataType: byte
T_226: (in SLICE(bx_237, byte, 8) : byte)
  Class: Eq_225
  DataType: byte
  OrigDataType: byte
T_227: (in 0x0008 : word16)
  Class: Eq_227
  DataType: word16
  OrigDataType: word16
T_228: (in di_258 + 0x0008 : word16)
  Class: Eq_221
  DataType: Eq_221
  OrigDataType: word16
T_229: (in cx_268 : word16)
  Class: Eq_229
  DataType: word16
  OrigDataType: word16
T_230: (in 0x0001 : word16)
  Class: Eq_230
  DataType: word16
  OrigDataType: word16
T_231: (in cx_268 - 0x0001 : word16)
  Class: Eq_229
  DataType: word16
  OrigDataType: word16
T_232: (in 0x0000 : word16)
  Class: Eq_229
  DataType: word16
  OrigDataType: word16
T_233: (in cx_268 != 0x0000 : bool)
  Class: Eq_233
  DataType: bool
  OrigDataType: bool
T_234: (in 0x0000 : word16)
  Class: Eq_234
  DataType: word16
  OrigDataType: word16
T_235: (in di_258 + 0x0000 : word16)
  Class: Eq_235
  DataType: word16
  OrigDataType: word16
T_236: (in Mem217[ds_11:di_258 + 0x0000:byte] : byte)
  Class: Eq_236
  DataType: byte
  OrigDataType: byte
T_237: (in 0x01 : byte)
  Class: Eq_237
  DataType: byte
  OrigDataType: byte
T_238: (in Mem217[ds_11:di_258 + 0x0000:byte] + 0x01 : byte)
  Class: Eq_236
  DataType: byte
  OrigDataType: byte
T_239: (in 0x0000 : word16)
  Class: Eq_239
  DataType: word16
  OrigDataType: word16
T_240: (in di_258 + 0x0000 : word16)
  Class: Eq_240
  DataType: word16
  OrigDataType: word16
T_241: (in Mem297[ds_11:di_258 + 0x0000:byte] : byte)
  Class: Eq_236
  DataType: byte
  OrigDataType: byte
T_242: (in 0x0000 : word16)
  Class: Eq_242
  DataType: word16
  OrigDataType: word16
T_243: (in bx_237 + 0x0000 : word16)
  Class: Eq_243
  DataType: word16
  OrigDataType: word16
T_244: (in Mem217[0xA000:bx_237 + 0x0000:byte] : byte)
  Class: Eq_244
  DataType: byte
  OrigDataType: byte
T_245: (in 0x00 : byte)
  Class: Eq_244
  DataType: byte
  OrigDataType: byte
T_246: (in 0xA000->*bx_237 == 0x00 : bool)
  Class: Eq_246
  DataType: bool
  OrigDataType: bool
T_247: (in 0x01 : byte)
  Class: Eq_247
  DataType: byte
  OrigDataType: byte
T_248: (in bh_284 + 0x01 : byte)
  Class: Eq_248
  DataType: byte
  OrigDataType: byte
T_249: (in DPB(bx_237, bh_284 + 0x01, 8, 8) : word16)
  Class: Eq_197
  DataType: (memptr (ptr Eq_141) byte)
  OrigDataType: word16
T_250: (in 0x0600 : word16)
  Class: Eq_250
  DataType: word16
  OrigDataType: word16
T_251: (in di_258 + 0x0600 : word16)
  Class: Eq_221
  DataType: Eq_221
  OrigDataType: word16
T_252: (in 0x65BF : word16)
  Class: Eq_221
  DataType: cups16
  OrigDataType: cups16
T_253: (in di_258 <u 0x65BF : bool)
  Class: Eq_253
  DataType: bool
  OrigDataType: bool
T_254: (in 0x0040 : word16)
  Class: Eq_229
  DataType: word16
  OrigDataType: word16
T_255: (in 0x0000 : word16)
  Class: Eq_84
  DataType: (memptr (ptr Eq_17) Eq_84)
  OrigDataType: word16
T_256: (in 0x8000 : word16)
  Class: Eq_112
  DataType: cui16
  OrigDataType: word16
T_257: (in bios_video_set_mode : ptr32)
  Class: Eq_2
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (fn T_259 (T_258)))
T_258: (in 0x03 : byte)
  Class: Eq_4
  DataType: byte
  OrigDataType: byte
T_259: (in bios_video_set_mode(0x03) : void)
  Class: Eq_6
  DataType: void
  OrigDataType: void
T_260: (in msdos_terminate_program20 : ptr32)
  Class: Eq_260
  DataType: (ptr Eq_260)
  OrigDataType: (ptr (fn T_262 ()))
T_261: (in signature of msdos_terminate_program20 : void)
  Class: Eq_260
  DataType: (ptr Eq_260)
  OrigDataType: 
T_262: (in msdos_terminate_program20() : void)
  Class: Eq_262
  DataType: void
  OrigDataType: void
T_263:
  Class: Eq_263
  DataType: word16
  OrigDataType: (struct 0002 (0 T_87 t0000))
T_264:
  Class: Eq_264
  DataType: word16
  OrigDataType: (struct 0002 (0 T_90 t0000))
T_265:
  Class: Eq_265
  DataType: word16
  OrigDataType: (struct 0002 (0 T_94 t0000))
T_266:
  Class: Eq_266
  DataType: word16
  OrigDataType: (struct 0002 (0 T_98 t0000))
T_267:
  Class: Eq_267
  DataType: word16
  OrigDataType: (struct 0002 (0 T_104 t0000))
T_268:
  Class: Eq_267
  DataType: word16
  OrigDataType: (struct 0002 (0 T_111 t0000))
T_269:
  Class: Eq_269
  DataType: Eq_269
  OrigDataType: 
T_270:
  Class: Eq_270
  DataType: Eq_270
  OrigDataType: 
T_271:
  Class: Eq_271
  DataType: Eq_271
  OrigDataType: 
T_272:
  Class: Eq_272
  DataType: Eq_272
  OrigDataType: 
*/
typedef Eq_141 Eq_1struct Globals {
	Eq_141 * ptrFFFA0000;	// FFFA0000
} Eq_1;

typedef void (Eq_2)(byte);

typedef void (Eq_7)(Eq_9 *, word16);

typedef struct Eq_9 {
} Eq_9;

typedef struct Eq_15 {
} Eq_15;

typedef  Eq_17[][][][][]struct Eq_17 {
	byte bFFFFA000;	// FFFFA000
	word16 aFFFFFE00[];	// FFFFFE00
	word16 aFFFFFFFE[];	// FFFFFFFE
	word16 a0000[];	// 0
	word16 a0002[];	// 2
	word16 a0200[];	// 200
	byte bA000;	// A000
} Eq_17;

typedef void (Eq_50)(word16, byte);

typedef void (Eq_54)(word16, byte);

typedef union Eq_58 {
	int8 u0;
	uint16 u1;
} Eq_58;

typedef void (Eq_61)(word16, Eq_58);

typedef void (Eq_64)(word16, byte);

typedef struct Eq_75 {
} Eq_75;

typedef union Eq_76 {
	Eq_269 Eq_75::* u0;
	Eq_271 u1;
} Eq_76;

typedef struct Eq_84 {	// size: 2 2
	word16 wFFFFFE00;	// FFFFFE00
	word16 wFFFFFFFE;	// FFFFFFFE
	word16 w0000;	// 0
	word16 w0002;	// 2
	word16 w0200;	// 200
} Eq_84;

typedef byte (Eq_123)(word16);

typedef struct Eq_141 {
	byte b2D20;	// 2D20
} Eq_141;

typedef byte Eq_17::* (Eq_175)(word16, byte);

typedef byte (Eq_215)(byte);

typedef union Eq_221 {
	cups16 u0;
	Eq_272 Eq_17::* u1;
} Eq_221;

typedef void (Eq_260)();

typedef struct Eq_269 {
	word16 wFFFFFFFE;	// FFFFFFFE
} Eq_269;

typedef struct Eq_270 {
	word16 wFFFFFFFA;	// FFFFFFFA
} Eq_270;

typedef union Eq_271 {
	ptr16 u0;
	Eq_270 Eq_75::* u1;
} Eq_271;

typedef struct Eq_272 {	// size: 8 8
	byte b0000;	// 0
} Eq_272;

