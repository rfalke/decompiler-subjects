// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_277/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_104) ptrFFFA0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_9: (union "Eq_9" (byte u0) (word16 u1))
	T_9 (in al_30 : byte)
	T_13 (in Mem0[ds:si_18 + 0x0000:byte] : byte)
	T_16 (in dl : byte)
	T_22 (in dx : word16)
	T_23 (in DPB(dx, al_30, 0, 8) : word16)
	T_24 (in 0x00 : byte)
	T_29 (in ax_17 : word16)
	T_32 (in Mem0[ds:si_18 + 0x0000:word16] : word16)
	T_76 (in (byte) (ax_57 + 0x0001) : byte)
Eq_10: (segment "Eq_10" (1BC Eq_9 t01BC))
	T_10 (in ds : (ptr Eq_10))
Eq_14: (fn void (Eq_9))
	T_14 (in msdos_write_console_char : ptr32)
	T_15 (in signature of msdos_write_console_char : void)
Eq_34: (fn void (byte, byte, byte))
	T_34 (in bios_video_set_cursor_position : ptr32)
	T_35 (in signature of bios_video_set_cursor_position : void)
Eq_48: (fn void (word16, Eq_9))
	T_48 (in __outb : ptr32)
Eq_52: (fn word16 (word16, byte))
	T_52 (in __rol : ptr32)
Eq_57: (fn void (word16, byte))
	T_57 (in __outb : ptr32)
Eq_62: (fn word16 (word16, byte))
	T_62 (in __ror : ptr32)
Eq_67: (fn void (word16, byte))
	T_67 (in __outb : ptr32)
Eq_79: (struct "Eq_79" 0001 (0 Eq_93 t0000))
	T_79 (in di_111 : (memptr (ptr Eq_104) Eq_79))
	T_80 (in 0x0000 : word16)
	T_112 (in di_111 + 0x0001 : word16)
Eq_87: (union "Eq_87" (bcu8 u0) (word16 u1))
	T_87 (in al_168 : Eq_87)
	T_89 (in cl_113 - bl_116 : word16)
	T_91 (in 0x00 : byte)
Eq_93: (union "Eq_93" (byte u0) (word16 u1))
	T_93 (in al_168 - cl_113 - (al_168 <u 0x00) : word16)
	T_94 (in al_107 : Eq_93)
	T_103 (in ((byte) ax_160 | SLICE(ax_160, byte, 8)) & 0x3F : byte)
	T_107 (in Mem110[0xA000:di_111 + 0x0000:byte] : byte)
	T_118 (in Mem0[0xA000:di_111 + 0x0000:byte] : byte)
	T_119 (in 0x00 : byte)
Eq_96: (fn word16 (byte))
	T_96 (in __aam : ptr32)
Eq_104: (segment "Eq_104" (FFFFFA00 (arr byte) aFFFFFA00) (0 (arr byte) a0000) (FA00 byte bFA00))
	T_104 (in 0xA000 : selector)
Eq_128: (fn void (word16, byte))
	T_128 (in __outb : ptr32)
Eq_133: (segment "Eq_133")
	T_133 (in ss : selector)
Eq_134: (union "Eq_134" ((memptr (ptr Eq_133) Eq_172) u0) (Eq_174 u1))
	T_134 (in fp : ptr16)
Eq_162: (fn word16 (word16))
	T_162 (in __inw : ptr32)
Eq_172: (struct "Eq_172" (FFFFFFFE word16 wFFFFFFFE))
	T_172
Eq_173: (struct "Eq_173" (FFFFFFFE word16 wFFFFFFFE))
	T_173
Eq_174: (union "Eq_174" (ptr16 u0) ((memptr (ptr Eq_133) Eq_173) u1))
	T_174
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
T_7: (in si_18 : (memptr (ptr Eq_10) Eq_9))
  Class: Eq_7
  DataType: (memptr (ptr Eq_10) Eq_9)
  OrigDataType: (memptr T_10 (struct 0002 (0 T_9 t0000)))
T_8: (in 0x01BC : word16)
  Class: Eq_7
  DataType: (memptr (ptr Eq_10) Eq_9)
  OrigDataType: word16
T_9: (in al_30 : byte)
  Class: Eq_9
  DataType: Eq_9
  OrigDataType: byte
T_10: (in ds : (ptr Eq_10))
  Class: Eq_10
  DataType: (ptr Eq_10)
  OrigDataType: (ptr (segment))
T_11: (in 0x0000 : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_12: (in si_18 + 0x0000 : word16)
  Class: Eq_12
  DataType: word16
  OrigDataType: word16
T_13: (in Mem0[ds:si_18 + 0x0000:byte] : byte)
  Class: Eq_9
  DataType: Eq_9
  OrigDataType: byte
T_14: (in msdos_write_console_char : ptr32)
  Class: Eq_14
  DataType: (ptr Eq_14)
  OrigDataType: (ptr (fn T_17 (T_9)))
T_15: (in signature of msdos_write_console_char : void)
  Class: Eq_14
  DataType: (ptr Eq_14)
  OrigDataType: 
T_16: (in dl : byte)
  Class: Eq_9
  DataType: Eq_9
  OrigDataType: byte
T_17: (in msdos_write_console_char(al_30) : void)
  Class: Eq_17
  DataType: void
  OrigDataType: void
T_18: (in ax_25 : word16)
  Class: Eq_18
  DataType: word16
  OrigDataType: word16
T_19: (in DPB(ax_25, al_30, 0, 8) : word16)
  Class: Eq_18
  DataType: word16
  OrigDataType: word16
T_20: (in 0x0000 : word16)
  Class: Eq_20
  DataType: word16
  OrigDataType: word16
T_21: (in si_18 + 0x0000 : word16)
  Class: Eq_7
  DataType: (memptr (ptr Eq_10) Eq_9)
  OrigDataType: word16
T_22: (in dx : word16)
  Class: Eq_9
  DataType: Eq_9
  OrigDataType: word16
T_23: (in DPB(dx, al_30, 0, 8) : word16)
  Class: Eq_9
  DataType: Eq_9
  OrigDataType: word16
T_24: (in 0x00 : byte)
  Class: Eq_9
  DataType: byte
  OrigDataType: byte
T_25: (in al_30 != 0x00 : bool)
  Class: Eq_25
  DataType: bool
  OrigDataType: bool
T_26: (in dh_22 : byte)
  Class: Eq_26
  DataType: byte
  OrigDataType: byte
T_27: (in 0x00 : byte)
  Class: Eq_26
  DataType: byte
  OrigDataType: byte
T_28: (in dh_22 != 0x00 : bool)
  Class: Eq_28
  DataType: bool
  OrigDataType: bool
T_29: (in ax_17 : word16)
  Class: Eq_9
  DataType: Eq_9
  OrigDataType: word16
T_30: (in 0x0000 : word16)
  Class: Eq_30
  DataType: word16
  OrigDataType: word16
T_31: (in si_18 + 0x0000 : word16)
  Class: Eq_31
  DataType: word16
  OrigDataType: word16
T_32: (in Mem0[ds:si_18 + 0x0000:word16] : word16)
  Class: Eq_9
  DataType: Eq_9
  OrigDataType: word16
T_33: (in SLICE(ax_17, byte, 8) : byte)
  Class: Eq_26
  DataType: byte
  OrigDataType: byte
T_34: (in bios_video_set_cursor_position : ptr32)
  Class: Eq_34
  DataType: (ptr Eq_34)
  OrigDataType: (ptr (fn T_41 (T_39, T_26, T_40)))
T_35: (in signature of bios_video_set_cursor_position : void)
  Class: Eq_34
  DataType: (ptr Eq_34)
  OrigDataType: 
T_36: (in bh : byte)
  Class: Eq_36
  DataType: byte
  OrigDataType: byte
T_37: (in dh : byte)
  Class: Eq_26
  DataType: byte
  OrigDataType: byte
T_38: (in dl : byte)
  Class: Eq_38
  DataType: byte
  OrigDataType: byte
T_39: (in bh : byte)
  Class: Eq_36
  DataType: byte
  OrigDataType: byte
T_40: (in (byte) ax_17 : byte)
  Class: Eq_38
  DataType: byte
  OrigDataType: byte
T_41: (in bios_video_set_cursor_position(bh, dh_22, (byte) ax_17) : void)
  Class: Eq_41
  DataType: void
  OrigDataType: void
T_42: (in 0x0002 : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_43: (in si_18 + 0x0002 : word16)
  Class: Eq_43
  DataType: word16
  OrigDataType: word16
T_44: (in 0x0001 : word16)
  Class: Eq_44
  DataType: word16
  OrigDataType: word16
T_45: (in si_18 + 0x0002 + 0x0001 : word16)
  Class: Eq_7
  DataType: (memptr (ptr Eq_10) Eq_9)
  OrigDataType: word16
T_46: (in 0x02 : byte)
  Class: Eq_46
  DataType: byte
  OrigDataType: byte
T_47: (in DPB(dx, 0x02, 8, 8) : word16)
  Class: Eq_18
  DataType: word16
  OrigDataType: word16
T_48: (in __outb : ptr32)
  Class: Eq_48
  DataType: (ptr Eq_48)
  OrigDataType: (ptr (fn T_50 (T_49, T_9)))
T_49: (in 0x03C9 : word16)
  Class: Eq_49
  DataType: word16
  OrigDataType: word16
T_50: (in __outb(0x03C9, al_30) : void)
  Class: Eq_50
  DataType: void
  OrigDataType: void
T_51: (in ax_50 : word16)
  Class: Eq_51
  DataType: word16
  OrigDataType: word16
T_52: (in __rol : ptr32)
  Class: Eq_52
  DataType: (ptr Eq_52)
  OrigDataType: (ptr (fn T_56 (T_54, T_55)))
T_53: (in ~al_30 : byte)
  Class: Eq_53
  DataType: byte
  OrigDataType: byte
T_54: (in DPB(ax_25, ~al_30, 0, 8) : word16)
  Class: Eq_54
  DataType: word16
  OrigDataType: word16
T_55: (in 0x01 : byte)
  Class: Eq_55
  DataType: byte
  OrigDataType: byte
T_56: (in __rol(DPB(ax_25, ~al_30, 0, 8), 0x01) : word16)
  Class: Eq_51
  DataType: word16
  OrigDataType: word16
T_57: (in __outb : ptr32)
  Class: Eq_57
  DataType: (ptr Eq_57)
  OrigDataType: (ptr (fn T_60 (T_58, T_59)))
T_58: (in 0x03C9 : word16)
  Class: Eq_58
  DataType: word16
  OrigDataType: word16
T_59: (in (byte) ax_50 : byte)
  Class: Eq_59
  DataType: byte
  OrigDataType: byte
T_60: (in __outb(0x03C9, (byte) ax_50) : void)
  Class: Eq_60
  DataType: void
  OrigDataType: void
T_61: (in ax_53 : word16)
  Class: Eq_61
  DataType: word16
  OrigDataType: word16
T_62: (in __ror : ptr32)
  Class: Eq_62
  DataType: (ptr Eq_62)
  OrigDataType: (ptr (fn T_64 (T_51, T_63)))
T_63: (in 0x01 : byte)
  Class: Eq_63
  DataType: byte
  OrigDataType: byte
T_64: (in __ror(ax_50, 0x01) : word16)
  Class: Eq_61
  DataType: word16
  OrigDataType: word16
T_65: (in al_54 : byte)
  Class: Eq_65
  DataType: byte
  OrigDataType: byte
T_66: (in (byte) ax_53 : byte)
  Class: Eq_65
  DataType: byte
  OrigDataType: byte
T_67: (in __outb : ptr32)
  Class: Eq_67
  DataType: (ptr Eq_67)
  OrigDataType: (ptr (fn T_69 (T_68, T_65)))
T_68: (in 0x03C9 : word16)
  Class: Eq_68
  DataType: word16
  OrigDataType: word16
T_69: (in __outb(0x03C9, al_54) : void)
  Class: Eq_69
  DataType: void
  OrigDataType: void
T_70: (in ax_57 : word16)
  Class: Eq_70
  DataType: word16
  OrigDataType: word16
T_71: (in ~al_54 : byte)
  Class: Eq_71
  DataType: byte
  OrigDataType: byte
T_72: (in DPB(ax_53, ~al_54, 0, 8) : word16)
  Class: Eq_70
  DataType: word16
  OrigDataType: word16
T_73: (in 0x0001 : word16)
  Class: Eq_73
  DataType: word16
  OrigDataType: word16
T_74: (in ax_57 + 0x0001 : word16)
  Class: Eq_18
  DataType: word16
  OrigDataType: word16
T_75: (in ax_57 + 0x0001 : word16)
  Class: Eq_75
  DataType: word16
  OrigDataType: word16
T_76: (in (byte) (ax_57 + 0x0001) : byte)
  Class: Eq_9
  DataType: Eq_9
  OrigDataType: byte
T_77: (in 0x0001 : word16)
  Class: Eq_70
  DataType: word16
  OrigDataType: word16
T_78: (in ax_57 != 0x0001 : bool)
  Class: Eq_78
  DataType: bool
  OrigDataType: bool
T_79: (in di_111 : (memptr (ptr Eq_104) Eq_79))
  Class: Eq_79
  DataType: (memptr (ptr Eq_104) Eq_79)
  OrigDataType: (memptr T_104 (struct 0001 (0 T_93 t0000)))
T_80: (in 0x0000 : word16)
  Class: Eq_79
  DataType: (memptr (ptr Eq_104) Eq_79)
  OrigDataType: word16
T_81: (in bl_116 : byte)
  Class: Eq_81
  DataType: byte
  OrigDataType: byte
T_82: (in 0xCC : byte)
  Class: Eq_81
  DataType: byte
  OrigDataType: byte
T_83: (in bx_114 : word16)
  Class: Eq_83
  DataType: word16
  OrigDataType: word16
T_84: (in bx : word16)
  Class: Eq_84
  DataType: word16
  OrigDataType: word16
T_85: (in 0xCC : byte)
  Class: Eq_85
  DataType: byte
  OrigDataType: byte
T_86: (in DPB(bx, 0xCC, 0, 8) : word16)
  Class: Eq_83
  DataType: word16
  OrigDataType: word16
T_87: (in al_168 : Eq_87)
  Class: Eq_87
  DataType: Eq_87
  OrigDataType: bcu8
T_88: (in cl_113 : byte)
  Class: Eq_88
  DataType: byte
  OrigDataType: byte
T_89: (in cl_113 - bl_116 : word16)
  Class: Eq_87
  DataType: Eq_87
  OrigDataType: word16
T_90: (in al_168 - cl_113 : word16)
  Class: Eq_90
  DataType: word16
  OrigDataType: word16
T_91: (in 0x00 : byte)
  Class: Eq_87
  DataType: bcu8
  OrigDataType: bcu8
T_92: (in al_168 <u 0x00 : bool)
  Class: Eq_92
  DataType: bool
  OrigDataType: bool
T_93: (in al_168 - cl_113 - (al_168 <u 0x00) : word16)
  Class: Eq_93
  DataType: Eq_93
  OrigDataType: word16
T_94: (in al_107 : Eq_93)
  Class: Eq_93
  DataType: Eq_93
  OrigDataType: (union (byte u0) (word16 u1))
T_95: (in ax_160 : word16)
  Class: Eq_95
  DataType: word16
  OrigDataType: word16
T_96: (in __aam : ptr32)
  Class: Eq_96
  DataType: (ptr Eq_96)
  OrigDataType: (ptr (fn T_98 (T_97)))
T_97: (in cl_113 | bl_116 : byte)
  Class: Eq_97
  DataType: byte
  OrigDataType: byte
T_98: (in __aam(cl_113 | bl_116) : word16)
  Class: Eq_95
  DataType: word16
  OrigDataType: word16
T_99: (in (byte) ax_160 : byte)
  Class: Eq_99
  DataType: byte
  OrigDataType: byte
T_100: (in SLICE(ax_160, byte, 8) : byte)
  Class: Eq_100
  DataType: byte
  OrigDataType: byte
T_101: (in (byte) ax_160 | SLICE(ax_160, byte, 8) : byte)
  Class: Eq_101
  DataType: byte
  OrigDataType: byte
T_102: (in 0x3F : byte)
  Class: Eq_102
  DataType: byte
  OrigDataType: byte
T_103: (in ((byte) ax_160 | SLICE(ax_160, byte, 8)) & 0x3F : byte)
  Class: Eq_93
  DataType: Eq_93
  OrigDataType: byte
T_104: (in 0xA000 : selector)
  Class: Eq_104
  DataType: (ptr Eq_104)
  OrigDataType: (ptr (segment (FFFFFA00 (arr T_171) aFFFFFA00) (0 (arr T_170) a0000)))
T_105: (in 0x0000 : word16)
  Class: Eq_105
  DataType: word16
  OrigDataType: word16
T_106: (in di_111 + 0x0000 : word16)
  Class: Eq_106
  DataType: word16
  OrigDataType: word16
T_107: (in Mem110[0xA000:di_111 + 0x0000:byte] : byte)
  Class: Eq_93
  DataType: Eq_93
  OrigDataType: byte
T_108: (in cx_112 : word16)
  Class: Eq_108
  DataType: word16
  OrigDataType: word16
T_109: (in 0x0001 : word16)
  Class: Eq_109
  DataType: word16
  OrigDataType: word16
T_110: (in cx_112 - 0x0001 : word16)
  Class: Eq_108
  DataType: word16
  OrigDataType: word16
T_111: (in 0x0001 : word16)
  Class: Eq_111
  DataType: word16
  OrigDataType: word16
T_112: (in di_111 + 0x0001 : word16)
  Class: Eq_79
  DataType: (memptr (ptr Eq_104) Eq_79)
  OrigDataType: word16
T_113: (in (byte) cx_112 : byte)
  Class: Eq_88
  DataType: byte
  OrigDataType: byte
T_114: (in 0x0000 : word16)
  Class: Eq_108
  DataType: word16
  OrigDataType: word16
T_115: (in cx_112 != 0x0000 : bool)
  Class: Eq_115
  DataType: bool
  OrigDataType: bool
T_116: (in 0x0000 : word16)
  Class: Eq_116
  DataType: word16
  OrigDataType: word16
T_117: (in di_111 + 0x0000 : word16)
  Class: Eq_117
  DataType: word16
  OrigDataType: word16
T_118: (in Mem0[0xA000:di_111 + 0x0000:byte] : byte)
  Class: Eq_93
  DataType: Eq_93
  OrigDataType: byte
T_119: (in 0x00 : byte)
  Class: Eq_93
  DataType: byte
  OrigDataType: byte
T_120: (in (0xA000->*di_111).t0000 != 0x00 : bool)
  Class: Eq_120
  DataType: bool
  OrigDataType: bool
T_121: (in 0x0001 : word16)
  Class: Eq_121
  DataType: word16
  OrigDataType: word16
T_122: (in bx_114 - 0x0001 : word16)
  Class: Eq_83
  DataType: word16
  OrigDataType: word16
T_123: (in (byte) bx_114 : byte)
  Class: Eq_81
  DataType: byte
  OrigDataType: byte
T_124: (in 0x0000 : word16)
  Class: Eq_83
  DataType: word16
  OrigDataType: word16
T_125: (in bx_114 != 0x0000 : bool)
  Class: Eq_125
  DataType: bool
  OrigDataType: bool
T_126: (in 0x0140 : word16)
  Class: Eq_108
  DataType: word16
  OrigDataType: word16
T_127: (in 0x40 : byte)
  Class: Eq_88
  DataType: byte
  OrigDataType: byte
T_128: (in __outb : ptr32)
  Class: Eq_128
  DataType: (ptr Eq_128)
  OrigDataType: (ptr (fn T_131 (T_129, T_130)))
T_129: (in 0x0331 : word16)
  Class: Eq_129
  DataType: word16
  OrigDataType: word16
T_130: (in 0x3F : byte)
  Class: Eq_130
  DataType: byte
  OrigDataType: byte
T_131: (in __outb(0x0331, 0x3F) : void)
  Class: Eq_131
  DataType: void
  OrigDataType: void
T_132: (in 0xFA00 : word16)
  Class: Eq_132
  DataType: word16
  OrigDataType: word16
T_133: (in ss : selector)
  Class: Eq_133
  DataType: (ptr Eq_133)
  OrigDataType: (ptr (segment))
T_134: (in fp : ptr16)
  Class: Eq_134
  DataType: Eq_134
  OrigDataType: (union ((union (ptr16 u0) ((memptr T_133 (struct (FFFFFFFE T_161 tFFFFFFFE))) u1)) u0) ((memptr T_133 (struct (FFFFFFFE T_137 tFFFFFFFE))) u1))
T_135: (in 0x0002 : word16)
  Class: Eq_135
  DataType: word16
  OrigDataType: word16
T_136: (in fp - 0x0002 : word16)
  Class: Eq_136
  DataType: word16
  OrigDataType: word16
T_137: (in Mem129[ss:fp - 0x0002:word16] : word16)
  Class: Eq_132
  DataType: word16
  OrigDataType: word16
T_138: (in si_122 : (memptr (ptr Eq_104) byte))
  Class: Eq_138
  DataType: (memptr (ptr Eq_104) byte)
  OrigDataType: (memptr T_104 (struct 0001 (0 T_146 t0000)))
T_139: (in 0x0000 : word16)
  Class: Eq_138
  DataType: (memptr (ptr Eq_104) byte)
  OrigDataType: word16
T_140: (in di_125 : (memptr (ptr Eq_104) byte))
  Class: Eq_140
  DataType: (memptr (ptr Eq_104) byte)
  OrigDataType: (memptr T_104 (struct 0001 (0 T_149 t0000)))
T_141: (in 0xFA00 : word16)
  Class: Eq_140
  DataType: (memptr (ptr Eq_104) byte)
  OrigDataType: word16
T_142: (in cx_126 : word16)
  Class: Eq_142
  DataType: word16
  OrigDataType: word16
T_143: (in 0x0140 : word16)
  Class: Eq_142
  DataType: word16
  OrigDataType: word16
T_144: (in 0x0000 : word16)
  Class: Eq_144
  DataType: word16
  OrigDataType: word16
T_145: (in si_122 + 0x0000 : word16)
  Class: Eq_145
  DataType: word16
  OrigDataType: word16
T_146: (in Mem129[0xA000:si_122 + 0x0000:byte] : byte)
  Class: Eq_146
  DataType: byte
  OrigDataType: byte
T_147: (in 0x0000 : word16)
  Class: Eq_147
  DataType: word16
  OrigDataType: word16
T_148: (in di_125 + 0x0000 : word16)
  Class: Eq_148
  DataType: word16
  OrigDataType: word16
T_149: (in Mem140[0xA000:di_125 + 0x0000:byte] : byte)
  Class: Eq_146
  DataType: byte
  OrigDataType: byte
T_150: (in 0x0001 : word16)
  Class: Eq_150
  DataType: word16
  OrigDataType: word16
T_151: (in si_122 + 0x0001 : word16)
  Class: Eq_138
  DataType: (memptr (ptr Eq_104) byte)
  OrigDataType: word16
T_152: (in 0x0001 : word16)
  Class: Eq_152
  DataType: word16
  OrigDataType: word16
T_153: (in di_125 + 0x0001 : word16)
  Class: Eq_140
  DataType: (memptr (ptr Eq_104) byte)
  OrigDataType: word16
T_154: (in 0x0001 : word16)
  Class: Eq_154
  DataType: word16
  OrigDataType: word16
T_155: (in cx_126 - 0x0001 : word16)
  Class: Eq_142
  DataType: word16
  OrigDataType: word16
T_156: (in 0x0000 : word16)
  Class: Eq_142
  DataType: word16
  OrigDataType: word16
T_157: (in cx_126 != 0x0000 : bool)
  Class: Eq_157
  DataType: bool
  OrigDataType: bool
T_158: (in 0x0177 : word16)
  Class: Eq_158
  DataType: word16
  OrigDataType: word16
T_159: (in 0x0002 : word16)
  Class: Eq_159
  DataType: word16
  OrigDataType: word16
T_160: (in fp - 0x0002 : word16)
  Class: Eq_160
  DataType: word16
  OrigDataType: word16
T_161: (in Mem151[ss:fp - 0x0002:word16] : word16)
  Class: Eq_158
  DataType: word16
  OrigDataType: word16
T_162: (in __inw : ptr32)
  Class: Eq_162
  DataType: (ptr Eq_162)
  OrigDataType: (ptr (fn T_164 (T_163)))
T_163: (in 0x03DA : word16)
  Class: Eq_163
  DataType: word16
  OrigDataType: word16
T_164: (in __inw(0x03DA) : word16)
  Class: Eq_164
  DataType: word16
  OrigDataType: word16
T_165: (in (byte) __inw(0x03DA) : byte)
  Class: Eq_165
  DataType: byte
  OrigDataType: byte
T_166: (in 0x08 : byte)
  Class: Eq_166
  DataType: byte
  OrigDataType: byte
T_167: (in (byte) __inw(0x03DA) & 0x08 : byte)
  Class: Eq_167
  DataType: byte
  OrigDataType: byte
T_168: (in 0x00 : byte)
  Class: Eq_167
  DataType: byte
  OrigDataType: byte
T_169: (in ((byte) __inw(0x03DA) & 0x08) == 0x00 : bool)
  Class: Eq_169
  DataType: bool
  OrigDataType: bool
T_170:
  Class: Eq_170
  DataType: byte
  OrigDataType: (struct 0001 (0 T_146 t0000))
T_171:
  Class: Eq_171
  DataType: byte
  OrigDataType: (struct 0001 (0 T_149 t0000))
T_172:
  Class: Eq_172
  DataType: Eq_172
  OrigDataType: 
T_173:
  Class: Eq_173
  DataType: Eq_173
  OrigDataType: 
T_174:
  Class: Eq_174
  DataType: Eq_174
  OrigDataType: 
*/
typedef Eq_104 Eq_1struct Globals {
	Eq_104 * ptrFFFA0000;	// FFFA0000
} Eq_1;

typedef void (Eq_2)(byte);

typedef union Eq_9 {
	byte u0;
	word16 u1;
} Eq_9;

typedef Eq_9 Eq_10struct Eq_10 {
	Eq_9 t01BC;	// 1BC
} Eq_10;

typedef void (Eq_14)(Eq_9);

typedef void (Eq_34)(byte, byte, byte);

typedef void (Eq_48)(word16, Eq_9);

typedef word16 (Eq_52)(word16, byte);

typedef void (Eq_57)(word16, byte);

typedef word16 (Eq_62)(word16, byte);

typedef void (Eq_67)(word16, byte);

typedef Eq_93 Eq_79struct Eq_79 {	// size: 1 1
	Eq_93 t0000;	// 0
} Eq_79;

typedef union Eq_87 {
	bcu8 u0;
	word16 u1;
} Eq_87;

typedef union Eq_93 {
	byte u0;
	word16 u1;
} Eq_93;

typedef word16 (Eq_96)(byte);

typedef  Eq_104[][]struct Eq_104 {
	byte aFFFFFA00[];	// FFFFFA00
	byte a0000[];	// 0
	byte bFA00;	// FA00
} Eq_104;

typedef void (Eq_128)(word16, byte);

typedef struct Eq_133 {
} Eq_133;

typedef union Eq_134 {
	Eq_172 Eq_133::* u0;
	Eq_174 u1;
} Eq_134;

typedef word16 (Eq_162)(word16);

typedef struct Eq_172 {
	word16 wFFFFFFFE;	// FFFFFFFE
} Eq_172;

typedef struct Eq_173 {
	word16 wFFFFFFFE;	// FFFFFFFE
} Eq_173;

typedef union Eq_174 {
	ptr16 u0;
	Eq_173 Eq_133::* u1;
} Eq_174;

