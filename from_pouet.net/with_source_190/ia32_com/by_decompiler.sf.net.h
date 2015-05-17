// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_190/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_92) ptrFFFA0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
	T_104 (in bios_video_set_mode : ptr32)
Eq_7: (fn void (word16, byte))
	T_7 (in __outb : ptr32)
Eq_13: (fn void (word16, byte))
	T_13 (in __outb : ptr32)
Eq_21: (segment "Eq_21")
	T_21 (in cs : selector)
Eq_23: (segment "Eq_23" (0 (arr Eq_185 2) a0000))
	T_23 (in ax_21 : (ptr Eq_23))
	T_26 (in DPB(cs, ah_19 + 0x10, 8, 8) : word16)
	T_27 (in ax_24 : (ptr Eq_23))
	T_30 (in DPB(cs, ah_19 + 0x20, 8, 8) : selector)
	T_94 (in fs : (ptr Eq_23))
	T_95 (in gs : (ptr Eq_23))
Eq_31: (struct "Eq_31" 0001 (0 int16 w0000))
	T_31 (in bx_30 : (memptr (ptr Eq_23) Eq_31))
	T_32 (in 0x0000 : word16)
	T_53 (in bx_48 + 0x0001 : word16)
Eq_33: (fn Eq_35 (Eq_34))
	T_33 (in sin : ptr32)
Eq_34: (union "Eq_34" (real16 u0) (real64 u1))
	T_34 (in rLoc2 : real64)
	T_40 (in sin(rLoc2) * (real64) ds->ptr01C6 : word16)
Eq_35: (union "Eq_35" (real16 u0) (real64 u1))
	T_35 (in sin(rLoc2) : real64)
Eq_36: (segment "Eq_36" (101 (arr Eq_187 10) a0101) (10A Eq_56 t010A) (1C6 (memptr (ptr Eq_23) Eq_38) ptr01C6) (1C7 byte b01C7) (1CC word16 w01CC) (1CD byte b01CD) (1CE word16 w01CE))
	T_36 (in ds : (ptr Eq_36))
	T_93 (in ds : (ptr Eq_36))
Eq_38: (struct "Eq_38" (0 word16 w0000) (4000 word16 w4000))
	T_38 (in Mem0[ds:0x01C6:word16] : word16)
	T_108 (in bx_4 : (memptr (ptr Eq_23) Eq_38))
	T_110 (in Mem0[ds:0x01C6:word16] : word16)
Eq_39: (union "Eq_39" (real16 u0) (real64 u1))
	T_39 (in (real64) ds->ptr01C6 : real64)
Eq_56: (struct "Eq_56" 0001 (0 word16 w0000))
	T_56 (in di_55 : (memptr (ptr Eq_36) Eq_56))
	T_57 (in 0x010A : word16)
	T_80 (in di_91 - 0x0001 : word16)
Eq_90: (fn byte ((ptr Eq_92), (ptr Eq_36), (ptr Eq_23), (ptr Eq_23)))
	T_90 (in fn0C00_0171 : ptr32)
	T_91 (in signature of fn0C00_0171 : void)
Eq_92: (segment "Eq_92" (0 byte b0000))
	T_92 (in es : (ptr Eq_92))
	T_96 (in 0xA000 : selector)
Eq_99: (fn byte ((ptr byte)))
	T_99 (in bios_kbd_check_keystroke : ptr32)
	T_100 (in signature of bios_kbd_check_keystroke : void)
Eq_140: (union "Eq_140" (ui16 u0) ((memptr (ptr Eq_23) byte) u1))
	T_140 (in bx_119 : Eq_140)
	T_142 (in bx_119 * 0x0002 : word16)
	T_160 (in DPB(bp_55, SLICE(dx_56, byte, 8), 0, 8) : word16)
Eq_185: (struct "Eq_185" 0001 (0 int16 w0000))
	T_185
	T_186
Eq_187: (struct "Eq_187" 0001 (0 word16 w0000))
	T_187
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
T_11: (in al_11 : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_12: (in 0x00 : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_13: (in __outb : ptr32)
  Class: Eq_13
  DataType: (ptr Eq_13)
  OrigDataType: (ptr (fn T_15 (T_14, T_11)))
T_14: (in 0x03C9 : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_15: (in __outb(0x03C9, al_11) : void)
  Class: Eq_15
  DataType: void
  OrigDataType: void
T_16: (in 0x01 : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_17: (in al_11 + 0x01 : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_18: (in 0x00 : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_19: (in al_11 != 0x00 : bool)
  Class: Eq_19
  DataType: bool
  OrigDataType: bool
T_20: (in ah_19 : byte)
  Class: Eq_20
  DataType: byte
  OrigDataType: byte
T_21: (in cs : selector)
  Class: Eq_21
  DataType: (ptr Eq_21)
  OrigDataType: (ptr (segment))
T_22: (in SLICE(cs, byte, 8) : byte)
  Class: Eq_20
  DataType: byte
  OrigDataType: byte
T_23: (in ax_21 : (ptr Eq_23))
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: (ptr (struct (0 (arr T_186 2) a0000)))
T_24: (in 0x10 : byte)
  Class: Eq_24
  DataType: byte
  OrigDataType: byte
T_25: (in ah_19 + 0x10 : byte)
  Class: Eq_25
  DataType: byte
  OrigDataType: byte
T_26: (in DPB(cs, ah_19 + 0x10, 8, 8) : word16)
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: word16
T_27: (in ax_24 : (ptr Eq_23))
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: (ptr (struct (0 (arr T_185 2) a0000)))
T_28: (in 0x20 : byte)
  Class: Eq_28
  DataType: byte
  OrigDataType: byte
T_29: (in ah_19 + 0x20 : byte)
  Class: Eq_29
  DataType: byte
  OrigDataType: byte
T_30: (in DPB(cs, ah_19 + 0x20, 8, 8) : selector)
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: (ptr (segment))
T_31: (in bx_30 : (memptr (ptr Eq_23) Eq_31))
  Class: Eq_31
  DataType: (memptr (ptr Eq_23) Eq_31)
  OrigDataType: (memptr T_23 (struct 0001 (0 T_41 t0000)))
T_32: (in 0x0000 : word16)
  Class: Eq_31
  DataType: (memptr (ptr Eq_23) Eq_31)
  OrigDataType: word16
T_33: (in sin : ptr32)
  Class: Eq_33
  DataType: (ptr Eq_33)
  OrigDataType: (ptr (fn T_35 (T_34)))
T_34: (in rLoc2 : real64)
  Class: Eq_34
  DataType: Eq_34
  OrigDataType: (union (real16 u0) (real64 u1))
T_35: (in sin(rLoc2) : real64)
  Class: Eq_35
  DataType: Eq_35
  OrigDataType: (union (real16 u0) (real64 u1))
T_36: (in ds : (ptr Eq_36))
  Class: Eq_36
  DataType: (ptr Eq_36)
  OrigDataType: (ptr (segment (101 (arr T_187 10) a0101) (1C6 T_38 t01C6)))
T_37: (in 0x01C6 : word16)
  Class: Eq_37
  DataType: (memptr (ptr Eq_36) (memptr (ptr Eq_23) Eq_38))
  OrigDataType: (memptr T_36 (struct (0 T_38 t0000)))
T_38: (in Mem0[ds:0x01C6:word16] : word16)
  Class: Eq_38
  DataType: (memptr (ptr Eq_23) Eq_38)
  OrigDataType: word16
T_39: (in (real64) ds->ptr01C6 : real64)
  Class: Eq_39
  DataType: Eq_39
  OrigDataType: (union (real16 u0) (real64 u1))
T_40: (in sin(rLoc2) * (real64) ds->ptr01C6 : word16)
  Class: Eq_34
  DataType: Eq_34
  OrigDataType: real16
T_41: (in (int16) rLoc2 : int16)
  Class: Eq_41
  DataType: int16
  OrigDataType: int16
T_42: (in 0x0000 : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_43: (in bx_30 + 0x0000 : word16)
  Class: Eq_43
  DataType: word16
  OrigDataType: word16
T_44: (in Mem45[ax_24:bx_30 + 0x0000:int16] : int16)
  Class: Eq_41
  DataType: int16
  OrigDataType: int16
T_45: (in 0x0000 : word16)
  Class: Eq_41
  DataType: int16
  OrigDataType: word16
T_46: (in 0x0000 : word16)
  Class: Eq_46
  DataType: word16
  OrigDataType: word16
T_47: (in bx_30 + 0x0000 : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_48: (in Mem46[ax_21:bx_30 + 0x0000:word16] : word16)
  Class: Eq_41
  DataType: int16
  OrigDataType: word16
T_49: (in bx_48 : word16)
  Class: Eq_49
  DataType: word16
  OrigDataType: word16
T_50: (in 0x0001 : word16)
  Class: Eq_50
  DataType: word16
  OrigDataType: word16
T_51: (in bx_30 + 0x0001 : word16)
  Class: Eq_49
  DataType: word16
  OrigDataType: word16
T_52: (in 0x0001 : word16)
  Class: Eq_52
  DataType: word16
  OrigDataType: word16
T_53: (in bx_48 + 0x0001 : word16)
  Class: Eq_31
  DataType: (memptr (ptr Eq_23) Eq_31)
  OrigDataType: word16
T_54: (in 0x0001 : word16)
  Class: Eq_49
  DataType: word16
  OrigDataType: word16
T_55: (in bx_48 != 0x0001 : bool)
  Class: Eq_55
  DataType: bool
  OrigDataType: bool
T_56: (in di_55 : (memptr (ptr Eq_36) Eq_56))
  Class: Eq_56
  DataType: (memptr (ptr Eq_36) Eq_56)
  OrigDataType: (memptr T_36 (struct 0001 (0 T_85 t0000)))
T_57: (in 0x010A : word16)
  Class: Eq_56
  DataType: (memptr (ptr Eq_36) Eq_56)
  OrigDataType: word16
T_58: (in bx_67 : (memptr (ptr Eq_23) byte))
  Class: Eq_58
  DataType: (memptr (ptr Eq_23) byte)
  OrigDataType: (memptr T_23 (struct (0 T_70 t0000)))
T_59: (in 0x0001 : word16)
  Class: Eq_59
  DataType: word16
  OrigDataType: word16
T_60: (in bx_67 + 0x0001 : word16)
  Class: Eq_58
  DataType: (memptr (ptr Eq_23) byte)
  OrigDataType: word16
T_61: (in (byte) bx_67 : byte)
  Class: Eq_61
  DataType: int8
  OrigDataType: byte
T_62: (in bl_68 : int8)
  Class: Eq_61
  DataType: int8
  OrigDataType: int8
T_63: (in SLICE(bx_67, byte, 8) : byte)
  Class: Eq_63
  DataType: int8
  OrigDataType: byte
T_64: (in bh_69 : int8)
  Class: Eq_63
  DataType: int8
  OrigDataType: int8
T_65: (in 0x0000 : word16)
  Class: Eq_58
  DataType: (memptr (ptr Eq_23) byte)
  OrigDataType: word16
T_66: (in bx_67 != Eq_23::a0000 : bool)
  Class: Eq_66
  DataType: bool
  OrigDataType: bool
T_67: (in 0xC9 : byte)
  Class: Eq_67
  DataType: byte
  OrigDataType: byte
T_68: (in si_66 : word16)
  Class: Eq_68
  DataType: word16
  OrigDataType: word16
T_69: (in bx_67 + si_66 : word16)
  Class: Eq_69
  DataType: word16
  OrigDataType: word16
T_70: (in Mem99[ax_21:bx_67 + si_66:byte] : byte)
  Class: Eq_67
  DataType: byte
  OrigDataType: byte
T_71: (in bh_69 *s bh_69 : int16)
  Class: Eq_71
  DataType: int16
  OrigDataType: int16
T_72: (in bl_68 *s bl_68 : int16)
  Class: Eq_72
  DataType: int16
  OrigDataType: int16
T_73: (in bh_69 *s bh_69 + bl_68 *s bl_68 : word16)
  Class: Eq_73
  DataType: cups16
  OrigDataType: cups16
T_74: (in 0x09C3 : word16)
  Class: Eq_73
  DataType: cups16
  OrigDataType: cups16
T_75: (in bh_69 *s bh_69 + bl_68 *s bl_68 >u 0x09C3 : bool)
  Class: Eq_75
  DataType: bool
  OrigDataType: bool
T_76: (in di_91 : word16)
  Class: Eq_76
  DataType: word16
  OrigDataType: word16
T_77: (in 0x0001 : word16)
  Class: Eq_77
  DataType: word16
  OrigDataType: word16
T_78: (in di_55 - 0x0001 : word16)
  Class: Eq_76
  DataType: word16
  OrigDataType: word16
T_79: (in 0x0001 : word16)
  Class: Eq_79
  DataType: word16
  OrigDataType: word16
T_80: (in di_91 - 0x0001 : word16)
  Class: Eq_56
  DataType: (memptr (ptr Eq_36) Eq_56)
  OrigDataType: word16
T_81: (in 0xFF01 : word16)
  Class: Eq_76
  DataType: word16
  OrigDataType: word16
T_82: (in di_91 != 0xFF01 : bool)
  Class: Eq_82
  DataType: bool
  OrigDataType: bool
T_83: (in 0x0000 : word16)
  Class: Eq_83
  DataType: word16
  OrigDataType: word16
T_84: (in di_55 + 0x0000 : word16)
  Class: Eq_84
  DataType: word16
  OrigDataType: word16
T_85: (in Mem46[ds:di_55 + 0x0000:word16] : word16)
  Class: Eq_68
  DataType: word16
  OrigDataType: word16
T_86: (in 0x0000 : word16)
  Class: Eq_58
  DataType: (memptr (ptr Eq_23) byte)
  OrigDataType: word16
T_87: (in 0x00 : byte)
  Class: Eq_61
  DataType: int8
  OrigDataType: byte
T_88: (in 0x00 : byte)
  Class: Eq_63
  DataType: int8
  OrigDataType: byte
T_89: (in Z_95 : byte)
  Class: Eq_89
  DataType: byte
  OrigDataType: byte
T_90: (in fn0C00_0171 : ptr32)
  Class: Eq_90
  DataType: (ptr Eq_90)
  OrigDataType: (ptr (fn T_97 (T_96, T_36, T_23, T_27)))
T_91: (in signature of fn0C00_0171 : void)
  Class: Eq_90
  DataType: (ptr Eq_90)
  OrigDataType: 
T_92: (in es : (ptr Eq_92))
  Class: Eq_92
  DataType: (ptr Eq_92)
  OrigDataType: (ptr (segment))
T_93: (in ds : (ptr Eq_36))
  Class: Eq_36
  DataType: (ptr Eq_36)
  OrigDataType: (ptr (segment (1C6 T_110 t01C6) (1C7 byte b01C7) (1CC T_148 t01CC) (1CD T_178 t01CD) (1CE T_113 t01CE)))
T_94: (in fs : (ptr Eq_23))
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: (ptr (segment))
T_95: (in gs : (ptr Eq_23))
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: (ptr (segment))
T_96: (in 0xA000 : selector)
  Class: Eq_92
  DataType: (ptr Eq_92)
  OrigDataType: (ptr (segment))
T_97: (in fn0C00_0171(0xA000, ds, ax_21, ax_24) : byte)
  Class: Eq_89
  DataType: byte
  OrigDataType: byte
T_98: (in al_96 : byte)
  Class: Eq_98
  DataType: byte
  OrigDataType: byte
T_99: (in bios_kbd_check_keystroke : ptr32)
  Class: Eq_99
  DataType: (ptr Eq_99)
  OrigDataType: (ptr (fn T_103 (T_102)))
T_100: (in signature of bios_kbd_check_keystroke : void)
  Class: Eq_99
  DataType: (ptr Eq_99)
  OrigDataType: 
T_101: (in alOut : ptr16)
  Class: Eq_101
  DataType: (ptr byte)
  OrigDataType: ptr16
T_102: (in out al_96 : ptr16)
  Class: Eq_101
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_103: (in bios_kbd_check_keystroke(out al_96) : byte)
  Class: Eq_103
  DataType: byte
  OrigDataType: byte
T_104: (in bios_video_set_mode : ptr32)
  Class: Eq_2
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (fn T_106 (T_105)))
T_105: (in 0x03 : byte)
  Class: Eq_4
  DataType: byte
  OrigDataType: byte
T_106: (in bios_video_set_mode(0x03) : void)
  Class: Eq_6
  DataType: void
  OrigDataType: void
T_107: (in Z : byte)
  Class: Eq_107
  DataType: byte
  OrigDataType: byte
T_108: (in bx_4 : (memptr (ptr Eq_23) Eq_38))
  Class: Eq_38
  DataType: (memptr (ptr Eq_23) Eq_38)
  OrigDataType: (memptr T_95 (struct (0 T_113 t0000) (4000 T_119 t4000)))
T_109: (in 0x01C6 : word16)
  Class: Eq_109
  DataType: (memptr (ptr Eq_36) (memptr (ptr Eq_23) Eq_38))
  OrigDataType: (memptr T_93 (struct (0 T_110 t0000)))
T_110: (in Mem0[ds:0x01C6:word16] : word16)
  Class: Eq_38
  DataType: (memptr (ptr Eq_23) Eq_38)
  OrigDataType: word16
T_111: (in 0x0000 : word16)
  Class: Eq_111
  DataType: word16
  OrigDataType: word16
T_112: (in bx_4 + 0x0000 : word16)
  Class: Eq_112
  DataType: word16
  OrigDataType: word16
T_113: (in Mem0[gs:bx_4 + 0x0000:word16] : word16)
  Class: Eq_113
  DataType: word16
  OrigDataType: word16
T_114: (in 0x01CE : word16)
  Class: Eq_114
  DataType: (memptr (ptr Eq_36) word16)
  OrigDataType: (memptr T_93 (struct (0 T_115 t0000)))
T_115: (in Mem7[ds:0x01CE:word16] : word16)
  Class: Eq_113
  DataType: word16
  OrigDataType: word16
T_116: (in si_24 : word16)
  Class: Eq_116
  DataType: word16
  OrigDataType: word16
T_117: (in 0x4000 : word16)
  Class: Eq_117
  DataType: word16
  OrigDataType: word16
T_118: (in bx_4 + 0x4000 : word16)
  Class: Eq_118
  DataType: word16
  OrigDataType: word16
T_119: (in Mem7[gs:bx_4 + 0x4000:word16] : word16)
  Class: Eq_116
  DataType: word16
  OrigDataType: word16
T_120: (in dx_107 : word16)
  Class: Eq_120
  DataType: word16
  OrigDataType: word16
T_121: (in 0x0000 : word16)
  Class: Eq_120
  DataType: word16
  OrigDataType: word16
T_122: (in bp_106 : word16)
  Class: Eq_122
  DataType: word16
  OrigDataType: word16
T_123: (in 0x0000 : word16)
  Class: Eq_122
  DataType: word16
  OrigDataType: word16
T_124: (in di_105 : (memptr (ptr Eq_92) byte))
  Class: Eq_124
  DataType: (memptr (ptr Eq_92) byte)
  OrigDataType: word16
T_125: (in 0x0000 : word16)
  Class: Eq_124
  DataType: (memptr (ptr Eq_92) byte)
  OrigDataType: word16
T_126: (in cx_110 : word16)
  Class: Eq_126
  DataType: word16
  OrigDataType: word16
T_127: (in 0x00C8 : word16)
  Class: Eq_126
  DataType: word16
  OrigDataType: word16
T_128: (in al_121 : byte)
  Class: Eq_128
  DataType: byte
  OrigDataType: byte
T_129: (in di_54 : (memptr (ptr Eq_92) byte))
  Class: Eq_124
  DataType: (memptr (ptr Eq_92) byte)
  OrigDataType: (memptr T_92 (struct 0001 (0 T_132 t0000)))
T_130: (in 0x0000 : word16)
  Class: Eq_130
  DataType: word16
  OrigDataType: word16
T_131: (in di_54 + 0x0000 : word16)
  Class: Eq_131
  DataType: word16
  OrigDataType: word16
T_132: (in Mem86[es:di_54 + 0x0000:byte] : byte)
  Class: Eq_128
  DataType: byte
  OrigDataType: byte
T_133: (in 0x0001 : word16)
  Class: Eq_133
  DataType: word16
  OrigDataType: word16
T_134: (in di_54 + 0x0001 : word16)
  Class: Eq_124
  DataType: (memptr (ptr Eq_92) byte)
  OrigDataType: word16
T_135: (in cx_50 : word16)
  Class: Eq_135
  DataType: word16
  OrigDataType: word16
T_136: (in 0x0001 : word16)
  Class: Eq_136
  DataType: word16
  OrigDataType: word16
T_137: (in cx_50 - 0x0001 : word16)
  Class: Eq_135
  DataType: word16
  OrigDataType: word16
T_138: (in 0x0000 : word16)
  Class: Eq_135
  DataType: word16
  OrigDataType: word16
T_139: (in cx_50 != 0x0000 : bool)
  Class: Eq_139
  DataType: bool
  OrigDataType: bool
T_140: (in bx_119 : Eq_140)
  Class: Eq_140
  DataType: Eq_140
  OrigDataType: (union (ui16 u0) ((memptr T_94 (struct (0 T_150 t0000))) u1))
T_141: (in 0x0002 : word16)
  Class: Eq_141
  DataType: ui16
  OrigDataType: ui16
T_142: (in bx_119 * 0x0002 : word16)
  Class: Eq_140
  DataType: Eq_140
  OrigDataType: ui16
T_143: (in 0x04 : byte)
  Class: Eq_143
  DataType: byte
  OrigDataType: byte
T_144: (in al_121 - 0x04 : byte)
  Class: Eq_128
  DataType: byte
  OrigDataType: byte
T_145: (in 0x00 : byte)
  Class: Eq_128
  DataType: byte
  OrigDataType: byte
T_146: (in al_121 != 0x00 : bool)
  Class: Eq_146
  DataType: bool
  OrigDataType: bool
T_147: (in 0x01CC : word16)
  Class: Eq_147
  DataType: (memptr (ptr Eq_36) word16)
  OrigDataType: (memptr T_93 (struct (0 T_148 t0000)))
T_148: (in Mem7[ds:0x01CC:word16] : word16)
  Class: Eq_148
  DataType: word16
  OrigDataType: word16
T_149: (in bx_119 + Mem7[ds:0x01CC:word16] : word16)
  Class: Eq_149
  DataType: word16
  OrigDataType: word16
T_150: (in Mem7[fs:bx_119 + Mem7[ds:0x01CC:word16]:byte] : byte)
  Class: Eq_150
  DataType: byte
  OrigDataType: byte
T_151: (in 0x00 : byte)
  Class: Eq_150
  DataType: byte
  OrigDataType: byte
T_152: (in Mem7[fs:bx_119 + Mem7[ds:0x01CC:word16]:byte] != 0x00 : bool)
  Class: Eq_152
  DataType: bool
  OrigDataType: bool
T_153: (in bp_55 : word16)
  Class: Eq_122
  DataType: word16
  OrigDataType: word16
T_154: (in dx_56 : word16)
  Class: Eq_120
  DataType: word16
  OrigDataType: word16
T_155: (in 0x01CE : word16)
  Class: Eq_155
  DataType: (memptr (ptr Eq_36) word16)
  OrigDataType: (memptr T_93 (struct (0 T_156 t0000)))
T_156: (in Mem7[ds:0x01CE:word16] : word16)
  Class: Eq_113
  DataType: word16
  OrigDataType: word16
T_157: (in dx_56 + ds->w01CE : word16)
  Class: Eq_120
  DataType: word16
  OrigDataType: word16
T_158: (in bp_55 + si_24 : word16)
  Class: Eq_122
  DataType: word16
  OrigDataType: word16
T_159: (in SLICE(dx_56, byte, 8) : byte)
  Class: Eq_159
  DataType: byte
  OrigDataType: byte
T_160: (in DPB(bp_55, SLICE(dx_56, byte, 8), 0, 8) : word16)
  Class: Eq_140
  DataType: Eq_140
  OrigDataType: word16
T_161: (in 0x14 : byte)
  Class: Eq_128
  DataType: byte
  OrigDataType: byte
T_162: (in 0x0140 : word16)
  Class: Eq_162
  DataType: word16
  OrigDataType: word16
T_163: (in di_105 + 0x0140 : word16)
  Class: Eq_124
  DataType: (memptr (ptr Eq_92) byte)
  OrigDataType: word16
T_164: (in 0x01CE : word16)
  Class: Eq_164
  DataType: (memptr (ptr Eq_36) word16)
  OrigDataType: (memptr T_93 (struct (0 T_165 t0000)))
T_165: (in Mem86[ds:0x01CE:word16] : word16)
  Class: Eq_113
  DataType: word16
  OrigDataType: word16
T_166: (in bp_106 - ds->w01CE : word16)
  Class: Eq_122
  DataType: word16
  OrigDataType: word16
T_167: (in dx_107 + si_24 : word16)
  Class: Eq_120
  DataType: word16
  OrigDataType: word16
T_168: (in 0x0001 : word16)
  Class: Eq_168
  DataType: word16
  OrigDataType: word16
T_169: (in cx_110 - 0x0001 : word16)
  Class: Eq_126
  DataType: word16
  OrigDataType: word16
T_170: (in 0x0000 : word16)
  Class: Eq_126
  DataType: word16
  OrigDataType: word16
T_171: (in cx_110 != 0x0000 : bool)
  Class: Eq_171
  DataType: bool
  OrigDataType: bool
T_172: (in 0x0140 : word16)
  Class: Eq_135
  DataType: word16
  OrigDataType: word16
T_173: (in 0x01C7 : word16)
  Class: Eq_173
  DataType: (memptr (ptr Eq_36) byte)
  OrigDataType: (memptr T_93 (struct (0 T_174 t0000)))
T_174: (in Mem86[ds:0x01C7:byte] : byte)
  Class: Eq_174
  DataType: byte
  OrigDataType: byte
T_175: (in 0x01 : byte)
  Class: Eq_175
  DataType: byte
  OrigDataType: byte
T_176: (in ds->b01C7 + 0x01 : byte)
  Class: Eq_174
  DataType: byte
  OrigDataType: byte
T_177: (in Mem112[ds:0x01C7:byte] : byte)
  Class: Eq_174
  DataType: byte
  OrigDataType: byte
T_178: (in v23_113 : byte)
  Class: Eq_178
  DataType: byte
  OrigDataType: byte
T_179: (in 0x01CD : word16)
  Class: Eq_179
  DataType: (memptr (ptr Eq_36) byte)
  OrigDataType: (memptr T_93 (struct (0 T_178 t0000)))
T_180: (in Mem112[ds:0x01CD:byte] : byte)
  Class: Eq_178
  DataType: byte
  OrigDataType: byte
T_181: (in 0x04 : byte)
  Class: Eq_181
  DataType: byte
  OrigDataType: byte
T_182: (in ds->b01CD + 0x04 : byte)
  Class: Eq_178
  DataType: byte
  OrigDataType: byte
T_183: (in Mem114[ds:0x01CD:byte] : byte)
  Class: Eq_178
  DataType: byte
  OrigDataType: byte
T_184: (in cond(v23_113) : byte)
  Class: Eq_184
  DataType: byte
  OrigDataType: byte
T_185:
  Class: Eq_185
  DataType: Eq_185
  OrigDataType: (struct 0001 (0 T_44 t0000))
T_186:
  Class: Eq_185
  DataType: Eq_185
  OrigDataType: (struct 0001 (0 T_48 t0000))
T_187:
  Class: Eq_187
  DataType: Eq_187
  OrigDataType: (struct 0001 (0 T_85 t0000))
*/
typedef Eq_92 Eq_1struct Globals {
	Eq_92 * ptrFFFA0000;	// FFFA0000
} Eq_1;

typedef void (Eq_2)(byte);

typedef void (Eq_7)(word16, byte);

typedef void (Eq_13)(word16, byte);

typedef struct Eq_21 {
} Eq_21;

typedef Eq_185 Eq_23[2]struct Eq_23 {
	Eq_185 a0000[2];	// 0
} Eq_23;

typedef struct Eq_31 {	// size: 1 1
	int16 w0000;	// 0
} Eq_31;

typedef Eq_35 (Eq_33)(Eq_34);

typedef union Eq_34 {
	real16 u0;
	real64 u1;
} Eq_34;

typedef union Eq_35 {
	real16 u0;
	real64 u1;
} Eq_35;

typedef Eq_187 Eq_36[10]Eq_56Eq_38struct Eq_36 {
	Eq_187 a0101[10];	// 101
	Eq_56 t010A;	// 10A
	Eq_38 Eq_23::*ptr01C6;	// 1C6
	byte b01C7;	// 1C7
	word16 w01CC;	// 1CC
	byte b01CD;	// 1CD
	word16 w01CE;	// 1CE
} Eq_36;

typedef struct Eq_38 {
	word16 w0000;	// 0
	word16 w4000;	// 4000
} Eq_38;

typedef union Eq_39 {
	real16 u0;
	real64 u1;
} Eq_39;

typedef struct Eq_56 {	// size: 1 1
	word16 w0000;	// 0
} Eq_56;

typedef byte (Eq_90)(Eq_92 *, Eq_36 *, Eq_23 *, Eq_23 *);

typedef struct Eq_92 {
	byte b0000;	// 0
} Eq_92;

typedef byte (Eq_99)(byte *);

typedef union Eq_140 {
	ui16 u0;
	byte Eq_23::* u1;
} Eq_140;

typedef struct Eq_185 {	// size: 1 1
	int16 w0000;	// 0
} Eq_185;

typedef struct Eq_187 {	// size: 1 1
	word16 w0000;	// 0
} Eq_187;

