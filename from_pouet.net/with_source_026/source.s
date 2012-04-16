;cositos by Marquete - me@marquete.com.ar
;28 bytes of cositos @ FlashParty 2005 :)
;Minimum requirements: 386 CPU or better,
;win32 operating system (since it uses fs
;and does not return to 80x25 text mode).
;Compile: nasm cositos.asm -o cositos.com

         mov al,13h                ;MCGA mode (320x200x256).

         int 10h                   ;Video interrupt request.

         les bp,[bx]               ;Sweet little trick that loads 0a000h
                                   ;(the beginning of the VGA video memory)
                                   ;into es (instead of, say, "push word
                                   ;0a000h" and then "pop es").

DRAW     mov al,[fs:046ch]         ;Read a value from 0000046ch (the system
                                   ;clock, which ticks at 18.2 Hz) and use it
                                   ;as colour for the next pixel.

         stosb                     ;Write al (colour) at [es:di]. Like
                                   ;"mov [es:di],al", only smaller. stosb
                                   ;also increases di, but that doesn't help
                                   ;nor bother here. The offset (di) is the
                                   ;linear equivalent of a pixel's
                                   ;coordinates (since video RAM is linear).

         imul di,bx,320            ;These four lines do the magic. I
         inc bx                    ;translate the pixel's coordinates into a
         imul di,bx                ;linear value like so: y * 320 + x. Now,
         add di,bx                 ;to get the coordinates: bx is like my 'i'
                                   ;index variable. x becomes i, and y
                                   ;becomes i * (i + 1).

         in al,60h                 ;Read value from port 60h (keyboard) into
                                   ;al. This serves a double purpose, since
                                   ;it also adds a nice delay during which
                                   ;the clock can tick away and give me a
                                   ;different colour next time.

         dec al                    ;See if the ESC key was pressed (BIOS scan
                                   ;code 1) by decreasing al and looking at
                                   ;the Zero Flag. So, demo or die? ;)

         jnz DRAW                  ;Not zero: demo.

         ret                       ;Zero: die.
