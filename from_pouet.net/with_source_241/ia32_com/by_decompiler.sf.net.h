// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_241/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_19: (fn void (word16, byte))
	T_19 (in __outb : ptr32)
Eq_27: (fn void (word16, uint16))
	T_27 (in __outb : ptr32)
Eq_32: (fn void (word16, uint16))
	T_32 (in __outb : ptr32)
Eq_36: (fn void (word16, byte))
	T_36 (in __outb : ptr32)
Eq_48: (segment "Eq_48" (0 segptr32 ptr0000) (1FB word16 w01FB) (1FC word16 w01FC) (1FD word16 w01FD) (402 Eq_69 t0402) (404 (arr word16) a0404))
	T_48 (in ds : (ptr Eq_48))
Eq_60: (segment "Eq_60" (0 (arr word16) a0000))
	T_60 (in es_73 : (ptr Eq_60))
	T_63 (in SLICE(ds->ptr0000, selector, 16) : selector)
Eq_64: (union "Eq_64" (int8 u0) (int16 u1) (bcu8 u2))
	T_64 (in ax_102 : Eq_64)
	T_68 (in (int16) (al_111 - 0x80) : int16)
	T_72 (in Mem104[ds:di_100 + 0x0000:word16] : word16)
	T_83 (in Mem104[ds:di_100 + 0x0000:int16] : int16)
	T_95 (in (int16) rArg0 : int16)
	T_98 (in Mem119[ds:di_100 + 0x0000:int16] : int16)
	T_102 (in Mem119[ds:di_100 + 0x0000:word16] : word16)
	T_168 (in al_250 : byte)
	T_174 (in Mem270[ds:Mem201[ss:sp_200 + 0x0000:word16]:byte] : byte)
	T_187 (in Mem277[ds:di_275 + 0x0000:byte] : byte)
	T_196 (in ah_249 : byte)
	T_197 (in 0x00 : byte)
	T_199 (in dh_243 : Eq_64)
	T_200 (in 0x46 : byte)
	T_217 (in Mem201[dx_5:bx_248 + 0x0000:byte] : byte)
	T_218 (in SLICE(dx_226, byte, 8) : byte)
	T_221 (in Mem201[dx_8:bx_248 + 0x0000:byte] : byte)
	T_223 (in 0x00 : byte)
	T_226 (in al_250 + ah_249 : byte)
Eq_69: (struct "Eq_69" 0001 (0 Eq_64 t0000))
	T_69 (in di_100 : (memptr (ptr Eq_48) Eq_69))
	T_86 (in di_100 + 0x0001 : word16)
	T_164 (in 0x0402 : word16)
	T_173 (in Mem201[ss:sp_200 + 0x0000:word16] : word16)
	T_191 (in di_275 + 0x0001 : word16)
	T_235 (in Mem201[ss:sp_200 + 0x0000:word16] : word16)
Eq_88: (fn Eq_90 (Eq_89, real64))
	T_88 (in atan : ptr32)
Eq_89: (union "Eq_89" (real16 u0) (real64 u1))
	T_89 (in rArg0 : Eq_89)
	T_94 (in atan(rArg0, rLoc1_110) * (real64) ds->w01FB : word16)
Eq_90: (union "Eq_90" (real16 u0) (real64 u1))
	T_90 (in atan(rArg0, rLoc1_110) : real64)
Eq_93: (union "Eq_93" (real16 u0) (real64 u1))
	T_93 (in (real64) ds->w01FB : real64)
Eq_155: (fn byte (bcu8, byte))
	T_155 (in __ror : ptr32)
Eq_169: (segment "Eq_169")
	T_169 (in ss : selector)
Eq_170: (struct "Eq_170" (0 (memptr (ptr Eq_48) Eq_69) ptr0000) (2 (memptr (ptr Eq_48) Eq_64) ptr0002))
	T_170 (in sp_200 : (memptr (ptr Eq_169) Eq_170))
	T_232 (in sp_1 - 0x0002 : word16)
Eq_288: (fn byte (byte))
	T_288 (in __inb : ptr32)
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
T_7: (in sp_1 : ptr16)
  Class: Eq_7
  DataType: ptr16
  OrigDataType: word16
T_8: (in fp : ptr16)
  Class: Eq_7
  DataType: ptr16
  OrigDataType: ptr16
T_9: (in dx_5 : (ptr (arr byte 1)))
  Class: Eq_9
  DataType: (ptr (arr byte 1))
  OrigDataType: (ptr (struct (0 (arr T_309 1) a0000)))
T_10: (in dx : word16)
  Class: Eq_10
  DataType: word16
  OrigDataType: word16
T_11: (in dh : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_12: (in 0x10 : byte)
  Class: Eq_12
  DataType: byte
  OrigDataType: byte
T_13: (in dh + 0x10 : byte)
  Class: Eq_13
  DataType: byte
  OrigDataType: byte
T_14: (in DPB(dx, dh + 0x10, 8, 8) : word16)
  Class: Eq_9
  DataType: (ptr (arr byte 1))
  OrigDataType: word16
T_15: (in dx_8 : (ptr (arr byte 1)))
  Class: Eq_9
  DataType: (ptr (arr byte 1))
  OrigDataType: (ptr (struct (0 (arr T_308 1) a0000)))
T_16: (in 0x20 : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_17: (in dh + 0x20 : byte)
  Class: Eq_17
  DataType: byte
  OrigDataType: byte
T_18: (in DPB(dx, dh + 0x20, 8, 8) : word16)
  Class: Eq_9
  DataType: (ptr (arr byte 1))
  OrigDataType: word16
T_19: (in __outb : ptr32)
  Class: Eq_19
  DataType: (ptr Eq_19)
  OrigDataType: (ptr (fn T_22 (T_20, T_21)))
T_20: (in 0x03C8 : word16)
  Class: Eq_20
  DataType: word16
  OrigDataType: word16
T_21: (in cl : byte)
  Class: Eq_21
  DataType: byte
  OrigDataType: byte
T_22: (in __outb(0x03C8, cl) : void)
  Class: Eq_22
  DataType: void
  OrigDataType: void
T_23: (in ax_19 : int16)
  Class: Eq_23
  DataType: int16
  OrigDataType: word16
T_24: (in (int16) cl : int16)
  Class: Eq_23
  DataType: int16
  OrigDataType: int16
T_25: (in al_20 : uint8)
  Class: Eq_25
  DataType: uint8
  OrigDataType: uint8
T_26: (in (byte) ax_19 : byte)
  Class: Eq_25
  DataType: uint8
  OrigDataType: byte
T_27: (in __outb : ptr32)
  Class: Eq_27
  DataType: (ptr Eq_27)
  OrigDataType: (ptr (fn T_31 (T_28, T_30)))
T_28: (in 0x03C9 : word16)
  Class: Eq_28
  DataType: word16
  OrigDataType: word16
T_29: (in 0x01 : byte)
  Class: Eq_29
  DataType: uint8
  OrigDataType: uint8
T_30: (in al_20 >>u 0x01 : word16)
  Class: Eq_30
  DataType: uint16
  OrigDataType: uint16
T_31: (in __outb(0x03C9, al_20 >>u 0x01) : void)
  Class: Eq_31
  DataType: void
  OrigDataType: void
T_32: (in __outb : ptr32)
  Class: Eq_32
  DataType: (ptr Eq_32)
  OrigDataType: (ptr (fn T_35 (T_33, T_34)))
T_33: (in 0x03C9 : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_34: (in al_20 >>u 0x01 : word16)
  Class: Eq_34
  DataType: uint16
  OrigDataType: uint16
T_35: (in __outb(0x03C9, al_20 >>u 0x01) : void)
  Class: Eq_35
  DataType: void
  OrigDataType: void
T_36: (in __outb : ptr32)
  Class: Eq_36
  DataType: (ptr Eq_36)
  OrigDataType: (ptr (fn T_41 (T_37, T_40)))
T_37: (in 0x03C9 : word16)
  Class: Eq_37
  DataType: word16
  OrigDataType: word16
T_38: (in al_20 >>u 0x01 : word16)
  Class: Eq_38
  DataType: uint16
  OrigDataType: uint16
T_39: (in SLICE(ax_19, byte, 8) : byte)
  Class: Eq_39
  DataType: byte
  OrigDataType: byte
T_40: (in al_20 >>u 0x01 & SLICE(ax_19, byte, 8) : byte)
  Class: Eq_40
  DataType: byte
  OrigDataType: byte
T_41: (in __outb(0x03C9, al_20 >>u 0x01 & SLICE(ax_19, byte, 8)) : void)
  Class: Eq_41
  DataType: void
  OrigDataType: void
T_42: (in cx : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_43: (in 0x0001 : word16)
  Class: Eq_43
  DataType: word16
  OrigDataType: word16
T_44: (in cx - 0x0001 : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_45: (in (byte) cx : byte)
  Class: Eq_21
  DataType: byte
  OrigDataType: byte
T_46: (in 0x0000 : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_47: (in cx != 0x0000 : bool)
  Class: Eq_47
  DataType: bool
  OrigDataType: bool
T_48: (in ds : (ptr Eq_48))
  Class: Eq_48
  DataType: (ptr Eq_48)
  OrigDataType: (ptr (segment (0 T_62 t0000) (1FB T_92 t01FB) (1FC T_104 t01FC) (1FD T_50 t01FD) (404 (arr T_310) a0404)))
T_49: (in 0x01FD : word16)
  Class: Eq_49
  DataType: (memptr (ptr Eq_48) word16)
  OrigDataType: (memptr T_48 (struct (0 T_50 t0000)))
T_50: (in Mem0[ds:0x01FD:word16] : word16)
  Class: Eq_50
  DataType: word16
  OrigDataType: word16
T_51: (in 0x0001 : word16)
  Class: Eq_51
  DataType: word16
  OrigDataType: word16
T_52: (in ds->w01FD - 0x0001 : word16)
  Class: Eq_50
  DataType: word16
  OrigDataType: word16
T_53: (in Mem66[ds:0x01FD:word16] : word16)
  Class: Eq_50
  DataType: word16
  OrigDataType: word16
T_54: (in bx_160 : word16)
  Class: Eq_54
  DataType: (memptr (ptr (arr byte 1)) byte)
  OrigDataType: (memptr T_9 (struct 0001 (0 T_110 t0000)))
T_55: (in 0x0000 : word16)
  Class: Eq_54
  DataType: (memptr (ptr (arr byte 1)) byte)
  OrigDataType: word16
T_56: (in bl_161 : byte)
  Class: Eq_56
  DataType: byte
  OrigDataType: byte
T_57: (in 0x00 : byte)
  Class: Eq_56
  DataType: byte
  OrigDataType: byte
T_58: (in bh_162 : byte)
  Class: Eq_56
  DataType: byte
  OrigDataType: byte
T_59: (in 0x00 : byte)
  Class: Eq_56
  DataType: byte
  OrigDataType: byte
T_60: (in es_73 : (ptr Eq_60))
  Class: Eq_60
  DataType: (ptr Eq_60)
  OrigDataType: (ptr (segment (0 (arr T_311) a0000)))
T_61: (in 0x0000 : word16)
  Class: Eq_61
  DataType: (memptr (ptr Eq_48) segptr32)
  OrigDataType: (memptr T_48 (struct (0 T_62 t0000)))
T_62: (in Mem66[ds:0x0000:segptr32] : segptr32)
  Class: Eq_62
  DataType: segptr32
  OrigDataType: segptr32
T_63: (in SLICE(ds->ptr0000, selector, 16) : selector)
  Class: Eq_60
  DataType: (ptr Eq_60)
  OrigDataType: (ptr (segment))
T_64: (in ax_102 : Eq_64)
  Class: Eq_64
  DataType: Eq_64
  OrigDataType: word16
T_65: (in al_111 : byte)
  Class: Eq_56
  DataType: byte
  OrigDataType: byte
T_66: (in 0x80 : byte)
  Class: Eq_66
  DataType: byte
  OrigDataType: byte
T_67: (in al_111 - 0x80 : byte)
  Class: Eq_67
  DataType: byte
  OrigDataType: byte
T_68: (in (int16) (al_111 - 0x80) : int16)
  Class: Eq_64
  DataType: Eq_64
  OrigDataType: int16
T_69: (in di_100 : (memptr (ptr Eq_48) Eq_69))
  Class: Eq_69
  DataType: (memptr (ptr Eq_48) Eq_69)
  OrigDataType: (memptr T_48 (struct 0001 (0 T_64 t0000)))
T_70: (in 0x0000 : word16)
  Class: Eq_70
  DataType: word16
  OrigDataType: word16
T_71: (in di_100 + 0x0000 : word16)
  Class: Eq_71
  DataType: word16
  OrigDataType: word16
T_72: (in Mem104[ds:di_100 + 0x0000:word16] : word16)
  Class: Eq_64
  DataType: Eq_64
  OrigDataType: word16
T_73: (in al_103 : int8)
  Class: Eq_73
  DataType: int8
  OrigDataType: int8
T_74: (in (byte) ax_102 : byte)
  Class: Eq_73
  DataType: int8
  OrigDataType: byte
T_75: (in dx_106 : word16)
  Class: Eq_75
  DataType: word16
  OrigDataType: word16
T_76: (in al_103 *s al_103 : int16)
  Class: Eq_76
  DataType: int16
  OrigDataType: int16
T_77: (in dx_106 - al_103 *s al_103 : word16)
  Class: Eq_75
  DataType: word16
  OrigDataType: word16
T_78: (in dh_107 : bcu8)
  Class: Eq_78
  DataType: bcu8
  OrigDataType: bcu8
T_79: (in SLICE(dx_106, byte, 8) : byte)
  Class: Eq_78
  DataType: bcu8
  OrigDataType: byte
T_80: (in rLoc1_110 : real64)
  Class: Eq_80
  DataType: real64
  OrigDataType: real64
T_81: (in 0x0000 : word16)
  Class: Eq_81
  DataType: word16
  OrigDataType: word16
T_82: (in di_100 + 0x0000 : word16)
  Class: Eq_82
  DataType: word16
  OrigDataType: word16
T_83: (in Mem104[ds:di_100 + 0x0000:int16] : int16)
  Class: Eq_64
  DataType: Eq_64
  OrigDataType: int16
T_84: (in (real64) (ds->*di_100).t0000 : real64)
  Class: Eq_80
  DataType: real64
  OrigDataType: real64
T_85: (in 0x0001 : word16)
  Class: Eq_85
  DataType: word16
  OrigDataType: word16
T_86: (in di_100 + 0x0001 : word16)
  Class: Eq_69
  DataType: (memptr (ptr Eq_48) Eq_69)
  OrigDataType: word16
T_87: (in P : byte)
  Class: Eq_87
  DataType: byte
  OrigDataType: byte
T_88: (in atan : ptr32)
  Class: Eq_88
  DataType: (ptr Eq_88)
  OrigDataType: (ptr (fn T_90 (T_89, T_80)))
T_89: (in rArg0 : Eq_89)
  Class: Eq_89
  DataType: Eq_89
  OrigDataType: (union (real16 u0) (real64 u1))
T_90: (in atan(rArg0, rLoc1_110) : real64)
  Class: Eq_90
  DataType: Eq_90
  OrigDataType: (union (real16 u0) (real64 u1))
T_91: (in 0x01FB : word16)
  Class: Eq_91
  DataType: (memptr (ptr Eq_48) word16)
  OrigDataType: (memptr T_48 (struct (0 T_92 t0000)))
T_92: (in Mem104[ds:0x01FB:word16] : word16)
  Class: Eq_92
  DataType: word16
  OrigDataType: word16
T_93: (in (real64) ds->w01FB : real64)
  Class: Eq_93
  DataType: Eq_93
  OrigDataType: (union (real16 u0) (real64 u1))
T_94: (in atan(rArg0, rLoc1_110) * (real64) ds->w01FB : word16)
  Class: Eq_89
  DataType: Eq_89
  OrigDataType: real16
T_95: (in (int16) rArg0 : int16)
  Class: Eq_64
  DataType: Eq_64
  OrigDataType: int16
T_96: (in 0x0000 : word16)
  Class: Eq_96
  DataType: word16
  OrigDataType: word16
T_97: (in di_100 + 0x0000 : word16)
  Class: Eq_97
  DataType: word16
  OrigDataType: word16
T_98: (in Mem119[ds:di_100 + 0x0000:int16] : int16)
  Class: Eq_64
  DataType: Eq_64
  OrigDataType: int16
T_99: (in ax_121 : word16)
  Class: Eq_99
  DataType: word16
  OrigDataType: word16
T_100: (in 0x0000 : word16)
  Class: Eq_100
  DataType: word16
  OrigDataType: word16
T_101: (in di_100 + 0x0000 : word16)
  Class: Eq_101
  DataType: word16
  OrigDataType: word16
T_102: (in Mem119[ds:di_100 + 0x0000:word16] : word16)
  Class: Eq_64
  DataType: Eq_64
  OrigDataType: word16
T_103: (in 0x01FC : word16)
  Class: Eq_103
  DataType: (memptr (ptr Eq_48) word16)
  OrigDataType: (memptr T_48 (struct (0 T_104 t0000)))
T_104: (in Mem119[ds:0x01FC:word16] : word16)
  Class: Eq_104
  DataType: word16
  OrigDataType: word16
T_105: (in Mem119[ds:di_100 + 0x0000:word16] + Mem119[ds:0x01FC:word16] : word16)
  Class: Eq_99
  DataType: word16
  OrigDataType: word16
T_106: (in ax_128 : word16)
  Class: Eq_106
  DataType: word16
  OrigDataType: word16
T_107: (in DPB(ax_121, dh_107, 0, 8) : word16)
  Class: Eq_106
  DataType: word16
  OrigDataType: word16
T_108: (in ah_122 : byte)
  Class: Eq_108
  DataType: byte
  OrigDataType: byte
T_109: (in SLICE(ax_121, byte, 8) : byte)
  Class: Eq_108
  DataType: byte
  OrigDataType: byte
T_110: (in cl_124 : byte)
  Class: Eq_110
  DataType: byte
  OrigDataType: byte
T_111: (in 0x00 : byte)
  Class: Eq_110
  DataType: byte
  OrigDataType: byte
T_112: (in 0x00 : byte)
  Class: Eq_112
  DataType: byte
  OrigDataType: byte
T_113: (in DPB(cx, 0x00, 0, 8) : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_114: (in dh_137 : byte)
  Class: Eq_114
  DataType: byte
  OrigDataType: byte
T_115: (in 0x0707 : word16)
  Class: Eq_115
  DataType: word16
  OrigDataType: word16
T_116: (in ax_128 & 0x0707 : word16)
  Class: Eq_116
  DataType: word16
  OrigDataType: word16
T_117: (in (byte) (ax_128 & 0x0707) : byte)
  Class: Eq_117
  DataType: byte
  OrigDataType: byte
T_118: (in ax_128 & 0x0707 : word16)
  Class: Eq_118
  DataType: word16
  OrigDataType: word16
T_119: (in SLICE(ax_128 & 0x0707, byte, 8) : byte)
  Class: Eq_119
  DataType: byte
  OrigDataType: byte
T_120: (in (byte) (ax_128 & 0x0707) + SLICE(ax_128 & 0x0707, byte, 8) : byte)
  Class: Eq_120
  DataType: byte
  OrigDataType: byte
T_121: (in (byte) (ax_128 & 0x0707) + SLICE(ax_128 & 0x0707, byte, 8) + dh_107 : byte)
  Class: Eq_114
  DataType: byte
  OrigDataType: byte
T_122: (in 0xEF : byte)
  Class: Eq_78
  DataType: bcu8
  OrigDataType: bcu8
T_123: (in dh_107 <u 0xEF : bool)
  Class: Eq_123
  DataType: bool
  OrigDataType: bool
T_124: (in 0xEA : byte)
  Class: Eq_78
  DataType: bcu8
  OrigDataType: bcu8
T_125: (in dh_107 >u 0xEA : bool)
  Class: Eq_125
  DataType: bool
  OrigDataType: bool
T_126: (in 0x50 : byte)
  Class: Eq_110
  DataType: byte
  OrigDataType: byte
T_127: (in 0x50 : byte)
  Class: Eq_127
  DataType: byte
  OrigDataType: byte
T_128: (in DPB(cx, 0x50, 0, 8) : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_129: (in 0x0000 : word16)
  Class: Eq_129
  DataType: word16
  OrigDataType: word16
T_130: (in bx_160 + 0x0000 : word16)
  Class: Eq_130
  DataType: word16
  OrigDataType: word16
T_131: (in Mem156[dx_8:bx_160 + 0x0000:byte] : byte)
  Class: Eq_110
  DataType: byte
  OrigDataType: byte
T_132: (in 0x80 : byte)
  Class: Eq_132
  DataType: byte
  OrigDataType: byte
T_133: (in dh_137 + 0x80 : byte)
  Class: Eq_110
  DataType: byte
  OrigDataType: byte
T_134: (in 0x0000 : word16)
  Class: Eq_134
  DataType: word16
  OrigDataType: word16
T_135: (in bx_160 + 0x0000 : word16)
  Class: Eq_135
  DataType: word16
  OrigDataType: word16
T_136: (in Mem159[dx_5:bx_160 + 0x0000:byte] : byte)
  Class: Eq_110
  DataType: byte
  OrigDataType: byte
T_137: (in 0x0001 : word16)
  Class: Eq_137
  DataType: word16
  OrigDataType: word16
T_138: (in bx_160 + 0x0001 : word16)
  Class: Eq_54
  DataType: (memptr (ptr (arr byte 1)) byte)
  OrigDataType: word16
T_139: (in (byte) bx_160 : byte)
  Class: Eq_56
  DataType: byte
  OrigDataType: byte
T_140: (in SLICE(bx_160, byte, 8) : byte)
  Class: Eq_56
  DataType: byte
  OrigDataType: byte
T_141: (in 0x0000 : word16)
  Class: Eq_54
  DataType: (memptr (ptr (arr byte 1)) byte)
  OrigDataType: word16
T_142: (in bx_160 != 0x0000 : bool)
  Class: Eq_142
  DataType: bool
  OrigDataType: bool
T_143: (in 0x1F : byte)
  Class: Eq_143
  DataType: byte
  OrigDataType: byte
T_144: (in ah_122 & 0x1F : byte)
  Class: Eq_144
  DataType: byte
  OrigDataType: byte
T_145: (in DPB(cx, ah_122 & 0x1F, 8, 8) : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_146: (in ah_122 & 0x1F : byte)
  Class: Eq_146
  DataType: bcu8
  OrigDataType: bcu8
T_147: (in 0x03 : byte)
  Class: Eq_146
  DataType: bcu8
  OrigDataType: bcu8
T_148: (in (ah_122 & 0x1F) >u 0x03 : bool)
  Class: Eq_148
  DataType: bool
  OrigDataType: bool
T_149: (in 0xB4 : byte)
  Class: Eq_78
  DataType: bcu8
  OrigDataType: bcu8
T_150: (in dh_107 >u 0xB4 : bool)
  Class: Eq_150
  DataType: bool
  OrigDataType: bool
T_151: (in 0xE9 : byte)
  Class: Eq_78
  DataType: bcu8
  OrigDataType: bcu8
T_152: (in dh_107 <u 0xE9 : bool)
  Class: Eq_152
  DataType: bool
  OrigDataType: bool
T_153: (in 0x14 : byte)
  Class: Eq_153
  DataType: byte
  OrigDataType: byte
T_154: (in dh_137 - 0x14 : byte)
  Class: Eq_114
  DataType: byte
  OrigDataType: byte
T_155: (in __ror : ptr32)
  Class: Eq_155
  DataType: (ptr Eq_155)
  OrigDataType: (ptr (fn T_157 (T_78, T_156)))
T_156: (in 0x03 : byte)
  Class: Eq_156
  DataType: byte
  OrigDataType: byte
T_157: (in __ror(dh_107, 0x03) : byte)
  Class: Eq_157
  DataType: byte
  OrigDataType: byte
T_158: (in 0x9B : byte)
  Class: Eq_158
  DataType: byte
  OrigDataType: byte
T_159: (in __ror(dh_107, 0x03) + 0x9B : byte)
  Class: Eq_114
  DataType: byte
  OrigDataType: byte
T_160: (in 0x0001 : word16)
  Class: Eq_160
  DataType: word16
  OrigDataType: word16
T_161: (in cx - 0x0001 : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_162: (in cx - 0x0001 : word16)
  Class: Eq_162
  DataType: word16
  OrigDataType: word16
T_163: (in (byte) (cx - 0x0001) : byte)
  Class: Eq_110
  DataType: byte
  OrigDataType: byte
T_164: (in 0x0402 : word16)
  Class: Eq_69
  DataType: (memptr (ptr Eq_48) Eq_69)
  OrigDataType: word16
T_165: (in 0xF400 : word16)
  Class: Eq_75
  DataType: word16
  OrigDataType: word16
T_166: (in si_165 : word16)
  Class: Eq_166
  DataType: word16
  OrigDataType: word16
T_167: (in 0xFF9C : word16)
  Class: Eq_166
  DataType: word16
  OrigDataType: word16
T_168: (in al_250 : byte)
  Class: Eq_64
  DataType: Eq_64
  OrigDataType: byte
T_169: (in ss : selector)
  Class: Eq_169
  DataType: (ptr Eq_169)
  OrigDataType: (ptr (segment))
T_170: (in sp_200 : (memptr (ptr Eq_169) Eq_170))
  Class: Eq_170
  DataType: (memptr (ptr Eq_169) Eq_170)
  OrigDataType: (memptr T_169 (struct (0 T_69 t0000) (2 T_184 t0002)))
T_171: (in 0x0000 : word16)
  Class: Eq_171
  DataType: word16
  OrigDataType: word16
T_172: (in sp_200 + 0x0000 : word16)
  Class: Eq_172
  DataType: word16
  OrigDataType: word16
T_173: (in Mem201[ss:sp_200 + 0x0000:word16] : word16)
  Class: Eq_69
  DataType: (memptr (ptr Eq_48) Eq_69)
  OrigDataType: (memptr T_48 (struct (0 T_174 t0000)))
T_174: (in Mem270[ds:Mem201[ss:sp_200 + 0x0000:word16]:byte] : byte)
  Class: Eq_64
  DataType: Eq_64
  OrigDataType: byte
T_175: (in bp_272 : word16)
  Class: Eq_175
  DataType: word16
  OrigDataType: word16
T_176: (in bp_189 : word16)
  Class: Eq_176
  DataType: word16
  OrigDataType: word16
T_177: (in 0x0001 : word16)
  Class: Eq_177
  DataType: word16
  OrigDataType: word16
T_178: (in bp_189 + 0x0001 : word16)
  Class: Eq_175
  DataType: word16
  OrigDataType: word16
T_179: (in 0x00A0 : word16)
  Class: Eq_175
  DataType: word16
  OrigDataType: word16
T_180: (in bp_272 != 0x00A0 : bool)
  Class: Eq_180
  DataType: bool
  OrigDataType: bool
T_181: (in di_275 : (memptr (ptr Eq_48) Eq_64))
  Class: Eq_181
  DataType: (memptr (ptr Eq_48) Eq_64)
  OrigDataType: (memptr T_48 (struct (0 T_187 t0000)))
T_182: (in 0x0002 : word16)
  Class: Eq_182
  DataType: word16
  OrigDataType: word16
T_183: (in sp_200 + 0x0002 : word16)
  Class: Eq_183
  DataType: word16
  OrigDataType: word16
T_184: (in Mem270[ss:sp_200 + 0x0002:word16] : word16)
  Class: Eq_181
  DataType: (memptr (ptr Eq_48) Eq_64)
  OrigDataType: word16
T_185: (in 0x0000 : word16)
  Class: Eq_185
  DataType: word16
  OrigDataType: word16
T_186: (in di_275 + 0x0000 : word16)
  Class: Eq_186
  DataType: word16
  OrigDataType: word16
T_187: (in Mem277[ds:di_275 + 0x0000:byte] : byte)
  Class: Eq_64
  DataType: Eq_64
  OrigDataType: byte
T_188: (in 0x0004 : word16)
  Class: Eq_188
  DataType: word16
  OrigDataType: word16
T_189: (in sp_200 + 0x0004 : word16)
  Class: Eq_7
  DataType: ptr16
  OrigDataType: word16
T_190: (in 0x0001 : word16)
  Class: Eq_190
  DataType: word16
  OrigDataType: word16
T_191: (in di_275 + 0x0001 : word16)
  Class: Eq_69
  DataType: (memptr (ptr Eq_48) Eq_69)
  OrigDataType: word16
T_192: (in 0x0001 : word16)
  Class: Eq_192
  DataType: word16
  OrigDataType: word16
T_193: (in bp_272 + 0x0001 : word16)
  Class: Eq_176
  DataType: word16
  OrigDataType: word16
T_194: (in 0xFF61 : word16)
  Class: Eq_175
  DataType: word16
  OrigDataType: word16
T_195: (in bp_272 != 0xFF61 : bool)
  Class: Eq_195
  DataType: bool
  OrigDataType: bool
T_196: (in ah_249 : byte)
  Class: Eq_64
  DataType: Eq_64
  OrigDataType: (union (int8 u0) (bcu8 u1))
T_197: (in 0x00 : byte)
  Class: Eq_64
  DataType: int8
  OrigDataType: byte
T_198: (in ah_249 == 0x00 : bool)
  Class: Eq_198
  DataType: bool
  OrigDataType: bool
T_199: (in dh_243 : Eq_64)
  Class: Eq_64
  DataType: Eq_64
  OrigDataType: (union (int8 u0) (bcu8 u1))
T_200: (in 0x46 : byte)
  Class: Eq_64
  DataType: bcu8
  OrigDataType: bcu8
T_201: (in dh_243 <=u 0x46 : bool)
  Class: Eq_201
  DataType: bool
  OrigDataType: bool
T_202: (in ax_385 : word16)
  Class: Eq_202
  DataType: word16
  OrigDataType: word16
T_203: (in ax_229 : word16)
  Class: Eq_202
  DataType: word16
  OrigDataType: word16
T_204: (in dh_243 <u ah_249 : bool)
  Class: Eq_204
  DataType: bool
  OrigDataType: bool
T_205: (in cx_203 : word16)
  Class: Eq_205
  DataType: word16
  OrigDataType: word16
T_206: (in cx_203 + bp_189 : word16)
  Class: Eq_205
  DataType: word16
  OrigDataType: word16
T_207: (in di_232 : word16)
  Class: Eq_202
  DataType: word16
  OrigDataType: word16
T_208: (in 0x0096 : word16)
  Class: Eq_208
  DataType: word16
  OrigDataType: word16
T_209: (in di_232 - 0x0096 : word16)
  Class: Eq_202
  DataType: word16
  OrigDataType: word16
T_210: (in bx_248 : (memptr (ptr (arr byte 1)) Eq_64))
  Class: Eq_210
  DataType: (memptr (ptr (arr byte 1)) Eq_64)
  OrigDataType: (memptr T_9 (struct (0 T_168 t0000)))
T_211: (in SLICE(cx_203, byte, 8) : byte)
  Class: Eq_211
  DataType: byte
  OrigDataType: byte
T_212: (in DPB(di_232, SLICE(cx_203, byte, 8), 0, 8) : word16)
  Class: Eq_210
  DataType: (memptr (ptr (arr byte 1)) Eq_64)
  OrigDataType: word16
T_213: (in dx_226 : word16)
  Class: Eq_213
  DataType: word16
  OrigDataType: word16
T_214: (in dx_226 + si_165 : word16)
  Class: Eq_213
  DataType: word16
  OrigDataType: word16
T_215: (in 0x0000 : word16)
  Class: Eq_215
  DataType: word16
  OrigDataType: word16
T_216: (in bx_248 + 0x0000 : word16)
  Class: Eq_216
  DataType: word16
  OrigDataType: word16
T_217: (in Mem201[dx_5:bx_248 + 0x0000:byte] : byte)
  Class: Eq_64
  DataType: Eq_64
  OrigDataType: byte
T_218: (in SLICE(dx_226, byte, 8) : byte)
  Class: Eq_64
  DataType: Eq_64
  OrigDataType: byte
T_219: (in 0x0000 : word16)
  Class: Eq_219
  DataType: word16
  OrigDataType: word16
T_220: (in bx_248 + 0x0000 : word16)
  Class: Eq_220
  DataType: word16
  OrigDataType: word16
T_221: (in Mem201[dx_8:bx_248 + 0x0000:byte] : byte)
  Class: Eq_64
  DataType: Eq_64
  OrigDataType: byte
T_222: (in DPB(ax_385, al_250, 0, 8) : word16)
  Class: Eq_202
  DataType: word16
  OrigDataType: word16
T_223: (in 0x00 : byte)
  Class: Eq_64
  DataType: int8
  OrigDataType: int8
T_224: (in ah_249 < 0x00 : bool)
  Class: Eq_224
  DataType: bool
  OrigDataType: bool
T_225: (in dh_243 < ah_249 : bool)
  Class: Eq_225
  DataType: bool
  OrigDataType: bool
T_226: (in al_250 + ah_249 : byte)
  Class: Eq_64
  DataType: Eq_64
  OrigDataType: byte
T_227: (in DPB(ax_385, al_250, 0, 8) : word16)
  Class: Eq_202
  DataType: word16
  OrigDataType: word16
T_228: (in 0x0001 : word16)
  Class: Eq_228
  DataType: word16
  OrigDataType: word16
T_229: (in cx - 0x0001 : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_230: (in (byte) cx : byte)
  Class: Eq_110
  DataType: byte
  OrigDataType: byte
T_231: (in 0x0002 : word16)
  Class: Eq_231
  DataType: word16
  OrigDataType: word16
T_232: (in sp_1 - 0x0002 : word16)
  Class: Eq_170
  DataType: (memptr (ptr Eq_169) Eq_170)
  OrigDataType: word16
T_233: (in 0x0000 : word16)
  Class: Eq_233
  DataType: word16
  OrigDataType: word16
T_234: (in sp_200 + 0x0000 : word16)
  Class: Eq_234
  DataType: word16
  OrigDataType: word16
T_235: (in Mem201[ss:sp_200 + 0x0000:word16] : word16)
  Class: Eq_69
  DataType: (memptr (ptr Eq_48) Eq_69)
  OrigDataType: word16
T_236: (in dx_ax_211 : int32)
  Class: Eq_236
  DataType: int32
  OrigDataType: int32
T_237: (in 0x01FD : word16)
  Class: Eq_237
  DataType: (memptr (ptr Eq_48) word16)
  OrigDataType: (memptr T_48 (struct (0 T_238 t0000)))
T_238: (in Mem201[ds:0x01FD:word16] : word16)
  Class: Eq_50
  DataType: word16
  OrigDataType: word16
T_239: (in 0x0001 : word16)
  Class: Eq_239
  DataType: word16
  OrigDataType: word16
T_240: (in ds->w01FD << 0x0001 : word16)
  Class: Eq_240
  DataType: ui16
  OrigDataType: ui16
T_241: (in (byte) (ds->w01FD << 0x0001) : byte)
  Class: Eq_241
  DataType: byte
  OrigDataType: byte
T_242: (in (int16) (byte) (ds->w01FD << 0x0001) : int16)
  Class: Eq_242
  DataType: int16
  OrigDataType: int16
T_243: (in (int32) (int16) (byte) (ds->w01FD << 0x0001) : int32)
  Class: Eq_236
  DataType: int32
  OrigDataType: int32
T_244: (in al_215 : int8)
  Class: Eq_244
  DataType: int8
  OrigDataType: int8
T_245: (in (byte) dx_ax_211 : byte)
  Class: Eq_245
  DataType: byte
  OrigDataType: byte
T_246: (in 0x7F : byte)
  Class: Eq_246
  DataType: byte
  OrigDataType: byte
T_247: (in (byte) dx_ax_211 & 0x7F : byte)
  Class: Eq_247
  DataType: byte
  OrigDataType: byte
T_248: (in 0x40 : byte)
  Class: Eq_248
  DataType: byte
  OrigDataType: byte
T_249: (in ((byte) dx_ax_211 & 0x7F) - 0x40 : byte)
  Class: Eq_244
  DataType: int8
  OrigDataType: byte
T_250: (in ax_216 : int16)
  Class: Eq_250
  DataType: int16
  OrigDataType: word16
T_251: (in al_215 *s al_215 : int16)
  Class: Eq_250
  DataType: int16
  OrigDataType: int16
T_252: (in ax_219 : ui16)
  Class: Eq_252
  DataType: ui16
  OrigDataType: ui16
T_253: (in SLICE(ax_216, byte, 8) : byte)
  Class: Eq_253
  DataType: byte
  OrigDataType: byte
T_254: (in 0x10 : byte)
  Class: Eq_254
  DataType: byte
  OrigDataType: byte
T_255: (in SLICE(ax_216, byte, 8) - 0x10 : byte)
  Class: Eq_255
  DataType: byte
  OrigDataType: byte
T_256: (in DPB(ax_216, SLICE(ax_216, byte, 8) - 0x10, 8, 8) : word16)
  Class: Eq_252
  DataType: ui16
  OrigDataType: word16
T_257: (in dx_220 : word16)
  Class: Eq_257
  DataType: word16
  OrigDataType: word16
T_258: (in SLICE(dx_ax_211, word16, 16) : word16)
  Class: Eq_258
  DataType: word16
  OrigDataType: word16
T_259: (in SLICE(dx_ax_211, word16, 16) ^ ax_219 : word16)
  Class: Eq_257
  DataType: word16
  OrigDataType: word16
T_260: (in 0x0002 : word16)
  Class: Eq_260
  DataType: ui16
  OrigDataType: ui16
T_261: (in ax_219 * 0x0002 : word16)
  Class: Eq_261
  DataType: ui16
  OrigDataType: ui16
T_262: (in ax_219 * 0x0002 : word16)
  Class: Eq_262
  DataType: ui16
  OrigDataType: ui16
T_263: (in SLICE(ax_219 * 0x0002, byte, 8) : byte)
  Class: Eq_263
  DataType: byte
  OrigDataType: byte
T_264: (in 0x01 : byte)
  Class: Eq_264
  DataType: byte
  OrigDataType: byte
T_265: (in SLICE(ax_219 * 0x0002, byte, 8) - 0x01 : byte)
  Class: Eq_265
  DataType: byte
  OrigDataType: byte
T_266: (in DPB(ax_219 * 0x0002, SLICE(ax_219 * 0x0002, byte, 8) - 0x01, 8, 8) : word16)
  Class: Eq_202
  DataType: word16
  OrigDataType: word16
T_267: (in 0x7F40 : word16)
  Class: Eq_205
  DataType: word16
  OrigDataType: word16
T_268: (in SLICE(dx_220, byte, 8) : byte)
  Class: Eq_268
  DataType: byte
  OrigDataType: byte
T_269: (in 0x24 : byte)
  Class: Eq_269
  DataType: byte
  OrigDataType: byte
T_270: (in SLICE(dx_220, byte, 8) + 0x24 : byte)
  Class: Eq_270
  DataType: byte
  OrigDataType: byte
T_271: (in DPB(dx_220, SLICE(dx_220, byte, 8) + 0x24, 8, 8) : word16)
  Class: Eq_213
  DataType: word16
  OrigDataType: word16
T_272: (in si_282 : word16)
  Class: Eq_272
  DataType: word16
  OrigDataType: word16
T_273: (in 0x0001 : word16)
  Class: Eq_273
  DataType: word16
  OrigDataType: word16
T_274: (in si_165 + 0x0001 : word16)
  Class: Eq_272
  DataType: word16
  OrigDataType: word16
T_275: (in 0x0064 : word16)
  Class: Eq_272
  DataType: word16
  OrigDataType: word16
T_276: (in si_282 != 0x0064 : bool)
  Class: Eq_276
  DataType: bool
  OrigDataType: bool
T_277: (in 0x0001 : word16)
  Class: Eq_277
  DataType: word16
  OrigDataType: word16
T_278: (in si_282 + 0x0001 : word16)
  Class: Eq_166
  DataType: word16
  OrigDataType: word16
T_279: (in 0xFF9D : word16)
  Class: Eq_272
  DataType: word16
  OrigDataType: word16
T_280: (in si_282 != 0xFF9D : bool)
  Class: Eq_280
  DataType: bool
  OrigDataType: bool
T_281: (in 0xFF60 : word16)
  Class: Eq_176
  DataType: word16
  OrigDataType: word16
T_282: (in di_289 : (memptr (ptr Eq_60) word16))
  Class: Eq_282
  DataType: (memptr (ptr Eq_60) word16)
  OrigDataType: (memptr T_60 (struct 0002 (0 T_299 t0000)))
T_283: (in 0x0000 : word16)
  Class: Eq_282
  DataType: (memptr (ptr Eq_60) word16)
  OrigDataType: word16
T_284: (in si_292 : (memptr (ptr Eq_48) word16))
  Class: Eq_284
  DataType: (memptr (ptr Eq_48) word16)
  OrigDataType: (memptr T_48 (struct 0002 (0 T_296 t0000)))
T_285: (in 0x0404 : word16)
  Class: Eq_284
  DataType: (memptr (ptr Eq_48) word16)
  OrigDataType: word16
T_286: (in 0x7D : byte)
  Class: Eq_286
  DataType: byte
  OrigDataType: byte
T_287: (in DPB(cx_203, 0x7D, 8, 8) : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_288: (in __inb : ptr32)
  Class: Eq_288
  DataType: (ptr Eq_288)
  OrigDataType: (ptr (fn T_290 (T_289)))
T_289: (in 0x60 : byte)
  Class: Eq_289
  DataType: byte
  OrigDataType: byte
T_290: (in __inb(0x60) : byte)
  Class: Eq_290
  DataType: byte
  OrigDataType: byte
T_291: (in DPB(ax_229, __inb(0x60), 0, 8) : word16)
  Class: Eq_291
  DataType: word16
  OrigDataType: word16
T_292: (in 0x0001 : word16)
  Class: Eq_291
  DataType: word16
  OrigDataType: word16
T_293: (in DPB(ax_229, __inb(0x60), 0, 8) != 0x0001 : bool)
  Class: Eq_293
  DataType: bool
  OrigDataType: bool
T_294: (in 0x0000 : word16)
  Class: Eq_294
  DataType: word16
  OrigDataType: word16
T_295: (in si_292 + 0x0000 : word16)
  Class: Eq_295
  DataType: word16
  OrigDataType: word16
T_296: (in Mem277[ds:si_292 + 0x0000:word16] : word16)
  Class: Eq_296
  DataType: word16
  OrigDataType: word16
T_297: (in 0x0000 : word16)
  Class: Eq_297
  DataType: word16
  OrigDataType: word16
T_298: (in di_289 + 0x0000 : word16)
  Class: Eq_298
  DataType: word16
  OrigDataType: word16
T_299: (in Mem303[es_73:di_289 + 0x0000:word16] : word16)
  Class: Eq_296
  DataType: word16
  OrigDataType: word16
T_300: (in 0x0002 : word16)
  Class: Eq_300
  DataType: word16
  OrigDataType: word16
T_301: (in si_292 + 0x0002 : word16)
  Class: Eq_284
  DataType: (memptr (ptr Eq_48) word16)
  OrigDataType: word16
T_302: (in 0x0002 : word16)
  Class: Eq_302
  DataType: word16
  OrigDataType: word16
T_303: (in di_289 + 0x0002 : word16)
  Class: Eq_282
  DataType: (memptr (ptr Eq_60) word16)
  OrigDataType: word16
T_304: (in 0x0001 : word16)
  Class: Eq_304
  DataType: word16
  OrigDataType: word16
T_305: (in cx - 0x0001 : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_306: (in 0x0000 : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_307: (in cx == 0x0000 : bool)
  Class: Eq_307
  DataType: bool
  OrigDataType: bool
T_308:
  Class: Eq_308
  DataType: byte
  OrigDataType: (struct 0001 (0 T_131 t0000))
T_309:
  Class: Eq_308
  DataType: byte
  OrigDataType: (struct 0001 (0 T_136 t0000))
T_310:
  Class: Eq_310
  DataType: word16
  OrigDataType: (struct 0002 (0 T_296 t0000))
T_311:
  Class: Eq_311
  DataType: word16
  OrigDataType: (struct 0002 (0 T_299 t0000))
*/
typedef struct Globals {
} Eq_1;

typedef void (Eq_2)(byte);

typedef void (Eq_19)(word16, byte);

typedef void (Eq_27)(word16, uint16);

typedef void (Eq_32)(word16, uint16);

typedef void (Eq_36)(word16, byte);

typedef Eq_69 Eq_48 Eq_48[]struct Eq_48 {
	segptr32 ptr0000;	// 0
	word16 w01FB;	// 1FB
	word16 w01FC;	// 1FC
	word16 w01FD;	// 1FD
	Eq_69 t0402;	// 402
	word16 a0404[];	// 404
} Eq_48;

typedef  Eq_60[]struct Eq_60 {
	word16 a0000[];	// 0
} Eq_60;

typedef union Eq_64 {
	int8 u0;
	int16 u1;
	bcu8 u2;
} Eq_64;

typedef Eq_64 Eq_69struct Eq_69 {	// size: 1 1
	Eq_64 t0000;	// 0
} Eq_69;

typedef Eq_90 (Eq_88)(Eq_89, real64);

typedef union Eq_89 {
	real16 u0;
	real64 u1;
} Eq_89;

typedef union Eq_90 {
	real16 u0;
	real64 u1;
} Eq_90;

typedef union Eq_93 {
	real16 u0;
	real64 u1;
} Eq_93;

typedef byte (Eq_155)(bcu8, byte);

typedef struct Eq_169 {
} Eq_169;

typedef Eq_69Eq_64struct Eq_170 {
	Eq_69 Eq_48::*ptr0000;	// 0
	Eq_64 Eq_48::*ptr0002;	// 2
} Eq_170;

typedef byte (Eq_288)(byte);

