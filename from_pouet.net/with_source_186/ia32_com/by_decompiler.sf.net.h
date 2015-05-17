// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_186/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_104) ptrFFFA0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_7: (struct "Eq_7" 0001 (0 int16 w0000))
	T_7 (in bx_6 : (memptr (ptr Eq_27) Eq_7))
	T_12 (in DPB(bx, 0xF0, 8, 8) + 0x0001 : word16)
	T_19 (in bx_14 : (memptr (ptr Eq_27) Eq_7))
	T_45 (in bx_24 + 0x0001 : word16)
Eq_20: (segment "Eq_20" (200 int16 w0200))
	T_20 (in ss : selector)
Eq_23: (fn Eq_31 (real16))
	T_23 (in sin : ptr32)
Eq_26: (union "Eq_26" (real16 u0) (real64 u1))
	T_26 (in (real64) ss->w0200 : real64)
Eq_27: (segment "Eq_27" (0 (arr word16) a0000) (1AA Eq_29 t01AA) (1AC Eq_33 t01AC))
	T_27 (in ds : (ptr Eq_27))
Eq_29: (union "Eq_29" (real16 u0) (real32 u1))
	T_29 (in Mem16[ds:0x01AA:real32] : real32)
Eq_31: (union "Eq_31" (real16 u0) (real64 u1))
	T_31 (in sin((real64) ss->w0200 * ds->t01AA) : real64)
Eq_33: (union "Eq_33" (real16 u0) (real32 u1))
	T_33 (in Mem16[ds:0x01AC:real32] : real32)
Eq_53: (fn void (word16, byte))
	T_53 (in __outb : ptr32)
Eq_79: (fn void (word16, byte))
	T_79 (in __outb : ptr32)
Eq_82: (fn void (word16, byte))
	T_82 (in __outb : ptr32)
Eq_85: (fn void (word16, byte))
	T_85 (in __outb : ptr32)
Eq_104: (segment "Eq_104" (0 Eq_105 t0000))
	T_104 (in 0xA000 : selector)
Eq_105: (struct "Eq_105" 0001 (0 byte b0000) (1 byte b0001) (2 byte b0002))
	T_105 (in di_107 : (memptr (ptr Eq_104) Eq_105))
	T_128 (in di_107 + 0x0001 : word16)
	T_193 (in 0x0000 : word16)
Eq_188: (fn byte (byte))
	T_188 (in __inb : ptr32)
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
T_7: (in bx_6 : (memptr (ptr Eq_27) Eq_7))
  Class: Eq_7
  DataType: (memptr (ptr Eq_27) Eq_7)
  OrigDataType: word16
T_8: (in bx : word16)
  Class: Eq_8
  DataType: word16
  OrigDataType: word16
T_9: (in 0xF0 : byte)
  Class: Eq_9
  DataType: byte
  OrigDataType: byte
T_10: (in DPB(bx, 0xF0, 8, 8) : word16)
  Class: Eq_10
  DataType: word16
  OrigDataType: word16
T_11: (in 0x0001 : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_12: (in DPB(bx, 0xF0, 8, 8) + 0x0001 : word16)
  Class: Eq_7
  DataType: (memptr (ptr Eq_27) Eq_7)
  OrigDataType: word16
T_13: (in ebx_13 : word32)
  Class: Eq_13
  DataType: word32
  OrigDataType: word32
T_14: (in ebx : word32)
  Class: Eq_14
  DataType: word32
  OrigDataType: word32
T_15: (in 0xF0 : byte)
  Class: Eq_15
  DataType: byte
  OrigDataType: byte
T_16: (in DPB(ebx, 0xF0, 8, 8) : word32)
  Class: Eq_13
  DataType: word32
  OrigDataType: word32
T_17: (in cx_15 : int16)
  Class: Eq_17
  DataType: int16
  OrigDataType: word16
T_18: (in 0x0100 : word16)
  Class: Eq_17
  DataType: int16
  OrigDataType: word16
T_19: (in bx_14 : (memptr (ptr Eq_27) Eq_7))
  Class: Eq_7
  DataType: (memptr (ptr Eq_27) Eq_7)
  OrigDataType: (memptr T_27 (struct 0001 (0 T_38 t0000)))
T_20: (in ss : selector)
  Class: Eq_20
  DataType: (ptr Eq_20)
  OrigDataType: (ptr (segment (200 T_17 t0200)))
T_21: (in 0x0200 : word16)
  Class: Eq_21
  DataType: (memptr (ptr Eq_20) int16)
  OrigDataType: (memptr T_20 (struct (0 T_22 t0000)))
T_22: (in Mem16[ss:0x0200:word16] : word16)
  Class: Eq_17
  DataType: int16
  OrigDataType: word16
T_23: (in sin : ptr32)
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: (ptr (fn T_31 (T_30)))
T_24: (in 0x0200 : word16)
  Class: Eq_24
  DataType: (memptr (ptr Eq_20) int16)
  OrigDataType: (memptr T_20 (struct (0 T_25 t0000)))
T_25: (in Mem16[ss:0x0200:int16] : int16)
  Class: Eq_17
  DataType: int16
  OrigDataType: int16
T_26: (in (real64) ss->w0200 : real64)
  Class: Eq_26
  DataType: Eq_26
  OrigDataType: (union (real16 u0) (real64 u1))
T_27: (in ds : (ptr Eq_27))
  Class: Eq_27
  DataType: (ptr Eq_27)
  OrigDataType: (ptr (segment (0 (arr T_197) a0000) (1AA T_29 t01AA) (1AC T_33 t01AC)))
T_28: (in 0x01AA : word16)
  Class: Eq_28
  DataType: (memptr (ptr Eq_27) Eq_29)
  OrigDataType: (memptr T_27 (struct (0 T_29 t0000)))
T_29: (in Mem16[ds:0x01AA:real32] : real32)
  Class: Eq_29
  DataType: Eq_29
  OrigDataType: (union (real16 u0) (real32 u1))
T_30: (in (real64) ss->w0200 * ds->t01AA : word16)
  Class: Eq_30
  DataType: real16
  OrigDataType: real16
T_31: (in sin((real64) ss->w0200 * ds->t01AA) : real64)
  Class: Eq_31
  DataType: Eq_31
  OrigDataType: (union (real16 u0) (real64 u1))
T_32: (in 0x01AC : word16)
  Class: Eq_32
  DataType: (memptr (ptr Eq_27) Eq_33)
  OrigDataType: (memptr T_27 (struct (0 T_33 t0000)))
T_33: (in Mem16[ds:0x01AC:real32] : real32)
  Class: Eq_33
  DataType: Eq_33
  OrigDataType: (union (real16 u0) (real32 u1))
T_34: (in sin((real64) ss->w0200 * ds->t01AA) * ds->t01AC : word16)
  Class: Eq_34
  DataType: real16
  OrigDataType: real16
T_35: (in (int16) (sin((real64) ss->w0200 * ds->t01AA) * ds->t01AC) : int16)
  Class: Eq_35
  DataType: int16
  OrigDataType: int16
T_36: (in 0x0000 : word16)
  Class: Eq_36
  DataType: word16
  OrigDataType: word16
T_37: (in bx_14 + 0x0000 : word16)
  Class: Eq_37
  DataType: word16
  OrigDataType: word16
T_38: (in Mem23[ds:bx_14 + 0x0000:int16] : int16)
  Class: Eq_35
  DataType: int16
  OrigDataType: int16
T_39: (in bx_24 : word16)
  Class: Eq_39
  DataType: word16
  OrigDataType: word16
T_40: (in 0x0000 : word16)
  Class: Eq_40
  DataType: word16
  OrigDataType: word16
T_41: (in bx_14 + 0x0000 : word16)
  Class: Eq_39
  DataType: word16
  OrigDataType: word16
T_42: (in 0x0001 : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_43: (in cx_15 - 0x0001 : word16)
  Class: Eq_17
  DataType: int16
  OrigDataType: word16
T_44: (in 0x0001 : word16)
  Class: Eq_44
  DataType: word16
  OrigDataType: word16
T_45: (in bx_24 + 0x0001 : word16)
  Class: Eq_7
  DataType: (memptr (ptr Eq_27) Eq_7)
  OrigDataType: word16
T_46: (in ebx_188 : word32)
  Class: Eq_13
  DataType: word32
  OrigDataType: word32
T_47: (in bx_24 + 0x0001 : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_48: (in DPB(ebx_188, bx_24 + 0x0001, 0, 16) : word32)
  Class: Eq_13
  DataType: word32
  OrigDataType: word32
T_49: (in cl_32 : bcu8)
  Class: Eq_49
  DataType: bcu8
  OrigDataType: bcu8
T_50: (in (byte) cx_15 : byte)
  Class: Eq_49
  DataType: bcu8
  OrigDataType: byte
T_51: (in 0x0000 : word16)
  Class: Eq_17
  DataType: int16
  OrigDataType: word16
T_52: (in cx_15 != 0x0000 : bool)
  Class: Eq_52
  DataType: bool
  OrigDataType: bool
T_53: (in __outb : ptr32)
  Class: Eq_53
  DataType: (ptr Eq_53)
  OrigDataType: (ptr (fn T_56 (T_54, T_55)))
T_54: (in 0x03C8 : word16)
  Class: Eq_54
  DataType: word16
  OrigDataType: word16
T_55: (in 0x00 : byte)
  Class: Eq_55
  DataType: byte
  OrigDataType: byte
T_56: (in __outb(0x03C8, 0x00) : void)
  Class: Eq_56
  DataType: void
  OrigDataType: void
T_57: (in edx_109 : ui32)
  Class: Eq_57
  DataType: ui32
  OrigDataType: ui32
T_58: (in edx : word32)
  Class: Eq_58
  DataType: word32
  OrigDataType: word32
T_59: (in 0x03C9 : word16)
  Class: Eq_59
  DataType: word16
  OrigDataType: word16
T_60: (in DPB(edx, 0x03C9, 0, 16) : word32)
  Class: Eq_57
  DataType: ui32
  OrigDataType: word32
T_61: (in cx_39 : word16)
  Class: Eq_61
  DataType: word16
  OrigDataType: word16
T_62: (in 0x01 : byte)
  Class: Eq_62
  DataType: byte
  OrigDataType: byte
T_63: (in DPB(cx_15, 0x01, 8, 8) : word16)
  Class: Eq_61
  DataType: word16
  OrigDataType: word16
T_64: (in di_40 : word16)
  Class: Eq_64
  DataType: word16
  OrigDataType: word16
T_65: (in 0x0000 : word16)
  Class: Eq_64
  DataType: word16
  OrigDataType: word16
T_66: (in bh_180 : byte)
  Class: Eq_66
  DataType: byte
  OrigDataType: byte
T_67: (in 0x00 : byte)
  Class: Eq_66
  DataType: byte
  OrigDataType: byte
T_68: (in ebx_101 : word32)
  Class: Eq_68
  DataType: word32
  OrigDataType: word32
T_69: (in 0x0000 : word16)
  Class: Eq_69
  DataType: word16
  OrigDataType: word16
T_70: (in DPB(ebx_188, 0x0000, 0, 16) : word32)
  Class: Eq_68
  DataType: word32
  OrigDataType: word32
T_71: (in bl_183 : byte)
  Class: Eq_66
  DataType: byte
  OrigDataType: byte
T_72: (in 0x00 : byte)
  Class: Eq_66
  DataType: byte
  OrigDataType: byte
T_73: (in al_58 : byte)
  Class: Eq_66
  DataType: byte
  OrigDataType: byte
T_74: (in ah_186 : byte)
  Class: Eq_66
  DataType: byte
  OrigDataType: byte
T_75: (in 0xE1 : byte)
  Class: Eq_49
  DataType: bcu8
  OrigDataType: bcu8
T_76: (in cl_32 <u 0xE1 : bool)
  Class: Eq_76
  DataType: bool
  OrigDataType: bool
T_77: (in DPB(ebx_101, al_58, 0, 8) : word32)
  Class: Eq_68
  DataType: word32
  OrigDataType: word32
T_78: (in DPB(ebx_101, al_58, 8, 8) : word32)
  Class: Eq_68
  DataType: word32
  OrigDataType: word32
T_79: (in __outb : ptr32)
  Class: Eq_79
  DataType: (ptr Eq_79)
  OrigDataType: (ptr (fn T_81 (T_80, T_66)))
T_80: (in 0x03C9 : word16)
  Class: Eq_80
  DataType: word16
  OrigDataType: word16
T_81: (in __outb(0x03C9, bh_180) : void)
  Class: Eq_81
  DataType: void
  OrigDataType: void
T_82: (in __outb : ptr32)
  Class: Eq_82
  DataType: (ptr Eq_82)
  OrigDataType: (ptr (fn T_84 (T_83, T_71)))
T_83: (in 0x03C9 : word16)
  Class: Eq_83
  DataType: word16
  OrigDataType: word16
T_84: (in __outb(0x03C9, bl_183) : void)
  Class: Eq_84
  DataType: void
  OrigDataType: void
T_85: (in __outb : ptr32)
  Class: Eq_85
  DataType: (ptr Eq_85)
  OrigDataType: (ptr (fn T_87 (T_86, T_74)))
T_86: (in 0x03C9 : word16)
  Class: Eq_86
  DataType: word16
  OrigDataType: word16
T_87: (in __outb(0x03C9, ah_186) : void)
  Class: Eq_87
  DataType: void
  OrigDataType: void
T_88: (in 0x0001 : word16)
  Class: Eq_88
  DataType: word16
  OrigDataType: word16
T_89: (in cx_39 - 0x0001 : word16)
  Class: Eq_61
  DataType: word16
  OrigDataType: word16
T_90: (in (byte) cx_39 : byte)
  Class: Eq_49
  DataType: bcu8
  OrigDataType: byte
T_91: (in 0x0000 : word16)
  Class: Eq_61
  DataType: word16
  OrigDataType: word16
T_92: (in cx_39 != 0x0000 : bool)
  Class: Eq_92
  DataType: bool
  OrigDataType: bool
T_93: (in di_56 : word16)
  Class: Eq_93
  DataType: word16
  OrigDataType: word16
T_94: (in 0x003F : word16)
  Class: Eq_94
  DataType: word16
  OrigDataType: word16
T_95: (in di_40 & 0x003F : word16)
  Class: Eq_93
  DataType: word16
  OrigDataType: word16
T_96: (in (byte) di_56 : byte)
  Class: Eq_66
  DataType: byte
  OrigDataType: byte
T_97: (in SLICE(di_56, byte, 8) : byte)
  Class: Eq_66
  DataType: byte
  OrigDataType: byte
T_98: (in 0x0002 : word16)
  Class: Eq_98
  DataType: word16
  OrigDataType: word16
T_99: (in di_56 + 0x0002 : word16)
  Class: Eq_64
  DataType: word16
  OrigDataType: word16
T_100: (in 0xC1 : byte)
  Class: Eq_49
  DataType: bcu8
  OrigDataType: bcu8
T_101: (in cl_32 <=u 0xC1 : bool)
  Class: Eq_101
  DataType: bool
  OrigDataType: bool
T_102: (in ax_143 : word16)
  Class: Eq_102
  DataType: word16
  OrigDataType: word16
T_103: (in al_142 : byte)
  Class: Eq_103
  DataType: byte
  OrigDataType: byte
T_104: (in 0xA000 : selector)
  Class: Eq_104
  DataType: (ptr Eq_104)
  OrigDataType: (ptr (segment))
T_105: (in di_107 : (memptr (ptr Eq_104) Eq_105))
  Class: Eq_105
  DataType: (memptr (ptr Eq_104) Eq_105)
  OrigDataType: (memptr T_104 (struct 0001 (0 T_108 t0000) (1 T_112 t0001) (2 T_116 t0002)))
T_106: (in 0x0000 : word16)
  Class: Eq_106
  DataType: word16
  OrigDataType: word16
T_107: (in di_107 + 0x0000 : word16)
  Class: Eq_107
  DataType: word16
  OrigDataType: word16
T_108: (in Mem23[0xA000:di_107 + 0x0000:byte] : byte)
  Class: Eq_108
  DataType: byte
  OrigDataType: byte
T_109: (in al_142 + (0xA000->*di_107).b0000 : byte)
  Class: Eq_109
  DataType: byte
  OrigDataType: byte
T_110: (in 0x0001 : word16)
  Class: Eq_110
  DataType: word16
  OrigDataType: word16
T_111: (in di_107 + 0x0001 : word16)
  Class: Eq_111
  DataType: word16
  OrigDataType: word16
T_112: (in Mem23[0xA000:di_107 + 0x0001:byte] : byte)
  Class: Eq_112
  DataType: byte
  OrigDataType: byte
T_113: (in al_142 + (0xA000->*di_107).b0000 + (0xA000->*di_107).b0001 : byte)
  Class: Eq_113
  DataType: byte
  OrigDataType: byte
T_114: (in 0x0002 : word16)
  Class: Eq_114
  DataType: word16
  OrigDataType: word16
T_115: (in di_107 + 0x0002 : word16)
  Class: Eq_115
  DataType: word16
  OrigDataType: word16
T_116: (in Mem23[0xA000:di_107 + 0x0002:byte] : byte)
  Class: Eq_116
  DataType: byte
  OrigDataType: byte
T_117: (in al_142 + (0xA000->*di_107).b0000 + (0xA000->*di_107).b0001 + (0xA000->*di_107).b0002 : byte)
  Class: Eq_117
  DataType: uint8
  OrigDataType: uint8
T_118: (in 0x02 : byte)
  Class: Eq_118
  DataType: uint8
  OrigDataType: uint8
T_119: (in al_142 + (0xA000->*di_107).b0000 + (0xA000->*di_107).b0001 + (0xA000->*di_107).b0002 >>u 0x02 : word16)
  Class: Eq_119
  DataType: uint16
  OrigDataType: uint16
T_120: (in DPB(ax_143, al_142 + (0xA000->*di_107).b0000 + (0xA000->*di_107).b0001 + (0xA000->*di_107).b0002 >>u 0x02, 0, 8) : word16)
  Class: Eq_120
  DataType: word16
  OrigDataType: word16
T_121: (in 0x0001 : word16)
  Class: Eq_121
  DataType: word16
  OrigDataType: word16
T_122: (in DPB(ax_143, al_142 + (0xA000->*di_107).b0000 + (0xA000->*di_107).b0001 + (0xA000->*di_107).b0002 >>u 0x02, 0, 8) + 0x0001 : word16)
  Class: Eq_122
  DataType: word16
  OrigDataType: word16
T_123: (in (byte) (DPB(ax_143, al_142 + (0xA000->*di_107).b0000 + (0xA000->*di_107).b0001 + (0xA000->*di_107).b0002 >>u 0x02, 0, 8) + 0x0001) : byte)
  Class: Eq_108
  DataType: byte
  OrigDataType: byte
T_124: (in 0x0000 : word16)
  Class: Eq_124
  DataType: word16
  OrigDataType: word16
T_125: (in di_107 + 0x0000 : word16)
  Class: Eq_125
  DataType: word16
  OrigDataType: word16
T_126: (in Mem159[0xA000:di_107 + 0x0000:byte] : byte)
  Class: Eq_108
  DataType: byte
  OrigDataType: byte
T_127: (in 0x0001 : word16)
  Class: Eq_127
  DataType: word16
  OrigDataType: word16
T_128: (in di_107 + 0x0001 : word16)
  Class: Eq_105
  DataType: (memptr (ptr Eq_104) Eq_105)
  OrigDataType: word16
T_129: (in cx_113 : word16)
  Class: Eq_129
  DataType: word16
  OrigDataType: word16
T_130: (in 0x0001 : word16)
  Class: Eq_130
  DataType: word16
  OrigDataType: word16
T_131: (in cx_113 - 0x0001 : word16)
  Class: Eq_129
  DataType: word16
  OrigDataType: word16
T_132: (in 0x0000 : word16)
  Class: Eq_129
  DataType: word16
  OrigDataType: word16
T_133: (in cx_113 != 0x0000 : bool)
  Class: Eq_133
  DataType: bool
  OrigDataType: bool
T_134: (in 0x0001 : word16)
  Class: Eq_134
  DataType: word16
  OrigDataType: word16
T_135: (in ax_143 - 0x0001 : word16)
  Class: Eq_102
  DataType: word16
  OrigDataType: word16
T_136: (in ax_143 - 0x0001 : word16)
  Class: Eq_136
  DataType: word16
  OrigDataType: word16
T_137: (in (byte) (ax_143 - 0x0001) : byte)
  Class: Eq_103
  DataType: byte
  OrigDataType: byte
T_138: (in SEQ(ds, bx_6) : ptr32)
  Class: Eq_138
  DataType: ptr32
  OrigDataType: ptr32
T_139: (in 0x0200 : word16)
  Class: Eq_139
  DataType: (memptr (ptr Eq_20) int16)
  OrigDataType: (memptr T_20 (struct (0 T_140 t0000)))
T_140: (in Mem23[ss:0x0200:word16] : word16)
  Class: Eq_17
  DataType: int16
  OrigDataType: word16
T_141: (in cx_113 + ss->w0200 : word16)
  Class: Eq_141
  DataType: word16
  OrigDataType: word16
T_142: (in 0x00 : byte)
  Class: Eq_142
  DataType: byte
  OrigDataType: byte
T_143: (in DPB(cx_113 + ss->w0200, 0x00, 8, 8) : word16)
  Class: Eq_143
  DataType: ui16
  OrigDataType: ui16
T_144: (in 0x0002 : word16)
  Class: Eq_144
  DataType: ui16
  OrigDataType: ui16
T_145: (in DPB(cx_113 + ss->w0200, 0x00, 8, 8) * 0x0002 : word16)
  Class: Eq_145
  DataType: ui16
  OrigDataType: ui16
T_146: (in SEQ(ds, bx_6)[DPB(cx_113 + ss->w0200, 0x00, 8, 8) * 0x0002] : word16)
  Class: Eq_146
  DataType: word16
  OrigDataType: word16
T_147: (in DPB(ebx_101, (ds.*bx_6)[DPB(cx_113 + ss->w0200, 0x00, 8, 8) * 0x0002 / 0x0004], 0, 16) : word32)
  Class: Eq_147
  DataType: word32
  OrigDataType: word32
T_148: (in 0x00000008 : word32)
  Class: Eq_148
  DataType: ui32
  OrigDataType: ui32
T_149: (in edx_109 * 0x00000008 : word32)
  Class: Eq_149
  DataType: ui32
  OrigDataType: ui32
T_150: (in DPB(ebx_101, (ds.*bx_6)[DPB(cx_113 + ss->w0200, 0x00, 8, 8) * 0x0002 / 0x0004], 0, 16) + edx_109 * 0x00000008 : word32)
  Class: Eq_68
  DataType: word32
  OrigDataType: word32
T_151: (in ax_139 : word16)
  Class: Eq_151
  DataType: word16
  OrigDataType: word16
T_152: (in 0x0003 : word16)
  Class: Eq_152
  DataType: word16
  OrigDataType: word16
T_153: (in cx_113 << 0x0003 : word16)
  Class: Eq_153
  DataType: ui16
  OrigDataType: ui16
T_154: (in SEQ(ds, bx_6) : ptr32)
  Class: Eq_154
  DataType: ptr32
  OrigDataType: ptr32
T_155: (in dx_108 : word16)
  Class: Eq_155
  DataType: word16
  OrigDataType: word16
T_156: (in 0x0200 : word16)
  Class: Eq_156
  DataType: (memptr (ptr Eq_20) int16)
  OrigDataType: (memptr T_20 (struct (0 T_157 t0000)))
T_157: (in Mem23[ss:0x0200:word16] : word16)
  Class: Eq_17
  DataType: int16
  OrigDataType: word16
T_158: (in dx_108 + ss->w0200 : word16)
  Class: Eq_158
  DataType: word16
  OrigDataType: word16
T_159: (in 0x00 : byte)
  Class: Eq_159
  DataType: byte
  OrigDataType: byte
T_160: (in DPB(dx_108 + ss->w0200, 0x00, 8, 8) : word16)
  Class: Eq_160
  DataType: ui16
  OrigDataType: ui16
T_161: (in 0x0002 : word16)
  Class: Eq_161
  DataType: ui16
  OrigDataType: ui16
T_162: (in DPB(dx_108 + ss->w0200, 0x00, 8, 8) * 0x0002 : word16)
  Class: Eq_162
  DataType: ui16
  OrigDataType: ui16
T_163: (in SEQ(ds, bx_6)[DPB(dx_108 + ss->w0200, 0x00, 8, 8) * 0x0002] : word16)
  Class: Eq_146
  DataType: word16
  OrigDataType: word16
T_164: (in (cx_113 << 0x0003) + (ds.*bx_6)[(DPB(dx_108 + ss->w0200, 0x00, 8, 8) * 0x0002) / 0x0004] : word16)
  Class: Eq_164
  DataType: word16
  OrigDataType: word16
T_165: (in (word16) ebx_101 : word16)
  Class: Eq_165
  DataType: word16
  OrigDataType: word16
T_166: (in (cx_113 << 0x0003) + (ds.*bx_6)[(DPB(dx_108 + ss->w0200, 0x00, 8, 8) * 0x0002) / 0x0004] ^ (word16) ebx_101 : word16)
  Class: Eq_151
  DataType: word16
  OrigDataType: word16
T_167: (in al_140 : byte)
  Class: Eq_167
  DataType: byte
  OrigDataType: byte
T_168: (in (byte) ax_139 : byte)
  Class: Eq_167
  DataType: byte
  OrigDataType: byte
T_169: (in 0x40 : byte)
  Class: Eq_169
  DataType: byte
  OrigDataType: byte
T_170: (in al_140 & 0x40 : byte)
  Class: Eq_103
  DataType: byte
  OrigDataType: byte
T_171: (in al_140 & 0x40 : byte)
  Class: Eq_171
  DataType: byte
  OrigDataType: byte
T_172: (in DPB(ax_139, al_140 & 0x40, 0, 8) : word16)
  Class: Eq_102
  DataType: word16
  OrigDataType: word16
T_173: (in al_140 & 0x40 : byte)
  Class: Eq_173
  DataType: byte
  OrigDataType: byte
T_174: (in 0x00 : byte)
  Class: Eq_173
  DataType: byte
  OrigDataType: byte
T_175: (in (al_140 & 0x40) == 0x00 : bool)
  Class: Eq_175
  DataType: bool
  OrigDataType: bool
T_176: (in 0x0001 : word16)
  Class: Eq_176
  DataType: word16
  OrigDataType: word16
T_177: (in dx_108 - 0x0001 : word16)
  Class: Eq_155
  DataType: word16
  OrigDataType: word16
T_178: (in DPB(edx_109, dx_108, 0, 16) : word32)
  Class: Eq_57
  DataType: ui32
  OrigDataType: word32
T_179: (in 0x0000 : word16)
  Class: Eq_155
  DataType: word16
  OrigDataType: word16
T_180: (in dx_108 != 0x0000 : bool)
  Class: Eq_180
  DataType: bool
  OrigDataType: bool
T_181: (in 0x0140 : word16)
  Class: Eq_129
  DataType: word16
  OrigDataType: word16
T_182: (in 0x0200 : word16)
  Class: Eq_182
  DataType: (memptr (ptr Eq_20) int16)
  OrigDataType: (memptr T_20 (struct (0 T_183 t0000)))
T_183: (in Mem159[ss:0x0200:word16] : word16)
  Class: Eq_17
  DataType: int16
  OrigDataType: word16
T_184: (in 0x0001 : word16)
  Class: Eq_184
  DataType: word16
  OrigDataType: word16
T_185: (in ss->w0200 - 0x0001 : word16)
  Class: Eq_17
  DataType: int16
  OrigDataType: word16
T_186: (in 0x0200 : word16)
  Class: Eq_186
  DataType: (memptr (ptr Eq_20) int16)
  OrigDataType: (memptr T_20 (struct (0 T_187 t0000)))
T_187: (in Mem169[ss:0x0200:word16] : word16)
  Class: Eq_17
  DataType: int16
  OrigDataType: word16
T_188: (in __inb : ptr32)
  Class: Eq_188
  DataType: (ptr Eq_188)
  OrigDataType: (ptr (fn T_190 (T_189)))
T_189: (in 0x60 : byte)
  Class: Eq_189
  DataType: byte
  OrigDataType: byte
T_190: (in __inb(0x60) : byte)
  Class: Eq_190
  DataType: byte
  OrigDataType: byte
T_191: (in 0x01 : byte)
  Class: Eq_190
  DataType: byte
  OrigDataType: byte
T_192: (in __inb(0x60) != 0x01 : bool)
  Class: Eq_192
  DataType: bool
  OrigDataType: bool
T_193: (in 0x0000 : word16)
  Class: Eq_105
  DataType: (memptr (ptr Eq_104) Eq_105)
  OrigDataType: word16
T_194: (in 0x00C8 : word16)
  Class: Eq_155
  DataType: word16
  OrigDataType: word16
T_195: (in 0x00C8 : word16)
  Class: Eq_195
  DataType: word16
  OrigDataType: word16
T_196: (in DPB(edx_109, 0x00C8, 0, 16) : word32)
  Class: Eq_57
  DataType: ui32
  OrigDataType: word32
T_197:
  Class: Eq_197
  DataType: word16
  OrigDataType: (struct 0002 (0 T_146 t0000))
T_198:
  Class: Eq_197
  DataType: word16
  OrigDataType: (struct 0002 (0 T_163 t0000))
*/
typedef Eq_104 Eq_1struct Globals {
	Eq_104 * ptrFFFA0000;	// FFFA0000
} Eq_1;

typedef void (Eq_2)(byte);

typedef struct Eq_7 {	// size: 1 1
	int16 w0000;	// 0
} Eq_7;

typedef struct Eq_20 {
	int16 w0200;	// 200
} Eq_20;

typedef Eq_31 (Eq_23)(real16);

typedef union Eq_26 {
	real16 u0;
	real64 u1;
} Eq_26;

typedef  Eq_27[]Eq_29Eq_33struct Eq_27 {
	word16 a0000[];	// 0
	Eq_29 t01AA;	// 1AA
	Eq_33 t01AC;	// 1AC
} Eq_27;

typedef union Eq_29 {
	real16 u0;
	real32 u1;
} Eq_29;

typedef union Eq_31 {
	real16 u0;
	real64 u1;
} Eq_31;

typedef union Eq_33 {
	real16 u0;
	real32 u1;
} Eq_33;

typedef void (Eq_53)(word16, byte);

typedef void (Eq_79)(word16, byte);

typedef void (Eq_82)(word16, byte);

typedef void (Eq_85)(word16, byte);

typedef Eq_105 Eq_104struct Eq_104 {
	Eq_105 t0000;	// 0
} Eq_104;

typedef struct Eq_105 {	// size: 1 1
	byte b0000;	// 0
	byte b0001;	// 1
	byte b0002;	// 2
} Eq_105;

typedef byte (Eq_188)(byte);

