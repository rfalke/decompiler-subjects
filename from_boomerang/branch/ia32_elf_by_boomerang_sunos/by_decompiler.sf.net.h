// subject.h
// Generated on TIMESTAMP by decompiling from_boomerang/branch/ia32_elf_by_boomerang_sunos/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr (struct "Globals"))
  OrigDataType: (ptr (struct "Globals"))
T_2: (in 0x080487A0 : word32)
  Class: Eq_2
  DataType: word32
  OrigDataType: word32
T_3: (in 0x00000000 : word32)
  Class: Eq_2
  DataType: word32
  OrigDataType: word32
T_4: (in 0x080487A0 == 0x00000000 : bool)
  Class: Eq_4
  DataType: bool
  OrigDataType: bool
T_5: (in 0x0804A5F4 : word32)
  Class: Eq_5
  DataType: word32
  OrigDataType: word32
T_6: (in 0x00000000 : word32)
  Class: Eq_5
  DataType: word32
  OrigDataType: word32
T_7: (in 0x0804A5F4 == 0x00000000 : bool)
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
T_11: (in 0x080487A0 : word32)
  Class: Eq_10
  DataType: word32
  OrigDataType: word32
T_12: (in atexit(0x080487A0) : void)
  Class: Eq_12
  DataType: void
  OrigDataType: void
T_13: (in 0x08049510 : word32)
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
T_19: (in 0x080487A0 : word32)
  Class: Eq_10
  DataType: word32
  OrigDataType: word32
T_20: (in atexit(0x080487A0) : void)
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
T_27: (in 0x0804ACCC : ptr32)
  Class: Eq_27
  DataType: (ptr (struct (0 T_28 t0000)))
  OrigDataType: (ptr (struct (0 T_28 t0000)))
T_28: (in Mem28[0x0804ACCC:word32] : word32)
  Class: Eq_26
  DataType: word32
  OrigDataType: word32
T_29: (in __fpstart : ptr32)
  Class: Eq_29
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_30: (in fn08048948 : ptr32)
  Class: Eq_30
  DataType: (ptr (fn T_39 (T_38)))
  OrigDataType: (ptr (fn T_39 (T_38)))
T_31: (in signature of fn08048948 : void)
  Class: Eq_30
  DataType: 
  OrigDataType: 
T_32: (in ebx : word32)
  Class: Eq_32
  DataType: word32
  OrigDataType: word32
T_33: (in fn080494E0 : ptr32)
  Class: Eq_33
  DataType: (ptr (fn T_38 (T_37)))
  OrigDataType: (ptr (fn T_38 (T_37)))
T_34: (in signature of fn080494E0 : void)
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
T_38: (in fn080494E0(fp - 0x00000008) : word32)
  Class: Eq_32
  DataType: word32
  OrigDataType: word32
T_39: (in fn08048948(fn080494E0(fp - 0x00000008)) : word32)
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
T_56: (in ebp : word32)
  Class: Eq_35
  DataType: word32
  OrigDataType: word32
T_57: (in ebp_10 : word32)
  Class: Eq_57
  DataType: word32
  OrigDataType: word32
T_58: (in fn08048911 : ptr32)
  Class: Eq_58
  DataType: (ptr (fn T_66 (T_64, T_65)))
  OrigDataType: (ptr (fn T_66 (T_64, T_65)))
T_59: (in signature of fn08048911 : void)
  Class: Eq_58
  DataType: 
  OrigDataType: 
T_60: (in ebp : word32)
  Class: Eq_57
  DataType: word32
  OrigDataType: word32
T_61: (in dwArg00 : word32)
  Class: Eq_35
  DataType: word32
  OrigDataType: word32
T_62: (in fp : ptr32)
  Class: Eq_62
  DataType: ptr32
  OrigDataType: ptr32
T_63: (in 0x00000004 : word32)
  Class: Eq_63
  DataType: word32
  OrigDataType: word32
T_64: (in fp - 0x00000004 : word32)
  Class: Eq_57
  DataType: word32
  OrigDataType: word32
T_65: (in dwLoc0C : word32)
  Class: Eq_35
  DataType: word32
  OrigDataType: word32
T_66: (in fn08048911(fp - 0x00000004, dwLoc0C) : word32)
  Class: Eq_57
  DataType: word32
  OrigDataType: word32
T_67: (in fn08048911 : ptr32)
  Class: Eq_58
  DataType: (ptr (fn T_68 (T_57, T_56)))
  OrigDataType: (ptr (fn T_68 (T_57, T_56)))
T_68: (in fn08048911(ebp_10, ebp) : word32)
  Class: Eq_68
  DataType: word32
  OrigDataType: word32
T_69: (in fn0804923C : ptr32)
  Class: Eq_69
  DataType: (ptr (fn T_72 (T_60)))
  OrigDataType: (ptr (fn T_72 (T_60)))
T_70: (in signature of fn0804923C : void)
  Class: Eq_69
  DataType: 
  OrigDataType: 
T_71: (in ebp : word32)
  Class: Eq_57
  DataType: word32
  OrigDataType: word32
T_72: (in fn0804923C(ebp) : word32)
  Class: Eq_72
  DataType: (ptr (struct (0 T_73 t0000)))
  OrigDataType: (ptr (struct (0 T_73 t0000)))
T_73: (in Mem0[fn0804923C(ebp):word32] : word32)
  Class: Eq_73
  DataType: word32
  OrigDataType: word32
T_74: (in eax : word32)
  Class: Eq_74
  DataType: word32
  OrigDataType: word32
T_75: (in 0x08049528 : word32)
  Class: Eq_75
  DataType: word32
  OrigDataType: word32
T_76: (in dwLoc1C_19 : word32)
  Class: Eq_75
  DataType: word32
  OrigDataType: word32
T_77: (in 0x08049528 : word32)
  Class: Eq_77
  DataType: word32
  OrigDataType: word32
T_78: (in SLICE(0x08049528, <unknown>, 32) : <unknown>)
  Class: Eq_78
  DataType: <unknown>
  OrigDataType: <unknown>
T_79: (in tLoc18_20 : <unknown>)
  Class: Eq_78
  DataType: <unknown>
  OrigDataType: <unknown>
T_80: (in scanf : ptr32)
  Class: Eq_80
  DataType: (ptr (fn T_84 (T_76, T_79)))
  OrigDataType: (ptr (fn T_84 (T_76, T_79)))
T_81: (in signature of scanf : void)
  Class: Eq_80
  DataType: 
  OrigDataType: 
T_82: (in format : (ptr char))
  Class: Eq_75
  DataType: (ptr char)
  OrigDataType: (ptr char)
T_83: (in ... : <unknown>)
  Class: Eq_78
  DataType: <unknown>
  OrigDataType: <unknown>
T_84: (in scanf(dwLoc1C_19, tLoc18_20) : word32)
  Class: Eq_84
  DataType: word32
  OrigDataType: word32
T_85: (in 0x08049528 : word32)
  Class: Eq_75
  DataType: word32
  OrigDataType: word32
T_86: (in dwLoc24_26 : word32)
  Class: Eq_75
  DataType: word32
  OrigDataType: word32
T_87: (in SLICE(dwLoc24_26, <unknown>, 32) : <unknown>)
  Class: Eq_78
  DataType: <unknown>
  OrigDataType: <unknown>
T_88: (in tLoc20_27 : <unknown>)
  Class: Eq_78
  DataType: <unknown>
  OrigDataType: <unknown>
T_89: (in scanf : ptr32)
  Class: Eq_80
  DataType: (ptr (fn T_90 (T_86, T_88)))
  OrigDataType: (ptr (fn T_90 (T_86, T_88)))
T_90: (in scanf(dwLoc24_26, tLoc20_27) : word32)
  Class: Eq_90
  DataType: word32
  OrigDataType: word32
T_91: (in dwLoc08 : word32)
  Class: Eq_91
  DataType: int32
  OrigDataType: int32
T_92: (in 0x00000005 : word32)
  Class: Eq_91
  DataType: word32
  OrigDataType: word32
T_93: (in dwLoc08 != 0x00000005 : bool)
  Class: Eq_93
  DataType: bool
  OrigDataType: bool
T_94: (in 0x00000005 : word32)
  Class: Eq_91
  DataType: word32
  OrigDataType: word32
T_95: (in dwLoc08 == 0x00000005 : bool)
  Class: Eq_95
  DataType: bool
  OrigDataType: bool
T_96: (in 0x0804952B : word32)
  Class: Eq_96
  DataType: word32
  OrigDataType: word32
T_97: (in dwLoc18_157 : word32)
  Class: Eq_96
  DataType: word32
  OrigDataType: word32
T_98: (in SLICE(dwLoc18_157, <unknown>, 32) : <unknown>)
  Class: Eq_98
  DataType: <unknown>
  OrigDataType: <unknown>
T_99: (in tLoc14_158 : <unknown>)
  Class: Eq_98
  DataType: <unknown>
  OrigDataType: <unknown>
T_100: (in printf : ptr32)
  Class: Eq_100
  DataType: (ptr (fn T_104 (T_97, T_99)))
  OrigDataType: (ptr (fn T_104 (T_97, T_99)))
T_101: (in signature of printf : void)
  Class: Eq_100
  DataType: 
  OrigDataType: 
T_102: (in format : (ptr char))
  Class: Eq_96
  DataType: (ptr char)
  OrigDataType: (ptr char)
T_103: (in ... : <unknown>)
  Class: Eq_98
  DataType: <unknown>
  OrigDataType: <unknown>
T_104: (in printf(dwLoc18_157, tLoc14_158) : word32)
  Class: Eq_104
  DataType: word32
  OrigDataType: word32
T_105: (in 0x08049546 : word32)
  Class: Eq_96
  DataType: word32
  OrigDataType: word32
T_106: (in dwLoc18_137 : word32)
  Class: Eq_96
  DataType: word32
  OrigDataType: word32
T_107: (in SLICE(dwLoc18_137, <unknown>, 32) : <unknown>)
  Class: Eq_98
  DataType: <unknown>
  OrigDataType: <unknown>
T_108: (in tLoc14_138 : <unknown>)
  Class: Eq_98
  DataType: <unknown>
  OrigDataType: <unknown>
T_109: (in printf : ptr32)
  Class: Eq_100
  DataType: (ptr (fn T_110 (T_106, T_108)))
  OrigDataType: (ptr (fn T_110 (T_106, T_108)))
T_110: (in printf(dwLoc18_137, tLoc14_138) : word32)
  Class: Eq_110
  DataType: word32
  OrigDataType: word32
T_111: (in 0x00000005 : word32)
  Class: Eq_91
  DataType: int32
  OrigDataType: int32
T_112: (in dwLoc08 > 0x00000005 : bool)
  Class: Eq_112
  DataType: bool
  OrigDataType: bool
T_113: (in 0x08049532 : word32)
  Class: Eq_96
  DataType: word32
  OrigDataType: word32
T_114: (in dwLoc18_144 : word32)
  Class: Eq_96
  DataType: word32
  OrigDataType: word32
T_115: (in SLICE(dwLoc18_144, <unknown>, 32) : <unknown>)
  Class: Eq_98
  DataType: <unknown>
  OrigDataType: <unknown>
T_116: (in tLoc14_145 : <unknown>)
  Class: Eq_98
  DataType: <unknown>
  OrigDataType: <unknown>
T_117: (in printf : ptr32)
  Class: Eq_100
  DataType: (ptr (fn T_118 (T_114, T_116)))
  OrigDataType: (ptr (fn T_118 (T_114, T_116)))
T_118: (in printf(dwLoc18_144, tLoc14_145) : word32)
  Class: Eq_118
  DataType: word32
  OrigDataType: word32
T_119: (in 0x00000005 : word32)
  Class: Eq_91
  DataType: int32
  OrigDataType: int32
T_120: (in dwLoc08 >= 0x00000005 : bool)
  Class: Eq_120
  DataType: bool
  OrigDataType: bool
T_121: (in fp : ptr32)
  Class: Eq_121
  DataType: ptr32
  OrigDataType: ptr32
T_122: (in 0x00000018 : word32)
  Class: Eq_122
  DataType: word32
  OrigDataType: word32
T_123: (in fp - 0x00000018 : word32)
  Class: Eq_123
  DataType: word32
  OrigDataType: word32
T_124: (in esp_150 : word32)
  Class: Eq_123
  DataType: (ptr (struct (0 T_128 t0000)))
  OrigDataType: (ptr (struct (0 T_128 t0000)))
T_125: (in 0x0804953D : word32)
  Class: Eq_125
  DataType: word32
  OrigDataType: word32
T_126: (in 0x00000000 : word32)
  Class: Eq_126
  DataType: word32
  OrigDataType: word32
T_127: (in esp_150 + 0x00000000 : word32)
  Class: Eq_127
  DataType: word32
  OrigDataType: word32
T_128: (in Mem151[esp_150 + 0x00000000:word32] : word32)
  Class: Eq_125
  DataType: word32
  OrigDataType: word32
T_129: (in printf : ptr32)
  Class: Eq_100
  DataType: (ptr (fn T_130 (T_113, T_116)))
  OrigDataType: (ptr (fn T_130 (T_113, T_116)))
T_130: (in printf(0x08049532, tLoc14_145) : word32)
  Class: Eq_130
  DataType: word32
  OrigDataType: word32
T_131: (in 0x00000005 : word32)
  Class: Eq_91
  DataType: int32
  OrigDataType: int32
T_132: (in dwLoc08 < 0x00000005 : bool)
  Class: Eq_132
  DataType: bool
  OrigDataType: bool
T_133: (in 0x08049555 : word32)
  Class: Eq_96
  DataType: word32
  OrigDataType: word32
T_134: (in dwLoc18_129 : word32)
  Class: Eq_96
  DataType: word32
  OrigDataType: word32
T_135: (in SLICE(dwLoc18_129, <unknown>, 32) : <unknown>)
  Class: Eq_98
  DataType: <unknown>
  OrigDataType: <unknown>
T_136: (in tLoc14_130 : <unknown>)
  Class: Eq_98
  DataType: <unknown>
  OrigDataType: <unknown>
T_137: (in printf : ptr32)
  Class: Eq_100
  DataType: (ptr (fn T_138 (T_134, T_136)))
  OrigDataType: (ptr (fn T_138 (T_134, T_136)))
T_138: (in printf(dwLoc18_129, tLoc14_130) : word32)
  Class: Eq_138
  DataType: word32
  OrigDataType: word32
T_139: (in 0x00000005 : word32)
  Class: Eq_91
  DataType: int32
  OrigDataType: int32
T_140: (in dwLoc08 <= 0x00000005 : bool)
  Class: Eq_140
  DataType: bool
  OrigDataType: bool
T_141: (in 0x08049567 : word32)
  Class: Eq_96
  DataType: word32
  OrigDataType: word32
T_142: (in dwLoc18_122 : word32)
  Class: Eq_96
  DataType: word32
  OrigDataType: word32
T_143: (in SLICE(dwLoc18_122, <unknown>, 32) : <unknown>)
  Class: Eq_98
  DataType: <unknown>
  OrigDataType: <unknown>
T_144: (in tLoc14_123 : <unknown>)
  Class: Eq_98
  DataType: <unknown>
  OrigDataType: <unknown>
T_145: (in printf : ptr32)
  Class: Eq_100
  DataType: (ptr (fn T_146 (T_142, T_144)))
  OrigDataType: (ptr (fn T_146 (T_142, T_144)))
T_146: (in printf(dwLoc18_122, tLoc14_123) : word32)
  Class: Eq_146
  DataType: word32
  OrigDataType: word32
T_147: (in dwLoc0C : word32)
  Class: Eq_147
  DataType: up32
  OrigDataType: up32
T_148: (in 0x00000005 : word32)
  Class: Eq_147
  DataType: up32
  OrigDataType: up32
T_149: (in dwLoc0C >=u 0x00000005 : bool)
  Class: Eq_149
  DataType: bool
  OrigDataType: bool
T_150: (in 0x0804957F : word32)
  Class: Eq_96
  DataType: word32
  OrigDataType: word32
T_151: (in dwLoc18_106 : word32)
  Class: Eq_96
  DataType: word32
  OrigDataType: word32
T_152: (in SLICE(dwLoc18_106, <unknown>, 32) : <unknown>)
  Class: Eq_98
  DataType: <unknown>
  OrigDataType: <unknown>
T_153: (in tLoc14_107 : <unknown>)
  Class: Eq_98
  DataType: <unknown>
  OrigDataType: <unknown>
T_154: (in printf : ptr32)
  Class: Eq_100
  DataType: (ptr (fn T_155 (T_151, T_153)))
  OrigDataType: (ptr (fn T_155 (T_151, T_153)))
T_155: (in printf(dwLoc18_106, tLoc14_107) : word32)
  Class: Eq_155
  DataType: word32
  OrigDataType: word32
T_156: (in 0x00000005 : word32)
  Class: Eq_147
  DataType: up32
  OrigDataType: up32
T_157: (in dwLoc0C >u 0x00000005 : bool)
  Class: Eq_157
  DataType: bool
  OrigDataType: bool
T_158: (in 0x0804956D : word32)
  Class: Eq_96
  DataType: word32
  OrigDataType: word32
T_159: (in dwLoc18_113 : word32)
  Class: Eq_96
  DataType: word32
  OrigDataType: word32
T_160: (in SLICE(dwLoc18_113, <unknown>, 32) : <unknown>)
  Class: Eq_98
  DataType: <unknown>
  OrigDataType: <unknown>
T_161: (in tLoc14_114 : <unknown>)
  Class: Eq_98
  DataType: <unknown>
  OrigDataType: <unknown>
T_162: (in printf : ptr32)
  Class: Eq_100
  DataType: (ptr (fn T_163 (T_159, T_161)))
  OrigDataType: (ptr (fn T_163 (T_159, T_161)))
T_163: (in printf(dwLoc18_113, tLoc14_114) : word32)
  Class: Eq_163
  DataType: word32
  OrigDataType: word32
T_164: (in 0x00000005 : word32)
  Class: Eq_147
  DataType: up32
  OrigDataType: up32
T_165: (in dwLoc0C <u 0x00000005 : bool)
  Class: Eq_165
  DataType: bool
  OrigDataType: bool
T_166: (in 0x08049597 : word32)
  Class: Eq_96
  DataType: word32
  OrigDataType: word32
T_167: (in dwLoc18_98 : word32)
  Class: Eq_96
  DataType: word32
  OrigDataType: word32
T_168: (in SLICE(dwLoc18_98, <unknown>, 32) : <unknown>)
  Class: Eq_98
  DataType: <unknown>
  OrigDataType: <unknown>
T_169: (in tLoc14_99 : <unknown>)
  Class: Eq_98
  DataType: <unknown>
  OrigDataType: <unknown>
T_170: (in printf : ptr32)
  Class: Eq_100
  DataType: (ptr (fn T_171 (T_167, T_169)))
  OrigDataType: (ptr (fn T_171 (T_167, T_169)))
T_171: (in printf(dwLoc18_98, tLoc14_99) : word32)
  Class: Eq_171
  DataType: word32
  OrigDataType: word32
T_172: (in 0x00000005 : word32)
  Class: Eq_147
  DataType: up32
  OrigDataType: up32
T_173: (in dwLoc0C <=u 0x00000005 : bool)
  Class: Eq_173
  DataType: bool
  OrigDataType: bool
T_174: (in 0x080495A4 : word32)
  Class: Eq_96
  DataType: word32
  OrigDataType: word32
T_175: (in dwLoc18_91 : word32)
  Class: Eq_96
  DataType: word32
  OrigDataType: word32
T_176: (in SLICE(dwLoc18_91, <unknown>, 32) : <unknown>)
  Class: Eq_98
  DataType: <unknown>
  OrigDataType: <unknown>
T_177: (in tLoc14_92 : <unknown>)
  Class: Eq_98
  DataType: <unknown>
  OrigDataType: <unknown>
T_178: (in printf : ptr32)
  Class: Eq_100
  DataType: (ptr (fn T_179 (T_175, T_177)))
  OrigDataType: (ptr (fn T_179 (T_175, T_177)))
T_179: (in printf(dwLoc18_91, tLoc14_92) : word32)
  Class: Eq_179
  DataType: word32
  OrigDataType: word32
T_180: (in 0x00000005 : word32)
  Class: Eq_180
  DataType: word32
  OrigDataType: word32
T_181: (in 0x00000005 - dwLoc08 : word32)
  Class: Eq_181
  DataType: word32
  OrigDataType: word32
T_182: (in eax_56 : word32)
  Class: Eq_181
  DataType: int32
  OrigDataType: int32
T_183: (in 0x00000000 : word32)
  Class: Eq_181
  DataType: int32
  OrigDataType: int32
T_184: (in eax_56 < 0x00000000 : bool)
  Class: Eq_184
  DataType: bool
  OrigDataType: bool
T_185: (in 0x080495B6 : word32)
  Class: Eq_96
  DataType: word32
  OrigDataType: word32
T_186: (in dwLoc18_76 : word32)
  Class: Eq_96
  DataType: word32
  OrigDataType: word32
T_187: (in SLICE(dwLoc18_76, <unknown>, 32) : <unknown>)
  Class: Eq_98
  DataType: <unknown>
  OrigDataType: <unknown>
T_188: (in tLoc14_77 : <unknown>)
  Class: Eq_98
  DataType: <unknown>
  OrigDataType: <unknown>
T_189: (in printf : ptr32)
  Class: Eq_100
  DataType: (ptr (fn T_190 (T_186, T_188)))
  OrigDataType: (ptr (fn T_190 (T_186, T_188)))
T_190: (in printf(dwLoc18_76, tLoc14_77) : word32)
  Class: Eq_190
  DataType: word32
  OrigDataType: word32
T_191: (in 0x080495AF : word32)
  Class: Eq_96
  DataType: word32
  OrigDataType: word32
T_192: (in dwLoc18_80 : word32)
  Class: Eq_96
  DataType: word32
  OrigDataType: word32
T_193: (in SLICE(dwLoc18_80, <unknown>, 32) : <unknown>)
  Class: Eq_98
  DataType: <unknown>
  OrigDataType: <unknown>
T_194: (in tLoc14_81 : <unknown>)
  Class: Eq_98
  DataType: <unknown>
  OrigDataType: <unknown>
T_195: (in printf : ptr32)
  Class: Eq_100
  DataType: (ptr (fn T_196 (T_192, T_194)))
  OrigDataType: (ptr (fn T_196 (T_192, T_194)))
T_196: (in printf(dwLoc18_80, tLoc14_81) : word32)
  Class: Eq_196
  DataType: word32
  OrigDataType: word32
T_197: (in 0x00000005 : word32)
  Class: Eq_197
  DataType: word32
  OrigDataType: word32
T_198: (in 0x00000005 - dwLoc08 : word32)
  Class: Eq_198
  DataType: word32
  OrigDataType: word32
T_199: (in eax_85 : word32)
  Class: Eq_198
  DataType: int32
  OrigDataType: int32
T_200: (in 0x00000000 : word32)
  Class: Eq_198
  DataType: int32
  OrigDataType: int32
T_201: (in eax_85 >= 0x00000000 : bool)
  Class: Eq_201
  DataType: bool
  OrigDataType: bool
T_202: (in 0x00000000 : word32)
  Class: Eq_202
  DataType: word32
  OrigDataType: word32
T_203: (in eax_63 : word32)
  Class: Eq_202
  DataType: word32
  OrigDataType: word32
T_204: (in ebp_10 : word32)
  Class: Eq_204
  DataType: word32
  OrigDataType: word32
T_205: (in fn08049245 : ptr32)
  Class: Eq_205
  DataType: (ptr (fn T_213 (T_211, T_212)))
  OrigDataType: (ptr (fn T_213 (T_211, T_212)))
T_206: (in signature of fn08049245 : void)
  Class: Eq_205
  DataType: 
  OrigDataType: 
T_207: (in ebp : word32)
  Class: Eq_204
  DataType: (ptr (struct (0 T_254 t0000) (8 T_222 t0008) (C T_219 t000C)))
  OrigDataType: (ptr (struct (0 T_254 t0000) (8 T_222 t0008) (C T_219 t000C)))
T_208: (in dwArg00 : word32)
  Class: Eq_57
  DataType: word32
  OrigDataType: word32
T_209: (in fp : ptr32)
  Class: Eq_209
  DataType: ptr32
  OrigDataType: ptr32
T_210: (in 0x00000004 : word32)
  Class: Eq_210
  DataType: word32
  OrigDataType: word32
T_211: (in fp - 0x00000004 : word32)
  Class: Eq_204
  DataType: word32
  OrigDataType: word32
T_212: (in dwLoc0C : word32)
  Class: Eq_57
  DataType: word32
  OrigDataType: word32
T_213: (in fn08049245(fp - 0x00000004, dwLoc0C) : word32)
  Class: Eq_204
  DataType: word32
  OrigDataType: word32
T_214: (in fn08049245 : ptr32)
  Class: Eq_205
  DataType: (ptr (fn T_215 (T_204, T_71)))
  OrigDataType: (ptr (fn T_215 (T_204, T_71)))
T_215: (in fn08049245(ebp_10, ebp) : word32)
  Class: Eq_215
  DataType: word32
  OrigDataType: word32
T_216: (in edx_9 : word32)
  Class: Eq_216
  DataType: (ptr (struct (0 T_233 t0000) (4 T_229 t0004) (8 T_225 t0008) (C T_237 t000C) (10 T_241 t0010) (14 T_248 t0014)))
  OrigDataType: (ptr (struct (0 T_233 t0000) (4 T_229 t0004) (8 T_225 t0008) (C T_237 t000C) (10 T_241 t0010) (14 T_248 t0014)))
T_217: (in 0x0000000C : word32)
  Class: Eq_217
  DataType: word32
  OrigDataType: word32
T_218: (in ebp + 0x0000000C : word32)
  Class: Eq_218
  DataType: word32
  OrigDataType: word32
T_219: (in Mem0[ebp + 0x0000000C:word32] : word32)
  Class: Eq_216
  DataType: word32
  OrigDataType: word32
T_220: (in 0x00000008 : word32)
  Class: Eq_220
  DataType: word32
  OrigDataType: word32
T_221: (in ebp + 0x00000008 : word32)
  Class: Eq_221
  DataType: word32
  OrigDataType: word32
T_222: (in Mem0[ebp + 0x00000008:word32] : word32)
  Class: Eq_222
  DataType: word32
  OrigDataType: word32
T_223: (in 0x00000008 : word32)
  Class: Eq_223
  DataType: word32
  OrigDataType: word32
T_224: (in edx_9 + 0x00000008 : word32)
  Class: Eq_224
  DataType: word32
  OrigDataType: word32
T_225: (in Mem10[edx_9 + 0x00000008:word32] : word32)
  Class: Eq_222
  DataType: word32
  OrigDataType: word32
T_226: (in 0x00000000 : word32)
  Class: Eq_226
  DataType: word32
  OrigDataType: word32
T_227: (in 0x00000004 : word32)
  Class: Eq_227
  DataType: word32
  OrigDataType: word32
T_228: (in edx_9 + 0x00000004 : word32)
  Class: Eq_228
  DataType: word32
  OrigDataType: word32
T_229: (in Mem11[edx_9 + 0x00000004:word32] : word32)
  Class: Eq_226
  DataType: word32
  OrigDataType: word32
T_230: (in 0x00000000 : word32)
  Class: Eq_230
  DataType: word32
  OrigDataType: word32
T_231: (in 0x00000000 : word32)
  Class: Eq_231
  DataType: word32
  OrigDataType: word32
T_232: (in edx_9 + 0x00000000 : word32)
  Class: Eq_232
  DataType: word32
  OrigDataType: word32
T_233: (in Mem12[edx_9 + 0x00000000:word32] : word32)
  Class: Eq_230
  DataType: word32
  OrigDataType: word32
T_234: (in 0x00000000 : word32)
  Class: Eq_234
  DataType: word32
  OrigDataType: word32
T_235: (in 0x0000000C : word32)
  Class: Eq_235
  DataType: word32
  OrigDataType: word32
T_236: (in edx_9 + 0x0000000C : word32)
  Class: Eq_236
  DataType: word32
  OrigDataType: word32
T_237: (in Mem13[edx_9 + 0x0000000C:word32] : word32)
  Class: Eq_234
  DataType: word32
  OrigDataType: word32
T_238: (in 0x00000000 : word32)
  Class: Eq_238
  DataType: word32
  OrigDataType: word32
T_239: (in 0x00000010 : word32)
  Class: Eq_239
  DataType: word32
  OrigDataType: word32
T_240: (in edx_9 + 0x00000010 : word32)
  Class: Eq_240
  DataType: word32
  OrigDataType: word32
T_241: (in Mem14[edx_9 + 0x00000010:word32] : word32)
  Class: Eq_238
  DataType: word32
  OrigDataType: word32
T_242: (in dwArg00 : word32)
  Class: Eq_242
  DataType: (ptr (struct (1A83 T_216 t1A83)))
  OrigDataType: (ptr (struct (1A83 T_216 t1A83)))
T_243: (in 0x00001A83 : word32)
  Class: Eq_243
  DataType: word32
  OrigDataType: word32
T_244: (in dwArg00 + 0x00001A83 : word32)
  Class: Eq_244
  DataType: word32
  OrigDataType: word32
T_245: (in Mem14[dwArg00 + 0x00001A83:word32] : word32)
  Class: Eq_216
  DataType: word32
  OrigDataType: word32
T_246: (in 0x00000014 : word32)
  Class: Eq_246
  DataType: word32
  OrigDataType: word32
T_247: (in edx_9 + 0x00000014 : word32)
  Class: Eq_247
  DataType: word32
  OrigDataType: word32
T_248: (in Mem16[edx_9 + 0x00000014:word32] : word32)
  Class: Eq_216
  DataType: word32
  OrigDataType: word32
T_249: (in 0x00001A83 : word32)
  Class: Eq_249
  DataType: word32
  OrigDataType: word32
T_250: (in dwArg00 + 0x00001A83 : word32)
  Class: Eq_250
  DataType: word32
  OrigDataType: word32
T_251: (in Mem17[dwArg00 + 0x00001A83:word32] : word32)
  Class: Eq_216
  DataType: word32
  OrigDataType: word32
T_252: (in 0x00000000 : word32)
  Class: Eq_252
  DataType: word32
  OrigDataType: word32
T_253: (in ebp + 0x00000000 : word32)
  Class: Eq_253
  DataType: word32
  OrigDataType: word32
T_254: (in Mem17[ebp + 0x00000000:word32] : word32)
  Class: Eq_254
  DataType: word32
  OrigDataType: word32
T_255: (in ebx : word32)
  Class: Eq_255
  DataType: word32
  OrigDataType: word32
T_256: (in ebp_13 : word32)
  Class: Eq_256
  DataType: word32
  OrigDataType: word32
T_257: (in fn08049496 : ptr32)
  Class: Eq_257
  DataType: (ptr (fn T_267 (T_264, T_265, T_266)))
  OrigDataType: (ptr (fn T_267 (T_264, T_265, T_266)))
T_258: (in signature of fn08049496 : void)
  Class: Eq_257
  DataType: 
  OrigDataType: 
T_259: (in ebp : word32)
  Class: Eq_256
  DataType: (ptr (struct (0 T_286 t0000)))
  OrigDataType: (ptr (struct (0 T_286 t0000)))
T_260: (in dwArg00 : word32)
  Class: Eq_260
  DataType: word32
  OrigDataType: word32
T_261: (in ebpOut : ptr32)
  Class: Eq_261
  DataType: ptr32
  OrigDataType: ptr32
T_262: (in fp : ptr32)
  Class: Eq_262
  DataType: ptr32
  OrigDataType: ptr32
T_263: (in 0x00000004 : word32)
  Class: Eq_263
  DataType: word32
  OrigDataType: word32
T_264: (in fp - 0x00000004 : word32)
  Class: Eq_256
  DataType: word32
  OrigDataType: word32
T_265: (in dwLoc10 : word32)
  Class: Eq_260
  DataType: word32
  OrigDataType: word32
T_266: (in out ebp_13 : ptr32)
  Class: Eq_261
  DataType: (ptr word32)
  OrigDataType: (ptr word32)
T_267: (in fn08049496(fp - 0x00000004, dwLoc10, out ebp_13) : word32)
  Class: Eq_267
  DataType: word32
  OrigDataType: word32
T_268: (in ebp_15 : word32)
  Class: Eq_268
  DataType: word32
  OrigDataType: word32
T_269: (in fn08049496 : ptr32)
  Class: Eq_257
  DataType: (ptr (fn T_272 (T_256, T_270, T_271)))
  OrigDataType: (ptr (fn T_272 (T_256, T_270, T_271)))
T_270: (in ebp : word32)
  Class: Eq_260
  DataType: word32
  OrigDataType: word32
T_271: (in out ebp_15 : ptr32)
  Class: Eq_261
  DataType: (ptr word32)
  OrigDataType: (ptr word32)
T_272: (in fn08049496(ebp_13, ebp, out ebp_15) : word32)
  Class: Eq_272
  DataType: word32
  OrigDataType: word32
T_273: (in ebx : word32)
  Class: Eq_273
  DataType: word32
  OrigDataType: word32
T_274: (in esi_24 : word32)
  Class: Eq_274
  DataType: word32
  OrigDataType: word32
T_275: (in dwArg00 : word32)
  Class: Eq_275
  DataType: (ptr (struct (11FA T_280 t11FA)))
  OrigDataType: (ptr (struct (11FA T_280 t11FA)))
T_276: (in 0x000011FA : word32)
  Class: Eq_276
  DataType: word32
  OrigDataType: word32
T_277: (in dwArg00 + 0x000011FA : word32)
  Class: Eq_274
  DataType: word32
  OrigDataType: word32
T_278: (in 0x000011FA : word32)
  Class: Eq_278
  DataType: word32
  OrigDataType: word32
T_279: (in dwArg00 + 0x000011FA : word32)
  Class: Eq_279
  DataType: word32
  OrigDataType: word32
T_280: (in Mem0[dwArg00 + 0x000011FA:word32] : word32)
  Class: Eq_280
  DataType: word32
  OrigDataType: word32
T_281: (in 0xFFFFFFFF : word32)
  Class: Eq_280
  DataType: word32
  OrigDataType: word32
T_282: (in Mem0[dwArg00 + 0x000011FA:word32] == 0xFFFFFFFF : bool)
  Class: Eq_282
  DataType: bool
  OrigDataType: bool
T_283: (in ebp_21 : word32)
  Class: Eq_283
  DataType: word32
  OrigDataType: word32
T_284: (in 0x00000000 : word32)
  Class: Eq_284
  DataType: word32
  OrigDataType: word32
T_285: (in ebp + 0x00000000 : word32)
  Class: Eq_285
  DataType: word32
  OrigDataType: word32
T_286: (in Mem0[ebp + 0x00000000:word32] : word32)
  Class: Eq_286
  DataType: word32
  OrigDataType: word32
T_287: (in *ebpOut : word32)
  Class: Eq_286
  DataType: 
  OrigDataType: 
T_288: (in 0x00000008 : word32)
  Class: Eq_288
  DataType: 
  OrigDataType: 
T_289: (in ebp - 0x00000008 : word32)
  Class: Eq_289
  DataType: 
  OrigDataType: 
T_290: (in Mem0[ebp - 0x00000008:word32] : word32)
  Class: Eq_290
  DataType: 
  OrigDataType: 
T_291: (in eax_25 : word32)
  Class: Eq_291
  DataType: 
  OrigDataType: 
T_292: (in 0x00000000 : word32)
  Class: Eq_292
  DataType: 
  OrigDataType: 
T_293: (in esi_24 + 0x00000000 : word32)
  Class: Eq_293
  DataType: 
  OrigDataType: 
T_294: (in Mem0[esi_24 + 0x00000000:word32] : word32)
  Class: Eq_291
  DataType: 
  OrigDataType: 
T_295: (in 0xFFFFFFFC : word32)
  Class: Eq_295
  DataType: 
  OrigDataType: 
T_296: (in esi_24 + 0xFFFFFFFC : word32)
  Class: Eq_274
  DataType: 
  OrigDataType: 
T_297: (in 0x00000000 : word32)
  Class: Eq_297
  DataType: 
  OrigDataType: 
T_298: (in esi_24 + 0x00000000 : word32)
  Class: Eq_298
  DataType: 
  OrigDataType: 
T_299: (in Mem0[esi_24 + 0x00000000:word32] : word32)
  Class: Eq_299
  DataType: 
  OrigDataType: 
T_300: (in 0xFFFFFFFF : word32)
  Class: Eq_299
  DataType: 
  OrigDataType: 
T_301: (in Mem0[esi_24 + 0x00000000:word32] != 0xFFFFFFFF : bool)
  Class: Eq_301
  DataType: 
  OrigDataType: 
T_302: (in ebx : word32)
  Class: Eq_302
  DataType: 
  OrigDataType: 
T_303: (in fn0804948C : ptr32)
  Class: Eq_303
  DataType: 
  OrigDataType: 
T_304: (in signature of fn0804948C : void)
  Class: Eq_303
  DataType: 
  OrigDataType: 
T_305: (in fn08048908 : ptr32)
  Class: Eq_305
  DataType: 
  OrigDataType: 
T_306: (in signature of fn08048908 : void)
  Class: Eq_305
  DataType: 
  OrigDataType: 
T_307: (in fn08048908(ebp) : word32)
  Class: Eq_260
  DataType: 
  OrigDataType: 
T_308: (in fn0804948C(fn08048908(ebp)) : word32)
  Class: Eq_308
  DataType: 
  OrigDataType: 
*/
