;
;        +==============-+-==============+ +===+ +,
;        |     :::::: NiAGARA ::::::     | |   | | \
; -----==+---==:: A 256BYTE iNTRO ::==---+=+   +=+  +==-------------------------------------->
;        |     :::: BY SP.GMFLC ::::     | |   | | /
;        +==============-+-==============+ +===+ +'
;
;  ->    |: Made for Function::2007 256byte intro compo.
;
;  -->   |: Nothing special and rather crappy, but note that it's my first 256byte stuff ever.
;  --->  |: Not to mention that I'm a complete n00b in assembly.
;
;  ----> |: Have fun!
;

start:      
        org 100h                   ;liftoff!
         
        mov ax, 13h                ;jump into 320x200 @ 8bit
 
        ;mov ax, 4f02h             ;uncomment these two lines
        ;mov bx, 101h              ;if you want bigger resolution... costs +6 bytes!
         
        int 10h                    ;trigger video mode

        push 0a3fch                ;vertically center the render area
        pop es                     ;

        mov dx, 968                ;palette tampering
        xor al, al                 ;
        out dx, al                 ;write into palette
        inc dl                     ;

pal:                               
        out dx, al                 ;set palette colors
        ror ax, 8                  ;
        out dx, al                 ;
        or  al, ah                 ;
        out dx, al                 ;
        ror ax, 8                  ;
        inc al                     ;
        add ax, 2                  ;change integer amount to alter texture pattern
        jnz pal                    ;start over


main_loop:        
        mov [prm1], dx             ;
        mov di, 670*50             ;set render size
        mov si, 320*100            ;
        xor cx, cx                 ;
        mov [prm2], cl             ;boost texture coords to achieve curve effect

loop1:                   
        inc byte [prm2]            ;increase amount
        mov bx, [prm2]             ;
        sub [prm1], bx             ;increase coordinate
        mov bx, [prm1]             ;then set it back down
        shr bx, 2                  ;
        mov ax, 120                ;set motion center position
        mul bx                     ;
        mov [prm3], ax             ;
        xor dx, dx                 ;

loop2:                  
        mov bx, [prm3]             ;coord toInt
        ror bx, 8                  ;8-bit right rotation
        mov al, dl                 ;
        sub al, [coord+1]          ;increase coordinates
        xor al, bl                 ;upper tex
        mov [es:si], al            ;
        inc si                     ;upper part

        mov al, dl                 ;lower tex
        xor al, al                 ;
        sub [prm3], dx             ;

        inc dx                     ;increase first loop variable
        cmp dx, 320                ;reached limit?
        jne loop2                  ;then loop restart
        sub si, 640                ;
        inc cl                     ;increase second loop variable
        cmp cl, 100                ;reached limit?
        jne loop1                  ;then loop restart
        
keypress:        
        mov ah, 1                  ;key pressed?
        int 16h                    ;
        jnz skip                   ;then jump out of main loop
        add word [coord], 512      ;change integer value to alter motion "speed"

vsync:
        mov dx,3DAh                ;wait for vsync start
 sync1: in al,dx
        and   al,8
        jnz   sync1
 sync2: in al,dx
        and   al,8
        jz    sync2                ;vsync end
        
        jmp main_loop              ;main loop start over

skip:            
        mov ax, 3h                 ;key was pressed, back to textmode...
        int 10h                    ;
        mov ah, 9                  ;
        mov dx, greetz             ;...and print some greetings ;-)
        int 21h                    ;
        ret                        ;exit

    
        prm1    dw 32
        prm2    dw 64
        prm3    dw 128
        coord   dw 0
        greetz  db 'Greetz to cns exd flt fr frs mfx kwl sgr spb trct trsi ud & all @ function:07! ;-)', '$'
