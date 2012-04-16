; ------------------------------------------------------
; Colorstate 76
; Written by Franck "hitchhikr" Charlet / Rebels
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
						.586
						.model	flat,stdcall
						option	casemap:none

; ------------------------------------------------------
; Includes
						include windows.inc
						include kernel32.inc
						include user32.inc
						include d3dx9.inc

						include DX9_Masm.inc		; Largely incomplete

						includelib kernel32.lib
						includelib user32.lib
						includelib d3d9.lib
						includelib d3dx9.lib

; ------------------------------------------------------
; Constants
;GRAB_SCREENSHOT			equ		1

SCREENX					equ		1024
SCREENY					equ		768
SCREENDEPTH				equ		D3DFMT_A8R8G8B8		; 32 bits

NOISE_WIDTH				equ		18

LOGO_WIDTH				equ		30
LOGO_HEIGHT				equ		5	

TYPE_PLANEVERTEX		equ		D3DFVF_XYZ or D3DFVF_TEX1
PLANEVERTEX_SIZE		equ		(5 * 4)

; ------------------------------------------------------
; Structures

; ------------------------------------------------------
; Stack datas
Screen					equ		0
OldTime					equ		Screen + 4
HTimerFreq				equ		OldTime + 8
PixelShader				equ		HTimerFreq + 8
Texture_Noise			equ		PixelShader + 4
Texture_Logo			equ		Texture_Noise + 4
Wobble_Pos				equ		Texture_Logo + 4
Wobble_Pos2				equ		Wobble_Pos + 4
Datas_Size				equ		Wobble_Pos2 + 4

						.code

; ---------------------------------------------------------
; Program entry point
EntryPoint:				lea		ebp, [esp - (010000h + Datas_Size)]		; Above 64k of space + room for calls stuffs
						lea		eax, [ebp + PixelShader]

						push	ebp										; ExitProcess
		
						push	ebp										; CreateDevice
						push	offset Present_Buffer
						push	D3DCREATE_SOFTWARE_VERTEXPROCESSING
		
						push	D3D_SDK_VERSION							; Direct3DCreate9
		
						push	0										; D3DXCompileShader
						push	0
						push	eax
						push	0
						push	offset ShaderProfileName
						push	offset ShaderEntryName
						push	0
						push	0
						push	(fShader - Shader)
						push	offset Shader
		
						push	0										; ShowCursor
		
						push	0										; CreateWindowEx
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
						mov		ebx, eax
						call	ShowCursor
		
						call	D3DXCompileShader
		
						; ------------------------------------------------------
						call	Direct3DCreate9
		
						push	ebx
						push	D3DDEVTYPE_HAL
						push	D3DADAPTER_DEFAULT						; (0)
						push	eax
						mov		ebx, [eax]
						call	[ebx + IDirect3D9.CreateDevice]
		
						lea		eax, [ebp + PixelShader]
						push	eax
						mov		eax, [eax]
						push	eax
						mov		ebx, [eax]
						call	[ebx + ID3DXConstantTable.GetBufferPointer]
		
						push	eax
						mov		eax,[ebp]
						push	eax
						mov		ebx,[eax]
						call	[ebx + IDirect3DDevice9.CreatePixelShader]
		
						lea		eax, [ebp + Texture_Logo]
						push	eax
						push	0
						push	0
						push	0
						push	D3DX_FILTER_NONE
						push	D3DX_FILTER_NONE
						push	D3DPOOL_DEFAULT
						push	0
						push	0
						push	0
						push	0
						push	0
						push	512
						push	offset Logo

						lea		eax, [ebp + Texture_Noise]
						push	eax
						push	0
						push	0
						push	0
						push	D3DX_FILTER_LINEAR
						push	D3DX_FILTER_LINEAR
						push	D3DPOOL_DEFAULT
						push	0
						push	0
						push	0
						push	0
						push	0
						push	512
						push	offset Noise

						mov		eax, [ebp]
						push	eax
						call	D3DXCreateTextureFromFileInMemoryEx

						mov		eax, [ebp]
						push	eax
						call	D3DXCreateTextureFromFileInMemoryEx

						lea		eax, [ebp + OldTime]
						push	eax
						call	QueryPerformanceCounter

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
						fild	qword ptr [ebp + OldTime]
						lea		eax, [ebp + OldTime]
						push	eax
						call	QueryPerformanceCounter
						fild	qword ptr [ebp + OldTime]
						fsubp	st(1), st(0)
						lea		eax, [ebp + HTimerFreq]
						push	eax
						call	QueryPerformanceFrequency
						fild	qword ptr [ebp + HTimerFreq]
						fdivp	st(1), st(0)
		
						; ------------------------------------------------------
						; Animate
						fmul	dword ptr [Wobble_Speed]
						fadd	dword ptr [ebp + Wobble_Pos]
						fst		dword ptr [ebp + Wobble_Pos]
						fstp	dword ptr [ebp + Wobble_Pos2]
		
						; ------------------------------------------------------
						; Display the rectangle
						lea		ecx, [ebp + Wobble_Pos]
		
						push	VK_ESCAPE							; GetAsyncKeyState
		
						push	0									; Present
						push	0
						push	0
						push	0
						mov		eax, [ebp]
						push	eax
						mov		ebx, [eax]
		
						push	eax									; EndScene
		
						push	PLANEVERTEX_SIZE					; DrawPrimitiveUP
						push	offset Square
						push	2
						push	D3DPT_TRIANGLEFAN
						push	eax
		
						push	dword ptr [ebp + Texture_Noise]		; SetTexture
						push	0
						push	eax
		
						push	dword ptr [ebp + Texture_Logo]		; SetTexture
						push	1
						push	eax
		
						push	TYPE_PLANEVERTEX					; SetFVF
						push	eax
		
						push	dword ptr [ebp + PixelShader]		; SetPixelShader
						push	eax
		
						push	1									; (Nbr) SetPixelShaderConstantF
						push	ecx
						push	0									; First constant register number
						push	eax
		
						push	eax
						call	[ebx + IDirect3DDevice9.BeginScene]
						call	[ebx + IDirect3DDevice9.SetPixelShaderConstantF]
						call	[ebx + IDirect3DDevice9.SetPixelShader]
						call	[ebx + IDirect3DDevice9.SetFVF]
						call	[ebx + IDirect3DDevice9.SetTexture]
						call	[ebx + IDirect3DDevice9.SetTexture]
						call	[ebx + IDirect3DDevice9.DrawPrimitiveUP]
						call	[ebx + IDirect3DDevice9.EndScene]
						call	[ebx + IDirect3DDevice9.Present]
		
						call	GetAsyncKeyState
						test	eax, eax
						jz		MainLoop
						call	ExitProcess

; ------------------------------------------------------
; Datas
ifdef GRAB_SCREENSHOT
Msg						db		100 dup (0)
endif
						.data

Logo					db		0
						db		0
						db		3
						db		0, 0, 0, 0, 0
						dw		0
						dw		0
						dw		LOGO_WIDTH
						dw		LOGO_HEIGHT
						db		8
						db		0

						db		100,100,100,100,000,000,000,100,100,100,000,100,100,100,100,000,000,000,100,100,100,000,100,100,000,000,000,100,100,100
						db		100,100,000,100,100,000,100,100,000,000,000,100,100,000,100,100,000,100,100,000,000,000,100,100,000,000,100,100,000,000
						db		100,100,100,100,000,000,100,100,100,000,000,100,100,100,100,000,000,100,100,100,000,000,100,100,000,000,100,100,100,100
						db		100,100,000,100,100,000,100,100,000,000,000,100,100,000,100,100,000,100,100,000,000,000,100,100,000,000,000,000,100,100
						db		100,100,000,100,100,000,100,100,100,100,000,100,100,100,100,100,000,100,100,100,100,000,100,100,100,000,100,100,100,000

Noise					db		0
						db		0
						db		3
						db		0, 0, 0, 0, 0
						dw		0
						dw		0
						dw		NOISE_WIDTH
						dw		NOISE_WIDTH
						db		8
						db		0

						; -------------------------------

ClassName				db		"edi"
ShaderEntryName			db		"t", 0
ShaderProfileName		db		"ps_2_0", 0
Shader					db		"sampler z;"
						db		"sampler s;"
						db		"float4 f;"
						db		"float4 t(float2 x:texcoord):color{"
						db		"sincos(f.x,f.z,f.w);"
						db		"float4 y={x,0,0};"
						db		"float4 a=lerp(f.w,f.z,dot(x,x))*y;"
						db		"y=lerp(.5,3,dot(x,x))*y;"
						db		"y-=x.y+tex2D(z,y+f.y);"
						db		"y=sin(x.x)*sin(x.x)/tex2D(z,y);"
						db		"y.z=.5;"
						db		"y=2/dot(y,y)*y;"
						db		"y=tex2D(z,y)/y.z*.3;"
						db		"a.z=a.x;"
						db		"a.x=(a.z*f.w+a.y*f.z)*(f.w+1.5);"
						db		"a.y=(a.y*f.w-a.z*f.z)*(f.w+1.5);"
						db		"f.x+=a.x*3;"
						db		"f.y+=a.y*10;"
						db		"return(a-f.z)*tex2D(s,f)+y;"
						db		"}"

						assume	nothing
fShader:

Wobble_Speed			real4	-0.5

Square					real4	-500.0, -500.0,  0.0, -500.0, -500.0
						real4	-500.0,  500.0,  0.0, -500.0,  500.0
						real4	 500.0,  500.0,  0.0,  500.0,  500.0
						real4	 500.0, -500.0,  0.0,  500.0, -500.0

Present_Buffer			dd		SCREENX					;dpBackBufferWidth
						dd		SCREENY					;dpBackBufferHeight
						dd		SCREENDEPTH				;dpBackBufferFormat
						dd		0						;dpBackBufferCount
						dd		0						;dpMultiSampleType
						dd		0						;dpMultiSampleQuality
						dd		D3DSWAPEFFECT_DISCARD	;dpSwapEffect
						dd		0						;dphDeviceWindow
ifdef DEBUG
						dd		TRUE					;dpWindowed
else
						dd		0						;dpWindowed
endif
						dd		0						;dpEnableAutoDepthStencil
						dd		0						;dpAutoDepthStencilFormat (D3DFMT_D16)
						dd		0						;dpFlags
						dd		0						;dpFullScreen_RefreshRateInHz
						dd		0						;dpFullScreen_PresentationInterval

; ------------------------------------------------------
						end		EntryPoint
