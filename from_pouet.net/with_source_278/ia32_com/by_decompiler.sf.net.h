// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_278/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_190) ptrFFFA0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_7: (struct "Eq_7" 0001 (0 int16 w0000))
	T_7 (in bx_6 : (memptr (ptr Eq_21) Eq_7))
	T_10 (in DPB(bx, 0xF0, 8, 8) : word16)
	T_13 (in bx_12 : (memptr (ptr Eq_21) Eq_7))
	T_39 (in bx_22 + 0x0001 : word16)
Eq_11: (union "Eq_11" (int16 u0) (word32 u1))
	T_11 (in cx_13 : Eq_11)
	T_12 (in 0x0100 : word16)
	T_16 (in Mem14[ss:0x0200:word16] : word16)
	T_19 (in Mem14[ss:0x0200:int16] : int16)
	T_37 (in cx_13 - 0x0001 : word16)
	T_45 (in 0x0000 : word16)
	T_117 (in Mem21[ss:0x0200:word16] : word16)
	T_135 (in Mem146[ss:0x0200:word16] : word16)
	T_220 (in Mem195[ss:0x0200:word32] : word32)
	T_222 (in Mem195[ss:0x0200:word32] + 0x00000002 : word32)
	T_224 (in Mem197[ss:0x0200:word32] : word32)
Eq_14: (segment "Eq_14" (200 Eq_11 t0200) (204 word16 w0204) (208 byte b0208) (209 byte b0209))
	T_14 (in ss : selector)
Eq_17: (fn Eq_25 (real16))
	T_17 (in sin : ptr32)
Eq_20: (union "Eq_20" (real16 u0) (real64 u1))
	T_20 (in (real64) ss->t0200 : real64)
Eq_21: (segment "Eq_21" (0 (arr int16) a0000) (1F8 Eq_23 t01F8) (1FC Eq_27 t01FC))
	T_21 (in ds : (ptr Eq_21))
Eq_23: (union "Eq_23" (real16 u0) (real32 u1))
	T_23 (in Mem14[ds:0x01F8:real32] : real32)
Eq_25: (union "Eq_25" (real16 u0) (real64 u1))
	T_25 (in sin((real64) ss->t0200 * ds->t01F8) : real64)
Eq_27: (union "Eq_27" (real16 u0) (real32 u1))
	T_27 (in Mem14[ds:0x01FC:real32] : real32)
Eq_47: (fn void (word16, byte))
	T_47 (in __outb : ptr32)
Eq_57: (fn void (word16, byte))
	T_57 (in __outb : ptr32)
Eq_60: (fn void (word16, byte))
	T_60 (in __outb : ptr32)
Eq_63: (fn void (word16, byte))
	T_63 (in __outb : ptr32)
Eq_66: (struct "Eq_66" (0 byte b0000) (1 byte b0001) (2 byte b0002))
	T_66 (in si_69 : (memptr (ptr Eq_21) Eq_66))
	T_72 (in (di_35 >>u 0x0004 & 0x000C) + 0x01E7 : word16)
Eq_190: (segment "Eq_190" (0 byte b0000))
	T_190 (in 0xA000 : selector)
Eq_225: (fn byte (byte))
	T_225 (in __inb : ptr32)
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
T_7: (in bx_6 : (memptr (ptr Eq_21) Eq_7))
  Class: Eq_7
  DataType: (memptr (ptr Eq_21) Eq_7)
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
  Class: Eq_7
  DataType: (memptr (ptr Eq_21) Eq_7)
  OrigDataType: word16
T_11: (in cx_13 : Eq_11)
  Class: Eq_11
  DataType: Eq_11
  OrigDataType: word16
T_12: (in 0x0100 : word16)
  Class: Eq_11
  DataType: int16
  OrigDataType: word16
T_13: (in bx_12 : (memptr (ptr Eq_21) Eq_7))
  Class: Eq_7
  DataType: (memptr (ptr Eq_21) Eq_7)
  OrigDataType: (memptr T_21 (struct 0001 (0 T_32 t0000)))
T_14: (in ss : selector)
  Class: Eq_14
  DataType: (ptr Eq_14)
  OrigDataType: (ptr (segment (200 T_11 t0200) (204 T_126 t0204) (208 T_131 t0208) (209 T_164 t0209)))
T_15: (in 0x0200 : word16)
  Class: Eq_15
  DataType: (memptr (ptr Eq_14) Eq_11)
  OrigDataType: (memptr T_14 (struct (0 T_16 t0000)))
T_16: (in Mem14[ss:0x0200:word16] : word16)
  Class: Eq_11
  DataType: Eq_11
  OrigDataType: word16
T_17: (in sin : ptr32)
  Class: Eq_17
  DataType: (ptr Eq_17)
  OrigDataType: (ptr (fn T_25 (T_24)))
T_18: (in 0x0200 : word16)
  Class: Eq_18
  DataType: (memptr (ptr Eq_14) Eq_11)
  OrigDataType: (memptr T_14 (struct (0 T_19 t0000)))
T_19: (in Mem14[ss:0x0200:int16] : int16)
  Class: Eq_11
  DataType: Eq_11
  OrigDataType: int16
T_20: (in (real64) ss->t0200 : real64)
  Class: Eq_20
  DataType: Eq_20
  OrigDataType: (union (real16 u0) (real64 u1))
T_21: (in ds : (ptr Eq_21))
  Class: Eq_21
  DataType: (ptr Eq_21)
  OrigDataType: (ptr (segment (0 (arr T_232) a0000) (1F8 T_23 t01F8) (1FC T_27 t01FC)))
T_22: (in 0x01F8 : word16)
  Class: Eq_22
  DataType: (memptr (ptr Eq_21) Eq_23)
  OrigDataType: (memptr T_21 (struct (0 T_23 t0000)))
T_23: (in Mem14[ds:0x01F8:real32] : real32)
  Class: Eq_23
  DataType: Eq_23
  OrigDataType: (union (real16 u0) (real32 u1))
T_24: (in (real64) ss->t0200 * ds->t01F8 : word16)
  Class: Eq_24
  DataType: real16
  OrigDataType: real16
T_25: (in sin((real64) ss->t0200 * ds->t01F8) : real64)
  Class: Eq_25
  DataType: Eq_25
  OrigDataType: (union (real16 u0) (real64 u1))
T_26: (in 0x01FC : word16)
  Class: Eq_26
  DataType: (memptr (ptr Eq_21) Eq_27)
  OrigDataType: (memptr T_21 (struct (0 T_27 t0000)))
T_27: (in Mem14[ds:0x01FC:real32] : real32)
  Class: Eq_27
  DataType: Eq_27
  OrigDataType: (union (real16 u0) (real32 u1))
T_28: (in sin((real64) ss->t0200 * ds->t01F8) * ds->t01FC : word16)
  Class: Eq_28
  DataType: real16
  OrigDataType: real16
T_29: (in (int16) (sin((real64) ss->t0200 * ds->t01F8) * ds->t01FC) : int16)
  Class: Eq_29
  DataType: int16
  OrigDataType: int16
T_30: (in 0x0000 : word16)
  Class: Eq_30
  DataType: word16
  OrigDataType: word16
T_31: (in bx_12 + 0x0000 : word16)
  Class: Eq_31
  DataType: word16
  OrigDataType: word16
T_32: (in Mem21[ds:bx_12 + 0x0000:int16] : int16)
  Class: Eq_29
  DataType: int16
  OrigDataType: int16
T_33: (in bx_22 : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_34: (in 0x0001 : word16)
  Class: Eq_34
  DataType: word16
  OrigDataType: word16
T_35: (in bx_12 + 0x0001 : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_36: (in 0x0001 : word16)
  Class: Eq_36
  DataType: word16
  OrigDataType: word16
T_37: (in cx_13 - 0x0001 : word16)
  Class: Eq_11
  DataType: Eq_11
  OrigDataType: word16
T_38: (in 0x0001 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_39: (in bx_22 + 0x0001 : word16)
  Class: Eq_7
  DataType: (memptr (ptr Eq_21) Eq_7)
  OrigDataType: word16
T_40: (in bl_25 : byte)
  Class: Eq_40
  DataType: byte
  OrigDataType: byte
T_41: (in bx_22 + 0x0001 : word16)
  Class: Eq_41
  DataType: word16
  OrigDataType: word16
T_42: (in (byte) (bx_22 + 0x0001) : byte)
  Class: Eq_40
  DataType: byte
  OrigDataType: byte
T_43: (in ch_29 : byte)
  Class: Eq_43
  DataType: byte
  OrigDataType: byte
T_44: (in SLICE(cx_13, byte, 8) : byte)
  Class: Eq_43
  DataType: byte
  OrigDataType: byte
T_45: (in 0x0000 : word16)
  Class: Eq_11
  DataType: int16
  OrigDataType: word16
T_46: (in cx_13 != 0x0000 : bool)
  Class: Eq_46
  DataType: bool
  OrigDataType: bool
T_47: (in __outb : ptr32)
  Class: Eq_47
  DataType: (ptr Eq_47)
  OrigDataType: (ptr (fn T_50 (T_48, T_49)))
T_48: (in 0x03C8 : word16)
  Class: Eq_48
  DataType: word16
  OrigDataType: word16
T_49: (in 0x13 : byte)
  Class: Eq_49
  DataType: byte
  OrigDataType: byte
T_50: (in __outb(0x03C8, 0x13) : void)
  Class: Eq_50
  DataType: void
  OrigDataType: void
T_51: (in ah_31 : byte)
  Class: Eq_51
  DataType: byte
  OrigDataType: byte
T_52: (in 0x00 : byte)
  Class: Eq_51
  DataType: byte
  OrigDataType: byte
T_53: (in di_35 : uint16)
  Class: Eq_53
  DataType: uint16
  OrigDataType: uint16
T_54: (in 0x0000 : word16)
  Class: Eq_53
  DataType: uint16
  OrigDataType: word16
T_55: (in bh_38 : byte)
  Class: Eq_55
  DataType: byte
  OrigDataType: byte
T_56: (in 0x04 : byte)
  Class: Eq_55
  DataType: byte
  OrigDataType: byte
T_57: (in __outb : ptr32)
  Class: Eq_57
  DataType: (ptr Eq_57)
  OrigDataType: (ptr (fn T_59 (T_58, T_40)))
T_58: (in 0x03C9 : word16)
  Class: Eq_58
  DataType: word16
  OrigDataType: word16
T_59: (in __outb(0x03C9, bl_25) : void)
  Class: Eq_59
  DataType: void
  OrigDataType: void
T_60: (in __outb : ptr32)
  Class: Eq_60
  DataType: (ptr Eq_60)
  OrigDataType: (ptr (fn T_62 (T_61, T_51)))
T_61: (in 0x03C9 : word16)
  Class: Eq_61
  DataType: word16
  OrigDataType: word16
T_62: (in __outb(0x03C9, ah_31) : void)
  Class: Eq_62
  DataType: void
  OrigDataType: void
T_63: (in __outb : ptr32)
  Class: Eq_63
  DataType: (ptr Eq_63)
  OrigDataType: (ptr (fn T_65 (T_64, T_43)))
T_64: (in 0x03C9 : word16)
  Class: Eq_64
  DataType: word16
  OrigDataType: word16
T_65: (in __outb(0x03C9, ch_29) : void)
  Class: Eq_65
  DataType: void
  OrigDataType: void
T_66: (in si_69 : (memptr (ptr Eq_21) Eq_66))
  Class: Eq_66
  DataType: (memptr (ptr Eq_21) Eq_66)
  OrigDataType: (memptr T_21 (struct (0 T_75 t0000) (1 T_79 t0001) (2 T_83 t0002)))
T_67: (in 0x0004 : word16)
  Class: Eq_67
  DataType: uint16
  OrigDataType: uint16
T_68: (in di_35 >>u 0x0004 : word16)
  Class: Eq_68
  DataType: uint16
  OrigDataType: uint16
T_69: (in 0x000C : word16)
  Class: Eq_69
  DataType: word16
  OrigDataType: word16
T_70: (in di_35 >>u 0x0004 & 0x000C : word16)
  Class: Eq_70
  DataType: word16
  OrigDataType: word16
T_71: (in 0x01E7 : word16)
  Class: Eq_71
  DataType: word16
  OrigDataType: word16
T_72: (in (di_35 >>u 0x0004 & 0x000C) + 0x01E7 : word16)
  Class: Eq_66
  DataType: (memptr (ptr Eq_21) Eq_66)
  OrigDataType: word16
T_73: (in 0x0000 : word16)
  Class: Eq_73
  DataType: word16
  OrigDataType: word16
T_74: (in si_69 + 0x0000 : word16)
  Class: Eq_74
  DataType: word16
  OrigDataType: word16
T_75: (in Mem21[ds:si_69 + 0x0000:byte] : byte)
  Class: Eq_75
  DataType: byte
  OrigDataType: byte
T_76: (in bl_25 + (ds->*si_69).b0000 : byte)
  Class: Eq_40
  DataType: byte
  OrigDataType: byte
T_77: (in 0x0001 : word16)
  Class: Eq_77
  DataType: word16
  OrigDataType: word16
T_78: (in si_69 + 0x0001 : word16)
  Class: Eq_78
  DataType: word16
  OrigDataType: word16
T_79: (in Mem21[ds:si_69 + 0x0001:byte] : byte)
  Class: Eq_79
  DataType: byte
  OrigDataType: byte
T_80: (in ah_31 + (ds->*si_69).b0001 : byte)
  Class: Eq_51
  DataType: byte
  OrigDataType: byte
T_81: (in 0x0002 : word16)
  Class: Eq_81
  DataType: word16
  OrigDataType: word16
T_82: (in si_69 + 0x0002 : word16)
  Class: Eq_82
  DataType: word16
  OrigDataType: word16
T_83: (in Mem21[ds:si_69 + 0x0002:byte] : byte)
  Class: Eq_83
  DataType: byte
  OrigDataType: byte
T_84: (in ch_29 + (ds->*si_69).b0002 : byte)
  Class: Eq_43
  DataType: byte
  OrigDataType: byte
T_85: (in 0x0001 : word16)
  Class: Eq_85
  DataType: word16
  OrigDataType: word16
T_86: (in di_35 + 0x0001 : word16)
  Class: Eq_53
  DataType: uint16
  OrigDataType: word16
T_87: (in cl_56 : byte)
  Class: Eq_87
  DataType: byte
  OrigDataType: byte
T_88: (in 0x01 : byte)
  Class: Eq_88
  DataType: byte
  OrigDataType: byte
T_89: (in cl_56 - 0x01 : byte)
  Class: Eq_87
  DataType: byte
  OrigDataType: byte
T_90: (in 0x00 : byte)
  Class: Eq_87
  DataType: byte
  OrigDataType: byte
T_91: (in cl_56 != 0x00 : bool)
  Class: Eq_91
  DataType: bool
  OrigDataType: bool
T_92: (in si_69 + 0x0002 : word16)
  Class: Eq_92
  DataType: word16
  OrigDataType: word16
T_93: (in Mem21[ds:si_69 + 0x0002:byte] : byte)
  Class: Eq_83
  DataType: byte
  OrigDataType: byte
T_94: (in ch_29 - (ds->*si_69).b0002 : byte)
  Class: Eq_43
  DataType: byte
  OrigDataType: byte
T_95: (in 0x0001 : word16)
  Class: Eq_95
  DataType: word16
  OrigDataType: word16
T_96: (in si_69 + 0x0001 : word16)
  Class: Eq_96
  DataType: word16
  OrigDataType: word16
T_97: (in Mem21[ds:si_69 + 0x0001:byte] : byte)
  Class: Eq_79
  DataType: byte
  OrigDataType: byte
T_98: (in ah_31 - (ds->*si_69).b0001 : byte)
  Class: Eq_51
  DataType: byte
  OrigDataType: byte
T_99: (in 0x0000 : word16)
  Class: Eq_99
  DataType: word16
  OrigDataType: word16
T_100: (in si_69 + 0x0000 : word16)
  Class: Eq_100
  DataType: word16
  OrigDataType: word16
T_101: (in Mem21[ds:si_69 + 0x0000:byte] : byte)
  Class: Eq_75
  DataType: byte
  OrigDataType: byte
T_102: (in bl_25 - (ds->*si_69).b0000 : byte)
  Class: Eq_40
  DataType: byte
  OrigDataType: byte
T_103: (in 0x01 : byte)
  Class: Eq_103
  DataType: byte
  OrigDataType: byte
T_104: (in bh_38 - 0x01 : byte)
  Class: Eq_55
  DataType: byte
  OrigDataType: byte
T_105: (in 0x00 : byte)
  Class: Eq_55
  DataType: byte
  OrigDataType: byte
T_106: (in bh_38 != 0x00 : bool)
  Class: Eq_106
  DataType: bool
  OrigDataType: bool
T_107: (in 0x40 : byte)
  Class: Eq_87
  DataType: byte
  OrigDataType: byte
T_108: (in SEQ(ds, bx_6) : ptr32)
  Class: Eq_108
  DataType: ptr32
  OrigDataType: ptr32
T_109: (in dx_115 : word16)
  Class: Eq_109
  DataType: word16
  OrigDataType: word16
T_110: (in (byte) dx_115 : byte)
  Class: Eq_110
  DataType: uint8
  OrigDataType: uint8
T_111: (in 0x01 : byte)
  Class: Eq_111
  DataType: uint8
  OrigDataType: uint8
T_112: (in (byte) dx_115 >>u 0x01 : word16)
  Class: Eq_112
  DataType: uint16
  OrigDataType: uint16
T_113: (in DPB(dx_115, (byte) dx_115 >>u 0x01, 0, 8) : word16)
  Class: Eq_113
  DataType: word16
  OrigDataType: word16
T_114: (in cx_129 : word16)
  Class: Eq_114
  DataType: word16
  OrigDataType: word16
T_115: (in DPB(dx_115, (byte) dx_115 >>u 0x01, 0, 8) + cx_129 : word16)
  Class: Eq_115
  DataType: word16
  OrigDataType: word16
T_116: (in 0x0200 : word16)
  Class: Eq_116
  DataType: (memptr (ptr Eq_14) Eq_11)
  OrigDataType: (memptr T_14 (struct (0 T_117 t0000)))
T_117: (in Mem21[ss:0x0200:word16] : word16)
  Class: Eq_11
  DataType: Eq_11
  OrigDataType: word16
T_118: (in DPB(dx_115, (byte) dx_115 >>u 0x01, 0, 8) + cx_129 + ss->t0200 : word16)
  Class: Eq_118
  DataType: word16
  OrigDataType: word16
T_119: (in 0x00 : byte)
  Class: Eq_119
  DataType: byte
  OrigDataType: byte
T_120: (in DPB(DPB(dx_115, (byte) dx_115 >>u 0x01, 0, 8) + cx_129 + ss->t0200, 0x00, 8, 8) : word16)
  Class: Eq_120
  DataType: ui16
  OrigDataType: ui16
T_121: (in 0x0002 : word16)
  Class: Eq_121
  DataType: ui16
  OrigDataType: ui16
T_122: (in DPB(DPB(dx_115, (byte) dx_115 >>u 0x01, 0, 8) + cx_129 + ss->t0200, 0x00, 8, 8) * 0x0002 : word16)
  Class: Eq_122
  DataType: ui16
  OrigDataType: ui16
T_123: (in SEQ(ds, bx_6)[DPB(DPB(dx_115, (byte) dx_115 >>u 0x01, 0, 8) + cx_129 + ss->t0200, 0x00, 8, 8) * 0x0002] : word16)
  Class: Eq_123
  DataType: int16
  OrigDataType: int16
T_124: (in 0x0002 : word16)
  Class: Eq_124
  DataType: uint16
  OrigDataType: uint16
T_125: (in (ds.*bx_6)[DPB(DPB(dx_115, (byte) dx_115 >>u 0x01, 0, 8) + cx_129 + ss->t0200, 0x00, 8, 8) * 0x0002 / 0x0004] >> 0x0002 : word16)
  Class: Eq_125
  DataType: int16
  OrigDataType: int16
T_126: (in ((ds.*bx_6)[DPB(DPB(dx_115, (byte) dx_115 >>u 0x01, 0, 8) + cx_129 + ss->t0200, 0x00, 8, 8) * 0x0002 / 0x0004] >> 0x0002) + dx_115 : word16)
  Class: Eq_126
  DataType: word16
  OrigDataType: word16
T_127: (in 0x0204 : word16)
  Class: Eq_127
  DataType: (memptr (ptr Eq_14) word16)
  OrigDataType: (memptr T_14 (struct (0 T_128 t0000)))
T_128: (in Mem146[ss:0x0204:word16] : word16)
  Class: Eq_126
  DataType: word16
  OrigDataType: word16
T_129: (in bx_170 : word16)
  Class: Eq_129
  DataType: word16
  OrigDataType: word16
T_130: (in 0x0208 : word16)
  Class: Eq_130
  DataType: (memptr (ptr Eq_14) byte)
  OrigDataType: (memptr T_14 (struct (0 T_131 t0000)))
T_131: (in Mem146[ss:0x0208:byte] : byte)
  Class: Eq_131
  DataType: byte
  OrigDataType: byte
T_132: (in (word16) ss->b0208 : word16)
  Class: Eq_129
  DataType: word16
  OrigDataType: word16
T_133: (in SEQ(ds, bx_6) : ptr32)
  Class: Eq_133
  DataType: ptr32
  OrigDataType: ptr32
T_134: (in 0x0200 : word16)
  Class: Eq_134
  DataType: (memptr (ptr Eq_14) Eq_11)
  OrigDataType: (memptr T_14 (struct (0 T_135 t0000)))
T_135: (in Mem146[ss:0x0200:word16] : word16)
  Class: Eq_11
  DataType: Eq_11
  OrigDataType: word16
T_136: (in dx_115 + ss->t0200 : word16)
  Class: Eq_136
  DataType: word16
  OrigDataType: word16
T_137: (in 0x00 : byte)
  Class: Eq_137
  DataType: byte
  OrigDataType: byte
T_138: (in DPB(dx_115 + ss->t0200, 0x00, 8, 8) : word16)
  Class: Eq_138
  DataType: ui16
  OrigDataType: ui16
T_139: (in 0x0002 : word16)
  Class: Eq_139
  DataType: ui16
  OrigDataType: ui16
T_140: (in DPB(dx_115 + ss->t0200, 0x00, 8, 8) * 0x0002 : word16)
  Class: Eq_140
  DataType: ui16
  OrigDataType: ui16
T_141: (in SEQ(ds, bx_6)[DPB(dx_115 + ss->t0200, 0x00, 8, 8) * 0x0002] : word16)
  Class: Eq_123
  DataType: int16
  OrigDataType: int16
T_142: (in 0x0002 : word16)
  Class: Eq_142
  DataType: uint16
  OrigDataType: uint16
T_143: (in (ds.*bx_6)[DPB(dx_115 + ss->t0200, 0x00, 8, 8) * 0x0002 / 0x0004] >> 0x0002 : word16)
  Class: Eq_143
  DataType: int16
  OrigDataType: int16
T_144: (in ((ds.*bx_6)[DPB(dx_115 + ss->t0200, 0x00, 8, 8) * 0x0002 / 0x0004] >> 0x0002) + cx_129 : word16)
  Class: Eq_144
  DataType: word16
  OrigDataType: word16
T_145: (in 0x0204 : word16)
  Class: Eq_145
  DataType: (memptr (ptr Eq_14) word16)
  OrigDataType: (memptr T_14 (struct (0 T_146 t0000)))
T_146: (in Mem146[ss:0x0204:word16] : word16)
  Class: Eq_126
  DataType: word16
  OrigDataType: word16
T_147: (in ((ds.*bx_6)[DPB(dx_115 + ss->t0200, 0x00, 8, 8) * 0x0002 / 0x0004] >> 0x0002) + cx_129 ^ ss->w0204 : word16)
  Class: Eq_147
  DataType: word16
  OrigDataType: word16
T_148: (in 0x001F : word16)
  Class: Eq_148
  DataType: word16
  OrigDataType: word16
T_149: (in (((ds.*bx_6)[DPB(dx_115 + ss->t0200, 0x00, 8, 8) * 0x0002 / 0x0004] >> 0x0002) + cx_129 ^ ss->w0204) & 0x001F : word16)
  Class: Eq_149
  DataType: word16
  OrigDataType: word16
T_150: (in SEQ(ds, bx_6) : ptr32)
  Class: Eq_150
  DataType: ptr32
  OrigDataType: ptr32
T_151: (in 0x0208 : word16)
  Class: Eq_151
  DataType: (memptr (ptr Eq_14) byte)
  OrigDataType: (memptr T_14 (struct (0 T_152 t0000)))
T_152: (in Mem146[ss:0x0208:byte] : byte)
  Class: Eq_131
  DataType: byte
  OrigDataType: byte
T_153: (in (word16) ss->b0208 : word16)
  Class: Eq_153
  DataType: word16
  OrigDataType: word16
T_154: (in (word16) ss->b0208 + cx_129 : word16)
  Class: Eq_154
  DataType: word16
  OrigDataType: word16
T_155: (in (word16) ss->b0208 + cx_129 + dx_115 : word16)
  Class: Eq_155
  DataType: word16
  OrigDataType: word16
T_156: (in 0x00 : byte)
  Class: Eq_156
  DataType: byte
  OrigDataType: byte
T_157: (in DPB((word16) ss->b0208 + cx_129 + dx_115, 0x00, 8, 8) : word16)
  Class: Eq_157
  DataType: ui16
  OrigDataType: ui16
T_158: (in 0x0002 : word16)
  Class: Eq_158
  DataType: ui16
  OrigDataType: ui16
T_159: (in DPB((word16) ss->b0208 + cx_129 + dx_115, 0x00, 8, 8) * 0x0002 : word16)
  Class: Eq_159
  DataType: ui16
  OrigDataType: ui16
T_160: (in SEQ(ds, bx_6)[DPB((word16) ss->b0208 + cx_129 + dx_115, 0x00, 8, 8) * 0x0002] : word16)
  Class: Eq_123
  DataType: int16
  OrigDataType: word16
T_161: (in ((((ds.*bx_6)[DPB(dx_115 + ss->t0200, 0x00, 8, 8) * 0x0002 / 0x0004] >> 0x0002) + cx_129 ^ ss->w0204) & 0x001F) + (ds.*bx_6)[(DPB(((word16) ss->b0208 + cx_129) + dx_115, 0x00, 8, 8) * 0x0002) / 0x0004] : word16)
  Class: Eq_161
  DataType: word16
  OrigDataType: word16
T_162: (in SEQ(ds, bx_6) : ptr32)
  Class: Eq_162
  DataType: ptr32
  OrigDataType: ptr32
T_163: (in 0x0209 : word16)
  Class: Eq_163
  DataType: (memptr (ptr Eq_14) byte)
  OrigDataType: (memptr T_14 (struct (0 T_164 t0000)))
T_164: (in Mem146[ss:0x0209:byte] : byte)
  Class: Eq_164
  DataType: byte
  OrigDataType: byte
T_165: (in (word16) ss->b0209 : word16)
  Class: Eq_165
  DataType: word16
  OrigDataType: word16
T_166: (in (word16) ss->b0209 + cx_129 : word16)
  Class: Eq_166
  DataType: word16
  OrigDataType: word16
T_167: (in 0x00 : byte)
  Class: Eq_167
  DataType: byte
  OrigDataType: byte
T_168: (in DPB((word16) ss->b0209 + cx_129, 0x00, 8, 8) : word16)
  Class: Eq_168
  DataType: ui16
  OrigDataType: ui16
T_169: (in 0x0002 : word16)
  Class: Eq_169
  DataType: ui16
  OrigDataType: ui16
T_170: (in DPB((word16) ss->b0209 + cx_129, 0x00, 8, 8) * 0x0002 : word16)
  Class: Eq_170
  DataType: ui16
  OrigDataType: ui16
T_171: (in SEQ(ds, bx_6)[DPB((word16) ss->b0209 + cx_129, 0x00, 8, 8) * 0x0002] : word16)
  Class: Eq_123
  DataType: int16
  OrigDataType: word16
T_172: (in ((((ds.*bx_6)[DPB(dx_115 + ss->t0200, 0x00, 8, 8) * 0x0002 / 0x0004] >> 0x0002) + cx_129 ^ ss->w0204) & 0x001F) + (ds.*bx_6)[(DPB(((word16) ss->b0208 + cx_129) + dx_115, 0x00, 8, 8) * 0x0002) / 0x0004] + (ds.*bx_6)[(DPB((word16) ss->b0209 + cx_129, 0x00, 8, 8) * 0x0002) / 0x0004] : word16)
  Class: Eq_172
  DataType: word16
  OrigDataType: word16
T_173: (in SEQ(ds, bx_6) : ptr32)
  Class: Eq_173
  DataType: ptr32
  OrigDataType: ptr32
T_174: (in (byte) bx_170 : byte)
  Class: Eq_174
  DataType: byte
  OrigDataType: byte
T_175: (in 0x0209 : word16)
  Class: Eq_175
  DataType: (memptr (ptr Eq_14) byte)
  OrigDataType: (memptr T_14 (struct (0 T_176 t0000)))
T_176: (in Mem146[ss:0x0209:byte] : byte)
  Class: Eq_164
  DataType: byte
  OrigDataType: byte
T_177: (in (byte) bx_170 + ss->b0209 : byte)
  Class: Eq_177
  DataType: byte
  OrigDataType: byte
T_178: (in DPB(bx_170, (byte) bx_170 + ss->b0209, 0, 8) : word16)
  Class: Eq_178
  DataType: word16
  OrigDataType: word16
T_179: (in DPB(bx_170, (byte) bx_170 + ss->b0209, 0, 8) + cx_129 : word16)
  Class: Eq_179
  DataType: word16
  OrigDataType: word16
T_180: (in DPB(bx_170, (byte) bx_170 + ss->b0209, 0, 8) + cx_129 + dx_115 : word16)
  Class: Eq_180
  DataType: word16
  OrigDataType: word16
T_181: (in 0x00 : byte)
  Class: Eq_181
  DataType: byte
  OrigDataType: byte
T_182: (in DPB(DPB(bx_170, (byte) bx_170 + ss->b0209, 0, 8) + cx_129 + dx_115, 0x00, 8, 8) : word16)
  Class: Eq_182
  DataType: ui16
  OrigDataType: ui16
T_183: (in 0x0002 : word16)
  Class: Eq_183
  DataType: ui16
  OrigDataType: ui16
T_184: (in DPB(DPB(bx_170, (byte) bx_170 + ss->b0209, 0, 8) + cx_129 + dx_115, 0x00, 8, 8) * 0x0002 : word16)
  Class: Eq_184
  DataType: ui16
  OrigDataType: ui16
T_185: (in SEQ(ds, bx_6)[DPB(DPB(bx_170, (byte) bx_170 + ss->b0209, 0, 8) + cx_129 + dx_115, 0x00, 8, 8) * 0x0002] : word16)
  Class: Eq_123
  DataType: int16
  OrigDataType: word16
T_186: (in ((((ds.*bx_6)[DPB(dx_115 + ss->t0200, 0x00, 8, 8) * 0x0002 / 0x0004] >> 0x0002) + cx_129 ^ ss->w0204) & 0x001F) + (ds.*bx_6)[(DPB(((word16) ss->b0208 + cx_129) + dx_115, 0x00, 8, 8) * 0x0002) / 0x0004] + (ds.*bx_6)[(DPB((word16) ss->b0209 + cx_129, 0x00, 8, 8) * 0x0002) / 0x0004] + (ds.*bx_6)[(DPB((DPB(bx_170, (byte) bx_170 + ss->b0209, 0, 8) + cx_129) + dx_115, 0x00, 8, 8) * 0x0002) / 0x0004] : word16)
  Class: Eq_186
  DataType: uint16
  OrigDataType: uint16
T_187: (in 0x0003 : word16)
  Class: Eq_187
  DataType: uint16
  OrigDataType: uint16
T_188: (in ((((ds.*bx_6)[DPB(dx_115 + ss->t0200, 0x00, 8, 8) * 0x0002 / 0x0004] >> 0x0002) + cx_129 ^ ss->w0204) & 0x001F) + (ds.*bx_6)[(DPB(((word16) ss->b0208 + cx_129) + dx_115, 0x00, 8, 8) * 0x0002) / 0x0004] + (ds.*bx_6)[(DPB((word16) ss->b0209 + cx_129, 0x00, 8, 8) * 0x0002) / 0x0004] + (ds.*bx_6)[(DPB((DPB(bx_170, (byte) bx_170 + ss->b0209, 0, 8) + cx_129) + dx_115, 0x00, 8, 8) * 0x0002) / 0x0004] >>u 0x0003 : word16)
  Class: Eq_188
  DataType: uint16
  OrigDataType: uint16
T_189: (in (byte) (((((ds.*bx_6)[DPB(dx_115 + ss->t0200, 0x00, 8, 8) * 0x0002 / 0x0004] >> 0x0002) + cx_129 ^ ss->w0204) & 0x001F) + (ds.*bx_6)[(DPB(((word16) ss->b0208 + cx_129) + dx_115, 0x00, 8, 8) * 0x0002) / 0x0004] + (ds.*bx_6)[(DPB((word16) ss->b0209 + cx_129, 0x00, 8, 8) * 0x0002) / 0x0004] + (ds.*bx_6)[(DPB((DPB(bx_170, (byte) bx_170 + ss->b0209, 0, 8) + cx_129) + dx_115, 0x00, 8, 8) * 0x0002) / 0x0004] >>u 0x0003) : byte)
  Class: Eq_189
  DataType: byte
  OrigDataType: byte
T_190: (in 0xA000 : selector)
  Class: Eq_190
  DataType: (ptr Eq_190)
  OrigDataType: (ptr (segment))
T_191: (in di_114 : (memptr (ptr Eq_190) byte))
  Class: Eq_191
  DataType: (memptr (ptr Eq_190) byte)
  OrigDataType: (memptr T_190 (struct 0001 (0 T_194 t0000)))
T_192: (in 0x0000 : word16)
  Class: Eq_192
  DataType: word16
  OrigDataType: word16
T_193: (in di_114 + 0x0000 : word16)
  Class: Eq_193
  DataType: word16
  OrigDataType: word16
T_194: (in Mem183[0xA000:di_114 + 0x0000:byte] : byte)
  Class: Eq_189
  DataType: byte
  OrigDataType: byte
T_195: (in 0x0001 : word16)
  Class: Eq_195
  DataType: word16
  OrigDataType: word16
T_196: (in di_114 + 0x0001 : word16)
  Class: Eq_191
  DataType: (memptr (ptr Eq_190) byte)
  OrigDataType: word16
T_197: (in 0x0001 : word16)
  Class: Eq_197
  DataType: word16
  OrigDataType: word16
T_198: (in cx_129 - 0x0001 : word16)
  Class: Eq_114
  DataType: word16
  OrigDataType: word16
T_199: (in 0x0000 : word16)
  Class: Eq_114
  DataType: word16
  OrigDataType: word16
T_200: (in cx_129 != 0x0000 : bool)
  Class: Eq_200
  DataType: bool
  OrigDataType: bool
T_201: (in 0x0001 : word16)
  Class: Eq_201
  DataType: word16
  OrigDataType: word16
T_202: (in dx_115 + 0x0001 : word16)
  Class: Eq_109
  DataType: word16
  OrigDataType: word16
T_203: (in (byte) dx_115 : byte)
  Class: Eq_203
  DataType: byte
  OrigDataType: byte
T_204: (in 0xC8 : byte)
  Class: Eq_203
  DataType: byte
  OrigDataType: byte
T_205: (in (byte) dx_115 != 0xC8 : bool)
  Class: Eq_205
  DataType: bool
  OrigDataType: bool
T_206: (in 0x0140 : word16)
  Class: Eq_114
  DataType: word16
  OrigDataType: word16
T_207: (in 0x0208 : word16)
  Class: Eq_207
  DataType: (memptr (ptr Eq_14) byte)
  OrigDataType: (memptr T_14 (struct (0 T_208 t0000)))
T_208: (in Mem183[ss:0x0208:byte] : byte)
  Class: Eq_131
  DataType: byte
  OrigDataType: byte
T_209: (in 0x02 : byte)
  Class: Eq_209
  DataType: byte
  OrigDataType: byte
T_210: (in ss->b0208 + 0x02 : byte)
  Class: Eq_131
  DataType: byte
  OrigDataType: byte
T_211: (in 0x0208 : word16)
  Class: Eq_211
  DataType: (memptr (ptr Eq_14) byte)
  OrigDataType: (memptr T_14 (struct (0 T_212 t0000)))
T_212: (in Mem193[ss:0x0208:byte] : byte)
  Class: Eq_131
  DataType: byte
  OrigDataType: byte
T_213: (in 0x0209 : word16)
  Class: Eq_213
  DataType: (memptr (ptr Eq_14) byte)
  OrigDataType: (memptr T_14 (struct (0 T_214 t0000)))
T_214: (in Mem193[ss:0x0209:byte] : byte)
  Class: Eq_164
  DataType: byte
  OrigDataType: byte
T_215: (in 0x01 : byte)
  Class: Eq_215
  DataType: byte
  OrigDataType: byte
T_216: (in ss->b0209 - 0x01 : byte)
  Class: Eq_164
  DataType: byte
  OrigDataType: byte
T_217: (in 0x0209 : word16)
  Class: Eq_217
  DataType: (memptr (ptr Eq_14) byte)
  OrigDataType: (memptr T_14 (struct (0 T_218 t0000)))
T_218: (in Mem195[ss:0x0209:byte] : byte)
  Class: Eq_164
  DataType: byte
  OrigDataType: byte
T_219: (in 0x0200 : word16)
  Class: Eq_219
  DataType: (memptr (ptr Eq_14) Eq_11)
  OrigDataType: (memptr T_14 (struct (0 T_220 t0000)))
T_220: (in Mem195[ss:0x0200:word32] : word32)
  Class: Eq_11
  DataType: Eq_11
  OrigDataType: word32
T_221: (in 0x00000002 : word32)
  Class: Eq_221
  DataType: word32
  OrigDataType: word32
T_222: (in Mem195[ss:0x0200:word32] + 0x00000002 : word32)
  Class: Eq_11
  DataType: Eq_11
  OrigDataType: word32
T_223: (in 0x0200 : word16)
  Class: Eq_223
  DataType: (memptr (ptr Eq_14) Eq_11)
  OrigDataType: (memptr T_14 (struct (0 T_224 t0000)))
T_224: (in Mem197[ss:0x0200:word32] : word32)
  Class: Eq_11
  DataType: Eq_11
  OrigDataType: word32
T_225: (in __inb : ptr32)
  Class: Eq_225
  DataType: (ptr Eq_225)
  OrigDataType: (ptr (fn T_227 (T_226)))
T_226: (in 0x60 : byte)
  Class: Eq_226
  DataType: byte
  OrigDataType: byte
T_227: (in __inb(0x60) : byte)
  Class: Eq_227
  DataType: byte
  OrigDataType: byte
T_228: (in 0x01 : byte)
  Class: Eq_227
  DataType: byte
  OrigDataType: byte
T_229: (in __inb(0x60) != 0x01 : bool)
  Class: Eq_229
  DataType: bool
  OrigDataType: bool
T_230: (in 0x0000 : word16)
  Class: Eq_191
  DataType: (memptr (ptr Eq_190) byte)
  OrigDataType: word16
T_231: (in 0x0000 : word16)
  Class: Eq_109
  DataType: word16
  OrigDataType: word16
T_232:
  Class: Eq_232
  DataType: int16
  OrigDataType: (struct 0002 (0 T_123 t0000))
T_233:
  Class: Eq_232
  DataType: int16
  OrigDataType: (struct 0002 (0 T_141 t0000))
T_234:
  Class: Eq_232
  DataType: int16
  OrigDataType: (struct 0002 (0 T_160 t0000))
T_235:
  Class: Eq_232
  DataType: int16
  OrigDataType: (struct 0002 (0 T_171 t0000))
T_236:
  Class: Eq_232
  DataType: int16
  OrigDataType: (struct 0002 (0 T_185 t0000))
*/
typedef Eq_190 Eq_1struct Globals {
	Eq_190 * ptrFFFA0000;	// FFFA0000
} Eq_1;

typedef void (Eq_2)(byte);

typedef struct Eq_7 {	// size: 1 1
	int16 w0000;	// 0
} Eq_7;

typedef union Eq_11 {
	int16 u0;
	word32 u1;
} Eq_11;

typedef Eq_11 Eq_14struct Eq_14 {
	Eq_11 t0200;	// 200
	word16 w0204;	// 204
	byte b0208;	// 208
	byte b0209;	// 209
} Eq_14;

typedef Eq_25 (Eq_17)(real16);

typedef union Eq_20 {
	real16 u0;
	real64 u1;
} Eq_20;

typedef  Eq_21[]Eq_23Eq_27struct Eq_21 {
	int16 a0000[];	// 0
	Eq_23 t01F8;	// 1F8
	Eq_27 t01FC;	// 1FC
} Eq_21;

typedef union Eq_23 {
	real16 u0;
	real32 u1;
} Eq_23;

typedef union Eq_25 {
	real16 u0;
	real64 u1;
} Eq_25;

typedef union Eq_27 {
	real16 u0;
	real32 u1;
} Eq_27;

typedef void (Eq_47)(word16, byte);

typedef void (Eq_57)(word16, byte);

typedef void (Eq_60)(word16, byte);

typedef void (Eq_63)(word16, byte);

typedef struct Eq_66 {
	byte b0000;	// 0
	byte b0001;	// 1
	byte b0002;	// 2
} Eq_66;

typedef struct Eq_190 {
	byte b0000;	// 0
} Eq_190;

typedef byte (Eq_225)(byte);

