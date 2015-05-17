// subject.h
// Generated on TIMESTAMP by decompiling from_boomerang/callchain/ia32_elf_by_boomerang/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFFFFFF code tFFFFFFFF) (80487E8 (ptr code) ptr80487E8) (80494B8 char b80494B8) (804AAC8 word32 dw804AAC8))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_8: (fn void ((ptr (ptr code))))
	T_8 (in atexit : ptr32)
	T_9 (in signature of atexit : void)
	T_18 (in atexit : ptr32)
	T_52 (in atexit : ptr32)
Eq_14: (struct "Eq_14" (FFFFFFE8 word32 dwFFFFFFE8) (FFFFFFEC int32 dwFFFFFFEC) (FFFFFFF0 word32 dwFFFFFFF0))
	T_14 (in fp : ptr32)
Eq_29: (fn void (word32))
	T_29 (in fn08049470 : ptr32)
	T_30 (in signature of fn08049470 : void)
Eq_36: (fn int32 ())
	T_36 (in fn080489C4 : ptr32)
	T_37 (in signature of fn080489C4 : void)
Eq_42: (fn void (int32))
	T_42 (in exit : ptr32)
	T_43 (in signature of exit : void)
Eq_57: (fn word32 (word32, word32))
	T_57 (in fn08048949 : ptr32)
	T_58 (in signature of fn08048949 : void)
	T_66 (in fn08048949 : ptr32)
Eq_68: (fn (ptr word32) (word32))
	T_68 (in fn080491C8 : ptr32)
	T_69 (in signature of fn080491C8 : void)
Eq_88: <unknown>
	T_88 (in SLICE(0x080494B8, <unknown>, 32) : <unknown>)
	T_89 (in tLoc08_11 : <unknown>)
	T_93 (in ... : <unknown>)
Eq_90: (fn word32 ((ptr char), Eq_88))
	T_90 (in printf : ptr32)
	T_91 (in signature of printf : void)
Eq_96: (fn void (word32))
	T_96 (in fn080489B0 : ptr32)
	T_97 (in signature of fn080489B0 : void)
Eq_99: (fn word32 (word32))
	T_99 (in fn08048980 : ptr32)
	T_100 (in signature of fn08048980 : void)
Eq_102: (fn word32 (word32))
	T_102 (in fn08048990 : ptr32)
	T_103 (in signature of fn08048990 : void)
Eq_105: (fn word32 (word32))
	T_105 (in fn080489A0 : ptr32)
	T_106 (in signature of fn080489A0 : void)
Eq_114: (struct "Eq_114" (0 word32 dw0000) (8 word32 dw0008) (C (ptr Eq_126) ptr000C))
	T_114 (in ebp_10 : (ptr Eq_114))
	T_117 (in ebp : (ptr Eq_114))
	T_121 (in fp - 0x00000004 : word32)
	T_123 (in fn080491D1(fp - 0x00000004, dwLoc0C) : word32)
	T_125 (in fn080491D1(ebp_10, ebp) : word32)
Eq_115: (fn (ptr Eq_114) ((ptr Eq_114), word32))
	T_115 (in fn080491D1 : ptr32)
	T_116 (in signature of fn080491D1 : void)
	T_124 (in fn080491D1 : ptr32)
Eq_126: (struct "Eq_126" (0 word32 dw0000) (4 word32 dw0004) (8 word32 dw0008) (C word32 dw000C) (10 word32 dw0010) (14 (ptr Eq_126) ptr0014))
	T_126 (in edx_9 : (ptr Eq_126))
	T_129 (in Mem0[ebp + 0x0000000C:word32] : word32)
	T_155 (in Mem14[dwArg00 + 0x000018F3:word32] : word32)
	T_158 (in Mem16[edx_9 + 0x00000014:word32] : word32)
	T_161 (in Mem17[dwArg00 + 0x000018F3:word32] : word32)
Eq_152: (struct "Eq_152" (18F3 (ptr Eq_126) ptr18F3))
	T_152 (in dwArg00 : word32)
Eq_166: (fn (ptr word32) ((ptr word32), word32))
	T_166 (in fn08049422 : ptr32)
	T_167 (in signature of fn08049422 : void)
	T_175 (in fn08049422 : ptr32)
Eq_178: (struct "Eq_178" 0004 (FFFFFFFC Eq_178 tFFFFFFFC) (0 (ptr code) ptr0000))
	T_178 (in esi_23 : (ptr Eq_178))
	T_181 (in dwArg00 + 0x0000117A : word32)
	T_195 (in esi_23 + 0xFFFFFFFC : word32)
Eq_179: (struct "Eq_179" (117A Eq_207 u117A))
	T_179 (in dwArg00 : word32)
Eq_201: (fn void (word32))
	T_201 (in fn08049418 : ptr32)
	T_202 (in signature of fn08049418 : void)
Eq_203: (fn word32 (word32))
	T_203 (in fn08048940 : ptr32)
	T_204 (in signature of fn08048940 : void)
Eq_207: (union "Eq_207" (word32 u0) (Eq_178 u1))
	T_207
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr Eq_1)
  OrigDataType: (ptr (struct "Globals"))
T_2: (in 0x080487E8 : word32)
  Class: Eq_2
  DataType: word32
  OrigDataType: word32
T_3: (in 0x00000000 : word32)
  Class: Eq_2
  DataType: word32
  OrigDataType: word32
T_4: (in 0x080487E8 == 0x00000000 : bool)
  Class: Eq_4
  DataType: bool
  OrigDataType: bool
T_5: (in 0x0804A500 : word32)
  Class: Eq_5
  DataType: word32
  OrigDataType: word32
T_6: (in 0x00000000 : word32)
  Class: Eq_5
  DataType: word32
  OrigDataType: word32
T_7: (in 0x0804A500 == 0x00000000 : bool)
  Class: Eq_7
  DataType: bool
  OrigDataType: bool
T_8: (in atexit : ptr32)
  Class: Eq_8
  DataType: (ptr Eq_8)
  OrigDataType: (ptr (fn T_12 (T_11)))
T_9: (in signature of atexit : void)
  Class: Eq_8
  DataType: (ptr Eq_8)
  OrigDataType: 
T_10: (in func : (ptr (ptr code)))
  Class: Eq_10
  DataType: (ptr (ptr code))
  OrigDataType: (ptr (ptr code))
T_11: (in 0x080487E8 : word32)
  Class: Eq_10
  DataType: (ptr (ptr code))
  OrigDataType: word32
T_12: (in atexit(&globals->ptr80487E8) : void)
  Class: Eq_12
  DataType: void
  OrigDataType: void
T_13: (in 0x080494A0 : word32)
  Class: Eq_13
  DataType: word32
  OrigDataType: word32
T_14: (in fp : ptr32)
  Class: Eq_14
  DataType: (ptr Eq_14)
  OrigDataType: (ptr (struct (FFFFFFE8 T_51 tFFFFFFE8) (FFFFFFEC T_38 tFFFFFFEC) (FFFFFFF0 T_17 tFFFFFFF0)))
T_15: (in 0x00000010 : word32)
  Class: Eq_15
  DataType: word32
  OrigDataType: word32
T_16: (in fp - 0x00000010 : word32)
  Class: Eq_16
  DataType: word32
  OrigDataType: word32
T_17: (in Mem24[fp - 0x00000010:word32] : word32)
  Class: Eq_13
  DataType: word32
  OrigDataType: word32
T_18: (in atexit : ptr32)
  Class: Eq_8
  DataType: (ptr Eq_8)
  OrigDataType: (ptr (fn T_20 (T_19)))
T_19: (in 0x080487E8 : word32)
  Class: Eq_10
  DataType: (ptr (ptr code))
  OrigDataType: word32
T_20: (in atexit(&globals->ptr80487E8) : void)
  Class: Eq_12
  DataType: void
  OrigDataType: void
T_21: (in 0x00000008 : word32)
  Class: Eq_21
  DataType: word32
  OrigDataType: word32
T_22: (in fp + 0x00000008 : word32)
  Class: Eq_22
  DataType: word32
  OrigDataType: word32
T_23: (in dwArg00 : word32)
  Class: Eq_23
  DataType: ui32
  OrigDataType: ui32
T_24: (in 0x00000004 : word32)
  Class: Eq_24
  DataType: ui32
  OrigDataType: ui32
T_25: (in dwArg00 * 0x00000004 : word32)
  Class: Eq_25
  DataType: ui32
  OrigDataType: ui32
T_26: (in &fp->dwFFFFFFF0 + dwArg00 * 0x00000004 : word32)
  Class: Eq_26
  DataType: word32
  OrigDataType: word32
T_27: (in 0x0804AAC8 : ptr32)
  Class: Eq_27
  DataType: (ptr word32)
  OrigDataType: (ptr (struct (0 T_28 t0000)))
T_28: (in Mem28[0x0804AAC8:word32] : word32)
  Class: Eq_26
  DataType: word32
  OrigDataType: word32
T_29: (in fn08049470 : ptr32)
  Class: Eq_29
  DataType: (ptr Eq_29)
  OrigDataType: (ptr (fn T_34 (T_33)))
T_30: (in signature of fn08049470 : void)
  Class: Eq_29
  DataType: (ptr Eq_29)
  OrigDataType: 
T_31: (in ebp : word32)
  Class: Eq_31
  DataType: word32
  OrigDataType: word32
T_32: (in 0x00000008 : word32)
  Class: Eq_32
  DataType: word32
  OrigDataType: word32
T_33: (in fp - 0x00000008 : word32)
  Class: Eq_31
  DataType: word32
  OrigDataType: word32
T_34: (in fn08049470(fp - 0x00000008) : void)
  Class: Eq_34
  DataType: void
  OrigDataType: void
T_35: (in __fpstart : ptr32)
  Class: Eq_35
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_36: (in fn080489C4 : ptr32)
  Class: Eq_36
  DataType: (ptr Eq_36)
  OrigDataType: (ptr (fn T_38 ()))
T_37: (in signature of fn080489C4 : void)
  Class: Eq_36
  DataType: (ptr Eq_36)
  OrigDataType: 
T_38: (in fn080489C4() : word32)
  Class: Eq_38
  DataType: int32
  OrigDataType: word32
T_39: (in 0x00000014 : word32)
  Class: Eq_39
  DataType: word32
  OrigDataType: word32
T_40: (in fp - 0x00000014 : word32)
  Class: Eq_40
  DataType: word32
  OrigDataType: word32
T_41: (in Mem40[fp - 0x00000014:word32] : word32)
  Class: Eq_38
  DataType: int32
  OrigDataType: word32
T_42: (in exit : ptr32)
  Class: Eq_42
  DataType: (ptr Eq_42)
  OrigDataType: (ptr (fn T_47 (T_46)))
T_43: (in signature of exit : void)
  Class: Eq_42
  DataType: (ptr Eq_42)
  OrigDataType: 
T_44: (in arg0 : int32)
  Class: Eq_38
  DataType: int32
  OrigDataType: int32
T_45: (in fp - 0x00000014 : word32)
  Class: Eq_45
  DataType: word32
  OrigDataType: word32
T_46: (in Mem40[fp - 0x00000014:int32] : int32)
  Class: Eq_38
  DataType: int32
  OrigDataType: int32
T_47: (in exit(fp->dwFFFFFFF0) : void)
  Class: Eq_47
  DataType: void
  OrigDataType: void
T_48: (in 0x00000000 : word32)
  Class: Eq_48
  DataType: word32
  OrigDataType: word32
T_49: (in 0x00000018 : word32)
  Class: Eq_49
  DataType: word32
  OrigDataType: word32
T_50: (in fp - 0x00000018 : word32)
  Class: Eq_50
  DataType: word32
  OrigDataType: word32
T_51: (in Mem42[fp - 0x00000018:word32] : word32)
  Class: Eq_48
  DataType: word32
  OrigDataType: word32
T_52: (in atexit : ptr32)
  Class: Eq_8
  DataType: (ptr Eq_8)
  OrigDataType: (ptr (fn T_54 (T_53)))
T_53: (in edx : (ptr (ptr code)))
  Class: Eq_10
  DataType: (ptr (ptr code))
  OrigDataType: word32
T_54: (in atexit(edx) : void)
  Class: Eq_12
  DataType: void
  OrigDataType: void
T_55: (in ebp : word32)
  Class: Eq_31
  DataType: word32
  OrigDataType: word32
T_56: (in ebp_10 : word32)
  Class: Eq_56
  DataType: word32
  OrigDataType: word32
T_57: (in fn08048949 : ptr32)
  Class: Eq_57
  DataType: (ptr Eq_57)
  OrigDataType: (ptr (fn T_65 (T_63, T_64)))
T_58: (in signature of fn08048949 : void)
  Class: Eq_57
  DataType: (ptr Eq_57)
  OrigDataType: 
T_59: (in ebp : word32)
  Class: Eq_56
  DataType: word32
  OrigDataType: word32
T_60: (in dwArg00 : word32)
  Class: Eq_31
  DataType: word32
  OrigDataType: word32
T_61: (in fp : ptr32)
  Class: Eq_61
  DataType: ptr32
  OrigDataType: ptr32
T_62: (in 0x00000004 : word32)
  Class: Eq_62
  DataType: word32
  OrigDataType: word32
T_63: (in fp - 0x00000004 : word32)
  Class: Eq_56
  DataType: word32
  OrigDataType: word32
T_64: (in dwLoc0C : word32)
  Class: Eq_31
  DataType: word32
  OrigDataType: word32
T_65: (in fn08048949(fp - 0x00000004, dwLoc0C) : word32)
  Class: Eq_56
  DataType: word32
  OrigDataType: word32
T_66: (in fn08048949 : ptr32)
  Class: Eq_57
  DataType: (ptr Eq_57)
  OrigDataType: (ptr (fn T_67 (T_56, T_55)))
T_67: (in fn08048949(ebp_10, ebp) : word32)
  Class: Eq_56
  DataType: word32
  OrigDataType: word32
T_68: (in fn080491C8 : ptr32)
  Class: Eq_68
  DataType: (ptr Eq_68)
  OrigDataType: (ptr (fn T_71 (T_59)))
T_69: (in signature of fn080491C8 : void)
  Class: Eq_68
  DataType: (ptr Eq_68)
  OrigDataType: 
T_70: (in ebp : word32)
  Class: Eq_56
  DataType: word32
  OrigDataType: word32
T_71: (in fn080491C8(ebp) : word32)
  Class: Eq_71
  DataType: (ptr word32)
  OrigDataType: (ptr (struct (0 T_72 t0000)))
T_72: (in Mem0[fn080491C8(ebp):word32] : word32)
  Class: Eq_72
  DataType: word32
  OrigDataType: word32
T_73: (in eax : word32)
  Class: Eq_73
  DataType: word32
  OrigDataType: word32
T_74: (in dwArg04 : word32)
  Class: Eq_74
  DataType: word32
  OrigDataType: word32
T_75: (in 0x00000005 : word32)
  Class: Eq_75
  DataType: word32
  OrigDataType: word32
T_76: (in dwArg04 + 0x00000005 : word32)
  Class: Eq_76
  DataType: word32
  OrigDataType: word32
T_77: (in eax : word32)
  Class: Eq_77
  DataType: word32
  OrigDataType: word32
T_78: (in dwArg04 : word32)
  Class: Eq_78
  DataType: word32
  OrigDataType: word32
T_79: (in 0x0000000A : word32)
  Class: Eq_79
  DataType: word32
  OrigDataType: word32
T_80: (in dwArg04 + 0x0000000A : word32)
  Class: Eq_80
  DataType: word32
  OrigDataType: word32
T_81: (in eax : word32)
  Class: Eq_81
  DataType: word32
  OrigDataType: word32
T_82: (in dwArg04 : word32)
  Class: Eq_82
  DataType: word32
  OrigDataType: word32
T_83: (in 0x0000000F : word32)
  Class: Eq_83
  DataType: word32
  OrigDataType: word32
T_84: (in dwArg04 + 0x0000000F : word32)
  Class: Eq_84
  DataType: word32
  OrigDataType: word32
T_85: (in 0x080494B8 : word32)
  Class: Eq_85
  DataType: (ptr char)
  OrigDataType: word32
T_86: (in dwLoc0C_10 : word32)
  Class: Eq_85
  DataType: (ptr char)
  OrigDataType: word32
T_87: (in 0x080494B8 : word32)
  Class: Eq_87
  DataType: word32
  OrigDataType: word32
T_88: (in SLICE(0x080494B8, <unknown>, 32) : <unknown>)
  Class: Eq_88
  DataType: Eq_88
  OrigDataType: <unknown>
T_89: (in tLoc08_11 : <unknown>)
  Class: Eq_88
  DataType: Eq_88
  OrigDataType: <unknown>
T_90: (in printf : ptr32)
  Class: Eq_90
  DataType: (ptr Eq_90)
  OrigDataType: (ptr (fn T_94 (T_86, T_89)))
T_91: (in signature of printf : void)
  Class: Eq_90
  DataType: (ptr Eq_90)
  OrigDataType: 
T_92: (in format : (ptr char))
  Class: Eq_85
  DataType: (ptr char)
  OrigDataType: (ptr char)
T_93: (in ... : <unknown>)
  Class: Eq_88
  DataType: Eq_88
  OrigDataType: <unknown>
T_94: (in printf(dwLoc0C_10, tLoc08_11) : word32)
  Class: Eq_94
  DataType: word32
  OrigDataType: word32
T_95: (in eax : word32)
  Class: Eq_95
  DataType: word32
  OrigDataType: word32
T_96: (in fn080489B0 : ptr32)
  Class: Eq_96
  DataType: (ptr Eq_96)
  OrigDataType: (ptr (fn T_112 (T_111)))
T_97: (in signature of fn080489B0 : void)
  Class: Eq_96
  DataType: (ptr Eq_96)
  OrigDataType: 
T_98: (in dwArg04 : word32)
  Class: Eq_98
  DataType: word32
  OrigDataType: word32
T_99: (in fn08048980 : ptr32)
  Class: Eq_99
  DataType: (ptr Eq_99)
  OrigDataType: (ptr (fn T_111 (T_110)))
T_100: (in signature of fn08048980 : void)
  Class: Eq_99
  DataType: (ptr Eq_99)
  OrigDataType: 
T_101: (in dwArg04 : word32)
  Class: Eq_101
  DataType: word32
  OrigDataType: word32
T_102: (in fn08048990 : ptr32)
  Class: Eq_102
  DataType: (ptr Eq_102)
  OrigDataType: (ptr (fn T_110 (T_109)))
T_103: (in signature of fn08048990 : void)
  Class: Eq_102
  DataType: (ptr Eq_102)
  OrigDataType: 
T_104: (in dwArg04 : word32)
  Class: Eq_104
  DataType: word32
  OrigDataType: word32
T_105: (in fn080489A0 : ptr32)
  Class: Eq_105
  DataType: (ptr Eq_105)
  OrigDataType: (ptr (fn T_109 (T_108)))
T_106: (in signature of fn080489A0 : void)
  Class: Eq_105
  DataType: (ptr Eq_105)
  OrigDataType: 
T_107: (in dwArg04 : word32)
  Class: Eq_107
  DataType: word32
  OrigDataType: word32
T_108: (in 0x00000019 : word32)
  Class: Eq_107
  DataType: word32
  OrigDataType: word32
T_109: (in fn080489A0(0x00000019) : word32)
  Class: Eq_104
  DataType: word32
  OrigDataType: word32
T_110: (in fn08048990(fn080489A0(0x00000019)) : word32)
  Class: Eq_101
  DataType: word32
  OrigDataType: word32
T_111: (in fn08048980(fn08048990(fn080489A0(0x00000019))) : word32)
  Class: Eq_98
  DataType: word32
  OrigDataType: word32
T_112: (in fn080489B0(fn08048980(fn08048990(fn080489A0(0x00000019)))) : void)
  Class: Eq_112
  DataType: void
  OrigDataType: void
T_113: (in 0x00000000 : word32)
  Class: Eq_113
  DataType: word32
  OrigDataType: word32
T_114: (in ebp_10 : (ptr Eq_114))
  Class: Eq_114
  DataType: (ptr Eq_114)
  OrigDataType: word32
T_115: (in fn080491D1 : ptr32)
  Class: Eq_115
  DataType: (ptr Eq_115)
  OrigDataType: (ptr (fn T_123 (T_121, T_122)))
T_116: (in signature of fn080491D1 : void)
  Class: Eq_115
  DataType: (ptr Eq_115)
  OrigDataType: 
T_117: (in ebp : (ptr Eq_114))
  Class: Eq_114
  DataType: (ptr Eq_114)
  OrigDataType: (ptr (struct (0 T_164 t0000) (8 T_132 t0008) (C T_129 t000C)))
T_118: (in dwArg00 : word32)
  Class: Eq_56
  DataType: word32
  OrigDataType: word32
T_119: (in fp : ptr32)
  Class: Eq_119
  DataType: ptr32
  OrigDataType: ptr32
T_120: (in 0x00000004 : word32)
  Class: Eq_120
  DataType: word32
  OrigDataType: word32
T_121: (in fp - 0x00000004 : word32)
  Class: Eq_114
  DataType: (ptr Eq_114)
  OrigDataType: word32
T_122: (in dwLoc0C : word32)
  Class: Eq_56
  DataType: word32
  OrigDataType: word32
T_123: (in fn080491D1(fp - 0x00000004, dwLoc0C) : word32)
  Class: Eq_114
  DataType: (ptr Eq_114)
  OrigDataType: word32
T_124: (in fn080491D1 : ptr32)
  Class: Eq_115
  DataType: (ptr Eq_115)
  OrigDataType: (ptr (fn T_125 (T_114, T_70)))
T_125: (in fn080491D1(ebp_10, ebp) : word32)
  Class: Eq_114
  DataType: (ptr Eq_114)
  OrigDataType: word32
T_126: (in edx_9 : (ptr Eq_126))
  Class: Eq_126
  DataType: (ptr Eq_126)
  OrigDataType: (ptr (struct (0 T_143 t0000) (4 T_139 t0004) (8 T_135 t0008) (C T_147 t000C) (10 T_151 t0010) (14 T_158 t0014)))
T_127: (in 0x0000000C : word32)
  Class: Eq_127
  DataType: word32
  OrigDataType: word32
T_128: (in ebp + 0x0000000C : word32)
  Class: Eq_128
  DataType: word32
  OrigDataType: word32
T_129: (in Mem0[ebp + 0x0000000C:word32] : word32)
  Class: Eq_126
  DataType: (ptr Eq_126)
  OrigDataType: word32
T_130: (in 0x00000008 : word32)
  Class: Eq_130
  DataType: word32
  OrigDataType: word32
T_131: (in ebp + 0x00000008 : word32)
  Class: Eq_131
  DataType: word32
  OrigDataType: word32
T_132: (in Mem0[ebp + 0x00000008:word32] : word32)
  Class: Eq_132
  DataType: word32
  OrigDataType: word32
T_133: (in 0x00000008 : word32)
  Class: Eq_133
  DataType: word32
  OrigDataType: word32
T_134: (in edx_9 + 0x00000008 : word32)
  Class: Eq_134
  DataType: word32
  OrigDataType: word32
T_135: (in Mem10[edx_9 + 0x00000008:word32] : word32)
  Class: Eq_132
  DataType: word32
  OrigDataType: word32
T_136: (in 0x00000000 : word32)
  Class: Eq_136
  DataType: word32
  OrigDataType: word32
T_137: (in 0x00000004 : word32)
  Class: Eq_137
  DataType: word32
  OrigDataType: word32
T_138: (in edx_9 + 0x00000004 : word32)
  Class: Eq_138
  DataType: word32
  OrigDataType: word32
T_139: (in Mem11[edx_9 + 0x00000004:word32] : word32)
  Class: Eq_136
  DataType: word32
  OrigDataType: word32
T_140: (in 0x00000000 : word32)
  Class: Eq_140
  DataType: word32
  OrigDataType: word32
T_141: (in 0x00000000 : word32)
  Class: Eq_141
  DataType: word32
  OrigDataType: word32
T_142: (in edx_9 + 0x00000000 : word32)
  Class: Eq_142
  DataType: word32
  OrigDataType: word32
T_143: (in Mem12[edx_9 + 0x00000000:word32] : word32)
  Class: Eq_140
  DataType: word32
  OrigDataType: word32
T_144: (in 0x00000000 : word32)
  Class: Eq_144
  DataType: word32
  OrigDataType: word32
T_145: (in 0x0000000C : word32)
  Class: Eq_145
  DataType: word32
  OrigDataType: word32
T_146: (in edx_9 + 0x0000000C : word32)
  Class: Eq_146
  DataType: word32
  OrigDataType: word32
T_147: (in Mem13[edx_9 + 0x0000000C:word32] : word32)
  Class: Eq_144
  DataType: word32
  OrigDataType: word32
T_148: (in 0x00000000 : word32)
  Class: Eq_148
  DataType: word32
  OrigDataType: word32
T_149: (in 0x00000010 : word32)
  Class: Eq_149
  DataType: word32
  OrigDataType: word32
T_150: (in edx_9 + 0x00000010 : word32)
  Class: Eq_150
  DataType: word32
  OrigDataType: word32
T_151: (in Mem14[edx_9 + 0x00000010:word32] : word32)
  Class: Eq_148
  DataType: word32
  OrigDataType: word32
T_152: (in dwArg00 : word32)
  Class: Eq_152
  DataType: (ptr Eq_152)
  OrigDataType: (ptr (struct (18F3 T_126 t18F3)))
T_153: (in 0x000018F3 : word32)
  Class: Eq_153
  DataType: word32
  OrigDataType: word32
T_154: (in dwArg00 + 0x000018F3 : word32)
  Class: Eq_154
  DataType: word32
  OrigDataType: word32
T_155: (in Mem14[dwArg00 + 0x000018F3:word32] : word32)
  Class: Eq_126
  DataType: (ptr Eq_126)
  OrigDataType: word32
T_156: (in 0x00000014 : word32)
  Class: Eq_156
  DataType: word32
  OrigDataType: word32
T_157: (in edx_9 + 0x00000014 : word32)
  Class: Eq_157
  DataType: word32
  OrigDataType: word32
T_158: (in Mem16[edx_9 + 0x00000014:word32] : word32)
  Class: Eq_126
  DataType: (ptr Eq_126)
  OrigDataType: word32
T_159: (in 0x000018F3 : word32)
  Class: Eq_159
  DataType: word32
  OrigDataType: word32
T_160: (in dwArg00 + 0x000018F3 : word32)
  Class: Eq_160
  DataType: word32
  OrigDataType: word32
T_161: (in Mem17[dwArg00 + 0x000018F3:word32] : word32)
  Class: Eq_126
  DataType: (ptr Eq_126)
  OrigDataType: word32
T_162: (in 0x00000000 : word32)
  Class: Eq_162
  DataType: word32
  OrigDataType: word32
T_163: (in ebp + 0x00000000 : word32)
  Class: Eq_163
  DataType: word32
  OrigDataType: word32
T_164: (in Mem17[ebp + 0x00000000:word32] : word32)
  Class: Eq_164
  DataType: word32
  OrigDataType: word32
T_165: (in ebp_13 : (ptr word32))
  Class: Eq_165
  DataType: (ptr word32)
  OrigDataType: word32
T_166: (in fn08049422 : ptr32)
  Class: Eq_166
  DataType: (ptr Eq_166)
  OrigDataType: (ptr (fn T_174 (T_172, T_173)))
T_167: (in signature of fn08049422 : void)
  Class: Eq_166
  DataType: (ptr Eq_166)
  OrigDataType: 
T_168: (in ebp : (ptr word32))
  Class: Eq_165
  DataType: (ptr word32)
  OrigDataType: (ptr (struct (0 T_189 t0000)))
T_169: (in dwArg00 : word32)
  Class: Eq_169
  DataType: word32
  OrigDataType: word32
T_170: (in fp : ptr32)
  Class: Eq_170
  DataType: ptr32
  OrigDataType: ptr32
T_171: (in 0x00000004 : word32)
  Class: Eq_171
  DataType: word32
  OrigDataType: word32
T_172: (in fp - 0x00000004 : word32)
  Class: Eq_165
  DataType: (ptr word32)
  OrigDataType: word32
T_173: (in dwLoc10 : word32)
  Class: Eq_169
  DataType: word32
  OrigDataType: word32
T_174: (in fn08049422(fp - 0x00000004, dwLoc10) : word32)
  Class: Eq_165
  DataType: (ptr word32)
  OrigDataType: word32
T_175: (in fn08049422 : ptr32)
  Class: Eq_166
  DataType: (ptr Eq_166)
  OrigDataType: (ptr (fn T_177 (T_165, T_176)))
T_176: (in ebp : word32)
  Class: Eq_169
  DataType: word32
  OrigDataType: word32
T_177: (in fn08049422(ebp_13, ebp) : word32)
  Class: Eq_165
  DataType: (ptr word32)
  OrigDataType: word32
T_178: (in esi_23 : (ptr Eq_178))
  Class: Eq_178
  DataType: (ptr Eq_178)
  OrigDataType: (ptr (struct 0004 (0 T_190 t0000)))
T_179: (in dwArg00 : word32)
  Class: Eq_179
  DataType: (ptr Eq_179)
  OrigDataType: (ptr (struct (117A T_184 t117A)))
T_180: (in 0x0000117A : word32)
  Class: Eq_180
  DataType: word32
  OrigDataType: word32
T_181: (in dwArg00 + 0x0000117A : word32)
  Class: Eq_178
  DataType: (ptr Eq_178)
  OrigDataType: word32
T_182: (in 0x0000117A : word32)
  Class: Eq_182
  DataType: word32
  OrigDataType: word32
T_183: (in dwArg00 + 0x0000117A : word32)
  Class: Eq_183
  DataType: word32
  OrigDataType: word32
T_184: (in Mem0[dwArg00 + 0x0000117A:word32] : word32)
  Class: Eq_184
  DataType: word32
  OrigDataType: word32
T_185: (in 0xFFFFFFFF : word32)
  Class: Eq_184
  DataType: word32
  OrigDataType: word32
T_186: (in dwArg00->u117A == 0xFFFFFFFF : bool)
  Class: Eq_186
  DataType: bool
  OrigDataType: bool
T_187: (in 0x00000000 : word32)
  Class: Eq_187
  DataType: word32
  OrigDataType: word32
T_188: (in ebp + 0x00000000 : word32)
  Class: Eq_188
  DataType: word32
  OrigDataType: word32
T_189: (in Mem0[ebp + 0x00000000:word32] : word32)
  Class: Eq_189
  DataType: word32
  OrigDataType: word32
T_190: (in eax_24 : (ptr code))
  Class: Eq_190
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_191: (in 0x00000000 : word32)
  Class: Eq_191
  DataType: word32
  OrigDataType: word32
T_192: (in esi_23 + 0x00000000 : word32)
  Class: Eq_192
  DataType: word32
  OrigDataType: word32
T_193: (in Mem0[esi_23 + 0x00000000:word32] : word32)
  Class: Eq_190
  DataType: (ptr code)
  OrigDataType: word32
T_194: (in 0xFFFFFFFC : word32)
  Class: Eq_194
  DataType: word32
  OrigDataType: word32
T_195: (in esi_23 + 0xFFFFFFFC : word32)
  Class: Eq_178
  DataType: (ptr Eq_178)
  OrigDataType: word32
T_196: (in 0x00000000 : word32)
  Class: Eq_196
  DataType: word32
  OrigDataType: word32
T_197: (in esi_23 + 0x00000000 : word32)
  Class: Eq_197
  DataType: word32
  OrigDataType: word32
T_198: (in Mem0[esi_23 + 0x00000000:word32] : word32)
  Class: Eq_190
  DataType: (ptr code)
  OrigDataType: word32
T_199: (in 0xFFFFFFFF : word32)
  Class: Eq_190
  DataType: (ptr code)
  OrigDataType: word32
T_200: (in esi_23->ptr0000 != (code *) 0xFFFFFFFF : bool)
  Class: Eq_200
  DataType: bool
  OrigDataType: bool
T_201: (in fn08049418 : ptr32)
  Class: Eq_201
  DataType: (ptr Eq_201)
  OrigDataType: (ptr (fn T_206 (T_205)))
T_202: (in signature of fn08049418 : void)
  Class: Eq_201
  DataType: (ptr Eq_201)
  OrigDataType: 
T_203: (in fn08048940 : ptr32)
  Class: Eq_203
  DataType: (ptr Eq_203)
  OrigDataType: (ptr (fn T_205 (T_31)))
T_204: (in signature of fn08048940 : void)
  Class: Eq_203
  DataType: (ptr Eq_203)
  OrigDataType: 
T_205: (in fn08048940(ebp) : word32)
  Class: Eq_169
  DataType: word32
  OrigDataType: word32
T_206: (in fn08049418(fn08048940(ebp)) : void)
  Class: Eq_206
  DataType: void
  OrigDataType: void
T_207:
  Class: Eq_207
  DataType: Eq_207
  OrigDataType: 
*/
typedef code Eq_1code Eq_1struct Globals {
	code tFFFFFFFF;	// FFFFFFFF
	code * ptr80487E8;	// 80487E8
	char b80494B8;	// 80494B8
	word32 dw804AAC8;	// 804AAC8
} Eq_1;

typedef void (Eq_8)(code * *);

typedef struct Eq_14 {
	word32 dwFFFFFFE8;	// FFFFFFE8
	int32 dwFFFFFFEC;	// FFFFFFEC
	word32 dwFFFFFFF0;	// FFFFFFF0
} Eq_14;

typedef void (Eq_29)(word32);

typedef int32 (Eq_36)();

typedef void (Eq_42)(int32);

typedef word32 (Eq_57)(word32, word32);

typedef word32 * (Eq_68)(word32);

typedef void;

typedef word32 (Eq_90)(char *, );

typedef void (Eq_96)(word32);

typedef word32 (Eq_99)(word32);

typedef word32 (Eq_102)(word32);

typedef word32 (Eq_105)(word32);

typedef Eq_126 Eq_114struct Eq_114 {
	word32 dw0000;	// 0
	word32 dw0008;	// 8
	Eq_126 * ptr000C;	// C
} Eq_114;

typedef Eq_114 * (Eq_115)(Eq_114 *, word32);

typedef Eq_126 Eq_126struct Eq_126 {
	word32 dw0000;	// 0
	word32 dw0004;	// 4
	word32 dw0008;	// 8
	word32 dw000C;	// C
	word32 dw0010;	// 10
	Eq_126 * ptr0014;	// 14
} Eq_126;

typedef Eq_126 Eq_152struct Eq_152 {
	Eq_126 * ptr18F3;	// 18F3
} Eq_152;

typedef word32 * (Eq_166)(word32 *, word32);

typedef Eq_178 Eq_178code Eq_178struct Eq_178 {	// size: 4 4
	Eq_178 tFFFFFFFC;	// FFFFFFFC
	code * ptr0000;	// 0
} Eq_178;

typedef Eq_207 Eq_179struct Eq_179 {
	Eq_207 u117A;	// 117A
} Eq_179;

typedef void (Eq_201)(word32);

typedef word32 (Eq_203)(word32);

typedef union Eq_207 {
	word32 u0;
	Eq_178 u1;
} Eq_207;

