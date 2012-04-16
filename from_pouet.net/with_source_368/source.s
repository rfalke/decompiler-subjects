.model tiny
.386


.DATA
buffer          dw ?
rtrbuffer       dw ?
SCREENWIDTH     dw 160
SCREENHEIGHT    dw 75
gfxinterlaced   db 0
;gfxnegative     db 0
gfxfog          db 1
;SCREENWIDTH    equ 256
;SCREENHEIGHT   equ 128
ENDOFINTRO      equ 10000

i 		dw 0;5000;6500
oldi		dw 0
i2              dw 0;7000;3500
i3 		dw 0
drawcounter	dw 0

ZERO 		dd 0.0
ONE 		dd 1.0
REAL4           dd 4.0
REAL127         dd 127.0
REAL31          dd 31.0
;REAL64          dd 64.0
REAL63          dd 63.0
REAL101         dd 1.01
BIGREAL         dd 100000000.0
;SMALLREAL       dd 0.0025
REAL05		dd 0.5
REAL025         dd 0.25
REAL08          dd 0.8
REAL01          dd 0.1
;REAL02          dd 0.2
AMBIENT         dd 0.15
AMBIENTO        dd 0.85
REAL3           dd 3.0
;REAL1O63        dd 0.01587301
REAL1O256       dd 0.00390625
REAL128         dd 128.0
REAL255         dd 255.0
REAL65536       dd 65536.0
BALL1CONST	dd 204.8
REAL1OPI	dd 0.318309886
tempreal	dd ?
tempint         dw ?
;REALHALF	dd 0.501
parity          dw ?

rndseed         dd 1;3713942343
rndseed2        dd 1;81363361

;Fonts
font            dw ?

;Vesa
vesainfo 	dw ?

oldtimeroffs	dw ?
oldtimerseg	dw ?

;Raytrace
;normtab         dw ?
;normtab2        dw ?
;normtab3        dw ?
;normtab4        dw ?
FOV 		dd 1.04719755 ;PI/3
;cameramatrix	dw ?
cameraorigin	dd 0.0 , 0.0 , 0.0
cameramatrix 	dd 1.0 , 0.0 , 0.0, 0.0 , 1.0 , 0.0, 0.0 , 0.0 , 1.0
;rayleft      	dd -0.577350269
;raytop          dd 0.467949192
;rayright      	dd 0.577350269
;raybottom       dd -0.467949192

;rayleft	dd -0.80844879
;rayright	dd  0.80844879
;raytop		dd  0.6898048
;raybottom	dd -0.6898048
rayleft		dd -0.86602540
rayright	dd  0.86602540
raytop		dd  0.59126588
raybottom	dd -0.59126588

raycorners      dd ?,?,?,?,?,?,?,?,?,?,?,?
             	;  -0.5, 0.258819045, 0.866025403
tempvector 	dd ?,?,?
raydeltax	dd ?,?,?
raydeltay	dd ?,?,?
rayleftside	dd ?,?,?
raycurrent	dd ?,?,?
rayshoot	dd ?,?,?
origin          dd 0.0 , 0.0 , 0.0
normal          dd ?,?,?
mint            dd ?
tvals		dd ?,?,?
tmax		dd ?
tmin		dd ?
minobj          dw ?
curobj          dw ?
calcA		dd ?
calc1OA		dd ?
calcB		dd ?
calcC		dd ?
calcD		dd ?
calct		dd ?
lightdir        dd 1.0,-1.0,3.0
;lightpos	dd ?,?,?
recurses	dw ?
color		dd ?,?,?
lastobj         dw ?
shadowcheck     db ?
reflect         dd ?

;lightmin	dw 0
;lightmax	dw 63

fogtolerance	dd 0.0;200.0
fogconst        dd 0.000001
fogcolor	dd 0.4194,0.4127,0.7097
;fogconst	dd 0.001
;fogcolor	dd 0.5,0.5,0.5

objcol		dd ?,?,?
objtext		dw ?

ftext1		dw ?
x1		dw ?
y1		dw ?
x2		dw ?
y2 		dw ?
midx		dw ?
midy		dw ?
deltax		dw ?
deltay		dw ?
ftextrandom	dd ?
ftextmask	dw ?
c1		db ?
c2		db ?
c3		db ?
c4		db ?
col1		dw ?
col2		dw ?
col3		dw ?
col4		dw ?

;texttype	db ?
;newtexttype	db ?

MAXRECURSES     equ 2

olistitem struc
        objtype 	dw ?
        objptr  	dw ?
        objcolor 	dd ?,?,?
        objreflect 	dd ?
        objtexture      dw ?
olistitem ends

objlist         olistitem ?,?,?,?,?,?,?,?,?,?
objcount        dw 10


BALL_TYPE       equ 1

ball_s struc
        x       dd ?
        y       dd ?
        z       dd ?
        oor     dd ?
        r2      dd ?
ball_s ends


YPLANE_TYPE     equ 2

yplane_s struc
        height  dd ?
yplane_s ends


PILLAR_TYPE     equ 3

pillar_s struc
        pilx    dd ?
        pilz    dd ?
        piloor  dd ?
        pilr2   dd ?
        pily1   dd ?
        pily2   dd ?
pillar_s ends


ball1           ball_s <100.0,100.0,0.0,0.02,2500.0>
;ball2           ball_s <-72.0,55.0,0.0,30.0>
ball2           ball_s <-50.0,0.0,50.0,0.033333333333,900.0>
ball3           ball_s <  0.0,165.0, 80.0,0.05,400.0>
ball4           ball_s < 69.3,165.0,-40.0,0.05,400.0>
ball5           ball_s <-69.3,165.0,-40.0,0.05,400.0>
;ball6           ball_s <-69.3,165.0,-40.0,0.1,100.0>

floor           yplane_s <-30.0>

pillar1         pillar_s <  0.0 ,  80.0 , 0.05         ,  400.0 , -30.0 , 150.0>
pillar2         pillar_s < 69.3 , -40.0 , 0.05         ,  400.0 , -30.0 , 150.0>
pillar3         pillar_s <-69.3 , -40.0 , 0.05         ,  400.0 , -30.0 , 150.0>
;roof            pillar_s <  0.0 ,   0.0 , 0.05         ,  400.0 , -100.0 , 150.0>
;roof            pillar_s <  0.0 ,   0.0 ,0.0123456790 ,8100.0 , 130.0 , 145.0>
roof            pillar_s <  0.0 ,   0.0 ,0.00909090909 ,12100.0 , 130.0 , 145.0>


bytecolor	dw ?

endstring       db "Doublert - 4kB-intro for assembly'2k by Itchi / THP (itchi@iname.com)$"

FIRSTMSG        equ 3400
SECONDMSG       equ 4100
NOMOREMSG       equ 4600

msg1l           db 8
message1        db "Doublert"
msg2l           db 8
message2        db "4k-intro"
msg3l           db 9
message3        db "For ASM2k"

curmsgl         dw ?
curmsg          dw ?

.CODE
org 100h            

start:
        mov cs:[datasegment],ds
        jmp main
datasegment     dw ?



;***********
; Textures *
;***********
pillartexture:
        pusha

	fld [tempvector+0*4]
        fsub dword ptr [bx+0*4]
	fld [tempvector+2*4]
        fsub dword ptr [bx+1*4]
        ;x z
	fld st(1)
	;z x z
	;fld st(0)
	;z z x z
	fmul st(0),st(0)
	;zz x z
	fld st(1)
	;x zz x z
	;fld st(0)
	;x x zz x z
	fmul st(0),st(0)
	;xx zz x z
	fadd
	;xx+zz x z
        fadd ONE
        ;fld1
        ;fadd
	;fadd REAL65536
	;fadd REAL255
	;fadd REAL255
	;fadd REAL255
	fcomp dword ptr [bx+3*4]
	fstsw ax
	fwait
	sahf
	jb ptexture2

	fpatan
        fmul REAL128
	;fldpi
	;fdiv
	fmul REAL1OPI
        fistp tempint
        mov ax,tempint
        ;mov bx,i
        ;shl bx,2
        ;add ax,bx
        and ax,63

        fld [tempvector+1*4]
        fistp tempint
        mov bx,tempint
        and bx,63
        shl bx,6
        add bx,ax
	jmp ptexture1
ptexture2:
	fistp tempint
	mov ax,tempint
	and ax,63
	fistp tempint
	mov bx,tempint
	and bx,63
	shl bx,6
	add bx,ax
ptexture1:

        push es
        mov ax,ftext1
        mov es,ax
        xor ah,ah

        mov al,es:[bx+64*64]
        mov tempint,ax
        fild tempint
        fmul REAL1O256
	fmul [color+2*4]
        fstp [color+2*4]

        mov al,es:[bx]
        mov tempint,ax
        fild tempint
        fmul REAL1O256
	fmul [color+1*4]
        fstp [color+1*4]
        ;fldz
        ;fstp [color+1*4]

        mov al,es:[bx+64*64*2]
        mov tempint,ax
        fild tempint
        fmul REAL1O256
	fmul [color+0*4]
        fstp [color+0*4]

        pop es
	
        popa
nulltexture:
ret

floortexture:
        pusha
        ;fld1
        fld [tempvector+2*4]
        fistp tempint
        mov ax,tempint
        fld [tempvector+0*4]
        fistp tempint
        mov bx,tempint
        and ax,127
        shr ax,1
        and bx,127
        shr bx,1
        shl ax,6
        add bx,ax

        push es
        mov ax,ftext1
        mov es,ax
        xor ah,ah

        mov al,es:[bx]
        mov tempint,ax
        fild tempint
        fmul REAL1O256

        pop es

        fld [tempvector+0*4]
        fistp tempint
        mov ax,tempint
        fld [tempvector+2*4]
        fistp tempint
        mov bx,tempint
        and ax,64
        and bx,64
        xor ax,bx
        shr ax,6
        jnz floorbright
        fmul REAL05
floorbright:
        fst [color+2*4]
        fst [color+1*4]
        fstp [color+0*4]
        popa
ret

;nulltexture:
;ret



;***************
; InitTextures *
;***************
inittextures:
        pusha
        push es


	mov ax,ftext1
	mov es,ax
	call random
	mov eax,rndseed
	shr eax,24
        mov al,127
	mov es:[0],al

        fld REAL31
        fmul REAL025
        ;fmul REAL01
	fstp ftextrandom
	mov cl,6	
	mov ftextmask,63
	mov x1,0
	mov y1,0
	mov x2,64
	mov y2,64
	call fractalrecurse


	mov ax,ftext1
        add ax,256
	mov es,ax
	call random
	mov eax,rndseed
	shr eax,24
        mov al,127
	mov es:[0],al

        fld REAL3
        ;fmul REAL05
        ;fmul REAL01
	fstp ftextrandom
	mov cl,6	
	mov ftextmask,63
	mov x1,0
	mov y1,0
	mov x2,64
	mov y2,64
	call fractalrecurse


	mov ax,ftext1
        add ax,512
	mov es,ax
	call random
	mov eax,rndseed
	shr eax,24
        mov al,127
	mov es:[0],al

        fld REAL3
	fstp ftextrandom
	mov cl,6	
	mov ftextmask,63
	mov x1,0
	mov y1,0
	mov x2,64
	mov y2,64
	call fractalrecurse

        pop es
        popa
ret

fractalrecurse:
	mov ax,x2
	sub ax,x1
	mov deltax,ax
        cmp ax,1
	ja fraccontinue
	mov deltay,ax
        cmp ax,1
	ja fraccontinue
	jmp outoffractalrecurse
fraccontinue:

	mov ax,y2
	sub ax,y1
	mov deltay,ax


	mov ax,x1
	add ax,x2
	shr ax,1
	mov midx,ax
	mov bx,y1
	add bx,y2
	shr bx,1
	mov midy,bx

	mov bx,y1
	;and bx,ftextmask
	shl bx,cl
	mov dx,x1
	;and dx,ftextmask
	add bx,dx
	mov dl,es:[bx]
	mov c1,dl

	mov bx,y1
	;and bx,ftextmask
	shl bx,cl
	mov dx,x2
	and dx,ftextmask
	add bx,dx
	mov dl,es:[bx]
	mov c2,dl

	mov bx,y2
	and bx,ftextmask
	shl bx,cl
	mov dx,x1
	;and dx,ftextmask
	add bx,dx
	mov dl,es:[bx]
	mov c3,dl

	mov bx,y2
	and bx,ftextmask
	shl bx,cl
	mov dx,x2
	and dx,ftextmask
	add bx,dx
	mov dl,es:[bx]
	mov c4,dl

	xor dh,dh

	mov dl,c1
	mov ax,dx
	mov dl,c2
	add ax,dx
	shr ax,1
	fild deltax
	call randomfractal
	mov bx,y1
	shl bx,cl
	add bx,midx
        mov ah,es:[bx]
        cmp ah,0
        jnz rf1
        mov es:[bx],al
rf1:

	mov dl,c3
	mov ax,dx
	mov dl,c4
	add ax,dx
	shr ax,1
	fild deltax
	call randomfractal
	mov bx,y2
	and bx,ftextmask
	shl bx,cl
	add bx,midx
        mov ah,es:[bx]
        cmp ah,0
        jnz rf2
	mov es:[bx],al
rf2:

	mov dl,c1
	mov ax,dx
	mov dl,c3
	add ax,dx
	shr ax,1
	fild deltay
	call randomfractal
	mov bx,midy
	shl bx,cl
	add bx,x1
        mov ah,es:[bx]
        cmp ah,0
        jnz rf3
        mov es:[bx],al
rf3:
	mov dl,c2
	mov ax,dx
	mov dl,c4
	add ax,dx
	shr ax,1
	fild deltay
	call randomfractal
	mov bx,midy
	shl bx,cl
	mov dx,x2
	and dx,ftextmask
	add bx,dx
        mov ah,es:[bx]
        cmp ah,0
        jnz rf4
	mov es:[bx],al
rf4:

	mov dl,c1
	mov ax,dx
	mov dl,c2
	add ax,dx
	mov dl,c3
	add ax,dx
	mov dl,c4
	add ax,dx
	shr ax,2
	fild deltax
	;fld st(0)
	fmul st(0),st(0)
	fild deltay
	;fld st(0)
	fmul st(0),st(0) 
	fadd
	fsqrt
	call randomfractal
	;add ax,tempint
	mov bx,midy
	shl bx,cl
	add bx,midx
	mov es:[bx],al

	
	push x1
	push y1
	push x2
	push y2
	push midx
	push midy
        ;push ftextmask
	mov ax,midx
	mov x2,ax
	mov ax,midy
	mov y2,ax
	;shr ftextmask,1
	call fractalrecurse
        ;pop ftextmask
	pop midy
	pop midx
	pop y2
	pop x2
	pop y1
	pop x1
	push x1
	push y1
	push x2
	push y2
	push midx
	push midy
        ;push ftextmask
	mov ax,midx
	mov x1,ax
	mov ax,midy
	mov y2,ax
	;shr ftextmask,1
	call fractalrecurse
        ;pop ftextmask
	pop midy
	pop midx
	pop y2
	pop x2
	pop y1
	pop x1
	push x1
	push y1
	push x2
	push y2
	push midx
	push midy
        ;push ftextmask
	mov ax,midx
	mov x2,ax
	mov ax,midy
	mov y1,ax
	;shr ftextmask,1
	call fractalrecurse
        ;pop ftextmask
	pop midy
	pop midx
	pop y2
	pop x2
	pop y1
	pop x1
	push x1
	push y1
	push x2
	push y2
	push midx
	push midy
        ;push ftextmask
	mov ax,midx
	mov x1,ax
	mov ax,midy
	mov y1,ax
	;shr ftextmask,1
	call fractalrecurse
        ;pop ftextmask
	pop midy
	pop midx
	pop y2
	pop x2
	pop y1
	pop x1
outoffractalrecurse:
ret

randomfractal:
	call random
	and rndseed,65535
	fild rndseed
	fdiv REAL65536
	;fdiv REAL65536
	;fistp tempint
	;fild tempint
	;fdiv REAL65536
	fsub REAL05
	fmul
	fmul ftextrandom
	fistp tempint
	add ax,tempint
        cmp ax,1
        jb randomzero
        cmp ax,255
        ja random255
        jmp randomok
        ;ret
randomzero:
        mov ax,1
        jmp randomok
        ;ret
random255:
        mov ax,255
randomok:
ret



;************
;* Readfont *
;************
;char *merkit=(char *)0xFFA6E;
;
;void readfonts(void){
;  short i,x,y,offs1,offs2;
;  char color;
;  char mask;
;  for (i=0;i<256;i++){
;    for (y=0;y<8;y++){
;      mask=128;
;      for (x=0;x<8;x++){
;        offs1=i*8+y;
;        color=((merkit[offs1]&mask)>0?1:0);
;        offs2=y*8+x;
;        font[i][offs2]=color;
;        mask>>=1;
;      }
;    }
;  }
;}
readfont:
        pusha
        ;push fs
        ;push es


        mov ax,0FFA6h
        mov fs,ax
        mov si,0000Eh
        mov ax,font
        mov es,ax
        xor di,di

        mov dx,256
        ;xor dl,dl
fontiloop:
        mov ch,8
fontyloop:
        mov cl,8
fontxloop:
        mov al,fs:[si]
        shr al,cl
        and al,1
        stosb
        dec cl
        jnz fontxloop
        inc si
        dec ch
        jnz fontyloop
        dec dx
        ;dec dl
        jnz fontiloop
        

        ;pop es
        ;pop fs
        popa
ret



;***********
; Vesainit *
;***********
vesainit:
	pusha
	;push es

	;Test for VESA
        mov ax,vesainfo
        mov es,ax
        mov ax,4F00h
        xor di,di
        int 10h
        ;cmp al,4Fh
        ;jnz novesa
	;jz nomainloop

	;Set mode 10Eh (320x200x16bpp)
        mov ax,4F02h
        mov bx,010Eh
        ;mov bx,120h
	int 10h
	;cmp al,4Fh
        ;jnz novesa
        ;jnz nomainloop

;	jmp vesaworks
;novesa:
;        mov ax,13h
;        int 10h
;vesaworks:		

	;pop es
	popa
ret



;*************
; Initialize *
;*************
initialize:
        pusha

        mov ax,cs
        add ax,1000h

        mov buffer,ax
        mov fs,ax
        add ax,2000h ;320*200*2

        mov rtrbuffer,ax
        mov gs,ax
        add ax,2000h ;width*height*2;

	mov vesainfo,ax
        add ax,32

        ;mov normtab,ax
        ;mov bx,ax
        ;mov ax,SCREENWIDTH
        ;mul SCREENHEIGHT
        ;shr ax,1
        ;add ax,bx

        mov font,ax
        add ax,1024

	mov ftext1,ax
	add ax,768 ;64*64*3	


        ;mov ax,13h
        ;int 10h
	call vesainit

        finit
        ;mov i,0

        ;call makepalette

        xor di,di
        xor ax,ax
        mov bx,buffer
        mov es,bx
        mov cx,32768
        rep stosw
        ;add bx,1000h
        ;mov es,bx
        ;mov cx,32768
        ;;mov ax,48223
        ;rep stosw
        mov bx,rtrbuffer
        mov es,bx
        mov cx,32768
        rep stosw
        mov bx,ftext1
        mov es,bx
        mov cx,64*64*3/2
        rep stosw
        
	call inittextures

        ;fldpi
        ;fmul REALHALF
        ;mov ax,2
	;call rotatecamera

        call readfont

	popa
ret



;************
;* Settimer *
;************
settimer:
	cli
	mov ax,351Ch
	int 21h
	mov oldtimeroffs,bx
	mov oldtimerseg,es
	
	push ds
	lea dx,newinterrupt
        mov ax,cs
        mov ds,ax
	mov ax,251Ch
	int 21h
	pop ds
	
	;New rate
	mov al,3Ch
	out 43h,al
	nop
	nop
	;mov ax,4DAEh ;1234DDh/60
	mov al,0AEh
	out 40h,al
	nop
	nop
	mov al,4Dh
	out 40h,al
	nop
	nop
	sti
ret



;***************
; Deinitialize *
;***************
deinitialize:
	pusha
	cli

	;Default rate
	mov al,3Ch
	out 43h,al
	nop
	nop
	xor al,al
	out 40h,al
	nop
	nop
	out 40h,al
	nop
	nop

	;Uninstall timer
	push ds
	mov dx,oldtimeroffs
	mov ds,oldtimerseg
	mov ax,251Ch
	int 21h
	pop ds
	;nop

        mov ax,3
        int 10h
        mov ah,9
        lea dx,endstring
        int 21h
        ;nop
        nop

	sti
	popa
ret



;***************
; Newinterrupt *
;***************
newinterrupt:
        push ds
        mov ds,cs:[datasegment]
        inc i2
        pop ds
	;pushf
	;lea dx,oldtimeroffs
        ;call far [oldtimeroffs]
iret




;***********
;* Retrace *
;***********
retrace:
;        push    dx
;        push    ax


;;        mov dx,3C8h
;;        mov al,0
;;        out dx,al
;;        inc dx
;;        out dx,al
;;        out dx,al
;;        out dx,al

;        mov     dx,3dah
;delay_l1:
;        in      al,dx
;        test    al,8
;        jne     delay_l1
;delay_l2:
;        in      al,dx
;        test    al,8
;        je      delay_l2

;;        mov dx,3C8h
;;        mov al,0
;;        out dx,al
;;        inc dx
;;        mov al,63
;;        out dx,al
;;        mov al,0
;;        out dx,al
;;        out dx,al


;        pop     ax
;        pop     dx
;ret



;**************
;* Copybuffer *
;**************
copybuffer:
        push es
        push ds
        pusha


        push 0A000h
        pop es
        push buffer
        pop ds

        ;Change window to 0
        mov ax,4F05h
        mov bx,0
        mov dx,0
        int 10h

        xor di,di
        xor si,si
;        mov cx,16384
        mov cx,16000
        rep movsd

        mov ax,ds
        add ax,1000h
        mov ds,ax
        xor si,si

        mov cx,384
        rep movsd

        ;Change window to 1
        mov ax,4F05h
        mov bx,0
        mov dx,1
        int 10h

;        mov ax,ds
;        add ax,1000h
;        mov ds,ax

        xor di,di
        ;xor si,si
        mov cx,11616-320
;        mov cx,1600
        ;mov cx,15616
        rep movsd

        popa
        pop ds
        pop es
ret



;**********
;* Random *
;**********
random:
        pusha

        mov eax,rndseed
        add eax,1724721753
        mov ebx,rndseed2
	add ebx,239873
        mul bx
        add eax,4721753
        mov rndseed2,eax
	sub ebx,eax
	add ebx,19836137
	mul bx
	mov rndseed,eax

        popa
ret



;*************
;* Calculate *
;*************
;cameravel	dd 0.0,0.0,0.0
;cameraaccel	dd 0.0,0.0,0.0
;CLEAR		equ 0
;SETVALUE	equ 1
;ADDVALUE	equ 2
;SUBVALUE	equ 3
;insttab		dd	0,1,cameraaccel,0.1
;calculate:
;        lea si,lightdir
;        call normalizep
;
;	inc i
;ret
;
EVENT1I		equ 800
EVENT1IC	dd 800.0
EVENT2I         equ 700
EVENT2IC        dd 700.0
EVENT2Ib        equ 1500
EVENT3I         equ 3850
EVENT3Ib	equ 750
EVENT3Ic	equ 1100
EVENT3Id	equ 1390
EVENT3Ie        equ 1250
ecounter	dd ?
E1C1            dd 0.003
E1C2		dd 0.04
;E1C3		dd 0.007
;E1C4		dd 60.0
;E1C5		dd 100.0
;E1C6		dd 0.001
;E1C7		dd 250.0
camerapos2      dd ?,?,?
SMOOTH          dd 0.95
SMOOTHOPP       dd 0.05
REAL20          dd 20.0
REAL1024        dd 1024.0
REAL140         dd 140.0
REAL50          dd 50.0
;REAL000625      dd 0.00625
cameramove:
;origin in si
;target in di
        fld dword ptr [si+0*4]
        fmul SMOOTH
        fld dword ptr [di+0*4]
        fmul SMOOTHOPP
        fadd
        fstp dword ptr [si+0*4]
        fld dword ptr [si+1*4]
        fmul SMOOTH
        fld dword ptr [di+1*4]
        fmul SMOOTHOPP
        fadd
        fstp dword ptr [si+1*4]
        fld dword ptr [si+2*4]
        fmul SMOOTH
        fld dword ptr [di+2*4]
        fmul SMOOTHOPP
        fadd
        fstp dword ptr [si+2*4]
ret

calculate:
	pusha
	;mov ax,i2
	;mov i,ax

allpreevents:
;	fld [cameravel+0*4]
;	fadd [cameraaccel+0*4]
;	fstp [cameravel+0*4]
;	fld [cameravel+1*4]
;	fadd [cameraaccel+1*4]
;	fstp [cameravel+1*4]
;	fld [cameravel+2*4]
;	fadd [cameraaccel+2*4]
;	fstp [cameravel+2*4]
;
;	fld [cameraorigin+0*4]
;	fadd [cameravel+0*4]
;	fstp [cameraorigin+0*4]
;	fld [cameraorigin+1*4]
;	fadd [cameravel+1*4]
;	fstp [cameraorigin+1*4]
;	fld [cameraorigin+2*4]
;	fadd [cameravel+2*4]
;	fstp [cameraorigin+2*4]
	

event1:
	mov ax,i
	mov i3,ax
	sub i3,EVENT1I
	jns event2

	add i3,EVENT1I
	mov objcount,1
        ;mov gfxfog,0
	mov gfxinterlaced,0
;        mov gfxnegative,0

	fild i
	fdiv EVENT1IC
	fldpi
	fmul
	fcos
	fchs
	fld1
	fadd
	fmul REAL05
	fstp ecounter

	fld ecounter
	fldpi
	fmul
	fmul REAL4
	fsin
	fmul REAL127
        fstp [camerapos2+0*4]

	fld ecounter
	fldpi
	fmul
        fmul REAL3
        fmul REAL05
	fcos
	fchs
	fld1
	fadd
	;fmul REAL05
	;fsub REAL01
	fmul REAL128
        fstp [camerapos2+1*4]

	fld ecounter
	fldpi
	fmul
	fmul REAL3
	fsin
	fmul REAL127
        fstp [camerapos2+2*4]

        lea si,cameraorigin
        lea di,camerapos2
        call cameramove

	fld [cameraorigin+0*4]
	fstp [tempvector+0*4]
	fld [cameraorigin+1*4]
        fsub ONE
        ;fld1
        ;fsub
	fstp [tempvector+1*4]
	fld [cameraorigin+2*4]
	fadd REAL01
	fstp [tempvector+2*4]
	
	mov ax,i3
	cmp ax,EVENT1I/2
	jna e1cont1

	mov ax,i3
	sub ax,EVENT1I/2
	mov tempint,ax
	fild tempint
	fmul st(0),st(0)
        fdiv REAL255
	fmul E1C1
        ;fld st(0)
	fsin
	fmul REAL4
	fadd [tempvector+0*4]
	fstp [tempvector+0*4]
        ;fmul REAL3
        ;fsin
        ;fmul REAL3
        ;fadd [tempvector+2*4]
        ;fstp [tempvector+2*4]
e1cont1:
	
	lea bx,tempvector
	call dircamera

	jmp allpostevents
event2:
        sub i3,EVENT3I
        jns event3
        add i3,EVENT3I

	mov objcount,3
        lea bx,[objlist+44]
        mov [bx],word ptr BALL_TYPE

	fild i
	fdiv EVENT2IC
	fldpi
	fmul
	fcos
	fchs
	fld1
	fadd
	fmul REAL05
	fstp ecounter

        call cameraswing

        ;mov ax,200
        ;sub ax,i3
        mov ax,i
        sub ax,EVENT1I
        sub ax,100
        js e2cont1
        mov ax,0
e2cont1:
        mov tempint,ax
        fild tempint
        fmul st(0),st(0)
        fadd REAL20
        fld1
        fdivr
        fst SMOOTHOPP
        fld1
        fsubr
        fstp SMOOTH 


        lea si,cameraorigin
        lea di,camerapos2
        call cameramove

;        mov eax,150
;        xor ebx,ebx
;        mov bx,i3
;        sub eax,ebx
;        shl eax,7
;        ja event2s
;        mov eax,1
;event2s:
;        add eax,250
;        mov tempint,ax
;
;        fild tempint
;        fld cameramatrix+24
;        fmul st(0),st(1)
;        fadd cameraorigin+0*4
;        fstp tempvector+0*4
;        fld cameramatrix+24+4
;        fmul st(0),st(1)
;        fadd cameraorigin+1*4
;        fstp tempvector+1*4
;        fld cameramatrix+24+8
;        fmul st(0),st(1)
;        fadd cameraorigin+2*4
;        fstp tempvector+2*4
;        fstp tempreal
        fld cameramatrix+24
        fmul REAL127
        fadd cameraorigin+0*4
        fstp tempvector+0*4
        fld cameramatrix+24+4
        fmul REAL127
        fadd cameraorigin+1*4
        fstp tempvector+1*4
        fld cameramatrix+24+8
        fmul REAL127
        fadd cameraorigin+2*4
        fstp tempvector+2*4

        lea si,tempvector
        lea di,ball1
        call cameramove
        lea di,ball2
        call cameramove
        lea di,ball2
        call cameramove
        lea di,ball2
        call cameramove

        lea bx,tempvector
	call dircamera

        sub i3,EVENT2I
        jns event2b
        add i3,EVENT2I
        jmp event2c
event2b:
        mov ax,i3
        cmp ax,127
        jna e2cont2
        mov ax,127
e2cont2:
        mov tempint,ax
        fild tempint

        lea bx,objlist
        fdiv REAL127
        fld st(0)
        fmul REAL025
        fstp dword ptr [bx+16]
        fmul REAL05
        fstp dword ptr [bx+16+44]


        lea bx,[objlist+22]
        mov [bx],word ptr BALL_TYPE

	mov ax,i
	and ax,127
	sub ax,64
	mov tempint,ax
	fild tempint
	fmul st(0),st(0)
	fmul REAL01
	fmul REAL05
	fchs
	fadd BALL1CONST
	fstp ball1.y	

        sub i3,EVENT2I
        sub i3,EVENT2Ib
        js event2c

        ;fld REAL05
        fild i3
	fmul REAL01
        fmul REAL01
        fcos
        fmul REAL1024
        fadd REAL1024
        fdivr REAL05
        ;fmul REAL255
        ;fdiv REAL025
        ;fadd REAL255
        ;fadd REAL255
        ;fadd REAL255
        ;fadd REAL255
        ;fadd REAL3
        ;fdivr REAL05
	fstp fogconst	
event2c:

	jmp allpostevents
event3:
        lea bx,[objlist+22]
        mov [bx],word ptr 0
        lea bx,[objlist+44]
        mov [bx],word ptr 0
        mov objcount,4

        add i3,EVENT3I-EVENT2I-EVENT2I-EVENT2Ib
        ;sub i3,EVENT2I
        ;sub i3,EVENT2I
        ;sub i3,EVENT2Ib

        ;fld REAL05
        fild i3
	fmul REAL01
        fmul REAL01
        fcos
        fmul REAL1024
        fadd REAL1024
        fadd REAL3
        ;fmul REAL255
        ;fdiv REAL025
        ;fadd REAL255
        ;fadd REAL255
        ;fadd REAL255
        ;fadd REAL255
        ;fadd REAL3
        ;fadd REAL31
        ;fdivr REAL05
        fdivr REAL05
	fstp fogconst	

        call cameraswing2

        ;add i3,EVENT3I
        ;add i3,EVENT2I
        ;add i3,EVENT2I
        ;add i3,EVENT2Ib
	;add i3,5000
	sub i3,EVENT2Ib+EVENT3Ib
	;sub i3,EVENT3Ib
        js event3f
event3b:
        mov objcount,6	
	mov ax,i3
	cmp ax,180
	jna e3cont1
	mov ax,180
e3cont1:
	sub ax,30
	mov tempint,ax
	fild tempint
	fst pillar2.pily2
	fstp pillar3.pily2

	sub i3,EVENT3Ic
	js event3f
event3c:
        mov objcount,7;11

	mov ax,i3
	sub ax,500
	jna e3cont2
	xor ax,ax
e3cont2:
	sub ax,130
	neg ax
	mov tempint,ax
	fild tempint
	fstp roof.pily1
	add tempint,15
	fild tempint
	fstp roof.pily2

	sub i3,EVENT3Id
	js event3f
event3d:
	mov gfxinterlaced,1

        mov objcount,10

        lea bx,[objlist+22]
        mov [bx],word ptr BALL_TYPE
        lea bx,[objlist+44]
        mov [bx],word ptr BALL_TYPE
        ;lea bx,[objlist+154]
        ;mov [bx],word ptr BALL_TYPE
        ;lea bx,[objlist+176]
        ;mov [bx],word ptr BALL_TYPE
        ;lea bx,[objlist+198]
        ;mov [bx],word ptr BALL_TYPE

	mov ax,i
	and ax,127
	sub ax,64
	mov tempint,ax
	fild tempint
	fmul st(0),st(0)
	fmul REAL01
	fmul REAL05
	fchs
	fadd BALL1CONST
	fstp ball2.y
	fldz
	fst ball2.x
	fstp ball2.z

	mov tempint,20
	fild tempint
	fstp ball1.y
	fldz
	fstp ball1.x
	fld REAL127
	fchs
	fstp ball1.z

        ;fild i
        ;fmul REAL01
        ;fsincos
        ;fmul REAL31
        ;fsub pillar2.x
        ;fstp ball6.x
        ;fmul REAL31
        ;fsub pillar2.z
        ;fstp ball6.z
        ;
        ;fild i
        ;fmul REAL01
        ;fmul REAL01
        ;fsin
        ;fmul REAL70
        ;fadd REAL50
        ;fstp ball6.y

	sub i3,EVENT3Ie
	js event3f
event3e:
	fld REAL101
	fld fogcolor+0*4
	fdivr; st(0),st(1)
	fstp fogcolor+0*4
	fld REAL101
	fld fogcolor+1*4
	fdivr; st(0),st(1)
	fstp fogcolor+1*4
	fld REAL101
	fld fogcolor+2*4
	fdivr; st(0),st(1)
	fstp fogcolor+2*4

        mov objcount,1

        fld REAL08
        fstp fogconst

event3f:

        jmp allpostevents
allpostevents:
        fild i
        fmul REAL025
        fmul REAL025
	fmul REAL025
        fsincos
        fstp dword ptr [lightdir+0*4]
        fstp dword ptr [lightdir+2*4]
        fld REAL08
        fchs
        fstp dword ptr [lightdir+1*4]

        lea si,lightdir
        call normalizep

        lea si,lightdir
        call normalizep

	inc i
	popa
ret

cameraswing:
        fild i
        fmul REAL025
        fmul REAL025
        fmul REAL01
        fcos
        fmul REAL127
        fstp [camerapos2+0*4]

        fild i
        fmul REAL025
        fmul REAL025
        fmul REAL08
        fmul REAL01
        fcos
        fmul REAL63
        fadd REAL31;;;
        fadd REAL63
        ;fadd REAL94
        fstp [camerapos2+1*4]

        fild i
        fmul REAL08
        fmul REAL01
        fmul REAL01
        fsin
        fmul REAL127
        ;fadd ONE
        fld1
        fadd
        fstp [camerapos2+2*4]
ret

;cameraswing:
cameraswing2:
        fild i
        fmul REAL025
        fmul REAL025
	fmul REAL01
        fcos
        fmul REAL127
        fdiv REAL05;;;
        fstp [cameraorigin+0*4]

        fild i
        fmul REAL025
        fmul REAL025
        fmul REAL08
	fmul REAL01
        fcos
        fmul REAL63
        fadd REAL31;;;
        fdiv REAL05;;;
        fadd REAL63
	fadd REAL31
        fstp [cameraorigin+1*4]

        fild i
        fmul REAL025
        fmul REAL05
        fmul REAL08
        fmul REAL08
	fmul REAL01
        fsin
        fmul REAL127
        fdiv REAL05;;;
        fadd ONE
        fstp [cameraorigin+2*4]


        fild i
        fmul REAL025
        fmul REAL025
        fmul REAL101
	fmul REAL025
        fsin
        fmul REAL4
        fsub REAL63
        fstp [tempvector+0*4]

        fild i
        fmul REAL025
        fmul REAL025
        fmul REAL101
	fmul REAL025
        fcos
        fmul REAL4
        fadd REAL31
        fstp [tempvector+1*4]

        fild i
        fmul REAL025
        fmul REAL025
        fmul REAL08
        fmul REAL101
	fmul REAL025
        fsin
        fmul REAL4
        fadd REAL4
        fstp [tempvector+2*4]

        lea bx,tempvector

        call dircamera
ret



;***************
;* Rotatepoint *
;***************
rotatepoint:
	push eax
	push bx
	;push edx

	mov eax,[di+0*4]
	mov [tempvector+0*4],eax
	mov eax,[di+1*4]
	mov [tempvector+1*4],eax
	mov eax,[di+2*4]
	mov [tempvector+2*4],eax
	xor ebx,ebx
	mov bx,2
	shl esi,16
	shr esi,16
	shl edi,16
	shr edi,16
rotatepointloop:
        ;mov eax,[ebx*4+esi+0*4]
        ;mov tempreal,eax
        ;fld tempreal
        fld dword ptr [esi+ebx*4+0*4]
	fld tempvector+0*4
	fmulp

        ;mov eax,[esi+ebx*4+3*4]
        ;mov tempreal,eax
        ;fld tempreal
        fld dword ptr [esi+ebx*4+3*4]
	fld tempvector+1*4
	fmulp
	faddp

        ;mov eax,[esi+ebx*4+6*4]
        ;mov tempreal,eax
        ;fld tempreal
        fld dword ptr [esi+ebx*4+6*4]
	fld tempvector+2*4
	fmulp
	faddp

        ;fstp tempreal
        ;mov eax,tempreal
        ;mov dword ptr [edi+ebx*4],eax
        fstp dword ptr [edi+ebx*4]
	dec bx
	jns rotatepointloop

	;pop edx	
	pop bx	
	pop eax
;for (y=0;y<3;y++){
;  vr[y]=0;
;  for (x=0;x<3;x++){
;    vr[y]+=camera[x][y]*v[x];
;  }
;}	
ret



;****************
;* Crossproduct *
;****************
;Calculates crossproduct of [di] and [si] and stores it in [bx]
;result[0]=v1[1]*v2[2]-v1[2]*v2[1];
;result[1]=v1[2]*v2[0]-v1[0]*v2[2];
;result[2]=v1[0]*v2[1]-v1[1]*v2[0];
crossproduct:

	fld dword ptr [di+2*4]
	fmul dword ptr [si+1*4]
	fld dword ptr [di+1*4]
	fmul dword ptr [si+2*4]
	fsubp
	fstp dword ptr [bx+0*4]		

	fld dword ptr [di+0*4]
	fmul dword ptr [si+2*4]
	fld dword ptr [di+2*4]
	fmul dword ptr [si+0*4]
	fsubp
	fstp dword ptr [bx+1*4]		

	fld dword ptr [di+1*4]
	fmul dword ptr [si+0*4]
	fld dword ptr [di+0*4]
	fmul dword ptr [si+1*4]
	fsubp
	fstp dword ptr [bx+2*4]		

ret



;**************
;* Dotproduct *
;**************
;Calculates dotproduct of [di] and [si] and leaves it in st(0)
dotproduct:
        fld dword ptr [si]
        fld dword ptr [di]
        fmulp st(1)
        fld dword ptr [si+1*4]
        fld dword ptr [di+1*4]
        fmulp st(1)
        fld dword ptr [si+2*4]
        fld dword ptr [di+2*4]
        fmulp st(1)
        faddp st(1)
        faddp st(1)

ret



;***************
;* Scalevector *
;***************
;Scales vector in [si] by st(0) without popping
scalevector:
        ;fld st(0)
        ;fld st(0)
        fld dword ptr [si]
        fmul st(0),st(1)
        fstp dword ptr [si]
        fld dword ptr [si+1*4]
        fmul st(0),st(1)
        fstp dword ptr [si+1*4]
        fld dword ptr [si+2*4]
        fmul st(0),st(1)
        fstp dword ptr [si+2*4]

ret



;*************
;* Normalize *
;*************
;Normalizes vector in [si]
normalize:
        ;fld dword ptr [si]
        ;fld st(0)
        ;fmulp st(1)
        ;fld dword ptr [si+1*4]
        ;fld st(0)
        ;fmulp st(1)
        ;fld dword ptr [si+2*4]
        ;fld st(0)
        ;fmulp st(1)
        ;faddp st(1)
        ;faddp st(1)
        push di
        mov di,si
        call dotproduct
        pop di

        fsqrt
        fld1
        fdivrp
        call scalevector

ret
normalizep:
	call normalize
        fstp tempreal
ret



;************
;* Raytrace *
;************
raytrace:
        pusha
        fld BIGREAL
	;fld1
	;fdiv ZERO
        fstp mint
        mov minobj,-1

        xor cx,cx
        lea di,objlist
raytraceobjloop:
        mov curobj,di
        mov ax,olistitem [di].objtype
        mov bx,olistitem [di].objptr
        cmp di,lastobj
        jz raytracecontinue
;ball
        cmp ax,BALL_TYPE
        jnz notball
        call ballintersect
        jmp raytracecontinue
notball:
;yplane
        cmp ax,YPLANE_TYPE
        jnz notyplane
        call yplaneintersect
        jmp raytracecontinue
notyplane:
;pillar
        cmp ax,PILLAR_TYPE
        jnz notpillar
        call pillarintersect
        jmp raytracecontinue
notpillar:
raytracecontinue:
        add di,22
        inc cx
        cmp cx,objcount
        jb raytraceobjloop

        cmp shadowcheck,0
        jz noshadowcheck
        popa
        mov ax,minobj
        ret
noshadowcheck:

        add minobj,0
        js nointersects
 
        ;mov eax,[si+0*4]
        ;mov [tempvector+0*4],eax
        fld dword ptr [si+0*4]
        fstp [tempvector+0*4]
        mov eax,[si+1*4]
        mov [tempvector+1*4],eax
        mov eax,[si+2*4]
        mov [tempvector+2*4],eax
        lea si,tempvector
        fld mint
        call scalevector
        fstp tempreal

        fld [origin+0*4]
        fadd [tempvector+0*4]
        fstp [tempvector+0*4]
        fld [origin+1*4]
        fadd [tempvector+1*4]
        fstp [tempvector+1*4]
        fld [origin+2*4]
        fadd [tempvector+2*4]
        fstp [tempvector+2*4]
        ;fstp [origin+1*4]
        ;add [tempvector+1*4],eax
        ;mov eax,[origin+2*4]
        ;add [tempvector+2*4],eax
        ;fld tempvector+2*4

	;fld [lightpos+0*4]
	;fsub [tempvector+0*4]
	;fstp [lightdir+0*4]
	;fld [lightpos+1*4]
	;fsub [tempvector+1*4]
	;fstp [lightdir+1*4]
	;fld [lightpos+2*4]
	;fsub [tempvector+2*4]
	;fstp [lightdir+2*4]
;	fld [tempvector+0*4]
;	fsub [lightpos+0*4]
;	fstp [lightdir+0*4]
;	fld [tempvector+1*4]
;	fsub [lightpos+1*4]
;	fstp [lightdir+1*4]
;	fld [tempvector+2*4]
;	fsub [lightpos+2*4]
;	fstp [lightdir+2*4]
;	lea si,lightdir
;	call normalizep

        push si
        lea si,tempvector
        mov di,minobj
        ;mov ax,word ptr [di+4]
        ;mov bx,ax
        ;and al,192
        ;and bl,63
        ;mov objcol,ax
        ;mov objshade,bx
        ;mov bx,ax
        ;and al,63
        ;and bl,192
        ;mov objshade,ax
        ;mov objcol,bx
	mov ax,olistitem [di].objtexture
	mov objtext,ax
        mov ax,olistitem [di].objtype
        mov ebx,olistitem [di].objreflect
        mov reflect,ebx
        mov bx,olistitem [di].objptr
        push di
;ball
        cmp ax,BALL_TYPE
        jnz notballnormal
        call ballnormal
        jmp raytracenormalcontinue
notballnormal:
;yplane
        cmp ax,YPLANE_TYPE
        jnz notyplanenormal
        call yplanenormal
        jmp raytracenormalcontinue
notyplanenormal:
;pillar
        cmp ax,PILLAR_TYPE
        jnz notpillarnormal
        call pillarnormal
        jmp raytracenormalcontinue
notpillarnormal:
raytracenormalcontinue:
        call calculateshading
        fmul AMBIENTO
        fadd AMBIENT
        pop di

;        cmp recurses,1
;        jz noreflectmul
;
;        fld1
;        fld reflect
;        fsub
;        fmul
;noreflectmul:

	fld [di+olistitem.objcolor+0*4]
        fstp dword ptr [color+0*4]
	fld [di+olistitem.objcolor+1*4]
        fstp dword ptr [color+1*4]
        fld [di+olistitem.objcolor+2*4]
        fstp dword ptr [color+2*4]

        mov bx,minobj
        mov lastobj,bx
	;mov di,minobj
        ;mov bx,olistitem [di].objptr
	mov bx,olistitem [bx].objptr

        mov dx,objtext
        call dx

        ;Reflect and shadows
	push mint
	;push dword ptr [origin+4*0]
	;push dword ptr [origin+4*1]
	;push dword ptr [origin+4*2]
	;push di
	;push si

        mov eax,[tempvector+0*4]
        mov [origin+0*4],eax
        mov eax,[tempvector+1*4]
        mov [origin+1*4],eax
        mov eax,[tempvector+2*4]
        mov [origin+2*4],eax

	push dword ptr [raycurrent+4*0]
	push dword ptr [raycurrent+4*1]
	push dword ptr [raycurrent+4*2]

        fld dword ptr [lightdir+0*4]
        fchs
        fstp dword ptr [raycurrent+0*4]
        fld dword ptr [lightdir+1*4]
        fchs
        fstp dword ptr [raycurrent+1*4]
        fld dword ptr [lightdir+2*4]
        fchs
        fstp dword ptr [raycurrent+2*4]

        lea si,raycurrent
        mov shadowcheck,1
        call raytrace
        inc ax
        jz notinshadow
        ;lea si,color
        ;fld REAL01
        ;call scalevector
        ;fstp tempreal
        fstp tempreal
        fld AMBIENT
notinshadow:
        mov shadowcheck,0

        lea si,color
	call scalevector
	fstp tempreal

	pop dword ptr [raycurrent+4*2]
	pop dword ptr [raycurrent+4*1]
	pop dword ptr [raycurrent+4*0]


	dec recurses
	jz noreflect
	mov eax,reflect
	cmp eax,ZERO
	jz noreflect

        push dword ptr [color+0*4]
        push dword ptr [color+1*4]
        push dword ptr [color+2*4]

        lea si,normal
        lea di,raycurrent
        call reflectray
        lea si,raycurrent

        ;push lastobj

        push reflect
	call raytrace
        pop reflect

        ;pop lastobj

        pop dword ptr [objcol+2*4]
        pop dword ptr [objcol+1*4]
        pop dword ptr [objcol+0*4]

	lea si,color
	fld reflect
	call scalevector
        fstp tempreal

        lea si,objcol
        fld1
	fld reflect
        fsub
	call scalevector
        fstp tempreal

        fld [objcol+0*4]
        fadd [color+0*4]
        fstp [color+0*4]
        fld [objcol+1*4]
        fadd [color+1*4]
        fstp [color+1*4]
        fld [objcol+2*4]
        fadd [color+2*4]
        fstp [color+2*4]

noreflect:
	inc recurses


	;pop si
	;pop di
	;pop dword ptr [origin+4*2]
	;pop dword ptr [origin+4*1]
	;pop dword ptr [origin+4*0]
	pop mint

;        cmp recurses,MAXRECURSES
;        jnz nocoloradd
;	fild lightmax
;	fisub lightmin
;	fmul
;	fiadd lightmin
;        fiadd objcol;word ptr [di+4]
;nocoloradd:
	
        pop si

        ;Fog
	add gfxfog,0
	jz nofog
        fld mint
        fsub fogtolerance
        fcom ZERO
        fstsw ax
        fwait
        sahf
        ja fogcontinue
        fstp tempreal
        fldz
fogcontinue: 
;	fmul fogconst
;	fadd ONE
;	fld1
;	fdivr

	fmul fogconst
	fchs
	fldl2e
	fmulp st(1),st(0)
	fld1
	fld st(1)
	fprem
	f2xm1
	faddp st(1),st(0)
	fscale
	fxch st(1)
	fstp tempreal
        fld [color+0*4]
        fsub [fogcolor+0*4]
        fmul st(0),st(1)
        fadd [fogcolor+0*4]
        fstp [color+0*4]
        fld [color+1*4]
        fsub [fogcolor+1*4]
        fmul st(0),st(1)
        fadd [fogcolor+1*4]
        fstp [color+1*4]
        fld [color+2*4]
        fsub [fogcolor+2*4]
        fmul st(0),st(1)
        fadd [fogcolor+2*4]
        fstp [color+2*4]
        fstp tempreal
nofog:
        jmp intersected
nointersects:
        fld [fogcolor+0*4]
        fstp [color+0*4]
        fld [fogcolor+1*4]
        fstp [color+1*4]
        fld [fogcolor+2*4]
        fstp [color+2*4]
;        fldz
;        fst  [color+0*4]
;        fst  [color+1*4]
;        fstp [color+2*4]
intersected:

        popa
ret



;**************
;* Reflectray *
;**************
;Normal is in si
;Ray is in di, and will be replaced
reflectray:
;float dot2=(inray[0]*normal[0]+inray[1]*normal[1]+inray[2]*normal[2])*-2; //dotprod(inray,normal)*-2;
;outray[0]=(inray[0]+normal[0]*dot2);
;outray[1]=(inray[1]+normal[1]*dot2);
;outray[2]=(inray[2]+normal[2]*dot2);
        call dotproduct
        ;fld st(0)
        fadd st(0),st(0)
        fchs

        fld dword ptr [si+0*4]
        fmul st(0),st(1)
        fadd dword ptr [di+0*4]
        fstp dword ptr [di+0*4]
        fld dword ptr [si+1*4]
        fmul st(0),st(1)
        fadd dword ptr [di+1*4]
        fstp dword ptr [di+1*4]
        fld dword ptr [si+2*4]
        fmul st(0),st(1)
        fadd dword ptr [di+2*4]
        fstp dword ptr [di+2*4]
        fstp tempreal

	;push si
	;mov si,di
	;call normalizep
	;pop si
ret



;********************
;* Calculateshading *
;********************
;normal is in si
;light is in "lightdir"
;Leaves color in st(0)
calculateshading:
        lea di,lightdir
        call dotproduct
        fchs

        ;fld1
        ;faddp
        ;fmul REAL05
        ;ret

        fldz
        fcomp
        fstsw ax
        fwait
        sahf
        jna shadingpositive
        fstp tempreal
        fldz
shadingpositive:
        
ret



;*****************
;* Ballintersect *
;*****************
;ray is in si
;origin is in "origin"
;Pointer to ball is in [bx]
ballintersect:
;other=origin-ball;
;B=dotproduct(ray,other);
;C=dotproduct(other,other)-r*r
;D=(B*B-C)
;t=-B+-sqrt(D)
        pusha
	push di

        fld origin+0*4
        fsub dword ptr [bx+0*4]
        fstp tempvector+0*4 
        fld origin+1*4
        fsub dword ptr [bx+1*4]
        fstp tempvector+1*4 
        fld origin+2*4
        fsub dword ptr [bx+2*4]
        fstp tempvector+2*4 

        ;fld dword ptr [bx+0*4]
        ;fsub origin+0*4
        ;fstp tempvector+0*4 
        ;fld dword ptr [bx+1*4]
        ;fsub origin+1*4
        ;fstp tempvector+1*4 
        ;fld dword ptr [bx+2*4]
        ;fsub origin+2*4
        ;fstp tempvector+2*4 
	;tempvector=origin-ball

        fld dword ptr [bx+4*4]
        ;fld st(0);dword ptr [bx+3*4]
	;fmulp
	;st(0)=r*r

	lea di,[tempvector]
	call dotproduct
	;st(0)=B
	;st(1)=r*r
	fst calcB

	;fld st(0)
	;fmulp st(1)
	fmul st(0),st(0)
	;st(0)=B*B
	;st(1)=r*r

	push si
	mov si,di
	call dotproduct
	fchs
	;st(0)=-C
	;st(1)=B*B
	;st(2)=r*r
	fst calcC

	faddp
	faddp
	;st(0)=B*B-C+r*r

	fldz

	fcomp
	fstsw ax
        ;fstp ;tempreal
	fwait
	sahf
        ja ballnointersect
;t=-B+-sqrt(D)
        fsqrt
        fadd calcB
        fchs

	;mov newtexttype,0
        call updatemint
        jmp ballraytracereturn
ballnointersect:
        fstp tempreal
ballraytracereturn:
	pop si

	pop di
        popa
ret



;*******************
;* Yplaneintersect *
;*******************
;ray is in si
;origin is in "origin"
;Pointer to yplane is in [bx]
yplaneintersect:
;t=(plane.y-origin.y)/ray.y
        pusha
	push di

        fld dword ptr [bx+0*4]
        fsub origin+1*4
        fdiv dword ptr [si+1*4]

        call updatemint
        jmp yplaneraytracereturn
yplanenointersect:
        fstp tempreal
yplaneraytracereturn:

	pop di
        popa
ret



;*******************
;* Pillarintersect *
;*******************
;ray is in si
;origin is in "origin"
;Pointer to pillar is in [bx]
pillarintersect:
;other=origin-pillar // y=0;
;A=x*x+y*y
;B=dotproduct(ray,other);
;C=dotproduct(other,other)-r*r
;D=(B*B-C)
;t=(-B+-sqrt(D))/A
        pusha
	push di

	fld dword ptr [si+0*4]
	;fld st(0)
	;fmulp
	fmul st(0),st(0)
	fld dword ptr [si+2*4]
	;fld st(0)
	;fmulp
	fmul  st(0),st(0)
	fadd
	fstp calcA
	;fdivr ONE
	;fstp calc1OA

        fld origin+0*4
        fsub dword ptr [bx+0*4]
        fstp tempvector+0*4 
        ;fld origin+1*4
	fldz
        ;fsub dword ptr [bx+1*4]
        fstp tempvector+1*4 
        fld origin+2*4
        fsub dword ptr [bx+1*4]
        fstp tempvector+2*4

        ;fld dword ptr [bx+0*4]
        ;fsub origin+0*4
        ;fstp tempvector+0*4 
        ;fld dword ptr [bx+1*4]
        ;fsub origin+1*4
        ;fstp tempvector+1*4 
        ;fld dword ptr [bx+2*4]
        ;fsub origin+2*4
        ;fstp tempvector+2*4 
	;tempvector=origin-ball

	lea di,[tempvector]
	call dotproduct
	;st(0)=B
	fst calcB
	;fld st(0)
	;fmulp st(1)
	fmul st(0),st(0)
	;st(0)=B*B

        fld dword ptr [bx+3*4]
        ;fld st(0);
	;fmulp
	;st(0)=r*r
	;st(1)=B*B

	push si
	mov si,di
	call dotproduct
	pop si
	fchs
	;st(0)=-C'
	;st(1)=r*r
	;st(2)=B*B
	faddp
	fst calcC
	;st(0)=-C
	;st(2)=B*B
	fmul calcA
	;st(0)=-A*C
	;st(2)=B*B

	faddp
	;st(0)=B*B-A*C

	;fldz
	;fcomp
	ftst
	fstsw ax
	fwait
	sahf
        jna pillarnointersect
;t=-B+-sqrt(D)
        fsqrt
	fst tempreal
        fadd calcB
        fchs
	;fdiv calcA
	fld calcA
	fdivr ONE
	fst calc1OA
	fmul; calc1OA
	fst [tmin]
	fstp [tvals+0*4]
	fld tempreal
	fsub calcB
	;fdiv calcA
	fmul calc1OA
	fstp [tmax]

	fld1
	fdiv dword ptr [si+1*4]
	fld dword ptr [bx+4*4]
	fsub dword ptr [origin+1*4]
	fmul st(0),st(1)
	fstp [tvals+1*4]
	fld dword ptr [bx+5*4]
	fsub dword ptr [origin+1*4]
	fmul; st(0),st(1)
	fstp [tvals+2*4]
	;ffree st(0)

	call getsecondsmallest
	;fld [tvals+0*4]

	fcom tmax
	fstsw ax
	fwait
	sahf
	jnb pillarnointersect

	fcom tmin
	fstsw ax
	fwait
	sahf
	jb pillarnointersect

;        fst tempreal
;        fmul dword ptr [si+1*4]
;        fadd dword ptr [origin+1*4]
;        fld dword ptr [bx+4*4]
;        fcomp
;        fstsw ax
;        fwait
;        sahf
;        ja pillarnointersect
;        fld dword ptr [bx+5*4]
;        fcompp
;        fstsw ax
;        fwait
;        sahf
;        jb pillarraytracereturn
;        fld tempreal

        call updatemint
        jmp pillarraytracereturn
pillarnointersect:
        fstp tempreal
pillarraytracereturn:

	pop di
        popa
ret

getsecondsmallest:
	fld [tvals+0*4]
	fld [tvals+1*4]
	fld [tvals+2*4]

	fcom st(1)
	fstsw ax
	fwait
	sahf
	jnb comp1a
	fxch st(1)
comp1a: ;st(0) < st(1)
	fcom st(2)
	fstsw ax
	fwait
	sahf
	jnb comp2a
	;st(2) < st(0) < st(1)
	;ffree st(1)
	;ffree st(1)
	fxch st(2)
	fstp tempreal
	fstp tempreal
	ret
comp2a: ;st(0) < st(1) && st(2)
	;ffree st(0)
	fstp tempreal
	fcom st(1)
	fstsw ax
	fwait
	sahf
	jb res2
res1:   ;st(0) < st(2) < st(1)
	fxch st(1)
res2:	;st(0) < st(1) < st(2)
	;ffree st(1)
	fstp tempreal
	ret
ret



;**************
;* Updatemint *
;**************
updatemint:
        fldz
	fcomp
	fstsw ax
	fwait
	sahf
        ja oldtbetter

        fld mint
	fcomp
	fstsw ax
	fwait
	sahf
        jna oldtbetter

        fstp mint
        mov ax,curobj
        mov minobj,ax
        ret
oldtbetter:
        fstp tempreal

ret



;**************
;* Ballnormal *
;**************
;Intersect is in si
;Pointer to ball is in [bx]
;Stores normal in si
ballnormal:
        ;pusha

        fld dword ptr [bx+0*4]
        fsub dword ptr [si+0*4]
        fstp dword ptr [normal+0*4] 
        fld dword ptr [bx+1*4]
        fsub dword ptr [si+1*4]
        fstp dword ptr [normal+1*4] 
        fld dword ptr [bx+2*4]
        fsub dword ptr [si+2*4]
        fstp dword ptr [normal+2*4]

        ;fld dword ptr [bx+3*4]
        ;fld1
        ;fchs
        ;fdivr
	fld dword ptr [bx+3*4]
	fchs
        lea si,normal
        ;call normalizep
        call scalevector
        fstp tempreal

        ;popa
ret



;****************
;* Yplanenormal *
;****************
;Intersect is in si
;Pointer to yplane is in [bx]
;Stores normal in si
yplanenormal:
        fldz
        fst dword ptr [normal+0*4]
        fstp dword ptr [normal+2*4]
        fld1
        fstp dword ptr [normal+1*4]
        lea si,normal
ret



;****************
;* Pillarnormal *
;****************
;Intersect is in si
;Pointer to pillar is in [bx]
;Stores normal in si
pillarnormal:
        push ax

;        fld dword ptr [bx+0*4]
;        fsub dword ptr [si+0*4]
;        fstp dword ptr [normal+0*4] 
;        ;fld dword ptr [bx+1*4]
;	fldz
;        ;fsub dword ptr [si+1*4]
;        fstp dword ptr [normal+1*4] 
;        fld dword ptr [bx+1*4]
;        fsub dword ptr [si+2*4]
;        fstp dword ptr [normal+2*4]
;
;        fld dword ptr [bx+2*4]
;        fchs
;        lea si,normal
;        call scalevector
;        fstp tempreal

        fld dword ptr [bx+0*4]
        fsub dword ptr [si+0*4]
        fst dword ptr [normal+0*4] 
	;fld st(0)
	fmul st(0),st(0)
        ;fld dword ptr [bx+1*4]
	fldz
        ;fsub dword ptr [si+1*4]
        fstp dword ptr [normal+1*4] 
        fld dword ptr [bx+1*4]
        fsub dword ptr [si+2*4]
        fst dword ptr [normal+2*4]
	;fld st(0)
	fmul st(0),st(0)
	fadd
	fadd ONE
	;fadd REAL255
	;fadd REAL255
	;fadd REAL255
	;fadd REAL255
	fcomp dword ptr [bx+3*4]
	fstsw ax
	fwait
	sahf
	jb pnormal2

        fld dword ptr [bx+2*4]
        fchs
        lea si,normal
        call scalevector
        fstp tempreal
	jmp pnormalout
pnormal2:
	fldz
	fst dword ptr [normal+0*4]
	fstp dword ptr [normal+2*4]
	fld1
	fld dword ptr [raycurrent+1*4]
	fcomp ZERO
	fstsw ax
	fwait
	sahf
	jb pnormal3
	fchs
pnormal3:
	fstp dword ptr [normal+1*4]
	lea si,normal
pnormalout:
        pop ax
ret



;****************
;* Rotatecamera *
;****************
;Angle is in st(0)
;Axis is in ax
;rotatecamera:
;int rot=(axis+2)%3;
;int rot2=(axis+1)%3;
;float cosa=cos(angle);
;float sina=sin(angle);
;for (i=0;i<3;i++){
  ;cameradir[rot*3+i]=cameradir[rot*3+i]*cosa+cameradir[rot2*3+i]*sina;
;}
;	pusha
;	
;	;fld dword ptr [cameramatrix+12]
;	;fld1
;	;fdiv REAL256
;	;fchs
;	;faddp
;	;fstp dword ptr [cameramatrix+12]
;;       fld dword ptr [cameramatrix+7*4]
;;       fld1
;;       fdiv REAL256
;;       fdiv REAL31
;;       ;fchs
;;       faddp
;;       fstp dword ptr [cameramatrix+7*4]
;;       lea si,[cameramatrix+3*4]
;;       call normalizep
;;       ;mov di,si
;;       lea di,[cameramatrix+6*4]
;;       lea bx,[cameramatrix+0*4]
;;       call crossproduct
;;
;;        fstp
;;
;;       popa
;;       ret
;	
;        ;fdiv REAL256
;        ;fdiv REAL256
;        ;fdiv REAL256
;
;	push ax	
;
;	mov dl,3
;	mov cx,ax
;	add ax,2
;	div dl
;	xor bx,bx
;	mov bl,ah
;
;	mov ax,cx
;	add ax,1
;	div dl
;	xor cx,cx
;	mov cl,ah
;
;	fsincos
;	mov al,12
;	mul bl
;        mov bx,ax
;
;        ;mov bx,12;;;
;
;	lea si,[cameramatrix+bx]
;        ;fxch st(1)
;	;fstp
;	;fld REAL101
;	call scalevector
;        call normalizep
;        fstp tempreal
;        ;fstp
;
;	mov al,12
;	mul cl
;	mov bx,ax
;
;        ;mov bx,0;;;
;
;	lea di,[cameramatrix+bx]
;	fld dword ptr [di+0*4]	
;        fmul st(0),st(1)
;	fadd dword ptr [si+0*4]
;        fstp dword ptr [si+0*4]
;	fld dword ptr [di+1*4]	
;        fmul st(0),st(1)
;	fadd dword ptr [si+1*4]
;        fstp dword ptr [si+1*4]
;	fld dword ptr [di+2*4]	
;        fmul st(0),st(1)
;	fadd dword ptr [si+2*4]
;        fstp dword ptr [si+2*4]
;
;        fstp tempreal
;
;        call normalizep
;
;	pop bx	
;	mov al,12
;	mul bl
;	mov bx,ax
;
;        ;mov bx,24;;;
;
;	lea bx,[cameramatrix+bx]
;
;	xchg di,bx
;	;xchg di,si
;	call crossproduct
;
;        lea si,[cameramatrix+0*4]
;        call normalizep
;        lea si,[cameramatrix+3*4]
;        call normalizep
;        lea si,[cameramatrix+6*4]
;        call normalizep
;
;	popa
;ret



;*************
;* Dircamera *
;*************
;Target point is in bx
dircamera:
        pusha

        fld dword ptr [bx+0*4]
        fsub dword ptr [cameraorigin+0*4]
        fstp dword ptr [cameramatrix+0*4+24]
        fld dword ptr [bx+1*4]
        fsub dword ptr [cameraorigin+1*4]
        fstp dword ptr [cameramatrix+1*4+24]
        fld dword ptr [bx+2*4]
        fsub dword ptr [cameraorigin+2*4]
        fstp dword ptr [cameramatrix+2*4+24]

        lea si,[cameramatrix+24]
        call normalizep

        call cameranormalize

        popa
ret



;*******************
;* Cameranormalize *
;*******************
cameranormalize:
        pusha

        
        ;mov eax,ZERO
        ;mov [cameramatrix+0*4+12],eax
        fldz
        fst [cameramatrix+0*4+12]
        mov ax,i
        mov tempint,ax
        sub tempint,EVENT1I-200
        jna cnormcont
        fstp tempreal
        fild tempint
        fmul REAL01
        fmul REAL025
        fsin
        fmul REAL025
cnormcont:
        fstp [cameramatrix+2*4+12]
        ;mov [cameramatrix+2*4+12],eax
        mov eax,ONE
        mov [cameramatrix+1*4+12],eax

        lea bx,[cameramatrix]
        lea si,[cameramatrix+12]
        lea di,[cameramatrix+24]
        call crossproduct
        lea si,[cameramatrix]
        call normalizep

        lea bx,[cameramatrix+12]
        lea si,[cameramatrix+24]
        lea di,[cameramatrix+0]
        call crossproduct
        lea si,[cameramatrix]
        call normalizep

        popa
ret



;********
;* Draw *
;********
draw:
	pusha
	
	push es
        push fs

	mov ax,rtrbuffer
	mov es,ax

        mov shadowcheck,0

        lea si,raycorners
        ;mov eax,rayleft
        ;mov dword ptr [si+0*4],eax
        ;mov dword ptr [si+6*4],eax
        fld rayleft
        fst dword ptr [si+0*4]
        fstp dword ptr [si+6*4]
        ;mov eax,raytop
        ;mov dword ptr [si+1*4],eax
        ;mov dword ptr [si+4*4],eax
        fld raytop
        fst dword ptr [si+1*4]
        fstp dword ptr [si+4*4]
        ;mov eax,rayright
        ;mov dword ptr [si+3*4],eax
        fld rayright
        fstp dword ptr [si+3*4]
        ;mov dword ptr [raycorners]+9*4,eax
        ;mov eax,raybottom
        ;mov dword ptr [si+7*4],eax
        fld raybottom
        fstp dword ptr [si+7*4]
        ;mov dword ptr [raycorners]+10*4,eax
        ;mov eax,ONE
        ;mov dword ptr [si+2*4],eax
        ;mov dword ptr [si+5*4],eax
        ;mov dword ptr [si+8*4],eax
        fld1
        fst dword ptr [si+2*4]
        fst dword ptr [si+5*4]
        fstp dword ptr [si+8*4]
        ;mov dword ptr [raycorners]+11*4,eax

        lea si,cameramatrix
        lea di,raycorners
        add di,0*4
        call rotatepoint
        lea di,raycorners
        add di,3*4
        call rotatepoint
        lea di,raycorners
        add di,6*4
        call rotatepoint
	;lea di,[raycorners+9*4]
	;call rotatepoint


        lea si,raycorners
        ;x
        fld dword ptr [si+3*4]
        fld dword ptr [si+0*4]
	fsubp
	fild SCREENWIDTH
        fdivp
        fstp raydeltax+0*4
	;y
        fld dword ptr [si+4*4]
        fld dword ptr [si+1*4]
	fsubp
	fild SCREENWIDTH
        fdivp
        fstp raydeltax+1*4
	;z
        fld dword ptr [si+5*4]
        fld dword ptr [si+2*4]
	fsubp
	fild SCREENWIDTH
        fdivp
        fstp raydeltax+2*4

	;x
        fld dword ptr [si+6*4]
        fld dword ptr [si+0*4]
	fsubp
	fild SCREENHEIGHT
        fdivp
        fstp raydeltay+0*4
	;y
        fld dword ptr [si+7*4]
        fld dword ptr [si+1*4]
	fsubp
	fild SCREENHEIGHT
        fdivp
        fstp raydeltay+1*4
	;z
        fld dword ptr [si+8*4]
        fld dword ptr [si+2*4]
	fsubp
	fild SCREENHEIGHT
        fdivp
        fstp raydeltay+2*4

	mov eax,dword ptr [raycorners+0*4]
	mov [rayleftside+0*4],eax
	mov eax,dword ptr [raycorners+1*4]
	mov [rayleftside+1*4],eax
	mov eax,dword ptr [raycorners+2*4]
	mov [rayleftside+2*4],eax
	xor di,di
	mov dx,SCREENHEIGHT
        ;shr dx,1

        ;mov bx,normtab
        ;mov fs,bx
        mov bx,drawcounter
        mov parity,bx
        and parity,1
        xor bx,bx
drawyloop:
        cmp gfxinterlaced,1
        jnz interlacedisabled1
        cmp parity,0
        jz interlaced
interlacedisabled1:

        mov eax,[rayleftside+0*4]
	mov [rayshoot+0*4],eax
	mov eax,[rayleftside+1*4]
	mov [rayshoot+1*4],eax
	mov eax,[rayleftside+2*4]
	mov [rayshoot+2*4],eax
	mov cx,SCREENWIDTH
drawxloop:

	mov eax,[rayshoot+0*4]
	mov [raycurrent+0*4],eax
	mov eax,[rayshoot+1*4]
	mov [raycurrent+1*4],eax
	mov eax,[rayshoot+2*4]
	mov [raycurrent+2*4],eax
	
        lea si,raycurrent

        ;cmp drawcounter,1
        ;jnz drawusenormtab
        call normalizep
        ;fstp tempreal
        ;fstp dword ptr fs:[bx]
	;jmp drawdontusenormtab
;drawusenormtab:
        ;fld dword ptr fs:[bx]
        ;call scalevector
        ;fstp tempreal
drawdontusenormtab:

        ;mov eax,dword ptr [cameraorigin+0*4]
        ;mov dword ptr [origin+0*4],eax
        fld [cameraorigin+0*4]
        fstp [origin+0*4]
        ;mov eax,dword ptr [cameraorigin+1*4]
        ;mov dword ptr [origin+1*4],eax
        fld [cameraorigin+1*4]
        fstp [origin+1*4]
        ;mov eax,dword ptr [cameraorigin+2*4]
        ;mov dword ptr [origin+2*4],eax
        fld [cameraorigin+2*4]
        fstp [origin+2*4]
        mov recurses,MAXRECURSES
        mov lastobj,0
        call raytrace

;        add gfxnegative,0
;        jz nonegative
;        fld1
;        fsub [color+0*4]
;        fstp [color+0*4]
;        fld1
;        fsub [color+1*4]
;        fstp [color+1*4]
;        fld1
;        fsub [color+2*4]
;        fstp [color+2*4]
;nonegative:

;	fld1
;	fsub [color+2*4]
        fld [color+2*4]
        fmul REAL31
        fistp bytecolor
        mov ax,bytecolor

;	fld1
;	fsub [color+1*4]
        fld [color+1*4]
        fmul REAL63
	fistp bytecolor
        shl bytecolor,5
        add ax,bytecolor

;	fld1
;	fsub [color+0*4]
        fld [color+0*4]
        fmul REAL31
	fistp bytecolor
        shl bytecolor,11
        add ax,bytecolor
;        fld [color+0*4]
;        fmul REAL31
;        fist bytecolor
;        fisub bytecolor
;        fmul REAL65536
;        fistp tempint
;
;        call random
;        mov ebx,rndseed
;        shr ebx,16
;        cmp bx,tempint
;        jna noredadd
;noredadd:
;
;        shl bytecolor,11
;        add ax,bytecolor

	stosw

	fld rayshoot+0*4
	fadd raydeltax+0*4
	fstp rayshoot+0*4
	fld rayshoot+1*4
	fadd raydeltax+1*4
	fstp rayshoot+1*4
	fld rayshoot+2*4
	fadd raydeltax+2*4
	fstp rayshoot+2*4

        ;add bx,4


	dec cx
	jnz drawxloop

        jmp noninterlaced
interlaced:
        add di,SCREENWIDTH
        add di,SCREENWIDTH
noninterlaced:

        xor parity,1

	fld rayleftside+0*4
	fadd raydeltay+0*4
	fstp rayleftside+0*4
	fld rayleftside+1*4
	fadd raydeltay+1*4
	fstp rayleftside+1*4
	fld rayleftside+2*4
	fadd raydeltay+2*4
	fstp rayleftside+2*4


        ;or bx,bx
	;jnz drawnochange
        ;mov bx,fs
        ;add bx,1000h
        ;mov fs,bx
        ;xor bx,bx
drawnochange:

	dec dx
	jnz drawyloop

        cmp gfxinterlaced,1
        jnz interlacedisabled2


	xor di,di
        mov si,SCREENWIDTH
        shl si,1

	mov dx,SCREENHEIGHT
        shr dx,1

        mov bx,drawcounter
        mov parity,bx
        and parity,1
        jz drawinteryloop
        add di,SCREENWIDTH
        add di,SCREENWIDTH
        add si,SCREENWIDTH
        add si,SCREENWIDTH
        ;xor si,si
drawinteryloop:
        mov cx,SCREENWIDTH
interlacedloop:
        mov eax,es:[di]
        mov ebx,es:[si]
        shr eax,1
        shr ebx,1
        and eax,7BEF7BEFh
        and ebx,7BEF7BEFh
        add eax,ebx
        ;mov eax,ebx
        stosd
        add si,4

        sub cx,2
        jnz interlacedloop

        add di,SCREENWIDTH
        add di,SCREENWIDTH
        add si,SCREENWIDTH
        add si,SCREENWIDTH

        dec dx
        jnz drawinteryloop

interlacedisabled2:
        pop fs
	pop es

	inc drawcounter
	popa
ret



;**************
;* Drawbuffer *
;**************
drawbuffer:
        pusha

	push es
	mov ax,buffer
	mov es,ax
	xor si,si
	;push gs
	
        mov dx,SCREENHEIGHT
	;mov dx,50
        mov ax,200
        sub ax,dx
        sub ax,dx
        shr ax,1
        mov bx,ax
        shl ax,9
        shl bx,7
        add ax,bx
	;shr dx,1

	;xor di,di
	mov di,ax
        ;mov di,320
        ;sub di,SCREENWIDTH
        ;sub di,SCREENWIDTH
        ;shr di,1
        ;add di,ax

drawbufferyloop:
        mov cx,SCREENWIDTH
	;dec cx
        ;shr cx,1
drawbufferxloop:
	mov ax,gs:[si]
	mov col1,ax
	stosw

	mov bx,gs:[si+2]
	mov col2,bx
	push ax
        shr ax,1
        shr bx,1
        and ax,7BEFh
        and bx,7BEFh
        add ax,bx
	stosw

	pop ax
	mov bx,SCREENWIDTH
	shl bx,1
	mov bx,gs:[si+bx]
	mov col3,bx
        shr ax,1
        shr bx,1
        and ax,7BEFh
        and bx,7BEFh
        add ax,bx
	mov es:[di+636],ax

	;mov bx,ax
;	pop ax
;	mov bx,SCREENWIDTH
;	shl bx,1
;	mov bx,gs:[si+bx+2]
;        shr ax,2
;        shr bx,2
;        and ax,39E7h;7BEFh
;        and bx,39E7h;7BEFh
;        add ax,bx
;	rol eax,16
;	pop bx
;	pop ax
;        shr ax,2
;        shr bx,2
;        and ax,39E7h;7BEFh
;        and bx,39E7h;7BEFh
;        add bx,ax
;	ror eax,16
;	add ax,bx
	push cx
	push dx
	mov bx,SCREENWIDTH
	shl bx,1
	mov dx,gs:[si+bx+2]
	mov cx,col3
	mov bx,col2
	mov ax,col1
	;and ax,0E79Ch
	;and bx,0E79Ch
	;and cx,0E79Ch
	;and dx,0E79Ch
	;shr ax,2
	;shr bx,2
	;shr cx,2
	;shr dx,2
	;and ax,39E7h
	;and bx,39E7h
	;and cx,39E7h
	;and dx,39E7h
	shr ax,1
	shr bx,1
	shr cx,1
	shr dx,1
	and ax,7BEFh
	and bx,7BEFh
	and cx,7BEFh
	and dx,7BEFh
	add ax,dx
	add bx,cx
	shr ax,1
	shr bx,1
	and ax,7BEFh
	and bx,7BEFh
	add ax,bx
	;add ax,cx
	;add ax,dx
	;and ax,7BEFh
	;and bx,7BEFh
	;add ax,bx
	mov es:[di+638],ax
	pop dx
	pop cx



	;pop bx
	;push ax

        ;shr ax,1
        ;shr bx,1
        ;and ax,7BEFh
        ;and bx,7BEFh
        ;add ax,bx
	;mov es:[di+638],ax
	
	add si,2


	;add di,2
        ;mov eax,gs:[si]
        ;add si,4
        ;stosd
        dec cx
        jnz drawbufferxloop
        add di,640
	cmp di,64000
	jna nodrawsegmentchange
	xor di,di
	mov ax,es
        add ax,1000h
	mov es,ax
nodrawsegmentchange:
        ;sub di,SCREENWIDTH
        ;sub di,SCREENWIDTH
        dec dx
        jnz drawbufferyloop

	pop es
        popa
ret

	
;drawbuffer2:
;	pusha
;	
;	push es
;        mov ax,buffer
;	mov es,ax
;	xor si,si
;
;;        mov dx,SCREENHEIGHT
;;        mov ax,200
;;        sub ax,dx
;;        shr ax,1
;;        mov bx,ax
;;        shl ax,8
;;        shl bx,6
;;        add ax,bx
;;
;;        mov di,320
;;        sub di,SCREENWIDTH
;;        shr di,1
;;        add di,ax
;;
;;drawbufferyloop:
;;        mov cx,SCREENWIDTH
;;        shr cx,2
;;drawbufferxloop:
;;        mov eax,gs:[si]
;;        add si,4
;;        stosd
;;        dec cx
;;        jnz drawbufferxloop
;;        add di,320
;;        sub di,SCREENWIDTH
;;        dec dx
;;        jnz drawbufferyloop
;
;        ;xor di,di
;        mov di,16000
;	;mov di,0
;        xor dx,dx
;        xor ax,ax
;        mov cx,150
;        rol ecx,16
;drawbufferyloop2:
;        mov cx,320
;        xor bx,bx
;        push si
;drawbufferxloop2:
;        mov ax,gs:[si]
;        stosw
;
;        add bx,SCREENWIDTH
;        cmp bx,320
;        jb drawbuffernoxadd
;        inc si
;        inc si
;        sub bx,320
;drawbuffernoxadd:
;
;        cmp di,0
;        jnz nodrawadd
;        mov ax,es
;        add ax,1000h
;        mov es,ax
;nodrawadd:
;
;        dec cx
;        jnz drawbufferxloop
;
;        pop si
;
;        add dx,SCREENHEIGHT
;        cmp dx,150
;        jb drawbuffernoyadd
;        sub dx,150
;        add si,SCREENWIDTH
;        add si,SCREENWIDTH
;
;drawbuffernoyadd:
;        ror ecx,16
;        dec cx
;        jz nodrawyloop
;        rol ecx,16
;        jmp drawbufferyloop
;nodrawyloop:
;
;
;        jmp notempdraw
;
;	push fs
;
;	mov ax,buffer
;	mov es,ax
;	mov ax,ftext1
;	mov fs,ax
;	xor di,di
;	xor si,si
;	mov dx,64
;tempyloop:
;	mov cx,64
;tempxloop:
;        xor bh,bh
;        mov bl,fs:[si+64*64*2]
;        shr bl,3
;        mov ax,bx
;        mov bl,fs:[si+64*64]
;        shr bl,2
;        shl bx,5
;        add ax,bx
;        mov bl,fs:[si]
;        shr bl,3
;        shl bx,11
;        add ax,bx
;	stosw
;	inc si
;	dec cx
;	jnz tempxloop
;	add di,(320-64)*2
;	dec dx
;	jnz tempyloop
;
;	pop fs
;notempdraw:
;
;	pop es
;
;	popa
;ret



;**************
;* Setobjects *
;**************
setobjects:
        pusha


        lea bx,objlist


        mov ax,YPLANE_TYPE

        mov [bx],ax
        lea dx,floor
        mov [bx+2],dx
        fld1
        fst  dword ptr [bx+4]
        fst  dword ptr [bx+8]
        fstp dword ptr [bx+12]
        fldz
        fstp dword ptr [bx+16]
        lea dx,floortexture
        mov [bx+20],dx


        ;mov ax,0;BALL_TYPE
        xor ax,ax

        add bx,22
        mov [bx],ax
        lea dx,ball1
        mov [bx+2],dx
	fld1
	fstp dword ptr [bx+8]
	fldz
	fst  dword ptr [bx+4]
	fstp dword ptr [bx+12]
        fld REAL025
        fstp dword ptr [bx+16]
        lea dx,nulltexture
        mov [bx+20],dx

        add bx,22
        mov [bx],ax
        lea dx,ball2
        mov [bx+2],dx
	fld1
	fstp dword ptr [bx+12]
	fldz
	fst  dword ptr [bx+4]
	fstp dword ptr [bx+8]
        fldz; REAL025
        fstp dword ptr [bx+16]
        lea dx,nulltexture
        mov [bx+20],dx


        mov ax,PILLAR_TYPE

        add bx,22
        mov [bx],ax
        lea dx,pillar1
        mov [bx+2],dx
	fld1
	fst dword ptr [bx+4]
	fstp  dword ptr [bx+12]
	fldz
	fstp dword ptr [bx+8]
        fld REAL01
        fstp dword ptr [bx+16]
        lea dx,pillartexture
	mov [bx+20],dx

        add bx,22
        mov [bx],ax
        lea dx,pillar2
        mov [bx+2],dx
	fld1
	fstp dword ptr [bx+4]
	fldz
	fst  dword ptr [bx+8]
	fstp dword ptr [bx+12]
        fld REAL025
        fstp dword ptr [bx+16]
        lea dx,nulltexture;pillartexture
        mov [bx+20],dx

        add bx,22
        mov [bx],ax
        lea dx,pillar3
        mov [bx+2],dx
	fld1
	fstp dword ptr [bx+4]
	fldz
	fst  dword ptr [bx+8]
	fstp dword ptr [bx+12]
        fld REAL025
        fstp dword ptr [bx+16]
        lea dx,nulltexture
        mov [bx+20],dx

        add bx,22
        mov [bx],ax
        lea dx,roof
        mov [bx+2],dx
	fld1
	fstp dword ptr [bx+8]
	fld1; REAL05
	fstp  dword ptr [bx+4]
	fldz
	fstp dword ptr [bx+12]
        fldz; REAL025
        fstp dword ptr [bx+16]
        lea dx,pillartexture
	mov [bx+20],dx


        mov ax,BALL_TYPE

        add bx,22
        mov [bx],ax
        mov [bx+22],ax
        mov [bx+44],ax
        lea dx,ball3
        mov [bx+2],dx
        lea dx,ball4
        mov [bx+2+22],dx
        lea dx,ball5
        mov [bx+2+44],dx
	fld1
	fst  dword ptr [bx+4]
	fst  dword ptr [bx+4+22]
	fst  dword ptr [bx+4+44]
	fst  dword ptr [bx+8]
	fst  dword ptr [bx+8+22]
	fstp dword ptr [bx+8+44]
	fldz
	fst  dword ptr [bx+12]
	fst  dword ptr [bx+12+22]
	fstp dword ptr [bx+12+44]
        fld REAL025
        fst  dword ptr [bx+16]
        fst  dword ptr [bx+16+22]
        fstp dword ptr [bx+16+44]
        lea dx,nulltexture
        mov [bx+20],dx
        mov [bx+20+22],dx
        mov [bx+20+44],dx

        ;add bx,66
        ;mov [bx],ax
        ;lea dx,ball6
        ;mov [bx+2],dx
        ;fld1
        ;fst  dword ptr [bx+4]
        ;fst  dword ptr [bx+8]
        ;fstp dword ptr [bx+12]
        ;fldz
        ;fstp dword ptr [bx+16]
        ;lea dx,nulltexture
        ;mov [bx+20],dx

        popa
ret



;************
;* Printmsg *
;************
printmsg:
	mov bx,SCREENWIDTH
	shl bx,1
	mul bx
	mov di,ax
        mov ax,font
        mov fs,ax

	;mov di,0
        xor ah,ah
        mov bx,[curmsgl]
        mov al,[bx]
        push ax
        mov bx,SCREENWIDTH
        shl ax,4
        sub bx,ax
        ;shr bx,1
        add di,bx
        mov si,[curmsg]
        pop cx
printiloop:
	push di
        xor bx,bx
        mov bl,[si]
        shl bx,6

        mov dh,8
printyloop:
        push di
        mov dl,8
printxloop:
        mov al,fs:[bx]
        test al,1
        jz noprintdraw

        mov eax,es:[di]
        ;shr eax,1
        ;and eax,7BEF7BEFh
        ;add eax,7BEF7BEFh
        not eax
	mov es:[di],eax
	push bx
	mov bx,SCREENWIDTH
	shl bx,1
        mov eax,es:[di+bx]
        shr eax,1
        and eax,7BEF7BEFh
        add eax,7BEF7BEFh
        not eax
	mov es:[di+bx],eax
	pop bx

        ;stosd
        ;mov eax,es:[di]
        ;shr eax,1
        ;and eax,7BEF7BEFh
        ;add eax,39E77BEFh
        ;not eax
        ;stosd
        ;add di,632
	;add di,SCREENWIDTH
	;add di,SCREENWIDTH
	;sub di,4

noprintdraw:
        add di,4
        inc bx
        dec dl
        jnz printxloop

        pop di
        ;add di,2560
	add di,SCREENWIDTH
	add di,SCREENWIDTH
	add di,SCREENWIDTH
	add di,SCREENWIDTH
        dec dh
        jnz printyloop

        inc si
        ;add di,64-20480
	pop di
	add di,32
        dec cl
        jnz printiloop
      
ret



;*****************
;* Printmessages *
;*****************
printmessages:
        pusha

        mov ax,rtrbuffer
        mov es,ax

        cmp i,FIRSTMSG
        jna nomsg

        cmp i,SECONDMSG
        ja nomsg1

        lea ax,msg1l
        mov curmsgl,ax
        lea ax,message1
        mov curmsg,ax
	;mov di,
        ;mov di,40992;26880
	mov ax,30
        call printmsg
        jmp nomsg
nomsg1:
        cmp i,NOMOREMSG
        ja nomsg2

        lea ax,msg2l
        mov curmsgl,ax
        lea ax,message2
        mov curmsg,ax
        ;mov di,16000
        ;mov di,38432;26880
	mov ax,15
        call printmsg
        lea ax,msg3l
        mov curmsgl,ax
        lea ax,message3
        mov curmsg,ax
        ;mov di,28800
        ;mov di,3600;26880
	mov ax,40
        call printmsg
        jmp nomsg
nomsg2:

nomsg:
        popa
ret



;********
;* Main *
;********
main:
        call initialize

        call setobjects
	call settimer

mainloop:
	mov ax,oldi
        cmp ax,i2
        jz mainloop
        mov cx,i2
	sub cx,oldi
frameskip:
	push cx
        call calculate
	pop cx
	dec cx
	jnz frameskip

        mov ax,i2
	mov oldi,ax

	call draw
        call printmessages
	call drawbuffer
        ;call retrace
        call copybuffer

        cmp i,ENDOFINTRO
        ja nomainloop

        ;Keyboard handling
        mov ax,256
        int 16h
        jz mainloop;yesmainloop          ;No keys pressed

        mov ah,0
        int 16h
        dec ah
        jz nomainloop           ;ESC pressed

        ;cmp al,32
        ;jnz yesmainloop         ;Space not pressed
        
        ;add i,2
        ;mov al,gfxinterlaced
        ;xor gfxinterlaced,1
        ;xor gfxnegative,1
        ;xor gfxfog,1

yesmainloop:
        jmp mainloop
nomainloop:
        call deinitialize
        ret
end start
;i2              dw ?
