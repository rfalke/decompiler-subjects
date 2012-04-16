;-----------------------------------------------------------------------------
; Entry for  64b Hugi Xmas Compo      (http://www.hugi.scene.org/compo)
; Compile with: tasm /m
; By  Magne, Norway              (mage2[at]online[dot]no)
;
; 21 Dec 2006  First version
;
; Calculate new pixels with
;
;              NewY:= (210-OldX) and 0FFh;
;              NewX:= (OldY - ((OldX-c) shr 1)) and 0FFh;
;
; where c increases between 0 and 15.
; This interval seems to give more life to the orbits/pattern and movement,
; but draws the ellipses slightly off compared to only using  c=0 or 1.
;
; This calculation has some resemblance with an old program:
;     Hopalong (AK Dewdney, 1986)
;-----------------------------------------------------------------------------

        .486
cseg    segment dword public use16 'code'
        assume  cs:cseg, ds:cseg, es:cseg, ss:cseg

        org     100h
Start:
        mov     al, 13h        ; ah=0 assumed
        int     10h
        push    0A000h
        pop     es

;        xor     bx, bx         ; set start values for x, y
;        mov     si, bx
;        mov     dx, 8000       ; Some color variations between env if not set

NextPx:
        mov     ax, 210        ; Change pattern with this value
        sub     al, bl         ; Byte calc give "and 0FF", other values give
;        and     ax, 01FFh     ;  other patterns but more pixels off screen.
        xchg    ax, si         ; si:= (210-OldX) and 0FFh

        push    di
        and     di, 0Fh
        sub     bx, di
        pop     di
        shr     bx, 1
        sub     al, bl
;        and     bx, 01FFh
        xchg    ax, bx         ; bx:= (OldY - ((OldX-c) shr 1)) and 0FFh

        dec     dx
        jnz     DrawPx
        inc     di             ; increase c and color
        mov     dx, 8000       ; value alters speed, movement and color vari.

DrawPx:
        mov     ax, si         ; bottom clip
        cmp     al, 200
        jae     OutOfR
;        cmp     bx, 320        ; right clip
;        jae     OutOfR
        imul    ax, 320
        add     ax, bx
        xchg    ax, di
        stosb
        cmp     bl, 64         ; 0<=bx<256, so add pixels to the right columns
        jae     OnePx
        add     di, cx         ; cx=255 assumed.  di:= di + 255
        stosb
OnePx:  xchg    ax, di

OutOfR: in      al, 60h        ; Quit if Esc
        dec     al
        jnz     NextPx

Exit:   ret                    ; end - program

cseg    ends
        end     Start
