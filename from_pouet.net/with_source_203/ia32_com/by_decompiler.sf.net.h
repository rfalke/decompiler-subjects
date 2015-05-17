// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_203/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_145) ptrFFFA0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_7: (union "Eq_7" (int16 u0) (real16 u1) (real32 u2) (real64 u3))
	T_7 (in 0x0064 : word16)
	T_12 (in Mem53[ss:bp + 0x0000:word16] : word16)
	T_15 (in Mem53[ss:bp + 0x0000:word16] : word16)
	T_17 (in Mem53[ss:bp + 0x0000:word16] - dx_106 : word16)
	T_20 (in Mem55[ss:bp + 0x0000:word16] : word16)
	T_24 (in Mem55[ss:bp + 0x0000:int16] : int16)
	T_26 (in 0x00A0 : word16)
	T_29 (in Mem57[ss:bp + 0x0000:word16] : word16)
	T_32 (in Mem57[ss:bp + 0x0000:word16] : word16)
	T_34 (in Mem57[ss:bp + 0x0000:word16] - cx_103 : word16)
	T_37 (in Mem59[ss:bp + 0x0000:word16] : word16)
	T_41 (in Mem59[ss:bp + 0x0000:int16] : int16)
	T_43 (in atan(rLoc1_56, (real64) Mem59[ss:bp + 0x0000:int16]) : real64)
	T_46 (in Mem62[ss:bp + 0x0000:real32] : real32)
	T_47 (in rLoc1_63 : real64)
	T_50 (in Mem62[ss:bp + 0x0000:real32] : real32)
	T_55 (in Mem62[ss:bp + 0x0000:real32] : real32)
	T_68 (in 0x0001 : word16)
	T_71 (in Mem69[ss:bp + 0x0000:word16] : word16)
	T_74 (in Mem69[ss:bp + 0x0000:word16] : word16)
	T_82 (in (int16) (rLoc1_63 * ds->t01EA) : int16)
	T_85 (in Mem73[ss:bp + 0x0000:int16] : int16)
	T_86 (in bx_74 : word16)
	T_89 (in Mem73[ss:bp + 0x0000:word16] : word16)
	T_91 (in 0x00A0 - cx_103 : word16)
	T_94 (in Mem77[ss:bp + 0x0000:word16] : word16)
	T_98 (in Mem77[ss:bp + 0x0000:int16] : int16)
	T_101 (in 0x0064 - dx_106 : word16)
	T_104 (in Mem82[ss:bp + 0x0000:word16] : word16)
	T_108 (in Mem82[ss:bp + 0x0000:int16] : int16)
	T_119 (in 0x0800 : word16)
	T_122 (in Mem88[ss:bp + 0x0000:word16] : word16)
	T_125 (in Mem88[ss:bp + 0x0000:int16] : int16)
	T_128 (in (int16) ((real64) Mem88[ss:bp + 0x0000:int16] / rLoc2_87) : int16)
	T_131 (in Mem91[ss:bp + 0x0000:int16] : int16)
	T_134 (in Mem91[ss:bp + 0x0000:word16] : word16)
	T_185 (in 0x0028 : word16)
	T_188 (in Mem27[ss:bp + 0x0000:word16] : word16)
	T_192 (in Mem27[ss:bp + 0x0000:word16] : word16)
Eq_8: (segment "Eq_8")
	T_8 (in ss : selector)
Eq_38: (fn Eq_7 (real64, real64))
	T_38 (in atan : ptr32)
Eq_51: (union "Eq_51" (real16 u0) (real64 u1))
	T_51 (in rLoc2_68 : real64)
	T_67 (in sin(Mem62[ss:bp + 0x0000:real32] * (real64) Mem62[ds:0x01D8:word16] + Mem62[ds:0x01DA:real32]) * Mem62[ds:0x01E2:real32] : word16)
Eq_52: (fn Eq_64 (real16))
	T_52 (in sin : ptr32)
Eq_56: (segment "Eq_56" (100 int16 w0100) (103 Eq_76 t0103) (1D8 word16 w01D8) (1DA Eq_62 t01DA) (1DE Eq_172 t01DE) (1E2 Eq_66 t01E2) (1E6 Eq_178 t01E6) (1EA Eq_80 t01EA))
	T_56 (in ds : (ptr Eq_56))
Eq_59: (union "Eq_59" (real16 u0) (real64 u1))
	T_59 (in (real64) Mem62[ds:0x01D8:word16] : real64)
Eq_62: (union "Eq_62" (real16 u0) (real32 u1))
	T_62 (in Mem62[ds:0x01DA:real32] : real32)
	T_174 (in Mem21[ds:0x01DA:real32] : real32)
	T_175 (in ds->t01DE + ds->t01DA : word16)
	T_177 (in Mem24[ds:0x01DA:real32] : real32)
Eq_64: (union "Eq_64" (real16 u0) (real64 u1))
	T_64 (in sin(Mem62[ss:bp + 0x0000:real32] * (real64) Mem62[ds:0x01D8:word16] + Mem62[ds:0x01DA:real32]) : real64)
Eq_66: (union "Eq_66" (real16 u0) (real32 u1) (real64 u2))
	T_66 (in Mem62[ds:0x01E2:real32] : real32)
	T_196 (in sin(rLoc2_26 / (real64) Mem27[ss:bp + 0x0000:word16]) * rLoc1_25 : real64)
	T_198 (in Mem33[ds:0x01E2:real32] : real32)
Eq_75: (union "Eq_75" (real16 u0) (real64 u1))
	T_75 (in (real64) Mem69[ss:bp + 0x0000:word16] : real64)
Eq_76: (union "Eq_76" (real16 u0) (real32 u1))
	T_76 (in rLoc2_68 + (real64) Mem69[ss:bp + 0x0000:word16] : word16)
	T_78 (in Mem71[ds:0x0103:real32] : real32)
	T_117 (in Mem82[ds:0x0103:real32] : real32)
Eq_80: (union "Eq_80" (real16 u0) (real32 u1))
	T_80 (in Mem71[ds:0x01EA:real32] : real32)
Eq_110: (union "Eq_110" (real16 u0) (real64 u1))
	T_110 (in rLoc2_87 : Eq_110)
	T_118 (in sqrt(rLoc2_83 * rLoc2_83 + rLoc1_78 * rLoc1_78) * ds->t0103 : word16)
Eq_111: (fn Eq_115 (real64))
	T_111 (in sqrt : ptr32)
Eq_115: (union "Eq_115" (real16 u0) (real64 u1))
	T_115 (in sqrt(rLoc2_83 * rLoc2_83 + rLoc1_78 * rLoc1_78) : real64)
Eq_145: (segment "Eq_145" (0 byte b0000))
	T_145 (in 0xA000 : selector)
Eq_161: (fn byte (byte))
	T_161 (in __inb : ptr32)
Eq_172: (union "Eq_172" (real16 u0) (real32 u1))
	T_172 (in Mem21[ds:0x01DE:real32] : real32)
Eq_178: (union "Eq_178" (real32 u0) (real64 u1))
	T_178 (in rLoc1_25 : Eq_178)
	T_180 (in Mem24[ds:0x01E6:real32] : real32)
Eq_181: (union "Eq_181" (real16 u0) (real64 u1))
	T_181 (in rLoc2_26 : Eq_181)
	T_184 (in (real64) ds->w0100 : real64)
Eq_189: (fn real64 (real16))
	T_189 (in sin : ptr32)
Eq_193: (union "Eq_193" (real16 u0) (real64 u1))
	T_193 (in (real64) Mem27[ss:bp + 0x0000:word16] : real64)
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
T_7: (in 0x0064 : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: word16
T_8: (in ss : selector)
  Class: Eq_8
  DataType: (ptr Eq_8)
  OrigDataType: (ptr (segment))
T_9: (in bp : (memptr (ptr Eq_8) Eq_7))
  Class: Eq_9
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_8 (struct (0 T_7 t0000)))
T_10: (in 0x0000 : word16)
  Class: Eq_10
  DataType: word16
  OrigDataType: word16
T_11: (in bp + 0x0000 : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_12: (in Mem53[ss:bp + 0x0000:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_13: (in 0x0000 : word16)
  Class: Eq_13
  DataType: word16
  OrigDataType: word16
T_14: (in bp + 0x0000 : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_15: (in Mem53[ss:bp + 0x0000:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_16: (in dx_106 : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_17: (in Mem53[ss:bp + 0x0000:word16] - dx_106 : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_18: (in 0x0000 : word16)
  Class: Eq_18
  DataType: word16
  OrigDataType: word16
T_19: (in bp + 0x0000 : word16)
  Class: Eq_19
  DataType: word16
  OrigDataType: word16
T_20: (in Mem55[ss:bp + 0x0000:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_21: (in rLoc1_56 : real64)
  Class: Eq_21
  DataType: real64
  OrigDataType: real64
T_22: (in 0x0000 : word16)
  Class: Eq_22
  DataType: word16
  OrigDataType: word16
T_23: (in bp + 0x0000 : word16)
  Class: Eq_23
  DataType: word16
  OrigDataType: word16
T_24: (in Mem55[ss:bp + 0x0000:int16] : int16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: int16
T_25: (in (real64) Mem55[ss:bp + 0x0000:int16] : real64)
  Class: Eq_21
  DataType: real64
  OrigDataType: real64
T_26: (in 0x00A0 : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: word16
T_27: (in 0x0000 : word16)
  Class: Eq_27
  DataType: word16
  OrigDataType: word16
T_28: (in bp + 0x0000 : word16)
  Class: Eq_28
  DataType: word16
  OrigDataType: word16
T_29: (in Mem57[ss:bp + 0x0000:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_30: (in 0x0000 : word16)
  Class: Eq_30
  DataType: word16
  OrigDataType: word16
T_31: (in bp + 0x0000 : word16)
  Class: Eq_31
  DataType: word16
  OrigDataType: word16
T_32: (in Mem57[ss:bp + 0x0000:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_33: (in cx_103 : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_34: (in Mem57[ss:bp + 0x0000:word16] - cx_103 : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_35: (in 0x0000 : word16)
  Class: Eq_35
  DataType: word16
  OrigDataType: word16
T_36: (in bp + 0x0000 : word16)
  Class: Eq_36
  DataType: word16
  OrigDataType: word16
T_37: (in Mem59[ss:bp + 0x0000:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_38: (in atan : ptr32)
  Class: Eq_38
  DataType: (ptr Eq_38)
  OrigDataType: (ptr (fn T_43 (T_21, T_42)))
T_39: (in 0x0000 : word16)
  Class: Eq_39
  DataType: word16
  OrigDataType: word16
T_40: (in bp + 0x0000 : word16)
  Class: Eq_40
  DataType: word16
  OrigDataType: word16
T_41: (in Mem59[ss:bp + 0x0000:int16] : int16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: int16
T_42: (in (real64) Mem59[ss:bp + 0x0000:int16] : real64)
  Class: Eq_42
  DataType: real64
  OrigDataType: real64
T_43: (in atan(rLoc1_56, (real64) Mem59[ss:bp + 0x0000:int16]) : real64)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: real64
T_44: (in 0x0000 : word16)
  Class: Eq_44
  DataType: word16
  OrigDataType: word16
T_45: (in bp + 0x0000 : word16)
  Class: Eq_45
  DataType: word16
  OrigDataType: word16
T_46: (in Mem62[ss:bp + 0x0000:real32] : real32)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: real32
T_47: (in rLoc1_63 : real64)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: (union (real16 u0) (real64 u1))
T_48: (in 0x0000 : word16)
  Class: Eq_48
  DataType: word16
  OrigDataType: word16
T_49: (in bp + 0x0000 : word16)
  Class: Eq_49
  DataType: word16
  OrigDataType: word16
T_50: (in Mem62[ss:bp + 0x0000:real32] : real32)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: real32
T_51: (in rLoc2_68 : real64)
  Class: Eq_51
  DataType: Eq_51
  OrigDataType: (union (real16 u0) (real64 u1))
T_52: (in sin : ptr32)
  Class: Eq_52
  DataType: (ptr Eq_52)
  OrigDataType: (ptr (fn T_64 (T_63)))
T_53: (in 0x0000 : word16)
  Class: Eq_53
  DataType: word16
  OrigDataType: word16
T_54: (in bp + 0x0000 : word16)
  Class: Eq_54
  DataType: word16
  OrigDataType: word16
T_55: (in Mem62[ss:bp + 0x0000:real32] : real32)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: (union (real16 u0) (real32 u1))
T_56: (in ds : (ptr Eq_56))
  Class: Eq_56
  DataType: (ptr Eq_56)
  OrigDataType: (ptr (segment (100 T_136 t0100) (103 T_76 t0103) (1D8 T_58 t01D8) (1DA T_62 t01DA) (1DE T_172 t01DE) (1E2 T_66 t01E2) (1E6 T_180 t01E6) (1EA T_80 t01EA)))
T_57: (in 0x01D8 : word16)
  Class: Eq_57
  DataType: (memptr (ptr Eq_56) word16)
  OrigDataType: (memptr T_56 (struct (0 T_58 t0000)))
T_58: (in Mem62[ds:0x01D8:word16] : word16)
  Class: Eq_58
  DataType: word16
  OrigDataType: word16
T_59: (in (real64) Mem62[ds:0x01D8:word16] : real64)
  Class: Eq_59
  DataType: Eq_59
  OrigDataType: (union (real16 u0) (real64 u1))
T_60: (in Mem62[ss:bp + 0x0000:real32] * (real64) Mem62[ds:0x01D8:word16] : word16)
  Class: Eq_60
  DataType: real16
  OrigDataType: real16
T_61: (in 0x01DA : word16)
  Class: Eq_61
  DataType: (memptr (ptr Eq_56) Eq_62)
  OrigDataType: (memptr T_56 (struct (0 T_62 t0000)))
T_62: (in Mem62[ds:0x01DA:real32] : real32)
  Class: Eq_62
  DataType: Eq_62
  OrigDataType: (union (real16 u0) (real32 u1))
T_63: (in Mem62[ss:bp + 0x0000:real32] * (real64) Mem62[ds:0x01D8:word16] + Mem62[ds:0x01DA:real32] : word16)
  Class: Eq_63
  DataType: real16
  OrigDataType: real16
T_64: (in sin(Mem62[ss:bp + 0x0000:real32] * (real64) Mem62[ds:0x01D8:word16] + Mem62[ds:0x01DA:real32]) : real64)
  Class: Eq_64
  DataType: Eq_64
  OrigDataType: (union (real16 u0) (real64 u1))
T_65: (in 0x01E2 : word16)
  Class: Eq_65
  DataType: (memptr (ptr Eq_56) Eq_66)
  OrigDataType: (memptr T_56 (struct (0 T_66 t0000)))
T_66: (in Mem62[ds:0x01E2:real32] : real32)
  Class: Eq_66
  DataType: Eq_66
  OrigDataType: (union (real16 u0) (real32 u1))
T_67: (in sin(Mem62[ss:bp + 0x0000:real32] * (real64) Mem62[ds:0x01D8:word16] + Mem62[ds:0x01DA:real32]) * Mem62[ds:0x01E2:real32] : word16)
  Class: Eq_51
  DataType: Eq_51
  OrigDataType: real16
T_68: (in 0x0001 : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: word16
T_69: (in 0x0000 : word16)
  Class: Eq_69
  DataType: word16
  OrigDataType: word16
T_70: (in bp + 0x0000 : word16)
  Class: Eq_70
  DataType: word16
  OrigDataType: word16
T_71: (in Mem69[ss:bp + 0x0000:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_72: (in 0x0000 : word16)
  Class: Eq_72
  DataType: word16
  OrigDataType: word16
T_73: (in bp + 0x0000 : word16)
  Class: Eq_73
  DataType: word16
  OrigDataType: word16
T_74: (in Mem69[ss:bp + 0x0000:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_75: (in (real64) Mem69[ss:bp + 0x0000:word16] : real64)
  Class: Eq_75
  DataType: Eq_75
  OrigDataType: (union (real16 u0) (real64 u1))
T_76: (in rLoc2_68 + (real64) Mem69[ss:bp + 0x0000:word16] : word16)
  Class: Eq_76
  DataType: Eq_76
  OrigDataType: real16
T_77: (in 0x0103 : word16)
  Class: Eq_77
  DataType: (memptr (ptr Eq_56) Eq_76)
  OrigDataType: (memptr T_56 (struct (0 T_78 t0000)))
T_78: (in Mem71[ds:0x0103:real32] : real32)
  Class: Eq_76
  DataType: Eq_76
  OrigDataType: real32
T_79: (in 0x01EA : word16)
  Class: Eq_79
  DataType: (memptr (ptr Eq_56) Eq_80)
  OrigDataType: (memptr T_56 (struct (0 T_80 t0000)))
T_80: (in Mem71[ds:0x01EA:real32] : real32)
  Class: Eq_80
  DataType: Eq_80
  OrigDataType: (union (real16 u0) (real32 u1))
T_81: (in rLoc1_63 * ds->t01EA : word16)
  Class: Eq_81
  DataType: real16
  OrigDataType: real16
T_82: (in (int16) (rLoc1_63 * ds->t01EA) : int16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: int16
T_83: (in 0x0000 : word16)
  Class: Eq_83
  DataType: word16
  OrigDataType: word16
T_84: (in bp + 0x0000 : word16)
  Class: Eq_84
  DataType: word16
  OrigDataType: word16
T_85: (in Mem73[ss:bp + 0x0000:int16] : int16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: int16
T_86: (in bx_74 : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_87: (in 0x0000 : word16)
  Class: Eq_87
  DataType: word16
  OrigDataType: word16
T_88: (in bp + 0x0000 : word16)
  Class: Eq_88
  DataType: word16
  OrigDataType: word16
T_89: (in Mem73[ss:bp + 0x0000:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_90: (in 0x00A0 : word16)
  Class: Eq_90
  DataType: word16
  OrigDataType: word16
T_91: (in 0x00A0 - cx_103 : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_92: (in 0x0000 : word16)
  Class: Eq_92
  DataType: word16
  OrigDataType: word16
T_93: (in bp + 0x0000 : word16)
  Class: Eq_93
  DataType: word16
  OrigDataType: word16
T_94: (in Mem77[ss:bp + 0x0000:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_95: (in rLoc1_78 : real64)
  Class: Eq_95
  DataType: real64
  OrigDataType: real64
T_96: (in 0x0000 : word16)
  Class: Eq_96
  DataType: word16
  OrigDataType: word16
T_97: (in bp + 0x0000 : word16)
  Class: Eq_97
  DataType: word16
  OrigDataType: word16
T_98: (in Mem77[ss:bp + 0x0000:int16] : int16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: int16
T_99: (in (real64) Mem77[ss:bp + 0x0000:int16] : real64)
  Class: Eq_95
  DataType: real64
  OrigDataType: real64
T_100: (in 0x0064 : word16)
  Class: Eq_100
  DataType: word16
  OrigDataType: word16
T_101: (in 0x0064 - dx_106 : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_102: (in 0x0000 : word16)
  Class: Eq_102
  DataType: word16
  OrigDataType: word16
T_103: (in bp + 0x0000 : word16)
  Class: Eq_103
  DataType: word16
  OrigDataType: word16
T_104: (in Mem82[ss:bp + 0x0000:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_105: (in rLoc2_83 : real64)
  Class: Eq_105
  DataType: real64
  OrigDataType: real64
T_106: (in 0x0000 : word16)
  Class: Eq_106
  DataType: word16
  OrigDataType: word16
T_107: (in bp + 0x0000 : word16)
  Class: Eq_107
  DataType: word16
  OrigDataType: word16
T_108: (in Mem82[ss:bp + 0x0000:int16] : int16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: int16
T_109: (in (real64) Mem82[ss:bp + 0x0000:int16] : real64)
  Class: Eq_105
  DataType: real64
  OrigDataType: real64
T_110: (in rLoc2_87 : Eq_110)
  Class: Eq_110
  DataType: Eq_110
  OrigDataType: real64
T_111: (in sqrt : ptr32)
  Class: Eq_111
  DataType: (ptr Eq_111)
  OrigDataType: (ptr (fn T_115 (T_114)))
T_112: (in rLoc2_83 * rLoc2_83 : real64)
  Class: Eq_112
  DataType: real64
  OrigDataType: real64
T_113: (in rLoc1_78 * rLoc1_78 : real64)
  Class: Eq_113
  DataType: real64
  OrigDataType: real64
T_114: (in rLoc2_83 * rLoc2_83 + rLoc1_78 * rLoc1_78 : real64)
  Class: Eq_114
  DataType: real64
  OrigDataType: real64
T_115: (in sqrt(rLoc2_83 * rLoc2_83 + rLoc1_78 * rLoc1_78) : real64)
  Class: Eq_115
  DataType: Eq_115
  OrigDataType: (union (real16 u0) (real64 u1))
T_116: (in 0x0103 : word16)
  Class: Eq_116
  DataType: (memptr (ptr Eq_56) Eq_76)
  OrigDataType: (memptr T_56 (struct (0 T_117 t0000)))
T_117: (in Mem82[ds:0x0103:real32] : real32)
  Class: Eq_76
  DataType: Eq_76
  OrigDataType: (union (real16 u0) (real32 u1))
T_118: (in sqrt(rLoc2_83 * rLoc2_83 + rLoc1_78 * rLoc1_78) * ds->t0103 : word16)
  Class: Eq_110
  DataType: Eq_110
  OrigDataType: real16
T_119: (in 0x0800 : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: word16
T_120: (in 0x0000 : word16)
  Class: Eq_120
  DataType: word16
  OrigDataType: word16
T_121: (in bp + 0x0000 : word16)
  Class: Eq_121
  DataType: word16
  OrigDataType: word16
T_122: (in Mem88[ss:bp + 0x0000:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_123: (in 0x0000 : word16)
  Class: Eq_123
  DataType: word16
  OrigDataType: word16
T_124: (in bp + 0x0000 : word16)
  Class: Eq_124
  DataType: word16
  OrigDataType: word16
T_125: (in Mem88[ss:bp + 0x0000:int16] : int16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: int16
T_126: (in (real64) Mem88[ss:bp + 0x0000:int16] : real64)
  Class: Eq_126
  DataType: real64
  OrigDataType: real64
T_127: (in (real64) Mem88[ss:bp + 0x0000:int16] / rLoc2_87 : real64)
  Class: Eq_127
  DataType: real64
  OrigDataType: real64
T_128: (in (int16) ((real64) Mem88[ss:bp + 0x0000:int16] / rLoc2_87) : int16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: int16
T_129: (in 0x0000 : word16)
  Class: Eq_129
  DataType: word16
  OrigDataType: word16
T_130: (in bp + 0x0000 : word16)
  Class: Eq_130
  DataType: word16
  OrigDataType: word16
T_131: (in Mem91[ss:bp + 0x0000:int16] : int16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: int16
T_132: (in 0x0000 : word16)
  Class: Eq_132
  DataType: word16
  OrigDataType: word16
T_133: (in bp + 0x0000 : word16)
  Class: Eq_133
  DataType: word16
  OrigDataType: word16
T_134: (in Mem91[ss:bp + 0x0000:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_135: (in 0x0100 : word16)
  Class: Eq_135
  DataType: (memptr (ptr Eq_56) int16)
  OrigDataType: (memptr T_56 (struct (0 T_136 t0000)))
T_136: (in Mem91[ds:0x0100:word16] : word16)
  Class: Eq_136
  DataType: int16
  OrigDataType: word16
T_137: (in Mem91[ss:bp + 0x0000:word16] + Mem91[ds:0x0100:word16] : word16)
  Class: Eq_137
  DataType: word16
  OrigDataType: word16
T_138: (in 0x0100 : word16)
  Class: Eq_138
  DataType: (memptr (ptr Eq_56) int16)
  OrigDataType: (memptr T_56 (struct (0 T_139 t0000)))
T_139: (in Mem91[ds:0x0100:word16] : word16)
  Class: Eq_136
  DataType: int16
  OrigDataType: word16
T_140: (in bx_74 + Mem91[ds:0x0100:word16] : word16)
  Class: Eq_140
  DataType: word16
  OrigDataType: word16
T_141: (in Mem91[ss:bp + 0x0000:word16] + Mem91[ds:0x0100:word16] ^ bx_74 + Mem91[ds:0x0100:word16] : word16)
  Class: Eq_141
  DataType: word16
  OrigDataType: word16
T_142: (in (byte) (Mem91[ss:bp + 0x0000:word16] + Mem91[ds:0x0100:word16] ^ bx_74 + Mem91[ds:0x0100:word16]) : byte)
  Class: Eq_142
  DataType: byte
  OrigDataType: byte
T_143: (in 0x1F : byte)
  Class: Eq_143
  DataType: byte
  OrigDataType: byte
T_144: (in (byte) (Mem91[ss:bp + 0x0000:word16] + Mem91[ds:0x0100:word16] ^ bx_74 + Mem91[ds:0x0100:word16]) & 0x1F : byte)
  Class: Eq_144
  DataType: byte
  OrigDataType: byte
T_145: (in 0xA000 : selector)
  Class: Eq_145
  DataType: (ptr Eq_145)
  OrigDataType: (ptr (segment))
T_146: (in di_102 : (memptr (ptr Eq_145) byte))
  Class: Eq_146
  DataType: (memptr (ptr Eq_145) byte)
  OrigDataType: (memptr T_145 (struct 0001 (0 T_149 t0000)))
T_147: (in 0x0000 : word16)
  Class: Eq_147
  DataType: word16
  OrigDataType: word16
T_148: (in di_102 + 0x0000 : word16)
  Class: Eq_148
  DataType: word16
  OrigDataType: word16
T_149: (in Mem101[0xA000:di_102 + 0x0000:byte] : byte)
  Class: Eq_144
  DataType: byte
  OrigDataType: byte
T_150: (in 0x0001 : word16)
  Class: Eq_150
  DataType: word16
  OrigDataType: word16
T_151: (in di_102 + 0x0001 : word16)
  Class: Eq_146
  DataType: (memptr (ptr Eq_145) byte)
  OrigDataType: word16
T_152: (in 0x0001 : word16)
  Class: Eq_152
  DataType: word16
  OrigDataType: word16
T_153: (in cx_103 - 0x0001 : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_154: (in 0x0000 : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_155: (in cx_103 != 0x0000 : bool)
  Class: Eq_155
  DataType: bool
  OrigDataType: bool
T_156: (in 0x0001 : word16)
  Class: Eq_156
  DataType: word16
  OrigDataType: word16
T_157: (in dx_106 - 0x0001 : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_158: (in 0x0000 : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_159: (in dx_106 != 0x0000 : bool)
  Class: Eq_159
  DataType: bool
  OrigDataType: bool
T_160: (in 0x0140 : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_161: (in __inb : ptr32)
  Class: Eq_161
  DataType: (ptr Eq_161)
  OrigDataType: (ptr (fn T_163 (T_162)))
T_162: (in 0x60 : byte)
  Class: Eq_162
  DataType: byte
  OrigDataType: byte
T_163: (in __inb(0x60) : byte)
  Class: Eq_163
  DataType: byte
  OrigDataType: byte
T_164: (in 0x01 : byte)
  Class: Eq_163
  DataType: byte
  OrigDataType: byte
T_165: (in __inb(0x60) != 0x01 : bool)
  Class: Eq_165
  DataType: bool
  OrigDataType: bool
T_166: (in 0x0100 : word16)
  Class: Eq_166
  DataType: (memptr (ptr Eq_56) int16)
  OrigDataType: (memptr T_56 (struct (0 T_136 t0000)))
T_167: (in Mem0[ds:0x0100:word16] : word16)
  Class: Eq_136
  DataType: int16
  OrigDataType: word16
T_168: (in 0x0001 : word16)
  Class: Eq_168
  DataType: word16
  OrigDataType: word16
T_169: (in ds->w0100 + 0x0001 : word16)
  Class: Eq_136
  DataType: int16
  OrigDataType: word16
T_170: (in Mem21[ds:0x0100:word16] : word16)
  Class: Eq_136
  DataType: int16
  OrigDataType: word16
T_171: (in 0x01DE : word16)
  Class: Eq_171
  DataType: (memptr (ptr Eq_56) Eq_172)
  OrigDataType: (memptr T_56 (struct (0 T_172 t0000)))
T_172: (in Mem21[ds:0x01DE:real32] : real32)
  Class: Eq_172
  DataType: Eq_172
  OrigDataType: (union (real16 u0) (real32 u1))
T_173: (in 0x01DA : word16)
  Class: Eq_173
  DataType: (memptr (ptr Eq_56) Eq_62)
  OrigDataType: (memptr T_56 (struct (0 T_174 t0000)))
T_174: (in Mem21[ds:0x01DA:real32] : real32)
  Class: Eq_62
  DataType: Eq_62
  OrigDataType: (union (real16 u0) (real32 u1))
T_175: (in ds->t01DE + ds->t01DA : word16)
  Class: Eq_62
  DataType: Eq_62
  OrigDataType: real16
T_176: (in 0x01DA : word16)
  Class: Eq_176
  DataType: (memptr (ptr Eq_56) Eq_62)
  OrigDataType: (memptr T_56 (struct (0 T_177 t0000)))
T_177: (in Mem24[ds:0x01DA:real32] : real32)
  Class: Eq_62
  DataType: Eq_62
  OrigDataType: real32
T_178: (in rLoc1_25 : Eq_178)
  Class: Eq_178
  DataType: Eq_178
  OrigDataType: real64
T_179: (in 0x01E6 : word16)
  Class: Eq_179
  DataType: (memptr (ptr Eq_56) Eq_178)
  OrigDataType: (memptr T_56 (struct (0 T_180 t0000)))
T_180: (in Mem24[ds:0x01E6:real32] : real32)
  Class: Eq_178
  DataType: Eq_178
  OrigDataType: real32
T_181: (in rLoc2_26 : Eq_181)
  Class: Eq_181
  DataType: Eq_181
  OrigDataType: (union (real16 u0) (real64 u1))
T_182: (in 0x0100 : word16)
  Class: Eq_182
  DataType: (memptr (ptr Eq_56) int16)
  OrigDataType: (memptr T_56 (struct (0 T_183 t0000)))
T_183: (in Mem24[ds:0x0100:int16] : int16)
  Class: Eq_136
  DataType: int16
  OrigDataType: int16
T_184: (in (real64) ds->w0100 : real64)
  Class: Eq_181
  DataType: Eq_181
  OrigDataType: real64
T_185: (in 0x0028 : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: word16
T_186: (in 0x0000 : word16)
  Class: Eq_186
  DataType: word16
  OrigDataType: word16
T_187: (in bp + 0x0000 : word16)
  Class: Eq_187
  DataType: word16
  OrigDataType: word16
T_188: (in Mem27[ss:bp + 0x0000:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_189: (in sin : ptr32)
  Class: Eq_189
  DataType: (ptr Eq_189)
  OrigDataType: (ptr (fn T_195 (T_194)))
T_190: (in 0x0000 : word16)
  Class: Eq_190
  DataType: word16
  OrigDataType: word16
T_191: (in bp + 0x0000 : word16)
  Class: Eq_191
  DataType: word16
  OrigDataType: word16
T_192: (in Mem27[ss:bp + 0x0000:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_193: (in (real64) Mem27[ss:bp + 0x0000:word16] : real64)
  Class: Eq_193
  DataType: Eq_193
  OrigDataType: (union (real16 u0) (real64 u1))
T_194: (in rLoc2_26 / (real64) Mem27[ss:bp + 0x0000:word16] : word16)
  Class: Eq_194
  DataType: real16
  OrigDataType: real16
T_195: (in sin(rLoc2_26 / (real64) Mem27[ss:bp + 0x0000:word16]) : real64)
  Class: Eq_195
  DataType: real64
  OrigDataType: real64
T_196: (in sin(rLoc2_26 / (real64) Mem27[ss:bp + 0x0000:word16]) * rLoc1_25 : real64)
  Class: Eq_66
  DataType: Eq_66
  OrigDataType: real64
T_197: (in 0x01E2 : word16)
  Class: Eq_197
  DataType: (memptr (ptr Eq_56) Eq_66)
  OrigDataType: (memptr T_56 (struct (0 T_198 t0000)))
T_198: (in Mem33[ds:0x01E2:real32] : real32)
  Class: Eq_66
  DataType: Eq_66
  OrigDataType: real32
T_199: (in 0x00C8 : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_200: (in 0x0000 : word16)
  Class: Eq_146
  DataType: (memptr (ptr Eq_145) byte)
  OrigDataType: word16
*/
typedef Eq_145 Eq_1struct Globals {
	Eq_145 * ptrFFFA0000;	// FFFA0000
} Eq_1;

typedef void (Eq_2)(byte);

typedef union Eq_7 {
	int16 u0;
	real16 u1;
	real32 u2;
	real64 u3;
} Eq_7;

typedef struct Eq_8 {
} Eq_8;

typedef Eq_7 (Eq_38)(real64, real64);

typedef union Eq_51 {
	real16 u0;
	real64 u1;
} Eq_51;

typedef Eq_64 (Eq_52)(real16);

typedef Eq_76 Eq_56Eq_62 Eq_56Eq_172 Eq_56Eq_66 Eq_56Eq_178 Eq_56Eq_80 Eq_56struct Eq_56 {
	int16 w0100;	// 100
	Eq_76 t0103;	// 103
	word16 w01D8;	// 1D8
	Eq_62 t01DA;	// 1DA
	Eq_172 t01DE;	// 1DE
	Eq_66 t01E2;	// 1E2
	Eq_178 t01E6;	// 1E6
	Eq_80 t01EA;	// 1EA
} Eq_56;

typedef union Eq_59 {
	real16 u0;
	real64 u1;
} Eq_59;

typedef union Eq_62 {
	real16 u0;
	real32 u1;
} Eq_62;

typedef union Eq_64 {
	real16 u0;
	real64 u1;
} Eq_64;

typedef union Eq_66 {
	real16 u0;
	real32 u1;
	real64 u2;
} Eq_66;

typedef union Eq_75 {
	real16 u0;
	real64 u1;
} Eq_75;

typedef union Eq_76 {
	real16 u0;
	real32 u1;
} Eq_76;

typedef union Eq_80 {
	real16 u0;
	real32 u1;
} Eq_80;

typedef union Eq_110 {
	real16 u0;
	real64 u1;
} Eq_110;

typedef Eq_115 (Eq_111)(real64);

typedef union Eq_115 {
	real16 u0;
	real64 u1;
} Eq_115;

typedef struct Eq_145 {
	byte b0000;	// 0
} Eq_145;

typedef byte (Eq_161)(byte);

typedef union Eq_172 {
	real16 u0;
	real32 u1;
} Eq_172;

typedef union Eq_178 {
	real32 u0;
	real64 u1;
} Eq_178;

typedef union Eq_181 {
	real16 u0;
	real64 u1;
} Eq_181;

typedef real64 (Eq_189)(real16);

typedef union Eq_193 {
	real16 u0;
	real64 u1;
} Eq_193;

