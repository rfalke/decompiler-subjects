; humble little fire thingy
; by vladimir filipovic aka han solo
; for hugi size coding christmas compo 2006
; written on 24-dec-2006

; features:
; - exits when ESC pressed
; - restores co80 text mode
; - syncs on vertical retrace
; - has more than one palette option, have a look at the comments

; 63 bytes; optionally 61, see notes at the end of file


a segment
assume cs:a


org 100h
start:

.286

push 0a000h
pop es
dec sp
dec sp
pop ds

mov al,13h
int 10h

mov dx,3dah     ; will use later as port number


main_loop:

    mov si,319
    xor di,di

    mov ch, 0fch


    calc_loop:

        lodsw
        dec si
        add ax,[si]
        add ah,al       ; this backward add/shift is just to make sure AH=0
        shr ax,10       ; ... which isn't really needed, but see notes below
        stosb
    loop calc_loop


    mov ch,2

    random_loop:

        mov al, byte ptr [bp]
        inc bp


      ;;;;;;;;;;;;;; b&w palette
      ;
        and al,0fh
        or al,10h


      ;;;;;;;;;;;;;; magenta-blue palette
      ;
      ; and al,0fh
      ; or al,20h


      ;;;;;;;;;;;;;; pretty rainbow palette
      ;
      ; db 0d4h, 18h        ; non-standard AAM, to make sure 0 < AL < 17h
      ; add al,20h


        stosb

    loop random_loop


    wait_retrace:

        in al,dx
        test al,8

    jz wait_retrace


    in al,60h
    cmp al,1                    ; esc pressed?     **** 1 ****
    jne main_loop


mov ax,3                        ; see notes below. **** 2 ****
int 10h

retn

a ends

end start


; the add/shift in the calc_loop should really be ADD AL,AH; SHR AH,2
; but there's a reason to want to do it this way:

; _if_ you want to use either of the first two palettes (b&w or mgnt/blue)
; then the fact that AH=0 can be used
; to save up two more bytes, by changing line **** 1 **** to DEC AX
; and line **** 2 **** to mov MOV AL,3

; but the AAM instruction used for the pretty rainbow palette (tm)
; messes up AH, so just in case, i opted for the longer way.

; now, honestly, even if you do use the pretty palette and still make
; those two changes, the demo still works. you just sometimes need to
; hold ESC for, like, 0.1 seconds instead of releasing it immediately.
; but since this is a different kind of a size-coding compo, i thought
; the two bytes were an acceptable price for "correct" program behaviour.

; i had to give up on two other little optimizations because they very
; mysteriously crashed my machine. back in the days of dos they probably
; would have worked :(
