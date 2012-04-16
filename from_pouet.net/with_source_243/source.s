; "RedHot" - Terminal Frost 3--256-byte-compo entry by Neutron/LUCID
; (PC/386/VGA)

.model tiny
.code
.286
org 0100h

SCREEN_WIDTH equ 320
SCREEN_HEIGHT equ 200
MAX equ 128

RedHot:
                cld

                ; Initialize MCGA video mode (320x200x8bppi) - - - - - -
                mov   al, 13h
                int   10h

                ; Modify colors starting at index 1 - - - - - - - - - -
                mov   ax, 0c101h

                mov   dx, 3c8h                     ; PEL Address
                out   dx, al
                inc   dx                           ; PEL Data

                ; Set palette for 1..128 (RGB) - - - - - - - - - - - - -
                mov   cl, 128
OutRGB:
                mov   al, 63
                add   al, ah
                out   dx, al
                xor   al, al
                out   dx, al
                out   dx, al
IncDec:
                inc   ah
                jnz SkipSelfModify
                mov   byte ptr cs:IncDec+1, 0cch
SkipSelfModify:
                loop OutRGB

                ; Segment registers - - - - - - - - - - - - - - - - - -
                mov   cx, cs
                add   ch, 30h
                mov   ds, cx           ; SpotData
                mov   es, cx           ;
                inc   ch
                .386
                mov   fs, cx           ; BackBuffer
                .286

                ; Prepare SpotData - - - - - - - - - - - - - - - - - - -
                mov   dx, 6*256+127
                mov   cx, MAX*4
RandomSpot:
                add   bx, dx

                mov   ax, bx
                and   ax, dx
                stosw

                loop RandomSpot

WaitEscape:

                mov   ax, 1003h
                int   10h

                ; -------------------------------------------------------

                ; Calc new positions - - - - - - - - - - - - - - - - - -
                xor   si, si
                xor   di, di
                inc   ch

Movement:
                lodsw
                add   al, ah
                cmp   al, 200
                jnae SkipBounce
                neg   ah
                add   al, ah
SkipBounce:
                stosw

                loop Movement

                ;Display new positions - - - - - - - - - - - - - - - - -
                xor   si, si
Render:
                mov   cl, 6
PushCoordinate:
                lodsw
                xor   ah, ah
                push  ax
                loop PushCoordinate
                push  5
                call CasteljauBezierSubDivision

                cmp   si, MAX*4-8
                jnae Render

                ; doublebuffer - - - - - - - - - - - - - - - - - - - - -
                push  es

                push  0a000h
                pop   es

                mov   ch, 0ffh
CopyBuffer:
                .386
                mov   ax, fs:[di]
                .286
                stosw
                loop CopyBuffer

                pop   es

                ; Convolution - - - - - - - - - - - - - - - - - - - - -
                mov   bx, SCREEN_WIDTH
                dec   cx

ConvLoop:
                neg   bx
                .386
                mov   dl, fs:[di+bx]
                add   dl, fs:[di]
                .286
                shr   dx, 1

                .386
                mov   fs:[di-(Screen_Width-1)], dl
                mov   fs:[di+(Screen_Width-1)], dl
                .286

                inc   di

                loop ConvLoop

                ; -------------------------------------------------------

                mov   dl, 60h
                in    al, dx
                cmp   al, 1
                jne WaitEscape

Shutdown:
                mov   ax, 3
                int   10h

                ret

; ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

CasteljauBezierSubDivision:
                pusha
                mov   bp, sp
                mov   di, [bp+4+16]
                mov   si, [bp+2+16]
                or    si, si
                jnz SubDivide
                ; pixel
                .386
                imul  di, di, SCREEN_WIDTH
                .286
                add   di, [bp+6+16]
                .386
                mov   byte ptr fs:[di+64], 128
                .286

                jmp StepBack
SubDivide:
                mov   ax, [bp+14+16]   ; p0x
                mov   dx, [bp+12+16]   ; p0y
                push  ax               ; p0
                push  dx
                mov   cx, [bp+10+16]   ; p1x
                mov   bx, [bp+8+16]    ; p1y
                add   ax, cx
                shr   ax, 1            ; q0x
                add   dx, bx
                shr   dx, 1            ; q0y
                push  ax               ; q0
                push  dx
                add   cx, [bp+6+16]    ; +p2x
                shr   cx, 1            ; q1x
                add   bx, di           ; +p2y
                shr   bx, 1            ; q1y
                add   ax, cx           ; r0x
                shr   ax, 1
                add   dx, bx           ; r0y
                shr   dx, 1
                push  ax               ; r0
                push  dx
                dec   si               ; Depth-1
                push  si
                call CasteljauBezierSubDivision
                push  ax               ; r0
                push  dx
                push  cx               ; q1
                push  bx
                push  [bp+6+16]        ; p2
                push  di
                push  si
                call CasteljauBezierSubDivision
StepBack:
                popa
                ret (2+2 + 2+2 + 2+2 + 2)

; ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

end RedHot
