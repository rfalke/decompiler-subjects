// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_297/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr (struct "Globals")))
Eq_3: (segment "Eq_3")
	T_3 (in ds : (ptr Eq_3))
Eq_9: (fn void (byte))
	T_9 (in bios_video_set_mode : ptr32)
	T_10 (in signature of bios_video_set_mode : void)
Eq_14: (segment "Eq_14")
	T_14 (in dx_12 : (ptr Eq_14))
	T_19 (in DPB(dx, dh + 0x13, 8, 8) : word16)
	T_20 (in dx_15 : (ptr Eq_14))
	T_23 (in DPB(dx, dh + 0x26, 8, 8) : word16)
	T_150 (in ds_135 : (ptr Eq_14))
	T_180 (in Mem60[ss:sp_122 + 0x0000:selector] : selector)
	T_198 (in Mem170[ss:sp_122 + 0x0000:word16] : word16)
Eq_26: (fn void (word16, Eq_27))
	T_26 (in __outb : ptr32)
Eq_27: (union "Eq_27" (int16 u0) (uint8 u1))
	T_27 (in al_181 : Eq_27)
	T_52 (in (byte) (bl_31 *u al_181 >>u 0x0007) : byte)
	T_54 (in ~(bl_31 >> 0x01) : byte)
	T_59 (in bl_31 >> 0x01 : word16)
Eq_31: (fn void (word16, byte))
	T_31 (in __outb : ptr32)
Eq_40: (union "Eq_40" (int8 u0) (uint8 u1))
	T_40 (in bl_31 : Eq_40)
	T_58 (in (byte) bx_30 : byte)
Eq_42: (union "Eq_42" (int8 u0) (int16 u1))
	T_42 (in bl_31 >> 0x01 : word16)
	T_43 (in 0x00 : byte)
Eq_45: (fn void (word16, Eq_27))
	T_45 (in __outb : ptr32)
Eq_60: (union "Eq_60" (int16 u0) (byte u1))
	T_60 (in bl_31 >> 0x01 : word16)
	T_61 (in 0x00 : byte)
Eq_67: (union "Eq_67" (int16 u0) ((memptr (ptr Eq_14) Eq_201) u1))
	T_67 (in di : Eq_67)
	T_70 (in Mem59[dx_12:di + 0x91B8:word16] : word16)
	T_75 (in di + 0x0002 : word16)
Eq_81: (fn word16 (int16, (memptr (ptr Eq_14) Eq_82), byte))
	T_81 (in __shld : ptr32)
Eq_82: (struct "Eq_82" (0 Eq_109 t0000) (1 byte b0001))
	T_82 (in si : (memptr (ptr Eq_14) Eq_82))
Eq_86: (fn word16 (byte))
	T_86 (in __aam : ptr32)
Eq_98: (union "Eq_98" (uint16 u0) ((memptr (ptr Eq_14) Eq_202) u1))
	T_98 (in (uint16) (byte) (di *s 0x0003 - bx_67 + DPB(bx_67, (dx_12->*si).b0001, 0, 8) >>u 0x000C) : uint16)
Eq_104: (fn byte (byte, byte))
	T_104 (in __ror : ptr32)
Eq_109: (union "Eq_109" (int16 u0) (uint16 u1))
	T_109 (in ax_90 : Eq_109)
	T_112 (in Mem60[dx_15:si + 0x0000:word16] : word16)
	T_119 (in Mem60[dx_12:si + 0x0000:word16] : word16)
	T_136 (in Mem60[dx_12:si + 0x0000:word16] : word16)
	T_168 (in Mem145[ds_135:si + 0x0000:word16] : word16)
	T_169 (in (ds_135->*si).t0000 - ax_115 : word16)
	T_172 (in Mem170[ds_135:si + 0x0000:word16] : word16)
	T_184 (in Mem60[ds_135:si + 0x0000:word16] : word16)
	T_185 (in __xadd((ds_135->*si).t0000, bp_113) : word16)
	T_188 (in Mem145[ds_135:si + 0x0000:word16] : word16)
	T_195 (in Mem170[ds_135:si + 0x0000:word16] : word16)
Eq_122: (union "Eq_122" (uint8 u0) (uint16 u1))
	T_122 (in cl_128 : Eq_122)
	T_125 (in (byte) (ax_84 | 0x2020) : byte)
	T_174 (in cl_128 >>u 0x06 : word16)
	T_175 (in 0x00 : byte)
Eq_138: (union "Eq_138" (int16 u0) (uint16 u1))
	T_138 (in (dx_12->*si).t0000 *s 0xFFFF : int16)
Eq_151: (union "Eq_151" (int16 u0) (uint16 u1) ((memptr (ptr Eq_14) uint16) u2))
	T_151 (in bx_143 : Eq_151)
	T_157 (in -bx_143 : word16)
	T_158 (in 0x0000 : word16)
	T_161 (in bx_143 >>u 0x0007 : word16)
	T_191 (in 0x0140 : word16)
Eq_177: (segment "Eq_177")
	T_177 (in ss : selector)
Eq_181: (fn Eq_109 (Eq_109, int16))
	T_181 (in __xadd : ptr32)
Eq_192: (fn word16 (Eq_109, (ptr Eq_14), byte))
	T_192 (in __shrd : ptr32)
Eq_201: (struct "Eq_201" 0002 (0 word16 w0000) (91B8 Eq_67 t91B8))
	T_201
Eq_202: (struct "Eq_202" (1F0 byte b01F0))
	T_202
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr Eq_1)
  OrigDataType: (ptr (struct "Globals"))
T_2: (in cx_28 : int16)
  Class: Eq_2
  DataType: int16
  OrigDataType: int16
T_3: (in ds : (ptr Eq_3))
  Class: Eq_3
  DataType: (ptr Eq_3)
  OrigDataType: (ptr (segment))
T_4: (in bx : (memptr (ptr Eq_3) segptr32))
  Class: Eq_4
  DataType: (memptr (ptr Eq_3) segptr32)
  OrigDataType: (memptr T_3 (struct (0 T_7 t0000)))
T_5: (in 0x0000 : word16)
  Class: Eq_5
  DataType: word16
  OrigDataType: word16
T_6: (in bx + 0x0000 : word16)
  Class: Eq_6
  DataType: word16
  OrigDataType: word16
T_7: (in Mem0[ds:bx + 0x0000:segptr32] : segptr32)
  Class: Eq_7
  DataType: segptr32
  OrigDataType: segptr32
T_8: (in (word16) (ds->*bx) : word16)
  Class: Eq_2
  DataType: int16
  OrigDataType: word16
T_9: (in bios_video_set_mode : ptr32)
  Class: Eq_9
  DataType: (ptr Eq_9)
  OrigDataType: (ptr (fn T_13 (T_12)))
T_10: (in signature of bios_video_set_mode : void)
  Class: Eq_9
  DataType: (ptr Eq_9)
  OrigDataType: 
T_11: (in al : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_12: (in 0x13 : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_13: (in bios_video_set_mode(0x13) : void)
  Class: Eq_13
  DataType: void
  OrigDataType: void
T_14: (in dx_12 : (ptr Eq_14))
  Class: Eq_14
  DataType: (ptr Eq_14)
  OrigDataType: word16
T_15: (in dx : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_16: (in dh : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_17: (in 0x13 : byte)
  Class: Eq_17
  DataType: byte
  OrigDataType: byte
T_18: (in dh + 0x13 : byte)
  Class: Eq_18
  DataType: byte
  OrigDataType: byte
T_19: (in DPB(dx, dh + 0x13, 8, 8) : word16)
  Class: Eq_14
  DataType: (ptr Eq_14)
  OrigDataType: word16
T_20: (in dx_15 : (ptr Eq_14))
  Class: Eq_14
  DataType: (ptr Eq_14)
  OrigDataType: word16
T_21: (in 0x26 : byte)
  Class: Eq_21
  DataType: byte
  OrigDataType: byte
T_22: (in dh + 0x26 : byte)
  Class: Eq_22
  DataType: byte
  OrigDataType: byte
T_23: (in DPB(dx, dh + 0x26, 8, 8) : word16)
  Class: Eq_14
  DataType: (ptr Eq_14)
  OrigDataType: word16
T_24: (in dx_18 : word16)
  Class: Eq_24
  DataType: word16
  OrigDataType: word16
T_25: (in 0x03C8 : word16)
  Class: Eq_24
  DataType: word16
  OrigDataType: word16
T_26: (in __outb : ptr32)
  Class: Eq_26
  DataType: (ptr Eq_26)
  OrigDataType: (ptr (fn T_28 (T_24, T_27)))
T_27: (in al_181 : Eq_27)
  Class: Eq_27
  DataType: Eq_27
  OrigDataType: uint8
T_28: (in __outb(dx_18, al_181) : void)
  Class: Eq_28
  DataType: void
  OrigDataType: void
T_29: (in ax_44 : uint16)
  Class: Eq_29
  DataType: uint16
  OrigDataType: uint16
T_30: (in al_181 *u al_181 : uint16)
  Class: Eq_29
  DataType: uint16
  OrigDataType: uint16
T_31: (in __outb : ptr32)
  Class: Eq_31
  DataType: (ptr Eq_31)
  OrigDataType: (ptr (fn T_35 (T_24, T_34)))
T_32: (in 0x0006 : word16)
  Class: Eq_32
  DataType: uint16
  OrigDataType: uint16
T_33: (in ax_44 >>u 0x0006 : word16)
  Class: Eq_33
  DataType: uint16
  OrigDataType: uint16
T_34: (in (byte) (ax_44 >>u 0x0006) : byte)
  Class: Eq_34
  DataType: byte
  OrigDataType: byte
T_35: (in __outb(dx_18, (byte) (ax_44 >>u 0x0006)) : void)
  Class: Eq_35
  DataType: void
  OrigDataType: void
T_36: (in 0x0001 : word16)
  Class: Eq_36
  DataType: word16
  OrigDataType: word16
T_37: (in cx_28 - 0x0001 : word16)
  Class: Eq_2
  DataType: int16
  OrigDataType: word16
T_38: (in 0x0000 : word16)
  Class: Eq_2
  DataType: int16
  OrigDataType: word16
T_39: (in cx_28 != 0x0000 : bool)
  Class: Eq_39
  DataType: bool
  OrigDataType: bool
T_40: (in bl_31 : Eq_40)
  Class: Eq_40
  DataType: Eq_40
  OrigDataType: (union (int8 u0) (uint8 u1))
T_41: (in 0x01 : byte)
  Class: Eq_41
  DataType: uint8
  OrigDataType: uint8
T_42: (in bl_31 >> 0x01 : word16)
  Class: Eq_42
  DataType: Eq_42
  OrigDataType: int16
T_43: (in 0x00 : byte)
  Class: Eq_42
  DataType: int8
  OrigDataType: int8
T_44: (in bl_31 >> 0x01 >= 0x00 : bool)
  Class: Eq_44
  DataType: bool
  OrigDataType: bool
T_45: (in __outb : ptr32)
  Class: Eq_45
  DataType: (ptr Eq_45)
  OrigDataType: (ptr (fn T_46 (T_24, T_27)))
T_46: (in __outb(dx_18, al_181) : void)
  Class: Eq_46
  DataType: void
  OrigDataType: void
T_47: (in 0xC9 : byte)
  Class: Eq_47
  DataType: byte
  OrigDataType: byte
T_48: (in DPB(dx_18, 0xC9, 0, 8) : word16)
  Class: Eq_24
  DataType: word16
  OrigDataType: word16
T_49: (in bl_31 *u al_181 : uint16)
  Class: Eq_49
  DataType: uint16
  OrigDataType: uint16
T_50: (in 0x0007 : word16)
  Class: Eq_50
  DataType: uint16
  OrigDataType: uint16
T_51: (in bl_31 *u al_181 >>u 0x0007 : word16)
  Class: Eq_51
  DataType: uint16
  OrigDataType: uint16
T_52: (in (byte) (bl_31 *u al_181 >>u 0x0007) : byte)
  Class: Eq_27
  DataType: Eq_27
  OrigDataType: byte
T_53: (in bl_31 >> 0x01 : word16)
  Class: Eq_53
  DataType: int16
  OrigDataType: int16
T_54: (in ~(bl_31 >> 0x01) : byte)
  Class: Eq_27
  DataType: Eq_27
  OrigDataType: byte
T_55: (in bx_30 : int16)
  Class: Eq_55
  DataType: int16
  OrigDataType: word16
T_56: (in 0xFFFC : word16)
  Class: Eq_56
  DataType: int16
  OrigDataType: int16
T_57: (in cx_28 *s 0xFFFC : int16)
  Class: Eq_55
  DataType: int16
  OrigDataType: int16
T_58: (in (byte) bx_30 : byte)
  Class: Eq_40
  DataType: Eq_40
  OrigDataType: byte
T_59: (in bl_31 >> 0x01 : word16)
  Class: Eq_27
  DataType: Eq_27
  OrigDataType: int16
T_60: (in bl_31 >> 0x01 : word16)
  Class: Eq_60
  DataType: Eq_60
  OrigDataType: int16
T_61: (in 0x00 : byte)
  Class: Eq_60
  DataType: byte
  OrigDataType: byte
T_62: (in bl_31 >> 0x01 == 0x00 : bool)
  Class: Eq_62
  DataType: bool
  OrigDataType: bool
T_63: (in ax_54 : word16)
  Class: Eq_63
  DataType: word16
  OrigDataType: word16
T_64: (in ax_44 >>u 0x0006 : word16)
  Class: Eq_64
  DataType: uint16
  OrigDataType: uint16
T_65: (in 0x12 : byte)
  Class: Eq_65
  DataType: byte
  OrigDataType: byte
T_66: (in DPB(ax_44 >>u 0x0006, 0x12, 8, 8) : word16)
  Class: Eq_63
  DataType: word16
  OrigDataType: word16
T_67: (in di : Eq_67)
  Class: Eq_67
  DataType: Eq_67
  OrigDataType: (union (int16 u0) ((memptr T_14 (struct 0002 (0 T_73 t0000) (91B8 T_70 t91B8))) u1))
T_68: (in 0x91B8 : word16)
  Class: Eq_68
  DataType: word16
  OrigDataType: word16
T_69: (in di + 0x91B8 : word16)
  Class: Eq_69
  DataType: word16
  OrigDataType: word16
T_70: (in Mem59[dx_12:di + 0x91B8:word16] : word16)
  Class: Eq_67
  DataType: Eq_67
  OrigDataType: word16
T_71: (in 0x0000 : word16)
  Class: Eq_71
  DataType: word16
  OrigDataType: word16
T_72: (in di + 0x0000 : word16)
  Class: Eq_72
  DataType: word16
  OrigDataType: word16
T_73: (in Mem60[dx_15:di + 0x0000:word16] : word16)
  Class: Eq_63
  DataType: word16
  OrigDataType: word16
T_74: (in 0x0002 : word16)
  Class: Eq_74
  DataType: word16
  OrigDataType: word16
T_75: (in di + 0x0002 : word16)
  Class: Eq_67
  DataType: Eq_67
  OrigDataType: word16
T_76: (in 0x0001 : word16)
  Class: Eq_76
  DataType: word16
  OrigDataType: word16
T_77: (in cx_28 - 0x0001 : word16)
  Class: Eq_2
  DataType: int16
  OrigDataType: word16
T_78: (in 0x0000 : word16)
  Class: Eq_2
  DataType: int16
  OrigDataType: word16
T_79: (in cx_28 != 0x0000 : bool)
  Class: Eq_79
  DataType: bool
  OrigDataType: bool
T_80: (in bx_67 : word16)
  Class: Eq_80
  DataType: word16
  OrigDataType: word16
T_81: (in __shld : ptr32)
  Class: Eq_81
  DataType: (ptr Eq_81)
  OrigDataType: (ptr (fn T_84 (T_55, T_82, T_83)))
T_82: (in si : (memptr (ptr Eq_14) Eq_82))
  Class: Eq_82
  DataType: (memptr (ptr Eq_14) Eq_82)
  OrigDataType: (memptr T_14 (struct (0 T_109 t0000) (1 T_92 t0001)))
T_83: (in 0x08 : byte)
  Class: Eq_83
  DataType: byte
  OrigDataType: byte
T_84: (in __shld(bx_30, si, 0x08) : word16)
  Class: Eq_80
  DataType: word16
  OrigDataType: word16
T_85: (in ax_80 : word16)
  Class: Eq_85
  DataType: word16
  OrigDataType: word16
T_86: (in __aam : ptr32)
  Class: Eq_86
  DataType: (ptr Eq_86)
  OrigDataType: (ptr (fn T_102 (T_101)))
T_87: (in 0x0003 : word16)
  Class: Eq_87
  DataType: int16
  OrigDataType: int16
T_88: (in di *s 0x0003 : int16)
  Class: Eq_88
  DataType: int16
  OrigDataType: int16
T_89: (in di *s 0x0003 - bx_67 : word16)
  Class: Eq_89
  DataType: word16
  OrigDataType: word16
T_90: (in 0x0001 : word16)
  Class: Eq_90
  DataType: word16
  OrigDataType: word16
T_91: (in si + 0x0001 : word16)
  Class: Eq_91
  DataType: word16
  OrigDataType: word16
T_92: (in Mem60[dx_12:si + 0x0001:byte] : byte)
  Class: Eq_92
  DataType: byte
  OrigDataType: byte
T_93: (in DPB(bx_67, (dx_12->*si).b0001, 0, 8) : word16)
  Class: Eq_93
  DataType: word16
  OrigDataType: word16
T_94: (in di *s 0x0003 - bx_67 + DPB(bx_67, (dx_12->*si).b0001, 0, 8) : word16)
  Class: Eq_94
  DataType: uint16
  OrigDataType: uint16
T_95: (in 0x000C : word16)
  Class: Eq_95
  DataType: uint16
  OrigDataType: uint16
T_96: (in di *s 0x0003 - bx_67 + DPB(bx_67, (dx_12->*si).b0001, 0, 8) >>u 0x000C : word16)
  Class: Eq_96
  DataType: uint16
  OrigDataType: uint16
T_97: (in (byte) (di *s 0x0003 - bx_67 + DPB(bx_67, (dx_12->*si).b0001, 0, 8) >>u 0x000C) : byte)
  Class: Eq_97
  DataType: byte
  OrigDataType: byte
T_98: (in (uint16) (byte) (di *s 0x0003 - bx_67 + DPB(bx_67, (dx_12->*si).b0001, 0, 8) >>u 0x000C) : uint16)
  Class: Eq_98
  DataType: Eq_98
  OrigDataType: (union (uint16 u0) ((memptr T_14 (struct (1F0 T_101 t01F0))) u1))
T_99: (in 0x01F0 : word16)
  Class: Eq_99
  DataType: word16
  OrigDataType: word16
T_100: (in (uint16) (byte) (di *s 0x0003 - bx_67 + DPB(bx_67, (dx_12->*si).b0001, 0, 8) >>u 0x000C) + 0x01F0 : word16)
  Class: Eq_100
  DataType: word16
  OrigDataType: word16
T_101: (in Mem60[dx_12:(uint16) (byte) (di *s 0x0003 - bx_67 + DPB(bx_67, (dx_12->*si).b0001, 0, 8) >>u 0x000C) + 0x01F0:byte] : byte)
  Class: Eq_101
  DataType: byte
  OrigDataType: byte
T_102: (in __aam(Mem60[dx_12:(uint16) (byte) (di *s 0x0003 - bx_67 + DPB(bx_67, (dx_12->*si).b0001, 0, 8) >>u 0x000C) + 0x01F0:byte]) : word16)
  Class: Eq_85
  DataType: word16
  OrigDataType: word16
T_103: (in ax_84 : word16)
  Class: Eq_103
  DataType: word16
  OrigDataType: word16
T_104: (in __ror : ptr32)
  Class: Eq_104
  DataType: (ptr Eq_104)
  OrigDataType: (ptr (fn T_107 (T_105, T_106)))
T_105: (in (byte) ax_80 : byte)
  Class: Eq_105
  DataType: byte
  OrigDataType: byte
T_106: (in 0x02 : byte)
  Class: Eq_106
  DataType: byte
  OrigDataType: byte
T_107: (in __ror((byte) ax_80, 0x02) : byte)
  Class: Eq_107
  DataType: byte
  OrigDataType: byte
T_108: (in DPB(ax_80, __ror((byte) ax_80, 0x02), 0, 8) : word16)
  Class: Eq_103
  DataType: word16
  OrigDataType: word16
T_109: (in ax_90 : Eq_109)
  Class: Eq_109
  DataType: Eq_109
  OrigDataType: uint16
T_110: (in 0x0000 : word16)
  Class: Eq_110
  DataType: word16
  OrigDataType: word16
T_111: (in si + 0x0000 : word16)
  Class: Eq_111
  DataType: word16
  OrigDataType: word16
T_112: (in Mem60[dx_15:si + 0x0000:word16] : word16)
  Class: Eq_109
  DataType: Eq_109
  OrigDataType: word16
T_113: (in dx_94 : uint16)
  Class: Eq_113
  DataType: uint16
  OrigDataType: uint16
T_114: (in ax_90 *u ax_90 : uint32)
  Class: Eq_114
  DataType: uint32
  OrigDataType: uint32
T_115: (in SLICE(ax_90 *u ax_90, word16, 16) : word16)
  Class: Eq_113
  DataType: uint16
  OrigDataType: word16
T_116: (in dx_99 : int16)
  Class: Eq_116
  DataType: int16
  OrigDataType: int16
T_117: (in 0x0000 : word16)
  Class: Eq_117
  DataType: word16
  OrigDataType: word16
T_118: (in si + 0x0000 : word16)
  Class: Eq_118
  DataType: word16
  OrigDataType: word16
T_119: (in Mem60[dx_12:si + 0x0000:word16] : word16)
  Class: Eq_109
  DataType: Eq_109
  OrigDataType: uint16
T_120: (in (dx_12->*si).t0000 *u dx_94 : uint32)
  Class: Eq_120
  DataType: uint32
  OrigDataType: uint32
T_121: (in SLICE((dx_12->*si).t0000 *u dx_94, word16, 16) : word16)
  Class: Eq_116
  DataType: int16
  OrigDataType: word16
T_122: (in cl_128 : Eq_122)
  Class: Eq_122
  DataType: Eq_122
  OrigDataType: (union (uint8 u0) (uint16 u1))
T_123: (in 0x2020 : word16)
  Class: Eq_123
  DataType: word16
  OrigDataType: word16
T_124: (in ax_84 | 0x2020 : word16)
  Class: Eq_124
  DataType: word16
  OrigDataType: word16
T_125: (in (byte) (ax_84 | 0x2020) : byte)
  Class: Eq_122
  DataType: Eq_122
  OrigDataType: byte
T_126: (in bp_113 : int16)
  Class: Eq_126
  DataType: int16
  OrigDataType: int16
T_127: (in 0x0003 : word16)
  Class: Eq_127
  DataType: int16
  OrigDataType: int16
T_128: (in dx_99 *s 0x0003 : int16)
  Class: Eq_128
  DataType: int16
  OrigDataType: int16
T_129: (in ax_84 | 0x2020 : word16)
  Class: Eq_129
  DataType: uint16
  OrigDataType: uint16
T_130: (in (ax_84 | 0x2020) *u ax_90 : uint32)
  Class: Eq_130
  DataType: uint32
  OrigDataType: uint32
T_131: (in SLICE((ax_84 | 0x2020) *u ax_90, word16, 16) : word16)
  Class: Eq_131
  DataType: word16
  OrigDataType: word16
T_132: (in dx_99 *s 0x0003 - SLICE((ax_84 | 0x2020) *u ax_90, word16, 16) : word16)
  Class: Eq_126
  DataType: int16
  OrigDataType: word16
T_133: (in ax_115 : int16)
  Class: Eq_126
  DataType: int16
  OrigDataType: int16
T_134: (in 0x0000 : word16)
  Class: Eq_134
  DataType: word16
  OrigDataType: word16
T_135: (in si + 0x0000 : word16)
  Class: Eq_135
  DataType: word16
  OrigDataType: word16
T_136: (in Mem60[dx_12:si + 0x0000:word16] : word16)
  Class: Eq_109
  DataType: Eq_109
  OrigDataType: int16
T_137: (in 0xFFFF : word16)
  Class: Eq_137
  DataType: int16
  OrigDataType: int16
T_138: (in (dx_12->*si).t0000 *s 0xFFFF : int16)
  Class: Eq_138
  DataType: Eq_138
  OrigDataType: (union (int16 u0) (uint16 u1))
T_139: (in 0x0A : byte)
  Class: Eq_139
  DataType: byte
  OrigDataType: byte
T_140: (in DPB(dx_94, 0x0A, 8, 8) : word16)
  Class: Eq_140
  DataType: uint16
  OrigDataType: uint16
T_141: (in (dx_12->*si).t0000 *s 0xFFFF *u DPB(dx_94, 0x0A, 8, 8) : uint32)
  Class: Eq_141
  DataType: uint32
  OrigDataType: uint32
T_142: (in SLICE((dx_12->*si).t0000 *s 0xFFFF *u DPB(dx_94, 0x0A, 8, 8), word16, 16) : word16)
  Class: Eq_142
  DataType: word16
  OrigDataType: word16
T_143: (in dx_99 *s 0x0003 : int16)
  Class: Eq_143
  DataType: int16
  OrigDataType: int16
T_144: (in SLICE((dx_12->*si).t0000 *s 0xFFFF *u DPB(dx_94, 0x0A, 8, 8), word16, 16) - dx_99 *s 0x0003 : word16)
  Class: Eq_126
  DataType: int16
  OrigDataType: word16
T_145: (in sp_122 : (memptr (ptr Eq_177) (ptr Eq_14)))
  Class: Eq_145
  DataType: (memptr (ptr Eq_177) (ptr Eq_14))
  OrigDataType: (memptr T_177 (struct 0002 (0 T_14 t0000)))
T_146: (in fp : ptr16)
  Class: Eq_146
  DataType: ptr16
  OrigDataType: ptr16
T_147: (in 0x0006 : word16)
  Class: Eq_147
  DataType: word16
  OrigDataType: word16
T_148: (in fp - 0x0006 : word16)
  Class: Eq_145
  DataType: (memptr (ptr Eq_177) (ptr Eq_14))
  OrigDataType: word16
T_149: (in ax_138 : int16)
  Class: Eq_126
  DataType: int16
  OrigDataType: int16
T_150: (in ds_135 : (ptr Eq_14))
  Class: Eq_14
  DataType: (ptr Eq_14)
  OrigDataType: (ptr (segment))
T_151: (in bx_143 : Eq_151)
  Class: Eq_151
  DataType: Eq_151
  OrigDataType: (union (int16 u0) (uint16 u1) ((memptr T_150 (struct (0 T_153 t0000))) u2))
T_152: (in bx_143 + si : word16)
  Class: Eq_152
  DataType: word16
  OrigDataType: word16
T_153: (in Mem145[ds_135:bx_143 + si:word16] : word16)
  Class: Eq_153
  DataType: uint16
  OrigDataType: uint16
T_154: (in 0x0002 : word16)
  Class: Eq_154
  DataType: uint16
  OrigDataType: uint16
T_155: (in Mem145[ds_135:bx_143 + si:word16] >>u 0x0002 : word16)
  Class: Eq_155
  DataType: uint16
  OrigDataType: uint16
T_156: (in ax_138 - (Mem145[ds_135:bx_143 + si:word16] >>u 0x0002) : word16)
  Class: Eq_126
  DataType: int16
  OrigDataType: word16
T_157: (in -bx_143 : word16)
  Class: Eq_151
  DataType: Eq_151
  OrigDataType: int16
T_158: (in 0x0000 : word16)
  Class: Eq_151
  DataType: int16
  OrigDataType: int16
T_159: (in bx_143 < 0x0000 : bool)
  Class: Eq_159
  DataType: bool
  OrigDataType: bool
T_160: (in 0x0007 : word16)
  Class: Eq_160
  DataType: uint16
  OrigDataType: uint16
T_161: (in bx_143 >>u 0x0007 : word16)
  Class: Eq_151
  DataType: Eq_151
  OrigDataType: uint16
T_162: (in bx_143 >>u 0x0007 : word16)
  Class: Eq_162
  DataType: uint16
  OrigDataType: uint16
T_163: (in 0x0000 : word16)
  Class: Eq_162
  DataType: uint16
  OrigDataType: word16
T_164: (in bx_143 >>u 0x0007 != 0x0000 : bool)
  Class: Eq_164
  DataType: bool
  OrigDataType: bool
T_165: (in ax_138 >> cl_128 : word16)
  Class: Eq_126
  DataType: int16
  OrigDataType: int16
T_166: (in 0x0000 : word16)
  Class: Eq_166
  DataType: word16
  OrigDataType: word16
T_167: (in si + 0x0000 : word16)
  Class: Eq_167
  DataType: word16
  OrigDataType: word16
T_168: (in Mem145[ds_135:si + 0x0000:word16] : word16)
  Class: Eq_109
  DataType: Eq_109
  OrigDataType: word16
T_169: (in (ds_135->*si).t0000 - ax_115 : word16)
  Class: Eq_109
  DataType: Eq_109
  OrigDataType: word16
T_170: (in 0x0000 : word16)
  Class: Eq_170
  DataType: word16
  OrigDataType: word16
T_171: (in si + 0x0000 : word16)
  Class: Eq_171
  DataType: word16
  OrigDataType: word16
T_172: (in Mem170[ds_135:si + 0x0000:word16] : word16)
  Class: Eq_109
  DataType: Eq_109
  OrigDataType: word16
T_173: (in 0x06 : byte)
  Class: Eq_173
  DataType: uint8
  OrigDataType: uint8
T_174: (in cl_128 >>u 0x06 : word16)
  Class: Eq_122
  DataType: Eq_122
  OrigDataType: uint16
T_175: (in 0x00 : byte)
  Class: Eq_122
  DataType: uint8
  OrigDataType: bcu8
T_176: (in cl_128 <u 0x00 : bool)
  Class: Eq_176
  DataType: bool
  OrigDataType: bool
T_177: (in ss : selector)
  Class: Eq_177
  DataType: (ptr Eq_177)
  OrigDataType: (ptr (segment))
T_178: (in 0x0000 : word16)
  Class: Eq_178
  DataType: word16
  OrigDataType: word16
T_179: (in sp_122 + 0x0000 : word16)
  Class: Eq_179
  DataType: word16
  OrigDataType: word16
T_180: (in Mem60[ss:sp_122 + 0x0000:selector] : selector)
  Class: Eq_14
  DataType: (ptr Eq_14)
  OrigDataType: (ptr (segment))
T_181: (in __xadd : ptr32)
  Class: Eq_181
  DataType: (ptr Eq_181)
  OrigDataType: (ptr (fn T_185 (T_184, T_126)))
T_182: (in 0x0000 : word16)
  Class: Eq_182
  DataType: word16
  OrigDataType: word16
T_183: (in si + 0x0000 : word16)
  Class: Eq_183
  DataType: word16
  OrigDataType: word16
T_184: (in Mem60[ds_135:si + 0x0000:word16] : word16)
  Class: Eq_109
  DataType: Eq_109
  OrigDataType: word16
T_185: (in __xadd((ds_135->*si).t0000, bp_113) : word16)
  Class: Eq_109
  DataType: Eq_109
  OrigDataType: word16
T_186: (in 0x0000 : word16)
  Class: Eq_186
  DataType: word16
  OrigDataType: word16
T_187: (in si + 0x0000 : word16)
  Class: Eq_187
  DataType: word16
  OrigDataType: word16
T_188: (in Mem145[ds_135:si + 0x0000:word16] : word16)
  Class: Eq_109
  DataType: Eq_109
  OrigDataType: word16
T_189: (in 0x0002 : word16)
  Class: Eq_189
  DataType: word16
  OrigDataType: word16
T_190: (in sp_122 + 0x0002 : word16)
  Class: Eq_145
  DataType: (memptr (ptr Eq_177) (ptr Eq_14))
  OrigDataType: word16
T_191: (in 0x0140 : word16)
  Class: Eq_151
  DataType: int16
  OrigDataType: word16
T_192: (in __shrd : ptr32)
  Class: Eq_192
  DataType: (ptr Eq_192)
  OrigDataType: (ptr (fn T_200 (T_195, T_198, T_199)))
T_193: (in 0x0000 : word16)
  Class: Eq_193
  DataType: word16
  OrigDataType: word16
T_194: (in si + 0x0000 : word16)
  Class: Eq_194
  DataType: word16
  OrigDataType: word16
T_195: (in Mem170[ds_135:si + 0x0000:word16] : word16)
  Class: Eq_109
  DataType: Eq_109
  OrigDataType: word16
T_196: (in 0x0000 : word16)
  Class: Eq_196
  DataType: word16
  OrigDataType: word16
T_197: (in sp_122 + 0x0000 : word16)
  Class: Eq_197
  DataType: word16
  OrigDataType: word16
T_198: (in Mem170[ss:sp_122 + 0x0000:word16] : word16)
  Class: Eq_14
  DataType: (ptr Eq_14)
  OrigDataType: word16
T_199: (in 0x0A : byte)
  Class: Eq_199
  DataType: byte
  OrigDataType: byte
T_200: (in __shrd((ds_135->*si).t0000, ss->*sp_122, 0x0A) : word16)
  Class: Eq_200
  DataType: word16
  OrigDataType: word16
T_201:
  Class: Eq_201
  DataType: Eq_201
  OrigDataType: 
T_202:
  Class: Eq_202
  DataType: Eq_202
  OrigDataType: 
*/
typedef struct Globals {
} Eq_1;

typedef struct Eq_3 {
} Eq_3;

typedef void (Eq_9)(byte);

typedef struct Eq_14 {
} Eq_14;

typedef void (Eq_26)(word16, Eq_27);

typedef union Eq_27 {
	int16 u0;
	uint8 u1;
} Eq_27;

typedef void (Eq_31)(word16, byte);

typedef union Eq_40 {
	int8 u0;
	uint8 u1;
} Eq_40;

typedef union Eq_42 {
	int8 u0;
	int16 u1;
} Eq_42;

typedef void (Eq_45)(word16, Eq_27);

typedef union Eq_60 {
	int16 u0;
	byte u1;
} Eq_60;

typedef union Eq_67 {
	int16 u0;
	Eq_201 Eq_14::* u1;
} Eq_67;

typedef word16 (Eq_81)(int16, Eq_82 Eq_14::*, byte);

typedef Eq_109 Eq_82struct Eq_82 {
	Eq_109 t0000;	// 0
	byte b0001;	// 1
} Eq_82;

typedef word16 (Eq_86)(byte);

typedef union Eq_98 {
	uint16 u0;
	Eq_202 Eq_14::* u1;
} Eq_98;

typedef byte (Eq_104)(byte, byte);

typedef union Eq_109 {
	int16 u0;
	uint16 u1;
} Eq_109;

typedef union Eq_122 {
	uint8 u0;
	uint16 u1;
} Eq_122;

typedef union Eq_138 {
	int16 u0;
	uint16 u1;
} Eq_138;

typedef union Eq_151 {
	int16 u0;
	uint16 u1;
	uint16 Eq_14::* u2;
} Eq_151;

typedef struct Eq_177 {
} Eq_177;

typedef Eq_109 (Eq_181)(Eq_109, int16);

typedef word16 (Eq_192)(Eq_109, Eq_14 *, byte);

typedef Eq_67 Eq_201struct Eq_201 {	// size: 2 2
	word16 w0000;	// 0
	Eq_67 t91B8;	// 91B8
} Eq_201;

typedef struct Eq_202 {
	byte b01F0;	// 1F0
} Eq_202;

