; ------------------------------------------------------
; Metalwork
; Written by Franck "hitchhikr" Charlet / Neural
; ------------------------------------------------------
; buildblock RELEASE
; 	CAPT [BINDIR]\ml.exe /c /coff /I"[INCLUDEDIR]" "%2"
; 	CAPT [BINDIR]\Link.exe /STACK:0x200000,0x200000 /LIBPATH:"[LIBDIR]" /SUBSYSTEM:WINDOWS "%1.obj"
; buildblockend
; buildblock DEBUG
; 	CAPT [BINDIR]\ml.exe /Zd /Zi /c /coff /DDEBUG=1 /I"[INCLUDEDIR]" "%2"
; 	CAPT [BINDIR]\Link.exe /STACK:0x200000,0x200000 /DEBUG /IGNORE:4089 /FILEALIGN:0x200 /DEBUGTYPE:CV /INCREMENTAL:NO /LIBPATH:"[LIBDIR]" /SUBSYSTEM:WINDOWS "%1.obj"
; buildblockend

; ------------------------------------------------------
; Headers
				.486
				.model	flat,stdcall
				option	casemap:none

; ------------------------------------------------------
; Includes
				include windows.inc
				include kernel32.inc
				include user32.inc
				include d3dx9.inc
				include winmm.inc
				
				include DX9_Masm.inc		; Largely incomplete

				includelib kernel32.lib
				includelib user32.lib
				includelib d3d9.lib
				includelib d3dx9.lib
				includelib winmm.lib

; ------------------------------------------------------
; Constants
;GRAB_SCREENSHOT		equ	1			; 39% in mspaint

SCREENX				equ	1024
SCREENY				equ	768
SCREENDEPTH			equ	D3DFMT_A8R8G8B8		; 32 bits

TRUE				equ	1
FALSE				equ	0
NULL				equ	0

TYPE_PLANEVERTEX		equ	D3DFVF_XYZ or D3DFVF_TEX1
PLANEVERTEX_SIZE		equ	(5 * 4)

; ------------------------------------------------------
; Structures

; ------------------------------------------------------
; Stack datas
Screen				equ	0
OldTime				equ	Screen + 4
PixelShader			equ	OldTime + 4
PixelShader2			equ	PixelShader + 4
CurShader			equ	PixelShader2 + 4
Texture				equ	CurShader + 4
Shader_FlipFlop			equ	Texture + 4
Sens_Fade			equ	Shader_FlipFlop + 4
Scroll_Pos			equ	Sens_Fade + 4
Fade				equ	Scroll_Pos + 4
Datas_Size			equ	Fade + 4

				.code

; ---------------------------------------------------------
; Program entry point
EntryPoint:			lea	ebp, [esp - (010000h + Datas_Size)]		; Above 64k of space + room for calls stuffs

				push	offset OrthoGon_Matrix				; SetTransform
				push	D3DTS_PROJECTION

				push	ebp						; CreateDevice
				push	offset Present_Buffer
				push	D3DCREATE_SOFTWARE_VERTEXPROCESSING

				push	D3D_SDK_VERSION					; Direct3DCreate9

				push	0						; D3DXCompileShader
				push	0
				lea	eax, [ebp + PixelShader2]
				push	eax
				push	0
				push	offset ShaderProfileName
				push	offset ShaderEntryName
				push	0
				push	0
				push	(fShader2 - Shader2)
				push	offset Shader2

				push	0						; D3DXCompileShader
				push	0
				lea	eax, [ebp + PixelShader]
				push	eax
				push	0
				push	offset ShaderProfileName
				push	offset ShaderEntryName
				push	0
				push	0
				push	(fShader - Shader)
				push	offset Shader

				push	0						; ShowCursor

				push	0						; CreateWindowEx
				push	0
				push	0
				push	0
				push	0
				push	0
				push	0
				push	0
	 			push	0
				push	0
				push	offset ClassName
				push	WS_EX_TOPMOST
				call	CreateWindowEx
				mov	ebx, eax
				call	ShowCursor

				call	D3DXCompileShader
				call	D3DXCompileShader

				; ------------------------------------------------------
				call	Direct3DCreate9

				push	ebx
				push	D3DDEVTYPE_HAL
				push	D3DADAPTER_DEFAULT				; (0)
				push	eax
				mov	ebx, [eax]
				call	[ebx + IDirect3D9.CreateDevice]

				lea	eax, [ebp + PixelShader]
				push	eax
				mov	eax, [eax]
				push	eax
				mov	ebx, [eax]
				call	[ebx + ID3DXConstantTable.GetBufferPointer]
				push	eax

				lea	eax, [ebp + PixelShader2]
				push	eax
				mov	eax, [eax]
				push	eax
				mov	ebx, [eax]
				call	[ebx + ID3DXConstantTable.GetBufferPointer]
				push	eax

				mov	eax,[ebp]
				push	eax
				mov	ebx,[eax]
				call	[ebx + IDirect3DDevice9.CreatePixelShader]

				mov	eax,[ebp]
				push	eax
				mov	ebx,[eax]
				call	[ebx + IDirect3DDevice9.CreatePixelShader]

				mov	eax, [ebp]
				push	eax
				mov	ebx, [eax]
				call	[ebx + IDirect3DDevice9.SetTransform]

				lea	eax, [ebp + Texture]
				push	eax
				push	512
				push	offset Picture
				mov	eax, [ebp]				; For redundancy purpose only
				push	eax
				call	D3DXCreateTextureFromFileInMemory

				mov	eax, [ebp + PixelShader]
				mov	[ebp + CurShader], eax

				; ------------------------------------------------------
				call	timeGetTime
				mov	[ebp + OldTime], eax

; ------------------------------------------------------
; Program loop
MainLoop:

ifdef GRAB_SCREENSHOT
				push	PM_REMOVE
				push	0
				push	0
				push	NULL
				push	offset Msg
				call	PeekMessage
				.if	eax != 0
					push	offset Msg
					call	TranslateMessage
				.endif
endif

				; ------------------------------------------------------
				; Obtain the frame timer
				call	timeGetTime
				mov	ebx, [ebp + OldTime]
				mov	[ebp + OldTime], eax
				sub	eax, ebx
				push	eax
				fild	dword ptr [esp]
				pop	eax

				; ****************
				; * Animate here *
				; ****************
				fmul	dword ptr [Scroll_Speed]
				fld	st(0)
				fadd	dword ptr [ebp + Scroll_Pos]
				fcom	dword ptr [Time_Effects]
				fnstsw	ax
				sahf
				setnb	byte ptr [ebp + Sens_Fade]
				fstp	dword ptr [ebp + Scroll_Pos]
				jb	Fade_In					; (The flag aren't changed before this) 
				fchs
				fadd	dword ptr [ebp + Fade]
				ftst
				fnstsw	ax
				sahf
				ja	Fade_Out
				; Change shader when screen is black
				mov	eax, [ebp + PixelShader]
				xor	dword ptr [ebp + Shader_FlipFlop], 1
				jz	Set_Shader_2
				mov	eax, [ebp + PixelShader2]
Set_Shader_2:			mov	[ebp + CurShader], eax
				fsub	st(0), st(0)
				fst	qword ptr [ebp + Sens_Fade]		; Qword to clear Scroll_Pos at the same time
				fst	qword ptr [ebp + Fade]			; For redundancy purpose only
Fade_In:			fadd	dword ptr [ebp + Fade]
Fade_Out:			fstp	dword ptr [ebp + Fade]

				; -------------------------

				lea	ecx, [ebp + Scroll_Pos]

				push	VK_ESCAPE				; GetAsyncKeyState

				push	0					; Present
				push	0
				push	0
				push	0
				mov	eax, [ebp]
				push	eax
				mov	ebx, [eax]

				push	eax					; EndScene

				; Draw the rectangle
				push	PLANEVERTEX_SIZE			; DrawPrimitiveUP
				push	offset Square
				push	2
				push	D3DPT_TRIANGLEFAN
				push	eax

				push	dword ptr [ebp + Texture]		; SetTexture
				push	0
				push	eax

				push	TYPE_PLANEVERTEX			; SetFVF
				push	eax

				push	dword ptr [ebp + CurShader]		; SetPixelShader
				push	eax

				push	2					; (Nbr) SetPixelShaderConstantF
				push	ecx
				push	0					; First constant register number
				push	eax
				
				push	eax
				call	[ebx + IDirect3DDevice9.BeginScene]
				call	[ebx + IDirect3DDevice9.SetPixelShaderConstantF]
				call	[ebx + IDirect3DDevice9.SetPixelShader]
				call	[ebx + IDirect3DDevice9.SetFVF]
				call	[ebx + IDirect3DDevice9.SetTexture]
				call	[ebx + IDirect3DDevice9.DrawPrimitiveUP]
				call	[ebx + IDirect3DDevice9.EndScene]
				call	[ebx + IDirect3DDevice9.Present]

				call	GetAsyncKeyState
				test	eax, eax
				jz	MainLoop
				ret

				;Needed for sound
				;push	0
				;call	ExitProcess

; ------------------------------------------------------
; Datas
ifdef GRAB_SCREENSHOT
Msg				db	100 dup (0)
endif
				.data

; TGA header
Picture				db	0
				db	0
				db	3
				db	0, 0, 0, 0, 0
				dw	0
				dw	0
				dw	18
				dw	18
				db	8
				db	0

				; -------------------------------

ClassName			db	"EDI"
ShaderEntryName			db	"T", 0
ShaderProfileName		db	"ps_2_0", 0

; Raycasted tunnel
Shader2				db	"float2 t;"
				db	"sampler z;"
				db	"float4 T(float2 x:TEXCOORD):COLOR{"
				db	"float4 y=2/dot(x,x)*float4(x.x,x.y,.2,2);"
				db	"y.y=atan2(y.y,y);"
				db	"y.x=y.z+t.x*.2;"
				db	"return tex2D(z,y)*y.z*clamp(t.y,0,1);"
				db	"}"
				db	0

				assume	nothing
fShader2:

; Some metallic shit
Shader				db	"float2 t;"
				db	"sampler z;"
				db	"float4 T(float2 x:TEXCOORD):COLOR{"
				db	"float4 y=atan2(x.x,x.y);"
				db	"y=sin((length(x)+2*y.x)*22-2*t.x)-2*sin(y.x);"
				db	"return tex2D(z,y*.2+x)*y.z*clamp(t.y,0,1);"
				db	"}"
				db	0

				assume	nothing
fShader:

OrthoGon_Matrix			dd	0.002
				dd	0
				dd	0
				dd	0

				dd	0
Scroll_Speed			dd	0.002
				dd	0
				dd	0

				dd	0
				dd	0
				dd	0
				dd	0

				dd	0
				dd	0
				dd	0
				dd	1.0

Time_Effects			dd	15.0

Square				dd	-500.0, -500.0,  0.0, -1.0, -1.0
				dd	-500.0,  500.0,  0.0, -1.0,  1.0
				dd	 500.0,  500.0,  0.0,  1.0,  1.0
				dd	 500.0, -500.0,  0.0,  1.0, -1.0

Present_Buffer			dd	SCREENX			;dpBackBufferWidth
				dd	SCREENY			;dpBackBufferHeight
				dd	SCREENDEPTH		;dpBackBufferFormat
				dd	0			;dpBackBufferCount
				dd	0			;dpMultiSampleType
				dd	0			;dpMultiSampleQuality
				dd	D3DSWAPEFFECT_DISCARD	;dpSwapEffect
				dd	0			;dphDeviceWindow
ifdef DEBUG
				dd	TRUE			;dpWindowed
else
				dd	0			;dpWindowed
endif
				dd	0			;dpEnableAutoDepthStencil
				dd	0			;dpAutoDepthStencilFormat (D3DFMT_D16)
				dd	0			;dpFlags
				dd	0			;dpFullScreen_RefreshRateInHz
				dd	0			;dpFullScreen_PresentationInterval

; ------------------------------------------------------
				end	EntryPoint
