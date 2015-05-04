// subject.h
// Generated on 5/4/2015 12:10:49 AM by decompiling from_pouet.net/with_source_358/ia32_pe/subject.exe
// using Decompiler version 0.4.2.0.

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (403016 Eq_2 t403016) (40301A Eq_2 t40301A) (40301E Eq_2 t40301E) (403048 word32 dw403048) (40304C word32 dw40304C) (403050 word32 dw403050) (403054 word32 dw403054) (40308D Eq_2 t40308D))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (union "Eq_2" (word32 u0) (DWORD u1) (HANDLE u2) (HMODULE u3) (HWND u4) (LPCSTR u5) (LPCVOID u6) (LPOVERLAPPED u7))
	T_2 (in eax_4 : Eq_2)
	T_5 (in lpLibFileName : LPCSTR)
	T_6 (in 0x00403000 : word32)
	T_7 (in LoadLibraryA(0x00403000) : word32)
	T_9 (in Mem6[0x00403016:word32] : word32)
	T_10 (in 0x00000000 : word32)
	T_17 (in 0x00000000 : word32)
	T_20 (in Mem55[fp - 0x00000010:word32] : word32)
	T_23 (in hWnd : HWND)
	T_27 (in 0x00000000 : word32)
	T_32 (in 0x00403009 : word32)
	T_35 (in Mem59[fp - 0x00000004:word32] : word32)
	T_36 (in eax_60 : Eq_2)
	T_38 (in 0x00403000 : word32)
	T_39 (in LoadLibraryA(0x00403000) : word32)
	T_41 (in Mem62[0x0040301A:word32] : word32)
	T_42 (in 0x00000000 : word32)
	T_44 (in 0x00403010 : word32)
	T_47 (in Mem67[fp - 0x00000004:word32] : word32)
	T_48 (in eax_68 : Eq_2)
	T_50 (in LoadLibraryA(0x00403009) : word32)
	T_52 (in Mem70[0x0040301E:word32] : word32)
	T_53 (in 0x00000000 : word32)
	T_55 (in 0x00403022 : word32)
	T_58 (in Mem75[fp - 0x00000004:word32] : word32)
	T_62 (in hModule : HMODULE)
	T_63 (in lpProcName : LPCSTR)
	T_65 (in Mem75[0x00403016:word32] : word32)
	T_71 (in 0x0040302F : word32)
	T_74 (in Mem85[fp - 0x00000004:word32] : word32)
	T_78 (in Mem85[0x0040301A:word32] : word32)
	T_84 (in 0x00403035 : word32)
	T_87 (in Mem95[fp - 0x00000004:word32] : word32)
	T_91 (in Mem95[0x0040301E:word32] : word32)
	T_97 (in 0x0040303E : word32)
	T_100 (in Mem105[fp - 0x00000004:word32] : word32)
	T_104 (in Mem105[0x0040301A:word32] : word32)
	T_110 (in 0x00000000 : word32)
	T_113 (in Mem115[fp - 0x00000004:word32] : word32)
	T_114 (in eax_128 : Eq_2)
	T_123 (in hTemplateFile : HANDLE)
	T_130 (in CreateFileA(0x00403080, 0x40000000, 0x00000000, 0x00000000, 0x00000003, 0x00000080, 0x0040303E) : word32)
	T_132 (in Mem130[0x0040308D:word32] : word32)
	T_133 (in 0x00000001 : word32)
	T_135 (in 0x00000000 : word32)
	T_138 (in Mem136[fp - 0x00000004:word32] : word32)
	T_148 (in Mem140[0x0040308D:word32] : word32)
	T_151 (in Mem142[fp - 0x00000010:word32] : word32)
	T_154 (in hFile : HANDLE)
	T_157 (in dwMoveMethod : DWORD)
	T_160 (in 0x00000000 : word32)
	T_163 (in Mem146[fp - 0x00000004:word32] : word32)
	T_172 (in 0x00403048 : word32)
	T_175 (in Mem152[fp - 0x00000010:word32] : word32)
	T_177 (in Mem152[0x0040308D:word32] : word32)
	T_180 (in Mem154[fp - 0x00000014:word32] : word32)
	T_184 (in lpBuffer : LPCVOID)
	T_187 (in lpOverlapped : LPOVERLAPPED)
	T_190 (in 0x00000000 : word32)
	T_193 (in Mem158[fp - 0x00000004:word32] : word32)
	T_203 (in Mem162[0x0040308D:word32] : word32)
	T_206 (in Mem164[fp - 0x00000010:word32] : word32)
	T_209 (in 0x00000000 : word32)
	T_212 (in Mem168[fp - 0x00000004:word32] : word32)
	T_221 (in 0x0040304C : word32)
	T_224 (in Mem174[fp - 0x00000010:word32] : word32)
	T_226 (in Mem174[0x0040308D:word32] : word32)
	T_229 (in Mem176[fp - 0x00000014:word32] : word32)
	T_232 (in 0x00000000 : word32)
	T_235 (in Mem180[fp - 0x00000004:word32] : word32)
	T_245 (in Mem184[0x0040308D:word32] : word32)
	T_248 (in Mem186[fp - 0x00000010:word32] : word32)
	T_251 (in 0x00000000 : word32)
	T_254 (in Mem190[fp - 0x00000004:word32] : word32)
	T_263 (in 0x00403050 : word32)
	T_266 (in Mem196[fp - 0x00000010:word32] : word32)
	T_268 (in Mem196[0x0040308D:word32] : word32)
	T_271 (in Mem198[fp - 0x00000014:word32] : word32)
	T_274 (in 0x00000000 : word32)
	T_277 (in Mem202[fp - 0x00000004:word32] : word32)
	T_287 (in Mem206[0x0040308D:word32] : word32)
	T_290 (in Mem208[fp - 0x00000010:word32] : word32)
	T_293 (in 0x00000000 : word32)
	T_296 (in Mem212[fp - 0x00000004:word32] : word32)
	T_305 (in 0x00403054 : word32)
	T_308 (in Mem218[fp - 0x00000010:word32] : word32)
	T_310 (in Mem218[0x0040308D:word32] : word32)
	T_313 (in Mem220[fp - 0x00000014:word32] : word32)
	T_317 (in Mem220[0x0040308D:word32] : word32)
	T_320 (in Mem224[fp - 0x00000004:word32] : word32)
	T_323 (in hObject : HANDLE)
	T_333 (in 0x00000000 : word32)
	T_336 (in Mem234[fp - 0x00000010:word32] : word32)
	T_341 (in Mem6[0x00403016:word32] : word32)
	T_344 (in Mem26[fp - 0x00000004:word32] : word32)
	T_351 (in Mem26[0x0040301A:word32] : word32)
	T_354 (in Mem30[fp - 0x00000004:word32] : word32)
	T_358 (in Mem30[0x0040301E:word32] : word32)
	T_361 (in Mem34[fp - 0x00000004:word32] : word32)
	T_364 (in 0x00000000 : word32)
	T_367 (in Mem38[fp - 0x00000004:word32] : word32)
Eq_3: (fn Eq_2 (Eq_2))
	T_3 (in LoadLibraryA : ptr32)
	T_4 (in signature of LoadLibraryA : void)
	T_37 (in LoadLibraryA : ptr32)
	T_49 (in LoadLibraryA : ptr32)
Eq_12: (union "Eq_12" (word32 u0) (DWORD u1) (LONG u2) (LPCSTR u3))
	T_12 (in 0x00403073 : word32)
	T_16 (in Mem53[fp - 0x0000000C:word32] : word32)
	T_24 (in lpText : LPCSTR)
	T_28 (in 0x00000003 : word32)
	T_143 (in 0x000000BA : word32)
	T_146 (in Mem140[fp - 0x0000000C:word32] : word32)
	T_155 (in lDistanceToMove : LONG)
	T_168 (in 0x00000004 : word32)
	T_171 (in Mem150[fp - 0x0000000C:word32] : word32)
	T_185 (in nNumberOfBytesToWrite : DWORD)
	T_198 (in 0x000000C4 : word32)
	T_201 (in Mem162[fp - 0x0000000C:word32] : word32)
	T_217 (in 0x00000004 : word32)
	T_220 (in Mem172[fp - 0x0000000C:word32] : word32)
	T_240 (in 0x000000DD : word32)
	T_243 (in Mem184[fp - 0x0000000C:word32] : word32)
	T_259 (in 0x00000004 : word32)
	T_262 (in Mem194[fp - 0x0000000C:word32] : word32)
	T_282 (in 0x000000F7 : word32)
	T_285 (in Mem206[fp - 0x0000000C:word32] : word32)
	T_301 (in 0x00000004 : word32)
	T_304 (in Mem216[fp - 0x0000000C:word32] : word32)
	T_329 (in 0x00403067 : word32)
	T_332 (in Mem232[fp - 0x0000000C:word32] : word32)
Eq_13: (struct "Eq_13" (FFFFFFEC Eq_2 tFFFFFFEC) (FFFFFFF0 Eq_2 tFFFFFFF0) (FFFFFFF4 Eq_12 tFFFFFFF4) (FFFFFFF8 Eq_25 tFFFFFFF8) (FFFFFFFC Eq_2 tFFFFFFFC))
	T_13 (in fp : ptr32)
Eq_21: (fn word32 (Eq_2, Eq_12, Eq_25, Eq_26))
	T_21 (in MessageBoxA : ptr32)
	T_22 (in signature of MessageBoxA : void)
	T_337 (in MessageBoxA : ptr32)
Eq_25: (union "Eq_25" (word32 u0) (LPCSTR u1))
	T_25 (in lpCaption : LPCSTR)
	T_29 (in 0x00403058 : word32)
	T_139 (in 0x00000000 : word32)
	T_142 (in Mem138[fp - 0x00000008:word32] : word32)
	T_164 (in 0x00403091 : word32)
	T_167 (in Mem148[fp - 0x00000008:word32] : word32)
	T_194 (in 0x00000000 : word32)
	T_197 (in Mem160[fp - 0x00000008:word32] : word32)
	T_213 (in 0x00403091 : word32)
	T_216 (in Mem170[fp - 0x00000008:word32] : word32)
	T_236 (in 0x00000000 : word32)
	T_239 (in Mem182[fp - 0x00000008:word32] : word32)
	T_255 (in 0x00403091 : word32)
	T_258 (in Mem192[fp - 0x00000008:word32] : word32)
	T_278 (in 0x00000000 : word32)
	T_281 (in Mem204[fp - 0x00000008:word32] : word32)
	T_297 (in 0x00403091 : word32)
	T_300 (in Mem214[fp - 0x00000008:word32] : word32)
	T_325 (in 0x00403058 : word32)
	T_328 (in Mem230[fp - 0x00000008:word32] : word32)
Eq_26: (union "Eq_26" (word32 u0) (UINT u1))
	T_26 (in uType : UINT)
	T_30 (in 0x00000000 : word32)
	T_338 (in 0x00000000 : word32)
Eq_60: (fn word32 (Eq_2, Eq_2))
	T_60 (in GetProcAddress : ptr32)
	T_61 (in signature of GetProcAddress : void)
	T_76 (in GetProcAddress : ptr32)
	T_89 (in GetProcAddress : ptr32)
	T_102 (in GetProcAddress : ptr32)
Eq_115: (fn Eq_2 (Eq_117, Eq_118, Eq_119, Eq_120, Eq_121, Eq_122, Eq_2))
	T_115 (in CreateFileA : ptr32)
	T_116 (in signature of CreateFileA : void)
Eq_117: (union "Eq_117" (word32 u0) (LPCSTR u1))
	T_117 (in lpFileName : LPCSTR)
	T_124 (in 0x00403080 : word32)
Eq_118: (union "Eq_118" (word32 u0) (DWORD u1))
	T_118 (in dwDesiredAccess : DWORD)
	T_125 (in 0x40000000 : word32)
Eq_119: (union "Eq_119" (word32 u0) (DWORD u1))
	T_119 (in dwShareMode : DWORD)
	T_126 (in 0x00000000 : word32)
Eq_120: (union "Eq_120" (word32 u0) (LPSECURITY_ATTRIBUTES u1))
	T_120 (in lpSecurityAttributes : LPSECURITY_ATTRIBUTES)
	T_127 (in 0x00000000 : word32)
Eq_121: (union "Eq_121" (word32 u0) (DWORD u1))
	T_121 (in dwCreationDisposition : DWORD)
	T_128 (in 0x00000003 : word32)
Eq_122: (union "Eq_122" (word32 u0) (DWORD u1))
	T_122 (in dwFlagsAndAttributes : DWORD)
	T_129 (in 0x00000080 : word32)
Eq_152: (fn word32 (Eq_2, Eq_12, Eq_156, Eq_2))
	T_152 (in SetFilePointer : ptr32)
	T_153 (in signature of SetFilePointer : void)
	T_207 (in SetFilePointer : ptr32)
	T_249 (in SetFilePointer : ptr32)
	T_291 (in SetFilePointer : ptr32)
Eq_156: (union "Eq_156" (word32 u0) (LPDWORD u1) (PLONG u2))
	T_156 (in lpDistanceToMoveHigh : PLONG)
	T_158 (in 0x00000080 : word32)
	T_186 (in lpNumberOfBytesWritten : LPDWORD)
Eq_181: (fn word32 (Eq_183, Eq_2, Eq_12, Eq_156, Eq_2))
	T_181 (in WriteFile : ptr32)
	T_182 (in signature of WriteFile : void)
	T_230 (in WriteFile : ptr32)
	T_272 (in WriteFile : ptr32)
	T_314 (in WriteFile : ptr32)
Eq_183: (union "Eq_183" (word32 u0) (HANDLE u1))
	T_183 (in hFile : HANDLE)
	T_188 (in 0x00000000 : word32)
Eq_321: (fn word32 (Eq_2))
	T_321 (in CloseHandle : ptr32)
	T_322 (in signature of CloseHandle : void)
Eq_345: (fn word32 (Eq_347))
	T_345 (in FreeLibrary : ptr32)
	T_346 (in signature of FreeLibrary : void)
	T_355 (in FreeLibrary : ptr32)
	T_362 (in FreeLibrary : ptr32)
Eq_347: (union "Eq_347" (word32 u0) (HMODULE u1) (UINT u2))
	T_347 (in hLibModule : HMODULE)
	T_348 (in 0x00000000 : word32)
	T_370 (in uExitCode : UINT)
Eq_368: (fn void (Eq_347))
	T_368 (in ExitProcess : ptr32)
	T_369 (in signature of ExitProcess : void)
Eq_374: (struct "struct_61" (0 DWORD Offset) (4 DWORD OffsetHigh))
	T_374
Eq_375: (union "Eq_375" (Eq_374 u0) (PVOID u1))
	T_375
Eq_376: (struct "_OVERLAPPED" (0 ULONG_PTR Internal) (4 ULONG_PTR InternalHigh) (8 Eq_375 t0008) (10 HANDLE hEvent))
	T_376
Eq_377: (struct "_SECURITY_ATTRIBUTES" (0 DWORD nLength) (4 LPVOID lpSecurityDescriptor) (8 BOOL bInheritHandle))
	T_377
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
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: LPCSTR
T_6: (in 0x00403000 : word32)
  Class: Eq_2
  DataType: word32
  OrigDataType: word32
T_7: (in LoadLibraryA(0x00403000) : word32)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word32
T_8: (in 0x00403016 : word32)
  Class: Eq_8
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (struct (0 T_9 t0000)))
T_9: (in Mem6[0x00403016:word32] : word32)
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
T_12: (in 0x00403073 : word32)
  Class: Eq_12
  DataType: word32
  OrigDataType: word32
T_13: (in fp : ptr32)
  Class: Eq_13
  DataType: (ptr Eq_13)
  OrigDataType: (ptr (struct (FFFFFFEC T_17 tFFFFFFEC) (FFFFFFF0 T_5 tFFFFFFF0) (FFFFFFF4 T_12 tFFFFFFF4) (FFFFFFF8 T_25 tFFFFFFF8) (FFFFFFFC T_2 tFFFFFFFC)))
T_14: (in 0x0000000C : word32)
  Class: Eq_14
  DataType: word32
  OrigDataType: word32
T_15: (in fp - 0x0000000C : word32)
  Class: Eq_15
  DataType: word32
  OrigDataType: word32
T_16: (in Mem53[fp - 0x0000000C:word32] : word32)
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
T_20: (in Mem55[fp - 0x00000010:word32] : word32)
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
T_29: (in 0x00403058 : word32)
  Class: Eq_25
  DataType: word32
  OrigDataType: word32
T_30: (in 0x00000000 : word32)
  Class: Eq_26
  DataType: word32
  OrigDataType: word32
T_31: (in MessageBoxA(0x00000000, 0x00000003, 0x00403058, 0x00000000) : word32)
  Class: Eq_31
  DataType: word32
  OrigDataType: word32
T_32: (in 0x00403009 : word32)
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
T_35: (in Mem59[fp - 0x00000004:word32] : word32)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word32
T_36: (in eax_60 : Eq_2)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word32
T_37: (in LoadLibraryA : ptr32)
  Class: Eq_3
  DataType: (ptr Eq_3)
  OrigDataType: (ptr (fn T_39 (T_38)))
T_38: (in 0x00403000 : word32)
  Class: Eq_2
  DataType: word32
  OrigDataType: word32
T_39: (in LoadLibraryA(0x00403000) : word32)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word32
T_40: (in 0x0040301A : word32)
  Class: Eq_40
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (struct (0 T_41 t0000)))
T_41: (in Mem62[0x0040301A:word32] : word32)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word32
T_42: (in 0x00000000 : word32)
  Class: Eq_2
  DataType: word32
  OrigDataType: word32
T_43: (in eax_60 == 0x00000000 : bool)
  Class: Eq_43
  DataType: bool
  OrigDataType: bool
T_44: (in 0x00403010 : word32)
  Class: Eq_2
  DataType: word32
  OrigDataType: word32
T_45: (in 0x00000004 : word32)
  Class: Eq_45
  DataType: word32
  OrigDataType: word32
T_46: (in fp - 0x00000004 : word32)
  Class: Eq_46
  DataType: word32
  OrigDataType: word32
T_47: (in Mem67[fp - 0x00000004:word32] : word32)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word32
T_48: (in eax_68 : Eq_2)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word32
T_49: (in LoadLibraryA : ptr32)
  Class: Eq_3
  DataType: (ptr Eq_3)
  OrigDataType: (ptr (fn T_50 (T_32)))
T_50: (in LoadLibraryA(0x00403009) : word32)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word32
T_51: (in 0x0040301E : word32)
  Class: Eq_51
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (struct (0 T_52 t0000)))
T_52: (in Mem70[0x0040301E:word32] : word32)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word32
T_53: (in 0x00000000 : word32)
  Class: Eq_2
  DataType: word32
  OrigDataType: word32
T_54: (in eax_68 == 0x00000000 : bool)
  Class: Eq_54
  DataType: bool
  OrigDataType: bool
T_55: (in 0x00403022 : word32)
  Class: Eq_2
  DataType: word32
  OrigDataType: word32
T_56: (in 0x00000004 : word32)
  Class: Eq_56
  DataType: word32
  OrigDataType: word32
T_57: (in fp - 0x00000004 : word32)
  Class: Eq_57
  DataType: word32
  OrigDataType: word32
T_58: (in Mem75[fp - 0x00000004:word32] : word32)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word32
T_59: (in eax_78 : word32)
  Class: Eq_59
  DataType: word32
  OrigDataType: word32
T_60: (in GetProcAddress : ptr32)
  Class: Eq_60
  DataType: (ptr Eq_60)
  OrigDataType: (ptr (fn T_66 (T_65, T_44)))
T_61: (in signature of GetProcAddress : void)
  Class: Eq_60
  DataType: (ptr Eq_60)
  OrigDataType: 
T_62: (in hModule : HMODULE)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: HMODULE
T_63: (in lpProcName : LPCSTR)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: LPCSTR
T_64: (in 0x00403016 : ptr32)
  Class: Eq_64
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (struct (0 T_65 t0000)))
T_65: (in Mem75[0x00403016:word32] : word32)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word32
T_66: (in GetProcAddress(globals->t403016, 0x00403010) : word32)
  Class: Eq_59
  DataType: word32
  OrigDataType: word32
T_67: (in 0x00403048 : word32)
  Class: Eq_67
  DataType: (ptr word32)
  OrigDataType: (ptr (struct (0 T_68 t0000)))
T_68: (in Mem80[0x00403048:word32] : word32)
  Class: Eq_59
  DataType: word32
  OrigDataType: word32
T_69: (in 0x00000000 : word32)
  Class: Eq_59
  DataType: word32
  OrigDataType: word32
T_70: (in eax_78 == 0x00000000 : bool)
  Class: Eq_70
  DataType: bool
  OrigDataType: bool
T_71: (in 0x0040302F : word32)
  Class: Eq_2
  DataType: word32
  OrigDataType: word32
T_72: (in 0x00000004 : word32)
  Class: Eq_72
  DataType: word32
  OrigDataType: word32
T_73: (in fp - 0x00000004 : word32)
  Class: Eq_73
  DataType: word32
  OrigDataType: word32
T_74: (in Mem85[fp - 0x00000004:word32] : word32)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word32
T_75: (in eax_88 : word32)
  Class: Eq_59
  DataType: word32
  OrigDataType: word32
T_76: (in GetProcAddress : ptr32)
  Class: Eq_60
  DataType: (ptr Eq_60)
  OrigDataType: (ptr (fn T_79 (T_78, T_55)))
T_77: (in 0x0040301A : ptr32)
  Class: Eq_77
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (struct (0 T_78 t0000)))
T_78: (in Mem85[0x0040301A:word32] : word32)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word32
T_79: (in GetProcAddress(globals->t40301A, 0x00403022) : word32)
  Class: Eq_59
  DataType: word32
  OrigDataType: word32
T_80: (in 0x0040304C : word32)
  Class: Eq_80
  DataType: (ptr word32)
  OrigDataType: (ptr (struct (0 T_81 t0000)))
T_81: (in Mem90[0x0040304C:word32] : word32)
  Class: Eq_59
  DataType: word32
  OrigDataType: word32
T_82: (in 0x00000000 : word32)
  Class: Eq_59
  DataType: word32
  OrigDataType: word32
T_83: (in eax_88 == 0x00000000 : bool)
  Class: Eq_83
  DataType: bool
  OrigDataType: bool
T_84: (in 0x00403035 : word32)
  Class: Eq_2
  DataType: word32
  OrigDataType: word32
T_85: (in 0x00000004 : word32)
  Class: Eq_85
  DataType: word32
  OrigDataType: word32
T_86: (in fp - 0x00000004 : word32)
  Class: Eq_86
  DataType: word32
  OrigDataType: word32
T_87: (in Mem95[fp - 0x00000004:word32] : word32)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word32
T_88: (in eax_98 : word32)
  Class: Eq_59
  DataType: word32
  OrigDataType: word32
T_89: (in GetProcAddress : ptr32)
  Class: Eq_60
  DataType: (ptr Eq_60)
  OrigDataType: (ptr (fn T_92 (T_91, T_71)))
T_90: (in 0x0040301E : ptr32)
  Class: Eq_90
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (struct (0 T_91 t0000)))
T_91: (in Mem95[0x0040301E:word32] : word32)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word32
T_92: (in GetProcAddress(globals->t40301E, 0x0040302F) : word32)
  Class: Eq_59
  DataType: word32
  OrigDataType: word32
T_93: (in 0x00403050 : word32)
  Class: Eq_93
  DataType: (ptr word32)
  OrigDataType: (ptr (struct (0 T_94 t0000)))
T_94: (in Mem100[0x00403050:word32] : word32)
  Class: Eq_59
  DataType: word32
  OrigDataType: word32
T_95: (in 0x00000000 : word32)
  Class: Eq_59
  DataType: word32
  OrigDataType: word32
T_96: (in eax_98 == 0x00000000 : bool)
  Class: Eq_96
  DataType: bool
  OrigDataType: bool
T_97: (in 0x0040303E : word32)
  Class: Eq_2
  DataType: word32
  OrigDataType: word32
T_98: (in 0x00000004 : word32)
  Class: Eq_98
  DataType: word32
  OrigDataType: word32
T_99: (in fp - 0x00000004 : word32)
  Class: Eq_99
  DataType: word32
  OrigDataType: word32
T_100: (in Mem105[fp - 0x00000004:word32] : word32)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word32
T_101: (in eax_108 : word32)
  Class: Eq_59
  DataType: word32
  OrigDataType: word32
T_102: (in GetProcAddress : ptr32)
  Class: Eq_60
  DataType: (ptr Eq_60)
  OrigDataType: (ptr (fn T_105 (T_104, T_84)))
T_103: (in 0x0040301A : ptr32)
  Class: Eq_103
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (struct (0 T_104 t0000)))
T_104: (in Mem105[0x0040301A:word32] : word32)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word32
T_105: (in GetProcAddress(globals->t40301A, 0x00403035) : word32)
  Class: Eq_59
  DataType: word32
  OrigDataType: word32
T_106: (in 0x00403054 : word32)
  Class: Eq_106
  DataType: (ptr word32)
  OrigDataType: (ptr (struct (0 T_107 t0000)))
T_107: (in Mem110[0x00403054:word32] : word32)
  Class: Eq_59
  DataType: word32
  OrigDataType: word32
T_108: (in 0x00000000 : word32)
  Class: Eq_59
  DataType: word32
  OrigDataType: word32
T_109: (in eax_108 == 0x00000000 : bool)
  Class: Eq_109
  DataType: bool
  OrigDataType: bool
T_110: (in 0x00000000 : word32)
  Class: Eq_2
  DataType: word32
  OrigDataType: word32
T_111: (in 0x00000004 : word32)
  Class: Eq_111
  DataType: word32
  OrigDataType: word32
T_112: (in fp - 0x00000004 : word32)
  Class: Eq_112
  DataType: word32
  OrigDataType: word32
T_113: (in Mem115[fp - 0x00000004:word32] : word32)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word32
T_114: (in eax_128 : Eq_2)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word32
T_115: (in CreateFileA : ptr32)
  Class: Eq_115
  DataType: (ptr Eq_115)
  OrigDataType: (ptr (fn T_130 (T_124, T_125, T_126, T_127, T_128, T_129, T_97)))
T_116: (in signature of CreateFileA : void)
  Class: Eq_115
  DataType: (ptr Eq_115)
  OrigDataType: 
T_117: (in lpFileName : LPCSTR)
  Class: Eq_117
  DataType: Eq_117
  OrigDataType: LPCSTR
T_118: (in dwDesiredAccess : DWORD)
  Class: Eq_118
  DataType: Eq_118
  OrigDataType: DWORD
T_119: (in dwShareMode : DWORD)
  Class: Eq_119
  DataType: Eq_119
  OrigDataType: DWORD
T_120: (in lpSecurityAttributes : LPSECURITY_ATTRIBUTES)
  Class: Eq_120
  DataType: Eq_120
  OrigDataType: LPSECURITY_ATTRIBUTES
T_121: (in dwCreationDisposition : DWORD)
  Class: Eq_121
  DataType: Eq_121
  OrigDataType: DWORD
T_122: (in dwFlagsAndAttributes : DWORD)
  Class: Eq_122
  DataType: Eq_122
  OrigDataType: DWORD
T_123: (in hTemplateFile : HANDLE)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: HANDLE
T_124: (in 0x00403080 : word32)
  Class: Eq_117
  DataType: word32
  OrigDataType: word32
T_125: (in 0x40000000 : word32)
  Class: Eq_118
  DataType: word32
  OrigDataType: word32
T_126: (in 0x00000000 : word32)
  Class: Eq_119
  DataType: word32
  OrigDataType: word32
T_127: (in 0x00000000 : word32)
  Class: Eq_120
  DataType: word32
  OrigDataType: word32
T_128: (in 0x00000003 : word32)
  Class: Eq_121
  DataType: word32
  OrigDataType: word32
T_129: (in 0x00000080 : word32)
  Class: Eq_122
  DataType: word32
  OrigDataType: word32
T_130: (in CreateFileA(0x00403080, 0x40000000, 0x00000000, 0x00000000, 0x00000003, 0x00000080, 0x0040303E) : word32)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word32
T_131: (in 0x0040308D : word32)
  Class: Eq_131
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (struct (0 T_132 t0000)))
T_132: (in Mem130[0x0040308D:word32] : word32)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word32
T_133: (in 0x00000001 : word32)
  Class: Eq_2
  DataType: word32
  OrigDataType: word32
T_134: (in eax_128 == 0x00000001 : bool)
  Class: Eq_134
  DataType: bool
  OrigDataType: bool
T_135: (in 0x00000000 : word32)
  Class: Eq_2
  DataType: word32
  OrigDataType: word32
T_136: (in 0x00000004 : word32)
  Class: Eq_136
  DataType: word32
  OrigDataType: word32
T_137: (in fp - 0x00000004 : word32)
  Class: Eq_137
  DataType: word32
  OrigDataType: word32
T_138: (in Mem136[fp - 0x00000004:word32] : word32)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word32
T_139: (in 0x00000000 : word32)
  Class: Eq_25
  DataType: word32
  OrigDataType: word32
T_140: (in 0x00000008 : word32)
  Class: Eq_140
  DataType: word32
  OrigDataType: word32
T_141: (in fp - 0x00000008 : word32)
  Class: Eq_141
  DataType: word32
  OrigDataType: word32
T_142: (in Mem138[fp - 0x00000008:word32] : word32)
  Class: Eq_25
  DataType: Eq_25
  OrigDataType: word32
T_143: (in 0x000000BA : word32)
  Class: Eq_12
  DataType: word32
  OrigDataType: word32
T_144: (in 0x0000000C : word32)
  Class: Eq_144
  DataType: word32
  OrigDataType: word32
T_145: (in fp - 0x0000000C : word32)
  Class: Eq_145
  DataType: word32
  OrigDataType: word32
T_146: (in Mem140[fp - 0x0000000C:word32] : word32)
  Class: Eq_12
  DataType: Eq_12
  OrigDataType: word32
T_147: (in 0x0040308D : ptr32)
  Class: Eq_147
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (struct (0 T_148 t0000)))
T_148: (in Mem140[0x0040308D:word32] : word32)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word32
T_149: (in 0x00000010 : word32)
  Class: Eq_149
  DataType: word32
  OrigDataType: word32
T_150: (in fp - 0x00000010 : word32)
  Class: Eq_150
  DataType: word32
  OrigDataType: word32
T_151: (in Mem142[fp - 0x00000010:word32] : word32)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word32
T_152: (in SetFilePointer : ptr32)
  Class: Eq_152
  DataType: (ptr Eq_152)
  OrigDataType: (ptr (fn T_159 (T_27, T_28, T_158, T_110)))
T_153: (in signature of SetFilePointer : void)
  Class: Eq_152
  DataType: (ptr Eq_152)
  OrigDataType: 
T_154: (in hFile : HANDLE)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: HANDLE
T_155: (in lDistanceToMove : LONG)
  Class: Eq_12
  DataType: Eq_12
  OrigDataType: LONG
T_156: (in lpDistanceToMoveHigh : PLONG)
  Class: Eq_156
  DataType: Eq_156
  OrigDataType: PLONG
T_157: (in dwMoveMethod : DWORD)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: DWORD
T_158: (in 0x00000080 : word32)
  Class: Eq_156
  DataType: word32
  OrigDataType: word32
T_159: (in SetFilePointer(0x00000000, 0x00000003, 0x00000080, 0x00000000) : word32)
  Class: Eq_159
  DataType: word32
  OrigDataType: word32
T_160: (in 0x00000000 : word32)
  Class: Eq_2
  DataType: word32
  OrigDataType: word32
T_161: (in 0x00000004 : word32)
  Class: Eq_161
  DataType: word32
  OrigDataType: word32
T_162: (in fp - 0x00000004 : word32)
  Class: Eq_162
  DataType: word32
  OrigDataType: word32
T_163: (in Mem146[fp - 0x00000004:word32] : word32)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word32
T_164: (in 0x00403091 : word32)
  Class: Eq_25
  DataType: word32
  OrigDataType: word32
T_165: (in 0x00000008 : word32)
  Class: Eq_165
  DataType: word32
  OrigDataType: word32
T_166: (in fp - 0x00000008 : word32)
  Class: Eq_166
  DataType: word32
  OrigDataType: word32
T_167: (in Mem148[fp - 0x00000008:word32] : word32)
  Class: Eq_25
  DataType: Eq_25
  OrigDataType: word32
T_168: (in 0x00000004 : word32)
  Class: Eq_12
  DataType: word32
  OrigDataType: word32
T_169: (in 0x0000000C : word32)
  Class: Eq_169
  DataType: word32
  OrigDataType: word32
T_170: (in fp - 0x0000000C : word32)
  Class: Eq_170
  DataType: word32
  OrigDataType: word32
T_171: (in Mem150[fp - 0x0000000C:word32] : word32)
  Class: Eq_12
  DataType: Eq_12
  OrigDataType: word32
T_172: (in 0x00403048 : word32)
  Class: Eq_2
  DataType: word32
  OrigDataType: word32
T_173: (in 0x00000010 : word32)
  Class: Eq_173
  DataType: word32
  OrigDataType: word32
T_174: (in fp - 0x00000010 : word32)
  Class: Eq_174
  DataType: word32
  OrigDataType: word32
T_175: (in Mem152[fp - 0x00000010:word32] : word32)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word32
T_176: (in 0x0040308D : ptr32)
  Class: Eq_176
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (struct (0 T_177 t0000)))
T_177: (in Mem152[0x0040308D:word32] : word32)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word32
T_178: (in 0x00000014 : word32)
  Class: Eq_178
  DataType: word32
  OrigDataType: word32
T_179: (in fp - 0x00000014 : word32)
  Class: Eq_179
  DataType: word32
  OrigDataType: word32
T_180: (in Mem154[fp - 0x00000014:word32] : word32)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word32
T_181: (in WriteFile : ptr32)
  Class: Eq_181
  DataType: (ptr Eq_181)
  OrigDataType: (ptr (fn T_189 (T_188, T_27, T_28, T_158, T_110)))
T_182: (in signature of WriteFile : void)
  Class: Eq_181
  DataType: (ptr Eq_181)
  OrigDataType: 
T_183: (in hFile : HANDLE)
  Class: Eq_183
  DataType: Eq_183
  OrigDataType: HANDLE
T_184: (in lpBuffer : LPCVOID)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: LPCVOID
T_185: (in nNumberOfBytesToWrite : DWORD)
  Class: Eq_12
  DataType: Eq_12
  OrigDataType: DWORD
T_186: (in lpNumberOfBytesWritten : LPDWORD)
  Class: Eq_156
  DataType: Eq_156
  OrigDataType: LPDWORD
T_187: (in lpOverlapped : LPOVERLAPPED)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: LPOVERLAPPED
T_188: (in 0x00000000 : word32)
  Class: Eq_183
  DataType: word32
  OrigDataType: word32
T_189: (in WriteFile(0x00000000, 0x00000000, 0x00000003, 0x00000080, 0x00000000) : word32)
  Class: Eq_189
  DataType: word32
  OrigDataType: word32
T_190: (in 0x00000000 : word32)
  Class: Eq_2
  DataType: word32
  OrigDataType: word32
T_191: (in 0x00000004 : word32)
  Class: Eq_191
  DataType: word32
  OrigDataType: word32
T_192: (in fp - 0x00000004 : word32)
  Class: Eq_192
  DataType: word32
  OrigDataType: word32
T_193: (in Mem158[fp - 0x00000004:word32] : word32)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word32
T_194: (in 0x00000000 : word32)
  Class: Eq_25
  DataType: word32
  OrigDataType: word32
T_195: (in 0x00000008 : word32)
  Class: Eq_195
  DataType: word32
  OrigDataType: word32
T_196: (in fp - 0x00000008 : word32)
  Class: Eq_196
  DataType: word32
  OrigDataType: word32
T_197: (in Mem160[fp - 0x00000008:word32] : word32)
  Class: Eq_25
  DataType: Eq_25
  OrigDataType: word32
T_198: (in 0x000000C4 : word32)
  Class: Eq_12
  DataType: word32
  OrigDataType: word32
T_199: (in 0x0000000C : word32)
  Class: Eq_199
  DataType: word32
  OrigDataType: word32
T_200: (in fp - 0x0000000C : word32)
  Class: Eq_200
  DataType: word32
  OrigDataType: word32
T_201: (in Mem162[fp - 0x0000000C:word32] : word32)
  Class: Eq_12
  DataType: Eq_12
  OrigDataType: word32
T_202: (in 0x0040308D : ptr32)
  Class: Eq_202
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (struct (0 T_203 t0000)))
T_203: (in Mem162[0x0040308D:word32] : word32)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word32
T_204: (in 0x00000010 : word32)
  Class: Eq_204
  DataType: word32
  OrigDataType: word32
T_205: (in fp - 0x00000010 : word32)
  Class: Eq_205
  DataType: word32
  OrigDataType: word32
T_206: (in Mem164[fp - 0x00000010:word32] : word32)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word32
T_207: (in SetFilePointer : ptr32)
  Class: Eq_152
  DataType: (ptr Eq_152)
  OrigDataType: (ptr (fn T_208 (T_27, T_28, T_158, T_110)))
T_208: (in SetFilePointer(0x00000000, 0x00000003, 0x00000080, 0x00000000) : word32)
  Class: Eq_159
  DataType: word32
  OrigDataType: word32
T_209: (in 0x00000000 : word32)
  Class: Eq_2
  DataType: word32
  OrigDataType: word32
T_210: (in 0x00000004 : word32)
  Class: Eq_210
  DataType: word32
  OrigDataType: word32
T_211: (in fp - 0x00000004 : word32)
  Class: Eq_211
  DataType: word32
  OrigDataType: word32
T_212: (in Mem168[fp - 0x00000004:word32] : word32)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word32
T_213: (in 0x00403091 : word32)
  Class: Eq_25
  DataType: word32
  OrigDataType: word32
T_214: (in 0x00000008 : word32)
  Class: Eq_214
  DataType: word32
  OrigDataType: word32
T_215: (in fp - 0x00000008 : word32)
  Class: Eq_215
  DataType: word32
  OrigDataType: word32
T_216: (in Mem170[fp - 0x00000008:word32] : word32)
  Class: Eq_25
  DataType: Eq_25
  OrigDataType: word32
T_217: (in 0x00000004 : word32)
  Class: Eq_12
  DataType: word32
  OrigDataType: word32
T_218: (in 0x0000000C : word32)
  Class: Eq_218
  DataType: word32
  OrigDataType: word32
T_219: (in fp - 0x0000000C : word32)
  Class: Eq_219
  DataType: word32
  OrigDataType: word32
T_220: (in Mem172[fp - 0x0000000C:word32] : word32)
  Class: Eq_12
  DataType: Eq_12
  OrigDataType: word32
T_221: (in 0x0040304C : word32)
  Class: Eq_2
  DataType: word32
  OrigDataType: word32
T_222: (in 0x00000010 : word32)
  Class: Eq_222
  DataType: word32
  OrigDataType: word32
T_223: (in fp - 0x00000010 : word32)
  Class: Eq_223
  DataType: word32
  OrigDataType: word32
T_224: (in Mem174[fp - 0x00000010:word32] : word32)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word32
T_225: (in 0x0040308D : ptr32)
  Class: Eq_225
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (struct (0 T_226 t0000)))
T_226: (in Mem174[0x0040308D:word32] : word32)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word32
T_227: (in 0x00000014 : word32)
  Class: Eq_227
  DataType: word32
  OrigDataType: word32
T_228: (in fp - 0x00000014 : word32)
  Class: Eq_228
  DataType: word32
  OrigDataType: word32
T_229: (in Mem176[fp - 0x00000014:word32] : word32)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word32
T_230: (in WriteFile : ptr32)
  Class: Eq_181
  DataType: (ptr Eq_181)
  OrigDataType: (ptr (fn T_231 (T_188, T_27, T_28, T_158, T_110)))
T_231: (in WriteFile(0x00000000, 0x00000000, 0x00000003, 0x00000080, 0x00000000) : word32)
  Class: Eq_189
  DataType: word32
  OrigDataType: word32
T_232: (in 0x00000000 : word32)
  Class: Eq_2
  DataType: word32
  OrigDataType: word32
T_233: (in 0x00000004 : word32)
  Class: Eq_233
  DataType: word32
  OrigDataType: word32
T_234: (in fp - 0x00000004 : word32)
  Class: Eq_234
  DataType: word32
  OrigDataType: word32
T_235: (in Mem180[fp - 0x00000004:word32] : word32)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word32
T_236: (in 0x00000000 : word32)
  Class: Eq_25
  DataType: word32
  OrigDataType: word32
T_237: (in 0x00000008 : word32)
  Class: Eq_237
  DataType: word32
  OrigDataType: word32
T_238: (in fp - 0x00000008 : word32)
  Class: Eq_238
  DataType: word32
  OrigDataType: word32
T_239: (in Mem182[fp - 0x00000008:word32] : word32)
  Class: Eq_25
  DataType: Eq_25
  OrigDataType: word32
T_240: (in 0x000000DD : word32)
  Class: Eq_12
  DataType: word32
  OrigDataType: word32
T_241: (in 0x0000000C : word32)
  Class: Eq_241
  DataType: word32
  OrigDataType: word32
T_242: (in fp - 0x0000000C : word32)
  Class: Eq_242
  DataType: word32
  OrigDataType: word32
T_243: (in Mem184[fp - 0x0000000C:word32] : word32)
  Class: Eq_12
  DataType: Eq_12
  OrigDataType: word32
T_244: (in 0x0040308D : ptr32)
  Class: Eq_244
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (struct (0 T_245 t0000)))
T_245: (in Mem184[0x0040308D:word32] : word32)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word32
T_246: (in 0x00000010 : word32)
  Class: Eq_246
  DataType: word32
  OrigDataType: word32
T_247: (in fp - 0x00000010 : word32)
  Class: Eq_247
  DataType: word32
  OrigDataType: word32
T_248: (in Mem186[fp - 0x00000010:word32] : word32)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word32
T_249: (in SetFilePointer : ptr32)
  Class: Eq_152
  DataType: (ptr Eq_152)
  OrigDataType: (ptr (fn T_250 (T_27, T_28, T_158, T_110)))
T_250: (in SetFilePointer(0x00000000, 0x00000003, 0x00000080, 0x00000000) : word32)
  Class: Eq_159
  DataType: word32
  OrigDataType: word32
T_251: (in 0x00000000 : word32)
  Class: Eq_2
  DataType: word32
  OrigDataType: word32
T_252: (in 0x00000004 : word32)
  Class: Eq_252
  DataType: word32
  OrigDataType: word32
T_253: (in fp - 0x00000004 : word32)
  Class: Eq_253
  DataType: word32
  OrigDataType: word32
T_254: (in Mem190[fp - 0x00000004:word32] : word32)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word32
T_255: (in 0x00403091 : word32)
  Class: Eq_25
  DataType: word32
  OrigDataType: word32
T_256: (in 0x00000008 : word32)
  Class: Eq_256
  DataType: word32
  OrigDataType: word32
T_257: (in fp - 0x00000008 : word32)
  Class: Eq_257
  DataType: word32
  OrigDataType: word32
T_258: (in Mem192[fp - 0x00000008:word32] : word32)
  Class: Eq_25
  DataType: Eq_25
  OrigDataType: word32
T_259: (in 0x00000004 : word32)
  Class: Eq_12
  DataType: word32
  OrigDataType: word32
T_260: (in 0x0000000C : word32)
  Class: Eq_260
  DataType: word32
  OrigDataType: word32
T_261: (in fp - 0x0000000C : word32)
  Class: Eq_261
  DataType: word32
  OrigDataType: word32
T_262: (in Mem194[fp - 0x0000000C:word32] : word32)
  Class: Eq_12
  DataType: Eq_12
  OrigDataType: word32
T_263: (in 0x00403050 : word32)
  Class: Eq_2
  DataType: word32
  OrigDataType: word32
T_264: (in 0x00000010 : word32)
  Class: Eq_264
  DataType: word32
  OrigDataType: word32
T_265: (in fp - 0x00000010 : word32)
  Class: Eq_265
  DataType: word32
  OrigDataType: word32
T_266: (in Mem196[fp - 0x00000010:word32] : word32)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word32
T_267: (in 0x0040308D : ptr32)
  Class: Eq_267
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (struct (0 T_268 t0000)))
T_268: (in Mem196[0x0040308D:word32] : word32)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word32
T_269: (in 0x00000014 : word32)
  Class: Eq_269
  DataType: word32
  OrigDataType: word32
T_270: (in fp - 0x00000014 : word32)
  Class: Eq_270
  DataType: word32
  OrigDataType: word32
T_271: (in Mem198[fp - 0x00000014:word32] : word32)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word32
T_272: (in WriteFile : ptr32)
  Class: Eq_181
  DataType: (ptr Eq_181)
  OrigDataType: (ptr (fn T_273 (T_188, T_27, T_28, T_158, T_110)))
T_273: (in WriteFile(0x00000000, 0x00000000, 0x00000003, 0x00000080, 0x00000000) : word32)
  Class: Eq_189
  DataType: word32
  OrigDataType: word32
T_274: (in 0x00000000 : word32)
  Class: Eq_2
  DataType: word32
  OrigDataType: word32
T_275: (in 0x00000004 : word32)
  Class: Eq_275
  DataType: word32
  OrigDataType: word32
T_276: (in fp - 0x00000004 : word32)
  Class: Eq_276
  DataType: word32
  OrigDataType: word32
T_277: (in Mem202[fp - 0x00000004:word32] : word32)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word32
T_278: (in 0x00000000 : word32)
  Class: Eq_25
  DataType: word32
  OrigDataType: word32
T_279: (in 0x00000008 : word32)
  Class: Eq_279
  DataType: word32
  OrigDataType: word32
T_280: (in fp - 0x00000008 : word32)
  Class: Eq_280
  DataType: word32
  OrigDataType: word32
T_281: (in Mem204[fp - 0x00000008:word32] : word32)
  Class: Eq_25
  DataType: Eq_25
  OrigDataType: word32
T_282: (in 0x000000F7 : word32)
  Class: Eq_12
  DataType: word32
  OrigDataType: word32
T_283: (in 0x0000000C : word32)
  Class: Eq_283
  DataType: word32
  OrigDataType: word32
T_284: (in fp - 0x0000000C : word32)
  Class: Eq_284
  DataType: word32
  OrigDataType: word32
T_285: (in Mem206[fp - 0x0000000C:word32] : word32)
  Class: Eq_12
  DataType: Eq_12
  OrigDataType: word32
T_286: (in 0x0040308D : ptr32)
  Class: Eq_286
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (struct (0 T_287 t0000)))
T_287: (in Mem206[0x0040308D:word32] : word32)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word32
T_288: (in 0x00000010 : word32)
  Class: Eq_288
  DataType: word32
  OrigDataType: word32
T_289: (in fp - 0x00000010 : word32)
  Class: Eq_289
  DataType: word32
  OrigDataType: word32
T_290: (in Mem208[fp - 0x00000010:word32] : word32)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word32
T_291: (in SetFilePointer : ptr32)
  Class: Eq_152
  DataType: (ptr Eq_152)
  OrigDataType: (ptr (fn T_292 (T_27, T_28, T_158, T_110)))
T_292: (in SetFilePointer(0x00000000, 0x00000003, 0x00000080, 0x00000000) : word32)
  Class: Eq_159
  DataType: word32
  OrigDataType: word32
T_293: (in 0x00000000 : word32)
  Class: Eq_2
  DataType: word32
  OrigDataType: word32
T_294: (in 0x00000004 : word32)
  Class: Eq_294
  DataType: word32
  OrigDataType: word32
T_295: (in fp - 0x00000004 : word32)
  Class: Eq_295
  DataType: word32
  OrigDataType: word32
T_296: (in Mem212[fp - 0x00000004:word32] : word32)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word32
T_297: (in 0x00403091 : word32)
  Class: Eq_25
  DataType: word32
  OrigDataType: word32
T_298: (in 0x00000008 : word32)
  Class: Eq_298
  DataType: word32
  OrigDataType: word32
T_299: (in fp - 0x00000008 : word32)
  Class: Eq_299
  DataType: word32
  OrigDataType: word32
T_300: (in Mem214[fp - 0x00000008:word32] : word32)
  Class: Eq_25
  DataType: Eq_25
  OrigDataType: word32
T_301: (in 0x00000004 : word32)
  Class: Eq_12
  DataType: word32
  OrigDataType: word32
T_302: (in 0x0000000C : word32)
  Class: Eq_302
  DataType: word32
  OrigDataType: word32
T_303: (in fp - 0x0000000C : word32)
  Class: Eq_303
  DataType: word32
  OrigDataType: word32
T_304: (in Mem216[fp - 0x0000000C:word32] : word32)
  Class: Eq_12
  DataType: Eq_12
  OrigDataType: word32
T_305: (in 0x00403054 : word32)
  Class: Eq_2
  DataType: word32
  OrigDataType: word32
T_306: (in 0x00000010 : word32)
  Class: Eq_306
  DataType: word32
  OrigDataType: word32
T_307: (in fp - 0x00000010 : word32)
  Class: Eq_307
  DataType: word32
  OrigDataType: word32
T_308: (in Mem218[fp - 0x00000010:word32] : word32)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word32
T_309: (in 0x0040308D : ptr32)
  Class: Eq_309
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (struct (0 T_310 t0000)))
T_310: (in Mem218[0x0040308D:word32] : word32)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word32
T_311: (in 0x00000014 : word32)
  Class: Eq_311
  DataType: word32
  OrigDataType: word32
T_312: (in fp - 0x00000014 : word32)
  Class: Eq_312
  DataType: word32
  OrigDataType: word32
T_313: (in Mem220[fp - 0x00000014:word32] : word32)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word32
T_314: (in WriteFile : ptr32)
  Class: Eq_181
  DataType: (ptr Eq_181)
  OrigDataType: (ptr (fn T_315 (T_188, T_27, T_28, T_158, T_110)))
T_315: (in WriteFile(0x00000000, 0x00000000, 0x00000003, 0x00000080, 0x00000000) : word32)
  Class: Eq_189
  DataType: word32
  OrigDataType: word32
T_316: (in 0x0040308D : ptr32)
  Class: Eq_316
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (struct (0 T_317 t0000)))
T_317: (in Mem220[0x0040308D:word32] : word32)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word32
T_318: (in 0x00000004 : word32)
  Class: Eq_318
  DataType: word32
  OrigDataType: word32
T_319: (in fp - 0x00000004 : word32)
  Class: Eq_319
  DataType: word32
  OrigDataType: word32
T_320: (in Mem224[fp - 0x00000004:word32] : word32)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word32
T_321: (in CloseHandle : ptr32)
  Class: Eq_321
  DataType: (ptr Eq_321)
  OrigDataType: (ptr (fn T_324 (T_110)))
T_322: (in signature of CloseHandle : void)
  Class: Eq_321
  DataType: (ptr Eq_321)
  OrigDataType: 
T_323: (in hObject : HANDLE)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: HANDLE
T_324: (in CloseHandle(0x00000000) : word32)
  Class: Eq_324
  DataType: word32
  OrigDataType: word32
T_325: (in 0x00403058 : word32)
  Class: Eq_25
  DataType: word32
  OrigDataType: word32
T_326: (in 0x00000008 : word32)
  Class: Eq_326
  DataType: word32
  OrigDataType: word32
T_327: (in fp - 0x00000008 : word32)
  Class: Eq_327
  DataType: word32
  OrigDataType: word32
T_328: (in Mem230[fp - 0x00000008:word32] : word32)
  Class: Eq_25
  DataType: Eq_25
  OrigDataType: word32
T_329: (in 0x00403067 : word32)
  Class: Eq_12
  DataType: word32
  OrigDataType: word32
T_330: (in 0x0000000C : word32)
  Class: Eq_330
  DataType: word32
  OrigDataType: word32
T_331: (in fp - 0x0000000C : word32)
  Class: Eq_331
  DataType: word32
  OrigDataType: word32
T_332: (in Mem232[fp - 0x0000000C:word32] : word32)
  Class: Eq_12
  DataType: Eq_12
  OrigDataType: word32
T_333: (in 0x00000000 : word32)
  Class: Eq_2
  DataType: word32
  OrigDataType: word32
T_334: (in 0x00000010 : word32)
  Class: Eq_334
  DataType: word32
  OrigDataType: word32
T_335: (in fp - 0x00000010 : word32)
  Class: Eq_335
  DataType: word32
  OrigDataType: word32
T_336: (in Mem234[fp - 0x00000010:word32] : word32)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word32
T_337: (in MessageBoxA : ptr32)
  Class: Eq_21
  DataType: (ptr Eq_21)
  OrigDataType: (ptr (fn T_339 (T_305, T_301, T_297, T_338)))
T_338: (in 0x00000000 : word32)
  Class: Eq_26
  DataType: word32
  OrigDataType: word32
T_339: (in MessageBoxA(0x00403054, 0x00000004, 0x00403091, 0x00000000) : word32)
  Class: Eq_31
  DataType: word32
  OrigDataType: word32
T_340: (in 0x00403016 : ptr32)
  Class: Eq_340
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (struct (0 T_341 t0000)))
T_341: (in Mem6[0x00403016:word32] : word32)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word32
T_342: (in 0x00000004 : word32)
  Class: Eq_342
  DataType: word32
  OrigDataType: word32
T_343: (in fp - 0x00000004 : word32)
  Class: Eq_343
  DataType: word32
  OrigDataType: word32
T_344: (in Mem26[fp - 0x00000004:word32] : word32)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word32
T_345: (in FreeLibrary : ptr32)
  Class: Eq_345
  DataType: (ptr Eq_345)
  OrigDataType: (ptr (fn T_349 (T_348)))
T_346: (in signature of FreeLibrary : void)
  Class: Eq_345
  DataType: (ptr Eq_345)
  OrigDataType: 
T_347: (in hLibModule : HMODULE)
  Class: Eq_347
  DataType: Eq_347
  OrigDataType: HMODULE
T_348: (in 0x00000000 : word32)
  Class: Eq_347
  DataType: word32
  OrigDataType: word32
T_349: (in FreeLibrary(0x00000000) : word32)
  Class: Eq_349
  DataType: word32
  OrigDataType: word32
T_350: (in 0x0040301A : ptr32)
  Class: Eq_350
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (struct (0 T_351 t0000)))
T_351: (in Mem26[0x0040301A:word32] : word32)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word32
T_352: (in 0x00000004 : word32)
  Class: Eq_352
  DataType: word32
  OrigDataType: word32
T_353: (in fp - 0x00000004 : word32)
  Class: Eq_353
  DataType: word32
  OrigDataType: word32
T_354: (in Mem30[fp - 0x00000004:word32] : word32)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word32
T_355: (in FreeLibrary : ptr32)
  Class: Eq_345
  DataType: (ptr Eq_345)
  OrigDataType: (ptr (fn T_356 (T_348)))
T_356: (in FreeLibrary(0x00000000) : word32)
  Class: Eq_349
  DataType: word32
  OrigDataType: word32
T_357: (in 0x0040301E : ptr32)
  Class: Eq_357
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (struct (0 T_358 t0000)))
T_358: (in Mem30[0x0040301E:word32] : word32)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word32
T_359: (in 0x00000004 : word32)
  Class: Eq_359
  DataType: word32
  OrigDataType: word32
T_360: (in fp - 0x00000004 : word32)
  Class: Eq_360
  DataType: word32
  OrigDataType: word32
T_361: (in Mem34[fp - 0x00000004:word32] : word32)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word32
T_362: (in FreeLibrary : ptr32)
  Class: Eq_345
  DataType: (ptr Eq_345)
  OrigDataType: (ptr (fn T_363 (T_348)))
T_363: (in FreeLibrary(0x00000000) : word32)
  Class: Eq_349
  DataType: word32
  OrigDataType: word32
T_364: (in 0x00000000 : word32)
  Class: Eq_2
  DataType: word32
  OrigDataType: word32
T_365: (in 0x00000004 : word32)
  Class: Eq_365
  DataType: word32
  OrigDataType: word32
T_366: (in fp - 0x00000004 : word32)
  Class: Eq_366
  DataType: word32
  OrigDataType: word32
T_367: (in Mem38[fp - 0x00000004:word32] : word32)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word32
T_368: (in ExitProcess : ptr32)
  Class: Eq_368
  DataType: (ptr Eq_368)
  OrigDataType: (ptr (fn T_371 (T_348)))
T_369: (in signature of ExitProcess : void)
  Class: Eq_368
  DataType: (ptr Eq_368)
  OrigDataType: 
T_370: (in uExitCode : UINT)
  Class: Eq_347
  DataType: Eq_347
  OrigDataType: UINT
T_371: (in ExitProcess(0x00000000) : void)
  Class: Eq_371
  DataType: void
  OrigDataType: void
T_372:
  Class: Eq_372
  DataType: int32
  OrigDataType: 
T_373:
  Class: Eq_373
  DataType: int32
  OrigDataType: 
T_374:
  Class: Eq_374
  DataType: Eq_374
  OrigDataType: 
T_375:
  Class: Eq_375
  DataType: Eq_375
  OrigDataType: 
T_376:
  Class: Eq_376
  DataType: Eq_376
  OrigDataType: 
T_377:
  Class: Eq_377
  DataType: Eq_377
  OrigDataType: 
T_378:
  Class: Eq_378
  DataType: int32
  OrigDataType: 
*/
typedef Eq_2 Eq_1Eq_2 Eq_1Eq_2 Eq_1Eq_2 Eq_1struct Globals {
	Eq_2 t403016;	// 403016
	Eq_2 t40301A;	// 40301A
	Eq_2 t40301E;	// 40301E
	word32 dw403048;	// 403048
	word32 dw40304C;	// 40304C
	word32 dw403050;	// 403050
	word32 dw403054;	// 403054
	Eq_2 t40308D;	// 40308D
} Eq_1;

typedef union Eq_2 {
	word32 u0;
	 DWORD u1;
	 HANDLE u2;
	 HMODULE u3;
	 HWND u4;
	 LPCSTR u5;
	 LPCVOID u6;
	 LPOVERLAPPED u7;
} Eq_2;

typedef Eq_2 (Eq_3)(Eq_2);

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

typedef word32 (Eq_60)(Eq_2, Eq_2);

typedef Eq_2 (Eq_115)(Eq_117, Eq_118, Eq_119, Eq_120, Eq_121, Eq_122, Eq_2);

typedef union Eq_117 {
	word32 u0;
	 LPCSTR u1;
} Eq_117;

typedef union Eq_118 {
	word32 u0;
	 DWORD u1;
} Eq_118;

typedef union Eq_119 {
	word32 u0;
	 DWORD u1;
} Eq_119;

typedef union Eq_120 {
	word32 u0;
	 LPSECURITY_ATTRIBUTES u1;
} Eq_120;

typedef union Eq_121 {
	word32 u0;
	 DWORD u1;
} Eq_121;

typedef union Eq_122 {
	word32 u0;
	 DWORD u1;
} Eq_122;

typedef word32 (Eq_152)(Eq_2, Eq_12, Eq_156, Eq_2);

typedef union Eq_156 {
	word32 u0;
	 LPDWORD u1;
	 PLONG u2;
} Eq_156;

typedef word32 (Eq_181)(Eq_183, Eq_2, Eq_12, Eq_156, Eq_2);

typedef union Eq_183 {
	word32 u0;
	 HANDLE u1;
} Eq_183;

typedef word32 (Eq_321)(Eq_2);

typedef word32 (Eq_345)(Eq_347);

typedef union Eq_347 {
	word32 u0;
	 HMODULE u1;
	 UINT u2;
} Eq_347;

typedef void (Eq_368)(Eq_347);

typedef DWORDDWORDstruct struct_61 {
	DWORD;	// 0
	DWORD;	// 4
} Eq_374;

typedef union Eq_375 {
	 <anonymous> u0;
	 PVOID u1;
} Eq_375;

typedef ULONG_PTRULONG_PTREq_375 Eq_376HANDLEstruct _OVERLAPPED {
	ULONG_PTR;	// 0
	ULONG_PTR;	// 4
	Eq_375 t0008;	// 8
	HANDLE;	// 10
} Eq_376;

typedef DWORDLPVOIDBOOLstruct _SECURITY_ATTRIBUTES {
	DWORD;	// 0
	LPVOID;	// 4
	BOOL;	// 8
} Eq_377;

