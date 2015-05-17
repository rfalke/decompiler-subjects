// subject.h
// Generated on TIMESTAMP by decompiling from_boomerang/typetest/ia32_pe_by_boomerang/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (403040 word32 dw403040) (403114 word32 dw403114) (40311C word32 dw40311C) (403120 word32 dw403120) (403128 word32 dw403128) (40312C word32 dw40312C) (403130 word32 dw403130))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_3: (segment "Eq_3" (0 (ptr word32) ptr0000))
	T_3 (in fs : (ptr Eq_3))
Eq_6: (struct "Eq_6" (FFFFFFF8 word32 dwFFFFFFF8))
	T_6 (in fp : ptr32)
Eq_9: (union "Eq_9" (ptr32 u0) ((memptr (ptr Eq_3) (ptr word32)) u1))
	T_9 (in 0x00000000 : ptr32)
Eq_38: (fn void ())
	T_38 (in fn00401BE0 : ptr32)
	T_39 (in signature of fn00401BE0 : void)
Eq_48: (fn void ())
	T_48 (in fn00401BB0 : ptr32)
	T_49 (in signature of fn00401BB0 : void)
Eq_51: (struct "Eq_51" (FFFFFFE4 Eq_80 tFFFFFFE4) (FFFFFFE8 word32 dwFFFFFFE8) (FFFFFFEC (ptr Eq_85) ptrFFFFFFEC) (FFFFFFF0 Eq_80 tFFFFFFF0) (FFFFFFF4 word32 dwFFFFFFF4) (FFFFFFF8 word32 dwFFFFFFF8) (FFFFFFFC word32 dwFFFFFFFC) (0 word32 dw0000))
	T_51 (in esp_54 : (ptr Eq_51))
	T_53 (in esp_193 - 0x00000004 : word32)
Eq_80: (union "Eq_80" (int32 u0) (LPCSTR u1) (LPSTARTUPINFOA u2))
	T_80 (in fp - 0x00000074 : word32)
	T_83 (in Mem74[esp_54 - 0x00000010:word32] : word32)
	T_144 (in eax_117 : Eq_80)
	T_146 (in fp - 0x00000060 : word32)
	T_149 (in Mem110[esp_54 + 0xFFFFFFF0:word32] : word32)
	T_152 (in lpStartupInfo : LPSTARTUPINFOA)
	T_154 (in Mem110[esp_54 + 0xFFFFFFF0:LPSTARTUPINFOA] : LPSTARTUPINFOA)
	T_163 (in 0x0000000A : word32)
	T_166 (in dwLoc30 & 0x0000FFFF : word32)
	T_169 (in Mem120[esp_54 + 0xFFFFFFF0:word32] : word32)
	T_177 (in 0x00000000 : word32)
	T_180 (in Mem126[esp_54 + 0xFFFFFFE4:word32] : word32)
	T_181 (in eax_127 : Eq_80)
	T_184 (in lpModuleName : LPCSTR)
	T_186 (in Mem126[esp_54 + 0xFFFFFFE4:LPCSTR] : LPCSTR)
	T_187 (in GetModuleHandleA(esp_54->tFFFFFFE4) : word32)
	T_190 (in Mem130[esp_54 + 0xFFFFFFE4:word32] : word32)
	T_204 (in Mem137[esp_54 + 0xFFFFFFF0:word32] : word32)
	T_207 (in _Code : int32)
	T_209 (in Mem137[esp_54 + 0xFFFFFFF0:int32] : int32)
Eq_85: (struct "Eq_85" 0001 (0 bcu8 b0000) (1 Eq_85 t0001))
	T_85 (in fp - 0x00000064 : word32)
	T_88 (in Mem77[esp_54 - 0x00000014:word32] : word32)
	T_103 (in esi_161 : (ptr Eq_85))
	T_104 (in dwLoc74 : word32)
	T_120 (in esi_161 + 0x00000001 : word32)
	T_141 (in esi_161 + 0x00000001 : word32)
	T_143 (in esi_161 + 0x00000001 : word32)
	T_162 (in esi_161 + 0x00000001 : word32)
	T_172 (in Mem122[esp_54 + 0xFFFFFFEC:word32] : word32)
Eq_150: (fn void (Eq_80))
	T_150 (in GetStartupInfoA : ptr32)
	T_151 (in signature of GetStartupInfoA : void)
Eq_182: (fn Eq_80 (Eq_80))
	T_182 (in GetModuleHandleA : ptr32)
	T_183 (in signature of GetModuleHandleA : void)
Eq_191: (fn void (word32, word32, word32, word32))
	T_191 (in fn00401BFC : ptr32)
	T_192 (in signature of fn00401BFC : void)
Eq_205: (fn void (Eq_80))
	T_205 (in exit : ptr32)
	T_206 (in signature of exit : void)
Eq_215: (union "Eq_215" (ptr32 u0) ((memptr (ptr Eq_3) (ptr word32)) u1))
	T_215 (in 0x00000000 : ptr32)
Eq_220: (struct "_STARTUPINFOA" (0 DWORD cb) (4 LPSTR lpReserved) (8 LPSTR lpDesktop) (C LPSTR lpTitle) (10 DWORD dwX) (14 DWORD dwY) (18 DWORD dwXSize) (1C DWORD dwYSize) (20 DWORD dwXCountChars) (24 DWORD dwYCountChars) (28 DWORD dwFillAttribute) (2C DWORD dwFlags) (30 WORD wShowWindow) (32 WORD cbReserved2) (34 LPBYTE lpReserved2) (38 HANDLE hStdInput) (3C HANDLE hStdOutput) (40 HANDLE hStdError))
	T_220
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr Eq_1)
  OrigDataType: (ptr (struct "Globals"))
T_2: (in eax_14 : (ptr word32))
  Class: Eq_2
  DataType: (ptr word32)
  OrigDataType: (ptr (struct (0 T_22 t0000)))
T_3: (in fs : (ptr Eq_3))
  Class: Eq_3
  DataType: (ptr Eq_3)
  OrigDataType: (ptr (segment (0 T_2 t0000)))
T_4: (in 0x00000000 : word32)
  Class: Eq_4
  DataType: (memptr (ptr Eq_3) (ptr word32))
  OrigDataType: (memptr T_3 (struct (0 T_5 t0000)))
T_5: (in Mem0[fs:0x00000000:word32] : word32)
  Class: Eq_2
  DataType: (ptr word32)
  OrigDataType: word32
T_6: (in fp : ptr32)
  Class: Eq_6
  DataType: (ptr Eq_6)
  OrigDataType: (ptr (struct (FFFFFFF8 T_214 tFFFFFFF8)))
T_7: (in 0x00000014 : word32)
  Class: Eq_7
  DataType: word32
  OrigDataType: word32
T_8: (in fp - 0x00000014 : word32)
  Class: Eq_2
  DataType: (ptr word32)
  OrigDataType: word32
T_9: (in 0x00000000 : ptr32)
  Class: Eq_9
  DataType: Eq_9
  OrigDataType: (union (ptr32 u0) ((memptr T_3 (struct (0 T_10 t0000))) u1))
T_10: (in Mem17[fs:0x00000000:word32] : word32)
  Class: Eq_2
  DataType: (ptr word32)
  OrigDataType: word32
T_11: (in __set_app_type : ptr32)
  Class: Eq_11
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_12: (in signature of __set_app_type : void)
  Class: Eq_11
  DataType: (ptr code)
  OrigDataType: 
T_13: (in 0xFFFFFFFF : word32)
  Class: Eq_13
  DataType: word32
  OrigDataType: word32
T_14: (in 0x0040312C : ptr32)
  Class: Eq_14
  DataType: (ptr word32)
  OrigDataType: (ptr (struct (0 T_15 t0000)))
T_15: (in Mem36[0x0040312C:word32] : word32)
  Class: Eq_13
  DataType: word32
  OrigDataType: word32
T_16: (in 0xFFFFFFFF : word32)
  Class: Eq_16
  DataType: word32
  OrigDataType: word32
T_17: (in 0x00403130 : ptr32)
  Class: Eq_17
  DataType: (ptr word32)
  OrigDataType: (ptr (struct (0 T_18 t0000)))
T_18: (in Mem37[0x00403130:word32] : word32)
  Class: Eq_16
  DataType: word32
  OrigDataType: word32
T_19: (in __p__fmode : ptr32)
  Class: Eq_19
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_20: (in signature of __p__fmode : void)
  Class: Eq_19
  DataType: (ptr code)
  OrigDataType: 
T_21: (in 0x00403120 : ptr32)
  Class: Eq_21
  DataType: (ptr word32)
  OrigDataType: (ptr (struct (0 T_22 t0000)))
T_22: (in Mem37[0x00403120:word32] : word32)
  Class: Eq_22
  DataType: word32
  OrigDataType: word32
T_23: (in 0x00000000 : word32)
  Class: Eq_23
  DataType: word32
  OrigDataType: word32
T_24: (in eax_14 + 0x00000000 : word32)
  Class: Eq_24
  DataType: word32
  OrigDataType: word32
T_25: (in Mem40[eax_14 + 0x00000000:word32] : word32)
  Class: Eq_22
  DataType: word32
  OrigDataType: word32
T_26: (in __p__commode : ptr32)
  Class: Eq_26
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_27: (in signature of __p__commode : void)
  Class: Eq_26
  DataType: (ptr code)
  OrigDataType: 
T_28: (in 0x0040311C : ptr32)
  Class: Eq_28
  DataType: (ptr word32)
  OrigDataType: (ptr (struct (0 T_29 t0000)))
T_29: (in Mem40[0x0040311C:word32] : word32)
  Class: Eq_22
  DataType: word32
  OrigDataType: word32
T_30: (in 0x00000000 : word32)
  Class: Eq_30
  DataType: word32
  OrigDataType: word32
T_31: (in eax_14 + 0x00000000 : word32)
  Class: Eq_31
  DataType: word32
  OrigDataType: word32
T_32: (in Mem43[eax_14 + 0x00000000:word32] : word32)
  Class: Eq_22
  DataType: word32
  OrigDataType: word32
T_33: (in _adjust_fdiv : ptr32)
  Class: Eq_33
  DataType: ptr32
  OrigDataType: ptr32
T_34: (in signature of _adjust_fdiv : void)
  Class: Eq_33
  DataType: ptr32
  OrigDataType: 
T_35: (in Mem43[_adjust_fdiv:word32] : word32)
  Class: Eq_35
  DataType: word32
  OrigDataType: word32
T_36: (in 0x00403128 : ptr32)
  Class: Eq_36
  DataType: (ptr word32)
  OrigDataType: (ptr (struct (0 T_37 t0000)))
T_37: (in Mem46[0x00403128:word32] : word32)
  Class: Eq_35
  DataType: word32
  OrigDataType: word32
T_38: (in fn00401BE0 : ptr32)
  Class: Eq_38
  DataType: (ptr Eq_38)
  OrigDataType: (ptr (fn T_40 ()))
T_39: (in signature of fn00401BE0 : void)
  Class: Eq_38
  DataType: (ptr Eq_38)
  OrigDataType: 
T_40: (in fn00401BE0() : void)
  Class: Eq_40
  DataType: void
  OrigDataType: void
T_41: (in esp_193 : word32)
  Class: Eq_41
  DataType: word32
  OrigDataType: word32
T_42: (in 0xFFFFFF6C : word32)
  Class: Eq_42
  DataType: word32
  OrigDataType: word32
T_43: (in fp + 0xFFFFFF6C : word32)
  Class: Eq_41
  DataType: word32
  OrigDataType: word32
T_44: (in 0x00403040 : word32)
  Class: Eq_44
  DataType: (ptr word32)
  OrigDataType: (ptr (struct (0 T_45 t0000)))
T_45: (in Mem46[0x00403040:word32] : word32)
  Class: Eq_45
  DataType: word32
  OrigDataType: word32
T_46: (in 0x00000000 : word32)
  Class: Eq_45
  DataType: word32
  OrigDataType: word32
T_47: (in globals->dw403040 != 0x00000000 : bool)
  Class: Eq_47
  DataType: bool
  OrigDataType: bool
T_48: (in fn00401BB0 : ptr32)
  Class: Eq_48
  DataType: (ptr Eq_48)
  OrigDataType: (ptr (fn T_50 ()))
T_49: (in signature of fn00401BB0 : void)
  Class: Eq_48
  DataType: (ptr Eq_48)
  OrigDataType: 
T_50: (in fn00401BB0() : void)
  Class: Eq_50
  DataType: void
  OrigDataType: void
T_51: (in esp_54 : (ptr Eq_51))
  Class: Eq_51
  DataType: (ptr Eq_51)
  OrigDataType: (ptr (struct (FFFFFFE4 T_177 tFFFFFFE4) (FFFFFFE8 T_176 tFFFFFFE8) (FFFFFFEC T_85 tFFFFFFEC) (FFFFFFF0 T_80 tFFFFFFF0) (FFFFFFF4 T_75 tFFFFFFF4) (FFFFFFF8 T_70 tFFFFFFF8) (FFFFFFFC T_58 tFFFFFFFC) (0 T_57 t0000)))
T_52: (in 0x00000004 : word32)
  Class: Eq_52
  DataType: word32
  OrigDataType: word32
T_53: (in esp_193 - 0x00000004 : word32)
  Class: Eq_51
  DataType: (ptr Eq_51)
  OrigDataType: word32
T_54: (in 0x00403014 : word32)
  Class: Eq_54
  DataType: word32
  OrigDataType: word32
T_55: (in 0x00000000 : word32)
  Class: Eq_55
  DataType: word32
  OrigDataType: word32
T_56: (in esp_54 + 0x00000000 : word32)
  Class: Eq_56
  DataType: word32
  OrigDataType: word32
T_57: (in Mem55[esp_54 + 0x00000000:word32] : word32)
  Class: Eq_54
  DataType: word32
  OrigDataType: word32
T_58: (in 0x00403010 : word32)
  Class: Eq_58
  DataType: word32
  OrigDataType: word32
T_59: (in 0x00000004 : word32)
  Class: Eq_59
  DataType: word32
  OrigDataType: word32
T_60: (in esp_54 - 0x00000004 : word32)
  Class: Eq_60
  DataType: word32
  OrigDataType: word32
T_61: (in Mem57[esp_54 - 0x00000004:word32] : word32)
  Class: Eq_58
  DataType: word32
  OrigDataType: word32
T_62: (in _initterm : ptr32)
  Class: Eq_62
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_63: (in signature of _initterm : void)
  Class: Eq_62
  DataType: (ptr code)
  OrigDataType: 
T_64: (in 0x00000070 : word32)
  Class: Eq_64
  DataType: word32
  OrigDataType: word32
T_65: (in fp - 0x00000070 : word32)
  Class: Eq_58
  DataType: word32
  OrigDataType: word32
T_66: (in 0x00000004 : word32)
  Class: Eq_66
  DataType: word32
  OrigDataType: word32
T_67: (in esp_54 - 0x00000004 : word32)
  Class: Eq_67
  DataType: word32
  OrigDataType: word32
T_68: (in Mem65[esp_54 - 0x00000004:word32] : word32)
  Class: Eq_58
  DataType: word32
  OrigDataType: word32
T_69: (in 0x00403114 : ptr32)
  Class: Eq_69
  DataType: (ptr word32)
  OrigDataType: (ptr (struct (0 T_70 t0000)))
T_70: (in Mem65[0x00403114:word32] : word32)
  Class: Eq_70
  DataType: word32
  OrigDataType: word32
T_71: (in 0x00000008 : word32)
  Class: Eq_71
  DataType: word32
  OrigDataType: word32
T_72: (in esp_54 - 0x00000008 : word32)
  Class: Eq_72
  DataType: word32
  OrigDataType: word32
T_73: (in Mem68[esp_54 - 0x00000008:word32] : word32)
  Class: Eq_70
  DataType: word32
  OrigDataType: word32
T_74: (in 0x00000068 : word32)
  Class: Eq_74
  DataType: word32
  OrigDataType: word32
T_75: (in fp - 0x00000068 : word32)
  Class: Eq_75
  DataType: word32
  OrigDataType: word32
T_76: (in 0x0000000C : word32)
  Class: Eq_76
  DataType: word32
  OrigDataType: word32
T_77: (in esp_54 - 0x0000000C : word32)
  Class: Eq_77
  DataType: word32
  OrigDataType: word32
T_78: (in Mem71[esp_54 - 0x0000000C:word32] : word32)
  Class: Eq_75
  DataType: word32
  OrigDataType: word32
T_79: (in 0x00000074 : word32)
  Class: Eq_79
  DataType: word32
  OrigDataType: word32
T_80: (in fp - 0x00000074 : word32)
  Class: Eq_80
  DataType: Eq_80
  OrigDataType: word32
T_81: (in 0x00000010 : word32)
  Class: Eq_81
  DataType: word32
  OrigDataType: word32
T_82: (in esp_54 - 0x00000010 : word32)
  Class: Eq_82
  DataType: word32
  OrigDataType: word32
T_83: (in Mem74[esp_54 - 0x00000010:word32] : word32)
  Class: Eq_80
  DataType: Eq_80
  OrigDataType: word32
T_84: (in 0x00000064 : word32)
  Class: Eq_84
  DataType: word32
  OrigDataType: word32
T_85: (in fp - 0x00000064 : word32)
  Class: Eq_85
  DataType: (ptr Eq_85)
  OrigDataType: word32
T_86: (in 0x00000014 : word32)
  Class: Eq_86
  DataType: word32
  OrigDataType: word32
T_87: (in esp_54 - 0x00000014 : word32)
  Class: Eq_87
  DataType: word32
  OrigDataType: word32
T_88: (in Mem77[esp_54 - 0x00000014:word32] : word32)
  Class: Eq_85
  DataType: (ptr Eq_85)
  OrigDataType: word32
T_89: (in __getmainargs : ptr32)
  Class: Eq_89
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_90: (in signature of __getmainargs : void)
  Class: Eq_89
  DataType: (ptr code)
  OrigDataType: 
T_91: (in 0x0040300C : word32)
  Class: Eq_70
  DataType: word32
  OrigDataType: word32
T_92: (in 0xFFFFFFF8 : word32)
  Class: Eq_92
  DataType: word32
  OrigDataType: word32
T_93: (in esp_54 + 0xFFFFFFF8 : word32)
  Class: Eq_93
  DataType: word32
  OrigDataType: word32
T_94: (in Mem82[esp_54 + 0xFFFFFFF8:word32] : word32)
  Class: Eq_70
  DataType: word32
  OrigDataType: word32
T_95: (in 0x00403000 : word32)
  Class: Eq_75
  DataType: word32
  OrigDataType: word32
T_96: (in 0xFFFFFFF4 : word32)
  Class: Eq_96
  DataType: word32
  OrigDataType: word32
T_97: (in esp_54 + 0xFFFFFFF4 : word32)
  Class: Eq_97
  DataType: word32
  OrigDataType: word32
T_98: (in Mem84[esp_54 + 0xFFFFFFF4:word32] : word32)
  Class: Eq_75
  DataType: word32
  OrigDataType: word32
T_99: (in _initterm : ptr32)
  Class: Eq_99
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_100: (in signature of _initterm : void)
  Class: Eq_99
  DataType: (ptr code)
  OrigDataType: 
T_101: (in __p__acmdln : ptr32)
  Class: Eq_101
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_102: (in signature of __p__acmdln : void)
  Class: Eq_101
  DataType: (ptr code)
  OrigDataType: 
T_103: (in esi_161 : (ptr Eq_85))
  Class: Eq_85
  DataType: (ptr Eq_85)
  OrigDataType: (ptr (struct 0001 (0 T_116 t0000)))
T_104: (in dwLoc74 : word32)
  Class: Eq_85
  DataType: (ptr Eq_85)
  OrigDataType: (ptr (struct (0 T_107 t0000)))
T_105: (in 0x00000000 : word32)
  Class: Eq_105
  DataType: word32
  OrigDataType: word32
T_106: (in dwLoc74 + 0x00000000 : word32)
  Class: Eq_106
  DataType: word32
  OrigDataType: word32
T_107: (in Mem84[dwLoc74 + 0x00000000:byte] : byte)
  Class: Eq_107
  DataType: bcu8
  OrigDataType: byte
T_108: (in 0x22 : byte)
  Class: Eq_107
  DataType: bcu8
  OrigDataType: byte
T_109: (in dwLoc74->b0000 != 0x22 : bool)
  Class: Eq_109
  DataType: bool
  OrigDataType: bool
T_110: (in __setusermatherr : ptr32)
  Class: Eq_110
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_111: (in signature of __setusermatherr : void)
  Class: Eq_110
  DataType: (ptr code)
  OrigDataType: 
T_112: (in 0xFFFFFF68 : word32)
  Class: Eq_112
  DataType: word32
  OrigDataType: word32
T_113: (in fp + 0xFFFFFF68 : word32)
  Class: Eq_41
  DataType: word32
  OrigDataType: word32
T_114: (in 0x00000000 : word32)
  Class: Eq_114
  DataType: word32
  OrigDataType: word32
T_115: (in esi_161 + 0x00000000 : word32)
  Class: Eq_115
  DataType: word32
  OrigDataType: word32
T_116: (in Mem84[esi_161 + 0x00000000:byte] : byte)
  Class: Eq_107
  DataType: bcu8
  OrigDataType: bcu8
T_117: (in 0x20 : byte)
  Class: Eq_107
  DataType: bcu8
  OrigDataType: bcu8
T_118: (in esi_161->b0000 <=u 0x20 : bool)
  Class: Eq_118
  DataType: bool
  OrigDataType: bool
T_119: (in 0x00000001 : word32)
  Class: Eq_119
  DataType: word32
  OrigDataType: word32
T_120: (in esi_161 + 0x00000001 : word32)
  Class: Eq_85
  DataType: (ptr Eq_85)
  OrigDataType: word32
T_121: (in al_169 : bcu8)
  Class: Eq_107
  DataType: bcu8
  OrigDataType: byte
T_122: (in 0x00000000 : word32)
  Class: Eq_122
  DataType: word32
  OrigDataType: word32
T_123: (in esi_161 + 0x00000000 : word32)
  Class: Eq_123
  DataType: word32
  OrigDataType: word32
T_124: (in Mem84[esi_161 + 0x00000000:byte] : byte)
  Class: Eq_107
  DataType: bcu8
  OrigDataType: byte
T_125: (in 0x00 : byte)
  Class: Eq_107
  DataType: bcu8
  OrigDataType: byte
T_126: (in al_169 == 0x00 : bool)
  Class: Eq_126
  DataType: bool
  OrigDataType: bool
T_127: (in 0x00000000 : word32)
  Class: Eq_127
  DataType: word32
  OrigDataType: word32
T_128: (in esi_161 + 0x00000000 : word32)
  Class: Eq_128
  DataType: word32
  OrigDataType: word32
T_129: (in Mem84[esi_161 + 0x00000000:byte] : byte)
  Class: Eq_107
  DataType: bcu8
  OrigDataType: byte
T_130: (in 0x22 : byte)
  Class: Eq_107
  DataType: bcu8
  OrigDataType: byte
T_131: (in esi_161->b0000 != 0x22 : bool)
  Class: Eq_131
  DataType: bool
  OrigDataType: bool
T_132: (in 0x22 : byte)
  Class: Eq_107
  DataType: bcu8
  OrigDataType: byte
T_133: (in al_169 != 0x22 : bool)
  Class: Eq_133
  DataType: bool
  OrigDataType: bool
T_134: (in al_99 : bcu8)
  Class: Eq_107
  DataType: bcu8
  OrigDataType: bcu8
T_135: (in 0x00000000 : word32)
  Class: Eq_135
  DataType: word32
  OrigDataType: word32
T_136: (in esi_161 + 0x00000000 : word32)
  Class: Eq_136
  DataType: word32
  OrigDataType: word32
T_137: (in Mem84[esi_161 + 0x00000000:byte] : byte)
  Class: Eq_107
  DataType: bcu8
  OrigDataType: byte
T_138: (in 0x00 : byte)
  Class: Eq_107
  DataType: bcu8
  OrigDataType: byte
T_139: (in al_99 == 0x00 : bool)
  Class: Eq_139
  DataType: bool
  OrigDataType: bool
T_140: (in 0x00000001 : word32)
  Class: Eq_140
  DataType: word32
  OrigDataType: word32
T_141: (in esi_161 + 0x00000001 : word32)
  Class: Eq_85
  DataType: (ptr Eq_85)
  OrigDataType: word32
T_142: (in 0x00000001 : word32)
  Class: Eq_142
  DataType: word32
  OrigDataType: word32
T_143: (in esi_161 + 0x00000001 : word32)
  Class: Eq_85
  DataType: (ptr Eq_85)
  OrigDataType: word32
T_144: (in eax_117 : Eq_80)
  Class: Eq_80
  DataType: Eq_80
  OrigDataType: word32
T_145: (in 0x00000060 : word32)
  Class: Eq_145
  DataType: word32
  OrigDataType: word32
T_146: (in fp - 0x00000060 : word32)
  Class: Eq_80
  DataType: Eq_80
  OrigDataType: word32
T_147: (in 0xFFFFFFF0 : word32)
  Class: Eq_147
  DataType: word32
  OrigDataType: word32
T_148: (in esp_54 + 0xFFFFFFF0 : word32)
  Class: Eq_148
  DataType: word32
  OrigDataType: word32
T_149: (in Mem110[esp_54 + 0xFFFFFFF0:word32] : word32)
  Class: Eq_80
  DataType: Eq_80
  OrigDataType: word32
T_150: (in GetStartupInfoA : ptr32)
  Class: Eq_150
  DataType: (ptr Eq_150)
  OrigDataType: (ptr (fn T_155 (T_154)))
T_151: (in signature of GetStartupInfoA : void)
  Class: Eq_150
  DataType: (ptr Eq_150)
  OrigDataType: 
T_152: (in lpStartupInfo : LPSTARTUPINFOA)
  Class: Eq_80
  DataType: Eq_80
  OrigDataType: LPSTARTUPINFOA
T_153: (in esp_54 + 0xFFFFFFF0 : word32)
  Class: Eq_153
  DataType: word32
  OrigDataType: word32
T_154: (in Mem110[esp_54 + 0xFFFFFFF0:LPSTARTUPINFOA] : LPSTARTUPINFOA)
  Class: Eq_80
  DataType: Eq_80
  OrigDataType: LPSTARTUPINFOA
T_155: (in GetStartupInfoA(esp_54->tFFFFFFF0) : void)
  Class: Eq_155
  DataType: void
  OrigDataType: void
T_156: (in 0x00 : byte)
  Class: Eq_156
  DataType: byte
  OrigDataType: byte
T_157: (in 0x00 : byte)
  Class: Eq_156
  DataType: byte
  OrigDataType: byte
T_158: (in 0x00 == 0x00 : bool)
  Class: Eq_158
  DataType: bool
  OrigDataType: bool
T_159: (in 0x20 : byte)
  Class: Eq_107
  DataType: bcu8
  OrigDataType: bcu8
T_160: (in al_99 >u 0x20 : bool)
  Class: Eq_160
  DataType: bool
  OrigDataType: bool
T_161: (in 0x00000001 : word32)
  Class: Eq_161
  DataType: word32
  OrigDataType: word32
T_162: (in esi_161 + 0x00000001 : word32)
  Class: Eq_85
  DataType: (ptr Eq_85)
  OrigDataType: word32
T_163: (in 0x0000000A : word32)
  Class: Eq_80
  DataType: int32
  OrigDataType: word32
T_164: (in dwLoc30 : word32)
  Class: Eq_164
  DataType: word32
  OrigDataType: word32
T_165: (in 0x0000FFFF : word32)
  Class: Eq_165
  DataType: word32
  OrigDataType: word32
T_166: (in dwLoc30 & 0x0000FFFF : word32)
  Class: Eq_80
  DataType: Eq_80
  OrigDataType: word32
T_167: (in 0xFFFFFFF0 : word32)
  Class: Eq_167
  DataType: word32
  OrigDataType: word32
T_168: (in esp_54 + 0xFFFFFFF0 : word32)
  Class: Eq_168
  DataType: word32
  OrigDataType: word32
T_169: (in Mem120[esp_54 + 0xFFFFFFF0:word32] : word32)
  Class: Eq_80
  DataType: Eq_80
  OrigDataType: word32
T_170: (in 0xFFFFFFEC : word32)
  Class: Eq_170
  DataType: word32
  OrigDataType: word32
T_171: (in esp_54 + 0xFFFFFFEC : word32)
  Class: Eq_171
  DataType: word32
  OrigDataType: word32
T_172: (in Mem122[esp_54 + 0xFFFFFFEC:word32] : word32)
  Class: Eq_85
  DataType: (ptr Eq_85)
  OrigDataType: word32
T_173: (in 0x00000000 : word32)
  Class: Eq_173
  DataType: word32
  OrigDataType: word32
T_174: (in 0xFFFFFFE8 : word32)
  Class: Eq_174
  DataType: word32
  OrigDataType: word32
T_175: (in esp_54 + 0xFFFFFFE8 : word32)
  Class: Eq_175
  DataType: word32
  OrigDataType: word32
T_176: (in Mem124[esp_54 + 0xFFFFFFE8:word32] : word32)
  Class: Eq_173
  DataType: word32
  OrigDataType: word32
T_177: (in 0x00000000 : word32)
  Class: Eq_80
  DataType: int32
  OrigDataType: word32
T_178: (in 0xFFFFFFE4 : word32)
  Class: Eq_178
  DataType: word32
  OrigDataType: word32
T_179: (in esp_54 + 0xFFFFFFE4 : word32)
  Class: Eq_179
  DataType: word32
  OrigDataType: word32
T_180: (in Mem126[esp_54 + 0xFFFFFFE4:word32] : word32)
  Class: Eq_80
  DataType: Eq_80
  OrigDataType: word32
T_181: (in eax_127 : Eq_80)
  Class: Eq_80
  DataType: Eq_80
  OrigDataType: word32
T_182: (in GetModuleHandleA : ptr32)
  Class: Eq_182
  DataType: (ptr Eq_182)
  OrigDataType: (ptr (fn T_187 (T_186)))
T_183: (in signature of GetModuleHandleA : void)
  Class: Eq_182
  DataType: (ptr Eq_182)
  OrigDataType: 
T_184: (in lpModuleName : LPCSTR)
  Class: Eq_80
  DataType: Eq_80
  OrigDataType: LPCSTR
T_185: (in esp_54 + 0xFFFFFFE4 : word32)
  Class: Eq_185
  DataType: word32
  OrigDataType: word32
T_186: (in Mem126[esp_54 + 0xFFFFFFE4:LPCSTR] : LPCSTR)
  Class: Eq_80
  DataType: Eq_80
  OrigDataType: LPCSTR
T_187: (in GetModuleHandleA(esp_54->tFFFFFFE4) : word32)
  Class: Eq_80
  DataType: Eq_80
  OrigDataType: word32
T_188: (in 0xFFFFFFE4 : word32)
  Class: Eq_188
  DataType: word32
  OrigDataType: word32
T_189: (in esp_54 + 0xFFFFFFE4 : word32)
  Class: Eq_189
  DataType: word32
  OrigDataType: word32
T_190: (in Mem130[esp_54 + 0xFFFFFFE4:word32] : word32)
  Class: Eq_80
  DataType: Eq_80
  OrigDataType: word32
T_191: (in fn00401BFC : ptr32)
  Class: Eq_191
  DataType: (ptr Eq_191)
  OrigDataType: (ptr (fn T_201 (T_197, T_198, T_199, T_200)))
T_192: (in signature of fn00401BFC : void)
  Class: Eq_191
  DataType: (ptr Eq_191)
  OrigDataType: 
T_193: (in dwArg00 : word32)
  Class: Eq_193
  DataType: word32
  OrigDataType: word32
T_194: (in dwArg04 : word32)
  Class: Eq_194
  DataType: word32
  OrigDataType: word32
T_195: (in dwArg08 : word32)
  Class: Eq_195
  DataType: word32
  OrigDataType: word32
T_196: (in dwArg0C : word32)
  Class: Eq_196
  DataType: word32
  OrigDataType: word32
T_197: (in ebp : word32)
  Class: Eq_193
  DataType: word32
  OrigDataType: word32
T_198: (in dwArg00 : word32)
  Class: Eq_194
  DataType: word32
  OrigDataType: word32
T_199: (in dwArg04 : word32)
  Class: Eq_195
  DataType: word32
  OrigDataType: word32
T_200: (in dwArg08 : word32)
  Class: Eq_196
  DataType: word32
  OrigDataType: word32
T_201: (in fn00401BFC(ebp, dwArg00, dwArg04, dwArg08) : void)
  Class: Eq_201
  DataType: void
  OrigDataType: void
T_202: (in 0xFFFFFFF0 : word32)
  Class: Eq_202
  DataType: word32
  OrigDataType: word32
T_203: (in esp_54 + 0xFFFFFFF0 : word32)
  Class: Eq_203
  DataType: word32
  OrigDataType: word32
T_204: (in Mem137[esp_54 + 0xFFFFFFF0:word32] : word32)
  Class: Eq_80
  DataType: Eq_80
  OrigDataType: word32
T_205: (in exit : ptr32)
  Class: Eq_205
  DataType: (ptr Eq_205)
  OrigDataType: (ptr (fn T_210 (T_209)))
T_206: (in signature of exit : void)
  Class: Eq_205
  DataType: (ptr Eq_205)
  OrigDataType: 
T_207: (in _Code : int32)
  Class: Eq_80
  DataType: Eq_80
  OrigDataType: int32
T_208: (in esp_54 + 0xFFFFFFF0 : word32)
  Class: Eq_208
  DataType: word32
  OrigDataType: word32
T_209: (in Mem137[esp_54 + 0xFFFFFFF0:int32] : int32)
  Class: Eq_80
  DataType: Eq_80
  OrigDataType: int32
T_210: (in exit(esp_54->tFFFFFFF0) : void)
  Class: Eq_210
  DataType: void
  OrigDataType: void
T_211: (in 0xFFFFFFFF : word32)
  Class: Eq_211
  DataType: word32
  OrigDataType: word32
T_212: (in 0x00000008 : word32)
  Class: Eq_212
  DataType: word32
  OrigDataType: word32
T_213: (in fp - 0x00000008 : word32)
  Class: Eq_213
  DataType: word32
  OrigDataType: word32
T_214: (in Mem140[fp - 0x00000008:word32] : word32)
  Class: Eq_211
  DataType: word32
  OrigDataType: word32
T_215: (in 0x00000000 : ptr32)
  Class: Eq_215
  DataType: Eq_215
  OrigDataType: (union (ptr32 u0) ((memptr T_3 (struct (0 T_216 t0000))) u1))
T_216: (in Mem142[fs:0x00000000:word32] : word32)
  Class: Eq_2
  DataType: (ptr word32)
  OrigDataType: word32
T_217: (in _controlfp : ptr32)
  Class: Eq_217
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_218: (in signature of _controlfp : void)
  Class: Eq_217
  DataType: (ptr code)
  OrigDataType: 
T_219: (in MFC42.DLL!Ordinal_1576 : ptr32)
  Class: Eq_219
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_220:
  Class: Eq_220
  DataType: Eq_220
  OrigDataType: 
*/
typedef struct Globals {
	word32 dw403040;	// 403040
	word32 dw403114;	// 403114
	word32 dw40311C;	// 40311C
	word32 dw403120;	// 403120
	word32 dw403128;	// 403128
	word32 dw40312C;	// 40312C
	word32 dw403130;	// 403130
} Eq_1;

typedef struct Eq_3 {
	word32 * ptr0000;	// 0
} Eq_3;

typedef struct Eq_6 {
	word32 dwFFFFFFF8;	// FFFFFFF8
} Eq_6;

typedef union Eq_9 {
	ptr32 u0;
	word32* Eq_3::* u1;
} Eq_9;

typedef void (Eq_38)();

typedef void (Eq_48)();

typedef Eq_80 Eq_51Eq_85 Eq_51Eq_80 Eq_51struct Eq_51 {
	Eq_80 tFFFFFFE4;	// FFFFFFE4
	word32 dwFFFFFFE8;	// FFFFFFE8
	Eq_85 * ptrFFFFFFEC;	// FFFFFFEC
	Eq_80 tFFFFFFF0;	// FFFFFFF0
	word32 dwFFFFFFF4;	// FFFFFFF4
	word32 dwFFFFFFF8;	// FFFFFFF8
	word32 dwFFFFFFFC;	// FFFFFFFC
	word32 dw0000;	// 0
} Eq_51;

typedef union Eq_80 {
	int32 u0;
	 LPCSTR u1;
	 LPSTARTUPINFOA u2;
} Eq_80;

typedef Eq_85 Eq_85struct Eq_85 {	// size: 1 1
	bcu8 b0000;	// 0
	Eq_85 t0001;	// 1
} Eq_85;

typedef void (Eq_150)(Eq_80);

typedef Eq_80 (Eq_182)(Eq_80);

typedef void (Eq_191)(word32, word32, word32, word32);

typedef void (Eq_205)(Eq_80);

typedef union Eq_215 {
	ptr32 u0;
	word32* Eq_3::* u1;
} Eq_215;

typedef DWORDLPSTRLPSTRLPSTRDWORDDWORDDWORDDWORDDWORDDWORDDWORDDWORDWORDWORDLPBYTEHANDLEHANDLEHANDLEstruct _STARTUPINFOA {
	DWORD;	// 0
	LPSTR;	// 4
	LPSTR;	// 8
	LPSTR;	// C
	DWORD;	// 10
	DWORD;	// 14
	DWORD;	// 18
	DWORD;	// 1C
	DWORD;	// 20
	DWORD;	// 24
	DWORD;	// 28
	DWORD;	// 2C
	WORD;	// 30
	WORD;	// 32
	LPBYTE;	// 34
	HANDLE;	// 38
	HANDLE;	// 3C
	HANDLE;	// 40
} Eq_220;

