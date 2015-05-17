// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_287/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_256) ptrFFFA0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_7: (fn void (word16, byte))
	T_7 (in __outb : ptr32)
Eq_24: (fn void (uint16, bcu8))
	T_24 (in __outb : ptr32)
Eq_48: (segment "Eq_48" (1FE (arr byte) a01FE) (200 (arr byte) a0200) (2FE word16 w02FE) (300 (arr byte) a0300) (3FE (arr byte) a03FE))
	T_48 (in ds : (ptr Eq_48))
Eq_51: (union "Eq_51" (int16 u0) ((memptr (ptr Eq_48) Eq_292) u1))
	T_51 (in bx_58 : Eq_51)
	T_52 (in 0x4000 : word16)
	T_53 (in ax_138 : Eq_51)
	T_54 (in 0x3FFB : word16)
	T_55 (in si_133 : Eq_51)
	T_56 (in 0x3FFB : word16)
	T_70 (in __shrd((word16) dx_ax_76, SLICE(dx_ax_76, word16, 16), 0x0D) - bx_58 : word16)
	T_87 (in si_144 : Eq_51)
	T_89 (in si_133 + 0x0001 : word16)
	T_93 (in ax_223 : Eq_51)
	T_101 (in si_460 : Eq_51)
	T_105 (in bx_239 : Eq_51)
	T_110 (in DPB((bp_194 << cl_216) + si_460, 0x00, 8, 8) : word16)
	T_280 (in ax_444 - 0x0001 : word16)
Eq_57: (struct "Eq_57" 0001 (FFFFFF00 byte bFFFFFF00) (0 byte b0000))
	T_57 (in di_68 : (memptr (ptr Eq_48) Eq_57))
	T_58 (in 0x0300 : word16)
	T_80 (in di_68 + 0x0001 : word16)
Eq_65: (fn word16 (word16, word16, byte))
	T_65 (in __shrd : ptr32)
Eq_85: (struct "Eq_85" 0001 (0 Eq_143 t0000))
	T_85 (in di_143 : (memptr (ptr Eq_48) Eq_85))
	T_86 (in 0x03FE : word16)
	T_153 (in di_143 + 0x0001 : word16)
Eq_98: (struct "Eq_98" (2BE byte b02BE) (2FE byte b02FE))
	T_98 (in bx_234 : (memptr (ptr Eq_48) Eq_98))
	T_104 (in DPB((bx_220 << cl_216) - si_460, 0x00, 8, 8) : word16)
Eq_126: (struct "Eq_126" (2BE int8 b02BE))
	T_126 (in DPB(DPB(ax_223, Mem89[ds:bx_234 + 0x02BE:byte] - Mem89[ds:bx_234 + 0x02FE:byte] + Mem89[ds:bx_239 + 0x02BE:byte], 0, 8), 0x00, 8, 8) : word16)
Eq_143: (union "Eq_143" (int16 u0) (byte u1))
	T_143 (in al_269 : Eq_143)
	T_145 (in al_267 >> 0x01 : word16)
	T_151 (in Mem277[ds:di_143 + 0x0000:byte] : byte)
	T_160 (in -(al_267 >> 0x01) : byte)
Eq_146: (union "Eq_146" (int8 u0) (int16 u1))
	T_146 (in al_267 >> 0x01 : word16)
	T_147 (in 0x00 : byte)
Eq_172: (union "Eq_172" (uint16 u0) ((memptr (ptr Eq_48) byte) u1))
	T_172 (in cx_323 : Eq_172)
	T_176 (in DPB(cx_175, 0x02, 8, 8) + 0x01FE : word16)
	T_206 (in cx_323 - 0x0001 : word16)
	T_207 (in 0xFE02 : word16)
Eq_177: (struct "Eq_177" 0001 (5C1E byte b5C1E))
	T_177 (in di_366 : word16)
	T_190 (in di_366 + 0x0001 : word16)
	T_196 (in di_366 + 0x0138 : word16)
	T_243 (in ((int16) Mem342[ds:cx_323 + 0x0000:byte] - cx_363 >> 0x0001) + (word16) (((int16) Mem342[ds:(si_357 & 0x00FF) + 0x02FE:byte] >> 0x0001) *s 0x0141) : word16)
Eq_210: (segment "Eq_210")
	T_210 (in ss : selector)
Eq_211: (union "Eq_211" (ptr16 u0) ((memptr (ptr Eq_210) Eq_293) u1))
	T_211 (in fp : ptr16)
Eq_221: (struct "Eq_221" (2BE byte b02BE))
	T_221 (in si_357 & 0x00FF : word16)
Eq_233: (struct "Eq_233" (2FE byte b02FE))
	T_233 (in si_357 & 0x00FF : word16)
Eq_249: (struct "Eq_249" 0001 (0 Eq_259 t0000))
	T_249 (in di_412 : (memptr (ptr Eq_256) Eq_249))
	T_250 (in 0x2580 : word16)
	T_269 (in di_412 + 0x0001 : word16)
Eq_256: (segment "Eq_256" (2580 (arr Eq_290) a2580))
	T_256 (in 0xA000 : selector)
Eq_259: (union "Eq_259" (uint16 u0) (byte u1))
	T_259 (in Mem382[0xA000:di_412 + 0x0000:byte] : byte)
	T_262 (in ds->*si_413 + (0xA000->*di_412).t0000 >>u 0x01 : word16)
	T_265 (in Mem423[0xA000:di_412 + 0x0000:byte] : byte)
Eq_275: (fn byte (byte))
	T_275 (in __inb : ptr32)
Eq_283: (fn void (byte))
	T_283 (in __syscall : ptr32)
Eq_290: (struct "Eq_290" 0001 (0 Eq_259 t0000))
	T_290
	T_291
Eq_292: (struct "Eq_292" (2BE byte b02BE))
	T_292
Eq_293: (struct "Eq_293" (FFFFFFE8 word16 wFFFFFFE8))
	T_293
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
  OrigDataType: (ptr (fn T_11 (T_8, T_10)))
T_8: (in 0x03C8 : word16)
  Class: Eq_8
  DataType: word16
  OrigDataType: word16
T_9: (in bx : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_10: (in (byte) bx : byte)
  Class: Eq_10
  DataType: byte
  OrigDataType: byte
T_11: (in __outb(0x03C8, (byte) bx) : void)
  Class: Eq_11
  DataType: void
  OrigDataType: void
T_12: (in ax_12 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_13: (in dx_ax_17 : word32)
  Class: Eq_13
  DataType: word32
  OrigDataType: word32
T_14: (in 0x03C9 : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_15: (in SEQ(0x03C9, bx) : word32)
  Class: Eq_13
  DataType: word32
  OrigDataType: word32
T_16: (in dh_18 : uint8)
  Class: Eq_16
  DataType: uint8
  OrigDataType: uint8
T_17: (in 0x03 : byte)
  Class: Eq_16
  DataType: uint8
  OrigDataType: byte
T_18: (in cx_23 : word16)
  Class: Eq_18
  DataType: word16
  OrigDataType: word16
T_19: (in cx : word16)
  Class: Eq_19
  DataType: word16
  OrigDataType: word16
T_20: (in ch : byte)
  Class: Eq_20
  DataType: byte
  OrigDataType: byte
T_21: (in 0x01 : byte)
  Class: Eq_21
  DataType: byte
  OrigDataType: byte
T_22: (in ch + 0x01 : byte)
  Class: Eq_22
  DataType: byte
  OrigDataType: byte
T_23: (in DPB(cx, ch + 0x01, 8, 8) : word16)
  Class: Eq_18
  DataType: word16
  OrigDataType: word16
T_24: (in __outb : ptr32)
  Class: Eq_24
  DataType: (ptr Eq_24)
  OrigDataType: (ptr (fn T_27 (T_25, T_26)))
T_25: (in dx_35 : uint16)
  Class: Eq_25
  DataType: uint16
  OrigDataType: word16
T_26: (in al_43 : bcu8)
  Class: Eq_26
  DataType: bcu8
  OrigDataType: bcu8
T_27: (in __outb(dx_35, al_43) : void)
  Class: Eq_27
  DataType: void
  OrigDataType: void
T_28: (in 0x0001 : word16)
  Class: Eq_28
  DataType: word16
  OrigDataType: word16
T_29: (in ax_12 + 0x0001 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_30: (in SEQ(dx_35, ax_12) : word32)
  Class: Eq_13
  DataType: word32
  OrigDataType: word32
T_31: (in 0x0001 : word16)
  Class: Eq_31
  DataType: word16
  OrigDataType: word16
T_32: (in cx_23 - 0x0001 : word16)
  Class: Eq_18
  DataType: word16
  OrigDataType: word16
T_33: (in 0x0000 : word16)
  Class: Eq_18
  DataType: word16
  OrigDataType: word16
T_34: (in cx_23 != 0x0000 : bool)
  Class: Eq_34
  DataType: bool
  OrigDataType: bool
T_35: (in 0x3F : byte)
  Class: Eq_26
  DataType: bcu8
  OrigDataType: byte
T_36: (in dx_ax_17 % dh_18 : uint16)
  Class: Eq_25
  DataType: uint16
  OrigDataType: uint16
T_37: (in SLICE(dx_35, byte, 8) : byte)
  Class: Eq_16
  DataType: uint8
  OrigDataType: byte
T_38: (in ax_39 : uint16)
  Class: Eq_38
  DataType: uint16
  OrigDataType: word16
T_39: (in SEQ(dx_35, ax_12) : word32)
  Class: Eq_39
  DataType: uint32
  OrigDataType: uint32
T_40: (in SEQ(dx_35, ax_12) /u dh_18 : uint16)
  Class: Eq_38
  DataType: uint16
  OrigDataType: uint16
T_41: (in SLICE(ax_39, byte, 8) : byte)
  Class: Eq_41
  DataType: uint8
  OrigDataType: uint8
T_42: (in (byte) ax_39 : byte)
  Class: Eq_42
  DataType: uint8
  OrigDataType: uint8
T_43: (in SLICE(ax_39, byte, 8) *u (byte) ax_39 : uint16)
  Class: Eq_43
  DataType: uint16
  OrigDataType: uint16
T_44: (in (byte) (SLICE(ax_39, byte, 8) *u (byte) ax_39) : byte)
  Class: Eq_26
  DataType: bcu8
  OrigDataType: byte
T_45: (in 0x3F : byte)
  Class: Eq_26
  DataType: bcu8
  OrigDataType: bcu8
T_46: (in al_43 <=u 0x3F : bool)
  Class: Eq_46
  DataType: bool
  OrigDataType: bool
T_47: (in 0x4040 : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_48: (in ds : (ptr Eq_48))
  Class: Eq_48
  DataType: (ptr Eq_48)
  OrigDataType: (ptr (segment (1FE (arr T_288) a01FE) (200 (arr T_287) a0200) (2FE T_50 t02FE) (300 (arr T_286) a0300) (3FE (arr T_289) a03FE)))
T_49: (in 0x02FE : word16)
  Class: Eq_49
  DataType: (memptr (ptr Eq_48) word16)
  OrigDataType: (memptr T_48 (struct (0 T_50 t0000)))
T_50: (in Mem66[ds:0x02FE:word16] : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_51: (in bx_58 : Eq_51)
  Class: Eq_51
  DataType: Eq_51
  OrigDataType: word16
T_52: (in 0x4000 : word16)
  Class: Eq_51
  DataType: int16
  OrigDataType: word16
T_53: (in ax_138 : Eq_51)
  Class: Eq_51
  DataType: Eq_51
  OrigDataType: int16
T_54: (in 0x3FFB : word16)
  Class: Eq_51
  DataType: int16
  OrigDataType: word16
T_55: (in si_133 : Eq_51)
  Class: Eq_51
  DataType: Eq_51
  OrigDataType: int16
T_56: (in 0x3FFB : word16)
  Class: Eq_51
  DataType: int16
  OrigDataType: word16
T_57: (in di_68 : (memptr (ptr Eq_48) Eq_57))
  Class: Eq_57
  DataType: (memptr (ptr Eq_48) Eq_57)
  OrigDataType: (memptr T_48 (struct 0001 (FFFFFF00 T_78 tFFFFFF00) (0 T_75 t0000)))
T_58: (in 0x0300 : word16)
  Class: Eq_57
  DataType: (memptr (ptr Eq_48) Eq_57)
  OrigDataType: word16
T_59: (in cx_70 : word16)
  Class: Eq_59
  DataType: word16
  OrigDataType: word16
T_60: (in 0xFE : byte)
  Class: Eq_60
  DataType: byte
  OrigDataType: byte
T_61: (in DPB(cx_23, 0xFE, 0, 8) : word16)
  Class: Eq_59
  DataType: word16
  OrigDataType: word16
T_62: (in dx_ax_76 : int32)
  Class: Eq_62
  DataType: int32
  OrigDataType: word32
T_63: (in 0x3FFB : word16)
  Class: Eq_63
  DataType: int16
  OrigDataType: int16
T_64: (in ax_138 *s 0x3FFB : int32)
  Class: Eq_62
  DataType: int32
  OrigDataType: int32
T_65: (in __shrd : ptr32)
  Class: Eq_65
  DataType: (ptr Eq_65)
  OrigDataType: (ptr (fn T_69 (T_66, T_67, T_68)))
T_66: (in (word16) dx_ax_76 : word16)
  Class: Eq_66
  DataType: word16
  OrigDataType: word16
T_67: (in SLICE(dx_ax_76, word16, 16) : word16)
  Class: Eq_67
  DataType: word16
  OrigDataType: word16
T_68: (in 0x0D : byte)
  Class: Eq_68
  DataType: byte
  OrigDataType: byte
T_69: (in __shrd((word16) dx_ax_76, SLICE(dx_ax_76, word16, 16), 0x0D) : word16)
  Class: Eq_69
  DataType: word16
  OrigDataType: word16
T_70: (in __shrd((word16) dx_ax_76, SLICE(dx_ax_76, word16, 16), 0x0D) - bx_58 : word16)
  Class: Eq_51
  DataType: Eq_51
  OrigDataType: word16
T_71: (in ah_83 : byte)
  Class: Eq_71
  DataType: byte
  OrigDataType: byte
T_72: (in SLICE(ax_138, byte, 8) : byte)
  Class: Eq_71
  DataType: byte
  OrigDataType: byte
T_73: (in 0x0000 : word16)
  Class: Eq_73
  DataType: word16
  OrigDataType: word16
T_74: (in di_68 + 0x0000 : word16)
  Class: Eq_74
  DataType: word16
  OrigDataType: word16
T_75: (in Mem88[ds:di_68 + 0x0000:byte] : byte)
  Class: Eq_71
  DataType: byte
  OrigDataType: byte
T_76: (in 0x0100 : word16)
  Class: Eq_76
  DataType: word16
  OrigDataType: word16
T_77: (in di_68 - 0x0100 : word16)
  Class: Eq_77
  DataType: word16
  OrigDataType: word16
T_78: (in Mem89[ds:di_68 - 0x0100:byte] : byte)
  Class: Eq_71
  DataType: byte
  OrigDataType: byte
T_79: (in 0x0001 : word16)
  Class: Eq_79
  DataType: word16
  OrigDataType: word16
T_80: (in di_68 + 0x0001 : word16)
  Class: Eq_57
  DataType: (memptr (ptr Eq_48) Eq_57)
  OrigDataType: word16
T_81: (in 0x0001 : word16)
  Class: Eq_81
  DataType: word16
  OrigDataType: word16
T_82: (in cx_70 - 0x0001 : word16)
  Class: Eq_59
  DataType: word16
  OrigDataType: word16
T_83: (in 0x0000 : word16)
  Class: Eq_59
  DataType: word16
  OrigDataType: word16
T_84: (in cx_70 != 0x0000 : bool)
  Class: Eq_84
  DataType: bool
  OrigDataType: bool
T_85: (in di_143 : (memptr (ptr Eq_48) Eq_85))
  Class: Eq_85
  DataType: (memptr (ptr Eq_48) Eq_85)
  OrigDataType: (memptr T_48 (struct 0001 (0 T_151 t0000)))
T_86: (in 0x03FE : word16)
  Class: Eq_85
  DataType: (memptr (ptr Eq_48) Eq_85)
  OrigDataType: word16
T_87: (in si_144 : Eq_51)
  Class: Eq_51
  DataType: Eq_51
  OrigDataType: word16
T_88: (in 0x0001 : word16)
  Class: Eq_88
  DataType: word16
  OrigDataType: word16
T_89: (in si_133 + 0x0001 : word16)
  Class: Eq_51
  DataType: Eq_51
  OrigDataType: word16
T_90: (in bx_146 : word16)
  Class: Eq_90
  DataType: word16
  OrigDataType: word16
T_91: (in 0x008C : word16)
  Class: Eq_90
  DataType: word16
  OrigDataType: word16
T_92: (in bx_220 : word16)
  Class: Eq_90
  DataType: word16
  OrigDataType: word16
T_93: (in ax_223 : Eq_51)
  Class: Eq_51
  DataType: Eq_51
  OrigDataType: (union (int16 u0) ((memptr (ptr Eq_48) (struct "Eq_292" (2BE byte b02BE))) u1))
T_94: (in cx_253 : word16)
  Class: Eq_94
  DataType: word16
  OrigDataType: word16
T_95: (in cx_214 : word16)
  Class: Eq_95
  DataType: word16
  OrigDataType: word16
T_96: (in 0x0001 : word16)
  Class: Eq_96
  DataType: word16
  OrigDataType: word16
T_97: (in cx_214 + 0x0001 : word16)
  Class: Eq_94
  DataType: word16
  OrigDataType: word16
T_98: (in bx_234 : (memptr (ptr Eq_48) Eq_98))
  Class: Eq_98
  DataType: (memptr (ptr Eq_48) Eq_98)
  OrigDataType: (memptr T_48 (struct (2BE T_115 t02BE) (2FE T_118 t02FE)))
T_99: (in cl_216 : uint8)
  Class: Eq_99
  DataType: uint8
  OrigDataType: uint8
T_100: (in bx_220 << cl_216 : word16)
  Class: Eq_100
  DataType: ui16
  OrigDataType: ui16
T_101: (in si_460 : Eq_51)
  Class: Eq_51
  DataType: Eq_51
  OrigDataType: word16
T_102: (in (bx_220 << cl_216) - si_460 : word16)
  Class: Eq_102
  DataType: word16
  OrigDataType: word16
T_103: (in 0x00 : byte)
  Class: Eq_103
  DataType: byte
  OrigDataType: byte
T_104: (in DPB((bx_220 << cl_216) - si_460, 0x00, 8, 8) : word16)
  Class: Eq_98
  DataType: (memptr (ptr Eq_48) Eq_98)
  OrigDataType: word16
T_105: (in bx_239 : Eq_51)
  Class: Eq_51
  DataType: Eq_51
  OrigDataType: (memptr T_48 (struct (2BE T_122 t02BE)))
T_106: (in bp_194 : word16)
  Class: Eq_90
  DataType: word16
  OrigDataType: word16
T_107: (in bp_194 << cl_216 : word16)
  Class: Eq_107
  DataType: ui16
  OrigDataType: ui16
T_108: (in (bp_194 << cl_216) + si_460 : word16)
  Class: Eq_108
  DataType: word16
  OrigDataType: word16
T_109: (in 0x00 : byte)
  Class: Eq_109
  DataType: byte
  OrigDataType: byte
T_110: (in DPB((bp_194 << cl_216) + si_460, 0x00, 8, 8) : word16)
  Class: Eq_51
  DataType: Eq_51
  OrigDataType: word16
T_111: (in (byte) cx_253 : byte)
  Class: Eq_99
  DataType: uint8
  OrigDataType: byte
T_112: (in dl_213 : byte)
  Class: Eq_112
  DataType: byte
  OrigDataType: byte
T_113: (in 0x02BE : word16)
  Class: Eq_113
  DataType: word16
  OrigDataType: word16
T_114: (in bx_234 + 0x02BE : word16)
  Class: Eq_114
  DataType: word16
  OrigDataType: word16
T_115: (in Mem89[ds:bx_234 + 0x02BE:byte] : byte)
  Class: Eq_115
  DataType: byte
  OrigDataType: byte
T_116: (in 0x02FE : word16)
  Class: Eq_116
  DataType: word16
  OrigDataType: word16
T_117: (in bx_234 + 0x02FE : word16)
  Class: Eq_117
  DataType: word16
  OrigDataType: word16
T_118: (in Mem89[ds:bx_234 + 0x02FE:byte] : byte)
  Class: Eq_118
  DataType: byte
  OrigDataType: byte
T_119: (in (ds->*bx_234).b02BE - (ds->*bx_234).b02FE : byte)
  Class: Eq_119
  DataType: byte
  OrigDataType: byte
T_120: (in 0x02BE : word16)
  Class: Eq_120
  DataType: word16
  OrigDataType: word16
T_121: (in bx_239 + 0x02BE : word16)
  Class: Eq_121
  DataType: word16
  OrigDataType: word16
T_122: (in Mem89[ds:bx_239 + 0x02BE:byte] : byte)
  Class: Eq_122
  DataType: byte
  OrigDataType: byte
T_123: (in Mem89[ds:bx_234 + 0x02BE:byte] - Mem89[ds:bx_234 + 0x02FE:byte] + Mem89[ds:bx_239 + 0x02BE:byte] : byte)
  Class: Eq_123
  DataType: byte
  OrigDataType: byte
T_124: (in DPB(ax_223, Mem89[ds:bx_234 + 0x02BE:byte] - Mem89[ds:bx_234 + 0x02FE:byte] + Mem89[ds:bx_239 + 0x02BE:byte], 0, 8) : word16)
  Class: Eq_124
  DataType: word16
  OrigDataType: word16
T_125: (in 0x00 : byte)
  Class: Eq_125
  DataType: byte
  OrigDataType: byte
T_126: (in DPB(DPB(ax_223, Mem89[ds:bx_234 + 0x02BE:byte] - Mem89[ds:bx_234 + 0x02FE:byte] + Mem89[ds:bx_239 + 0x02BE:byte], 0, 8), 0x00, 8, 8) : word16)
  Class: Eq_126
  DataType: (memptr (ptr Eq_48) Eq_126)
  OrigDataType: (memptr T_48 (struct (2BE T_129 t02BE)))
T_127: (in 0x02BE : word16)
  Class: Eq_127
  DataType: word16
  OrigDataType: word16
T_128: (in DPB(DPB(ax_223, Mem89[ds:bx_234 + 0x02BE:byte] - Mem89[ds:bx_234 + 0x02FE:byte] + Mem89[ds:bx_239 + 0x02BE:byte], 0, 8), 0x00, 8, 8) + 0x02BE : word16)
  Class: Eq_128
  DataType: word16
  OrigDataType: word16
T_129: (in Mem89[ds:DPB(DPB(ax_223, Mem89[ds:bx_234 + 0x02BE:byte] - Mem89[ds:bx_234 + 0x02FE:byte] + Mem89[ds:bx_239 + 0x02BE:byte], 0, 8), 0x00, 8, 8) + 0x02BE:byte] : byte)
  Class: Eq_129
  DataType: int8
  OrigDataType: int8
T_130: (in Mem89[ds:DPB(DPB(ax_223, Mem89[ds:bx_234 + 0x02BE:byte] - Mem89[ds:bx_234 + 0x02FE:byte] + Mem89[ds:bx_239 + 0x02BE:byte], 0, 8), 0x00, 8, 8) + 0x02BE:byte] >> cl_216 : word16)
  Class: Eq_130
  DataType: int16
  OrigDataType: int16
T_131: (in dl_213 + (Mem89[ds:DPB(DPB(ax_223, (Mem89[ds:bx_234 + 0x02BE:byte] - Mem89[ds:bx_234 + 0x02FE:byte]) + Mem89[ds:bx_239 + 0x02BE:byte], 0, 8), 0x00, 8, 8) + 0x02BE:byte] >> cl_216) : byte)
  Class: Eq_112
  DataType: byte
  OrigDataType: byte
T_132: (in ch_254 : byte)
  Class: Eq_132
  DataType: byte
  OrigDataType: byte
T_133: (in SLICE(cx_253, byte, 8) : byte)
  Class: Eq_132
  DataType: byte
  OrigDataType: byte
T_134: (in dx_212 : word16)
  Class: Eq_134
  DataType: word16
  OrigDataType: word16
T_135: (in DPB(dx_212, dl_213, 0, 8) : word16)
  Class: Eq_134
  DataType: word16
  OrigDataType: word16
T_136: (in 0x01 : byte)
  Class: Eq_136
  DataType: byte
  OrigDataType: byte
T_137: (in ch_254 - 0x01 : byte)
  Class: Eq_137
  DataType: byte
  OrigDataType: byte
T_138: (in DPB(cx_253, ch_254 - 0x01, 8, 8) : word16)
  Class: Eq_95
  DataType: word16
  OrigDataType: word16
T_139: (in 0x01 : byte)
  Class: Eq_132
  DataType: byte
  OrigDataType: byte
T_140: (in ch_254 != 0x01 : bool)
  Class: Eq_140
  DataType: bool
  OrigDataType: bool
T_141: (in al_267 : int8)
  Class: Eq_141
  DataType: int8
  OrigDataType: int8
T_142: (in (byte) dx_212 : byte)
  Class: Eq_141
  DataType: int8
  OrigDataType: byte
T_143: (in al_269 : Eq_143)
  Class: Eq_143
  DataType: Eq_143
  OrigDataType: (union (int16 u0) (byte u1))
T_144: (in 0x01 : byte)
  Class: Eq_144
  DataType: uint8
  OrigDataType: uint8
T_145: (in al_267 >> 0x01 : word16)
  Class: Eq_143
  DataType: Eq_143
  OrigDataType: int16
T_146: (in al_267 >> 0x01 : word16)
  Class: Eq_146
  DataType: Eq_146
  OrigDataType: int16
T_147: (in 0x00 : byte)
  Class: Eq_146
  DataType: int8
  OrigDataType: int8
T_148: (in al_267 >> 0x01 >= 0x00 : bool)
  Class: Eq_148
  DataType: bool
  OrigDataType: bool
T_149: (in 0x0000 : word16)
  Class: Eq_149
  DataType: word16
  OrigDataType: word16
T_150: (in di_143 + 0x0000 : word16)
  Class: Eq_150
  DataType: word16
  OrigDataType: word16
T_151: (in Mem277[ds:di_143 + 0x0000:byte] : byte)
  Class: Eq_143
  DataType: Eq_143
  OrigDataType: byte
T_152: (in 0x0001 : word16)
  Class: Eq_152
  DataType: word16
  OrigDataType: word16
T_153: (in di_143 + 0x0001 : word16)
  Class: Eq_85
  DataType: (memptr (ptr Eq_48) Eq_85)
  OrigDataType: word16
T_154: (in cx_175 : word16)
  Class: Eq_90
  DataType: word16
  OrigDataType: word16
T_155: (in 0x0001 : word16)
  Class: Eq_155
  DataType: word16
  OrigDataType: word16
T_156: (in cx_175 - 0x0001 : word16)
  Class: Eq_90
  DataType: word16
  OrigDataType: word16
T_157: (in 0x0000 : word16)
  Class: Eq_90
  DataType: word16
  OrigDataType: word16
T_158: (in cx_175 != 0x0000 : bool)
  Class: Eq_158
  DataType: bool
  OrigDataType: bool
T_159: (in al_267 >> 0x01 : word16)
  Class: Eq_159
  DataType: int16
  OrigDataType: int16
T_160: (in -(al_267 >> 0x01) : byte)
  Class: Eq_143
  DataType: Eq_143
  OrigDataType: int16
T_161: (in dx_ax_211 : word32)
  Class: Eq_161
  DataType: word32
  OrigDataType: word32
T_162: (in (word32) ax_138 : word32)
  Class: Eq_161
  DataType: word32
  OrigDataType: word32
T_163: (in SLICE(dx_ax_211, word16, 16) : word16)
  Class: Eq_134
  DataType: word16
  OrigDataType: word16
T_164: (in SLICE(dx_ax_211, byte, 16) : byte)
  Class: Eq_112
  DataType: byte
  OrigDataType: byte
T_165: (in 0x0600 : word16)
  Class: Eq_95
  DataType: word16
  OrigDataType: word16
T_166: (in 0x00 : byte)
  Class: Eq_99
  DataType: uint8
  OrigDataType: byte
T_167: (in 0x0001 : word16)
  Class: Eq_167
  DataType: word16
  OrigDataType: word16
T_168: (in bx_220 - 0x0001 : word16)
  Class: Eq_90
  DataType: word16
  OrigDataType: word16
T_169: (in 0x0000 : word16)
  Class: Eq_90
  DataType: word16
  OrigDataType: word16
T_170: (in bx_146 != 0x0000 : bool)
  Class: Eq_170
  DataType: bool
  OrigDataType: bool
T_171: (in 0x0140 : word16)
  Class: Eq_90
  DataType: word16
  OrigDataType: word16
T_172: (in cx_323 : Eq_172)
  Class: Eq_172
  DataType: Eq_172
  OrigDataType: (union (uint16 u0) ((memptr T_48 (struct 0001 (0 T_228 t0000))) u1))
T_173: (in 0x02 : byte)
  Class: Eq_173
  DataType: byte
  OrigDataType: byte
T_174: (in DPB(cx_175, 0x02, 8, 8) : word16)
  Class: Eq_174
  DataType: word16
  OrigDataType: word16
T_175: (in 0x01FE : word16)
  Class: Eq_175
  DataType: word16
  OrigDataType: word16
T_176: (in DPB(cx_175, 0x02, 8, 8) + 0x01FE : word16)
  Class: Eq_172
  DataType: Eq_172
  OrigDataType: word16
T_177: (in di_366 : word16)
  Class: Eq_177
  DataType: (memptr (ptr Eq_48) Eq_177)
  OrigDataType: (memptr T_48 (struct 0001 (5C1E T_180 t5C1E)))
T_178: (in 0x5C1E : word16)
  Class: Eq_178
  DataType: word16
  OrigDataType: word16
T_179: (in di_366 + 0x5C1E : word16)
  Class: Eq_179
  DataType: word16
  OrigDataType: word16
T_180: (in Mem342[ds:di_366 + 0x5C1E:byte] : byte)
  Class: Eq_180
  DataType: byte
  OrigDataType: byte
T_181: (in 0x01 : byte)
  Class: Eq_181
  DataType: byte
  OrigDataType: byte
T_182: (in (ds->*di_366).b5C1E + 0x01 : byte)
  Class: Eq_180
  DataType: byte
  OrigDataType: byte
T_183: (in 0x5C1E : word16)
  Class: Eq_183
  DataType: word16
  OrigDataType: word16
T_184: (in di_366 + 0x5C1E : word16)
  Class: Eq_184
  DataType: word16
  OrigDataType: word16
T_185: (in Mem382[ds:di_366 + 0x5C1E:byte] : byte)
  Class: Eq_180
  DataType: byte
  OrigDataType: byte
T_186: (in ch_376 : byte)
  Class: Eq_186
  DataType: byte
  OrigDataType: byte
T_187: (in 0x01 : byte)
  Class: Eq_187
  DataType: byte
  OrigDataType: byte
T_188: (in ch_376 - 0x01 : byte)
  Class: Eq_186
  DataType: byte
  OrigDataType: byte
T_189: (in 0x0001 : word16)
  Class: Eq_189
  DataType: word16
  OrigDataType: word16
T_190: (in di_366 + 0x0001 : word16)
  Class: Eq_177
  DataType: (memptr (ptr Eq_48) Eq_177)
  OrigDataType: word16
T_191: (in cx_377 : word16)
  Class: Eq_191
  DataType: word16
  OrigDataType: word16
T_192: (in DPB(cx_377, ch_376, 8, 8) : word16)
  Class: Eq_191
  DataType: word16
  OrigDataType: word16
T_193: (in 0x00 : byte)
  Class: Eq_186
  DataType: byte
  OrigDataType: byte
T_194: (in ch_376 != 0x00 : bool)
  Class: Eq_194
  DataType: bool
  OrigDataType: bool
T_195: (in 0x0138 : word16)
  Class: Eq_195
  DataType: word16
  OrigDataType: word16
T_196: (in di_366 + 0x0138 : word16)
  Class: Eq_177
  DataType: (memptr (ptr Eq_48) Eq_177)
  OrigDataType: word16
T_197: (in 0x0001 : word16)
  Class: Eq_197
  DataType: word16
  OrigDataType: word16
T_198: (in cx_377 - 0x0001 : word16)
  Class: Eq_198
  DataType: word16
  OrigDataType: word16
T_199: (in cx_369 : word16)
  Class: Eq_198
  DataType: word16
  OrigDataType: word16
T_200: (in 0x0001 : word16)
  Class: Eq_191
  DataType: word16
  OrigDataType: word16
T_201: (in cx_377 != 0x0001 : bool)
  Class: Eq_201
  DataType: bool
  OrigDataType: bool
T_202: (in 0x08 : byte)
  Class: Eq_186
  DataType: byte
  OrigDataType: byte
T_203: (in 0x08 : byte)
  Class: Eq_203
  DataType: byte
  OrigDataType: byte
T_204: (in DPB(cx_369, 0x08, 8, 8) : word16)
  Class: Eq_191
  DataType: word16
  OrigDataType: word16
T_205: (in 0x0001 : word16)
  Class: Eq_205
  DataType: word16
  OrigDataType: word16
T_206: (in cx_323 - 0x0001 : word16)
  Class: Eq_172
  DataType: Eq_172
  OrigDataType: word16
T_207: (in 0xFE02 : word16)
  Class: Eq_172
  DataType: uint16
  OrigDataType: word16
T_208: (in cx_323 != 0xFE02 : bool)
  Class: Eq_208
  DataType: bool
  OrigDataType: bool
T_209: (in 0x0141 : word16)
  Class: Eq_209
  DataType: word16
  OrigDataType: word16
T_210: (in ss : selector)
  Class: Eq_210
  DataType: (ptr Eq_210)
  OrigDataType: (ptr (segment))
T_211: (in fp : ptr16)
  Class: Eq_211
  DataType: Eq_211
  OrigDataType: (union (ptr16 u0) ((memptr T_210 (struct (FFFFFFE8 T_214 tFFFFFFE8))) u1))
T_212: (in 0x0018 : word16)
  Class: Eq_212
  DataType: word16
  OrigDataType: word16
T_213: (in fp - 0x0018 : word16)
  Class: Eq_213
  DataType: word16
  OrigDataType: word16
T_214: (in Mem342[ss:fp - 0x0018:word16] : word16)
  Class: Eq_209
  DataType: word16
  OrigDataType: word16
T_215: (in si_357 : word16)
  Class: Eq_215
  DataType: word16
  OrigDataType: word16
T_216: (in 0x0001 : word16)
  Class: Eq_216
  DataType: uint16
  OrigDataType: uint16
T_217: (in cx_323 >>u 0x0001 : word16)
  Class: Eq_217
  DataType: uint16
  OrigDataType: uint16
T_218: (in (cx_323 >>u 0x0001) + si_144 : word16)
  Class: Eq_215
  DataType: word16
  OrigDataType: word16
T_219: (in cx_363 : int16)
  Class: Eq_219
  DataType: int16
  OrigDataType: word16
T_220: (in 0x00FF : word16)
  Class: Eq_220
  DataType: word16
  OrigDataType: word16
T_221: (in si_357 & 0x00FF : word16)
  Class: Eq_221
  DataType: (memptr (ptr Eq_48) Eq_221)
  OrigDataType: (memptr T_48 (struct (2BE T_224 t02BE)))
T_222: (in 0x02BE : word16)
  Class: Eq_222
  DataType: word16
  OrigDataType: word16
T_223: (in (si_357 & 0x00FF) + 0x02BE : word16)
  Class: Eq_223
  DataType: word16
  OrigDataType: word16
T_224: (in Mem342[ds:(si_357 & 0x00FF) + 0x02BE:byte] : byte)
  Class: Eq_224
  DataType: byte
  OrigDataType: byte
T_225: (in (int16) (ds->*(si_357 & 0x00FF)).b02BE : int16)
  Class: Eq_219
  DataType: int16
  OrigDataType: int16
T_226: (in 0x0000 : word16)
  Class: Eq_226
  DataType: word16
  OrigDataType: word16
T_227: (in cx_323 + 0x0000 : word16)
  Class: Eq_227
  DataType: word16
  OrigDataType: word16
T_228: (in Mem342[ds:cx_323 + 0x0000:byte] : byte)
  Class: Eq_228
  DataType: byte
  OrigDataType: byte
T_229: (in (int16) Mem342[ds:cx_323 + 0x0000:byte] : int16)
  Class: Eq_229
  DataType: int16
  OrigDataType: int16
T_230: (in (int16) Mem342[ds:cx_323 + 0x0000:byte] - cx_363 : word16)
  Class: Eq_230
  DataType: int16
  OrigDataType: int16
T_231: (in 0x0001 : word16)
  Class: Eq_231
  DataType: uint16
  OrigDataType: uint16
T_232: (in (int16) Mem342[ds:cx_323 + 0x0000:byte] - cx_363 >> 0x0001 : word16)
  Class: Eq_232
  DataType: int16
  OrigDataType: int16
T_233: (in si_357 & 0x00FF : word16)
  Class: Eq_233
  DataType: (memptr (ptr Eq_48) Eq_233)
  OrigDataType: (memptr T_48 (struct (2FE T_236 t02FE)))
T_234: (in 0x02FE : word16)
  Class: Eq_234
  DataType: word16
  OrigDataType: word16
T_235: (in (si_357 & 0x00FF) + 0x02FE : word16)
  Class: Eq_235
  DataType: word16
  OrigDataType: word16
T_236: (in Mem342[ds:(si_357 & 0x00FF) + 0x02FE:byte] : byte)
  Class: Eq_236
  DataType: byte
  OrigDataType: byte
T_237: (in (int16) Mem342[ds:(si_357 & 0x00FF) + 0x02FE:byte] : int16)
  Class: Eq_237
  DataType: int16
  OrigDataType: int16
T_238: (in 0x0001 : word16)
  Class: Eq_238
  DataType: uint16
  OrigDataType: uint16
T_239: (in (int16) Mem342[ds:(si_357 & 0x00FF) + 0x02FE:byte] >> 0x0001 : word16)
  Class: Eq_239
  DataType: int16
  OrigDataType: int16
T_240: (in 0x0141 : word16)
  Class: Eq_240
  DataType: int16
  OrigDataType: int16
T_241: (in ((int16) Mem342[ds:(si_357 & 0x00FF) + 0x02FE:byte] >> 0x0001) *s 0x0141 : int32)
  Class: Eq_241
  DataType: int32
  OrigDataType: int32
T_242: (in (word16) (((int16) Mem342[ds:(si_357 & 0x00FF) + 0x02FE:byte] >> 0x0001) *s 0x0141) : word16)
  Class: Eq_242
  DataType: word16
  OrigDataType: word16
T_243: (in ((int16) Mem342[ds:cx_323 + 0x0000:byte] - cx_363 >> 0x0001) + (word16) (((int16) Mem342[ds:(si_357 & 0x00FF) + 0x02FE:byte] >> 0x0001) *s 0x0141) : word16)
  Class: Eq_177
  DataType: (memptr (ptr Eq_48) Eq_177)
  OrigDataType: word16
T_244: (in 0x08 : byte)
  Class: Eq_244
  DataType: byte
  OrigDataType: byte
T_245: (in DPB(cx_363, 0x08, 0, 8) : word16)
  Class: Eq_198
  DataType: word16
  OrigDataType: word16
T_246: (in cx_411 : word16)
  Class: Eq_246
  DataType: word16
  OrigDataType: word16
T_247: (in 0xAF : byte)
  Class: Eq_247
  DataType: byte
  OrigDataType: byte
T_248: (in DPB(cx_323, 0xAF, 8, 8) : word16)
  Class: Eq_246
  DataType: word16
  OrigDataType: word16
T_249: (in di_412 : (memptr (ptr Eq_256) Eq_249))
  Class: Eq_249
  DataType: (memptr (ptr Eq_256) Eq_249)
  OrigDataType: (memptr T_256 (struct 0001 (0 T_259 t0000)))
T_250: (in 0x2580 : word16)
  Class: Eq_249
  DataType: (memptr (ptr Eq_256) Eq_249)
  OrigDataType: word16
T_251: (in si_413 : (memptr (ptr Eq_48) byte))
  Class: Eq_251
  DataType: (memptr (ptr Eq_48) byte)
  OrigDataType: (memptr T_48 (struct 0001 (0 T_255 t0000)))
T_252: (in 0x03FE : word16)
  Class: Eq_251
  DataType: (memptr (ptr Eq_48) byte)
  OrigDataType: word16
T_253: (in 0x0000 : word16)
  Class: Eq_253
  DataType: word16
  OrigDataType: word16
T_254: (in si_413 + 0x0000 : word16)
  Class: Eq_254
  DataType: word16
  OrigDataType: word16
T_255: (in Mem382[ds:si_413 + 0x0000:byte] : byte)
  Class: Eq_255
  DataType: byte
  OrigDataType: byte
T_256: (in 0xA000 : selector)
  Class: Eq_256
  DataType: (ptr Eq_256)
  OrigDataType: (ptr (segment (2580 (arr T_290) a2580)))
T_257: (in 0x0000 : word16)
  Class: Eq_257
  DataType: word16
  OrigDataType: word16
T_258: (in di_412 + 0x0000 : word16)
  Class: Eq_258
  DataType: word16
  OrigDataType: word16
T_259: (in Mem382[0xA000:di_412 + 0x0000:byte] : byte)
  Class: Eq_259
  DataType: Eq_259
  OrigDataType: byte
T_260: (in ds->*si_413 + (0xA000->*di_412).t0000 : byte)
  Class: Eq_260
  DataType: uint8
  OrigDataType: uint8
T_261: (in 0x01 : byte)
  Class: Eq_261
  DataType: uint8
  OrigDataType: uint8
T_262: (in ds->*si_413 + (0xA000->*di_412).t0000 >>u 0x01 : word16)
  Class: Eq_259
  DataType: Eq_259
  OrigDataType: uint16
T_263: (in 0x0000 : word16)
  Class: Eq_263
  DataType: word16
  OrigDataType: word16
T_264: (in di_412 + 0x0000 : word16)
  Class: Eq_264
  DataType: word16
  OrigDataType: word16
T_265: (in Mem423[0xA000:di_412 + 0x0000:byte] : byte)
  Class: Eq_259
  DataType: Eq_259
  OrigDataType: byte
T_266: (in 0x0001 : word16)
  Class: Eq_266
  DataType: word16
  OrigDataType: word16
T_267: (in si_413 + 0x0001 : word16)
  Class: Eq_251
  DataType: (memptr (ptr Eq_48) byte)
  OrigDataType: word16
T_268: (in 0x0001 : word16)
  Class: Eq_268
  DataType: word16
  OrigDataType: word16
T_269: (in di_412 + 0x0001 : word16)
  Class: Eq_249
  DataType: (memptr (ptr Eq_256) Eq_249)
  OrigDataType: word16
T_270: (in 0x0001 : word16)
  Class: Eq_270
  DataType: word16
  OrigDataType: word16
T_271: (in cx_411 - 0x0001 : word16)
  Class: Eq_246
  DataType: word16
  OrigDataType: word16
T_272: (in 0x0000 : word16)
  Class: Eq_246
  DataType: word16
  OrigDataType: word16
T_273: (in cx_411 != 0x0000 : bool)
  Class: Eq_273
  DataType: bool
  OrigDataType: bool
T_274: (in ax_444 : int16)
  Class: Eq_274
  DataType: int16
  OrigDataType: word16
T_275: (in __inb : ptr32)
  Class: Eq_275
  DataType: (ptr Eq_275)
  OrigDataType: (ptr (fn T_277 (T_276)))
T_276: (in 0x60 : byte)
  Class: Eq_276
  DataType: byte
  OrigDataType: byte
T_277: (in __inb(0x60) : byte)
  Class: Eq_277
  DataType: byte
  OrigDataType: byte
T_278: (in (int16) __inb(0x60) : int16)
  Class: Eq_274
  DataType: int16
  OrigDataType: int16
T_279: (in 0x0001 : word16)
  Class: Eq_279
  DataType: word16
  OrigDataType: word16
T_280: (in ax_444 - 0x0001 : word16)
  Class: Eq_51
  DataType: Eq_51
  OrigDataType: word16
T_281: (in 0x0001 : word16)
  Class: Eq_274
  DataType: int16
  OrigDataType: word16
T_282: (in ax_444 != 0x0001 : bool)
  Class: Eq_282
  DataType: bool
  OrigDataType: bool
T_283: (in __syscall : ptr32)
  Class: Eq_283
  DataType: (ptr Eq_283)
  OrigDataType: (ptr (fn T_285 (T_284)))
T_284: (in 0x10 : byte)
  Class: Eq_284
  DataType: byte
  OrigDataType: byte
T_285: (in __syscall(0x10) : void)
  Class: Eq_285
  DataType: void
  OrigDataType: void
T_286:
  Class: Eq_286
  DataType: byte
  OrigDataType: (struct 0001 (0 T_75 t0000))
T_287:
  Class: Eq_287
  DataType: byte
  OrigDataType: (struct 0001 (0 T_78 t0000))
T_288:
  Class: Eq_288
  DataType: byte
  OrigDataType: (struct 0001 (0 T_228 t0000))
T_289:
  Class: Eq_289
  DataType: byte
  OrigDataType: (struct 0001 (0 T_255 t0000))
T_290:
  Class: Eq_290
  DataType: Eq_290
  OrigDataType: (struct 0001 (0 T_259 t0000))
T_291:
  Class: Eq_290
  DataType: Eq_290
  OrigDataType: (struct 0001 (0 T_265 t0000))
T_292:
  Class: Eq_292
  DataType: Eq_292
  OrigDataType: 
T_293:
  Class: Eq_293
  DataType: Eq_293
  OrigDataType: 
*/
typedef Eq_256 Eq_1struct Globals {
	Eq_256 * ptrFFFA0000;	// FFFA0000
} Eq_1;

typedef void (Eq_2)(byte);

typedef void (Eq_7)(word16, byte);

typedef void (Eq_24)(uint16, bcu8);

typedef  Eq_48[][][][]struct Eq_48 {
	byte a01FE[];	// 1FE
	byte a0200[];	// 200
	word16 w02FE;	// 2FE
	byte a0300[];	// 300
	byte a03FE[];	// 3FE
} Eq_48;

typedef union Eq_51 {
	int16 u0;
	Eq_292 Eq_48::* u1;
} Eq_51;

typedef struct Eq_57 {	// size: 1 1
	byte bFFFFFF00;	// FFFFFF00
	byte b0000;	// 0
} Eq_57;

typedef word16 (Eq_65)(word16, word16, byte);

typedef Eq_143 Eq_85struct Eq_85 {	// size: 1 1
	Eq_143 t0000;	// 0
} Eq_85;

typedef struct Eq_98 {
	byte b02BE;	// 2BE
	byte b02FE;	// 2FE
} Eq_98;

typedef struct Eq_126 {
	int8 b02BE;	// 2BE
} Eq_126;

typedef union Eq_143 {
	int16 u0;
	byte u1;
} Eq_143;

typedef union Eq_146 {
	int8 u0;
	int16 u1;
} Eq_146;

typedef union Eq_172 {
	uint16 u0;
	byte Eq_48::* u1;
} Eq_172;

typedef struct Eq_177 {	// size: 1 1
	byte b5C1E;	// 5C1E
} Eq_177;

typedef struct Eq_210 {
} Eq_210;

typedef union Eq_211 {
	ptr16 u0;
	Eq_293 Eq_210::* u1;
} Eq_211;

typedef struct Eq_221 {
	byte b02BE;	// 2BE
} Eq_221;

typedef struct Eq_233 {
	byte b02FE;	// 2FE
} Eq_233;

typedef Eq_259 Eq_249struct Eq_249 {	// size: 1 1
	Eq_259 t0000;	// 0
} Eq_249;

typedef Eq_290 Eq_256[]struct Eq_256 {
	Eq_290 a2580[];	// 2580
} Eq_256;

typedef union Eq_259 {
	uint16 u0;
	byte u1;
} Eq_259;

typedef byte (Eq_275)(byte);

typedef void (Eq_283)(byte);

typedef Eq_259 Eq_290struct Eq_290 {	// size: 1 1
	Eq_259 t0000;	// 0
} Eq_290;

typedef struct Eq_292 {
	byte b02BE;	// 2BE
} Eq_292;

typedef struct Eq_293 {
	word16 wFFFFFFE8;	// FFFFFFE8
} Eq_293;

