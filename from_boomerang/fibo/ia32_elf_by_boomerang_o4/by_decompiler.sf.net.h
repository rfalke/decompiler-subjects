// subject.h
// Generated on TIMESTAMP by decompiling from_boomerang/fibo/ia32_elf_by_boomerang_o4/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr (struct "Globals"))
  OrigDataType: (ptr (struct "Globals"))
T_2: (in 0x0804867C : word32)
  Class: Eq_2
  DataType: word32
  OrigDataType: word32
T_3: (in 0x00000000 : word32)
  Class: Eq_2
  DataType: word32
  OrigDataType: word32
T_4: (in 0x0804867C == 0x00000000 : bool)
  Class: Eq_4
  DataType: bool
  OrigDataType: bool
T_5: (in 0x08049904 : word32)
  Class: Eq_5
  DataType: word32
  OrigDataType: word32
T_6: (in 0x00000000 : word32)
  Class: Eq_5
  DataType: word32
  OrigDataType: word32
T_7: (in 0x08049904 == 0x00000000 : bool)
  Class: Eq_7
  DataType: bool
  OrigDataType: bool
T_8: (in atexit : ptr32)
  Class: Eq_8
  DataType: (ptr (fn T_12 (T_11)))
  OrigDataType: (ptr (fn T_12 (T_11)))
T_9: (in signature of atexit : void)
  Class: Eq_8
  DataType: 
  OrigDataType: 
T_10: (in func : (ptr (ptr code)))
  Class: Eq_10
  DataType: (ptr (ptr code))
  OrigDataType: (ptr (ptr code))
T_11: (in 0x0804867C : word32)
  Class: Eq_10
  DataType: word32
  OrigDataType: word32
T_12: (in atexit(0x0804867C) : void)
  Class: Eq_12
  DataType: void
  OrigDataType: void
T_13: (in 0x080488A0 : word32)
  Class: Eq_13
  DataType: word32
  OrigDataType: word32
T_14: (in fp : ptr32)
  Class: Eq_14
  DataType: (ptr (struct (FFFFFFE8 T_52 tFFFFFFE8) (FFFFFFEC T_39 tFFFFFFEC) (FFFFFFF0 T_17 tFFFFFFF0)))
  OrigDataType: (ptr (struct (FFFFFFE8 T_52 tFFFFFFE8) (FFFFFFEC T_39 tFFFFFFEC) (FFFFFFF0 T_17 tFFFFFFF0)))
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
  DataType: (ptr (fn T_20 (T_19)))
  OrigDataType: (ptr (fn T_20 (T_19)))
T_19: (in 0x0804867C : word32)
  Class: Eq_10
  DataType: word32
  OrigDataType: word32
T_20: (in atexit(0x0804867C) : void)
  Class: Eq_20
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
T_26: (in fp + 0x00000008 + dwArg00 * 0x00000004 : word32)
  Class: Eq_26
  DataType: word32
  OrigDataType: word32
T_27: (in 0x080499AC : ptr32)
  Class: Eq_27
  DataType: (ptr (struct (0 T_28 t0000)))
  OrigDataType: (ptr (struct (0 T_28 t0000)))
T_28: (in Mem28[0x080499AC:word32] : word32)
  Class: Eq_26
  DataType: word32
  OrigDataType: word32
T_29: (in __fpstart : ptr32)
  Class: Eq_29
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_30: (in fn080487CC : ptr32)
  Class: Eq_30
  DataType: (ptr (fn T_39 (T_38)))
  OrigDataType: (ptr (fn T_39 (T_38)))
T_31: (in signature of fn080487CC : void)
  Class: Eq_30
  DataType: 
  OrigDataType: 
T_32: (in ebx : word32)
  Class: Eq_32
  DataType: word32
  OrigDataType: word32
T_33: (in fn08048880 : ptr32)
  Class: Eq_33
  DataType: (ptr (fn T_38 (T_37)))
  OrigDataType: (ptr (fn T_38 (T_37)))
T_34: (in signature of fn08048880 : void)
  Class: Eq_33
  DataType: 
  OrigDataType: 
T_35: (in ebp : word32)
  Class: Eq_35
  DataType: word32
  OrigDataType: word32
T_36: (in 0x00000008 : word32)
  Class: Eq_36
  DataType: word32
  OrigDataType: word32
T_37: (in fp - 0x00000008 : word32)
  Class: Eq_35
  DataType: word32
  OrigDataType: word32
T_38: (in fn08048880(fp - 0x00000008) : word32)
  Class: Eq_32
  DataType: word32
  OrigDataType: word32
T_39: (in fn080487CC(fn08048880(fp - 0x00000008)) : word32)
  Class: Eq_39
  DataType: word32
  OrigDataType: word32
T_40: (in 0x00000014 : word32)
  Class: Eq_40
  DataType: word32
  OrigDataType: word32
T_41: (in fp - 0x00000014 : word32)
  Class: Eq_41
  DataType: word32
  OrigDataType: word32
T_42: (in Mem41[fp - 0x00000014:word32] : word32)
  Class: Eq_39
  DataType: word32
  OrigDataType: word32
T_43: (in exit : ptr32)
  Class: Eq_43
  DataType: (ptr (fn T_48 (T_47)))
  OrigDataType: (ptr (fn T_48 (T_47)))
T_44: (in signature of exit : void)
  Class: Eq_43
  DataType: 
  OrigDataType: 
T_45: (in arg0 : int32)
  Class: Eq_39
  DataType: int32
  OrigDataType: int32
T_46: (in fp - 0x00000014 : word32)
  Class: Eq_46
  DataType: word32
  OrigDataType: word32
T_47: (in Mem41[fp - 0x00000014:int32] : int32)
  Class: Eq_39
  DataType: int32
  OrigDataType: int32
T_48: (in exit(Mem41[fp - 0x00000014:int32]) : void)
  Class: Eq_48
  DataType: void
  OrigDataType: void
T_49: (in 0x00000000 : word32)
  Class: Eq_49
  DataType: word32
  OrigDataType: word32
T_50: (in 0x00000018 : word32)
  Class: Eq_50
  DataType: word32
  OrigDataType: word32
T_51: (in fp - 0x00000018 : word32)
  Class: Eq_51
  DataType: word32
  OrigDataType: word32
T_52: (in Mem43[fp - 0x00000018:word32] : word32)
  Class: Eq_49
  DataType: word32
  OrigDataType: word32
T_53: (in atexit : ptr32)
  Class: Eq_8
  DataType: (ptr (fn T_55 (T_54)))
  OrigDataType: (ptr (fn T_55 (T_54)))
T_54: (in edx : word32)
  Class: Eq_10
  DataType: word32
  OrigDataType: word32
T_55: (in atexit(edx) : void)
  Class: Eq_55
  DataType: void
  OrigDataType: void
T_56: (in eax : word32)
  Class: Eq_56
  DataType: word32
  OrigDataType: word32
T_57: (in eax_18 : word32)
  Class: Eq_57
  DataType: int32
  OrigDataType: int32
T_58: (in dwArg04 : word32)
  Class: Eq_57
  DataType: int32
  OrigDataType: int32
T_59: (in 0x00000001 : word32)
  Class: Eq_57
  DataType: int32
  OrigDataType: int32
T_60: (in dwArg04 <= 0x00000001 : bool)
  Class: Eq_60
  DataType: bool
  OrigDataType: bool
T_61: (in fn08048798 : ptr32)
  Class: Eq_61
  DataType: (ptr (fn T_66 (T_65)))
  OrigDataType: (ptr (fn T_66 (T_65)))
T_62: (in signature of fn08048798 : void)
  Class: Eq_61
  DataType: 
  OrigDataType: 
T_63: (in dwArg04 : word32)
  Class: Eq_63
  DataType: word32
  OrigDataType: word32
T_64: (in 0x00000002 : word32)
  Class: Eq_64
  DataType: word32
  OrigDataType: word32
T_65: (in dwArg04 - 0x00000002 : word32)
  Class: Eq_63
  DataType: word32
  OrigDataType: word32
T_66: (in fn08048798(dwArg04 - 0x00000002) : word32)
  Class: Eq_66
  DataType: word32
  OrigDataType: word32
T_67: (in fn08048798 : ptr32)
  Class: Eq_61
  DataType: (ptr (fn T_70 (T_69)))
  OrigDataType: (ptr (fn T_70 (T_69)))
T_68: (in 0x00000001 : word32)
  Class: Eq_68
  DataType: word32
  OrigDataType: word32
T_69: (in dwArg04 - 0x00000001 : word32)
  Class: Eq_63
  DataType: word32
  OrigDataType: word32
T_70: (in fn08048798(dwArg04 - 0x00000001) : word32)
  Class: Eq_70
  DataType: word32
  OrigDataType: word32
T_71: (in fn08048798(dwArg04 - 0x00000002) + fn08048798(dwArg04 - 0x00000001) : word32)
  Class: Eq_57
  DataType: word32
  OrigDataType: word32
T_72: (in eax : word32)
  Class: Eq_72
  DataType: word32
  OrigDataType: word32
T_73: (in 0x080488B8 : word32)
  Class: Eq_63
  DataType: word32
  OrigDataType: word32
T_74: (in dwLoc14_14 : word32)
  Class: Eq_63
  DataType: word32
  OrigDataType: word32
T_75: (in 0x080488B8 : word32)
  Class: Eq_75
  DataType: word32
  OrigDataType: word32
T_76: (in SLICE(0x080488B8, <unknown>, 32) : <unknown>)
  Class: Eq_76
  DataType: <unknown>
  OrigDataType: <unknown>
T_77: (in tLoc10_15 : <unknown>)
  Class: Eq_76
  DataType: <unknown>
  OrigDataType: <unknown>
T_78: (in printf : ptr32)
  Class: Eq_78
  DataType: (ptr (fn T_82 (T_74, T_77)))
  OrigDataType: (ptr (fn T_82 (T_74, T_77)))
T_79: (in signature of printf : void)
  Class: Eq_78
  DataType: 
  OrigDataType: 
T_80: (in format : (ptr char))
  Class: Eq_63
  DataType: (ptr char)
  OrigDataType: (ptr char)
T_81: (in ... : <unknown>)
  Class: Eq_76
  DataType: <unknown>
  OrigDataType: <unknown>
T_82: (in printf(dwLoc14_14, tLoc10_15) : word32)
  Class: Eq_82
  DataType: word32
  OrigDataType: word32
T_83: (in 0x080488C7 : word32)
  Class: Eq_63
  DataType: word32
  OrigDataType: word32
T_84: (in dwLoc1C_21 : word32)
  Class: Eq_63
  DataType: word32
  OrigDataType: word32
T_85: (in SLICE(dwLoc1C_21, <unknown>, 32) : <unknown>)
  Class: Eq_85
  DataType: <unknown>
  OrigDataType: <unknown>
T_86: (in tLoc18_22 : <unknown>)
  Class: Eq_85
  DataType: <unknown>
  OrigDataType: <unknown>
T_87: (in scanf : ptr32)
  Class: Eq_87
  DataType: (ptr (fn T_91 (T_84, T_86)))
  OrigDataType: (ptr (fn T_91 (T_84, T_86)))
T_88: (in signature of scanf : void)
  Class: Eq_87
  DataType: 
  OrigDataType: 
T_89: (in format : (ptr char))
  Class: Eq_63
  DataType: (ptr char)
  OrigDataType: (ptr char)
T_90: (in ... : <unknown>)
  Class: Eq_85
  DataType: <unknown>
  OrigDataType: <unknown>
T_91: (in scanf(dwLoc1C_21, tLoc18_22) : word32)
  Class: Eq_91
  DataType: word32
  OrigDataType: word32
T_92: (in dwLoc08 : word32)
  Class: Eq_92
  DataType: word32
  OrigDataType: word32
T_93: (in ebx_25 : word32)
  Class: Eq_92
  DataType: int32
  OrigDataType: int32
T_94: (in 0x00000001 : word32)
  Class: Eq_92
  DataType: int32
  OrigDataType: int32
T_95: (in ebx_25 <= 0x00000001 : bool)
  Class: Eq_95
  DataType: bool
  OrigDataType: bool
T_96: (in 0x00000001 : word32)
  Class: Eq_96
  DataType: word32
  OrigDataType: word32
T_97: (in ebx_25 - 0x00000001 : word32)
  Class: Eq_97
  DataType: word32
  OrigDataType: word32
T_98: (in eax_49 : word32)
  Class: Eq_97
  DataType: word32
  OrigDataType: word32
T_99: (in fp : ptr32)
  Class: Eq_99
  DataType: ptr32
  OrigDataType: ptr32
T_100: (in 0x00000014 : word32)
  Class: Eq_100
  DataType: word32
  OrigDataType: word32
T_101: (in fp - 0x00000014 : word32)
  Class: Eq_101
  DataType: word32
  OrigDataType: word32
T_102: (in esp_50 : word32)
  Class: Eq_101
  DataType: (ptr (struct (0 T_105 t0000)))
  OrigDataType: (ptr (struct (0 T_105 t0000)))
T_103: (in 0x00000000 : word32)
  Class: Eq_103
  DataType: word32
  OrigDataType: word32
T_104: (in esp_50 + 0x00000000 : word32)
  Class: Eq_104
  DataType: word32
  OrigDataType: word32
T_105: (in Mem51[esp_50 + 0x00000000:word32] : word32)
  Class: Eq_97
  DataType: word32
  OrigDataType: word32
T_106: (in fn08048798 : ptr32)
  Class: Eq_61
  DataType: (ptr (fn T_107 (T_74)))
  OrigDataType: (ptr (fn T_107 (T_74)))
T_107: (in fn08048798(dwLoc14_14) : word32)
  Class: Eq_107
  DataType: word32
  OrigDataType: word32
T_108: (in 0x00000002 : word32)
  Class: Eq_108
  DataType: word32
  OrigDataType: word32
T_109: (in ebx_25 - 0x00000002 : word32)
  Class: Eq_63
  DataType: word32
  OrigDataType: word32
T_110: (in eax_54 : word32)
  Class: Eq_63
  DataType: word32
  OrigDataType: word32
T_111: (in dwLoc18_56 : word32)
  Class: Eq_63
  DataType: word32
  OrigDataType: word32
T_112: (in fn08048798 : ptr32)
  Class: Eq_61
  DataType: (ptr (fn T_113 (T_111)))
  OrigDataType: (ptr (fn T_113 (T_111)))
T_113: (in fn08048798(dwLoc18_56) : word32)
  Class: Eq_113
  DataType: word32
  OrigDataType: word32
T_114: (in dwLoc18_34 : word32)
  Class: Eq_92
  DataType: word32
  OrigDataType: word32
T_115: (in (void) dwLoc18_34 : <unknown>)
  Class: Eq_76
  DataType: <unknown>
  OrigDataType: <unknown>
T_116: (in tLoc18_35 : <unknown>)
  Class: Eq_76
  DataType: <unknown>
  OrigDataType: <unknown>
T_117: (in 0x0000001C : word32)
  Class: Eq_117
  DataType: word32
  OrigDataType: word32
T_118: (in fp - 0x0000001C : word32)
  Class: Eq_118
  DataType: word32
  OrigDataType: word32
T_119: (in esp_36 : word32)
  Class: Eq_118
  DataType: (ptr (struct (0 T_123 t0000)))
  OrigDataType: (ptr (struct (0 T_123 t0000)))
T_120: (in 0x080488CA : word32)
  Class: Eq_120
  DataType: word32
  OrigDataType: word32
T_121: (in 0x00000000 : word32)
  Class: Eq_121
  DataType: word32
  OrigDataType: word32
T_122: (in esp_36 + 0x00000000 : word32)
  Class: Eq_122
  DataType: word32
  OrigDataType: word32
T_123: (in Mem37[esp_36 + 0x00000000:word32] : word32)
  Class: Eq_120
  DataType: word32
  OrigDataType: word32
T_124: (in printf : ptr32)
  Class: Eq_78
  DataType: (ptr (fn T_125 (T_83, T_116)))
  OrigDataType: (ptr (fn T_125 (T_83, T_116)))
T_125: (in printf(0x080488C7, tLoc18_35) : word32)
  Class: Eq_125
  DataType: word32
  OrigDataType: word32
T_126: (in 0x00000000 : word32)
  Class: Eq_126
  DataType: word32
  OrigDataType: word32
T_127: (in eax_39 : word32)
  Class: Eq_126
  DataType: word32
  OrigDataType: word32
T_128: (in ebx : word32)
  Class: Eq_128
  DataType: word32
  OrigDataType: word32
T_129: (in ebp_13 : word32)
  Class: Eq_129
  DataType: word32
  OrigDataType: word32
T_130: (in fn0804883A : ptr32)
  Class: Eq_130
  DataType: (ptr (fn T_140 (T_137, T_138, T_139)))
  OrigDataType: (ptr (fn T_140 (T_137, T_138, T_139)))
T_131: (in signature of fn0804883A : void)
  Class: Eq_130
  DataType: 
  OrigDataType: 
T_132: (in ebp : word32)
  Class: Eq_129
  DataType: (ptr (struct (0 T_159 t0000)))
  OrigDataType: (ptr (struct (0 T_159 t0000)))
T_133: (in dwArg00 : word32)
  Class: Eq_35
  DataType: word32
  OrigDataType: word32
T_134: (in ebpOut : ptr32)
  Class: Eq_134
  DataType: ptr32
  OrigDataType: ptr32
T_135: (in fp : ptr32)
  Class: Eq_135
  DataType: ptr32
  OrigDataType: ptr32
T_136: (in 0x00000004 : word32)
  Class: Eq_136
  DataType: word32
  OrigDataType: word32
T_137: (in fp - 0x00000004 : word32)
  Class: Eq_129
  DataType: word32
  OrigDataType: word32
T_138: (in dwLoc10 : word32)
  Class: Eq_35
  DataType: word32
  OrigDataType: word32
T_139: (in out ebp_13 : ptr32)
  Class: Eq_134
  DataType: (ptr word32)
  OrigDataType: (ptr word32)
T_140: (in fn0804883A(fp - 0x00000004, dwLoc10, out ebp_13) : word32)
  Class: Eq_140
  DataType: word32
  OrigDataType: word32
T_141: (in ebp_15 : word32)
  Class: Eq_141
  DataType: word32
  OrigDataType: word32
T_142: (in fn0804883A : ptr32)
  Class: Eq_130
  DataType: (ptr (fn T_145 (T_129, T_143, T_144)))
  OrigDataType: (ptr (fn T_145 (T_129, T_143, T_144)))
T_143: (in ebp : word32)
  Class: Eq_35
  DataType: word32
  OrigDataType: word32
T_144: (in out ebp_15 : ptr32)
  Class: Eq_134
  DataType: (ptr word32)
  OrigDataType: (ptr word32)
T_145: (in fn0804883A(ebp_13, ebp, out ebp_15) : word32)
  Class: Eq_145
  DataType: word32
  OrigDataType: word32
T_146: (in ebx : word32)
  Class: Eq_146
  DataType: word32
  OrigDataType: word32
T_147: (in esi_24 : word32)
  Class: Eq_147
  DataType: word32
  OrigDataType: word32
T_148: (in dwArg00 : word32)
  Class: Eq_148
  DataType: (ptr (struct (1162 T_153 t1162)))
  OrigDataType: (ptr (struct (1162 T_153 t1162)))
T_149: (in 0x00001162 : word32)
  Class: Eq_149
  DataType: word32
  OrigDataType: word32
T_150: (in dwArg00 + 0x00001162 : word32)
  Class: Eq_147
  DataType: word32
  OrigDataType: word32
T_151: (in 0x00001162 : word32)
  Class: Eq_151
  DataType: word32
  OrigDataType: word32
T_152: (in dwArg00 + 0x00001162 : word32)
  Class: Eq_152
  DataType: word32
  OrigDataType: word32
T_153: (in Mem0[dwArg00 + 0x00001162:word32] : word32)
  Class: Eq_153
  DataType: word32
  OrigDataType: word32
T_154: (in 0xFFFFFFFF : word32)
  Class: Eq_153
  DataType: word32
  OrigDataType: word32
T_155: (in Mem0[dwArg00 + 0x00001162:word32] == 0xFFFFFFFF : bool)
  Class: Eq_155
  DataType: bool
  OrigDataType: bool
T_156: (in ebp_21 : word32)
  Class: Eq_156
  DataType: word32
  OrigDataType: word32
T_157: (in 0x00000000 : word32)
  Class: Eq_157
  DataType: word32
  OrigDataType: word32
T_158: (in ebp + 0x00000000 : word32)
  Class: Eq_158
  DataType: word32
  OrigDataType: word32
T_159: (in Mem0[ebp + 0x00000000:word32] : word32)
  Class: Eq_159
  DataType: word32
  OrigDataType: word32
T_160: (in *ebpOut : word32)
  Class: Eq_159
  DataType: 
  OrigDataType: 
T_161: (in 0x00000008 : word32)
  Class: Eq_161
  DataType: 
  OrigDataType: 
T_162: (in ebp - 0x00000008 : word32)
  Class: Eq_162
  DataType: 
  OrigDataType: 
T_163: (in Mem0[ebp - 0x00000008:word32] : word32)
  Class: Eq_163
  DataType: 
  OrigDataType: 
T_164: (in eax_25 : word32)
  Class: Eq_164
  DataType: 
  OrigDataType: 
T_165: (in 0x00000000 : word32)
  Class: Eq_165
  DataType: 
  OrigDataType: 
T_166: (in esi_24 + 0x00000000 : word32)
  Class: Eq_166
  DataType: 
  OrigDataType: 
T_167: (in Mem0[esi_24 + 0x00000000:word32] : word32)
  Class: Eq_164
  DataType: 
  OrigDataType: 
T_168: (in 0xFFFFFFFC : word32)
  Class: Eq_168
  DataType: 
  OrigDataType: 
T_169: (in esi_24 + 0xFFFFFFFC : word32)
  Class: Eq_147
  DataType: 
  OrigDataType: 
T_170: (in 0x00000000 : word32)
  Class: Eq_170
  DataType: 
  OrigDataType: 
T_171: (in esi_24 + 0x00000000 : word32)
  Class: Eq_171
  DataType: 
  OrigDataType: 
T_172: (in Mem0[esi_24 + 0x00000000:word32] : word32)
  Class: Eq_172
  DataType: 
  OrigDataType: 
T_173: (in 0xFFFFFFFF : word32)
  Class: Eq_172
  DataType: 
  OrigDataType: 
T_174: (in Mem0[esi_24 + 0x00000000:word32] != 0xFFFFFFFF : bool)
  Class: Eq_174
  DataType: 
  OrigDataType: 
T_175: (in ebx : word32)
  Class: Eq_175
  DataType: 
  OrigDataType: 
T_176: (in fn08048830 : ptr32)
  Class: Eq_176
  DataType: 
  OrigDataType: 
T_177: (in signature of fn08048830 : void)
  Class: Eq_176
  DataType: 
  OrigDataType: 
T_178: (in fn08048830(ebp) : word32)
  Class: Eq_178
  DataType: 
  OrigDataType: 
*/
