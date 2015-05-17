// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_204/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_86) ptrFFFA0000) (C000 (ptr Eq_135) ptrC000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_3: (fn void (byte))
	T_3 (in bios_video_set_mode : ptr32)
	T_4 (in signature of bios_video_set_mode : void)
	T_167 (in bios_video_set_mode : ptr32)
Eq_12: (struct "Eq_12" 0001 (0 int32 dw0000))
	T_12 (in di_10 : (memptr (ptr Eq_19) Eq_12))
	T_13 (in 0x01FC : word16)
	T_54 (in di_10 + 0x0001 : word16)
Eq_14: (union "Eq_14" (real16 u0) (real64 u1))
	T_14 (in rLoc1_19 : Eq_14)
	T_15 (in 0 : real64)
	T_29 (in rLoc1_19 + ds->t01E9 : word16)
Eq_16: (fn Eq_18 (Eq_17))
	T_16 (in sin : ptr32)
Eq_17: (union "Eq_17" (real16 u0) (real64 u1))
	T_17 (in rLoc2 : real64)
	T_22 (in sin(rLoc2) * ds->t01ED : word16)
Eq_18: (union "Eq_18" (real16 u0) (real64 u1))
	T_18 (in sin(rLoc2) : real64)
Eq_19: (segment "Eq_19" (1E9 Eq_28 t01E9) (1ED Eq_21 t01ED) (1F4 Eq_59 t01F4) (1F8 Eq_59 t01F8) (1F9 byte b01F9) (1FA word16 w01FA) (1FB byte b01FB) (1FC (arr Eq_170) a01FC))
	T_19 (in ds : (ptr Eq_19))
Eq_21: (union "Eq_21" (real16 u0) (real32 u1))
	T_21 (in Mem0[ds:0x01ED:real32] : real32)
Eq_28: (union "Eq_28" (real16 u0) (real32 u1))
	T_28 (in Mem18[ds:0x01E9:real32] : real32)
Eq_30: (fn void (word16, uint8))
	T_30 (in __outb : ptr32)
Eq_33: (union "Eq_33" (uint16 u0) (byte u1))
	T_33 (in al_24 : Eq_33)
	T_35 (in cl_12 >>u 0x02 : word16)
Eq_36: (fn void (word16, byte))
	T_36 (in __outb : ptr32)
Eq_41: (fn void (word16, byte))
	T_41 (in __outb : ptr32)
Eq_45: (fn void (word16, byte))
	T_45 (in __outb : ptr32)
Eq_59: (union "Eq_59" (word16 u0) (word32 u1))
	T_59 (in Mem109[ds:0x01F8:word16] : word16)
	T_63 (in Mem109[ds:0x01F8:word16] + (int16) ((byte) ax) : word16)
	T_64 (in Mem161[ds:0x01F8:word16] : word16)
	T_147 (in Mem18[ds:0x01F4:word32] : word32)
	T_149 (in Mem109[ds:0x01F8:word32] : word32)
	T_154 (in Mem165[ds:0x01F4:word16] : word16)
	T_156 (in Mem165[ds:0x01F4:word16] + 0x0040 : word16)
	T_157 (in Mem185[ds:0x01F4:word16] : word16)
Eq_80: (union "Eq_80" (int16 u0) (uint16 u1))
	T_80 (in si_107 : Eq_80)
	T_91 (in si_107 - 0x0001 : word16)
	T_96 (in bx_144 : Eq_80)
	T_125 (in 0xFFE3 - -(SEQ(SEQ(0x0000, dx_132 << 0x0008) % cx_126, dx_132 << 0x0008) / cx_126) : word16)
	T_152 (in 0x00C7 : word16)
Eq_86: (segment "Eq_86")
	T_86 (in 0xA000 : selector)
Eq_135: (segment "Eq_135")
	T_135 (in 0x0C00 : selector)
Eq_141: (struct "Eq_141" (1FC byte b01FC))
	T_141 (in cx_178 + bp + 0x0200 & 0x07FF : word16)
Eq_160: (fn byte (byte))
	T_160 (in __inb : ptr32)
Eq_170: (struct "Eq_170" 0001 (0 int32 dw0000))
	T_170
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr Eq_1)
  OrigDataType: (ptr (struct "Globals"))
T_2: (in rLoc1 : real64)
  Class: Eq_2
  DataType: real64
  OrigDataType: real64
T_3: (in bios_video_set_mode : ptr32)
  Class: Eq_3
  DataType: (ptr Eq_3)
  OrigDataType: (ptr (fn T_7 (T_6)))
T_4: (in signature of bios_video_set_mode : void)
  Class: Eq_3
  DataType: (ptr Eq_3)
  OrigDataType: 
T_5: (in al : byte)
  Class: Eq_5
  DataType: byte
  OrigDataType: byte
T_6: (in 0x13 : byte)
  Class: Eq_5
  DataType: byte
  OrigDataType: byte
T_7: (in bios_video_set_mode(0x13) : void)
  Class: Eq_7
  DataType: void
  OrigDataType: void
T_8: (in cx_11 : word16)
  Class: Eq_8
  DataType: word16
  OrigDataType: word16
T_9: (in 0x0800 : word16)
  Class: Eq_8
  DataType: word16
  OrigDataType: word16
T_10: (in cl_12 : uint8)
  Class: Eq_10
  DataType: uint8
  OrigDataType: uint8
T_11: (in 0x00 : byte)
  Class: Eq_10
  DataType: uint8
  OrigDataType: byte
T_12: (in di_10 : (memptr (ptr Eq_19) Eq_12))
  Class: Eq_12
  DataType: (memptr (ptr Eq_19) Eq_12)
  OrigDataType: (memptr T_19 (struct 0001 (0 T_26 t0000)))
T_13: (in 0x01FC : word16)
  Class: Eq_12
  DataType: (memptr (ptr Eq_19) Eq_12)
  OrigDataType: word16
T_14: (in rLoc1_19 : Eq_14)
  Class: Eq_14
  DataType: Eq_14
  OrigDataType: (union (real16 u0) (real64 u1))
T_15: (in 0 : real64)
  Class: Eq_14
  DataType: real64
  OrigDataType: real64
T_16: (in sin : ptr32)
  Class: Eq_16
  DataType: (ptr Eq_16)
  OrigDataType: (ptr (fn T_18 (T_17)))
T_17: (in rLoc2 : real64)
  Class: Eq_17
  DataType: Eq_17
  OrigDataType: (union (real16 u0) (real64 u1))
T_18: (in sin(rLoc2) : real64)
  Class: Eq_18
  DataType: Eq_18
  OrigDataType: (union (real16 u0) (real64 u1))
T_19: (in ds : (ptr Eq_19))
  Class: Eq_19
  DataType: (ptr Eq_19)
  OrigDataType: (ptr (segment (1E9 T_28 t01E9) (1ED T_21 t01ED) (1F4 T_59 t01F4) (1F8 T_59 t01F8) (1F9 T_100 t01F9) (1FA T_66 t01FA) (1FB T_102 t01FB) (1FC (arr T_170) a01FC)))
T_20: (in 0x01ED : word16)
  Class: Eq_20
  DataType: (memptr (ptr Eq_19) Eq_21)
  OrigDataType: (memptr T_19 (struct (0 T_21 t0000)))
T_21: (in Mem0[ds:0x01ED:real32] : real32)
  Class: Eq_21
  DataType: Eq_21
  OrigDataType: (union (real16 u0) (real32 u1))
T_22: (in sin(rLoc2) * ds->t01ED : word16)
  Class: Eq_17
  DataType: Eq_17
  OrigDataType: real16
T_23: (in (int32) rLoc2 : int32)
  Class: Eq_23
  DataType: int32
  OrigDataType: int32
T_24: (in 0x0000 : word16)
  Class: Eq_24
  DataType: word16
  OrigDataType: word16
T_25: (in di_10 + 0x0000 : word16)
  Class: Eq_25
  DataType: word16
  OrigDataType: word16
T_26: (in Mem18[ds:di_10 + 0x0000:int32] : int32)
  Class: Eq_23
  DataType: int32
  OrigDataType: int32
T_27: (in 0x01E9 : word16)
  Class: Eq_27
  DataType: (memptr (ptr Eq_19) Eq_28)
  OrigDataType: (memptr T_19 (struct (0 T_28 t0000)))
T_28: (in Mem18[ds:0x01E9:real32] : real32)
  Class: Eq_28
  DataType: Eq_28
  OrigDataType: (union (real16 u0) (real32 u1))
T_29: (in rLoc1_19 + ds->t01E9 : word16)
  Class: Eq_14
  DataType: Eq_14
  OrigDataType: real16
T_30: (in __outb : ptr32)
  Class: Eq_30
  DataType: (ptr Eq_30)
  OrigDataType: (ptr (fn T_32 (T_31, T_10)))
T_31: (in 0x03C8 : word16)
  Class: Eq_31
  DataType: word16
  OrigDataType: word16
T_32: (in __outb(0x03C8, cl_12) : void)
  Class: Eq_32
  DataType: void
  OrigDataType: void
T_33: (in al_24 : Eq_33)
  Class: Eq_33
  DataType: Eq_33
  OrigDataType: byte
T_34: (in 0x02 : byte)
  Class: Eq_34
  DataType: uint8
  OrigDataType: uint8
T_35: (in cl_12 >>u 0x02 : word16)
  Class: Eq_33
  DataType: Eq_33
  OrigDataType: uint16
T_36: (in __outb : ptr32)
  Class: Eq_36
  DataType: (ptr Eq_36)
  OrigDataType: (ptr (fn T_40 (T_37, T_39)))
T_37: (in 0x03C9 : word16)
  Class: Eq_37
  DataType: word16
  OrigDataType: word16
T_38: (in 0x3F : byte)
  Class: Eq_38
  DataType: byte
  OrigDataType: byte
T_39: (in al_24 ^ 0x3F : byte)
  Class: Eq_39
  DataType: byte
  OrigDataType: byte
T_40: (in __outb(0x03C9, al_24 ^ 0x3F) : void)
  Class: Eq_40
  DataType: void
  OrigDataType: void
T_41: (in __outb : ptr32)
  Class: Eq_41
  DataType: (ptr Eq_41)
  OrigDataType: (ptr (fn T_44 (T_42, T_43)))
T_42: (in 0x03C9 : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_43: (in al_24 ^ 0x3F : byte)
  Class: Eq_43
  DataType: byte
  OrigDataType: byte
T_44: (in __outb(0x03C9, al_24 ^ 0x3F) : void)
  Class: Eq_44
  DataType: void
  OrigDataType: void
T_45: (in __outb : ptr32)
  Class: Eq_45
  DataType: (ptr Eq_45)
  OrigDataType: (ptr (fn T_50 (T_46, T_49)))
T_46: (in 0x03C9 : word16)
  Class: Eq_46
  DataType: word16
  OrigDataType: word16
T_47: (in al_24 ^ 0x3F : byte)
  Class: Eq_47
  DataType: byte
  OrigDataType: byte
T_48: (in 0x0E : byte)
  Class: Eq_48
  DataType: byte
  OrigDataType: byte
T_49: (in (al_24 ^ 0x3F) - 0x0E : byte)
  Class: Eq_49
  DataType: byte
  OrigDataType: byte
T_50: (in __outb(0x03C9, (al_24 ^ 0x3F) - 0x0E) : void)
  Class: Eq_50
  DataType: void
  OrigDataType: void
T_51: (in 0x0001 : word16)
  Class: Eq_51
  DataType: word16
  OrigDataType: word16
T_52: (in cx_11 - 0x0001 : word16)
  Class: Eq_8
  DataType: word16
  OrigDataType: word16
T_53: (in 0x0001 : word16)
  Class: Eq_53
  DataType: word16
  OrigDataType: word16
T_54: (in di_10 + 0x0001 : word16)
  Class: Eq_12
  DataType: (memptr (ptr Eq_19) Eq_12)
  OrigDataType: word16
T_55: (in (byte) cx_11 : byte)
  Class: Eq_10
  DataType: uint8
  OrigDataType: byte
T_56: (in 0x0000 : word16)
  Class: Eq_8
  DataType: word16
  OrigDataType: word16
T_57: (in cx_11 != 0x0000 : bool)
  Class: Eq_57
  DataType: bool
  OrigDataType: bool
T_58: (in 0x01F8 : word16)
  Class: Eq_58
  DataType: (memptr (ptr Eq_19) Eq_59)
  OrigDataType: (memptr T_19 (struct (0 T_59 t0000)))
T_59: (in Mem109[ds:0x01F8:word16] : word16)
  Class: Eq_59
  DataType: Eq_59
  OrigDataType: word16
T_60: (in ax : word16)
  Class: Eq_60
  DataType: word16
  OrigDataType: word16
T_61: (in (byte) ax : byte)
  Class: Eq_61
  DataType: byte
  OrigDataType: byte
T_62: (in (int16) (byte) ax : int16)
  Class: Eq_62
  DataType: int16
  OrigDataType: int16
T_63: (in Mem109[ds:0x01F8:word16] + (int16) ((byte) ax) : word16)
  Class: Eq_59
  DataType: Eq_59
  OrigDataType: word16
T_64: (in Mem161[ds:0x01F8:word16] : word16)
  Class: Eq_59
  DataType: Eq_59
  OrigDataType: word16
T_65: (in 0x01FA : word16)
  Class: Eq_65
  DataType: (memptr (ptr Eq_19) word16)
  OrigDataType: (memptr T_19 (struct (0 T_66 t0000)))
T_66: (in Mem161[ds:0x01FA:word16] : word16)
  Class: Eq_66
  DataType: word16
  OrigDataType: word16
T_67: (in SLICE(ax, byte, 8) : byte)
  Class: Eq_67
  DataType: byte
  OrigDataType: byte
T_68: (in (int16) SLICE(ax, byte, 8) : int16)
  Class: Eq_68
  DataType: int16
  OrigDataType: int16
T_69: (in ds->w01FA + (int16) SLICE(ax, byte, 8) : word16)
  Class: Eq_66
  DataType: word16
  OrigDataType: word16
T_70: (in Mem165[ds:0x01FA:word16] : word16)
  Class: Eq_66
  DataType: word16
  OrigDataType: word16
T_71: (in cx_105 : word16)
  Class: Eq_71
  DataType: word16
  OrigDataType: word16
T_72: (in 0x0001 : word16)
  Class: Eq_72
  DataType: word16
  OrigDataType: word16
T_73: (in cx_105 - 0x0001 : word16)
  Class: Eq_71
  DataType: word16
  OrigDataType: word16
T_74: (in (byte) cx_105 : byte)
  Class: Eq_74
  DataType: byte
  OrigDataType: byte
T_75: (in cl_106 : byte)
  Class: Eq_74
  DataType: byte
  OrigDataType: byte
T_76: (in 0x0000 : word16)
  Class: Eq_71
  DataType: word16
  OrigDataType: word16
T_77: (in cx_105 != 0x0000 : bool)
  Class: Eq_77
  DataType: bool
  OrigDataType: bool
T_78: (in di_196 : (memptr (ptr Eq_86) byte))
  Class: Eq_78
  DataType: (memptr (ptr Eq_86) byte)
  OrigDataType: (memptr T_86 (struct (0 T_89 t0000)))
T_79: (in di_115 : word16)
  Class: Eq_79
  DataType: word16
  OrigDataType: word16
T_80: (in si_107 : Eq_80)
  Class: Eq_80
  DataType: Eq_80
  OrigDataType: (union (int16 u0) (uint16 u1))
T_81: (in 0x0140 : word16)
  Class: Eq_81
  DataType: uint16
  OrigDataType: uint16
T_82: (in si_107 *u 0x0140 : uint32)
  Class: Eq_82
  DataType: uint32
  OrigDataType: uint32
T_83: (in (word16) (si_107 *u 0x0140) : word16)
  Class: Eq_83
  DataType: word16
  OrigDataType: word16
T_84: (in di_115 + (word16) (si_107 *u 0x0140) : word16)
  Class: Eq_78
  DataType: (memptr (ptr Eq_86) byte)
  OrigDataType: word16
T_85: (in bl_146 : byte)
  Class: Eq_85
  DataType: byte
  OrigDataType: byte
T_86: (in 0xA000 : selector)
  Class: Eq_86
  DataType: (ptr Eq_86)
  OrigDataType: (ptr (segment))
T_87: (in 0x0000 : word16)
  Class: Eq_87
  DataType: word16
  OrigDataType: word16
T_88: (in di_196 + 0x0000 : word16)
  Class: Eq_88
  DataType: word16
  OrigDataType: word16
T_89: (in Mem203[0xA000:di_196 + 0x0000:byte] : byte)
  Class: Eq_85
  DataType: byte
  OrigDataType: byte
T_90: (in 0x0001 : word16)
  Class: Eq_90
  DataType: word16
  OrigDataType: word16
T_91: (in si_107 - 0x0001 : word16)
  Class: Eq_80
  DataType: Eq_80
  OrigDataType: word16
T_92: (in 0x0001 : word16)
  Class: Eq_92
  DataType: word16
  OrigDataType: word16
T_93: (in di_196 + 0x0001 : word16)
  Class: Eq_93
  DataType: word16
  OrigDataType: word16
T_94: (in 0x0141 : word16)
  Class: Eq_94
  DataType: word16
  OrigDataType: word16
T_95: (in di_196 + 1 - 0x0141 : word16)
  Class: Eq_78
  DataType: (memptr (ptr Eq_86) byte)
  OrigDataType: word16
T_96: (in bx_144 : Eq_80)
  Class: Eq_80
  DataType: Eq_80
  OrigDataType: int16
T_97: (in bx_144 <= si_107 : bool)
  Class: Eq_97
  DataType: bool
  OrigDataType: bool
T_98: (in dx_132 : word16)
  Class: Eq_98
  DataType: word16
  OrigDataType: word16
T_99: (in 0x01F9 : word16)
  Class: Eq_99
  DataType: (memptr (ptr Eq_19) byte)
  OrigDataType: (memptr T_19 (struct (0 T_100 t0000)))
T_100: (in Mem109[ds:0x01F9:byte] : byte)
  Class: Eq_100
  DataType: byte
  OrigDataType: byte
T_101: (in 0x01FB : word16)
  Class: Eq_101
  DataType: (memptr (ptr Eq_19) byte)
  OrigDataType: (memptr T_19 (struct (0 T_102 t0000)))
T_102: (in Mem109[ds:0x01FB:byte] : byte)
  Class: Eq_102
  DataType: byte
  OrigDataType: byte
T_103: (in ds->b01F9 ^ ds->b01FB : byte)
  Class: Eq_103
  DataType: byte
  OrigDataType: byte
T_104: (in 0x1F : byte)
  Class: Eq_104
  DataType: byte
  OrigDataType: byte
T_105: (in (ds->b01F9 ^ ds->b01FB) & 0x1F : byte)
  Class: Eq_105
  DataType: byte
  OrigDataType: byte
T_106: (in 0x3F : byte)
  Class: Eq_106
  DataType: byte
  OrigDataType: byte
T_107: (in (ds->b01F9 ^ ds->b01FB) & 0x1F ^ 0x3F : byte)
  Class: Eq_107
  DataType: byte
  OrigDataType: byte
T_108: (in (word16) ((ds->b01F9 ^ ds->b01FB) & 0x1F ^ 0x3F) : word16)
  Class: Eq_98
  DataType: word16
  OrigDataType: word16
T_109: (in cx_126 : int16)
  Class: Eq_109
  DataType: int16
  OrigDataType: int16
T_110: (in 0xFF : byte)
  Class: Eq_110
  DataType: byte
  OrigDataType: byte
T_111: (in cl_106 ^ 0xFF : byte)
  Class: Eq_111
  DataType: byte
  OrigDataType: byte
T_112: (in 0x01 : byte)
  Class: Eq_112
  DataType: byte
  OrigDataType: byte
T_113: (in (cl_106 ^ 0xFF) + 0x01 : byte)
  Class: Eq_113
  DataType: byte
  OrigDataType: byte
T_114: (in DPB(cx_105, (cl_106 ^ 0xFF) + 0x01, 0, 8) : word16)
  Class: Eq_109
  DataType: int16
  OrigDataType: word16
T_115: (in 0xFFE3 : word16)
  Class: Eq_115
  DataType: word16
  OrigDataType: word16
T_116: (in 0x0000 : word16)
  Class: Eq_116
  DataType: word16
  OrigDataType: word16
T_117: (in 0x0008 : word16)
  Class: Eq_117
  DataType: word16
  OrigDataType: word16
T_118: (in dx_132 << 0x0008 : word16)
  Class: Eq_118
  DataType: ui16
  OrigDataType: ui16
T_119: (in SEQ(0x0000, dx_132 << 0x0008) : word32)
  Class: Eq_119
  DataType: word32
  OrigDataType: word32
T_120: (in SEQ(0x0000, dx_132 << 0x0008) % cx_126 : int16)
  Class: Eq_120
  DataType: int16
  OrigDataType: int16
T_121: (in dx_132 << 0x0008 : word16)
  Class: Eq_121
  DataType: ui16
  OrigDataType: ui16
T_122: (in SEQ(SEQ(0x0000, dx_132 << 0x0008) % cx_126, dx_132 << 0x0008) : word32)
  Class: Eq_122
  DataType: int32
  OrigDataType: int32
T_123: (in SEQ(SEQ(0x0000, dx_132 << 0x0008) % cx_126, dx_132 << 0x0008) / cx_126 : int16)
  Class: Eq_123
  DataType: int16
  OrigDataType: int16
T_124: (in -(SEQ(SEQ(0x0000, dx_132 << 0x0008) % cx_126, dx_132 << 0x0008) / cx_126) : word16)
  Class: Eq_124
  DataType: int16
  OrigDataType: int16
T_125: (in 0xFFE3 - -(SEQ(SEQ(0x0000, dx_132 << 0x0008) % cx_126, dx_132 << 0x0008) / cx_126) : word16)
  Class: Eq_80
  DataType: Eq_80
  OrigDataType: word16
T_126: (in (byte) bx_144 : byte)
  Class: Eq_85
  DataType: byte
  OrigDataType: byte
T_127: (in bx_144 > si_107 : bool)
  Class: Eq_127
  DataType: bool
  OrigDataType: bool
T_128: (in 0x0001 : word16)
  Class: Eq_128
  DataType: word16
  OrigDataType: word16
T_129: (in di_115 + 0x0001 : word16)
  Class: Eq_79
  DataType: word16
  OrigDataType: word16
T_130: (in cx_178 : word16)
  Class: Eq_130
  DataType: word16
  OrigDataType: word16
T_131: (in 0x0001 : word16)
  Class: Eq_131
  DataType: word16
  OrigDataType: word16
T_132: (in cx_178 - 0x0001 : word16)
  Class: Eq_130
  DataType: word16
  OrigDataType: word16
T_133: (in 0x0000 : word16)
  Class: Eq_130
  DataType: word16
  OrigDataType: word16
T_134: (in cx_178 != 0x0000 : bool)
  Class: Eq_134
  DataType: bool
  OrigDataType: bool
T_135: (in 0x0C00 : selector)
  Class: Eq_135
  DataType: (ptr Eq_135)
  OrigDataType: (ptr (segment))
T_136: (in bp : word16)
  Class: Eq_136
  DataType: word16
  OrigDataType: word16
T_137: (in cx_178 + bp : word16)
  Class: Eq_137
  DataType: word16
  OrigDataType: word16
T_138: (in 0x0200 : word16)
  Class: Eq_138
  DataType: word16
  OrigDataType: word16
T_139: (in cx_178 + bp + 0x0200 : word16)
  Class: Eq_139
  DataType: word16
  OrigDataType: word16
T_140: (in 0x07FF : word16)
  Class: Eq_140
  DataType: word16
  OrigDataType: word16
T_141: (in cx_178 + bp + 0x0200 & 0x07FF : word16)
  Class: Eq_141
  DataType: (memptr (ptr Eq_135) Eq_141)
  OrigDataType: (memptr T_135 (struct (1FC T_144 t01FC)))
T_142: (in 0x01FC : word16)
  Class: Eq_142
  DataType: word16
  OrigDataType: word16
T_143: (in (cx_178 + bp + 0x0200 & 0x07FF) + 0x01FC : word16)
  Class: Eq_143
  DataType: word16
  OrigDataType: word16
T_144: (in Mem18[0x0C00:(cx_178 + bp + 0x0200 & 0x07FF) + 0x01FC:byte] : byte)
  Class: Eq_144
  DataType: byte
  OrigDataType: byte
T_145: (in DPB(ax, (0x0C00->*((cx_178 + bp) + 0x0200 & 0x07FF)).b01FC, 8, 8) : word16)
  Class: Eq_60
  DataType: word16
  OrigDataType: word16
T_146: (in 0x01F4 : word16)
  Class: Eq_146
  DataType: (memptr (ptr Eq_19) Eq_59)
  OrigDataType: (memptr T_19 (struct (0 T_147 t0000)))
T_147: (in Mem18[ds:0x01F4:word32] : word32)
  Class: Eq_59
  DataType: Eq_59
  OrigDataType: word32
T_148: (in 0x01F8 : word16)
  Class: Eq_148
  DataType: (memptr (ptr Eq_19) Eq_59)
  OrigDataType: (memptr T_19 (struct (0 T_149 t0000)))
T_149: (in Mem109[ds:0x01F8:word32] : word32)
  Class: Eq_59
  DataType: Eq_59
  OrigDataType: word32
T_150: (in 0x00FE : word16)
  Class: Eq_71
  DataType: word16
  OrigDataType: word16
T_151: (in 0xFE : byte)
  Class: Eq_74
  DataType: byte
  OrigDataType: byte
T_152: (in 0x00C7 : word16)
  Class: Eq_80
  DataType: int16
  OrigDataType: word16
T_153: (in 0x01F4 : word16)
  Class: Eq_153
  DataType: (memptr (ptr Eq_19) Eq_59)
  OrigDataType: (memptr T_19 (struct (0 T_59 t0000)))
T_154: (in Mem165[ds:0x01F4:word16] : word16)
  Class: Eq_59
  DataType: Eq_59
  OrigDataType: word16
T_155: (in 0x0040 : word16)
  Class: Eq_155
  DataType: word16
  OrigDataType: word16
T_156: (in Mem165[ds:0x01F4:word16] + 0x0040 : word16)
  Class: Eq_59
  DataType: Eq_59
  OrigDataType: word16
T_157: (in Mem185[ds:0x01F4:word16] : word16)
  Class: Eq_59
  DataType: Eq_59
  OrigDataType: word16
T_158: (in 0x0001 : word16)
  Class: Eq_158
  DataType: word16
  OrigDataType: word16
T_159: (in bp + 0x0001 : word16)
  Class: Eq_136
  DataType: word16
  OrigDataType: word16
T_160: (in __inb : ptr32)
  Class: Eq_160
  DataType: (ptr Eq_160)
  OrigDataType: (ptr (fn T_162 (T_161)))
T_161: (in 0x60 : byte)
  Class: Eq_161
  DataType: byte
  OrigDataType: byte
T_162: (in __inb(0x60) : byte)
  Class: Eq_162
  DataType: byte
  OrigDataType: byte
T_163: (in 0x01 : byte)
  Class: Eq_162
  DataType: byte
  OrigDataType: byte
T_164: (in __inb(0x60) != 0x01 : bool)
  Class: Eq_164
  DataType: bool
  OrigDataType: bool
T_165: (in 0x0000 : word16)
  Class: Eq_79
  DataType: word16
  OrigDataType: word16
T_166: (in 0x0140 : word16)
  Class: Eq_130
  DataType: word16
  OrigDataType: word16
T_167: (in bios_video_set_mode : ptr32)
  Class: Eq_3
  DataType: (ptr Eq_3)
  OrigDataType: (ptr (fn T_169 (T_168)))
T_168: (in 0x03 : byte)
  Class: Eq_5
  DataType: byte
  OrigDataType: byte
T_169: (in bios_video_set_mode(0x03) : void)
  Class: Eq_7
  DataType: void
  OrigDataType: void
T_170:
  Class: Eq_170
  DataType: Eq_170
  OrigDataType: (struct 0001 (0 T_26 t0000))
*/
typedef Eq_86 Eq_1Eq_135 Eq_1struct Globals {
	Eq_86 * ptrFFFA0000;	// FFFA0000
	Eq_135 * ptrC000;	// C000
} Eq_1;

typedef void (Eq_3)(byte);

typedef struct Eq_12 {	// size: 1 1
	int32 dw0000;	// 0
} Eq_12;

typedef union Eq_14 {
	real16 u0;
	real64 u1;
} Eq_14;

typedef Eq_18 (Eq_16)(Eq_17);

typedef union Eq_17 {
	real16 u0;
	real64 u1;
} Eq_17;

typedef union Eq_18 {
	real16 u0;
	real64 u1;
} Eq_18;

typedef Eq_28 Eq_19Eq_21 Eq_19Eq_59 Eq_19Eq_59 Eq_19Eq_170 Eq_19[]struct Eq_19 {
	Eq_28 t01E9;	// 1E9
	Eq_21 t01ED;	// 1ED
	Eq_59 t01F4;	// 1F4
	Eq_59 t01F8;	// 1F8
	byte b01F9;	// 1F9
	word16 w01FA;	// 1FA
	byte b01FB;	// 1FB
	Eq_170 a01FC[];	// 1FC
} Eq_19;

typedef union Eq_21 {
	real16 u0;
	real32 u1;
} Eq_21;

typedef union Eq_28 {
	real16 u0;
	real32 u1;
} Eq_28;

typedef void (Eq_30)(word16, uint8);

typedef union Eq_33 {
	uint16 u0;
	byte u1;
} Eq_33;

typedef void (Eq_36)(word16, byte);

typedef void (Eq_41)(word16, byte);

typedef void (Eq_45)(word16, byte);

typedef union Eq_59 {
	word16 u0;
	word32 u1;
} Eq_59;

typedef union Eq_80 {
	int16 u0;
	uint16 u1;
} Eq_80;

typedef struct Eq_86 {
} Eq_86;

typedef struct Eq_135 {
} Eq_135;

typedef struct Eq_141 {
	byte b01FC;	// 1FC
} Eq_141;

typedef byte (Eq_160)(byte);

typedef struct Eq_170 {	// size: 1 1
	int32 dw0000;	// 0
} Eq_170;

