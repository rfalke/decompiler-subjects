// subject.h
// Generated on TIMESTAMP by decompiling from_rec/hd/ia32_elf_stripped/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFFFFFF code tFFFFFFFF) (80489C0 (ptr code) ptr80489C0) (80489C8 char b80489C8) (80489CF char b80489CF) (80489D6 char b80489D6) (80489DA char b80489DA) (80489E0 char b80489E0) (80489E4 char b80489E4) (80499E8 word32 dw80499E8) (80499EC word32 dw80499EC))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void ())
	T_2 (in fn08048980 : ptr32)
	T_3 (in signature of fn08048980 : void)
Eq_5: (fn void (word32))
	T_5 (in __align : ptr32)
Eq_10: (fn void (byte))
	T_10 (in __syscall : ptr32)
Eq_26: (fn void ((ptr (ptr code))))
	T_26 (in atexit : ptr32)
	T_27 (in signature of atexit : void)
Eq_31: (fn void ())
	T_31 (in fn080484A0 : ptr32)
	T_32 (in signature of fn080484A0 : void)
Eq_34: (fn void (int32))
	T_34 (in exit : ptr32)
	T_35 (in signature of exit : void)
Eq_37: (fn int32 (ui32, word32))
	T_37 (in fn080488E0 : ptr32)
	T_38 (in signature of fn080488E0 : void)
Eq_44: (fn void (byte))
	T_44 (in __syscall : ptr32)
Eq_50: <unknown>
	T_50 (in SLICE(0x080489C8, <unknown>, 32) : <unknown>)
	T_51 (in tLoc64_16 : <unknown>)
	T_60 (in ... : <unknown>)
	T_69 (in SLICE(dwLoc68_160, <unknown>, 32) : <unknown>)
	T_70 (in tLoc64_161 : <unknown>)
Eq_56: (fn word32 ((ptr char), (ptr char), Eq_50))
	T_56 (in sprintf : ptr32)
	T_57 (in signature of sprintf : void)
	T_86 (in sprintf : ptr32)
Eq_110: (fn word32 ((ptr char), (ptr char)))
	T_110 (in strcat : ptr32)
	T_111 (in signature of strcat : void)
Eq_118: (fn word32 ((ptr char)))
	T_118 (in strlen : ptr32)
	T_119 (in signature of strlen : void)
Eq_131: (fn word32 ((ptr char), (ptr char)))
	T_131 (in strcpy : ptr32)
	T_132 (in signature of strcpy : void)
	T_209 (in strcpy : ptr32)
Eq_221: <unknown>
	T_221 (in SLICE(dwLoc68_97, <unknown>, 32) : <unknown>)
	T_222 (in tLoc64_98 : <unknown>)
	T_226 (in ... : <unknown>)
Eq_223: (fn word32 ((ptr char), Eq_221))
	T_223 (in printf : ptr32)
	T_224 (in signature of printf : void)
Eq_233: (fn word32 ((ptr char), word32))
	T_233 (in fn08048950 : ptr32)
	T_234 (in signature of fn08048950 : void)
Eq_238: (struct "Eq_238" (FFFFFF94 word32 dwFFFFFF94) (FFFFFF98 up32 dwFFFFFF98) (FFFFFF9C (ptr char) ptrFFFFFF9C))
	T_238 (in fp : ptr32)
Eq_244: FILE
	T_244 (in eax_58 : (ptr Eq_244))
	T_250 (in fopen(dwArg04, &globals->b80489E4) : word32)
	T_251 (in 0x00000000 : word32)
	T_273 (in stream : (ptr FILE))
	T_283 (in fp : (ptr FILE))
Eq_245: (fn (ptr Eq_244) ((ptr char), (ptr char)))
	T_245 (in fopen : ptr32)
	T_246 (in signature of fopen : void)
Eq_253: (fn void ((ptr char)))
	T_253 (in perror : ptr32)
	T_254 (in signature of perror : void)
	T_263 (in perror : ptr32)
Eq_268: (fn word32 ((ptr void), Eq_271, Eq_272, (ptr Eq_244)))
	T_268 (in fread : ptr32)
	T_269 (in signature of fread : void)
Eq_271: (union "Eq_271" (word32 u0) (size_t u1))
	T_271 (in size : size_t)
	T_276 (in 0x00000001 : word32)
Eq_272: (union "Eq_272" (word32 u0) (size_t u1))
	T_272 (in count : size_t)
	T_277 (in 0x00000010 : word32)
Eq_281: (fn word32 ((ptr Eq_244)))
	T_281 (in fclose : ptr32)
	T_282 (in signature of fclose : void)
Eq_294: (fn void (word32, word32, word32))
	T_294 (in fn08048660 : ptr32)
	T_295 (in signature of fn08048660 : void)
Eq_315: (fn byte (word32))
	T_315 (in fn080487F0 : ptr32)
	T_316 (in signature of fn080487F0 : void)
Eq_327: (fn word32 (int32, (ptr char), (ptr Eq_331)))
	T_327 (in _xstat : ptr32)
	T_328 (in signature of _xstat : void)
Eq_331: (struct "stat")
	T_331 (in statbuf : (ptr (struct "stat")))
	T_334 (in dwArg08 : word32)
Eq_336: (struct "Eq_336" 0004 (FFFFFFFC Eq_336 tFFFFFFFC) (0 (ptr code) ptr0000))
	T_336 (in ebx_24 : (ptr Eq_336))
	T_337 (in 0x080499EC : word32)
	T_347 (in ebx_24 + 0xFFFFFFFC : word32)
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr Eq_1)
  OrigDataType: (ptr (struct "Globals"))
T_2: (in fn08048980 : ptr32)
  Class: Eq_2
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (fn T_4 ()))
T_3: (in signature of fn08048980 : void)
  Class: Eq_2
  DataType: (ptr Eq_2)
  OrigDataType: 
T_4: (in fn08048980() : void)
  Class: Eq_4
  DataType: void
  OrigDataType: void
T_5: (in __align : ptr32)
  Class: Eq_5
  DataType: (ptr Eq_5)
  OrigDataType: (ptr (fn T_9 (T_8)))
T_6: (in fp : ptr32)
  Class: Eq_6
  DataType: ptr32
  OrigDataType: ptr32
T_7: (in 0x00000004 : word32)
  Class: Eq_7
  DataType: word32
  OrigDataType: word32
T_8: (in fp + 0x00000004 : word32)
  Class: Eq_8
  DataType: word32
  OrigDataType: word32
T_9: (in __align(fp + 0x00000004) : void)
  Class: Eq_9
  DataType: void
  OrigDataType: void
T_10: (in __syscall : ptr32)
  Class: Eq_10
  DataType: (ptr Eq_10)
  OrigDataType: (ptr (fn T_12 (T_11)))
T_11: (in 0x80 : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_12: (in __syscall(0x80) : void)
  Class: Eq_12
  DataType: void
  OrigDataType: void
T_13: (in fp + 0x00000004 : word32)
  Class: Eq_13
  DataType: word32
  OrigDataType: word32
T_14: (in dwArg00 : word32)
  Class: Eq_14
  DataType: ui32
  OrigDataType: ui32
T_15: (in 0x00000002 : word32)
  Class: Eq_15
  DataType: ui32
  OrigDataType: ui32
T_16: (in dwArg00 * 0x00000002 : word32)
  Class: Eq_16
  DataType: ui32
  OrigDataType: ui32
T_17: (in 0x00000002 : word32)
  Class: Eq_17
  DataType: ui32
  OrigDataType: ui32
T_18: (in dwArg00 * 0x00000002 * 0x00000002 : word32)
  Class: Eq_18
  DataType: ui32
  OrigDataType: ui32
T_19: (in fp + 0x00000004 + (dwArg00 * 0x00000002) * 0x00000002 : word32)
  Class: Eq_19
  DataType: word32
  OrigDataType: word32
T_20: (in 0x00000004 : word32)
  Class: Eq_20
  DataType: word32
  OrigDataType: word32
T_21: (in fp + 0x00000004 + (dwArg00 * 0x00000002) * 0x00000002 + 0x00000004 : word32)
  Class: Eq_21
  DataType: word32
  OrigDataType: word32
T_22: (in 0x080499E8 : word32)
  Class: Eq_22
  DataType: (ptr word32)
  OrigDataType: (ptr (struct (0 T_23 t0000)))
T_23: (in Mem30[0x080499E8:word32] : word32)
  Class: Eq_21
  DataType: word32
  OrigDataType: word32
T_24: (in __setfpucw : ptr32)
  Class: Eq_24
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_25: (in __libc_init : ptr32)
  Class: Eq_25
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_26: (in atexit : ptr32)
  Class: Eq_26
  DataType: (ptr Eq_26)
  OrigDataType: (ptr (fn T_30 (T_29)))
T_27: (in signature of atexit : void)
  Class: Eq_26
  DataType: (ptr Eq_26)
  OrigDataType: 
T_28: (in func : (ptr (ptr code)))
  Class: Eq_28
  DataType: (ptr (ptr code))
  OrigDataType: (ptr (ptr code))
T_29: (in 0x080489C0 : word32)
  Class: Eq_28
  DataType: (ptr (ptr code))
  OrigDataType: word32
T_30: (in atexit(&globals->ptr80489C0) : void)
  Class: Eq_30
  DataType: void
  OrigDataType: void
T_31: (in fn080484A0 : ptr32)
  Class: Eq_31
  DataType: (ptr Eq_31)
  OrigDataType: (ptr (fn T_33 ()))
T_32: (in signature of fn080484A0 : void)
  Class: Eq_31
  DataType: (ptr Eq_31)
  OrigDataType: 
T_33: (in fn080484A0() : void)
  Class: Eq_33
  DataType: void
  OrigDataType: void
T_34: (in exit : ptr32)
  Class: Eq_34
  DataType: (ptr Eq_34)
  OrigDataType: (ptr (fn T_43 (T_42)))
T_35: (in signature of exit : void)
  Class: Eq_34
  DataType: (ptr Eq_34)
  OrigDataType: 
T_36: (in arg0 : int32)
  Class: Eq_36
  DataType: int32
  OrigDataType: int32
T_37: (in fn080488E0 : ptr32)
  Class: Eq_37
  DataType: (ptr Eq_37)
  OrigDataType: (ptr (fn T_42 (T_14, T_41)))
T_38: (in signature of fn080488E0 : void)
  Class: Eq_37
  DataType: (ptr Eq_37)
  OrigDataType: 
T_39: (in dwArg04 : ui32)
  Class: Eq_14
  DataType: ui32
  OrigDataType: word32
T_40: (in dwArg08 : word32)
  Class: Eq_40
  DataType: word32
  OrigDataType: word32
T_41: (in fp + 0x00000004 : word32)
  Class: Eq_40
  DataType: word32
  OrigDataType: word32
T_42: (in fn080488E0(dwArg00, fp + 0x00000004) : word32)
  Class: Eq_36
  DataType: int32
  OrigDataType: word32
T_43: (in exit(fn080488E0(dwArg00, fp + 0x00000004)) : void)
  Class: Eq_43
  DataType: void
  OrigDataType: void
T_44: (in __syscall : ptr32)
  Class: Eq_44
  DataType: (ptr Eq_44)
  OrigDataType: (ptr (fn T_46 (T_45)))
T_45: (in 0x80 : byte)
  Class: Eq_45
  DataType: byte
  OrigDataType: byte
T_46: (in __syscall(0x80) : void)
  Class: Eq_46
  DataType: void
  OrigDataType: void
T_47: (in 0x080489C8 : word32)
  Class: Eq_47
  DataType: (ptr char)
  OrigDataType: word32
T_48: (in dwLoc68_15 : word32)
  Class: Eq_47
  DataType: (ptr char)
  OrigDataType: word32
T_49: (in 0x080489C8 : word32)
  Class: Eq_49
  DataType: word32
  OrigDataType: word32
T_50: (in SLICE(0x080489C8, <unknown>, 32) : <unknown>)
  Class: Eq_50
  DataType: Eq_50
  OrigDataType: <unknown>
T_51: (in tLoc64_16 : <unknown>)
  Class: Eq_50
  DataType: Eq_50
  OrigDataType: <unknown>
T_52: (in fp : ptr32)
  Class: Eq_52
  DataType: ptr32
  OrigDataType: ptr32
T_53: (in 0x00000054 : word32)
  Class: Eq_53
  DataType: word32
  OrigDataType: word32
T_54: (in fp - 0x00000054 : word32)
  Class: Eq_54
  DataType: (ptr char)
  OrigDataType: word32
T_55: (in dwLoc6C_19 : word32)
  Class: Eq_54
  DataType: (ptr char)
  OrigDataType: word32
T_56: (in sprintf : ptr32)
  Class: Eq_56
  DataType: (ptr Eq_56)
  OrigDataType: (ptr (fn T_61 (T_55, T_48, T_51)))
T_57: (in signature of sprintf : void)
  Class: Eq_56
  DataType: (ptr Eq_56)
  OrigDataType: 
T_58: (in buffer : (ptr char))
  Class: Eq_54
  DataType: (ptr char)
  OrigDataType: (ptr char)
T_59: (in format : (ptr char))
  Class: Eq_47
  DataType: (ptr char)
  OrigDataType: (ptr char)
T_60: (in ... : <unknown>)
  Class: Eq_50
  DataType: Eq_50
  OrigDataType: <unknown>
T_61: (in sprintf(dwLoc6C_19, dwLoc68_15, tLoc64_16) : word32)
  Class: Eq_61
  DataType: word32
  OrigDataType: word32
T_62: (in dwArg0C : word32)
  Class: Eq_62
  DataType: int32
  OrigDataType: int32
T_63: (in 0x00000010 : word32)
  Class: Eq_62
  DataType: int32
  OrigDataType: int32
T_64: (in dwArg0C <= 0x00000010 : bool)
  Class: Eq_64
  DataType: bool
  OrigDataType: bool
T_65: (in 0x00000000 : word32)
  Class: Eq_65
  DataType: int32
  OrigDataType: word32
T_66: (in dwLoc58_26 : word32)
  Class: Eq_65
  DataType: int32
  OrigDataType: word32
T_67: (in 0x080489CF : word32)
  Class: Eq_47
  DataType: (ptr char)
  OrigDataType: word32
T_68: (in dwLoc68_160 : word32)
  Class: Eq_47
  DataType: (ptr char)
  OrigDataType: word32
T_69: (in SLICE(dwLoc68_160, <unknown>, 32) : <unknown>)
  Class: Eq_50
  DataType: Eq_50
  OrigDataType: <unknown>
T_70: (in tLoc64_161 : <unknown>)
  Class: Eq_50
  DataType: Eq_50
  OrigDataType: <unknown>
T_71: (in dwLoc58_32 : word32)
  Class: Eq_65
  DataType: int32
  OrigDataType: word32
T_72: (in ecx_163 : word32)
  Class: Eq_65
  DataType: int32
  OrigDataType: word32
T_73: (in edx_164 : word32)
  Class: Eq_65
  DataType: int32
  OrigDataType: word32
T_74: (in edx_164 + edx_164 : word32)
  Class: Eq_74
  DataType: word32
  OrigDataType: word32
T_75: (in edx_165 : word32)
  Class: Eq_74
  DataType: word32
  OrigDataType: word32
T_76: (in edx_165 + ecx_163 : word32)
  Class: Eq_76
  DataType: word32
  OrigDataType: word32
T_77: (in edx_166 : word32)
  Class: Eq_76
  DataType: word32
  OrigDataType: word32
T_78: (in 0x00000054 : word32)
  Class: Eq_78
  DataType: word32
  OrigDataType: word32
T_79: (in fp - 0x00000054 : word32)
  Class: Eq_79
  DataType: word32
  OrigDataType: word32
T_80: (in fp - 0x00000054 + edx_166 : word32)
  Class: Eq_80
  DataType: word32
  OrigDataType: word32
T_81: (in eax_167 : word32)
  Class: Eq_80
  DataType: word32
  OrigDataType: word32
T_82: (in 0x00000009 : word32)
  Class: Eq_82
  DataType: word32
  OrigDataType: word32
T_83: (in eax_167 + 0x00000009 : word32)
  Class: Eq_54
  DataType: (ptr char)
  OrigDataType: word32
T_84: (in edx_168 : word32)
  Class: Eq_54
  DataType: (ptr char)
  OrigDataType: word32
T_85: (in dwLoc6C_170 : word32)
  Class: Eq_54
  DataType: (ptr char)
  OrigDataType: word32
T_86: (in sprintf : ptr32)
  Class: Eq_56
  DataType: (ptr Eq_56)
  OrigDataType: (ptr (fn T_87 (T_85, T_68, T_70)))
T_87: (in sprintf(dwLoc6C_170, dwLoc68_160, tLoc64_161) : word32)
  Class: Eq_61
  DataType: word32
  OrigDataType: word32
T_88: (in 0x00000001 : word32)
  Class: Eq_88
  DataType: word32
  OrigDataType: word32
T_89: (in dwLoc58_32 + 0x00000001 : word32)
  Class: Eq_65
  DataType: int32
  OrigDataType: word32
T_90: (in v10_174 : word32)
  Class: Eq_65
  DataType: int32
  OrigDataType: word32
T_91: (in dwLoc58_175 : word32)
  Class: Eq_65
  DataType: int32
  OrigDataType: word32
T_92: (in PHI(dwLoc58_32, dwLoc58_46) : word32)
  Class: Eq_65
  DataType: int32
  OrigDataType: word32
T_93: (in dwLoc58_46 : word32)
  Class: Eq_65
  DataType: int32
  OrigDataType: word32
T_94: (in dwLoc58_41 : word32)
  Class: Eq_65
  DataType: int32
  OrigDataType: word32
T_95: (in eax_44 : word32)
  Class: Eq_65
  DataType: int32
  OrigDataType: int32
T_96: (in 0x00000001 : word32)
  Class: Eq_96
  DataType: word32
  OrigDataType: word32
T_97: (in dwLoc58_41 + 0x00000001 : word32)
  Class: Eq_65
  DataType: int32
  OrigDataType: word32
T_98: (in v11_45 : word32)
  Class: Eq_65
  DataType: int32
  OrigDataType: word32
T_99: (in 0x0000000F : word32)
  Class: Eq_65
  DataType: int32
  OrigDataType: int32
T_100: (in eax_44 <= 0x0000000F : bool)
  Class: Eq_100
  DataType: bool
  OrigDataType: bool
T_101: (in PHI(dwLoc58_26, dwLoc58_175) : word32)
  Class: Eq_65
  DataType: int32
  OrigDataType: word32
T_102: (in eax_37 : word32)
  Class: Eq_65
  DataType: int32
  OrigDataType: int32
T_103: (in 0x00000010 : word32)
  Class: Eq_65
  DataType: int32
  OrigDataType: int32
T_104: (in 0x00000010 > eax_37 : bool)
  Class: Eq_104
  DataType: bool
  OrigDataType: bool
T_105: (in 0x080489D6 : word32)
  Class: Eq_105
  DataType: (ptr char)
  OrigDataType: word32
T_106: (in dwLoc64_147 : word32)
  Class: Eq_105
  DataType: (ptr char)
  OrigDataType: word32
T_107: (in 0x00000054 : word32)
  Class: Eq_107
  DataType: word32
  OrigDataType: word32
T_108: (in fp - 0x00000054 : word32)
  Class: Eq_108
  DataType: (ptr char)
  OrigDataType: word32
T_109: (in dwLoc68_150 : word32)
  Class: Eq_108
  DataType: (ptr char)
  OrigDataType: word32
T_110: (in strcat : ptr32)
  Class: Eq_110
  DataType: (ptr Eq_110)
  OrigDataType: (ptr (fn T_114 (T_109, T_106)))
T_111: (in signature of strcat : void)
  Class: Eq_110
  DataType: (ptr Eq_110)
  OrigDataType: 
T_112: (in arg0 : (ptr char))
  Class: Eq_108
  DataType: (ptr char)
  OrigDataType: (ptr char)
T_113: (in arg4 : (ptr char))
  Class: Eq_105
  DataType: (ptr char)
  OrigDataType: (ptr char)
T_114: (in strcat(dwLoc68_150, dwLoc64_147) : word32)
  Class: Eq_114
  DataType: word32
  OrigDataType: word32
T_115: (in 0x00000054 : word32)
  Class: Eq_115
  DataType: word32
  OrigDataType: word32
T_116: (in fp - 0x00000054 : word32)
  Class: Eq_116
  DataType: (ptr char)
  OrigDataType: word32
T_117: (in dwLoc64_51 : word32)
  Class: Eq_116
  DataType: (ptr char)
  OrigDataType: word32
T_118: (in strlen : ptr32)
  Class: Eq_118
  DataType: (ptr Eq_118)
  OrigDataType: (ptr (fn T_121 (T_117)))
T_119: (in signature of strlen : void)
  Class: Eq_118
  DataType: (ptr Eq_118)
  OrigDataType: 
T_120: (in arg0 : (ptr char))
  Class: Eq_116
  DataType: (ptr char)
  OrigDataType: (ptr char)
T_121: (in strlen(dwLoc64_51) : word32)
  Class: Eq_121
  DataType: word32
  OrigDataType: word32
T_122: (in eax_52 : word32)
  Class: Eq_121
  DataType: word32
  OrigDataType: word32
T_123: (in dwLoc5C_54 : word32)
  Class: Eq_121
  DataType: word32
  OrigDataType: word32
T_124: (in 0x080489DA : word32)
  Class: Eq_124
  DataType: (ptr char)
  OrigDataType: word32
T_125: (in dwLoc64_56 : word32)
  Class: Eq_124
  DataType: (ptr char)
  OrigDataType: word32
T_126: (in 0x00000054 : word32)
  Class: Eq_126
  DataType: word32
  OrigDataType: word32
T_127: (in fp - 0x00000054 : word32)
  Class: Eq_127
  DataType: word32
  OrigDataType: word32
T_128: (in fp - 0x00000054 + dwLoc5C_54 : word32)
  Class: Eq_128
  DataType: (ptr char)
  OrigDataType: word32
T_129: (in edx_59 : word32)
  Class: Eq_128
  DataType: (ptr char)
  OrigDataType: word32
T_130: (in dwLoc68_61 : word32)
  Class: Eq_128
  DataType: (ptr char)
  OrigDataType: word32
T_131: (in strcpy : ptr32)
  Class: Eq_131
  DataType: (ptr Eq_131)
  OrigDataType: (ptr (fn T_135 (T_130, T_125)))
T_132: (in signature of strcpy : void)
  Class: Eq_131
  DataType: (ptr Eq_131)
  OrigDataType: 
T_133: (in dst : (ptr char))
  Class: Eq_128
  DataType: (ptr char)
  OrigDataType: (ptr char)
T_134: (in src : (ptr char))
  Class: Eq_124
  DataType: (ptr char)
  OrigDataType: (ptr char)
T_135: (in strcpy(dwLoc68_61, dwLoc64_56) : word32)
  Class: Eq_135
  DataType: word32
  OrigDataType: word32
T_136: (in 0x00000000 : word32)
  Class: Eq_65
  DataType: int32
  OrigDataType: word32
T_137: (in dwLoc58_65 : word32)
  Class: Eq_65
  DataType: int32
  OrigDataType: word32
T_138: (in eax_114 : word32)
  Class: Eq_121
  DataType: word32
  OrigDataType: word32
T_139: (in dwLoc58_71 : word32)
  Class: Eq_65
  DataType: int32
  OrigDataType: word32
T_140: (in eax_114 + dwLoc58_71 : word32)
  Class: Eq_140
  DataType: (ptr byte)
  OrigDataType: word32
T_141: (in eax_115 : word32)
  Class: Eq_140
  DataType: (ptr byte)
  OrigDataType: (ptr (struct (0 T_178 t0000)))
T_142: (in dwArg04 : word32)
  Class: Eq_142
  DataType: word32
  OrigDataType: word32
T_143: (in ecx_118 : word32)
  Class: Eq_142
  DataType: word32
  OrigDataType: word32
T_144: (in ecx_118 + dwLoc58_71 : word32)
  Class: Eq_144
  DataType: (ptr bcu8)
  OrigDataType: word32
T_145: (in ecx_119 : word32)
  Class: Eq_144
  DataType: (ptr bcu8)
  OrigDataType: (ptr (struct (0 T_148 t0000)))
T_146: (in 0x00000000 : word32)
  Class: Eq_146
  DataType: word32
  OrigDataType: word32
T_147: (in ecx_119 + 0x00000000 : word32)
  Class: Eq_147
  DataType: word32
  OrigDataType: word32
T_148: (in Mem0[ecx_119 + 0x00000000:byte] : byte)
  Class: Eq_148
  DataType: bcu8
  OrigDataType: bcu8
T_149: (in 0x1F : byte)
  Class: Eq_148
  DataType: bcu8
  OrigDataType: bcu8
T_150: (in *ecx_119 <=u 0x1F : bool)
  Class: Eq_150
  DataType: bool
  OrigDataType: bool
T_151: (in PHI(dwLoc58_71, dwLoc58_112) : word32)
  Class: Eq_65
  DataType: int32
  OrigDataType: word32
T_152: (in dwLoc58_112 : word32)
  Class: Eq_65
  DataType: int32
  OrigDataType: word32
T_153: (in dwLoc58_77 : word32)
  Class: Eq_65
  DataType: int32
  OrigDataType: int32
T_154: (in 0x0000000F : word32)
  Class: Eq_65
  DataType: int32
  OrigDataType: int32
T_155: (in dwLoc58_77 <= 0x0000000F : bool)
  Class: Eq_155
  DataType: bool
  OrigDataType: bool
T_156: (in 0x2E : byte)
  Class: Eq_156
  DataType: byte
  OrigDataType: byte
T_157: (in cl_135 : byte)
  Class: Eq_156
  DataType: byte
  OrigDataType: byte
T_158: (in ecx_137 : word32)
  Class: Eq_142
  DataType: word32
  OrigDataType: word32
T_159: (in ecx_137 + dwLoc58_71 : word32)
  Class: Eq_159
  DataType: (ptr bcu8)
  OrigDataType: word32
T_160: (in ecx_138 : word32)
  Class: Eq_159
  DataType: (ptr bcu8)
  OrigDataType: (ptr (struct (0 T_163 t0000)))
T_161: (in 0x00000000 : word32)
  Class: Eq_161
  DataType: word32
  OrigDataType: word32
T_162: (in ecx_138 + 0x00000000 : word32)
  Class: Eq_162
  DataType: word32
  OrigDataType: word32
T_163: (in Mem0[ecx_138 + 0x00000000:byte] : byte)
  Class: Eq_163
  DataType: bcu8
  OrigDataType: bcu8
T_164: (in 0x7E : byte)
  Class: Eq_163
  DataType: bcu8
  OrigDataType: bcu8
T_165: (in *ecx_138 >u 0x7E : bool)
  Class: Eq_165
  DataType: bool
  OrigDataType: bool
T_166: (in ebx_141 : word32)
  Class: Eq_142
  DataType: word32
  OrigDataType: word32
T_167: (in ebx_141 + dwLoc58_71 : word32)
  Class: Eq_167
  DataType: (ptr byte)
  OrigDataType: word32
T_168: (in ebx_142 : word32)
  Class: Eq_167
  DataType: (ptr byte)
  OrigDataType: (ptr (struct (0 T_171 t0000)))
T_169: (in 0x00000000 : word32)
  Class: Eq_169
  DataType: word32
  OrigDataType: word32
T_170: (in ebx_142 + 0x00000000 : word32)
  Class: Eq_170
  DataType: word32
  OrigDataType: word32
T_171: (in Mem0[ebx_142 + 0x00000000:byte] : byte)
  Class: Eq_156
  DataType: byte
  OrigDataType: byte
T_172: (in cl_144 : byte)
  Class: Eq_156
  DataType: byte
  OrigDataType: byte
T_173: (in PHI(cl_144, cl_135) : byte)
  Class: Eq_156
  DataType: byte
  OrigDataType: byte
T_174: (in cl_124 : byte)
  Class: Eq_156
  DataType: byte
  OrigDataType: byte
T_175: (in 0x00000054 : word32)
  Class: Eq_175
  DataType: word32
  OrigDataType: word32
T_176: (in fp - 0x00000054 : word32)
  Class: Eq_176
  DataType: word32
  OrigDataType: word32
T_177: (in eax_115 + (fp - 0x00000054) : word32)
  Class: Eq_177
  DataType: word32
  OrigDataType: word32
T_178: (in Mem128[eax_115 + (fp - 0x00000054):byte] : byte)
  Class: Eq_156
  DataType: byte
  OrigDataType: byte
T_179: (in 0x00000001 : word32)
  Class: Eq_179
  DataType: word32
  OrigDataType: word32
T_180: (in dwLoc58_71 + 0x00000001 : word32)
  Class: Eq_65
  DataType: int32
  OrigDataType: word32
T_181: (in v14_129 : word32)
  Class: Eq_65
  DataType: int32
  OrigDataType: word32
T_182: (in dwLoc58_130 : word32)
  Class: Eq_65
  DataType: int32
  OrigDataType: word32
T_183: (in eax_106 : word32)
  Class: Eq_121
  DataType: word32
  OrigDataType: word32
T_184: (in eax_106 + dwLoc58_77 : word32)
  Class: Eq_184
  DataType: (ptr byte)
  OrigDataType: word32
T_185: (in eax_107 : word32)
  Class: Eq_184
  DataType: (ptr byte)
  OrigDataType: (ptr (struct (0 T_190 t0000)))
T_186: (in 0x20 : byte)
  Class: Eq_186
  DataType: byte
  OrigDataType: byte
T_187: (in 0x00000054 : word32)
  Class: Eq_187
  DataType: word32
  OrigDataType: word32
T_188: (in fp - 0x00000054 : word32)
  Class: Eq_188
  DataType: word32
  OrigDataType: word32
T_189: (in eax_107 + (fp - 0x00000054) : word32)
  Class: Eq_189
  DataType: word32
  OrigDataType: word32
T_190: (in Mem110[eax_107 + (fp - 0x00000054):byte] : byte)
  Class: Eq_186
  DataType: byte
  OrigDataType: byte
T_191: (in 0x00000001 : word32)
  Class: Eq_191
  DataType: word32
  OrigDataType: word32
T_192: (in dwLoc58_77 + 0x00000001 : word32)
  Class: Eq_65
  DataType: int32
  OrigDataType: word32
T_193: (in v15_111 : word32)
  Class: Eq_65
  DataType: int32
  OrigDataType: word32
T_194: (in 0x00000064 : word32)
  Class: Eq_194
  DataType: word32
  OrigDataType: word32
T_195: (in fp - 0x00000064 : word32)
  Class: Eq_195
  DataType: (ptr word32)
  OrigDataType: word32
T_196: (in esp_82 : word32)
  Class: Eq_195
  DataType: (ptr word32)
  OrigDataType: (ptr (struct (0 T_200 t0000)))
T_197: (in 0x080489DE : word32)
  Class: Eq_197
  DataType: word32
  OrigDataType: word32
T_198: (in 0x00000000 : word32)
  Class: Eq_198
  DataType: word32
  OrigDataType: word32
T_199: (in esp_82 + 0x00000000 : word32)
  Class: Eq_199
  DataType: word32
  OrigDataType: word32
T_200: (in Mem83[esp_82 + 0x00000000:word32] : word32)
  Class: Eq_197
  DataType: word32
  OrigDataType: word32
T_201: (in 0x00000054 : word32)
  Class: Eq_201
  DataType: word32
  OrigDataType: word32
T_202: (in fp - 0x00000054 : word32)
  Class: Eq_202
  DataType: word32
  OrigDataType: word32
T_203: (in fp - 0x00000054 + dwLoc5C_54 : word32)
  Class: Eq_203
  DataType: word32
  OrigDataType: word32
T_204: (in edx_86 : word32)
  Class: Eq_203
  DataType: word32
  OrigDataType: word32
T_205: (in eax_87 : word32)
  Class: Eq_203
  DataType: word32
  OrigDataType: word32
T_206: (in eax_87 + dwLoc58_77 : word32)
  Class: Eq_128
  DataType: (ptr char)
  OrigDataType: word32
T_207: (in eax_88 : word32)
  Class: Eq_128
  DataType: (ptr char)
  OrigDataType: word32
T_208: (in dwLoc68_90 : word32)
  Class: Eq_128
  DataType: (ptr char)
  OrigDataType: word32
T_209: (in strcpy : ptr32)
  Class: Eq_131
  DataType: (ptr Eq_131)
  OrigDataType: (ptr (fn T_210 (T_208, T_124)))
T_210: (in strcpy(dwLoc68_90, &globals->b80489DA) : word32)
  Class: Eq_135
  DataType: word32
  OrigDataType: word32
T_211: (in 0x00000064 : word32)
  Class: Eq_211
  DataType: word32
  OrigDataType: word32
T_212: (in fp - 0x00000064 : word32)
  Class: Eq_212
  DataType: (ptr word32)
  OrigDataType: word32
T_213: (in esp_94 : word32)
  Class: Eq_212
  DataType: (ptr word32)
  OrigDataType: (ptr (struct (0 T_218 t0000)))
T_214: (in 0x00000054 : word32)
  Class: Eq_214
  DataType: word32
  OrigDataType: word32
T_215: (in fp - 0x00000054 : word32)
  Class: Eq_215
  DataType: word32
  OrigDataType: word32
T_216: (in 0x00000000 : word32)
  Class: Eq_216
  DataType: word32
  OrigDataType: word32
T_217: (in esp_94 + 0x00000000 : word32)
  Class: Eq_217
  DataType: word32
  OrigDataType: word32
T_218: (in Mem95[esp_94 + 0x00000000:word32] : word32)
  Class: Eq_215
  DataType: word32
  OrigDataType: word32
T_219: (in 0x080489E0 : word32)
  Class: Eq_219
  DataType: (ptr char)
  OrigDataType: word32
T_220: (in dwLoc68_97 : word32)
  Class: Eq_219
  DataType: (ptr char)
  OrigDataType: word32
T_221: (in SLICE(dwLoc68_97, <unknown>, 32) : <unknown>)
  Class: Eq_221
  DataType: Eq_221
  OrigDataType: <unknown>
T_222: (in tLoc64_98 : <unknown>)
  Class: Eq_221
  DataType: Eq_221
  OrigDataType: <unknown>
T_223: (in printf : ptr32)
  Class: Eq_223
  DataType: (ptr Eq_223)
  OrigDataType: (ptr (fn T_227 (T_220, T_222)))
T_224: (in signature of printf : void)
  Class: Eq_223
  DataType: (ptr Eq_223)
  OrigDataType: 
T_225: (in format : (ptr char))
  Class: Eq_219
  DataType: (ptr char)
  OrigDataType: (ptr char)
T_226: (in ... : <unknown>)
  Class: Eq_221
  DataType: Eq_221
  OrigDataType: <unknown>
T_227: (in printf(dwLoc68_97, tLoc64_98) : word32)
  Class: Eq_227
  DataType: word32
  OrigDataType: word32
T_228: (in PHI(dwLoc58_65, dwLoc58_130) : word32)
  Class: Eq_65
  DataType: int32
  OrigDataType: word32
T_229: (in eax_74 : word32)
  Class: Eq_65
  DataType: int32
  OrigDataType: int32
T_230: (in 0x00000010 > eax_74 : bool)
  Class: Eq_230
  DataType: bool
  OrigDataType: bool
T_231: (in al : byte)
  Class: Eq_231
  DataType: byte
  OrigDataType: byte
T_232: (in al_35 : byte)
  Class: Eq_232
  DataType: byte
  OrigDataType: byte
T_233: (in fn08048950 : ptr32)
  Class: Eq_233
  DataType: (ptr Eq_233)
  OrigDataType: (ptr (fn T_241 (T_237, T_240)))
T_234: (in signature of fn08048950 : void)
  Class: Eq_233
  DataType: (ptr Eq_233)
  OrigDataType: 
T_235: (in dwArg04 : (ptr char))
  Class: Eq_235
  DataType: (ptr char)
  OrigDataType: word32
T_236: (in dwArg08 : word32)
  Class: Eq_236
  DataType: word32
  OrigDataType: word32
T_237: (in dwArg04 : word32)
  Class: Eq_235
  DataType: (ptr char)
  OrigDataType: word32
T_238: (in fp : ptr32)
  Class: Eq_238
  DataType: (ptr Eq_238)
  OrigDataType: (ptr (struct (FFFFFF94 T_293 tFFFFFF94) (FFFFFF98 T_288 tFFFFFF98) (FFFFFF9C T_262 tFFFFFF9C)))
T_239: (in 0x0000005C : word32)
  Class: Eq_239
  DataType: word32
  OrigDataType: word32
T_240: (in fp - 0x0000005C : word32)
  Class: Eq_236
  DataType: word32
  OrigDataType: word32
T_241: (in fn08048950(dwArg04, fp - 0x0000005C) : word32)
  Class: Eq_241
  DataType: word32
  OrigDataType: word32
T_242: (in 0x00000000 : word32)
  Class: Eq_241
  DataType: word32
  OrigDataType: word32
T_243: (in fn08048950(dwArg04, fp - 0x0000005C) != 0x00000000 : bool)
  Class: Eq_243
  DataType: bool
  OrigDataType: bool
T_244: (in eax_58 : (ptr Eq_244))
  Class: Eq_244
  DataType: (ptr Eq_244)
  OrigDataType: word32
T_245: (in fopen : ptr32)
  Class: Eq_245
  DataType: (ptr Eq_245)
  OrigDataType: (ptr (fn T_250 (T_237, T_249)))
T_246: (in signature of fopen : void)
  Class: Eq_245
  DataType: (ptr Eq_245)
  OrigDataType: 
T_247: (in file : (ptr char))
  Class: Eq_235
  DataType: (ptr char)
  OrigDataType: (ptr char)
T_248: (in mode : (ptr char))
  Class: Eq_248
  DataType: (ptr char)
  OrigDataType: (ptr char)
T_249: (in 0x080489E4 : word32)
  Class: Eq_248
  DataType: (ptr char)
  OrigDataType: word32
T_250: (in fopen(dwArg04, &globals->b80489E4) : word32)
  Class: Eq_244
  DataType: (ptr Eq_244)
  OrigDataType: word32
T_251: (in 0x00000000 : word32)
  Class: Eq_244
  DataType: (ptr Eq_244)
  OrigDataType: word32
T_252: (in eax_58 != null : bool)
  Class: Eq_252
  DataType: bool
  OrigDataType: bool
T_253: (in perror : ptr32)
  Class: Eq_253
  DataType: (ptr Eq_253)
  OrigDataType: (ptr (fn T_256 (T_237)))
T_254: (in signature of perror : void)
  Class: Eq_253
  DataType: (ptr Eq_253)
  OrigDataType: 
T_255: (in msg : (ptr char))
  Class: Eq_235
  DataType: (ptr char)
  OrigDataType: (ptr char)
T_256: (in perror(dwArg04) : void)
  Class: Eq_256
  DataType: void
  OrigDataType: void
T_257: (in 0x01 : byte)
  Class: Eq_232
  DataType: byte
  OrigDataType: byte
T_258: (in dwLoc18_127 : up32)
  Class: Eq_258
  DataType: up32
  OrigDataType: up32
T_259: (in 0x00000000 : word32)
  Class: Eq_258
  DataType: up32
  OrigDataType: word32
T_260: (in 0x00000064 : word32)
  Class: Eq_260
  DataType: word32
  OrigDataType: word32
T_261: (in fp - 0x00000064 : word32)
  Class: Eq_261
  DataType: word32
  OrigDataType: word32
T_262: (in Mem66[fp - 0x00000064:word32] : word32)
  Class: Eq_235
  DataType: (ptr char)
  OrigDataType: word32
T_263: (in perror : ptr32)
  Class: Eq_253
  DataType: (ptr Eq_253)
  OrigDataType: (ptr (fn T_265 (T_264)))
T_264: (in 0x080489E4 : word32)
  Class: Eq_235
  DataType: (ptr char)
  OrigDataType: word32
T_265: (in perror(&globals->b80489E4) : void)
  Class: Eq_256
  DataType: void
  OrigDataType: void
T_266: (in 0x01 : byte)
  Class: Eq_232
  DataType: byte
  OrigDataType: byte
T_267: (in eax_110 : word32)
  Class: Eq_267
  DataType: word32
  OrigDataType: word32
T_268: (in fread : ptr32)
  Class: Eq_268
  DataType: (ptr Eq_268)
  OrigDataType: (ptr (fn T_278 (T_275, T_276, T_277, T_244)))
T_269: (in signature of fread : void)
  Class: Eq_268
  DataType: (ptr Eq_268)
  OrigDataType: 
T_270: (in ptr : (ptr void))
  Class: Eq_270
  DataType: (ptr void)
  OrigDataType: (ptr void)
T_271: (in size : size_t)
  Class: Eq_271
  DataType: Eq_271
  OrigDataType: size_t
T_272: (in count : size_t)
  Class: Eq_272
  DataType: Eq_272
  OrigDataType: size_t
T_273: (in stream : (ptr FILE))
  Class: Eq_244
  DataType: (ptr Eq_244)
  OrigDataType: (ptr FILE)
T_274: (in 0x00000014 : word32)
  Class: Eq_274
  DataType: word32
  OrigDataType: word32
T_275: (in fp - 0x00000014 : word32)
  Class: Eq_270
  DataType: (ptr void)
  OrigDataType: word32
T_276: (in 0x00000001 : word32)
  Class: Eq_271
  DataType: word32
  OrigDataType: word32
T_277: (in 0x00000010 : word32)
  Class: Eq_272
  DataType: word32
  OrigDataType: word32
T_278: (in fread(fp - 0x00000014, 0x00000001, 0x00000010, eax_58) : word32)
  Class: Eq_267
  DataType: word32
  OrigDataType: word32
T_279: (in 0x00000000 : word32)
  Class: Eq_267
  DataType: word32
  OrigDataType: word32
T_280: (in eax_110 != 0x00000000 : bool)
  Class: Eq_280
  DataType: bool
  OrigDataType: bool
T_281: (in fclose : ptr32)
  Class: Eq_281
  DataType: (ptr Eq_281)
  OrigDataType: (ptr (fn T_284 (T_244)))
T_282: (in signature of fclose : void)
  Class: Eq_281
  DataType: (ptr Eq_281)
  OrigDataType: 
T_283: (in fp : (ptr FILE))
  Class: Eq_244
  DataType: (ptr Eq_244)
  OrigDataType: (ptr FILE)
T_284: (in fclose(eax_58) : word32)
  Class: Eq_284
  DataType: word32
  OrigDataType: word32
T_285: (in 0x00 : byte)
  Class: Eq_232
  DataType: byte
  OrigDataType: byte
T_286: (in 0x00000068 : word32)
  Class: Eq_286
  DataType: word32
  OrigDataType: word32
T_287: (in fp - 0x00000068 : word32)
  Class: Eq_287
  DataType: word32
  OrigDataType: word32
T_288: (in Mem120[fp - 0x00000068:word32] : word32)
  Class: Eq_258
  DataType: up32
  OrigDataType: word32
T_289: (in 0x00000014 : word32)
  Class: Eq_289
  DataType: word32
  OrigDataType: word32
T_290: (in fp - 0x00000014 : word32)
  Class: Eq_290
  DataType: word32
  OrigDataType: word32
T_291: (in 0x0000006C : word32)
  Class: Eq_291
  DataType: word32
  OrigDataType: word32
T_292: (in fp - 0x0000006C : word32)
  Class: Eq_292
  DataType: word32
  OrigDataType: word32
T_293: (in Mem123[fp - 0x0000006C:word32] : word32)
  Class: Eq_290
  DataType: word32
  OrigDataType: word32
T_294: (in fn08048660 : ptr32)
  Class: Eq_294
  DataType: (ptr Eq_294)
  OrigDataType: (ptr (fn T_301 (T_299, T_300, T_267)))
T_295: (in signature of fn08048660 : void)
  Class: Eq_294
  DataType: (ptr Eq_294)
  OrigDataType: 
T_296: (in dwArg04 : word32)
  Class: Eq_296
  DataType: word32
  OrigDataType: word32
T_297: (in dwArg08 : word32)
  Class: Eq_297
  DataType: word32
  OrigDataType: word32
T_298: (in dwArg0C : word32)
  Class: Eq_267
  DataType: word32
  OrigDataType: word32
T_299: (in 0x00000001 : word32)
  Class: Eq_296
  DataType: word32
  OrigDataType: word32
T_300: (in 0x00000010 : word32)
  Class: Eq_297
  DataType: word32
  OrigDataType: word32
T_301: (in fn08048660(0x00000001, 0x00000010, eax_110) : void)
  Class: Eq_301
  DataType: void
  OrigDataType: void
T_302: (in dwLoc18_127 + eax_110 : word32)
  Class: Eq_258
  DataType: up32
  OrigDataType: word32
T_303: (in dwLoc48 : word32)
  Class: Eq_258
  DataType: up32
  OrigDataType: up32
T_304: (in dwLoc48 >u dwLoc18_127 : bool)
  Class: Eq_304
  DataType: bool
  OrigDataType: bool
T_305: (in eax : word32)
  Class: Eq_305
  DataType: word32
  OrigDataType: word32
T_306: (in dwLoc0C_15 : word32)
  Class: Eq_306
  DataType: word32
  OrigDataType: word32
T_307: (in 0x00000000 : word32)
  Class: Eq_306
  DataType: word32
  OrigDataType: word32
T_308: (in dwLoc08_16 : int32)
  Class: Eq_308
  DataType: int32
  OrigDataType: int32
T_309: (in 0x00000001 : word32)
  Class: Eq_308
  DataType: int32
  OrigDataType: word32
T_310: (in eax_34 : word32)
  Class: Eq_310
  DataType: word32
  OrigDataType: word32
T_311: (in dwArg08 : word32)
  Class: Eq_311
  DataType: (ptr (arr word32))
  OrigDataType: (ptr (struct (0 (arr T_353) a0000)))
T_312: (in 0x00000004 : word32)
  Class: Eq_312
  DataType: ui32
  OrigDataType: ui32
T_313: (in dwLoc08_16 * 0x00000004 : word32)
  Class: Eq_313
  DataType: ui32
  OrigDataType: ui32
T_314: (in dwArg08[dwLoc08_16 * 0x00000004] : word32)
  Class: Eq_310
  DataType: word32
  OrigDataType: word32
T_315: (in fn080487F0 : ptr32)
  Class: Eq_315
  DataType: (ptr Eq_315)
  OrigDataType: (ptr (fn T_318 (T_310)))
T_316: (in signature of fn080487F0 : void)
  Class: Eq_315
  DataType: (ptr Eq_315)
  OrigDataType: 
T_317: (in dwArg04 : word32)
  Class: Eq_310
  DataType: word32
  OrigDataType: word32
T_318: (in fn080487F0(eax_34) : byte)
  Class: Eq_318
  DataType: byte
  OrigDataType: byte
T_319: (in DPB(eax_34, fn080487F0(eax_34), 0, 8) : word32)
  Class: Eq_319
  DataType: word32
  OrigDataType: word32
T_320: (in dwLoc0C_15 + DPB(eax_34, fn080487F0(eax_34), 0, 8) : word32)
  Class: Eq_306
  DataType: word32
  OrigDataType: word32
T_321: (in 0x00000001 : word32)
  Class: Eq_321
  DataType: word32
  OrigDataType: word32
T_322: (in dwLoc08_16 + 0x00000001 : word32)
  Class: Eq_308
  DataType: int32
  OrigDataType: word32
T_323: (in dwArg04 : word32)
  Class: Eq_308
  DataType: int32
  OrigDataType: int32
T_324: (in dwArg04 > dwLoc08_16 : bool)
  Class: Eq_324
  DataType: bool
  OrigDataType: bool
T_325: (in eax : word32)
  Class: Eq_325
  DataType: word32
  OrigDataType: word32
T_326: (in eax_22 : word32)
  Class: Eq_326
  DataType: word32
  OrigDataType: word32
T_327: (in _xstat : ptr32)
  Class: Eq_327
  DataType: (ptr Eq_327)
  OrigDataType: (ptr (fn T_335 (T_332, T_333, T_334)))
T_328: (in signature of _xstat : void)
  Class: Eq_327
  DataType: (ptr Eq_327)
  OrigDataType: 
T_329: (in version : int32)
  Class: Eq_329
  DataType: int32
  OrigDataType: int32
T_330: (in path : (ptr char))
  Class: Eq_330
  DataType: (ptr char)
  OrigDataType: (ptr char)
T_331: (in statbuf : (ptr (struct "stat")))
  Class: Eq_331
  DataType: (ptr Eq_331)
  OrigDataType: (ptr (struct "stat"))
T_332: (in 0x00000001 : word32)
  Class: Eq_329
  DataType: int32
  OrigDataType: word32
T_333: (in dwArg04 : word32)
  Class: Eq_330
  DataType: (ptr char)
  OrigDataType: word32
T_334: (in dwArg08 : word32)
  Class: Eq_331
  DataType: (ptr Eq_331)
  OrigDataType: word32
T_335: (in _xstat(0x00000001, dwArg04, dwArg08) : word32)
  Class: Eq_326
  DataType: word32
  OrigDataType: word32
T_336: (in ebx_24 : (ptr Eq_336))
  Class: Eq_336
  DataType: (ptr Eq_336)
  OrigDataType: (ptr (struct 0004 (0 T_342 t0000)))
T_337: (in 0x080499EC : word32)
  Class: Eq_336
  DataType: (ptr Eq_336)
  OrigDataType: word32
T_338: (in 0x080499EC : ptr32)
  Class: Eq_338
  DataType: (ptr word32)
  OrigDataType: (ptr (struct (0 T_339 t0000)))
T_339: (in Mem0[0x080499EC:word32] : word32)
  Class: Eq_339
  DataType: word32
  OrigDataType: word32
T_340: (in 0xFFFFFFFF : word32)
  Class: Eq_339
  DataType: word32
  OrigDataType: word32
T_341: (in globals->dw80499EC == 0xFFFFFFFF : bool)
  Class: Eq_341
  DataType: bool
  OrigDataType: bool
T_342: (in eax_25 : (ptr code))
  Class: Eq_342
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_343: (in 0x00000000 : word32)
  Class: Eq_343
  DataType: word32
  OrigDataType: word32
T_344: (in ebx_24 + 0x00000000 : word32)
  Class: Eq_344
  DataType: word32
  OrigDataType: word32
T_345: (in Mem0[ebx_24 + 0x00000000:word32] : word32)
  Class: Eq_342
  DataType: (ptr code)
  OrigDataType: word32
T_346: (in 0xFFFFFFFC : word32)
  Class: Eq_346
  DataType: word32
  OrigDataType: word32
T_347: (in ebx_24 + 0xFFFFFFFC : word32)
  Class: Eq_336
  DataType: (ptr Eq_336)
  OrigDataType: word32
T_348: (in 0x00000000 : word32)
  Class: Eq_348
  DataType: word32
  OrigDataType: word32
T_349: (in ebx_24 + 0x00000000 : word32)
  Class: Eq_349
  DataType: word32
  OrigDataType: word32
T_350: (in Mem0[ebx_24 + 0x00000000:word32] : word32)
  Class: Eq_342
  DataType: (ptr code)
  OrigDataType: word32
T_351: (in 0xFFFFFFFF : word32)
  Class: Eq_342
  DataType: (ptr code)
  OrigDataType: word32
T_352: (in ebx_24->ptr0000 != (code *) 0xFFFFFFFF : bool)
  Class: Eq_352
  DataType: bool
  OrigDataType: bool
T_353:
  Class: Eq_353
  DataType: word32
  OrigDataType: (struct 0004 (0 T_314 t0000))
*/
typedef code Eq_1code Eq_1struct Globals {
	code tFFFFFFFF;	// FFFFFFFF
	code * ptr80489C0;	// 80489C0
	char b80489C8;	// 80489C8
	char b80489CF;	// 80489CF
	char b80489D6;	// 80489D6
	char b80489DA;	// 80489DA
	char b80489E0;	// 80489E0
	char b80489E4;	// 80489E4
	word32 dw80499E8;	// 80499E8
	word32 dw80499EC;	// 80499EC
} Eq_1;

typedef void (Eq_2)();

typedef void (Eq_5)(word32);

typedef void (Eq_10)(byte);

typedef void (Eq_26)(code * *);

typedef void (Eq_31)();

typedef void (Eq_34)(int32);

typedef int32 (Eq_37)(ui32, word32);

typedef void (Eq_44)(byte);

typedef void;

typedef word32 (Eq_56)(char *, char *, );

typedef word32 (Eq_110)(char *, char *);

typedef word32 (Eq_118)(char *);

typedef word32 (Eq_131)(char *, char *);

typedef void;

typedef word32 (Eq_223)(char *, );

typedef word32 (Eq_233)(char *, word32);

typedef struct Eq_238 {
	word32 dwFFFFFF94;	// FFFFFF94
	up32 dwFFFFFF98;	// FFFFFF98
	char * ptrFFFFFF9C;	// FFFFFF9C
} Eq_238;

typedef FILE;

typedef FILE * (Eq_245)(char *, char *);

typedef void (Eq_253)(char *);

typedef word32 (Eq_268)(void, Eq_271, Eq_272, FILE *);

typedef union Eq_271 {
	word32 u0;
	 size_t u1;
} Eq_271;

typedef union Eq_272 {
	word32 u0;
	 size_t u1;
} Eq_272;

typedef word32 (Eq_281)(FILE *);

typedef void (Eq_294)(word32, word32, word32);

typedef byte (Eq_315)(word32);

typedef word32 (Eq_327)(int32, char *,  *);

typedef ;

typedef Eq_336 Eq_336code Eq_336struct Eq_336 {	// size: 4 4
	Eq_336 tFFFFFFFC;	// FFFFFFFC
	code * ptr0000;	// 0
} Eq_336;

