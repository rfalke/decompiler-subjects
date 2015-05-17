// subject.h
// Generated on TIMESTAMP by decompiling from_boomerang/switch/ia32_pe_by_boomerang_gcc/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (403000 word32 dw403000) (403024 word32 dw403024))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_6: (fn void (word16))
	T_6 (in __fldcw : ptr32)
Eq_7: (fn uint16 ())
	T_7 (in __fstcw : ptr32)
Eq_18: (fn void (word32, word32, word32))
	T_18 (in fn00401470 : ptr32)
	T_19 (in signature of fn00401470 : void)
Eq_29: (fn void ())
	T_29 (in int3 : ptr32)
	T_30 (in signature of int3 : void)
Eq_41: (fn word32 (word32, word32, word32, word32))
	T_41 (in fn00401530 : ptr32)
	T_42 (in signature of fn00401530 : void)
	T_67 (in fn00401530 : ptr32)
Eq_52: (struct "Eq_52" (0 word32 dw0000) (4 word32 dw0004) (8 word32 dw0008))
	T_52 (in esp_31 : (ptr Eq_52))
	T_54 (in esp_19 - 0x000000B0 : word32)
Eq_83: (struct "Eq_83" (0 word32 dw0000) (4 word32 dw0004) (8 word32 dw0008) (C word32 dw000C) (10 word32 dw0010) (14 word32 dw0014) (18 word32 dw0018) (1C word32 dw001C) (20 word32 dw0020) (24 word32 dw0024) (28 word32 dw0028) (2C word32 dw002C) (30 word32 dw0030) (34 word32 dw0034) (38 word32 dw0038) (3C word32 dw003C) (40 word32 dw0040) (44 word32 dw0044) (48 word32 dw0048) (4C word32 dw004C) (50 word32 dw0050) (54 word32 dw0054) (78 word32 dw0078) (7C word32 dw007C) (80 word32 dw0080) (84 word32 dw0084) (A4 word32 dw00A4))
	T_83 (in ebx_12 : (ptr Eq_83))
	T_84 (in dwArg08 : word32)
	T_85 (in 0x00000000 : word32)
	T_135 (in 0x00000000 : word32)
Eq_188: (fn word32 (Eq_190))
	T_188 (in GetModuleHandleA : ptr32)
	T_189 (in signature of GetModuleHandleA : void)
Eq_190: (union "Eq_190" (word32 u0) (LPCSTR u1))
	T_190 (in lpModuleName : LPCSTR)
	T_191 (in 0x00000008 : word32)
Eq_212: (fn void (word32))
	T_212 (in fn004016B0 : ptr32)
	T_213 (in signature of fn004016B0 : void)
Eq_217: (struct "Eq_217" 0008 (0 word32 dw0000) (4 Eq_217 t0004) (8 Eq_217 t0008))
	T_217 (in ecx_37 : word32)
	T_218 (in dwArg04 : word32)
	T_220 (in dwArg04 + 0x00000004 : word32)
	T_221 (in dwArg08 : word32)
	T_240 (in ecx_37 + 0x00000008 : word32)
Eq_242: (fn void (word32, word32, word32, word32))
	T_242 (in fn00401670 : ptr32)
	T_243 (in signature of fn00401670 : void)
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr Eq_1)
  OrigDataType: (ptr (struct "Globals"))
T_2: (in 0x00403000 : word32)
  Class: Eq_2
  DataType: (ptr word32)
  OrigDataType: (ptr (struct (0 T_3 t0000)))
T_3: (in Mem0[0x00403000:word32] : word32)
  Class: Eq_3
  DataType: word32
  OrigDataType: word32
T_4: (in 0x00000000 : word32)
  Class: Eq_3
  DataType: word32
  OrigDataType: word32
T_5: (in globals->dw403000 == 0x00000000 : bool)
  Class: Eq_5
  DataType: bool
  OrigDataType: bool
T_6: (in __fldcw : ptr32)
  Class: Eq_6
  DataType: (ptr Eq_6)
  OrigDataType: (ptr (fn T_17 (T_16)))
T_7: (in __fstcw : ptr32)
  Class: Eq_7
  DataType: (ptr Eq_7)
  OrigDataType: (ptr (fn T_8 ()))
T_8: (in __fstcw() : uint16)
  Class: Eq_8
  DataType: uint16
  OrigDataType: uint16
T_9: (in (word32) __fstcw() : word32)
  Class: Eq_9
  DataType: word32
  OrigDataType: word32
T_10: (in 0xFFFFF0C0 : word32)
  Class: Eq_10
  DataType: word32
  OrigDataType: word32
T_11: (in (word32) __fstcw() & 0xFFFFF0C0 : word32)
  Class: Eq_11
  DataType: word32
  OrigDataType: word32
T_12: (in (word16) ((word32) __fstcw() & 0xFFFFF0C0) : word16)
  Class: Eq_12
  DataType: word16
  OrigDataType: word16
T_13: (in (word32) (word16) ((word32) __fstcw() & 0xFFFFF0C0) : word32)
  Class: Eq_13
  DataType: word32
  OrigDataType: word32
T_14: (in 0x0000033F : word32)
  Class: Eq_14
  DataType: word32
  OrigDataType: word32
T_15: (in (word32) (word16) ((word32) __fstcw() & 0xFFFFF0C0) | 0x0000033F : word32)
  Class: Eq_15
  DataType: word32
  OrigDataType: word32
T_16: (in (word16) ((word32) (word16) ((word32) __fstcw() & 0xFFFFF0C0) | 0x0000033F) : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_17: (in __fldcw((word16) ((word32) (word16) ((word32) __fstcw() & 0xFFFFF0C0) | 0x0000033F)) : void)
  Class: Eq_17
  DataType: void
  OrigDataType: void
T_18: (in fn00401470 : ptr32)
  Class: Eq_18
  DataType: (ptr Eq_18)
  OrigDataType: (ptr (fn T_28 (T_25, T_26, T_27)))
T_19: (in signature of fn00401470 : void)
  Class: Eq_18
  DataType: (ptr Eq_18)
  OrigDataType: 
T_20: (in ebp : word32)
  Class: Eq_20
  DataType: word32
  OrigDataType: word32
T_21: (in edi : word32)
  Class: Eq_21
  DataType: word32
  OrigDataType: word32
T_22: (in dwArg04 : word32)
  Class: Eq_22
  DataType: word32
  OrigDataType: word32
T_23: (in fp : ptr32)
  Class: Eq_23
  DataType: ptr32
  OrigDataType: ptr32
T_24: (in 0x00000004 : word32)
  Class: Eq_24
  DataType: word32
  OrigDataType: word32
T_25: (in fp - 0x00000004 : word32)
  Class: Eq_20
  DataType: word32
  OrigDataType: word32
T_26: (in edi : word32)
  Class: Eq_21
  DataType: word32
  OrigDataType: word32
T_27: (in 0x00401080 : word32)
  Class: Eq_22
  DataType: word32
  OrigDataType: word32
T_28: (in fn00401470(fp - 0x00000004, edi, 0x00401080) : void)
  Class: Eq_28
  DataType: void
  OrigDataType: void
T_29: (in int3 : ptr32)
  Class: Eq_29
  DataType: (ptr Eq_29)
  OrigDataType: (ptr (fn T_31 ()))
T_30: (in signature of int3 : void)
  Class: Eq_29
  DataType: (ptr Eq_29)
  OrigDataType: 
T_31: (in int3() : void)
  Class: Eq_31
  DataType: void
  OrigDataType: void
T_32: (in ebp_29 : word32)
  Class: Eq_32
  DataType: word32
  OrigDataType: word32
T_33: (in fp : ptr32)
  Class: Eq_33
  DataType: ptr32
  OrigDataType: ptr32
T_34: (in 0x00000004 : word32)
  Class: Eq_34
  DataType: word32
  OrigDataType: word32
T_35: (in fp - 0x00000004 : word32)
  Class: Eq_32
  DataType: word32
  OrigDataType: word32
T_36: (in esi_11 : word32)
  Class: Eq_36
  DataType: word32
  OrigDataType: word32
T_37: (in dwArg04 : word32)
  Class: Eq_36
  DataType: word32
  OrigDataType: word32
T_38: (in esp_19 : word32)
  Class: Eq_38
  DataType: word32
  OrigDataType: word32
T_39: (in 0x0000001C : word32)
  Class: Eq_39
  DataType: word32
  OrigDataType: word32
T_40: (in fp - 0x0000001C : word32)
  Class: Eq_38
  DataType: word32
  OrigDataType: word32
T_41: (in fn00401530 : ptr32)
  Class: Eq_41
  DataType: (ptr Eq_41)
  OrigDataType: (ptr (fn T_49 (T_47, T_21, T_37, T_48)))
T_42: (in signature of fn00401530 : void)
  Class: Eq_41
  DataType: (ptr Eq_41)
  OrigDataType: 
T_43: (in ebp : word32)
  Class: Eq_32
  DataType: word32
  OrigDataType: word32
T_44: (in edi : word32)
  Class: Eq_21
  DataType: word32
  OrigDataType: word32
T_45: (in dwArg04 : word32)
  Class: Eq_36
  DataType: word32
  OrigDataType: word32
T_46: (in dwArg08 : word32)
  Class: Eq_36
  DataType: word32
  OrigDataType: word32
T_47: (in fp - 0x00000004 : word32)
  Class: Eq_32
  DataType: word32
  OrigDataType: word32
T_48: (in 0x00000000 : word32)
  Class: Eq_36
  DataType: word32
  OrigDataType: word32
T_49: (in fn00401530(fp - 0x00000004, edi, dwArg04, 0x00000000) : word32)
  Class: Eq_49
  DataType: word32
  OrigDataType: word32
T_50: (in 0x00000000 : word32)
  Class: Eq_49
  DataType: word32
  OrigDataType: word32
T_51: (in fn00401530(fp - 0x00000004, edi, dwArg04, 0x00000000) == 0x00000000 : bool)
  Class: Eq_51
  DataType: bool
  OrigDataType: bool
T_52: (in esp_31 : (ptr Eq_52))
  Class: Eq_52
  DataType: (ptr Eq_52)
  OrigDataType: (ptr (struct (0 T_36 t0000) (4 T_63 t0004) (8 T_58 t0008)))
T_53: (in 0x000000B0 : word32)
  Class: Eq_53
  DataType: word32
  OrigDataType: word32
T_54: (in esp_19 - 0x000000B0 : word32)
  Class: Eq_52
  DataType: (ptr Eq_52)
  OrigDataType: word32
T_55: (in 0x00000000 : word32)
  Class: Eq_55
  DataType: word32
  OrigDataType: word32
T_56: (in 0x00000008 : word32)
  Class: Eq_56
  DataType: word32
  OrigDataType: word32
T_57: (in esp_31 + 0x00000008 : word32)
  Class: Eq_57
  DataType: word32
  OrigDataType: word32
T_58: (in Mem34[esp_31 + 0x00000008:word32] : word32)
  Class: Eq_55
  DataType: word32
  OrigDataType: word32
T_59: (in 0x00000008 : word32)
  Class: Eq_59
  DataType: word32
  OrigDataType: word32
T_60: (in esp_31 + 0x00000008 : word32)
  Class: Eq_60
  DataType: word32
  OrigDataType: word32
T_61: (in 0x00000004 : word32)
  Class: Eq_61
  DataType: word32
  OrigDataType: word32
T_62: (in esp_31 + 0x00000004 : word32)
  Class: Eq_62
  DataType: word32
  OrigDataType: word32
T_63: (in Mem35[esp_31 + 0x00000004:word32] : word32)
  Class: Eq_60
  DataType: word32
  OrigDataType: word32
T_64: (in 0x00000000 : word32)
  Class: Eq_64
  DataType: word32
  OrigDataType: word32
T_65: (in esp_31 + 0x00000000 : word32)
  Class: Eq_65
  DataType: word32
  OrigDataType: word32
T_66: (in Mem36[esp_31 + 0x00000000:word32] : word32)
  Class: Eq_36
  DataType: word32
  OrigDataType: word32
T_67: (in fn00401530 : ptr32)
  Class: Eq_41
  DataType: (ptr Eq_41)
  OrigDataType: (ptr (fn T_69 (T_32, T_21, T_68, T_37)))
T_68: (in dwArg00 : word32)
  Class: Eq_36
  DataType: word32
  OrigDataType: word32
T_69: (in fn00401530(ebp_29, edi, dwArg00, dwArg04) : word32)
  Class: Eq_49
  DataType: word32
  OrigDataType: word32
T_70: (in esp_31 + 0x00000008 : word32)
  Class: Eq_36
  DataType: word32
  OrigDataType: word32
T_71: (in 0x00000000 : word32)
  Class: Eq_71
  DataType: word32
  OrigDataType: word32
T_72: (in esp_31 + 0x00000000 : word32)
  Class: Eq_72
  DataType: word32
  OrigDataType: word32
T_73: (in Mem42[esp_31 + 0x00000000:word32] : word32)
  Class: Eq_36
  DataType: word32
  OrigDataType: word32
T_74: (in cygwin1.dll!dll_crt0__FP11per_process : ptr32)
  Class: Eq_74
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_75: (in eax : word32)
  Class: Eq_75
  DataType: word32
  OrigDataType: word32
T_76: (in eax_27 : word32)
  Class: Eq_76
  DataType: word32
  OrigDataType: word32
T_77: (in eax_35 : word32)
  Class: Eq_77
  DataType: word32
  OrigDataType: word32
T_78: (in 0x00000000 : word32)
  Class: Eq_77
  DataType: word32
  OrigDataType: word32
T_79: (in esp_10 : (ptr word32))
  Class: Eq_79
  DataType: (ptr word32)
  OrigDataType: (ptr (struct (0 T_187 t0000)))
T_80: (in fp : ptr32)
  Class: Eq_80
  DataType: ptr32
  OrigDataType: ptr32
T_81: (in 0x0000000C : word32)
  Class: Eq_81
  DataType: word32
  OrigDataType: word32
T_82: (in fp - 0x0000000C : word32)
  Class: Eq_79
  DataType: (ptr word32)
  OrigDataType: word32
T_83: (in ebx_12 : (ptr Eq_83))
  Class: Eq_83
  DataType: (ptr Eq_83)
  OrigDataType: (ptr (struct (0 T_167 t0000) (4 T_95 t0004) (8 T_99 t0008) (C T_103 t000C) (10 T_129 t0010) (14 T_123 t0014) (18 T_171 t0018) (1C T_175 t001C) (20 T_179 t0020) (24 T_164 t0024) (28 T_152 t0028) (2C T_115 t002C) (30 T_119 t0030) (34 T_199 t0034) (38 T_203 t0038) (3C T_207 t003C) (40 T_211 t0040) (44 T_183 t0044) (48 T_144 t0048) (4C T_148 t004C) (50 T_156 t0050) (54 T_160 t0054) (78 T_140 t0078) (7C T_195 t007C) (80 T_107 t0080) (84 T_111 t0084) (A4 T_132 t00A4)))
T_84: (in dwArg08 : word32)
  Class: Eq_83
  DataType: (ptr Eq_83)
  OrigDataType: word32
T_85: (in 0x00000000 : word32)
  Class: Eq_83
  DataType: (ptr Eq_83)
  OrigDataType: word32
T_86: (in dwArg08 == null : bool)
  Class: Eq_86
  DataType: bool
  OrigDataType: bool
T_87: (in cygwin1.dll!cygwin_internal : ptr32)
  Class: Eq_87
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_88: (in 0x00000000 : word32)
  Class: Eq_76
  DataType: word32
  OrigDataType: word32
T_89: (in 0x00000001 : word32)
  Class: Eq_89
  DataType: word32
  OrigDataType: word32
T_90: (in 0x00000000 : word32)
  Class: Eq_89
  DataType: word32
  OrigDataType: word32
T_91: (in 0x00000001 == 0x00000000 : bool)
  Class: Eq_91
  DataType: bool
  OrigDataType: bool
T_92: (in 0x000000A8 : word32)
  Class: Eq_92
  DataType: word32
  OrigDataType: word32
T_93: (in 0x00000004 : word32)
  Class: Eq_93
  DataType: word32
  OrigDataType: word32
T_94: (in ebx_12 + 0x00000004 : word32)
  Class: Eq_94
  DataType: word32
  OrigDataType: word32
T_95: (in Mem39[ebx_12 + 0x00000004:word32] : word32)
  Class: Eq_92
  DataType: word32
  OrigDataType: word32
T_96: (in 0x000003ED : word32)
  Class: Eq_96
  DataType: word32
  OrigDataType: word32
T_97: (in 0x00000008 : word32)
  Class: Eq_97
  DataType: word32
  OrigDataType: word32
T_98: (in ebx_12 + 0x00000008 : word32)
  Class: Eq_98
  DataType: word32
  OrigDataType: word32
T_99: (in Mem42[ebx_12 + 0x00000008:word32] : word32)
  Class: Eq_96
  DataType: word32
  OrigDataType: word32
T_100: (in 0x00000009 : word32)
  Class: Eq_100
  DataType: word32
  OrigDataType: word32
T_101: (in 0x0000000C : word32)
  Class: Eq_101
  DataType: word32
  OrigDataType: word32
T_102: (in ebx_12 + 0x0000000C : word32)
  Class: Eq_102
  DataType: word32
  OrigDataType: word32
T_103: (in Mem46[ebx_12 + 0x0000000C:word32] : word32)
  Class: Eq_100
  DataType: word32
  OrigDataType: word32
T_104: (in 0x00000000 : word32)
  Class: Eq_104
  DataType: word32
  OrigDataType: word32
T_105: (in 0x00000080 : word32)
  Class: Eq_105
  DataType: word32
  OrigDataType: word32
T_106: (in ebx_12 + 0x00000080 : word32)
  Class: Eq_106
  DataType: word32
  OrigDataType: word32
T_107: (in Mem47[ebx_12 + 0x00000080:word32] : word32)
  Class: Eq_104
  DataType: word32
  OrigDataType: word32
T_108: (in 0x00000070 : word32)
  Class: Eq_108
  DataType: word32
  OrigDataType: word32
T_109: (in 0x00000084 : word32)
  Class: Eq_109
  DataType: word32
  OrigDataType: word32
T_110: (in ebx_12 + 0x00000084 : word32)
  Class: Eq_110
  DataType: word32
  OrigDataType: word32
T_111: (in Mem48[ebx_12 + 0x00000084:word32] : word32)
  Class: Eq_108
  DataType: word32
  OrigDataType: word32
T_112: (in 0x004017A0 : word32)
  Class: Eq_112
  DataType: word32
  OrigDataType: word32
T_113: (in 0x0000002C : word32)
  Class: Eq_113
  DataType: word32
  OrigDataType: word32
T_114: (in ebx_12 + 0x0000002C : word32)
  Class: Eq_114
  DataType: word32
  OrigDataType: word32
T_115: (in Mem49[ebx_12 + 0x0000002C:word32] : word32)
  Class: Eq_112
  DataType: word32
  OrigDataType: word32
T_116: (in 0x004017AC : word32)
  Class: Eq_116
  DataType: word32
  OrigDataType: word32
T_117: (in 0x00000030 : word32)
  Class: Eq_117
  DataType: word32
  OrigDataType: word32
T_118: (in ebx_12 + 0x00000030 : word32)
  Class: Eq_118
  DataType: word32
  OrigDataType: word32
T_119: (in Mem50[ebx_12 + 0x00000030:word32] : word32)
  Class: Eq_116
  DataType: word32
  OrigDataType: word32
T_120: (in 0x00403020 : word32)
  Class: Eq_120
  DataType: word32
  OrigDataType: word32
T_121: (in 0x00000014 : word32)
  Class: Eq_121
  DataType: word32
  OrigDataType: word32
T_122: (in ebx_12 + 0x00000014 : word32)
  Class: Eq_122
  DataType: word32
  OrigDataType: word32
T_123: (in Mem51[ebx_12 + 0x00000014:word32] : word32)
  Class: Eq_120
  DataType: word32
  OrigDataType: word32
T_124: (in 0x00000000 : word32)
  Class: Eq_77
  DataType: word32
  OrigDataType: word32
T_125: (in eax_35 == 0x00000000 : bool)
  Class: Eq_125
  DataType: bool
  OrigDataType: bool
T_126: (in 0x00403024 : word32)
  Class: Eq_126
  DataType: word32
  OrigDataType: word32
T_127: (in 0x00000010 : word32)
  Class: Eq_127
  DataType: word32
  OrigDataType: word32
T_128: (in ebx_12 + 0x00000010 : word32)
  Class: Eq_128
  DataType: word32
  OrigDataType: word32
T_129: (in Mem80[ebx_12 + 0x00000010:word32] : word32)
  Class: Eq_126
  DataType: word32
  OrigDataType: word32
T_130: (in 0x000000A4 : word32)
  Class: Eq_130
  DataType: word32
  OrigDataType: word32
T_131: (in ebx_12 + 0x000000A4 : word32)
  Class: Eq_131
  DataType: word32
  OrigDataType: word32
T_132: (in Mem51[ebx_12 + 0x000000A4:word32] : word32)
  Class: Eq_132
  DataType: word32
  OrigDataType: word32
T_133: (in 0x00403024 : word32)
  Class: Eq_133
  DataType: (ptr word32)
  OrigDataType: (ptr (struct (0 T_134 t0000)))
T_134: (in Mem79[0x00403024:word32] : word32)
  Class: Eq_132
  DataType: word32
  OrigDataType: word32
T_135: (in 0x00000000 : word32)
  Class: Eq_83
  DataType: (ptr Eq_83)
  OrigDataType: word32
T_136: (in 0x00000001 : word32)
  Class: Eq_77
  DataType: word32
  OrigDataType: word32
T_137: (in 0x00000000 : word32)
  Class: Eq_137
  DataType: word32
  OrigDataType: word32
T_138: (in 0x00000078 : word32)
  Class: Eq_138
  DataType: word32
  OrigDataType: word32
T_139: (in ebx_12 + 0x00000078 : word32)
  Class: Eq_139
  DataType: word32
  OrigDataType: word32
T_140: (in Mem52[ebx_12 + 0x00000078:word32] : word32)
  Class: Eq_137
  DataType: word32
  OrigDataType: word32
T_141: (in 0x00401730 : word32)
  Class: Eq_141
  DataType: word32
  OrigDataType: word32
T_142: (in 0x00000048 : word32)
  Class: Eq_142
  DataType: word32
  OrigDataType: word32
T_143: (in ebx_12 + 0x00000048 : word32)
  Class: Eq_143
  DataType: word32
  OrigDataType: word32
T_144: (in Mem55[ebx_12 + 0x00000048:word32] : word32)
  Class: Eq_141
  DataType: word32
  OrigDataType: word32
T_145: (in 0x00401720 : word32)
  Class: Eq_145
  DataType: word32
  OrigDataType: word32
T_146: (in 0x0000004C : word32)
  Class: Eq_146
  DataType: word32
  OrigDataType: word32
T_147: (in ebx_12 + 0x0000004C : word32)
  Class: Eq_147
  DataType: word32
  OrigDataType: word32
T_148: (in Mem56[ebx_12 + 0x0000004C:word32] : word32)
  Class: Eq_145
  DataType: word32
  OrigDataType: word32
T_149: (in dwArg04 : word32)
  Class: Eq_149
  DataType: word32
  OrigDataType: word32
T_150: (in 0x00000028 : word32)
  Class: Eq_150
  DataType: word32
  OrigDataType: word32
T_151: (in ebx_12 + 0x00000028 : word32)
  Class: Eq_151
  DataType: word32
  OrigDataType: word32
T_152: (in Mem57[ebx_12 + 0x00000028:word32] : word32)
  Class: Eq_149
  DataType: word32
  OrigDataType: word32
T_153: (in 0x00401710 : word32)
  Class: Eq_153
  DataType: word32
  OrigDataType: word32
T_154: (in 0x00000050 : word32)
  Class: Eq_154
  DataType: word32
  OrigDataType: word32
T_155: (in ebx_12 + 0x00000050 : word32)
  Class: Eq_155
  DataType: word32
  OrigDataType: word32
T_156: (in Mem59[ebx_12 + 0x00000050:word32] : word32)
  Class: Eq_153
  DataType: word32
  OrigDataType: word32
T_157: (in 0x00401700 : word32)
  Class: Eq_157
  DataType: word32
  OrigDataType: word32
T_158: (in 0x00000054 : word32)
  Class: Eq_158
  DataType: word32
  OrigDataType: word32
T_159: (in ebx_12 + 0x00000054 : word32)
  Class: Eq_159
  DataType: word32
  OrigDataType: word32
T_160: (in Mem60[ebx_12 + 0x00000054:word32] : word32)
  Class: Eq_157
  DataType: word32
  OrigDataType: word32
T_161: (in 0x00403028 : word32)
  Class: Eq_161
  DataType: word32
  OrigDataType: word32
T_162: (in 0x00000024 : word32)
  Class: Eq_162
  DataType: word32
  OrigDataType: word32
T_163: (in ebx_12 + 0x00000024 : word32)
  Class: Eq_163
  DataType: word32
  OrigDataType: word32
T_164: (in Mem61[ebx_12 + 0x00000024:word32] : word32)
  Class: Eq_161
  DataType: word32
  OrigDataType: word32
T_165: (in 0x00000000 : word32)
  Class: Eq_165
  DataType: word32
  OrigDataType: word32
T_166: (in ebx_12 + 0x00000000 : word32)
  Class: Eq_166
  DataType: word32
  OrigDataType: word32
T_167: (in Mem62[ebx_12 + 0x00000000:word32] : word32)
  Class: Eq_32
  DataType: word32
  OrigDataType: word32
T_168: (in 0x00401510 : word32)
  Class: Eq_168
  DataType: word32
  OrigDataType: word32
T_169: (in 0x00000018 : word32)
  Class: Eq_169
  DataType: word32
  OrigDataType: word32
T_170: (in ebx_12 + 0x00000018 : word32)
  Class: Eq_170
  DataType: word32
  OrigDataType: word32
T_171: (in Mem63[ebx_12 + 0x00000018:word32] : word32)
  Class: Eq_168
  DataType: word32
  OrigDataType: word32
T_172: (in 0x004014F0 : word32)
  Class: Eq_172
  DataType: word32
  OrigDataType: word32
T_173: (in 0x0000001C : word32)
  Class: Eq_173
  DataType: word32
  OrigDataType: word32
T_174: (in ebx_12 + 0x0000001C : word32)
  Class: Eq_174
  DataType: word32
  OrigDataType: word32
T_175: (in Mem64[ebx_12 + 0x0000001C:word32] : word32)
  Class: Eq_172
  DataType: word32
  OrigDataType: word32
T_176: (in 0x004016F0 : word32)
  Class: Eq_176
  DataType: word32
  OrigDataType: word32
T_177: (in 0x00000020 : word32)
  Class: Eq_177
  DataType: word32
  OrigDataType: word32
T_178: (in ebx_12 + 0x00000020 : word32)
  Class: Eq_178
  DataType: word32
  OrigDataType: word32
T_179: (in Mem65[ebx_12 + 0x00000020:word32] : word32)
  Class: Eq_176
  DataType: word32
  OrigDataType: word32
T_180: (in 0x004016E0 : word32)
  Class: Eq_180
  DataType: word32
  OrigDataType: word32
T_181: (in 0x00000044 : word32)
  Class: Eq_181
  DataType: word32
  OrigDataType: word32
T_182: (in ebx_12 + 0x00000044 : word32)
  Class: Eq_182
  DataType: word32
  OrigDataType: word32
T_183: (in Mem66[ebx_12 + 0x00000044:word32] : word32)
  Class: Eq_180
  DataType: word32
  OrigDataType: word32
T_184: (in 0x00000000 : word32)
  Class: Eq_184
  DataType: word32
  OrigDataType: word32
T_185: (in 0x00000000 : word32)
  Class: Eq_185
  DataType: word32
  OrigDataType: word32
T_186: (in esp_10 + 0x00000000 : word32)
  Class: Eq_186
  DataType: word32
  OrigDataType: word32
T_187: (in Mem67[esp_10 + 0x00000000:word32] : word32)
  Class: Eq_184
  DataType: word32
  OrigDataType: word32
T_188: (in GetModuleHandleA : ptr32)
  Class: Eq_188
  DataType: (ptr Eq_188)
  OrigDataType: (ptr (fn T_192 (T_191)))
T_189: (in signature of GetModuleHandleA : void)
  Class: Eq_188
  DataType: (ptr Eq_188)
  OrigDataType: 
T_190: (in lpModuleName : LPCSTR)
  Class: Eq_190
  DataType: Eq_190
  OrigDataType: LPCSTR
T_191: (in 0x00000008 : word32)
  Class: Eq_190
  DataType: word32
  OrigDataType: word32
T_192: (in GetModuleHandleA(0x00000008) : word32)
  Class: Eq_192
  DataType: word32
  OrigDataType: word32
T_193: (in 0x0000007C : word32)
  Class: Eq_193
  DataType: word32
  OrigDataType: word32
T_194: (in ebx_12 + 0x0000007C : word32)
  Class: Eq_194
  DataType: word32
  OrigDataType: word32
T_195: (in Mem70[ebx_12 + 0x0000007C:word32] : word32)
  Class: Eq_192
  DataType: word32
  OrigDataType: word32
T_196: (in 0x00402000 : word32)
  Class: Eq_196
  DataType: word32
  OrigDataType: word32
T_197: (in 0x00000034 : word32)
  Class: Eq_197
  DataType: word32
  OrigDataType: word32
T_198: (in ebx_12 + 0x00000034 : word32)
  Class: Eq_198
  DataType: word32
  OrigDataType: word32
T_199: (in Mem73[ebx_12 + 0x00000034:word32] : word32)
  Class: Eq_196
  DataType: word32
  OrigDataType: word32
T_200: (in 0x00402010 : word32)
  Class: Eq_200
  DataType: word32
  OrigDataType: word32
T_201: (in 0x00000038 : word32)
  Class: Eq_201
  DataType: word32
  OrigDataType: word32
T_202: (in ebx_12 + 0x00000038 : word32)
  Class: Eq_202
  DataType: word32
  OrigDataType: word32
T_203: (in Mem74[ebx_12 + 0x00000038:word32] : word32)
  Class: Eq_200
  DataType: word32
  OrigDataType: word32
T_204: (in 0x00403000 : word32)
  Class: Eq_204
  DataType: word32
  OrigDataType: word32
T_205: (in 0x0000003C : word32)
  Class: Eq_205
  DataType: word32
  OrigDataType: word32
T_206: (in ebx_12 + 0x0000003C : word32)
  Class: Eq_206
  DataType: word32
  OrigDataType: word32
T_207: (in Mem75[ebx_12 + 0x0000003C:word32] : word32)
  Class: Eq_204
  DataType: word32
  OrigDataType: word32
T_208: (in 0x00403080 : word32)
  Class: Eq_208
  DataType: word32
  OrigDataType: word32
T_209: (in 0x00000040 : word32)
  Class: Eq_209
  DataType: word32
  OrigDataType: word32
T_210: (in ebx_12 + 0x00000040 : word32)
  Class: Eq_210
  DataType: word32
  OrigDataType: word32
T_211: (in Mem76[ebx_12 + 0x00000040:word32] : word32)
  Class: Eq_208
  DataType: word32
  OrigDataType: word32
T_212: (in fn004016B0 : ptr32)
  Class: Eq_212
  DataType: (ptr Eq_212)
  OrigDataType: (ptr (fn T_215 (T_44)))
T_213: (in signature of fn004016B0 : void)
  Class: Eq_212
  DataType: (ptr Eq_212)
  OrigDataType: 
T_214: (in edi : word32)
  Class: Eq_21
  DataType: word32
  OrigDataType: word32
T_215: (in fn004016B0(edi) : void)
  Class: Eq_215
  DataType: void
  OrigDataType: void
T_216: (in 0x00000001 : word32)
  Class: Eq_76
  DataType: word32
  OrigDataType: word32
T_217: (in ecx_37 : word32)
  Class: Eq_217
  DataType: (ptr Eq_217)
  OrigDataType: (ptr (struct 0008 (0 T_227 t0000)))
T_218: (in dwArg04 : word32)
  Class: Eq_217
  DataType: (ptr Eq_217)
  OrigDataType: up32
T_219: (in 0x00000004 : word32)
  Class: Eq_219
  DataType: word32
  OrigDataType: word32
T_220: (in dwArg04 + 0x00000004 : word32)
  Class: Eq_217
  DataType: (ptr Eq_217)
  OrigDataType: word32
T_221: (in dwArg08 : word32)
  Class: Eq_217
  DataType: (ptr Eq_217)
  OrigDataType: up32
T_222: (in dwArg04 >=u dwArg08 : bool)
  Class: Eq_222
  DataType: bool
  OrigDataType: bool
T_223: (in edx_41 : (ptr word32))
  Class: Eq_223
  DataType: (ptr word32)
  OrigDataType: (ptr (struct (0 T_231 t0000)))
T_224: (in dwArg0C : word32)
  Class: Eq_224
  DataType: word32
  OrigDataType: word32
T_225: (in 0x00000000 : word32)
  Class: Eq_225
  DataType: word32
  OrigDataType: word32
T_226: (in ecx_37 + 0x00000000 : word32)
  Class: Eq_226
  DataType: word32
  OrigDataType: word32
T_227: (in Mem0[ecx_37 + 0x00000000:word32] : word32)
  Class: Eq_227
  DataType: word32
  OrigDataType: word32
T_228: (in dwArg0C + ecx_37->dw0000 : word32)
  Class: Eq_223
  DataType: (ptr word32)
  OrigDataType: word32
T_229: (in 0x00000000 : word32)
  Class: Eq_229
  DataType: word32
  OrigDataType: word32
T_230: (in edx_41 + 0x00000000 : word32)
  Class: Eq_230
  DataType: word32
  OrigDataType: word32
T_231: (in Mem0[edx_41 + 0x00000000:word32] : word32)
  Class: Eq_231
  DataType: word32
  OrigDataType: word32
T_232: (in 0x00000000 : word32)
  Class: Eq_232
  DataType: word32
  OrigDataType: word32
T_233: (in ecx_37 + 0x00000000 : word32)
  Class: Eq_233
  DataType: word32
  OrigDataType: word32
T_234: (in Mem0[ecx_37 + 0x00000000:word32] : word32)
  Class: Eq_227
  DataType: word32
  OrigDataType: word32
T_235: (in *edx_41 + ecx_37->dw0000 : word32)
  Class: Eq_231
  DataType: word32
  OrigDataType: word32
T_236: (in 0x00000000 : word32)
  Class: Eq_236
  DataType: word32
  OrigDataType: word32
T_237: (in edx_41 + 0x00000000 : word32)
  Class: Eq_237
  DataType: word32
  OrigDataType: word32
T_238: (in Mem45[edx_41 + 0x00000000:word32] : word32)
  Class: Eq_231
  DataType: word32
  OrigDataType: word32
T_239: (in 0x00000008 : word32)
  Class: Eq_239
  DataType: word32
  OrigDataType: word32
T_240: (in ecx_37 + 0x00000008 : word32)
  Class: Eq_217
  DataType: (ptr Eq_217)
  OrigDataType: word32
T_241: (in ecx_37 <u dwArg08 : bool)
  Class: Eq_241
  DataType: bool
  OrigDataType: bool
T_242: (in fn00401670 : ptr32)
  Class: Eq_242
  DataType: (ptr Eq_242)
  OrigDataType: (ptr (fn T_251 (T_214, T_248, T_249, T_250)))
T_243: (in signature of fn00401670 : void)
  Class: Eq_242
  DataType: (ptr Eq_242)
  OrigDataType: 
T_244: (in edi : word32)
  Class: Eq_21
  DataType: word32
  OrigDataType: word32
T_245: (in dwArg04 : word32)
  Class: Eq_245
  DataType: word32
  OrigDataType: word32
T_246: (in dwArg08 : word32)
  Class: Eq_246
  DataType: word32
  OrigDataType: word32
T_247: (in dwArg0C : word32)
  Class: Eq_247
  DataType: word32
  OrigDataType: word32
T_248: (in 0x00403000 : word32)
  Class: Eq_245
  DataType: word32
  OrigDataType: word32
T_249: (in 0x00403000 : word32)
  Class: Eq_246
  DataType: word32
  OrigDataType: word32
T_250: (in 0x00400000 : word32)
  Class: Eq_247
  DataType: word32
  OrigDataType: word32
T_251: (in fn00401670(edi, 0x00403000, 0x00403000, 0x00400000) : void)
  Class: Eq_251
  DataType: void
  OrigDataType: void
*/
typedef struct Globals {
	word32 dw403000;	// 403000
	word32 dw403024;	// 403024
} Eq_1;

typedef void (Eq_6)(word16);

typedef uint16 (Eq_7)();

typedef void (Eq_18)(word32, word32, word32);

typedef void (Eq_29)();

typedef word32 (Eq_41)(word32, word32, word32, word32);

typedef struct Eq_52 {
	word32 dw0000;	// 0
	word32 dw0004;	// 4
	word32 dw0008;	// 8
} Eq_52;

typedef struct Eq_83 {
	word32 dw0000;	// 0
	word32 dw0004;	// 4
	word32 dw0008;	// 8
	word32 dw000C;	// C
	word32 dw0010;	// 10
	word32 dw0014;	// 14
	word32 dw0018;	// 18
	word32 dw001C;	// 1C
	word32 dw0020;	// 20
	word32 dw0024;	// 24
	word32 dw0028;	// 28
	word32 dw002C;	// 2C
	word32 dw0030;	// 30
	word32 dw0034;	// 34
	word32 dw0038;	// 38
	word32 dw003C;	// 3C
	word32 dw0040;	// 40
	word32 dw0044;	// 44
	word32 dw0048;	// 48
	word32 dw004C;	// 4C
	word32 dw0050;	// 50
	word32 dw0054;	// 54
	word32 dw0078;	// 78
	word32 dw007C;	// 7C
	word32 dw0080;	// 80
	word32 dw0084;	// 84
	word32 dw00A4;	// A4
} Eq_83;

typedef word32 (Eq_188)(Eq_190);

typedef union Eq_190 {
	word32 u0;
	 LPCSTR u1;
} Eq_190;

typedef void (Eq_212)(word32);

typedef Eq_217 Eq_217Eq_217 Eq_217struct Eq_217 {	// size: 8 8
	word32 dw0000;	// 0
	Eq_217 t0004;	// 4
	Eq_217 t0008;	// 8
} Eq_217;

typedef void (Eq_242)(word32, word32, word32, word32);

