// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_359/ia32_pe/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (40208A Eq_74 t40208A) (40208E word32 dw40208E) (402092 word32 dw402092) (4020A2 Eq_66 t4020A2) (4020A6 Eq_2 t4020A6) (4020AE word32 dw4020AE) (4020B2 Eq_2 t4020B2) (4020D6 word32 dw4020D6) (4020DA Eq_2 t4020DA) (4020DE up32 dw4020DE) (4020E2 Eq_2 t4020E2))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (union "Eq_2" ((ptr Eq_386) u0) (HDC u1) (HGLOBAL u2) (UINT u3))
	T_2 (in edx_16 : Eq_2)
	T_4 (in Mem0[0x004020DA:word32] : word32)
	T_22 (in edx_11 + 0x00000003 : word32)
	T_28 (in eax_6 : Eq_2)
	T_35 (in GlobalAlloc(0x00000000, 0x0007A120) : word32)
	T_36 (in 0x00000000 : word32)
	T_59 (in Mem129[0x004020E2:word32] : word32)
	T_61 (in Mem130[0x004020DA:word32] : word32)
	T_163 (in GetDC(0x00000000) : word32)
	T_165 (in Mem193[0x004020A6:word32] : word32)
	T_177 (in Mem0[0x004020A6:word32] : word32)
	T_180 (in Mem38[esp_36 + 0x00000000:word32] : word32)
	T_189 (in hDC : HDC)
	T_194 (in Mem40[esp_36 + 0x00000000:HDC] : HDC)
	T_197 (in Mem40[0x004020E2:word32] : word32)
	T_200 (in Mem44[esp_36 + 0x00000000:word32] : word32)
	T_203 (in hMem : HGLOBAL)
	T_206 (in Mem44[esp_36 + 0x00000000:HGLOBAL] : HGLOBAL)
	T_209 (in Mem44[0x004020B2:word32] : word32)
	T_212 (in Mem48[esp_36 + 0x00000000:word32] : word32)
	T_215 (in uExitCode : UINT)
	T_218 (in Mem48[esp_36 + 0x00000000:UINT] : UINT)
	T_220 (in ebp : Eq_2)
	T_223 (in Mem52[esp_36 + 0x00000000:word32] : word32)
Eq_8: (union "Eq_8" (uint32 u0) (byte u1))
	T_8 (in bl_17 >>u 0x01 : word32)
	T_11 (in Mem10[edx_16 + 0x00000000:byte] : byte)
Eq_12: (struct "Eq_12" (0 uint8 b0000) (1 uint8 b0001))
	T_12 (in edx_11 : word32)
	T_14 (in edx_16 + 0x00000001 : word32)
Eq_27: (struct "Eq_27" (FFFFFFF0 word32 dwFFFFFFF0) (FFFFFFF4 word32 dwFFFFFFF4) (FFFFFFF8 Eq_74 tFFFFFFF8) (FFFFFFFC Eq_66 tFFFFFFFC))
	T_27 (in esp_128 : (ptr Eq_27))
	T_39 (in fp : ptr32)
	T_172 (in esp_192 : (ptr Eq_27))
	T_272 (in esp_196 + 0x00000004 : word32)
	T_318 (in esp_196 + 0x00000004 : word32)
Eq_29: (fn Eq_2 (Eq_31, Eq_32))
	T_29 (in GlobalAlloc : ptr32)
	T_30 (in signature of GlobalAlloc : void)
Eq_31: (union "Eq_31" (word32 u0) (UINT u1))
	T_31 (in uFlags : UINT)
	T_33 (in 0x00000000 : word32)
Eq_32: (union "Eq_32" (word32 u0) (SIZE_T u1))
	T_32 (in dwBytes : SIZE_T)
	T_34 (in 0x0007A120 : word32)
Eq_47: (fn word32 (Eq_49, Eq_50, Eq_51, Eq_52))
	T_47 (in MessageBoxW : ptr32)
	T_48 (in signature of MessageBoxW : void)
Eq_49: (union "Eq_49" (word32 u0) (HWND u1))
	T_49 (in hWnd : HWND)
	T_53 (in 0x00000000 : word32)
Eq_50: (union "Eq_50" (word32 u0) (LPCWSTR u1))
	T_50 (in lpText : LPCWSTR)
	T_54 (in 0x00000000 : word32)
Eq_51: (union "Eq_51" (word32 u0) (LPCWSTR u1))
	T_51 (in lpCaption : LPCWSTR)
	T_55 (in 0x00000000 : word32)
Eq_52: (union "Eq_52" (word32 u0) (UINT u1))
	T_52 (in uType : UINT)
	T_56 (in 0x00000010 : word32)
Eq_66: (union "Eq_66" (word32 u0) (HWND u1) (LPVOID u2))
	T_66 (in 0x00000000 : word32)
	T_69 (in Mem134[fp - 0x00000004:word32] : word32)
	T_77 (in 0x00007F00 : word32)
	T_80 (in Mem139[fp - 0x00000004:word32] : word32)
	T_93 (in 0x00007F00 : word32)
	T_96 (in Mem146[fp - 0x00000004:word32] : word32)
	T_108 (in 0x0040207A : word32)
	T_111 (in Mem153[fp - 0x00000004:word32] : word32)
	T_118 (in 0x00000000 : word32)
	T_121 (in Mem160[fp - 0x00000004:word32] : word32)
	T_127 (in eax_183 : Eq_66)
	T_141 (in lpParam : LPVOID)
	T_152 (in CreateWindowExW(0x00000000, 0x00402000, 0x00402012, 0x10CF0000, 0x00008000, 0x00008000, 0x00000280, 0x000001F4, 0x00000000, 0x00000000, 0x00000000, 0x0040207A) : word32)
	T_153 (in 0x00000000 : word32)
	T_156 (in Mem188[0x004020A2:word32] : word32)
	T_159 (in Mem190[fp - 0x00000004:word32] : word32)
	T_162 (in hWnd : HWND)
	T_182 (in Mem38[0x004020A2:word32] : word32)
	T_185 (in Mem40[esp_36 - 0x00000004:word32] : word32)
	T_188 (in hWnd : HWND)
	T_191 (in Mem40[esp_36 - 0x00000004:HWND] : HWND)
	T_224 (in ebx : Eq_66)
	T_227 (in Mem56[esp_36 - 0x00000004:word32] : word32)
Eq_70: (fn Eq_74 (Eq_72))
	T_70 (in GetModuleHandleW : ptr32)
	T_71 (in signature of GetModuleHandleW : void)
Eq_72: (union "Eq_72" ((ptr WNDCLASSW) u0) (LPCWSTR u1))
	T_72 (in lpModuleName : LPCWSTR)
	T_73 (in 0x0007A120 : word32)
	T_88 (in lpIconName : LPCWSTR)
	T_104 (in lpCursorName : LPCWSTR)
	T_114 (in lpWndClass : (ptr WNDCLASSW))
Eq_74: (union "Eq_74" (word32 u0) (HINSTANCE u1))
	T_74 (in GetModuleHandleW(0x0007A120) : word32)
	T_76 (in Mem137[0x0040208A:word32] : word32)
	T_81 (in 0x00000000 : word32)
	T_84 (in Mem141[fp - 0x00000008:word32] : word32)
	T_97 (in 0x00000000 : word32)
	T_100 (in Mem148[fp - 0x00000008:word32] : word32)
	T_123 (in Mem160[0x0040208A:word32] : word32)
	T_126 (in Mem162[fp - 0x00000008:word32] : word32)
	T_140 (in hInstance : HINSTANCE)
Eq_85: (fn word32 (Eq_87, Eq_72))
	T_85 (in LoadIconW : ptr32)
	T_86 (in signature of LoadIconW : void)
Eq_87: (union "Eq_87" (word32 u0) (HINSTANCE u1))
	T_87 (in hInstance : HINSTANCE)
	T_89 (in 0x00000000 : word32)
	T_103 (in hInstance : HINSTANCE)
Eq_101: (fn word32 (Eq_87, Eq_72))
	T_101 (in LoadCursorW : ptr32)
	T_102 (in signature of LoadCursorW : void)
Eq_112: (fn word32 (Eq_72))
	T_112 (in RegisterClassW : ptr32)
	T_113 (in signature of RegisterClassW : void)
Eq_128: (fn Eq_66 (Eq_130, Eq_131, Eq_132, Eq_133, int32, int32, int32, int32, Eq_138, Eq_139, Eq_74, Eq_66))
	T_128 (in CreateWindowExW : ptr32)
	T_129 (in signature of CreateWindowExW : void)
Eq_130: (union "Eq_130" (word32 u0) (DWORD u1))
	T_130 (in dwExStyle : DWORD)
	T_142 (in 0x00000000 : word32)
Eq_131: (union "Eq_131" (word32 u0) (LPCWSTR u1))
	T_131 (in lpClassName : LPCWSTR)
	T_143 (in 0x00402000 : word32)
Eq_132: (union "Eq_132" (word32 u0) (LPCWSTR u1))
	T_132 (in lpWindowName : LPCWSTR)
	T_144 (in 0x00402012 : word32)
Eq_133: (union "Eq_133" (word32 u0) (DWORD u1))
	T_133 (in dwStyle : DWORD)
	T_145 (in 0x10CF0000 : word32)
Eq_138: (union "Eq_138" (word32 u0) (HWND u1))
	T_138 (in hWndParent : HWND)
	T_150 (in 0x00000000 : word32)
Eq_139: (union "Eq_139" (word32 u0) (HMENU u1))
	T_139 (in hMenu : HMENU)
	T_151 (in 0x00000000 : word32)
Eq_160: (fn Eq_2 (Eq_66))
	T_160 (in GetDC : ptr32)
	T_161 (in signature of GetDC : void)
Eq_166: (fn void ())
	T_166 (in fn00401000 : ptr32)
	T_167 (in signature of fn00401000 : void)
Eq_169: (fn void ())
	T_169 (in fn0040101B : ptr32)
	T_170 (in signature of fn0040101B : void)
	T_264 (in fn0040101B : ptr32)
	T_384 (in fn0040101B : ptr32)
Eq_173: (struct "Eq_173" (FFFFFFE4 Eq_362 tFFFFFFE4) (FFFFFFE8 Eq_238 tFFFFFFE8) (FFFFFFEC Eq_350 tFFFFFFEC) (FFFFFFF0 Eq_323 tFFFFFFF0) (FFFFFFF4 word32 dwFFFFFFF4) (FFFFFFF8 word32 dwFFFFFFF8) (FFFFFFFC Eq_66 tFFFFFFFC) (0 Eq_2 t0000) (8 Eq_362 t0008) (C Eq_238 t000C) (10 Eq_350 t0010) (14 Eq_323 t0014))
	T_173 (in esp_36 : (ptr Eq_173))
	T_175 (in esp_128 - 0x00000004 : word32)
Eq_186: (fn word32 (Eq_66, Eq_2))
	T_186 (in ReleaseDC : ptr32)
	T_187 (in signature of ReleaseDC : void)
Eq_201: (fn word32 (Eq_2))
	T_201 (in GlobalFree : ptr32)
	T_202 (in signature of GlobalFree : void)
Eq_213: (fn void (Eq_2))
	T_213 (in ExitProcess : ptr32)
	T_214 (in signature of ExitProcess : void)
Eq_238: (union "Eq_238" (word32 u0) (UINT u1))
	T_238 (in Mem62[esp_36 + 0x0000000C:word32] : word32)
	T_239 (in 0x00000002 : word32)
	T_335 (in Mem62[esp_36 + 0x0000000C:word32] : word32)
	T_336 (in 0x00000005 : word32)
	T_356 (in Mem87[esp_36 + 0x0000000C:word32] : word32)
	T_359 (in Mem89[esp_36 - 0x00000018:word32] : word32)
	T_369 (in Msg : UINT)
	T_376 (in Mem91[esp_36 - 24:UINT] : UINT)
Eq_241: (union "Eq_241" ((ptr MSG) u0) (UINT u1))
	T_241 (in 0x004020AA : word32)
	T_245 (in Mem211[esp_196 + 0x00000000:word32] : word32)
	T_248 (in lpMsg : (ptr MSG))
	T_251 (in Mem211[esp_196 + 0x00000000:(ptr MSG)] : (ptr MSG))
	T_253 (in 0x004020AA : word32)
	T_256 (in Mem215[esp_196 + 0x00000000:word32] : word32)
	T_259 (in lpMsg : (ptr MSG))
	T_262 (in Mem215[esp_196 + 0x00000000:(ptr MSG)] : (ptr MSG))
	T_275 (in 0x00000001 : word32)
	T_278 (in Mem197[esp_196 + 0x00000000:word32] : word32)
	T_301 (in wRemoveMsg : UINT)
	T_315 (in Mem205[esp_196 + 0x00000000:UINT] : UINT)
Eq_242: (struct "Eq_242" (FFFFFFF0 Eq_291 tFFFFFFF0) (FFFFFFF4 Eq_287 tFFFFFFF4) (FFFFFFF8 Eq_283 tFFFFFFF8) (FFFFFFFC Eq_279 tFFFFFFFC) (0 Eq_241 t0000) (4 Eq_27 t0004))
	T_242 (in esp_196 : (ptr Eq_242))
	T_274 (in esp_192 - 0x00000004 : word32)
Eq_246: (fn word32 (Eq_241))
	T_246 (in TranslateMessage : ptr32)
	T_247 (in signature of TranslateMessage : void)
Eq_257: (fn word32 (Eq_241))
	T_257 (in DispatchMessageW : ptr32)
	T_258 (in signature of DispatchMessageW : void)
Eq_279: (union "Eq_279" (word32 u0) (UINT u1))
	T_279 (in 0x00000000 : word32)
	T_282 (in Mem199[esp_196 - 0x00000004:word32] : word32)
	T_300 (in wMsgFilterMax : UINT)
	T_312 (in Mem205[esp_196 - 4:UINT] : UINT)
Eq_283: (union "Eq_283" (word32 u0) (UINT u1))
	T_283 (in 0x00000000 : word32)
	T_286 (in Mem201[esp_196 - 0x00000008:word32] : word32)
	T_299 (in wMsgFilterMin : UINT)
	T_309 (in Mem205[esp_196 - 8:UINT] : UINT)
Eq_287: (union "Eq_287" (word32 u0) (HWND u1))
	T_287 (in 0x00000000 : word32)
	T_290 (in Mem203[esp_196 - 0x0000000C:word32] : word32)
	T_298 (in hWnd : HWND)
	T_306 (in Mem205[esp_196 - 12:HWND] : HWND)
Eq_291: (union "Eq_291" (word32 u0) (LPMSG u1))
	T_291 (in 0x004020AA : word32)
	T_294 (in Mem205[esp_196 - 0x00000010:word32] : word32)
	T_297 (in lpMsg : LPMSG)
	T_303 (in Mem205[esp_196 - 0x00000010:LPMSG] : LPMSG)
Eq_295: (fn word32 (Eq_291, Eq_287, Eq_283, Eq_279, Eq_241))
	T_295 (in PeekMessageW : ptr32)
	T_296 (in signature of PeekMessageW : void)
Eq_323: (union "Eq_323" (int32 u0) (LPARAM u1))
	T_323 (in 0x00000000 : word32)
	T_326 (in Mem101[esp_36 - 0x00000010:word32] : word32)
	T_329 (in nExitCode : int32)
	T_331 (in Mem101[esp_36 - 0x00000010:int32] : int32)
	T_344 (in Mem62[esp_36 + 0x00000014:word32] : word32)
	T_347 (in Mem85[esp_36 - 0x00000010:word32] : word32)
	T_371 (in lParam : LPARAM)
	T_382 (in Mem91[esp_36 - 16:LPARAM] : LPARAM)
Eq_327: (fn void (Eq_323))
	T_327 (in PostQuitMessage : ptr32)
	T_328 (in signature of PostQuitMessage : void)
Eq_350: (union "Eq_350" (word32 u0) (WPARAM u1))
	T_350 (in Mem85[esp_36 + 0x00000010:word32] : word32)
	T_353 (in Mem87[esp_36 - 0x00000014:word32] : word32)
	T_370 (in wParam : WPARAM)
	T_379 (in Mem91[esp_36 - 20:WPARAM] : WPARAM)
Eq_362: (union "Eq_362" (word32 u0) (HWND u1))
	T_362 (in Mem89[esp_36 + 0x00000008:word32] : word32)
	T_365 (in Mem91[esp_36 - 0x0000001C:word32] : word32)
	T_368 (in hWnd : HWND)
	T_373 (in Mem91[esp_36 - 0x0000001C:HWND] : HWND)
Eq_366: (fn word32 (Eq_362, Eq_238, Eq_350, Eq_323))
	T_366 (in DefWindowProcW : ptr32)
	T_367 (in signature of DefWindowProcW : void)
Eq_386: (struct "Eq_386" 0001 (0 Eq_8 t0000))
	T_386
Eq_394: (struct "tagWNDCLASSW" (0 UINT style) (4 WNDPROC lpfnWndProc) (8 int32 cbClsExtra) (C int32 cbWndExtra) (10 HINSTANCE hInstance) (14 HICON hIcon) (18 HCURSOR hCursor) (1C HBRUSH hbrBackground) (20 LPCWSTR lpszMenuName) (24 LPCWSTR lpszClassName))
	T_394
Eq_399: (struct "tagPOINT" (0 LONG x) (4 LONG y))
	T_399
Eq_400: (struct "tagMSG" (0 HWND hwnd) (4 UINT message) (8 WPARAM wParam) (C LPARAM lParam) (10 DWORD time) (18 POINT pt))
	T_400
Eq_401: (struct "tagPOINT" (0 LONG x) (4 LONG y))
	T_401
Eq_402: (struct "tagMSG" (0 HWND hwnd) (4 UINT message) (8 WPARAM wParam) (C LPARAM lParam) (10 DWORD time) (18 POINT pt))
	T_402
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr Eq_1)
  OrigDataType: (ptr (struct "Globals"))
T_2: (in edx_16 : Eq_2)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: (ptr (struct 0001 (0 T_11 t0000)))
T_3: (in 0x004020DA : ptr32)
  Class: Eq_3
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (struct (0 T_4 t0000)))
T_4: (in Mem0[0x004020DA:word32] : word32)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word32
T_5: (in bl_17 : uint8)
  Class: Eq_5
  DataType: uint8
  OrigDataType: uint8
T_6: (in 0x00 : byte)
  Class: Eq_5
  DataType: uint8
  OrigDataType: byte
T_7: (in 0x01 : byte)
  Class: Eq_7
  DataType: uint8
  OrigDataType: uint8
T_8: (in bl_17 >>u 0x01 : word32)
  Class: Eq_8
  DataType: Eq_8
  OrigDataType: uint32
T_9: (in 0x00000000 : word32)
  Class: Eq_9
  DataType: word32
  OrigDataType: word32
T_10: (in edx_16 + 0x00000000 : word32)
  Class: Eq_10
  DataType: word32
  OrigDataType: word32
T_11: (in Mem10[edx_16 + 0x00000000:byte] : byte)
  Class: Eq_8
  DataType: Eq_8
  OrigDataType: byte
T_12: (in edx_11 : word32)
  Class: Eq_12
  DataType: (ptr Eq_12)
  OrigDataType: (ptr (struct (0 T_17 t0000) (1 T_20 t0001)))
T_13: (in 0x00000001 : word32)
  Class: Eq_13
  DataType: word32
  OrigDataType: word32
T_14: (in edx_16 + 0x00000001 : word32)
  Class: Eq_12
  DataType: (ptr Eq_12)
  OrigDataType: word32
T_15: (in 0x00000000 : word32)
  Class: Eq_15
  DataType: word32
  OrigDataType: word32
T_16: (in edx_11 + 0x00000000 : word32)
  Class: Eq_16
  DataType: word32
  OrigDataType: word32
T_17: (in Mem12[edx_11 + 0x00000000:byte] : byte)
  Class: Eq_5
  DataType: uint8
  OrigDataType: byte
T_18: (in 0x00000001 : word32)
  Class: Eq_18
  DataType: word32
  OrigDataType: word32
T_19: (in edx_11 + 0x00000001 : word32)
  Class: Eq_19
  DataType: word32
  OrigDataType: word32
T_20: (in Mem14[edx_11 + 0x00000001:byte] : byte)
  Class: Eq_5
  DataType: uint8
  OrigDataType: byte
T_21: (in 0x00000003 : word32)
  Class: Eq_21
  DataType: word32
  OrigDataType: word32
T_22: (in edx_11 + 0x00000003 : word32)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word32
T_23: (in 0x01 : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_24: (in bl_17 + 0x01 : byte)
  Class: Eq_5
  DataType: uint8
  OrigDataType: byte
T_25: (in 0x00 : byte)
  Class: Eq_5
  DataType: uint8
  OrigDataType: byte
T_26: (in bl_17 != 0x00 : bool)
  Class: Eq_26
  DataType: bool
  OrigDataType: bool
T_27: (in esp_128 : (ptr Eq_27))
  Class: Eq_27
  DataType: (ptr Eq_27)
  OrigDataType: (ptr (struct (FFFFFFF0 T_46 tFFFFFFF0) (FFFFFFF4 T_42 tFFFFFFF4)))
T_28: (in eax_6 : Eq_2)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word32
T_29: (in GlobalAlloc : ptr32)
  Class: Eq_29
  DataType: (ptr Eq_29)
  OrigDataType: (ptr (fn T_35 (T_33, T_34)))
T_30: (in signature of GlobalAlloc : void)
  Class: Eq_29
  DataType: (ptr Eq_29)
  OrigDataType: 
T_31: (in uFlags : UINT)
  Class: Eq_31
  DataType: Eq_31
  OrigDataType: UINT
T_32: (in dwBytes : SIZE_T)
  Class: Eq_32
  DataType: Eq_32
  OrigDataType: SIZE_T
T_33: (in 0x00000000 : word32)
  Class: Eq_31
  DataType: word32
  OrigDataType: word32
T_34: (in 0x0007A120 : word32)
  Class: Eq_32
  DataType: word32
  OrigDataType: word32
T_35: (in GlobalAlloc(0x00000000, 0x0007A120) : word32)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word32
T_36: (in 0x00000000 : word32)
  Class: Eq_2
  DataType: (ptr Eq_386)
  OrigDataType: word32
T_37: (in eax_6 == 0x00000000 : bool)
  Class: Eq_37
  DataType: bool
  OrigDataType: bool
T_38: (in 0x00402022 : word32)
  Class: Eq_38
  DataType: word32
  OrigDataType: word32
T_39: (in fp : ptr32)
  Class: Eq_27
  DataType: (ptr Eq_27)
  OrigDataType: (ptr (struct (FFFFFFF0 T_46 tFFFFFFF0) (FFFFFFF4 T_42 tFFFFFFF4) (FFFFFFF8 T_74 tFFFFFFF8) (FFFFFFFC T_66 tFFFFFFFC)))
T_40: (in 0x0000000C : word32)
  Class: Eq_40
  DataType: word32
  OrigDataType: word32
T_41: (in fp - 0x0000000C : word32)
  Class: Eq_41
  DataType: word32
  OrigDataType: word32
T_42: (in Mem124[fp - 0x0000000C:word32] : word32)
  Class: Eq_38
  DataType: word32
  OrigDataType: word32
T_43: (in 0x00000000 : word32)
  Class: Eq_43
  DataType: word32
  OrigDataType: word32
T_44: (in 0x00000010 : word32)
  Class: Eq_44
  DataType: word32
  OrigDataType: word32
T_45: (in fp - 0x00000010 : word32)
  Class: Eq_45
  DataType: word32
  OrigDataType: word32
T_46: (in Mem126[fp - 0x00000010:word32] : word32)
  Class: Eq_43
  DataType: word32
  OrigDataType: word32
T_47: (in MessageBoxW : ptr32)
  Class: Eq_47
  DataType: (ptr Eq_47)
  OrigDataType: (ptr (fn T_57 (T_53, T_54, T_55, T_56)))
T_48: (in signature of MessageBoxW : void)
  Class: Eq_47
  DataType: (ptr Eq_47)
  OrigDataType: 
T_49: (in hWnd : HWND)
  Class: Eq_49
  DataType: Eq_49
  OrigDataType: HWND
T_50: (in lpText : LPCWSTR)
  Class: Eq_50
  DataType: Eq_50
  OrigDataType: LPCWSTR
T_51: (in lpCaption : LPCWSTR)
  Class: Eq_51
  DataType: Eq_51
  OrigDataType: LPCWSTR
T_52: (in uType : UINT)
  Class: Eq_52
  DataType: Eq_52
  OrigDataType: UINT
T_53: (in 0x00000000 : word32)
  Class: Eq_49
  DataType: word32
  OrigDataType: word32
T_54: (in 0x00000000 : word32)
  Class: Eq_50
  DataType: word32
  OrigDataType: word32
T_55: (in 0x00000000 : word32)
  Class: Eq_51
  DataType: word32
  OrigDataType: word32
T_56: (in 0x00000010 : word32)
  Class: Eq_52
  DataType: word32
  OrigDataType: word32
T_57: (in MessageBoxW(0x00000000, 0x00000000, 0x00000000, 0x00000010) : word32)
  Class: Eq_57
  DataType: word32
  OrigDataType: word32
T_58: (in 0x004020E2 : word32)
  Class: Eq_58
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (struct (0 T_59 t0000)))
T_59: (in Mem129[0x004020E2:word32] : word32)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word32
T_60: (in 0x004020DA : word32)
  Class: Eq_60
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (struct (0 T_61 t0000)))
T_61: (in Mem130[0x004020DA:word32] : word32)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word32
T_62: (in 0x000007D0 : word32)
  Class: Eq_62
  DataType: word32
  OrigDataType: word32
T_63: (in eax_6 + 0x000007D0 : word32)
  Class: Eq_63
  DataType: word32
  OrigDataType: word32
T_64: (in 0x004020D6 : word32)
  Class: Eq_64
  DataType: (ptr word32)
  OrigDataType: (ptr (struct (0 T_65 t0000)))
T_65: (in Mem132[0x004020D6:word32] : word32)
  Class: Eq_63
  DataType: word32
  OrigDataType: word32
T_66: (in 0x00000000 : word32)
  Class: Eq_66
  DataType: word32
  OrigDataType: word32
T_67: (in 0x00000004 : word32)
  Class: Eq_67
  DataType: word32
  OrigDataType: word32
T_68: (in fp - 0x00000004 : word32)
  Class: Eq_68
  DataType: word32
  OrigDataType: word32
T_69: (in Mem134[fp - 0x00000004:word32] : word32)
  Class: Eq_66
  DataType: Eq_66
  OrigDataType: word32
T_70: (in GetModuleHandleW : ptr32)
  Class: Eq_70
  DataType: (ptr Eq_70)
  OrigDataType: (ptr (fn T_74 (T_73)))
T_71: (in signature of GetModuleHandleW : void)
  Class: Eq_70
  DataType: (ptr Eq_70)
  OrigDataType: 
T_72: (in lpModuleName : LPCWSTR)
  Class: Eq_72
  DataType: Eq_72
  OrigDataType: LPCWSTR
T_73: (in 0x0007A120 : word32)
  Class: Eq_72
  DataType: (ptr WNDCLASSW)
  OrigDataType: word32
T_74: (in GetModuleHandleW(0x0007A120) : word32)
  Class: Eq_74
  DataType: Eq_74
  OrigDataType: word32
T_75: (in 0x0040208A : word32)
  Class: Eq_75
  DataType: (ptr Eq_74)
  OrigDataType: (ptr (struct (0 T_76 t0000)))
T_76: (in Mem137[0x0040208A:word32] : word32)
  Class: Eq_74
  DataType: Eq_74
  OrigDataType: word32
T_77: (in 0x00007F00 : word32)
  Class: Eq_66
  DataType: word32
  OrigDataType: word32
T_78: (in 0x00000004 : word32)
  Class: Eq_78
  DataType: word32
  OrigDataType: word32
T_79: (in fp - 0x00000004 : word32)
  Class: Eq_79
  DataType: word32
  OrigDataType: word32
T_80: (in Mem139[fp - 0x00000004:word32] : word32)
  Class: Eq_66
  DataType: Eq_66
  OrigDataType: word32
T_81: (in 0x00000000 : word32)
  Class: Eq_74
  DataType: word32
  OrigDataType: word32
T_82: (in 0x00000008 : word32)
  Class: Eq_82
  DataType: word32
  OrigDataType: word32
T_83: (in fp - 0x00000008 : word32)
  Class: Eq_83
  DataType: word32
  OrigDataType: word32
T_84: (in Mem141[fp - 0x00000008:word32] : word32)
  Class: Eq_74
  DataType: Eq_74
  OrigDataType: word32
T_85: (in LoadIconW : ptr32)
  Class: Eq_85
  DataType: (ptr Eq_85)
  OrigDataType: (ptr (fn T_90 (T_89, T_73)))
T_86: (in signature of LoadIconW : void)
  Class: Eq_85
  DataType: (ptr Eq_85)
  OrigDataType: 
T_87: (in hInstance : HINSTANCE)
  Class: Eq_87
  DataType: Eq_87
  OrigDataType: HINSTANCE
T_88: (in lpIconName : LPCWSTR)
  Class: Eq_72
  DataType: Eq_72
  OrigDataType: LPCWSTR
T_89: (in 0x00000000 : word32)
  Class: Eq_87
  DataType: word32
  OrigDataType: word32
T_90: (in LoadIconW(0x00000000, (WNDCLASSW) 0x0007A120) : word32)
  Class: Eq_90
  DataType: word32
  OrigDataType: word32
T_91: (in 0x0040208E : word32)
  Class: Eq_91
  DataType: (ptr word32)
  OrigDataType: (ptr (struct (0 T_92 t0000)))
T_92: (in Mem144[0x0040208E:word32] : word32)
  Class: Eq_90
  DataType: word32
  OrigDataType: word32
T_93: (in 0x00007F00 : word32)
  Class: Eq_66
  DataType: word32
  OrigDataType: word32
T_94: (in 0x00000004 : word32)
  Class: Eq_94
  DataType: word32
  OrigDataType: word32
T_95: (in fp - 0x00000004 : word32)
  Class: Eq_95
  DataType: word32
  OrigDataType: word32
T_96: (in Mem146[fp - 0x00000004:word32] : word32)
  Class: Eq_66
  DataType: Eq_66
  OrigDataType: word32
T_97: (in 0x00000000 : word32)
  Class: Eq_74
  DataType: word32
  OrigDataType: word32
T_98: (in 0x00000008 : word32)
  Class: Eq_98
  DataType: word32
  OrigDataType: word32
T_99: (in fp - 0x00000008 : word32)
  Class: Eq_99
  DataType: word32
  OrigDataType: word32
T_100: (in Mem148[fp - 0x00000008:word32] : word32)
  Class: Eq_74
  DataType: Eq_74
  OrigDataType: word32
T_101: (in LoadCursorW : ptr32)
  Class: Eq_101
  DataType: (ptr Eq_101)
  OrigDataType: (ptr (fn T_105 (T_89, T_73)))
T_102: (in signature of LoadCursorW : void)
  Class: Eq_101
  DataType: (ptr Eq_101)
  OrigDataType: 
T_103: (in hInstance : HINSTANCE)
  Class: Eq_87
  DataType: Eq_87
  OrigDataType: HINSTANCE
T_104: (in lpCursorName : LPCWSTR)
  Class: Eq_72
  DataType: Eq_72
  OrigDataType: LPCWSTR
T_105: (in LoadCursorW(0x00000000, (WNDCLASSW) 0x0007A120) : word32)
  Class: Eq_105
  DataType: word32
  OrigDataType: word32
T_106: (in 0x00402092 : word32)
  Class: Eq_106
  DataType: (ptr word32)
  OrigDataType: (ptr (struct (0 T_107 t0000)))
T_107: (in Mem151[0x00402092:word32] : word32)
  Class: Eq_105
  DataType: word32
  OrigDataType: word32
T_108: (in 0x0040207A : word32)
  Class: Eq_66
  DataType: word32
  OrigDataType: word32
T_109: (in 0x00000004 : word32)
  Class: Eq_109
  DataType: word32
  OrigDataType: word32
T_110: (in fp - 0x00000004 : word32)
  Class: Eq_110
  DataType: word32
  OrigDataType: word32
T_111: (in Mem153[fp - 0x00000004:word32] : word32)
  Class: Eq_66
  DataType: Eq_66
  OrigDataType: word32
T_112: (in RegisterClassW : ptr32)
  Class: Eq_112
  DataType: (ptr Eq_112)
  OrigDataType: (ptr (fn T_115 (T_73)))
T_113: (in signature of RegisterClassW : void)
  Class: Eq_112
  DataType: (ptr Eq_112)
  OrigDataType: 
T_114: (in lpWndClass : (ptr WNDCLASSW))
  Class: Eq_72
  DataType: Eq_72
  OrigDataType: (ptr WNDCLASSW)
T_115: (in RegisterClassW((WNDCLASSW) 0x0007A120) : word32)
  Class: Eq_115
  DataType: word32
  OrigDataType: word32
T_116: (in 0x00000000 : word32)
  Class: Eq_115
  DataType: word32
  OrigDataType: word32
T_117: (in RegisterClassW((WNDCLASSW) 0x0007A120) == 0x00000000 : bool)
  Class: Eq_117
  DataType: bool
  OrigDataType: bool
T_118: (in 0x00000000 : word32)
  Class: Eq_66
  DataType: word32
  OrigDataType: word32
T_119: (in 0x00000004 : word32)
  Class: Eq_119
  DataType: word32
  OrigDataType: word32
T_120: (in fp - 0x00000004 : word32)
  Class: Eq_120
  DataType: word32
  OrigDataType: word32
T_121: (in Mem160[fp - 0x00000004:word32] : word32)
  Class: Eq_66
  DataType: Eq_66
  OrigDataType: word32
T_122: (in 0x0040208A : ptr32)
  Class: Eq_122
  DataType: (ptr Eq_74)
  OrigDataType: (ptr (struct (0 T_123 t0000)))
T_123: (in Mem160[0x0040208A:word32] : word32)
  Class: Eq_74
  DataType: Eq_74
  OrigDataType: word32
T_124: (in 0x00000008 : word32)
  Class: Eq_124
  DataType: word32
  OrigDataType: word32
T_125: (in fp - 0x00000008 : word32)
  Class: Eq_125
  DataType: word32
  OrigDataType: word32
T_126: (in Mem162[fp - 0x00000008:word32] : word32)
  Class: Eq_74
  DataType: Eq_74
  OrigDataType: word32
T_127: (in eax_183 : Eq_66)
  Class: Eq_66
  DataType: Eq_66
  OrigDataType: word32
T_128: (in CreateWindowExW : ptr32)
  Class: Eq_128
  DataType: (ptr Eq_128)
  OrigDataType: (ptr (fn T_152 (T_142, T_143, T_144, T_145, T_146, T_147, T_148, T_149, T_150, T_151, T_97, T_108)))
T_129: (in signature of CreateWindowExW : void)
  Class: Eq_128
  DataType: (ptr Eq_128)
  OrigDataType: 
T_130: (in dwExStyle : DWORD)
  Class: Eq_130
  DataType: Eq_130
  OrigDataType: DWORD
T_131: (in lpClassName : LPCWSTR)
  Class: Eq_131
  DataType: Eq_131
  OrigDataType: LPCWSTR
T_132: (in lpWindowName : LPCWSTR)
  Class: Eq_132
  DataType: Eq_132
  OrigDataType: LPCWSTR
T_133: (in dwStyle : DWORD)
  Class: Eq_133
  DataType: Eq_133
  OrigDataType: DWORD
T_134: (in X : int32)
  Class: Eq_134
  DataType: int32
  OrigDataType: int32
T_135: (in Y : int32)
  Class: Eq_135
  DataType: int32
  OrigDataType: int32
T_136: (in nWidth : int32)
  Class: Eq_136
  DataType: int32
  OrigDataType: int32
T_137: (in nHeight : int32)
  Class: Eq_137
  DataType: int32
  OrigDataType: int32
T_138: (in hWndParent : HWND)
  Class: Eq_138
  DataType: Eq_138
  OrigDataType: HWND
T_139: (in hMenu : HMENU)
  Class: Eq_139
  DataType: Eq_139
  OrigDataType: HMENU
T_140: (in hInstance : HINSTANCE)
  Class: Eq_74
  DataType: Eq_74
  OrigDataType: HINSTANCE
T_141: (in lpParam : LPVOID)
  Class: Eq_66
  DataType: Eq_66
  OrigDataType: LPVOID
T_142: (in 0x00000000 : word32)
  Class: Eq_130
  DataType: word32
  OrigDataType: word32
T_143: (in 0x00402000 : word32)
  Class: Eq_131
  DataType: word32
  OrigDataType: word32
T_144: (in 0x00402012 : word32)
  Class: Eq_132
  DataType: word32
  OrigDataType: word32
T_145: (in 0x10CF0000 : word32)
  Class: Eq_133
  DataType: word32
  OrigDataType: word32
T_146: (in 0x00008000 : word32)
  Class: Eq_134
  DataType: int32
  OrigDataType: word32
T_147: (in 0x00008000 : word32)
  Class: Eq_135
  DataType: int32
  OrigDataType: word32
T_148: (in 0x00000280 : word32)
  Class: Eq_136
  DataType: int32
  OrigDataType: word32
T_149: (in 0x000001F4 : word32)
  Class: Eq_137
  DataType: int32
  OrigDataType: word32
T_150: (in 0x00000000 : word32)
  Class: Eq_138
  DataType: word32
  OrigDataType: word32
T_151: (in 0x00000000 : word32)
  Class: Eq_139
  DataType: word32
  OrigDataType: word32
T_152: (in CreateWindowExW(0x00000000, 0x00402000, 0x00402012, 0x10CF0000, 0x00008000, 0x00008000, 0x00000280, 0x000001F4, 0x00000000, 0x00000000, 0x00000000, 0x0040207A) : word32)
  Class: Eq_66
  DataType: Eq_66
  OrigDataType: word32
T_153: (in 0x00000000 : word32)
  Class: Eq_66
  DataType: word32
  OrigDataType: word32
T_154: (in eax_183 == 0x00000000 : bool)
  Class: Eq_154
  DataType: bool
  OrigDataType: bool
T_155: (in 0x004020A2 : word32)
  Class: Eq_155
  DataType: (ptr Eq_66)
  OrigDataType: (ptr (struct (0 T_156 t0000)))
T_156: (in Mem188[0x004020A2:word32] : word32)
  Class: Eq_66
  DataType: Eq_66
  OrigDataType: word32
T_157: (in 0x00000004 : word32)
  Class: Eq_157
  DataType: word32
  OrigDataType: word32
T_158: (in fp - 0x00000004 : word32)
  Class: Eq_158
  DataType: word32
  OrigDataType: word32
T_159: (in Mem190[fp - 0x00000004:word32] : word32)
  Class: Eq_66
  DataType: Eq_66
  OrigDataType: word32
T_160: (in GetDC : ptr32)
  Class: Eq_160
  DataType: (ptr Eq_160)
  OrigDataType: (ptr (fn T_163 (T_118)))
T_161: (in signature of GetDC : void)
  Class: Eq_160
  DataType: (ptr Eq_160)
  OrigDataType: 
T_162: (in hWnd : HWND)
  Class: Eq_66
  DataType: Eq_66
  OrigDataType: HWND
T_163: (in GetDC(0x00000000) : word32)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word32
T_164: (in 0x004020A6 : word32)
  Class: Eq_164
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (struct (0 T_165 t0000)))
T_165: (in Mem193[0x004020A6:word32] : word32)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word32
T_166: (in fn00401000 : ptr32)
  Class: Eq_166
  DataType: (ptr Eq_166)
  OrigDataType: (ptr (fn T_168 ()))
T_167: (in signature of fn00401000 : void)
  Class: Eq_166
  DataType: (ptr Eq_166)
  OrigDataType: 
T_168: (in fn00401000() : void)
  Class: Eq_168
  DataType: void
  OrigDataType: void
T_169: (in fn0040101B : ptr32)
  Class: Eq_169
  DataType: (ptr Eq_169)
  OrigDataType: (ptr (fn T_171 ()))
T_170: (in signature of fn0040101B : void)
  Class: Eq_169
  DataType: (ptr Eq_169)
  OrigDataType: 
T_171: (in fn0040101B() : void)
  Class: Eq_171
  DataType: void
  OrigDataType: void
T_172: (in esp_192 : (ptr Eq_27))
  Class: Eq_27
  DataType: (ptr Eq_27)
  OrigDataType: word32
T_173: (in esp_36 : (ptr Eq_173))
  Class: Eq_173
  DataType: (ptr Eq_173)
  OrigDataType: (ptr (struct (FFFFFFE4 T_362 tFFFFFFE4) (FFFFFFE8 T_238 tFFFFFFE8) (FFFFFFEC T_350 tFFFFFFEC) (FFFFFFF0 T_323 tFFFFFFF0) (FFFFFFF4 T_235 tFFFFFFF4) (FFFFFFF8 T_231 tFFFFFFF8) (FFFFFFFC T_66 tFFFFFFFC) (0 T_2 t0000) (8 T_362 t0008) (C T_238 t000C) (10 T_350 t0010) (14 T_344 t0014)))
T_174: (in 0x00000004 : word32)
  Class: Eq_174
  DataType: word32
  OrigDataType: word32
T_175: (in esp_128 - 0x00000004 : word32)
  Class: Eq_173
  DataType: (ptr Eq_173)
  OrigDataType: word32
T_176: (in 0x004020A6 : ptr32)
  Class: Eq_176
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (struct (0 T_177 t0000)))
T_177: (in Mem0[0x004020A6:word32] : word32)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word32
T_178: (in 0x00000000 : word32)
  Class: Eq_178
  DataType: word32
  OrigDataType: word32
T_179: (in esp_36 + 0x00000000 : word32)
  Class: Eq_179
  DataType: word32
  OrigDataType: word32
T_180: (in Mem38[esp_36 + 0x00000000:word32] : word32)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word32
T_181: (in 0x004020A2 : ptr32)
  Class: Eq_181
  DataType: (ptr Eq_66)
  OrigDataType: (ptr (struct (0 T_182 t0000)))
T_182: (in Mem38[0x004020A2:word32] : word32)
  Class: Eq_66
  DataType: Eq_66
  OrigDataType: word32
T_183: (in 0x00000004 : word32)
  Class: Eq_183
  DataType: word32
  OrigDataType: word32
T_184: (in esp_36 - 0x00000004 : word32)
  Class: Eq_184
  DataType: word32
  OrigDataType: word32
T_185: (in Mem40[esp_36 - 0x00000004:word32] : word32)
  Class: Eq_66
  DataType: Eq_66
  OrigDataType: word32
T_186: (in ReleaseDC : ptr32)
  Class: Eq_186
  DataType: (ptr Eq_186)
  OrigDataType: (ptr (fn T_195 (T_191, T_194)))
T_187: (in signature of ReleaseDC : void)
  Class: Eq_186
  DataType: (ptr Eq_186)
  OrigDataType: 
T_188: (in hWnd : HWND)
  Class: Eq_66
  DataType: Eq_66
  OrigDataType: HWND
T_189: (in hDC : HDC)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: HDC
T_190: (in esp_36 - 0x00000004 : word32)
  Class: Eq_190
  DataType: word32
  OrigDataType: word32
T_191: (in Mem40[esp_36 - 0x00000004:HWND] : HWND)
  Class: Eq_66
  DataType: Eq_66
  OrigDataType: HWND
T_192: (in 0x00000000 : word32)
  Class: Eq_192
  DataType: word32
  OrigDataType: word32
T_193: (in esp_36 + 0x00000000 : word32)
  Class: Eq_193
  DataType: word32
  OrigDataType: word32
T_194: (in Mem40[esp_36 + 0x00000000:HDC] : HDC)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: HDC
T_195: (in ReleaseDC(esp_36->t0000, esp_36->t0000) : word32)
  Class: Eq_195
  DataType: word32
  OrigDataType: word32
T_196: (in 0x004020E2 : ptr32)
  Class: Eq_196
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (struct (0 T_197 t0000)))
T_197: (in Mem40[0x004020E2:word32] : word32)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word32
T_198: (in 0x00000000 : word32)
  Class: Eq_198
  DataType: word32
  OrigDataType: word32
T_199: (in esp_36 + 0x00000000 : word32)
  Class: Eq_199
  DataType: word32
  OrigDataType: word32
T_200: (in Mem44[esp_36 + 0x00000000:word32] : word32)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word32
T_201: (in GlobalFree : ptr32)
  Class: Eq_201
  DataType: (ptr Eq_201)
  OrigDataType: (ptr (fn T_207 (T_206)))
T_202: (in signature of GlobalFree : void)
  Class: Eq_201
  DataType: (ptr Eq_201)
  OrigDataType: 
T_203: (in hMem : HGLOBAL)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: HGLOBAL
T_204: (in 0x00000000 : word32)
  Class: Eq_204
  DataType: word32
  OrigDataType: word32
T_205: (in esp_36 + 0x00000000 : word32)
  Class: Eq_205
  DataType: word32
  OrigDataType: word32
T_206: (in Mem44[esp_36 + 0x00000000:HGLOBAL] : HGLOBAL)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: HGLOBAL
T_207: (in GlobalFree(esp_36->t0000) : word32)
  Class: Eq_207
  DataType: word32
  OrigDataType: word32
T_208: (in 0x004020B2 : ptr32)
  Class: Eq_208
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (struct (0 T_209 t0000)))
T_209: (in Mem44[0x004020B2:word32] : word32)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word32
T_210: (in 0x00000000 : word32)
  Class: Eq_210
  DataType: word32
  OrigDataType: word32
T_211: (in esp_36 + 0x00000000 : word32)
  Class: Eq_211
  DataType: word32
  OrigDataType: word32
T_212: (in Mem48[esp_36 + 0x00000000:word32] : word32)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word32
T_213: (in ExitProcess : ptr32)
  Class: Eq_213
  DataType: (ptr Eq_213)
  OrigDataType: (ptr (fn T_219 (T_218)))
T_214: (in signature of ExitProcess : void)
  Class: Eq_213
  DataType: (ptr Eq_213)
  OrigDataType: 
T_215: (in uExitCode : UINT)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: UINT
T_216: (in 0x00000000 : word32)
  Class: Eq_216
  DataType: word32
  OrigDataType: word32
T_217: (in esp_36 + 0x00000000 : word32)
  Class: Eq_217
  DataType: word32
  OrigDataType: word32
T_218: (in Mem48[esp_36 + 0x00000000:UINT] : UINT)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: UINT
T_219: (in ExitProcess(esp_36->t0000) : void)
  Class: Eq_219
  DataType: void
  OrigDataType: void
T_220: (in ebp : Eq_2)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word32
T_221: (in 0x00000000 : word32)
  Class: Eq_221
  DataType: word32
  OrigDataType: word32
T_222: (in esp_36 + 0x00000000 : word32)
  Class: Eq_222
  DataType: word32
  OrigDataType: word32
T_223: (in Mem52[esp_36 + 0x00000000:word32] : word32)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: word32
T_224: (in ebx : Eq_66)
  Class: Eq_66
  DataType: Eq_66
  OrigDataType: word32
T_225: (in 0x00000004 : word32)
  Class: Eq_225
  DataType: word32
  OrigDataType: word32
T_226: (in esp_36 - 0x00000004 : word32)
  Class: Eq_226
  DataType: word32
  OrigDataType: word32
T_227: (in Mem56[esp_36 - 0x00000004:word32] : word32)
  Class: Eq_66
  DataType: Eq_66
  OrigDataType: word32
T_228: (in esi : word32)
  Class: Eq_228
  DataType: word32
  OrigDataType: word32
T_229: (in 0x00000008 : word32)
  Class: Eq_229
  DataType: word32
  OrigDataType: word32
T_230: (in esp_36 - 0x00000008 : word32)
  Class: Eq_230
  DataType: word32
  OrigDataType: word32
T_231: (in Mem59[esp_36 - 0x00000008:word32] : word32)
  Class: Eq_228
  DataType: word32
  OrigDataType: word32
T_232: (in edi : word32)
  Class: Eq_232
  DataType: word32
  OrigDataType: word32
T_233: (in 0x0000000C : word32)
  Class: Eq_233
  DataType: word32
  OrigDataType: word32
T_234: (in esp_36 - 0x0000000C : word32)
  Class: Eq_234
  DataType: word32
  OrigDataType: word32
T_235: (in Mem62[esp_36 - 0x0000000C:word32] : word32)
  Class: Eq_232
  DataType: word32
  OrigDataType: word32
T_236: (in 0x0000000C : word32)
  Class: Eq_236
  DataType: word32
  OrigDataType: word32
T_237: (in esp_36 + 0x0000000C : word32)
  Class: Eq_237
  DataType: word32
  OrigDataType: word32
T_238: (in Mem62[esp_36 + 0x0000000C:word32] : word32)
  Class: Eq_238
  DataType: Eq_238
  OrigDataType: word32
T_239: (in 0x00000002 : word32)
  Class: Eq_238
  DataType: word32
  OrigDataType: word32
T_240: (in esp_36->t000C == 0x00000002 : bool)
  Class: Eq_240
  DataType: bool
  OrigDataType: bool
T_241: (in 0x004020AA : word32)
  Class: Eq_241
  DataType: (ptr MSG)
  OrigDataType: word32
T_242: (in esp_196 : (ptr Eq_242))
  Class: Eq_242
  DataType: (ptr Eq_242)
  OrigDataType: (ptr (struct (FFFFFFF0 T_291 tFFFFFFF0) (FFFFFFF4 T_287 tFFFFFFF4) (FFFFFFF8 T_283 tFFFFFFF8) (FFFFFFFC T_279 tFFFFFFFC) (0 T_241 t0000)))
T_243: (in 0x00000000 : word32)
  Class: Eq_243
  DataType: word32
  OrigDataType: word32
T_244: (in esp_196 + 0x00000000 : word32)
  Class: Eq_244
  DataType: word32
  OrigDataType: word32
T_245: (in Mem211[esp_196 + 0x00000000:word32] : word32)
  Class: Eq_241
  DataType: Eq_241
  OrigDataType: word32
T_246: (in TranslateMessage : ptr32)
  Class: Eq_246
  DataType: (ptr Eq_246)
  OrigDataType: (ptr (fn T_252 (T_251)))
T_247: (in signature of TranslateMessage : void)
  Class: Eq_246
  DataType: (ptr Eq_246)
  OrigDataType: 
T_248: (in lpMsg : (ptr MSG))
  Class: Eq_241
  DataType: Eq_241
  OrigDataType: (ptr MSG)
T_249: (in 0x00000000 : word32)
  Class: Eq_249
  DataType: word32
  OrigDataType: word32
T_250: (in esp_196 + 0x00000000 : word32)
  Class: Eq_250
  DataType: word32
  OrigDataType: word32
T_251: (in Mem211[esp_196 + 0x00000000:(ptr MSG)] : (ptr MSG))
  Class: Eq_241
  DataType: Eq_241
  OrigDataType: (ptr MSG)
T_252: (in TranslateMessage(esp_196->t0000) : word32)
  Class: Eq_252
  DataType: word32
  OrigDataType: word32
T_253: (in 0x004020AA : word32)
  Class: Eq_241
  DataType: (ptr MSG)
  OrigDataType: word32
T_254: (in 0x00000000 : word32)
  Class: Eq_254
  DataType: word32
  OrigDataType: word32
T_255: (in esp_196 + 0x00000000 : word32)
  Class: Eq_255
  DataType: word32
  OrigDataType: word32
T_256: (in Mem215[esp_196 + 0x00000000:word32] : word32)
  Class: Eq_241
  DataType: Eq_241
  OrigDataType: word32
T_257: (in DispatchMessageW : ptr32)
  Class: Eq_257
  DataType: (ptr Eq_257)
  OrigDataType: (ptr (fn T_263 (T_262)))
T_258: (in signature of DispatchMessageW : void)
  Class: Eq_257
  DataType: (ptr Eq_257)
  OrigDataType: 
T_259: (in lpMsg : (ptr MSG))
  Class: Eq_241
  DataType: Eq_241
  OrigDataType: (ptr MSG)
T_260: (in 0x00000000 : word32)
  Class: Eq_260
  DataType: word32
  OrigDataType: word32
T_261: (in esp_196 + 0x00000000 : word32)
  Class: Eq_261
  DataType: word32
  OrigDataType: word32
T_262: (in Mem215[esp_196 + 0x00000000:(ptr MSG)] : (ptr MSG))
  Class: Eq_241
  DataType: Eq_241
  OrigDataType: (ptr MSG)
T_263: (in DispatchMessageW(esp_196->t0000) : word32)
  Class: Eq_263
  DataType: word32
  OrigDataType: word32
T_264: (in fn0040101B : ptr32)
  Class: Eq_169
  DataType: (ptr Eq_169)
  OrigDataType: (ptr (fn T_265 ()))
T_265: (in fn0040101B() : void)
  Class: Eq_171
  DataType: void
  OrigDataType: void
T_266: (in 0x004020DE : ptr32)
  Class: Eq_266
  DataType: (ptr up32)
  OrigDataType: (ptr (struct (0 T_267 t0000)))
T_267: (in Mem215[0x004020DE:word32] : word32)
  Class: Eq_267
  DataType: up32
  OrigDataType: word32
T_268: (in 0x00000001 : word32)
  Class: Eq_268
  DataType: word32
  OrigDataType: word32
T_269: (in globals->dw4020DE + 0x00000001 : word32)
  Class: Eq_267
  DataType: up32
  OrigDataType: word32
T_270: (in Mem219[0x004020DE:word32] : word32)
  Class: Eq_267
  DataType: up32
  OrigDataType: word32
T_271: (in 0x00000004 : word32)
  Class: Eq_271
  DataType: word32
  OrigDataType: word32
T_272: (in esp_196 + 0x00000004 : word32)
  Class: Eq_27
  DataType: (ptr Eq_27)
  OrigDataType: word32
T_273: (in 0x00000004 : word32)
  Class: Eq_273
  DataType: word32
  OrigDataType: word32
T_274: (in esp_192 - 0x00000004 : word32)
  Class: Eq_242
  DataType: (ptr Eq_242)
  OrigDataType: word32
T_275: (in 0x00000001 : word32)
  Class: Eq_241
  DataType: (ptr MSG)
  OrigDataType: word32
T_276: (in 0x00000000 : word32)
  Class: Eq_276
  DataType: word32
  OrigDataType: word32
T_277: (in esp_196 + 0x00000000 : word32)
  Class: Eq_277
  DataType: word32
  OrigDataType: word32
T_278: (in Mem197[esp_196 + 0x00000000:word32] : word32)
  Class: Eq_241
  DataType: Eq_241
  OrigDataType: word32
T_279: (in 0x00000000 : word32)
  Class: Eq_279
  DataType: word32
  OrigDataType: word32
T_280: (in 0x00000004 : word32)
  Class: Eq_280
  DataType: word32
  OrigDataType: word32
T_281: (in esp_196 - 0x00000004 : word32)
  Class: Eq_281
  DataType: word32
  OrigDataType: word32
T_282: (in Mem199[esp_196 - 0x00000004:word32] : word32)
  Class: Eq_279
  DataType: Eq_279
  OrigDataType: word32
T_283: (in 0x00000000 : word32)
  Class: Eq_283
  DataType: word32
  OrigDataType: word32
T_284: (in 0x00000008 : word32)
  Class: Eq_284
  DataType: word32
  OrigDataType: word32
T_285: (in esp_196 - 0x00000008 : word32)
  Class: Eq_285
  DataType: word32
  OrigDataType: word32
T_286: (in Mem201[esp_196 - 0x00000008:word32] : word32)
  Class: Eq_283
  DataType: Eq_283
  OrigDataType: word32
T_287: (in 0x00000000 : word32)
  Class: Eq_287
  DataType: word32
  OrigDataType: word32
T_288: (in 0x0000000C : word32)
  Class: Eq_288
  DataType: word32
  OrigDataType: word32
T_289: (in esp_196 - 0x0000000C : word32)
  Class: Eq_289
  DataType: word32
  OrigDataType: word32
T_290: (in Mem203[esp_196 - 0x0000000C:word32] : word32)
  Class: Eq_287
  DataType: Eq_287
  OrigDataType: word32
T_291: (in 0x004020AA : word32)
  Class: Eq_291
  DataType: word32
  OrigDataType: word32
T_292: (in 0x00000010 : word32)
  Class: Eq_292
  DataType: word32
  OrigDataType: word32
T_293: (in esp_196 - 0x00000010 : word32)
  Class: Eq_293
  DataType: word32
  OrigDataType: word32
T_294: (in Mem205[esp_196 - 0x00000010:word32] : word32)
  Class: Eq_291
  DataType: Eq_291
  OrigDataType: word32
T_295: (in PeekMessageW : ptr32)
  Class: Eq_295
  DataType: (ptr Eq_295)
  OrigDataType: (ptr (fn T_316 (T_303, T_306, T_309, T_312, T_315)))
T_296: (in signature of PeekMessageW : void)
  Class: Eq_295
  DataType: (ptr Eq_295)
  OrigDataType: 
T_297: (in lpMsg : LPMSG)
  Class: Eq_291
  DataType: Eq_291
  OrigDataType: LPMSG
T_298: (in hWnd : HWND)
  Class: Eq_287
  DataType: Eq_287
  OrigDataType: HWND
T_299: (in wMsgFilterMin : UINT)
  Class: Eq_283
  DataType: Eq_283
  OrigDataType: UINT
T_300: (in wMsgFilterMax : UINT)
  Class: Eq_279
  DataType: Eq_279
  OrigDataType: UINT
T_301: (in wRemoveMsg : UINT)
  Class: Eq_241
  DataType: Eq_241
  OrigDataType: UINT
T_302: (in esp_196 - 0x00000010 : word32)
  Class: Eq_302
  DataType: word32
  OrigDataType: word32
T_303: (in Mem205[esp_196 - 0x00000010:LPMSG] : LPMSG)
  Class: Eq_291
  DataType: Eq_291
  OrigDataType: LPMSG
T_304: (in 12 : int32)
  Class: Eq_304
  DataType: int32
  OrigDataType: int32
T_305: (in esp_196 - 12 : word32)
  Class: Eq_305
  DataType: word32
  OrigDataType: word32
T_306: (in Mem205[esp_196 - 12:HWND] : HWND)
  Class: Eq_287
  DataType: Eq_287
  OrigDataType: HWND
T_307: (in 8 : int32)
  Class: Eq_307
  DataType: int32
  OrigDataType: int32
T_308: (in esp_196 - 8 : word32)
  Class: Eq_308
  DataType: word32
  OrigDataType: word32
T_309: (in Mem205[esp_196 - 8:UINT] : UINT)
  Class: Eq_283
  DataType: Eq_283
  OrigDataType: UINT
T_310: (in 4 : int32)
  Class: Eq_310
  DataType: int32
  OrigDataType: int32
T_311: (in esp_196 - 4 : word32)
  Class: Eq_311
  DataType: word32
  OrigDataType: word32
T_312: (in Mem205[esp_196 - 4:UINT] : UINT)
  Class: Eq_279
  DataType: Eq_279
  OrigDataType: UINT
T_313: (in 0x00000000 : word32)
  Class: Eq_313
  DataType: word32
  OrigDataType: word32
T_314: (in esp_196 + 0x00000000 : word32)
  Class: Eq_314
  DataType: word32
  OrigDataType: word32
T_315: (in Mem205[esp_196 + 0x00000000:UINT] : UINT)
  Class: Eq_241
  DataType: Eq_241
  OrigDataType: UINT
T_316: (in PeekMessageW(esp_196->t0004, esp_196->t0004, esp_196->t0004, esp_196->t0004, esp_196->t0000) : word32)
  Class: Eq_316
  DataType: word32
  OrigDataType: word32
T_317: (in 0x00000004 : word32)
  Class: Eq_317
  DataType: word32
  OrigDataType: word32
T_318: (in esp_196 + 0x00000004 : word32)
  Class: Eq_27
  DataType: (ptr Eq_27)
  OrigDataType: word32
T_319: (in 0x004020AE : ptr32)
  Class: Eq_319
  DataType: (ptr word32)
  OrigDataType: (ptr (struct (0 T_320 t0000)))
T_320: (in Mem205[0x004020AE:word32] : word32)
  Class: Eq_320
  DataType: word32
  OrigDataType: word32
T_321: (in 0x00000012 : word32)
  Class: Eq_320
  DataType: word32
  OrigDataType: word32
T_322: (in globals->dw4020AE == 0x00000012 : bool)
  Class: Eq_322
  DataType: bool
  OrigDataType: bool
T_323: (in 0x00000000 : word32)
  Class: Eq_323
  DataType: int32
  OrigDataType: word32
T_324: (in 0x00000010 : word32)
  Class: Eq_324
  DataType: word32
  OrigDataType: word32
T_325: (in esp_36 - 0x00000010 : word32)
  Class: Eq_325
  DataType: word32
  OrigDataType: word32
T_326: (in Mem101[esp_36 - 0x00000010:word32] : word32)
  Class: Eq_323
  DataType: Eq_323
  OrigDataType: word32
T_327: (in PostQuitMessage : ptr32)
  Class: Eq_327
  DataType: (ptr Eq_327)
  OrigDataType: (ptr (fn T_332 (T_331)))
T_328: (in signature of PostQuitMessage : void)
  Class: Eq_327
  DataType: (ptr Eq_327)
  OrigDataType: 
T_329: (in nExitCode : int32)
  Class: Eq_323
  DataType: Eq_323
  OrigDataType: int32
T_330: (in esp_36 - 0x00000010 : word32)
  Class: Eq_330
  DataType: word32
  OrigDataType: word32
T_331: (in Mem101[esp_36 - 0x00000010:int32] : int32)
  Class: Eq_323
  DataType: Eq_323
  OrigDataType: int32
T_332: (in PostQuitMessage(esp_36->t0010) : void)
  Class: Eq_332
  DataType: void
  OrigDataType: void
T_333: (in 0x0000000C : word32)
  Class: Eq_333
  DataType: word32
  OrigDataType: word32
T_334: (in esp_36 + 0x0000000C : word32)
  Class: Eq_334
  DataType: word32
  OrigDataType: word32
T_335: (in Mem62[esp_36 + 0x0000000C:word32] : word32)
  Class: Eq_238
  DataType: Eq_238
  OrigDataType: word32
T_336: (in 0x00000005 : word32)
  Class: Eq_238
  DataType: word32
  OrigDataType: word32
T_337: (in esp_36->t000C == 0x00000005 : bool)
  Class: Eq_337
  DataType: bool
  OrigDataType: bool
T_338: (in 0x004020DE : ptr32)
  Class: Eq_338
  DataType: (ptr up32)
  OrigDataType: (ptr (struct (0 T_339 t0000)))
T_339: (in Mem62[0x004020DE:word32] : word32)
  Class: Eq_267
  DataType: up32
  OrigDataType: up32
T_340: (in 0x0000000A : word32)
  Class: Eq_267
  DataType: up32
  OrigDataType: up32
T_341: (in globals->dw4020DE <u 0x0000000A : bool)
  Class: Eq_341
  DataType: bool
  OrigDataType: bool
T_342: (in 0x00000014 : word32)
  Class: Eq_342
  DataType: word32
  OrigDataType: word32
T_343: (in esp_36 + 0x00000014 : word32)
  Class: Eq_343
  DataType: word32
  OrigDataType: word32
T_344: (in Mem62[esp_36 + 0x00000014:word32] : word32)
  Class: Eq_323
  DataType: Eq_323
  OrigDataType: word32
T_345: (in 0x00000010 : word32)
  Class: Eq_345
  DataType: word32
  OrigDataType: word32
T_346: (in esp_36 - 0x00000010 : word32)
  Class: Eq_346
  DataType: word32
  OrigDataType: word32
T_347: (in Mem85[esp_36 - 0x00000010:word32] : word32)
  Class: Eq_323
  DataType: Eq_323
  OrigDataType: word32
T_348: (in 0x00000010 : word32)
  Class: Eq_348
  DataType: word32
  OrigDataType: word32
T_349: (in esp_36 + 0x00000010 : word32)
  Class: Eq_349
  DataType: word32
  OrigDataType: word32
T_350: (in Mem85[esp_36 + 0x00000010:word32] : word32)
  Class: Eq_350
  DataType: Eq_350
  OrigDataType: word32
T_351: (in 0x00000014 : word32)
  Class: Eq_351
  DataType: word32
  OrigDataType: word32
T_352: (in esp_36 - 0x00000014 : word32)
  Class: Eq_352
  DataType: word32
  OrigDataType: word32
T_353: (in Mem87[esp_36 - 0x00000014:word32] : word32)
  Class: Eq_350
  DataType: Eq_350
  OrigDataType: word32
T_354: (in 0x0000000C : word32)
  Class: Eq_354
  DataType: word32
  OrigDataType: word32
T_355: (in esp_36 + 0x0000000C : word32)
  Class: Eq_355
  DataType: word32
  OrigDataType: word32
T_356: (in Mem87[esp_36 + 0x0000000C:word32] : word32)
  Class: Eq_238
  DataType: Eq_238
  OrigDataType: word32
T_357: (in 0x00000018 : word32)
  Class: Eq_357
  DataType: word32
  OrigDataType: word32
T_358: (in esp_36 - 0x00000018 : word32)
  Class: Eq_358
  DataType: word32
  OrigDataType: word32
T_359: (in Mem89[esp_36 - 0x00000018:word32] : word32)
  Class: Eq_238
  DataType: Eq_238
  OrigDataType: word32
T_360: (in 0x00000008 : word32)
  Class: Eq_360
  DataType: word32
  OrigDataType: word32
T_361: (in esp_36 + 0x00000008 : word32)
  Class: Eq_361
  DataType: word32
  OrigDataType: word32
T_362: (in Mem89[esp_36 + 0x00000008:word32] : word32)
  Class: Eq_362
  DataType: Eq_362
  OrigDataType: word32
T_363: (in 0x0000001C : word32)
  Class: Eq_363
  DataType: word32
  OrigDataType: word32
T_364: (in esp_36 - 0x0000001C : word32)
  Class: Eq_364
  DataType: word32
  OrigDataType: word32
T_365: (in Mem91[esp_36 - 0x0000001C:word32] : word32)
  Class: Eq_362
  DataType: Eq_362
  OrigDataType: word32
T_366: (in DefWindowProcW : ptr32)
  Class: Eq_366
  DataType: (ptr Eq_366)
  OrigDataType: (ptr (fn T_383 (T_373, T_376, T_379, T_382)))
T_367: (in signature of DefWindowProcW : void)
  Class: Eq_366
  DataType: (ptr Eq_366)
  OrigDataType: 
T_368: (in hWnd : HWND)
  Class: Eq_362
  DataType: Eq_362
  OrigDataType: HWND
T_369: (in Msg : UINT)
  Class: Eq_238
  DataType: Eq_238
  OrigDataType: UINT
T_370: (in wParam : WPARAM)
  Class: Eq_350
  DataType: Eq_350
  OrigDataType: WPARAM
T_371: (in lParam : LPARAM)
  Class: Eq_323
  DataType: Eq_323
  OrigDataType: LPARAM
T_372: (in esp_36 - 0x0000001C : word32)
  Class: Eq_372
  DataType: word32
  OrigDataType: word32
T_373: (in Mem91[esp_36 - 0x0000001C:HWND] : HWND)
  Class: Eq_362
  DataType: Eq_362
  OrigDataType: HWND
T_374: (in 24 : int32)
  Class: Eq_374
  DataType: int32
  OrigDataType: int32
T_375: (in esp_36 - 24 : word32)
  Class: Eq_375
  DataType: word32
  OrigDataType: word32
T_376: (in Mem91[esp_36 - 24:UINT] : UINT)
  Class: Eq_238
  DataType: Eq_238
  OrigDataType: UINT
T_377: (in 20 : int32)
  Class: Eq_377
  DataType: int32
  OrigDataType: int32
T_378: (in esp_36 - 20 : word32)
  Class: Eq_378
  DataType: word32
  OrigDataType: word32
T_379: (in Mem91[esp_36 - 20:WPARAM] : WPARAM)
  Class: Eq_350
  DataType: Eq_350
  OrigDataType: WPARAM
T_380: (in 16 : int32)
  Class: Eq_380
  DataType: int32
  OrigDataType: int32
T_381: (in esp_36 - 16 : word32)
  Class: Eq_381
  DataType: word32
  OrigDataType: word32
T_382: (in Mem91[esp_36 - 16:LPARAM] : LPARAM)
  Class: Eq_323
  DataType: Eq_323
  OrigDataType: LPARAM
T_383: (in DefWindowProcW(esp_36->t0014, esp_36->t0014, esp_36->t0014, esp_36->t0010) : word32)
  Class: Eq_383
  DataType: word32
  OrigDataType: word32
T_384: (in fn0040101B : ptr32)
  Class: Eq_169
  DataType: (ptr Eq_169)
  OrigDataType: (ptr (fn T_385 ()))
T_385: (in fn0040101B() : void)
  Class: Eq_171
  DataType: void
  OrigDataType: void
T_386:
  Class: Eq_386
  DataType: Eq_386
  OrigDataType: 
T_387:
  Class: Eq_387
  DataType: int32
  OrigDataType: 
T_388:
  Class: Eq_388
  DataType: int32
  OrigDataType: 
T_389:
  Class: Eq_389
  DataType: int32
  OrigDataType: 
T_390:
  Class: Eq_390
  DataType: int32
  OrigDataType: 
T_391:
  Class: Eq_391
  DataType: int32
  OrigDataType: 
T_392:
  Class: Eq_392
  DataType: int32
  OrigDataType: 
T_393:
  Class: Eq_393
  DataType: int32
  OrigDataType: 
T_394:
  Class: Eq_394
  DataType: Eq_394
  OrigDataType: 
T_395:
  Class: Eq_395
  DataType: int32
  OrigDataType: 
T_396:
  Class: Eq_396
  DataType: int32
  OrigDataType: 
T_397:
  Class: Eq_397
  DataType: int32
  OrigDataType: 
T_398:
  Class: Eq_398
  DataType: int32
  OrigDataType: 
T_399:
  Class: Eq_399
  DataType: Eq_399
  OrigDataType: 
T_400:
  Class: Eq_400
  DataType: Eq_400
  OrigDataType: 
T_401:
  Class: Eq_401
  DataType: Eq_401
  OrigDataType: 
T_402:
  Class: Eq_402
  DataType: Eq_402
  OrigDataType: 
*/
typedef Eq_74 Eq_1Eq_66 Eq_1Eq_2 Eq_1Eq_2 Eq_1Eq_2 Eq_1Eq_2 Eq_1struct Globals {
	Eq_74 t40208A;	// 40208A
	word32 dw40208E;	// 40208E
	word32 dw402092;	// 402092
	Eq_66 t4020A2;	// 4020A2
	Eq_2 t4020A6;	// 4020A6
	word32 dw4020AE;	// 4020AE
	Eq_2 t4020B2;	// 4020B2
	word32 dw4020D6;	// 4020D6
	Eq_2 t4020DA;	// 4020DA
	up32 dw4020DE;	// 4020DE
	Eq_2 t4020E2;	// 4020E2
} Eq_1;

typedef union Eq_2 {
	Eq_386* u0;
	 HDC u1;
	 HGLOBAL u2;
	 UINT u3;
} Eq_2;

typedef union Eq_8 {
	uint32 u0;
	byte u1;
} Eq_8;

typedef struct Eq_12 {
	uint8 b0000;	// 0
	uint8 b0001;	// 1
} Eq_12;

typedef Eq_74 Eq_27Eq_66 Eq_27struct Eq_27 {
	word32 dwFFFFFFF0;	// FFFFFFF0
	word32 dwFFFFFFF4;	// FFFFFFF4
	Eq_74 tFFFFFFF8;	// FFFFFFF8
	Eq_66 tFFFFFFFC;	// FFFFFFFC
} Eq_27;

typedef Eq_2 (Eq_29)(Eq_31, Eq_32);

typedef union Eq_31 {
	word32 u0;
	 UINT u1;
} Eq_31;

typedef union Eq_32 {
	word32 u0;
	 SIZE_T u1;
} Eq_32;

typedef word32 (Eq_47)(Eq_49, Eq_50, Eq_51, Eq_52);

typedef union Eq_49 {
	word32 u0;
	 HWND u1;
} Eq_49;

typedef union Eq_50 {
	word32 u0;
	 LPCWSTR u1;
} Eq_50;

typedef union Eq_51 {
	word32 u0;
	 LPCWSTR u1;
} Eq_51;

typedef union Eq_52 {
	word32 u0;
	 UINT u1;
} Eq_52;

typedef union Eq_66 {
	word32 u0;
	 HWND u1;
	 LPVOID u2;
} Eq_66;

typedef Eq_74 (Eq_70)(Eq_72);

typedef union Eq_72 {
	 WNDCLASSW* u0;
	 LPCWSTR u1;
} Eq_72;

typedef union Eq_74 {
	word32 u0;
	 HINSTANCE u1;
} Eq_74;

typedef word32 (Eq_85)(Eq_87, Eq_72);

typedef union Eq_87 {
	word32 u0;
	 HINSTANCE u1;
} Eq_87;

typedef word32 (Eq_101)(Eq_87, Eq_72);

typedef word32 (Eq_112)(Eq_72);

typedef Eq_66 (Eq_128)(Eq_130, Eq_131, Eq_132, Eq_133, int32, int32, int32, int32, Eq_138, Eq_139, Eq_74, Eq_66);

typedef union Eq_130 {
	word32 u0;
	 DWORD u1;
} Eq_130;

typedef union Eq_131 {
	word32 u0;
	 LPCWSTR u1;
} Eq_131;

typedef union Eq_132 {
	word32 u0;
	 LPCWSTR u1;
} Eq_132;

typedef union Eq_133 {
	word32 u0;
	 DWORD u1;
} Eq_133;

typedef union Eq_138 {
	word32 u0;
	 HWND u1;
} Eq_138;

typedef union Eq_139 {
	word32 u0;
	 HMENU u1;
} Eq_139;

typedef Eq_2 (Eq_160)(Eq_66);

typedef void (Eq_166)();

typedef void (Eq_169)();

typedef Eq_362 Eq_173Eq_238 Eq_173Eq_350 Eq_173Eq_323 Eq_173Eq_66 Eq_173Eq_2 Eq_173Eq_362 Eq_173Eq_238 Eq_173Eq_350 Eq_173Eq_323 Eq_173struct Eq_173 {
	Eq_362 tFFFFFFE4;	// FFFFFFE4
	Eq_238 tFFFFFFE8;	// FFFFFFE8
	Eq_350 tFFFFFFEC;	// FFFFFFEC
	Eq_323 tFFFFFFF0;	// FFFFFFF0
	word32 dwFFFFFFF4;	// FFFFFFF4
	word32 dwFFFFFFF8;	// FFFFFFF8
	Eq_66 tFFFFFFFC;	// FFFFFFFC
	Eq_2 t0000;	// 0
	Eq_362 t0008;	// 8
	Eq_238 t000C;	// C
	Eq_350 t0010;	// 10
	Eq_323 t0014;	// 14
} Eq_173;

typedef word32 (Eq_186)(Eq_66, Eq_2);

typedef word32 (Eq_201)(Eq_2);

typedef void (Eq_213)(Eq_2);

typedef union Eq_238 {
	word32 u0;
	 UINT u1;
} Eq_238;

typedef union Eq_241 {
	 MSG* u0;
	 UINT u1;
} Eq_241;

typedef Eq_291 Eq_242Eq_287 Eq_242Eq_283 Eq_242Eq_279 Eq_242Eq_241 Eq_242Eq_27 Eq_242struct Eq_242 {
	Eq_291 tFFFFFFF0;	// FFFFFFF0
	Eq_287 tFFFFFFF4;	// FFFFFFF4
	Eq_283 tFFFFFFF8;	// FFFFFFF8
	Eq_279 tFFFFFFFC;	// FFFFFFFC
	Eq_241 t0000;	// 0
	Eq_27 t0004;	// 4
} Eq_242;

typedef word32 (Eq_246)(Eq_241);

typedef word32 (Eq_257)(Eq_241);

typedef union Eq_279 {
	word32 u0;
	 UINT u1;
} Eq_279;

typedef union Eq_283 {
	word32 u0;
	 UINT u1;
} Eq_283;

typedef union Eq_287 {
	word32 u0;
	 HWND u1;
} Eq_287;

typedef union Eq_291 {
	word32 u0;
	 LPMSG u1;
} Eq_291;

typedef word32 (Eq_295)(Eq_291, Eq_287, Eq_283, Eq_279, Eq_241);

typedef union Eq_323 {
	int32 u0;
	 LPARAM u1;
} Eq_323;

typedef void (Eq_327)(Eq_323);

typedef union Eq_350 {
	word32 u0;
	 WPARAM u1;
} Eq_350;

typedef union Eq_362 {
	word32 u0;
	 HWND u1;
} Eq_362;

typedef word32 (Eq_366)(Eq_362, Eq_238, Eq_350, Eq_323);

typedef Eq_8 Eq_386struct Eq_386 {	// size: 1 1
	Eq_8 t0000;	// 0
} Eq_386;

typedef UINTWNDPROCHINSTANCEHICONHCURSORHBRUSHLPCWSTRLPCWSTRstruct tagWNDCLASSW {
	UINT;	// 0
	WNDPROC;	// 4
	int32 cbClsExtra;	// 8
	int32 cbWndExtra;	// C
	HINSTANCE;	// 10
	HICON;	// 14
	HCURSOR;	// 18
	HBRUSH;	// 1C
	LPCWSTR;	// 20
	LPCWSTR;	// 24
} Eq_394;

typedef LONGLONGstruct tagPOINT {
	LONG;	// 0
	LONG;	// 4
} Eq_399;

typedef HWNDUINTWPARAMLPARAMDWORDPOINTstruct tagMSG {
	HWND;	// 0
	UINT;	// 4
	WPARAM;	// 8
	LPARAM;	// C
	DWORD;	// 10
	POINT;	// 18
} Eq_400;

typedef LONGLONGstruct tagPOINT {
	LONG;	// 0
	LONG;	// 4
} Eq_401;

typedef HWNDUINTWPARAMLPARAMDWORDPOINTstruct tagMSG {
	HWND;	// 0
	UINT;	// 4
	WPARAM;	// 8
	LPARAM;	// C
	DWORD;	// 10
	POINT;	// 18
} Eq_402;

