// subject.h
// Generated on TIMESTAMP by decompiling from_boomerang/switch/ia32_elf_by_boomerang_gcc/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFFFFFF code tFFFFFFFF) (8048780 (ptr code) ptr8048780) (8049458 char b8049458) (804945E char b804945E) (8049466 char b8049466) (804946D char b804946D) (8049474 char b8049474) (804947A char b804947A) (8049482 char b8049482) (804AA88 word32 dw804AA88))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_8: (fn void ((ptr (ptr code))))
	T_8 (in atexit : ptr32)
	T_9 (in signature of atexit : void)
	T_18 (in atexit : ptr32)
	T_54 (in atexit : ptr32)
Eq_14: (struct "Eq_14" (FFFFFFE8 word32 dwFFFFFFE8) (FFFFFFEC int32 dwFFFFFFEC) (FFFFFFF0 word32 dwFFFFFFF0))
	T_14 (in fp : ptr32)
Eq_30: (fn int32 (word32, ui32))
	T_30 (in fn08048918 : ptr32)
	T_31 (in signature of fn08048918 : void)
Eq_34: (fn word32 (word32))
	T_34 (in fn08049410 : ptr32)
	T_35 (in signature of fn08049410 : void)
Eq_44: (fn void (int32))
	T_44 (in exit : ptr32)
	T_45 (in signature of exit : void)
Eq_59: (fn word32 (word32, word32))
	T_59 (in fn080488E1 : ptr32)
	T_60 (in signature of fn080488E1 : void)
	T_68 (in fn080488E1 : ptr32)
Eq_70: (fn (ptr word32) (word32))
	T_70 (in fn08049170 : ptr32)
	T_71 (in signature of fn08049170 : void)
Eq_89: (fn word32 ((ptr char), Eq_92))
	T_89 (in printf : ptr32)
	T_90 (in signature of printf : void)
Eq_92: <unknown>
	T_92 (in ... : <unknown>)
	T_93 (in tLoc04 : <unknown>)
Eq_96: (struct "Eq_96" (0 word32 dw0000) (8 word32 dw0008) (C (ptr Eq_108) ptr000C))
	T_96 (in ebp_10 : (ptr Eq_96))
	T_99 (in ebp : (ptr Eq_96))
	T_103 (in fp - 0x00000004 : word32)
	T_105 (in fn08049179(fp - 0x00000004, dwLoc0C) : word32)
	T_107 (in fn08049179(ebp_10, ebp) : word32)
Eq_97: (fn (ptr Eq_96) ((ptr Eq_96), word32))
	T_97 (in fn08049179 : ptr32)
	T_98 (in signature of fn08049179 : void)
	T_106 (in fn08049179 : ptr32)
Eq_108: (struct "Eq_108" (0 word32 dw0000) (4 word32 dw0004) (8 word32 dw0008) (C word32 dw000C) (10 word32 dw0010) (14 (ptr Eq_108) ptr0014))
	T_108 (in edx_9 : (ptr Eq_108))
	T_111 (in Mem0[ebp + 0x0000000C:word32] : word32)
	T_137 (in Mem14[dwArg00 + 0x0000190B:word32] : word32)
	T_140 (in Mem16[edx_9 + 0x00000014:word32] : word32)
	T_143 (in Mem17[dwArg00 + 0x0000190B:word32] : word32)
Eq_134: (struct "Eq_134" (190B (ptr Eq_108) ptr190B))
	T_134 (in dwArg00 : word32)
Eq_149: (fn (ptr word32) ((ptr word32), word32))
	T_149 (in fn080493CA : ptr32)
	T_150 (in signature of fn080493CA : void)
	T_158 (in fn080493CA : ptr32)
Eq_160: (struct "Eq_160" 0004 (FFFFFFFC Eq_160 tFFFFFFFC) (0 (ptr code) ptr0000))
	T_160 (in esi_23 : (ptr Eq_160))
	T_163 (in dwArg00 + 0x00001192 : word32)
	T_177 (in esi_23 + 0xFFFFFFFC : word32)
Eq_161: (struct "Eq_161" (1192 Eq_189 u1192))
	T_161 (in dwArg00 : word32)
Eq_183: (fn word32 (word32))
	T_183 (in fn080493C0 : ptr32)
	T_184 (in signature of fn080493C0 : void)
Eq_185: (fn word32 (word32))
	T_185 (in fn080488D8 : ptr32)
	T_186 (in signature of fn080488D8 : void)
Eq_189: (union "Eq_189" (word32 u0) (Eq_160 u1))
	T_189
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr Eq_1)
  OrigDataType: (ptr (struct "Globals"))
T_2: (in 0x08048780 : word32)
  Class: Eq_2
  DataType: word32
  OrigDataType: word32
T_3: (in 0x00000000 : word32)
  Class: Eq_2
  DataType: word32
  OrigDataType: word32
T_4: (in 0x08048780 == 0x00000000 : bool)
  Class: Eq_4
  DataType: bool
  OrigDataType: bool
T_5: (in 0x0804A4C0 : word32)
  Class: Eq_5
  DataType: word32
  OrigDataType: word32
T_6: (in 0x00000000 : word32)
  Class: Eq_5
  DataType: word32
  OrigDataType: word32
T_7: (in 0x0804A4C0 == 0x00000000 : bool)
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
T_11: (in 0x08048780 : word32)
  Class: Eq_10
  DataType: (ptr (ptr code))
  OrigDataType: word32
T_12: (in atexit(&globals->ptr8048780) : void)
  Class: Eq_12
  DataType: void
  OrigDataType: void
T_13: (in 0x08049440 : word32)
  Class: Eq_13
  DataType: word32
  OrigDataType: word32
T_14: (in fp : ptr32)
  Class: Eq_14
  DataType: (ptr Eq_14)
  OrigDataType: (ptr (struct (FFFFFFE8 T_53 tFFFFFFE8) (FFFFFFEC T_40 tFFFFFFEC) (FFFFFFF0 T_17 tFFFFFFF0)))
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
T_19: (in 0x08048780 : word32)
  Class: Eq_10
  DataType: (ptr (ptr code))
  OrigDataType: word32
T_20: (in atexit(&globals->ptr8048780) : void)
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
T_27: (in 0x0804AA88 : ptr32)
  Class: Eq_27
  DataType: (ptr word32)
  OrigDataType: (ptr (struct (0 T_28 t0000)))
T_28: (in Mem28[0x0804AA88:word32] : word32)
  Class: Eq_26
  DataType: word32
  OrigDataType: word32
T_29: (in __fpstart : ptr32)
  Class: Eq_29
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_30: (in fn08048918 : ptr32)
  Class: Eq_30
  DataType: (ptr Eq_30)
  OrigDataType: (ptr (fn T_40 (T_39, T_23)))
T_31: (in signature of fn08048918 : void)
  Class: Eq_30
  DataType: (ptr Eq_30)
  OrigDataType: 
T_32: (in ebp : word32)
  Class: Eq_32
  DataType: word32
  OrigDataType: word32
T_33: (in dwArg04 : ui32)
  Class: Eq_23
  DataType: ui32
  OrigDataType: word32
T_34: (in fn08049410 : ptr32)
  Class: Eq_34
  DataType: (ptr Eq_34)
  OrigDataType: (ptr (fn T_39 (T_38)))
T_35: (in signature of fn08049410 : void)
  Class: Eq_34
  DataType: (ptr Eq_34)
  OrigDataType: 
T_36: (in ebp : word32)
  Class: Eq_36
  DataType: word32
  OrigDataType: word32
T_37: (in 0x00000008 : word32)
  Class: Eq_37
  DataType: word32
  OrigDataType: word32
T_38: (in fp - 0x00000008 : word32)
  Class: Eq_36
  DataType: word32
  OrigDataType: word32
T_39: (in fn08049410(fp - 0x00000008) : word32)
  Class: Eq_32
  DataType: word32
  OrigDataType: word32
T_40: (in fn08048918(fn08049410(fp - 0x00000008), dwArg00) : word32)
  Class: Eq_40
  DataType: int32
  OrigDataType: word32
T_41: (in 0x00000014 : word32)
  Class: Eq_41
  DataType: word32
  OrigDataType: word32
T_42: (in fp - 0x00000014 : word32)
  Class: Eq_42
  DataType: word32
  OrigDataType: word32
T_43: (in Mem41[fp - 0x00000014:word32] : word32)
  Class: Eq_40
  DataType: int32
  OrigDataType: word32
T_44: (in exit : ptr32)
  Class: Eq_44
  DataType: (ptr Eq_44)
  OrigDataType: (ptr (fn T_49 (T_48)))
T_45: (in signature of exit : void)
  Class: Eq_44
  DataType: (ptr Eq_44)
  OrigDataType: 
T_46: (in arg0 : int32)
  Class: Eq_40
  DataType: int32
  OrigDataType: int32
T_47: (in fp - 0x00000014 : word32)
  Class: Eq_47
  DataType: word32
  OrigDataType: word32
T_48: (in Mem41[fp - 0x00000014:int32] : int32)
  Class: Eq_40
  DataType: int32
  OrigDataType: int32
T_49: (in exit(fp->dwFFFFFFF0) : void)
  Class: Eq_49
  DataType: void
  OrigDataType: void
T_50: (in 0x00000000 : word32)
  Class: Eq_50
  DataType: word32
  OrigDataType: word32
T_51: (in 0x00000018 : word32)
  Class: Eq_51
  DataType: word32
  OrigDataType: word32
T_52: (in fp - 0x00000018 : word32)
  Class: Eq_52
  DataType: word32
  OrigDataType: word32
T_53: (in Mem43[fp - 0x00000018:word32] : word32)
  Class: Eq_50
  DataType: word32
  OrigDataType: word32
T_54: (in atexit : ptr32)
  Class: Eq_8
  DataType: (ptr Eq_8)
  OrigDataType: (ptr (fn T_56 (T_55)))
T_55: (in edx : (ptr (ptr code)))
  Class: Eq_10
  DataType: (ptr (ptr code))
  OrigDataType: word32
T_56: (in atexit(edx) : void)
  Class: Eq_12
  DataType: void
  OrigDataType: void
T_57: (in ebp : word32)
  Class: Eq_36
  DataType: word32
  OrigDataType: word32
T_58: (in ebp_10 : word32)
  Class: Eq_58
  DataType: word32
  OrigDataType: word32
T_59: (in fn080488E1 : ptr32)
  Class: Eq_59
  DataType: (ptr Eq_59)
  OrigDataType: (ptr (fn T_67 (T_65, T_66)))
T_60: (in signature of fn080488E1 : void)
  Class: Eq_59
  DataType: (ptr Eq_59)
  OrigDataType: 
T_61: (in ebp : word32)
  Class: Eq_58
  DataType: word32
  OrigDataType: word32
T_62: (in dwArg00 : word32)
  Class: Eq_36
  DataType: word32
  OrigDataType: word32
T_63: (in fp : ptr32)
  Class: Eq_63
  DataType: ptr32
  OrigDataType: ptr32
T_64: (in 0x00000004 : word32)
  Class: Eq_64
  DataType: word32
  OrigDataType: word32
T_65: (in fp - 0x00000004 : word32)
  Class: Eq_58
  DataType: word32
  OrigDataType: word32
T_66: (in dwLoc0C : word32)
  Class: Eq_36
  DataType: word32
  OrigDataType: word32
T_67: (in fn080488E1(fp - 0x00000004, dwLoc0C) : word32)
  Class: Eq_58
  DataType: word32
  OrigDataType: word32
T_68: (in fn080488E1 : ptr32)
  Class: Eq_59
  DataType: (ptr Eq_59)
  OrigDataType: (ptr (fn T_69 (T_58, T_57)))
T_69: (in fn080488E1(ebp_10, ebp) : word32)
  Class: Eq_58
  DataType: word32
  OrigDataType: word32
T_70: (in fn08049170 : ptr32)
  Class: Eq_70
  DataType: (ptr Eq_70)
  OrigDataType: (ptr (fn T_73 (T_61)))
T_71: (in signature of fn08049170 : void)
  Class: Eq_70
  DataType: (ptr Eq_70)
  OrigDataType: 
T_72: (in ebp : word32)
  Class: Eq_58
  DataType: word32
  OrigDataType: word32
T_73: (in fn08049170(ebp) : word32)
  Class: Eq_73
  DataType: (ptr word32)
  OrigDataType: (ptr (struct (0 T_74 t0000)))
T_74: (in Mem0[fn08049170(ebp):word32] : word32)
  Class: Eq_74
  DataType: word32
  OrigDataType: word32
T_75: (in eax : word32)
  Class: Eq_75
  DataType: word32
  OrigDataType: word32
T_76: (in dwLoc08_11 : (ptr char))
  Class: Eq_76
  DataType: (ptr char)
  OrigDataType: word32
T_77: (in dwArg04 : word32)
  Class: Eq_77
  DataType: up32
  OrigDataType: up32
T_78: (in 0xFFFFFFF9 : word32)
  Class: Eq_77
  DataType: up32
  OrigDataType: up32
T_79: (in dwArg04 >u 0xFFFFFFF9 : bool)
  Class: Eq_79
  DataType: bool
  OrigDataType: bool
T_80: (in 0x08049482 : word32)
  Class: Eq_76
  DataType: (ptr char)
  OrigDataType: word32
T_81: (in 0xFFFFFFFE : word32)
  Class: Eq_81
  DataType: word32
  OrigDataType: word32
T_82: (in dwArg04 + 0xFFFFFFFE : word32)
  Class: Eq_82
  DataType: word32
  OrigDataType: word32
T_83: (in 0x08049458 : word32)
  Class: Eq_76
  DataType: (ptr char)
  OrigDataType: word32
T_84: (in 0x0804945E : word32)
  Class: Eq_76
  DataType: (ptr char)
  OrigDataType: word32
T_85: (in 0x08049466 : word32)
  Class: Eq_76
  DataType: (ptr char)
  OrigDataType: word32
T_86: (in 0x0804946D : word32)
  Class: Eq_76
  DataType: (ptr char)
  OrigDataType: word32
T_87: (in 0x08049474 : word32)
  Class: Eq_76
  DataType: (ptr char)
  OrigDataType: word32
T_88: (in 0x0804947A : word32)
  Class: Eq_76
  DataType: (ptr char)
  OrigDataType: word32
T_89: (in printf : ptr32)
  Class: Eq_89
  DataType: (ptr Eq_89)
  OrigDataType: (ptr (fn T_94 (T_76, T_93)))
T_90: (in signature of printf : void)
  Class: Eq_89
  DataType: (ptr Eq_89)
  OrigDataType: 
T_91: (in format : (ptr char))
  Class: Eq_76
  DataType: (ptr char)
  OrigDataType: (ptr char)
T_92: (in ... : <unknown>)
  Class: Eq_92
  DataType: Eq_92
  OrigDataType: <unknown>
T_93: (in tLoc04 : <unknown>)
  Class: Eq_92
  DataType: Eq_92
  OrigDataType: <unknown>
T_94: (in printf(dwLoc08_11, tLoc04) : word32)
  Class: Eq_94
  DataType: word32
  OrigDataType: word32
T_95: (in 0x00000000 : word32)
  Class: Eq_95
  DataType: word32
  OrigDataType: word32
T_96: (in ebp_10 : (ptr Eq_96))
  Class: Eq_96
  DataType: (ptr Eq_96)
  OrigDataType: word32
T_97: (in fn08049179 : ptr32)
  Class: Eq_97
  DataType: (ptr Eq_97)
  OrigDataType: (ptr (fn T_105 (T_103, T_104)))
T_98: (in signature of fn08049179 : void)
  Class: Eq_97
  DataType: (ptr Eq_97)
  OrigDataType: 
T_99: (in ebp : (ptr Eq_96))
  Class: Eq_96
  DataType: (ptr Eq_96)
  OrigDataType: (ptr (struct (0 T_146 t0000) (8 T_114 t0008) (C T_111 t000C)))
T_100: (in dwArg00 : word32)
  Class: Eq_58
  DataType: word32
  OrigDataType: word32
T_101: (in fp : ptr32)
  Class: Eq_101
  DataType: ptr32
  OrigDataType: ptr32
T_102: (in 0x00000004 : word32)
  Class: Eq_102
  DataType: word32
  OrigDataType: word32
T_103: (in fp - 0x00000004 : word32)
  Class: Eq_96
  DataType: (ptr Eq_96)
  OrigDataType: word32
T_104: (in dwLoc0C : word32)
  Class: Eq_58
  DataType: word32
  OrigDataType: word32
T_105: (in fn08049179(fp - 0x00000004, dwLoc0C) : word32)
  Class: Eq_96
  DataType: (ptr Eq_96)
  OrigDataType: word32
T_106: (in fn08049179 : ptr32)
  Class: Eq_97
  DataType: (ptr Eq_97)
  OrigDataType: (ptr (fn T_107 (T_96, T_72)))
T_107: (in fn08049179(ebp_10, ebp) : word32)
  Class: Eq_96
  DataType: (ptr Eq_96)
  OrigDataType: word32
T_108: (in edx_9 : (ptr Eq_108))
  Class: Eq_108
  DataType: (ptr Eq_108)
  OrigDataType: (ptr (struct (0 T_125 t0000) (4 T_121 t0004) (8 T_117 t0008) (C T_129 t000C) (10 T_133 t0010) (14 T_140 t0014)))
T_109: (in 0x0000000C : word32)
  Class: Eq_109
  DataType: word32
  OrigDataType: word32
T_110: (in ebp + 0x0000000C : word32)
  Class: Eq_110
  DataType: word32
  OrigDataType: word32
T_111: (in Mem0[ebp + 0x0000000C:word32] : word32)
  Class: Eq_108
  DataType: (ptr Eq_108)
  OrigDataType: word32
T_112: (in 0x00000008 : word32)
  Class: Eq_112
  DataType: word32
  OrigDataType: word32
T_113: (in ebp + 0x00000008 : word32)
  Class: Eq_113
  DataType: word32
  OrigDataType: word32
T_114: (in Mem0[ebp + 0x00000008:word32] : word32)
  Class: Eq_114
  DataType: word32
  OrigDataType: word32
T_115: (in 0x00000008 : word32)
  Class: Eq_115
  DataType: word32
  OrigDataType: word32
T_116: (in edx_9 + 0x00000008 : word32)
  Class: Eq_116
  DataType: word32
  OrigDataType: word32
T_117: (in Mem10[edx_9 + 0x00000008:word32] : word32)
  Class: Eq_114
  DataType: word32
  OrigDataType: word32
T_118: (in 0x00000000 : word32)
  Class: Eq_118
  DataType: word32
  OrigDataType: word32
T_119: (in 0x00000004 : word32)
  Class: Eq_119
  DataType: word32
  OrigDataType: word32
T_120: (in edx_9 + 0x00000004 : word32)
  Class: Eq_120
  DataType: word32
  OrigDataType: word32
T_121: (in Mem11[edx_9 + 0x00000004:word32] : word32)
  Class: Eq_118
  DataType: word32
  OrigDataType: word32
T_122: (in 0x00000000 : word32)
  Class: Eq_122
  DataType: word32
  OrigDataType: word32
T_123: (in 0x00000000 : word32)
  Class: Eq_123
  DataType: word32
  OrigDataType: word32
T_124: (in edx_9 + 0x00000000 : word32)
  Class: Eq_124
  DataType: word32
  OrigDataType: word32
T_125: (in Mem12[edx_9 + 0x00000000:word32] : word32)
  Class: Eq_122
  DataType: word32
  OrigDataType: word32
T_126: (in 0x00000000 : word32)
  Class: Eq_126
  DataType: word32
  OrigDataType: word32
T_127: (in 0x0000000C : word32)
  Class: Eq_127
  DataType: word32
  OrigDataType: word32
T_128: (in edx_9 + 0x0000000C : word32)
  Class: Eq_128
  DataType: word32
  OrigDataType: word32
T_129: (in Mem13[edx_9 + 0x0000000C:word32] : word32)
  Class: Eq_126
  DataType: word32
  OrigDataType: word32
T_130: (in 0x00000000 : word32)
  Class: Eq_130
  DataType: word32
  OrigDataType: word32
T_131: (in 0x00000010 : word32)
  Class: Eq_131
  DataType: word32
  OrigDataType: word32
T_132: (in edx_9 + 0x00000010 : word32)
  Class: Eq_132
  DataType: word32
  OrigDataType: word32
T_133: (in Mem14[edx_9 + 0x00000010:word32] : word32)
  Class: Eq_130
  DataType: word32
  OrigDataType: word32
T_134: (in dwArg00 : word32)
  Class: Eq_134
  DataType: (ptr Eq_134)
  OrigDataType: (ptr (struct (190B T_108 t190B)))
T_135: (in 0x0000190B : word32)
  Class: Eq_135
  DataType: word32
  OrigDataType: word32
T_136: (in dwArg00 + 0x0000190B : word32)
  Class: Eq_136
  DataType: word32
  OrigDataType: word32
T_137: (in Mem14[dwArg00 + 0x0000190B:word32] : word32)
  Class: Eq_108
  DataType: (ptr Eq_108)
  OrigDataType: word32
T_138: (in 0x00000014 : word32)
  Class: Eq_138
  DataType: word32
  OrigDataType: word32
T_139: (in edx_9 + 0x00000014 : word32)
  Class: Eq_139
  DataType: word32
  OrigDataType: word32
T_140: (in Mem16[edx_9 + 0x00000014:word32] : word32)
  Class: Eq_108
  DataType: (ptr Eq_108)
  OrigDataType: word32
T_141: (in 0x0000190B : word32)
  Class: Eq_141
  DataType: word32
  OrigDataType: word32
T_142: (in dwArg00 + 0x0000190B : word32)
  Class: Eq_142
  DataType: word32
  OrigDataType: word32
T_143: (in Mem17[dwArg00 + 0x0000190B:word32] : word32)
  Class: Eq_108
  DataType: (ptr Eq_108)
  OrigDataType: word32
T_144: (in 0x00000000 : word32)
  Class: Eq_144
  DataType: word32
  OrigDataType: word32
T_145: (in ebp + 0x00000000 : word32)
  Class: Eq_145
  DataType: word32
  OrigDataType: word32
T_146: (in Mem17[ebp + 0x00000000:word32] : word32)
  Class: Eq_146
  DataType: word32
  OrigDataType: word32
T_147: (in ebp : word32)
  Class: Eq_147
  DataType: word32
  OrigDataType: word32
T_148: (in ebp_13 : (ptr word32))
  Class: Eq_148
  DataType: (ptr word32)
  OrigDataType: word32
T_149: (in fn080493CA : ptr32)
  Class: Eq_149
  DataType: (ptr Eq_149)
  OrigDataType: (ptr (fn T_157 (T_155, T_156)))
T_150: (in signature of fn080493CA : void)
  Class: Eq_149
  DataType: (ptr Eq_149)
  OrigDataType: 
T_151: (in ebp : (ptr word32))
  Class: Eq_148
  DataType: (ptr word32)
  OrigDataType: (ptr (struct (0 T_171 t0000)))
T_152: (in dwArg00 : word32)
  Class: Eq_147
  DataType: word32
  OrigDataType: word32
T_153: (in fp : ptr32)
  Class: Eq_153
  DataType: ptr32
  OrigDataType: ptr32
T_154: (in 0x00000004 : word32)
  Class: Eq_154
  DataType: word32
  OrigDataType: word32
T_155: (in fp - 0x00000004 : word32)
  Class: Eq_148
  DataType: (ptr word32)
  OrigDataType: word32
T_156: (in dwLoc10 : word32)
  Class: Eq_147
  DataType: word32
  OrigDataType: word32
T_157: (in fn080493CA(fp - 0x00000004, dwLoc10) : word32)
  Class: Eq_148
  DataType: (ptr word32)
  OrigDataType: word32
T_158: (in fn080493CA : ptr32)
  Class: Eq_149
  DataType: (ptr Eq_149)
  OrigDataType: (ptr (fn T_159 (T_148, T_147)))
T_159: (in fn080493CA(ebp_13, ebp) : word32)
  Class: Eq_148
  DataType: (ptr word32)
  OrigDataType: word32
T_160: (in esi_23 : (ptr Eq_160))
  Class: Eq_160
  DataType: (ptr Eq_160)
  OrigDataType: (ptr (struct 0004 (0 T_172 t0000)))
T_161: (in dwArg00 : word32)
  Class: Eq_161
  DataType: (ptr Eq_161)
  OrigDataType: (ptr (struct (1192 T_166 t1192)))
T_162: (in 0x00001192 : word32)
  Class: Eq_162
  DataType: word32
  OrigDataType: word32
T_163: (in dwArg00 + 0x00001192 : word32)
  Class: Eq_160
  DataType: (ptr Eq_160)
  OrigDataType: word32
T_164: (in 0x00001192 : word32)
  Class: Eq_164
  DataType: word32
  OrigDataType: word32
T_165: (in dwArg00 + 0x00001192 : word32)
  Class: Eq_165
  DataType: word32
  OrigDataType: word32
T_166: (in Mem0[dwArg00 + 0x00001192:word32] : word32)
  Class: Eq_166
  DataType: word32
  OrigDataType: word32
T_167: (in 0xFFFFFFFF : word32)
  Class: Eq_166
  DataType: word32
  OrigDataType: word32
T_168: (in dwArg00->u1192 == 0xFFFFFFFF : bool)
  Class: Eq_168
  DataType: bool
  OrigDataType: bool
T_169: (in 0x00000000 : word32)
  Class: Eq_169
  DataType: word32
  OrigDataType: word32
T_170: (in ebp + 0x00000000 : word32)
  Class: Eq_170
  DataType: word32
  OrigDataType: word32
T_171: (in Mem0[ebp + 0x00000000:word32] : word32)
  Class: Eq_171
  DataType: word32
  OrigDataType: word32
T_172: (in eax_24 : (ptr code))
  Class: Eq_172
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_173: (in 0x00000000 : word32)
  Class: Eq_173
  DataType: word32
  OrigDataType: word32
T_174: (in esi_23 + 0x00000000 : word32)
  Class: Eq_174
  DataType: word32
  OrigDataType: word32
T_175: (in Mem0[esi_23 + 0x00000000:word32] : word32)
  Class: Eq_172
  DataType: (ptr code)
  OrigDataType: word32
T_176: (in 0xFFFFFFFC : word32)
  Class: Eq_176
  DataType: word32
  OrigDataType: word32
T_177: (in esi_23 + 0xFFFFFFFC : word32)
  Class: Eq_160
  DataType: (ptr Eq_160)
  OrigDataType: word32
T_178: (in 0x00000000 : word32)
  Class: Eq_178
  DataType: word32
  OrigDataType: word32
T_179: (in esi_23 + 0x00000000 : word32)
  Class: Eq_179
  DataType: word32
  OrigDataType: word32
T_180: (in Mem0[esi_23 + 0x00000000:word32] : word32)
  Class: Eq_172
  DataType: (ptr code)
  OrigDataType: word32
T_181: (in 0xFFFFFFFF : word32)
  Class: Eq_172
  DataType: (ptr code)
  OrigDataType: word32
T_182: (in esi_23->ptr0000 != (code *) 0xFFFFFFFF : bool)
  Class: Eq_182
  DataType: bool
  OrigDataType: bool
T_183: (in fn080493C0 : ptr32)
  Class: Eq_183
  DataType: (ptr Eq_183)
  OrigDataType: (ptr (fn T_188 (T_187)))
T_184: (in signature of fn080493C0 : void)
  Class: Eq_183
  DataType: (ptr Eq_183)
  OrigDataType: 
T_185: (in fn080488D8 : ptr32)
  Class: Eq_185
  DataType: (ptr Eq_185)
  OrigDataType: (ptr (fn T_187 (T_36)))
T_186: (in signature of fn080488D8 : void)
  Class: Eq_185
  DataType: (ptr Eq_185)
  OrigDataType: 
T_187: (in fn080488D8(ebp) : word32)
  Class: Eq_147
  DataType: word32
  OrigDataType: word32
T_188: (in fn080493C0(fn080488D8(ebp)) : word32)
  Class: Eq_188
  DataType: word32
  OrigDataType: word32
T_189:
  Class: Eq_189
  DataType: Eq_189
  OrigDataType: 
*/
typedef code Eq_1code Eq_1struct Globals {
	code tFFFFFFFF;	// FFFFFFFF
	code * ptr8048780;	// 8048780
	char b8049458;	// 8049458
	char b804945E;	// 804945E
	char b8049466;	// 8049466
	char b804946D;	// 804946D
	char b8049474;	// 8049474
	char b804947A;	// 804947A
	char b8049482;	// 8049482
	word32 dw804AA88;	// 804AA88
} Eq_1;

typedef void (Eq_8)(code * *);

typedef struct Eq_14 {
	word32 dwFFFFFFE8;	// FFFFFFE8
	int32 dwFFFFFFEC;	// FFFFFFEC
	word32 dwFFFFFFF0;	// FFFFFFF0
} Eq_14;

typedef int32 (Eq_30)(word32, ui32);

typedef word32 (Eq_34)(word32);

typedef void (Eq_44)(int32);

typedef word32 (Eq_59)(word32, word32);

typedef word32 * (Eq_70)(word32);

typedef word32 (Eq_89)(char *, );

typedef void;

typedef Eq_108 Eq_96struct Eq_96 {
	word32 dw0000;	// 0
	word32 dw0008;	// 8
	Eq_108 * ptr000C;	// C
} Eq_96;

typedef Eq_96 * (Eq_97)(Eq_96 *, word32);

typedef Eq_108 Eq_108struct Eq_108 {
	word32 dw0000;	// 0
	word32 dw0004;	// 4
	word32 dw0008;	// 8
	word32 dw000C;	// C
	word32 dw0010;	// 10
	Eq_108 * ptr0014;	// 14
} Eq_108;

typedef Eq_108 Eq_134struct Eq_134 {
	Eq_108 * ptr190B;	// 190B
} Eq_134;

typedef word32 * (Eq_149)(word32 *, word32);

typedef Eq_160 Eq_160code Eq_160struct Eq_160 {	// size: 4 4
	Eq_160 tFFFFFFFC;	// FFFFFFFC
	code * ptr0000;	// 0
} Eq_160;

typedef Eq_189 Eq_161struct Eq_161 {
	Eq_189 u1192;	// 1192
} Eq_161;

typedef word32 (Eq_183)(word32);

typedef word32 (Eq_185)(word32);

typedef union Eq_189 {
	word32 u0;
	Eq_160 u1;
} Eq_189;

