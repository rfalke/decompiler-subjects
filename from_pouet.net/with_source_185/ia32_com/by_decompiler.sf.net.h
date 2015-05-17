// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_185/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_99) ptrFFFA0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
	T_158 (in bios_video_set_mode : ptr32)
Eq_7: (fn void (word16, byte))
	T_7 (in __outb : ptr32)
Eq_11: (union "Eq_11" (int16 u0) (byte u1))
	T_11 (in ax_13 : Eq_11)
	T_12 (in 0x0000 : word16)
	T_20 (in DPB(ax_13, al_12, 0, 8) : word16)
	T_37 (in (int16) rLoc2 : int16)
	T_40 (in Mem42[bx_21:bx_27 + 0x0000:int16] : int16)
	T_43 (in Mem44[bx:bx_27 + 0x0000:word16] : word16)
	T_65 (in 0xC9 : byte)
	T_68 (in Mem249[bx:bx_27 + si_67:byte] : byte)
Eq_15: (fn void (word16, byte))
	T_15 (in __outb : ptr32)
Eq_23: (struct "Eq_23" (0 word16 w0000) (4000 word16 w4000))
	T_23 (in bx_21 : (ptr Eq_23))
	T_24 (in bx : (ptr Eq_23))
	T_26 (in DPB(bx, 0x70, 8, 8) : word16)
Eq_27: (struct "Eq_27" 0001 (0 Eq_11 t0000))
	T_27 (in bx_27 : (memptr (ptr Eq_23) Eq_27))
	T_28 (in 0x0000 : word16)
	T_48 (in bx_45 + 0x0001 : word16)
	T_60 (in bx_27 + 0x0001 : word16)
	T_63 (in 0x0000 : word16)
Eq_29: (fn Eq_31 (Eq_30))
	T_29 (in sin : ptr32)
Eq_30: (union "Eq_30" (real16 u0) (real64 u1))
	T_30 (in rLoc2 : real64)
	T_36 (in sin(rLoc2) * (real64) ds->w01AA : word16)
Eq_31: (union "Eq_31" (real16 u0) (real64 u1))
	T_31 (in sin(rLoc2) : real64)
Eq_32: (segment "Eq_32" (1 (arr Eq_161 10) a0001) (A Eq_57 t000A) (15A byte b015A) (17B byte b017B) (1AA word16 w01AA))
	T_32 (in ds : (ptr Eq_32))
Eq_35: (union "Eq_35" (real16 u0) (real64 u1))
	T_35 (in (real64) ds->w01AA : real64)
Eq_57: (struct "Eq_57" 0001 (0 word16 w0000))
	T_57 (in di_52 : (memptr (ptr Eq_32) Eq_57))
	T_58 (in 0x000A : word16)
	T_78 (in di_87 - 0x0001 : word16)
Eq_99: (segment "Eq_99" (0 bcu8 b0000))
	T_99 (in 0xA000 : selector)
Eq_113: (union "Eq_113" (ui16 u0) ((memptr (ptr Eq_23) bcu8) u1))
	T_113 (in bx_182 : Eq_113)
	T_115 (in bx_182 * 0x0002 : word16)
	T_128 (in DPB(bx_173, SLICE(dx_169, byte, 8), 0, 8) : word16)
Eq_151: (fn byte ((ptr byte)))
	T_151 (in bios_kbd_check_keystroke : ptr32)
	T_152 (in signature of bios_kbd_check_keystroke : void)
Eq_161: (struct "Eq_161" 0001 (0 word16 w0000))
	T_161
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
T_11: (in ax_13 : Eq_11)
  Class: Eq_11
  DataType: Eq_11
  OrigDataType: word16
T_12: (in 0x0000 : word16)
  Class: Eq_11
  DataType: int16
  OrigDataType: word16
T_13: (in al_12 : byte)
  Class: Eq_13
  DataType: byte
  OrigDataType: byte
T_14: (in 0x00 : byte)
  Class: Eq_13
  DataType: byte
  OrigDataType: byte
T_15: (in __outb : ptr32)
  Class: Eq_15
  DataType: (ptr Eq_15)
  OrigDataType: (ptr (fn T_17 (T_16, T_13)))
T_16: (in 0x03C9 : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_17: (in __outb(0x03C9, al_12) : void)
  Class: Eq_17
  DataType: void
  OrigDataType: void
T_18: (in 0x01 : byte)
  Class: Eq_18
  DataType: byte
  OrigDataType: byte
T_19: (in al_12 + 0x01 : byte)
  Class: Eq_13
  DataType: byte
  OrigDataType: byte
T_20: (in DPB(ax_13, al_12, 0, 8) : word16)
  Class: Eq_11
  DataType: Eq_11
  OrigDataType: word16
T_21: (in 0x00 : byte)
  Class: Eq_13
  DataType: byte
  OrigDataType: byte
T_22: (in al_12 != 0x00 : bool)
  Class: Eq_22
  DataType: bool
  OrigDataType: bool
T_23: (in bx_21 : (ptr Eq_23))
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: (ptr (struct (0 T_88 t0000) (4000 T_91 t4000)))
T_24: (in bx : (ptr Eq_23))
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: word16
T_25: (in 0x70 : byte)
  Class: Eq_25
  DataType: byte
  OrigDataType: byte
T_26: (in DPB(bx, 0x70, 8, 8) : word16)
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: word16
T_27: (in bx_27 : (memptr (ptr Eq_23) Eq_27))
  Class: Eq_27
  DataType: (memptr (ptr Eq_23) Eq_27)
  OrigDataType: (memptr T_23 (struct 0001 (0 T_11 t0000)))
T_28: (in 0x0000 : word16)
  Class: Eq_27
  DataType: (memptr (ptr Eq_23) Eq_27)
  OrigDataType: word16
T_29: (in sin : ptr32)
  Class: Eq_29
  DataType: (ptr Eq_29)
  OrigDataType: (ptr (fn T_31 (T_30)))
T_30: (in rLoc2 : real64)
  Class: Eq_30
  DataType: Eq_30
  OrigDataType: (union (real16 u0) (real64 u1))
T_31: (in sin(rLoc2) : real64)
  Class: Eq_31
  DataType: Eq_31
  OrigDataType: (union (real16 u0) (real64 u1))
T_32: (in ds : (ptr Eq_32))
  Class: Eq_32
  DataType: (ptr Eq_32)
  OrigDataType: (ptr (segment (1 (arr T_161 10) a0001) (15A T_140 t015A) (17B T_144 t017B) (1AA T_34 t01AA)))
T_33: (in 0x01AA : word16)
  Class: Eq_33
  DataType: (memptr (ptr Eq_32) word16)
  OrigDataType: (memptr T_32 (struct (0 T_34 t0000)))
T_34: (in Mem0[ds:0x01AA:word16] : word16)
  Class: Eq_34
  DataType: word16
  OrigDataType: word16
T_35: (in (real64) ds->w01AA : real64)
  Class: Eq_35
  DataType: Eq_35
  OrigDataType: (union (real16 u0) (real64 u1))
T_36: (in sin(rLoc2) * (real64) ds->w01AA : word16)
  Class: Eq_30
  DataType: Eq_30
  OrigDataType: real16
T_37: (in (int16) rLoc2 : int16)
  Class: Eq_11
  DataType: Eq_11
  OrigDataType: int16
T_38: (in 0x0000 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_39: (in bx_27 + 0x0000 : word16)
  Class: Eq_39
  DataType: word16
  OrigDataType: word16
T_40: (in Mem42[bx_21:bx_27 + 0x0000:int16] : int16)
  Class: Eq_11
  DataType: Eq_11
  OrigDataType: int16
T_41: (in 0x0000 : word16)
  Class: Eq_41
  DataType: word16
  OrigDataType: word16
T_42: (in bx_27 + 0x0000 : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_43: (in Mem44[bx:bx_27 + 0x0000:word16] : word16)
  Class: Eq_11
  DataType: Eq_11
  OrigDataType: word16
T_44: (in bx_45 : word16)
  Class: Eq_44
  DataType: word16
  OrigDataType: word16
T_45: (in 0x0001 : word16)
  Class: Eq_45
  DataType: word16
  OrigDataType: word16
T_46: (in bx_27 + 0x0001 : word16)
  Class: Eq_44
  DataType: word16
  OrigDataType: word16
T_47: (in 0x0001 : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_48: (in bx_45 + 0x0001 : word16)
  Class: Eq_27
  DataType: (memptr (ptr Eq_23) Eq_27)
  OrigDataType: word16
T_49: (in bh_47 : int8)
  Class: Eq_49
  DataType: int8
  OrigDataType: int8
T_50: (in bx_45 + 0x0001 : word16)
  Class: Eq_50
  DataType: word16
  OrigDataType: word16
T_51: (in SLICE(bx_45 + 0x0001, byte, 8) : byte)
  Class: Eq_49
  DataType: int8
  OrigDataType: byte
T_52: (in bl_48 : int8)
  Class: Eq_52
  DataType: int8
  OrigDataType: int8
T_53: (in bx_45 + 0x0001 : word16)
  Class: Eq_53
  DataType: word16
  OrigDataType: word16
T_54: (in (byte) (bx_45 + 0x0001) : byte)
  Class: Eq_52
  DataType: int8
  OrigDataType: byte
T_55: (in 0x0001 : word16)
  Class: Eq_44
  DataType: word16
  OrigDataType: word16
T_56: (in bx_45 != 0x0001 : bool)
  Class: Eq_56
  DataType: bool
  OrigDataType: bool
T_57: (in di_52 : (memptr (ptr Eq_32) Eq_57))
  Class: Eq_57
  DataType: (memptr (ptr Eq_32) Eq_57)
  OrigDataType: (memptr T_32 (struct 0001 (0 T_83 t0000)))
T_58: (in 0x000A : word16)
  Class: Eq_57
  DataType: (memptr (ptr Eq_32) Eq_57)
  OrigDataType: word16
T_59: (in 0x0001 : word16)
  Class: Eq_59
  DataType: word16
  OrigDataType: word16
T_60: (in bx_27 + 0x0001 : word16)
  Class: Eq_27
  DataType: (memptr (ptr Eq_23) Eq_27)
  OrigDataType: word16
T_61: (in SLICE(bx_27, byte, 8) : byte)
  Class: Eq_49
  DataType: int8
  OrigDataType: byte
T_62: (in (byte) bx_27 : byte)
  Class: Eq_52
  DataType: int8
  OrigDataType: byte
T_63: (in 0x0000 : word16)
  Class: Eq_27
  DataType: (memptr (ptr Eq_23) Eq_27)
  OrigDataType: word16
T_64: (in bx_27 != &Eq_23::w0000 : bool)
  Class: Eq_64
  DataType: bool
  OrigDataType: bool
T_65: (in 0xC9 : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_66: (in si_67 : word16)
  Class: Eq_66
  DataType: word16
  OrigDataType: word16
T_67: (in bx_27 + si_67 : word16)
  Class: Eq_67
  DataType: word16
  OrigDataType: word16
T_68: (in Mem249[bx:bx_27 + si_67:byte] : byte)
  Class: Eq_11
  DataType: Eq_11
  OrigDataType: byte
T_69: (in bh_47 *s bh_47 : int16)
  Class: Eq_69
  DataType: int16
  OrigDataType: int16
T_70: (in bl_48 *s bl_48 : int16)
  Class: Eq_70
  DataType: int16
  OrigDataType: int16
T_71: (in bh_47 *s bh_47 + bl_48 *s bl_48 : word16)
  Class: Eq_71
  DataType: cups16
  OrigDataType: cups16
T_72: (in 0x09C3 : word16)
  Class: Eq_71
  DataType: cups16
  OrigDataType: cups16
T_73: (in bh_47 *s bh_47 + bl_48 *s bl_48 >u 0x09C3 : bool)
  Class: Eq_73
  DataType: bool
  OrigDataType: bool
T_74: (in di_87 : word16)
  Class: Eq_74
  DataType: word16
  OrigDataType: word16
T_75: (in 0x0001 : word16)
  Class: Eq_75
  DataType: word16
  OrigDataType: word16
T_76: (in di_52 - 0x0001 : word16)
  Class: Eq_74
  DataType: word16
  OrigDataType: word16
T_77: (in 0x0001 : word16)
  Class: Eq_77
  DataType: word16
  OrigDataType: word16
T_78: (in di_87 - 0x0001 : word16)
  Class: Eq_57
  DataType: (memptr (ptr Eq_32) Eq_57)
  OrigDataType: word16
T_79: (in 0x0001 : word16)
  Class: Eq_74
  DataType: word16
  OrigDataType: word16
T_80: (in di_87 != 0x0001 : bool)
  Class: Eq_80
  DataType: bool
  OrigDataType: bool
T_81: (in 0x0000 : word16)
  Class: Eq_81
  DataType: word16
  OrigDataType: word16
T_82: (in di_52 + 0x0000 : word16)
  Class: Eq_82
  DataType: word16
  OrigDataType: word16
T_83: (in Mem44[ds:di_52 + 0x0000:word16] : word16)
  Class: Eq_66
  DataType: word16
  OrigDataType: word16
T_84: (in bx_117 : word16)
  Class: Eq_84
  DataType: word16
  OrigDataType: word16
T_85: (in 0x0000 : word16)
  Class: Eq_84
  DataType: word16
  OrigDataType: word16
T_86: (in si_120 : word16)
  Class: Eq_86
  DataType: word16
  OrigDataType: word16
T_87: (in 0x0000 : word16)
  Class: Eq_87
  DataType: (memptr (ptr Eq_23) word16)
  OrigDataType: (memptr T_23 (struct (0 T_88 t0000)))
T_88: (in Mem44[bx_21:0x0000:word16] : word16)
  Class: Eq_86
  DataType: word16
  OrigDataType: word16
T_89: (in bp_121 : word16)
  Class: Eq_89
  DataType: word16
  OrigDataType: word16
T_90: (in 0x4000 : word16)
  Class: Eq_90
  DataType: (memptr (ptr Eq_23) word16)
  OrigDataType: (memptr T_23 (struct (0 T_91 t0000)))
T_91: (in Mem44[bx_21:0x4000:word16] : word16)
  Class: Eq_89
  DataType: word16
  OrigDataType: word16
T_92: (in dx_122 : word16)
  Class: Eq_92
  DataType: word16
  OrigDataType: word16
T_93: (in 0x0000 : word16)
  Class: Eq_92
  DataType: word16
  OrigDataType: word16
T_94: (in di_125 : (memptr (ptr Eq_99) bcu8))
  Class: Eq_94
  DataType: (memptr (ptr Eq_99) bcu8)
  OrigDataType: word16
T_95: (in 0x0000 : word16)
  Class: Eq_94
  DataType: (memptr (ptr Eq_99) bcu8)
  OrigDataType: word16
T_96: (in cx_128 : word16)
  Class: Eq_96
  DataType: word16
  OrigDataType: word16
T_97: (in 0x00C8 : word16)
  Class: Eq_96
  DataType: word16
  OrigDataType: word16
T_98: (in al_183 : bcu8)
  Class: Eq_98
  DataType: bcu8
  OrigDataType: bcu8
T_99: (in 0xA000 : selector)
  Class: Eq_99
  DataType: (ptr Eq_99)
  OrigDataType: (ptr (segment))
T_100: (in di_167 : (memptr (ptr Eq_99) bcu8))
  Class: Eq_94
  DataType: (memptr (ptr Eq_99) bcu8)
  OrigDataType: (memptr T_99 (struct 0001 (0 T_103 t0000)))
T_101: (in 0x0000 : word16)
  Class: Eq_101
  DataType: word16
  OrigDataType: word16
T_102: (in di_167 + 0x0000 : word16)
  Class: Eq_102
  DataType: word16
  OrigDataType: word16
T_103: (in Mem202[0xA000:di_167 + 0x0000:byte] : byte)
  Class: Eq_98
  DataType: bcu8
  OrigDataType: byte
T_104: (in 0x0001 : word16)
  Class: Eq_104
  DataType: word16
  OrigDataType: word16
T_105: (in di_167 + 0x0001 : word16)
  Class: Eq_94
  DataType: (memptr (ptr Eq_99) bcu8)
  OrigDataType: word16
T_106: (in bx_173 : word16)
  Class: Eq_84
  DataType: word16
  OrigDataType: word16
T_107: (in bx_168 : word16)
  Class: Eq_84
  DataType: word16
  OrigDataType: word16
T_108: (in cx_164 : word16)
  Class: Eq_108
  DataType: word16
  OrigDataType: word16
T_109: (in 0x0001 : word16)
  Class: Eq_109
  DataType: word16
  OrigDataType: word16
T_110: (in cx_164 - 0x0001 : word16)
  Class: Eq_108
  DataType: word16
  OrigDataType: word16
T_111: (in 0x0000 : word16)
  Class: Eq_108
  DataType: word16
  OrigDataType: word16
T_112: (in cx_164 != 0x0000 : bool)
  Class: Eq_112
  DataType: bool
  OrigDataType: bool
T_113: (in bx_182 : Eq_113)
  Class: Eq_113
  DataType: Eq_113
  OrigDataType: (union (ui16 u0) ((memptr T_24 (struct (0 T_122 t0000))) u1))
T_114: (in 0x0002 : word16)
  Class: Eq_114
  DataType: ui16
  OrigDataType: ui16
T_115: (in bx_182 * 0x0002 : word16)
  Class: Eq_113
  DataType: Eq_113
  OrigDataType: ui16
T_116: (in 0x04 : byte)
  Class: Eq_116
  DataType: byte
  OrigDataType: byte
T_117: (in al_183 - 0x04 : byte)
  Class: Eq_98
  DataType: bcu8
  OrigDataType: byte
T_118: (in 0x00 : byte)
  Class: Eq_98
  DataType: bcu8
  OrigDataType: byte
T_119: (in al_183 != 0x00 : bool)
  Class: Eq_119
  DataType: bool
  OrigDataType: bool
T_120: (in 0x0000 : word16)
  Class: Eq_120
  DataType: word16
  OrigDataType: word16
T_121: (in bx_182 + 0x0000 : word16)
  Class: Eq_121
  DataType: word16
  OrigDataType: word16
T_122: (in Mem44[bx:bx_182 + 0x0000:byte] : byte)
  Class: Eq_98
  DataType: bcu8
  OrigDataType: bcu8
T_123: (in Mem44[bx:bx_182 + 0x0000:byte] >u al_183 : bool)
  Class: Eq_123
  DataType: bool
  OrigDataType: bool
T_124: (in dx_169 : word16)
  Class: Eq_92
  DataType: word16
  OrigDataType: word16
T_125: (in dx_169 + si_120 : word16)
  Class: Eq_92
  DataType: word16
  OrigDataType: word16
T_126: (in bx_168 + bp_121 : word16)
  Class: Eq_84
  DataType: word16
  OrigDataType: word16
T_127: (in SLICE(dx_169, byte, 8) : byte)
  Class: Eq_127
  DataType: byte
  OrigDataType: byte
T_128: (in DPB(bx_173, SLICE(dx_169, byte, 8), 0, 8) : word16)
  Class: Eq_113
  DataType: Eq_113
  OrigDataType: word16
T_129: (in 0x14 : byte)
  Class: Eq_98
  DataType: bcu8
  OrigDataType: byte
T_130: (in 0x0140 : word16)
  Class: Eq_130
  DataType: word16
  OrigDataType: word16
T_131: (in di_125 + 0x0140 : word16)
  Class: Eq_94
  DataType: (memptr (ptr Eq_99) bcu8)
  OrigDataType: word16
T_132: (in bx_117 - si_120 : word16)
  Class: Eq_84
  DataType: word16
  OrigDataType: word16
T_133: (in dx_122 + bp_121 : word16)
  Class: Eq_92
  DataType: word16
  OrigDataType: word16
T_134: (in 0x0001 : word16)
  Class: Eq_134
  DataType: word16
  OrigDataType: word16
T_135: (in cx_128 - 0x0001 : word16)
  Class: Eq_96
  DataType: word16
  OrigDataType: word16
T_136: (in 0x0000 : word16)
  Class: Eq_96
  DataType: word16
  OrigDataType: word16
T_137: (in cx_128 != 0x0000 : bool)
  Class: Eq_137
  DataType: bool
  OrigDataType: bool
T_138: (in 0x0140 : word16)
  Class: Eq_108
  DataType: word16
  OrigDataType: word16
T_139: (in 0x015A : word16)
  Class: Eq_139
  DataType: (memptr (ptr Eq_32) byte)
  OrigDataType: (memptr T_32 (struct (0 T_140 t0000)))
T_140: (in Mem202[ds:0x015A:byte] : byte)
  Class: Eq_140
  DataType: byte
  OrigDataType: byte
T_141: (in 0x01 : byte)
  Class: Eq_141
  DataType: byte
  OrigDataType: byte
T_142: (in ds->b015A + 0x01 : byte)
  Class: Eq_140
  DataType: byte
  OrigDataType: byte
T_143: (in Mem234[ds:0x015A:byte] : byte)
  Class: Eq_140
  DataType: byte
  OrigDataType: byte
T_144: (in v30_235 : byte)
  Class: Eq_144
  DataType: byte
  OrigDataType: byte
T_145: (in 0x017B : word16)
  Class: Eq_145
  DataType: (memptr (ptr Eq_32) byte)
  OrigDataType: (memptr T_32 (struct (0 T_144 t0000)))
T_146: (in Mem234[ds:0x017B:byte] : byte)
  Class: Eq_144
  DataType: byte
  OrigDataType: byte
T_147: (in 0x04 : byte)
  Class: Eq_147
  DataType: byte
  OrigDataType: byte
T_148: (in ds->b017B + 0x04 : byte)
  Class: Eq_144
  DataType: byte
  OrigDataType: byte
T_149: (in Mem236[ds:0x017B:byte] : byte)
  Class: Eq_144
  DataType: byte
  OrigDataType: byte
T_150: (in al_239 : byte)
  Class: Eq_150
  DataType: byte
  OrigDataType: byte
T_151: (in bios_kbd_check_keystroke : ptr32)
  Class: Eq_151
  DataType: (ptr Eq_151)
  OrigDataType: (ptr (fn T_155 (T_154)))
T_152: (in signature of bios_kbd_check_keystroke : void)
  Class: Eq_151
  DataType: (ptr Eq_151)
  OrigDataType: 
T_153: (in alOut : ptr16)
  Class: Eq_153
  DataType: (ptr byte)
  OrigDataType: ptr16
T_154: (in out al_239 : ptr16)
  Class: Eq_153
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_155: (in bios_kbd_check_keystroke(out al_239) : byte)
  Class: Eq_155
  DataType: byte
  OrigDataType: byte
T_156: (in 0x00 : byte)
  Class: Eq_144
  DataType: byte
  OrigDataType: byte
T_157: (in v30_235 == 0x00 : bool)
  Class: Eq_157
  DataType: bool
  OrigDataType: bool
T_158: (in bios_video_set_mode : ptr32)
  Class: Eq_2
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (fn T_160 (T_159)))
T_159: (in 0x03 : byte)
  Class: Eq_4
  DataType: byte
  OrigDataType: byte
T_160: (in bios_video_set_mode(0x03) : void)
  Class: Eq_6
  DataType: void
  OrigDataType: void
T_161:
  Class: Eq_161
  DataType: Eq_161
  OrigDataType: (struct 0001 (0 T_83 t0000))
*/
typedef Eq_99 Eq_1struct Globals {
	Eq_99 * ptrFFFA0000;	// FFFA0000
} Eq_1;

typedef void (Eq_2)(byte);

typedef void (Eq_7)(word16, byte);

typedef union Eq_11 {
	int16 u0;
	byte u1;
} Eq_11;

typedef void (Eq_15)(word16, byte);

typedef struct Eq_23 {
	word16 w0000;	// 0
	word16 w4000;	// 4000
} Eq_23;

typedef Eq_11 Eq_27struct Eq_27 {	// size: 1 1
	Eq_11 t0000;	// 0
} Eq_27;

typedef Eq_31 (Eq_29)(Eq_30);

typedef union Eq_30 {
	real16 u0;
	real64 u1;
} Eq_30;

typedef union Eq_31 {
	real16 u0;
	real64 u1;
} Eq_31;

typedef Eq_161 Eq_32[10]Eq_57struct Eq_32 {
	Eq_161 a0001[10];	// 1
	Eq_57 t000A;	// A
	byte b015A;	// 15A
	byte b017B;	// 17B
	word16 w01AA;	// 1AA
} Eq_32;

typedef union Eq_35 {
	real16 u0;
	real64 u1;
} Eq_35;

typedef struct Eq_57 {	// size: 1 1
	word16 w0000;	// 0
} Eq_57;

typedef struct Eq_99 {
	bcu8 b0000;	// 0
} Eq_99;

typedef union Eq_113 {
	ui16 u0;
	bcu8 Eq_23::* u1;
} Eq_113;

typedef byte (Eq_151)(byte *);

typedef struct Eq_161 {	// size: 1 1
	word16 w0000;	// 0
} Eq_161;

