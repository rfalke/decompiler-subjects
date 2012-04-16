.486
  xpocz equ 80           ; Borders of tunnel's window
  xkonc equ -80
  ypocz equ 50
  ykonc equ -50
  diadd equ 320

Assume cs:Code,ds:Code

Code    Segment USE16
        Org     100h      ; Of course *.COM
Start:
        mov     al,13h    ; Set mode 13h
        int     10h

        push 0a000h
        pop es            ; es - VGA

        mov dx,3c8h       ; It just sets normal gradient palette (from
        xor ax,ax         ; black to white). It is set four times: from
        out dx,al         ; 0 - 63, 64 - 127 and so on
        inc dx
Paleta:
        out dx,al
        out dx,al
        out dx,al
        inc al
        jnz Paleta

        fld dalfa           ; Alpha - angle for rotation - it needs to be
                            ; different than zero, otherwise there's nasty
; For y:=-99 to 100 do dx=y ; point in the centre of tunnel :(
; ###########################################################################
Kolejna_Klatka:
        xor di,di         ; di:=0
        inc bx
        inc bx
        mov dx,ypocz      ; dx:=ypocz
Jedna_Klatka_Tunelu:
; For x:=-160 to 160 do cx=x
; @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
        mov cx,xpocz      ; cx:=xpocz
        mov yd,dx         ; yd:=dx=y
Jedna_Linia_Tunelu:
        fild yd           ; st(0)=yd st(1)=alfa
        mov xd,cx         ; xd:=xpocz
        fild xd           ; st(0)=xd, st(1)=yd st(2)=alfa
        fld zd            ; st(0)=zd, st(1)=xd, st(2)=yd st(3)=alfa
; ***************************************************************************
; Input: st(0)=zd; st(1)=xd, st(2)=yd, st(3)=alfa
; First rotation around Oy:
; direction.x:=x*cos(alfa)-z*sin(alfa)
        fld st(3)   ; st=alfa st1=zd, st2=xd, st3=yd, st4=alfa
        fsin        ; st=sin st1=zd, st2=xd, st3=yd, st4=alfa
        fld st(4)   ; st=alfa st1=sin st2=zd, st3=xd, st4=yd, st5=alfa
        fcos        ; st=cos st1=sin st2=zd, st3=xd, st4=yd, st5=alfa
        fld st(2)   ; st=zd st1=cos st2=sin st3=zd st4=xd st5=yd, st6=alfa
        fmul st,st(2) ;st=sin*z st1=cos st2=sin st3=zd st4=xd st5=yd st6=alfa
        fld st(4);st=xd st1=s*z st2=cos st3=sin st4=zd st5=xd st6=yd st7=alfa
        fmul st,st(2);st=x*c st1=s*z st2=c st3=s st4=zd st5=xd st6=yd st7=alf
        fsubrp st(1);st=x*cos-z*sin st1=c st2=s st3=zd st4=xd st5=yd st6=alfa
; direction.y:=y;
; Input: st=direction.x, st1=cos, st2=sin, st3=zd, st4=xd, st5=yd, st6=alfa
; direction.z:=x*sin(alfa)+z*cos(alfa)
        fxch st(1)  ; st=cos, st1=nx st2=sin st3=zd st4=xd st5=yd st6=alfa
        fmulp st(3) ; st=nx st1=sin st2=zd*cos st3=xd st4=yd st5=alfa
        fxch st(1)  ; st=sin st1=nx st2=zd*cos st3=xd st4=yd st5=alfa
        fmulp st(3) ; st=nx st1=zd*cos st2=xd*sin st3=yd st4=alfa
        fxch st(2)  ; st=xd*sin st1=zd*cos st2=nx st3=yd st4=alfa
        faddp st(1) ; st=xd*sin+zd*cos st2=nx st3=yd st4=alfa
; Output: ; st=zd st2=xd st3=yd st4=alfa
; Normalize(direction);
; direction.x:=x - rotated
; direction.y:=y
; direction.z:=z - rotated
; Normalize(direction)
        fld st        ; st0=zd,        st1=zd   st2=xd, st3=yd st4=alfa
        fmul st,st    ; st0=zd^2,      st1=zd   st2=xd, st3=yd st4=alfa
        fld st(3)     ; st0=yd,        st1=zd^2 st2=zd, st3=xd st4=yd st5=alfa
        fmul st,st    ; st0=yd^2,      st1=zd^2 st2=zd, st3=xd st4=yd st5=alfa
        faddp st(1)   ; st0=yd^2+zd^2, st1=zd   st2=xd, st3=yd  st4=alfa
        fld st(2)     ; st0=xd,   st1=yd^2+zd^2 st2=zd, st3=xd st4=yd st5=alfa
        fmul st,st    ; st0=xd^2, st1=yd^2+zd^2 st2=zd, st3=xd st4=yd st5=alfa
        faddp st(1)   ; st0=xd^2+yd^2+zd^2       st1=zd, st2=xd st3=yd st4=alf
        fsqrt         ; st0=sqrt(xd^2+yd^2+zd^2) st1=zd, st2=xd st3=yd st4=alf
; State of FPU: st(0)=length, st(1)=zd,st(2)=xd,st(3)=yd, st(4)=alfa
; What we need:
; x:=x/length
; y:=y/length
; z:=z/length
; It would be better to calculate 1/length and then multiplay instead of
; divide (it should work approximately 60 cycles faster than this one) but
; there's not enough place (256 bytes border).
        fdiv st(3),st ; st(3):=yd/length
        fdiv st(2),st ; st(2):=xd/length
        fdivp st(1)   ; st(1):=zd/length, pop
; Output (normalized): st(0)=zd, st(1)=xd, st(2)=yd, st(3)=alfa
; ***************************************************************************

; $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
; What we need: a:=sqr(direction.x)+sqr(direction.y)
        fld st(2)     ; st0=yd         st1=zd   st2=xd st3=yd st4=alfa
        fmul st,st    ; st0=yd^2       st1=zd   st2=xd st3=yd st4=alfa
        fld st(2)     ; st0=xd         st1=yd^2 st2=zd st3=xd st4=yd st5=alfa
        fmul st,st    ; st0=xd^2       st1=yd^2 st2=zd st3=xd st4=yd st5=alfa
        faddp st(1)   ; st0=yd^2+xd^2  st1=zd   st2=xd st3=yd st4=alfa
; 000000000000000000000000000000000000000000000000000000000000000000000000000
; I don't add a to a to have more free space, so: instead 2a there's just a
;        fadd st,st    ; st0=2*(yd^2+xd^2), st1=zd,   st2=xd, st3=yd
; 000000000000000000000000000000000000000000000000000000000000000000000000000

; Output: st0=2*(sqr(direction.x)+sqr(direction.y))=2a
; st0=2a, st1=zd, st2=xd, st3=yd, st4=alfa
; What we need: c:=sqr(origin.x)+sqr(origin.y)-sqr(r);
        fld r         ; st0=oy^2+ox^2+r^2 st1=a st2=zd st3=xd st4=yd st5=alfa
; Output st0=sqr(origin.x)+sqr(origin.y)+sqr(r)=c=-c
; st0=-c, st1=a, st2=zd, st3=xd, st4=yd, st5=alfa
; What we need: delta:=sqr(b)-a*c; - instead of 4*a*c there's a*c but it works
        fld st(1)     ; st0=a  st1=-c st2=a st3=zd st4=xd st5=yd st6=alfa
        fmulp st(1)   ; st0=-ac st1=a st2=zd st3=xd st4=yd st5=alfa
; 000000000000000000000000000000000000000000000000000000000000000000000000000
; Just like above: instead of -4ac there's -ac
      ;  fadd st,st    ; st0=-4ac,st1=2a, st2=zd, st3=xd, st4=yd
; 000000000000000000000000000000000000000000000000000000000000000000000000000

; Input: st0=-a*c=delta - It should be just normal DELTA (b^2 - 4*a*c), but:
; 1. b is always 0, so b^2=0 too
; 2. -ac works just fine, so here it is instead of -4ac
; That's why this delta looks like this st=-ac
; st0=delta, st1=a, st2=zd, st3=xd, st4=yd
; What we need: delta:=sqrt(delta);
        fsqrt         ; st0=sqrt(delta),st1=a,st2=zd,st3=xd,st4=yd
; $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$

; ***************************************************************************
; FPU: st0=sqrt(delta), st1=a, st2=zd, st3=xd, st4=yd, st5=alfa
; What we need: t:=(-b+sqrt(delta))/(2a) - tak powinno sie liczyc;
        fdivrp st(1)  ; st0=(-b+sqrt(delta))/(a) st1=zd st2=xd st3=yd st4=alfa
; input: st0=sqrt(delta)/a=t - theoretically: (-b+sqrt(delta))/a
; Color correction (fake shading) depends on distance from orign
        fld col       ; st=8000 st1=t, st2=zd, st3=xd, st4=yd st5=alfa
        fdiv st,st(1) ; just for depth shading
        fistp kol     ; 8000/t saved in kol.
; st0=t, st1=zd, st2=xd, st3=yd
; ***************************************************************************

; %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
; FPU: st0=t, st1=zd, st2=xd, st3=yd
; What we need:
;         Intersection.x:=origin.x+t*direction.x
;         Intersectoin.y:=origin.y+t*direction.y
;         Intersection.z:=origin.z+t*direction.z
        fmul st(1),st  ; st0=t,    st1=zd*t, st2=xd,   st3=yd, st4=alfa
        fmul st(2),st  ; st0=t,    st1=zd*t, st2=xd*t, st3=yd, st4=alfa
        fmulp st(3)    ; st0=zd*t, st1=xd*t, st2=yd*t, st3=alfa
        fiadd origin_z ; st0=origin.z+zd*t, st1=xd*t, st2=yd*t, st4=alfa
; Output: st0=intersection.z st1=intersection.y st2=intersection.x st3=alfa
; Wee ned to calculate U and V (texture coordinates).
; U:=round(intersection.z)
        fistp U          ; st=iz, U:=st pop => st=ix, st1=iy, st2=alfa
; V:=(round(128*atan(intersection.x/intersection.y)/pi);
        fpatan           ; st:=atan(iy,ix)        st1=alfa
        fmul factor      ; st:=atan(iy/ix)*128/pi st1=alfa
        fistp V          ; st=alfa
        mov al,byte ptr V[0]
        sub al,bl
        xor al,byte ptr U[0] ; One texel - colour in al
        imul ax,kol          ; This fake depth shading:
        shr ax,10            ; kol:=8000/t; ax:=kol*al div 1024
; %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
        mov ah,al            ; It draws bigger pixels (2x2) . Two now
        mov es:[di+diadd],ax ; Two below
        stosw                ; It takes less bytes than mov es:[di],ax add di,2
        xor ah,ah            ; It must be set to zero  - colour
        dec cx               ; Is it still this line of tunnel?
        cmp cx,xkonc
        jne Jedna_Linia_Tunelu ; Yes - then count next pixel
; End of one tunel line
; @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
        add di,diadd         ; Correction, we draw 2 pixels
        dec dx               ; Is this frame finished?
        cmp dx,ykonc
        jne Jedna_Klatka_Tunelu ; No - then draw next tunel line
; Frame ready
; ###########################################################################
        add origin_z,5     ; Origin moves forward

        cmp bx,100         ; We don't rotate tunnel for a few seconds
        jl ZwyklyT

        fadd dalfa         ; If 100 frames passed, start to increase angle

ZwyklyT:

        in      al,60h     ; Wait for ESC
        cmp     al,1
        jnz Kolejna_Klatka

        ret                ; END

  r  dd 1089.0             ; Not r, but r^2, r=33 and -c in our equaton
  ; because c=-r^2= - and because it's set above that way, then  -c=r^2
  factor dd 40.7436654     ; 128/pi - fpatan uses it (it scales texture)
  dalfa dd -0.03           ; alfa increase
  zd dd 80.0               ; Z part of vector DIRECTION
  col dd 8000.0            ; For fake depth shading
  kol dw ?                 ; Variable to store 8000/t - for fakedepth shading

  origin_z dw ?            ; It makes all that seem to move
  U dw ?                   ; Texture coordinates
  V dw ?

  xd dw ?                  ; x and y parts of vector DIRECTON
  yd dw ?

CODE    ENDS

END     Start