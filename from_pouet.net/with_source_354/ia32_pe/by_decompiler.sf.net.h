// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_354/ia32_pe/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (403009 Eq_2 t403009) (403015 word32 dw403015) (40304E Eq_2 t40304E))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (union "Eq_2" (word32 u0) (DWORD u1) (HANDLE u2) (HMODULE u3) (HWND u4) (LPCVOID u5) (LPOVERLAPPED u6))
	T_2 (in eax_4 : Eq_2)
	T_7 (in LoadLibraryA(0x00403000) : word32)
	T_9 (in Mem6[0x00403009:word32] : word32)
	T_10 (in 0x00000000 : word32)
	T_17 (in 0x00000000 : word32)
	T_20 (in Mem47[fp - 0x00000010:word32] : word32)
	T_23 (in hWnd : HWND)
	T_27 (in 0x00000000 : word32)
	T_32 (in 0x0040300D : word32)
	T_35 (in Mem51[fp - 0x00000004:word32] : word32)
	T_39 (in hModule : HMODULE)
	T_42 (in Mem51[0x00403009:word32] : word32)
	T_49 (in 0x00000000 : word32)
	T_52 (in Mem61[fp - 0x00000004:word32] : word32)
	T_53 (in eax_74 : Eq_2)
	T_62 (in hTemplateFile : HANDLE)
	T_69 (in CreateFileA(0x00403041, 0x40000000, 0x00000000, 0x00000000, 0x00000003, 0x00000080, 0x0040300D) : word32)
	T_71 (in Mem76[0x0040304E:word32] : word32)
	T_72 (in 0x00000001 : word32)
	T_74 (in 0x00000000 : word32)
	T_77 (in Mem82[fp - 0x00000004:word32] : word32)
	T_87 (in Mem86[0x0040304E:word32] : word32)
	T_90 (in Mem88[fp - 0x00000010:word32] : word32)
	T_93 (in hFile : HANDLE)
	T_96 (in dwMoveMethod : DWORD)
	T_99 (in 0x00000000 : word32)
	T_102 (in Mem92[fp - 0x00000004:word32] : word32)
	T_111 (in 0x00403015 : word32)
	T_114 (in Mem98[fp - 0x00000010:word32] : word32)
	T_116 (in Mem98[0x0040304E:word32] : word32)
	T_119 (in Mem100[fp - 0x00000014:word32] : word32)
	T_123 (in lpBuffer : LPCVOID)
	T_126 (in lpOverlapped : LPOVERLAPPED)
	T_130 (in Mem100[0x0040304E:word32] : word32)
	T_133 (in Mem104[fp - 0x00000004:word32] : word32)
	T_136 (in hObject : HANDLE)
	T_146 (in 0x00000000 : word32)
	T_149 (in Mem114[fp - 0x00000010:word32] : word32)
	T_154 (in Mem6[0x00403009:word32] : word32)
	T_157 (in Mem26[fp - 0x00000004:word32] : word32)
	T_163 (in 0x00000000 : word32)
	T_166 (in Mem30[fp - 0x00000004:word32] : word32)
Eq_3: (fn Eq_2 (Eq_5))
	T_3 (in LoadLibraryA : ptr32)
	T_4 (in signature of LoadLibraryA : void)
Eq_5: (union "Eq_5" (word32 u0) (LPCSTR u1))
	T_5 (in lpLibFileName : LPCSTR)
	T_6 (in 0x00403000 : word32)
Eq_12: (union "Eq_12" (word32 u0) (DWORD u1) (LONG u2) (LPCSTR u3))
	T_12 (in 0x00403034 : word32)
	T_16 (in Mem45[fp - 0x0000000C:word32] : word32)
	T_24 (in lpText : LPCSTR)
	T_28 (in 0x00000003 : word32)
	T_82 (in 0x00000031 : word32)
	T_85 (in Mem86[fp - 0x0000000C:word32] : word32)
	T_94 (in lDistanceToMove : LONG)
	T_107 (in 0x00000004 : word32)
	T_110 (in Mem96[fp - 0x0000000C:word32] : word32)
	T_124 (in nNumberOfBytesToWrite : DWORD)
	T_142 (in 0x00403028 : word32)
	T_145 (in Mem112[fp - 0x0000000C:word32] : word32)
Eq_13: (struct "Eq_13" (FFFFFFEC Eq_2 tFFFFFFEC) (FFFFFFF0 Eq_2 tFFFFFFF0) (FFFFFFF4 Eq_12 tFFFFFFF4) (FFFFFFF8 Eq_25 tFFFFFFF8) (FFFFFFFC Eq_2 tFFFFFFFC))
	T_13 (in fp : ptr32)
Eq_21: (fn word32 (Eq_2, Eq_12, Eq_25, Eq_26))
	T_21 (in MessageBoxA : ptr32)
	T_22 (in signature of MessageBoxA : void)
	T_150 (in MessageBoxA : ptr32)
Eq_25: (union "Eq_25" (word32 u0) (LPCSTR u1))
	T_25 (in lpCaption : LPCSTR)
	T_29 (in 0x00403019 : word32)
	T_78 (in 0x00000000 : word32)
	T_81 (in Mem84[fp - 0x00000008:word32] : word32)
	T_103 (in 0x00403052 : word32)
	T_106 (in Mem94[fp - 0x00000008:word32] : word32)
	T_138 (in 0x00403019 : word32)
	T_141 (in Mem110[fp - 0x00000008:word32] : word32)
Eq_26: (union "Eq_26" (word32 u0) (UINT u1))
	T_26 (in uType : UINT)
	T_30 (in 0x00000000 : word32)
	T_151 (in 0x00000000 : word32)
Eq_37: (fn word32 (Eq_2, Eq_40))
	T_37 (in GetProcAddress : ptr32)
	T_38 (in signature of GetProcAddress : void)
Eq_40: (union "Eq_40" (word32 u0) (LPCSTR u1))
	T_40 (in lpProcName : LPCSTR)
	T_43 (in 0x00403000 : word32)
Eq_54: (fn Eq_2 (Eq_56, Eq_57, Eq_58, Eq_59, Eq_60, Eq_61, Eq_2))
	T_54 (in CreateFileA : ptr32)
	T_55 (in signature of CreateFileA : void)
Eq_56: (union "Eq_56" (word32 u0) (LPCSTR u1))
	T_56 (in lpFileName : LPCSTR)
	T_63 (in 0x00403041 : word32)
Eq_57: (union "Eq_57" (word32 u0) (DWORD u1))
	T_57 (in dwDesiredAccess : DWORD)
	T_64 (in 0x40000000 : word32)
Eq_58: (union "Eq_58" (word32 u0) (DWORD u1))
	T_58 (in dwShareMode : DWORD)
	T_65 (in 0x00000000 : word32)
Eq_59: (union "Eq_59" (word32 u0) (LPSECURITY_ATTRIBUTES u1))
	T_59 (in lpSecurityAttributes : LPSECURITY_ATTRIBUTES)
	T_66 (in 0x00000000 : word32)
Eq_60: (union "Eq_60" (word32 u0) (DWORD u1))
	T_60 (in dwCreationDisposition : DWORD)
	T_67 (in 0x00000003 : word32)
Eq_61: (union "Eq_61" (word32 u0) (DWORD u1))
	T_61 (in dwFlagsAndAttributes : DWORD)
	T_68 (in 0x00000080 : word32)
Eq_91: (fn word32 (Eq_2, Eq_12, Eq_95, Eq_2))
	T_91 (in SetFilePointer : ptr32)
	T_92 (in signature of SetFilePointer : void)
Eq_95: (union "Eq_95" (word32 u0) (LPDWORD u1) (PLONG u2))
	T_95 (in lpDistanceToMoveHigh : PLONG)
	T_97 (in 0x00000080 : word32)
	T_125 (in lpNumberOfBytesWritten : LPDWORD)
Eq_120: (fn word32 (Eq_122, Eq_2, Eq_12, Eq_95, Eq_2))
	T_120 (in WriteFile : ptr32)
	T_121 (in signature of WriteFile : void)
Eq_122: (union "Eq_122" (word32 u0) (HANDLE u1))
	T_122 (in hFile : HANDLE)
	T_127 (in 0x00000000 : word32)
Eq_134: (fn word32 (Eq_2))
	T_134 (in CloseHandle : ptr32)
	T_135 (in signature of CloseHandle : void)
Eq_158: (fn word32 (Eq_160))
	T_158 (in FreeLibrary : ptr32)
	T_159 (in signature of FreeLibrary : void)
Eq_160: (union "Eq_160" (word32 u0) (HMODULE u1) (UINT u2))
	T_160 (in hLibModule : HMODULE)
	T_161 (in 0x00000000 : word32)
	T_169 (in uExitCode : UINT)
Eq_167: (fn void (Eq_160))
	T_167 (in ExitProcess : ptr32)
	T_168 (in signature of ExitProcess : void)
Eq_171: (fn void ())
	T_171 (in int3 : ptr32)
	T_172 (in signature of int3 : void)
Eq_176: (struct "struct_61" (0 DWORD Offset) (4 DWORD OffsetHigh))
	T_176
Eq_177: (union "Eq_177" (Eq_176 u0) (PVOID u1))
	T_177
Eq_178: (struct "_OVERLAPPED" (0 ULONG_PTR Internal) (4 ULONG_PTR InternalHigh) (8 Eq_177 t0008) (10 HANDLE hEvent))
	T_178
Eq_179: (struct "_SECURITY_ATTRIBUTES" (0 DWORD nLength) (4 LPVOID lpSecurityDescriptor) (8 BOOL bInheritHandle))
	T_179
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr Eq_1)
  OrigDataType: (ptr (struct "Globals"))
T_2: (in eax_4 : Eq_2)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word32
T_3: (in LoadLibraryA : ptr32)
  Class: Eq_3
  DataType: (ptr Eq_3)
  OrigDataType: (ptr (fn T_7 (T_6)))
T_4: (in signature of LoadLibraryA : void)
  Class: Eq_3
  DataType: (ptr Eq_3)
  OrigDataType: 
T_5: (in lpLibFileName : LPCSTR)
  Class: Eq_5
  DataType: Eq_5
  OrigDataType: LPCSTR
T_6: (in 0x00403000 : word32)
  Class: Eq_5
  DataType: word32
  OrigDataType: word32
T_7: (in LoadLibraryA(0x00403000) : word32)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word32
T_8: (in 0x00403009 : word32)
  Class: Eq_8
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (struct (0 T_9 t0000)))
T_9: (in Mem6[0x00403009:word32] : word32)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word32
T_10: (in 0x00000000 : word32)
  Class: Eq_2
  DataType: word32
  OrigDataType: word32
T_11: (in eax_4 == 0x00000000 : bool)
  Class: Eq_11
  DataType: bool
  OrigDataType: bool
T_12: (in 0x00403034 : word32)
  Class: Eq_12
  DataType: word32
  OrigDataType: word32
T_13: (in fp : ptr32)
  Class: Eq_13
  DataType: (ptr Eq_13)
  OrigDataType: (ptr (struct (FFFFFFEC T_119 tFFFFFFEC) (FFFFFFF0 T_17 tFFFFFFF0) (FFFFFFF4 T_12 tFFFFFFF4) (FFFFFFF8 T_25 tFFFFFFF8) (FFFFFFFC T_2 tFFFFFFFC)))
T_14: (in 0x0000000C : word32)
  Class: Eq_14
  DataType: word32
  OrigDataType: word32
T_15: (in fp - 0x0000000C : word32)
  Class: Eq_15
  DataType: word32
  OrigDataType: word32
T_16: (in Mem45[fp - 0x0000000C:word32] : word32)
  Class: Eq_12
  DataType: Eq_12
  OrigDataType: word32
T_17: (in 0x00000000 : word32)
  Class: Eq_2
  DataType: word32
  OrigDataType: word32
T_18: (in 0x00000010 : word32)
  Class: Eq_18
  DataType: word32
  OrigDataType: word32
T_19: (in fp - 0x00000010 : word32)
  Class: Eq_19
  DataType: word32
  OrigDataType: word32
T_20: (in Mem47[fp - 0x00000010:word32] : word32)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word32
T_21: (in MessageBoxA : ptr32)
  Class: Eq_21
  DataType: (ptr Eq_21)
  OrigDataType: (ptr (fn T_31 (T_27, T_28, T_29, T_30)))
T_22: (in signature of MessageBoxA : void)
  Class: Eq_21
  DataType: (ptr Eq_21)
  OrigDataType: 
T_23: (in hWnd : HWND)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: HWND
T_24: (in lpText : LPCSTR)
  Class: Eq_12
  DataType: Eq_12
  OrigDataType: LPCSTR
T_25: (in lpCaption : LPCSTR)
  Class: Eq_25
  DataType: Eq_25
  OrigDataType: LPCSTR
T_26: (in uType : UINT)
  Class: Eq_26
  DataType: Eq_26
  OrigDataType: UINT
T_27: (in 0x00000000 : word32)
  Class: Eq_2
  DataType: word32
  OrigDataType: word32
T_28: (in 0x00000003 : word32)
  Class: Eq_12
  DataType: word32
  OrigDataType: word32
T_29: (in 0x00403019 : word32)
  Class: Eq_25
  DataType: word32
  OrigDataType: word32
T_30: (in 0x00000000 : word32)
  Class: Eq_26
  DataType: word32
  OrigDataType: word32
T_31: (in MessageBoxA(0x00000000, 0x00000003, 0x00403019, 0x00000000) : word32)
  Class: Eq_31
  DataType: word32
  OrigDataType: word32
T_32: (in 0x0040300D : word32)
  Class: Eq_2
  DataType: word32
  OrigDataType: word32
T_33: (in 0x00000004 : word32)
  Class: Eq_33
  DataType: word32
  OrigDataType: word32
T_34: (in fp - 0x00000004 : word32)
  Class: Eq_34
  DataType: word32
  OrigDataType: word32
T_35: (in Mem51[fp - 0x00000004:word32] : word32)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word32
T_36: (in eax_54 : word32)
  Class: Eq_36
  DataType: word32
  OrigDataType: word32
T_37: (in GetProcAddress : ptr32)
  Class: Eq_37
  DataType: (ptr Eq_37)
  OrigDataType: (ptr (fn T_44 (T_42, T_43)))
T_38: (in signature of GetProcAddress : void)
  Class: Eq_37
  DataType: (ptr Eq_37)
  OrigDataType: 
T_39: (in hModule : HMODULE)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: HMODULE
T_40: (in lpProcName : LPCSTR)
  Class: Eq_40
  DataType: Eq_40
  OrigDataType: LPCSTR
T_41: (in 0x00403009 : ptr32)
  Class: Eq_41
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (struct (0 T_42 t0000)))
T_42: (in Mem51[0x00403009:word32] : word32)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word32
T_43: (in 0x00403000 : word32)
  Class: Eq_40
  DataType: word32
  OrigDataType: word32
T_44: (in GetProcAddress(globals->t403009, 0x00403000) : word32)
  Class: Eq_36
  DataType: word32
  OrigDataType: word32
T_45: (in 0x00403015 : word32)
  Class: Eq_45
  DataType: (ptr word32)
  OrigDataType: (ptr (struct (0 T_46 t0000)))
T_46: (in Mem56[0x00403015:word32] : word32)
  Class: Eq_36
  DataType: word32
  OrigDataType: word32
T_47: (in 0x00000000 : word32)
  Class: Eq_36
  DataType: word32
  OrigDataType: word32
T_48: (in eax_54 == 0x00000000 : bool)
  Class: Eq_48
  DataType: bool
  OrigDataType: bool
T_49: (in 0x00000000 : word32)
  Class: Eq_2
  DataType: word32
  OrigDataType: word32
T_50: (in 0x00000004 : word32)
  Class: Eq_50
  DataType: word32
  OrigDataType: word32
T_51: (in fp - 0x00000004 : word32)
  Class: Eq_51
  DataType: word32
  OrigDataType: word32
T_52: (in Mem61[fp - 0x00000004:word32] : word32)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word32
T_53: (in eax_74 : Eq_2)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word32
T_54: (in CreateFileA : ptr32)
  Class: Eq_54
  DataType: (ptr Eq_54)
  OrigDataType: (ptr (fn T_69 (T_63, T_64, T_65, T_66, T_67, T_68, T_32)))
T_55: (in signature of CreateFileA : void)
  Class: Eq_54
  DataType: (ptr Eq_54)
  OrigDataType: 
T_56: (in lpFileName : LPCSTR)
  Class: Eq_56
  DataType: Eq_56
  OrigDataType: LPCSTR
T_57: (in dwDesiredAccess : DWORD)
  Class: Eq_57
  DataType: Eq_57
  OrigDataType: DWORD
T_58: (in dwShareMode : DWORD)
  Class: Eq_58
  DataType: Eq_58
  OrigDataType: DWORD
T_59: (in lpSecurityAttributes : LPSECURITY_ATTRIBUTES)
  Class: Eq_59
  DataType: Eq_59
  OrigDataType: LPSECURITY_ATTRIBUTES
T_60: (in dwCreationDisposition : DWORD)
  Class: Eq_60
  DataType: Eq_60
  OrigDataType: DWORD
T_61: (in dwFlagsAndAttributes : DWORD)
  Class: Eq_61
  DataType: Eq_61
  OrigDataType: DWORD
T_62: (in hTemplateFile : HANDLE)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: HANDLE
T_63: (in 0x00403041 : word32)
  Class: Eq_56
  DataType: word32
  OrigDataType: word32
T_64: (in 0x40000000 : word32)
  Class: Eq_57
  DataType: word32
  OrigDataType: word32
T_65: (in 0x00000000 : word32)
  Class: Eq_58
  DataType: word32
  OrigDataType: word32
T_66: (in 0x00000000 : word32)
  Class: Eq_59
  DataType: word32
  OrigDataType: word32
T_67: (in 0x00000003 : word32)
  Class: Eq_60
  DataType: word32
  OrigDataType: word32
T_68: (in 0x00000080 : word32)
  Class: Eq_61
  DataType: word32
  OrigDataType: word32
T_69: (in CreateFileA(0x00403041, 0x40000000, 0x00000000, 0x00000000, 0x00000003, 0x00000080, 0x0040300D) : word32)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word32
T_70: (in 0x0040304E : word32)
  Class: Eq_70
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (struct (0 T_71 t0000)))
T_71: (in Mem76[0x0040304E:word32] : word32)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word32
T_72: (in 0x00000001 : word32)
  Class: Eq_2
  DataType: word32
  OrigDataType: word32
T_73: (in eax_74 == 0x00000001 : bool)
  Class: Eq_73
  DataType: bool
  OrigDataType: bool
T_74: (in 0x00000000 : word32)
  Class: Eq_2
  DataType: word32
  OrigDataType: word32
T_75: (in 0x00000004 : word32)
  Class: Eq_75
  DataType: word32
  OrigDataType: word32
T_76: (in fp - 0x00000004 : word32)
  Class: Eq_76
  DataType: word32
  OrigDataType: word32
T_77: (in Mem82[fp - 0x00000004:word32] : word32)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word32
T_78: (in 0x00000000 : word32)
  Class: Eq_25
  DataType: word32
  OrigDataType: word32
T_79: (in 0x00000008 : word32)
  Class: Eq_79
  DataType: word32
  OrigDataType: word32
T_80: (in fp - 0x00000008 : word32)
  Class: Eq_80
  DataType: word32
  OrigDataType: word32
T_81: (in Mem84[fp - 0x00000008:word32] : word32)
  Class: Eq_25
  DataType: Eq_25
  OrigDataType: word32
T_82: (in 0x00000031 : word32)
  Class: Eq_12
  DataType: word32
  OrigDataType: word32
T_83: (in 0x0000000C : word32)
  Class: Eq_83
  DataType: word32
  OrigDataType: word32
T_84: (in fp - 0x0000000C : word32)
  Class: Eq_84
  DataType: word32
  OrigDataType: word32
T_85: (in Mem86[fp - 0x0000000C:word32] : word32)
  Class: Eq_12
  DataType: Eq_12
  OrigDataType: word32
T_86: (in 0x0040304E : ptr32)
  Class: Eq_86
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (struct (0 T_87 t0000)))
T_87: (in Mem86[0x0040304E:word32] : word32)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word32
T_88: (in 0x00000010 : word32)
  Class: Eq_88
  DataType: word32
  OrigDataType: word32
T_89: (in fp - 0x00000010 : word32)
  Class: Eq_89
  DataType: word32
  OrigDataType: word32
T_90: (in Mem88[fp - 0x00000010:word32] : word32)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word32
T_91: (in SetFilePointer : ptr32)
  Class: Eq_91
  DataType: (ptr Eq_91)
  OrigDataType: (ptr (fn T_98 (T_27, T_28, T_97, T_49)))
T_92: (in signature of SetFilePointer : void)
  Class: Eq_91
  DataType: (ptr Eq_91)
  OrigDataType: 
T_93: (in hFile : HANDLE)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: HANDLE
T_94: (in lDistanceToMove : LONG)
  Class: Eq_12
  DataType: Eq_12
  OrigDataType: LONG
T_95: (in lpDistanceToMoveHigh : PLONG)
  Class: Eq_95
  DataType: Eq_95
  OrigDataType: PLONG
T_96: (in dwMoveMethod : DWORD)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: DWORD
T_97: (in 0x00000080 : word32)
  Class: Eq_95
  DataType: word32
  OrigDataType: word32
T_98: (in SetFilePointer(0x00000000, 0x00000003, 0x00000080, 0x00000000) : word32)
  Class: Eq_98
  DataType: word32
  OrigDataType: word32
T_99: (in 0x00000000 : word32)
  Class: Eq_2
  DataType: word32
  OrigDataType: word32
T_100: (in 0x00000004 : word32)
  Class: Eq_100
  DataType: word32
  OrigDataType: word32
T_101: (in fp - 0x00000004 : word32)
  Class: Eq_101
  DataType: word32
  OrigDataType: word32
T_102: (in Mem92[fp - 0x00000004:word32] : word32)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word32
T_103: (in 0x00403052 : word32)
  Class: Eq_25
  DataType: word32
  OrigDataType: word32
T_104: (in 0x00000008 : word32)
  Class: Eq_104
  DataType: word32
  OrigDataType: word32
T_105: (in fp - 0x00000008 : word32)
  Class: Eq_105
  DataType: word32
  OrigDataType: word32
T_106: (in Mem94[fp - 0x00000008:word32] : word32)
  Class: Eq_25
  DataType: Eq_25
  OrigDataType: word32
T_107: (in 0x00000004 : word32)
  Class: Eq_12
  DataType: word32
  OrigDataType: word32
T_108: (in 0x0000000C : word32)
  Class: Eq_108
  DataType: word32
  OrigDataType: word32
T_109: (in fp - 0x0000000C : word32)
  Class: Eq_109
  DataType: word32
  OrigDataType: word32
T_110: (in Mem96[fp - 0x0000000C:word32] : word32)
  Class: Eq_12
  DataType: Eq_12
  OrigDataType: word32
T_111: (in 0x00403015 : word32)
  Class: Eq_2
  DataType: word32
  OrigDataType: word32
T_112: (in 0x00000010 : word32)
  Class: Eq_112
  DataType: word32
  OrigDataType: word32
T_113: (in fp - 0x00000010 : word32)
  Class: Eq_113
  DataType: word32
  OrigDataType: word32
T_114: (in Mem98[fp - 0x00000010:word32] : word32)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word32
T_115: (in 0x0040304E : ptr32)
  Class: Eq_115
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (struct (0 T_116 t0000)))
T_116: (in Mem98[0x0040304E:word32] : word32)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word32
T_117: (in 0x00000014 : word32)
  Class: Eq_117
  DataType: word32
  OrigDataType: word32
T_118: (in fp - 0x00000014 : word32)
  Class: Eq_118
  DataType: word32
  OrigDataType: word32
T_119: (in Mem100[fp - 0x00000014:word32] : word32)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word32
T_120: (in WriteFile : ptr32)
  Class: Eq_120
  DataType: (ptr Eq_120)
  OrigDataType: (ptr (fn T_128 (T_127, T_27, T_28, T_97, T_49)))
T_121: (in signature of WriteFile : void)
  Class: Eq_120
  DataType: (ptr Eq_120)
  OrigDataType: 
T_122: (in hFile : HANDLE)
  Class: Eq_122
  DataType: Eq_122
  OrigDataType: HANDLE
T_123: (in lpBuffer : LPCVOID)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: LPCVOID
T_124: (in nNumberOfBytesToWrite : DWORD)
  Class: Eq_12
  DataType: Eq_12
  OrigDataType: DWORD
T_125: (in lpNumberOfBytesWritten : LPDWORD)
  Class: Eq_95
  DataType: Eq_95
  OrigDataType: LPDWORD
T_126: (in lpOverlapped : LPOVERLAPPED)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: LPOVERLAPPED
T_127: (in 0x00000000 : word32)
  Class: Eq_122
  DataType: word32
  OrigDataType: word32
T_128: (in WriteFile(0x00000000, 0x00000000, 0x00000003, 0x00000080, 0x00000000) : word32)
  Class: Eq_128
  DataType: word32
  OrigDataType: word32
T_129: (in 0x0040304E : ptr32)
  Class: Eq_129
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (struct (0 T_130 t0000)))
T_130: (in Mem100[0x0040304E:word32] : word32)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word32
T_131: (in 0x00000004 : word32)
  Class: Eq_131
  DataType: word32
  OrigDataType: word32
T_132: (in fp - 0x00000004 : word32)
  Class: Eq_132
  DataType: word32
  OrigDataType: word32
T_133: (in Mem104[fp - 0x00000004:word32] : word32)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word32
T_134: (in CloseHandle : ptr32)
  Class: Eq_134
  DataType: (ptr Eq_134)
  OrigDataType: (ptr (fn T_137 (T_49)))
T_135: (in signature of CloseHandle : void)
  Class: Eq_134
  DataType: (ptr Eq_134)
  OrigDataType: 
T_136: (in hObject : HANDLE)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: HANDLE
T_137: (in CloseHandle(0x00000000) : word32)
  Class: Eq_137
  DataType: word32
  OrigDataType: word32
T_138: (in 0x00403019 : word32)
  Class: Eq_25
  DataType: word32
  OrigDataType: word32
T_139: (in 0x00000008 : word32)
  Class: Eq_139
  DataType: word32
  OrigDataType: word32
T_140: (in fp - 0x00000008 : word32)
  Class: Eq_140
  DataType: word32
  OrigDataType: word32
T_141: (in Mem110[fp - 0x00000008:word32] : word32)
  Class: Eq_25
  DataType: Eq_25
  OrigDataType: word32
T_142: (in 0x00403028 : word32)
  Class: Eq_12
  DataType: word32
  OrigDataType: word32
T_143: (in 0x0000000C : word32)
  Class: Eq_143
  DataType: word32
  OrigDataType: word32
T_144: (in fp - 0x0000000C : word32)
  Class: Eq_144
  DataType: word32
  OrigDataType: word32
T_145: (in Mem112[fp - 0x0000000C:word32] : word32)
  Class: Eq_12
  DataType: Eq_12
  OrigDataType: word32
T_146: (in 0x00000000 : word32)
  Class: Eq_2
  DataType: word32
  OrigDataType: word32
T_147: (in 0x00000010 : word32)
  Class: Eq_147
  DataType: word32
  OrigDataType: word32
T_148: (in fp - 0x00000010 : word32)
  Class: Eq_148
  DataType: word32
  OrigDataType: word32
T_149: (in Mem114[fp - 0x00000010:word32] : word32)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word32
T_150: (in MessageBoxA : ptr32)
  Class: Eq_21
  DataType: (ptr Eq_21)
  OrigDataType: (ptr (fn T_152 (T_111, T_107, T_103, T_151)))
T_151: (in 0x00000000 : word32)
  Class: Eq_26
  DataType: word32
  OrigDataType: word32
T_152: (in MessageBoxA(0x00403015, 0x00000004, 0x00403052, 0x00000000) : word32)
  Class: Eq_31
  DataType: word32
  OrigDataType: word32
T_153: (in 0x00403009 : ptr32)
  Class: Eq_153
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (struct (0 T_154 t0000)))
T_154: (in Mem6[0x00403009:word32] : word32)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word32
T_155: (in 0x00000004 : word32)
  Class: Eq_155
  DataType: word32
  OrigDataType: word32
T_156: (in fp - 0x00000004 : word32)
  Class: Eq_156
  DataType: word32
  OrigDataType: word32
T_157: (in Mem26[fp - 0x00000004:word32] : word32)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word32
T_158: (in FreeLibrary : ptr32)
  Class: Eq_158
  DataType: (ptr Eq_158)
  OrigDataType: (ptr (fn T_162 (T_161)))
T_159: (in signature of FreeLibrary : void)
  Class: Eq_158
  DataType: (ptr Eq_158)
  OrigDataType: 
T_160: (in hLibModule : HMODULE)
  Class: Eq_160
  DataType: Eq_160
  OrigDataType: HMODULE
T_161: (in 0x00000000 : word32)
  Class: Eq_160
  DataType: word32
  OrigDataType: word32
T_162: (in FreeLibrary(0x00000000) : word32)
  Class: Eq_162
  DataType: word32
  OrigDataType: word32
T_163: (in 0x00000000 : word32)
  Class: Eq_2
  DataType: word32
  OrigDataType: word32
T_164: (in 0x00000004 : word32)
  Class: Eq_164
  DataType: word32
  OrigDataType: word32
T_165: (in fp - 0x00000004 : word32)
  Class: Eq_165
  DataType: word32
  OrigDataType: word32
T_166: (in Mem30[fp - 0x00000004:word32] : word32)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word32
T_167: (in ExitProcess : ptr32)
  Class: Eq_167
  DataType: (ptr Eq_167)
  OrigDataType: (ptr (fn T_170 (T_161)))
T_168: (in signature of ExitProcess : void)
  Class: Eq_167
  DataType: (ptr Eq_167)
  OrigDataType: 
T_169: (in uExitCode : UINT)
  Class: Eq_160
  DataType: Eq_160
  OrigDataType: UINT
T_170: (in ExitProcess(0x00000000) : void)
  Class: Eq_170
  DataType: void
  OrigDataType: void
T_171: (in int3 : ptr32)
  Class: Eq_171
  DataType: (ptr Eq_171)
  OrigDataType: (ptr (fn T_173 ()))
T_172: (in signature of int3 : void)
  Class: Eq_171
  DataType: (ptr Eq_171)
  OrigDataType: 
T_173: (in int3() : void)
  Class: Eq_173
  DataType: void
  OrigDataType: void
T_174:
  Class: Eq_174
  DataType: int32
  OrigDataType: 
T_175:
  Class: Eq_175
  DataType: int32
  OrigDataType: 
T_176:
  Class: Eq_176
  DataType: Eq_176
  OrigDataType: 
T_177:
  Class: Eq_177
  DataType: Eq_177
  OrigDataType: 
T_178:
  Class: Eq_178
  DataType: Eq_178
  OrigDataType: 
T_179:
  Class: Eq_179
  DataType: Eq_179
  OrigDataType: 
T_180:
  Class: Eq_180
  DataType: int32
  OrigDataType: 
*/
typedef Eq_2 Eq_1Eq_2 Eq_1struct Globals {
	Eq_2 t403009;	// 403009
	word32 dw403015;	// 403015
	Eq_2 t40304E;	// 40304E
} Eq_1;

typedef union Eq_2 {
	word32 u0;
	 DWORD u1;
	 HANDLE u2;
	 HMODULE u3;
	 HWND u4;
	 LPCVOID u5;
	 LPOVERLAPPED u6;
} Eq_2;

typedef Eq_2 (Eq_3)(Eq_5);

typedef union Eq_5 {
	word32 u0;
	 LPCSTR u1;
} Eq_5;

typedef union Eq_12 {
	word32 u0;
	 DWORD u1;
	 LONG u2;
	 LPCSTR u3;
} Eq_12;

typedef Eq_2 Eq_13Eq_2 Eq_13Eq_12 Eq_13Eq_25 Eq_13Eq_2 Eq_13struct Eq_13 {
	Eq_2 tFFFFFFEC;	// FFFFFFEC
	Eq_2 tFFFFFFF0;	// FFFFFFF0
	Eq_12 tFFFFFFF4;	// FFFFFFF4
	Eq_25 tFFFFFFF8;	// FFFFFFF8
	Eq_2 tFFFFFFFC;	// FFFFFFFC
} Eq_13;

typedef word32 (Eq_21)(Eq_2, Eq_12, Eq_25, Eq_26);

typedef union Eq_25 {
	word32 u0;
	 LPCSTR u1;
} Eq_25;

typedef union Eq_26 {
	word32 u0;
	 UINT u1;
} Eq_26;

typedef word32 (Eq_37)(Eq_2, Eq_40);

typedef union Eq_40 {
	word32 u0;
	 LPCSTR u1;
} Eq_40;

typedef Eq_2 (Eq_54)(Eq_56, Eq_57, Eq_58, Eq_59, Eq_60, Eq_61, Eq_2);

typedef union Eq_56 {
	word32 u0;
	 LPCSTR u1;
} Eq_56;

typedef union Eq_57 {
	word32 u0;
	 DWORD u1;
} Eq_57;

typedef union Eq_58 {
	word32 u0;
	 DWORD u1;
} Eq_58;

typedef union Eq_59 {
	word32 u0;
	 LPSECURITY_ATTRIBUTES u1;
} Eq_59;

typedef union Eq_60 {
	word32 u0;
	 DWORD u1;
} Eq_60;

typedef union Eq_61 {
	word32 u0;
	 DWORD u1;
} Eq_61;

typedef word32 (Eq_91)(Eq_2, Eq_12, Eq_95, Eq_2);

typedef union Eq_95 {
	word32 u0;
	 LPDWORD u1;
	 PLONG u2;
} Eq_95;

typedef word32 (Eq_120)(Eq_122, Eq_2, Eq_12, Eq_95, Eq_2);

typedef union Eq_122 {
	word32 u0;
	 HANDLE u1;
} Eq_122;

typedef word32 (Eq_134)(Eq_2);

typedef word32 (Eq_158)(Eq_160);

typedef union Eq_160 {
	word32 u0;
	 HMODULE u1;
	 UINT u2;
} Eq_160;

typedef void (Eq_167)(Eq_160);

typedef void (Eq_171)();

typedef DWORDDWORDstruct struct_61 {
	DWORD;	// 0
	DWORD;	// 4
} Eq_176;

typedef union Eq_177 {
	 <anonymous> u0;
	 PVOID u1;
} Eq_177;

typedef ULONG_PTRULONG_PTREq_177 Eq_178HANDLEstruct _OVERLAPPED {
	ULONG_PTR;	// 0
	ULONG_PTR;	// 4
	Eq_177 t0008;	// 8
	HANDLE;	// 10
} Eq_178;

typedef DWORDLPVOIDBOOLstruct _SECURITY_ATTRIBUTES {
	DWORD;	// 0
	LPVOID;	// 4
	BOOL;	// 8
} Eq_179;

