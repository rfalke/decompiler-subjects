;-----------------------------------------------------------------------------
; Entry for  64b Hugi Xmas Compo      (http://www.hugi.scene.org/compo)
; Compile with: tasm /m
; By  Magne, Norway              (mage2[at]online[dot]no)
;
; 4 Dec 2006  First version
;
; Draw circular "moire" patterns with
;
;            Color = ((x*x + y*y) mod bl ) and 0Fh
;
; using the remainder rather than the quotient.
; Draws 253 patterns by increasing bl from 3 to 255 and then quits.
; Delays almost a second between patterns. Esc works during the delay.
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

        mov     bl, 3          ; bh=0 assumed
NextSc:
        mov     cl, 200        ; ch=0 assumed
        xor     di, di
        mov     ds, di         ; ds to access bios area
NextY:
        mov     ax, cx         ; ax:= y*y
        mul     cx
        mov     si, 320*2      ; init sequence
NextX:
        add     ax, 320*2+1    ; ax:= ax + 2*x + 1 = x*x + y*y
        sub     ax, si
        div     bx
        mov     ax, dx
        and     al, 0Fh        ; ax:= ((x*x + y*y) mod bl ) and 0Fh
        stosb
        xor     ax, ax
        xchg    ax, dx

        dec     si
        dec     si
        jnz     NextX

        loop    NextY

Delay:
        in      al, 60h        ; Quit if Esc
        dec     ax             ; ah=0
        jz      Exit
        mov     al, [ds:46Ch]  ; read timer
        and     al, 0Fh        ; test if lowest bits goes to zero, giving
        xchg    ax, dx         ; nearly a second delay (16/18).
        sub     al, dl         ; dl=0 when entering delay loop
        jbe     Delay

        inc     bl
        jnz     NextSc

Exit:   ret                    ; end - program

cseg    ends
        end     Start
