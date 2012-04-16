; monjori.asm
; /mic, 2009
; ------------------------------------------------------
; 1kPack v0.6 - Framework
; Written by Franck "hitchhikr" Charlet / Neural
; ------------------------------------------------------
; Thanks to rbraz for the trianglelist trick.
; ------------------------------------------------------
; buildblock RELEASE
; CAPT "[SOURCEDIR]nasmw.exe" -f bin "%2" -o "%1.bin" -s -O9
; CAPT "[SOURCEDIR]1kpack.exe" "%1.bin"
; buildblockend

; ------------------------------------------------------
; Header
                            bits    32

; ------------------------------------------------------
; Includes
                            %include "Dx9_nasm.inc"

; ------------------------------------------------------
; Constants
;%define GRAB_SCREENSHOT
;%define DEBUG
WS_EX_TOPMOST               equ     0x8
VK_ESCAPE                   equ     0x1b

SCREENX                     equ     1024
SCREENY                     equ     768
SCREENDEPTH                 equ     D3DFMT_A8R8G8B8     ; 32 bits

D3DFVF_XYZRHW_SIZE          equ     (4 * 4)

BASE                        equ     0x420000

; Those are located inside the depacker
POS_fnc_exit                equ     0x410090
POS_fnc_D3DXCompileShader   equ     0x410094
POS_fnc_LoadLibrary         equ     0x4100b4
POS_fnc_GetProcAddress      equ     0x4100b8
POS_fnc_QueryPerformanceCounter equ 0x4100bc

; !!! Only valid for d3dx9_30.dll !!!
D3DX_D3DXCompileShader      equ     0xda6de
D3DX_D3DXCreateTextureFromFileInMemoryEx equ    (D3DX_D3DXCompileShader - 0xc1341)
D3DX_D3DXCreateTexture      equ     (D3DX_D3DXCompileShader - 0xbe4a2)

; ------------------------------------------------------
; Structures

; ------------------------------------------------------
; Vars datas
Device                      equ     0
OldTime                             equ     Device + 4
CurrTime			    equ     OldTime + 8
Delta			            equ	    CurrTime + 8
HTimerFreq                          equ     Delta + 4 
PixelShader                 equ     HTimerFreq + 8

                            .code

; ---------------------------------------------------------
; Program entry point
; base address = 0x420000
; edi contains D3DXCompileShader
EntryPoint:                 ;sub     edi, D3DX_D3DXCreateTextureFromFileInMemoryEx
                            ;; stack contains D3DXCreateTextureFromFileInMemoryEx
                            ;push    edi

                            ; Import the functions we need
                            mov     edi, table_dlls + BASE
                            push    3                               ; Amount of functions in the 1st DLL
                            pop     ebx
load_dlls:                  push    edi
                            call    dword [POS_fnc_LoadLibrary]
                            repne   scasb                           ; go to end of string
                            push    ebx
load_functions:             push    eax
                            push    edi
                            push    eax
                            call    dword [POS_fnc_GetProcAddress]
                            stosd
                            pop     eax
                            repne   scasb                           ; go to end of string
                            dec     ebx
                            jnz     load_functions
                            pop     ebx
                            dec     ebx
                            jnz     load_dlls
                            ; ----------------------------------------------------

                            mov     esi, API_CreateWindowEx + BASE
                            mov     edi, POS_fnc_QueryPerformanceCounter
                            mov     ebp, Vars + 128 + BASE          ; MUST BE ALIGNED !!

                            lea     eax, [ebp + PixelShader]

                            push    ebp                             ; CreateDevice
                            push    Present_Buffer + BASE
                            push    D3DCREATE_SOFTWARE_VERTEXPROCESSING

                            push    D3D_SDK_VERSION                 ; Direct3DCreate9

                            push    0                               ; D3DXCompileShader
                            push    0
                            push    eax
                            push    0
                            push    PShaderProfileName + BASE
                            push    ProcedureName + BASE
                            push    0
                            push    0
                            push    (fPShader - PShader)
                            push    PShader + BASE

                            push    0                               ; SetCursor

                            push    0                               ; CreateWindowEx
                            push    0
                            push    0
                            push    0
                            push    0
                            push    0
                            push    0
                            push    0
                            push    0
                            push    0
                            push    ClassName + BASE
                            push    WS_EX_TOPMOST
                            call    dword [esi]                     ; + (API_CreateWindowEx - API_CreateWindowEx)]
                            mov     ebx, eax
                            call    dword [esi + (API_SetCursor - API_CreateWindowEx)]

                            call    dword [edi + (POS_fnc_D3DXCompileShader - POS_fnc_QueryPerformanceCounter)]

                            ; ------------------------------------------------------
                            call    dword [esi + (API_Direct3DCreate9 - API_CreateWindowEx)]

                            push    ebx
                            push    D3DDEVTYPE_HAL
                            push    D3DADAPTER_DEFAULT              ; (0)
                            push    eax
                            mov     ebx, [eax]
                            call    [ebx + IDirect3D9.CreateDevice]

                            lea     eax, [ebp + PixelShader]
                            push    eax
                            mov     eax, [eax]
                            push    eax
                            mov     ebx, [eax]
                            call    [ebx + ID3DXConstantTable.GetBufferPointer]
                            push    eax
                            mov     eax, [ebp]
                            push    eax
                            mov     ebx, [eax]
                            call    [ebx + IDirect3DDevice9.CreatePixelShader]

;                            pop     ebx                             ; ebx = D3DXCreateTextureFromFileInMemoryEx

                            lea     eax, [ebp + OldTime]
                            push    eax
                            call    dword [edi + (POS_fnc_QueryPerformanceCounter - POS_fnc_QueryPerformanceCounter)]

; ------------------------------------------------------
; Program loop
MainLoop:
                            ; ------------------------------------------------------
                            ; Obtain the frames timer
                            fild    qword [ebp + OldTime]
                            lea     eax, [ebp + CurrTime]
                            push    eax
                            call    dword [edi + (POS_fnc_QueryPerformanceCounter - POS_fnc_QueryPerformanceCounter)]
                            fild    qword [ebp + CurrTime]
                            fsubp   st1, st0
                            lea     eax, [ebp + HTimerFreq]
                            push    eax
                            call    dword [esi + (API_QueryPerformanceFrequency - API_CreateWindowEx)]
                            fild    qword [ebp + HTimerFreq]
                            fdivp   st1, st0

                            push    VK_ESCAPE                       ; GetAsyncKeyState
                            ; ------------------------------------------------------
                            ; Animate
                            push    dword 1			    ; SetPixelShaderConstantF
                            lea     ebx,[ebp + Delta]
                            fstp    dword [ebx]
                            push    ebx
                            push    dword 0

                            ; ------------------------------------------------------
                            ; Display a rectangle

                            mov     eax, [ebp]
                            push    eax
                            mov     ebx, [eax]
                            push    0                               ; Present
                            push    0
                            push    0
                            push    0
			    push    eax

                            push    eax                             ; EndScene

                            push    D3DFVF_XYZRHW_SIZE              ; DrawPrimitiveUP
                            push    BigTriangle + BASE
                            push    1
                            push    D3DPT_TRIANGLELIST
                            push    eax

                            push    D3DFVF_XYZRHW                   ; SetFVF
                            push    eax

                            push    dword [ebp + PixelShader]       ; SetPixelShader
                            push    eax

                            push    eax
                            call    [ebx + IDirect3DDevice9.BeginScene]
                            call    [ebx + IDirect3DDevice9.SetPixelShader]
                            call    [ebx + IDirect3DDevice9.SetFVF]
                            call    [ebx + IDirect3DDevice9.DrawPrimitiveUP]
                            call    [ebx + IDirect3DDevice9.EndScene]
                            call    [ebx + IDirect3DDevice9.Present]
                            call    [ebx + IDirect3DDevice9.SetPixelShaderConstantF]
                            call    dword [esi + (API_GetAsyncKeyState - API_CreateWindowEx)]
                            sahf
                            jns     MainLoop
                            call    dword [edi + (POS_fnc_exit - POS_fnc_QueryPerformanceCounter)]

; ------------------------------------------------------
; Datas

ClassName:                  db      "edi"
ProcedureName:              db      "t", 0
PShaderProfileName:         db      "ps_3_0", 0

PShader:                    db "float a:register(c0);"
                            db "float4 t(float2 x:vpos):color"
                            db "{"
                            db "x.x/=1024;"       ; convert to 0.0..1.0
                            db "x.y/=768;"
			    db "a*=40;"
			    db "float d,e,f,g=1.0/40,h,i,p,q;" ; 1.0 is used instead of 1 to avoid an integer division
		            db "e=400*x.x;"		; set effect resolution
		            db "f=400*x.y;"		; ...
		            db "i=200+sin(e*g+a/150)*20;d=200+cos(f*g/2)*18+cos(e*g)*7;" ; distort centre
		            db "p=sqrt(pow(i-e,2)+pow(d-f,2));"
		            db "q=f/p;" 
		            db "e=(p*cos(q))-a/2;f=(p*sin(q))-a/2;"
		            db "d=sin(e*g)*176+sin(e*g)*164+p;"
		            db "h=((f+d)+a/2)*g;"
		            db "i=cos(h+p*x.x/1.3)*(e+e+a)+cos(q*g*6)*(p+h/3);" 
		            db "h=sin(f*g)*144-sin(e*g)*212*x.x;"
		            db "h=(h+(f-e)*q+sin(p-(a+h)/7)*10+i/4)*g;"
		            db "i+=cos(h*2.3*sin(a/350-q))*184*sin(q-(p*4.3+a/12)*g)+tan(p*g+h)*184*cos(p*g+h);"
		            db "i=fmod(i/5.6,256)/64;if(i<0)i+=4;"
		            db "if(i>=2)i=4-i;"
		            db "d=p/350;d+=sin(d*d*8)*0.52;"
		            db "f=(sin(a*g)+1)/2;"
		            db "return float4(f*i/1.6,i/2+d/13,i,1)*d*x.x+float4(i/1.3+d/8,i/2+d/18,i,1)*d*(1-x.x);"
                            db "}"
fPShader:

                            ; -------------------------------
table_dlls:
                            ; 3 functions
                            db      "user32", 0
API_CreateWindowEx:         db      "CreateWindowExA", 0
API_SetCursor:              db      "SetCursor", 0
API_GetAsyncKeyState:       db      "GetAsyncKeyState", 0

                            ; 2 functions
                            db      "d3d9", 0
API_Direct3DCreate9:        db      "Direct3DCreate9", 0
                            dd      0
                            db      0

                            ; 1 function
                            db      "kernel32", 0
API_QueryPerformanceFrequency:
                            db      "QueryPerformanceFrequency", 0

Present_Buffer:             dd      SCREENX                     ; dpBackBufferWidth
                            dd      SCREENY                     ; dpBackBufferHeight
                            dd      SCREENDEPTH                 ; dpBackBufferFormat
                            dd      0                           ; dpBackBufferCount
                            dd      0                           ; dpMultiSampleType
                            dd      0                           ; dpMultiSampleQuality
BigTriangle:                dd      D3DSWAPEFFECT_DISCARD       ; dpSwapEffect
                            dd      0                           ; dphDeviceWindow
                            %ifdef DEBUG
                            dd      1                           ; dpWindowed / Windowed = 1 / Fullscreen = 0
                            %else
                            dd      0                           ; dpWindowed / Windowed = 1 / Fullscreen = 0
                            %endif
                            dd      0                           ; dpEnableAutoDepthStencil
                            dd      2048.0                      ; dpAutoDepthStencilFormat (D3DFMT_D16)
                            dd      0                           ; dpFlags
                            dd      0                           ; dpFullScreen_RefreshRateInHz
                            dd      0                           ; dpFullScreen_PresentationInterval
                            dd      0
                            dd      2048.0

                            ; Note: the packer strips any 0 located
                            ; at the end of the file (including the flt above)
                            ; this can eventually be used as a bss section
Vars:
; ------------------------------------------------------
