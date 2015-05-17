// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_137/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_7: (union "Eq_7" (ptr32 u0) (segptr32 u1))
	T_7 (in es_bp_6 : ptr32)
	T_12 (in Mem0[ds:bx + 0x0000:segptr32] : segptr32)
Eq_8: (segment "Eq_8" (0 Eq_68 t0000) (3C9 (arr Eq_174 968) a03C9))
	T_8 (in ds : (ptr Eq_8))
Eq_13: (fn void (word16, byte))
	T_13 (in __outb : ptr32)
Eq_18: (segment "Eq_18")
	T_18 (in es_7 : (ptr Eq_18))
	T_19 (in SLICE(es_bp_6, selector, 16) : selector)
Eq_27: (fn void (word16, Eq_29))
	T_27 (in __outb : ptr32)
Eq_29: (union "Eq_29" (bcu8 u0) (word16 u1))
	T_29 (in al_100 : Eq_29)
	T_36 (in ch_102 : Eq_29)
	T_37 (in SLICE(cx_101, byte, 8) : byte)
	T_40 (in 0x3F : byte)
	T_45 (in (byte) ax_10 : byte)
	T_46 (in 0x3F : byte)
	T_84 (in v24_116 : Eq_29)
	T_87 (in Mem115[ds:bx_131 + 0x0000:byte] : byte)
	T_94 (in (byte) (SEQ(al_107 - 0x01, al_107 - 0x01) - 0x0001) : byte)
	T_97 (in Mem117[ds:bx_131 + 0x0000:byte] : byte)
	T_106 (in (byte) (ax_121 >>u 0x0005) : byte)
	T_116 (in Mem38[ds:bx_131 + 0x0001 + di:byte] : byte)
	T_121 (in Mem38[ds:bx_131 + 0x0040 + si:byte] : byte)
	T_128 (in Mem117[ds:bx_131 + 0x0000:byte] : byte)
	T_134 (in Mem117[ds:bx_131 + di:byte] : byte)
	T_141 (in 0x40 : byte)
	T_152 (in (byte) (ax_154 - 0x0001) : byte)
	T_167 (in SLICE(cx_101, byte, 8) : byte)
Eq_43: (fn uint16 (uint16, (memptr (ptr Eq_8) Eq_7), byte))
	T_43 (in __shrd : ptr32)
Eq_54: (struct "Eq_54" (FFFFFFFC word16 wFFFFFFFC) (FFFFFFFE word16 wFFFFFFFE) (0 (memptr Eq_57 Eq_54) ptr0000))
	T_54 (in sp_34 : (memptr (ptr Eq_57) Eq_54))
	T_56 (in sp_12 - 0x0002 : word16)
	T_60 (in Mem35[ss:sp_34 + 0x0000:word16] : word16)
Eq_57: (segment "Eq_57")
	T_57 (in ss : selector)
Eq_68: (struct "Eq_68" 0001 (0 Eq_29 t0000))
	T_68 (in bx_131 : (memptr (ptr Eq_8) Eq_68))
	T_69 (in 0x03C9 : word16)
	T_125 (in bx_131 + 0x0001 : word16)
	T_131 (in 0x0000 : word16)
Eq_75: (fn byte (byte, byte, byte))
	T_75 (in __rcr : ptr32)
Eq_80: (struct "Eq_80" (FFFFFFFF int16 wFFFFFFFF))
	T_80 (in bx_131 | sp_34 - 0x0002 : word16)
Eq_107: (union "Eq_107" (int16 u0) (uint16 u1))
	T_107 (in ax_121 >>u 0x0005 : word16)
Eq_109: (union "Eq_109" (int16 u0) ((memptr (ptr Eq_18) Eq_177) u1))
	T_109 (in (ax_121 >>u 0x0005) *s 0x0140 : int16)
	T_110 (in di : Eq_109)
	T_111 (in 0x0000 : word16)
	T_140 (in sp_34 - 0x0002 : word16)
	T_166 (in di + 0x0004 : word16)
Eq_145: (fn byte (byte))
	T_145 (in __inb : ptr32)
Eq_174: (struct "Eq_174" 0001 (0 Eq_29 t0000))
	T_174
	T_175
	T_176
Eq_177: (struct "Eq_177" 0001 (0 word32 dw0000))
	T_177
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
T_7: (in es_bp_6 : ptr32)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: ptr32
T_8: (in ds : (ptr Eq_8))
  Class: Eq_8
  DataType: (ptr Eq_8)
  OrigDataType: (ptr (segment (3C9 (arr T_174 968) a03C9)))
T_9: (in bx : (memptr (ptr Eq_8) Eq_7))
  Class: Eq_9
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_8 (struct (0 T_12 t0000)))
T_10: (in 0x0000 : word16)
  Class: Eq_10
  DataType: word16
  OrigDataType: word16
T_11: (in bx + 0x0000 : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_12: (in Mem0[ds:bx + 0x0000:segptr32] : segptr32)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: segptr32
T_13: (in __outb : ptr32)
  Class: Eq_13
  DataType: (ptr Eq_13)
  OrigDataType: (ptr (fn T_17 (T_14, T_16)))
T_14: (in 0x03C8 : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_15: (in wArg00 : word16)
  Class: Eq_15
  DataType: uint16
  OrigDataType: word16
T_16: (in (byte) wArg00 : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_17: (in __outb(0x03C8, (byte) wArg00) : void)
  Class: Eq_17
  DataType: void
  OrigDataType: void
T_18: (in es_7 : (ptr Eq_18))
  Class: Eq_18
  DataType: (ptr Eq_18)
  OrigDataType: (ptr (segment))
T_19: (in SLICE(es_bp_6, selector, 16) : selector)
  Class: Eq_18
  DataType: (ptr Eq_18)
  OrigDataType: (ptr (segment))
T_20: (in bp_64 : int16)
  Class: Eq_20
  DataType: int16
  OrigDataType: int16
T_21: (in (word16) es_bp_6 : word16)
  Class: Eq_20
  DataType: int16
  OrigDataType: word16
T_22: (in ax_10 : uint16)
  Class: Eq_15
  DataType: uint16
  OrigDataType: uint16
T_23: (in sp_12 : word16)
  Class: Eq_23
  DataType: word16
  OrigDataType: word16
T_24: (in fp : ptr16)
  Class: Eq_24
  DataType: ptr16
  OrigDataType: ptr16
T_25: (in 0x0002 : word16)
  Class: Eq_25
  DataType: word16
  OrigDataType: word16
T_26: (in fp + 0x0002 : word16)
  Class: Eq_23
  DataType: word16
  OrigDataType: word16
T_27: (in __outb : ptr32)
  Class: Eq_27
  DataType: (ptr Eq_27)
  OrigDataType: (ptr (fn T_30 (T_28, T_29)))
T_28: (in 0x03C9 : word16)
  Class: Eq_28
  DataType: word16
  OrigDataType: word16
T_29: (in al_100 : Eq_29)
  Class: Eq_29
  DataType: Eq_29
  OrigDataType: bcu8
T_30: (in __outb(0x03C9, al_100) : void)
  Class: Eq_30
  DataType: void
  OrigDataType: void
T_31: (in cx_101 : uint16)
  Class: Eq_31
  DataType: uint16
  OrigDataType: uint16
T_32: (in 0x0005 : word16)
  Class: Eq_32
  DataType: uint16
  OrigDataType: uint16
T_33: (in cx_101 >>u 0x0005 : word16)
  Class: Eq_31
  DataType: uint16
  OrigDataType: uint16
T_34: (in (byte) cx_101 : byte)
  Class: Eq_34
  DataType: byte
  OrigDataType: byte
T_35: (in cl_32 : byte)
  Class: Eq_34
  DataType: byte
  OrigDataType: byte
T_36: (in ch_102 : Eq_29)
  Class: Eq_29
  DataType: Eq_29
  OrigDataType: byte
T_37: (in SLICE(cx_101, byte, 8) : byte)
  Class: Eq_29
  DataType: Eq_29
  OrigDataType: byte
T_38: (in 0x0000 : word16)
  Class: Eq_31
  DataType: uint16
  OrigDataType: word16
T_39: (in cx_101 != 0x0000 : bool)
  Class: Eq_39
  DataType: bool
  OrigDataType: bool
T_40: (in 0x3F : byte)
  Class: Eq_29
  DataType: bcu8
  OrigDataType: byte
T_41: (in 0x3F : byte)
  Class: Eq_41
  DataType: byte
  OrigDataType: byte
T_42: (in DPB(ax_10, 0x3F, 0, 8) : word16)
  Class: Eq_15
  DataType: uint16
  OrigDataType: word16
T_43: (in __shrd : ptr32)
  Class: Eq_43
  DataType: (ptr Eq_43)
  OrigDataType: (ptr (fn T_44 (T_22, T_9, T_35)))
T_44: (in __shrd(ax_10, bx, cl_32) : word16)
  Class: Eq_15
  DataType: uint16
  OrigDataType: word16
T_45: (in (byte) ax_10 : byte)
  Class: Eq_29
  DataType: Eq_29
  OrigDataType: byte
T_46: (in 0x3F : byte)
  Class: Eq_29
  DataType: bcu8
  OrigDataType: bcu8
T_47: (in al_100 <u 0x3F : bool)
  Class: Eq_47
  DataType: bool
  OrigDataType: bool
T_48: (in bl : byte)
  Class: Eq_48
  DataType: byte
  OrigDataType: byte
T_49: (in 0x01 : byte)
  Class: Eq_49
  DataType: byte
  OrigDataType: byte
T_50: (in bl + 0x01 : byte)
  Class: Eq_48
  DataType: byte
  OrigDataType: byte
T_51: (in DPB(bx, bl, 0, 8) : word16)
  Class: Eq_9
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: word16
T_52: (in 0x00 : byte)
  Class: Eq_48
  DataType: byte
  OrigDataType: byte
T_53: (in bl != 0x00 : bool)
  Class: Eq_53
  DataType: bool
  OrigDataType: bool
T_54: (in sp_34 : (memptr (ptr Eq_57) Eq_54))
  Class: Eq_54
  DataType: (memptr (ptr Eq_57) Eq_54)
  OrigDataType: (memptr T_57 (struct (FFFFFFFC T_173 tFFFFFFFC) (FFFFFFFE T_64 tFFFFFFFE) (0 T_60 t0000)))
T_55: (in 0x0002 : word16)
  Class: Eq_55
  DataType: word16
  OrigDataType: word16
T_56: (in sp_12 - 0x0002 : word16)
  Class: Eq_54
  DataType: (memptr (ptr Eq_57) Eq_54)
  OrigDataType: word16
T_57: (in ss : selector)
  Class: Eq_57
  DataType: (ptr Eq_57)
  OrigDataType: (ptr (segment))
T_58: (in 0x0000 : word16)
  Class: Eq_58
  DataType: word16
  OrigDataType: word16
T_59: (in sp_34 + 0x0000 : word16)
  Class: Eq_59
  DataType: word16
  OrigDataType: word16
T_60: (in Mem35[ss:sp_34 + 0x0000:word16] : word16)
  Class: Eq_54
  DataType: (memptr (ptr Eq_57) Eq_54)
  OrigDataType: word16
T_61: (in 0x0002 : word16)
  Class: Eq_61
  DataType: word16
  OrigDataType: word16
T_62: (in sp_34 - 0x0002 : word16)
  Class: Eq_62
  DataType: word16
  OrigDataType: word16
T_63: (in sp_34 - 0x0002 : word16)
  Class: Eq_63
  DataType: word16
  OrigDataType: word16
T_64: (in Mem38[ss:sp_34 - 0x0002:word16] : word16)
  Class: Eq_62
  DataType: word16
  OrigDataType: word16
T_65: (in 0x4E30 : word16)
  Class: Eq_31
  DataType: uint16
  OrigDataType: word16
T_66: (in 0x30 : byte)
  Class: Eq_34
  DataType: byte
  OrigDataType: byte
T_67: (in sp_34 - 0x0002 : word16)
  Class: Eq_23
  DataType: word16
  OrigDataType: word16
T_68: (in bx_131 : (memptr (ptr Eq_8) Eq_68))
  Class: Eq_68
  DataType: (memptr (ptr Eq_8) Eq_68)
  OrigDataType: (memptr T_8 (struct 0001 (0 T_29 t0000)))
T_69: (in 0x03C9 : word16)
  Class: Eq_68
  DataType: (memptr (ptr Eq_8) Eq_68)
  OrigDataType: word16
T_70: (in bh_133 : byte)
  Class: Eq_70
  DataType: byte
  OrigDataType: byte
T_71: (in 0x03 : byte)
  Class: Eq_70
  DataType: byte
  OrigDataType: byte
T_72: (in al_103 : byte)
  Class: Eq_72
  DataType: byte
  OrigDataType: byte
T_73: (in al_100 + ch_102 : byte)
  Class: Eq_72
  DataType: byte
  OrigDataType: byte
T_74: (in al_107 : byte)
  Class: Eq_74
  DataType: byte
  OrigDataType: byte
T_75: (in __rcr : ptr32)
  Class: Eq_75
  DataType: (ptr Eq_75)
  OrigDataType: (ptr (fn T_78 (T_72, T_76, T_77)))
T_76: (in 0x01 : byte)
  Class: Eq_76
  DataType: byte
  OrigDataType: byte
T_77: (in cond(al_103) : byte)
  Class: Eq_77
  DataType: byte
  OrigDataType: byte
T_78: (in __rcr(al_103, 0x01, cond(al_103)) : byte)
  Class: Eq_74
  DataType: byte
  OrigDataType: byte
T_79: (in sp_34 - 0x0002 : word16)
  Class: Eq_79
  DataType: word16
  OrigDataType: word16
T_80: (in bx_131 | sp_34 - 0x0002 : word16)
  Class: Eq_80
  DataType: (memptr (ptr Eq_8) Eq_80)
  OrigDataType: (memptr T_8 (struct (FFFFFFFF T_83 tFFFFFFFF)))
T_81: (in 0x0001 : word16)
  Class: Eq_81
  DataType: word16
  OrigDataType: word16
T_82: (in (bx_131 | sp_34 - 0x0002) - 0x0001 : word16)
  Class: Eq_82
  DataType: word16
  OrigDataType: word16
T_83: (in Mem115[ds:(bx_131 | sp_34 - 0x0002) - 0x0001:word16] : word16)
  Class: Eq_20
  DataType: int16
  OrigDataType: word16
T_84: (in v24_116 : Eq_29)
  Class: Eq_29
  DataType: Eq_29
  OrigDataType: word16
T_85: (in 0x0000 : word16)
  Class: Eq_85
  DataType: word16
  OrigDataType: word16
T_86: (in bx_131 + 0x0000 : word16)
  Class: Eq_86
  DataType: word16
  OrigDataType: word16
T_87: (in Mem115[ds:bx_131 + 0x0000:byte] : byte)
  Class: Eq_29
  DataType: Eq_29
  OrigDataType: byte
T_88: (in 0x01 : byte)
  Class: Eq_88
  DataType: byte
  OrigDataType: byte
T_89: (in al_107 - 0x01 : byte)
  Class: Eq_89
  DataType: byte
  OrigDataType: byte
T_90: (in al_107 - 0x01 : byte)
  Class: Eq_90
  DataType: byte
  OrigDataType: byte
T_91: (in SEQ(al_107 - 0x01, al_107 - 0x01) : ui16)
  Class: Eq_91
  DataType: ui16
  OrigDataType: ui16
T_92: (in 0x0001 : ui16)
  Class: Eq_92
  DataType: ui16
  OrigDataType: ui16
T_93: (in SEQ(al_107 - 0x01, al_107 - 0x01) - 0x0001 : ui16)
  Class: Eq_93
  DataType: ui16
  OrigDataType: ui16
T_94: (in (byte) (SEQ(al_107 - 0x01, al_107 - 0x01) - 0x0001) : byte)
  Class: Eq_29
  DataType: Eq_29
  OrigDataType: byte
T_95: (in 0x0000 : word16)
  Class: Eq_95
  DataType: word16
  OrigDataType: word16
T_96: (in bx_131 + 0x0000 : word16)
  Class: Eq_96
  DataType: word16
  OrigDataType: word16
T_97: (in Mem117[ds:bx_131 + 0x0000:byte] : byte)
  Class: Eq_29
  DataType: Eq_29
  OrigDataType: byte
T_98: (in ax_121 : uint16)
  Class: Eq_98
  DataType: uint16
  OrigDataType: uint16
T_99: (in 0xE0 : byte)
  Class: Eq_99
  DataType: byte
  OrigDataType: byte
T_100: (in v24_116 + 0xE0 : byte)
  Class: Eq_100
  DataType: byte
  OrigDataType: byte
T_101: (in v24_116.u1 - bh_133 : byte)
  Class: Eq_101
  DataType: byte
  OrigDataType: byte
T_102: (in DPB(ax_10, v24_116.u1 - bh_133, 0, 8) : word16)
  Class: Eq_98
  DataType: uint16
  OrigDataType: word16
T_103: (in 0x0005 : word16)
  Class: Eq_103
  DataType: uint16
  OrigDataType: uint16
T_104: (in ax_121 >>u 0x0005 : word16)
  Class: Eq_15
  DataType: uint16
  OrigDataType: uint16
T_105: (in ax_121 >>u 0x0005 : word16)
  Class: Eq_105
  DataType: uint16
  OrigDataType: uint16
T_106: (in (byte) (ax_121 >>u 0x0005) : byte)
  Class: Eq_29
  DataType: Eq_29
  OrigDataType: byte
T_107: (in ax_121 >>u 0x0005 : word16)
  Class: Eq_107
  DataType: Eq_107
  OrigDataType: (union (int16 u0) (uint16 u1))
T_108: (in 0x0140 : word16)
  Class: Eq_108
  DataType: int16
  OrigDataType: int16
T_109: (in (ax_121 >>u 0x0005) *s 0x0140 : int16)
  Class: Eq_109
  DataType: Eq_109
  OrigDataType: int16
T_110: (in di : Eq_109)
  Class: Eq_109
  DataType: Eq_109
  OrigDataType: (union (int16 u0) ((memptr (ptr Eq_18) (struct "Eq_177" 0001 (0 word32 dw0000))) u1))
T_111: (in 0x0000 : word16)
  Class: Eq_109
  DataType: int16
  OrigDataType: word16
T_112: (in di == 0x0000 : bool)
  Class: Eq_112
  DataType: bool
  OrigDataType: bool
T_113: (in 0x0001 : word16)
  Class: Eq_113
  DataType: word16
  OrigDataType: word16
T_114: (in bx_131 + 0x0001 : word16)
  Class: Eq_114
  DataType: (memptr (ptr Eq_8) Eq_29)
  OrigDataType: (memptr T_8 (struct (0 T_116 t0000)))
T_115: (in bx_131 + 0x0001 + di : word16)
  Class: Eq_115
  DataType: word16
  OrigDataType: word16
T_116: (in Mem38[ds:bx_131 + 0x0001 + di:byte] : byte)
  Class: Eq_29
  DataType: Eq_29
  OrigDataType: byte
T_117: (in 0x0040 : word16)
  Class: Eq_117
  DataType: word16
  OrigDataType: word16
T_118: (in bx_131 + 0x0040 : word16)
  Class: Eq_118
  DataType: (memptr (ptr Eq_8) Eq_29)
  OrigDataType: (memptr T_8 (struct (0 T_121 t0000)))
T_119: (in si : (memptr (ptr Eq_8) word32))
  Class: Eq_119
  DataType: (memptr (ptr Eq_8) word32)
  OrigDataType: (memptr T_8 (struct 0004 (0 T_157 t0000)))
T_120: (in bx_131 + 0x0040 + si : word16)
  Class: Eq_120
  DataType: word16
  OrigDataType: word16
T_121: (in Mem38[ds:bx_131 + 0x0040 + si:byte] : byte)
  Class: Eq_29
  DataType: Eq_29
  OrigDataType: byte
T_122: (in DPB(ax_10, al_100, 0, 8) : word16)
  Class: Eq_15
  DataType: uint16
  OrigDataType: word16
T_123: (in DPB(cx_101, ch_102, 8, 8) : word16)
  Class: Eq_31
  DataType: uint16
  OrigDataType: word16
T_124: (in 0x0001 : word16)
  Class: Eq_124
  DataType: word16
  OrigDataType: word16
T_125: (in bx_131 + 0x0001 : word16)
  Class: Eq_68
  DataType: (memptr (ptr Eq_8) Eq_68)
  OrigDataType: word16
T_126: (in 0x0000 : word16)
  Class: Eq_126
  DataType: word16
  OrigDataType: word16
T_127: (in bx_131 + 0x0000 : word16)
  Class: Eq_127
  DataType: word16
  OrigDataType: word16
T_128: (in Mem117[ds:bx_131 + 0x0000:byte] : byte)
  Class: Eq_29
  DataType: Eq_29
  OrigDataType: byte
T_129: (in SLICE(bx_131, byte, 8) : byte)
  Class: Eq_70
  DataType: byte
  OrigDataType: byte
T_130: (in DPB(cx_101, ch_102, 8, 8) : word16)
  Class: Eq_31
  DataType: uint16
  OrigDataType: word16
T_131: (in 0x0000 : word16)
  Class: Eq_68
  DataType: (memptr (ptr Eq_8) Eq_68)
  OrigDataType: word16
T_132: (in bx_131 != &Eq_8::t0000 : bool)
  Class: Eq_132
  DataType: bool
  OrigDataType: bool
T_133: (in bx_131 + di : word16)
  Class: Eq_133
  DataType: word16
  OrigDataType: word16
T_134: (in Mem117[ds:bx_131 + di:byte] : byte)
  Class: Eq_29
  DataType: Eq_29
  OrigDataType: byte
T_135: (in ax_121 >>u 0x0005 : word16)
  Class: Eq_135
  DataType: uint16
  OrigDataType: uint16
T_136: (in DPB(ax_121 >>u 0x0005, al_100, 0, 8) : word16)
  Class: Eq_15
  DataType: uint16
  OrigDataType: word16
T_137: (in bp_64 + bx_131 : word16)
  Class: Eq_20
  DataType: int16
  OrigDataType: word16
T_138: (in 0x0000 : word16)
  Class: Eq_20
  DataType: int16
  OrigDataType: int16
T_139: (in bp_64 < 0x0000 : bool)
  Class: Eq_139
  DataType: bool
  OrigDataType: bool
T_140: (in sp_34 - 0x0002 : word16)
  Class: Eq_109
  DataType: Eq_109
  OrigDataType: word16
T_141: (in 0x40 : byte)
  Class: Eq_29
  DataType: bcu8
  OrigDataType: byte
T_142: (in 0x40 : byte)
  Class: Eq_142
  DataType: byte
  OrigDataType: byte
T_143: (in DPB(cx_101, 0x40, 8, 8) : word16)
  Class: Eq_31
  DataType: uint16
  OrigDataType: word16
T_144: (in ax_154 : word16)
  Class: Eq_144
  DataType: word16
  OrigDataType: word16
T_145: (in __inb : ptr32)
  Class: Eq_145
  DataType: (ptr Eq_145)
  OrigDataType: (ptr (fn T_147 (T_146)))
T_146: (in 0x60 : byte)
  Class: Eq_146
  DataType: byte
  OrigDataType: byte
T_147: (in __inb(0x60) : byte)
  Class: Eq_147
  DataType: byte
  OrigDataType: byte
T_148: (in DPB(ax_10, __inb(0x60), 0, 8) : word16)
  Class: Eq_144
  DataType: word16
  OrigDataType: word16
T_149: (in 0x0001 : word16)
  Class: Eq_149
  DataType: word16
  OrigDataType: word16
T_150: (in ax_154 - 0x0001 : word16)
  Class: Eq_15
  DataType: uint16
  OrigDataType: word16
T_151: (in ax_154 - 0x0001 : word16)
  Class: Eq_151
  DataType: word16
  OrigDataType: word16
T_152: (in (byte) (ax_154 - 0x0001) : byte)
  Class: Eq_29
  DataType: Eq_29
  OrigDataType: byte
T_153: (in 0x0001 : word16)
  Class: Eq_144
  DataType: word16
  OrigDataType: word16
T_154: (in ax_154 != 0x0001 : bool)
  Class: Eq_154
  DataType: bool
  OrigDataType: bool
T_155: (in 0x0000 : word16)
  Class: Eq_155
  DataType: word16
  OrigDataType: word16
T_156: (in si + 0x0000 : word16)
  Class: Eq_156
  DataType: word16
  OrigDataType: word16
T_157: (in Mem117[ds:si + 0x0000:word32] : word32)
  Class: Eq_157
  DataType: word32
  OrigDataType: word32
T_158: (in 0x0000 : word16)
  Class: Eq_158
  DataType: word16
  OrigDataType: word16
T_159: (in di + 0x0000 : word16)
  Class: Eq_159
  DataType: word16
  OrigDataType: word16
T_160: (in Mem147[es_7:di + 0x0000:word32] : word32)
  Class: Eq_157
  DataType: word32
  OrigDataType: word32
T_161: (in 0x0001 : word16)
  Class: Eq_161
  DataType: word16
  OrigDataType: word16
T_162: (in cx_101 - 0x0001 : word16)
  Class: Eq_31
  DataType: uint16
  OrigDataType: word16
T_163: (in 0x0004 : word16)
  Class: Eq_163
  DataType: word16
  OrigDataType: word16
T_164: (in si + 0x0004 : word16)
  Class: Eq_119
  DataType: (memptr (ptr Eq_8) word32)
  OrigDataType: word16
T_165: (in 0x0004 : word16)
  Class: Eq_165
  DataType: word16
  OrigDataType: word16
T_166: (in di + 0x0004 : word16)
  Class: Eq_109
  DataType: Eq_109
  OrigDataType: word16
T_167: (in SLICE(cx_101, byte, 8) : byte)
  Class: Eq_29
  DataType: Eq_29
  OrigDataType: byte
T_168: (in 0x0000 : word16)
  Class: Eq_31
  DataType: uint16
  OrigDataType: word16
T_169: (in cx_101 == 0x0000 : bool)
  Class: Eq_169
  DataType: bool
  OrigDataType: bool
T_170: (in ax_154 - 0x0001 : word16)
  Class: Eq_170
  DataType: word16
  OrigDataType: word16
T_171: (in 0x0004 : word16)
  Class: Eq_171
  DataType: word16
  OrigDataType: word16
T_172: (in sp_34 - 0x0004 : word16)
  Class: Eq_172
  DataType: word16
  OrigDataType: word16
T_173: (in Mem161[ss:sp_34 - 0x0004:word16] : word16)
  Class: Eq_170
  DataType: word16
  OrigDataType: word16
T_174:
  Class: Eq_174
  DataType: Eq_174
  OrigDataType: (struct 0001 (0 T_87 t0000))
T_175:
  Class: Eq_174
  DataType: Eq_174
  OrigDataType: (struct 0001 (0 T_97 t0000))
T_176:
  Class: Eq_174
  DataType: Eq_174
  OrigDataType: (struct 0001 (0 T_128 t0000))
T_177:
  Class: Eq_177
  DataType: Eq_177
  OrigDataType: 
*/
typedef struct Globals {
} Eq_1;

typedef void (Eq_2)(byte);

typedef union Eq_7 {
	ptr32 u0;
	segptr32 u1;
} Eq_7;

typedef Eq_68 Eq_8Eq_174 Eq_8[968]struct Eq_8 {
	Eq_68 t0000;	// 0
	Eq_174 a03C9[968];	// 3C9
} Eq_8;

typedef void (Eq_13)(word16, byte);

typedef struct Eq_18 {
} Eq_18;

typedef void (Eq_27)(word16, Eq_29);

typedef union Eq_29 {
	bcu8 u0;
	word16 u1;
} Eq_29;

typedef uint16 (Eq_43)(uint16, Eq_7 Eq_8::*, byte);

typedef Eq_54struct Eq_54 {
	word16 wFFFFFFFC;	// FFFFFFFC
	word16 wFFFFFFFE;	// FFFFFFFE
	Eq_54 Eq_57::*ptr0000;	// 0
} Eq_54;

typedef struct Eq_57 {
} Eq_57;

typedef Eq_29 Eq_68struct Eq_68 {	// size: 1 1
	Eq_29 t0000;	// 0
} Eq_68;

typedef byte (Eq_75)(byte, byte, byte);

typedef struct Eq_80 {
	int16 wFFFFFFFF;	// FFFFFFFF
} Eq_80;

typedef union Eq_107 {
	int16 u0;
	uint16 u1;
} Eq_107;

typedef union Eq_109 {
	int16 u0;
	Eq_177 Eq_18::* u1;
} Eq_109;

typedef byte (Eq_145)(byte);

typedef Eq_29 Eq_174struct Eq_174 {	// size: 1 1
	Eq_29 t0000;	// 0
} Eq_174;

typedef struct Eq_177 {	// size: 1 1
	word32 dw0000;	// 0
} Eq_177;

