;============================================================================
; Source of RayCast by Tbyte
;
; Processor : 386+ with FPU
; Op. sys.  : Windows95+ with DirectX 7.0
; Compiler  : MASM 6.15
; Linker    : LINK 5.12
;
;============================================================================

		.386
		.model	flat,stdcall
		option	casemap: none	; case sensitive

include 	\masm32\include\windows.inc
include 	\masm32\include\user32.inc
include 	\masm32\include\kernel32.inc
include		ddraw.inc

; used libraries
includelib 	\masm32\lib\user32.lib
includelib 	\masm32\lib\kernel32.lib
includelib 	\psdk\lib\ddraw.lib

SCREENX		equ	320
SCREENY		equ	240
BPP		equ	16
PERSP		equ	160.0
OBJNUM		equ	6
SHADOBJNUM	equ	3
SHSUBDIV	equ	2
SUBDIV		equ	(1 shl SHSUBDIV)
FLT_099		equ	03f7d70a4h	; 0.99
FLT_MIN1	equ	0bf800000h	; -1.0

OBJ_SPHERE	equ	1
OBJ_CYLINDER	equ	2
OBJ_FLAT	equ	3

FPSTEST		equ	1

OBJECT		struct

objtype		dword	?
x		dword	?
y		dword	?
z		dword	?
r		dword	?
red		byte	?
green		byte	?
blue		byte	?
res		byte	?

OBJECT		ends

PIXEL		struct

uObjNum		dword	?
bCastShad	dword	?
nRed		dword	?
nGreen		dword	?
nBlue		dword	?

PIXEL		ends

		.data	; predefined data section

IID_IDirectDraw7	GUID	<15e65ec0h,3b9ch,11d2h,<0b9h,2fh,0,60h,97h,97h,0eah,5bh>>
lpcstrWinName	byte	'RayCast',0
lpcstrClassName	byte	'Cast',0
		IFDEF	FPSTEST
lpcsrtFPSFormat	byte	'%u.%u FPS',13,10,'Coded by Tbyte',13,10,'Thanks for testing to Biodread and Nobo',13,10,'Special thanks to Pohár for his remarks',0
		ENDIF

		align	4

objs		OBJECT	<OBJ_SPHERE,0.0,0.0,300.0,100.0,16,16,12>
		OBJECT	<OBJ_SPHERE,150.0,0.0,250.0,50.0,0,0,12>
		OBJECT	<OBJ_SPHERE,-150.0,-50.0,270.0,75.0,16,0,0>
		OBJECT	<OBJ_CYLINDER,0.0,0.0,300.0,800.0,0,16,0>
		OBJECT	<OBJ_FLAT,0.0,-400.0,0.0,1000.0,16,16,0>
		OBJECT	<OBJ_FLAT,0.0,400.0,0.0,1000.0,0,16,12>

		IFDEF	FPSTEST
dwFrameCount	dword	0
		ENDIF
z		dword	PERSP

; float consts
lxmul		dword	500.0
lymul		dword	150.0
lxfdiv		dword	2000.0
lyfdiv		dword	2500.0
lzadd		dword	-400.0

objxmul		dword	100.0
objymul		dword	75.0
objxfdiv	dword	3000.0
objyfdiv	dword	4000.0
objzfdiv	dword	2500.0
objzadd		dword	300.0

xstart		dword	-160.0
ystart		dword	-120.0

redmul		dword	15.0
greenmul	dword	47.0
bluemul		dword	19.0
shredmul	dword	251658240.0
shgreenmul	dword	788529152.0
shbluemul	dword	318767104.0

FLT_MAX		dword	3.402823466e+38
FLT_2		dword	2.0
FLT_4		dword	4.0

		.data?	; undefined data section

hInst		dword	?
hMainWnd	dword	?
msg		MSG	<>
wc 		WNDCLASS<>
lpDD		dword	?
lpDDSPrimary	dword	?
lpDDSBack	dword	?
ddsd		DDSURFACEDESC2<>

		IFDEF	FPSTEST
lpsrtFPS	byte	256 dup (?)
		ENDIF

lpcPixels	PIXEL	(SCREENY/SUBDIV+1)*(SCREENX/SUBDIV+1) dup (<>)

a		dword	?
b		dword	?
d		dword	?
t		dword	?
x		dword	?
y		dword	?
currx		dword	?
curry		dword	?
currz		dword	?
clx		dword	?
cly		dword	?
clz		dword	?
nx		dword	?
ny		dword	?
nz		dword	?
lx		dword	?
ly		dword	?
lz		dword	?
cosa		dword	?
maxt		dword	?

sx		dword	?
sy		dword	?
csrx		dword	?
csgx		dword	?
csbx		dword	?
cerx		dword	?
cegx		dword	?
cebx		dword	?
dcsrx		dword	?
dcsgx		dword	?
dcsbx		dword	?
dcerx		dword	?
dcegx		dword	?
dcebx		dword	?

red		dword	?
green		dword	?
blue		dword	?
dred		dword	?
dgreen		dword	?
dblue		dword	?

uCurrObj	dword	?

dwStTickCount	dword	?
dwCurrTickCount	dword	?

dummy		dword	?

		.code	; code section

Trace		proc

		fld	FLT_MAX
		fstp	maxt
		mov	ecx,OBJNUM
		mov	esi,offset objs
next_obj:	cmp	(OBJECT ptr [esi]).objtype,OBJ_SPHERE
		jnz	no_sphere

		fld	z
		fld	y
		fld	x
		fld	st(2)
		fld	st(2)
		fld	st(2)
		fmul	st,st
		fxch
		fmul	st,st
		fadd
		fxch
		fmul	st,st
		fadd
		fst	a
		fld	(OBJECT ptr [esi]).r
		fmul	st,st
		fld	(OBJECT ptr [esi]).z
		fmul	st,st
		fld	(OBJECT ptr [esi]).y
		fmul	st,st
		fld	(OBJECT ptr [esi]).x
		fmul	st,st
		fadd
		fadd
		fsubr
		fmul
		fmul	FLT_4
		fxch	st(3)
		fmul	(OBJECT ptr [esi]).z
		fxch
		fmul	(OBJECT ptr [esi]).x
		fadd
		fxch
		fmul	(OBJECT ptr [esi]).y
		fadd
		fmul	FLT_2
		fst	b
		fmul	st,st
		fsubr
		fst	d
		cmp	d,0
		jle	sph_not_found
		fsqrt
		fsubr	b
		fld	a
		fmul	FLT_2
		fdiv
		fstp	t
		jmp	obj_end
sph_not_found:	fstp	dummy
		mov	t,FLT_MIN1
		jmp	obj_end

no_sphere:	cmp	(OBJECT ptr [esi]).objtype,OBJ_CYLINDER
		jnz	no_cylinder

		fld	z
		fld	x
		fld	st(1)
		fld	st(1)
		fmul	st,st
		fxch
		fmul	st,st
		fadd
		fst	a
		fld	(OBJECT ptr [esi]).r
		fmul	st,st
		fld	(OBJECT ptr [esi]).z
		fmul	st,st
		fld	(OBJECT ptr [esi]).x
		fmul	st,st
		fadd
		fsubr
		fmul
		fmul	FLT_4
		fxch	st(2)
		fmul	(OBJECT ptr [esi]).z
		fxch
		fmul	(OBJECT ptr [esi]).x
		fadd
		fmul	FLT_2
		fst	b
		fmul	st,st
		fsubr
		fst	d
		cmp	d,0
		jle	cyl_not_found
		fsqrt
		fadd	b
		fld	a
		fmul	FLT_2
		fdiv
		fstp	t
		jmp	obj_end
cyl_not_found:	fstp	dummy
		mov	t,FLT_MIN1
		jmp	obj_end

no_cylinder:	fld	(OBJECT ptr [esi]).y
		fdiv	y
		fstp	t

obj_end:	mov	eax,t
		test	eax,eax
		js	skip_set
		cmp	eax,maxt
		jge	skip_set
		mov	maxt,eax
		mov	uCurrObj,esi
skip_set:	add	esi,sizeof(OBJECT)
		dec	ecx
		jnz	next_obj

		fld	maxt
		fld	st
		fld	st
		fmul	x
		fst	currx
		fsubr	lx
		fst	clx
		fmul	st,st
		fxch
		fmul	y
		fst	curry
		fsubr	ly
		fst	cly
		fmul	st,st
		fadd
		fxch
		fmul	z
		fst	currz
		fsubr	lz
		fst	clz
		fmul	st,st
		fadd
		fstp	a
		xor	edx,edx

		mov	esi,offset objs
		mov	ecx,SHADOBJNUM
next_shobj:	fld	(OBJECT ptr [esi]).z
		fsubr	lz
		fld	(OBJECT ptr [esi]).y
		fsubr	ly
		fld	(OBJECT ptr [esi]).x
		fsubr	lx
		fld	st(2)
		fld	st(2)
		fld	st(2)
		fmul	st,st
		fxch
		fmul	st,st
		fadd
		fxch
		fmul	st,st
		fadd
		fld	(OBJECT ptr [esi]).r
		fmul	st,st
		fsub
		fmul	a
		fmul	FLT_4
		fxch	st(3)
		fmul	clz
		fxch
		fmul	clx
		fadd
		fxch
		fmul	cly
		fadd
		fmul	FLT_2
		fst	b
		fmul	st,st
		fsubr
		fst	d
		cmp	d,0
		jle	ssph_not_found
		fsqrt
		fsubr	b
		fld	a
		fmul	FLT_2
		fdiv
		fstp	t
		mov	eax,t
		test	eax,eax
		js	shobj_end
		cmp	eax,FLT_099
		jg	shobj_end
		inc	edx
		mov	cosa,0
		ret
ssph_not_found:	fstp	dummy
shobj_end:	add	esi,sizeof(OBJECT)
		dec	ecx
		jnz	next_shobj

		xor	eax,eax
		mov	esi,uCurrObj
		cmp	(OBJECT ptr [esi]).objtype,OBJ_SPHERE
		jnz	norm_no_sphere
		fld	(OBJECT ptr [esi]).x
		fsubr	currx
		fstp	nx
		fld	(OBJECT ptr [esi]).y
		fsubr	curry
		fstp	ny
		fld	(OBJECT ptr [esi]).z
		fsubr	currz
		fstp	nz
		jmp	end_norm
norm_no_sphere:	cmp	(OBJECT ptr [esi]).objtype,OBJ_CYLINDER
		jnz	norm_no_cyl
		fld	(OBJECT ptr [esi]).x
		fsub	currx
		fstp	nx
		fld	(OBJECT ptr [esi]).z
		fsub	currz
		fstp	nz
		mov	ny,eax
		jmp	end_norm
norm_no_cyl:	mov	nx,eax
		mov	nz,eax
		fld	(OBJECT ptr [esi]).r
		cmp	(OBJECT ptr [esi]).y,eax
		js	floor
		fchs
floor:		fstp	ny
end_norm:	fld	clz
		fld	cly
		fld	clx
		fld	st(2)
		fld	st(2)
		fld	st(2)
		fmul	st,st
		fxch
		fmul	st,st
		fadd
		fxch
		fmul	st,st
		fadd
		fsqrt
		fmul	(OBJECT ptr [esi]).r
		fxch	st(3)
		fmul	nz
		fxch
		fmul	nx
		fadd
		fxch
		fmul	ny
		fadd
		fdivr
		fstp	cosa
		cmp	cosa,eax
		jns	trace_end
		mov	cosa,eax

trace_end:	ret

Trace		endp

Render		proc

		mov	edi,ddsd.lpSurface
		mov	ebx,offset lpcPixels

		push	ystart
		pop	y
		mov	ecx,SCREENY/SUBDIV+1
nx_pix_row:	push	ecx
		push	xstart
		pop	x
		mov	ecx,SCREENX/SUBDIV+1
nx_pix:		push	ecx
		call	Trace
		mov	esi,uCurrObj
		mov	(PIXEL ptr [ebx]).bCastShad,edx
		fld	cosa
		fld	st
		fld	st

		fmul	shredmul
		fistp	(PIXEL ptr [ebx]).nRed
		movzx	eax,(OBJECT ptr [esi]).red
		shl	eax,24
		add	eax,8388608		; prevent rounding error
		add	(PIXEL ptr [ebx]).nRed,eax

		fmul	shgreenmul
		fistp	(PIXEL ptr [ebx]).nGreen
		movzx	eax,(OBJECT ptr [esi]).green
		shl	eax,24
		add	eax,8388608		; prevent rounding error
		add	(PIXEL ptr [ebx]).nGreen,eax

		fmul	shbluemul
		fistp	(PIXEL ptr [ebx]).nBlue
		movzx	eax,(OBJECT ptr [esi]).blue
		shl	eax,24
		add	eax,8388608		; prevent rounding error
		add	(PIXEL ptr [ebx]).nBlue,eax

		mov	(PIXEL ptr [ebx]).uObjNum,esi
		add	ebx,sizeof(PIXEL)
		fld	x
		fadd	FLT_4
		fstp	x
		pop	ecx
		loop	nx_pix
		fld	y
		fadd	FLT_4
		fstp	y
		pop	ecx
		dec	ecx
		jnz	nx_pix_row

		mov	ebx,offset lpcPixels
		push	0
		pop	sy
		mov	ecx,SCREENY/SUBDIV
nx_sub_row:	push	ecx
		push	0
		pop	sx
		mov	ecx,SCREENX/SUBDIV
nx_sub_pix:	push	ecx
		push	edi
		mov	eax,(PIXEL ptr [ebx]).bCastShad
		cmp	eax,(PIXEL ptr [ebx+sizeof(PIXEL)]).bCastShad
		jnz	cast
		cmp	eax,(PIXEL ptr [ebx+(SCREENX/SUBDIV+1)*sizeof(PIXEL)]).bCastShad
		jnz	cast
		cmp	eax,(PIXEL ptr [ebx+(SCREENX/SUBDIV+2)*sizeof(PIXEL)]).bCastShad
		jnz	cast
		mov	eax,(PIXEL ptr [ebx]).uObjNum
		cmp	eax,(PIXEL ptr [ebx+sizeof(PIXEL)]).uObjNum
		jnz	cast
		cmp	eax,(PIXEL ptr [ebx+(SCREENX/SUBDIV+1)*sizeof(PIXEL)]).uObjNum
		jnz	cast
		cmp	eax,(PIXEL ptr [ebx+(SCREENX/SUBDIV+2)*sizeof(PIXEL)]).uObjNum
		jnz	cast

		push	(PIXEL ptr [ebx]).nRed
		pop	csrx
		push	(PIXEL ptr [ebx]).nGreen
		pop	csgx
		push	(PIXEL ptr [ebx]).nBlue
		pop	csbx
		push	(PIXEL ptr [ebx]+sizeof(PIXEL)).nRed
		pop	cerx
		push	(PIXEL ptr [ebx]+sizeof(PIXEL)).nGreen
		pop	cegx
		push	(PIXEL ptr [ebx]+sizeof(PIXEL)).nBlue
		pop	cebx
		mov	eax,(PIXEL ptr [ebx]+(SCREENX/SUBDIV+1)*sizeof(PIXEL)).nRed
		sub	eax,csrx
		sar	eax,SHSUBDIV
		mov	dcsrx,eax
		mov	eax,(PIXEL ptr [ebx]+(SCREENX/SUBDIV+1)*sizeof(PIXEL)).nGreen
		sub	eax,csgx
		sar	eax,SHSUBDIV
		mov	dcsgx,eax
		mov	eax,(PIXEL ptr [ebx]+(SCREENX/SUBDIV+1)*sizeof(PIXEL)).nBlue
		sub	eax,csbx
		sar	eax,SHSUBDIV
		mov	dcsbx,eax
		mov	eax,(PIXEL ptr [ebx]+(SCREENX/SUBDIV+2)*sizeof(PIXEL)).nRed
		sub	eax,cerx
		sar	eax,SHSUBDIV
		mov	dcerx,eax
		mov	eax,(PIXEL ptr [ebx]+(SCREENX/SUBDIV+2)*sizeof(PIXEL)).nGreen
		sub	eax,cegx
		sar	eax,SHSUBDIV
		mov	dcegx,eax
		mov	eax,(PIXEL ptr [ebx]+(SCREENX/SUBDIV+2)*sizeof(PIXEL)).nBlue
		sub	eax,cebx
		sar	eax,SHSUBDIV
		mov	dcebx,eax

		mov	ecx,SUBDIV
		push	ebx
next_row:	push	ecx
		mov	ebx,csrx
		mov	edx,csgx
		mov	ebp,csbx
		mov	eax,cerx
		sub	eax,ebx
		sar	eax,SHSUBDIV
		mov	dred,eax
		mov	eax,cegx
		sub	eax,edx
		sar	eax,SHSUBDIV
		mov	dgreen,eax
		mov	eax,cebx
		sub	eax,ebp
		sar	eax,SHSUBDIV
		mov	dblue,eax

		mov	ecx,SUBDIV
next_one:	xor	eax,eax
		mov	esi,ebp
		shr	esi,24
		or	eax,esi
		mov	esi,edx
		and	esi,0ff000000h
		shr	esi,19
		or	eax,esi
		mov	esi,ebx
		and	esi,0ff000000h
		shr	esi,13
		or	eax,esi
		add	ebx,dred
		add	edx,dgreen
		add	ebp,dblue
		mov	[edi],eax
		inc	edi
		inc	edi
		loop	next_one

		add	edi,ddsd.lPitch
		sub	edi,SUBDIV*2

		mov	eax,csrx
		add	eax,dcsrx
		mov	csrx,eax

		mov	eax,csgx
		add	eax,dcsgx
		mov	csgx,eax

		mov	eax,csbx
		add	eax,dcsbx
		mov	csbx,eax

		mov	eax,cerx
		add	eax,dcerx
		mov	cerx,eax

		mov	eax,cegx
		add	eax,dcegx
		mov	cegx,eax

		mov	eax,cebx
		add	eax,dcebx
		mov	cebx,eax

		pop	ecx
		dec	ecx
		jnz	next_row
		pop	ebx
		jmp	end_sub_pix

cast:		fild	sy
		fadd	ystart
		fstp	y
		mov	ecx,SUBDIV
tnext_row:	push	ecx
		fild	sx
		fadd	xstart
		fstp	x
		mov	ecx,SUBDIV
tnext_one:	push	ecx
		call	Trace
		mov	esi,uCurrObj
		fld	cosa
		fld	st
		fld	st
		fmul	redmul
		fistp	red
		mov	eax,red
		add	al,(OBJECT ptr [esi]).red
		shl	eax,6
		fmul	greenmul
		fistp	green
		or	eax,green
		add	al,(OBJECT ptr [esi]).green
		shl	eax,5
		fmul	bluemul
		fistp	blue
		or	eax,blue
		add	al,(OBJECT ptr [esi]).blue
		mov	[edi],eax
		fld1
		fld	x
		fadd
		fstp	x
		inc	edi
		inc	edi
		pop	ecx
		loop	tnext_one
		fld1
		fld	y
		fadd
		fstp	y
		add	edi,ddsd.lPitch
		sub	edi,SUBDIV*2
		pop	ecx
		dec	ecx
		jnz	tnext_row

end_sub_pix:	add	sx,SUBDIV
		add	ebx,sizeof(PIXEL)
		pop	edi
		add	edi,SUBDIV*2
		pop	ecx
		dec	ecx
		jnz	nx_sub_pix

		add	sy,SUBDIV
		add	ebx,sizeof(PIXEL)
		mov	eax,ddsd.lPitch
		shl	eax,SHSUBDIV
		sub	eax,2*SCREENX
		add	edi,eax

		pop	ecx
		dec	ecx
		jnz	nx_sub_row

		ret

Render		endp

WindowProc	proc	hWnd: dword,uMsg: dword,wParam: dword,lParam: dword

		cmp	uMsg,WM_DESTROY
		jnz	nxtmsg0
		invoke	PostQuitMessage,NULL
		xor	eax,eax
		ret

nxtmsg0:	cmp	uMsg,WM_KEYDOWN
		jnz	nxtmsg1
		invoke	DestroyWindow,hMainWnd
		xor	eax,eax
		ret

nxtmsg1:	invoke	DefWindowProc,hWnd,uMsg,wParam,lParam
		ret

WindowProc	endp

main:		mov	eax,sizeof(DDSURFACEDESC2)
		mov	ecx,(offset dummy-offset hInst)
		mov	edi,offset hMainWnd
		xor	al,al
		rep	stosb		; fill undefined section with zeros
		invoke	GetModuleHandle,NULL
		mov	hInst,eax
		mov	wc.lpfnWndProc,offset WindowProc
		mov	wc.hInstance,eax
		mov	wc.hbrBackground,COLOR_BTNFACE+1
		mov	wc.lpszClassName,offset lpcstrClassName
		invoke	LoadIcon,NULL,IDI_APPLICATION
		mov	wc.hIcon,eax
		invoke	LoadCursor,NULL,IDC_ARROW
		mov	wc.hCursor,eax
		invoke	RegisterClass,offset wc
		invoke	CreateWindowEx,0,offset lpcstrClassName,offset lpcstrWinName,0,0,0,320,240,NULL,NULL,hInst,NULL
		mov	hMainWnd,eax
		invoke	DirectDrawCreateEx,NULL,offset lpDD,offset IID_IDirectDraw7,NULL
		invoke	ShowCursor,FALSE

		mov	eax,lpDD
		mov	eax,[eax]
		push	DDSCL_EXCLUSIVE or DDSCL_FULLSCREEN
		push	hMainWnd
		push	lpDD
		call	(IDirectDraw7 ptr [eax])._SetCooperativeLevel

		mov	eax,lpDD
		mov	eax,[eax]
		push	0
		push	0
		push	BPP
		push	SCREENY
		push	SCREENX
		push	lpDD
		call	(IDirectDraw7 ptr [eax])._SetDisplayMode

		mov	ddsd.dwSize,sizeof(DDSURFACEDESC2)
		mov	ddsd.dwFlags,DDSD_CAPS or DDSD_BACKBUFFERCOUNT
		mov	ddsd.ddsCaps.dwCaps,DDSCAPS_COMPLEX or DDSCAPS_FLIP or DDSCAPS_PRIMARYSURFACE
		mov	ddsd.dwBackBufferCount,1
		mov	eax,lpDD
		mov	eax,[eax]
		push	NULL
		push	offset lpDDSPrimary
		push	offset ddsd
		push	lpDD
		call	(IDirectDraw7 ptr [eax])._CreateSurface

		mov	ddsd.ddsCaps.dwCaps,DDSCAPS_BACKBUFFER
		mov	eax,lpDDSPrimary
		mov	eax,[eax]
		push	offset lpDDSBack
		push	offset ddsd.ddsCaps
		push	lpDDSPrimary
		call	(IDirectDrawSurface7 ptr [eax])._GetAttachedSurface

		invoke	GetTickCount
		mov	dwStTickCount,eax
		fninit

messageloop:	invoke	PeekMessage,offset msg,NULL,0,0,PM_REMOVE
		test	eax,eax
		jz	nomessage
		cmp	msg.message,WM_QUIT
		jz	exitloop
		invoke	TranslateMessage,offset msg
		invoke	DispatchMessage,offset msg
		jmp	messageloop

nomessage:	mov	eax,lpDDSBack
		mov	eax,[eax]
		push	NULL
		push	DDLOCK_WAIT
		push	offset ddsd
		push	NULL
		push	lpDDSBack
		call	(IDirectDrawSurface7 ptr [eax])._Lock

		invoke	GetTickCount
		sub	eax,dwStTickCount
		mov	dwCurrTickCount,eax
		fild	dwCurrTickCount
		fld	st
		fdiv	lxfdiv
		fsincos
		fmul	lxmul
		fstp	lx
		fmul	lxmul
		fadd	lzadd
		fstp	lz
		fdiv	lyfdiv
		fsin
		fmul	lymul
		fstp	ly

		mov	eax,dwCurrTickCount
		mov	ecx,SHADOBJNUM
		mov	dummy,eax
		mov	edi,offset objs

objmove:	fild	dummy
		fld	st
		fld	st
		fdiv	objxfdiv
		fcos
		fmul	objxmul
		fstp	(OBJECT ptr [edi]).x
		fdiv	objyfdiv
		fsin
		fmul	objymul
		fstp	(OBJECT ptr [edi]).y
		fdiv	objzfdiv
		fcos
		fmul	objxmul
		fadd	objzadd
		fstp	(OBJECT ptr [edi]).z
		add	dummy,4096
		add	edi,sizeof(OBJECT)
		loop	objmove

		call	Render
		IFDEF	FPSTEST
		inc	dwFrameCount
		ENDIF

		mov	eax,lpDDSBack
		mov	eax,[eax]
		push	NULL
		push	lpDDSBack
		call	(IDirectDrawSurface7 ptr [eax])._Unlock

		mov	eax,lpDDSPrimary
		mov	eax,[eax]
		push	DDFLIP_WAIT
		push	NULL
		push	lpDDSPrimary
		call	(IDirectDrawSurface7 ptr [eax])._Flip

		jmp	messageloop

exitloop:	mov	eax,lpDDSPrimary
		mov	eax,[eax]
		push	lpDDSPrimary
		call	(IDirectDrawSurface7 ptr [eax])._Release

		mov	eax,lpDD
		mov	eax,[eax]
		push	lpDD
		call	(IDirectDraw7 ptr [eax])._Release

		IFDEF	FPSTEST

		invoke	ShowCursor,TRUE
		invoke	GetTickCount
		sub	eax,dwStTickCount
		mov	ecx,eax
		mov	eax,100000
		mov	esi,100
		mul	dwFrameCount
		div	ecx
		xor	edx,edx
		div	esi

		invoke	wsprintf,offset lpsrtFPS,offset lpcsrtFPSFormat,eax,edx
		invoke	MessageBox,NULL,offset lpsrtFPS,offset lpcstrWinName,MB_OK

		ENDIF

		invoke	ExitProcess,msg.wParam

		end	main
