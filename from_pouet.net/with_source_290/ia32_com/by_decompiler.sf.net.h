// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_290/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_127) ptrFFFA0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_3: (fn void (byte))
	T_3 (in bios_video_set_mode : ptr32)
	T_4 (in signature of bios_video_set_mode : void)
Eq_8: (fn void (word16, byte))
	T_8 (in __outb : ptr32)
Eq_16: (fn void (word16, byte))
	T_16 (in __outb : ptr32)
Eq_19: (fn void (word16, byte))
	T_19 (in __outb : ptr32)
Eq_22: (fn void (word16, byte))
	T_22 (in __outb : ptr32)
Eq_30: (union "Eq_30" (real16 u0) (real32 u1) (real64 u2))
	T_30 (in rLoc1_159 : Eq_30)
	T_33 (in Mem0[ds:0x01F4:real32] : real32)
	T_169 (in Mem156[ds:0x01F4:real32] : real32)
	T_170 (in rLoc1_159 + ds->t01F4 : word16)
Eq_31: (segment "Eq_31" (1EC Eq_74 t01EC) (1F0 Eq_104 t01F0) (1F4 Eq_30 t01F4) (1F8 Eq_45 t01F8) (1FC Eq_86 t01FC) (200 int16 w0200) (202 word16 w0202) (204 Eq_95 t0204) (206 Eq_106 t0206) (208 int16 w0208) (20A int16 w020A))
	T_31 (in ds : (ptr Eq_31))
Eq_45: (union "Eq_45" (real32 u0) (real64 u1))
	T_45 (in rLoc4_79 : Eq_45)
	T_47 (in Mem77[ds:0x01F8:real32] : real32)
Eq_49: (fn real64 (real64))
	T_49 (in sin : ptr32)
Eq_52: (fn real64 (real64))
	T_52 (in cos : ptr32)
Eq_63: (union "Eq_63" (real16 u0) (real64 u1))
	T_63 (in rLoc4_112 : Eq_63)
	T_73 (in rLoc4_100 / (rLoc7_88 / (rLoc2_76 / sqrt((rLoc3_96 * rLoc3_96 + rLoc7_88 * rLoc7_88) + rLoc4_100 * rLoc4_100))) : real64)
Eq_64: (fn real64 (real64))
	T_64 (in sqrt : ptr32)
Eq_74: (union "Eq_74" (real32 u0) (real64 u1))
	T_74 (in rLoc6_118 : Eq_74)
	T_76 (in Mem77[ds:0x01EC:real32] : real32)
Eq_78: (fn real64 (real64))
	T_78 (in sqrt : ptr32)
Eq_86: (union "Eq_86" (real32 u0) (real64 u1))
	T_86 (in Mem77[ds:0x01FC:real32] : real32)
Eq_93: (union "Eq_93" (real16 u0) (real64 u1))
	T_93 (in (real64) ds->w0202 : real64)
Eq_95: (union "Eq_95" (int16 u0) (byte u1))
	T_95 (in (int16) (rLoc4_112 + (real64) ds->w0202) : int16)
	T_97 (in Mem130[ds:0x0204:int16] : int16)
	T_115 (in Mem133[ds:0x0204:byte] : byte)
Eq_98: (fn Eq_102 (real64, real64))
	T_98 (in atan : ptr32)
Eq_102: (union "Eq_102" (real16 u0) (real64 u1))
	T_102 (in atan(rLoc2_76 * ((rLoc5_122 * rLoc4_112) * rLoc7_88), rLoc7_88) : real64)
Eq_104: (union "Eq_104" (real16 u0) (real32 u1))
	T_104 (in Mem130[ds:0x01F0:real32] : real32)
Eq_106: (union "Eq_106" (int16 u0) (byte u1))
	T_106 (in (int16) (atan(rLoc2_76 * ((rLoc5_122 * rLoc4_112) * rLoc7_88), rLoc7_88) * ds->t01F0) : int16)
	T_108 (in Mem133[ds:0x0206:int16] : int16)
	T_111 (in Mem133[ds:0x0206:byte] : byte)
Eq_109: (union "Eq_109" (int16 u0) (uint16 u1))
	T_109 (in ax_138 : Eq_109)
	T_120 (in DPB(ax_147, ds->t0206 - bl_54 ^ ds->t0204, 0, 8) *s ds->w0200 : int16)
Eq_127: (segment "Eq_127" (0 Eq_128 t0000))
	T_127 (in 0xA000 : selector)
Eq_128: (struct "Eq_128" 0140 (0 word16 w0000) (140 word16 w0140))
	T_128 (in di_145 : (memptr (ptr Eq_127) Eq_128))
	T_136 (in di_145 + 0x0002 : word16)
	T_144 (in di_145 + 0x0140 : word16)
	T_174 (in 0x0000 : word16)
Eq_162: (fn byte (byte))
	T_162 (in __inb : ptr32)
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
T_8: (in __outb : ptr32)
  Class: Eq_8
  DataType: (ptr Eq_8)
  OrigDataType: (ptr (fn T_11 (T_9, T_10)))
T_9: (in 0x03C8 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_10: (in 0x00 : byte)
  Class: Eq_10
  DataType: byte
  OrigDataType: byte
T_11: (in __outb(0x03C8, 0x00) : void)
  Class: Eq_11
  DataType: void
  OrigDataType: void
T_12: (in ax_147 : word16)
  Class: Eq_12
  DataType: word16
  OrigDataType: word16
T_13: (in 0x0000 : word16)
  Class: Eq_12
  DataType: word16
  OrigDataType: word16
T_14: (in al_14 : byte)
  Class: Eq_14
  DataType: byte
  OrigDataType: byte
T_15: (in 0x00 : byte)
  Class: Eq_14
  DataType: byte
  OrigDataType: byte
T_16: (in __outb : ptr32)
  Class: Eq_16
  DataType: (ptr Eq_16)
  OrigDataType: (ptr (fn T_18 (T_17, T_14)))
T_17: (in 0x03C9 : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_18: (in __outb(0x03C9, al_14) : void)
  Class: Eq_18
  DataType: void
  OrigDataType: void
T_19: (in __outb : ptr32)
  Class: Eq_19
  DataType: (ptr Eq_19)
  OrigDataType: (ptr (fn T_21 (T_20, T_14)))
T_20: (in 0x03C9 : word16)
  Class: Eq_20
  DataType: word16
  OrigDataType: word16
T_21: (in __outb(0x03C9, al_14) : void)
  Class: Eq_21
  DataType: void
  OrigDataType: void
T_22: (in __outb : ptr32)
  Class: Eq_22
  DataType: (ptr Eq_22)
  OrigDataType: (ptr (fn T_24 (T_23, T_14)))
T_23: (in 0x03C9 : word16)
  Class: Eq_23
  DataType: word16
  OrigDataType: word16
T_24: (in __outb(0x03C9, al_14) : void)
  Class: Eq_24
  DataType: void
  OrigDataType: void
T_25: (in 0x01 : byte)
  Class: Eq_25
  DataType: byte
  OrigDataType: byte
T_26: (in al_14 + 0x01 : byte)
  Class: Eq_14
  DataType: byte
  OrigDataType: byte
T_27: (in DPB(ax_147, al_14, 0, 8) : word16)
  Class: Eq_12
  DataType: word16
  OrigDataType: word16
T_28: (in 0x00 : byte)
  Class: Eq_14
  DataType: byte
  OrigDataType: byte
T_29: (in al_14 != 0x00 : bool)
  Class: Eq_29
  DataType: bool
  OrigDataType: bool
T_30: (in rLoc1_159 : Eq_30)
  Class: Eq_30
  DataType: Eq_30
  OrigDataType: (union (real16 u0) (real64 u1))
T_31: (in ds : (ptr Eq_31))
  Class: Eq_31
  DataType: (ptr Eq_31)
  OrigDataType: (ptr (segment (1EC T_76 t01EC) (1F0 T_104 t01F0) (1F4 T_30 t01F4) (1F8 T_47 t01F8) (1FC T_86 t01FC) (200 T_88 t0200) (202 T_92 t0202) (204 T_95 t0204) (206 T_106 t0206) (208 T_38 t0208) (20A T_36 t020A)))
T_32: (in 0x01F4 : word16)
  Class: Eq_32
  DataType: (memptr (ptr Eq_31) Eq_30)
  OrigDataType: (memptr T_31 (struct (0 T_33 t0000)))
T_33: (in Mem0[ds:0x01F4:real32] : real32)
  Class: Eq_30
  DataType: Eq_30
  OrigDataType: real32
T_34: (in rLoc2_76 : real64)
  Class: Eq_34
  DataType: real64
  OrigDataType: real64
T_35: (in 0x020A : word16)
  Class: Eq_35
  DataType: (memptr (ptr Eq_31) int16)
  OrigDataType: (memptr T_31 (struct (0 T_36 t0000)))
T_36: (in Mem72[ds:0x020A:int16] : int16)
  Class: Eq_36
  DataType: int16
  OrigDataType: int16
T_37: (in (real64) ds->w020A : real64)
  Class: Eq_34
  DataType: real64
  OrigDataType: real64
T_38: (in cx_148 : int16)
  Class: Eq_38
  DataType: int16
  OrigDataType: word16
T_39: (in 0x0208 : word16)
  Class: Eq_39
  DataType: (memptr (ptr Eq_31) int16)
  OrigDataType: (memptr T_31 (struct (0 T_40 t0000)))
T_40: (in Mem77[ds:0x0208:word16] : word16)
  Class: Eq_38
  DataType: int16
  OrigDataType: word16
T_41: (in rLoc3_78 : real64)
  Class: Eq_41
  DataType: real64
  OrigDataType: real64
T_42: (in 0x0208 : word16)
  Class: Eq_42
  DataType: (memptr (ptr Eq_31) int16)
  OrigDataType: (memptr T_31 (struct (0 T_43 t0000)))
T_43: (in Mem77[ds:0x0208:int16] : int16)
  Class: Eq_38
  DataType: int16
  OrigDataType: int16
T_44: (in (real64) ds->w0208 : real64)
  Class: Eq_41
  DataType: real64
  OrigDataType: real64
T_45: (in rLoc4_79 : Eq_45)
  Class: Eq_45
  DataType: Eq_45
  OrigDataType: real64
T_46: (in 0x01F8 : word16)
  Class: Eq_46
  DataType: (memptr (ptr Eq_31) Eq_45)
  OrigDataType: (memptr T_31 (struct (0 T_47 t0000)))
T_47: (in Mem77[ds:0x01F8:real32] : real32)
  Class: Eq_45
  DataType: Eq_45
  OrigDataType: real32
T_48: (in rLoc5_81 : real64)
  Class: Eq_48
  DataType: real64
  OrigDataType: real64
T_49: (in sin : ptr32)
  Class: Eq_49
  DataType: (ptr Eq_49)
  OrigDataType: (ptr (fn T_50 (T_34)))
T_50: (in sin(rLoc2_76) : real64)
  Class: Eq_48
  DataType: real64
  OrigDataType: real64
T_51: (in rLoc6_83 : real64)
  Class: Eq_51
  DataType: real64
  OrigDataType: real64
T_52: (in cos : ptr32)
  Class: Eq_52
  DataType: (ptr Eq_52)
  OrigDataType: (ptr (fn T_53 (T_34)))
T_53: (in cos(rLoc2_76) : real64)
  Class: Eq_51
  DataType: real64
  OrigDataType: real64
T_54: (in rLoc3_96 : real64)
  Class: Eq_54
  DataType: real64
  OrigDataType: real64
T_55: (in rLoc3_78 * rLoc5_81 : real64)
  Class: Eq_54
  DataType: real64
  OrigDataType: real64
T_56: (in rLoc7_88 : real64)
  Class: Eq_56
  DataType: real64
  OrigDataType: real64
T_57: (in rLoc4_79 * rLoc6_83 : real64)
  Class: Eq_57
  DataType: real64
  OrigDataType: real64
T_58: (in rLoc5_81 * rLoc5_81 : real64)
  Class: Eq_58
  DataType: real64
  OrigDataType: real64
T_59: (in rLoc4_79 * rLoc6_83 - rLoc5_81 * rLoc5_81 : real64)
  Class: Eq_56
  DataType: real64
  OrigDataType: real64
T_60: (in rLoc4_100 : real64)
  Class: Eq_60
  DataType: real64
  OrigDataType: real64
T_61: (in rLoc4_79 * rLoc6_83 : real64)
  Class: Eq_61
  DataType: real64
  OrigDataType: real64
T_62: (in rLoc4_79 * rLoc6_83 + rLoc3_96 : real64)
  Class: Eq_60
  DataType: real64
  OrigDataType: real64
T_63: (in rLoc4_112 : Eq_63)
  Class: Eq_63
  DataType: Eq_63
  OrigDataType: (union (real16 u0) (real64 u1))
T_64: (in sqrt : ptr32)
  Class: Eq_64
  DataType: (ptr Eq_64)
  OrigDataType: (ptr (fn T_70 (T_69)))
T_65: (in rLoc3_96 * rLoc3_96 : real64)
  Class: Eq_65
  DataType: real64
  OrigDataType: real64
T_66: (in rLoc7_88 * rLoc7_88 : real64)
  Class: Eq_66
  DataType: real64
  OrigDataType: real64
T_67: (in rLoc3_96 * rLoc3_96 + rLoc7_88 * rLoc7_88 : real64)
  Class: Eq_67
  DataType: real64
  OrigDataType: real64
T_68: (in rLoc4_100 * rLoc4_100 : real64)
  Class: Eq_68
  DataType: real64
  OrigDataType: real64
T_69: (in rLoc3_96 * rLoc3_96 + rLoc7_88 * rLoc7_88 + rLoc4_100 * rLoc4_100 : real64)
  Class: Eq_69
  DataType: real64
  OrigDataType: real64
T_70: (in sqrt(rLoc3_96 * rLoc3_96 + rLoc7_88 * rLoc7_88 + rLoc4_100 * rLoc4_100) : real64)
  Class: Eq_70
  DataType: real64
  OrigDataType: real64
T_71: (in rLoc2_76 / sqrt((rLoc3_96 * rLoc3_96 + rLoc7_88 * rLoc7_88) + rLoc4_100 * rLoc4_100) : real64)
  Class: Eq_71
  DataType: real64
  OrigDataType: real64
T_72: (in rLoc7_88 / (rLoc2_76 / sqrt((rLoc3_96 * rLoc3_96 + rLoc7_88 * rLoc7_88) + rLoc4_100 * rLoc4_100)) : real64)
  Class: Eq_72
  DataType: real64
  OrigDataType: real64
T_73: (in rLoc4_100 / (rLoc7_88 / (rLoc2_76 / sqrt((rLoc3_96 * rLoc3_96 + rLoc7_88 * rLoc7_88) + rLoc4_100 * rLoc4_100))) : real64)
  Class: Eq_63
  DataType: Eq_63
  OrigDataType: real64
T_74: (in rLoc6_118 : Eq_74)
  Class: Eq_74
  DataType: Eq_74
  OrigDataType: real64
T_75: (in 0x01EC : word16)
  Class: Eq_75
  DataType: (memptr (ptr Eq_31) Eq_74)
  OrigDataType: (memptr T_31 (struct (0 T_76 t0000)))
T_76: (in Mem77[ds:0x01EC:real32] : real32)
  Class: Eq_74
  DataType: Eq_74
  OrigDataType: real32
T_77: (in rLoc5_122 : real64)
  Class: Eq_77
  DataType: real64
  OrigDataType: real64
T_78: (in sqrt : ptr32)
  Class: Eq_78
  DataType: (ptr Eq_78)
  OrigDataType: (ptr (fn T_80 (T_79)))
T_79: (in rLoc6_118 * rLoc6_118 : real64)
  Class: Eq_79
  DataType: real64
  OrigDataType: real64
T_80: (in sqrt(rLoc6_118 * rLoc6_118) : real64)
  Class: Eq_80
  DataType: real64
  OrigDataType: real64
T_81: (in rLoc7_88 * rLoc7_88 : real64)
  Class: Eq_81
  DataType: real64
  OrigDataType: real64
T_82: (in rLoc4_112 * rLoc4_112 : real64)
  Class: Eq_82
  DataType: real64
  OrigDataType: real64
T_83: (in rLoc7_88 * rLoc7_88 + rLoc4_112 * rLoc4_112 : real64)
  Class: Eq_83
  DataType: real64
  OrigDataType: real64
T_84: (in sqrt(rLoc6_118 * rLoc6_118) / (rLoc7_88 * rLoc7_88 + rLoc4_112 * rLoc4_112) : real64)
  Class: Eq_77
  DataType: real64
  OrigDataType: real64
T_85: (in 0x01FC : word16)
  Class: Eq_85
  DataType: (memptr (ptr Eq_31) Eq_86)
  OrigDataType: (memptr T_31 (struct (0 T_86 t0000)))
T_86: (in Mem77[ds:0x01FC:real32] : real32)
  Class: Eq_86
  DataType: Eq_86
  OrigDataType: (union (real32 u0) (real64 u1))
T_87: (in ds->t01FC / rLoc5_122 : real64)
  Class: Eq_87
  DataType: real64
  OrigDataType: real64
T_88: (in (int16) (ds->t01FC / rLoc5_122) : int16)
  Class: Eq_88
  DataType: int16
  OrigDataType: int16
T_89: (in 0x0200 : word16)
  Class: Eq_89
  DataType: (memptr (ptr Eq_31) int16)
  OrigDataType: (memptr T_31 (struct (0 T_90 t0000)))
T_90: (in Mem125[ds:0x0200:int16] : int16)
  Class: Eq_88
  DataType: int16
  OrigDataType: int16
T_91: (in 0x0202 : word16)
  Class: Eq_91
  DataType: (memptr (ptr Eq_31) word16)
  OrigDataType: (memptr T_31 (struct (0 T_92 t0000)))
T_92: (in Mem125[ds:0x0202:word16] : word16)
  Class: Eq_92
  DataType: word16
  OrigDataType: word16
T_93: (in (real64) ds->w0202 : real64)
  Class: Eq_93
  DataType: Eq_93
  OrigDataType: (union (real16 u0) (real64 u1))
T_94: (in rLoc4_112 + (real64) ds->w0202 : word16)
  Class: Eq_94
  DataType: real16
  OrigDataType: real16
T_95: (in (int16) (rLoc4_112 + (real64) ds->w0202) : int16)
  Class: Eq_95
  DataType: Eq_95
  OrigDataType: int16
T_96: (in 0x0204 : word16)
  Class: Eq_96
  DataType: (memptr (ptr Eq_31) Eq_95)
  OrigDataType: (memptr T_31 (struct (0 T_97 t0000)))
T_97: (in Mem130[ds:0x0204:int16] : int16)
  Class: Eq_95
  DataType: Eq_95
  OrigDataType: int16
T_98: (in atan : ptr32)
  Class: Eq_98
  DataType: (ptr Eq_98)
  OrigDataType: (ptr (fn T_102 (T_101, T_56)))
T_99: (in rLoc5_122 * rLoc4_112 : real64)
  Class: Eq_99
  DataType: real64
  OrigDataType: real64
T_100: (in rLoc5_122 * rLoc4_112 * rLoc7_88 : real64)
  Class: Eq_100
  DataType: real64
  OrigDataType: real64
T_101: (in rLoc2_76 * ((rLoc5_122 * rLoc4_112) * rLoc7_88) : real64)
  Class: Eq_101
  DataType: real64
  OrigDataType: real64
T_102: (in atan(rLoc2_76 * ((rLoc5_122 * rLoc4_112) * rLoc7_88), rLoc7_88) : real64)
  Class: Eq_102
  DataType: Eq_102
  OrigDataType: (union (real16 u0) (real64 u1))
T_103: (in 0x01F0 : word16)
  Class: Eq_103
  DataType: (memptr (ptr Eq_31) Eq_104)
  OrigDataType: (memptr T_31 (struct (0 T_104 t0000)))
T_104: (in Mem130[ds:0x01F0:real32] : real32)
  Class: Eq_104
  DataType: Eq_104
  OrigDataType: (union (real16 u0) (real32 u1))
T_105: (in atan(rLoc2_76 * ((rLoc5_122 * rLoc4_112) * rLoc7_88), rLoc7_88) * ds->t01F0 : word16)
  Class: Eq_105
  DataType: real16
  OrigDataType: real16
T_106: (in (int16) (atan(rLoc2_76 * ((rLoc5_122 * rLoc4_112) * rLoc7_88), rLoc7_88) * ds->t01F0) : int16)
  Class: Eq_106
  DataType: Eq_106
  OrigDataType: int16
T_107: (in 0x0206 : word16)
  Class: Eq_107
  DataType: (memptr (ptr Eq_31) Eq_106)
  OrigDataType: (memptr T_31 (struct (0 T_108 t0000)))
T_108: (in Mem133[ds:0x0206:int16] : int16)
  Class: Eq_106
  DataType: Eq_106
  OrigDataType: int16
T_109: (in ax_138 : Eq_109)
  Class: Eq_109
  DataType: Eq_109
  OrigDataType: uint16
T_110: (in 0x0206 : word16)
  Class: Eq_110
  DataType: (memptr (ptr Eq_31) Eq_106)
  OrigDataType: (memptr T_31 (struct (0 T_111 t0000)))
T_111: (in Mem133[ds:0x0206:byte] : byte)
  Class: Eq_106
  DataType: Eq_106
  OrigDataType: byte
T_112: (in bl_54 : byte)
  Class: Eq_112
  DataType: byte
  OrigDataType: byte
T_113: (in ds->t0206 - bl_54 : byte)
  Class: Eq_113
  DataType: byte
  OrigDataType: byte
T_114: (in 0x0204 : word16)
  Class: Eq_114
  DataType: (memptr (ptr Eq_31) Eq_95)
  OrigDataType: (memptr T_31 (struct (0 T_115 t0000)))
T_115: (in Mem133[ds:0x0204:byte] : byte)
  Class: Eq_95
  DataType: Eq_95
  OrigDataType: byte
T_116: (in ds->t0206 - bl_54 ^ ds->t0204 : byte)
  Class: Eq_116
  DataType: byte
  OrigDataType: byte
T_117: (in DPB(ax_147, ds->t0206 - bl_54 ^ ds->t0204, 0, 8) : word16)
  Class: Eq_117
  DataType: int16
  OrigDataType: int16
T_118: (in 0x0200 : word16)
  Class: Eq_118
  DataType: (memptr (ptr Eq_31) int16)
  OrigDataType: (memptr T_31 (struct (0 T_119 t0000)))
T_119: (in Mem133[ds:0x0200:word16] : word16)
  Class: Eq_88
  DataType: int16
  OrigDataType: int16
T_120: (in DPB(ax_147, ds->t0206 - bl_54 ^ ds->t0204, 0, 8) *s ds->w0200 : int16)
  Class: Eq_109
  DataType: Eq_109
  OrigDataType: int16
T_121: (in ax_142 : word16)
  Class: Eq_121
  DataType: word16
  OrigDataType: word16
T_122: (in 0x000A : word16)
  Class: Eq_122
  DataType: uint16
  OrigDataType: uint16
T_123: (in ax_138 >>u 0x000A : word16)
  Class: Eq_123
  DataType: uint16
  OrigDataType: uint16
T_124: (in ax_138 >>u 0x000A : word16)
  Class: Eq_124
  DataType: uint16
  OrigDataType: uint16
T_125: (in (byte) (ax_138 >>u 0x000A) : byte)
  Class: Eq_125
  DataType: byte
  OrigDataType: byte
T_126: (in DPB(ax_138 >>u 0x000A, (byte) (ax_138 >>u 0x000A), 8, 8) : word16)
  Class: Eq_121
  DataType: word16
  OrigDataType: word16
T_127: (in 0xA000 : selector)
  Class: Eq_127
  DataType: (ptr Eq_127)
  OrigDataType: (ptr (segment))
T_128: (in di_145 : (memptr (ptr Eq_127) Eq_128))
  Class: Eq_128
  DataType: (memptr (ptr Eq_127) Eq_128)
  OrigDataType: (memptr T_127 (struct 0140 (0 T_134 t0000) (140 T_131 t0140)))
T_129: (in 0x0140 : word16)
  Class: Eq_129
  DataType: word16
  OrigDataType: word16
T_130: (in di_145 + 0x0140 : word16)
  Class: Eq_130
  DataType: word16
  OrigDataType: word16
T_131: (in Mem143[0xA000:di_145 + 0x0140:word16] : word16)
  Class: Eq_121
  DataType: word16
  OrigDataType: word16
T_132: (in 0x0000 : word16)
  Class: Eq_132
  DataType: word16
  OrigDataType: word16
T_133: (in di_145 + 0x0000 : word16)
  Class: Eq_133
  DataType: word16
  OrigDataType: word16
T_134: (in Mem144[0xA000:di_145 + 0x0000:word16] : word16)
  Class: Eq_121
  DataType: word16
  OrigDataType: word16
T_135: (in 0x0002 : word16)
  Class: Eq_135
  DataType: word16
  OrigDataType: word16
T_136: (in di_145 + 0x0002 : word16)
  Class: Eq_128
  DataType: (memptr (ptr Eq_127) Eq_128)
  OrigDataType: word16
T_137: (in 0x00 : byte)
  Class: Eq_137
  DataType: byte
  OrigDataType: byte
T_138: (in DPB(ax_142, 0x00, 8, 8) : word16)
  Class: Eq_12
  DataType: word16
  OrigDataType: word16
T_139: (in 0x0001 : word16)
  Class: Eq_139
  DataType: word16
  OrigDataType: word16
T_140: (in cx_148 - 0x0001 : word16)
  Class: Eq_38
  DataType: int16
  OrigDataType: word16
T_141: (in 0xFFB0 : word16)
  Class: Eq_38
  DataType: int16
  OrigDataType: word16
T_142: (in cx_148 != 0xFFB0 : bool)
  Class: Eq_142
  DataType: bool
  OrigDataType: bool
T_143: (in 0x0140 : word16)
  Class: Eq_143
  DataType: word16
  OrigDataType: word16
T_144: (in di_145 + 0x0140 : word16)
  Class: Eq_128
  DataType: (memptr (ptr Eq_127) Eq_128)
  OrigDataType: word16
T_145: (in dx_152 : int16)
  Class: Eq_36
  DataType: int16
  OrigDataType: word16
T_146: (in 0x0001 : word16)
  Class: Eq_146
  DataType: word16
  OrigDataType: word16
T_147: (in dx_152 - 0x0001 : word16)
  Class: Eq_36
  DataType: int16
  OrigDataType: word16
T_148: (in 0xFFCE : word16)
  Class: Eq_36
  DataType: int16
  OrigDataType: word16
T_149: (in dx_152 != 0xFFCE : bool)
  Class: Eq_149
  DataType: bool
  OrigDataType: bool
T_150: (in 0x020A : word16)
  Class: Eq_150
  DataType: (memptr (ptr Eq_31) int16)
  OrigDataType: (memptr T_31 (struct (0 T_151 t0000)))
T_151: (in Mem72[ds:0x020A:word16] : word16)
  Class: Eq_36
  DataType: int16
  OrigDataType: word16
T_152: (in 0x0050 : word16)
  Class: Eq_38
  DataType: int16
  OrigDataType: word16
T_153: (in 0x0202 : word16)
  Class: Eq_153
  DataType: (memptr (ptr Eq_31) word16)
  OrigDataType: (memptr T_31 (struct (0 T_92 t0000)))
T_154: (in Mem144[ds:0x0202:word16] : word16)
  Class: Eq_92
  DataType: word16
  OrigDataType: word16
T_155: (in 0x0005 : word16)
  Class: Eq_155
  DataType: word16
  OrigDataType: word16
T_156: (in ds->w0202 + 0x0005 : word16)
  Class: Eq_92
  DataType: word16
  OrigDataType: word16
T_157: (in Mem156[ds:0x0202:word16] : word16)
  Class: Eq_92
  DataType: word16
  OrigDataType: word16
T_158: (in bx_52 : int16)
  Class: Eq_158
  DataType: int16
  OrigDataType: int16
T_159: (in 0xFF9D : word16)
  Class: Eq_158
  DataType: int16
  OrigDataType: int16
T_160: (in bx_52 < 0xFF9D : bool)
  Class: Eq_160
  DataType: bool
  OrigDataType: bool
T_161: (in al_160 : byte)
  Class: Eq_161
  DataType: byte
  OrigDataType: byte
T_162: (in __inb : ptr32)
  Class: Eq_162
  DataType: (ptr Eq_162)
  OrigDataType: (ptr (fn T_164 (T_163)))
T_163: (in 0x60 : byte)
  Class: Eq_163
  DataType: byte
  OrigDataType: byte
T_164: (in __inb(0x60) : byte)
  Class: Eq_161
  DataType: byte
  OrigDataType: byte
T_165: (in DPB(ax_147, al_160, 0, 8) : word16)
  Class: Eq_12
  DataType: word16
  OrigDataType: word16
T_166: (in 0x01 : byte)
  Class: Eq_161
  DataType: byte
  OrigDataType: byte
T_167: (in al_160 != 0x01 : bool)
  Class: Eq_167
  DataType: bool
  OrigDataType: bool
T_168: (in 0x01F4 : word16)
  Class: Eq_168
  DataType: (memptr (ptr Eq_31) Eq_30)
  OrigDataType: (memptr T_31 (struct (0 T_169 t0000)))
T_169: (in Mem156[ds:0x01F4:real32] : real32)
  Class: Eq_30
  DataType: Eq_30
  OrigDataType: (union (real16 u0) (real32 u1))
T_170: (in rLoc1_159 + ds->t01F4 : word16)
  Class: Eq_30
  DataType: Eq_30
  OrigDataType: real16
T_171: (in bx : word16)
  Class: Eq_171
  DataType: word16
  OrigDataType: word16
T_172: (in 0x0001 : word16)
  Class: Eq_172
  DataType: word16
  OrigDataType: word16
T_173: (in bx + 0x0001 : word16)
  Class: Eq_158
  DataType: int16
  OrigDataType: word16
T_174: (in 0x0000 : word16)
  Class: Eq_128
  DataType: (memptr (ptr Eq_127) Eq_128)
  OrigDataType: word16
T_175: (in 0x0001 : word16)
  Class: Eq_175
  DataType: word16
  OrigDataType: word16
T_176: (in bx_52 + 0x0001 : word16)
  Class: Eq_171
  DataType: word16
  OrigDataType: word16
T_177: (in bx_52 + 0x0001 : word16)
  Class: Eq_177
  DataType: word16
  OrigDataType: word16
T_178: (in (byte) (bx_52 + 0x0001) : byte)
  Class: Eq_112
  DataType: byte
  OrigDataType: byte
T_179: (in 0x0032 : word16)
  Class: Eq_36
  DataType: int16
  OrigDataType: word16
*/
typedef Eq_127 Eq_1struct Globals {
	Eq_127 * ptrFFFA0000;	// FFFA0000
} Eq_1;

typedef void (Eq_3)(byte);

typedef void (Eq_8)(word16, byte);

typedef void (Eq_16)(word16, byte);

typedef void (Eq_19)(word16, byte);

typedef void (Eq_22)(word16, byte);

typedef union Eq_30 {
	real16 u0;
	real32 u1;
	real64 u2;
} Eq_30;

typedef Eq_74 Eq_31Eq_104 Eq_31Eq_30 Eq_31Eq_45 Eq_31Eq_86 Eq_31Eq_95 Eq_31Eq_106 Eq_31struct Eq_31 {
	Eq_74 t01EC;	// 1EC
	Eq_104 t01F0;	// 1F0
	Eq_30 t01F4;	// 1F4
	Eq_45 t01F8;	// 1F8
	Eq_86 t01FC;	// 1FC
	int16 w0200;	// 200
	word16 w0202;	// 202
	Eq_95 t0204;	// 204
	Eq_106 t0206;	// 206
	int16 w0208;	// 208
	int16 w020A;	// 20A
} Eq_31;

typedef union Eq_45 {
	real32 u0;
	real64 u1;
} Eq_45;

typedef real64 (Eq_49)(real64);

typedef real64 (Eq_52)(real64);

typedef union Eq_63 {
	real16 u0;
	real64 u1;
} Eq_63;

typedef real64 (Eq_64)(real64);

typedef union Eq_74 {
	real32 u0;
	real64 u1;
} Eq_74;

typedef real64 (Eq_78)(real64);

typedef union Eq_86 {
	real32 u0;
	real64 u1;
} Eq_86;

typedef union Eq_93 {
	real16 u0;
	real64 u1;
} Eq_93;

typedef union Eq_95 {
	int16 u0;
	byte u1;
} Eq_95;

typedef Eq_102 (Eq_98)(real64, real64);

typedef union Eq_102 {
	real16 u0;
	real64 u1;
} Eq_102;

typedef union Eq_104 {
	real16 u0;
	real32 u1;
} Eq_104;

typedef union Eq_106 {
	int16 u0;
	byte u1;
} Eq_106;

typedef union Eq_109 {
	int16 u0;
	uint16 u1;
} Eq_109;

typedef Eq_128 Eq_127struct Eq_127 {
	Eq_128 t0000;	// 0
} Eq_127;

typedef struct Eq_128 {	// size: 320 140
	word16 w0000;	// 0
	word16 w0140;	// 140
} Eq_128;

typedef byte (Eq_162)(byte);

