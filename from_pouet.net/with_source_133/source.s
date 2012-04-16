;
; code      : GOD of AnaLoG
; real name : Arkin Terli
;
; releases  : ftp.scene.org/pub/demos/groups/analog/
; e-mail    : arkint@artemis.efes.net.tr
;             analog@artemis.efes.net.tr
;
; Sabit nokta aritmetigi ile ivmeli hareket eden cisimden ba$ka bi$i degil. :)
; ama sadece 87 byte. 7 bit fixed point... :)

.model tiny

.data
 hiz            = 15                    ;hiz ( fazla abartmayin tabi )
 xs             = 160                   ;apsis
 ys             = 20                    ;ordinat
 renk           = 15                    ;renk

.386
.code
 org            100h
.startup
                push  0a000h
                pop   es

                mov   al, 13h
                int   10h

                xor   cx, cx
                mov   bl, ys            ;ordinat ayari
                shl   bx, 7

       forsin:  add   cx, hiz           ;hiz ayari
                add   bx, cx
                mov   ax, bx
                shr   ax, 7
                mov   dx, ax

                cmp   dl, 199           ;kontrol y<=199 ?
                jbe   short kucuk
                neg   cx
                mov   bl, 198
                shl   bx, 7

        kucuk:  mov   ax, dx
                shl   ax, 6
                mov   di, ax
                shl   ax, 2
                add   di, ax
                add   di, xs
                mov   al, renk
                stosb                   ;[ 0A000h : y*320+x ] = renk
                dec   di

     vretrace:  mov   dx, 3dah          ;dusey tarama kontrol
          fw1:  in    al, dx
                and   al, 8
                jne   short fw1
          fw2:  in    al, dx
                and   al, 8
                je    short fw2

                xor   ax, ax
                stosb                   ;[ 0A000h : y*320+x ] = 0

                in    al, 60h
                dec   al
                jne   short forsin      ;yaw bu bizim esc dimi?

                mov   al, 03h           ;80x25x16
                int   10h
                int   20h               ;The End. .  .

 end

