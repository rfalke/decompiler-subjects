// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_289/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_33) ptrFFFA0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_7: (fn void (word16, byte))
	T_7 (in __outb : ptr32)
Eq_13: (union "Eq_13" (uint8 u0) (uint16 u1))
	T_13 (in al_16 : Eq_13)
	T_15 (in ah_13 >>u 0x02 : word16)
Eq_16: (fn void (word16, Eq_13))
	T_16 (in __outb : ptr32)
Eq_19: (fn void (word16, Eq_13))
	T_19 (in __outb : ptr32)
Eq_22: (fn void (word16, uint16))
	T_22 (in __outb : ptr32)
Eq_31: (union "Eq_31" (real16 u0) (real64 u1))
	T_31 (in rLoc3_30 : Eq_31)
	T_37 (in rLoc3 / (real64) ds->w01FE : word16)
Eq_32: (union "Eq_32" (real16 u0) (real64 u1))
	T_32 (in rLoc3 : real64)
Eq_33: (segment "Eq_33" (0 Eq_46 t0000) (1FC int16 w01FC) (1FE word16 w01FE) (200 Eq_119 t0200) (204 int16 w0204) (206 int16 w0206))
	T_33 (in ds : (ptr Eq_33))
	T_141 (in 0xA000 : selector)
Eq_36: (union "Eq_36" (real16 u0) (real64 u1))
	T_36 (in (real64) ds->w01FE : real64)
Eq_38: (union "Eq_38" (real16 u0) (real64 u1))
	T_38 (in rLoc3_34 : Eq_38)
	T_45 (in (1 + 1) / (real64) ds->w01FC : word16)
Eq_41: (union "Eq_41" (real16 u0) (real64 u1))
	T_41 (in 1 + 1 : real64)
Eq_44: (union "Eq_44" (real16 u0) (real64 u1))
	T_44 (in (real64) ds->w01FC : real64)
Eq_46: (struct "Eq_46" 0001 (0 byte b0000) (2F0 byte b02F0))
	T_46 (in di_124 : (memptr (ptr Eq_33) Eq_46))
	T_47 (in 0x0000 : word16)
	T_147 (in di_124 + 0x0001 : word16)
Eq_66: (fn real64 (real64))
	T_66 (in sin : ptr32)
Eq_91: (fn real64 (real64))
	T_91 (in cos : ptr32)
Eq_117: (union "Eq_117" (real16 u0) (real64 u1))
	T_117 (in (real64) ds->w0204 : real64)
Eq_119: (union "Eq_119" (real16 u0) (real32 u1))
	T_119 (in Mem108[ds:0x0200:real32] : real32)
Eq_160: (fn real64 (real64))
	T_160 (in cos : ptr32)
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
T_11: (in ah_13 : uint8)
  Class: Eq_11
  DataType: uint8
  OrigDataType: uint8
T_12: (in 0x00 : byte)
  Class: Eq_11
  DataType: uint8
  OrigDataType: byte
T_13: (in al_16 : Eq_13)
  Class: Eq_13
  DataType: Eq_13
  OrigDataType: uint8
T_14: (in 0x02 : byte)
  Class: Eq_14
  DataType: uint8
  OrigDataType: uint8
T_15: (in ah_13 >>u 0x02 : word16)
  Class: Eq_13
  DataType: Eq_13
  OrigDataType: uint16
T_16: (in __outb : ptr32)
  Class: Eq_16
  DataType: (ptr Eq_16)
  OrigDataType: (ptr (fn T_18 (T_17, T_13)))
T_17: (in 0x03C9 : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_18: (in __outb(0x03C9, al_16) : void)
  Class: Eq_18
  DataType: void
  OrigDataType: void
T_19: (in __outb : ptr32)
  Class: Eq_19
  DataType: (ptr Eq_19)
  OrigDataType: (ptr (fn T_21 (T_20, T_13)))
T_20: (in 0x03C9 : word16)
  Class: Eq_20
  DataType: word16
  OrigDataType: word16
T_21: (in __outb(0x03C9, al_16) : void)
  Class: Eq_21
  DataType: void
  OrigDataType: void
T_22: (in __outb : ptr32)
  Class: Eq_22
  DataType: (ptr Eq_22)
  OrigDataType: (ptr (fn T_26 (T_23, T_25)))
T_23: (in 0x03C9 : word16)
  Class: Eq_23
  DataType: word16
  OrigDataType: word16
T_24: (in 0x01 : byte)
  Class: Eq_24
  DataType: uint8
  OrigDataType: uint8
T_25: (in al_16 >>u 0x01 : word16)
  Class: Eq_25
  DataType: uint16
  OrigDataType: uint16
T_26: (in __outb(0x03C9, al_16 >>u 0x01) : void)
  Class: Eq_26
  DataType: void
  OrigDataType: void
T_27: (in 0x01 : byte)
  Class: Eq_27
  DataType: byte
  OrigDataType: byte
T_28: (in ah_13 + 0x01 : byte)
  Class: Eq_11
  DataType: uint8
  OrigDataType: byte
T_29: (in 0x00 : byte)
  Class: Eq_11
  DataType: uint8
  OrigDataType: byte
T_30: (in ah_13 != 0x00 : bool)
  Class: Eq_30
  DataType: bool
  OrigDataType: bool
T_31: (in rLoc3_30 : Eq_31)
  Class: Eq_31
  DataType: Eq_31
  OrigDataType: real64
T_32: (in rLoc3 : real64)
  Class: Eq_32
  DataType: Eq_32
  OrigDataType: (union (real16 u0) (real64 u1))
T_33: (in ds : (ptr Eq_33))
  Class: Eq_33
  DataType: (ptr Eq_33)
  OrigDataType: (ptr (segment (1FC T_43 t01FC) (1FE T_35 t01FE) (200 T_119 t0200) (204 T_61 t0204) (206 T_73 t0206)))
T_34: (in 0x01FE : word16)
  Class: Eq_34
  DataType: (memptr (ptr Eq_33) word16)
  OrigDataType: (memptr T_33 (struct (0 T_35 t0000)))
T_35: (in Mem0[ds:0x01FE:word16] : word16)
  Class: Eq_35
  DataType: word16
  OrigDataType: word16
T_36: (in (real64) ds->w01FE : real64)
  Class: Eq_36
  DataType: Eq_36
  OrigDataType: (union (real16 u0) (real64 u1))
T_37: (in rLoc3 / (real64) ds->w01FE : word16)
  Class: Eq_31
  DataType: Eq_31
  OrigDataType: real16
T_38: (in rLoc3_34 : Eq_38)
  Class: Eq_38
  DataType: Eq_38
  OrigDataType: real64
T_39: (in 1 : real64)
  Class: Eq_39
  DataType: real64
  OrigDataType: real64
T_40: (in 1 : real64)
  Class: Eq_40
  DataType: real64
  OrigDataType: real64
T_41: (in 1 + 1 : real64)
  Class: Eq_41
  DataType: Eq_41
  OrigDataType: (union (real16 u0) (real64 u1))
T_42: (in 0x01FC : word16)
  Class: Eq_42
  DataType: (memptr (ptr Eq_33) int16)
  OrigDataType: (memptr T_33 (struct (0 T_43 t0000)))
T_43: (in Mem0[ds:0x01FC:word16] : word16)
  Class: Eq_43
  DataType: int16
  OrigDataType: word16
T_44: (in (real64) ds->w01FC : real64)
  Class: Eq_44
  DataType: Eq_44
  OrigDataType: (union (real16 u0) (real64 u1))
T_45: (in (1 + 1) / (real64) ds->w01FC : word16)
  Class: Eq_38
  DataType: Eq_38
  OrigDataType: real16
T_46: (in di_124 : (memptr (ptr Eq_33) Eq_46))
  Class: Eq_46
  DataType: (memptr (ptr Eq_33) Eq_46)
  OrigDataType: (memptr T_33 (struct 0001 (0 T_144 t0000) (2F0 T_127 t02F0)))
T_47: (in 0x0000 : word16)
  Class: Eq_46
  DataType: (memptr (ptr Eq_33) Eq_46)
  OrigDataType: word16
T_48: (in bp_130 : word16)
  Class: Eq_48
  DataType: word16
  OrigDataType: word16
T_49: (in 0x00C8 : word16)
  Class: Eq_48
  DataType: word16
  OrigDataType: word16
T_50: (in rLoc4_129 : real64)
  Class: Eq_50
  DataType: real64
  OrigDataType: real64
T_51: (in 1 : real64)
  Class: Eq_50
  DataType: real64
  OrigDataType: real64
T_52: (in rLoc6_68 : real64)
  Class: Eq_52
  DataType: real64
  OrigDataType: real64
T_53: (in 0x01FC : word16)
  Class: Eq_53
  DataType: (memptr (ptr Eq_33) int16)
  OrigDataType: (memptr T_33 (struct (0 T_54 t0000)))
T_54: (in Mem0[ds:0x01FC:int16] : int16)
  Class: Eq_43
  DataType: int16
  OrigDataType: int16
T_55: (in (real64) ds->w01FC : real64)
  Class: Eq_52
  DataType: real64
  OrigDataType: real64
T_56: (in rLoc8 : real64)
  Class: Eq_56
  DataType: real64
  OrigDataType: real64
T_57: (in 0 : real64)
  Class: Eq_57
  DataType: real64
  OrigDataType: real64
T_58: (in rLoc8 + 0 : real64)
  Class: Eq_58
  DataType: real64
  OrigDataType: real64
T_59: (in rLoc8 + 0 - rLoc4_129 : real64)
  Class: Eq_59
  DataType: real64
  OrigDataType: real64
T_60: (in (rLoc8 + 0 - rLoc4_129) * rLoc6_68 : real64)
  Class: Eq_60
  DataType: real64
  OrigDataType: real64
T_61: (in (int16) ((rLoc8 + 0 - rLoc4_129) * rLoc6_68) : int16)
  Class: Eq_61
  DataType: int16
  OrigDataType: int16
T_62: (in 0x0204 : word16)
  Class: Eq_62
  DataType: (memptr (ptr Eq_33) int16)
  OrigDataType: (memptr T_33 (struct (0 T_63 t0000)))
T_63: (in Mem76[ds:0x0204:int16] : int16)
  Class: Eq_61
  DataType: int16
  OrigDataType: int16
T_64: (in rLoc8_80 : real64)
  Class: Eq_64
  DataType: real64
  OrigDataType: real64
T_65: (in rLoc6_68 * rLoc6_68 : real64)
  Class: Eq_64
  DataType: real64
  OrigDataType: real64
T_66: (in sin : ptr32)
  Class: Eq_66
  DataType: (ptr Eq_66)
  OrigDataType: (ptr (fn T_70 (T_69)))
T_67: (in rLoc6_68 * rLoc4_129 : real64)
  Class: Eq_67
  DataType: real64
  OrigDataType: real64
T_68: (in 0 : real64)
  Class: Eq_68
  DataType: real64
  OrigDataType: real64
T_69: (in rLoc6_68 * rLoc4_129 + 0 : real64)
  Class: Eq_69
  DataType: real64
  OrigDataType: real64
T_70: (in sin(rLoc6_68 * rLoc4_129 + 0) : real64)
  Class: Eq_70
  DataType: real64
  OrigDataType: real64
T_71: (in sin(rLoc6_68 * rLoc4_129 + 0) * rLoc6_68 : real64)
  Class: Eq_71
  DataType: real64
  OrigDataType: real64
T_72: (in sin(rLoc6_68 * rLoc4_129 + 0) * rLoc6_68 + rLoc8_80 : real64)
  Class: Eq_72
  DataType: real64
  OrigDataType: real64
T_73: (in (int16) (sin(rLoc6_68 * rLoc4_129 + 0) * rLoc6_68 + rLoc8_80) : int16)
  Class: Eq_73
  DataType: int16
  OrigDataType: int16
T_74: (in 0x0206 : word16)
  Class: Eq_74
  DataType: (memptr (ptr Eq_33) int16)
  OrigDataType: (memptr T_33 (struct (0 T_75 t0000)))
T_75: (in Mem82[ds:0x0206:int16] : int16)
  Class: Eq_73
  DataType: int16
  OrigDataType: int16
T_76: (in bx_83 : int16)
  Class: Eq_61
  DataType: int16
  OrigDataType: word16
T_77: (in 0x0204 : word16)
  Class: Eq_77
  DataType: (memptr (ptr Eq_33) int16)
  OrigDataType: (memptr T_33 (struct (0 T_78 t0000)))
T_78: (in Mem82[ds:0x0204:word16] : word16)
  Class: Eq_61
  DataType: int16
  OrigDataType: word16
T_79: (in ax_84 : int16)
  Class: Eq_73
  DataType: int16
  OrigDataType: word16
T_80: (in 0x0206 : word16)
  Class: Eq_80
  DataType: (memptr (ptr Eq_33) int16)
  OrigDataType: (memptr T_33 (struct (0 T_81 t0000)))
T_81: (in Mem82[ds:0x0206:word16] : word16)
  Class: Eq_73
  DataType: int16
  OrigDataType: word16
T_82: (in 0 : real64)
  Class: Eq_82
  DataType: real64
  OrigDataType: real64
T_83: (in rLoc8_80 + 0 : real64)
  Class: Eq_83
  DataType: real64
  OrigDataType: real64
T_84: (in rLoc8_80 + 0 - rLoc4_129 : real64)
  Class: Eq_84
  DataType: real64
  OrigDataType: real64
T_85: (in (rLoc8_80 + 0 - rLoc4_129) * rLoc6_68 : real64)
  Class: Eq_85
  DataType: real64
  OrigDataType: real64
T_86: (in (int16) ((rLoc8_80 + 0 - rLoc4_129) * rLoc6_68) : int16)
  Class: Eq_61
  DataType: int16
  OrigDataType: int16
T_87: (in 0x0204 : word16)
  Class: Eq_87
  DataType: (memptr (ptr Eq_33) int16)
  OrigDataType: (memptr T_33 (struct (0 T_88 t0000)))
T_88: (in Mem92[ds:0x0204:int16] : int16)
  Class: Eq_61
  DataType: int16
  OrigDataType: int16
T_89: (in rLoc5_100 : real64)
  Class: Eq_89
  DataType: real64
  OrigDataType: real64
T_90: (in rLoc5_100 * rLoc6_68 : real64)
  Class: Eq_56
  DataType: real64
  OrigDataType: real64
T_91: (in cos : ptr32)
  Class: Eq_91
  DataType: (ptr Eq_91)
  OrigDataType: (ptr (fn T_95 (T_94)))
T_92: (in rLoc6_68 - rLoc4_129 : real64)
  Class: Eq_92
  DataType: real64
  OrigDataType: real64
T_93: (in 0 : real64)
  Class: Eq_93
  DataType: real64
  OrigDataType: real64
T_94: (in rLoc6_68 - rLoc4_129 + 0 : real64)
  Class: Eq_94
  DataType: real64
  OrigDataType: real64
T_95: (in cos(rLoc6_68 - rLoc4_129 + 0) : real64)
  Class: Eq_95
  DataType: real64
  OrigDataType: real64
T_96: (in cos(rLoc6_68 - rLoc4_129 + 0) * rLoc6_68 : real64)
  Class: Eq_96
  DataType: real64
  OrigDataType: real64
T_97: (in cos(rLoc6_68 - rLoc4_129 + 0) * rLoc6_68 + rLoc8 : real64)
  Class: Eq_97
  DataType: real64
  OrigDataType: real64
T_98: (in (int16) (cos(rLoc6_68 - rLoc4_129 + 0) * rLoc6_68 + rLoc8) : int16)
  Class: Eq_73
  DataType: int16
  OrigDataType: int16
T_99: (in 0x0206 : word16)
  Class: Eq_99
  DataType: (memptr (ptr Eq_33) int16)
  OrigDataType: (memptr T_33 (struct (0 T_100 t0000)))
T_100: (in Mem98[ds:0x0206:int16] : int16)
  Class: Eq_73
  DataType: int16
  OrigDataType: int16
T_101: (in bx_106 : word16)
  Class: Eq_101
  DataType: word16
  OrigDataType: word16
T_102: (in 0x0204 : word16)
  Class: Eq_102
  DataType: (memptr (ptr Eq_33) int16)
  OrigDataType: (memptr T_33 (struct (0 T_103 t0000)))
T_103: (in Mem98[ds:0x0204:word16] : word16)
  Class: Eq_61
  DataType: int16
  OrigDataType: word16
T_104: (in bx_83 & ds->w0204 : word16)
  Class: Eq_104
  DataType: word16
  OrigDataType: word16
T_105: (in 0x00 : byte)
  Class: Eq_105
  DataType: byte
  OrigDataType: byte
T_106: (in DPB(bx_83 & ds->w0204, 0x00, 8, 8) : word16)
  Class: Eq_101
  DataType: word16
  OrigDataType: word16
T_107: (in 0x0206 : word16)
  Class: Eq_107
  DataType: (memptr (ptr Eq_33) int16)
  OrigDataType: (memptr T_33 (struct (0 T_108 t0000)))
T_108: (in Mem98[ds:0x0206:word16] : word16)
  Class: Eq_73
  DataType: int16
  OrigDataType: word16
T_109: (in ax_84 ^ ds->w0206 : word16)
  Class: Eq_109
  DataType: word16
  OrigDataType: word16
T_110: (in 0x00 : byte)
  Class: Eq_110
  DataType: byte
  OrigDataType: byte
T_111: (in DPB(ax_84 ^ ds->w0206, 0x00, 8, 8) : word16)
  Class: Eq_111
  DataType: word16
  OrigDataType: word16
T_112: (in DPB(ax_84 ^ ds->w0206, 0x00, 8, 8) - bx_106 : word16)
  Class: Eq_61
  DataType: int16
  OrigDataType: word16
T_113: (in 0x0204 : word16)
  Class: Eq_113
  DataType: (memptr (ptr Eq_33) int16)
  OrigDataType: (memptr T_33 (struct (0 T_114 t0000)))
T_114: (in Mem108[ds:0x0204:word16] : word16)
  Class: Eq_61
  DataType: int16
  OrigDataType: word16
T_115: (in 0x0204 : word16)
  Class: Eq_115
  DataType: (memptr (ptr Eq_33) int16)
  OrigDataType: (memptr T_33 (struct (0 T_116 t0000)))
T_116: (in Mem108[ds:0x0204:int16] : int16)
  Class: Eq_61
  DataType: int16
  OrigDataType: int16
T_117: (in (real64) ds->w0204 : real64)
  Class: Eq_117
  DataType: Eq_117
  OrigDataType: (union (real16 u0) (real64 u1))
T_118: (in 0x0200 : word16)
  Class: Eq_118
  DataType: (memptr (ptr Eq_33) Eq_119)
  OrigDataType: (memptr T_33 (struct (0 T_119 t0000)))
T_119: (in Mem108[ds:0x0200:real32] : real32)
  Class: Eq_119
  DataType: Eq_119
  OrigDataType: (union (real16 u0) (real32 u1))
T_120: (in (real64) ds->w0204 * ds->t0200 : word16)
  Class: Eq_120
  DataType: real16
  OrigDataType: real16
T_121: (in (int16) ((real64) ds->w0204 * ds->t0200) : int16)
  Class: Eq_73
  DataType: int16
  OrigDataType: int16
T_122: (in 0x0206 : word16)
  Class: Eq_122
  DataType: (memptr (ptr Eq_33) int16)
  OrigDataType: (memptr T_33 (struct (0 T_123 t0000)))
T_123: (in Mem111[ds:0x0206:int16] : int16)
  Class: Eq_73
  DataType: int16
  OrigDataType: int16
T_124: (in ax_113 : word16)
  Class: Eq_124
  DataType: word16
  OrigDataType: word16
T_125: (in 0x02F0 : word16)
  Class: Eq_125
  DataType: word16
  OrigDataType: word16
T_126: (in di_124 + 0x02F0 : word16)
  Class: Eq_126
  DataType: word16
  OrigDataType: word16
T_127: (in Mem111[ds:di_124 + 0x02F0:byte] : byte)
  Class: Eq_127
  DataType: byte
  OrigDataType: byte
T_128: (in (word16) (ds->*di_124).b02F0 : word16)
  Class: Eq_124
  DataType: word16
  OrigDataType: word16
T_129: (in 0x0206 : word16)
  Class: Eq_129
  DataType: (memptr (ptr Eq_33) int16)
  OrigDataType: (memptr T_33 (struct (0 T_130 t0000)))
T_130: (in Mem111[ds:0x0206:word16] : word16)
  Class: Eq_73
  DataType: int16
  OrigDataType: word16
T_131: (in bx_106 + ds->w0206 : word16)
  Class: Eq_131
  DataType: word16
  OrigDataType: word16
T_132: (in bx_106 + ds->w0206 - ax_113 : word16)
  Class: Eq_132
  DataType: int16
  OrigDataType: int16
T_133: (in cl : uint8)
  Class: Eq_133
  DataType: uint8
  OrigDataType: uint8
T_134: (in bx_106 + ds->w0206 - ax_113 >> cl : word16)
  Class: Eq_134
  DataType: int16
  OrigDataType: int16
T_135: (in (bx_106 + ds->w0206 - ax_113 >> cl) + ax_113 : word16)
  Class: Eq_135
  DataType: word16
  OrigDataType: word16
T_136: (in (byte) ((bx_106 + ds->w0206 - ax_113 >> cl) + ax_113) : byte)
  Class: Eq_127
  DataType: byte
  OrigDataType: byte
T_137: (in 0x02F0 : word16)
  Class: Eq_137
  DataType: word16
  OrigDataType: word16
T_138: (in di_124 + 0x02F0 : word16)
  Class: Eq_138
  DataType: word16
  OrigDataType: word16
T_139: (in Mem121[ds:di_124 + 0x02F0:byte] : byte)
  Class: Eq_127
  DataType: byte
  OrigDataType: byte
T_140: (in (byte) ax_113 : byte)
  Class: Eq_140
  DataType: byte
  OrigDataType: byte
T_141: (in 0xA000 : selector)
  Class: Eq_33
  DataType: (ptr Eq_33)
  OrigDataType: (ptr (segment))
T_142: (in 0x0000 : word16)
  Class: Eq_142
  DataType: word16
  OrigDataType: word16
T_143: (in di_124 + 0x0000 : word16)
  Class: Eq_143
  DataType: word16
  OrigDataType: word16
T_144: (in Mem123[0xA000:di_124 + 0x0000:byte] : byte)
  Class: Eq_140
  DataType: byte
  OrigDataType: byte
T_145: (in rLoc5_100 - rLoc3_34 : real64)
  Class: Eq_89
  DataType: real64
  OrigDataType: real64
T_146: (in 0x0001 : word16)
  Class: Eq_146
  DataType: word16
  OrigDataType: word16
T_147: (in di_124 + 0x0001 : word16)
  Class: Eq_46
  DataType: (memptr (ptr Eq_33) Eq_46)
  OrigDataType: word16
T_148: (in dx_125 : word16)
  Class: Eq_148
  DataType: word16
  OrigDataType: word16
T_149: (in 0x0001 : word16)
  Class: Eq_149
  DataType: word16
  OrigDataType: word16
T_150: (in dx_125 - 0x0001 : word16)
  Class: Eq_148
  DataType: word16
  OrigDataType: word16
T_151: (in 0x0000 : word16)
  Class: Eq_148
  DataType: word16
  OrigDataType: word16
T_152: (in dx_125 != 0x0000 : bool)
  Class: Eq_152
  DataType: bool
  OrigDataType: bool
T_153: (in rLoc4_129 - rLoc3_30 : real64)
  Class: Eq_50
  DataType: real64
  OrigDataType: real64
T_154: (in 0x0001 : word16)
  Class: Eq_154
  DataType: word16
  OrigDataType: word16
T_155: (in bp_130 - 0x0001 : word16)
  Class: Eq_48
  DataType: word16
  OrigDataType: word16
T_156: (in 0x0000 : word16)
  Class: Eq_48
  DataType: word16
  OrigDataType: word16
T_157: (in bp_130 != 0x0000 : bool)
  Class: Eq_157
  DataType: bool
  OrigDataType: bool
T_158: (in 1 : real64)
  Class: Eq_89
  DataType: real64
  OrigDataType: real64
T_159: (in 0x0140 : word16)
  Class: Eq_148
  DataType: word16
  OrigDataType: word16
T_160: (in cos : ptr32)
  Class: Eq_160
  DataType: (ptr Eq_160)
  OrigDataType: (ptr (fn T_162 (T_161)))
T_161: (in rLoc4_129 + rLoc4_129 : real64)
  Class: Eq_161
  DataType: real64
  OrigDataType: real64
T_162: (in cos(rLoc4_129 + rLoc4_129) : real64)
  Class: Eq_162
  DataType: real64
  OrigDataType: real64
*/
typedef Eq_33 Eq_1struct Globals {
	Eq_33 * ptrFFFA0000;	// FFFA0000
} Eq_1;

typedef void (Eq_2)(byte);

typedef void (Eq_7)(word16, byte);

typedef union Eq_13 {
	uint8 u0;
	uint16 u1;
} Eq_13;

typedef void (Eq_16)(word16, Eq_13);

typedef void (Eq_19)(word16, Eq_13);

typedef void (Eq_22)(word16, uint16);

typedef union Eq_31 {
	real16 u0;
	real64 u1;
} Eq_31;

typedef union Eq_32 {
	real16 u0;
	real64 u1;
} Eq_32;

typedef Eq_46 Eq_33Eq_119 Eq_33struct Eq_33 {
	Eq_46 t0000;	// 0
	int16 w01FC;	// 1FC
	word16 w01FE;	// 1FE
	Eq_119 t0200;	// 200
	int16 w0204;	// 204
	int16 w0206;	// 206
} Eq_33;

typedef union Eq_36 {
	real16 u0;
	real64 u1;
} Eq_36;

typedef union Eq_38 {
	real16 u0;
	real64 u1;
} Eq_38;

typedef union Eq_41 {
	real16 u0;
	real64 u1;
} Eq_41;

typedef union Eq_44 {
	real16 u0;
	real64 u1;
} Eq_44;

typedef struct Eq_46 {	// size: 1 1
	byte b0000;	// 0
	byte b02F0;	// 2F0
} Eq_46;

typedef real64 (Eq_66)(real64);

typedef real64 (Eq_91)(real64);

typedef union Eq_117 {
	real16 u0;
	real64 u1;
} Eq_117;

typedef union Eq_119 {
	real16 u0;
	real32 u1;
} Eq_119;

typedef real64 (Eq_160)(real64);

