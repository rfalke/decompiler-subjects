.486
Assume cs:Code,ds:Code,es:Code

Code    Segment USE16
        Org     100h      ; Oczywiscie *.COM
Start:
        mov  al,13h       ; Wlacz tryb graficzny
        int 10h

        push 0a000h       ; bx=0 z zalozenia
        pop es            ; Zaladuj do es adres bufora VGA

        include paletao.inc  ; Ustawia jakastam palete

        include przdzied.inc ; Przygotowuje dziedzine dla funkcji

        xor si,si ;************ moze da sie wywalic

; Wejscie st=ddx st1=ddy st2=RF - licnzik i przyrosty po x i po y
Kolejna_Klatka:
        xor di,di               ; Wyzeruj di
        mov bp,200              ; cx:=200 - licznik w pione
        fld1                    ; x
Jedna_Klatka:
        fld1                    ; y
        mov dx,320              ; dx:=320 - licznik w poziomie
Jedna_Linia:

        include 256f3.inc

        xor ah,ah
        xor bh,bh

        ; bx - kolor 1 ax, kolor 2

        sub ax,bx      ;kol2-kol1
        mov ds:[u],ax
        fild ds:[u]
        fmul trsp      ; (k2-k1)*trsp
        fistp ds:[v]
        add bx,ds:[v]  ; k1+(k2-k1)*trsp

; ******************************* BLUR **************************************
        movzx ax,byte ptr ds:[di+2F0h]
        sub bx,ax
        sar bx,cl
        add bx,ax
        mov ds:[di+2F0h],bl
        mov bl,al ; powinno byc xchg bx,ax, ale trzeba zajac do 256 ;-))
        stosb
; ***************************************************************************

        dec dx
        jnz Jedna_Linia

        fstp st                 ; Oproznij szczyt stosu zdejmij _x

        fsub st,st(2)           ; y:=y-ddy

        dec bp
        jnz Jedna_Klatka        ; Loop, bo licznik mamy w cx (2 bajty)

        fstp st                 ; Oproznij szczyt stosu zdejmij _y

        fxch st(2)              ; Aktualizuj licznik
        fadd ds:[_001]
        fld st
        fadd st,st
        fcos
        fabs                    ; **************************
        fstp trsp               ; Zapamietaj przezroczystosc
        fxch st(2)

   ; **********
        mov cx,si          ; Odzyskaj cx
        inc cl
        mov si,cx          ; Zapamietaj cx
        jns OkiT
        neg cl
OkiT:
        sar cx,5
   ; **********
        in      al,60h     ; Czekaj na nacisniecie ESC
        dec     ax         ; Troche naciagane, ale dziala
        jnz Kolejna_Klatka ; Jesli nie nacisnieto ESC, licz nastepna klatke

;        mov ax,03
;        int 10h

        ret

; ***************************** ZMIENNE *************************************

        _001 dd 0.04       ; Przyrost (niestety jest niezbedny na razie)
        xd   dw 320        ; Dlugosc po x
        yd   dw 200        ; Dlugosc po y
        trsp dd ?          ; Przezroczysatosc

        u dw ?             ; Skladowe tekstury
        v dw ?

Code    Ends

End     Start